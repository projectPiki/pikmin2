#include "Dolphin/gd.h"
#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DGD.h"
#include "JSystem/J3D/J3DInd.h"
#include "JSystem/J3D/J3DMaterialFactory.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTexMtx.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JGeometry.h"
#include "JSystem/J3D/J3DTransform.h"
#include "types.h"

#define J3DTEXCOORDTABLE_DIM_0 11
#define J3DTEXCOORDTABLE_DIM_1 21
#define J3DTEXCOORDTABLE_DIM_2 11
#define J3DTEXCOORDTABLE_DIM_3 3

u8 j3dTexCoordTable[J3DTEXCOORDTABLE_DIM_0 * J3DTEXCOORDTABLE_DIM_1 * J3DTEXCOORDTABLE_DIM_2 * J3DTEXCOORDTABLE_DIM_3];
GDCurrentDL J3DDisplayListObj::sGDLObj;
u8 j3dTevSwapTableTable[1024];
u8 j3dZModeTable[96];
u8 j3dAlphaCmpTable[768];

const J3DTexCoordInfo j3dDefaultTexCoordInfo[8] = {
	// mTexGenType, mTexGenSrc, mTexGenMtx
	{ GX_TG_MTX3X4, GX_TG_TEX0, GX_IDENTITY }, // Tex0
	{ GX_TG_MTX3X4, GX_TG_TEX1, GX_IDENTITY }, // Tex1
	{ GX_TG_MTX3X4, GX_TG_TEX2, GX_IDENTITY }, // Tex2
	{ GX_TG_MTX3X4, GX_TG_TEX3, GX_IDENTITY }, // Tex3
	{ GX_TG_MTX3X4, GX_TG_TEX4, GX_IDENTITY }, // Tex4
	{ GX_TG_MTX3X4, GX_TG_TEX5, GX_IDENTITY }, // Tex5
	{ GX_TG_MTX3X4, GX_TG_TEX6, GX_IDENTITY }, // Tex6
	{ GX_TG_MTX3X4, GX_TG_TEX7, GX_IDENTITY }, // Tex7
};

const J3DTexMtxInfo j3dDefaultTexMtxInfo = {
	GX_ORTHOGRAPHIC, // Projection
	0,               // Info
	0xFFFF,          // Padding?
	{                // Center
	  0.0f, 0.0f, 0.0f },
	{
	    // SRT Info
	    1.0f, 1.0f, // Scale X, Y
	    0,          // Rotation
	    0.0f, 0.0f  // Translation X, Y
	},
	{
	    // Effect matrix (identity)
	    { 1.0f, 0.0f, 0.0f, 0.0f },
	    { 0.0f, 1.0f, 0.0f, 0.0f },
	    { 0.0f, 0.0f, 1.0f, 0.0f },
	    { 0.0f, 0.0f, 0.0f, 1.0f },
	},
};

const J3DIndTexMtxInfo j3dDefaultIndTexMtxInfo = {
	0.5f, 0.0f, 0.0f, // offset matrix (identity * 1/2)
	0.0f, 0.5f, 0.0f, //
	1,                // scale exp
};

const J3DTevStageInfo j3dDefaultTevStageInfo = {
	GX_PASSCLR,    // Tev stage mode
	GX_CC_RASC,    // Color in A
	GX_CC_ZERO,    // Color in B
	GX_CC_ZERO,    // Color in C
	GX_CC_CPREV,   // Color in D
	GX_TEV_ADD,    // Color Op
	GX_TB_ZERO,    // Color Bias
	GX_CS_SCALE_1, // Color Scale
	true,          // Clamp color?
	GX_TEVPREV,    // Color reg ID
	GX_CA_RASA,    // Alpha in A
	GX_CA_ZERO,    // Alpha in B
	GX_CA_ZERO,    // Alpha in C
	GX_CA_APREV,   // Alpha in D
	GX_TEV_ADD,    // Alpha Op
	GX_TB_ZERO,    // Alpha Bias
	GX_CS_SCALE_1, // Alpha Scale
	true,          // Clamp alpha?
	GX_TEVPREV,    // Alpha reg ID
};

const J3DIndTevStageInfo j3dDefaultIndTevStageInfo = {
	0, // Ind stage
	0, // Ind format
	0, // Bias sel
	0, // Mtx sel
	0, // Wrap S
	0, // Wrap T
	0, // previous
	0, // LOD
	0, // Alpha sel
};

