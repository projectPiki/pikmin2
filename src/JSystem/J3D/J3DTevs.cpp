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

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global j3dDefaultTexCoordInfo
    j3dDefaultTexCoordInfo:
        .4byte 0x01043C00
        .4byte 0x01053C00
        .4byte 0x01063C00
        .4byte 0x01073C00
        .4byte 0x01083C00
        .4byte 0x01093C00
        .4byte 0x010A3C00
        .4byte 0x010B3C00
    .global j3dDefaultTexMtxInfo
    j3dDefaultTexMtxInfo:
        .4byte 0x0100FFFF
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
    .global j3dDefaultIndTexMtxInfo
    j3dDefaultIndTexMtxInfo:
        .float 0.5
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 0.5
        .4byte 0x00000000
        .4byte 0x01000000
    .global j3dDefaultTevStageInfo
    j3dDefaultTevStageInfo:
        .4byte 0x040A0F0F
        .4byte 0x00000000
        .4byte 0x01000507
        .4byte 0x07000000
        .4byte 0x00010000
    .global j3dDefaultIndTevStageInfo
    j3dDefaultIndTevStageInfo:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global j3dDefaultFogInfo
    j3dDefaultFogInfo:
        .4byte 0x00000140
        .4byte 0x00000000
        .4byte 0x00000000
        .float 0.1
        .4byte 0x461C4000
        .4byte 0xFFFFFF00
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global j3dDefaultNBTScaleInfo
    j3dDefaultNBTScaleInfo:
        .4byte 0x00000000
        .float 1.0
        .float 1.0
        .float 1.0
    .global lbl_804789A4
    lbl_804789A4:
        .4byte 0x1E212427
        .4byte 0x2A2D3033
        .4byte 0x36393C00

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global qMtx$1682
    qMtx$1682:
        .float 0.5
        .4byte 0x00000000
        .float 0.5
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0xBF000000
        .float 0.5
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
    .global qMtx2$1683
    qMtx2$1683:
        .float 0.5
        .4byte 0x00000000
        .4byte 0x00000000
        .float 0.5
        .4byte 0x00000000
        .4byte 0xBF000000
        .4byte 0x00000000
        .float 0.5
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
    .global lbl_804A1870
    lbl_804A1870:
        .4byte lbl_80064FB8
        .4byte lbl_80064EDC
        .4byte lbl_80064F20
        .4byte lbl_80064F20
        .4byte lbl_80064F74
        .4byte lbl_80064F20
        .4byte lbl_80064E84
        .4byte lbl_80064DC4
        .4byte lbl_80064D5C
        .4byte lbl_80064D5C
        .4byte lbl_80064E1C
        .4byte lbl_80064D5C
    .global qMtx$1744
    qMtx$1744:
        .float 0.5
        .4byte 0x00000000
        .float 0.5
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0xBF000000
        .float 0.5
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
    .global qMtx2$1745
    qMtx2$1745:
        .float 0.5
        .4byte 0x00000000
        .4byte 0x00000000
        .float 0.5
        .4byte 0x00000000
        .4byte 0xBF000000
        .4byte 0x00000000
        .float 0.5
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
    .global lbl_804A1900
    lbl_804A1900:
        .4byte lbl_80065310
        .4byte lbl_80065200
        .4byte lbl_80065234
        .4byte lbl_80065288
        .4byte lbl_800652CC
        .4byte lbl_80065234
        .4byte lbl_800651B8
        .4byte lbl_80065108
        .4byte lbl_80065048
        .4byte lbl_800650B0
        .4byte lbl_80065150
        .4byte lbl_80065048

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global j3dTexCoordTable
    j3dTexCoordTable:
        .skip 0x2528
    .global j3dTevSwapTableTable
    j3dTevSwapTableTable:
        .skip 0x400
    .global j3dAlphaCmpTable
    j3dAlphaCmpTable:
        .skip 0x300
    .global j3dZModeTable
    j3dZModeTable:
        .skip 0x60

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805169B0
    lbl_805169B0:
        .4byte 0x3E000000
    .global lbl_805169B4
    lbl_805169B4:
        .4byte 0x3C23D70A
    .global lbl_805169B8
    lbl_805169B8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global j3dDefaultColInfo
    j3dDefaultColInfo:
        .4byte 0xFFFFFFFF
    .global j3dDefaultAmbInfo
    j3dDefaultAmbInfo:
        .4byte 0x32323232
    .global j3dDefaultColorChanNum
    j3dDefaultColorChanNum:
        .4byte 0x01000000
    .global j3dDefaultTevOrderInfoNull
    j3dDefaultTevOrderInfoNull:
        .4byte 0xFFFFFF00
    .global j3dDefaultIndTexOrderNull
    j3dDefaultIndTexOrderNull:
        .4byte 0xFFFF0000
    .global j3dDefaultTevColor
    j3dDefaultTevColor:
        .4byte 0x00FF00FF
    .global lbl_805169D8
    lbl_805169D8:
        .4byte 0x00FF00FF
    .global j3dDefaultIndTexCoordScaleInfo
    j3dDefaultIndTexCoordScaleInfo:
        .4byte 0x00000000
    .global j3dDefaultTevKColor
    j3dDefaultTevKColor:
        .4byte 0xFFFFFFFF
    .global j3dDefaultTevSwapMode
    j3dDefaultTevSwapMode:
        .4byte 0x00000000
    .global j3dDefaultTevSwapModeTable
    j3dDefaultTevSwapModeTable:
        .4byte 0x00010203
    .global j3dDefaultBlendInfo
    j3dDefaultBlendInfo:
        .4byte 0x01040505
    .global j3dDefaultColorChanInfo
    j3dDefaultColorChanInfo:
        .4byte 0x00000002
        .4byte 0x0200FFFF
    .global j3dDefaultTevSwapTableID
    j3dDefaultTevSwapTableID:
        .2byte 0x1B00
    .global j3dDefaultAlphaCmpID
    j3dDefaultAlphaCmpID:
        .2byte 0x00E7
    .global j3dDefaultZModeID
    j3dDefaultZModeID:
        .4byte 0x00170000
