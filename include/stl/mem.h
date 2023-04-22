#ifndef _MEM_H
#define _MEM_H

#include "types.h"
#include "PowerPC_EABI_Support/Runtime/__mem.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

int memcmp(const void*, const void*, size_t);
void* memchr(u8*, int, size_t);
void* memmove(void*, const void*, size_t);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