const J3DFogInfo j3dDefaultFogInfo = {
	0,        // Fog type
	false,    // Adj enable?
	0x140,    // Center
	0.0f,     // Start Z
	0.0f,     // End Z
	0.1f,     // Near Z
	10000.0f, // Far Z
	{
	    // Color (white with 0 alpha)
	    0xFF,
	    0xFF,
	    0xFF,
	    0,
	},
	// + Null Adj Table
};

const J3DNBTScaleInfo j3dDefaultNBTScaleInfo = {
	false,                // has scale?
	{ 1.0f, 1.0f, 1.0f }, // scale (unit scaling)
};

/**
 * @note Address: 0x80063B24
 * @note Size: 0xB4
 */
void J3DLightObj::load(u32 lightIdx) const
{
	GDOverflowCheck(0x48);
	GXLightID id = (GXLightID)(1 << lightIdx);
	J3DGDSetLightPos(id, mPosition.x, mPosition.y, mPosition.z);
	J3DGDSetLightAttn(id, _1C, _20, _24, _28, _2C, _30);
	J3DGDSetLightColor(id, mLightColor);
	J3DGDSetLightDir(id, mDirection.x, mDirection.y, mDirection.z);
}

/**
 * @note Address: 0x80063BD8
 * @note Size: 0x530
 */
void loadTexCoordGens(u32 num, J3DTexCoord* coord)
{
	GDOverflowCheck(num * 8 + 10);
	J3DGDWriteXFCmdHdr(0x1040, num);
	for (int i = 0; i < num; i++) {
		J3DGDSetTexCoordGen(GXTexGenType(coord[i].getTexGenType()), GXTexGenSrc(coord[i].getTexGenSrc()));
	}
	J3DGDWriteXFCmdHdr(0x1050, num);
	if (j3dSys.checkFlag(0x40000000)) {
		for (int i = 0; i < num; i++) {
			J3DGDWrite_u32(coord[i].getTexGenMtx() == 60 ? 61 : i * 3);
		}
	} else {
		for (int i = 0; i < num; i++) {
			J3DGDWrite_u32(61);
		}
	}
}

/**
 * @note Address: 0x80064108
 * @note Size: 0x3C
 */
void J3DTexMtx::load(u32 p1) const
{
	if ((j3dSys.mFlags & 0x40000000) != 0) {
		loadPostTexMtx(p1);
	} else {
		loadTexMtx(p1);
	}
}

/**
 * @note Address: 0x80064CF4
 * @note Size: 0x20
 */
void J3DTexMtx::calc(const f32 (*mtx)[4]) { calcTexMtx(mtx); }

/**
 * @note Address: 0x80064D14
 * @note Size: 0x2EC
 */
