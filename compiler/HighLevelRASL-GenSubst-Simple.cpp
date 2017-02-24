// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_ADT_Brackets = refalrts::ident_from_static("ADT-Brackets");
const refalrts::RefalIdentifier ident_AlgLeft = refalrts::ident_from_static("AlgLeft");
const refalrts::RefalIdentifier ident_AlgRight = refalrts::ident_from_static("AlgRight");
const refalrts::RefalIdentifier ident_AlgTerm = refalrts::ident_from_static("AlgTerm");
const refalrts::RefalIdentifier ident_Brackets = refalrts::ident_from_static("Brackets");
const refalrts::RefalIdentifier ident_CmdADT = refalrts::ident_from_static("CmdADT");
const refalrts::RefalIdentifier ident_CmdBrackets = refalrts::ident_from_static("CmdBrackets");
const refalrts::RefalIdentifier ident_CmdChar = refalrts::ident_from_static("CmdChar");
const refalrts::RefalIdentifier ident_CmdComment = refalrts::ident_from_static("CmdComment");
const refalrts::RefalIdentifier ident_CmdEmpty = refalrts::ident_from_static("CmdEmpty");
const refalrts::RefalIdentifier ident_CmdIdent = refalrts::ident_from_static("CmdIdent");
const refalrts::RefalIdentifier ident_CmdInitB0 = refalrts::ident_from_static("CmdInitB0");
const refalrts::RefalIdentifier ident_CmdName = refalrts::ident_from_static("CmdName");
const refalrts::RefalIdentifier ident_CmdNumber = refalrts::ident_from_static("CmdNumber");
const refalrts::RefalIdentifier ident_CmdOpenedE = refalrts::ident_from_static("CmdOpenedE");
const refalrts::RefalIdentifier ident_CmdRepeated = refalrts::ident_from_static("CmdRepeated");
const refalrts::RefalIdentifier ident_CmdVar = refalrts::ident_from_static("CmdVar");
const refalrts::RefalIdentifier ident_E = refalrts::ident_from_static("E");
const refalrts::RefalIdentifier ident_Junk = refalrts::ident_from_static("Junk");
const refalrts::RefalIdentifier ident_Offset = refalrts::ident_from_static("Offset");
const refalrts::RefalIdentifier ident_S = refalrts::ident_from_static("S");
const refalrts::RefalIdentifier ident_T = refalrts::ident_from_static("T");
const refalrts::RefalIdentifier ident_TkChar = refalrts::ident_from_static("TkChar");
const refalrts::RefalIdentifier ident_TkCloseADT = refalrts::ident_from_static("TkCloseADT");
const refalrts::RefalIdentifier ident_TkCloseBracket = refalrts::ident_from_static("TkCloseBracket");
const refalrts::RefalIdentifier ident_TkIdentifier = refalrts::ident_from_static("TkIdentifier");
const refalrts::RefalIdentifier ident_TkName = refalrts::ident_from_static("TkName");
const refalrts::RefalIdentifier ident_TkNumber = refalrts::ident_from_static("TkNumber");
const refalrts::RefalIdentifier ident_TkOpenADT = refalrts::ident_from_static("TkOpenADT");
const refalrts::RefalIdentifier ident_TkOpenBracket = refalrts::ident_from_static("TkOpenBracket");
const refalrts::RefalIdentifier ident_TkVariable = refalrts::ident_from_static("TkVariable");
static refalrts::ExternalReference ref_Inc2("Inc2", 0U, 0U);
static refalrts::ExternalReference ref_IncVarOffset("IncVarOffset", 0U, 0U);
static refalrts::ExternalReference ref_PrintVar("PrintVar", 0U, 0U);
static refalrts::ExternalReference ref_FakeOffset("FakeOffset", 0U, 0U);
static refalrts::ExternalReference ref_TextFromExpr("TextFromExpr", 0U, 0U);
static refalrts::ExternalReference ref_Inc("Inc", 0U, 0U);
static refalrts::ExternalReference ref_GenInitSubst_Simple("GenInitSubst-Simple", 0U, 0U);
static refalrts::ExternalReference ref_GenSubst_Simple("GenSubst-Simple", 0U, 0U);
static refalrts::ExternalReference ref_DoGenSubst("DoGenSubst", 116784527U, 3104022280U);

