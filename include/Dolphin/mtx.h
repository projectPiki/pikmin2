#ifndef _DOLPHIN_MTX_H
#define _DOLPHIN_MTX_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#include "Dolphin/vec.h"

// sizeof = 48 or 0x30
typedef float Mtx[3][4];
typedef float Mtx33[3][3];
typedef float Mtx44[4][4];
typedef float PSQuaternion[4];
#define MTXDegToRad(a) ((a)*0.01745329252f)

void PSMTXConcat(const Mtx, const Mtx, Mtx);
void PSMTXCopy(const Mtx, Mtx);
void PSMTXIdentity(Mtx);
void PSMTXTranspose(const Mtx, Mtx);
u32 PSMTXInverse(const Mtx, Mtx);
void PSMTXRotRad(Mtx, char, f32);
void PSMTXRotTrig(Mtx, char, float, float);
void __PSMTXRotAxisRadInternal(Mtx, const struct Vec*, f32, f32);
void PSMTXRotAxisRad(Mtx, const struct Vec*, f32);
void PSMTXTrans(Mtx, float, float, float);
void PSMTXTransApply(const Mtx, Mtx, float, float, float);
void PSMTXScale(Mtx, float, float, float);
void PSMTXScaleApply(const Mtx, Mtx, float, float, float);
void PSMTXQuat(Mtx, const PSQuaternion*);
void PSMTXMultVec(Mtx, Vec*, Vec*);
void PSMTXMultVecSR(Mtx, Vec*, Vec*);
/* TODO: Determine what these params are. */
void PSMTXMultVecArraySR(Mtx, float*, float*, float*);
void PSMTX44Copy(Mtx44, Mtx44);

void C_MTXPerspective(float, float, float, float, Mtx);
void C_MTXOrtho(Mtx44, float, float, float, float, float, float);
void C_MTXLookAt(Mtx, const Vec*, const Vec*, const Vec*);

#ifdef __cplusplus
}
#endif

#endif