void J3DTexMtx::calcTexMtx(const Mtx mtx)
{
	Mtx44 mtx1;
	Mtx44 mtx2;

	static Mtx qMtx = {
		0.5f, 0.0f, 0.5f, 0.0f, 0.0f, -0.5f, 0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f,
	};
	static Mtx qMtx2 = {
		0.5f, 0.0f, 0.0f, 0.5f, 0.0f, -0.5f, 0.0f, 0.5f, 0.0f, 0.0f, 1.0f, 0.0f,
	};

	u8 r28  = mTexMtxInfo.mInfo & 0x3f;
	u32 r30 = (mTexMtxInfo.mInfo >> 7) & 1;
	switch (r28) {
	case 8:
	case 9:
	case 11:
		if (r30 == 0) {
			J3DGetTextureMtx(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mtx2);
		} else if (r30 == 1) {
			J3DGetTextureMtxMaya(mTexMtxInfo.mSRT, mtx2);
		}
		PSMTXConcat(mtx2, qMtx, mtx2);
		J3DMtxProjConcat(mtx2, mTexMtxInfo.mEffectMtx, mtx1);
		PSMTXConcat(mtx1, mtx, mMtx);
		break;
	case 7:
		if (r30 == 0) {
			J3DGetTextureMtx(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mtx1);
		} else if (r30 == 1) {
			J3DGetTextureMtxMaya(mTexMtxInfo.mSRT, mtx1);
		}
		PSMTXConcat(mtx1, qMtx, mtx1);
		PSMTXConcat(mtx1, mtx, mMtx);
		break;
	case 10:
		if (r30 == 0) {
			J3DGetTextureMtxOld(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mtx2);
		} else if (r30 == 1) {
			J3DGetTextureMtxMayaOld(mTexMtxInfo.mSRT, mtx2);
		}
		PSMTXConcat(mtx2, qMtx2, mtx2);
		J3DMtxProjConcat(mtx2, mTexMtxInfo.mEffectMtx, mtx1);
		PSMTXConcat(mtx1, mtx, mMtx);
		break;
	case 6:
		if (r30 == 0) {
			J3DGetTextureMtxOld(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mtx1);
		} else if (r30 == 1) {
			J3DGetTextureMtxMayaOld(mTexMtxInfo.mSRT, mtx1);
		}
		PSMTXConcat(mtx1, qMtx2, mtx1);
		PSMTXConcat(mtx1, mtx, mMtx);
		break;
	case 1:
		if (r30 == 0) {
			J3DGetTextureMtxOld(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mtx1);
		} else if (r30 == 1) {
			J3DGetTextureMtxMayaOld(mTexMtxInfo.mSRT, mtx1);
		}
		PSMTXConcat(mtx1, mtx, mMtx);
		break;
	case 2:
	case 3:
	case 5:
		if (r30 == 0) {
			J3DGetTextureMtxOld(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mtx2);
		} else if (r30 == 1) {
			J3DGetTextureMtxMayaOld(mTexMtxInfo.mSRT, mtx2);
		}
		J3DMtxProjConcat(mtx2, mTexMtxInfo.mEffectMtx, mtx1);
		PSMTXConcat(mtx1, mtx, mMtx);
		break;
	case 4:
		if (r30 == 0) {
			J3DGetTextureMtxOld(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mtx2);
		} else if (r30 == 1) {
			J3DGetTextureMtxMayaOld(mTexMtxInfo.mSRT, mtx2);
		}
		J3DMtxProjConcat(mtx2, mTexMtxInfo.mEffectMtx, mMtx);
		break;
	default:
		if (r30 == 0) {
			J3DGetTextureMtxOld(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mMtx);
		} else if (r30 == 1) {
			J3DGetTextureMtxMayaOld(mTexMtxInfo.mSRT, mMtx);
		}
		break;
	}
}

/**
 * @note Address: 0x80065000
 * @note Size: 0x358
 */
