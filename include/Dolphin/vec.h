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

void PSVECAdd(const Vec*, const Vec*, Vec*);
void PSVECSubtract(const Vec*, const Vec*, Vec*);
void PSVECNormalize(const Vec*, Vec*);
float PSVECMag(const Vec*);
void PSVECCrossProduct(const Vec*, const Vec*, Vec*);

#ifdef __cplusplus
}
#endif

#endif