static refalrts::FnResult func_GenInitSubst_Simple(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & GenInitSubst-Simple/4 e.FuncName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FuncName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.FuncName#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 0/0 HalfReuse: 2/4 } (/5 # Junk/6 )/7 (/8 # Junk/9 )/10 (/11 # CmdInitB0/12 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], ident_Junk ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], ident_Junk ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], ident_CmdInitB0 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_number( context[0], 0UL );
  refalrts::reinit_number( context[4], 2UL );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[8], context[10] );
  refalrts::link_brackets( context[5], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenInitSubst_Simple("GenInitSubst-Simple", 0U, 0U, func_GenInitSubst_Simple);

static refalrts::FnResult func_GenSubst_Simple(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & GenSubst-Simple/4 s.ContextTop#1/9 e.Substitutes#1/2 (/7 e.PrefixCommands#1/5 )/8 >/1
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
  // closed e.PrefixCommands#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitutes#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 AsIs: s.ContextTop#1/9 AsIs: e.Substitutes#1/2 AsIs: (/7 } )/10 (/11 Tile{ AsIs: e.PrefixCommands#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoGenSubst.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenSubst_Simple("GenSubst-Simple", 0U, 0U, func_GenSubst_Simple);

static refalrts::FnResult func_DoGenSubst(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 69 elems
  refalrts::Iter context[69];
  refalrts::zeros( context, 69 );
  //FAST GEN: s.$ e.$ ( e.$ ) ( e.$ )
  //GLOBAL GEN: s.$ e.$ ( e.$ ) ( e.$ )
  // </0 & DoGenSubst/4 s.idx#0/13 e.idxV#0/2 (/11 e.idxVVB#0/9 )/12 (/7 e.idxVVTB#0/5 )/8 >/1
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
  // closed e.idxVVB#0 as range 9
  // closed e.idxVVTB#0 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # TkChar/35 s.Char#1/37 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_T, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Junk, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkChar, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Junk2#1 as range 26
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[37], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Char#1/37 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: e.Junk1#1/16 } Tile{ HalfReuse: (/34 HalfReuse: # TkChar/24 HalfReuse: s.Char1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdChar/1 } Tile{ Reuse: # AlgTerm/25 AsIs: s.Num#1/36 HalfReuse: s.Char1 #37/33 HalfReuse: )/35 } Tile{ AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[34] );
      refalrts::reinit_ident( context[24], ident_TkChar );
      refalrts::reinit_svar( context[28], context[37] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdChar );
      refalrts::update_ident( context[25], ident_AlgTerm );
      refalrts::reinit_svar( context[33], context[37] );
      refalrts::reinit_close_bracket( context[35] );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[35] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[34], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[23] );
      res = refalrts::splice_evar( res, context[25], context[35] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::splice_to_freelist_open( context[20], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # TkName/35 e.Name#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_T, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Junk, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkName, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Name#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} # T/25 s.Num#1/36 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkName/23 } e.Name#1/31/37 Tile{ HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } Tile{ HalfReuse: # AlgTerm/33 HalfReuse: s.Num1 #36/35 AsIs: e.Name#1/31 AsIs: )/34 AsIs: )/24 HalfReuse: >/28 } Tile{ ]] }
      if (! refalrts::copy_evar(context[37], context[38], context[31], context[32]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkName );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdName );
      refalrts::reinit_ident( context[33], ident_AlgTerm );
      refalrts::reinit_svar( context[35], context[36] );
      refalrts::reinit_close_call( context[28] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[24] );
      refalrts::link_brackets( context[8], context[34] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[19], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[33], context[28] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::splice_to_freelist_open( context[23], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # TkIdentifier/35 e.Ident#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_T, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Junk, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkIdentifier, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Ident#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} # T/25 s.Num#1/36 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkIdentifier/23 } e.Ident#1/31/37 Tile{ HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ HalfReuse: # AlgTerm/33 HalfReuse: s.Num1 #36/35 AsIs: e.Ident#1/31 AsIs: )/34 AsIs: )/24 HalfReuse: >/28 } Tile{ ]] }
      if (! refalrts::copy_evar(context[37], context[38], context[31], context[32]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkIdentifier );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdIdent );
      refalrts::reinit_ident( context[33], ident_AlgTerm );
      refalrts::reinit_svar( context[35], context[36] );
      refalrts::reinit_close_call( context[28] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[24] );
      refalrts::link_brackets( context[8], context[34] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[19], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[33], context[28] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::splice_to_freelist_open( context[23], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # TkNumber/35 s.Value#1/37 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_T, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Junk, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkNumber, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Junk2#1 as range 26
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[37], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Value#1/37 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: e.Junk1#1/16 } Tile{ HalfReuse: (/34 HalfReuse: # TkNumber/24 HalfReuse: s.Value1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } Tile{ Reuse: # AlgTerm/25 AsIs: s.Num#1/36 HalfReuse: s.Value1 #37/33 HalfReuse: )/35 } Tile{ AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[34] );
      refalrts::reinit_ident( context[24], ident_TkNumber );
      refalrts::reinit_svar( context[28], context[37] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdNumber );
      refalrts::update_ident( context[25], ident_AlgTerm );
      refalrts::reinit_svar( context[33], context[37] );
      refalrts::reinit_close_bracket( context[35] );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[35] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[34], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[23] );
      res = refalrts::splice_evar( res, context[25], context[35] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::splice_to_freelist_open( context[20], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # Brackets/35 e.SubRange#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_T, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Junk, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_Brackets, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.SubRange#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </37 & Inc2/38 Tile{ AsIs: s.ContextOffset#1/13 } >/39 Tile{ AsIs: e.Substs-B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkOpenBracket/23 HalfReuse: )/25 } )/40 Tile{ AsIs: (/33 Reuse: # E/35 } s.ContextOffset#1/13/41 Tile{ AsIs: e.SubRange#1/31 } )/42 (/43 Tile{ HalfReuse: # Junk/34 HalfReuse: (/24 HalfReuse: # TkCloseBracket/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdBrackets/1 } # AlgTerm/44 Tile{ AsIs: s.Num#1/36 } s.ContextOffset#1/13/45 )/46 )/47 >/48 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[38], ref_Inc2.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[41], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[44], ident_AlgTerm ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[45], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[48] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkOpenBracket );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::update_ident( context[35], ident_E );
      refalrts::reinit_ident( context[34], ident_Junk );
      refalrts::reinit_open_bracket( context[24] );
      refalrts::reinit_ident( context[28], ident_TkCloseBracket );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdBrackets );
      refalrts::push_stack( context[48] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[47] );
      refalrts::link_brackets( context[8], context[46] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[43], context[29] );
      refalrts::link_brackets( context[24], context[30] );
      refalrts::link_brackets( context[33], context[42] );
      refalrts::link_brackets( context[18], context[40] );
      refalrts::link_brackets( context[19], context[25] );
      refalrts::push_stack( context[39] );
      refalrts::push_stack( context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[45], context[48] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[33], context[35] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/40 (/33 # ADT-Brackets/35 (/38 e.Name#1/36 )/39 e.SubRange#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_T, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Junk, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_ADT_Brackets, context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_left( context[36], context[37], context[31], context[32] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      // closed e.Junk1#1 as range 16
      // closed e.Name#1 as range 36
      // closed e.SubRange#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[40], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num#1/40 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </41 & Inc2/42 Tile{ AsIs: s.ContextOffset#1/13 } >/43 Tile{ AsIs: e.Substs-B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkOpenADT/23 HalfReuse: )/25 } (/44 # TkName/45 e.Name#1/36/46 )/48 )/49 (/50 # E/51 s.ContextOffset#1/13/52 Tile{ AsIs: e.SubRange#1/31 } )/53 (/54 Tile{ HalfReuse: # Junk/34 HalfReuse: (/24 HalfReuse: # TkCloseADT/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdADT/1 } Tile{ HalfReuse: # AlgTerm/33 HalfReuse: s.Num1 #40/35 HalfReuse: s.ContextOffset1 #13/38 AsIs: e.Name#1/36 AsIs: )/39 } )/55 >/56 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[42], ref_Inc2.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[45], ident_TkName ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[46], context[47], context[36], context[37]))
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
      if( ! refalrts::alloc_close_bracket( context[55] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[56] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkOpenADT );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_ident( context[34], ident_Junk );
      refalrts::reinit_open_bracket( context[24] );
      refalrts::reinit_ident( context[28], ident_TkCloseADT );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdADT );
      refalrts::reinit_ident( context[33], ident_AlgTerm );
      refalrts::reinit_svar( context[35], context[40] );
      refalrts::reinit_svar( context[38], context[13] );
      refalrts::push_stack( context[56] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[55] );
      refalrts::link_brackets( context[8], context[39] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[54], context[29] );
      refalrts::link_brackets( context[24], context[30] );
      refalrts::link_brackets( context[50], context[53] );
      refalrts::link_brackets( context[18], context[49] );
      refalrts::link_brackets( context[44], context[48] );
      refalrts::link_brackets( context[19], context[25] );
      refalrts::push_stack( context[43] );
      refalrts::push_stack( context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[55], context[56] );
      res = refalrts::splice_evar( res, context[33], context[39] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[53], context[54] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[44], context[52] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/36 (/33 # TkVariable/35 s.Mode#1/37 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs-E#1/2 (/11 e.Vars-B#1/38 (/42 s.Mode#1/44 (/47 e.Index#1/49 )/48 e.Offsets#1/40 s.SampleOffset#1/51 )/43 e.Vars-E#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_T, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Junk, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkVariable, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Junk2#1 as range 26
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[37], context[31], context[32] ) )
        continue;
      // closed e.Index#1 as range 31
      context[65] = context[9];
      context[66] = context[10];
      context[38] = 0;
      context[39] = 0;
      refalrts::start_e_loop();
      do {
        context[67] = context[65];
        context[68] = context[66];
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[67], context[68] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        if( ! refalrts::repeated_stvar_left( context[44], context[37], context[40], context[41] ) )
          continue;
        context[45] = 0;
        context[46] = 0;
        context[47] = refalrts::brackets_left( context[45], context[46], context[40], context[41] );
        if( ! context[47] )
          continue;
        refalrts::bracket_pointers(context[47], context[48]);
        if( ! refalrts::repeated_evar_left( context[49], context[50], context[31], context[32], context[45], context[46] ) )
          continue;
        if( ! refalrts::empty_seq( context[45], context[46] ) )
          continue;
        // closed e.Vars-E#1 as range 67(9)
        if( ! refalrts::svar_right( context[51], context[40], context[41] ) )
          continue;
        // closed e.Offsets#1 as range 40

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: s.Mode1 #44/25 } Tile{ AsIs: e.Index#1/31 } Tile{ HalfReuse: s.Num1 #36/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars-B#1/38 AsIs: (/42 AsIs: s.Mode#1/44 AsIs: (/47 AsIs: e.Index#1/49 AsIs: )/48 AsIs: e.Offsets#1/40 AsIs: s.SampleOffset#1/51 HalfReuse: s.Num1 #36/43 } )/52 Tile{ AsIs: e.Vars-E#1/67(9) } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } Tile{ HalfReuse: # AlgTerm/33 HalfReuse: s.Num1 #36/35 AsIs: s.Mode#1/37 } Tile{ AsIs: s.Num#1/36 } s.SampleOffset#1/51/53 Tile{ AsIs: )/34 AsIs: )/24 } >/54 Tile{ ]] }
        if( ! refalrts::alloc_close_bracket( context[52] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[53], context[51]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[54] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[19] );
        refalrts::reinit_ident( context[23], ident_TkVariable );
        refalrts::reinit_svar( context[25], context[44] );
        refalrts::reinit_svar( context[28], context[36] );
        refalrts::reinit_close_bracket( context[30] );
        refalrts::reinit_svar( context[43], context[36] );
        refalrts::reinit_open_bracket( context[8] );
        refalrts::reinit_ident( context[1], ident_CmdRepeated );
        refalrts::reinit_ident( context[33], ident_AlgTerm );
        refalrts::reinit_svar( context[35], context[36] );
        refalrts::push_stack( context[54] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[24] );
        refalrts::link_brackets( context[8], context[34] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[42], context[52] );
        refalrts::link_brackets( context[47], context[48] );
        refalrts::link_brackets( context[18], context[29] );
        refalrts::link_brackets( context[19], context[30] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[54], context[54] );
        res = refalrts::splice_evar( res, context[34], context[24] );
        res = refalrts::splice_evar( res, context[53], context[53] );
        res = refalrts::splice_evar( res, context[36], context[36] );
        res = refalrts::splice_evar( res, context[33], context[37] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[67], context[68] );
        res = refalrts::splice_evar( res, context[52], context[52] );
        res = refalrts::splice_evar( res, context[28], context[43] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[38], context[39], context[65], context[66] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/37 (/33 # TkVariable/35 't'/36 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_T, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Junk, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkVariable, context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = refalrts::char_left( 't', context[31], context[32] );
      if( ! context[36] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Index#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[37], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} s.Num#1/37 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 't'/25 } e.Index#1/31/38 Tile{ HalfReuse: s.Num1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 't'/7 } Tile{ HalfReuse: (/36 AsIs: e.Index#1/31 AsIs: )/34 HalfReuse: s.Num1 #37/24 } Tile{ HalfReuse: )/35 } )/40 Tile{ AsIs: (/33 } Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if (! refalrts::copy_evar(context[38], context[39], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkVariable );
      refalrts::reinit_char( context[25], 't' );
      refalrts::reinit_svar( context[28], context[37] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 't' );
      refalrts::reinit_open_bracket( context[36] );
      refalrts::reinit_svar( context[24], context[37] );
      refalrts::reinit_close_bracket( context[35] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[33], context[8] );
      refalrts::link_brackets( context[11], context[40] );
      refalrts::link_brackets( context[12], context[35] );
      refalrts::link_brackets( context[36], context[34] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[19], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[36], context[24] );
      res = refalrts::splice_evar( res, context[28], context[7] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::splice_to_freelist_open( context[25], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # T/25 s.Num#1/37 (/33 # TkVariable/35 's'/36 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_T, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Junk, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkVariable, context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = refalrts::char_left( 's', context[31], context[32] );
      if( ! context[36] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Index#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[37], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 's'/25 } e.Index#1/31/38 Tile{ HalfReuse: s.Num1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } Tile{ HalfReuse: (/36 AsIs: e.Index#1/31 AsIs: )/34 HalfReuse: s.Num1 #37/24 } )/40 )/41 (/42 Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: (/33 Reuse: # CmdVar/35 } # AlgTerm/43 Tile{ AsIs: s.Num#1/37 } 's'/44 s.ContextOffset#1/13/45 )/46 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if (! refalrts::copy_evar(context[38], context[39], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[43], ident_AlgTerm ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[44], 's' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[45], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkVariable );
      refalrts::reinit_char( context[25], 's' );
      refalrts::reinit_svar( context[28], context[37] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 's' );
      refalrts::reinit_open_bracket( context[36] );
      refalrts::reinit_svar( context[24], context[37] );
      refalrts::update_ident( context[35], ident_CmdVar );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[42], context[8] );
      refalrts::link_brackets( context[33], context[46] );
      refalrts::link_brackets( context[11], context[41] );
      refalrts::link_brackets( context[12], context[40] );
      refalrts::link_brackets( context[36], context[34] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[19], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[44], context[46] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[33], context[35] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[40], context[42] );
      res = refalrts::splice_evar( res, context[36], context[24] );
      res = refalrts::splice_evar( res, context[28], context[7] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/36 (/33 # TkChar/35 s.Char#1/37 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_S, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Junk, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkChar, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Junk2#1 as range 26
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[37], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Char#1/37 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: e.Junk1#1/16 } Tile{ HalfReuse: (/34 HalfReuse: # TkChar/24 HalfReuse: s.Char1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdChar/1 } Tile{ Reuse: # AlgTerm/25 AsIs: s.Num#1/36 HalfReuse: s.Char1 #37/33 HalfReuse: )/35 } Tile{ AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[34] );
      refalrts::reinit_ident( context[24], ident_TkChar );
      refalrts::reinit_svar( context[28], context[37] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdChar );
      refalrts::update_ident( context[25], ident_AlgTerm );
      refalrts::reinit_svar( context[33], context[37] );
      refalrts::reinit_close_bracket( context[35] );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[35] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[34], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[23] );
      res = refalrts::splice_evar( res, context[25], context[35] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::splice_to_freelist_open( context[20], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/36 (/33 # TkName/35 e.Name#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_S, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Junk, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkName, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Name#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} # S/25 s.Num#1/36 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkName/23 } e.Name#1/31/37 Tile{ HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } Tile{ HalfReuse: # AlgTerm/33 HalfReuse: s.Num1 #36/35 AsIs: e.Name#1/31 AsIs: )/34 AsIs: )/24 HalfReuse: >/28 } Tile{ ]] }
      if (! refalrts::copy_evar(context[37], context[38], context[31], context[32]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkName );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdName );
      refalrts::reinit_ident( context[33], ident_AlgTerm );
      refalrts::reinit_svar( context[35], context[36] );
      refalrts::reinit_close_call( context[28] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[24] );
      refalrts::link_brackets( context[8], context[34] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[19], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[33], context[28] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::splice_to_freelist_open( context[23], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/36 (/33 # TkIdentifier/35 e.Ident#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_S, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Junk, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkIdentifier, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Ident#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} # S/25 s.Num#1/36 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkIdentifier/23 } e.Ident#1/31/37 Tile{ HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ HalfReuse: # AlgTerm/33 HalfReuse: s.Num1 #36/35 AsIs: e.Ident#1/31 AsIs: )/34 AsIs: )/24 HalfReuse: >/28 } Tile{ ]] }
      if (! refalrts::copy_evar(context[37], context[38], context[31], context[32]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkIdentifier );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdIdent );
      refalrts::reinit_ident( context[33], ident_AlgTerm );
      refalrts::reinit_svar( context[35], context[36] );
      refalrts::reinit_close_call( context[28] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[24] );
      refalrts::link_brackets( context[8], context[34] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[19], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[33], context[28] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::splice_to_freelist_open( context[23], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/36 (/33 # TkNumber/35 s.Value#1/37 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_S, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Junk, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkNumber, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Junk2#1 as range 26
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[37], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Value#1/37 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: e.Junk1#1/16 } Tile{ HalfReuse: (/34 HalfReuse: # TkNumber/24 HalfReuse: s.Value1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } Tile{ Reuse: # AlgTerm/25 AsIs: s.Num#1/36 HalfReuse: s.Value1 #37/33 HalfReuse: )/35 } Tile{ AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[34] );
      refalrts::reinit_ident( context[24], ident_TkNumber );
      refalrts::reinit_svar( context[28], context[37] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdNumber );
      refalrts::update_ident( context[25], ident_AlgTerm );
      refalrts::reinit_svar( context[33], context[37] );
      refalrts::reinit_close_bracket( context[35] );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[35] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[34], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[23] );
      res = refalrts::splice_evar( res, context[25], context[35] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::splice_to_freelist_open( context[20], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/36 (/33 # TkVariable/35 s.Mode#1/37 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs-E#1/2 (/11 e.Vars-B#1/38 (/42 s.Mode#1/44 (/47 e.Index#1/49 )/48 e.Offsets#1/40 s.SampleOffset#1/51 )/43 e.Vars-E#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_S, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Junk, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkVariable, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Junk2#1 as range 26
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[36], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[37], context[31], context[32] ) )
        continue;
      // closed e.Index#1 as range 31
      context[65] = context[9];
      context[66] = context[10];
      context[38] = 0;
      context[39] = 0;
      refalrts::start_e_loop();
      do {
        context[67] = context[65];
        context[68] = context[66];
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[67], context[68] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        if( ! refalrts::repeated_stvar_left( context[44], context[37], context[40], context[41] ) )
          continue;
        context[45] = 0;
        context[46] = 0;
        context[47] = refalrts::brackets_left( context[45], context[46], context[40], context[41] );
        if( ! context[47] )
          continue;
        refalrts::bracket_pointers(context[47], context[48]);
        if( ! refalrts::repeated_evar_left( context[49], context[50], context[31], context[32], context[45], context[46] ) )
          continue;
        if( ! refalrts::empty_seq( context[45], context[46] ) )
          continue;
        // closed e.Vars-E#1 as range 67(9)
        if( ! refalrts::svar_right( context[51], context[40], context[41] ) )
          continue;
        // closed e.Offsets#1 as range 40

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: s.Mode1 #44/25 } Tile{ AsIs: e.Index#1/31 } Tile{ HalfReuse: s.Num1 #36/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars-B#1/38 AsIs: (/42 AsIs: s.Mode#1/44 AsIs: (/47 AsIs: e.Index#1/49 AsIs: )/48 AsIs: e.Offsets#1/40 AsIs: s.SampleOffset#1/51 HalfReuse: s.Num1 #36/43 } )/52 Tile{ AsIs: e.Vars-E#1/67(9) } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } Tile{ HalfReuse: # AlgTerm/33 HalfReuse: s.Num1 #36/35 AsIs: s.Mode#1/37 } Tile{ AsIs: s.Num#1/36 } s.SampleOffset#1/51/53 Tile{ AsIs: )/34 AsIs: )/24 } >/54 Tile{ ]] }
        if( ! refalrts::alloc_close_bracket( context[52] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[53], context[51]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[54] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[19] );
        refalrts::reinit_ident( context[23], ident_TkVariable );
        refalrts::reinit_svar( context[25], context[44] );
        refalrts::reinit_svar( context[28], context[36] );
        refalrts::reinit_close_bracket( context[30] );
        refalrts::reinit_svar( context[43], context[36] );
        refalrts::reinit_open_bracket( context[8] );
        refalrts::reinit_ident( context[1], ident_CmdRepeated );
        refalrts::reinit_ident( context[33], ident_AlgTerm );
        refalrts::reinit_svar( context[35], context[36] );
        refalrts::push_stack( context[54] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[24] );
        refalrts::link_brackets( context[8], context[34] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[42], context[52] );
        refalrts::link_brackets( context[47], context[48] );
        refalrts::link_brackets( context[18], context[29] );
        refalrts::link_brackets( context[19], context[30] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[54], context[54] );
        res = refalrts::splice_evar( res, context[34], context[24] );
        res = refalrts::splice_evar( res, context[53], context[53] );
        res = refalrts::splice_evar( res, context[36], context[36] );
        res = refalrts::splice_evar( res, context[33], context[37] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[67], context[68] );
        res = refalrts::splice_evar( res, context[52], context[52] );
        res = refalrts::splice_evar( res, context[28], context[43] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[38], context[39], context[65], context[66] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # S/25 s.Num#1/37 (/33 # TkVariable/35 's'/36 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_S, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Junk, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkVariable, context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = refalrts::char_left( 's', context[31], context[32] );
      if( ! context[36] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Index#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[37], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} s.Num#1/37 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 's'/25 } e.Index#1/31/38 Tile{ HalfReuse: s.Num1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } Tile{ HalfReuse: (/36 AsIs: e.Index#1/31 AsIs: )/34 HalfReuse: s.Num1 #37/24 } Tile{ HalfReuse: )/35 } )/40 Tile{ AsIs: (/33 } Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if (! refalrts::copy_evar(context[38], context[39], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkVariable );
      refalrts::reinit_char( context[25], 's' );
      refalrts::reinit_svar( context[28], context[37] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 's' );
      refalrts::reinit_open_bracket( context[36] );
      refalrts::reinit_svar( context[24], context[37] );
      refalrts::reinit_close_bracket( context[35] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[33], context[8] );
      refalrts::link_brackets( context[11], context[40] );
      refalrts::link_brackets( context[12], context[35] );
      refalrts::link_brackets( context[36], context[34] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[19], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[36], context[24] );
      res = refalrts::splice_evar( res, context[28], context[7] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::splice_to_freelist_open( context[25], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkChar/31 s.Char#1/32 )/30 e.Range#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_E, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  ident_TkChar, context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.Range#1 as range 21
      if( ! refalrts::svar_left( context[32], context[27], context[28] ) )
        continue;
      if( ! refalrts::empty_seq( context[27], context[28] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkChar/23 HalfReuse: s.Char1 #32/25 } )/33 )/34 Tile{ AsIs: (/29 Reuse: # E/31 } Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdChar/1 } # AlgLeft/35 Tile{ AsIs: s.Num#1/26 } Tile{ AsIs: s.Char#1/32 } )/36 )/37 >/38 Tile{ ]] }
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[35], ident_AlgLeft ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkChar );
      refalrts::reinit_svar( context[25], context[32] );
      refalrts::update_ident( context[31], ident_E );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdChar );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[37] );
      refalrts::link_brackets( context[8], context[36] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[29], context[24] );
      refalrts::link_brackets( context[18], context[34] );
      refalrts::link_brackets( context[19], context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[29], context[31] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkNumber/31 s.Number#1/32 )/30 e.Range#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_E, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  ident_TkNumber, context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.Range#1 as range 21
      if( ! refalrts::svar_left( context[32], context[27], context[28] ) )
        continue;
      if( ! refalrts::empty_seq( context[27], context[28] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkNumber/23 HalfReuse: s.Number1 #32/25 } )/33 )/34 Tile{ AsIs: (/29 Reuse: # E/31 } Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } # AlgLeft/35 Tile{ AsIs: s.Num#1/26 } Tile{ AsIs: s.Number#1/32 } )/36 )/37 >/38 Tile{ ]] }
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[35], ident_AlgLeft ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkNumber );
      refalrts::reinit_svar( context[25], context[32] );
      refalrts::update_ident( context[31], ident_E );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdNumber );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[37] );
      refalrts::link_brackets( context[8], context[36] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[29], context[24] );
      refalrts::link_brackets( context[18], context[34] );
      refalrts::link_brackets( context[19], context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[29], context[31] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkName/31 e.Name#1/27 )/30 e.Range#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_E, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  ident_TkName, context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.Name#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} e.Junk#1/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: (/29 AsIs: # TkName/31 } Tile{ AsIs: e.Name#1/27 } )/32 Tile{ AsIs: )/19 AsIs: (/23 AsIs: # E/25 } Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } # AlgLeft/33 Tile{ AsIs: s.Num#1/26 } e.Name#1/27/34 )/36 )/37 >/38 Tile{ ]] }
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[33], ident_AlgLeft ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[34], context[35], context[27], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdName );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[37] );
      refalrts::link_brackets( context[8], context[36] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::link_brackets( context[29], context[32] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[19], context[25] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[29], context[31] );
      refalrts::splice_to_freelist_open( context[20], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkIdentifier/31 e.Name#1/27 )/30 e.Range#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_E, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  ident_TkIdentifier, context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.Name#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkIdentifier/23 } e.Name#1/27/32 )/34 )/35 Tile{ AsIs: (/29 Reuse: # E/31 } Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ Reuse: # AlgLeft/25 AsIs: s.Num#1/26 } Tile{ AsIs: e.Name#1/27 } )/36 )/37 >/38 Tile{ ]] }
      if (! refalrts::copy_evar(context[32], context[33], context[27], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkIdentifier );
      refalrts::update_ident( context[31], ident_E );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdIdent );
      refalrts::update_ident( context[25], ident_AlgLeft );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[37] );
      refalrts::link_brackets( context[8], context[36] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[29], context[24] );
      refalrts::link_brackets( context[18], context[35] );
      refalrts::link_brackets( context[19], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[29], context[31] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # TkChar/30 s.Char#1/32 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_E, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_Junk, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_TkChar, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Junk#1 as range 21
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16
      if( ! refalrts::svar_left( context[32], context[26], context[27] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/33 Tile{ HalfReuse: (/29 HalfReuse: # TkChar/19 HalfReuse: s.Char1 #32/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdChar/1 } # AlgRight/34 s.Num#1/31/35 Tile{ AsIs: s.Char#1/32 } )/36 )/37 >/38 Tile{ ]] }
      if( ! refalrts::alloc_ident( context[33], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], ident_AlgRight ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[35], context[31]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_open_bracket( context[29] );
      refalrts::reinit_ident( context[19], ident_TkChar );
      refalrts::reinit_svar( context[23], context[32] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdChar );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[37] );
      refalrts::link_brackets( context[8], context[36] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[29], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[29], context[1] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # TkNumber/30 s.Number#1/32 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_E, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_Junk, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_TkNumber, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Junk#1 as range 21
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16
      if( ! refalrts::svar_left( context[32], context[26], context[27] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/33 Tile{ HalfReuse: (/29 HalfReuse: # TkNumber/19 HalfReuse: s.Number1 #32/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } # AlgRight/34 s.Num#1/31/35 Tile{ AsIs: s.Number#1/32 } )/36 )/37 >/38 Tile{ ]] }
      if( ! refalrts::alloc_ident( context[33], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], ident_AlgRight ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[35], context[31]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_open_bracket( context[29] );
      refalrts::reinit_ident( context[19], ident_TkNumber );
      refalrts::reinit_svar( context[23], context[32] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdNumber );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[37] );
      refalrts::link_brackets( context[8], context[36] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[29], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[29], context[1] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # TkName/30 e.Name#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_E, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_Junk, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_TkName, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Name#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/32 (/33 # TkName/34 Tile{ AsIs: e.Name#1/26 } Tile{ HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdName/1 } # AlgRight/35 s.Num#1/31/36 e.Name#1/26/37 Tile{ AsIs: )/29 AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
      if( ! refalrts::alloc_ident( context[32], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], ident_TkName ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[35], ident_AlgRight ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[31]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[37], context[38], context[26], context[27]))
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdName );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[29] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[33], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[29], context[23] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[25], context[1] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[32], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # TkIdentifier/30 e.Name#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_E, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_Junk, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_TkIdentifier, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Name#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/32 (/33 # TkIdentifier/34 Tile{ AsIs: e.Name#1/26 } Tile{ HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } # AlgRight/35 s.Num#1/31/36 e.Name#1/26/37 Tile{ AsIs: )/29 AsIs: )/19 HalfReuse: >/23 } Tile{ ]] }
      if( ! refalrts::alloc_ident( context[32], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], ident_TkIdentifier ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[35], ident_AlgRight ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[31]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[37], context[38], context[26], context[27]))
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdIdent );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[29] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[33], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[29], context[23] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[25], context[1] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[32], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # Brackets/31 e.SubRange#1/27 )/30 e.Range#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_E, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  ident_Brackets, context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.SubRange#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </32 & Inc2/33 Tile{ AsIs: s.ContextOffset#1/13 } >/34 Tile{ AsIs: e.Substs-B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkOpenBracket/23 HalfReuse: )/25 } )/35 Tile{ AsIs: (/29 Reuse: # E/31 } s.ContextOffset#1/13/36 Tile{ AsIs: e.SubRange#1/27 } )/37 (/38 # Junk/39 (/40 # TkCloseBracket/41 )/42 )/43 (/44 # E/45 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdBrackets/1 } # AlgLeft/46 Tile{ AsIs: s.Num#1/26 } s.ContextOffset#1/13/47 )/48 )/49 >/50 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[33], ref_Inc2.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[39], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[41], ident_TkCloseBracket ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[45], ident_E ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], ident_AlgLeft ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[47], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[50] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkOpenBracket );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::update_ident( context[31], ident_E );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdBrackets );
      refalrts::push_stack( context[50] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[49] );
      refalrts::link_brackets( context[8], context[48] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[44], context[24] );
      refalrts::link_brackets( context[38], context[43] );
      refalrts::link_brackets( context[40], context[42] );
      refalrts::link_brackets( context[29], context[37] );
      refalrts::link_brackets( context[18], context[35] );
      refalrts::link_brackets( context[19], context[25] );
      refalrts::push_stack( context[34] );
      refalrts::push_stack( context[32] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[47], context[50] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[46], context[46] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[37], context[45] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[29], context[31] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # Brackets/30 e.SubRange#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_E, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_Junk, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Brackets, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.SubRange#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </32 & Inc2/33 Tile{ AsIs: s.ContextOffset#1/13 } >/34 Tile{ AsIs: e.Substs-B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/35 (/36 # TkOpenBracket/37 )/38 )/39 (/40 # E/41 s.ContextOffset#1/13/42 Tile{ AsIs: e.SubRange#1/26 } )/43 (/44 Tile{ HalfReuse: # Junk/29 HalfReuse: (/19 HalfReuse: # TkCloseBracket/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdBrackets/1 } # AlgRight/45 s.Num#1/31/46 s.ContextOffset#1/13/47 )/48 )/49 >/50 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[33], ref_Inc2.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[35], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], ident_TkOpenBracket ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[41], ident_E ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[42], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[45], ident_AlgRight ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[46], context[31]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[47], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[50] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_ident( context[29], ident_Junk );
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkCloseBracket );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdBrackets );
      refalrts::push_stack( context[50] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[49] );
      refalrts::link_brackets( context[8], context[48] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[44], context[24] );
      refalrts::link_brackets( context[19], context[25] );
      refalrts::link_brackets( context[40], context[43] );
      refalrts::link_brackets( context[30], context[39] );
      refalrts::link_brackets( context[36], context[38] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::push_stack( context[34] );
      refalrts::push_stack( context[32] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[45], context[50] );
      res = refalrts::splice_evar( res, context[29], context[1] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[35], context[42] );
      res = refalrts::splice_evar( res, context[18], context[30] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # ADT-Brackets/31 (/34 e.Name#1/32 )/35 e.SubRange#1/27 )/30 e.Range#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_E, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  ident_ADT_Brackets, context[27], context[28] );
      if( ! context[31] )
        continue;
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[27], context[28] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      // closed e.Name#1 as range 32
      // closed e.SubRange#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num#1/26 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </36 & Inc2/37 Tile{ AsIs: s.ContextOffset#1/13 } >/38 Tile{ AsIs: e.Substs-B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkOpenADT/23 HalfReuse: )/25 } (/39 # TkName/40 e.Name#1/32/41 )/43 )/44 (/45 # E/46 s.ContextOffset#1/13/47 Tile{ AsIs: e.SubRange#1/27 } )/48 (/49 # Junk/50 (/51 # TkCloseADT/52 )/53 )/54 (/55 # E/56 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdADT/1 } Tile{ HalfReuse: # AlgLeft/29 HalfReuse: s.Num1 #26/31 HalfReuse: s.ContextOffset1 #13/34 AsIs: e.Name#1/32 AsIs: )/35 } )/57 >/58 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[37], ref_Inc2.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], ident_TkName ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[41], context[42], context[32], context[33]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], ident_E ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[47], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[50], ident_Junk ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[52], ident_TkCloseADT ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[53] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[54] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[55] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[56], ident_E ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[57] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[58] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkOpenADT );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdADT );
      refalrts::reinit_ident( context[29], ident_AlgLeft );
      refalrts::reinit_svar( context[31], context[26] );
      refalrts::reinit_svar( context[34], context[13] );
      refalrts::push_stack( context[58] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[57] );
      refalrts::link_brackets( context[8], context[35] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[55], context[24] );
      refalrts::link_brackets( context[49], context[54] );
      refalrts::link_brackets( context[51], context[53] );
      refalrts::link_brackets( context[45], context[48] );
      refalrts::link_brackets( context[18], context[44] );
      refalrts::link_brackets( context[39], context[43] );
      refalrts::link_brackets( context[19], context[25] );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[57], context[58] );
      res = refalrts::splice_evar( res, context[29], context[35] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[48], context[56] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[39], context[47] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # E/20 s.Num#1/35 e.Range#1/16 (/28 # ADT-Brackets/30 (/33 e.Name#1/31 )/34 e.SubRange#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_E, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_Junk, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_ADT_Brackets, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[26], context[27] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      // closed e.Name#1 as range 31
      // closed e.SubRange#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[35], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </36 & Inc2/37 Tile{ AsIs: s.ContextOffset#1/13 } >/38 Tile{ AsIs: e.Substs-B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/35 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 HalfReuse: # Junk/33 } (/39 # TkOpenADT/40 Tile{ AsIs: )/34 } (/41 # TkName/42 Tile{ AsIs: e.Name#1/31 } )/43 )/44 (/45 # E/46 s.ContextOffset#1/13/47 Tile{ AsIs: e.SubRange#1/26 } )/48 (/49 Tile{ HalfReuse: # Junk/29 HalfReuse: (/19 HalfReuse: # TkCloseADT/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdADT/1 } # AlgRight/50 s.Num#1/35/51 s.ContextOffset#1/13/52 e.Name#1/31/53 )/55 )/56 >/57 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[37], ref_Inc2.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], ident_TkOpenADT ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[42], ident_TkName ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], ident_E ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[47], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[50], ident_AlgRight ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[51], context[35]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[52], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[53], context[54], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[55] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[56] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[57] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_ident( context[33], ident_Junk );
      refalrts::reinit_ident( context[29], ident_Junk );
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkCloseADT );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdADT );
      refalrts::push_stack( context[57] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[56] );
      refalrts::link_brackets( context[8], context[55] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[49], context[24] );
      refalrts::link_brackets( context[19], context[25] );
      refalrts::link_brackets( context[45], context[48] );
      refalrts::link_brackets( context[30], context[44] );
      refalrts::link_brackets( context[41], context[43] );
      refalrts::link_brackets( context[39], context[34] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[50], context[57] );
      res = refalrts::splice_evar( res, context[29], context[1] );
      res = refalrts::splice_evar( res, context[48], context[49] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[43], context[47] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[18], context[33] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # E/25 s.Num#1/31 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_E, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Junk, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Junk2#1 as range 26
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[31], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/19 (/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: e.Junk1#1/16 } Tile{ AsIs: e.Junk2#1/26 } Tile{ AsIs: )/29 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdEmpty/1 } Tile{ Reuse: # AlgLeft/25 AsIs: s.Num#1/31 AsIs: )/24 HalfReuse: )/28 HalfReuse: >/30 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], ident_CmdEmpty );
      refalrts::update_ident( context[25], ident_AlgLeft );
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_close_call( context[30] );
      refalrts::push_stack( context[30] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[28] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[25], context[30] );
      res = refalrts::splice_evar( res, context[29], context[1] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::splice_to_freelist_open( context[20], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkVariable/31 s.Mode#1/32 e.Index#1/27 )/30 e.Range#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars-B#1/33 (/37 s.Mode#1/39 (/42 e.Index#1/44 )/43 e.Offsets#1/35 s.SampleOffset#1/46 )/38 e.Vars-E#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_E, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs-E#1 as range 63(2)
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
      // closed e.Range#1 as range 21
      if( ! refalrts::svar_left( context[32], context[27], context[28] ) )
        continue;
      // closed e.Index#1 as range 27
      context[65] = context[9];
      context[66] = context[10];
      context[33] = 0;
      context[34] = 0;
      refalrts::start_e_loop();
      do {
        context[67] = context[65];
        context[68] = context[66];
        context[35] = 0;
        context[36] = 0;
        context[37] = refalrts::brackets_left( context[35], context[36], context[67], context[68] );
        if( ! context[37] )
          continue;
        refalrts::bracket_pointers(context[37], context[38]);
        if( ! refalrts::repeated_stvar_left( context[39], context[32], context[35], context[36] ) )
          continue;
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[35], context[36] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        if( ! refalrts::repeated_evar_left( context[44], context[45], context[27], context[28], context[40], context[41] ) )
          continue;
        if( ! refalrts::empty_seq( context[40], context[41] ) )
          continue;
        // closed e.Vars-E#1 as range 67(9)
        if( ! refalrts::svar_right( context[46], context[35], context[36] ) )
          continue;
        // closed e.Offsets#1 as range 35

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </47 Tile{ HalfReuse: & IncVarOffset/29 HalfReuse: s.ContextOffset1 #13/31 AsIs: s.Mode#1/32 } >/48 Tile{ AsIs: e.Substs-B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: s.Mode1 #39/25 } Tile{ AsIs: e.Index#1/27 } Tile{ AsIs: s.ContextOffset#1/13 } )/49 )/50 (/51 # E/52 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars-B#1/33 AsIs: (/37 AsIs: s.Mode#1/39 AsIs: (/42 AsIs: e.Index#1/44 AsIs: )/43 AsIs: e.Offsets#1/35 AsIs: s.SampleOffset#1/46 HalfReuse: s.ContextOffset1 #13/38 } )/53 Tile{ AsIs: e.Vars-E#1/67(9) } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } # AlgLeft/54 Tile{ AsIs: s.Num#1/26 } s.Mode#1/39/55 s.ContextOffset#1/13/56 s.SampleOffset#1/46/57 )/58 )/59 >/60 Tile{ ]] }
        if( ! refalrts::alloc_open_call( context[47] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[48] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[49] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[50] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[51] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[52], ident_E ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[53] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[54], ident_AlgLeft ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[55], context[39]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[56], context[13]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[57], context[46]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[58] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[59] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[60] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_name( context[29], ref_IncVarOffset.ref.function );
        refalrts::reinit_svar( context[31], context[13] );
        refalrts::reinit_open_bracket( context[19] );
        refalrts::reinit_ident( context[23], ident_TkVariable );
        refalrts::reinit_svar( context[25], context[39] );
        refalrts::reinit_svar( context[30], context[26] );
        refalrts::reinit_svar( context[38], context[13] );
        refalrts::reinit_open_bracket( context[8] );
        refalrts::reinit_ident( context[1], ident_CmdRepeated );
        refalrts::push_stack( context[60] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[59] );
        refalrts::link_brackets( context[8], context[58] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[37], context[53] );
        refalrts::link_brackets( context[42], context[43] );
        refalrts::link_brackets( context[51], context[24] );
        refalrts::link_brackets( context[18], context[50] );
        refalrts::link_brackets( context[19], context[49] );
        refalrts::push_stack( context[48] );
        refalrts::push_stack( context[47] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[55], context[60] );
        res = refalrts::splice_evar( res, context[26], context[26] );
        res = refalrts::splice_evar( res, context[54], context[54] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[67], context[68] );
        res = refalrts::splice_evar( res, context[53], context[53] );
        res = refalrts::splice_evar( res, context[30], context[38] );
        res = refalrts::splice_evar( res, context[49], context[52] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[18], context[25] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[48], context[48] );
        res = refalrts::splice_evar( res, context[29], context[32] );
        res = refalrts::splice_evar( res, context[47], context[47] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[33], context[34], context[65], context[66] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # E/20 s.Num#1/31 e.Range#1/16 (/28 # TkVariable/30 s.Mode#1/32 e.Index#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars-B#1/33 (/37 s.Mode#1/39 (/42 e.Index#1/44 )/43 e.Offsets#1/35 s.SampleOffset#1/46 )/38 e.Vars-E#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_E, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_Junk, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_TkVariable, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Junk#1 as range 21
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16
      if( ! refalrts::svar_left( context[32], context[26], context[27] ) )
        continue;
      // closed e.Index#1 as range 26
      context[65] = context[9];
      context[66] = context[10];
      context[33] = 0;
      context[34] = 0;
      refalrts::start_e_loop();
      do {
        context[67] = context[65];
        context[68] = context[66];
        context[35] = 0;
        context[36] = 0;
        context[37] = refalrts::brackets_left( context[35], context[36], context[67], context[68] );
        if( ! context[37] )
          continue;
        refalrts::bracket_pointers(context[37], context[38]);
        if( ! refalrts::repeated_stvar_left( context[39], context[32], context[35], context[36] ) )
          continue;
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[35], context[36] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        if( ! refalrts::repeated_evar_left( context[44], context[45], context[26], context[27], context[40], context[41] ) )
          continue;
        if( ! refalrts::empty_seq( context[40], context[41] ) )
          continue;
        // closed e.Vars-E#1 as range 67(9)
        if( ! refalrts::svar_right( context[46], context[35], context[36] ) )
          continue;
        // closed e.Offsets#1 as range 35

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </47 & IncVarOffset/48 Tile{ AsIs: s.ContextOffset#1/13 } Tile{ AsIs: s.Mode#1/32 } >/49 Tile{ AsIs: e.Substs-B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/50 (/51 # TkVariable/52 s.Mode#1/39/53 Tile{ AsIs: e.Index#1/26 } Tile{ HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars-B#1/33 AsIs: (/37 AsIs: s.Mode#1/39 AsIs: (/42 AsIs: e.Index#1/44 AsIs: )/43 AsIs: e.Offsets#1/35 AsIs: s.SampleOffset#1/46 HalfReuse: s.ContextOffset1 #13/38 } )/54 Tile{ AsIs: e.Vars-E#1/67(9) } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } # AlgRight/55 s.Num#1/31/56 s.Mode#1/39/57 s.ContextOffset#1/13/58 s.SampleOffset#1/46/59 Tile{ AsIs: )/29 AsIs: )/19 } >/60 Tile{ ]] }
        if( ! refalrts::alloc_open_call( context[47] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[48], ref_IncVarOffset.ref.function ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[49] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[50], ident_Junk ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[51] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[52], ident_TkVariable ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[53], context[39]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[54] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[55], ident_AlgRight ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[56], context[31]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[57], context[39]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[58], context[13]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[59], context[46]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[60] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_close_bracket( context[28] );
        refalrts::reinit_open_bracket( context[30] );
        refalrts::reinit_svar( context[23], context[13] );
        refalrts::reinit_close_bracket( context[25] );
        refalrts::reinit_svar( context[38], context[13] );
        refalrts::reinit_open_bracket( context[8] );
        refalrts::reinit_ident( context[1], ident_CmdRepeated );
        refalrts::push_stack( context[60] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[19] );
        refalrts::link_brackets( context[8], context[29] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[37], context[54] );
        refalrts::link_brackets( context[42], context[43] );
        refalrts::link_brackets( context[30], context[24] );
        refalrts::link_brackets( context[51], context[25] );
        refalrts::link_brackets( context[18], context[28] );
        refalrts::push_stack( context[49] );
        refalrts::push_stack( context[47] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[60], context[60] );
        res = refalrts::splice_evar( res, context[29], context[19] );
        res = refalrts::splice_evar( res, context[55], context[59] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[67], context[68] );
        res = refalrts::splice_evar( res, context[54], context[54] );
        res = refalrts::splice_evar( res, context[23], context[38] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[50], context[53] );
        res = refalrts::splice_evar( res, context[18], context[30] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[49], context[49] );
        res = refalrts::splice_evar( res, context[32], context[32] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[47], context[48] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[33], context[34], context[65], context[66] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # E/25 s.Num#1/37 (/33 # TkVariable/35 'e'/36 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_E, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[63], context[64] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_Junk, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkVariable, context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = refalrts::char_left( 'e', context[31], context[32] );
      if( ! context[36] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Index#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[37], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 'e'/25 } e.Index#1/31/38 Tile{ HalfReuse: s.Num1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 'e'/7 } (/40 e.Index#1/31/41 )/43 Tile{ AsIs: s.Num#1/37 } )/44 )/45 (/46 Tile{ AsIs: e.Commands#1/5 } (/47 # CmdComment/48" closed "/49 Tile{ HalfReuse: </33 HalfReuse: & PrintVar/35 AsIs: 'e'/36 AsIs: e.Index#1/31 HalfReuse: >/34 HalfReuse: ' '/24 }"as range "/51 # Offset/53 s.Num#1/37/54 )/55 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if (! refalrts::copy_evar(context[38], context[39], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[41], context[42], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[48], ident_CmdComment ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[49], context[50], " closed ", 8 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[51], context[52], "as range ", 9 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[53], ident_Offset ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[54], context[37]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[55] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkVariable );
      refalrts::reinit_char( context[25], 'e' );
      refalrts::reinit_svar( context[28], context[37] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 'e' );
      refalrts::reinit_open_call( context[33] );
      refalrts::reinit_name( context[35], ref_PrintVar.ref.function );
      refalrts::reinit_close_call( context[34] );
      refalrts::reinit_char( context[24], ' ' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[46], context[8] );
      refalrts::link_brackets( context[47], context[55] );
      refalrts::push_stack( context[34] );
      refalrts::push_stack( context[33] );
      refalrts::link_brackets( context[11], context[45] );
      refalrts::link_brackets( context[12], context[44] );
      refalrts::link_brackets( context[40], context[43] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[19], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[51], context[55] );
      res = refalrts::splice_evar( res, context[33], context[24] );
      res = refalrts::splice_evar( res, context[47], context[50] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[44], context[46] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[40], context[43] );
      res = refalrts::splice_evar( res, context[28], context[7] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkVariable/31 's'/32 e.Index#1/27 )/30 e.Range#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_E, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs-E#1 as range 63(2)
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
      context[32] = refalrts::char_left( 's', context[27], context[28] );
      if( ! context[32] )
        continue;
      // closed e.Index#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </33 & Inc/34 Tile{ AsIs: s.ContextOffset#1/13 } >/35 Tile{ AsIs: e.Substs-B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 's'/25 } Tile{ AsIs: e.Index#1/27 } s.ContextOffset#1/13/36 )/37 )/38 (/39 # E/40 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } (/41 e.Index#1/27/42 )/44 s.ContextOffset#1/13/45 )/46 )/47 (/48 Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: (/29 Reuse: # CmdVar/31 HalfReuse: # AlgLeft/32 } Tile{ AsIs: s.Num#1/26 } 's'/49 s.ContextOffset#1/13/50 )/51 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[34], ref_Inc.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], ident_E ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[42], context[43], context[27], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[45], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[49], 's' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[50], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkVariable );
      refalrts::reinit_char( context[25], 's' );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 's' );
      refalrts::update_ident( context[31], ident_CmdVar );
      refalrts::reinit_ident( context[32], ident_AlgLeft );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[48], context[8] );
      refalrts::link_brackets( context[29], context[51] );
      refalrts::link_brackets( context[11], context[47] );
      refalrts::link_brackets( context[12], context[46] );
      refalrts::link_brackets( context[41], context[44] );
      refalrts::link_brackets( context[39], context[24] );
      refalrts::link_brackets( context[18], context[38] );
      refalrts::link_brackets( context[19], context[37] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[49], context[51] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[29], context[32] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[41], context[48] );
      res = refalrts::splice_evar( res, context[30], context[7] );
      res = refalrts::splice_evar( res, context[36], context[40] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkVariable/31 't'/32 e.Index#1/27 )/30 e.Range#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_E, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs-E#1 as range 63(2)
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
      context[32] = refalrts::char_left( 't', context[27], context[28] );
      if( ! context[32] )
        continue;
      // closed e.Index#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </33 & Inc/34 Tile{ AsIs: s.ContextOffset#1/13 } >/35 Tile{ AsIs: e.Substs-B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 't'/25 } Tile{ AsIs: e.Index#1/27 } s.ContextOffset#1/13/36 )/37 )/38 (/39 # E/40 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 't'/7 } (/41 e.Index#1/27/42 )/44 s.ContextOffset#1/13/45 )/46 )/47 (/48 Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: (/29 Reuse: # CmdVar/31 HalfReuse: # AlgLeft/32 } Tile{ AsIs: s.Num#1/26 } 't'/49 s.ContextOffset#1/13/50 )/51 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[34], ref_Inc.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], ident_E ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[42], context[43], context[27], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[45], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[49], 't' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[50], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkVariable );
      refalrts::reinit_char( context[25], 't' );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 't' );
      refalrts::update_ident( context[31], ident_CmdVar );
      refalrts::reinit_ident( context[32], ident_AlgLeft );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[48], context[8] );
      refalrts::link_brackets( context[29], context[51] );
      refalrts::link_brackets( context[11], context[47] );
      refalrts::link_brackets( context[12], context[46] );
      refalrts::link_brackets( context[41], context[44] );
      refalrts::link_brackets( context[39], context[24] );
      refalrts::link_brackets( context[18], context[38] );
      refalrts::link_brackets( context[19], context[37] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[49], context[51] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[29], context[32] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[41], context[48] );
      res = refalrts::splice_evar( res, context[30], context[7] );
      res = refalrts::splice_evar( res, context[36], context[40] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # E/20 s.Num#1/32 e.Range#1/16 (/28 # TkVariable/30 's'/31 e.Index#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_E, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_Junk, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_TkVariable, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = refalrts::char_left( 's', context[26], context[27] );
      if( ! context[31] )
        continue;
      // closed e.Index#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[32], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </33 & Inc/34 Tile{ AsIs: s.ContextOffset#1/13 } >/35 Tile{ AsIs: e.Substs-B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/32 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 HalfReuse: # Junk/31 } (/36 # TkVariable/37 's'/38 Tile{ AsIs: e.Index#1/26 } Tile{ HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } (/39 e.Index#1/26/40 )/42 s.ContextOffset#1/13/43 Tile{ AsIs: )/29 AsIs: )/19 } (/44 Tile{ AsIs: e.Commands#1/5 } (/45 # CmdVar/46 # AlgRight/47 s.Num#1/32/48 's'/49 s.ContextOffset#1/13/50 )/51 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[34], ref_Inc.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], ident_TkVariable ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[38], 's' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[40], context[41], context[26], context[27]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[43], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], ident_CmdVar ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[47], ident_AlgRight ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[48], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[49], 's' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[50], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_ident( context[31], ident_Junk );
      refalrts::reinit_svar( context[23], context[13] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 's' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[44], context[8] );
      refalrts::link_brackets( context[45], context[51] );
      refalrts::link_brackets( context[11], context[19] );
      refalrts::link_brackets( context[12], context[29] );
      refalrts::link_brackets( context[39], context[42] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[36], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[45], context[51] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[29], context[19] );
      res = refalrts::splice_evar( res, context[39], context[43] );
      res = refalrts::splice_evar( res, context[23], context[7] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[18], context[31] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # E/20 s.Num#1/32 e.Range#1/16 (/28 # TkVariable/30 't'/31 e.Index#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_E, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_Junk, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  ident_TkVariable, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = refalrts::char_left( 't', context[26], context[27] );
      if( ! context[31] )
        continue;
      // closed e.Index#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Substs-E#1 as range 63(2)
      if( ! refalrts::svar_left( context[32], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </33 & Inc/34 Tile{ AsIs: s.ContextOffset#1/13 } >/35 Tile{ AsIs: e.Substs-B#1/14 } Tile{ AsIs: (/18 AsIs: # E/20 AsIs: s.Num#1/32 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 HalfReuse: # Junk/31 } (/36 # TkVariable/37 't'/38 Tile{ AsIs: e.Index#1/26 } Tile{ HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 't'/7 } (/39 e.Index#1/26/40 )/42 s.ContextOffset#1/13/43 Tile{ AsIs: )/29 AsIs: )/19 } (/44 Tile{ AsIs: e.Commands#1/5 } (/45 # CmdVar/46 # AlgRight/47 s.Num#1/32/48 't'/49 s.ContextOffset#1/13/50 )/51 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[34], ref_Inc.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], ident_TkVariable ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[38], 't' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[40], context[41], context[26], context[27]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[43], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], ident_CmdVar ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[47], ident_AlgRight ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[48], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[49], 't' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[50], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_ident( context[31], ident_Junk );
      refalrts::reinit_svar( context[23], context[13] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 't' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[44], context[8] );
      refalrts::link_brackets( context[45], context[51] );
      refalrts::link_brackets( context[11], context[19] );
      refalrts::link_brackets( context[12], context[29] );
      refalrts::link_brackets( context[39], context[42] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[36], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[45], context[51] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[29], context[19] );
      res = refalrts::splice_evar( res, context[39], context[43] );
      res = refalrts::splice_evar( res, context[23], context[7] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[18], context[31] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx e.idx ( e.idx ) ( e.idx )
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # E/25 s.Num#1/26 (/29 # TkVariable/31 'e'/32 e.Index#1/27 )/30 e.Range#1/21 )/24 e.Substs-E#1/2 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    context[61] = context[2];
    context[62] = context[3];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[63] = context[61];
      context[64] = context[62];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[63], context[64] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_Junk, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[63], context[64] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_E, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Substs-E#1 as range 63(2)
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

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </33 & Inc2/34 Tile{ AsIs: s.ContextOffset#1/13 } >/35 Tile{ AsIs: e.Substs-B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 'e'/25 } Tile{ AsIs: e.Index#1/27 } s.ContextOffset#1/13/36 )/37 )/38 (/39 # E/40 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Substs-E#1/63(2) AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 'e'/7 } (/41 e.Index#1/27/42 )/44 s.ContextOffset#1/13/45 )/46 )/47 (/48 Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: (/29 Reuse: # CmdOpenedE/31 HalfReuse: # AlgLeft/32 } Tile{ AsIs: s.Num#1/26 } s.ContextOffset#1/13/49 )/50 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[34], ref_Inc2.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], ident_E ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[42], context[43], context[27], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[45], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[49], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[50] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], ident_TkVariable );
      refalrts::reinit_char( context[25], 'e' );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 'e' );
      refalrts::update_ident( context[31], ident_CmdOpenedE );
      refalrts::reinit_ident( context[32], ident_AlgLeft );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[48], context[8] );
      refalrts::link_brackets( context[29], context[50] );
      refalrts::link_brackets( context[11], context[47] );
      refalrts::link_brackets( context[12], context[46] );
      refalrts::link_brackets( context[41], context[44] );
      refalrts::link_brackets( context[39], context[24] );
      refalrts::link_brackets( context[18], context[38] );
      refalrts::link_brackets( context[19], context[37] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[29], context[32] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[41], context[48] );
      res = refalrts::splice_evar( res, context[30], context[7] );
      res = refalrts::splice_evar( res, context[36], context[40] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[61], context[62] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( # Junk e.idx ) ( e.idx ) ( e.idx )
  // </0 & DoGenSubst/4 s.ContextOffset#1/13 (/16 # Junk/18 e.MarkedPattern#1/14 )/17 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = refalrts::ident_left(  ident_Junk, context[14], context[15] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedPattern#1 as range 14
  // closed e.Vars#1 as range 9
  // closed e.Commands#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.ContextOffset#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.ContextOffset1 #13/17 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 } e.MarkedPattern#1/14/19 )/21 Tile{ AsIs: (/16 Reuse: # CmdComment/18 } Tile{ AsIs: </0 Reuse: & TextFromExpr/4 } </22 & FakeOffset/23 Tile{ AsIs: e.MarkedPattern#1/14 } Tile{ HalfReuse: >/8 AsIs: >/1 } )/24 Tile{ AsIs: e.Commands#1/5 } Tile{ ]] }
  if (! refalrts::copy_evar(context[19], context[20], context[14], context[15]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], ref_FakeOffset.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[17], context[13] );
  refalrts::update_ident( context[18], ident_CmdComment );
  refalrts::update_name( context[4], ref_TextFromExpr.ref.function );
  refalrts::reinit_close_call( context[8] );
  refalrts::link_brackets( context[16], context[24] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[22] );
  refalrts::link_brackets( context[7], context[21] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[17], context[7] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoGenSubst("DoGenSubst", 116784527U, 3104022280U, func_DoGenSubst);


//End of file
