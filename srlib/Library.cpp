// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Arg(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Chr(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Div(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ExistFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Exit(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FClose(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FOpen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FReadLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FWriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GetEnv(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult IntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Mod(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Mul(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Ord(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ReadLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Sub(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SymbCompare(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SymbType(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult System(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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

#line 2 "Library.sref"
#include <stdio.h>
#include <string.h>
#include <vector>
#include <ctype.h>
#include <stdlib.h>

#include "refalrts.h"

//FROM refalrts

namespace refalrts {

class UnexpectedTypeException { };

} // namespace refalrts

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
#line 147 "Library.cpp"
refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 72 "Library.sref"
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
#line 186 "Library.cpp"
}

refalrts::FnResult Sub(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 113 "Library.sref"
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
#line 227 "Library.cpp"
}

refalrts::FnResult Mul(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 154 "Library.sref"
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

refalrts::FnResult Div(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 195 "Library.sref"
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
#line 309 "Library.cpp"
}

refalrts::FnResult Mod(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 236 "Library.sref"
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
#line 350 "Library.cpp"
}

#line 278 "Library.sref"
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
        if( p->function_info.name[0] != '\0' ) {
          printf_res = fprintf( out, "%s ", p->function_info.name );
        } else {
          printf_res = fprintf( out, "&%p ", p->function_info.ptr );
        }

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
        throw refalrts::UnexpectedTypeException();
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
#line 497 "Library.cpp"
refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 425 "Library.sref"
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
#line 526 "Library.cpp"
}

refalrts::FnResult FWriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 456 "Library.sref"
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
#line 567 "Library.cpp"
}

#line 496 "Library.sref"
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
#line 611 "Library.cpp"
refalrts::FnResult ReadLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 540 "Library.sref"
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
#line 642 "Library.cpp"
}

refalrts::FnResult FReadLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 573 "Library.sref"
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
#line 684 "Library.cpp"
}

#line 614 "Library.sref"
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
#line 729 "Library.cpp"
refalrts::FnResult FOpen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 659 "Library.sref"
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
#line 790 "Library.cpp"
}

refalrts::FnResult FClose(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 722 "Library.sref"
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
#line 828 "Library.cpp"
}

#line 764 "Library.sref"
extern char **g_argv;
extern int g_argc;
#line 834 "Library.cpp"
refalrts::FnResult Arg(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 770 "Library.sref"
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
#line 872 "Library.cpp"
}

refalrts::FnResult ExistFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 810 "Library.sref"
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
#line 925 "Library.cpp"
}

refalrts::FnResult GetEnv(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 863 "Library.sref"
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
#line 980 "Library.cpp"
}

refalrts::FnResult Exit(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 918 "Library.sref"
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
#line 1009 "Library.cpp"
}

refalrts::FnResult System(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 947 "Library.sref"
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
#line 1050 "Library.cpp"
}

refalrts::FnResult IntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 990 "Library.sref"
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
#line 1122 "Library.cpp"
}

refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1062 "Library.sref"
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
#line 1185 "Library.cpp"
}

refalrts::FnResult Chr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1125 "Library.sref"
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
#line 1220 "Library.cpp"
}

refalrts::FnResult Ord(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1160 "Library.sref"
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
#line 1256 "Library.cpp"
}

#line 1195 "Library.sref"
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
#line 1274 "Library.cpp"
refalrts::FnResult SymbCompare(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1213 "Library.sref"
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
                sSymb1_1->function_info.name,
                sSymb2_1->function_info.name
              );

            if( cmpres < 0 ) {
              order = '<';
            } else if (cmpres > 0) {
              order = '>';
            } else {
              order =
                compare_char(
                  sSymb1_1->function_info.ptr,
                  sSymb2_1->function_info.ptr
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
#line 1488 "Library.cpp"
}

refalrts::FnResult SymbType(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1429 "Library.sref"
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
#line 1549 "Library.cpp"
}


//End of file
//FROM refalrts
