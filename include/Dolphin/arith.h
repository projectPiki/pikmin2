#ifndef _DOLPHIN_ARITH_H
#define _DOLPHIN_ARITH_H

#include "types.h"

typedef struct {
	int quot; /* quotient */
	int rem;  /* remainder */
} div_t;

div_t div(s32 __numer, s32 __denom);
long labs(long __x);
int abs(int __x);

#endif
