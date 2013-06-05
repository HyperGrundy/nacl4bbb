#ifndef crypto_stream_salsa2012_H
#define crypto_stream_salsa2012_H

#define crypto_stream_salsa2012_armneon2_KEYBYTES 32
#define crypto_stream_salsa2012_armneon2_NONCEBYTES 8
#ifdef __cplusplus
#include <string>
extern std::string crypto_stream_salsa2012_armneon2(size_t,const std::string &,const std::string &);
extern std::string crypto_stream_salsa2012_armneon2_xor(const std::string &,const std::string &,const std::string &);
extern "C" {
#endif
extern int crypto_stream_salsa2012_armneon2(unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);
extern int crypto_stream_salsa2012_armneon2_xor(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);
extern int crypto_stream_salsa2012_armneon2_beforenm(unsigned char *,const unsigned char *);
extern int crypto_stream_salsa2012_armneon2_afternm(unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);
extern int crypto_stream_salsa2012_armneon2_xor_afternm(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);
#ifdef __cplusplus
}
#endif
#define crypto_stream_salsa2012 crypto_stream_salsa2012_armneon2
#define crypto_stream_salsa2012_xor crypto_stream_salsa2012_armneon2_xor
#define crypto_stream_salsa2012_beforenm crypto_stream_salsa2012_armneon2_beforenm
#define crypto_stream_salsa2012_afternm crypto_stream_salsa2012_armneon2_afternm
#define crypto_stream_salsa2012_xor_afternm crypto_stream_salsa2012_armneon2_xor_afternm
#define crypto_stream_salsa2012_KEYBYTES crypto_stream_salsa2012_armneon2_KEYBYTES
#define crypto_stream_salsa2012_NONCEBYTES crypto_stream_salsa2012_armneon2_NONCEBYTES
#define crypto_stream_salsa2012_BEFORENMBYTES crypto_stream_salsa2012_armneon2_BEFORENMBYTES
#define crypto_stream_salsa2012_IMPLEMENTATION "crypto_stream/salsa2012/armneon2"
#ifndef crypto_stream_salsa2012_armneon2_VERSION
#define crypto_stream_salsa2012_armneon2_VERSION "-"
#endif
#define crypto_stream_salsa2012_VERSION crypto_stream_salsa2012_armneon2_VERSION

#endif
