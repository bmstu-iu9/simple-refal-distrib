// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #Fails
template <typename SREFAL_PARAM_INT>
struct ident_Fails {
  static const char *name() {
    return "Fails";
  }
};

// identifier #False
template <typename SREFAL_PARAM_INT>
struct ident_False {
  static const char *name() {
    return "False";
  }
};

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
  }
};

// identifier #True
template <typename SREFAL_PARAM_INT>
struct ident_True {
  static const char *name() {
    return "True";
  }
};

// identifier #TypeCharacter
template <typename SREFAL_PARAM_INT>
struct ident_TypeCharacter {
  static const char *name() {
    return "TypeCharacter";
  }
};

// identifier #TypeFile
template <typename SREFAL_PARAM_INT>
struct ident_TypeFile {
  static const char *name() {
    return "TypeFile";
  }
};

// identifier #TypeFunction
template <typename SREFAL_PARAM_INT>
struct ident_TypeFunction {
  static const char *name() {
    return "TypeFunction";
  }
};

// identifier #TypeIdentifier
template <typename SREFAL_PARAM_INT>
struct ident_TypeIdentifier {
  static const char *name() {
    return "TypeIdentifier";
  }
};

// identifier #TypeNumber
template <typename SREFAL_PARAM_INT>
struct ident_TypeNumber {
  static const char *name() {
    return "TypeNumber";
  }
};

extern refalrts::RefalFunction& Add;
extern refalrts::RefalFunction& Sub;
extern refalrts::RefalFunction& Mul;
extern refalrts::RefalFunction& Div;
extern refalrts::RefalFunction& Mod;
extern refalrts::RefalFunction& WriteLine;
extern refalrts::RefalFunction& FWriteLine;
extern refalrts::RefalFunction& ReadLine;
extern refalrts::RefalFunction& FReadLine;
extern refalrts::RefalFunction& FOpen;
extern refalrts::RefalFunction& FClose;
extern refalrts::RefalFunction& Arg;
extern refalrts::RefalFunction& ExistFile;
extern refalrts::RefalFunction& GetEnv;
extern refalrts::RefalFunction& Exit;
extern refalrts::RefalFunction& System;
extern refalrts::RefalFunction& IntFromStr;
extern refalrts::RefalFunction& StrFromInt;
extern refalrts::RefalFunction& Chr;
extern refalrts::RefalFunction& Ord;
extern refalrts::RefalFunction& SymbCompare;
extern refalrts::RefalFunction& SymbType;

#line 2 "Library.sref"
#include <stdio.h>
#include <string.h>
#include <vector>
#include <ctype.h>
#include <stdlib.h>

#include "refalrts.h"

//FROM refalrts

namespace {

static refalrts::Iter next( refalrts::Iter current ) {
  return current->next;
}

static refalrts::Iter prev( refalrts::Iter current ) {
  return current->prev;
}

} // unnamed namespace

//------------------------------------------------------------------------------

// Операции распределителя памяти

