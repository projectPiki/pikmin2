#ifndef _ARITH_H
#define _ARITH_H

#include "types.h"

typedef struct {
	int quot; /* quotient */
	int rem;  /* remainder */
} div_t;

div_t div(s32 __numer, s32 __denom);
int abs(int __x);

#endif
