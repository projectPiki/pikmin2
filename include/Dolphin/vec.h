#ifndef _DOLPHIN_VEC_H
#define _DOLPHIN_VEC_H

#include "types.h"

typedef float PSVector[3];

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

typedef struct Vec {
	float x;
	float y;
	float z;
} Vec;

void PSVECAdd(PSVector, PSVector, PSVector);
void PSVECSubtract(PSVector, PSVector, PSVector);
void PSVECNormalize(PSVector, PSVector);
float PSVECMag(PSVector);
double PSVECCrossProduct(PSVector, PSVector, PSVector);

#ifdef __cplusplus
}
#endif

#endif
