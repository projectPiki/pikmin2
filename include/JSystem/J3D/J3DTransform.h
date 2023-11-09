#ifndef _JSYSTEM_J3D_J3DTRANSFORM_H
#define _JSYSTEM_J3D_J3DTRANSFORM_H

#include "Dolphin/mtx.h"
#include "JSystem/J3D/J3DTypes.h"

extern Mtx j3dDefaultMtx;

void J3DCalcBBoardMtx(f32 (*)[4]);
void J3DCalcYBBoardMtx(f32 (*)[4]);
void J3DPSCalcInverseTranspose(f32 (*)[4], f32 (*)[3]);
void J3DGetTranslateRotateMtx(const J3DTransformInfo&, f32 (*)[4]);
void J3DGetTranslateRotateMtx(short, short, short, f32, f32, f32, f32 (*)[4]);
void J3DGetTextureMtx(const J3DTextureSRTInfo&, const Vec&, f32 (*)[4]);
void J3DGetTextureMtxOld(const J3DTextureSRTInfo&, const Vec&, f32 (*)[4]);
void J3DGetTextureMtxMaya(const J3DTextureSRTInfo&, f32 (*)[4]);
void J3DGetTextureMtxMayaOld(const J3DTextureSRTInfo&, f32 (*)[4]);
void J3DScaleNrmMtx(f32 (*)[4], const Vec&);
void J3DScaleNrmMtx33(f32 (*)[3], const Vec&);
void J3DMtxProjConcat(f32 (*)[4], f32 (*)[4], f32 (*)[4]);
void J3DPSMtxArrayConcat(f32 (*)[4], f32 (*)[4], f32 (*)[4], u32);

// clang-format off
/**
 * @fabricated
 */
inline void J3DPSMtx33Copy
(
    const register Mtx33 src,
    register Mtx33 dst
)
{
	asm {
		psq_l       fp4, 0(src),   0, 0
		psq_l       fp3, 8(src),   0, 0
		psq_l       fp2, 16(src),  0, 0
		psq_l       fp1, 24(src),  0, 0
		lfs         fp0, 32(src)
		psq_st      fp4, 0(dst),   0, 0
		psq_st      fp3, 8(dst),   0, 0
		psq_st      fp2, 16(dst),  0, 0
		psq_st      fp1, 24(dst),  0, 0
		stfs        fp0, 32(dst)
	}
}
// clang-format on

#endif
