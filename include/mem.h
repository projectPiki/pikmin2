#ifndef _MEM_H
#define _MEM_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

void __copy_longs_aligned(void* dst, const void* src, size_t len);
void __copy_longs_rev_aligned(void* dst, const void* src, size_t len);
void __copy_longs_unaligned(void* dst, const void* src, size_t len);
void __copy_longs_rev_unaligned(void* dst, const void* src, size_t len);

int memcmp(const void*, const void*, size_t);
void* memchr(u8*, int, size_t);
void* memmove(void*, const void*, size_t);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
