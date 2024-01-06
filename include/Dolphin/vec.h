#ifndef _DOLPHIN_VEC_H
#define _DOLPHIN_VEC_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

typedef struct Vec {
	f32 x;
	f32 y;
	f32 z;
} Vec;

typedef struct SVec {
	s16 x;
	s16 y;
	s16 z;
} SVec;

void PSVECAdd(const Vec*, const Vec*, Vec*);
void PSVECSubtract(const Vec*, const Vec*, Vec*);
void PSVECNormalize(const Vec*, Vec*);
f32 PSVECMag(const Vec*);
void PSVECCrossProduct(const Vec*, const Vec*, Vec*);

#ifdef __cplusplus
}
#endif

//  lfs     f1,0(r3)
//  lfs     f0,4(r3)
//  fmuls   f1,f1,f1
//  lfs     f2,8(r3)
//  fmuls   f0,f0,f0
//  fmuls   f2,f2,f2
//  fadds   f0,f1,f0
//  fadds   f1,f2,f0
//  blr

#endif