void J3DTexMtx::calcPostTexMtx(const Mtx mtx)
{
	Mtx44 mtx1;
	Mtx44 mtx2;

	static Mtx qMtx = {
		0.5f, 0.0f, 0.5f, 0.0f, 0.0f, -0.5f, 0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f,
	};
	static Mtx qMtx2 = {
		0.5f, 0.0f, 0.0f, 0.5f, 0.0f, -0.5f, 0.0f, 0.5f, 0.0f, 0.0f, 1.0f, 0.0f,
	};

	u8 r29  = mTexMtxInfo.mInfo & 0x3f;
	u32 r30 = (mTexMtxInfo.mInfo >> 7) & 1;
	switch (r29) {
	case 8:
	case 11:
		if (r30 == 0) {
			J3DGetTextureMtx(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mtx2);
		} else if (r30 == 1) {
			J3DGetTextureMtxMaya(mTexMtxInfo.mSRT, mtx2);
		}
		PSMTXConcat(mtx2, qMtx, mtx2);
		J3DMtxProjConcat(mtx2, mTexMtxInfo.mEffectMtx, mtx1);
		PSMTXConcat(mtx1, mtx, mMtx);
		break;
	case 9:
		if (r30 == 0) {
			J3DGetTextureMtx(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mtx2);
		} else if (r30 == 1) {
			J3DGetTextureMtxMaya(mTexMtxInfo.mSRT, mtx2);
		}
		PSMTXConcat(mtx2, qMtx, mtx2);
		J3DMtxProjConcat(mtx2, mTexMtxInfo.mEffectMtx, mMtx);
		break;
	case 7:
		if (r30 == 0) {
			J3DGetTextureMtx(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mtx1);
		} else if (r30 == 1) {
			J3DGetTextureMtxMaya(mTexMtxInfo.mSRT, mtx1);
		}
		PSMTXConcat(mtx1, qMtx, mMtx);
		break;
	case 10:
		if (r30 == 0) {
			J3DGetTextureMtxOld(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mtx2);
		} else if (r30 == 1) {
			J3DGetTextureMtxMayaOld(mTexMtxInfo.mSRT, mtx2);
		}
		PSMTXConcat(mtx2, qMtx2, mtx2);
		J3DMtxProjConcat(mtx2, mTexMtxInfo.mEffectMtx, mtx1);
		PSMTXConcat(mtx1, mtx, mMtx);
		break;
	case 6:
		if (r30 == 0) {
			J3DGetTextureMtxOld(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mtx1);
		} else if (r30 == 1) {
			J3DGetTextureMtxMayaOld(mTexMtxInfo.mSRT, mtx1);
		}
		PSMTXConcat(mtx1, qMtx2, mMtx);
		break;
	case 1:
		if (r30 == 0) {
			J3DGetTextureMtxOld(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mMtx);
		} else if (r30 == 1) {
			J3DGetTextureMtxMayaOld(mTexMtxInfo.mSRT, mMtx);
		}
		break;
	case 2:
	case 5:
		if (r30 == 0) {
			J3DGetTextureMtxOld(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mtx2);
		} else if (r30 == 1) {
			J3DGetTextureMtxMayaOld(mTexMtxInfo.mSRT, mtx2);
		}
		J3DMtxProjConcat(mtx2, mTexMtxInfo.mEffectMtx, mtx1);
		PSMTXConcat(mtx1, mtx, mMtx);
		break;
	case 3:
		if (r30 == 0) {
			J3DGetTextureMtxOld(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mtx2);
		} else if (r30 == 1) {
			J3DGetTextureMtxMayaOld(mTexMtxInfo.mSRT, mtx2);
		}
		J3DMtxProjConcat(mtx2, mTexMtxInfo.mEffectMtx, mMtx);
		break;
	case 4:
		if (r30 == 0) {
			J3DGetTextureMtxOld(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mtx2);
		} else if (r30 == 1) {
			J3DGetTextureMtxMayaOld(mTexMtxInfo.mSRT, mtx2);
		}
		J3DMtxProjConcat(mtx2, mTexMtxInfo.mEffectMtx, mMtx);
		break;
	default:
		if (r30 == 0) {
			J3DGetTextureMtxOld(mTexMtxInfo.mSRT, mTexMtxInfo.mCenter, mMtx);
		} else if (r30 == 1) {
			J3DGetTextureMtxMayaOld(mTexMtxInfo.mSRT, mMtx);
		}
		break;
	}
}

/**
 * @note Address: 0x80065358
 * @note Size: 0x24
 */
