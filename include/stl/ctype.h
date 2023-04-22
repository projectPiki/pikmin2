#ifndef _CTYPE_H
#define _CTYPE_H

#include "types.h"
#include "locale.h"

#ifdef __cplusplus
extern "C" {
#endif

#define octrl	0x01
#define omotn	0x02
#define ospac	0x04
#define opunc	0x08
#define odigi	0x10
#define ohexd	0x20
#define olowc	0x40
#define ouppc	0x80
#define odhex	ohexd | odigi
#define ouhex	ohexd | ouppc
#define olhex	ohexd | olowc

extern unsigned char __ctype_map[256];
extern unsigned char __lower_map[256];
extern unsigned char __upper_map[256];

int tolower(int __c);

inline int isalpha(int c) { return (int)(__ctype_map[c & 0xFF] & (olowc | ouppc)); }
inline int isdigit(int c) { return (int)(__ctype_map[c & 0xFF] & odigi); }
inline int isspace(int c) { return (int)(__ctype_map[c & 0xFF] & (omotn | ospac)); }
inline int isupper(int c) { return (int)(__ctype_map[c & 0xFF] & ouppc); }
inline int isxdigit(int c) { return (int)(__ctype_map[c & 0xFF] & ohexd); }
//added underscore to avoid naming conflicts
inline int _tolower(int c) { return (int)(c == -1 ? -1 : __lower_map[c & 0xFF]); }
inline int toupper(int c) { return (int)(c == -1 ? -1 : __upper_map[c & 0xFF]); }

#ifdef __cplusplus
}
#endif
#endif
