// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #ADT-Brackets
template <typename SREFAL_PARAM_INT>
struct ident_ADT_Brackets {
  static const char *name() {
    return "ADT-Brackets";
  }
};

// identifier #Brackets
template <typename SREFAL_PARAM_INT>
struct ident_Brackets {
  static const char *name() {
    return "Brackets";
  }
};

// identifier #CallBrackets
template <typename SREFAL_PARAM_INT>
struct ident_CallBrackets {
  static const char *name() {
    return "CallBrackets";
  }
};

// identifier #Closure
template <typename SREFAL_PARAM_INT>
struct ident_Closure {
  static const char *name() {
    return "Closure";
  }
};

// identifier #CreateClosure
template <typename SREFAL_PARAM_INT>
struct ident_CreateClosure {
  static const char *name() {
    return "CreateClosure";
  }
};

// identifier #Declaration
template <typename SREFAL_PARAM_INT>
struct ident_Declaration {
  static const char *name() {
    return "Declaration";
  }
};

// identifier #Enum
template <typename SREFAL_PARAM_INT>
struct ident_Enum {
  static const char *name() {
    return "Enum";
  }
};

// identifier #Function
template <typename SREFAL_PARAM_INT>
struct ident_Function {
  static const char *name() {
    return "Function";
  }
};

// identifier #GN-Local
template <typename SREFAL_PARAM_INT>
struct ident_GN_Local {
  static const char *name() {
    return "GN-Local";
  }
};

// identifier #Ident
template <typename SREFAL_PARAM_INT>
struct ident_Ident {
  static const char *name() {
    return "Ident";
  }
};

// identifier #NativeBlock
template <typename SREFAL_PARAM_INT>
struct ident_NativeBlock {
  static const char *name() {
    return "NativeBlock";
  }
};

// identifier #NativeBody
template <typename SREFAL_PARAM_INT>
struct ident_NativeBody {
  static const char *name() {
    return "NativeBody";
  }
};

// identifier #SUF
template <typename SREFAL_PARAM_INT>
struct ident_SUF {
  static const char *name() {
    return "SUF";
  }
};

// identifier #Sentences
template <typename SREFAL_PARAM_INT>
struct ident_Sentences {
  static const char *name() {
    return "Sentences";
  }
};

// identifier #Swap
template <typename SREFAL_PARAM_INT>
struct ident_Swap {
  static const char *name() {
    return "Swap";
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

// identifier #TkNewVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkNewVariable {
  static const char *name() {
    return "TkNewVariable";
  }
};

// identifier #TkVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkVariable {
  static const char *name() {
    return "TkVariable";
  }
};

extern refalrts::RefalFunction Fetch;
extern refalrts::RefalFunction Seq;
extern refalrts::RefalFunction Map;
extern refalrts::RefalFunction MapReduce;
extern refalrts::RefalFunction Inc;
extern refalrts::RefalFunction DelAccumulator;
extern refalrts::RefalFunction Reduce;
extern refalrts::RefalFunction Sort;
extern refalrts::RefalFunction StrFromInt;
#ifdef INTERPRET
extern refalrts::RASLFunction Desugar;
#else
extern refalrts::RefalFunction Desugar;
#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_Pass_RemovePos_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_Pass_RemovePos_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction Pass_RemovePos;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction Pass_RemovePos;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_RemovePos_Body_S1L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_RemovePos_Body_S1L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction RemovePos_Body;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction RemovePos_Body;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_RemovePos_Expr_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_RemovePos_Expr_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction RemovePos_Expr;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction RemovePos_Expr;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_Pass_EnumerateVariables_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_Pass_EnumerateVariables_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction Pass_EnumerateVariables;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction Pass_EnumerateVariables;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_EnumerateVars_Sentences_S1L1L1L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_EnumerateVars_Sentences_S1L1L1L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_EnumerateVars_Sentences_S1L1L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_EnumerateVars_Sentences_S1L1L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_EnumerateVars_Sentences_S1L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_EnumerateVars_Sentences_S1L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction EnumerateVars_Sentences;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction EnumerateVars_Sentences;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_EnumerateVars_Expr_L1S4L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_EnumerateVars_Expr_L1S4L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_EnumerateVars_Expr_L1S5L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_EnumerateVars_Expr_L1S5L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_EnumerateVars_Expr_L1S6L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_EnumerateVars_Expr_L1S6L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_EnumerateVars_Expr_L1S7L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_EnumerateVars_Expr_L1S7L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_EnumerateVars_Expr_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_EnumerateVars_Expr_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction EnumerateVars_Expr;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction EnumerateVars_Expr;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_Pass_NameNestedFuncs_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_Pass_NameNestedFuncs_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction Pass_NameNestedFuncs;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction Pass_NameNestedFuncs;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_NameNestedBody_S2L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_NameNestedBody_S2L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction NameNestedBody;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction NameNestedBody;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction NameNestedResult;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction NameNestedResult;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_NameNestedResultRec_L1S1L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_NameNestedResultRec_L1S1L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_NameNestedResultRec_L1S2L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_NameNestedResultRec_L1S2L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_NameNestedResultRec_L1S3L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_NameNestedResultRec_L1S3L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_NameNestedResultRec_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_NameNestedResultRec_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction NameNestedResultRec;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction NameNestedResultRec;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_Pass_FlatNestedFuncs_L1S1L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_Pass_FlatNestedFuncs_L1S1L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_Pass_FlatNestedFuncs_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_Pass_FlatNestedFuncs_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction Pass_FlatNestedFuncs;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction Pass_FlatNestedFuncs;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractNested_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractNested_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction ExtractNested;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction ExtractNested;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractNestedRec_S1L1L1L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractNestedRec_S1L1L1L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractNestedRec_S1L1L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractNestedRec_S1L1L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractNestedRec_S1L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractNestedRec_S1L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractNestedRec_S1L2;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractNestedRec_S1L2;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction ExtractNestedRec;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction ExtractNestedRec;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractNested_Pattern_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractNested_Pattern_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractNested_Pattern_L2;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractNested_Pattern_L2;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction ExtractNested_Pattern;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction ExtractNested_Pattern;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction ExtractAllVars;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction ExtractAllVars;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction Uniq;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction Uniq;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction RemoveBorrowedVars;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction RemoveBorrowedVars;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction FindBorrowedVars;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction FindBorrowedVars;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractNested_Result_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractNested_Result_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction ExtractNested_Result;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction ExtractNested_Result;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractNested_Result_Term_S2L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractNested_Result_Term_S2L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractNested_Result_Term_S3L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractNested_Result_Term_S3L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractNested_Result_Term_S4L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractNested_Result_Term_S4L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractNested_Result_Term_S5L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractNested_Result_Term_S5L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction ExtractNested_Result_Term;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction ExtractNested_Result_Term;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction CheckBorrowed;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction CheckBorrowed;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction AddContextToSentence;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction AddContextToSentence;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_CreateContext_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_CreateContext_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction CreateContext;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction CreateContext;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_Pass_CreatePredeclarations_L1S1L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_Pass_CreatePredeclarations_L1S1L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_Pass_CreatePredeclarations_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_Pass_CreatePredeclarations_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_Pass_CreatePredeclarations_L2;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_Pass_CreatePredeclarations_L2;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction Pass_CreatePredeclarations;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction Pass_CreatePredeclarations;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_RemoveRedudandElements_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_RemoveRedudandElements_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_RemoveRedudandElements_L2;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_RemoveRedudandElements_L2;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_RemoveRedudandElements_L3S1L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_RemoveRedudandElements_L3S1L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_RemoveRedudandElements_L3S2L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_RemoveRedudandElements_L3S2L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_RemoveRedudandElements_L3S3L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_RemoveRedudandElements_L3S3L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_RemoveRedudandElements_L3;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_RemoveRedudandElements_L3;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_RemoveRedudandElements_L4L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_RemoveRedudandElements_L4L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_RemoveRedudandElements_L4;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_RemoveRedudandElements_L4;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction RemoveRedudandElements;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction RemoveRedudandElements;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_FoldEnums_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_FoldEnums_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction FoldEnums;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction FoldEnums;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractIdents_S1L1L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractIdents_S1L1L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractIdents_S1L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractIdents_S1L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractIdents_S1L2;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractIdents_S1L2;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction ExtractIdents;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction ExtractIdents;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractIdent_Expr_L1S2L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractIdent_Expr_L1S2L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractIdent_Expr_L1S3L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractIdent_Expr_L1S3L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractIdent_Expr_L1S4L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractIdent_Expr_L1S4L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction gen_ExtractIdent_Expr_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction gen_ExtractIdent_Expr_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction ExtractIdent_Expr;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction ExtractIdent_Expr;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RASLFunction UniqSorted;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction UniqSorted;
} // unnamed namespace

#endif

#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Desugar {
    static refalrts::RefalFunction *functions[] = {
      & Fetch,
      & Pass_CreatePredeclarations,
      & Pass_FlatNestedFuncs,
      & Pass_NameNestedFuncs,
      & Pass_EnumerateVariables,
      & Pass_RemovePos,
      & Seq
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 13, 0, 0},
      // </0 & Desugar/4 e.AST#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.AST#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.AST#1/2 HalfReuse: </1 } & Seq/5 & Pass-RemovePos/6 & Pass-EnumerateVariables/7 & Pass-NameNestedFuncs/8 & Pass-FlatNestedFuncs/9 & Pass-CreatePredeclarations/10 >/11 >/12 Tile{ ]] }
      {refalrts::icAllocFunc, 0, 6, 5},
      {refalrts::icAllocFunc, 0, 5, 6},
      {refalrts::icAllocFunc, 0, 4, 7},
      {refalrts::icAllocFunc, 0, 3, 8},
      {refalrts::icAllocFunc, 0, 2, 9},
      {refalrts::icAllocFunc, 0, 1, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 12, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Desugar

} // unnamed namespace

refalrts::RASLFunction Desugar(
  "Desugar",
  scope_Desugar::raa,
  scope_Desugar::functions,
  scope_Desugar::idents,
  scope_Desugar::numbers,
  scope_Desugar::strings
);