bool isTexNoReg(void* ptr)
{
	if ((0x80 <= *(u8*)((u32)ptr + 1)) && (*(u8*)((u32)ptr + 1) <= 0xbb)) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8006537C
 * @note Size: 0xC
 */
u16 getTexNoReg(void* p1) { return *(u32*)(static_cast<u8*>(p1) + 1); }

/**
 * @note Address: 0x80065388
 * @note Size: 0x1B8
 */
void loadTexNo(u32 id, const u16& data)
{
	ResTIMG* resTIMG                        = j3dSys.getTexture()->getResTIMG(data);
	J3DSys::sTexCoordScaleTable[id].mScaleS = resTIMG->getWidth();
	J3DSys::sTexCoordScaleTable[id].mScaleT = resTIMG->getHeight();
	GDOverflowCheck(0x14);
	J3DGDSetTexImgPtr(GXTexMapID(id), (u8*)resTIMG + resTIMG->mImageDataOffset);
	J3DGDSetTexImgAttr(GXTexMapID(id), resTIMG->getWidth(), resTIMG->getHeight(), GXTexFmt(resTIMG->mTextureFormat & 0x0f));
	J3DGDSetTexLookupMode(GXTexMapID(id), GXTexWrapMode(resTIMG->mWrapS), GXTexWrapMode(resTIMG->mWrapT),
	                      GXTexFilter(resTIMG->mMinFilterType), GXTexFilter(resTIMG->mMagFilterType), resTIMG->mMinLOD * 0.125f,
	                      resTIMG->mMaxLOD * 0.125f, resTIMG->mLODBias * 0.01f, resTIMG->mIsBiasClamp, resTIMG->mDoEdgeLOD,
	                      GXAnisotropy(resTIMG->mIsMaxAnisotropy));

	if (resTIMG->mPaletteFormat == 1) {
		GXTlutSize tlutSize = resTIMG->mPaletteEntryCount > 16 ? GX_TLUT_256 : GX_TLUT_16;
		GDOverflowCheck(0x14);
		J3DGDLoadTlut((u8*)resTIMG + resTIMG->mPaletteOffset, (id << 13) + 0xf0000, tlutSize);
		J3DGDSetTexTlut(GXTexMapID(id), (id << 13) + 0xf0000, GXTlutFmt(resTIMG->mColorFormat));
	}
}

/**
 * @note Address: 0x80065540
 * @note Size: 0x24
 */
void patchTexNo_PtrToIdx(u32 texID, const u16& idx) { J3DGDSetTexImgPtrRaw((GXTexMapID)texID, idx); }

/**
 * @note Address: 0x80065564
 * @note Size: 0x34
 */
void loadNBTScale(J3DNBTScale& scale)
{
	if (scale.mHasScale == true) {
		j3dSys.mNBTScale = &scale.mScale;
		return;
	}

	j3dSys.mNBTScale = nullptr;
}

/**
 * @note Address: 0x80065598
 * @note Size: 0x160
 */
void makeTexCoordTable()
{
	// `u8 j3dTexCoordTable[7623]` could also be though of as `u8 j3dTexCoordTable[11][21][11][3]`
	u8* table = j3dTexCoordTable;

	const u8 texMtx[] = {
		GX_TEXMTX0, GX_TEXMTX1, GX_TEXMTX2, GX_TEXMTX3, GX_TEXMTX4, GX_TEXMTX5, GX_TEXMTX6, GX_TEXMTX7, GX_TEXMTX8, GX_TEXMTX9, GX_IDENTITY,
	};

	size_t idx;

	for (u32 i = 0; i < 11; i++) {
		for (int j = 0; j < 21u; j++) {
			// 21u makes me think there's some sizeof() shenanigans
			for (int k = 0; k < 11; k++) {
				idx = j * 11 + i * (11 * 21) + k;

				table[idx * 3 + 0] = i;
				table[idx * 3 + 1] = j;
				table[idx * 3 + 2] = texMtx[k];
			}
		}
	}
	/*
	stwu     r1, -0x40(r1)
	lis      r3, lbl_804789A4@ha
	addi     r8, r3, lbl_804789A4@l
	lis      r4, j3dTexCoordTable@ha
	stmw     r24, 0x20(r1)
	addi     r29, r4, j3dTexCoordTable@l
	li       r3, 0
	li       r7, 0
	lwz      r6, 0(r8)
	lwz      r5, 4(r8)
	lhz      r4, 8(r8)
	lbz      r0, 0xa(r8)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	sth      r4, 0x10(r1)
	stb      r0, 0x12(r1)

lbl_800655D8:
	li       r4, 0
	li       r27, 0

lbl_800655E0:
	li       r6, 2
	addi     r28, r1, 8
	add      r0, r27, r7
	li       r5, 0
	mtctr    r6

lbl_800655F4:
	add      r24, r5, r0
	lbz      r30, 0(r28)
	mulli    r6, r24, 3
	lbz      r31, 1(r28)
	addi     r8, r24, 1
	lbz      r11, 2(r28)
	addi     r12, r24, 2
	lbz      r9, 3(r28)
	add      r26, r29, r6
	lbz      r6, 4(r28)
	stb      r3, 0(r26)
	mulli    r10, r8, 3
	addi     r8, r24, 4
	stb      r4, 1(r26)
	addi     r25, r24, 3
	mulli    r12, r12, 3
	addi     r28, r28, 5
	stb      r30, 2(r26)
	add      r26, r29, r10
	addi     r5, r5, 5
	stb      r3, 0(r26)
	mulli    r10, r25, 3
	add      r12, r29, r12
	stb      r4, 1(r26)
	stb      r31, 2(r26)
	mulli    r8, r8, 3
	add      r10, r29, r10
	stb      r3, 0(r12)
	add      r8, r29, r8
	stb      r4, 1(r12)
	stb      r11, 2(r12)
	stb      r3, 0(r10)
	stb      r4, 1(r10)
	stb      r9, 2(r10)
	stb      r3, 0(r8)
	stb      r4, 1(r8)
	stb      r6, 2(r8)
	bdnz     lbl_800655F4
	addi     r9, r1, 8
	subfic   r6, r5, 0xb
	add      r9, r9, r5
	mtctr    r6
	cmpwi    r5, 0xb
	bge      lbl_800656CC

lbl_800656A4:
	add      r8, r5, r0
	lbz      r6, 0(r9)
	mulli    r8, r8, 3
	addi     r9, r9, 1
	addi     r5, r5, 1
	add      r8, r29, r8
	stb      r3, 0(r8)
	stb      r4, 1(r8)
	stb      r6, 2(r8)
	bdnz     lbl_800656A4

lbl_800656CC:
	addi     r4, r4, 1
	addi     r27, r27, 0xb
	cmplwi   r4, 0x15
	blt      lbl_800655E0
	addi     r3, r3, 1
	addi     r7, r7, 0xe7
	cmplwi   r3, 0xb
	blt      lbl_800655D8
	lmw      r24, 0x20(r1)
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x800656F8
 * @note Size: 0x130
 */
void makeAlphaCmpTable()
{
	u8* table = j3dAlphaCmpTable;
	for (u32 i = 0; i < 8; i++) {
		for (int j = 0; j < 4; j++) {
			for (u32 k = 0; k < 8; k++) {
				u32 idx            = i * 32 + j * 8 + k;
				table[idx * 3]     = i;
				table[idx * 3 + 1] = j;
				table[idx * 3 + 2] = k;
			}
		}
	}
	/*
	stwu     r1, -0x20(r1)
	lis      r4, j3dAlphaCmpTable@ha
	li       r3, 0
	li       r5, 0
	stmw     r26, 8(r1)
	addi     r30, r4, j3dAlphaCmpTable@l

lbl_80065710:
	li       r0, 4
	li       r4, 0
	li       r6, 0
	mtctr    r0

lbl_80065720:
	add      r11, r5, r6
	li       r8, 0
	mulli    r0, r11, 3
	li       r10, 1
	addi     r7, r11, 1
	addi     r12, r11, 2
	add      r9, r30, r0
	addi     r29, r11, 3
	stb      r3, 0(r9)
	mulli    r7, r7, 3
	addi     r28, r11, 4
	stb      r4, 1(r9)
	li       r31, 3
	mulli    r0, r12, 3
	addi     r27, r11, 5
	stb      r8, 2(r9)
	add      r12, r30, r7
	addi     r7, r11, 7
	stb      r3, 0(r12)
	mulli    r8, r29, 3
	add      r29, r30, r0
	stb      r4, 1(r12)
	addi     r26, r11, 6
	li       r9, 2
	stb      r10, 2(r12)
	mulli    r0, r28, 3
	add      r28, r30, r8
	stb      r3, 0(r29)
	li       r12, 4
	li       r10, 5
	stb      r4, 1(r29)
	mulli    r11, r27, 3
	add      r27, r30, r0
	stb      r9, 2(r29)
	li       r8, 6
	li       r0, 7
	stb      r3, 0(r28)
	mulli    r9, r26, 3
	add      r11, r30, r11
	stb      r4, 1(r28)
	addi     r6, r6, 8
	stb      r31, 2(r28)
	mulli    r7, r7, 3
	add      r9, r30, r9
	stb      r3, 0(r27)
	add      r7, r30, r7
	stb      r4, 1(r27)
	stb      r12, 2(r27)
	stb      r3, 0(r11)
	stb      r4, 1(r11)
	stb      r10, 2(r11)
	stb      r3, 0(r9)
	stb      r4, 1(r9)
	stb      r8, 2(r9)
	stb      r3, 0(r7)
	stb      r4, 1(r7)
	addi     r4, r4, 1
	stb      r0, 2(r7)
	bdnz     lbl_80065720
	addi     r3, r3, 1
	addi     r5, r5, 0x20
	cmplwi   r3, 8
	blt      lbl_80065710
	lmw      r26, 8(r1)
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80065828
 * @note Size: 0x138
 */
void makeZModeTable()
{
	u8* table = j3dZModeTable;
	for (int i = 0; i < 2; i++) {
		for (u32 j = 0; j < 8; j++) {
			for (int k = 0; k < 2; k++) {
				u32 idx            = i * 16 + j * 2 + k;
				table[idx * 3]     = i;
				table[idx * 3 + 1] = j;
				table[idx * 3 + 2] = k;
			}
		}
	}
	/*
	stwu     r1, -0x10(r1)
	lis      r3, j3dZModeTable@ha
	addi     r8, r3, j3dZModeTable@l
	stw      r31, 0xc(r1)
	li       r31, 0
	li       r3, 0
	stw      r30, 8(r1)

lbl_80065844:
	li       r9, 0
	li       r0, 2
	mr       r6, r9
	li       r30, 0
	li       r4, 1
	mtctr    r0

lbl_8006585C:
	add      r11, r9, r3
	addi     r9, r9, 2
	mulli    r7, r11, 3
	addi     r5, r11, 1
	add      r11, r9, r3
	add      r10, r8, r7
	addi     r9, r9, 2
	stb      r31, 0(r10)
	mulli    r0, r5, 3
	addi     r5, r11, 1
	stb      r30, 1(r10)
	add      r12, r8, r0
	stb      r6, 2(r10)
	mulli    r7, r11, 3
	add      r11, r9, r3
	stb      r31, 0(r12)
	addi     r9, r9, 2
	add      r10, r8, r7
	stb      r30, 1(r12)
	mulli    r0, r5, 3
	addi     r30, r30, 1
	stb      r4, 2(r12)
	addi     r5, r11, 1
	add      r12, r8, r0
	stb      r31, 0(r10)
	mulli    r7, r11, 3
	add      r11, r9, r3
	stb      r30, 1(r10)
	addi     r9, r9, 2
	mulli    r0, r5, 3
	addi     r5, r11, 1
	stb      r6, 2(r10)
	add      r10, r8, r7
	stb      r31, 0(r12)
	mulli    r7, r11, 3
	stb      r30, 1(r12)
	addi     r30, r30, 1
	stb      r4, 2(r12)
	add      r12, r8, r0
	mulli    r0, r5, 3
	stb      r31, 0(r10)
	stb      r30, 1(r10)
	stb      r6, 2(r10)
	add      r10, r8, r7
	stb      r31, 0(r12)
	stb      r30, 1(r12)
	addi     r30, r30, 1
	stb      r4, 2(r12)
	add      r12, r8, r0
	stb      r31, 0(r10)
	stb      r30, 1(r10)
	stb      r6, 2(r10)
	stb      r31, 0(r12)
	stb      r30, 1(r12)
	addi     r30, r30, 1
	stb      r4, 2(r12)
	bdnz     lbl_8006585C
	addi     r31, r31, 1
	addi     r3, r3, 0x10
	cmpwi    r31, 2
	blt      lbl_80065844
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80065960
 * @note Size: 0x44
 */
void makeTevSwapTable()
{
	u8* table = j3dTevSwapTableTable;
	int i     = 0;
	do {
		table[0] = i >> 6;
		table[1] = (i >> 4) & 3;
		table[2] = (i >> 2) & 3;
		table[3] = i & 3;
		i++;
		table += 4;
	} while (i < 256);
}

const GXColor j3dDefaultColInfo = { 0xFF, 0xFF, 0xFF, 0xFF }; // White
const GXColor j3dDefaultAmbInfo = { 0x32, 0x32, 0x32, 0x32 }; // Gray

const u8 j3dDefaultColorChanNum = 1;

const J3DTevOrderInfo j3dDefaultTevOrderInfoNull   = { GX_TEXCOORD_NULL, GX_TEXMAP_NULL, 0xFF };
const J3DIndTexOrderInfo j3dDefaultIndTexOrderNull = { GX_TEXCOORD_NULL, GX_TEXMAP_NULL, 0, 0 };

const GXColorS10 j3dDefaultTevColor = { 0xFF, 0xFF, 0xFF, 0xFF }; // White

const J3DIndTexCoordScaleInfo j3dDefaultIndTexCoordScaleInfo = {
	0, // Scale S
	0, // Scale T
};

const GXColor j3dDefaultTevKColor = { 0xFF, 0xFF, 0xFF, 0xFF }; // White

const J3DTevSwapModeInfo j3dDefaultTevSwapMode           = { 0, 0 };
const J3DTevSwapModeTableInfo j3dDefaultTevSwapModeTable = { GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE, GX_CH_ALPHA };
const J3DBlendInfo j3dDefaultBlendInfo                   = { 1, 4, 5, 5 };
const J3DColorChanInfo j3dDefaultColorChanInfo = { false, GX_SRC_REG, GX_SRC_REG, GX_LIGHT1, GX_DF_CLAMP, GX_AF_SPEC, 0xFF, 0xFF };
const u8 j3dDefaultTevSwapTableID              = 0x1B;
const u16 j3dDefaultAlphaCmpID                 = 0xE7;
const u16 j3dDefaultZModeID                    = 0x17;
