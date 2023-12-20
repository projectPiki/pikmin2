#ifndef _RUNTIME_MEM_H
#define _RUNTIME_MEM_H
#include "types.h"
#ifdef __cplusplus
extern "C" {
#endif

DECL_SECT(".init") void* memcpy(void* dest, const void* src, size_t n);
DECL_SECT(".init") void __fill_mem(void* dest, int val, size_t count);
DECL_SECT(".init") void* memset(void* dest, int val, size_t count);

#ifdef __cplusplus
}
#endif
#endif