namespace refalrts{

namespace allocator {

bool alloc_node( Iter& node );

Iter free_ptr();

} // namespace allocator

} // namespace refalrts
#define USE_IDENT(ident_name) \
  (& ident_ ## ident_name<int>::name)
#line 141 "Library.cpp"
static refalrts::FnResult func_Add(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 66 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sNumber1_1;
    refalrts::Iter sNumber2_1;
    if( ! refalrts::svar_left( sNumber1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    if( sNumber1_1->tag != refalrts::cDataNumber )
      break;
    if( sNumber2_1->tag != refalrts::cDataNumber )
      break;

    refalrts::RefalNumber result =
      sNumber1_1->number_info + sNumber2_1->number_info;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_number( n0, result ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 180 "Library.cpp"
}

refalrts::RefalFunction descr_Add(func_Add, "Add");
refalrts::RefalFunction& Add = descr_Add;

static refalrts::FnResult func_Sub(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 107 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sNumber1_1;
    refalrts::Iter sNumber2_1;
    if( ! refalrts::svar_left( sNumber1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    if( sNumber1_1->tag != refalrts::cDataNumber )
      break;
    if( sNumber2_1->tag != refalrts::cDataNumber )
      break;

    refalrts::RefalNumber result =
      sNumber1_1->number_info - sNumber2_1->number_info;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_number( n0, result ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 224 "Library.cpp"
}

refalrts::RefalFunction descr_Sub(func_Sub, "Sub");
refalrts::RefalFunction& Sub = descr_Sub;

static refalrts::FnResult func_Mul(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 148 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sNumber1_1;
    refalrts::Iter sNumber2_1;
    if( ! refalrts::svar_left( sNumber1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    if( sNumber1_1->tag != refalrts::cDataNumber )
      break;
    if( sNumber2_1->tag != refalrts::cDataNumber )
      break;

    refalrts::RefalNumber result =
      sNumber1_1->number_info * sNumber2_1->number_info;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_number( n0, result ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 268 "Library.cpp"
}

refalrts::RefalFunction descr_Mul(func_Mul, "Mul");
refalrts::RefalFunction& Mul = descr_Mul;

static refalrts::FnResult func_Div(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 189 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sNumber1_1;
    refalrts::Iter sNumber2_1;
    if( ! refalrts::svar_left( sNumber1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    if( sNumber1_1->tag != refalrts::cDataNumber )
      break;
    if( sNumber2_1->tag != refalrts::cDataNumber )
      break;

    refalrts::RefalNumber result =
      sNumber1_1->number_info / sNumber2_1->number_info;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_number( n0, result ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 312 "Library.cpp"
}

refalrts::RefalFunction descr_Div(func_Div, "Div");
refalrts::RefalFunction& Div = descr_Div;

static refalrts::FnResult func_Mod(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 230 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sNumber1_1;
    refalrts::Iter sNumber2_1;
    if( ! refalrts::svar_left( sNumber1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    if( sNumber1_1->tag != refalrts::cDataNumber )
      break;
    if( sNumber2_1->tag != refalrts::cDataNumber )
      break;

    refalrts::RefalNumber result =
      sNumber1_1->number_info % sNumber2_1->number_info;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_number( n0, result ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 356 "Library.cpp"
}

refalrts::RefalFunction descr_Mod(func_Mod, "Mod");
refalrts::RefalFunction& Mod = descr_Mod;

#line 272 "Library.sref"
refalrts::FnResult write_to_stream(
  FILE *out, refalrts::Iter str_begin, refalrts::Iter str_end
) {
  if( ferror( out ) ) {
    return refalrts::cRecognitionImpossible;
  }

  int printf_res;

  for(
    refalrts::Iter p = str_begin;
    ! refalrts::empty_seq( p, str_end );
    refalrts::move_left( p, str_end )
  ) {
    switch( p->tag ) {
      case refalrts::cDataChar: {
        printf_res = fprintf( out, "%c", p->char_info );
        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      case refalrts::cDataNumber: {
        printf_res = fprintf( out, "%lu ", p->number_info );
        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      case refalrts::cDataFunction: {
        printf_res = fprintf( out, "%s ", p->function_info->name );
        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      case refalrts::cDataIdentifier: {
        printf_res = fprintf( out, "%s ", (p->ident_info)() );
        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      case refalrts::cDataOpenADT: {
        printf_res = fprintf( out, "[" );
        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      case refalrts::cDataCloseADT: {
        printf_res = fprintf( out, "]" );
        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      case refalrts::cDataOpenBracket: {
        printf_res = fprintf( out, "(" );
        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      case refalrts::cDataCloseBracket: {
        printf_res = fprintf( out, ")" );
        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      case refalrts::cDataFile: {
        printf_res = fprintf( out, "*%p", p->file_info );
        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      case refalrts::cDataClosure: {
        printf_res = fprintf( out, "{ " );
        p = refalrts::unwrap_closure( p );
        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      case refalrts::cDataClosureHead: {
        printf_res = fprintf( out, "[%lu] ", p->number_info );
        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      case refalrts::cDataUnwrappedClosure: {
        printf_res = fprintf( out, "} " );
        refalrts::wrap_closure( p );
        if( printf_res < 0 ) {
          return refalrts::cRecognitionImpossible;
        } else {
          break;
        }
      }

      default:
        refalrts_switch_default_violation(p->tag);
        // break;
    }
  }

  printf_res = fprintf( out, "\n" );
  if( printf_res < 0 ) {
    return refalrts::cRecognitionImpossible;
  } else {
    return refalrts::cSuccess;
  }
}
#line 501 "Library.cpp"
static refalrts::FnResult func_WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 414 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter eLine_b_1;
    refalrts::Iter eLine_e_1;
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );

    refalrts::FnResult fnres =
      write_to_stream( stdout, eLine_b_1, eLine_e_1 );

    if( fnres != refalrts::cSuccess )
      return fnres;

    refalrts::reset_allocator();
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return fnres;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 530 "Library.cpp"
}

refalrts::RefalFunction descr_WriteLine(func_WriteLine, "WriteLine");
refalrts::RefalFunction& WriteLine = descr_WriteLine;

static refalrts::FnResult func_FWriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 445 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sFileHandle_1;
    refalrts::Iter eLine_b_1;
    refalrts::Iter eLine_e_1;
    // s.FileHandle e.Line
    if( ! refalrts::svar_left( sFileHandle_1, bb_0, be_0 ) )
      break;
    if( sFileHandle_1->tag != refalrts::cDataFile )
      break;
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );

    refalrts::FnResult write_result =
      write_to_stream(
        static_cast<FILE*>( sFileHandle_1->file_info ), eLine_b_1, eLine_e_1
      );

    if( write_result != refalrts::cSuccess )
      return write_result;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::splice_stvar( res, sFileHandle_1 );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 574 "Library.cpp"
}

refalrts::RefalFunction descr_FWriteLine(func_FWriteLine, "FWriteLine");
refalrts::RefalFunction& FWriteLine = descr_FWriteLine;

#line 485 "Library.sref"
refalrts::FnResult read_from_stream(
  FILE *input, refalrts::Iter& begin, refalrts::Iter& end
) {
  refalrts::Iter before_begin =
    prev( refalrts::allocator::free_ptr() );
  refalrts::Iter cur_char_node = 0;

  int cur_char;

  for( ;; ) {
    cur_char = getc(input);
    if( EOF == cur_char ) {
      if( ! refalrts::alloc_number( cur_char_node, 0UL ) ) {
        return refalrts::cNoMemory;
      }
      break;
    } else if ( '\n' == cur_char ) {
      break;
    } else {
      /*
        Пользуемся тем фактом, что в данной реализации размещёные в свободной
        памяти узлы располагаются в последовательных адресах, которые будут
        начинаться с before_begin->next.
      */
      if( ! refalrts::alloc_char(cur_char_node, static_cast<char>(cur_char)) ) {
        return refalrts::cNoMemory;
      }
    }
  }

  if( cur_char_node != 0 ) {
    begin = next( before_begin );
    end = cur_char_node;
  } else {
    begin = 0;
    end = 0;
  }

  return refalrts::cSuccess;
}
#line 621 "Library.cpp"
static refalrts::FnResult func_ReadLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 529 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;

    refalrts::Iter str_begin, str_end;

    refalrts::FnResult fn_result =
      read_from_stream( stdin, str_begin, str_end );

    if( fn_result != refalrts::cSuccess )
      return fn_result;

    res = refalrts::splice_evar( res, str_begin, str_end );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 652 "Library.cpp"
}

refalrts::RefalFunction descr_ReadLine(func_ReadLine, "ReadLine");
refalrts::RefalFunction& ReadLine = descr_ReadLine;

static refalrts::FnResult func_FReadLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 562 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sFileHandle_1;
    // s.FileHandle
    if( ! refalrts::svar_left( sFileHandle_1, bb_0, be_0 ) )
      break;
    if( sFileHandle_1->tag != refalrts::cDataFile )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;

    refalrts::Iter str_begin, str_end;

    refalrts::FnResult fn_result =
      read_from_stream(
        static_cast<FILE*>( sFileHandle_1->file_info ), str_begin, str_end
      );

    if( fn_result != refalrts::cSuccess )
      return fn_result;

    res = refalrts::splice_evar( res, str_begin, str_end );
    res = refalrts::splice_stvar( res, sFileHandle_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 697 "Library.cpp"
}

refalrts::RefalFunction descr_FReadLine(func_FReadLine, "FReadLine");
refalrts::RefalFunction& FReadLine = descr_FReadLine;

#line 603 "Library.sref"
namespace {

refalrts::FnResult string_from_seq(
  std::vector<char>& string, refalrts::Iter begin, refalrts::Iter end
) {
  std::vector<char> result;

  enum { cBufLen = 100 };
  char buffer[cBufLen + 1] = { 0 };

  for( ; ; ) {
    unsigned read = refalrts::read_chars(buffer, cBufLen, begin, end);

    if( read == 0 ) {
      break;
    }

    // В текущей версии Open Watcom (и форка Open Watcom V2) есть ошибка
    // в функции vector::insert, которая возникает в случае,
    // если во время вставки вектор увеличивает свою ёмкость (capacity).
    // Для обхода этой ошибки предварительно резервируем место.
    result.reserve( result.size() + read + 1 );

    result.insert( result.end(), buffer, buffer + read );
  }

  /*
    Здесь refalrts::empty_seq( begin, end ) || (begin->tag != cDataChar).
  */

  if( refalrts::empty_seq( begin, end ) ) {
    result.push_back( '\0' );
    string.swap( result );
    return refalrts::cSuccess;
  } else {
    // здесь begin->tag != cDataChar
    return refalrts::cRecognitionImpossible;
  }
}

} // unnamed namespace
#line 745 "Library.cpp"
static refalrts::FnResult func_FOpen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 648 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter eFileName_b_1;
    refalrts::Iter eFileName_e_1;

    const char *mode;

    if( refalrts::char_left( 'r', bb_0, be_0 ) ) {
      mode = "r";
    } else if ( refalrts::char_left( 'w', bb_0, be_0 ) ) {
      mode = "w";
    } else {
      break;
    }

    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );

    std::vector<char> filename;

    refalrts::FnResult fname_read =
      string_from_seq( filename, eFileName_b_1, eFileName_e_1 );

    if( refalrts::cSuccess != fname_read )
      return fname_read;

    if( filename.empty() )
      return refalrts::cRecognitionImpossible;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;

    refalrts::Iter file_ptr = 0;
    if( ! refalrts::allocator::alloc_node( file_ptr ) )
      return refalrts::cNoMemory;

    file_ptr->tag = refalrts::cDataFile;

    if( FILE *f = fopen( &filename[0], mode ) ) {
      file_ptr->file_info = f;
    } else {
      return refalrts::cRecognitionImpossible;
    }

    res = refalrts::splice_elem( res, file_ptr );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 806 "Library.cpp"
}

refalrts::RefalFunction descr_FOpen(func_FOpen, "FOpen");
refalrts::RefalFunction& FOpen = descr_FOpen;

static refalrts::FnResult func_FClose(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 711 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sFileHandle_1;
    // s.FileHandle
    if( ! refalrts::svar_left( sFileHandle_1, bb_0, be_0 ) )
      break;
    if( sFileHandle_1->tag != refalrts::cDataFile )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    int fclose_res =
      fclose( static_cast<FILE*>( sFileHandle_1->file_info ) );

    if( EOF == fclose_res ) {
      return refalrts::cRecognitionImpossible;
    } else {
      /* Ничего не делаем */;
    }

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 847 "Library.cpp"
}

refalrts::RefalFunction descr_FClose(func_FClose, "FClose");
refalrts::RefalFunction& FClose = descr_FClose;

#line 753 "Library.sref"
extern char **g_argv;
extern int g_argc;
#line 856 "Library.cpp"
static refalrts::FnResult func_Arg(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 759 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sParamNumber_1;
    // s.ParamNumber
    if( ! refalrts::svar_left( sParamNumber_1, bb_0, be_0 ) )
      break;
    if( sParamNumber_1->tag != refalrts::cDataNumber )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();

    int arg_number = sParamNumber_1->number_info;

    refalrts::Iter res_begin = 0;
    refalrts::Iter res_end = 0;

    if( arg_number < g_argc ) {
      if( ! refalrts::alloc_string( res_begin, res_end, g_argv[arg_number] ) )
        return refalrts::cNoMemory;

      refalrts::splice_evar( arg_begin, res_begin, res_end );
    }

    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 894 "Library.cpp"
}

refalrts::RefalFunction descr_Arg(func_Arg, "Arg");
refalrts::RefalFunction& Arg = descr_Arg;

static refalrts::FnResult func_ExistFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 799 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter eFileName_b_1;
    refalrts::Iter eFileName_e_1;
    // e.FileName
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );

    std::vector<char> fname;

    refalrts::FnResult fname_res =
      string_from_seq( fname, eFileName_b_1, eFileName_e_1 );

    if( fname_res != refalrts::cSuccess )
      return fname_res;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;

    refalrts::Iter ans = 0;
    if( FILE *f = fopen( &fname[0], "r" ) ) {
      // Файл существует
      fclose( f );

      if( ! refalrts::alloc_ident( ans, USE_IDENT(True) ) ) {
        return refalrts::cNoMemory;
      }
    } else {
      // Файл по-видимому не существует
      if( ! refalrts::alloc_ident( ans, USE_IDENT(False) ) ) {
        return refalrts::cNoMemory;
      }
    }

    res = refalrts::splice_elem( res, ans );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 950 "Library.cpp"
}

refalrts::RefalFunction descr_ExistFile(func_ExistFile, "ExistFile");
refalrts::RefalFunction& ExistFile = descr_ExistFile;

static refalrts::FnResult func_GetEnv(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 852 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter eEnvName_b_1;
    refalrts::Iter eEnvName_e_1;
    // e.EnvName
    eEnvName_b_1 = bb_0;
    refalrts::use( eEnvName_b_1 );
    eEnvName_e_1 = be_0;
    refalrts::use( eEnvName_e_1 );

    std::vector<char> envname;

    refalrts::FnResult envname_res =
      string_from_seq( envname, eEnvName_b_1, eEnvName_e_1 );

    if( envname_res != refalrts::cSuccess )
      return envname_res;

    refalrts::reset_allocator();

    const char *envres = getenv( & envname[0] );

    if( envres != 0 ) {
      refalrts::Iter env_begin;
      refalrts::Iter env_end;

      if( ! refalrts::alloc_string( env_begin, env_end, envres ) )
        return refalrts::cNoMemory;

      refalrts::splice_evar( arg_begin, env_begin, env_end );

      //refalrts::Iter char_pos;
      //
      //for( const char *env = envres; *env != '\0'; ++ env ) {
      //  if( ! refalrts::alloc_char( char_pos, *env ) )
      //    return refalrts::cNoMemory;
      //
      //  refalrts::splice_elem( res, char_pos );
      //}
    }

    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 1008 "Library.cpp"
}

refalrts::RefalFunction descr_GetEnv(func_GetEnv, "GetEnv");
refalrts::RefalFunction& GetEnv = descr_GetEnv;

static refalrts::FnResult func_Exit(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 907 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sCode_1;
    // s.Code
    if( ! refalrts::svar_left( sCode_1, bb_0, be_0 ) )
      break;
    if( sCode_1->tag != refalrts::cDataNumber )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::set_return_code( sCode_1->number_info );

    refalrts::reset_allocator();
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cExit;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 1040 "Library.cpp"
}

refalrts::RefalFunction descr_Exit(func_Exit, "Exit");
refalrts::RefalFunction& Exit = descr_Exit;

static refalrts::FnResult func_System(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 936 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter eCommand_b_1;
    refalrts::Iter eCommand_e_1;
    // e.Command
    eCommand_b_1 = bb_0;
    refalrts::use( eCommand_b_1 );
    eCommand_e_1 = be_0;
    refalrts::use( eCommand_e_1 );

    std::vector<char> command;

    refalrts::FnResult read_res =
      string_from_seq( command, eCommand_b_1, eCommand_e_1 );

    if( read_res != refalrts::cSuccess )
      return read_res;

    fflush(stdout);
    fflush(stderr);

    system( &command[0] );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 1084 "Library.cpp"
}

refalrts::RefalFunction descr_System(func_System, "System");
refalrts::RefalFunction& System = descr_System;

static refalrts::FnResult func_IntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 979 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter eNumber_b_1;
    refalrts::Iter eNumber_e_1;
    // e.NoNumber
    eNumber_b_1 = bb_0;
    refalrts::use( eNumber_b_1 );
    eNumber_e_1 = be_0;
    refalrts::use( eNumber_e_1 );

    bool start_is_digit =
      ! refalrts::empty_seq( eNumber_b_1, eNumber_e_1 )
      && (refalrts::cDataChar == eNumber_b_1->tag)
      && isdigit( eNumber_b_1->char_info );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;

    if( ! start_is_digit ) {
      refalrts::Iter fail_pos = 0;
      if( ! refalrts::alloc_ident( fail_pos, USE_IDENT(Fails) ) )
        return refalrts::cNoMemory;

      res = refalrts::splice_evar( res, eNumber_b_1, eNumber_e_1 );
      res = refalrts::splice_elem( res, fail_pos );
    } else {
      refalrts::RefalNumber acc = 0;

      for( ; ; ) {
        if( refalrts::empty_seq( eNumber_b_1, eNumber_e_1 ) ) {
          break;
        } else if ( eNumber_b_1->tag != refalrts::cDataChar ) {
          break;
        } else if ( ! isdigit( eNumber_b_1->char_info ) ) {
          break;
        } else {
          (acc *= 10) += eNumber_b_1->char_info - '0';
        }

        refalrts::move_left( eNumber_b_1, eNumber_e_1 );
      }

      refalrts::Iter success_pos = 0;
      refalrts::Iter number_pos = 0;

      if( ! refalrts::alloc_ident( success_pos, USE_IDENT(Success) ) )
        return refalrts::cNoMemory;

      if( ! refalrts::alloc_number( number_pos, acc ) )
        return refalrts::cNoMemory;

      res = refalrts::splice_evar( res, eNumber_b_1, eNumber_e_1 );
      res = refalrts::splice_elem( res, number_pos );
      res = refalrts::splice_elem( res, success_pos );
    }

    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 1159 "Library.cpp"
}

refalrts::RefalFunction descr_IntFromStr(func_IntFromStr, "IntFromStr");
refalrts::RefalFunction& IntFromStr = descr_IntFromStr;

static refalrts::FnResult func_StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1051 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sNumber_1;
    // s.Number
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) )
      break;
    if( sNumber_1->tag != refalrts::cDataNumber )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;

    refalrts::Iter char_pos = 0;
    if( refalrts::RefalNumber num = sNumber_1->number_info ) {
      // Длина десятичного числа = 0,3 * длина двоичного числа,
      // т.к. lg(2) = 0,3. Хрен с ним, что много. Главное, что не мало.
      enum { cMaxNumberLen = 8 * sizeof(refalrts::RefalNumber) * 3 / 10 + 2 };

      char buffer[cMaxNumberLen + 1] = { 0 };
      char *lim_digit = buffer + cMaxNumberLen;
      char *cur_digit = lim_digit;

      while( num != 0 ) {
        -- cur_digit;
        *cur_digit = static_cast<char>((num % 10) + '0');
        num /= 10;
      }

      refalrts::Iter num_begin;
      refalrts::Iter num_end;
      bool allocated = refalrts::alloc_chars(
        num_begin, num_end, cur_digit, unsigned(lim_digit - cur_digit)
      );

      if ( ! allocated )
        return refalrts::cNoMemory;

      refalrts::splice_evar( res, num_begin, num_end );
    } else {
      if( ! refalrts::alloc_char( char_pos, '0' ) )
        return refalrts::cNoMemory;

      refalrts::splice_elem( res, char_pos );
    }

    refalrts::splice_to_freelist( arg_begin, arg_end );

    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 1225 "Library.cpp"
}

refalrts::RefalFunction descr_StrFromInt(func_StrFromInt, "StrFromInt");
refalrts::RefalFunction& StrFromInt = descr_StrFromInt;

static refalrts::FnResult func_Chr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1114 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sCode_1;
    // s.Code
    if( ! refalrts::svar_left( sCode_1, bb_0, be_0 ) )
      break;
    if( sCode_1->tag != refalrts::cDataNumber )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    char result = static_cast<char>( sCode_1->number_info );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, result ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 1263 "Library.cpp"
}

refalrts::RefalFunction descr_Chr(func_Chr, "Chr");
refalrts::RefalFunction& Chr = descr_Chr;

static refalrts::FnResult func_Ord(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1149 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );

    refalrts::Iter sChar_1;
    // s.Char
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) )
      break;
    if( sChar_1->tag != refalrts::cDataChar )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::RefalNumber result =
      static_cast<unsigned char>( sChar_1->char_info );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_number( n0, result ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 1302 "Library.cpp"
}

refalrts::RefalFunction descr_Ord(func_Ord, "Ord");
refalrts::RefalFunction& Ord = descr_Ord;

#line 1184 "Library.sref"
namespace {

template <typename T>
char compare_char( T x, T y ) {
  if( x < y ) {
    return '<';
  } else if( x == y ) {
    return '=';
  } else {
    return '>';
  }
}

} // unnamed namespace
#line 1323 "Library.cpp"
static refalrts::FnResult func_SymbCompare(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1202 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sSymb1_1;
    refalrts::Iter sSymb2_1;
    // s.Num1 s.Num2
    if( ! refalrts::svar_left( sSymb1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sSymb2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    char order;

    switch( sSymb1_1->tag ) {
    case refalrts::cDataNumber:
      switch( sSymb2_1->tag ) {
        case refalrts::cDataNumber:
          order = compare_char( sSymb1_1->number_info, sSymb2_1->number_info );
          break;

        case refalrts::cDataChar:
          order = '>';
          break;

        case refalrts::cDataFunction:
          order = '>';
          break;

        case refalrts::cDataIdentifier:
          order = '>';
          break;

        case refalrts::cDataFile:
          order = '>';
          break;

        default:
          order = '?';
          break;
      }
      break;

    case refalrts::cDataChar:
      switch( sSymb2_1->tag ) {
        case refalrts::cDataNumber:
          order = '<';
          break;

        case refalrts::cDataChar:
          order = compare_char( sSymb1_1->char_info, sSymb2_1->char_info );
          break;

        case refalrts::cDataFunction:
          order = '>';
          break;

        case refalrts::cDataIdentifier:
          order = '>';
          break;

        case refalrts::cDataFile:
          order = '>';
          break;

        default:
          order = '?';
          break;
      }
      break;

    case refalrts::cDataFunction:
      switch( sSymb2_1->tag ) {
        case refalrts::cDataNumber:
          order = '<';
          break;

        case refalrts::cDataChar:
          order = '<';
          break;

        case refalrts::cDataFunction:
          {
            int cmpres =
              strcmp(
                sSymb1_1->function_info->name,
                sSymb2_1->function_info->name
              );

            if( cmpres < 0 ) {
              order = '<';
            } else if (cmpres > 0) {
              order = '>';
            } else {
              order =
                compare_char(
                  sSymb1_1->function_info->ptr,
                  sSymb2_1->function_info->ptr
                );
            }
          }
          break;

        case refalrts::cDataIdentifier:
          order = '>';
          break;

        case refalrts::cDataFile:
          order = '>';
          break;

        default:
          order = '?';
          break;
      }
      break;

    case refalrts::cDataIdentifier:
      switch( sSymb2_1->tag ) {
        case refalrts::cDataNumber:
          order = '<';
          break;

        case refalrts::cDataChar:
          order = '<';
          break;

        case refalrts::cDataFunction:
          order = '<';
          break;

        case refalrts::cDataIdentifier:
          {
            int cmpres =
              strcmp((sSymb1_1->ident_info)(), (sSymb2_1->ident_info)());
            if( cmpres < 0 ) {
              order = '<';
            } else if (cmpres > 0) {
              order = '>';
            } else {
              order = '=';
            }
          }
          break;

        case refalrts::cDataFile:
          order = '>';
          break;

        default:
          order = '?';
          break;
      }
      break;

    case refalrts::cDataFile:
      switch( sSymb2_1->tag ) {
        case refalrts::cDataNumber:
          order = '<';
          break;

        case refalrts::cDataChar:
          order = '<';
          break;

        case refalrts::cDataFunction:
          order = '<';
          break;

        case refalrts::cDataIdentifier:
          order = '<';
          break;

        case refalrts::cDataFile:
          order =
            compare_char(
              sSymb1_1->file_info,
              sSymb2_1->file_info
            );
          break;

        default:
          order = '?';
          break;
      }
      break;

    default:
      order = '?';
      break;
    }

    if( '?' == order )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, order ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
#line 1537 "Library.cpp"
}

refalrts::RefalFunction descr_SymbCompare(func_SymbCompare, "SymbCompare");
refalrts::RefalFunction& SymbCompare = descr_SymbCompare;

static refalrts::FnResult func_SymbType(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1418 "Library.sref"
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::Iter sSymb_1;
    // s.Num
    if( ! refalrts::svar_left( sSymb_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::RefalIdentifier type_tag = 0;

    switch( sSymb_1->tag ) {
    case refalrts::cDataNumber:
      type_tag = USE_IDENT(TypeNumber);
      break;

    case refalrts::cDataChar:
      type_tag = USE_IDENT(TypeCharacter);
      break;

    case refalrts::cDataFunction:
      type_tag = USE_IDENT(TypeFunction);
      break;

    case refalrts::cDataIdentifier:
      type_tag = USE_IDENT(TypeIdentifier);
      break;

    case refalrts::cDataFile:
      type_tag = USE_IDENT(TypeFile);
      break;

    default:
      break;
    }

    if( 0 == type_tag )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_ident( n0, type_tag ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );


  return refalrts::cRecognitionImpossible;
#line 1601 "Library.cpp"
}

refalrts::RefalFunction descr_SymbType(func_SymbType, "SymbType");
refalrts::RefalFunction& SymbType = descr_SymbType;


//End of file
//FROM refalrts
