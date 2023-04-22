#ifndef _MSL_C_ANSI_FP_H
#define _MSL_C_ANSI_FP_H

#include "types.h"
#include "math.h"
#include "float.h"
#include "fdlibm.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/math_api.h"

#define SIGDIGLEN 36

typedef struct decimal {
	char sign;
	char unk1;
	s16 exp;
	struct {
		u8 length;
		u8 text[36];
		u8 unk41;
	} sig;
} decimal;

typedef struct decform {
	char style;
	char unk1;
	short digits;
} decform;

void __ull2dec(decimal*, u64);
void __timesdec(decimal*, const decimal*, const decimal*);
void __str2dec(decimal*, const char*, short);
void __two_exp(decimal*, long);
BOOL __equals_dec(const decimal*, const decimal*);
BOOL __less_dec(const decimal*, const decimal*);
void __minus_dec(decimal*, const decimal*, const decimal*);
void __num2dec_internal(decimal*, double);
void __num2dec(const decform*, double, decimal*);
double __dec2num(const decimal*);

#endif