*/

const J3DTexCoordInfo j3dDefaultTexCoordInfo[8]
    = { { 1, 4, 60 }, { 1, 5, 60 }, { 1, 6, 60 }, { 1, 7, 60 }, { 1, 8, 60 }, { 1, 9, 60 }, { 1, 10, 60 }, { 1, 11, 60 } };
const J3DTexMtxInfo j3dDefaultTexMtxInfo
    = { 1,
	    0,
	    { 0.0f, 0.0f, 0.0f },
	    { 1.0f, 1.0f, 0, 0.0f, 0.0f },
	    { { 1.0f, 0.0f, 0.0f, 0.0f }, { 0.0f, 1.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 1.0f, 0.0f }, { 0.0f, 0.0f, 0.0f, 1.0f } } };

const J3DIndTexMtxInfo j3dDefaultIndTexMtxInfo = { 0.5f, 0.0f, 0.0f, 0.0f, 0.5f, 0.0f, 1 };

const J3DTevStageInfo j3dDefaultTevStageInfo
    = { GX_PASSCLR, GX_CC_RASC, GX_CC_ZERO, GX_CC_ZERO,  GX_CC_CPREV, GX_TEV_ADD, GX_TB_ZERO,    GX_CS_SCALE_1, true,      GX_TEVPREV,
	    GX_CA_RASA, GX_CA_ZERO, GX_CA_ZERO, GX_CA_APREV, GX_TEV_ADD,  GX_TB_ZERO, GX_CS_SCALE_1, true,          GX_TEVPREV };

const J3DIndTevStageInfo j3dDefaultIndTevStageInfo = {
	{ 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 }, { 0 },
};

const J3DFogInfo j3dDefaultFogInfo = { 0,
	                                   0,
	                                   0x140,
	                                   0.0f,
	                                   0.0f,
	                                   0.1f,
	                                   10000.0f,
	                                   0xFF,
	                                   0xFF,
	                                   0xFF,
	                                   {
	                                       0,
	                                   } };

// const J3DNBTScaleInfo j3dDefaultNBTScaleInfo = { 0, JGeometry::TVec3f(1.0f, 1.0f, 1.0f) };
// const J3DNBTScaleInfo j3dDefaultNBTScaleInfo = { 0, {1.0f, 1.0f, 1.0f} };

