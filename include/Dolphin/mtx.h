#ifndef _DOLPHIN_MTX_H
#define _DOLPHIN_MTX_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#include "Dolphin/vec.h"

typedef float PSMatrix[3][4];
typedef float PSMatrix44[4][4];
typedef float PSQuat[4];

void PSMTXConcat(PSMatrix, PSMatrix, PSMatrix);
void PSMTXCopy(PSMatrix, PSMatrix);
void PSMTXIdentity(PSMatrix);
void PSMTXTranspose(PSMatrix, PSMatrix);
void PSMTXInverse(PSMatrix, PSMatrix);
void PSMTXRotRad(float, PSMatrix, uint);
void PSMTXRotTrig(float, float, PSMatrix, uint);
void __PSMTXRotAxisRadInternal(float, float, PSMatrix, PSVector);
void PSMTXRotAxisRad(double, PSMatrix, PSVector);
void PSMTXTrans(float, float, float, PSMatrix);
void PSMTXTransApply(float, float, float, PSMatrix, PSMatrix);
void PSMTXScale(float, float, float, PSMatrix);
void PSMTXScaleApply(float, float, float, PSMatrix, PSMatrix);
void PSMTXQuat(PSMatrix, PSQuat);
void PSMTXMultVec(PSMatrix, PSVector, PSVector);
void PSMTXMultVecSR(PSMatrix, PSVector, PSVector);
/* TODO: Determine what these params are. */
void PSMTXMultVecArraySR(PSMatrix, float*, float*, float*);
void PSMTX44Copy(PSMatrix44, PSMatrix44);

void C_MTXPerspective(float, float, float, float, PSMatrix);

#ifdef __cplusplus
}
#endif

#endif
