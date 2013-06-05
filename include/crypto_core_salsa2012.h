#ifndef crypto_core_salsa2012_H
#define crypto_core_salsa2012_H

#define crypto_core_salsa2012_armneon_OUTPUTBYTES 64
#define crypto_core_salsa2012_armneon_INPUTBYTES 16
#define crypto_core_salsa2012_armneon_KEYBYTES 32
#define crypto_core_salsa2012_armneon_CONSTBYTES 16
#ifdef __cplusplus
#include <string>
extern "C" {
#endif
extern int crypto_core_salsa2012_armneon(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
#ifdef __cplusplus
}
#endif
#define crypto_core_salsa2012 crypto_core_salsa2012_armneon
#define crypto_core_salsa2012_OUTPUTBYTES crypto_core_salsa2012_armneon_OUTPUTBYTES
#define crypto_core_salsa2012_INPUTBYTES crypto_core_salsa2012_armneon_INPUTBYTES
#define crypto_core_salsa2012_KEYBYTES crypto_core_salsa2012_armneon_KEYBYTES
#define crypto_core_salsa2012_CONSTBYTES crypto_core_salsa2012_armneon_CONSTBYTES
#define crypto_core_salsa2012_IMPLEMENTATION "crypto_core/salsa2012/armneon"
#ifndef crypto_core_salsa2012_armneon_VERSION
#define crypto_core_salsa2012_armneon_VERSION "-"
#endif
#define crypto_core_salsa2012_VERSION crypto_core_salsa2012_armneon_VERSION

#endif
