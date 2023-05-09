#ifndef _DOLPHIN_MTX_H
#define _DOLPHIN_MTX_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#include "Dolphin/vec.h"

// sizeof = 48 or 0x30
typedef f32 Mtx[3][4];
typedef f32 Mtx23[2][3];
typedef f32 Mtx33[3][3];
typedef f32 Mtx44[4][4];
typedef f32 PSQuaternion[4];
#define MTXDegToRad(a) ((a)*0.01745329252f)

typedef struct Quaternion {
	f32 x, y, z, w;
} Quaternion;

void PSMTXConcat(const Mtx, const Mtx, Mtx);
void PSMTXCopy(const Mtx, Mtx);
void PSMTXIdentity(Mtx);
void PSMTXTranspose(const Mtx, Mtx);
u32 PSMTXInverse(const Mtx, Mtx);
void PSMTXRotRad(Mtx, char, f32);
void PSMTXRotTrig(Mtx, char, f32, f32);
void __PSMTXRotAxisRadInternal(Mtx, const struct Vec*, f32, f32);
void PSMTXRotAxisRad(Mtx, const struct Vec*, f32);
void PSMTXTrans(Mtx, f32, f32, f32);
void PSMTXTransApply(const Mtx, Mtx, f32, f32, f32);
void PSMTXScale(Mtx, f32, f32, f32);
void PSMTXScaleApply(const Mtx, Mtx, f32, f32, f32);
void PSMTXQuat(Mtx, const PSQuaternion*);
void PSMTXMultVec(Mtx, Vec*, Vec*);
void PSMTXMultVecSR(Mtx, Vec*, Vec*);
/* TODO: Determine what these params are. */
void PSMTXMultVecArraySR(Mtx, f32*, f32*, f32*);
void PSMTX44Copy(Mtx44, Mtx44);

void C_MTXPerspective(f32, f32, f32, f32, Mtx);
void C_MTXOrtho(Mtx44, f32, f32, f32, f32, f32, f32);
void C_MTXLookAt(Mtx, const Vec*, const Vec*, const Vec*);
void C_MTXLightPerspective(f32, f32, f32, f32, f32, f32, Mtx);

#ifdef __cplusplus
}
#endif

#endif
