// This file automatically generated from 'Hash.ref'
// Don't edit! Edit 'Hash.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3574460942_3723441624
#define COOKIE1_ 3574460942U
#define COOKIE2_ 3723441624U

enum efunc {
  efunc_u_u_Metau_Mu = 0,
  efunc_u_u_Stepm_Drop = 1,
  efunc_Mu = 2,
  efunc_d_table = 3,
  efunc_Add = 4,
  efunc_Arg = 5,
  efunc_Br = 6,
  efunc_Card = 7,
  efunc_Chr = 8,
  efunc_Cp = 9,
  efunc_Dg = 10,
  efunc_Dgall = 11,
  efunc_Div = 12,
  efunc_Divmod = 13,
  efunc_Explode = 14,
  efunc_First = 15,
  efunc_Get = 16,
  efunc_Implode = 17,
  efunc_Last = 18,
  efunc_Lenw = 19,
  efunc_Lower = 20,
  efunc_Mod = 21,
  efunc_Mul = 22,
  efunc_Numb = 23,
  efunc_Open = 24,
  efunc_Ord = 25,
  efunc_Print = 26,
  efunc_Prout = 27,
  efunc_Proud = 28,
  efunc_Trout = 29,
  efunc_Put = 30,
  efunc_Putout = 31,
  efunc_Rp = 32,
  efunc_Step = 33,
  efunc_Sub = 34,
  efunc_Symb = 35,
  efunc_Time = 36,
  efunc_Type = 37,
  efunc_Upper = 38,
  efunc_Sysfun = 39,
  efunc_Freeze = 40,
  efunc_Freezer = 41,
  efunc_Dn = 42,
  efunc_Up = 43,
  efunc_Evm_met = 44,
  efunc_Residue = 45,
  efunc_u_u_Metau_Residue = 46,
  efunc_GetEnv = 47,
  efunc_System = 48,
  efunc_Exit = 49,
  efunc_Close = 50,
  efunc_ExistFile = 51,
  efunc_GetCurrentDirectory = 52,
  efunc_RemoveFile = 53,
  efunc_Implodeu_Ext = 54,
  efunc_Explodeu_Ext = 55,
  efunc_TimeElapsed = 56,
  efunc_Compare = 57,
  efunc_DeSysfun = 58,
  efunc_XMLParse = 59,
  efunc_Random = 60,
  efunc_RandomDigit = 61,
  efunc_Write = 62,
  efunc_ListOfBuiltin = 63,
  efunc_SizeOf = 64,
  efunc_GetPID = 65,
  efunc_GetPPID = 66,
  efunc_HashLittle2m_Chars = 67,
};


enum ident {
  ident_Mu = 0,
  ident_Up = 1,
  ident_Evm_met = 2,
  ident_Residue = 3,
  ident_u_u_Metau_Residue = 4,
  ident_HashLittle2m_Chars = 5,
};


static refalrts::FnResult func_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Mu/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mu("Mu", COOKIE1_, COOKIE2_, func_Mu);


static refalrts::FnResult func_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Residue/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Residue("Residue", COOKIE1_, COOKIE2_, func_Residue);


static refalrts::FnResult func_u_u_Metau_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & __Meta_Residue/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_u_u_Metau_Residue("__Meta_Residue", COOKIE1_, COOKIE2_, func_u_u_Metau_Residue);

#line 2 "Hash.ref"
/*
  Следующие манипуляции нужны для того, чтобы, оставаясь в рамках C++98,
  переносимо получить тип uint32_t.
*/
#include <stddef.h>

using refalrts::UInt32;

#line 229 "Hash.cpp"

static refalrts::FnResult func_HashLittle2m_Chars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 14 "Hash.ref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter func_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter sPrimInitval = 0;
  refalrts::Iter sSecInitval = 0;

  if (
    ! refalrts::svar_left(sPrimInitval, content_b, content_e)
    || refalrts::cDataNumber != sPrimInitval->tag
  ) {
    return refalrts::cRecognitionImpossible;
  }

  if (
    ! refalrts::svar_left(sSecInitval, content_b, content_e)
    || refalrts::cDataNumber != sSecInitval->tag
  ) {
    return refalrts::cRecognitionImpossible;
  }

  size_t length = 0;
  refalrts::Iter p = content_b;
  if (p != 0) {
    while (p != content_e->next && refalrts::cDataChar == p->tag) {
      ++ length;
      p = p->next;
    }

    if (p != content_e->next) {
      return refalrts::cRecognitionImpossible;
    }
  }

  /*
    Код ниже — результат переработки кода функции hashlittle2(),
    взятой со страницы http://www.burtleburtle.net/bob/c/lookup3.c.
    Оригинальная функция передана в общественное достояние,
    обширные комментарии Боба Дженкинса опущены.
  */