const GXColor j3dDefaultColInfo                  = { 0xFFFFFFFF };
const GXColor j3dDefaultAmbInfo                  = { 0x32323232 };
const u8 j3dDefaultColorChanNum                  = 1;
const J3DTevOrderInfo j3dDefaultTevOrderInfoNull = { GX_TEXCOORD_NULL, GX_TEXMAP_NULL, 0xFF };
// const J3DIndTexOrder j3dDefaultIndTexOrderNull   = J3DIndTexOrder(GX_TEXCOORD_NULL, GX_TEXMAP_NULL);
// const J3DIndTexOrder j3dDefaultIndTexOrderNull   = J3DIndTexOrder(GX_TEXCOORD_NULL, GX_TEXMAP_NULL, 0, 0);
// const J3DIndTexOrder j3dDefaultIndTexOrderNull   = { GX_TEXCOORD_NULL, GX_TEXMAP_NULL };
// const J3DIndTexOrder j3dDefaultIndTexOrderNull   = { GX_TEXCOORD_NULL, GX_TEXMAP_NULL, 0, 0 };
const J3DIndTexOrderInfo j3dDefaultIndTexOrderNull       = { GX_TEXCOORD_NULL, GX_TEXMAP_NULL, 0, 0 };
const GXColorS10 j3dDefaultTevColor                      = { 0xFFFFFFFF };
const GXColor j3dDefaultTevKColor                        = { 0xFFFFFFFF };
const J3DTevSwapModeInfo j3dDefaultTevSwapMode           = { 0 };
const J3DTevSwapModeTableInfo j3dDefaultTevSwapModeTable = { GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE, GX_CH_ALPHA };
const J3DBlendInfo j3dDefaultBlendInfo                   = { 1, 4, 5, 5 };
const J3DColorChanInfo j3dDefaultColorChanInfo = { false, GX_SRC_REG, GX_SRC_REG, GX_LIGHT1, GX_DF_CLAMP, GX_AF_SPEC, 0xFF, 0xFF };
const u8 j3dDefaultTevSwapTableID              = 0x1B;
const u16 j3dDefaultAlphaCmpID                 = 0xE7;
const u16 j3dDefaultZModeID                    = 0x17;

/**
 * @note Address: 0x80063B24
 * @note Size: 0xB4
 */
