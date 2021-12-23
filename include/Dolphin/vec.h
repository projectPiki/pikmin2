#ifndef _DOLPHIN_VEC_H
#define _DOLPHIN_VEC_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

typedef struct Vec {
	float x;
	float y;
	float z;
} Vec;

void PSVECAdd(Vec, Vec, Vec);
void PSVECSubtract(Vec, Vec, Vec);
void PSVECNormalize(Vec*, Vec*);
float PSVECMag(Vec);
double PSVECCrossProduct(const Vec*, Vec*, Vec*);

#ifdef __cplusplus
}
#endif

#endif