#define rot(x,k) (((x)<<(k)) | ((x)>>(32-(k))))
#define mix(a,b,c) \
{ \
  a -= c;  a ^= rot(c, 4);  c += b; \
  b -= a;  b ^= rot(a, 6);  a += c; \
  c -= b;  c ^= rot(b, 8);  b += a; \
  a -= c;  a ^= rot(c,16);  c += b; \
  b -= a;  b ^= rot(a,19);  a += c; \
  c -= b;  c ^= rot(b, 4);  b += a; \
}

#define final(a,b,c) \
{ \
  c ^= b; c -= rot(b,14); \
  a ^= c; a -= rot(c,11); \
  b ^= a; b -= rot(a,25); \
  c ^= b; c -= rot(b,16); \
  a ^= c; a -= rot(c,4);  \
  b ^= a; b -= rot(a,14); \
  c ^= b; c -= rot(b,24); \
}

  UInt32 a,b,c;                                          /* internal state */

  /* Set up the internal state */
  a = b = c = 0xdeadbeef
    + static_cast<UInt32>(length)
    + static_cast<UInt32>(sPrimInitval->number_info);
  c += static_cast<UInt32>(sSecInitval->number_info);

  unsigned char buffer[12];
  p = content_b;

  while (length > 12) {
    for (size_t i = 0; i < 12; ++i) {
      buffer[i] = static_cast<unsigned char>(p->char_info);
      p = p->next;
    }
    const UInt32 *k = reinterpret_cast<const UInt32*>(buffer);

    a += k[0];
    b += k[1];
    c += k[2];
    mix(a,b,c);
    length -= 12;
  }

  for (size_t i = 0; i < length; ++i) {
    buffer[i] = static_cast<unsigned char>(p->char_info);
    p = p->next;
  }
  const UInt32 *k = reinterpret_cast<const UInt32*>(buffer);

  /*
   * "k[2]&0xffffff" actually reads beyond the end of the string, but
   * then masks off the part it's not allowed to read.  Because the
   * string is aligned, the masked-off tail is in the same word as the
   * rest of the string.  Every machine with memory protection I've seen
   * does it on word boundaries, so is OK with this.  But VALGRIND will
   * still catch it and complain.  The masking trick does make the hash
   * noticably faster for short strings (like English words).
   */
#ifndef VALGRIND

  switch(length)
  {
    case 12: c+=k[2]; b+=k[1]; a+=k[0]; break;
    case 11: c+=k[2]&0xffffff; b+=k[1]; a+=k[0]; break;
    case 10: c+=k[2]&0xffff; b+=k[1]; a+=k[0]; break;
    case 9 : c+=k[2]&0xff; b+=k[1]; a+=k[0]; break;
    case 8 : b+=k[1]; a+=k[0]; break;
    case 7 : b+=k[1]&0xffffff; a+=k[0]; break;
    case 6 : b+=k[1]&0xffff; a+=k[0]; break;
    case 5 : b+=k[1]&0xff; a+=k[0]; break;
    case 4 : a+=k[0]; break;
    case 3 : a+=k[0]&0xffffff; break;
    case 2 : a+=k[0]&0xffff; break;
    case 1 : a+=k[0]&0xff; break;
    case 0 : break;
  }

#else /* make valgrind happy */

  k8 = (const uint8_t *)k;
  switch(length)
  {
    case 12: c+=k[2]; b+=k[1]; a+=k[0]; break;
    case 11: c+=static_cast<UInt32>(k8[10])<<16;  /* fall through */
    case 10: c+=static_cast<UInt32>(k8[9])<<8;    /* fall through */
    case 9 : c+=k8[8];                            /* fall through */
    case 8 : b+=k[1]; a+=k[0]; break;
    case 7 : b+=static_cast<UInt32>(k8[6])<<16;   /* fall through */
    case 6 : b+=static_cast<UInt32>(k8[5])<<8;    /* fall through */
    case 5 : b+=k8[4];                            /* fall through */
    case 4 : a+=k[0]; break;
    case 3 : a+=static_cast<UInt32>(k8[2])<<16;   /* fall through */
    case 2 : a+=static_cast<UInt32>(k8[1])<<8;    /* fall through */
    case 1 : a+=k8[0]; break;
    case 0 : break;
  }

#endif /* !valgrind */

  final(a,b,c);

  sPrimInitval->number_info = c;
  sSecInitval->number_info = b;

  refalrts::splice_to_freelist(vm, arg_begin, func_name);
  refalrts::Iter start_garbage =
    content_b != 0 ? content_b : arg_end;
  refalrts::splice_to_freelist(vm, start_garbage, arg_end);

#undef final
#undef mix
  return refalrts::cSuccess;
#line 394 "Hash.cpp"
}

static refalrts::NativeReference nat_ref_HashLittle2m_Chars("HashLittle2-Chars", 0U, 0U, func_HashLittle2m_Chars);


//End of file
