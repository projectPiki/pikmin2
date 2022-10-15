#ifndef _DOLPHIN_NMWEXCEPTION_H
#define _DOLPHIN_NMWEXCEPTION_H

#include "types.h"

typedef struct DestructorChain {
	DestructorChain* next;
	void* destructor;
	void* object;
} DestructorChain;

typedef struct __eti_init_info {
	void* eti_start;
	void* eti_end;
	void* code_start;
	unsigned long code_size;
} __eti_init_info;

#ifdef __cplusplus
extern "C" {
#endif

void __unregister_fragment(int fragmentID);
int __register_fragment(struct __eti_init_info* info, char* TOC);

#ifdef __cplusplus
}
#endif

extern __eti_init_info _eti_init_info;

#endif
