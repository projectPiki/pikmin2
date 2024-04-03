#ifndef _JSYSTEM_J3D_J3DTRANSFORM_H
#define _JSYSTEM_J3D_J3DTRANSFORM_H

#include "Dolphin/mtx.h"
#include "JSystem/J3D/J3DTypes.h"

extern const Mtx j3dDefaultMtx;
extern const Vec j3dDefaultScale;

void J3DCalcBBoardMtx(f32 (*)[4]);
void J3DCalcYBBoardMtx(f32 (*)[4]);
void J3DPSCalcInverseTranspose(f32 (*)[4], f32 (*)[3]);
void J3DGetTranslateRotateMtx(const J3DTransformInfo&, f32 (*)[4]);
void J3DGetTranslateRotateMtx(s16, s16, s16, f32, f32, f32, f32 (*)[4]);
void J3DGetTextureMtx(const J3DTextureSRTInfo&, const Vec&, f32 (*)[4]);
void J3DGetTextureMtxOld(const J3DTextureSRTInfo&, const Vec&, f32 (*)[4]);
void J3DGetTextureMtxMaya(const J3DTextureSRTInfo&, f32 (*)[4]);
void J3DGetTextureMtxMayaOld(const J3DTextureSRTInfo&, f32 (*)[4]);
void J3DScaleNrmMtx(f32 (*)[4], const Vec&);
void J3DScaleNrmMtx33(f32 (*)[3], const Vec&);
void J3DMtxProjConcat(f32 (*)[4], f32 (*)[4], f32 (*)[4]);
void J3DPSMtxArrayConcat(f32 (*)[4], f32 (*)[4], f32 (*)[4], u32);

/**
 * @fabricated
 */
inline void J3DPSMtx33Copy(const register Mtx33 src, register Mtx33 dst)
{
#ifdef __MWERKS__ // clang-format off
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
#endif // clang-format on
}

inline void J3DPSMtx33CopyFrom34(register MtxP src, register Mtx3P dst)
{
	register f32 x_y1;
	register f32 z1;
	register f32 x_y2;
	register f32 z2;
	register f32 x_y3;
	register f32 z3;
#ifdef __MWERKS__ // clang-format off
    asm {
        psq_l x_y1, 0(src), 0, 0
        lfs z1, 8(src)
        psq_l x_y2, 16(src), 0, 0
        lfs z2, 0x18(src)
        psq_l x_y3, 32(src), 0, 0
        lfs z3, 0x28(src)
        psq_st x_y1, 0(dst), 0, 0
        stfs z1, 8(dst)
        psq_st x_y2, 12(dst), 0, 0
        stfs z2, 0x14(dst)
        psq_st x_y3, 24(dst), 0, 0
        stfs z3, 0x20(dst)
    }
#endif // clang-format on
}

#endif
