#ifndef _GLOBALDESTRUCTORCHAIN
#define _GLOBALDESTRUCTORCHAIN

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define CTORARG_TYPE     int
#define CTORARG_PARTIAL  (0)
#define CTORARG_COMPLETE (1)

#define CTORCALL_COMPLETE(ctor, objptr) (((void (*)(void*, CTORARG_TYPE))ctor)(objptr, CTORARG_COMPLETE))

#define DTORARG_TYPE int

#define DTORCALL_COMPLETE(dtor, objptr) (((void (*)(void*, DTORARG_TYPE))dtor)(objptr, -1))

typedef struct DestructorChain {
	struct DestructorChain* next;
	void* destructor;
	void* object;
} DestructorChain;

void* __register_global_object(void* object, void* destructor, void* registration);

void __destroy_global_chain(void);

int __register_atexit(void (*)(void));

#ifdef __cplusplus
}
#endif

#endif
