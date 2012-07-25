
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_sasl_srp_IALG__
#define __gnu_javax_crypto_sasl_srp_IALG__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace mac
        {
            class IMac;
        }
        namespace sasl
        {
          namespace srp
          {
              class IALG;
              class KDF;
          }
        }
      }
    }
  }
}

class gnu::javax::crypto::sasl::srp::IALG : public ::java::lang::Object
{

  IALG(::gnu::javax::crypto::mac::IMac *);
public: // actually package-private
  static ::gnu::javax::crypto::sasl::srp::IALG * getInstance(::java::lang::String *);
public:
  ::java::lang::Object * clone();
  void init(::gnu::javax::crypto::sasl::srp::KDF *);
  void update(JArray< jbyte > *);
  void update(JArray< jbyte > *, jint, jint);
  JArray< jbyte > * doFinal();
  jint length();
private:
  ::gnu::javax::crypto::mac::IMac * __attribute__((aligned(__alignof__( ::java::lang::Object)))) hmac;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_crypto_sasl_srp_IALG__
