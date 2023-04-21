#ifndef _MSL_COMMON_ARITH_H
#define _MSL_COMMON_ARITH_H

#include "types.h"

typedef struct {
	int quot; /* quotient */
	int rem;  /* remainder */
} div_t;


int abs(int __x);
long labs(long __x);
div_t div(s32 __numer, s32 __denom);

#endif