void J3DLightObj::load(u32 p1) const
{
	__GDCheckOverflowed(0x48);
	GXLightID id = (GXLightID)(1 << p1);
	J3DGDSetLightPos(id, mPosition.x, mPosition.y, mPosition.z);
	J3DGDSetLightAttn(id, _1C, _20, _24, _28, _2C, _30);
	J3DGDSetLightColor(id, _18);
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
 * @note Address: 0x80064144
 * @note Size: 0x64
 */
void J3DTexMtx::loadTexMtx(u32 p1) const
{
	__GDCheckOverflowed(0x35);
	J3DGDLoadTexMtxImm(const_cast<f32(*)[4]>(mMtx), p1 * 3 + 30, (_GXTexMtxType)mTexMtxInfo.mProjection);
}

/**
 * @note Address: 0x800641A8
 * @note Size: 0x580
 */
void J3DGDLoadTexMtxImm(Mtx, u32, _GXTexMtxType)
{
	/*
	cmpwi    r5, 1
	stwu     r1, -0x40(r1)
	rlwinm   r11, r4, 2, 0x10, 0x1d
	li       r0, 0xc
	bne      lbl_800641C0
	li       r0, 8

lbl_800641C0:
	lwz      r6, __GDCurrentDL@sda21(r13)
	clrlwi   r4, r0, 0x18
	addi     r9, r4, -1
	li       r10, 0x10
	lwz      r4, 8(r6)
	rlwinm   r8, r9, 0x18, 0x18, 0x1f
	rlwinm   r7, r11, 0x18, 0x18, 0x1f
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r10, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r8, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r9, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r7, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r11, 0(r4)
	lfs      f0, 0(r3)
	lwz      r6, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x34(r1)
	lwz      r4, 8(r6)
	lwz      r9, 0x34(r1)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	srwi     r0, r9, 0x18
	rlwinm   r8, r9, 0x10, 0x18, 0x1f
	rlwinm   r7, r9, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r8, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r7, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r9, 0(r4)
	lfs      f0, 4(r3)
	lwz      r6, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x30(r1)
	lwz      r4, 8(r6)
	lwz      r9, 0x30(r1)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	srwi     r0, r9, 0x18
	rlwinm   r8, r9, 0x10, 0x18, 0x1f
	rlwinm   r7, r9, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r8, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r7, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r9, 0(r4)
	lfs      f0, 8(r3)
	lwz      r6, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x2c(r1)
	lwz      r4, 8(r6)
	lwz      r9, 0x2c(r1)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	srwi     r0, r9, 0x18
	rlwinm   r8, r9, 0x10, 0x18, 0x1f
	rlwinm   r7, r9, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r8, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r7, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r9, 0(r4)
	lfs      f0, 0xc(r3)
	lwz      r6, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x28(r1)
	lwz      r4, 8(r6)
	lwz      r9, 0x28(r1)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	srwi     r0, r9, 0x18
	rlwinm   r8, r9, 0x10, 0x18, 0x1f
	rlwinm   r7, r9, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r8, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r7, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r9, 0(r4)
	lfs      f0, 0x10(r3)
	lwz      r6, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x24(r1)
	lwz      r4, 8(r6)
	lwz      r8, 0x24(r1)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	srwi     r0, r8, 0x18
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r7, 0(r4)
	lwz      r6, __GDCurrentDL@sda21(r13)
	rlwinm   r7, r8, 0x18, 0x18, 0x1f
	cmpwi    r5, 0
	lwz      r4, 8(r6)
	addi     r0, r4, 1
	stw      r0, 8(r6)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lfs      f0, 0x14(r3)
	lwz      r5, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x20(r1)
	lwz      r4, 8(r5)
	lwz      r8, 0x20(r1)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lfs      f0, 0x18(r3)
	lwz      r5, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x1c(r1)
	lwz      r4, 8(r5)
	lwz      r8, 0x1c(r1)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lfs      f0, 0x1c(r3)
	lwz      r5, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x18(r1)
	lwz      r4, 8(r5)
	lwz      r8, 0x18(r1)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	bne      lbl_80064720
	lfs      f0, 0x20(r3)
	lwz      r5, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x14(r1)
	lwz      r4, 8(r5)
	lwz      r8, 0x14(r1)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lfs      f0, 0x24(r3)
	lwz      r5, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x10(r1)
	lwz      r4, 8(r5)
	lwz      r8, 0x10(r1)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lfs      f0, 0x28(r3)
	lwz      r5, __GDCurrentDL@sda21(r13)
	stfs     f0, 0xc(r1)
	lwz      r4, 8(r5)
	lwz      r8, 0xc(r1)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lfs      f0, 0x2c(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	stfs     f0, 8(r1)
	lwz      r3, 8(r4)
	lwz      r7, 8(r1)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	srwi     r0, r7, 0x18
	rlwinm   r6, r7, 0x10, 0x18, 0x1f
	rlwinm   r5, r7, 0x18, 0x18, 0x1f
	stb      r0, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)

lbl_80064720:
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x80064728
 * @note Size: 0x60
 */
void J3DTexMtx::loadPostTexMtx(u32 p1) const
{
	__GDCheckOverflowed(0x35);
	J3DGDLoadPostTexMtxImm(const_cast<f32(*)[4]>(mMtx), p1 * 3 + 0x40);
}

/**
 * @note Address: 0x80064788
 * @note Size: 0x56C
 */
void J3DGDLoadPostTexMtxImm(Mtx, u32)
{
	/*
	stwu     r1, -0x40(r1)
	addi     r0, r4, -64
	slwi     r4, r0, 2
	li       r11, 0x10
	lwz      r10, __GDCurrentDL@sda21(r13)
	addi     r7, r4, 0x500
	li       r9, 0
	li       r8, 0xb
	lwz      r5, 8(r10)
	rlwinm   r6, r7, 0x18, 0x18, 0x1f
	addi     r0, r5, 1
	stw      r0, 8(r10)
	stb      r11, 0(r5)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r9, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lfs      f0, 0(r3)
	lwz      r5, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x34(r1)
	lwz      r4, 8(r5)
	lwz      r8, 0x34(r1)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lfs      f0, 4(r3)
	lwz      r5, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x30(r1)
	lwz      r4, 8(r5)
	lwz      r8, 0x30(r1)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lfs      f0, 8(r3)
	lwz      r5, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x2c(r1)
	lwz      r4, 8(r5)
	lwz      r8, 0x2c(r1)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lfs      f0, 0xc(r3)
	lwz      r5, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x28(r1)
	lwz      r4, 8(r5)
	lwz      r8, 0x28(r1)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lfs      f0, 0x10(r3)
	lwz      r5, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x24(r1)
	lwz      r4, 8(r5)
	lwz      r7, 0x24(r1)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	srwi     r0, r7, 0x18
	rlwinm   r6, r7, 0x10, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	rlwinm   r6, r7, 0x18, 0x18, 0x1f
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lfs      f0, 0x14(r3)
	lwz      r5, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x20(r1)
	lwz      r4, 8(r5)
	lwz      r8, 0x20(r1)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lfs      f0, 0x18(r3)
	lwz      r5, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x1c(r1)
	lwz      r4, 8(r5)
	lwz      r8, 0x1c(r1)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lfs      f0, 0x1c(r3)
	lwz      r5, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x18(r1)
	lwz      r4, 8(r5)
	lwz      r8, 0x18(r1)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lfs      f0, 0x20(r3)
	lwz      r5, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x14(r1)
	lwz      r4, 8(r5)
	lwz      r8, 0x14(r1)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lfs      f0, 0x24(r3)
	lwz      r5, __GDCurrentDL@sda21(r13)
	stfs     f0, 0x10(r1)
	lwz      r4, 8(r5)
	lwz      r8, 0x10(r1)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	srwi     r0, r8, 0x18
	rlwinm   r7, r8, 0x10, 0x18, 0x1f
	rlwinm   r6, r8, 0x18, 0x18, 0x1f
	stb      r0, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lfs      f0, 0x28(r3)
	stfs     f0, 0xc(r1)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r9, 0xc(r1)
	lwz      r4, 8(r5)
	srwi     r8, r9, 0x18
	rlwinm   r7, r9, 0x10, 0x18, 0x1f
	addi     r0, r4, 1
	rlwinm   r6, r9, 0x18, 0x18, 0x1f
	stw      r0, 8(r5)
	stb      r8, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r6, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r9, 0(r4)
	lfs      f0, 0x2c(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	stfs     f0, 8(r1)
	lwz      r3, 8(r4)
	lwz      r7, 8(r1)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	srwi     r0, r7, 0x18
	rlwinm   r6, r7, 0x10, 0x18, 0x1f
	rlwinm   r5, r7, 0x18, 0x18, 0x1f
	stb      r0, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	addi     r1, r1, 0x40
	blr
	*/
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
	ResTIMG* resTIMG                    = j3dSys.getTexture()->getResTIMG(data);
	J3DSys::sTexCoordScaleTable[id]._00 = resTIMG->getWidth();
	J3DSys::sTexCoordScaleTable[id]._02 = resTIMG->getHeight();
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
	if (scale.mHasScale == 1) {
		// j3dSys._118 = &scale._04;
	}
	/*
	lbz      r0, 0(r3)
	cmplwi   r0, 1
	bne      lbl_80065584
	lis      r4, j3dSys@ha
	addi     r0, r3, 4
	addi     r3, r4, j3dSys@l
	stw      r0, 0x118(r3)
	blr

lbl_80065584:
	lis      r3, j3dSys@ha
	li       r0, 0
	addi     r3, r3, j3dSys@l
	stw      r0, 0x118(r3)
	blr
	*/
}

/**
 * @note Address: 0x80065598
 * @note Size: 0x160
 */
void makeTexCoordTable()
{
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

u8 j3dAlphaCmpTable[768];

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

u8 j3dZModeTable[96];

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

u8 j3dTevSwapTableTable[1024];

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
