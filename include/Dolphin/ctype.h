#ifndef _DOLPHIN_CTYPE_H
#define _DOLPHIN_CTYPE_H

#include "types.h"
#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#define CTYPE_CNTRL  0x1
#define CTYPE_SPACE  0x2
#define CTYPE_BLANK  0x4
#define CTYPE_PUNCT  0x8
#define CTYPE_DIGIT  0x10
#define CTYPE_XDIGIT 0x20
#define CTYPE_LOWER  0x40
#define CTYPE_UPPER  0x80

extern unsigned char __ctype_map[256];
extern unsigned char __lower_map[256];

inline BOOL isdigit(int c) { return (__ctype_map[c & 0xFF] & CTYPE_DIGIT) != 0; }
inline BOOL islower(u8 c) { return (__lower_map[c & 0xFF]); }
int tolower(int __c);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