#else
static refalrts::FnResult func_Desugar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Desugar/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.AST#1/2 HalfReuse: </1 } & Seq/5 & Pass-RemovePos/6 & Pass-EnumerateVariables/7 & Pass-NameNestedFuncs/8 & Pass-FlatNestedFuncs/9 & Pass-CreatePredeclarations/10 >/11 >/12 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], & Seq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & Pass_RemovePos ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], & Pass_EnumerateVariables ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], & Pass_NameNestedFuncs ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], & Pass_FlatNestedFuncs ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & Pass_CreatePredeclarations ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalFunction Desugar(func_Desugar, "Desugar");

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Pass_RemovePos_L1 {
    static refalrts::RefalFunction *functions[] = {
      & RemovePos_Body
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NativeBlock<int>::name,
      & ident_Ident<int>::name,
      & ident_Function<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 19, 0, 0},
      //FAST GEN: ( e.$ )
      //GLOBAL GEN: ( s.$ t.$ e.$ )
      // </0 & Pass-RemovePos\1/4 (/7 s.idxB#0/9 t.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icsVarLeft, 0, 9, 5},
      {refalrts::ictVarLeftSave, 0, 10, 5},
      // closed e.idxBVV#0 as range 5
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // ( # Function t.idx s.idx ( e.idx ) e.idx )
      // </0 & Pass-RemovePos\1/4 (/7 # Function/9 t.SrcPos#2/10 s.ScopeClass#2/12 (/15 e.Name#2/13 )/16 e.Body#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 2, 9},
      {refalrts::icSave, 0, 17, 5},
      {refalrts::icsVarLeft, 0, 12, 17},
      {refalrts::icBracketLeftSave, 0, 13, 17},
      // closed e.Name#2 as range 13
      // closed e.Body#2 as range 17(5)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Function/9 } Tile{ AsIs: s.ScopeClass#2/12 AsIs: (/15 AsIs: e.Name#2/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & RemovePos-Body/4 } Tile{ AsIs: e.Body#2/17(5) } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceEVar, 0, 0, 17},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 12, 16, 0},
      {refalrts::icSpliceTile, 7, 9, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( # Ident t.idx e.idx )
      // </0 & Pass-RemovePos\1/4 (/7 # Ident/9 t.SrcPos#2/10 e.Name#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 1, 9},
      // closed e.Name#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Pass-RemovePos\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Ident/9 } Tile{ AsIs: e.Name#2/5 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 7, 9, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // ( # NativeBlock t.idx e.idx )
      // </0 & Pass-RemovePos\1/4 (/7 # NativeBlock/9 t.SrcPos#2/10 e.Code#2/5 )/8 >/1
      {refalrts::icIdentTerm, 0, 0, 9},
      // closed e.Code#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Pass-RemovePos\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # NativeBlock/9 AsIs: t.SrcPos#2/10 AsIs: e.Code#2/5 AsIs: )/8 } Tile{ ]] }
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( s.idx t.idx s.idx e.idx )
      // </0 & Pass-RemovePos\1/4 (/7 s.EnumSwapDeclaration#2/9 t.SrcPos#2/10 s.ScopeClass#2/12 e.Name#2/5 )/8 >/1
      {refalrts::icsVarLeft, 0, 12, 5},
      // closed e.Name#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Pass-RemovePos\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.EnumSwapDeclaration#2/9 } Tile{ AsIs: s.ScopeClass#2/12 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 12, 8, 0},
      {refalrts::icSpliceTile, 7, 9, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Pass_RemovePos_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_Pass_RemovePos_L1(
  "Pass-RemovePos\\1",
  scope_gen_Pass_RemovePos_L1::raa,
  scope_gen_Pass_RemovePos_L1::functions,
  scope_gen_Pass_RemovePos_L1::idents,
  scope_gen_Pass_RemovePos_L1::numbers,
  scope_gen_Pass_RemovePos_L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Pass_RemovePos_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: ( e.$ )
  //GLOBAL GEN: ( s.$ t.$ e.$ )
  // </0 & Pass-RemovePos\1/4 (/7 s.idxB#0/9 t.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
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
  // closed e.idxBVV#0 as range 5
  do {
    refalrts::start_sentence();
    // ( # Function t.idx s.idx ( e.idx ) e.idx )
    // </0 & Pass-RemovePos\1/4 (/7 # Function/9 t.SrcPos#2/10 s.ScopeClass#2/12 (/15 e.Name#2/13 )/16 e.Body#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Function<int>::name, context[9] ) )
      continue;
    context[17] = context[5];
    context[18] = context[6];
    if( ! refalrts::svar_left( context[12], context[17], context[18] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[17], context[18] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Name#2 as range 13
    // closed e.Body#2 as range 17(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Function/9 } Tile{ AsIs: s.ScopeClass#2/12 AsIs: (/15 AsIs: e.Name#2/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & RemovePos-Body/4 } Tile{ AsIs: e.Body#2/17(5) } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], & RemovePos_Body );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Ident t.idx e.idx )
    // </0 & Pass-RemovePos\1/4 (/7 # Ident/9 t.SrcPos#2/10 e.Name#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Ident<int>::name, context[9] ) )
      continue;
    // closed e.Name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Pass-RemovePos\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Ident/9 } Tile{ AsIs: e.Name#2/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # NativeBlock t.idx e.idx )
    // </0 & Pass-RemovePos\1/4 (/7 # NativeBlock/9 t.SrcPos#2/10 e.Code#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_NativeBlock<int>::name, context[9] ) )
      continue;
    // closed e.Code#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Pass-RemovePos\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # NativeBlock/9 AsIs: t.SrcPos#2/10 AsIs: e.Code#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( s.idx t.idx s.idx e.idx )
  // </0 & Pass-RemovePos\1/4 (/7 s.EnumSwapDeclaration#2/9 t.SrcPos#2/10 s.ScopeClass#2/12 e.Name#2/5 )/8 >/1
  if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-RemovePos\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.EnumSwapDeclaration#2/9 } Tile{ AsIs: s.ScopeClass#2/12 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[8] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_Pass_RemovePos_L1(func_gen_Pass_RemovePos_L1, "Pass-RemovePos\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Pass_RemovePos {
    static refalrts::RefalFunction *functions[] = {
      & gen_Pass_RemovePos_L1,
      & Map
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 6, 0, 0},
      // </0 & Pass-RemovePos/4 e.AST#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.AST#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Pass-RemovePos\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Pass_RemovePos

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction Pass_RemovePos(
  "Pass-RemovePos",
  scope_Pass_RemovePos::raa,
  scope_Pass_RemovePos::functions,
  scope_Pass_RemovePos::idents,
  scope_Pass_RemovePos::numbers,
  scope_Pass_RemovePos::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_Pass_RemovePos(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Pass-RemovePos/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Pass-RemovePos\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Map );
  refalrts::update_name( context[4], & gen_Pass_RemovePos_L1 );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction Pass_RemovePos(func_Pass_RemovePos, "Pass-RemovePos");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_RemovePos_Body_S1L1 {
    static refalrts::RefalFunction *functions[] = {
      & RemovePos_Expr
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 20, 0, 0},
      // </0 & RemovePos-Body$1\1/4 (/7 (/11 e.Pattern#2/9 )/12 (/15 e.Result#2/13 )/16 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 5},
      {refalrts::icBracketLeftSave, 0, 13, 5},
      {refalrts::icEmpty, 0, 0, 5},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.Pattern#2 as range 9
      // closed e.Result#2 as range 13
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: </7 HalfReuse: & RemovePos-Expr/11 } Tile{ AsIs: e.Pattern#2/9 } >/17 )/18 (/19 Tile{ HalfReuse: </12 HalfReuse: & RemovePos-Expr/15 AsIs: e.Result#2/13 HalfReuse: >/16 AsIs: )/8 HalfReuse: )/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icReinitFunc, 0, 0, 11},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 12},
      {refalrts::icReinitFunc, 0, 0, 15},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 16},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icLinkBrackets, 19, 8, 0},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icLinkBrackets, 4, 18, 0},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icSetRes, 0, 0, 12},
      {refalrts::icSpliceTile, 17, 19, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_RemovePos_Body_S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_RemovePos_Body_S1L1(
  "RemovePos-Body$1\\1",
  scope_gen_RemovePos_Body_S1L1::raa,
  scope_gen_RemovePos_Body_S1L1::functions,
  scope_gen_RemovePos_Body_S1L1::idents,
  scope_gen_RemovePos_Body_S1L1::numbers,
  scope_gen_RemovePos_Body_S1L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_RemovePos_Body_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & RemovePos-Body$1\1/4 (/7 (/11 e.Pattern#2/9 )/12 (/15 e.Result#2/13 )/16 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#2 as range 9
  // closed e.Result#2 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: </7 HalfReuse: & RemovePos-Expr/11 } Tile{ AsIs: e.Pattern#2/9 } >/17 )/18 (/19 Tile{ HalfReuse: </12 HalfReuse: & RemovePos-Expr/15 AsIs: e.Result#2/13 HalfReuse: >/16 AsIs: )/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[11], & RemovePos_Expr );
  refalrts::reinit_open_call( context[12] );
  refalrts::reinit_name( context[15], & RemovePos_Expr );
  refalrts::reinit_close_call( context[16] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[19], context[8] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[12] );
  refalrts::link_brackets( context[4], context[18] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_RemovePos_Body_S1L1(func_gen_RemovePos_Body_S1L1, "RemovePos-Body$1\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_RemovePos_Body {
    static refalrts::RefalFunction *functions[] = {
      & gen_RemovePos_Body_S1L1,
      & Map
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NativeBody<int>::name,
      & ident_Sentences<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 8, 0, 0},
      //FAST GEN: s.$ e.$
      //GLOBAL GEN: s.$ e.$
      // </0 & RemovePos-Body/4 s.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // # Sentences e.idx
      // </0 & RemovePos-Body/4 # Sentences/5 e.Sentences#1/2 >/1
      {refalrts::icIdentTerm, 0, 1, 5},
      // closed e.Sentences#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } # Sentences/6 Tile{ AsIs: </0 Reuse: & Map/4 HalfReuse: & RemovePos-Body$1\1/5 AsIs: e.Sentences#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocIdent, 0, 1, 6},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitFunc, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 6, 6, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // # NativeBody t.idx e.idx
      // </0 & RemovePos-Body/4 # NativeBody/5 t.SrcPos#1/6 e.Code#1/2 >/1
      {refalrts::icIdentTerm, 0, 0, 5},
      {refalrts::ictVarLeftSave, 0, 6, 2},
      // closed e.Code#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RemovePos-Body/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/5 AsIs: t.SrcPos#1/6 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 5, 7, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_RemovePos_Body

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction RemovePos_Body(
  "RemovePos-Body",
  scope_RemovePos_Body::raa,
  scope_RemovePos_Body::functions,
  scope_RemovePos_Body::idents,
  scope_RemovePos_Body::numbers,
  scope_RemovePos_Body::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_RemovePos_Body(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & RemovePos-Body/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    refalrts::start_sentence();
    // # Sentences e.idx
    // </0 & RemovePos-Body/4 # Sentences/5 e.Sentences#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Sentences<int>::name, context[5] ) )
      continue;
    // closed e.Sentences#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # Sentences/6 Tile{ AsIs: </0 Reuse: & Map/4 HalfReuse: & RemovePos-Body$1\1/5 AsIs: e.Sentences#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[6], & ident_Sentences<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Map );
    refalrts::reinit_name( context[5], & gen_RemovePos_Body_S1L1 );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // # NativeBody t.idx e.idx
  // </0 & RemovePos-Body/4 # NativeBody/5 t.SrcPos#1/6 e.Code#1/2 >/1
  if( ! refalrts::ident_term(  & ident_NativeBody<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RemovePos-Body/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/5 AsIs: t.SrcPos#1/6 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction RemovePos_Body(func_RemovePos_Body, "RemovePos-Body");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_RemovePos_Expr_L1 {
    static refalrts::RefalFunction *functions[] = {
      & RemovePos_Body,
      & RemovePos_Expr
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Closure<int>::name,
      & ident_CallBrackets<int>::name,
      & ident_ADT_Brackets<int>::name,
      & ident_Brackets<int>::name,
      & ident_TkName<int>::name,
      & ident_TkNewVariable<int>::name,
      & ident_TkVariable<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 7, 0, 0},
      {refalrts::icIssueMemory, 16, 0, 0},
      //FAST GEN: t.$
      //GLOBAL GEN: t.$
      // </0 & RemovePos-Expr\1/4 t.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // ( # TkVariable t.idx s.idx e.idx )
      // </0 & RemovePos-Expr\1/4 (/5 # TkVariable/9 t.SrcPos#2/10 s.Mode#2/12 e.Index#2/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 6, 7},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      {refalrts::icsVarLeft, 0, 12, 7},
      // closed e.Index#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkVariable/9 } Tile{ AsIs: s.Mode#2/12 AsIs: e.Index#2/7 AsIs: )/6 } Tile{ ]] }
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 12, 6, 0},
      {refalrts::icSpliceTile, 5, 9, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // ( # TkNewVariable t.idx s.idx e.idx )
      // </0 & RemovePos-Expr\1/4 (/5 # TkNewVariable/9 t.SrcPos#2/10 s.Mode#2/12 e.Index#2/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 5, 7},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      {refalrts::icsVarLeft, 0, 12, 7},
      // closed e.Index#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkNewVariable/9 } Tile{ AsIs: s.Mode#2/12 AsIs: e.Index#2/7 AsIs: )/6 } Tile{ ]] }
      {refalrts::icLinkBrackets, 5, 6, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 12, 6, 0},
      {refalrts::icSpliceTile, 5, 9, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // ( # TkName t.idx e.idx )
      // </0 & RemovePos-Expr\1/4 (/5 # TkName/9 t.SrcPos#2/10 e.Name#2/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 4, 7},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      // closed e.Name#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkName/9 } Tile{ AsIs: e.Name#2/7 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 5, 1, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 5, 9, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +13, 0, 0},
      // ( # Brackets e.idx )
      // </0 & RemovePos-Expr\1/4 (/5 # Brackets/9 e.InBrackets#2/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 3, 7},
      // closed e.InBrackets#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </5 HalfReuse: & RemovePos-Expr/9 AsIs: e.InBrackets#2/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 3, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // ( # ADT-Brackets t.idx ( e.idx ) e.idx )
      // </0 & RemovePos-Expr\1/4 (/5 # ADT-Brackets/9 t.SrcPos#2/10 (/14 e.Name#2/12 )/15 e.InBrackets#2/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 2, 7},
      {refalrts::ictVarLeftSave, 0, 10, 7},
      {refalrts::icBracketLeftSave, 0, 12, 7},
      // closed e.Name#2 as range 12
      // closed e.InBrackets#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # ADT-Brackets/9 } Tile{ AsIs: (/14 AsIs: e.Name#2/12 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & RemovePos-Expr/4 } Tile{ AsIs: e.InBrackets#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 5, 1, 0},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 14, 15, 0},
      {refalrts::icSetRes, 0, 0, 6},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 14, 15, 0},
      {refalrts::icSpliceTile, 5, 9, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +13, 0, 0},
      // ( # CallBrackets e.idx )
      // </0 & RemovePos-Expr\1/4 (/5 # CallBrackets/9 e.InBrackets#2/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 1, 7},
      // closed e.InBrackets#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </5 HalfReuse: & RemovePos-Expr/9 AsIs: e.InBrackets#2/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 1, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +13, 0, 0},
      // ( # Closure e.idx )
      // </0 & RemovePos-Expr\1/4 (/5 # Closure/9 e.Sentences#2/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 0, 7},
      // closed e.Sentences#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Closure/4 HalfReuse: </5 HalfReuse: & RemovePos-Body/9 AsIs: e.Sentences#2/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 0, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // t.idx
      // </0 & RemovePos-Expr\1/4 t.OtherTerm#2/5 >/1
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#2/5 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_RemovePos_Expr_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_RemovePos_Expr_L1(
  "RemovePos-Expr\\1",
  scope_gen_RemovePos_Expr_L1::raa,
  scope_gen_RemovePos_Expr_L1::functions,
  scope_gen_RemovePos_Expr_L1::idents,
  scope_gen_RemovePos_Expr_L1::numbers,
  scope_gen_RemovePos_Expr_L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_RemovePos_Expr_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & RemovePos-Expr\1/4 t.idx#0/5 >/1
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
  do {
    refalrts::start_sentence();
    // ( # TkVariable t.idx s.idx e.idx )
    // </0 & RemovePos-Expr\1/4 (/5 # TkVariable/9 t.SrcPos#2/10 s.Mode#2/12 e.Index#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
      continue;
    // closed e.Index#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkVariable/9 } Tile{ AsIs: s.Mode#2/12 AsIs: e.Index#2/7 AsIs: )/6 } Tile{ ]] }
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[6] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkNewVariable t.idx s.idx e.idx )
    // </0 & RemovePos-Expr\1/4 (/5 # TkNewVariable/9 t.SrcPos#2/10 s.Mode#2/12 e.Index#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkNewVariable<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
      continue;
    // closed e.Index#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkNewVariable/9 } Tile{ AsIs: s.Mode#2/12 AsIs: e.Index#2/7 AsIs: )/6 } Tile{ ]] }
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[6] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkName t.idx e.idx )
    // </0 & RemovePos-Expr\1/4 (/5 # TkName/9 t.SrcPos#2/10 e.Name#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkName<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Name#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkName/9 } Tile{ AsIs: e.Name#2/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Brackets e.idx )
    // </0 & RemovePos-Expr\1/4 (/5 # Brackets/9 e.InBrackets#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.InBrackets#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </5 HalfReuse: & RemovePos-Expr/9 AsIs: e.InBrackets#2/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], & RemovePos_Expr );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # ADT-Brackets t.idx ( e.idx ) e.idx )
    // </0 & RemovePos-Expr\1/4 (/5 # ADT-Brackets/9 t.SrcPos#2/10 (/14 e.Name#2/12 )/15 e.InBrackets#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Name#2 as range 12
    // closed e.InBrackets#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # ADT-Brackets/9 } Tile{ AsIs: (/14 AsIs: e.Name#2/12 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & RemovePos-Expr/4 } Tile{ AsIs: e.InBrackets#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], & RemovePos_Expr );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # CallBrackets e.idx )
    // </0 & RemovePos-Expr\1/4 (/5 # CallBrackets/9 e.InBrackets#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_CallBrackets<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.InBrackets#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </5 HalfReuse: & RemovePos-Expr/9 AsIs: e.InBrackets#2/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CallBrackets<int>::name );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], & RemovePos_Expr );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Closure e.idx )
    // </0 & RemovePos-Expr\1/4 (/5 # Closure/9 e.Sentences#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_Closure<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.Sentences#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Closure/4 HalfReuse: </5 HalfReuse: & RemovePos-Body/9 AsIs: e.Sentences#2/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Closure<int>::name );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], & RemovePos_Body );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    return refalrts::cSuccess;
  } while ( 0 );

  // t.idx
  // </0 & RemovePos-Expr\1/4 t.OtherTerm#2/5 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_RemovePos_Expr_L1(func_gen_RemovePos_Expr_L1, "RemovePos-Expr\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_RemovePos_Expr {
    static refalrts::RefalFunction *functions[] = {
      & gen_RemovePos_Expr_L1,
      & Map
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 6, 0, 0},
      // </0 & RemovePos-Expr/4 e.Expr#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Expr#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & RemovePos-Expr\1/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_RemovePos_Expr

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction RemovePos_Expr(
  "RemovePos-Expr",
  scope_RemovePos_Expr::raa,
  scope_RemovePos_Expr::functions,
  scope_RemovePos_Expr::idents,
  scope_RemovePos_Expr::numbers,
  scope_RemovePos_Expr::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_RemovePos_Expr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & RemovePos-Expr/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & RemovePos-Expr\1/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Map );
  refalrts::update_name( context[4], & gen_RemovePos_Expr_L1 );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction RemovePos_Expr(func_RemovePos_Expr, "RemovePos-Expr");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Pass_EnumerateVariables_L1 {
    static refalrts::RefalFunction *functions[] = {
      & EnumerateVars_Sentences
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Function<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 18, 0, 0},
      //FAST GEN: t.$
      //GLOBAL GEN: t.$
      // </0 & Pass-EnumerateVariables\1/4 t.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +22, 0, 0},
      // ( # Function s.idx ( e.idx ) e.idx )
      // </0 & Pass-EnumerateVariables\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Body#2/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 0, 7},
      {refalrts::icsVarLeft, 0, 10, 7},
      {refalrts::icBracketLeftSave, 0, 11, 7},
      // closed e.Name#2 as range 11
      // closed e.Body#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Function/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Sentences/4 } 1/15 (/16 )/17 Tile{ AsIs: e.Body#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
      {refalrts::icAllocInt, 0, 1, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 17},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 5, 1, 0},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 16, 17, 0},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icSetRes, 0, 0, 6},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 15, 17, 0},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 5, 14, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // t.idx
      // </0 & Pass-EnumerateVariables\1/4 t.OtherProgramElement#2/5 >/1
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Pass-EnumerateVariables\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/5 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Pass_EnumerateVariables_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_Pass_EnumerateVariables_L1(
  "Pass-EnumerateVariables\\1",
  scope_gen_Pass_EnumerateVariables_L1::raa,
  scope_gen_Pass_EnumerateVariables_L1::functions,
  scope_gen_Pass_EnumerateVariables_L1::idents,
  scope_gen_Pass_EnumerateVariables_L1::numbers,
  scope_gen_Pass_EnumerateVariables_L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Pass_EnumerateVariables_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & Pass-EnumerateVariables\1/4 t.idx#0/5 >/1
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
  do {
    refalrts::start_sentence();
    // ( # Function s.idx ( e.idx ) e.idx )
    // </0 & Pass-EnumerateVariables\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Body#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_Function<int>::name, context[7], context[8] );
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

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Function/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Sentences/4 } 1/15 (/16 )/17 Tile{ AsIs: e.Body#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_number( context[15], 1UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & EnumerateVars_Sentences );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // t.idx
  // </0 & Pass-EnumerateVariables\1/4 t.OtherProgramElement#2/5 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-EnumerateVariables\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_Pass_EnumerateVariables_L1(func_gen_Pass_EnumerateVariables_L1, "Pass-EnumerateVariables\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Pass_EnumerateVariables {
    static refalrts::RefalFunction *functions[] = {
      & gen_Pass_EnumerateVariables_L1,
      & Map
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 6, 0, 0},
      // </0 & Pass-EnumerateVariables/4 e.AST#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.AST#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Pass-EnumerateVariables\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Pass_EnumerateVariables

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction Pass_EnumerateVariables(
  "Pass-EnumerateVariables",
  scope_Pass_EnumerateVariables::raa,
  scope_Pass_EnumerateVariables::functions,
  scope_Pass_EnumerateVariables::idents,
  scope_Pass_EnumerateVariables::numbers,
  scope_Pass_EnumerateVariables::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_Pass_EnumerateVariables(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Pass-EnumerateVariables/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Pass-EnumerateVariables\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Map );
  refalrts::update_name( context[4], & gen_Pass_EnumerateVariables_L1 );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction Pass_EnumerateVariables(func_Pass_EnumerateVariables, "Pass-EnumerateVariables");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_EnumerateVars_Sentences_S1L1L1L1 {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 13, 0, 0},
      // </0 & EnumerateVars-Sentences$1\1\1\1/4 (/7 e.Pattern#3/5 )/8 (/11 e.ScopeVars#4/9 )/12 e.Result#4/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      // closed e.Pattern#3 as range 5
      // closed e.ScopeVars#4 as range 9
      // closed e.Result#4 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.ScopeVars#4/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Pattern#3/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Result#4/2 } Tile{ AsIs: )/12 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 4, 1, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 4, 11, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_EnumerateVars_Sentences_S1L1L1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_EnumerateVars_Sentences_S1L1L1L1(
  "EnumerateVars-Sentences$1\\1\\1\\1",
  scope_gen_EnumerateVars_Sentences_S1L1L1L1::raa,
  scope_gen_EnumerateVars_Sentences_S1L1L1L1::functions,
  scope_gen_EnumerateVars_Sentences_S1L1L1L1::idents,
  scope_gen_EnumerateVars_Sentences_S1L1L1L1::numbers,
  scope_gen_EnumerateVars_Sentences_S1L1L1L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_EnumerateVars_Sentences_S1L1L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & EnumerateVars-Sentences$1\1\1\1/4 (/7 e.Pattern#3/5 )/8 (/11 e.ScopeVars#4/9 )/12 e.Result#4/2 >/1
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
  // closed e.ScopeVars#4 as range 9
  // closed e.Result#4 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.ScopeVars#4/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Pattern#3/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Result#4/2 } Tile{ AsIs: )/12 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[4], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_EnumerateVars_Sentences_S1L1L1L1(func_gen_EnumerateVars_Sentences_S1L1L1L1, "EnumerateVars-Sentences$1\\1\\1\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_EnumerateVars_Sentences_S1L1L1 {
    static refalrts::RefalFunction *functions[] = {
      & gen_EnumerateVars_Sentences_S1L1L1L1,
      & EnumerateVars_Expr,
      & refalrts::create_closure,
      & Fetch
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 21, 0, 0},
      // </0 & EnumerateVars-Sentences$1\1\1/4 s.Depth#1/5 (/8 e.Result#2/6 )/9 (/12 e.ScopeVars#3/10 )/13 e.Pattern#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 6, 2},
      {refalrts::icBracketLeftSave, 0, 10, 2},
      // closed e.Result#2 as range 6
      // closed e.ScopeVars#3 as range 10
      // closed e.Pattern#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </14 & Fetch/15 Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/5 AsIs: (/8 } Tile{ AsIs: e.ScopeVars#3/10 } Tile{ AsIs: )/13 } Tile{ AsIs: e.Result#2/6 } >/16 </17 & @create_closure@/18 Tile{ HalfReuse: & EnumerateVars-Sentences$1\1\1\1/9 AsIs: (/12 } Tile{ AsIs: e.Pattern#3/2 } )/19 >/20 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
      {refalrts::icAllocFunc, 0, 3, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
      {refalrts::icAllocFunc, 0, 2, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 20},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitFunc, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icLinkBrackets, 12, 19, 0},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 8, 13, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 19, 20, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 9, 12, 0},
      {refalrts::icSpliceTile, 16, 18, 0},
      {refalrts::icSpliceEVar, 0, 0, 6},
      {refalrts::icSpliceTile, 13, 13, 0},
      {refalrts::icSpliceEVar, 0, 0, 10},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 14, 15, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_EnumerateVars_Sentences_S1L1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_EnumerateVars_Sentences_S1L1L1(
  "EnumerateVars-Sentences$1\\1\\1",
  scope_gen_EnumerateVars_Sentences_S1L1L1::raa,
  scope_gen_EnumerateVars_Sentences_S1L1L1::functions,
  scope_gen_EnumerateVars_Sentences_S1L1L1::idents,
  scope_gen_EnumerateVars_Sentences_S1L1L1::numbers,
  scope_gen_EnumerateVars_Sentences_S1L1L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_EnumerateVars_Sentences_S1L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & EnumerateVars-Sentences$1\1\1/4 s.Depth#1/5 (/8 e.Result#2/6 )/9 (/12 e.ScopeVars#3/10 )/13 e.Pattern#3/2 >/1
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
  // closed e.Result#2 as range 6
  // closed e.ScopeVars#3 as range 10
  // closed e.Pattern#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 & Fetch/15 Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/5 AsIs: (/8 } Tile{ AsIs: e.ScopeVars#3/10 } Tile{ AsIs: )/13 } Tile{ AsIs: e.Result#2/6 } >/16 </17 & @create_closure@/18 Tile{ HalfReuse: & EnumerateVars-Sentences$1\1\1\1/9 AsIs: (/12 } Tile{ AsIs: e.Pattern#3/2 } )/19 >/20 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], & Fetch ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & EnumerateVars_Expr );
  refalrts::reinit_name( context[9], & gen_EnumerateVars_Sentences_S1L1L1L1 );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[17] );
  refalrts::link_brackets( context[12], context[19] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[8], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_EnumerateVars_Sentences_S1L1L1(func_gen_EnumerateVars_Sentences_S1L1L1, "EnumerateVars-Sentences$1\\1\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_EnumerateVars_Sentences_S1L1 {
    static refalrts::RefalFunction *functions[] = {
      & EnumerateVars_Expr,
      & Fetch,
      & gen_EnumerateVars_Sentences_S1L1L1,
      & refalrts::create_closure
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 26, 0, 0},
      // </0 & EnumerateVars-Sentences$1\1/4 s.Depth#1/21 (/19 e.ScopeVars#1/17 )/20 (/7 (/11 e.Pattern#2/9 )/12 (/15 e.Result#2/13 )/16 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketRightSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 5},
      {refalrts::icBracketLeftSave, 0, 13, 5},
      {refalrts::icBracketRightSave, 0, 17, 2},
      {refalrts::icEmpty, 0, 0, 5},
      // closed e.ScopeVars#1 as range 17
      // closed e.Pattern#2 as range 9
      // closed e.Result#2 as range 13
      {refalrts::icsVarLeft, 0, 21, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & Fetch/11 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/21 AsIs: (/19 AsIs: e.ScopeVars#1/17 AsIs: )/20 } Tile{ AsIs: e.Pattern#2/9 } >/22 </23 & @create_closure@/24 & EnumerateVars-Sentences$1\1\1/25 Tile{ HalfReuse: s.Depth1 #21/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 HalfReuse: >/8 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 23},
      {refalrts::icAllocFunc, 0, 3, 24},
      {refalrts::icAllocFunc, 0, 2, 25},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icReinitFunc, 0, 1, 11},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitSVar, 0, 21, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 23},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icPushStack, 0, 0, 22},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icSetRes, 0, 0, 12},
      {refalrts::icSpliceTile, 22, 25, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 0, 20, 0},
      {refalrts::icSpliceTile, 7, 11, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_EnumerateVars_Sentences_S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_EnumerateVars_Sentences_S1L1(
  "EnumerateVars-Sentences$1\\1",
  scope_gen_EnumerateVars_Sentences_S1L1::raa,
  scope_gen_EnumerateVars_Sentences_S1L1::functions,
  scope_gen_EnumerateVars_Sentences_S1L1::idents,
  scope_gen_EnumerateVars_Sentences_S1L1::numbers,
  scope_gen_EnumerateVars_Sentences_S1L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_EnumerateVars_Sentences_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & EnumerateVars-Sentences$1\1/4 s.Depth#1/21 (/19 e.ScopeVars#1/17 )/20 (/7 (/11 e.Pattern#2/9 )/12 (/15 e.Result#2/13 )/16 )/8 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 17
  // closed e.Pattern#2 as range 9
  // closed e.Result#2 as range 13
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & Fetch/11 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/21 AsIs: (/19 AsIs: e.ScopeVars#1/17 AsIs: )/20 } Tile{ AsIs: e.Pattern#2/9 } >/22 </23 & @create_closure@/24 & EnumerateVars-Sentences$1\1\1/25 Tile{ HalfReuse: s.Depth1 #21/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 HalfReuse: >/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], & gen_EnumerateVars_Sentences_S1L1L1 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[11], & Fetch );
  refalrts::update_name( context[4], & EnumerateVars_Expr );
  refalrts::reinit_svar( context[12], context[21] );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[20] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_EnumerateVars_Sentences_S1L1(func_gen_EnumerateVars_Sentences_S1L1, "EnumerateVars-Sentences$1\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_EnumerateVars_Sentences {
    static refalrts::RefalFunction *functions[] = {
      & gen_EnumerateVars_Sentences_S1L1,
      & refalrts::create_closure,
      & Map
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NativeBody<int>::name,
      & ident_Sentences<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 15, 0, 0},
      //FAST GEN: s.$ ( e.$ ) s.$ e.$
      //GLOBAL GEN: s.$ ( e.$ ) s.$ e.$
      // </0 & EnumerateVars-Sentences/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 s.idxVT#0/10 e.idxVTV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 6, 2},
      // closed e.idxVB#0 as range 6
      {refalrts::icsVarLeft, 0, 10, 2},
      // closed e.idxVTV#0 as range 2
      {refalrts::icOnFailGoTo, +17, 0, 0},
      // s.idx ( e.idx ) # Sentences e.idx
      // </0 & EnumerateVars-Sentences/4 s.Depth#1/5 (/8 e.ScopeVars#1/6 )/9 # Sentences/10 e.Sentences#1/2 >/1
      {refalrts::icIdentTerm, 0, 1, 10},
      // closed e.ScopeVars#1 as range 6
      // closed e.Sentences#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } # Sentences/11 </12 & Map/13 </14 Tile{ HalfReuse: & @create_closure@/0 Reuse: & EnumerateVars-Sentences$1\1/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#1/6 AsIs: )/9 HalfReuse: >/10 AsIs: e.Sentences#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocIdent, 0, 1, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 12},
      {refalrts::icAllocFunc, 0, 2, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 11, 14, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // s.idx ( e.idx ) # NativeBody t.idx e.idx
      // </0 & EnumerateVars-Sentences/4 s.Depth#1/5 (/8 e.ScopeVars#1/6 )/9 # NativeBody/10 t.SrcPos#1/11 e.Code#1/2 >/1
      {refalrts::icIdentTerm, 0, 0, 10},
      // closed e.ScopeVars#1 as range 6
      {refalrts::ictVarLeftSave, 0, 11, 2},
      // closed e.Code#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & EnumerateVars-Sentences/4 s.Depth#1/5 (/8 e.ScopeVars#1/6 )/9 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/10 AsIs: t.SrcPos#1/11 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 10, 12, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_EnumerateVars_Sentences

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction EnumerateVars_Sentences(
  "EnumerateVars-Sentences",
  scope_EnumerateVars_Sentences::raa,
  scope_EnumerateVars_Sentences::functions,
  scope_EnumerateVars_Sentences::idents,
  scope_EnumerateVars_Sentences::numbers,
  scope_EnumerateVars_Sentences::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_EnumerateVars_Sentences(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  //FAST GEN: s.$ ( e.$ ) s.$ e.$
  //GLOBAL GEN: s.$ ( e.$ ) s.$ e.$
  // </0 & EnumerateVars-Sentences/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 s.idxVT#0/10 e.idxVTV#0/2 >/1
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
  // closed e.idxVB#0 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTV#0 as range 2
  do {
    refalrts::start_sentence();
    // s.idx ( e.idx ) # Sentences e.idx
    // </0 & EnumerateVars-Sentences/4 s.Depth#1/5 (/8 e.ScopeVars#1/6 )/9 # Sentences/10 e.Sentences#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Sentences<int>::name, context[10] ) )
      continue;
    // closed e.ScopeVars#1 as range 6
    // closed e.Sentences#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # Sentences/11 </12 & Map/13 </14 Tile{ HalfReuse: & @create_closure@/0 Reuse: & EnumerateVars-Sentences$1\1/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#1/6 AsIs: )/9 HalfReuse: >/10 AsIs: e.Sentences#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[11], & ident_Sentences<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], & Map ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], & refalrts::create_closure );
    refalrts::update_name( context[4], & gen_EnumerateVars_Sentences_S1L1 );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // s.idx ( e.idx ) # NativeBody t.idx e.idx
  // </0 & EnumerateVars-Sentences/4 s.Depth#1/5 (/8 e.ScopeVars#1/6 )/9 # NativeBody/10 t.SrcPos#1/11 e.Code#1/2 >/1
  if( ! refalrts::ident_term(  & ident_NativeBody<int>::name, context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 6
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & EnumerateVars-Sentences/4 s.Depth#1/5 (/8 e.ScopeVars#1/6 )/9 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/10 AsIs: t.SrcPos#1/11 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction EnumerateVars_Sentences(func_EnumerateVars_Sentences, "EnumerateVars-Sentences");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_EnumerateVars_Expr_L1S4L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Brackets<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 9, 0, 0},
      // </0 & EnumerateVars-Expr\1$4\1/4 (/7 e.ScopeVars#3/5 )/8 e.InBrackets#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.ScopeVars#3 as range 5
      // closed e.InBrackets#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ScopeVars#3/5 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # Brackets/4 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_EnumerateVars_Expr_L1S4L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_EnumerateVars_Expr_L1S4L1(
  "EnumerateVars-Expr\\1$4\\1",
  scope_gen_EnumerateVars_Expr_L1S4L1::raa,
  scope_gen_EnumerateVars_Expr_L1S4L1::functions,
  scope_gen_EnumerateVars_Expr_L1S4L1::idents,
  scope_gen_EnumerateVars_Expr_L1S4L1::numbers,
  scope_gen_EnumerateVars_Expr_L1S4L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_EnumerateVars_Expr_L1S4L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ScopeVars#3/5 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # Brackets/4 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
  refalrts::reinit_close_bracket( context[1] );
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

namespace /* unnamed */ {
refalrts::RefalFunction gen_EnumerateVars_Expr_L1S4L1(func_gen_EnumerateVars_Expr_L1S4L1, "EnumerateVars-Expr\\1$4\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_EnumerateVars_Expr_L1S5L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_ADT_Brackets<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 13, 0, 0},
      // </0 & EnumerateVars-Expr\1$5\1/4 (/7 e.Name#2/5 )/8 (/11 e.ScopeVars#3/9 )/12 e.InBrackets#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      // closed e.Name#2 as range 5
      // closed e.ScopeVars#3 as range 9
      // closed e.InBrackets#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.ScopeVars#3/9 AsIs: )/12 } Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_EnumerateVars_Expr_L1S5L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_EnumerateVars_Expr_L1S5L1(
  "EnumerateVars-Expr\\1$5\\1",
  scope_gen_EnumerateVars_Expr_L1S5L1::raa,
  scope_gen_EnumerateVars_Expr_L1S5L1::functions,
  scope_gen_EnumerateVars_Expr_L1S5L1::idents,
  scope_gen_EnumerateVars_Expr_L1S5L1::numbers,
  scope_gen_EnumerateVars_Expr_L1S5L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_EnumerateVars_Expr_L1S5L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.ScopeVars#3/9 AsIs: )/12 } Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_ADT_Brackets<int>::name );
  refalrts::reinit_close_bracket( context[1] );
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

namespace /* unnamed */ {
refalrts::RefalFunction gen_EnumerateVars_Expr_L1S5L1(func_gen_EnumerateVars_Expr_L1S5L1, "EnumerateVars-Expr\\1$5\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_EnumerateVars_Expr_L1S6L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CallBrackets<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 9, 0, 0},
      // </0 & EnumerateVars-Expr\1$6\1/4 (/7 e.ScopeVars#3/5 )/8 e.InBrackets#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.ScopeVars#3 as range 5
      // closed e.InBrackets#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ScopeVars#3/5 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # CallBrackets/4 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_EnumerateVars_Expr_L1S6L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_EnumerateVars_Expr_L1S6L1(
  "EnumerateVars-Expr\\1$6\\1",
  scope_gen_EnumerateVars_Expr_L1S6L1::raa,
  scope_gen_EnumerateVars_Expr_L1S6L1::functions,
  scope_gen_EnumerateVars_Expr_L1S6L1::idents,
  scope_gen_EnumerateVars_Expr_L1S6L1::numbers,
  scope_gen_EnumerateVars_Expr_L1S6L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_EnumerateVars_Expr_L1S6L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ScopeVars#3/5 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # CallBrackets/4 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_CallBrackets<int>::name );
  refalrts::reinit_close_bracket( context[1] );
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

namespace /* unnamed */ {
refalrts::RefalFunction gen_EnumerateVars_Expr_L1S6L1(func_gen_EnumerateVars_Expr_L1S6L1, "EnumerateVars-Expr\\1$6\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_EnumerateVars_Expr_L1S7L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Closure<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 9, 0, 0},
      // </0 & EnumerateVars-Expr\1$7\1/4 (/7 e.ScopeVars#2/5 )/8 e.Sentences#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.ScopeVars#2 as range 5
      // closed e.Sentences#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ScopeVars#2/5 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # Closure/4 } Tile{ AsIs: e.Sentences#3/2 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_EnumerateVars_Expr_L1S7L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_EnumerateVars_Expr_L1S7L1(
  "EnumerateVars-Expr\\1$7\\1",
  scope_gen_EnumerateVars_Expr_L1S7L1::raa,
  scope_gen_EnumerateVars_Expr_L1S7L1::functions,
  scope_gen_EnumerateVars_Expr_L1S7L1::idents,
  scope_gen_EnumerateVars_Expr_L1S7L1::numbers,
  scope_gen_EnumerateVars_Expr_L1S7L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_EnumerateVars_Expr_L1S7L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ScopeVars#2/5 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # Closure/4 } Tile{ AsIs: e.Sentences#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_Closure<int>::name );
  refalrts::reinit_close_bracket( context[1] );
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

namespace /* unnamed */ {
refalrts::RefalFunction gen_EnumerateVars_Expr_L1S7L1(func_gen_EnumerateVars_Expr_L1S7L1, "EnumerateVars-Expr\\1$7\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_EnumerateVars_Expr_L1 {
    static refalrts::RefalFunction *functions[] = {
      & Fetch,
      & gen_EnumerateVars_Expr_L1S7L1,
      & refalrts::create_closure,
      & Inc,
      & EnumerateVars_Sentences,
      & gen_EnumerateVars_Expr_L1S6L1,
      & EnumerateVars_Expr,
      & gen_EnumerateVars_Expr_L1S5L1,
      & gen_EnumerateVars_Expr_L1S4L1
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Closure<int>::name,
      & ident_CallBrackets<int>::name,
      & ident_ADT_Brackets<int>::name,
      & ident_Brackets<int>::name,
      & ident_TkVariable<int>::name,
      & ident_TkNewVariable<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 8, 0, 0},
      {refalrts::icIssueMemory, 31, 0, 0},
      //FAST GEN: s.$ ( e.$ ) t.$
      //GLOBAL GEN: s.$ ( e.$ ) t.$
      // </0 & EnumerateVars-Expr\1/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 t.idxVT#0/10 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 6, 2},
      // closed e.idxVB#0 as range 6
      {refalrts::ictVarLeftSave, 0, 10, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +21, 0, 0},
      // s.idx ( e.idx ) ( # TkVariable s.idx e.idx )
      // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars-B#2/16 (/20 s.Mode#2/22 e.Index#2/23 s.Depth#2/25 )/21 e.ScopeVars-E#2/6 )/9 (/10 # TkVariable/14 s.Mode#2/15 e.Index#2/12 )/11 >/1
      {refalrts::icBracketTerm, 0, 12, 10},
      {refalrts::icIdentLeftSave, 14, 4, 12},
      {refalrts::icsVarLeft, 0, 15, 12},
      // closed e.Index#2 as range 12
      {refalrts::icSave, 0, 27, 6},
      {refalrts::icEPrepare, 0, 16, 27},
      {refalrts::icEStart, 0, 16, 27},
      {refalrts::icSave, 0, 29, 27},
      {refalrts::icBracketLeftSave, 0, 18, 29},
      {refalrts::icsRepeatLeft, 22, 15, 18},
      {refalrts::iceRepeatLeft, 23, 12, 18},
      // closed e.ScopeVars-E#2 as range 29(6)
      {refalrts::icsVarLeft, 0, 25, 18},
      {refalrts::icEmpty, 0, 0, 18},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.ScopeVars-B#2/16 AsIs: (/20 AsIs: s.Mode#2/22 AsIs: e.Index#2/23 AsIs: s.Depth#2/25 AsIs: )/21 AsIs: e.ScopeVars-E#2/29(6) AsIs: )/9 AsIs: (/10 AsIs: # TkVariable/14 AsIs: s.Mode#2/15 AsIs: e.Index#2/12 HalfReuse: s.Depth2 #25/11 HalfReuse: )/1 ]] }
      {refalrts::icReinitSVar, 0, 25, 11},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 10, 1, 0},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icLinkBrackets, 20, 21, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // s.idx ( e.idx ) ( # TkVariable s.idx e.idx )
      // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # TkVariable/14 s.Mode#2/15 e.Index#2/12 )/11 >/1
      {refalrts::icBracketTerm, 0, 12, 10},
      {refalrts::icIdentLeftSave, 14, 4, 12},
      // closed e.ScopeVars#2 as range 6
      {refalrts::icsVarLeft, 0, 15, 12},
      // closed e.Index#2 as range 12
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } s.Mode#2/15/16 e.Index#2/12/17 Tile{ AsIs: s.Depth#1/5 HalfReuse: )/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 AsIs: (/10 AsIs: # TkVariable/14 AsIs: s.Mode#2/15 AsIs: e.Index#2/12 HalfReuse: s.Depth1 #5/11 HalfReuse: )/1 ]] }
      {refalrts::icCopySTVar, 16, 15, 0},
      {refalrts::icCopyEVar, 17, 12, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 8},
      {refalrts::icReinitSVar, 0, 5, 11},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 10, 1, 0},
      {refalrts::icLinkBrackets, 0, 9, 0},
      {refalrts::icLinkBrackets, 4, 8, 0},
      {refalrts::icSetRes, 0, 0, 5},
      {refalrts::icSpliceTile, 17, 18, 0},
      {refalrts::icSpliceTile, 16, 16, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // s.idx ( e.idx ) ( # TkNewVariable s.idx e.idx )
      // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # TkNewVariable/14 s.Mode#2/15 e.Index#2/12 )/11 >/1
      {refalrts::icBracketTerm, 0, 12, 10},
      {refalrts::icIdentLeftSave, 14, 5, 12},
      // closed e.ScopeVars#2 as range 6
      {refalrts::icsVarLeft, 0, 15, 12},
      // closed e.Index#2 as range 12
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } s.Mode#2/15/16 e.Index#2/12/17 Tile{ AsIs: s.Depth#1/5 HalfReuse: )/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 AsIs: (/10 Reuse: # TkVariable/14 AsIs: s.Mode#2/15 AsIs: e.Index#2/12 HalfReuse: s.Depth1 #5/11 HalfReuse: )/1 ]] }
      {refalrts::icCopySTVar, 16, 15, 0},
      {refalrts::icCopyEVar, 17, 12, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 8},
      {refalrts::icUpdateIdent, 0, 4, 14},
      {refalrts::icReinitSVar, 0, 5, 11},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 10, 1, 0},
      {refalrts::icLinkBrackets, 0, 9, 0},
      {refalrts::icLinkBrackets, 4, 8, 0},
      {refalrts::icSetRes, 0, 0, 5},
      {refalrts::icSpliceTile, 17, 18, 0},
      {refalrts::icSpliceTile, 16, 16, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // s.idx ( e.idx ) ( # Brackets e.idx )
      // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # Brackets/14 e.InBrackets#2/12 )/11 >/1
      {refalrts::icBracketTerm, 0, 12, 10},
      {refalrts::icIdentLeftSave, 14, 3, 12},
      // closed e.ScopeVars#2 as range 6
      // closed e.InBrackets#2 as range 12
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Fetch/14 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 } Tile{ AsIs: e.InBrackets#2/12 } >/15 Tile{ HalfReuse: & EnumerateVars-Expr\1$4\1/11 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icReinitFunc, 0, 0, 14},
      {refalrts::icUpdateFunc, 0, 6, 4},
      {refalrts::icReinitFunc, 0, 8, 11},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icSetRes, 0, 0, 11},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icSpliceEVar, 0, 0, 12},
      {refalrts::icSpliceTile, 0, 9, 0},
      {refalrts::icSpliceTile, 10, 14, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +27, 0, 0},
      // s.idx ( e.idx ) ( # ADT-Brackets ( e.idx ) e.idx )
      // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # ADT-Brackets/14 (/17 e.Name#2/15 )/18 e.InBrackets#2/12 )/11 >/1
      {refalrts::icBracketTerm, 0, 12, 10},
      {refalrts::icIdentLeftSave, 14, 2, 12},
      {refalrts::icBracketLeftSave, 0, 15, 12},
      // closed e.ScopeVars#2 as range 6
      // closed e.Name#2 as range 15
      // closed e.InBrackets#2 as range 12
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </19 & Fetch/20 Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 } Tile{ AsIs: e.InBrackets#2/12 } >/21 </22 Tile{ HalfReuse: & @create_closure@/10 HalfReuse: & EnumerateVars-Expr\1$5\1/14 AsIs: (/17 AsIs: e.Name#2/15 AsIs: )/18 } Tile{ HalfReuse: >/11 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
      {refalrts::icAllocFunc, 0, 0, 20},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 22},
      {refalrts::icUpdateFunc, 0, 6, 4},
      {refalrts::icReinitFunc, 0, 2, 10},
      {refalrts::icReinitFunc, 0, 7, 14},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 22},
      {refalrts::icLinkBrackets, 17, 18, 0},
      {refalrts::icPushStack, 0, 0, 21},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icSetRes, 0, 0, 11},
      {refalrts::icSpliceTile, 10, 18, 0},
      {refalrts::icSpliceTile, 21, 22, 0},
      {refalrts::icSpliceEVar, 0, 0, 12},
      {refalrts::icSpliceTile, 0, 9, 0},
      {refalrts::icSpliceTile, 19, 20, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // s.idx ( e.idx ) ( # CallBrackets e.idx )
      // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # CallBrackets/14 e.InBrackets#2/12 )/11 >/1
      {refalrts::icBracketTerm, 0, 12, 10},
      {refalrts::icIdentLeftSave, 14, 1, 12},
      // closed e.ScopeVars#2 as range 6
      // closed e.InBrackets#2 as range 12
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Fetch/14 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 } Tile{ AsIs: e.InBrackets#2/12 } >/15 Tile{ HalfReuse: & EnumerateVars-Expr\1$6\1/11 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icReinitFunc, 0, 0, 14},
      {refalrts::icUpdateFunc, 0, 6, 4},
      {refalrts::icReinitFunc, 0, 5, 11},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icSetRes, 0, 0, 11},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icSpliceEVar, 0, 0, 12},
      {refalrts::icSpliceTile, 0, 9, 0},
      {refalrts::icSpliceTile, 10, 14, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +37, 0, 0},
      // s.idx ( e.idx ) ( # Closure e.idx )
      // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # Closure/14 e.Sentences#2/12 )/11 >/1
      {refalrts::icBracketTerm, 0, 12, 10},
      {refalrts::icIdentLeftSave, 14, 0, 12},
      // closed e.ScopeVars#2 as range 6
      // closed e.Sentences#2 as range 12
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Depth#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </15 & EnumerateVars-Sentences/16 </17 & Inc/18 Tile{ HalfReuse: s.Depth1 #5/11 AsIs: >/1 } (/19 e.ScopeVars#2/6/20 )/22 Tile{ AsIs: e.Sentences#2/12 } >/23 </24 & @create_closure@/25 & EnumerateVars-Expr\1$7\1/26 Tile{ AsIs: (/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 HalfReuse: >/10 HalfReuse: >/14 } Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocFunc, 0, 4, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
      {refalrts::icAllocFunc, 0, 3, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
      {refalrts::icCopyEVar, 20, 6, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 24},
      {refalrts::icAllocFunc, 0, 2, 25},
      {refalrts::icAllocFunc, 0, 1, 26},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitSVar, 0, 5, 11},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 24},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icPushStack, 0, 0, 23},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icLinkBrackets, 19, 22, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 14, 0},
      {refalrts::icSpliceTile, 23, 26, 0},
      {refalrts::icSpliceEVar, 0, 0, 12},
      {refalrts::icSpliceTile, 19, 22, 0},
      {refalrts::icSpliceTile, 11, 1, 0},
      {refalrts::icSpliceTile, 15, 18, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // s.idx ( e.idx ) t.idx
      // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 t.OtherTerm#2/10 >/1
      // closed e.ScopeVars#2 as range 6
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 AsIs: t.OtherTerm#2/10 } Tile{ ]] }
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_EnumerateVars_Expr_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_EnumerateVars_Expr_L1(
  "EnumerateVars-Expr\\1",
  scope_gen_EnumerateVars_Expr_L1::raa,
  scope_gen_EnumerateVars_Expr_L1::functions,
  scope_gen_EnumerateVars_Expr_L1::idents,
  scope_gen_EnumerateVars_Expr_L1::numbers,
  scope_gen_EnumerateVars_Expr_L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_EnumerateVars_Expr_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  //FAST GEN: s.$ ( e.$ ) t.$
  //GLOBAL GEN: s.$ ( e.$ ) t.$
  // </0 & EnumerateVars-Expr\1/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 t.idxVT#0/10 >/1
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
  // closed e.idxVB#0 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // s.idx ( e.idx ) ( # TkVariable s.idx e.idx )
    // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars-B#2/16 (/20 s.Mode#2/22 e.Index#2/23 s.Depth#2/25 )/21 e.ScopeVars-E#2/6 )/9 (/10 # TkVariable/14 s.Mode#2/15 e.Index#2/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    context[14] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[12], context[13] );
    if( ! context[14] )
      continue;
    if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
      continue;
    // closed e.Index#2 as range 12
    context[27] = context[6];
    context[28] = context[7];
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[29] = context[27];
      context[30] = context[28];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[29], context[30] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      if( ! refalrts::repeated_stvar_left( context[22], context[15], context[18], context[19] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[23], context[24], context[12], context[13], context[18], context[19] ) )
        continue;
      // closed e.ScopeVars-E#2 as range 29(6)
      if( ! refalrts::svar_left( context[25], context[18], context[19] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.ScopeVars-B#2/16 AsIs: (/20 AsIs: s.Mode#2/22 AsIs: e.Index#2/23 AsIs: s.Depth#2/25 AsIs: )/21 AsIs: e.ScopeVars-E#2/29(6) AsIs: )/9 AsIs: (/10 AsIs: # TkVariable/14 AsIs: s.Mode#2/15 AsIs: e.Index#2/12 HalfReuse: s.Depth2 #25/11 HalfReuse: )/1 ]] }
      refalrts::reinit_svar( context[11], context[25] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[10], context[1] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[27], context[28] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( e.idx ) ( # TkVariable s.idx e.idx )
    // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # TkVariable/14 s.Mode#2/15 e.Index#2/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    context[14] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[12], context[13] );
    if( ! context[14] )
      continue;
    // closed e.ScopeVars#2 as range 6
    if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
      continue;
    // closed e.Index#2 as range 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } s.Mode#2/15/16 e.Index#2/12/17 Tile{ AsIs: s.Depth#1/5 HalfReuse: )/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 AsIs: (/10 AsIs: # TkVariable/14 AsIs: s.Mode#2/15 AsIs: e.Index#2/12 HalfReuse: s.Depth1 #5/11 HalfReuse: )/1 ]] }
    if (! refalrts::copy_stvar(context[16], context[15]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[17], context[18], context[12], context[13]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[8] );
    refalrts::reinit_svar( context[11], context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::link_brackets( context[0], context[9] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( e.idx ) ( # TkNewVariable s.idx e.idx )
    // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # TkNewVariable/14 s.Mode#2/15 e.Index#2/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    context[14] = refalrts::ident_left(  & ident_TkNewVariable<int>::name, context[12], context[13] );
    if( ! context[14] )
      continue;
    // closed e.ScopeVars#2 as range 6
    if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
      continue;
    // closed e.Index#2 as range 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } s.Mode#2/15/16 e.Index#2/12/17 Tile{ AsIs: s.Depth#1/5 HalfReuse: )/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 AsIs: (/10 Reuse: # TkVariable/14 AsIs: s.Mode#2/15 AsIs: e.Index#2/12 HalfReuse: s.Depth1 #5/11 HalfReuse: )/1 ]] }
    if (! refalrts::copy_stvar(context[16], context[15]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[17], context[18], context[12], context[13]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[8] );
    refalrts::update_ident( context[14], & ident_TkVariable<int>::name );
    refalrts::reinit_svar( context[11], context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::link_brackets( context[0], context[9] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( e.idx ) ( # Brackets e.idx )
    // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # Brackets/14 e.InBrackets#2/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    context[14] = refalrts::ident_left(  & ident_Brackets<int>::name, context[12], context[13] );
    if( ! context[14] )
      continue;
    // closed e.ScopeVars#2 as range 6
    // closed e.InBrackets#2 as range 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Fetch/14 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 } Tile{ AsIs: e.InBrackets#2/12 } >/15 Tile{ HalfReuse: & EnumerateVars-Expr\1$4\1/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_name( context[14], & Fetch );
    refalrts::update_name( context[4], & EnumerateVars_Expr );
    refalrts::reinit_name( context[11], & gen_EnumerateVars_Expr_L1S4L1 );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( e.idx ) ( # ADT-Brackets ( e.idx ) e.idx )
    // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # ADT-Brackets/14 (/17 e.Name#2/15 )/18 e.InBrackets#2/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    context[14] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[12], context[13] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.ScopeVars#2 as range 6
    // closed e.Name#2 as range 15
    // closed e.InBrackets#2 as range 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 & Fetch/20 Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 } Tile{ AsIs: e.InBrackets#2/12 } >/21 </22 Tile{ HalfReuse: & @create_closure@/10 HalfReuse: & EnumerateVars-Expr\1$5\1/14 AsIs: (/17 AsIs: e.Name#2/15 AsIs: )/18 } Tile{ HalfReuse: >/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], & Fetch ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & EnumerateVars_Expr );
    refalrts::reinit_name( context[10], & refalrts::create_closure );
    refalrts::reinit_name( context[14], & gen_EnumerateVars_Expr_L1S5L1 );
    refalrts::reinit_close_call( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[22] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[10], context[18] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( e.idx ) ( # CallBrackets e.idx )
    // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # CallBrackets/14 e.InBrackets#2/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    context[14] = refalrts::ident_left(  & ident_CallBrackets<int>::name, context[12], context[13] );
    if( ! context[14] )
      continue;
    // closed e.ScopeVars#2 as range 6
    // closed e.InBrackets#2 as range 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Fetch/14 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 } Tile{ AsIs: e.InBrackets#2/12 } >/15 Tile{ HalfReuse: & EnumerateVars-Expr\1$6\1/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_name( context[14], & Fetch );
    refalrts::update_name( context[4], & EnumerateVars_Expr );
    refalrts::reinit_name( context[11], & gen_EnumerateVars_Expr_L1S6L1 );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( e.idx ) ( # Closure e.idx )
    // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 (/10 # Closure/14 e.Sentences#2/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    context[14] = refalrts::ident_left(  & ident_Closure<int>::name, context[12], context[13] );
    if( ! context[14] )
      continue;
    // closed e.ScopeVars#2 as range 6
    // closed e.Sentences#2 as range 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Depth#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </15 & EnumerateVars-Sentences/16 </17 & Inc/18 Tile{ HalfReuse: s.Depth1 #5/11 AsIs: >/1 } (/19 e.ScopeVars#2/6/20 )/22 Tile{ AsIs: e.Sentences#2/12 } >/23 </24 & @create_closure@/25 & EnumerateVars-Expr\1$7\1/26 Tile{ AsIs: (/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 HalfReuse: >/10 HalfReuse: >/14 } Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], & EnumerateVars_Sentences ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], & Inc ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[20], context[21], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], & refalrts::create_closure ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], & gen_EnumerateVars_Expr_L1S7L1 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Fetch );
    refalrts::reinit_svar( context[11], context[5] );
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_close_call( context[14] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[24] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[19], context[22] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[14] );
    res = refalrts::splice_evar( res, context[23], context[26] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[19], context[22] );
    res = refalrts::splice_evar( res, context[11], context[1] );
    res = refalrts::splice_evar( res, context[15], context[18] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // s.idx ( e.idx ) t.idx
  // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/6 )/9 t.OtherTerm#2/10 >/1
  // closed e.ScopeVars#2 as range 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.ScopeVars#2/6 AsIs: )/9 AsIs: t.OtherTerm#2/10 } Tile{ ]] }
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_EnumerateVars_Expr_L1(func_gen_EnumerateVars_Expr_L1, "EnumerateVars-Expr\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_EnumerateVars_Expr {
    static refalrts::RefalFunction *functions[] = {
      & MapReduce,
      & gen_EnumerateVars_Expr_L1,
      & refalrts::create_closure
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 14, 0, 0},
      // </0 & EnumerateVars-Expr/4 s.Depth#1/5 (/8 e.OriginScopeVars#1/6 )/9 e.Expr#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 6, 2},
      // closed e.OriginScopeVars#1 as range 6
      // closed e.Expr#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapReduce/4 } </10 & @create_closure@/11 & EnumerateVars-Expr\1/12 Tile{ AsIs: s.Depth#1/5 } >/13 Tile{ AsIs: (/8 AsIs: e.OriginScopeVars#1/6 AsIs: )/9 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icAllocFunc, 0, 2, 11},
      {refalrts::icAllocFunc, 0, 1, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 13},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 13, 13, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icSpliceTile, 10, 12, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_EnumerateVars_Expr

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction EnumerateVars_Expr(
  "EnumerateVars-Expr",
  scope_EnumerateVars_Expr::raa,
  scope_EnumerateVars_Expr::functions,
  scope_EnumerateVars_Expr::idents,
  scope_EnumerateVars_Expr::numbers,
  scope_EnumerateVars_Expr::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_EnumerateVars_Expr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapReduce/4 } </10 & @create_closure@/11 & EnumerateVars-Expr\1/12 Tile{ AsIs: s.Depth#1/5 } >/13 Tile{ AsIs: (/8 AsIs: e.OriginScopeVars#1/6 AsIs: )/9 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], & gen_EnumerateVars_Expr_L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & MapReduce );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction EnumerateVars_Expr(func_EnumerateVars_Expr, "EnumerateVars-Expr");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Pass_NameNestedFuncs_L1 {
    static refalrts::RefalFunction *functions[] = {
      & NameNestedBody
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_SUF<int>::name,
      & ident_Function<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 20, 0, 0},
      //FAST GEN: t.$
      //GLOBAL GEN: t.$
      // </0 & Pass-NameNestedFuncs\1/4 t.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +23, 0, 0},
      // ( # Function s.idx ( e.idx ) e.idx )
      // </0 & Pass-NameNestedFuncs\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Body#2/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 1, 7},
      {refalrts::icsVarLeft, 0, 10, 7},
      {refalrts::icBracketLeftSave, 0, 11, 7},
      // closed e.Name#2 as range 11
      // closed e.Body#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Function/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 } Tile{ AsIs: </0 Reuse: & NameNestedBody/4 } (/15 e.Name#2/11/16 # SUF/18 )/19 Tile{ AsIs: e.Body#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 15},
      {refalrts::icCopyEVar, 16, 11, 0},
      {refalrts::icAllocIdent, 0, 0, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 5, 1, 0},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 15, 19, 0},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icSetRes, 0, 0, 6},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 15, 19, 0},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 5, 14, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // t.idx
      // </0 & Pass-NameNestedFuncs\1/4 t.OtherProgramElement#2/5 >/1
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Pass-NameNestedFuncs\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/5 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Pass_NameNestedFuncs_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_Pass_NameNestedFuncs_L1(
  "Pass-NameNestedFuncs\\1",
  scope_gen_Pass_NameNestedFuncs_L1::raa,
  scope_gen_Pass_NameNestedFuncs_L1::functions,
  scope_gen_Pass_NameNestedFuncs_L1::idents,
  scope_gen_Pass_NameNestedFuncs_L1::numbers,
  scope_gen_Pass_NameNestedFuncs_L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Pass_NameNestedFuncs_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & Pass-NameNestedFuncs\1/4 t.idx#0/5 >/1
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
  do {
    refalrts::start_sentence();
    // ( # Function s.idx ( e.idx ) e.idx )
    // </0 & Pass-NameNestedFuncs\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Body#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_Function<int>::name, context[7], context[8] );
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

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Function/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 } Tile{ AsIs: </0 Reuse: & NameNestedBody/4 } (/15 e.Name#2/11/16 # SUF/18 )/19 Tile{ AsIs: e.Body#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[16], context[17], context[11], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_SUF<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & NameNestedBody );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
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

  // t.idx
  // </0 & Pass-NameNestedFuncs\1/4 t.OtherProgramElement#2/5 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-NameNestedFuncs\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_Pass_NameNestedFuncs_L1(func_gen_Pass_NameNestedFuncs_L1, "Pass-NameNestedFuncs\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Pass_NameNestedFuncs {
    static refalrts::RefalFunction *functions[] = {
      & gen_Pass_NameNestedFuncs_L1,
      & Map
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 6, 0, 0},
      // </0 & Pass-NameNestedFuncs/4 e.AST#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.AST#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Pass-NameNestedFuncs\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Pass_NameNestedFuncs

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction Pass_NameNestedFuncs(
  "Pass-NameNestedFuncs",
  scope_Pass_NameNestedFuncs::raa,
  scope_Pass_NameNestedFuncs::functions,
  scope_Pass_NameNestedFuncs::idents,
  scope_Pass_NameNestedFuncs::numbers,
  scope_Pass_NameNestedFuncs::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_Pass_NameNestedFuncs(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Pass-NameNestedFuncs/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Pass-NameNestedFuncs\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Map );
  refalrts::update_name( context[4], & gen_Pass_NameNestedFuncs_L1 );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction Pass_NameNestedFuncs(func_Pass_NameNestedFuncs, "Pass-NameNestedFuncs");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_NameNestedBody_S2L1 {
    static refalrts::RefalFunction *functions[] = {
      & NameNestedResult,
      & Inc
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 27, 0, 0},
      // </0 & NameNestedBody$2\1/4 (/7 e.MainName#1/5 )/8 s.SentenceNumber#2/21 (/11 (/15 e.Pattern#2/13 )/16 (/19 e.Result#2/17 )/20 )/12 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketRightSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 13, 9},
      {refalrts::icBracketLeftSave, 0, 17, 9},
      {refalrts::icEmpty, 0, 0, 9},
      // closed e.MainName#1 as range 5
      // closed e.Pattern#2 as range 13
      // closed e.Result#2 as range 17
      {refalrts::icsVarLeft, 0, 21, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </22 & Inc/23 s.SentenceNumber#2/21/24 >/25 (/26 Tile{ AsIs: (/15 AsIs: e.Pattern#2/13 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: </0 Reuse: & NameNestedResult/4 AsIs: (/7 AsIs: e.MainName#1/5 HalfReuse: '$'/8 AsIs: s.SentenceNumber#2/21 HalfReuse: )/11 } Tile{ AsIs: e.Result#2/17 } Tile{ HalfReuse: >/20 AsIs: )/12 HalfReuse: )/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 22},
      {refalrts::icAllocFunc, 0, 1, 23},
      {refalrts::icCopySTVar, 24, 21, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 25},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, '$', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 11},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 20},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 26, 1, 0},
      {refalrts::icLinkBrackets, 19, 12, 0},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 11, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icPushStack, 0, 0, 25},
      {refalrts::icPushStack, 0, 0, 22},
      {refalrts::icSetRes, 0, 0, 20},
      {refalrts::icSpliceEVar, 0, 0, 17},
      {refalrts::icSpliceTile, 0, 11, 0},
      {refalrts::icSpliceTile, 15, 19, 0},
      {refalrts::icSpliceTile, 22, 26, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_NameNestedBody_S2L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_NameNestedBody_S2L1(
  "NameNestedBody$2\\1",
  scope_gen_NameNestedBody_S2L1::raa,
  scope_gen_NameNestedBody_S2L1::functions,
  scope_gen_NameNestedBody_S2L1::idents,
  scope_gen_NameNestedBody_S2L1::numbers,
  scope_gen_NameNestedBody_S2L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_NameNestedBody_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & NameNestedBody$2\1/4 (/7 e.MainName#1/5 )/8 s.SentenceNumber#2/21 (/11 (/15 e.Pattern#2/13 )/16 (/19 e.Result#2/17 )/20 )/12 >/1
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
  context[19] = refalrts::brackets_left( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MainName#1 as range 5
  // closed e.Pattern#2 as range 13
  // closed e.Result#2 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </22 & Inc/23 s.SentenceNumber#2/21/24 >/25 (/26 Tile{ AsIs: (/15 AsIs: e.Pattern#2/13 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: </0 Reuse: & NameNestedResult/4 AsIs: (/7 AsIs: e.MainName#1/5 HalfReuse: '$'/8 AsIs: s.SentenceNumber#2/21 HalfReuse: )/11 } Tile{ AsIs: e.Result#2/17 } Tile{ HalfReuse: >/20 AsIs: )/12 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], & Inc ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[24], context[21]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & NameNestedResult );
  refalrts::reinit_char( context[8], '$' );
  refalrts::reinit_close_bracket( context[11] );
  refalrts::reinit_close_call( context[20] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[26], context[1] );
  refalrts::link_brackets( context[19], context[12] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[22] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[20];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[15], context[19] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_NameNestedBody_S2L1(func_gen_NameNestedBody_S2L1, "NameNestedBody$2\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_NameNestedBody {
    static refalrts::RefalFunction *functions[] = {
      & gen_NameNestedBody_S2L1,
      & refalrts::create_closure,
      & MapReduce,
      & DelAccumulator,
      & NameNestedResult
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NativeBody<int>::name,
      & ident_Sentences<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 24, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) s.$ e.$
      // </0 & NameNestedBody/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      {refalrts::icsVarLeft, 0, 9, 2},
      // closed e.idxTV#0 as range 2
      {refalrts::icOnFailGoTo, +22, 0, 0},
      // ( e.idx ) # Sentences ( ( e.idx ) ( e.idx ) )
      // </0 & NameNestedBody/4 (/7 e.MainName#1/5 )/8 # Sentences/9 (/12 (/16 e.Pattern#1/14 )/17 (/20 e.Result#1/18 )/21 )/13 >/1
      {refalrts::icIdentTerm, 0, 1, 9},
      {refalrts::icSave, 0, 22, 2},
      {refalrts::icBracketLeftSave, 0, 10, 22},
      {refalrts::icBracketLeftSave, 0, 14, 10},
      {refalrts::icBracketLeftSave, 0, 18, 10},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmpty, 0, 0, 22},
      // closed e.MainName#1 as range 5
      // closed e.Pattern#1 as range 14
      // closed e.Result#1 as range 18
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: # Sentences/9 AsIs: (/12 AsIs: (/16 AsIs: e.Pattern#1/14 AsIs: )/17 AsIs: (/20 } Tile{ AsIs: </0 Reuse: & NameNestedResult/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.Result#1/18 } Tile{ HalfReuse: >/21 AsIs: )/13 HalfReuse: )/1 ]] }
      {refalrts::icUpdateFunc, 0, 4, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 21},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 12, 1, 0},
      {refalrts::icLinkBrackets, 20, 13, 0},
      {refalrts::icPushStack, 0, 0, 21},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 16, 17, 0},
      {refalrts::icSetRes, 0, 0, 21},
      {refalrts::icSpliceEVar, 0, 0, 18},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 9, 20, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +27, 0, 0},
      // ( e.idx ) # Sentences e.idx
      // </0 & NameNestedBody/4 (/7 e.MainName#1/5 )/8 # Sentences/9 e.Sentences#1/2 >/1
      {refalrts::icIdentTerm, 0, 1, 9},
      // closed e.MainName#1 as range 5
      // closed e.Sentences#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } # Sentences/10 </11 & DelAccumulator/12 </13 & MapReduce/14 </15 Tile{ HalfReuse: & @create_closure@/0 Reuse: & NameNestedBody$2\1/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 HalfReuse: >/9 } 1/16 Tile{ AsIs: e.Sentences#1/2 } >/17 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocIdent, 0, 1, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 3, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocFunc, 0, 2, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocInt, 0, 1, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 17, 17, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 16, 16, 0},
      {refalrts::icSpliceTile, 0, 9, 0},
      {refalrts::icSpliceTile, 10, 15, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) # NativeBody t.idx e.idx
      // </0 & NameNestedBody/4 (/7 e.MainName#1/5 )/8 # NativeBody/9 t.SrcPos#1/10 e.Code#1/2 >/1
      {refalrts::icIdentTerm, 0, 0, 9},
      // closed e.MainName#1 as range 5
      {refalrts::ictVarLeftSave, 0, 10, 2},
      // closed e.Code#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & NameNestedBody/4 (/7 e.MainName#1/5 )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/9 AsIs: t.SrcPos#1/10 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 9, 11, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_NameNestedBody

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction NameNestedBody(
  "NameNestedBody",
  scope_NameNestedBody::raa,
  scope_NameNestedBody::functions,
  scope_NameNestedBody::idents,
  scope_NameNestedBody::numbers,
  scope_NameNestedBody::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_NameNestedBody(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) s.$ e.$
  // </0 & NameNestedBody/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
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
  // closed e.idxB#0 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) # Sentences ( ( e.idx ) ( e.idx ) )
    // </0 & NameNestedBody/4 (/7 e.MainName#1/5 )/8 # Sentences/9 (/12 (/16 e.Pattern#1/14 )/17 (/20 e.Result#1/18 )/21 )/13 >/1
    if( ! refalrts::ident_term(  & ident_Sentences<int>::name, context[9] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[22], context[23] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[10], context[11] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[10], context[11] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.MainName#1 as range 5
    // closed e.Pattern#1 as range 14
    // closed e.Result#1 as range 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: # Sentences/9 AsIs: (/12 AsIs: (/16 AsIs: e.Pattern#1/14 AsIs: )/17 AsIs: (/20 } Tile{ AsIs: </0 Reuse: & NameNestedResult/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.Result#1/18 } Tile{ HalfReuse: >/21 AsIs: )/13 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], & NameNestedResult );
    refalrts::reinit_close_call( context[21] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::link_brackets( context[20], context[13] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[9], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) # Sentences e.idx
    // </0 & NameNestedBody/4 (/7 e.MainName#1/5 )/8 # Sentences/9 e.Sentences#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Sentences<int>::name, context[9] ) )
      continue;
    // closed e.MainName#1 as range 5
    // closed e.Sentences#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # Sentences/10 </11 & DelAccumulator/12 </13 & MapReduce/14 </15 Tile{ HalfReuse: & @create_closure@/0 Reuse: & NameNestedBody$2\1/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 HalfReuse: >/9 } 1/16 Tile{ AsIs: e.Sentences#1/2 } >/17 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[10], & ident_Sentences<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], & DelAccumulator ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], & MapReduce ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[16], 1UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], & refalrts::create_closure );
    refalrts::update_name( context[4], & gen_NameNestedBody_S2L1 );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[10], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) # NativeBody t.idx e.idx
  // </0 & NameNestedBody/4 (/7 e.MainName#1/5 )/8 # NativeBody/9 t.SrcPos#1/10 e.Code#1/2 >/1
  if( ! refalrts::ident_term(  & ident_NativeBody<int>::name, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MainName#1 as range 5
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & NameNestedBody/4 (/7 e.MainName#1/5 )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/9 AsIs: t.SrcPos#1/10 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction NameNestedBody(func_NameNestedBody, "NameNestedBody");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_NameNestedResult {
    static refalrts::RefalFunction *functions[] = {
      & NameNestedResultRec,
      & DelAccumulator
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 13, 0, 0},
      // </0 & NameNestedResult/4 (/7 e.MainName#1/5 )/8 e.Result#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.MainName#1 as range 5
      // closed e.Result#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </9 & DelAccumulator/10 </11 Tile{ HalfReuse: & NameNestedResultRec/0 HalfReuse: 1/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 AsIs: e.Result#1/2 AsIs: >/1 } >/12 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icAllocFunc, 0, 1, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icReinitFunc, 0, 0, 0},
      {refalrts::icReinitInt, 0, 1, 4},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 9, 11, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_NameNestedResult

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction NameNestedResult(
  "NameNestedResult",
  scope_NameNestedResult::raa,
  scope_NameNestedResult::functions,
  scope_NameNestedResult::idents,
  scope_NameNestedResult::numbers,
  scope_NameNestedResult::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_NameNestedResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & DelAccumulator/10 </11 Tile{ HalfReuse: & NameNestedResultRec/0 HalfReuse: 1/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 AsIs: e.Result#1/2 AsIs: >/1 } >/12 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & DelAccumulator ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & NameNestedResultRec );
  refalrts::reinit_number( context[4], 1UL );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[11] );
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

namespace /* unnamed */ {
refalrts::RefalFunction NameNestedResult(func_NameNestedResult, "NameNestedResult");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_NameNestedResultRec_L1S1L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Brackets<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 7, 0, 0},
      // </0 & NameNestedResultRec\1$1\1/4 s.NextNumber#3/5 e.InBrackets#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.InBrackets#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.NextNumber#3/5 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: s.NextNumber3 #5/0 HalfReuse: (/4 } # Brackets/6 Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icAllocIdent, 0, 0, 6},
      {refalrts::icReinitSVar, 0, 5, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 4, 1, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 6, 6, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_NameNestedResultRec_L1S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_NameNestedResultRec_L1S1L1(
  "NameNestedResultRec\\1$1\\1",
  scope_gen_NameNestedResultRec_L1S1L1::raa,
  scope_gen_NameNestedResultRec_L1S1L1::functions,
  scope_gen_NameNestedResultRec_L1S1L1::idents,
  scope_gen_NameNestedResultRec_L1S1L1::numbers,
  scope_gen_NameNestedResultRec_L1S1L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_NameNestedResultRec_L1S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & NameNestedResultRec\1$1\1/4 s.NextNumber#3/5 e.InBrackets#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.InBrackets#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.NextNumber#3/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.NextNumber3 #5/0 HalfReuse: (/4 } # Brackets/6 Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_ident( context[6], & ident_Brackets<int>::name ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_NameNestedResultRec_L1S1L1(func_gen_NameNestedResultRec_L1S1L1, "NameNestedResultRec\\1$1\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_NameNestedResultRec_L1S2L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_ADT_Brackets<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 10, 0, 0},
      // </0 & NameNestedResultRec\1$2\1/4 (/7 e.Name#2/5 )/8 s.NextNumber#3/9 e.InBrackets#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.Name#2 as range 5
      {refalrts::icsVarLeft, 0, 9, 2},
      // closed e.InBrackets#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.NextNumber#3/9 } Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_NameNestedResultRec_L1S2L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_NameNestedResultRec_L1S2L1(
  "NameNestedResultRec\\1$2\\1",
  scope_gen_NameNestedResultRec_L1S2L1::raa,
  scope_gen_NameNestedResultRec_L1S2L1::functions,
  scope_gen_NameNestedResultRec_L1S2L1::idents,
  scope_gen_NameNestedResultRec_L1S2L1::numbers,
  scope_gen_NameNestedResultRec_L1S2L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_NameNestedResultRec_L1S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & NameNestedResultRec\1$2\1/4 (/7 e.Name#2/5 )/8 s.NextNumber#3/9 e.InBrackets#3/2 >/1
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
  // closed e.Name#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.InBrackets#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.NextNumber#3/9 } Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_ADT_Brackets<int>::name );
  refalrts::reinit_close_bracket( context[1] );
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

namespace /* unnamed */ {
refalrts::RefalFunction gen_NameNestedResultRec_L1S2L1(func_gen_NameNestedResultRec_L1S2L1, "NameNestedResultRec\\1$2\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_NameNestedResultRec_L1S3L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CallBrackets<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 7, 0, 0},
      // </0 & NameNestedResultRec\1$3\1/4 s.NextNumber#3/5 e.InBrackets#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.InBrackets#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.NextNumber#3/5 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: s.NextNumber3 #5/0 HalfReuse: (/4 } # CallBrackets/6 Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icAllocIdent, 0, 0, 6},
      {refalrts::icReinitSVar, 0, 5, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 4, 1, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 6, 6, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_NameNestedResultRec_L1S3L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_NameNestedResultRec_L1S3L1(
  "NameNestedResultRec\\1$3\\1",
  scope_gen_NameNestedResultRec_L1S3L1::raa,
  scope_gen_NameNestedResultRec_L1S3L1::functions,
  scope_gen_NameNestedResultRec_L1S3L1::idents,
  scope_gen_NameNestedResultRec_L1S3L1::numbers,
  scope_gen_NameNestedResultRec_L1S3L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_NameNestedResultRec_L1S3L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & NameNestedResultRec\1$3\1/4 s.NextNumber#3/5 e.InBrackets#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.InBrackets#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.NextNumber#3/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.NextNumber3 #5/0 HalfReuse: (/4 } # CallBrackets/6 Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_ident( context[6], & ident_CallBrackets<int>::name ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_NameNestedResultRec_L1S3L1(func_gen_NameNestedResultRec_L1S3L1, "NameNestedResultRec\\1$3\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_NameNestedResultRec_L1 {
    static refalrts::RefalFunction *functions[] = {
      & NameNestedBody,
      & Inc,
      & gen_NameNestedResultRec_L1S3L1,
      & NameNestedResultRec,
      & Fetch,
      & gen_NameNestedResultRec_L1S2L1,
      & refalrts::create_closure,
      & gen_NameNestedResultRec_L1S1L1
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Closure<int>::name,
      & ident_CallBrackets<int>::name,
      & ident_ADT_Brackets<int>::name,
      & ident_Brackets<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 4, 0, 0},
      {refalrts::icIssueMemory, 26, 0, 0},
      //FAST GEN: ( e.$ ) s.$ t.$
      //GLOBAL GEN: ( e.$ ) s.$ t.$
      // </0 & NameNestedResultRec\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 t.idxTV#0/10 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      {refalrts::icsVarLeft, 0, 9, 2},
      {refalrts::ictVarLeftSave, 0, 10, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +23, 0, 0},
      // ( e.idx ) s.idx ( # Brackets e.idx )
      // </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/5 )/8 s.NextNumber#2/9 (/10 # Brackets/14 e.InBrackets#2/12 )/11 >/1
      {refalrts::icBracketTerm, 0, 12, 10},
      {refalrts::icIdentLeftSave, 14, 3, 12},
      // closed e.MainName#1 as range 5
      // closed e.InBrackets#2 as range 12
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.NextNumber#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Fetch/14 } </15 Tile{ HalfReuse: & NameNestedResultRec/0 HalfReuse: s.NextNumber2 #9/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.InBrackets#2/12 } >/16 Tile{ HalfReuse: & NameNestedResultRec\1$1\1/11 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icReinitFunc, 0, 4, 14},
      {refalrts::icReinitFunc, 0, 3, 0},
      {refalrts::icReinitSVar, 0, 9, 4},
      {refalrts::icReinitFunc, 0, 7, 11},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 11},
      {refalrts::icSpliceTile, 16, 16, 0},
      {refalrts::icSpliceEVar, 0, 0, 12},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icSpliceTile, 10, 14, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +30, 0, 0},
      // ( e.idx ) s.idx ( # ADT-Brackets ( e.idx ) e.idx )
      // </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/5 )/8 s.NextNumber#2/9 (/10 # ADT-Brackets/14 (/17 e.Name#2/15 )/18 e.InBrackets#2/12 )/11 >/1
      {refalrts::icBracketTerm, 0, 12, 10},
      {refalrts::icIdentLeftSave, 14, 2, 12},
      {refalrts::icBracketLeftSave, 0, 15, 12},
      // closed e.MainName#1 as range 5
      // closed e.Name#2 as range 15
      // closed e.InBrackets#2 as range 12
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.NextNumber#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </19 & Fetch/20 </21 Tile{ HalfReuse: & NameNestedResultRec/0 HalfReuse: s.NextNumber2 #9/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.InBrackets#2/12 } >/22 </23 Tile{ HalfReuse: & @create_closure@/10 HalfReuse: & NameNestedResultRec\1$2\1/14 AsIs: (/17 AsIs: e.Name#2/15 AsIs: )/18 } Tile{ HalfReuse: >/11 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
      {refalrts::icAllocFunc, 0, 4, 20},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 21},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 23},
      {refalrts::icReinitFunc, 0, 3, 0},
      {refalrts::icReinitSVar, 0, 9, 4},
      {refalrts::icReinitFunc, 0, 6, 10},
      {refalrts::icReinitFunc, 0, 5, 14},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 23},
      {refalrts::icLinkBrackets, 17, 18, 0},
      {refalrts::icPushStack, 0, 0, 22},
      {refalrts::icPushStack, 0, 0, 21},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 11},
      {refalrts::icSpliceTile, 10, 18, 0},
      {refalrts::icSpliceTile, 22, 23, 0},
      {refalrts::icSpliceEVar, 0, 0, 12},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 19, 21, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +23, 0, 0},
      // ( e.idx ) s.idx ( # CallBrackets e.idx )
      // </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/5 )/8 s.NextNumber#2/9 (/10 # CallBrackets/14 e.InBrackets#2/12 )/11 >/1
      {refalrts::icBracketTerm, 0, 12, 10},
      {refalrts::icIdentLeftSave, 14, 1, 12},
      // closed e.MainName#1 as range 5
      // closed e.InBrackets#2 as range 12
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.NextNumber#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Fetch/14 } </15 Tile{ HalfReuse: & NameNestedResultRec/0 HalfReuse: s.NextNumber2 #9/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.InBrackets#2/12 } >/16 Tile{ HalfReuse: & NameNestedResultRec\1$3\1/11 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icReinitFunc, 0, 4, 14},
      {refalrts::icReinitFunc, 0, 3, 0},
      {refalrts::icReinitSVar, 0, 9, 4},
      {refalrts::icReinitFunc, 0, 2, 11},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 11},
      {refalrts::icSpliceTile, 16, 16, 0},
      {refalrts::icSpliceEVar, 0, 0, 12},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icSpliceTile, 10, 14, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +32, 0, 0},
      // ( e.idx ) s.idx ( # Closure e.idx )
      // </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/5 )/8 s.NextNumber#2/9 (/10 # Closure/14 e.Sentences#2/12 )/11 >/1
      {refalrts::icBracketTerm, 0, 12, 10},
      {refalrts::icIdentLeftSave, 14, 0, 12},
      // closed e.MainName#1 as range 5
      // closed e.Sentences#2 as range 12
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </15 & Inc/16 s.NextNumber#2/9/17 >/18 (/19 Tile{ AsIs: # Closure/14 } (/20 e.MainName#1/5/21 '\\'/23 s.NextNumber#2/9/24 )/25 Tile{ AsIs: </0 Reuse: & NameNestedBody/4 AsIs: (/7 AsIs: e.MainName#1/5 HalfReuse: '\\'/8 AsIs: s.NextNumber#2/9 HalfReuse: )/10 } Tile{ AsIs: e.Sentences#2/12 } Tile{ HalfReuse: >/11 HalfReuse: )/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocFunc, 0, 1, 16},
      {refalrts::icCopySTVar, 17, 9, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 20},
      {refalrts::icCopyEVar, 21, 5, 0},
      {refalrts::icAllocChar, 0, '\\', 23},
      {refalrts::icCopySTVar, 24, 9, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitChar, 0, '\\', 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 10},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 19, 1, 0},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 10, 0},
      {refalrts::icLinkBrackets, 20, 25, 0},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icSetRes, 0, 0, 11},
      {refalrts::icSpliceEVar, 0, 0, 12},
      {refalrts::icSpliceTile, 0, 10, 0},
      {refalrts::icSpliceTile, 20, 25, 0},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icSpliceTile, 15, 19, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) s.idx t.idx
      // </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/5 )/8 s.NextNumber#2/9 t.OtherTerm#2/10 >/1
      // closed e.MainName#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.NextNumber#2/9 AsIs: t.OtherTerm#2/10 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 9, 11, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_NameNestedResultRec_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_NameNestedResultRec_L1(
  "NameNestedResultRec\\1",
  scope_gen_NameNestedResultRec_L1::raa,
  scope_gen_NameNestedResultRec_L1::functions,
  scope_gen_NameNestedResultRec_L1::idents,
  scope_gen_NameNestedResultRec_L1::numbers,
  scope_gen_NameNestedResultRec_L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_NameNestedResultRec_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  //FAST GEN: ( e.$ ) s.$ t.$
  //GLOBAL GEN: ( e.$ ) s.$ t.$
  // </0 & NameNestedResultRec\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 t.idxTV#0/10 >/1
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
  // closed e.idxB#0 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx ( # Brackets e.idx )
    // </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/5 )/8 s.NextNumber#2/9 (/10 # Brackets/14 e.InBrackets#2/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    context[14] = refalrts::ident_left(  & ident_Brackets<int>::name, context[12], context[13] );
    if( ! context[14] )
      continue;
    // closed e.MainName#1 as range 5
    // closed e.InBrackets#2 as range 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.NextNumber#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Fetch/14 } </15 Tile{ HalfReuse: & NameNestedResultRec/0 HalfReuse: s.NextNumber2 #9/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.InBrackets#2/12 } >/16 Tile{ HalfReuse: & NameNestedResultRec\1$1\1/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_name( context[14], & Fetch );
    refalrts::reinit_name( context[0], & NameNestedResultRec );
    refalrts::reinit_svar( context[4], context[9] );
    refalrts::reinit_name( context[11], & gen_NameNestedResultRec_L1S1L1 );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx ( # ADT-Brackets ( e.idx ) e.idx )
    // </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/5 )/8 s.NextNumber#2/9 (/10 # ADT-Brackets/14 (/17 e.Name#2/15 )/18 e.InBrackets#2/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    context[14] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[12], context[13] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.MainName#1 as range 5
    // closed e.Name#2 as range 15
    // closed e.InBrackets#2 as range 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.NextNumber#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 & Fetch/20 </21 Tile{ HalfReuse: & NameNestedResultRec/0 HalfReuse: s.NextNumber2 #9/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.InBrackets#2/12 } >/22 </23 Tile{ HalfReuse: & @create_closure@/10 HalfReuse: & NameNestedResultRec\1$2\1/14 AsIs: (/17 AsIs: e.Name#2/15 AsIs: )/18 } Tile{ HalfReuse: >/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], & Fetch ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], & NameNestedResultRec );
    refalrts::reinit_svar( context[4], context[9] );
    refalrts::reinit_name( context[10], & refalrts::create_closure );
    refalrts::reinit_name( context[14], & gen_NameNestedResultRec_L1S2L1 );
    refalrts::reinit_close_call( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[10], context[18] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx ( # CallBrackets e.idx )
    // </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/5 )/8 s.NextNumber#2/9 (/10 # CallBrackets/14 e.InBrackets#2/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    context[14] = refalrts::ident_left(  & ident_CallBrackets<int>::name, context[12], context[13] );
    if( ! context[14] )
      continue;
    // closed e.MainName#1 as range 5
    // closed e.InBrackets#2 as range 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.NextNumber#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Fetch/14 } </15 Tile{ HalfReuse: & NameNestedResultRec/0 HalfReuse: s.NextNumber2 #9/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } Tile{ AsIs: e.InBrackets#2/12 } >/16 Tile{ HalfReuse: & NameNestedResultRec\1$3\1/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_name( context[14], & Fetch );
    refalrts::reinit_name( context[0], & NameNestedResultRec );
    refalrts::reinit_svar( context[4], context[9] );
    refalrts::reinit_name( context[11], & gen_NameNestedResultRec_L1S3L1 );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx ( # Closure e.idx )
    // </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/5 )/8 s.NextNumber#2/9 (/10 # Closure/14 e.Sentences#2/12 )/11 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    context[14] = refalrts::ident_left(  & ident_Closure<int>::name, context[12], context[13] );
    if( ! context[14] )
      continue;
    // closed e.MainName#1 as range 5
    // closed e.Sentences#2 as range 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & Inc/16 s.NextNumber#2/9/17 >/18 (/19 Tile{ AsIs: # Closure/14 } (/20 e.MainName#1/5/21 '\\'/23 s.NextNumber#2/9/24 )/25 Tile{ AsIs: </0 Reuse: & NameNestedBody/4 AsIs: (/7 AsIs: e.MainName#1/5 HalfReuse: '\\'/8 AsIs: s.NextNumber#2/9 HalfReuse: )/10 } Tile{ AsIs: e.Sentences#2/12 } Tile{ HalfReuse: >/11 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], & Inc ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[17], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[21], context[22], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], '\\' ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[24], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & NameNestedBody );
    refalrts::reinit_char( context[8], '\\' );
    refalrts::reinit_close_bracket( context[10] );
    refalrts::reinit_close_call( context[11] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::link_brackets( context[20], context[25] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[20], context[25] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) s.idx t.idx
  // </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/5 )/8 s.NextNumber#2/9 t.OtherTerm#2/10 >/1
  // closed e.MainName#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.NextNumber#2/9 AsIs: t.OtherTerm#2/10 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_NameNestedResultRec_L1(func_gen_NameNestedResultRec_L1, "NameNestedResultRec\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_NameNestedResultRec {
    static refalrts::RefalFunction *functions[] = {
      & MapReduce,
      & gen_NameNestedResultRec_L1,
      & refalrts::create_closure
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 15, 0, 0},
      // </0 & NameNestedResultRec/4 s.StartNumber#1/5 (/8 e.MainName#1/6 )/9 e.Result#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 6, 2},
      // closed e.MainName#1 as range 6
      // closed e.Result#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.StartNumber#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapReduce/4 } </10 & @create_closure@/11 & NameNestedResultRec\1/12 Tile{ AsIs: (/8 } Tile{ AsIs: e.MainName#1/6 } )/13 >/14 Tile{ HalfReuse: s.StartNumber1 #5/9 AsIs: e.Result#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icAllocFunc, 0, 2, 11},
      {refalrts::icAllocFunc, 0, 1, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitSVar, 0, 5, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icLinkBrackets, 8, 13, 0},
      {refalrts::icSetRes, 0, 0, 9},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icSpliceEVar, 0, 0, 6},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 10, 12, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_NameNestedResultRec

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction NameNestedResultRec(
  "NameNestedResultRec",
  scope_NameNestedResultRec::raa,
  scope_NameNestedResultRec::functions,
  scope_NameNestedResultRec::idents,
  scope_NameNestedResultRec::numbers,
  scope_NameNestedResultRec::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_NameNestedResultRec(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.StartNumber#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapReduce/4 } </10 & @create_closure@/11 & NameNestedResultRec\1/12 Tile{ AsIs: (/8 } Tile{ AsIs: e.MainName#1/6 } )/13 >/14 Tile{ HalfReuse: s.StartNumber1 #5/9 AsIs: e.Result#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], & gen_NameNestedResultRec_L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & MapReduce );
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[10] );
  refalrts::link_brackets( context[8], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction NameNestedResultRec(func_NameNestedResultRec, "NameNestedResultRec");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Pass_FlatNestedFuncs_L1S1L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Function<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 14, 0, 0},
      // </0 & Pass-FlatNestedFuncs\1$1\1/4 s.ScopeClass#2/5 (/8 e.Name#2/6 )/9 (/12 e.NestedFuncs#3/10 )/13 e.Body#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 6, 2},
      {refalrts::icBracketLeftSave, 0, 10, 2},
      // closed e.Name#2 as range 6
      // closed e.NestedFuncs#3 as range 10
      // closed e.Body#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/12 {REMOVED TILE} )/13 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.NestedFuncs#3/10 } Tile{ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#2/5 AsIs: (/8 AsIs: e.Name#2/6 AsIs: )/9 } Tile{ AsIs: e.Body#3/2 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 9, 0},
      {refalrts::icSpliceEVar, 0, 0, 10},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Pass_FlatNestedFuncs_L1S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_Pass_FlatNestedFuncs_L1S1L1(
  "Pass-FlatNestedFuncs\\1$1\\1",
  scope_gen_Pass_FlatNestedFuncs_L1S1L1::raa,
  scope_gen_Pass_FlatNestedFuncs_L1S1L1::functions,
  scope_gen_Pass_FlatNestedFuncs_L1S1L1::idents,
  scope_gen_Pass_FlatNestedFuncs_L1S1L1::numbers,
  scope_gen_Pass_FlatNestedFuncs_L1S1L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Pass_FlatNestedFuncs_L1S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Pass-FlatNestedFuncs\1$1\1/4 s.ScopeClass#2/5 (/8 e.Name#2/6 )/9 (/12 e.NestedFuncs#3/10 )/13 e.Body#3/2 >/1
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/12 {REMOVED TILE} )/13 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.NestedFuncs#3/10 } Tile{ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#2/5 AsIs: (/8 AsIs: e.Name#2/6 AsIs: )/9 } Tile{ AsIs: e.Body#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_Function<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_Pass_FlatNestedFuncs_L1S1L1(func_gen_Pass_FlatNestedFuncs_L1S1L1, "Pass-FlatNestedFuncs\\1$1\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Pass_FlatNestedFuncs_L1 {
    static refalrts::RefalFunction *functions[] = {
      & gen_Pass_FlatNestedFuncs_L1S1L1,
      & refalrts::create_closure,
      & ExtractNested,
      & Fetch
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Function<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 19, 0, 0},
      //FAST GEN: t.$
      //GLOBAL GEN: t.$
      // </0 & Pass-FlatNestedFuncs\1/4 t.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +26, 0, 0},
      // ( # Function s.idx ( e.idx ) e.idx )
      // </0 & Pass-FlatNestedFuncs\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Body#2/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 0, 7},
      {refalrts::icsVarLeft, 0, 10, 7},
      {refalrts::icBracketLeftSave, 0, 11, 7},
      // closed e.Name#2 as range 11
      // closed e.Body#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </15 & Fetch/16 </17 & ExtractNested/18 Tile{ AsIs: e.Body#2/7 } Tile{ HalfReuse: >/0 HalfReuse: </4 HalfReuse: & @create_closure@/5 HalfReuse: & Pass-FlatNestedFuncs\1$1\1/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 } Tile{ HalfReuse: >/6 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocFunc, 0, 3, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
      {refalrts::icAllocFunc, 0, 2, 18},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 1, 5},
      {refalrts::icReinitFunc, 0, 0, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icSetRes, 0, 0, 6},
      {refalrts::icSpliceTile, 0, 14, 0},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 15, 18, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // t.idx
      // </0 & Pass-FlatNestedFuncs\1/4 t.OtherProgramElement#2/5 >/1
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Pass-FlatNestedFuncs\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/5 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Pass_FlatNestedFuncs_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_Pass_FlatNestedFuncs_L1(
  "Pass-FlatNestedFuncs\\1",
  scope_gen_Pass_FlatNestedFuncs_L1::raa,
  scope_gen_Pass_FlatNestedFuncs_L1::functions,
  scope_gen_Pass_FlatNestedFuncs_L1::idents,
  scope_gen_Pass_FlatNestedFuncs_L1::numbers,
  scope_gen_Pass_FlatNestedFuncs_L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Pass_FlatNestedFuncs_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & Pass-FlatNestedFuncs\1/4 t.idx#0/5 >/1
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
  do {
    refalrts::start_sentence();
    // ( # Function s.idx ( e.idx ) e.idx )
    // </0 & Pass-FlatNestedFuncs\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Body#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_Function<int>::name, context[7], context[8] );
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

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & Fetch/16 </17 & ExtractNested/18 Tile{ AsIs: e.Body#2/7 } Tile{ HalfReuse: >/0 HalfReuse: </4 HalfReuse: & @create_closure@/5 HalfReuse: & Pass-FlatNestedFuncs\1$1\1/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 } Tile{ HalfReuse: >/6 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], & Fetch ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], & ExtractNested ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], & refalrts::create_closure );
    refalrts::reinit_name( context[9], & gen_Pass_FlatNestedFuncs_L1S1L1 );
    refalrts::reinit_close_call( context[6] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[15], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // t.idx
  // </0 & Pass-FlatNestedFuncs\1/4 t.OtherProgramElement#2/5 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-FlatNestedFuncs\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_Pass_FlatNestedFuncs_L1(func_gen_Pass_FlatNestedFuncs_L1, "Pass-FlatNestedFuncs\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Pass_FlatNestedFuncs {
    static refalrts::RefalFunction *functions[] = {
      & gen_Pass_FlatNestedFuncs_L1,
      & Map
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 6, 0, 0},
      // </0 & Pass-FlatNestedFuncs/4 e.AST#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.AST#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Pass-FlatNestedFuncs\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Pass_FlatNestedFuncs

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction Pass_FlatNestedFuncs(
  "Pass-FlatNestedFuncs",
  scope_Pass_FlatNestedFuncs::raa,
  scope_Pass_FlatNestedFuncs::functions,
  scope_Pass_FlatNestedFuncs::idents,
  scope_Pass_FlatNestedFuncs::numbers,
  scope_Pass_FlatNestedFuncs::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_Pass_FlatNestedFuncs(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Pass-FlatNestedFuncs/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Pass-FlatNestedFuncs\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Map );
  refalrts::update_name( context[4], & gen_Pass_FlatNestedFuncs_L1 );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction Pass_FlatNestedFuncs(func_Pass_FlatNestedFuncs, "Pass-FlatNestedFuncs");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractNested_L1 {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 13, 0, 0},
      // </0 & ExtractNested\1/4 (/7 )/8 (/11 e.NestedFuncs#2/9 )/12 e.Sentences#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 5},
      // closed e.NestedFuncs#2 as range 9
      // closed e.Sentences#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractNested\1/4 (/7 )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.NestedFuncs#2/9 AsIs: )/12 } Tile{ AsIs: e.Sentences#2/2 } Tile{ ]] }
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractNested_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractNested_L1(
  "ExtractNested\\1",
  scope_gen_ExtractNested_L1::raa,
  scope_gen_ExtractNested_L1::functions,
  scope_gen_ExtractNested_L1::idents,
  scope_gen_ExtractNested_L1::numbers,
  scope_gen_ExtractNested_L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractNested_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ExtractNested\1/4 (/7 )/8 (/11 e.NestedFuncs#2/9 )/12 e.Sentences#2/2 >/1
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractNested\1/4 (/7 )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.NestedFuncs#2/9 AsIs: )/12 } Tile{ AsIs: e.Sentences#2/2 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractNested_L1(func_gen_ExtractNested_L1, "ExtractNested\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ExtractNested {
    static refalrts::RefalFunction *functions[] = {
      & Fetch,
      & gen_ExtractNested_L1,
      & ExtractNestedRec
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 11, 0, 0},
      // </0 & ExtractNested/4 e.Sentences#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Sentences#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & ExtractNestedRec/6 (/7 )/8 Tile{ AsIs: e.Sentences#1/2 } >/9 & ExtractNested\1/10 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icAllocFunc, 0, 2, 6},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 8},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icAllocFunc, 0, 1, 10},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 5, 8, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ExtractNested

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction ExtractNested(
  "ExtractNested",
  scope_ExtractNested::raa,
  scope_ExtractNested::functions,
  scope_ExtractNested::idents,
  scope_ExtractNested::numbers,
  scope_ExtractNested::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_ExtractNested(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & ExtractNested/4 e.Sentences#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Sentences#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & ExtractNestedRec/6 (/7 )/8 Tile{ AsIs: e.Sentences#1/2 } >/9 & ExtractNested\1/10 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & ExtractNestedRec ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & gen_ExtractNested_L1 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction ExtractNested(func_ExtractNested, "ExtractNested");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractNestedRec_S1L1L1L1 {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 20, 0, 0},
      // </0 & ExtractNestedRec$1\1\1\1/4 (/7 e.Pattern#2/5 )/8 (/11 e.NestedFuncs#4/9 )/12 (/15 e.BorrowedVars#4/13 )/16 e.Result#4/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 13, 2},
      // closed e.Pattern#2 as range 5
      // closed e.NestedFuncs#4 as range 9
      // closed e.BorrowedVars#4 as range 13
      // closed e.Result#4 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 AsIs: (/11 AsIs: e.NestedFuncs#4/9 AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#4/13 AsIs: )/16 } Tile{ HalfReuse: )/0 HalfReuse: (/4 AsIs: (/7 } Tile{ AsIs: e.Pattern#2/5 } )/17 (/18 Tile{ AsIs: e.Result#4/2 } )/19 Tile{ HalfReuse: )/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 4, 1, 0},
      {refalrts::icLinkBrackets, 18, 19, 0},
      {refalrts::icLinkBrackets, 7, 17, 0},
      {refalrts::icLinkBrackets, 8, 0, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 19, 19, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 17, 18, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 0, 7, 0},
      {refalrts::icSpliceTile, 8, 16, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractNestedRec_S1L1L1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractNestedRec_S1L1L1L1(
  "ExtractNestedRec$1\\1\\1\\1",
  scope_gen_ExtractNestedRec_S1L1L1L1::raa,
  scope_gen_ExtractNestedRec_S1L1L1L1::functions,
  scope_gen_ExtractNestedRec_S1L1L1L1::idents,
  scope_gen_ExtractNestedRec_S1L1L1L1::numbers,
  scope_gen_ExtractNestedRec_S1L1L1L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractNestedRec_S1L1L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ExtractNestedRec$1\1\1\1/4 (/7 e.Pattern#2/5 )/8 (/11 e.NestedFuncs#4/9 )/12 (/15 e.BorrowedVars#4/13 )/16 e.Result#4/2 >/1
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
  // closed e.Pattern#2 as range 5
  // closed e.NestedFuncs#4 as range 9
  // closed e.BorrowedVars#4 as range 13
  // closed e.Result#4 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 AsIs: (/11 AsIs: e.NestedFuncs#4/9 AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#4/13 AsIs: )/16 } Tile{ HalfReuse: )/0 HalfReuse: (/4 AsIs: (/7 } Tile{ AsIs: e.Pattern#2/5 } )/17 (/18 Tile{ AsIs: e.Result#4/2 } )/19 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[7], context[17] );
  refalrts::link_brackets( context[8], context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractNestedRec_S1L1L1L1(func_gen_ExtractNestedRec_S1L1L1L1, "ExtractNestedRec$1\\1\\1\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractNestedRec_S1L1L1 {
    static refalrts::RefalFunction *functions[] = {
      & gen_ExtractNestedRec_S1L1L1L1,
      & ExtractNested_Result,
      & refalrts::create_closure,
      & Fetch
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 32, 0, 0},
      // </0 & ExtractNestedRec$1\1\1/4 (/7 e.NestedFuncs#2/5 )/8 (/11 e.ScopeVars#1/9 )/12 (/15 e.Result#2/13 )/16 (/19 e.Pattern#2/17 )/20 (/23 e.BorrowedVars#3/21 )/24 e.LocalVars#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 13, 2},
      {refalrts::icBracketLeftSave, 0, 17, 2},
      {refalrts::icBracketLeftSave, 0, 21, 2},
      // closed e.NestedFuncs#2 as range 5
      // closed e.ScopeVars#1 as range 9
      // closed e.Result#2 as range 13
      // closed e.Pattern#2 as range 17
      // closed e.BorrowedVars#3 as range 21
      // closed e.LocalVars#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </25 & Fetch/26 Tile{ AsIs: </0 Reuse: & ExtractNested-Result/4 AsIs: (/7 AsIs: e.NestedFuncs#2/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.BorrowedVars#3/21 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.ScopeVars#1/9 } )/27 (/28 Tile{ AsIs: e.LocalVars#3/2 } Tile{ AsIs: )/24 } Tile{ AsIs: e.Result#2/13 } >/29 </30 & @create_closure@/31 Tile{ HalfReuse: & ExtractNestedRec$1\1\1\1/16 AsIs: (/19 AsIs: e.Pattern#2/17 AsIs: )/20 HalfReuse: >/23 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 25},
      {refalrts::icAllocFunc, 0, 3, 26},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 28},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 29},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 30},
      {refalrts::icAllocFunc, 0, 2, 31},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitFunc, 0, 0, 16},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 23},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 25},
      {refalrts::icPushStack, 0, 0, 23},
      {refalrts::icPushStack, 0, 0, 30},
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icPushStack, 0, 0, 29},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 28, 24, 0},
      {refalrts::icLinkBrackets, 15, 27, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 16, 23, 0},
      {refalrts::icSpliceTile, 29, 31, 0},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icSpliceTile, 24, 24, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 27, 28, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 12, 15, 0},
      {refalrts::icSpliceEVar, 0, 0, 21},
      {refalrts::icSpliceTile, 0, 11, 0},
      {refalrts::icSpliceTile, 25, 26, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractNestedRec_S1L1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractNestedRec_S1L1L1(
  "ExtractNestedRec$1\\1\\1",
  scope_gen_ExtractNestedRec_S1L1L1::raa,
  scope_gen_ExtractNestedRec_S1L1L1::functions,
  scope_gen_ExtractNestedRec_S1L1L1::idents,
  scope_gen_ExtractNestedRec_S1L1L1::numbers,
  scope_gen_ExtractNestedRec_S1L1L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractNestedRec_S1L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & ExtractNestedRec$1\1\1/4 (/7 e.NestedFuncs#2/5 )/8 (/11 e.ScopeVars#1/9 )/12 (/15 e.Result#2/13 )/16 (/19 e.Pattern#2/17 )/20 (/23 e.BorrowedVars#3/21 )/24 e.LocalVars#3/2 >/1
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
  // closed e.NestedFuncs#2 as range 5
  // closed e.ScopeVars#1 as range 9
  // closed e.Result#2 as range 13
  // closed e.Pattern#2 as range 17
  // closed e.BorrowedVars#3 as range 21
  // closed e.LocalVars#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </25 & Fetch/26 Tile{ AsIs: </0 Reuse: & ExtractNested-Result/4 AsIs: (/7 AsIs: e.NestedFuncs#2/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.BorrowedVars#3/21 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.ScopeVars#1/9 } )/27 (/28 Tile{ AsIs: e.LocalVars#3/2 } Tile{ AsIs: )/24 } Tile{ AsIs: e.Result#2/13 } >/29 </30 & @create_closure@/31 Tile{ HalfReuse: & ExtractNestedRec$1\1\1\1/16 AsIs: (/19 AsIs: e.Pattern#2/17 AsIs: )/20 HalfReuse: >/23 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], & Fetch ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[31], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & ExtractNested_Result );
  refalrts::reinit_name( context[16], & gen_ExtractNestedRec_S1L1L1L1 );
  refalrts::reinit_close_call( context[23] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[30] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[28], context[24] );
  refalrts::link_brackets( context[15], context[27] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[23] );
  res = refalrts::splice_evar( res, context[29], context[31] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractNestedRec_S1L1L1(func_gen_ExtractNestedRec_S1L1L1, "ExtractNestedRec$1\\1\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractNestedRec_S1L1 {
    static refalrts::RefalFunction *functions[] = {
      & gen_ExtractNestedRec_S1L1L1,
      & refalrts::create_closure,
      & ExtractNested_Pattern,
      & Fetch
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 42, 0, 0},
      // </0 & ExtractNestedRec$1\1/4 (/7 e.ScopeVars#1/5 )/8 (/11 (/15 e.NestedFuncs#2/13 )/16 (/19 e.BorrowedVars#2/17 )/20 )/12 (/23 (/27 e.Pattern#2/25 )/28 (/31 e.Result#2/29 )/32 )/24 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 13, 9},
      {refalrts::icBracketLeftSave, 0, 17, 9},
      {refalrts::icBracketLeftSave, 0, 21, 2},
      {refalrts::icBracketLeftSave, 0, 25, 21},
      {refalrts::icBracketLeftSave, 0, 29, 21},
      {refalrts::icEmpty, 0, 0, 9},
      {refalrts::icEmpty, 0, 0, 21},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.ScopeVars#1 as range 5
      // closed e.NestedFuncs#2 as range 13
      // closed e.BorrowedVars#2 as range 17
      // closed e.Pattern#2 as range 25
      // closed e.Result#2 as range 29
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </33 & Fetch/34 Tile{ AsIs: </0 Reuse: & ExtractNested-Pattern/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.BorrowedVars#2/17 } )/35 Tile{ AsIs: e.Pattern#2/25 } Tile{ HalfReuse: >/20 HalfReuse: </12 HalfReuse: & @create_closure@/23 HalfReuse: & ExtractNestedRec$1\1\1/27 } Tile{ AsIs: (/15 AsIs: e.NestedFuncs#2/13 AsIs: )/16 AsIs: (/19 } e.ScopeVars#1/5/36 Tile{ AsIs: )/28 AsIs: (/31 AsIs: e.Result#2/29 AsIs: )/32 HalfReuse: (/24 } e.Pattern#2/25/38 )/40 >/41 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 33},
      {refalrts::icAllocFunc, 0, 3, 34},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 35},
      {refalrts::icCopyEVar, 36, 5, 0},
      {refalrts::icCopyEVar, 38, 25, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 40},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 41},
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 20},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 12},
      {refalrts::icReinitFunc, 0, 1, 23},
      {refalrts::icReinitFunc, 0, 0, 27},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 24},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 33},
      {refalrts::icPushStack, 0, 0, 41},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icLinkBrackets, 24, 40, 0},
      {refalrts::icLinkBrackets, 31, 32, 0},
      {refalrts::icLinkBrackets, 19, 28, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 11, 35, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 40, 41, 0},
      {refalrts::icSpliceTile, 38, 39, 0},
      {refalrts::icSpliceTile, 28, 24, 0},
      {refalrts::icSpliceTile, 36, 37, 0},
      {refalrts::icSpliceTile, 15, 19, 0},
      {refalrts::icSpliceTile, 20, 27, 0},
      {refalrts::icSpliceEVar, 0, 0, 25},
      {refalrts::icSpliceTile, 35, 35, 0},
      {refalrts::icSpliceEVar, 0, 0, 17},
      {refalrts::icSpliceTile, 0, 11, 0},
      {refalrts::icSpliceTile, 33, 34, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractNestedRec_S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractNestedRec_S1L1(
  "ExtractNestedRec$1\\1",
  scope_gen_ExtractNestedRec_S1L1::raa,
  scope_gen_ExtractNestedRec_S1L1::functions,
  scope_gen_ExtractNestedRec_S1L1::idents,
  scope_gen_ExtractNestedRec_S1L1::numbers,
  scope_gen_ExtractNestedRec_S1L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractNestedRec_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & ExtractNestedRec$1\1/4 (/7 e.ScopeVars#1/5 )/8 (/11 (/15 e.NestedFuncs#2/13 )/16 (/19 e.BorrowedVars#2/17 )/20 )/12 (/23 (/27 e.Pattern#2/25 )/28 (/31 e.Result#2/29 )/32 )/24 >/1
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
  context[19] = refalrts::brackets_left( context[17], context[18], context[9], context[10] );
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
  context[27] = refalrts::brackets_left( context[25], context[26], context[21], context[22] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[21], context[22] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[21], context[22] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 5
  // closed e.NestedFuncs#2 as range 13
  // closed e.BorrowedVars#2 as range 17
  // closed e.Pattern#2 as range 25
  // closed e.Result#2 as range 29

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </33 & Fetch/34 Tile{ AsIs: </0 Reuse: & ExtractNested-Pattern/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.BorrowedVars#2/17 } )/35 Tile{ AsIs: e.Pattern#2/25 } Tile{ HalfReuse: >/20 HalfReuse: </12 HalfReuse: & @create_closure@/23 HalfReuse: & ExtractNestedRec$1\1\1/27 } Tile{ AsIs: (/15 AsIs: e.NestedFuncs#2/13 AsIs: )/16 AsIs: (/19 } e.ScopeVars#1/5/36 Tile{ AsIs: )/28 AsIs: (/31 AsIs: e.Result#2/29 AsIs: )/32 HalfReuse: (/24 } e.Pattern#2/25/38 )/40 >/41 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[34], & Fetch ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[36], context[37], context[5], context[6]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[38], context[39], context[25], context[26]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[41] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & ExtractNested_Pattern );
  refalrts::reinit_close_call( context[20] );
  refalrts::reinit_open_call( context[12] );
  refalrts::reinit_name( context[23], & refalrts::create_closure );
  refalrts::reinit_name( context[27], & gen_ExtractNestedRec_S1L1L1 );
  refalrts::reinit_open_bracket( context[24] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[33] );
  refalrts::push_stack( context[41] );
  refalrts::push_stack( context[12] );
  refalrts::link_brackets( context[24], context[40] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[19], context[28] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[35] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[40], context[41] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[28], context[24] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[15], context[19] );
  res = refalrts::splice_evar( res, context[20], context[27] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[35], context[35] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractNestedRec_S1L1(func_gen_ExtractNestedRec_S1L1, "ExtractNestedRec$1\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractNestedRec_S1L2 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Sentences<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 17, 0, 0},
      // </0 & ExtractNestedRec$1\2/4 (/7 (/11 e.NestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 )/8 e.Sentences#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 5},
      {refalrts::icBracketLeftSave, 0, 13, 5},
      {refalrts::icEmpty, 0, 0, 5},
      // closed e.NestedFuncs#2 as range 9
      // closed e.BorrowedVars#2 as range 13
      // closed e.Sentences#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} & ExtractNestedRec$1\2/4 {REMOVED TILE} {REMOVED TILE} )/16 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.BorrowedVars#2/13 } Tile{ HalfReuse: )/7 AsIs: (/11 AsIs: e.NestedFuncs#2/9 AsIs: )/12 HalfReuse: # Sentences/15 } Tile{ AsIs: e.Sentences#2/2 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
      {refalrts::icReinitIdent, 0, 0, 15},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 0, 7, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 7, 15, 0},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractNestedRec_S1L2

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractNestedRec_S1L2(
  "ExtractNestedRec$1\\2",
  scope_gen_ExtractNestedRec_S1L2::raa,
  scope_gen_ExtractNestedRec_S1L2::functions,
  scope_gen_ExtractNestedRec_S1L2::idents,
  scope_gen_ExtractNestedRec_S1L2::numbers,
  scope_gen_ExtractNestedRec_S1L2::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractNestedRec_S1L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractNestedRec$1\2/4 (/7 (/11 e.NestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 )/8 e.Sentences#2/2 >/1
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & ExtractNestedRec$1\2/4 {REMOVED TILE} {REMOVED TILE} )/16 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.BorrowedVars#2/13 } Tile{ HalfReuse: )/7 AsIs: (/11 AsIs: e.NestedFuncs#2/9 AsIs: )/12 HalfReuse: # Sentences/15 } Tile{ AsIs: e.Sentences#2/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_ident( context[15], & ident_Sentences<int>::name );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractNestedRec_S1L2(func_gen_ExtractNestedRec_S1L2, "ExtractNestedRec$1\\2");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ExtractNestedRec {
    static refalrts::RefalFunction *functions[] = {
      & gen_ExtractNestedRec_S1L1,
      & refalrts::create_closure,
      & gen_ExtractNestedRec_S1L2,
      & MapReduce,
      & Fetch
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NativeBody<int>::name,
      & ident_Sentences<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 23, 0, 0},
      //FAST GEN: ( e.$ ) s.$ e.$
      //GLOBAL GEN: ( e.$ ) s.$ e.$
      // </0 & ExtractNestedRec/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      {refalrts::icsVarLeft, 0, 9, 2},
      // closed e.idxTV#0 as range 2
      {refalrts::icOnFailGoTo, +35, 0, 0},
      // ( e.idx ) # Sentences e.idx
      // </0 & ExtractNestedRec/4 (/7 e.ScopeVars#1/5 )/8 # Sentences/9 e.Sentences#1/2 >/1
      {refalrts::icIdentTerm, 0, 1, 9},
      // closed e.ScopeVars#1 as range 5
      // closed e.Sentences#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </10 & Fetch/11 </12 & MapReduce/13 </14 Tile{ HalfReuse: & @create_closure@/0 Reuse: & ExtractNestedRec$1\1/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 HalfReuse: >/9 } (/15 (/16 )/17 (/18 )/19 )/20 Tile{ AsIs: e.Sentences#1/2 } >/21 & ExtractNestedRec$1\2/22 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icAllocFunc, 0, 4, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 12},
      {refalrts::icAllocFunc, 0, 3, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 20},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
      {refalrts::icAllocFunc, 0, 2, 22},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 21},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icLinkBrackets, 15, 20, 0},
      {refalrts::icLinkBrackets, 18, 19, 0},
      {refalrts::icLinkBrackets, 16, 17, 0},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 21, 22, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 15, 20, 0},
      {refalrts::icSpliceTile, 0, 9, 0},
      {refalrts::icSpliceTile, 10, 14, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) # NativeBody t.idx e.idx
      // </0 & ExtractNestedRec/4 (/7 e.ScopeVars#1/5 )/8 # NativeBody/9 t.SrcPos#1/10 e.Code#1/2 >/1
      {refalrts::icIdentTerm, 0, 0, 9},
      // closed e.ScopeVars#1 as range 5
      {refalrts::ictVarLeftSave, 0, 10, 2},
      // closed e.Code#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} e.ScopeVars#1/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: # NativeBody/9 AsIs: t.SrcPos#1/10 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 0, 4, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ExtractNestedRec

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction ExtractNestedRec(
  "ExtractNestedRec",
  scope_ExtractNestedRec::raa,
  scope_ExtractNestedRec::functions,
  scope_ExtractNestedRec::idents,
  scope_ExtractNestedRec::numbers,
  scope_ExtractNestedRec::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_ExtractNestedRec(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  //FAST GEN: ( e.$ ) s.$ e.$
  //GLOBAL GEN: ( e.$ ) s.$ e.$
  // </0 & ExtractNestedRec/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
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
  // closed e.idxB#0 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) # Sentences e.idx
    // </0 & ExtractNestedRec/4 (/7 e.ScopeVars#1/5 )/8 # Sentences/9 e.Sentences#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Sentences<int>::name, context[9] ) )
      continue;
    // closed e.ScopeVars#1 as range 5
    // closed e.Sentences#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </10 & Fetch/11 </12 & MapReduce/13 </14 Tile{ HalfReuse: & @create_closure@/0 Reuse: & ExtractNestedRec$1\1/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 HalfReuse: >/9 } (/15 (/16 )/17 (/18 )/19 )/20 Tile{ AsIs: e.Sentences#1/2 } >/21 & ExtractNestedRec$1\2/22 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], & Fetch ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], & MapReduce ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], & gen_ExtractNestedRec_S1L2 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], & refalrts::create_closure );
    refalrts::update_name( context[4], & gen_ExtractNestedRec_S1L1 );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[15], context[20] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[15], context[20] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) # NativeBody t.idx e.idx
  // </0 & ExtractNestedRec/4 (/7 e.ScopeVars#1/5 )/8 # NativeBody/9 t.SrcPos#1/10 e.Code#1/2 >/1
  if( ! refalrts::ident_term(  & ident_NativeBody<int>::name, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 5
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.ScopeVars#1/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: # NativeBody/9 AsIs: t.SrcPos#1/10 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction ExtractNestedRec(func_ExtractNestedRec, "ExtractNestedRec");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractNested_Pattern_L1 {
    static refalrts::RefalFunction *functions[] = {
      & FindBorrowedVars,
      & MapReduce
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 16, 0, 0},
      // </0 & ExtractNested-Pattern\1/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.BorrowedVars#2/9 )/12 e.LocalVars#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      // closed e.ScopeVars#1 as range 5
      // closed e.BorrowedVars#2 as range 9
      // closed e.LocalVars#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </13 & MapReduce/14 Tile{ HalfReuse: & FindBorrowedVars/0 HalfReuse: (/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.BorrowedVars#2/9 AsIs: )/12 } )/15 Tile{ AsIs: e.LocalVars#2/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocFunc, 0, 1, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 15},
      {refalrts::icReinitFunc, 0, 0, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icLinkBrackets, 4, 15, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icSpliceTile, 0, 12, 0},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractNested_Pattern_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractNested_Pattern_L1(
  "ExtractNested-Pattern\\1",
  scope_gen_ExtractNested_Pattern_L1::raa,
  scope_gen_ExtractNested_Pattern_L1::functions,
  scope_gen_ExtractNested_Pattern_L1::idents,
  scope_gen_ExtractNested_Pattern_L1::numbers,
  scope_gen_ExtractNested_Pattern_L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractNested_Pattern_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & ExtractNested-Pattern\1/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.BorrowedVars#2/9 )/12 e.LocalVars#2/2 >/1
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
  // closed e.BorrowedVars#2 as range 9
  // closed e.LocalVars#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 & MapReduce/14 Tile{ HalfReuse: & FindBorrowedVars/0 HalfReuse: (/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.BorrowedVars#2/9 AsIs: )/12 } )/15 Tile{ AsIs: e.LocalVars#2/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], & MapReduce ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & FindBorrowedVars );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[4], context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractNested_Pattern_L1(func_gen_ExtractNested_Pattern_L1, "ExtractNested-Pattern\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractNested_Pattern_L2 {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 17, 0, 0},
      // </0 & ExtractNested-Pattern\2/4 (/7 (/11 e.ScopeVars#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 )/8 e.LocalVars#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 5},
      {refalrts::icBracketLeftSave, 0, 13, 5},
      {refalrts::icEmpty, 0, 0, 5},
      // closed e.ScopeVars#2 as range 9
      // closed e.BorrowedVars#2 as range 13
      // closed e.LocalVars#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractNested-Pattern\2/4 (/7 (/11 e.ScopeVars#2/9 )/12 {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: e.BorrowedVars#2/13 AsIs: )/16 } Tile{ AsIs: e.LocalVars#2/2 } Tile{ ]] }
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractNested_Pattern_L2

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractNested_Pattern_L2(
  "ExtractNested-Pattern\\2",
  scope_gen_ExtractNested_Pattern_L2::raa,
  scope_gen_ExtractNested_Pattern_L2::functions,
  scope_gen_ExtractNested_Pattern_L2::idents,
  scope_gen_ExtractNested_Pattern_L2::numbers,
  scope_gen_ExtractNested_Pattern_L2::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractNested_Pattern_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractNested-Pattern\2/4 (/7 (/11 e.ScopeVars#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 )/8 e.LocalVars#2/2 >/1
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
  // closed e.ScopeVars#2 as range 9
  // closed e.BorrowedVars#2 as range 13
  // closed e.LocalVars#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractNested-Pattern\2/4 (/7 (/11 e.ScopeVars#2/9 )/12 {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: e.BorrowedVars#2/13 AsIs: )/16 } Tile{ AsIs: e.LocalVars#2/2 } Tile{ ]] }
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractNested_Pattern_L2(func_gen_ExtractNested_Pattern_L2, "ExtractNested-Pattern\\2");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ExtractNested_Pattern {
    static refalrts::RefalFunction *functions[] = {
      & gen_ExtractNested_Pattern_L1,
      & refalrts::create_closure,
      & gen_ExtractNested_Pattern_L2,
      & RemoveBorrowedVars,
      & MapReduce,
      & Uniq,
      & ExtractAllVars,
      & Seq,
      & Fetch
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 27, 0, 0},
      // </0 & ExtractNested-Pattern/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.BorrowedVars#1/9 )/12 e.Pattern#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      // closed e.ScopeVars#1 as range 5
      // closed e.BorrowedVars#1 as range 9
      // closed e.Pattern#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </13 & Fetch/14 Tile{ AsIs: e.Pattern#1/2 } </15 & Seq/16 & ExtractAllVars/17 & Uniq/18 (/19 & MapReduce/20 & RemoveBorrowedVars/21 (/22 Tile{ AsIs: e.BorrowedVars#1/9 } )/23 Tile{ AsIs: )/12 } </24 Tile{ HalfReuse: & @create_closure@/0 Reuse: & ExtractNested-Pattern\1/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 HalfReuse: >/11 } & ExtractNested-Pattern\2/25 >/26 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocFunc, 0, 8, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocFunc, 0, 7, 16},
      {refalrts::icAllocFunc, 0, 6, 17},
      {refalrts::icAllocFunc, 0, 5, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
      {refalrts::icAllocFunc, 0, 4, 20},
      {refalrts::icAllocFunc, 0, 3, 21},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 24},
      {refalrts::icAllocFunc, 0, 2, 25},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 26},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 26},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 24},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 19, 12, 0},
      {refalrts::icLinkBrackets, 22, 23, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 25, 26, 0},
      {refalrts::icSpliceTile, 0, 11, 0},
      {refalrts::icSpliceTile, 24, 24, 0},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 23, 23, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 15, 22, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ExtractNested_Pattern

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction ExtractNested_Pattern(
  "ExtractNested-Pattern",
  scope_ExtractNested_Pattern::raa,
  scope_ExtractNested_Pattern::functions,
  scope_ExtractNested_Pattern::idents,
  scope_ExtractNested_Pattern::numbers,
  scope_ExtractNested_Pattern::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_ExtractNested_Pattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 & Fetch/14 Tile{ AsIs: e.Pattern#1/2 } </15 & Seq/16 & ExtractAllVars/17 & Uniq/18 (/19 & MapReduce/20 & RemoveBorrowedVars/21 (/22 Tile{ AsIs: e.BorrowedVars#1/9 } )/23 Tile{ AsIs: )/12 } </24 Tile{ HalfReuse: & @create_closure@/0 Reuse: & ExtractNested-Pattern\1/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 HalfReuse: >/11 } & ExtractNested-Pattern\2/25 >/26 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], & Fetch ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], & Seq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], & ExtractAllVars ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], & Uniq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], & MapReduce ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], & RemoveBorrowedVars ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], & gen_ExtractNested_Pattern_L2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & refalrts::create_closure );
  refalrts::update_name( context[4], & gen_ExtractNested_Pattern_L1 );
  refalrts::reinit_close_call( context[11] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[24] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[19], context[12] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction ExtractNested_Pattern(func_ExtractNested_Pattern, "ExtractNested-Pattern");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ExtractAllVars {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_ADT_Brackets<int>::name,
      & ident_Brackets<int>::name,
      & ident_TkVariable<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 4, 0, 0},
      {refalrts::icIssueMemory, 13, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & ExtractAllVars/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // ( # TkVariable s.idx e.idx ) e.idx
      // </0 & ExtractAllVars/4 (/7 # TkVariable/9 s.Mode#1/10 e.Index#1/5 )/8 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 11, 2},
      {refalrts::icBracketLeftSave, 0, 5, 11},
      {refalrts::icIdentLeftSave, 9, 2, 5},
      // closed e.Tail#1 as range 11(2)
      {refalrts::icsVarLeft, 0, 10, 5},
      // closed e.Index#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 AsIs: s.Mode#1/10 AsIs: e.Index#1/5 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Tail#1/11(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 9, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 11},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 9, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // ( # Brackets e.idx ) e.idx
      // </0 & ExtractAllVars/4 (/7 # Brackets/9 e.Inner#1/5 )/8 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 11, 2},
      {refalrts::icBracketLeftSave, 0, 5, 11},
      {refalrts::icIdentLeftSave, 9, 1, 5},
      // closed e.Inner#1 as range 5
      // closed e.Tail#1 as range 11(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 # Brackets/9 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Inner#1/5 } Tile{ AsIs: e.Tail#1/11(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 11},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // ( # ADT-Brackets e.idx ) e.idx
      // </0 & ExtractAllVars/4 (/7 # ADT-Brackets/9 e.Inner#1/5 )/8 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 11, 2},
      {refalrts::icBracketLeftSave, 0, 5, 11},
      {refalrts::icIdentLeftSave, 9, 0, 5},
      // closed e.Inner#1 as range 5
      // closed e.Tail#1 as range 11(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 # ADT-Brackets/9 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Inner#1/5 } Tile{ AsIs: e.Tail#1/11(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 11},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // t.idx e.idx
      // </0 & ExtractAllVars/4 t.OtherTerm#1/5 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 11, 2},
      {refalrts::ictVarLeftSave, 0, 5, 11},
      // closed e.Tail#1 as range 11(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} t.OtherTerm#1/5 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Tail#1/11(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 11},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      //
      // </0 & ExtractAllVars/4 >/1
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractAllVars/4 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ExtractAllVars

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction ExtractAllVars(
  "ExtractAllVars",
  scope_ExtractAllVars::raa,
  scope_ExtractAllVars::functions,
  scope_ExtractAllVars::idents,
  scope_ExtractAllVars::numbers,
  scope_ExtractAllVars::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_ExtractAllVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & ExtractAllVars/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // ( # TkVariable s.idx e.idx ) e.idx
    // </0 & ExtractAllVars/4 (/7 # TkVariable/9 s.Mode#1/10 e.Index#1/5 )/8 e.Tail#1/2 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[11], context[12] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 11(2)
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 AsIs: s.Mode#1/10 AsIs: e.Index#1/5 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Tail#1/11(2) } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[9], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Brackets e.idx ) e.idx
    // </0 & ExtractAllVars/4 (/7 # Brackets/9 e.Inner#1/5 )/8 e.Tail#1/2 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[11], context[12] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Inner#1 as range 5
    // closed e.Tail#1 as range 11(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 # Brackets/9 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Inner#1/5 } Tile{ AsIs: e.Tail#1/11(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # ADT-Brackets e.idx ) e.idx
    // </0 & ExtractAllVars/4 (/7 # ADT-Brackets/9 e.Inner#1/5 )/8 e.Tail#1/2 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[11], context[12] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Inner#1 as range 5
    // closed e.Tail#1 as range 11(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 # ADT-Brackets/9 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Inner#1/5 } Tile{ AsIs: e.Tail#1/11(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // t.idx e.idx
    // </0 & ExtractAllVars/4 t.OtherTerm#1/5 e.Tail#1/2 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[6] = refalrts::tvar_left( context[5], context[11], context[12] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 11(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.OtherTerm#1/5 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Tail#1/11(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  //
  // </0 & ExtractAllVars/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractAllVars/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction ExtractAllVars(func_ExtractAllVars, "ExtractAllVars");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Uniq {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 19, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & Uniq/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // e.idx
      // </0 & Uniq/4 e.Uniqs#1/5 t.Repeated#1/7 e.NotScanned-M#1/9 t.Repeated#1/11 e.NotScanned-E#1/2 >/1
      {refalrts::icSave, 0, 13, 2},
      {refalrts::icEPrepare, 0, 5, 13},
      {refalrts::icEStart, 0, 5, 13},
      {refalrts::icSave, 0, 15, 13},
      {refalrts::ictVarLeftSave, 0, 7, 15},
      {refalrts::icEPrepare, 0, 9, 15},
      {refalrts::icEStart, 0, 9, 15},
      {refalrts::icSave, 0, 17, 15},
      {refalrts::ictRepeatLeftSave, 11, 7, 17},
      // closed e.NotScanned-E#1 as range 17(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Repeated#1/7 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/5 } Tile{ AsIs: </0 AsIs: & Uniq/4 } Tile{ AsIs: e.NotScanned-M#1/9 } Tile{ AsIs: t.Repeated#1/11 AsIs: e.NotScanned-E#1/17(2) AsIs: >/1 ]] }
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 11},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // e.idx
      // </0 & Uniq/4 e.Uniqs#1/2 >/1
      // closed e.Uniqs#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Uniq/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Uniq

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction Uniq(
  "Uniq",
  scope_Uniq::raa,
  scope_Uniq::functions,
  scope_Uniq::idents,
  scope_Uniq::numbers,
  scope_Uniq::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_Uniq(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Uniq/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & Uniq/4 e.Uniqs#1/5 t.Repeated#1/7 e.NotScanned-M#1/9 t.Repeated#1/11 e.NotScanned-E#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[15] = context[13];
      context[16] = context[14];
      context[8] = refalrts::tvar_left( context[7], context[15], context[16] );
      if( ! context[8] )
        continue;
      context[9] = 0;
      context[10] = 0;
      refalrts::start_e_loop();
      do {
        context[17] = context[15];
        context[18] = context[16];
        context[12] = refalrts::repeated_stvar_left( context[11], context[7], context[17], context[18] );
        if( ! context[12] )
          continue;
        // closed e.NotScanned-E#1 as range 17(2)

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Repeated#1/7 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/5 } Tile{ AsIs: </0 AsIs: & Uniq/4 } Tile{ AsIs: e.NotScanned-M#1/9 } Tile{ AsIs: t.Repeated#1/11 AsIs: e.NotScanned-E#1/17(2) AsIs: >/1 ]] }
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[11];
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[9], context[10], context[15], context[16] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[13], context[14] ) );
  } while ( 0 );

  // e.idx
  // </0 & Uniq/4 e.Uniqs#1/2 >/1
  // closed e.Uniqs#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Uniq/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction Uniq(func_Uniq, "Uniq");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_RemoveBorrowedVars {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 27, 0, 0},
      //FAST GEN: ( e.$ ) ( s.$ e.$ )
      //GLOBAL GEN: ( e.$ ) ( s.$ e.$ )
      // </0 & RemoveBorrowedVars/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 e.idxTBV#0/9 )/12 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.idxB#0 as range 5
      {refalrts::icsVarLeft, 0, 13, 9},
      // closed e.idxTBV#0 as range 9
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // ( e.idx ) ( s.idx e.idx )
      // </0 & RemoveBorrowedVars/4 (/7 e.BorrowedVars-B#1/14 (/18 s.Mode#1/20 e.Index#1/21 )/19 e.BorrowedVars-E#1/5 )/8 (/11 s.Mode#1/13 e.Index#1/9 )/12 >/1
      // closed e.Index#1 as range 9
      {refalrts::icSave, 0, 23, 5},
      {refalrts::icEPrepare, 0, 14, 23},
      {refalrts::icEStart, 0, 14, 23},
      {refalrts::icSave, 0, 25, 23},
      {refalrts::icBracketLeftSave, 0, 16, 25},
      {refalrts::icsRepeatLeft, 20, 13, 16},
      {refalrts::iceRepeatLeft, 21, 9, 16},
      {refalrts::icEmpty, 0, 0, 16},
      // closed e.BorrowedVars-E#1 as range 25(5)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RemoveBorrowedVars/4 {REMOVED TILE} (/11 s.Mode#1/13 e.Index#1/9 )/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.BorrowedVars-B#1/14 AsIs: (/18 AsIs: s.Mode#1/20 AsIs: e.Index#1/21 AsIs: )/19 AsIs: e.BorrowedVars-E#1/25(5) AsIs: )/8 } Tile{ ]] }
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 18, 19, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) ( s.idx e.idx )
      // </0 & RemoveBorrowedVars/4 (/7 e.BorrowedVars#1/5 )/8 (/11 s.Mode#1/13 e.Index#1/9 )/12 >/1
      // closed e.BorrowedVars#1 as range 5
      // closed e.Index#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RemoveBorrowedVars/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.BorrowedVars#1/5 AsIs: )/8 AsIs: (/11 AsIs: s.Mode#1/13 AsIs: e.Index#1/9 AsIs: )/12 } Tile{ ]] }
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 12, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_RemoveBorrowedVars

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction RemoveBorrowedVars(
  "RemoveBorrowedVars",
  scope_RemoveBorrowedVars::raa,
  scope_RemoveBorrowedVars::functions,
  scope_RemoveBorrowedVars::idents,
  scope_RemoveBorrowedVars::numbers,
  scope_RemoveBorrowedVars::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_RemoveBorrowedVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  //FAST GEN: ( e.$ ) ( s.$ e.$ )
  //GLOBAL GEN: ( e.$ ) ( s.$ e.$ )
  // </0 & RemoveBorrowedVars/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 e.idxTBV#0/9 )/12 >/1
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
    refalrts::start_sentence();
    // ( e.idx ) ( s.idx e.idx )
    // </0 & RemoveBorrowedVars/4 (/7 e.BorrowedVars-B#1/14 (/18 s.Mode#1/20 e.Index#1/21 )/19 e.BorrowedVars-E#1/5 )/8 (/11 s.Mode#1/13 e.Index#1/9 )/12 >/1
    // closed e.Index#1 as range 9
    context[23] = context[5];
    context[24] = context[6];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[25] = context[23];
      context[26] = context[24];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[25], context[26] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      if( ! refalrts::repeated_stvar_left( context[20], context[13], context[16], context[17] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[21], context[22], context[9], context[10], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.BorrowedVars-E#1 as range 25(5)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & RemoveBorrowedVars/4 {REMOVED TILE} (/11 s.Mode#1/13 e.Index#1/9 )/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.BorrowedVars-B#1/14 AsIs: (/18 AsIs: s.Mode#1/20 AsIs: e.Index#1/21 AsIs: )/19 AsIs: e.BorrowedVars-E#1/25(5) AsIs: )/8 } Tile{ ]] }
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[23], context[24] ) );
  } while ( 0 );

  // ( e.idx ) ( s.idx e.idx )
  // </0 & RemoveBorrowedVars/4 (/7 e.BorrowedVars#1/5 )/8 (/11 s.Mode#1/13 e.Index#1/9 )/12 >/1
  // closed e.BorrowedVars#1 as range 5
  // closed e.Index#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RemoveBorrowedVars/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.BorrowedVars#1/5 AsIs: )/8 AsIs: (/11 AsIs: s.Mode#1/13 AsIs: e.Index#1/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction RemoveBorrowedVars(func_RemoveBorrowedVars, "RemoveBorrowedVars");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_FindBorrowedVars {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 35, 0, 0},
      //FAST GEN: ( ( e.$ ) ( e.$ ) ) ( s.$ e.$ )
      //GLOBAL GEN: ( ( e.$ ) ( e.$ ) ) ( s.$ e.$ )
      // </0 & FindBorrowedVars/4 (/7 (/11 e.idxBB#0/9 )/12 (/15 e.idxBTB#0/13 )/16 )/8 (/19 s.idxTB#0/21 e.idxTBV#0/17 )/20 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 5},
      {refalrts::icBracketLeftSave, 0, 13, 5},
      {refalrts::icBracketLeftSave, 0, 17, 2},
      {refalrts::icEmpty, 0, 0, 5},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.idxBB#0 as range 9
      // closed e.idxBTB#0 as range 13
      {refalrts::icsVarLeft, 0, 21, 17},
      // closed e.idxTBV#0 as range 17
      {refalrts::icOnFailGoTo, +24, 0, 0},
      // ( ( e.idx ) ( e.idx ) ) ( s.idx e.idx )
      // </0 & FindBorrowedVars/4 (/7 (/11 e.ScopeVars-B#1/22 (/26 s.Mode#1/28 e.Index#1/29 )/27 e.ScopeVars-E#1/9 )/12 (/15 e.BorrowedVars#1/13 )/16 )/8 (/19 s.Mode#1/21 e.Index#1/17 )/20 >/1
      // closed e.BorrowedVars#1 as range 13
      // closed e.Index#1 as range 17
      {refalrts::icSave, 0, 31, 9},
      {refalrts::icEPrepare, 0, 22, 31},
      {refalrts::icEStart, 0, 22, 31},
      {refalrts::icSave, 0, 33, 31},
      {refalrts::icBracketLeftSave, 0, 24, 33},
      {refalrts::icsRepeatLeft, 28, 21, 24},
      {refalrts::iceRepeatLeft, 29, 17, 24},
      {refalrts::icEmpty, 0, 0, 24},
      // closed e.ScopeVars-E#1 as range 33(9)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FindBorrowedVars/4 {REMOVED TILE} {REMOVED TILE} s.Mode#1/21 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.ScopeVars-B#1/22 AsIs: (/26 AsIs: s.Mode#1/28 AsIs: e.Index#1/29 AsIs: )/27 AsIs: e.ScopeVars-E#1/33(9) AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#1/13 HalfReuse: (/16 HalfReuse: s.Mode1 #28/8 } Tile{ AsIs: e.Index#1/17 } Tile{ HalfReuse: )/19 } Tile{ AsIs: )/20 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
      {refalrts::icReinitSVar, 0, 28, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 19},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icLinkBrackets, 15, 20, 0},
      {refalrts::icLinkBrackets, 16, 19, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 26, 27, 0},
      {refalrts::icSetRes, 0, 0, 20},
      {refalrts::icSpliceTile, 19, 19, 0},
      {refalrts::icSpliceEVar, 0, 0, 17},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( ( e.idx ) ( e.idx ) ) ( s.idx e.idx )
      // </0 & FindBorrowedVars/4 (/7 (/11 e.ScopeVars#1/9 )/12 (/15 e.BorrowedVars#1/13 )/16 )/8 (/19 s.Mode#1/21 e.Index#1/17 )/20 >/1
      // closed e.ScopeVars#1 as range 9
      // closed e.BorrowedVars#1 as range 13
      // closed e.Index#1 as range 17
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FindBorrowedVars/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.ScopeVars#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#1/13 AsIs: )/16 AsIs: )/8 AsIs: (/19 AsIs: s.Mode#1/21 AsIs: e.Index#1/17 AsIs: )/20 } Tile{ ]] }
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 20, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_FindBorrowedVars

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction FindBorrowedVars(
  "FindBorrowedVars",
  scope_FindBorrowedVars::raa,
  scope_FindBorrowedVars::functions,
  scope_FindBorrowedVars::idents,
  scope_FindBorrowedVars::numbers,
  scope_FindBorrowedVars::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_FindBorrowedVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  //FAST GEN: ( ( e.$ ) ( e.$ ) ) ( s.$ e.$ )
  //GLOBAL GEN: ( ( e.$ ) ( e.$ ) ) ( s.$ e.$ )
  // </0 & FindBorrowedVars/4 (/7 (/11 e.idxBB#0/9 )/12 (/15 e.idxBTB#0/13 )/16 )/8 (/19 s.idxTB#0/21 e.idxTBV#0/17 )/20 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBB#0 as range 9
  // closed e.idxBTB#0 as range 13
  if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTBV#0 as range 17
  do {
    refalrts::start_sentence();
    // ( ( e.idx ) ( e.idx ) ) ( s.idx e.idx )
    // </0 & FindBorrowedVars/4 (/7 (/11 e.ScopeVars-B#1/22 (/26 s.Mode#1/28 e.Index#1/29 )/27 e.ScopeVars-E#1/9 )/12 (/15 e.BorrowedVars#1/13 )/16 )/8 (/19 s.Mode#1/21 e.Index#1/17 )/20 >/1
    // closed e.BorrowedVars#1 as range 13
    // closed e.Index#1 as range 17
    context[31] = context[9];
    context[32] = context[10];
    context[22] = 0;
    context[23] = 0;
    refalrts::start_e_loop();
    do {
      context[33] = context[31];
      context[34] = context[32];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[33], context[34] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      if( ! refalrts::repeated_stvar_left( context[28], context[21], context[24], context[25] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[29], context[30], context[17], context[18], context[24], context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      // closed e.ScopeVars-E#1 as range 33(9)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & FindBorrowedVars/4 {REMOVED TILE} {REMOVED TILE} s.Mode#1/21 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.ScopeVars-B#1/22 AsIs: (/26 AsIs: s.Mode#1/28 AsIs: e.Index#1/29 AsIs: )/27 AsIs: e.ScopeVars-E#1/33(9) AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#1/13 HalfReuse: (/16 HalfReuse: s.Mode1 #28/8 } Tile{ AsIs: e.Index#1/17 } Tile{ HalfReuse: )/19 } Tile{ AsIs: )/20 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket( context[16] );
      refalrts::reinit_svar( context[8], context[28] );
      refalrts::reinit_close_bracket( context[19] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::link_brackets( context[15], context[20] );
      refalrts::link_brackets( context[16], context[19] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[20];
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[22], context[23], context[31], context[32] ) );
  } while ( 0 );

  // ( ( e.idx ) ( e.idx ) ) ( s.idx e.idx )
  // </0 & FindBorrowedVars/4 (/7 (/11 e.ScopeVars#1/9 )/12 (/15 e.BorrowedVars#1/13 )/16 )/8 (/19 s.Mode#1/21 e.Index#1/17 )/20 >/1
  // closed e.ScopeVars#1 as range 9
  // closed e.BorrowedVars#1 as range 13
  // closed e.Index#1 as range 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FindBorrowedVars/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.ScopeVars#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#1/13 AsIs: )/16 AsIs: )/8 AsIs: (/19 AsIs: s.Mode#1/21 AsIs: e.Index#1/17 AsIs: )/20 } Tile{ ]] }
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[20] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction FindBorrowedVars(func_FindBorrowedVars, "FindBorrowedVars");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractNested_Result_L1 {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 17, 0, 0},
      // </0 & ExtractNested-Result\1/4 (/7 (/11 e.NestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 )/8 e.Result#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 5},
      {refalrts::icBracketLeftSave, 0, 13, 5},
      {refalrts::icEmpty, 0, 0, 5},
      // closed e.NestedFuncs#2 as range 9
      // closed e.BorrowedVars#2 as range 13
      // closed e.Result#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractNested-Result\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.NestedFuncs#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#2/13 AsIs: )/16 } Tile{ AsIs: e.Result#2/2 } Tile{ ]] }
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 11, 16, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractNested_Result_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractNested_Result_L1(
  "ExtractNested-Result\\1",
  scope_gen_ExtractNested_Result_L1::raa,
  scope_gen_ExtractNested_Result_L1::functions,
  scope_gen_ExtractNested_Result_L1::idents,
  scope_gen_ExtractNested_Result_L1::numbers,
  scope_gen_ExtractNested_Result_L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractNested_Result_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractNested-Result\1/4 (/7 (/11 e.NestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 )/8 e.Result#2/2 >/1
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractNested-Result\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.NestedFuncs#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#2/13 AsIs: )/16 } Tile{ AsIs: e.Result#2/2 } Tile{ ]] }
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractNested_Result_L1(func_gen_ExtractNested_Result_L1, "ExtractNested-Result\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ExtractNested_Result {
    static refalrts::RefalFunction *functions[] = {
      & gen_ExtractNested_Result_L1,
      & ExtractNested_Result_Term,
      & MapReduce,
      & Fetch
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 30, 0, 0},
      // </0 & ExtractNested-Result/4 (/7 e.OriginNestedFuncs#1/5 )/8 (/11 e.OriginBorrowedVars#1/9 )/12 (/15 e.ScopeVars#1/13 )/16 (/19 e.LocalVars#1/17 )/20 e.OriginResult#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 13, 2},
      {refalrts::icBracketLeftSave, 0, 17, 2},
      // closed e.OriginNestedFuncs#1 as range 5
      // closed e.OriginBorrowedVars#1 as range 9
      // closed e.ScopeVars#1 as range 13
      // closed e.LocalVars#1 as range 17
      // closed e.OriginResult#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </21 & Fetch/22 </23 & MapReduce/24 (/25 & ExtractNested-Result-Term/26 (/27 Tile{ AsIs: e.ScopeVars#1/13 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.LocalVars#1/17 AsIs: )/20 } Tile{ HalfReuse: )/0 HalfReuse: (/4 AsIs: (/7 AsIs: e.OriginNestedFuncs#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.OriginBorrowedVars#1/9 AsIs: )/12 HalfReuse: )/15 } Tile{ AsIs: e.OriginResult#1/2 } >/28 & ExtractNested-Result\1/29 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 21},
      {refalrts::icAllocFunc, 0, 3, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 23},
      {refalrts::icAllocFunc, 0, 2, 24},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 25},
      {refalrts::icAllocFunc, 0, 1, 26},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 28},
      {refalrts::icAllocFunc, 0, 0, 29},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 15},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 21},
      {refalrts::icPushStack, 0, 0, 28},
      {refalrts::icPushStack, 0, 0, 23},
      {refalrts::icLinkBrackets, 4, 15, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 25, 0, 0},
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icLinkBrackets, 27, 16, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 28, 29, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 15, 0},
      {refalrts::icSpliceTile, 16, 20, 0},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icSpliceTile, 21, 27, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ExtractNested_Result

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction ExtractNested_Result(
  "ExtractNested-Result",
  scope_ExtractNested_Result::raa,
  scope_ExtractNested_Result::functions,
  scope_ExtractNested_Result::idents,
  scope_ExtractNested_Result::numbers,
  scope_ExtractNested_Result::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_ExtractNested_Result(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & ExtractNested-Result/4 (/7 e.OriginNestedFuncs#1/5 )/8 (/11 e.OriginBorrowedVars#1/9 )/12 (/15 e.ScopeVars#1/13 )/16 (/19 e.LocalVars#1/17 )/20 e.OriginResult#1/2 >/1
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
  // closed e.OriginNestedFuncs#1 as range 5
  // closed e.OriginBorrowedVars#1 as range 9
  // closed e.ScopeVars#1 as range 13
  // closed e.LocalVars#1 as range 17
  // closed e.OriginResult#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </21 & Fetch/22 </23 & MapReduce/24 (/25 & ExtractNested-Result-Term/26 (/27 Tile{ AsIs: e.ScopeVars#1/13 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.LocalVars#1/17 AsIs: )/20 } Tile{ HalfReuse: )/0 HalfReuse: (/4 AsIs: (/7 AsIs: e.OriginNestedFuncs#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.OriginBorrowedVars#1/9 AsIs: )/12 HalfReuse: )/15 } Tile{ AsIs: e.OriginResult#1/2 } >/28 & ExtractNested-Result\1/29 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], & Fetch ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], & MapReduce ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], & ExtractNested_Result_Term ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], & gen_ExtractNested_Result_L1 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[15] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[4], context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[25], context[0] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[27], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[21], context[27] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction ExtractNested_Result(func_ExtractNested_Result, "ExtractNested-Result");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractNested_Result_Term_S2L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Brackets<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 15, 0, 0},
      // </0 & ExtractNested-Result-Term$2\1/4 (/7 e.NestedFuncs#2/5 )/8 (/11 e.BorrowedVars#2/9 )/12 e.InBrackets#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      // closed e.NestedFuncs#2 as range 5
      // closed e.BorrowedVars#2 as range 9
      // closed e.InBrackets#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.NestedFuncs#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.BorrowedVars#2/9 AsIs: )/12 } Tile{ HalfReuse: )/0 } (/13 # Brackets/14 Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
      {refalrts::icAllocIdent, 0, 0, 14},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 13, 1, 0},
      {refalrts::icLinkBrackets, 4, 0, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icSpliceTile, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 12, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractNested_Result_Term_S2L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractNested_Result_Term_S2L1(
  "ExtractNested-Result-Term$2\\1",
  scope_gen_ExtractNested_Result_Term_S2L1::raa,
  scope_gen_ExtractNested_Result_Term_S2L1::functions,
  scope_gen_ExtractNested_Result_Term_S2L1::idents,
  scope_gen_ExtractNested_Result_Term_S2L1::numbers,
  scope_gen_ExtractNested_Result_Term_S2L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractNested_Result_Term_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ExtractNested-Result-Term$2\1/4 (/7 e.NestedFuncs#2/5 )/8 (/11 e.BorrowedVars#2/9 )/12 e.InBrackets#2/2 >/1
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
  // closed e.NestedFuncs#2 as range 5
  // closed e.BorrowedVars#2 as range 9
  // closed e.InBrackets#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.NestedFuncs#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.BorrowedVars#2/9 AsIs: )/12 } Tile{ HalfReuse: )/0 } (/13 # Brackets/14 Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[14], & ident_Brackets<int>::name ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[13], context[1] );
  refalrts::link_brackets( context[4], context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractNested_Result_Term_S2L1(func_gen_ExtractNested_Result_Term_S2L1, "ExtractNested-Result-Term$2\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractNested_Result_Term_S3L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_ADT_Brackets<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 19, 0, 0},
      // </0 & ExtractNested-Result-Term$3\1/4 (/7 e.Name#1/5 )/8 (/11 e.NestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 e.InBrackets#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 13, 2},
      // closed e.Name#1 as range 5
      // closed e.NestedFuncs#2 as range 9
      // closed e.BorrowedVars#2 as range 13
      // closed e.InBrackets#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 AsIs: (/11 AsIs: e.NestedFuncs#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#2/13 AsIs: )/16 } )/17 Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 } Tile{ AsIs: e.Name#1/5 } )/18 Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 18},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icLinkBrackets, 7, 18, 0},
      {refalrts::icLinkBrackets, 8, 17, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 18, 18, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 0, 7, 0},
      {refalrts::icSpliceTile, 17, 17, 0},
      {refalrts::icSpliceTile, 8, 16, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractNested_Result_Term_S3L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractNested_Result_Term_S3L1(
  "ExtractNested-Result-Term$3\\1",
  scope_gen_ExtractNested_Result_Term_S3L1::raa,
  scope_gen_ExtractNested_Result_Term_S3L1::functions,
  scope_gen_ExtractNested_Result_Term_S3L1::idents,
  scope_gen_ExtractNested_Result_Term_S3L1::numbers,
  scope_gen_ExtractNested_Result_Term_S3L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractNested_Result_Term_S3L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & ExtractNested-Result-Term$3\1/4 (/7 e.Name#1/5 )/8 (/11 e.NestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 e.InBrackets#2/2 >/1
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
  // closed e.Name#1 as range 5
  // closed e.NestedFuncs#2 as range 9
  // closed e.BorrowedVars#2 as range 13
  // closed e.InBrackets#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 AsIs: (/11 AsIs: e.NestedFuncs#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#2/13 AsIs: )/16 } )/17 Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 } Tile{ AsIs: e.Name#1/5 } )/18 Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_ADT_Brackets<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[18] );
  refalrts::link_brackets( context[8], context[17] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractNested_Result_Term_S3L1(func_gen_ExtractNested_Result_Term_S3L1, "ExtractNested-Result-Term$3\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractNested_Result_Term_S4L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CallBrackets<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 15, 0, 0},
      // </0 & ExtractNested-Result-Term$4\1/4 (/7 e.NestedFuncs#2/5 )/8 (/11 e.BorrowedVars#2/9 )/12 e.InBrackets#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      // closed e.NestedFuncs#2 as range 5
      // closed e.BorrowedVars#2 as range 9
      // closed e.InBrackets#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.NestedFuncs#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.BorrowedVars#2/9 AsIs: )/12 } Tile{ HalfReuse: )/0 } (/13 # CallBrackets/14 Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
      {refalrts::icAllocIdent, 0, 0, 14},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 13, 1, 0},
      {refalrts::icLinkBrackets, 4, 0, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icSpliceTile, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 12, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractNested_Result_Term_S4L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractNested_Result_Term_S4L1(
  "ExtractNested-Result-Term$4\\1",
  scope_gen_ExtractNested_Result_Term_S4L1::raa,
  scope_gen_ExtractNested_Result_Term_S4L1::functions,
  scope_gen_ExtractNested_Result_Term_S4L1::idents,
  scope_gen_ExtractNested_Result_Term_S4L1::numbers,
  scope_gen_ExtractNested_Result_Term_S4L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractNested_Result_Term_S4L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ExtractNested-Result-Term$4\1/4 (/7 e.NestedFuncs#2/5 )/8 (/11 e.BorrowedVars#2/9 )/12 e.InBrackets#2/2 >/1
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
  // closed e.NestedFuncs#2 as range 5
  // closed e.BorrowedVars#2 as range 9
  // closed e.InBrackets#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.NestedFuncs#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.BorrowedVars#2/9 AsIs: )/12 } Tile{ HalfReuse: )/0 } (/13 # CallBrackets/14 Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[14], & ident_CallBrackets<int>::name ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[13], context[1] );
  refalrts::link_brackets( context[4], context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractNested_Result_Term_S4L1(func_gen_ExtractNested_Result_Term_S4L1, "ExtractNested-Result-Term$4\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractNested_Result_Term_S5L1 {
    static refalrts::RefalFunction *functions[] = {
      & Map,
      & CreateContext,
      & CheckBorrowed,
      & Reduce,
      & AddContextToSentence
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkName<int>::name,
      & ident_GN_Local<int>::name,
      & ident_Function<int>::name,
      & ident_NativeBody<int>::name,
      & ident_CreateClosure<int>::name,
      & ident_CallBrackets<int>::name,
      & ident_Sentences<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 62, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) s.$ e.$
      // </0 & ExtractNested-Result-Term$5\1/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 (/19 e.idxTTTB#0/17 )/20 (/23 e.idxTTTTB#0/21 )/24 (/27 e.idxTTTTTB#0/25 )/28 s.idxTTTTTT#0/29 e.idxTTTTTTV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 13, 2},
      {refalrts::icBracketLeftSave, 0, 17, 2},
      {refalrts::icBracketLeftSave, 0, 21, 2},
      {refalrts::icBracketLeftSave, 0, 25, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxTB#0 as range 9
      // closed e.idxTTB#0 as range 13
      // closed e.idxTTTB#0 as range 17
      // closed e.idxTTTTB#0 as range 21
      // closed e.idxTTTTTB#0 as range 25
      {refalrts::icsVarLeft, 0, 29, 2},
      // closed e.idxTTTTTTV#0 as range 2
      {refalrts::icOnFailGoTo, +32, 0, 0},
      // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( ) ( e.idx ) # Sentences e.idx
      // </0 & ExtractNested-Result-Term$5\1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.ClosureName#1/9 )/12 (/15 e.BorrowedVars#1/13 )/16 (/19 e.ScopeVars#1/17 )/20 (/23 )/24 (/27 e.NestedNestedFuncs#2/25 )/28 # Sentences/29 e.Sentences#2/2 >/1
      {refalrts::icIdentTerm, 0, 6, 29},
      {refalrts::icSave, 0, 60, 21},
      {refalrts::icEmpty, 0, 0, 60},
      // closed e.NestedFuncs#1 as range 5
      // closed e.ClosureName#1 as range 9
      // closed e.BorrowedVars#1 as range 13
      // closed e.ScopeVars#1 as range 17
      // closed e.NestedNestedFuncs#2 as range 25
      // closed e.Sentences#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.ScopeVars#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.NestedNestedFuncs#2/25 } Tile{ HalfReuse: (/20 HalfReuse: # Function/23 HalfReuse: # GN-Local/24 AsIs: (/27 } Tile{ AsIs: e.ClosureName#1/9 } Tile{ AsIs: )/28 AsIs: # Sentences/29 AsIs: e.Sentences#2/2 HalfReuse: )/1 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#1/13 AsIs: )/16 HalfReuse: )/19 } Tile{ AsIs: (/11 } Tile{ HalfReuse: # TkName/7 } e.ClosureName#1/9/30 Tile{ AsIs: )/8 } Tile{ ]] }
      {refalrts::icCopyEVar, 30, 9, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 20},
      {refalrts::icReinitIdent, 0, 2, 23},
      {refalrts::icReinitIdent, 0, 1, 24},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 19},
      {refalrts::icReinitIdent, 0, 0, 7},
      {refalrts::icLinkBrackets, 11, 8, 0},
      {refalrts::icLinkBrackets, 0, 19, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 4, 12, 0},
      {refalrts::icLinkBrackets, 20, 1, 0},
      {refalrts::icLinkBrackets, 27, 28, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 30, 31, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icSpliceTile, 12, 19, 0},
      {refalrts::icSpliceTile, 28, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 20, 27, 0},
      {refalrts::icSpliceEVar, 0, 0, 25},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +71, 0, 0},
      // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) # Sentences e.idx
      // </0 & ExtractNested-Result-Term$5\1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.ClosureName#1/9 )/12 (/15 e.BorrowedVars#1/13 )/16 (/19 e.ScopeVars#1/17 )/20 (/23 e.NestedBorrowedVars#2/21 )/24 (/27 e.NestedNestedFuncs#2/25 )/28 # Sentences/29 e.Sentences#2/2 >/1
      {refalrts::icIdentTerm, 0, 6, 29},
      // closed e.NestedFuncs#1 as range 5
      // closed e.ClosureName#1 as range 9
      // closed e.BorrowedVars#1 as range 13
      // closed e.ScopeVars#1 as range 17
      // closed e.NestedBorrowedVars#2 as range 21
      // closed e.NestedNestedFuncs#2 as range 25
      // closed e.Sentences#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/30 (/31 Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.NestedNestedFuncs#2/25 } (/32 # Function/33 # GN-Local/34 Tile{ AsIs: (/23 } Tile{ AsIs: e.ClosureName#1/9 } )/35 # Sentences/36 Tile{ AsIs: </0 Reuse: & Map/4 AsIs: (/7 } & AddContextToSentence/37 Tile{ AsIs: e.NestedBorrowedVars#2/21 } Tile{ HalfReuse: )/29 AsIs: e.Sentences#2/2 AsIs: >/1 } Tile{ AsIs: )/28 } )/38 </39 & Reduce/40 (/41 & CheckBorrowed/42 Tile{ AsIs: (/19 AsIs: e.ScopeVars#1/17 AsIs: )/20 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#1/13 AsIs: )/16 } e.NestedBorrowedVars#2/21/43 >/45 Tile{ AsIs: )/24 AsIs: (/27 } # CallBrackets/46 (/47 # TkName/48 # CreateClosure/49 Tile{ AsIs: )/8 AsIs: (/11 } # TkName/50 e.ClosureName#1/9/51 )/53 </54 & CreateContext/55 e.NestedBorrowedVars#2/21/56 >/58 )/59 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 30},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 31},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 32},
      {refalrts::icAllocIdent, 0, 2, 33},
      {refalrts::icAllocIdent, 0, 1, 34},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 35},
      {refalrts::icAllocIdent, 0, 6, 36},
      {refalrts::icAllocFunc, 0, 4, 37},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 38},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 39},
      {refalrts::icAllocFunc, 0, 3, 40},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 41},
      {refalrts::icAllocFunc, 0, 2, 42},
      {refalrts::icCopyEVar, 43, 21, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 45},
      {refalrts::icAllocIdent, 0, 5, 46},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 47},
      {refalrts::icAllocIdent, 0, 0, 48},
      {refalrts::icAllocIdent, 0, 4, 49},
      {refalrts::icAllocIdent, 0, 0, 50},
      {refalrts::icCopyEVar, 51, 9, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 53},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 54},
      {refalrts::icAllocFunc, 0, 1, 55},
      {refalrts::icCopyEVar, 56, 21, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 58},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 59},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 29},
      {refalrts::icLinkBrackets, 27, 59, 0},
      {refalrts::icPushStack, 0, 0, 58},
      {refalrts::icPushStack, 0, 0, 54},
      {refalrts::icLinkBrackets, 11, 53, 0},
      {refalrts::icLinkBrackets, 47, 8, 0},
      {refalrts::icLinkBrackets, 30, 24, 0},
      {refalrts::icPushStack, 0, 0, 45},
      {refalrts::icPushStack, 0, 0, 39},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 41, 12, 0},
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icLinkBrackets, 31, 38, 0},
      {refalrts::icLinkBrackets, 32, 28, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 29, 0},
      {refalrts::icLinkBrackets, 23, 35, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 50, 59, 0},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icSpliceTile, 46, 49, 0},
      {refalrts::icSpliceTile, 24, 27, 0},
      {refalrts::icSpliceTile, 45, 45, 0},
      {refalrts::icSpliceTile, 43, 44, 0},
      {refalrts::icSpliceTile, 12, 16, 0},
      {refalrts::icSpliceTile, 19, 20, 0},
      {refalrts::icSpliceTile, 38, 42, 0},
      {refalrts::icSpliceTile, 28, 28, 0},
      {refalrts::icSpliceTile, 29, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, 21},
      {refalrts::icSpliceTile, 37, 37, 0},
      {refalrts::icSpliceTile, 0, 7, 0},
      {refalrts::icSpliceTile, 35, 36, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 23, 23, 0},
      {refalrts::icSpliceTile, 32, 34, 0},
      {refalrts::icSpliceEVar, 0, 0, 25},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 30, 31, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( ) ( ) # NativeBody t.idx e.idx
      // </0 & ExtractNested-Result-Term$5\1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.ClosureName#1/9 )/12 (/15 e.BorrowedVars#1/13 )/16 (/19 e.ScopeVars#1/17 )/20 (/23 )/24 (/27 )/28 # NativeBody/29 t.SrcPos#2/30 e.Code#2/2 >/1
      {refalrts::icIdentTerm, 0, 3, 29},
      {refalrts::icEmpty, 0, 0, 21},
      {refalrts::icEmpty, 0, 0, 25},
      // closed e.NestedFuncs#1 as range 5
      // closed e.ClosureName#1 as range 9
      // closed e.BorrowedVars#1 as range 13
      // closed e.ScopeVars#1 as range 17
      {refalrts::ictVarLeftSave, 0, 30, 2},
      // closed e.Code#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.ScopeVars#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.NestedFuncs#1/5 HalfReuse: (/8 HalfReuse: # Function/11 } Tile{ HalfReuse: # GN-Local/20 AsIs: (/23 } Tile{ AsIs: e.ClosureName#1/9 } Tile{ AsIs: )/28 AsIs: # NativeBody/29 AsIs: t.SrcPos#2/30 AsIs: e.Code#2/2 HalfReuse: )/1 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#1/13 AsIs: )/16 HalfReuse: )/19 } Tile{ AsIs: (/27 } Tile{ HalfReuse: # TkName/0 } e.ClosureName#1/9/32 Tile{ AsIs: )/24 } Tile{ ]] }
      {refalrts::icCopyEVar, 32, 9, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitIdent, 0, 2, 11},
      {refalrts::icReinitIdent, 0, 1, 20},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 19},
      {refalrts::icReinitIdent, 0, 0, 0},
      {refalrts::icLinkBrackets, 27, 24, 0},
      {refalrts::icLinkBrackets, 4, 19, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 7, 12, 0},
      {refalrts::icLinkBrackets, 8, 1, 0},
      {refalrts::icLinkBrackets, 23, 28, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 24, 24, 0},
      {refalrts::icSpliceTile, 32, 33, 0},
      {refalrts::icSpliceTile, 0, 0, 0},
      {refalrts::icSpliceTile, 27, 27, 0},
      {refalrts::icSpliceTile, 12, 19, 0},
      {refalrts::icSpliceTile, 28, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 20, 23, 0},
      {refalrts::icSpliceTile, 4, 11, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractNested_Result_Term_S5L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractNested_Result_Term_S5L1(
  "ExtractNested-Result-Term$5\\1",
  scope_gen_ExtractNested_Result_Term_S5L1::raa,
  scope_gen_ExtractNested_Result_Term_S5L1::functions,
  scope_gen_ExtractNested_Result_Term_S5L1::idents,
  scope_gen_ExtractNested_Result_Term_S5L1::numbers,
  scope_gen_ExtractNested_Result_Term_S5L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractNested_Result_Term_S5L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 62 elems
  refalrts::Iter context[62];
  refalrts::zeros( context, 62 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) s.$ e.$
  // </0 & ExtractNested-Result-Term$5\1/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 (/19 e.idxTTTB#0/17 )/20 (/23 e.idxTTTTB#0/21 )/24 (/27 e.idxTTTTTB#0/25 )/28 s.idxTTTTTT#0/29 e.idxTTTTTTV#0/2 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTB#0 as range 13
  // closed e.idxTTTB#0 as range 17
  // closed e.idxTTTTB#0 as range 21
  // closed e.idxTTTTTB#0 as range 25
  if( ! refalrts::svar_left( context[29], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTTTTTV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( ) ( e.idx ) # Sentences e.idx
    // </0 & ExtractNested-Result-Term$5\1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.ClosureName#1/9 )/12 (/15 e.BorrowedVars#1/13 )/16 (/19 e.ScopeVars#1/17 )/20 (/23 )/24 (/27 e.NestedNestedFuncs#2/25 )/28 # Sentences/29 e.Sentences#2/2 >/1
    if( ! refalrts::ident_term(  & ident_Sentences<int>::name, context[29] ) )
      continue;
    context[60] = context[21];
    context[61] = context[22];
    if( ! refalrts::empty_seq( context[60], context[61] ) )
      continue;
    // closed e.NestedFuncs#1 as range 5
    // closed e.ClosureName#1 as range 9
    // closed e.BorrowedVars#1 as range 13
    // closed e.ScopeVars#1 as range 17
    // closed e.NestedNestedFuncs#2 as range 25
    // closed e.Sentences#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.ScopeVars#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.NestedNestedFuncs#2/25 } Tile{ HalfReuse: (/20 HalfReuse: # Function/23 HalfReuse: # GN-Local/24 AsIs: (/27 } Tile{ AsIs: e.ClosureName#1/9 } Tile{ AsIs: )/28 AsIs: # Sentences/29 AsIs: e.Sentences#2/2 HalfReuse: )/1 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#1/13 AsIs: )/16 HalfReuse: )/19 } Tile{ AsIs: (/11 } Tile{ HalfReuse: # TkName/7 } e.ClosureName#1/9/30 Tile{ AsIs: )/8 } Tile{ ]] }
    if (! refalrts::copy_evar(context[30], context[31], context[9], context[10]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_open_bracket( context[20] );
    refalrts::reinit_ident( context[23], & ident_Function<int>::name );
    refalrts::reinit_ident( context[24], & ident_GN_Local<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_bracket( context[19] );
    refalrts::reinit_ident( context[7], & ident_TkName<int>::name );
    refalrts::link_brackets( context[11], context[8] );
    refalrts::link_brackets( context[0], context[19] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[4], context[12] );
    refalrts::link_brackets( context[20], context[1] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[12], context[19] );
    res = refalrts::splice_evar( res, context[28], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[27] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) # Sentences e.idx
    // </0 & ExtractNested-Result-Term$5\1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.ClosureName#1/9 )/12 (/15 e.BorrowedVars#1/13 )/16 (/19 e.ScopeVars#1/17 )/20 (/23 e.NestedBorrowedVars#2/21 )/24 (/27 e.NestedNestedFuncs#2/25 )/28 # Sentences/29 e.Sentences#2/2 >/1
    if( ! refalrts::ident_term(  & ident_Sentences<int>::name, context[29] ) )
      continue;
    // closed e.NestedFuncs#1 as range 5
    // closed e.ClosureName#1 as range 9
    // closed e.BorrowedVars#1 as range 13
    // closed e.ScopeVars#1 as range 17
    // closed e.NestedBorrowedVars#2 as range 21
    // closed e.NestedNestedFuncs#2 as range 25
    // closed e.Sentences#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/30 (/31 Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.NestedNestedFuncs#2/25 } (/32 # Function/33 # GN-Local/34 Tile{ AsIs: (/23 } Tile{ AsIs: e.ClosureName#1/9 } )/35 # Sentences/36 Tile{ AsIs: </0 Reuse: & Map/4 AsIs: (/7 } & AddContextToSentence/37 Tile{ AsIs: e.NestedBorrowedVars#2/21 } Tile{ HalfReuse: )/29 AsIs: e.Sentences#2/2 AsIs: >/1 } Tile{ AsIs: )/28 } )/38 </39 & Reduce/40 (/41 & CheckBorrowed/42 Tile{ AsIs: (/19 AsIs: e.ScopeVars#1/17 AsIs: )/20 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#1/13 AsIs: )/16 } e.NestedBorrowedVars#2/21/43 >/45 Tile{ AsIs: )/24 AsIs: (/27 } # CallBrackets/46 (/47 # TkName/48 # CreateClosure/49 Tile{ AsIs: )/8 AsIs: (/11 } # TkName/50 e.ClosureName#1/9/51 )/53 </54 & CreateContext/55 e.NestedBorrowedVars#2/21/56 >/58 )/59 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[33], & ident_Function<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[34], & ident_GN_Local<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[36], & ident_Sentences<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[37], & AddContextToSentence ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[40], & Reduce ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[41] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[42], & CheckBorrowed ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[43], context[44], context[21], context[22]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[45] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[46], & ident_CallBrackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[47] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[48], & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[49], & ident_CreateClosure<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[50], & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[51], context[52], context[9], context[10]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[53] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[54] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[55], & CreateContext ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[56], context[57], context[21], context[22]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[58] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[59] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Map );
    refalrts::reinit_close_bracket( context[29] );
    refalrts::link_brackets( context[27], context[59] );
    refalrts::push_stack( context[58] );
    refalrts::push_stack( context[54] );
    refalrts::link_brackets( context[11], context[53] );
    refalrts::link_brackets( context[47], context[8] );
    refalrts::link_brackets( context[30], context[24] );
    refalrts::push_stack( context[45] );
    refalrts::push_stack( context[39] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[41], context[12] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[31], context[38] );
    refalrts::link_brackets( context[32], context[28] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[29] );
    refalrts::link_brackets( context[23], context[35] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[50], context[59] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[46], context[49] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[45], context[45] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[38], context[42] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[29], context[1] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[32], context[34] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( ) ( ) # NativeBody t.idx e.idx
  // </0 & ExtractNested-Result-Term$5\1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.ClosureName#1/9 )/12 (/15 e.BorrowedVars#1/13 )/16 (/19 e.ScopeVars#1/17 )/20 (/23 )/24 (/27 )/28 # NativeBody/29 t.SrcPos#2/30 e.Code#2/2 >/1
  if( ! refalrts::ident_term(  & ident_NativeBody<int>::name, context[29] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[21], context[22] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[25], context[26] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NestedFuncs#1 as range 5
  // closed e.ClosureName#1 as range 9
  // closed e.BorrowedVars#1 as range 13
  // closed e.ScopeVars#1 as range 17
  context[31] = refalrts::tvar_left( context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.ScopeVars#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.NestedFuncs#1/5 HalfReuse: (/8 HalfReuse: # Function/11 } Tile{ HalfReuse: # GN-Local/20 AsIs: (/23 } Tile{ AsIs: e.ClosureName#1/9 } Tile{ AsIs: )/28 AsIs: # NativeBody/29 AsIs: t.SrcPos#2/30 AsIs: e.Code#2/2 HalfReuse: )/1 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#1/13 AsIs: )/16 HalfReuse: )/19 } Tile{ AsIs: (/27 } Tile{ HalfReuse: # TkName/0 } e.ClosureName#1/9/32 Tile{ AsIs: )/24 } Tile{ ]] }
  if (! refalrts::copy_evar(context[32], context[33], context[9], context[10]))
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_ident( context[11], & ident_Function<int>::name );
  refalrts::reinit_ident( context[20], & ident_GN_Local<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::reinit_close_bracket( context[19] );
  refalrts::reinit_ident( context[0], & ident_TkName<int>::name );
  refalrts::link_brackets( context[27], context[24] );
  refalrts::link_brackets( context[4], context[19] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::link_brackets( context[23], context[28] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[12], context[19] );
  res = refalrts::splice_evar( res, context[28], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_evar( res, context[4], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractNested_Result_Term_S5L1(func_gen_ExtractNested_Result_Term_S5L1, "ExtractNested-Result-Term$5\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ExtractNested_Result_Term {
    static refalrts::RefalFunction *functions[] = {
      & gen_ExtractNested_Result_Term_S5L1,
      & refalrts::create_closure,
      & ExtractNestedRec,
      & Fetch,
      & gen_ExtractNested_Result_Term_S4L1,
      & ExtractNested_Result,
      & gen_ExtractNested_Result_Term_S3L1,
      & gen_ExtractNested_Result_Term_S2L1,
      & CheckBorrowed
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Closure<int>::name,
      & ident_CallBrackets<int>::name,
      & ident_ADT_Brackets<int>::name,
      & ident_Brackets<int>::name,
      & ident_TkVariable<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 5, 0, 0},
      {refalrts::icIssueMemory, 38, 0, 0},
      //FAST GEN: ( e.$ ) ( e.$ ) ( ( e.$ ) ( e.$ ) ) t.$
      //GLOBAL GEN: ( e.$ ) ( e.$ ) ( ( e.$ ) ( e.$ ) ) t.$
      // </0 & ExtractNested-Result-Term/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 (/19 e.idxTTBB#0/17 )/20 (/23 e.idxTTBTB#0/21 )/24 )/16 t.idxTTT#0/25 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 13, 2},
      {refalrts::icBracketLeftSave, 0, 17, 13},
      {refalrts::icBracketLeftSave, 0, 21, 13},
      {refalrts::icEmpty, 0, 0, 13},
      // closed e.idxB#0 as range 5
      // closed e.idxTB#0 as range 9
      // closed e.idxTTBB#0 as range 17
      // closed e.idxTTBTB#0 as range 21
      {refalrts::ictVarLeftSave, 0, 25, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +29, 0, 0},
      // ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) ( # TkVariable s.idx e.idx )
      // </0 & ExtractNested-Result-Term/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.LocalVars#1/9 )/12 (/15 (/19 e.NestedFuncs#1/17 )/20 (/23 e.BorrowedVars#1/21 )/24 )/16 (/25 # TkVariable/29 s.Mode#1/30 e.Index#1/27 )/26 >/1
      {refalrts::icBracketTerm, 0, 27, 25},
      {refalrts::icIdentLeftSave, 29, 4, 27},
      // closed e.ScopeVars#1 as range 5
      // closed e.LocalVars#1 as range 9
      // closed e.NestedFuncs#1 as range 17
      // closed e.BorrowedVars#1 as range 21
      {refalrts::icsVarLeft, 0, 30, 27},
      // closed e.Index#1 as range 27
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.LocalVars#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: (/19 AsIs: e.NestedFuncs#1/17 AsIs: )/20 } Tile{ AsIs: </0 Reuse: & CheckBorrowed/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.BorrowedVars#1/21 } Tile{ AsIs: )/12 } Tile{ AsIs: (/23 } Tile{ HalfReuse: s.Mode1 #30/1 } e.Index#1/27/31 )/33 Tile{ HalfReuse: >/24 AsIs: )/16 AsIs: (/25 AsIs: # TkVariable/29 AsIs: s.Mode#1/30 AsIs: e.Index#1/27 AsIs: )/26 } Tile{ ]] }
      {refalrts::icCopyEVar, 31, 27, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
      {refalrts::icUpdateFunc, 0, 8, 4},
      {refalrts::icReinitSVar, 0, 30, 1},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 24},
      {refalrts::icLinkBrackets, 25, 26, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icPushStack, 0, 0, 24},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 23, 33, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 24, 26, 0},
      {refalrts::icSpliceTile, 33, 33, 0},
      {refalrts::icSpliceTile, 31, 32, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 23, 23, 0},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceEVar, 0, 0, 21},
      {refalrts::icSpliceTile, 0, 11, 0},
      {refalrts::icSpliceTile, 15, 20, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +28, 0, 0},
      // ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) ( # Brackets e.idx )
      // </0 & ExtractNested-Result-Term/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.LocalVars#1/9 )/12 (/15 (/19 e.NestedFuncs#1/17 )/20 (/23 e.BorrowedVars#1/21 )/24 )/16 (/25 # Brackets/29 e.InBrackets#1/27 )/26 >/1
      {refalrts::icBracketTerm, 0, 27, 25},
      {refalrts::icIdentLeftSave, 29, 3, 27},
      // closed e.ScopeVars#1 as range 5
      // closed e.LocalVars#1 as range 9
      // closed e.NestedFuncs#1 as range 17
      // closed e.BorrowedVars#1 as range 21
      // closed e.InBrackets#1 as range 27
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ HalfReuse: </12 HalfReuse: & ExtractNested-Result/15 AsIs: (/19 AsIs: e.NestedFuncs#1/17 AsIs: )/20 AsIs: (/23 AsIs: e.BorrowedVars#1/21 AsIs: )/24 HalfReuse: (/16 } Tile{ AsIs: e.ScopeVars#1/5 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.LocalVars#1/9 } Tile{ HalfReuse: )/25 } Tile{ AsIs: e.InBrackets#1/27 } Tile{ HalfReuse: >/29 } Tile{ HalfReuse: & ExtractNested-Result-Term$2\1/26 AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 3, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 12},
      {refalrts::icReinitFunc, 0, 5, 15},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 29},
      {refalrts::icReinitFunc, 0, 7, 26},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 29},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icLinkBrackets, 11, 25, 0},
      {refalrts::icLinkBrackets, 16, 8, 0},
      {refalrts::icLinkBrackets, 23, 24, 0},
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icSetRes, 0, 0, 26},
      {refalrts::icSpliceTile, 29, 29, 0},
      {refalrts::icSpliceEVar, 0, 0, 27},
      {refalrts::icSpliceTile, 25, 25, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 12, 16, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +35, 0, 0},
      // ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) ( # ADT-Brackets ( e.idx ) e.idx )
      // </0 & ExtractNested-Result-Term/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.LocalVars#1/9 )/12 (/15 (/19 e.NestedFuncs#1/17 )/20 (/23 e.BorrowedVars#1/21 )/24 )/16 (/25 # ADT-Brackets/29 (/32 e.Name#1/30 )/33 e.InBrackets#1/27 )/26 >/1
      {refalrts::icBracketTerm, 0, 27, 25},
      {refalrts::icIdentLeftSave, 29, 2, 27},
      {refalrts::icBracketLeftSave, 0, 30, 27},
      // closed e.ScopeVars#1 as range 5
      // closed e.LocalVars#1 as range 9
      // closed e.NestedFuncs#1 as range 17
      // closed e.BorrowedVars#1 as range 21
      // closed e.Name#1 as range 30
      // closed e.InBrackets#1 as range 27
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ HalfReuse: </12 HalfReuse: & ExtractNested-Result/15 AsIs: (/19 AsIs: e.NestedFuncs#1/17 AsIs: )/20 AsIs: (/23 AsIs: e.BorrowedVars#1/21 AsIs: )/24 HalfReuse: (/16 } Tile{ AsIs: e.ScopeVars#1/5 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.LocalVars#1/9 } Tile{ HalfReuse: )/7 } Tile{ AsIs: e.InBrackets#1/27 } >/34 </35 Tile{ HalfReuse: & @create_closure@/25 HalfReuse: & ExtractNested-Result-Term$3\1/29 AsIs: (/32 AsIs: e.Name#1/30 AsIs: )/33 } Tile{ HalfReuse: >/26 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 34},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 35},
      {refalrts::icUpdateFunc, 0, 3, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 12},
      {refalrts::icReinitFunc, 0, 5, 15},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
      {refalrts::icReinitFunc, 0, 1, 25},
      {refalrts::icReinitFunc, 0, 6, 29},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 26},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 26},
      {refalrts::icPushStack, 0, 0, 35},
      {refalrts::icLinkBrackets, 32, 33, 0},
      {refalrts::icPushStack, 0, 0, 34},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icLinkBrackets, 11, 7, 0},
      {refalrts::icLinkBrackets, 16, 8, 0},
      {refalrts::icLinkBrackets, 23, 24, 0},
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icSetRes, 0, 0, 26},
      {refalrts::icSpliceTile, 25, 33, 0},
      {refalrts::icSpliceTile, 34, 35, 0},
      {refalrts::icSpliceEVar, 0, 0, 27},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 12, 16, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +28, 0, 0},
      // ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) ( # CallBrackets e.idx )
      // </0 & ExtractNested-Result-Term/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.LocalVars#1/9 )/12 (/15 (/19 e.NestedFuncs#1/17 )/20 (/23 e.BorrowedVars#1/21 )/24 )/16 (/25 # CallBrackets/29 e.InBrackets#1/27 )/26 >/1
      {refalrts::icBracketTerm, 0, 27, 25},
      {refalrts::icIdentLeftSave, 29, 1, 27},
      // closed e.ScopeVars#1 as range 5
      // closed e.LocalVars#1 as range 9
      // closed e.NestedFuncs#1 as range 17
      // closed e.BorrowedVars#1 as range 21
      // closed e.InBrackets#1 as range 27
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ HalfReuse: </12 HalfReuse: & ExtractNested-Result/15 AsIs: (/19 AsIs: e.NestedFuncs#1/17 AsIs: )/20 AsIs: (/23 AsIs: e.BorrowedVars#1/21 AsIs: )/24 HalfReuse: (/16 } Tile{ AsIs: e.ScopeVars#1/5 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.LocalVars#1/9 } Tile{ HalfReuse: )/25 } Tile{ AsIs: e.InBrackets#1/27 } Tile{ HalfReuse: >/29 } Tile{ HalfReuse: & ExtractNested-Result-Term$4\1/26 AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 3, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 12},
      {refalrts::icReinitFunc, 0, 5, 15},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 29},
      {refalrts::icReinitFunc, 0, 4, 26},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 29},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icLinkBrackets, 11, 25, 0},
      {refalrts::icLinkBrackets, 16, 8, 0},
      {refalrts::icLinkBrackets, 23, 24, 0},
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icSetRes, 0, 0, 26},
      {refalrts::icSpliceTile, 29, 29, 0},
      {refalrts::icSpliceEVar, 0, 0, 27},
      {refalrts::icSpliceTile, 25, 25, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 12, 16, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +42, 0, 0},
      // ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) ( # Closure ( e.idx ) e.idx )
      // </0 & ExtractNested-Result-Term/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.LocalVars#1/9 )/12 (/15 (/19 e.NestedFuncs#1/17 )/20 (/23 e.BorrowedVars#1/21 )/24 )/16 (/25 # Closure/29 (/32 e.ClosureName#1/30 )/33 e.Body#1/27 )/26 >/1
      {refalrts::icBracketTerm, 0, 27, 25},
      {refalrts::icIdentLeftSave, 29, 0, 27},
      {refalrts::icBracketLeftSave, 0, 30, 27},
      // closed e.ScopeVars#1 as range 5
      // closed e.LocalVars#1 as range 9
      // closed e.NestedFuncs#1 as range 17
      // closed e.BorrowedVars#1 as range 21
      // closed e.ClosureName#1 as range 30
      // closed e.Body#1 as range 27
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </24 HalfReuse: & Fetch/16 HalfReuse: </25 HalfReuse: & ExtractNestedRec/29 AsIs: (/32 } e.ScopeVars#1/5/34 Tile{ AsIs: e.LocalVars#1/9 } Tile{ AsIs: )/33 AsIs: e.Body#1/27 HalfReuse: >/26 HalfReuse: </1 } Tile{ HalfReuse: & @create_closure@/12 HalfReuse: & ExtractNested-Result-Term$5\1/15 AsIs: (/19 AsIs: e.NestedFuncs#1/17 AsIs: )/20 AsIs: (/23 } Tile{ AsIs: e.ClosureName#1/30 } )/36 Tile{ HalfReuse: (/0 } Tile{ AsIs: e.BorrowedVars#1/21 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 HalfReuse: >/11 } >/37 Tile{ ]] }
      {refalrts::icCopyEVar, 34, 5, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 36},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 37},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 24},
      {refalrts::icReinitFunc, 0, 3, 16},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 25},
      {refalrts::icReinitFunc, 0, 2, 29},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 26},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
      {refalrts::icReinitFunc, 0, 1, 12},
      {refalrts::icReinitFunc, 0, 0, 15},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icPushStack, 0, 0, 37},
      {refalrts::icPushStack, 0, 0, 24},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 0, 4, 0},
      {refalrts::icLinkBrackets, 23, 36, 0},
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icPushStack, 0, 0, 26},
      {refalrts::icPushStack, 0, 0, 25},
      {refalrts::icLinkBrackets, 32, 33, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 37, 37, 0},
      {refalrts::icSpliceTile, 4, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 21},
      {refalrts::icSpliceTile, 0, 0, 0},
      {refalrts::icSpliceTile, 36, 36, 0},
      {refalrts::icSpliceEVar, 0, 0, 30},
      {refalrts::icSpliceTile, 12, 23, 0},
      {refalrts::icSpliceTile, 33, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 34, 35, 0},
      {refalrts::icSpliceTile, 24, 32, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) t.idx
      // </0 & ExtractNested-Result-Term/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.LocalVars#1/9 )/12 (/15 (/19 e.NestedFuncs#1/17 )/20 (/23 e.BorrowedVars#1/21 )/24 )/16 t.OtherTerm#1/25 >/1
      // closed e.ScopeVars#1 as range 5
      // closed e.LocalVars#1 as range 9
      // closed e.NestedFuncs#1 as range 17
      // closed e.BorrowedVars#1 as range 21
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractNested-Result-Term/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.LocalVars#1/9 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: (/19 AsIs: e.NestedFuncs#1/17 AsIs: )/20 AsIs: (/23 AsIs: e.BorrowedVars#1/21 AsIs: )/24 AsIs: )/16 AsIs: t.OtherTerm#1/25 } Tile{ ]] }
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 23, 24, 0},
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 15, 26, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ExtractNested_Result_Term

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction ExtractNested_Result_Term(
  "ExtractNested-Result-Term",
  scope_ExtractNested_Result_Term::raa,
  scope_ExtractNested_Result_Term::functions,
  scope_ExtractNested_Result_Term::idents,
  scope_ExtractNested_Result_Term::numbers,
  scope_ExtractNested_Result_Term::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_ExtractNested_Result_Term(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  //FAST GEN: ( e.$ ) ( e.$ ) ( ( e.$ ) ( e.$ ) ) t.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( ( e.$ ) ( e.$ ) ) t.$
  // </0 & ExtractNested-Result-Term/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 (/19 e.idxTTBB#0/17 )/20 (/23 e.idxTTBTB#0/21 )/24 )/16 t.idxTTT#0/25 >/1
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
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTBB#0 as range 17
  // closed e.idxTTBTB#0 as range 21
  context[26] = refalrts::tvar_left( context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) ( # TkVariable s.idx e.idx )
    // </0 & ExtractNested-Result-Term/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.LocalVars#1/9 )/12 (/15 (/19 e.NestedFuncs#1/17 )/20 (/23 e.BorrowedVars#1/21 )/24 )/16 (/25 # TkVariable/29 s.Mode#1/30 e.Index#1/27 )/26 >/1
    context[27] = 0;
    context[28] = 0;
    if( ! refalrts::brackets_term( context[27], context[28], context[25] ) )
      continue;
    context[29] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[27], context[28] );
    if( ! context[29] )
      continue;
    // closed e.ScopeVars#1 as range 5
    // closed e.LocalVars#1 as range 9
    // closed e.NestedFuncs#1 as range 17
    // closed e.BorrowedVars#1 as range 21
    if( ! refalrts::svar_left( context[30], context[27], context[28] ) )
      continue;
    // closed e.Index#1 as range 27

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.LocalVars#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: (/19 AsIs: e.NestedFuncs#1/17 AsIs: )/20 } Tile{ AsIs: </0 Reuse: & CheckBorrowed/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.BorrowedVars#1/21 } Tile{ AsIs: )/12 } Tile{ AsIs: (/23 } Tile{ HalfReuse: s.Mode1 #30/1 } e.Index#1/27/31 )/33 Tile{ HalfReuse: >/24 AsIs: )/16 AsIs: (/25 AsIs: # TkVariable/29 AsIs: s.Mode#1/30 AsIs: e.Index#1/27 AsIs: )/26 } Tile{ ]] }
    if (! refalrts::copy_evar(context[31], context[32], context[27], context[28]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & CheckBorrowed );
    refalrts::reinit_svar( context[1], context[30] );
    refalrts::reinit_close_call( context[24] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[23], context[33] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[26] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[15], context[20] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) ( # Brackets e.idx )
    // </0 & ExtractNested-Result-Term/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.LocalVars#1/9 )/12 (/15 (/19 e.NestedFuncs#1/17 )/20 (/23 e.BorrowedVars#1/21 )/24 )/16 (/25 # Brackets/29 e.InBrackets#1/27 )/26 >/1
    context[27] = 0;
    context[28] = 0;
    if( ! refalrts::brackets_term( context[27], context[28], context[25] ) )
      continue;
    context[29] = refalrts::ident_left(  & ident_Brackets<int>::name, context[27], context[28] );
    if( ! context[29] )
      continue;
    // closed e.ScopeVars#1 as range 5
    // closed e.LocalVars#1 as range 9
    // closed e.NestedFuncs#1 as range 17
    // closed e.BorrowedVars#1 as range 21
    // closed e.InBrackets#1 as range 27

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ HalfReuse: </12 HalfReuse: & ExtractNested-Result/15 AsIs: (/19 AsIs: e.NestedFuncs#1/17 AsIs: )/20 AsIs: (/23 AsIs: e.BorrowedVars#1/21 AsIs: )/24 HalfReuse: (/16 } Tile{ AsIs: e.ScopeVars#1/5 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.LocalVars#1/9 } Tile{ HalfReuse: )/25 } Tile{ AsIs: e.InBrackets#1/27 } Tile{ HalfReuse: >/29 } Tile{ HalfReuse: & ExtractNested-Result-Term$2\1/26 AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Fetch );
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[15], & ExtractNested_Result );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[25] );
    refalrts::reinit_close_call( context[29] );
    refalrts::reinit_name( context[26], & gen_ExtractNested_Result_Term_S2L1 );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[16], context[8] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[26];
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) ( # ADT-Brackets ( e.idx ) e.idx )
    // </0 & ExtractNested-Result-Term/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.LocalVars#1/9 )/12 (/15 (/19 e.NestedFuncs#1/17 )/20 (/23 e.BorrowedVars#1/21 )/24 )/16 (/25 # ADT-Brackets/29 (/32 e.Name#1/30 )/33 e.InBrackets#1/27 )/26 >/1
    context[27] = 0;
    context[28] = 0;
    if( ! refalrts::brackets_term( context[27], context[28], context[25] ) )
      continue;
    context[29] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[27], context[28] );
    if( ! context[29] )
      continue;
    context[30] = 0;
    context[31] = 0;
    context[32] = refalrts::brackets_left( context[30], context[31], context[27], context[28] );
    if( ! context[32] )
      continue;
    refalrts::bracket_pointers(context[32], context[33]);
    // closed e.ScopeVars#1 as range 5
    // closed e.LocalVars#1 as range 9
    // closed e.NestedFuncs#1 as range 17
    // closed e.BorrowedVars#1 as range 21
    // closed e.Name#1 as range 30
    // closed e.InBrackets#1 as range 27

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ HalfReuse: </12 HalfReuse: & ExtractNested-Result/15 AsIs: (/19 AsIs: e.NestedFuncs#1/17 AsIs: )/20 AsIs: (/23 AsIs: e.BorrowedVars#1/21 AsIs: )/24 HalfReuse: (/16 } Tile{ AsIs: e.ScopeVars#1/5 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.LocalVars#1/9 } Tile{ HalfReuse: )/7 } Tile{ AsIs: e.InBrackets#1/27 } >/34 </35 Tile{ HalfReuse: & @create_closure@/25 HalfReuse: & ExtractNested-Result-Term$3\1/29 AsIs: (/32 AsIs: e.Name#1/30 AsIs: )/33 } Tile{ HalfReuse: >/26 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Fetch );
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[15], & ExtractNested_Result );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_name( context[25], & refalrts::create_closure );
    refalrts::reinit_name( context[29], & gen_ExtractNested_Result_Term_S3L1 );
    refalrts::reinit_close_call( context[26] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[35] );
    refalrts::link_brackets( context[32], context[33] );
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[11], context[7] );
    refalrts::link_brackets( context[16], context[8] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[26];
    res = refalrts::splice_evar( res, context[25], context[33] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) ( # CallBrackets e.idx )
    // </0 & ExtractNested-Result-Term/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.LocalVars#1/9 )/12 (/15 (/19 e.NestedFuncs#1/17 )/20 (/23 e.BorrowedVars#1/21 )/24 )/16 (/25 # CallBrackets/29 e.InBrackets#1/27 )/26 >/1
    context[27] = 0;
    context[28] = 0;
    if( ! refalrts::brackets_term( context[27], context[28], context[25] ) )
      continue;
    context[29] = refalrts::ident_left(  & ident_CallBrackets<int>::name, context[27], context[28] );
    if( ! context[29] )
      continue;
    // closed e.ScopeVars#1 as range 5
    // closed e.LocalVars#1 as range 9
    // closed e.NestedFuncs#1 as range 17
    // closed e.BorrowedVars#1 as range 21
    // closed e.InBrackets#1 as range 27

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ HalfReuse: </12 HalfReuse: & ExtractNested-Result/15 AsIs: (/19 AsIs: e.NestedFuncs#1/17 AsIs: )/20 AsIs: (/23 AsIs: e.BorrowedVars#1/21 AsIs: )/24 HalfReuse: (/16 } Tile{ AsIs: e.ScopeVars#1/5 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.LocalVars#1/9 } Tile{ HalfReuse: )/25 } Tile{ AsIs: e.InBrackets#1/27 } Tile{ HalfReuse: >/29 } Tile{ HalfReuse: & ExtractNested-Result-Term$4\1/26 AsIs: >/1 ]] }
    refalrts::update_name( context[4], & Fetch );
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[15], & ExtractNested_Result );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[25] );
    refalrts::reinit_close_call( context[29] );
    refalrts::reinit_name( context[26], & gen_ExtractNested_Result_Term_S4L1 );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[16], context[8] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[26];
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) ( # Closure ( e.idx ) e.idx )
    // </0 & ExtractNested-Result-Term/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.LocalVars#1/9 )/12 (/15 (/19 e.NestedFuncs#1/17 )/20 (/23 e.BorrowedVars#1/21 )/24 )/16 (/25 # Closure/29 (/32 e.ClosureName#1/30 )/33 e.Body#1/27 )/26 >/1
    context[27] = 0;
    context[28] = 0;
    if( ! refalrts::brackets_term( context[27], context[28], context[25] ) )
      continue;
    context[29] = refalrts::ident_left(  & ident_Closure<int>::name, context[27], context[28] );
    if( ! context[29] )
      continue;
    context[30] = 0;
    context[31] = 0;
    context[32] = refalrts::brackets_left( context[30], context[31], context[27], context[28] );
    if( ! context[32] )
      continue;
    refalrts::bracket_pointers(context[32], context[33]);
    // closed e.ScopeVars#1 as range 5
    // closed e.LocalVars#1 as range 9
    // closed e.NestedFuncs#1 as range 17
    // closed e.BorrowedVars#1 as range 21
    // closed e.ClosureName#1 as range 30
    // closed e.Body#1 as range 27

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </24 HalfReuse: & Fetch/16 HalfReuse: </25 HalfReuse: & ExtractNestedRec/29 AsIs: (/32 } e.ScopeVars#1/5/34 Tile{ AsIs: e.LocalVars#1/9 } Tile{ AsIs: )/33 AsIs: e.Body#1/27 HalfReuse: >/26 HalfReuse: </1 } Tile{ HalfReuse: & @create_closure@/12 HalfReuse: & ExtractNested-Result-Term$5\1/15 AsIs: (/19 AsIs: e.NestedFuncs#1/17 AsIs: )/20 AsIs: (/23 } Tile{ AsIs: e.ClosureName#1/30 } )/36 Tile{ HalfReuse: (/0 } Tile{ AsIs: e.BorrowedVars#1/21 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 HalfReuse: >/11 } >/37 Tile{ ]] }
    if (! refalrts::copy_evar(context[34], context[35], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[24] );
    refalrts::reinit_name( context[16], & Fetch );
    refalrts::reinit_open_call( context[25] );
    refalrts::reinit_name( context[29], & ExtractNestedRec );
    refalrts::reinit_close_call( context[26] );
    refalrts::reinit_open_call( context[1] );
    refalrts::reinit_name( context[12], & refalrts::create_closure );
    refalrts::reinit_name( context[15], & gen_ExtractNested_Result_Term_S5L1 );
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_close_call( context[11] );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::link_brackets( context[23], context[36] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[25] );
    refalrts::link_brackets( context[32], context[33] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[4], context[11] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[12], context[23] );
    res = refalrts::splice_evar( res, context[33], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[24], context[32] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) t.idx
  // </0 & ExtractNested-Result-Term/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.LocalVars#1/9 )/12 (/15 (/19 e.NestedFuncs#1/17 )/20 (/23 e.BorrowedVars#1/21 )/24 )/16 t.OtherTerm#1/25 >/1
  // closed e.ScopeVars#1 as range 5
  // closed e.LocalVars#1 as range 9
  // closed e.NestedFuncs#1 as range 17
  // closed e.BorrowedVars#1 as range 21

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractNested-Result-Term/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.LocalVars#1/9 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: (/19 AsIs: e.NestedFuncs#1/17 AsIs: )/20 AsIs: (/23 AsIs: e.BorrowedVars#1/21 AsIs: )/24 AsIs: )/16 AsIs: t.OtherTerm#1/25 } Tile{ ]] }
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[26] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction ExtractNested_Result_Term(func_ExtractNested_Result_Term, "ExtractNested-Result-Term");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_CheckBorrowed {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 4, 0, 0},
      {refalrts::icIssueMemory, 31, 0, 0},
      //FAST GEN: ( e.$ ) ( e.$ ) ( s.$ e.$ )
      //GLOBAL GEN: ( e.$ ) ( e.$ ) ( s.$ e.$ )
      // </0 & CheckBorrowed/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 s.idxTTB#0/17 e.idxTTBV#0/13 )/16 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 13, 2},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxTB#0 as range 9
      {refalrts::icsVarLeft, 0, 17, 13},
      // closed e.idxTTBV#0 as range 13
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // ( e.idx ) ( e.idx ) ( s.idx e.idx )
      // </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.BorrowedVars-B#1/18 (/22 s.Mode#1/24 e.Index#1/25 )/23 e.BorrowedVars-E#1/9 )/12 (/15 s.Mode#1/17 e.Index#1/13 )/16 >/1
      // closed e.ScopeVars#1 as range 5
      // closed e.Index#1 as range 13
      {refalrts::icSave, 0, 27, 9},
      {refalrts::icEPrepare, 0, 18, 27},
      {refalrts::icEStart, 0, 18, 27},
      {refalrts::icSave, 0, 29, 27},
      {refalrts::icBracketLeftSave, 0, 20, 29},
      {refalrts::icsRepeatLeft, 24, 17, 20},
      {refalrts::iceRepeatLeft, 25, 13, 20},
      {refalrts::icEmpty, 0, 0, 20},
      // closed e.BorrowedVars-E#1 as range 29(9)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/5 )/8 {REMOVED TILE} (/15 s.Mode#1/17 e.Index#1/13 )/16 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.BorrowedVars-B#1/18 AsIs: (/22 AsIs: s.Mode#1/24 AsIs: e.Index#1/25 AsIs: )/23 AsIs: e.BorrowedVars-E#1/29(9) AsIs: )/12 } Tile{ ]] }
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 22, 23, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +17, 0, 0},
      // ( e.idx ) ( e.idx ) ( s.idx e.idx )
      // </0 & CheckBorrowed/4 (/7 e.ScopeVars-B#1/18 (/22 s.Mode#1/24 e.Index#1/25 )/23 e.ScopeVars-E#1/5 )/8 (/11 e.BorrowedVars#1/9 )/12 (/15 s.Mode#1/17 e.Index#1/13 )/16 >/1
      // closed e.BorrowedVars#1 as range 9
      // closed e.Index#1 as range 13
      {refalrts::icSave, 0, 27, 5},
      {refalrts::icEPrepare, 0, 18, 27},
      {refalrts::icEStart, 0, 18, 27},
      {refalrts::icSave, 0, 29, 27},
      {refalrts::icBracketLeftSave, 0, 20, 29},
      {refalrts::icsRepeatLeft, 24, 17, 20},
      {refalrts::iceRepeatLeft, 25, 13, 20},
      {refalrts::icEmpty, 0, 0, 20},
      // closed e.ScopeVars-E#1 as range 29(5)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} & CheckBorrowed/4 (/7 e.ScopeVars-B#1/18 (/22 s.Mode#1/24 e.Index#1/25 )/23 e.ScopeVars-E#1/29(5) )/8 (/11 {REMOVED TILE} )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.BorrowedVars#1/9 } Tile{ AsIs: (/15 AsIs: s.Mode#1/17 AsIs: e.Index#1/13 AsIs: )/16 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icSetRes, 0, 0, 15},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) ( e.idx ) ( s.idx e.idx )
      // </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.BorrowedVars#1/9 )/12 (/15 s.Mode#1/17 e.Index#1/13 )/16 >/1
      // closed e.ScopeVars#1 as range 5
      // closed e.BorrowedVars#1 as range 9
      // closed e.Index#1 as range 13
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/5 )/8 {REMOVED TILE} (/15 s.Mode#1/17 e.Index#1/13 )/16 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.BorrowedVars#1/9 AsIs: )/12 } Tile{ ]] }
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_CheckBorrowed

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction CheckBorrowed(
  "CheckBorrowed",
  scope_CheckBorrowed::raa,
  scope_CheckBorrowed::functions,
  scope_CheckBorrowed::idents,
  scope_CheckBorrowed::numbers,
  scope_CheckBorrowed::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_CheckBorrowed(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  //FAST GEN: ( e.$ ) ( e.$ ) ( s.$ e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( s.$ e.$ )
  // </0 & CheckBorrowed/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 s.idxTTB#0/17 e.idxTTBV#0/13 )/16 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTBV#0 as range 13
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( s.idx e.idx )
    // </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.BorrowedVars-B#1/18 (/22 s.Mode#1/24 e.Index#1/25 )/23 e.BorrowedVars-E#1/9 )/12 (/15 s.Mode#1/17 e.Index#1/13 )/16 >/1
    // closed e.ScopeVars#1 as range 5
    // closed e.Index#1 as range 13
    context[27] = context[9];
    context[28] = context[10];
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[29] = context[27];
      context[30] = context[28];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[29], context[30] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      if( ! refalrts::repeated_stvar_left( context[24], context[17], context[20], context[21] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[25], context[26], context[13], context[14], context[20], context[21] ) )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      // closed e.BorrowedVars-E#1 as range 29(9)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/5 )/8 {REMOVED TILE} (/15 s.Mode#1/17 e.Index#1/13 )/16 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.BorrowedVars-B#1/18 AsIs: (/22 AsIs: s.Mode#1/24 AsIs: e.Index#1/25 AsIs: )/23 AsIs: e.BorrowedVars-E#1/29(9) AsIs: )/12 } Tile{ ]] }
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[22], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[18], context[19], context[27], context[28] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( s.idx e.idx )
    // </0 & CheckBorrowed/4 (/7 e.ScopeVars-B#1/18 (/22 s.Mode#1/24 e.Index#1/25 )/23 e.ScopeVars-E#1/5 )/8 (/11 e.BorrowedVars#1/9 )/12 (/15 s.Mode#1/17 e.Index#1/13 )/16 >/1
    // closed e.BorrowedVars#1 as range 9
    // closed e.Index#1 as range 13
    context[27] = context[5];
    context[28] = context[6];
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[29] = context[27];
      context[30] = context[28];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[29], context[30] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      if( ! refalrts::repeated_stvar_left( context[24], context[17], context[20], context[21] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[25], context[26], context[13], context[14], context[20], context[21] ) )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      // closed e.ScopeVars-E#1 as range 29(5)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} & CheckBorrowed/4 (/7 e.ScopeVars-B#1/18 (/22 s.Mode#1/24 e.Index#1/25 )/23 e.ScopeVars-E#1/29(5) )/8 (/11 {REMOVED TILE} )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.BorrowedVars#1/9 } Tile{ AsIs: (/15 AsIs: s.Mode#1/17 AsIs: e.Index#1/13 AsIs: )/16 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[0], context[1] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[0], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[18], context[19], context[27], context[28] ) );
  } while ( 0 );

  // ( e.idx ) ( e.idx ) ( s.idx e.idx )
  // </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.BorrowedVars#1/9 )/12 (/15 s.Mode#1/17 e.Index#1/13 )/16 >/1
  // closed e.ScopeVars#1 as range 5
  // closed e.BorrowedVars#1 as range 9
  // closed e.Index#1 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/5 )/8 {REMOVED TILE} (/15 s.Mode#1/17 e.Index#1/13 )/16 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.BorrowedVars#1/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction CheckBorrowed(func_CheckBorrowed, "CheckBorrowed");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_AddContextToSentence {
    static refalrts::RefalFunction *functions[] = {
      & CreateContext
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 17, 0, 0},
      // </0 & AddContextToSentence/4 e.Context#1/2 (/7 (/11 e.Pattern#1/9 )/12 (/15 e.Result#1/13 )/16 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketRightSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 5},
      {refalrts::icBracketLeftSave, 0, 13, 5},
      {refalrts::icEmpty, 0, 0, 5},
      // closed e.Context#1 as range 2
      // closed e.Pattern#1 as range 9
      // closed e.Result#1 as range 13
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & CreateContext/1 } Tile{ AsIs: e.Context#1/2 } Tile{ HalfReuse: >/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#1/13 AsIs: )/16 AsIs: )/8 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icReinitFunc, 0, 0, 1},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icLinkBrackets, 0, 8, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 4, 12, 0},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 11, 8, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_AddContextToSentence

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction AddContextToSentence(
  "AddContextToSentence",
  scope_AddContextToSentence::raa,
  scope_AddContextToSentence::functions,
  scope_AddContextToSentence::idents,
  scope_AddContextToSentence::numbers,
  scope_AddContextToSentence::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_AddContextToSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & AddContextToSentence/4 e.Context#1/2 (/7 (/11 e.Pattern#1/9 )/12 (/15 e.Result#1/13 )/16 )/8 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Context#1 as range 2
  // closed e.Pattern#1 as range 9
  // closed e.Result#1 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & CreateContext/1 } Tile{ AsIs: e.Context#1/2 } Tile{ HalfReuse: >/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#1/13 AsIs: )/16 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[1], & CreateContext );
  refalrts::reinit_close_call( context[11] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[4], context[12] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction AddContextToSentence(func_AddContextToSentence, "AddContextToSentence");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_CreateContext_L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkVariable<int>::name,
      & ident_Brackets<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 11, 0, 0},
      //FAST GEN: ( s.$ e.$ )
      //GLOBAL GEN: ( s.$ e.$ )
      // </0 & CreateContext\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icsVarLeft, 0, 9, 5},
      // closed e.idxBV#0 as range 5
      {refalrts::icOnFailGoTo, +12, 0, 0},
      // ( 'e' e.idx )
      // </0 & CreateContext\1/4 (/7 'e'/9 e.Index#2/5 )/8 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('e'), 9},
      // closed e.Index#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # Brackets/0 HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: 'e'/9 AsIs: e.Index#2/5 AsIs: )/8 HalfReuse: )/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 10},
      {refalrts::icReinitIdent, 0, 1, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitIdent, 0, 0, 7},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 10, 1, 0},
      {refalrts::icLinkBrackets, 4, 8, 0},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( s.idx e.idx )
      // </0 & CreateContext\1/4 (/7 s.Mode#2/9 e.Index#2/5 )/8 >/1
      // closed e.Index#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: s.Mode#2/9 AsIs: e.Index#2/5 AsIs: )/8 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitIdent, 0, 0, 7},
      {refalrts::icLinkBrackets, 4, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 4, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_CreateContext_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_CreateContext_L1(
  "CreateContext\\1",
  scope_gen_CreateContext_L1::raa,
  scope_gen_CreateContext_L1::functions,
  scope_gen_CreateContext_L1::idents,
  scope_gen_CreateContext_L1::numbers,
  scope_gen_CreateContext_L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_CreateContext_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  //FAST GEN: ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & CreateContext\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
    refalrts::start_sentence();
    // ( 'e' e.idx )
    // </0 & CreateContext\1/4 (/7 'e'/9 e.Index#2/5 )/8 >/1
    if( ! refalrts::char_term( 'e', context[9] ) )
      continue;
    // closed e.Index#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # Brackets/0 HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: 'e'/9 AsIs: e.Index#2/5 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[0], & ident_Brackets<int>::name );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], & ident_TkVariable<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( s.idx e.idx )
  // </0 & CreateContext\1/4 (/7 s.Mode#2/9 e.Index#2/5 )/8 >/1
  // closed e.Index#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: s.Mode#2/9 AsIs: e.Index#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_TkVariable<int>::name );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_CreateContext_L1(func_gen_CreateContext_L1, "CreateContext\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_CreateContext {
    static refalrts::RefalFunction *functions[] = {
      & gen_CreateContext_L1,
      & Map
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 6, 0, 0},
      // </0 & CreateContext/4 e.Context#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Context#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & CreateContext\1/4 AsIs: e.Context#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_CreateContext

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction CreateContext(
  "CreateContext",
  scope_CreateContext::raa,
  scope_CreateContext::functions,
  scope_CreateContext::idents,
  scope_CreateContext::numbers,
  scope_CreateContext::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_CreateContext(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & CreateContext/4 e.Context#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Context#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & CreateContext\1/4 AsIs: e.Context#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Map );
  refalrts::update_name( context[4], & gen_CreateContext_L1 );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction CreateContext(func_CreateContext, "CreateContext");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Pass_CreatePredeclarations_L1S1L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Function<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 18, 0, 0},
      // </0 & Pass-CreatePredeclarations\1$1\1/4 (/7 e.Idents#2/5 )/8 s.ScopeClass#2/9 (/12 e.Name#2/10 )/13 (/16 e.FuncIdents#3/14 )/17 e.Body#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.Idents#2 as range 5
      {refalrts::icsVarLeft, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 10, 2},
      {refalrts::icBracketLeftSave, 0, 14, 2},
      // closed e.Name#2 as range 10
      // closed e.FuncIdents#3 as range 14
      // closed e.Body#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/16 {REMOVED TILE} )/17 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Idents#2/5 } Tile{ AsIs: e.FuncIdents#3/14 } Tile{ HalfReuse: )/4 AsIs: (/7 } Tile{ HalfReuse: # Function/8 AsIs: s.ScopeClass#2/9 AsIs: (/12 AsIs: e.Name#2/10 AsIs: )/13 } Tile{ AsIs: e.Body#3/2 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
      {refalrts::icReinitIdent, 0, 0, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icLinkBrackets, 12, 13, 0},
      {refalrts::icLinkBrackets, 0, 4, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 8, 13, 0},
      {refalrts::icSpliceTile, 4, 7, 0},
      {refalrts::icSpliceEVar, 0, 0, 14},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Pass_CreatePredeclarations_L1S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_Pass_CreatePredeclarations_L1S1L1(
  "Pass-CreatePredeclarations\\1$1\\1",
  scope_gen_Pass_CreatePredeclarations_L1S1L1::raa,
  scope_gen_Pass_CreatePredeclarations_L1S1L1::functions,
  scope_gen_Pass_CreatePredeclarations_L1S1L1::idents,
  scope_gen_Pass_CreatePredeclarations_L1S1L1::numbers,
  scope_gen_Pass_CreatePredeclarations_L1S1L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Pass_CreatePredeclarations_L1S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Pass-CreatePredeclarations\1$1\1/4 (/7 e.Idents#2/5 )/8 s.ScopeClass#2/9 (/12 e.Name#2/10 )/13 (/16 e.FuncIdents#3/14 )/17 e.Body#3/2 >/1
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
  // closed e.Idents#2 as range 5
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
  // closed e.Name#2 as range 10
  // closed e.FuncIdents#3 as range 14
  // closed e.Body#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/16 {REMOVED TILE} )/17 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Idents#2/5 } Tile{ AsIs: e.FuncIdents#3/14 } Tile{ HalfReuse: )/4 AsIs: (/7 } Tile{ HalfReuse: # Function/8 AsIs: s.ScopeClass#2/9 AsIs: (/12 AsIs: e.Name#2/10 AsIs: )/13 } Tile{ AsIs: e.Body#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_ident( context[8], & ident_Function<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[13] );
  res = refalrts::splice_evar( res, context[4], context[7] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_Pass_CreatePredeclarations_L1S1L1(func_gen_Pass_CreatePredeclarations_L1S1L1, "Pass-CreatePredeclarations\\1$1\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Pass_CreatePredeclarations_L1 {
    static refalrts::RefalFunction *functions[] = {
      & gen_Pass_CreatePredeclarations_L1S1L1,
      & refalrts::create_closure,
      & Fetch,
      & ExtractIdents
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NativeBlock<int>::name,
      & ident_Ident<int>::name,
      & ident_Declaration<int>::name,
      & ident_Enum<int>::name,
      & ident_Swap<int>::name,
      & ident_Function<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 5, 0, 0},
      {refalrts::icIssueMemory, 26, 0, 0},
      //FAST GEN: ( e.$ ) ( e.$ )
      //GLOBAL GEN: ( e.$ ) ( s.$ e.$ )
      // </0 & Pass-CreatePredeclarations\1/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 e.idxTBV#0/9 )/12 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.idxB#0 as range 5
      {refalrts::icsVarLeft, 0, 13, 9},
      // closed e.idxTBV#0 as range 9
      {refalrts::icOnFailGoTo, +35, 0, 0},
      // ( e.idx ) ( # Function s.idx ( e.idx ) e.idx )
      // </0 & Pass-CreatePredeclarations\1/4 (/7 e.Idents#2/5 )/8 (/11 # Function/13 s.ScopeClass#2/14 (/17 e.Name#2/15 )/18 e.Body#2/9 )/12 >/1
      {refalrts::icIdentTerm, 0, 5, 13},
      // closed e.Idents#2 as range 5
      {refalrts::icSave, 0, 24, 9},
      {refalrts::icsVarLeft, 0, 14, 24},
      {refalrts::icBracketLeftSave, 0, 15, 24},
      // closed e.Name#2 as range 15
      // closed e.Body#2 as range 24(9)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.ScopeClass#2/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </19 Tile{ HalfReuse: & Fetch/17 } </20 & ExtractIdents/21 Tile{ AsIs: e.Body#2/24(9) } >/22 </23 Tile{ HalfReuse: & @create_closure@/0 Reuse: & Pass-CreatePredeclarations\1$1\1/4 AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 HalfReuse: s.ScopeClass2 #14/11 HalfReuse: (/13 } Tile{ AsIs: e.Name#2/15 } Tile{ AsIs: )/18 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
      {refalrts::icAllocFunc, 0, 3, 21},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 23},
      {refalrts::icReinitFunc, 0, 2, 17},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitSVar, 0, 14, 11},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 13},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 23},
      {refalrts::icLinkBrackets, 13, 18, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icPushStack, 0, 0, 22},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icSetRes, 0, 0, 12},
      {refalrts::icSpliceTile, 18, 18, 0},
      {refalrts::icSpliceEVar, 0, 0, 15},
      {refalrts::icSpliceTile, 0, 13, 0},
      {refalrts::icSpliceTile, 22, 23, 0},
      {refalrts::icSpliceEVar, 0, 0, 24},
      {refalrts::icSpliceTile, 20, 21, 0},
      {refalrts::icSpliceTile, 17, 17, 0},
      {refalrts::icSpliceTile, 19, 19, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) ( # Swap s.idx e.idx )
      // </0 & Pass-CreatePredeclarations\1/4 (/7 e.Idents#2/5 )/8 (/11 # Swap/13 s.ScopeClass#2/14 e.Name#2/9 )/12 >/1
      {refalrts::icIdentTerm, 0, 4, 13},
      // closed e.Idents#2 as range 5
      {refalrts::icSave, 0, 24, 9},
      {refalrts::icsVarLeft, 0, 14, 24},
      // closed e.Name#2 as range 24(9)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Pass-CreatePredeclarations\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 AsIs: (/11 AsIs: # Swap/13 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/24(9) AsIs: )/12 } Tile{ ]] }
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 12, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) ( # Enum s.idx e.idx )
      // </0 & Pass-CreatePredeclarations\1/4 (/7 e.Idents#2/5 )/8 (/11 # Enum/13 s.ScopeClass#2/14 e.Name#2/9 )/12 >/1
      {refalrts::icIdentTerm, 0, 3, 13},
      // closed e.Idents#2 as range 5
      {refalrts::icSave, 0, 24, 9},
      {refalrts::icsVarLeft, 0, 14, 24},
      // closed e.Name#2 as range 24(9)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Pass-CreatePredeclarations\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 AsIs: (/11 AsIs: # Enum/13 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/24(9) AsIs: )/12 } Tile{ ]] }
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 12, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) ( # Declaration s.idx e.idx )
      // </0 & Pass-CreatePredeclarations\1/4 (/7 e.Idents#2/5 )/8 (/11 # Declaration/13 s.ScopeClass#2/14 e.Name#2/9 )/12 >/1
      {refalrts::icIdentTerm, 0, 2, 13},
      // closed e.Idents#2 as range 5
      {refalrts::icSave, 0, 24, 9},
      {refalrts::icsVarLeft, 0, 14, 24},
      // closed e.Name#2 as range 24(9)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Pass-CreatePredeclarations\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 AsIs: (/11 AsIs: # Declaration/13 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/24(9) AsIs: )/12 } Tile{ ]] }
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 12, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) ( # Ident e.idx )
      // </0 & Pass-CreatePredeclarations\1/4 (/7 e.Idents#2/5 )/8 (/11 # Ident/13 e.Name#2/9 )/12 >/1
      {refalrts::icIdentTerm, 0, 1, 13},
      // closed e.Idents#2 as range 5
      // closed e.Name#2 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} & Pass-CreatePredeclarations\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Idents#2/5 } Tile{ AsIs: (/11 AsIs: # Ident/13 AsIs: e.Name#2/9 AsIs: )/12 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 0, 1, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetRes, 0, 0, 11},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) ( # NativeBlock t.idx e.idx )
      // </0 & Pass-CreatePredeclarations\1/4 (/7 e.Idents#2/5 )/8 (/11 # NativeBlock/13 t.SrcPos#2/14 e.Code#2/9 )/12 >/1
      {refalrts::icIdentTerm, 0, 0, 13},
      // closed e.Idents#2 as range 5
      {refalrts::ictVarLeftSave, 0, 14, 9},
      // closed e.Code#2 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Pass-CreatePredeclarations\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 AsIs: (/11 AsIs: # NativeBlock/13 AsIs: t.SrcPos#2/14 AsIs: e.Code#2/9 AsIs: )/12 } Tile{ ]] }
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 12, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Pass_CreatePredeclarations_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_Pass_CreatePredeclarations_L1(
  "Pass-CreatePredeclarations\\1",
  scope_gen_Pass_CreatePredeclarations_L1::raa,
  scope_gen_Pass_CreatePredeclarations_L1::functions,
  scope_gen_Pass_CreatePredeclarations_L1::idents,
  scope_gen_Pass_CreatePredeclarations_L1::numbers,
  scope_gen_Pass_CreatePredeclarations_L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Pass_CreatePredeclarations_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  //FAST GEN: ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( s.$ e.$ )
  // </0 & Pass-CreatePredeclarations\1/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 e.idxTBV#0/9 )/12 >/1
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
    refalrts::start_sentence();
    // ( e.idx ) ( # Function s.idx ( e.idx ) e.idx )
    // </0 & Pass-CreatePredeclarations\1/4 (/7 e.Idents#2/5 )/8 (/11 # Function/13 s.ScopeClass#2/14 (/17 e.Name#2/15 )/18 e.Body#2/9 )/12 >/1
    if( ! refalrts::ident_term(  & ident_Function<int>::name, context[13] ) )
      continue;
    // closed e.Idents#2 as range 5
    context[24] = context[9];
    context[25] = context[10];
    if( ! refalrts::svar_left( context[14], context[24], context[25] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[24], context[25] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Name#2 as range 15
    // closed e.Body#2 as range 24(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.ScopeClass#2/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 Tile{ HalfReuse: & Fetch/17 } </20 & ExtractIdents/21 Tile{ AsIs: e.Body#2/24(9) } >/22 </23 Tile{ HalfReuse: & @create_closure@/0 Reuse: & Pass-CreatePredeclarations\1$1\1/4 AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 HalfReuse: s.ScopeClass2 #14/11 HalfReuse: (/13 } Tile{ AsIs: e.Name#2/15 } Tile{ AsIs: )/18 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], & ExtractIdents ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[17], & Fetch );
    refalrts::reinit_name( context[0], & refalrts::create_closure );
    refalrts::update_name( context[4], & gen_Pass_CreatePredeclarations_L1S1L1 );
    refalrts::reinit_svar( context[11], context[14] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[13], context[18] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Swap s.idx e.idx )
    // </0 & Pass-CreatePredeclarations\1/4 (/7 e.Idents#2/5 )/8 (/11 # Swap/13 s.ScopeClass#2/14 e.Name#2/9 )/12 >/1
    if( ! refalrts::ident_term(  & ident_Swap<int>::name, context[13] ) )
      continue;
    // closed e.Idents#2 as range 5
    context[24] = context[9];
    context[25] = context[10];
    if( ! refalrts::svar_left( context[14], context[24], context[25] ) )
      continue;
    // closed e.Name#2 as range 24(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Pass-CreatePredeclarations\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 AsIs: (/11 AsIs: # Swap/13 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/24(9) AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Enum s.idx e.idx )
    // </0 & Pass-CreatePredeclarations\1/4 (/7 e.Idents#2/5 )/8 (/11 # Enum/13 s.ScopeClass#2/14 e.Name#2/9 )/12 >/1
    if( ! refalrts::ident_term(  & ident_Enum<int>::name, context[13] ) )
      continue;
    // closed e.Idents#2 as range 5
    context[24] = context[9];
    context[25] = context[10];
    if( ! refalrts::svar_left( context[14], context[24], context[25] ) )
      continue;
    // closed e.Name#2 as range 24(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Pass-CreatePredeclarations\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 AsIs: (/11 AsIs: # Enum/13 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/24(9) AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Declaration s.idx e.idx )
    // </0 & Pass-CreatePredeclarations\1/4 (/7 e.Idents#2/5 )/8 (/11 # Declaration/13 s.ScopeClass#2/14 e.Name#2/9 )/12 >/1
    if( ! refalrts::ident_term(  & ident_Declaration<int>::name, context[13] ) )
      continue;
    // closed e.Idents#2 as range 5
    context[24] = context[9];
    context[25] = context[10];
    if( ! refalrts::svar_left( context[14], context[24], context[25] ) )
      continue;
    // closed e.Name#2 as range 24(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Pass-CreatePredeclarations\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 AsIs: (/11 AsIs: # Declaration/13 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/24(9) AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Ident e.idx )
    // </0 & Pass-CreatePredeclarations\1/4 (/7 e.Idents#2/5 )/8 (/11 # Ident/13 e.Name#2/9 )/12 >/1
    if( ! refalrts::ident_term(  & ident_Ident<int>::name, context[13] ) )
      continue;
    // closed e.Idents#2 as range 5
    // closed e.Name#2 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & Pass-CreatePredeclarations\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Idents#2/5 } Tile{ AsIs: (/11 AsIs: # Ident/13 AsIs: e.Name#2/9 AsIs: )/12 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) ( # NativeBlock t.idx e.idx )
  // </0 & Pass-CreatePredeclarations\1/4 (/7 e.Idents#2/5 )/8 (/11 # NativeBlock/13 t.SrcPos#2/14 e.Code#2/9 )/12 >/1
  if( ! refalrts::ident_term(  & ident_NativeBlock<int>::name, context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Idents#2 as range 5
  context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-CreatePredeclarations\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 AsIs: (/11 AsIs: # NativeBlock/13 AsIs: t.SrcPos#2/14 AsIs: e.Code#2/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_Pass_CreatePredeclarations_L1(func_gen_Pass_CreatePredeclarations_L1, "Pass-CreatePredeclarations\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_Pass_CreatePredeclarations_L2 {
    static refalrts::RefalFunction *functions[] = {
      & UniqSorted,
      & Sort
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 10, 0, 0},
      // </0 & Pass-CreatePredeclarations\2/4 (/7 e.Idents#2/5 )/8 e.Functions#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.Idents#2 as range 5
      // closed e.Functions#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & UniqSorted/4 HalfReuse: </7 } & Sort/9 Tile{ AsIs: e.Idents#2/5 } Tile{ AsIs: >/1 } Tile{ HalfReuse: >/8 } Tile{ AsIs: e.Functions#2/2 } Tile{ ]] }
      {refalrts::icAllocFunc, 0, 1, 9},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_Pass_CreatePredeclarations_L2

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_Pass_CreatePredeclarations_L2(
  "Pass-CreatePredeclarations\\2",
  scope_gen_Pass_CreatePredeclarations_L2::raa,
  scope_gen_Pass_CreatePredeclarations_L2::functions,
  scope_gen_Pass_CreatePredeclarations_L2::idents,
  scope_gen_Pass_CreatePredeclarations_L2::numbers,
  scope_gen_Pass_CreatePredeclarations_L2::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_Pass_CreatePredeclarations_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Pass-CreatePredeclarations\2/4 (/7 e.Idents#2/5 )/8 e.Functions#2/2 >/1
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
  // closed e.Idents#2 as range 5
  // closed e.Functions#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UniqSorted/4 HalfReuse: </7 } & Sort/9 Tile{ AsIs: e.Idents#2/5 } Tile{ AsIs: >/1 } Tile{ HalfReuse: >/8 } Tile{ AsIs: e.Functions#2/2 } Tile{ ]] }
  if( ! refalrts::alloc_name( context[9], & Sort ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & UniqSorted );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_Pass_CreatePredeclarations_L2(func_gen_Pass_CreatePredeclarations_L2, "Pass-CreatePredeclarations\\2");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Pass_CreatePredeclarations {
    static refalrts::RefalFunction *functions[] = {
      & Fetch,
      & gen_Pass_CreatePredeclarations_L2,
      & gen_Pass_CreatePredeclarations_L1,
      & MapReduce,
      & FoldEnums,
      & RemoveRedudandElements,
      & Seq
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 17, 0, 0},
      // </0 & Pass-CreatePredeclarations/4 e.AST#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.AST#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.AST#1/2 HalfReuse: </1 } & Seq/5 & RemoveRedudandElements/6 & FoldEnums/7 (/8 & MapReduce/9 & Pass-CreatePredeclarations\1/10 (/11 )/12 )/13 & Pass-CreatePredeclarations\2/14 >/15 >/16 Tile{ ]] }
      {refalrts::icAllocFunc, 0, 6, 5},
      {refalrts::icAllocFunc, 0, 5, 6},
      {refalrts::icAllocFunc, 0, 4, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icAllocFunc, 0, 3, 9},
      {refalrts::icAllocFunc, 0, 2, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
      {refalrts::icAllocFunc, 0, 1, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icLinkBrackets, 8, 13, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 16, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Pass_CreatePredeclarations

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction Pass_CreatePredeclarations(
  "Pass-CreatePredeclarations",
  scope_Pass_CreatePredeclarations::raa,
  scope_Pass_CreatePredeclarations::functions,
  scope_Pass_CreatePredeclarations::idents,
  scope_Pass_CreatePredeclarations::numbers,
  scope_Pass_CreatePredeclarations::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_Pass_CreatePredeclarations(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Pass-CreatePredeclarations/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.AST#1/2 HalfReuse: </1 } & Seq/5 & RemoveRedudandElements/6 & FoldEnums/7 (/8 & MapReduce/9 & Pass-CreatePredeclarations\1/10 (/11 )/12 )/13 & Pass-CreatePredeclarations\2/14 >/15 >/16 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], & Seq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & RemoveRedudandElements ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], & FoldEnums ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], & MapReduce ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & gen_Pass_CreatePredeclarations_L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], & gen_Pass_CreatePredeclarations_L2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[8], context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction Pass_CreatePredeclarations(func_Pass_CreatePredeclarations, "Pass-CreatePredeclarations");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_RemoveRedudandElements_L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NativeBlock<int>::name,
      & ident_Ident<int>::name,
      & ident_Declaration<int>::name,
      & ident_Swap<int>::name,
      & ident_Enum<int>::name,
      & ident_Function<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 5, 0, 0},
      {refalrts::icIssueMemory, 23, 0, 0},
      //FAST GEN: ( e.$ ) ( e.$ )
      //GLOBAL GEN: ( e.$ ) ( s.$ e.$ )
      // </0 & RemoveRedudandElements\1/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 e.idxTBV#0/9 )/12 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.idxB#0 as range 5
      {refalrts::icsVarLeft, 0, 13, 9},
      // closed e.idxTBV#0 as range 9
      {refalrts::icOnFailGoTo, +20, 0, 0},
      // ( e.idx ) ( # Function s.idx ( e.idx ) e.idx )
      // </0 & RemoveRedudandElements\1/4 (/7 e.Functions#2/5 )/8 (/11 # Function/13 s.ScopeClass#2/14 (/17 e.Name#2/15 )/18 e.Body#2/9 )/12 >/1
      {refalrts::icIdentTerm, 0, 5, 13},
      // closed e.Functions#2 as range 5
      {refalrts::icSave, 0, 21, 9},
      {refalrts::icsVarLeft, 0, 14, 21},
      {refalrts::icBracketLeftSave, 0, 15, 21},
      // closed e.Name#2 as range 15
      // closed e.Body#2 as range 21(9)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} & RemoveRedudandElements\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Functions#2/5 } Tile{ AsIs: (/7 } e.Name#2/15/19 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Function/13 AsIs: s.ScopeClass#2/14 AsIs: (/17 AsIs: e.Name#2/15 AsIs: )/18 AsIs: e.Body#2/21(9) AsIs: )/12 } Tile{ ]] }
      {refalrts::icCopyEVar, 19, 15, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 17, 18, 0},
      {refalrts::icLinkBrackets, 0, 8, 0},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 12, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 19, 20, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // ( e.idx ) ( # Enum s.idx e.idx )
      // </0 & RemoveRedudandElements\1/4 (/7 e.Functions#2/5 )/8 (/11 # Enum/13 s.ScopeClass#2/14 e.Name#2/9 )/12 >/1
      {refalrts::icIdentTerm, 0, 4, 13},
      // closed e.Functions#2 as range 5
      {refalrts::icSave, 0, 21, 9},
      {refalrts::icsVarLeft, 0, 14, 21},
      // closed e.Name#2 as range 21(9)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} & RemoveRedudandElements\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Functions#2/5 } Tile{ AsIs: (/7 } e.Name#2/21(9)/15 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Enum/13 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/21(9) AsIs: )/12 } Tile{ ]] }
      {refalrts::icCopyEVar, 15, 21, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 0, 8, 0},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 12, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // ( e.idx ) ( # Swap s.idx e.idx )
      // </0 & RemoveRedudandElements\1/4 (/7 e.Functions#2/5 )/8 (/11 # Swap/13 s.ScopeClass#2/14 e.Name#2/9 )/12 >/1
      {refalrts::icIdentTerm, 0, 3, 13},
      // closed e.Functions#2 as range 5
      {refalrts::icSave, 0, 21, 9},
      {refalrts::icsVarLeft, 0, 14, 21},
      // closed e.Name#2 as range 21(9)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} & RemoveRedudandElements\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Functions#2/5 } Tile{ AsIs: (/7 } e.Name#2/21(9)/15 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Swap/13 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/21(9) AsIs: )/12 } Tile{ ]] }
      {refalrts::icCopyEVar, 15, 21, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 0, 8, 0},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 12, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( e.idx ) ( # Declaration s.idx e.idx )
      // </0 & RemoveRedudandElements\1/4 (/7 e.Functions#2/5 )/8 (/11 # Declaration/13 s.ScopeClass#2/14 e.Name#2/9 )/12 >/1
      {refalrts::icIdentTerm, 0, 2, 13},
      // closed e.Functions#2 as range 5
      {refalrts::icSave, 0, 21, 9},
      {refalrts::icsVarLeft, 0, 14, 21},
      // closed e.Name#2 as range 21(9)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RemoveRedudandElements\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Functions#2/5 AsIs: )/8 AsIs: (/11 AsIs: # Declaration/13 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/21(9) AsIs: )/12 } Tile{ ]] }
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 12, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +8, 0, 0},
      // ( e.idx ) ( # Ident e.idx )
      // </0 & RemoveRedudandElements\1/4 (/7 e.Functions#2/5 )/8 (/11 # Ident/13 e.Name#2/9 )/12 >/1
      {refalrts::icIdentTerm, 0, 1, 13},
      // closed e.Functions#2 as range 5
      // closed e.Name#2 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RemoveRedudandElements\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Functions#2/5 AsIs: )/8 AsIs: (/11 AsIs: # Ident/13 AsIs: e.Name#2/9 AsIs: )/12 } Tile{ ]] }
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 12, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) ( # NativeBlock t.idx e.idx )
      // </0 & RemoveRedudandElements\1/4 (/7 e.Functions#2/5 )/8 (/11 # NativeBlock/13 t.SrcPos#2/14 e.Code#2/9 )/12 >/1
      {refalrts::icIdentTerm, 0, 0, 13},
      // closed e.Functions#2 as range 5
      {refalrts::ictVarLeftSave, 0, 14, 9},
      // closed e.Code#2 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RemoveRedudandElements\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Functions#2/5 AsIs: )/8 AsIs: (/11 AsIs: # NativeBlock/13 AsIs: t.SrcPos#2/14 AsIs: e.Code#2/9 AsIs: )/12 } Tile{ ]] }
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 12, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_RemoveRedudandElements_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_RemoveRedudandElements_L1(
  "RemoveRedudandElements\\1",
  scope_gen_RemoveRedudandElements_L1::raa,
  scope_gen_RemoveRedudandElements_L1::functions,
  scope_gen_RemoveRedudandElements_L1::idents,
  scope_gen_RemoveRedudandElements_L1::numbers,
  scope_gen_RemoveRedudandElements_L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_RemoveRedudandElements_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  //FAST GEN: ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( s.$ e.$ )
  // </0 & RemoveRedudandElements\1/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 e.idxTBV#0/9 )/12 >/1
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
    refalrts::start_sentence();
    // ( e.idx ) ( # Function s.idx ( e.idx ) e.idx )
    // </0 & RemoveRedudandElements\1/4 (/7 e.Functions#2/5 )/8 (/11 # Function/13 s.ScopeClass#2/14 (/17 e.Name#2/15 )/18 e.Body#2/9 )/12 >/1
    if( ! refalrts::ident_term(  & ident_Function<int>::name, context[13] ) )
      continue;
    // closed e.Functions#2 as range 5
    context[21] = context[9];
    context[22] = context[10];
    if( ! refalrts::svar_left( context[14], context[21], context[22] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[21], context[22] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Name#2 as range 15
    // closed e.Body#2 as range 21(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & RemoveRedudandElements\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Functions#2/5 } Tile{ AsIs: (/7 } e.Name#2/15/19 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Function/13 AsIs: s.ScopeClass#2/14 AsIs: (/17 AsIs: e.Name#2/15 AsIs: )/18 AsIs: e.Body#2/21(9) AsIs: )/12 } Tile{ ]] }
    if (! refalrts::copy_evar(context[19], context[20], context[15], context[16]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Enum s.idx e.idx )
    // </0 & RemoveRedudandElements\1/4 (/7 e.Functions#2/5 )/8 (/11 # Enum/13 s.ScopeClass#2/14 e.Name#2/9 )/12 >/1
    if( ! refalrts::ident_term(  & ident_Enum<int>::name, context[13] ) )
      continue;
    // closed e.Functions#2 as range 5
    context[21] = context[9];
    context[22] = context[10];
    if( ! refalrts::svar_left( context[14], context[21], context[22] ) )
      continue;
    // closed e.Name#2 as range 21(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & RemoveRedudandElements\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Functions#2/5 } Tile{ AsIs: (/7 } e.Name#2/21(9)/15 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Enum/13 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/21(9) AsIs: )/12 } Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[21], context[22]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Swap s.idx e.idx )
    // </0 & RemoveRedudandElements\1/4 (/7 e.Functions#2/5 )/8 (/11 # Swap/13 s.ScopeClass#2/14 e.Name#2/9 )/12 >/1
    if( ! refalrts::ident_term(  & ident_Swap<int>::name, context[13] ) )
      continue;
    // closed e.Functions#2 as range 5
    context[21] = context[9];
    context[22] = context[10];
    if( ! refalrts::svar_left( context[14], context[21], context[22] ) )
      continue;
    // closed e.Name#2 as range 21(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & RemoveRedudandElements\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Functions#2/5 } Tile{ AsIs: (/7 } e.Name#2/21(9)/15 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Swap/13 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/21(9) AsIs: )/12 } Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[21], context[22]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Declaration s.idx e.idx )
    // </0 & RemoveRedudandElements\1/4 (/7 e.Functions#2/5 )/8 (/11 # Declaration/13 s.ScopeClass#2/14 e.Name#2/9 )/12 >/1
    if( ! refalrts::ident_term(  & ident_Declaration<int>::name, context[13] ) )
      continue;
    // closed e.Functions#2 as range 5
    context[21] = context[9];
    context[22] = context[10];
    if( ! refalrts::svar_left( context[14], context[21], context[22] ) )
      continue;
    // closed e.Name#2 as range 21(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RemoveRedudandElements\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Functions#2/5 AsIs: )/8 AsIs: (/11 AsIs: # Declaration/13 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/21(9) AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Ident e.idx )
    // </0 & RemoveRedudandElements\1/4 (/7 e.Functions#2/5 )/8 (/11 # Ident/13 e.Name#2/9 )/12 >/1
    if( ! refalrts::ident_term(  & ident_Ident<int>::name, context[13] ) )
      continue;
    // closed e.Functions#2 as range 5
    // closed e.Name#2 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RemoveRedudandElements\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Functions#2/5 AsIs: )/8 AsIs: (/11 AsIs: # Ident/13 AsIs: e.Name#2/9 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) ( # NativeBlock t.idx e.idx )
  // </0 & RemoveRedudandElements\1/4 (/7 e.Functions#2/5 )/8 (/11 # NativeBlock/13 t.SrcPos#2/14 e.Code#2/9 )/12 >/1
  if( ! refalrts::ident_term(  & ident_NativeBlock<int>::name, context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Functions#2 as range 5
  context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RemoveRedudandElements\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Functions#2/5 AsIs: )/8 AsIs: (/11 AsIs: # NativeBlock/13 AsIs: t.SrcPos#2/14 AsIs: e.Code#2/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_RemoveRedudandElements_L1(func_gen_RemoveRedudandElements_L1, "RemoveRedudandElements\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_RemoveRedudandElements_L2 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Declaration<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 27, 0, 0},
      //FAST GEN: ( e.$ ) t.$
      //GLOBAL GEN: ( e.$ ) t.$
      // </0 & RemoveRedudandElements\2/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      {refalrts::ictVarLeftSave, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +17, 0, 0},
      // ( e.idx ) ( # Declaration s.idx e.idx )
      // </0 & RemoveRedudandElements\2/4 (/7 e.Functions-B#2/15 (/19 e.Name#2/21 )/20 e.Functions-E#2/5 )/8 (/9 # Declaration/13 s.ScopeClass#2/14 e.Name#2/11 )/10 >/1
      {refalrts::icBracketTerm, 0, 11, 9},
      {refalrts::icIdentLeftSave, 13, 0, 11},
      {refalrts::icsVarLeft, 0, 14, 11},
      // closed e.Name#2 as range 11
      {refalrts::icSave, 0, 23, 5},
      {refalrts::icEPrepare, 0, 15, 23},
      {refalrts::icEStart, 0, 15, 23},
      {refalrts::icSave, 0, 25, 23},
      {refalrts::icBracketLeftSave, 0, 17, 25},
      {refalrts::iceRepeatLeft, 21, 11, 17},
      {refalrts::icEmpty, 0, 0, 17},
      // closed e.Functions-E#2 as range 25(5)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RemoveRedudandElements\2/4 {REMOVED TILE} (/9 # Declaration/13 s.ScopeClass#2/14 e.Name#2/11 )/10 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Functions-B#2/15 AsIs: (/19 AsIs: e.Name#2/21 AsIs: )/20 AsIs: e.Functions-E#2/25(5) AsIs: )/8 } Tile{ ]] }
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) t.idx
      // </0 & RemoveRedudandElements\2/4 (/7 e.Functions#2/5 )/8 t.OtherItem#2/9 >/1
      // closed e.Functions#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RemoveRedudandElements\2/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Functions#2/5 AsIs: )/8 AsIs: t.OtherItem#2/9 } Tile{ ]] }
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 10, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_RemoveRedudandElements_L2

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_RemoveRedudandElements_L2(
  "RemoveRedudandElements\\2",
  scope_gen_RemoveRedudandElements_L2::raa,
  scope_gen_RemoveRedudandElements_L2::functions,
  scope_gen_RemoveRedudandElements_L2::idents,
  scope_gen_RemoveRedudandElements_L2::numbers,
  scope_gen_RemoveRedudandElements_L2::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_RemoveRedudandElements_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  //FAST GEN: ( e.$ ) t.$
  //GLOBAL GEN: ( e.$ ) t.$
  // </0 & RemoveRedudandElements\2/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 >/1
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
  // closed e.idxB#0 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Declaration s.idx e.idx )
    // </0 & RemoveRedudandElements\2/4 (/7 e.Functions-B#2/15 (/19 e.Name#2/21 )/20 e.Functions-E#2/5 )/8 (/9 # Declaration/13 s.ScopeClass#2/14 e.Name#2/11 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_Declaration<int>::name, context[11], context[12] );
    if( ! context[13] )
      continue;
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    // closed e.Name#2 as range 11
    context[23] = context[5];
    context[24] = context[6];
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop();
    do {
      context[25] = context[23];
      context[26] = context[24];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[25], context[26] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      if( ! refalrts::repeated_evar_left( context[21], context[22], context[11], context[12], context[17], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.Functions-E#2 as range 25(5)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & RemoveRedudandElements\2/4 {REMOVED TILE} (/9 # Declaration/13 s.ScopeClass#2/14 e.Name#2/11 )/10 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Functions-B#2/15 AsIs: (/19 AsIs: e.Name#2/21 AsIs: )/20 AsIs: e.Functions-E#2/25(5) AsIs: )/8 } Tile{ ]] }
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[23], context[24] ) );
  } while ( 0 );

  // ( e.idx ) t.idx
  // </0 & RemoveRedudandElements\2/4 (/7 e.Functions#2/5 )/8 t.OtherItem#2/9 >/1
  // closed e.Functions#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RemoveRedudandElements\2/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Functions#2/5 AsIs: )/8 AsIs: t.OtherItem#2/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_RemoveRedudandElements_L2(func_gen_RemoveRedudandElements_L2, "RemoveRedudandElements\\2");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_RemoveRedudandElements_L3S1L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Ident<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 6, 0, 0},
      // </0 & RemoveRedudandElements\3$1\1/4 # Ident/5 e.Name#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icIdentLeftSave, 5, 0, 2},
      // closed e.Name#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: # Ident/5 AsIs: e.Name#3/2 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 4, 1, 0},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_RemoveRedudandElements_L3S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_RemoveRedudandElements_L3S1L1(
  "RemoveRedudandElements\\3$1\\1",
  scope_gen_RemoveRedudandElements_L3S1L1::raa,
  scope_gen_RemoveRedudandElements_L3S1L1::functions,
  scope_gen_RemoveRedudandElements_L3S1L1::idents,
  scope_gen_RemoveRedudandElements_L3S1L1::numbers,
  scope_gen_RemoveRedudandElements_L3S1L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_RemoveRedudandElements_L3S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & RemoveRedudandElements\3$1\1/4 # Ident/5 e.Name#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_Ident<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: # Ident/5 AsIs: e.Name#3/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_RemoveRedudandElements_L3S1L1(func_gen_RemoveRedudandElements_L3S1L1, "RemoveRedudandElements\\3$1\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_RemoveRedudandElements_L3S2L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Ident<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 6, 0, 0},
      // </0 & RemoveRedudandElements\3$2\1/4 # Ident/5 e.Name#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icIdentLeftSave, 5, 0, 2},
      // closed e.Name#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: # Ident/5 AsIs: e.Name#3/2 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 4, 1, 0},
      {refalrts::icSetRes, 0, 0, 4},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_RemoveRedudandElements_L3S2L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_RemoveRedudandElements_L3S2L1(
  "RemoveRedudandElements\\3$2\\1",
  scope_gen_RemoveRedudandElements_L3S2L1::raa,
  scope_gen_RemoveRedudandElements_L3S2L1::functions,
  scope_gen_RemoveRedudandElements_L3S2L1::idents,
  scope_gen_RemoveRedudandElements_L3S2L1::numbers,
  scope_gen_RemoveRedudandElements_L3S2L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_RemoveRedudandElements_L3S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & RemoveRedudandElements\3$2\1/4 # Ident/5 e.Name#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_Ident<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: # Ident/5 AsIs: e.Name#3/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_RemoveRedudandElements_L3S2L1(func_gen_RemoveRedudandElements_L3S2L1, "RemoveRedudandElements\\3$2\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_RemoveRedudandElements_L3S3L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Ident<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 6, 0, 0},
      // </0 & RemoveRedudandElements\3$3\1/4 # Ident/5 e.Name#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icIdentLeftSave, 5, 0, 2},
      // closed e.Name#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RemoveRedudandElements\3$3\1/4 # Ident/5 e.Name#3/2 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_RemoveRedudandElements_L3S3L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_RemoveRedudandElements_L3S3L1(
  "RemoveRedudandElements\\3$3\\1",
  scope_gen_RemoveRedudandElements_L3S3L1::raa,
  scope_gen_RemoveRedudandElements_L3S3L1::functions,
  scope_gen_RemoveRedudandElements_L3S3L1::idents,
  scope_gen_RemoveRedudandElements_L3S3L1::numbers,
  scope_gen_RemoveRedudandElements_L3S3L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_RemoveRedudandElements_L3S3L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & RemoveRedudandElements\3$3\1/4 # Ident/5 e.Name#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_Ident<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RemoveRedudandElements\3$3\1/4 # Ident/5 e.Name#3/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_RemoveRedudandElements_L3S3L1(func_gen_RemoveRedudandElements_L3S3L1, "RemoveRedudandElements\\3$3\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_RemoveRedudandElements_L3 {
    static refalrts::RefalFunction *functions[] = {
      & gen_RemoveRedudandElements_L3S3L1,
      & gen_RemoveRedudandElements_L3S2L1,
      & gen_RemoveRedudandElements_L3S1L1
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NativeBody<int>::name,
      & ident_Function<int>::name,
      & ident_NativeBlock<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 4, 0, 0},
      {refalrts::icIssueMemory, 22, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & RemoveRedudandElements\3/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // e.idx
      // </0 & RemoveRedudandElements\3/4 e.AST-B#2/5 (/9 # NativeBlock/11 t.SrcPos#2/12 e.Code#2/7 )/10 e.AST-E#2/2 >/1
      {refalrts::icSave, 0, 18, 2},
      {refalrts::icEPrepare, 0, 5, 18},
      {refalrts::icEStart, 0, 5, 18},
      {refalrts::icSave, 0, 20, 18},
      {refalrts::icBracketLeftSave, 0, 7, 20},
      {refalrts::icIdentLeftSave, 11, 2, 7},
      // closed e.AST-E#2 as range 20(2)
      {refalrts::ictVarLeftSave, 0, 12, 7},
      // closed e.Code#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: & RemoveRedudandElements\3$1\1/4 AsIs: e.AST-B#2/5 AsIs: (/9 AsIs: # NativeBlock/11 AsIs: t.SrcPos#2/12 AsIs: e.Code#2/7 AsIs: )/10 } Tile{ AsIs: e.AST-E#2/20(2) } Tile{ ]] }
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icLinkBrackets, 9, 10, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 20},
      {refalrts::icSpliceTile, 4, 10, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // e.idx
      // </0 & RemoveRedudandElements\3/4 e.AST-B#2/5 (/9 # Function/11 s.ScopeClass#2/12 (/15 e.Name#2/13 )/16 # NativeBody/17 e.Code#2/7 )/10 e.AST-E#2/2 >/1
      {refalrts::icSave, 0, 18, 2},
      {refalrts::icEPrepare, 0, 5, 18},
      {refalrts::icEStart, 0, 5, 18},
      {refalrts::icSave, 0, 20, 18},
      {refalrts::icBracketLeftSave, 0, 7, 20},
      {refalrts::icIdentLeftSave, 11, 1, 7},
      // closed e.AST-E#2 as range 20(2)
      {refalrts::icsVarLeft, 0, 12, 7},
      {refalrts::icBracketLeftSave, 0, 13, 7},
      {refalrts::icIdentLeftSave, 17, 0, 7},
      // closed e.Name#2 as range 13
      // closed e.Code#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: & RemoveRedudandElements\3$2\1/4 AsIs: e.AST-B#2/5 AsIs: (/9 AsIs: # Function/11 AsIs: s.ScopeClass#2/12 AsIs: (/15 AsIs: e.Name#2/13 AsIs: )/16 AsIs: # NativeBody/17 AsIs: e.Code#2/7 AsIs: )/10 } Tile{ AsIs: e.AST-E#2/20(2) } Tile{ ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icLinkBrackets, 9, 10, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 20},
      {refalrts::icSpliceTile, 4, 10, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // e.idx
      // </0 & RemoveRedudandElements\3/4 e.AST#2/2 >/1
      // closed e.AST#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} & RemoveRedudandElements\3/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: & RemoveRedudandElements\3$3\1/0 } Tile{ AsIs: e.AST#2/2 } Tile{ ]] }
      {refalrts::icReinitFunc, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_RemoveRedudandElements_L3

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_RemoveRedudandElements_L3(
  "RemoveRedudandElements\\3",
  scope_gen_RemoveRedudandElements_L3::raa,
  scope_gen_RemoveRedudandElements_L3::functions,
  scope_gen_RemoveRedudandElements_L3::idents,
  scope_gen_RemoveRedudandElements_L3::numbers,
  scope_gen_RemoveRedudandElements_L3::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_RemoveRedudandElements_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & RemoveRedudandElements\3/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & RemoveRedudandElements\3/4 e.AST-B#2/5 (/9 # NativeBlock/11 t.SrcPos#2/12 e.Code#2/7 )/10 e.AST-E#2/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[18];
      context[21] = context[19];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[20], context[21] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = refalrts::ident_left(  & ident_NativeBlock<int>::name, context[7], context[8] );
      if( ! context[11] )
        continue;
      // closed e.AST-E#2 as range 20(2)
      context[13] = refalrts::tvar_left( context[12], context[7], context[8] );
      if( ! context[13] )
        continue;
      // closed e.Code#2 as range 7

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: & RemoveRedudandElements\3$1\1/4 AsIs: e.AST-B#2/5 AsIs: (/9 AsIs: # NativeBlock/11 AsIs: t.SrcPos#2/12 AsIs: e.Code#2/7 AsIs: )/10 } Tile{ AsIs: e.AST-E#2/20(2) } Tile{ ]] }
      refalrts::update_name( context[4], & gen_RemoveRedudandElements_L3S1L1 );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[4], context[10] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[5], context[6], context[18], context[19] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & RemoveRedudandElements\3/4 e.AST-B#2/5 (/9 # Function/11 s.ScopeClass#2/12 (/15 e.Name#2/13 )/16 # NativeBody/17 e.Code#2/7 )/10 e.AST-E#2/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[18];
      context[21] = context[19];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[20], context[21] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = refalrts::ident_left(  & ident_Function<int>::name, context[7], context[8] );
      if( ! context[11] )
        continue;
      // closed e.AST-E#2 as range 20(2)
      if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[7], context[8] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      context[17] = refalrts::ident_left(  & ident_NativeBody<int>::name, context[7], context[8] );
      if( ! context[17] )
        continue;
      // closed e.Name#2 as range 13
      // closed e.Code#2 as range 7

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: & RemoveRedudandElements\3$2\1/4 AsIs: e.AST-B#2/5 AsIs: (/9 AsIs: # Function/11 AsIs: s.ScopeClass#2/12 AsIs: (/15 AsIs: e.Name#2/13 AsIs: )/16 AsIs: # NativeBody/17 AsIs: e.Code#2/7 AsIs: )/10 } Tile{ AsIs: e.AST-E#2/20(2) } Tile{ ]] }
      refalrts::update_name( context[4], & gen_RemoveRedudandElements_L3S2L1 );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[4], context[10] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[5], context[6], context[18], context[19] ) );
  } while ( 0 );

  // e.idx
  // </0 & RemoveRedudandElements\3/4 e.AST#2/2 >/1
  // closed e.AST#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & RemoveRedudandElements\3/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: & RemoveRedudandElements\3$3\1/0 } Tile{ AsIs: e.AST#2/2 } Tile{ ]] }
  refalrts::reinit_name( context[0], & gen_RemoveRedudandElements_L3S3L1 );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_RemoveRedudandElements_L3(func_gen_RemoveRedudandElements_L3, "RemoveRedudandElements\\3");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_RemoveRedudandElements_L4L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Ident<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 11, 0, 0},
      //FAST GEN: s.$ t.$
      //GLOBAL GEN: s.$ t.$
      // </0 & RemoveRedudandElements\4\1/4 s.idx#0/5 t.idxV#0/6 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::ictVarLeftSave, 0, 6, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // s.idx ( # Ident e.idx )
      // </0 & RemoveRedudandElements\4\1/4 s.FnSelectiveSaver#2/5 (/6 # Ident/10 e.Name#3/8 )/7 >/1
      {refalrts::icBracketTerm, 0, 8, 6},
      {refalrts::icIdentLeftSave, 10, 0, 8},
      // closed e.Name#3 as range 8
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} & RemoveRedudandElements\4\1/4 s.FnSelectiveSaver#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: s.FnSelectiveSaver2 #5/6 AsIs: # Ident/10 AsIs: e.Name#3/8 HalfReuse: >/7 } Tile{ ]] }
      {refalrts::icReinitSVar, 0, 5, 6},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 7},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 6, 7, 0},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // s.idx t.idx
      // </0 & RemoveRedudandElements\4\1/4 s.FnSelectiveSaver#2/5 t.OtherItem#3/6 >/1
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & RemoveRedudandElements\4\1/4 s.FnSelectiveSaver#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherItem#3/6 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 6, 7, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_RemoveRedudandElements_L4L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_RemoveRedudandElements_L4L1(
  "RemoveRedudandElements\\4\\1",
  scope_gen_RemoveRedudandElements_L4L1::raa,
  scope_gen_RemoveRedudandElements_L4L1::functions,
  scope_gen_RemoveRedudandElements_L4L1::idents,
  scope_gen_RemoveRedudandElements_L4L1::numbers,
  scope_gen_RemoveRedudandElements_L4L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_RemoveRedudandElements_L4L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  //FAST GEN: s.$ t.$
  //GLOBAL GEN: s.$ t.$
  // </0 & RemoveRedudandElements\4\1/4 s.idx#0/5 t.idxV#0/6 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // s.idx ( # Ident e.idx )
    // </0 & RemoveRedudandElements\4\1/4 s.FnSelectiveSaver#2/5 (/6 # Ident/10 e.Name#3/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    context[10] = refalrts::ident_left(  & ident_Ident<int>::name, context[8], context[9] );
    if( ! context[10] )
      continue;
    // closed e.Name#3 as range 8

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & RemoveRedudandElements\4\1/4 s.FnSelectiveSaver#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: s.FnSelectiveSaver2 #5/6 AsIs: # Ident/10 AsIs: e.Name#3/8 HalfReuse: >/7 } Tile{ ]] }
    refalrts::reinit_svar( context[6], context[5] );
    refalrts::reinit_close_call( context[7] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // s.idx t.idx
  // </0 & RemoveRedudandElements\4\1/4 s.FnSelectiveSaver#2/5 t.OtherItem#3/6 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RemoveRedudandElements\4\1/4 s.FnSelectiveSaver#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherItem#3/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_RemoveRedudandElements_L4L1(func_gen_RemoveRedudandElements_L4L1, "RemoveRedudandElements\\4\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_RemoveRedudandElements_L4 {
    static refalrts::RefalFunction *functions[] = {
      & Map,
      & gen_RemoveRedudandElements_L4L1,
      & refalrts::create_closure
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 10, 0, 0},
      // </0 & RemoveRedudandElements\4/4 s.FnSelectiveSaver#2/5 e.AST#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.AST#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } </6 & @create_closure@/7 & RemoveRedudandElements\4\1/8 Tile{ AsIs: s.FnSelectiveSaver#2/5 } >/9 Tile{ AsIs: e.AST#2/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
      {refalrts::icAllocFunc, 0, 2, 7},
      {refalrts::icAllocFunc, 0, 1, 8},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icSpliceTile, 6, 8, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_RemoveRedudandElements_L4

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_RemoveRedudandElements_L4(
  "RemoveRedudandElements\\4",
  scope_gen_RemoveRedudandElements_L4::raa,
  scope_gen_RemoveRedudandElements_L4::functions,
  scope_gen_RemoveRedudandElements_L4::idents,
  scope_gen_RemoveRedudandElements_L4::numbers,
  scope_gen_RemoveRedudandElements_L4::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_RemoveRedudandElements_L4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & RemoveRedudandElements\4/4 s.FnSelectiveSaver#2/5 e.AST#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } </6 & @create_closure@/7 & RemoveRedudandElements\4\1/8 Tile{ AsIs: s.FnSelectiveSaver#2/5 } >/9 Tile{ AsIs: e.AST#2/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], & gen_RemoveRedudandElements_L4L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Map );
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
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_RemoveRedudandElements_L4(func_gen_RemoveRedudandElements_L4, "RemoveRedudandElements\\4");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_RemoveRedudandElements {
    static refalrts::RefalFunction *functions[] = {
      & Fetch,
      & gen_RemoveRedudandElements_L4,
      & gen_RemoveRedudandElements_L3,
      & DelAccumulator,
      & gen_RemoveRedudandElements_L2,
      & MapReduce,
      & gen_RemoveRedudandElements_L1,
      & Seq
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 21, 0, 0},
      // </0 & RemoveRedudandElements/4 e.AST#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.AST#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.AST#1/2 HalfReuse: </1 } & Seq/5 (/6 & MapReduce/7 & RemoveRedudandElements\1/8 (/9 )/10 )/11 (/12 & MapReduce/13 & RemoveRedudandElements\2/14 )/15 & DelAccumulator/16 & RemoveRedudandElements\3/17 & RemoveRedudandElements\4/18 >/19 >/20 Tile{ ]] }
      {refalrts::icAllocFunc, 0, 7, 5},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 6},
      {refalrts::icAllocFunc, 0, 5, 7},
      {refalrts::icAllocFunc, 0, 6, 8},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 12},
      {refalrts::icAllocFunc, 0, 5, 13},
      {refalrts::icAllocFunc, 0, 4, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 15},
      {refalrts::icAllocFunc, 0, 3, 16},
      {refalrts::icAllocFunc, 0, 2, 17},
      {refalrts::icAllocFunc, 0, 1, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 20},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icLinkBrackets, 12, 15, 0},
      {refalrts::icLinkBrackets, 6, 11, 0},
      {refalrts::icLinkBrackets, 9, 10, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 20, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_RemoveRedudandElements

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction RemoveRedudandElements(
  "RemoveRedudandElements",
  scope_RemoveRedudandElements::raa,
  scope_RemoveRedudandElements::functions,
  scope_RemoveRedudandElements::idents,
  scope_RemoveRedudandElements::numbers,
  scope_RemoveRedudandElements::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_RemoveRedudandElements(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & RemoveRedudandElements/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.AST#1/2 HalfReuse: </1 } & Seq/5 (/6 & MapReduce/7 & RemoveRedudandElements\1/8 (/9 )/10 )/11 (/12 & MapReduce/13 & RemoveRedudandElements\2/14 )/15 & DelAccumulator/16 & RemoveRedudandElements\3/17 & RemoveRedudandElements\4/18 >/19 >/20 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], & Seq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], & MapReduce ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], & gen_RemoveRedudandElements_L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], & MapReduce ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], & gen_RemoveRedudandElements_L2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], & DelAccumulator ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], & gen_RemoveRedudandElements_L3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], & gen_RemoveRedudandElements_L4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[6], context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction RemoveRedudandElements(func_RemoveRedudandElements, "RemoveRedudandElements");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_FoldEnums_L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Enum<int>::name,
      & ident_Sentences<int>::name,
      & ident_Function<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 16, 0, 0},
      //FAST GEN: t.$
      //GLOBAL GEN: t.$
      // </0 & FoldEnums\1/4 t.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // ( # Function s.idx ( e.idx ) # Sentences )
      // </0 & FoldEnums\1/4 (/5 # Function/9 s.ScopeClass#2/15 (/13 e.Name#2/11 )/14 # Sentences/10 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 2, 7},
      {refalrts::icIdentRightSave, 10, 1, 7},
      {refalrts::icBracketRightSave, 0, 11, 7},
      // closed e.Name#2 as range 11
      {refalrts::icsVarLeft, 0, 15, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FoldEnums\1/4 {REMOVED TILE} (/13 {REMOVED TILE} )/14 # Sentences/10 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Enum/9 AsIs: s.ScopeClass#2/15 } Tile{ AsIs: e.Name#2/11 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icUpdateIdent, 0, 0, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 5, 1, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 11},
      {refalrts::icSpliceTile, 5, 15, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // t.idx
      // </0 & FoldEnums\1/4 t.Other#2/5 >/1
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FoldEnums\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#2/5 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_FoldEnums_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_FoldEnums_L1(
  "FoldEnums\\1",
  scope_gen_FoldEnums_L1::raa,
  scope_gen_FoldEnums_L1::functions,
  scope_gen_FoldEnums_L1::idents,
  scope_gen_FoldEnums_L1::numbers,
  scope_gen_FoldEnums_L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_FoldEnums_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & FoldEnums\1/4 t.idx#0/5 >/1
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
  do {
    refalrts::start_sentence();
    // ( # Function s.idx ( e.idx ) # Sentences )
    // </0 & FoldEnums\1/4 (/5 # Function/9 s.ScopeClass#2/15 (/13 e.Name#2/11 )/14 # Sentences/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_Function<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_right(  & ident_Sentences<int>::name, context[7], context[8] );
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

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FoldEnums\1/4 {REMOVED TILE} (/13 {REMOVED TILE} )/14 # Sentences/10 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Enum/9 AsIs: s.ScopeClass#2/15 } Tile{ AsIs: e.Name#2/11 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_Enum<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // t.idx
  // </0 & FoldEnums\1/4 t.Other#2/5 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FoldEnums\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_FoldEnums_L1(func_gen_FoldEnums_L1, "FoldEnums\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_FoldEnums {
    static refalrts::RefalFunction *functions[] = {
      & gen_FoldEnums_L1,
      & Map
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 6, 0, 0},
      // </0 & FoldEnums/4 e.AST#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.AST#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & FoldEnums\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_FoldEnums

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction FoldEnums(
  "FoldEnums",
  scope_FoldEnums::raa,
  scope_FoldEnums::functions,
  scope_FoldEnums::idents,
  scope_FoldEnums::numbers,
  scope_FoldEnums::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_FoldEnums(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & FoldEnums/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & FoldEnums\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Map );
  refalrts::update_name( context[4], & gen_FoldEnums_L1 );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction FoldEnums(func_FoldEnums, "FoldEnums");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractIdents_S1L1L1 {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 25, 0, 0},
      // </0 & ExtractIdents$1\1\1/4 (/7 e.Idents#2/5 )/8 (/11 (/15 e.PatternIdents#3/13 )/16 e.Pattern#3/9 )/12 (/19 (/23 e.ResultIdents#3/21 )/24 e.Result#3/17 )/20 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 13, 9},
      {refalrts::icBracketLeftSave, 0, 17, 2},
      {refalrts::icBracketLeftSave, 0, 21, 17},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.Idents#2 as range 5
      // closed e.PatternIdents#3 as range 13
      // closed e.Pattern#3 as range 9
      // closed e.ResultIdents#3 as range 21
      // closed e.Result#3 as range 17
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} & ExtractIdents$1\1\1/4 (/7 {REMOVED TILE} )/8 (/11 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Idents#2/5 } Tile{ AsIs: e.PatternIdents#3/13 } Tile{ AsIs: e.ResultIdents#3/21 } Tile{ AsIs: )/12 AsIs: (/19 AsIs: (/23 } Tile{ AsIs: e.Pattern#3/9 } Tile{ AsIs: )/16 } Tile{ HalfReuse: (/24 AsIs: e.Result#3/17 AsIs: )/20 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 24},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 19, 1, 0},
      {refalrts::icLinkBrackets, 24, 20, 0},
      {refalrts::icLinkBrackets, 23, 16, 0},
      {refalrts::icLinkBrackets, 0, 12, 0},
      {refalrts::icSetRes, 0, 0, 24},
      {refalrts::icSpliceTile, 16, 16, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 12, 23, 0},
      {refalrts::icSpliceEVar, 0, 0, 21},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractIdents_S1L1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractIdents_S1L1L1(
  "ExtractIdents$1\\1\\1",
  scope_gen_ExtractIdents_S1L1L1::raa,
  scope_gen_ExtractIdents_S1L1L1::functions,
  scope_gen_ExtractIdents_S1L1L1::idents,
  scope_gen_ExtractIdents_S1L1L1::numbers,
  scope_gen_ExtractIdents_S1L1L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractIdents_S1L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & ExtractIdents$1\1\1/4 (/7 e.Idents#2/5 )/8 (/11 (/15 e.PatternIdents#3/13 )/16 e.Pattern#3/9 )/12 (/19 (/23 e.ResultIdents#3/21 )/24 e.Result#3/17 )/20 >/1
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
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[17], context[18] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Idents#2 as range 5
  // closed e.PatternIdents#3 as range 13
  // closed e.Pattern#3 as range 9
  // closed e.ResultIdents#3 as range 21
  // closed e.Result#3 as range 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & ExtractIdents$1\1\1/4 (/7 {REMOVED TILE} )/8 (/11 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Idents#2/5 } Tile{ AsIs: e.PatternIdents#3/13 } Tile{ AsIs: e.ResultIdents#3/21 } Tile{ AsIs: )/12 AsIs: (/19 AsIs: (/23 } Tile{ AsIs: e.Pattern#3/9 } Tile{ AsIs: )/16 } Tile{ HalfReuse: (/24 AsIs: e.Result#3/17 AsIs: )/20 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[24] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[19], context[1] );
  refalrts::link_brackets( context[24], context[20] );
  refalrts::link_brackets( context[23], context[16] );
  refalrts::link_brackets( context[0], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[24];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[23] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractIdents_S1L1L1(func_gen_ExtractIdents_S1L1L1, "ExtractIdents$1\\1\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractIdents_S1L1 {
    static refalrts::RefalFunction *functions[] = {
      & gen_ExtractIdents_S1L1L1,
      & refalrts::create_closure,
      & ExtractIdent_Expr,
      & Fetch
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 29, 0, 0},
      // </0 & ExtractIdents$1\1/4 (/7 e.Idents#2/5 )/8 (/11 (/15 e.Pattern#2/13 )/16 (/19 e.Result#2/17 )/20 )/12 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 13, 9},
      {refalrts::icBracketLeftSave, 0, 17, 9},
      {refalrts::icEmpty, 0, 0, 9},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.Idents#2 as range 5
      // closed e.Pattern#2 as range 13
      // closed e.Result#2 as range 17
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </21 & Fetch/22 (/23 </24 & ExtractIdent-Expr/25 Tile{ AsIs: e.Pattern#2/13 } >/26 )/27 (/28 Tile{ HalfReuse: </16 HalfReuse: & ExtractIdent-Expr/19 AsIs: e.Result#2/17 HalfReuse: >/20 AsIs: )/12 HalfReuse: </1 } Tile{ HalfReuse: & @create_closure@/0 Reuse: & ExtractIdents$1\1\1/4 AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 HalfReuse: >/11 HalfReuse: >/15 } Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 21},
      {refalrts::icAllocFunc, 0, 3, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 24},
      {refalrts::icAllocFunc, 0, 2, 25},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 26},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 28},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 16},
      {refalrts::icReinitFunc, 0, 2, 19},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 20},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 15},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 21},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 28, 12, 0},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icLinkBrackets, 23, 27, 0},
      {refalrts::icPushStack, 0, 0, 26},
      {refalrts::icPushStack, 0, 0, 24},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 0, 15, 0},
      {refalrts::icSpliceTile, 16, 1, 0},
      {refalrts::icSpliceTile, 26, 28, 0},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icSpliceTile, 21, 25, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractIdents_S1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractIdents_S1L1(
  "ExtractIdents$1\\1",
  scope_gen_ExtractIdents_S1L1::raa,
  scope_gen_ExtractIdents_S1L1::functions,
  scope_gen_ExtractIdents_S1L1::idents,
  scope_gen_ExtractIdents_S1L1::numbers,
  scope_gen_ExtractIdents_S1L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractIdents_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & ExtractIdents$1\1/4 (/7 e.Idents#2/5 )/8 (/11 (/15 e.Pattern#2/13 )/16 (/19 e.Result#2/17 )/20 )/12 >/1
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
  context[19] = refalrts::brackets_left( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Idents#2 as range 5
  // closed e.Pattern#2 as range 13
  // closed e.Result#2 as range 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </21 & Fetch/22 (/23 </24 & ExtractIdent-Expr/25 Tile{ AsIs: e.Pattern#2/13 } >/26 )/27 (/28 Tile{ HalfReuse: </16 HalfReuse: & ExtractIdent-Expr/19 AsIs: e.Result#2/17 HalfReuse: >/20 AsIs: )/12 HalfReuse: </1 } Tile{ HalfReuse: & @create_closure@/0 Reuse: & ExtractIdents$1\1\1/4 AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 HalfReuse: >/11 HalfReuse: >/15 } Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], & Fetch ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], & ExtractIdent_Expr ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[28] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[16] );
  refalrts::reinit_name( context[19], & ExtractIdent_Expr );
  refalrts::reinit_close_call( context[20] );
  refalrts::reinit_open_call( context[1] );
  refalrts::reinit_name( context[0], & refalrts::create_closure );
  refalrts::update_name( context[4], & gen_ExtractIdents_S1L1L1 );
  refalrts::reinit_close_call( context[11] );
  refalrts::reinit_close_call( context[15] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[28], context[12] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[16] );
  refalrts::link_brackets( context[23], context[27] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[21], context[25] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractIdents_S1L1(func_gen_ExtractIdents_S1L1, "ExtractIdents$1\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractIdents_S1L2 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Sentences<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 15, 0, 0},
      // </0 & ExtractIdents$1\2/4 (/7 e.Sentences#1/5 )/8 (/11 e.Idents#2/9 )/12 e.Sentences#1/13 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      // closed e.Sentences#1 as range 5
      {refalrts::iceRepeatLeft, 13, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.Idents#2 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractIdents$1\2/4 (/7 e.Sentences#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.Idents#2/9 AsIs: )/12 } Tile{ HalfReuse: # Sentences/8 } Tile{ AsIs: e.Sentences#1/13 } Tile{ ]] }
      {refalrts::icReinitIdent, 0, 0, 8},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractIdents_S1L2

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractIdents_S1L2(
  "ExtractIdents$1\\2",
  scope_gen_ExtractIdents_S1L2::raa,
  scope_gen_ExtractIdents_S1L2::functions,
  scope_gen_ExtractIdents_S1L2::idents,
  scope_gen_ExtractIdents_S1L2::numbers,
  scope_gen_ExtractIdents_S1L2::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractIdents_S1L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ExtractIdents$1\2/4 (/7 e.Sentences#1/5 )/8 (/11 e.Idents#2/9 )/12 e.Sentences#1/13 >/1
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
  // closed e.Sentences#1 as range 5
  if( ! refalrts::repeated_evar_left( context[13], context[14], context[5], context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Idents#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractIdents$1\2/4 (/7 e.Sentences#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.Idents#2/9 AsIs: )/12 } Tile{ HalfReuse: # Sentences/8 } Tile{ AsIs: e.Sentences#1/13 } Tile{ ]] }
  refalrts::reinit_ident( context[8], & ident_Sentences<int>::name );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractIdents_S1L2(func_gen_ExtractIdents_S1L2, "ExtractIdents$1\\2");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ExtractIdents {
    static refalrts::RefalFunction *functions[] = {
      & Seq,
      & Fetch,
      & gen_ExtractIdents_S1L2,
      & refalrts::create_closure,
      & gen_ExtractIdents_S1L1,
      & MapReduce
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NativeBody<int>::name,
      & ident_Sentences<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 22, 0, 0},
      //FAST GEN: s.$ e.$
      //GLOBAL GEN: s.$ e.$
      // </0 & ExtractIdents/4 s.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +34, 0, 0},
      // # Sentences e.idx
      // </0 & ExtractIdents/4 # Sentences/5 e.Sentences#1/2 >/1
      {refalrts::icIdentTerm, 0, 1, 5},
      // closed e.Sentences#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Sentences#1/2 } </6 Tile{ HalfReuse: & Seq/5 } (/7 & MapReduce/8 & ExtractIdents$1\1/9 (/10 )/11 )/12 </13 & @create_closure@/14 & ExtractIdents$1\2/15 (/16 e.Sentences#1/2/17 )/19 >/20 >/21 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 7},
      {refalrts::icAllocFunc, 0, 5, 8},
      {refalrts::icAllocFunc, 0, 4, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocFunc, 0, 3, 14},
      {refalrts::icAllocFunc, 0, 2, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
      {refalrts::icCopyEVar, 17, 2, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 20},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitFunc, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 21},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icLinkBrackets, 16, 19, 0},
      {refalrts::icLinkBrackets, 7, 12, 0},
      {refalrts::icLinkBrackets, 10, 11, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 7, 21, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icSpliceTile, 6, 6, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // # NativeBody t.idx e.idx
      // </0 & ExtractIdents/4 # NativeBody/5 t.SrcPos#1/6 e.Code#1/2 >/1
      {refalrts::icIdentTerm, 0, 0, 5},
      {refalrts::ictVarLeftSave, 0, 6, 2},
      // closed e.Code#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 AsIs: # NativeBody/5 AsIs: t.SrcPos#1/6 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
      {refalrts::icLinkBrackets, 0, 4, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ExtractIdents

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction ExtractIdents(
  "ExtractIdents",
  scope_ExtractIdents::raa,
  scope_ExtractIdents::functions,
  scope_ExtractIdents::idents,
  scope_ExtractIdents::numbers,
  scope_ExtractIdents::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_ExtractIdents(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & ExtractIdents/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    refalrts::start_sentence();
    // # Sentences e.idx
    // </0 & ExtractIdents/4 # Sentences/5 e.Sentences#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Sentences<int>::name, context[5] ) )
      continue;
    // closed e.Sentences#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Sentences#1/2 } </6 Tile{ HalfReuse: & Seq/5 } (/7 & MapReduce/8 & ExtractIdents$1\1/9 (/10 )/11 )/12 </13 & @create_closure@/14 & ExtractIdents$1\2/15 (/16 e.Sentences#1/2/17 )/19 >/20 >/21 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], & MapReduce ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], & gen_ExtractIdents_S1L1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], & refalrts::create_closure ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], & gen_ExtractIdents_S1L2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[17], context[18], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Fetch );
    refalrts::reinit_name( context[5], & Seq );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[13] );
    refalrts::link_brackets( context[16], context[19] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[21] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // # NativeBody t.idx e.idx
  // </0 & ExtractIdents/4 # NativeBody/5 t.SrcPos#1/6 e.Code#1/2 >/1
  if( ! refalrts::ident_term(  & ident_NativeBody<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 AsIs: # NativeBody/5 AsIs: t.SrcPos#1/6 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction ExtractIdents(func_ExtractIdents, "ExtractIdents");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractIdent_Expr_L1S2L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Brackets<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 13, 0, 0},
      // </0 & ExtractIdent-Expr\1$2\1/4 (/7 e.Idents#2/5 )/8 (/11 e.SubIdents#3/9 )/12 e.SubExpr#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      // closed e.Idents#2 as range 5
      // closed e.SubIdents#3 as range 9
      // closed e.SubExpr#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} & ExtractIdent-Expr\1$2\1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Idents#2/5 } Tile{ AsIs: e.SubIdents#3/9 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: # Brackets/12 AsIs: e.SubExpr#3/2 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 11, 1, 0},
      {refalrts::icLinkBrackets, 0, 8, 0},
      {refalrts::icSetRes, 0, 0, 12},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractIdent_Expr_L1S2L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractIdent_Expr_L1S2L1(
  "ExtractIdent-Expr\\1$2\\1",
  scope_gen_ExtractIdent_Expr_L1S2L1::raa,
  scope_gen_ExtractIdent_Expr_L1S2L1::functions,
  scope_gen_ExtractIdent_Expr_L1S2L1::idents,
  scope_gen_ExtractIdent_Expr_L1S2L1::numbers,
  scope_gen_ExtractIdent_Expr_L1S2L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractIdent_Expr_L1S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ExtractIdent-Expr\1$2\1/4 (/7 e.Idents#2/5 )/8 (/11 e.SubIdents#3/9 )/12 e.SubExpr#3/2 >/1
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
  // closed e.Idents#2 as range 5
  // closed e.SubIdents#3 as range 9
  // closed e.SubExpr#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & ExtractIdent-Expr\1$2\1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Idents#2/5 } Tile{ AsIs: e.SubIdents#3/9 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: # Brackets/12 AsIs: e.SubExpr#3/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[12], & ident_Brackets<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractIdent_Expr_L1S2L1(func_gen_ExtractIdent_Expr_L1S2L1, "ExtractIdent-Expr\\1$2\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractIdent_Expr_L1S3L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_ADT_Brackets<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 17, 0, 0},
      // </0 & ExtractIdent-Expr\1$3\1/4 (/7 e.Idents#2/5 )/8 (/11 e.Name#2/9 )/12 (/15 e.SubIdents#3/13 )/16 e.SubExpr#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 13, 2},
      // closed e.Idents#2 as range 5
      // closed e.Name#2 as range 9
      // closed e.SubIdents#3 as range 13
      // closed e.SubExpr#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} & ExtractIdent-Expr\1$3\1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Idents#2/5 } Tile{ AsIs: e.SubIdents#3/13 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ HalfReuse: # ADT-Brackets/8 AsIs: (/11 } Tile{ AsIs: e.Name#2/9 } Tile{ AsIs: )/16 AsIs: e.SubExpr#3/2 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 15, 1, 0},
      {refalrts::icLinkBrackets, 11, 16, 0},
      {refalrts::icLinkBrackets, 0, 12, 0},
      {refalrts::icSetRes, 0, 0, 16},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icSpliceTile, 12, 15, 0},
      {refalrts::icSpliceEVar, 0, 0, 13},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractIdent_Expr_L1S3L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractIdent_Expr_L1S3L1(
  "ExtractIdent-Expr\\1$3\\1",
  scope_gen_ExtractIdent_Expr_L1S3L1::raa,
  scope_gen_ExtractIdent_Expr_L1S3L1::functions,
  scope_gen_ExtractIdent_Expr_L1S3L1::idents,
  scope_gen_ExtractIdent_Expr_L1S3L1::numbers,
  scope_gen_ExtractIdent_Expr_L1S3L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractIdent_Expr_L1S3L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractIdent-Expr\1$3\1/4 (/7 e.Idents#2/5 )/8 (/11 e.Name#2/9 )/12 (/15 e.SubIdents#3/13 )/16 e.SubExpr#3/2 >/1
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
  // closed e.Idents#2 as range 5
  // closed e.Name#2 as range 9
  // closed e.SubIdents#3 as range 13
  // closed e.SubExpr#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & ExtractIdent-Expr\1$3\1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Idents#2/5 } Tile{ AsIs: e.SubIdents#3/13 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ HalfReuse: # ADT-Brackets/8 AsIs: (/11 } Tile{ AsIs: e.Name#2/9 } Tile{ AsIs: )/16 AsIs: e.SubExpr#3/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[8], & ident_ADT_Brackets<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[15], context[1] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::link_brackets( context[0], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractIdent_Expr_L1S3L1(func_gen_ExtractIdent_Expr_L1S3L1, "ExtractIdent-Expr\\1$3\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractIdent_Expr_L1S4L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CallBrackets<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 13, 0, 0},
      // </0 & ExtractIdent-Expr\1$4\1/4 (/7 e.Idents#2/5 )/8 (/11 e.SubIdents#3/9 )/12 e.SubExpr#3/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      // closed e.Idents#2 as range 5
      // closed e.SubIdents#3 as range 9
      // closed e.SubExpr#3 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} & ExtractIdent-Expr\1$4\1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Idents#2/5 } Tile{ AsIs: e.SubIdents#3/9 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: # CallBrackets/12 AsIs: e.SubExpr#3/2 HalfReuse: )/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 12},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 11, 1, 0},
      {refalrts::icLinkBrackets, 0, 8, 0},
      {refalrts::icSetRes, 0, 0, 12},
      {refalrts::icSpliceTile, 8, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractIdent_Expr_L1S4L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractIdent_Expr_L1S4L1(
  "ExtractIdent-Expr\\1$4\\1",
  scope_gen_ExtractIdent_Expr_L1S4L1::raa,
  scope_gen_ExtractIdent_Expr_L1S4L1::functions,
  scope_gen_ExtractIdent_Expr_L1S4L1::idents,
  scope_gen_ExtractIdent_Expr_L1S4L1::numbers,
  scope_gen_ExtractIdent_Expr_L1S4L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractIdent_Expr_L1S4L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ExtractIdent-Expr\1$4\1/4 (/7 e.Idents#2/5 )/8 (/11 e.SubIdents#3/9 )/12 e.SubExpr#3/2 >/1
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
  // closed e.Idents#2 as range 5
  // closed e.SubIdents#3 as range 9
  // closed e.SubExpr#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & ExtractIdent-Expr\1$4\1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Idents#2/5 } Tile{ AsIs: e.SubIdents#3/9 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: # CallBrackets/12 AsIs: e.SubExpr#3/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[12], & ident_CallBrackets<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractIdent_Expr_L1S4L1(func_gen_ExtractIdent_Expr_L1S4L1, "ExtractIdent-Expr\\1$4\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_ExtractIdent_Expr_L1 {
    static refalrts::RefalFunction *functions[] = {
      & gen_ExtractIdent_Expr_L1S4L1,
      & refalrts::create_closure,
      & Fetch,
      & ExtractIdent_Expr,
      & gen_ExtractIdent_Expr_L1S3L1,
      & gen_ExtractIdent_Expr_L1S2L1
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CallBrackets<int>::name,
      & ident_ADT_Brackets<int>::name,
      & ident_Brackets<int>::name,
      & ident_Ident<int>::name,
      & ident_TkIdentifier<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 4, 0, 0},
      {refalrts::icIssueMemory, 22, 0, 0},
      //FAST GEN: ( e.$ ) t.$
      //GLOBAL GEN: ( e.$ ) t.$
      // </0 & ExtractIdent-Expr\1/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      {refalrts::ictVarLeftSave, 0, 9, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // ( e.idx ) ( # TkIdentifier e.idx )
      // </0 & ExtractIdent-Expr\1/4 (/7 e.Idents#2/5 )/8 (/9 # TkIdentifier/13 e.Name#2/11 )/10 >/1
      {refalrts::icBracketTerm, 0, 11, 9},
      {refalrts::icIdentLeftSave, 13, 4, 11},
      // closed e.Idents#2 as range 5
      // closed e.Name#2 as range 11
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Idents#2/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: # Ident/4 } e.Name#2/11/14 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/9 AsIs: # TkIdentifier/13 AsIs: e.Name#2/11 AsIs: )/10 } Tile{ ]] }
      {refalrts::icCopyEVar, 14, 11, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 3, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 9, 10, 0},
      {refalrts::icLinkBrackets, 0, 8, 0},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 10, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 14, 15, 0},
      {refalrts::icSpliceTile, 4, 4, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +28, 0, 0},
      // ( e.idx ) ( # Brackets e.idx )
      // </0 & ExtractIdent-Expr\1/4 (/7 e.Idents#2/5 )/8 (/9 # Brackets/13 e.SubExpr#2/11 )/10 >/1
      {refalrts::icBracketTerm, 0, 11, 9},
      {refalrts::icIdentLeftSave, 13, 2, 11},
      // closed e.Idents#2 as range 5
      // closed e.SubExpr#2 as range 11
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & Fetch/10 } </15 & ExtractIdent-Expr/16 Tile{ AsIs: e.SubExpr#2/11 } Tile{ AsIs: >/1 } </17 Tile{ HalfReuse: & @create_closure@/0 Reuse: & ExtractIdent-Expr\1$2\1/4 AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 HalfReuse: >/9 HalfReuse: >/13 } Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocFunc, 0, 3, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
      {refalrts::icReinitFunc, 0, 2, 10},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 5, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 13},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 0, 13, 0},
      {refalrts::icSpliceTile, 17, 17, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, 11},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +30, 0, 0},
      // ( e.idx ) ( # ADT-Brackets ( e.idx ) e.idx )
      // </0 & ExtractIdent-Expr\1/4 (/7 e.Idents#2/5 )/8 (/9 # ADT-Brackets/13 (/16 e.Name#2/14 )/17 e.SubExpr#2/11 )/10 >/1
      {refalrts::icBracketTerm, 0, 11, 9},
      {refalrts::icIdentLeftSave, 13, 1, 11},
      {refalrts::icBracketLeftSave, 0, 14, 11},
      // closed e.Idents#2 as range 5
      // closed e.Name#2 as range 14
      // closed e.SubExpr#2 as range 11
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & Fetch/16 } </18 & ExtractIdent-Expr/19 Tile{ AsIs: e.SubExpr#2/11 } >/20 </21 Tile{ HalfReuse: & @create_closure@/0 Reuse: & ExtractIdent-Expr\1$3\1/4 AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 AsIs: (/9 } Tile{ AsIs: e.Name#2/14 } Tile{ AsIs: )/17 } Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 18},
      {refalrts::icAllocFunc, 0, 3, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 20},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 21},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icReinitFunc, 0, 2, 16},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 4, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 21},
      {refalrts::icLinkBrackets, 9, 17, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icSetRes, 0, 0, 10},
      {refalrts::icSpliceTile, 17, 17, 0},
      {refalrts::icSpliceEVar, 0, 0, 14},
      {refalrts::icSpliceTile, 0, 9, 0},
      {refalrts::icSpliceTile, 20, 21, 0},
      {refalrts::icSpliceEVar, 0, 0, 11},
      {refalrts::icSpliceTile, 18, 19, 0},
      {refalrts::icSpliceTile, 13, 16, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +28, 0, 0},
      // ( e.idx ) ( # CallBrackets e.idx )
      // </0 & ExtractIdent-Expr\1/4 (/7 e.Idents#2/5 )/8 (/9 # CallBrackets/13 e.SubExpr#2/11 )/10 >/1
      {refalrts::icBracketTerm, 0, 11, 9},
      {refalrts::icIdentLeftSave, 13, 0, 11},
      // closed e.Idents#2 as range 5
      // closed e.SubExpr#2 as range 11
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & Fetch/10 } </15 & ExtractIdent-Expr/16 Tile{ AsIs: e.SubExpr#2/11 } Tile{ AsIs: >/1 } </17 Tile{ HalfReuse: & @create_closure@/0 Reuse: & ExtractIdent-Expr\1$4\1/4 AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 HalfReuse: >/9 HalfReuse: >/13 } Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
      {refalrts::icAllocFunc, 0, 3, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
      {refalrts::icReinitFunc, 0, 2, 10},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 13},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 0, 13, 0},
      {refalrts::icSpliceTile, 17, 17, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, 11},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) t.idx
      // </0 & ExtractIdent-Expr\1/4 (/7 e.Idents#2/5 )/8 t.OtherTerm#2/9 >/1
      // closed e.Idents#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ExtractIdent-Expr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 AsIs: t.OtherTerm#2/9 } Tile{ ]] }
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 10, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_ExtractIdent_Expr_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction gen_ExtractIdent_Expr_L1(
  "ExtractIdent-Expr\\1",
  scope_gen_ExtractIdent_Expr_L1::raa,
  scope_gen_ExtractIdent_Expr_L1::functions,
  scope_gen_ExtractIdent_Expr_L1::idents,
  scope_gen_ExtractIdent_Expr_L1::numbers,
  scope_gen_ExtractIdent_Expr_L1::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_gen_ExtractIdent_Expr_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  //FAST GEN: ( e.$ ) t.$
  //GLOBAL GEN: ( e.$ ) t.$
  // </0 & ExtractIdent-Expr\1/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 >/1
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
  // closed e.idxB#0 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # TkIdentifier e.idx )
    // </0 & ExtractIdent-Expr\1/4 (/7 e.Idents#2/5 )/8 (/9 # TkIdentifier/13 e.Name#2/11 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Idents#2 as range 5
    // closed e.Name#2 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Idents#2/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: # Ident/4 } e.Name#2/11/14 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/9 AsIs: # TkIdentifier/13 AsIs: e.Name#2/11 AsIs: )/10 } Tile{ ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[11], context[12]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Ident<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[10] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Brackets e.idx )
    // </0 & ExtractIdent-Expr\1/4 (/7 e.Idents#2/5 )/8 (/9 # Brackets/13 e.SubExpr#2/11 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_Brackets<int>::name, context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Idents#2 as range 5
    // closed e.SubExpr#2 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & Fetch/10 } </15 & ExtractIdent-Expr/16 Tile{ AsIs: e.SubExpr#2/11 } Tile{ AsIs: >/1 } </17 Tile{ HalfReuse: & @create_closure@/0 Reuse: & ExtractIdent-Expr\1$2\1/4 AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 HalfReuse: >/9 HalfReuse: >/13 } Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], & ExtractIdent_Expr ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[10], & Fetch );
    refalrts::reinit_name( context[0], & refalrts::create_closure );
    refalrts::update_name( context[4], & gen_ExtractIdent_Expr_L1S2L1 );
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_close_call( context[13] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # ADT-Brackets ( e.idx ) e.idx )
    // </0 & ExtractIdent-Expr\1/4 (/7 e.Idents#2/5 )/8 (/9 # ADT-Brackets/13 (/16 e.Name#2/14 )/17 e.SubExpr#2/11 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[11], context[12] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Idents#2 as range 5
    // closed e.Name#2 as range 14
    // closed e.SubExpr#2 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & Fetch/16 } </18 & ExtractIdent-Expr/19 Tile{ AsIs: e.SubExpr#2/11 } >/20 </21 Tile{ HalfReuse: & @create_closure@/0 Reuse: & ExtractIdent-Expr\1$3\1/4 AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 AsIs: (/9 } Tile{ AsIs: e.Name#2/14 } Tile{ AsIs: )/17 } Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], & ExtractIdent_Expr ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[13] );
    refalrts::reinit_name( context[16], & Fetch );
    refalrts::reinit_name( context[0], & refalrts::create_closure );
    refalrts::update_name( context[4], & gen_ExtractIdent_Expr_L1S3L1 );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[9], context[17] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[13], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # CallBrackets e.idx )
    // </0 & ExtractIdent-Expr\1/4 (/7 e.Idents#2/5 )/8 (/9 # CallBrackets/13 e.SubExpr#2/11 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left(  & ident_CallBrackets<int>::name, context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Idents#2 as range 5
    // closed e.SubExpr#2 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & Fetch/10 } </15 & ExtractIdent-Expr/16 Tile{ AsIs: e.SubExpr#2/11 } Tile{ AsIs: >/1 } </17 Tile{ HalfReuse: & @create_closure@/0 Reuse: & ExtractIdent-Expr\1$4\1/4 AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 HalfReuse: >/9 HalfReuse: >/13 } Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], & ExtractIdent_Expr ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[10], & Fetch );
    refalrts::reinit_name( context[0], & refalrts::create_closure );
    refalrts::update_name( context[4], & gen_ExtractIdent_Expr_L1S4L1 );
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_close_call( context[13] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) t.idx
  // </0 & ExtractIdent-Expr\1/4 (/7 e.Idents#2/5 )/8 t.OtherTerm#2/9 >/1
  // closed e.Idents#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractIdent-Expr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Idents#2/5 AsIs: )/8 AsIs: t.OtherTerm#2/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction gen_ExtractIdent_Expr_L1(func_gen_ExtractIdent_Expr_L1, "ExtractIdent-Expr\\1");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ExtractIdent_Expr {
    static refalrts::RefalFunction *functions[] = {
      & gen_ExtractIdent_Expr_L1,
      & MapReduce
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 8, 0, 0},
      // </0 & ExtractIdent-Expr/4 e.Expr#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Expr#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 & MapReduce/6 & ExtractIdent-Expr\1/7 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icAllocFunc, 0, 1, 6},
      {refalrts::icAllocFunc, 0, 0, 7},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icLinkBrackets, 0, 4, 0},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 7, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ExtractIdent_Expr

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction ExtractIdent_Expr(
  "ExtractIdent-Expr",
  scope_ExtractIdent_Expr::raa,
  scope_ExtractIdent_Expr::functions,
  scope_ExtractIdent_Expr::idents,
  scope_ExtractIdent_Expr::numbers,
  scope_ExtractIdent_Expr::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_ExtractIdent_Expr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & ExtractIdent-Expr/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & MapReduce/6 & ExtractIdent-Expr\1/7 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & MapReduce ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], & gen_ExtractIdent_Expr_L1 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction ExtractIdent_Expr(func_ExtractIdent_Expr, "ExtractIdent-Expr");

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_UniqSorted {
    using refalrts::functions;
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 15, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & UniqSorted/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +14, 0, 0},
      // e.idx
      // </0 & UniqSorted/4 e.Uniqs#1/5 t.Repeated#1/7 t.Repeated#1/9 e.NotScanned#1/2 >/1
      {refalrts::icSave, 0, 11, 2},
      {refalrts::icEPrepare, 0, 5, 11},
      {refalrts::icEStart, 0, 5, 11},
      {refalrts::icSave, 0, 13, 11},
      {refalrts::ictVarLeftSave, 0, 7, 13},
      {refalrts::ictRepeatLeftSave, 9, 7, 13},
      // closed e.NotScanned#1 as range 13(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Repeated#1/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/5 } Tile{ AsIs: </0 AsIs: & UniqSorted/4 } Tile{ AsIs: t.Repeated#1/9 AsIs: e.NotScanned#1/13(2) AsIs: >/1 ]] }
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 9},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // e.idx
      // </0 & UniqSorted/4 e.Uniqs#1/2 >/1
      // closed e.Uniqs#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & UniqSorted/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_UniqSorted

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction UniqSorted(
  "UniqSorted",
  scope_UniqSorted::raa,
  scope_UniqSorted::functions,
  scope_UniqSorted::idents,
  scope_UniqSorted::numbers,
  scope_UniqSorted::strings
);

} // unnamed namespace

#else
static refalrts::FnResult func_UniqSorted(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & UniqSorted/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & UniqSorted/4 e.Uniqs#1/5 t.Repeated#1/7 t.Repeated#1/9 e.NotScanned#1/2 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[13] = context[11];
      context[14] = context[12];
      context[8] = refalrts::tvar_left( context[7], context[13], context[14] );
      if( ! context[8] )
        continue;
      context[10] = refalrts::repeated_stvar_left( context[9], context[7], context[13], context[14] );
      if( ! context[10] )
        continue;
      // closed e.NotScanned#1 as range 13(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Repeated#1/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/5 } Tile{ AsIs: </0 AsIs: & UniqSorted/4 } Tile{ AsIs: t.Repeated#1/9 AsIs: e.NotScanned#1/13(2) AsIs: >/1 ]] }
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[5], context[6], context[11], context[12] ) );
  } while ( 0 );

  // e.idx
  // </0 & UniqSorted/4 e.Uniqs#1/2 >/1
  // closed e.Uniqs#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & UniqSorted/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction UniqSorted(func_UniqSorted, "UniqSorted");

} // unnamed namespace

#endif

//End of file
