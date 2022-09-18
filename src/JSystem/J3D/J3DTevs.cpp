#include "JSystem/J3D/J3DTexMtx.h"
#include "JSystem/J3D/J3DTypes.h"
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

/*
 * --INFO--
 * Address:	80063B24
 * Size:	0000B4
 */
void J3DLightObj::load(unsigned long) const
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r5)
	lwz      r0, 0xc(r5)
	addi     r3, r3, 0x48
	cmplw    r3, r0
	ble      lbl_80063B5C
	bl       GDOverflowed

lbl_80063B5C:
	li       r0, 1
	lfs      f1, 0(r30)
	slw      r31, r0, r31
	lfs      f2, 4(r30)
	lfs      f3, 8(r30)
	mr       r3, r31
	bl       J3DGDSetLightPos__F10_GXLightIDfff
	lfs      f1, 0x1c(r30)
	mr       r3, r31
	lfs      f2, 0x20(r30)
	lfs      f3, 0x24(r30)
	lfs      f4, 0x28(r30)
	lfs      f5, 0x2c(r30)
	lfs      f6, 0x30(r30)
	bl       J3DGDSetLightAttn__F10_GXLightIDffffff
	lwz      r0, 0x18(r30)
	mr       r3, r31
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       J3DGDSetLightColor__F10_GXLightID8_GXColor
	lfs      f1, 0xc(r30)
	mr       r3, r31
	lfs      f2, 0x10(r30)
	lfs      f3, 0x14(r30)
	bl       J3DGDSetLightDir__F10_GXLightIDfff
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80063BD8
 * Size:	000530
 */
void loadTexCoordGens(unsigned long, J3DTexCoord*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r3
	mr       r27, r4
	slwi     r3, r3, 3
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	lwz      r0, 0xc(r5)
	add      r3, r3, r4
	addi     r3, r3, 0xa
	cmplw    r3, r0
	ble      lbl_80063C14
	bl       GDOverflowed

lbl_80063C14:
	lwz      r4, __GDCurrentDL@sda21(r13)
	clrlwi   r3, r26, 0x18
	addi     r6, r3, -1
	li       r7, 0x10
	lwz      r3, 8(r4)
	rlwinm   r30, r6, 0x18, 0x18, 0x1f
	li       r5, 0x40
	mr       r31, r27
	addi     r0, r3, 1
	clrlwi   r29, r6, 0x18
	stw      r0, 8(r4)
	li       r28, 0
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r30, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	b        lbl_80063CB0

lbl_80063C9C:
	lbz      r3, 0(r31)
	lbz      r4, 1(r31)
	bl       J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc
	addi     r31, r31, 6
	addi     r28, r28, 1

lbl_80063CB0:
	cmplw    r28, r26
	blt      lbl_80063C9C
	lwz      r5, __GDCurrentDL@sda21(r13)
	lis      r3, j3dSys@ha
	li       r7, 0x10
	li       r6, 0x50
	lwz      r4, 8(r5)
	addi     r3, r3, j3dSys@l
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r7, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r30, 0(r4)
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)
	stb      r29, 0(r4)
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
	lwz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 1, 1
	beq      lbl_80063DCC
	mr       r9, r27
	li       r10, 0
	mtctr    r26
	cmplwi   r26, 0
	ble      lbl_800640F4

lbl_80063D4C:
	lbz      r0, 2(r9)
	li       r8, 0x3d
	cmplwi   r0, 0x3c
	beq      lbl_80063D60
	mr       r8, r10

lbl_80063D60:
	lwz      r4, __GDCurrentDL@sda21(r13)
	srwi     r7, r8, 0x18
	rlwinm   r6, r8, 0x10, 0x18, 0x1f
	rlwinm   r5, r8, 0x18, 0x18, 0x1f
	lwz      r3, 8(r4)
	addi     r9, r9, 6
	addi     r10, r10, 3
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
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
	stb      r8, 0(r3)
	bdnz     lbl_80063D4C
	b        lbl_800640F4

lbl_80063DCC:
	cmplwi   r26, 0
	li       r4, 0
	ble      lbl_800640F4
	cmplwi   r26, 8
	addi     r3, r26, -8
	ble      lbl_80064088
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmplwi   r3, 0
	ble      lbl_80064088

lbl_80063DF8:
	lwz      r7, __GDCurrentDL@sda21(r13)
	li       r3, 0
	li       r0, 0x3d
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r0, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r0, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r0, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	addi     r4, r4, 8
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r0, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r0, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r0, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r0, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r6, 8(r7)
	addi     r5, r6, 1
	stw      r5, 8(r7)
	stb      r3, 0(r6)
	lwz      r6, __GDCurrentDL@sda21(r13)
	lwz      r5, 8(r6)
	addi     r3, r5, 1
	stw      r3, 8(r6)
	stb      r0, 0(r5)
	bdnz     lbl_80063DF8

lbl_80064088:
	subf     r0, r4, r26
	mtctr    r0
	cmplw    r4, r26
	bge      lbl_800640F4
	li       r6, 0
	li       r5, 0x3d

lbl_800640A0:
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
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
	bdnz     lbl_800640A0

lbl_800640F4:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80064108
 * Size:	00003C
 */
void J3DTexMtx::load(unsigned long) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, j3dSys@ha
	stw      r0, 0x14(r1)
	addi     r5, r5, j3dSys@l
	lwz      r0, 0x34(r5)
	rlwinm.  r0, r0, 0, 1, 1
	beq      lbl_80064130
	bl       loadPostTexMtx__9J3DTexMtxCFUl
	b        lbl_80064134

lbl_80064130:
	bl       loadTexMtx__9J3DTexMtxCFUl

lbl_80064134:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80064144
 * Size:	000064
 */
void J3DTexMtx::loadTexMtx(unsigned long) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r5)
	lwz      r0, 0xc(r5)
	addi     r3, r3, 0x35
	cmplw    r3, r0
	ble      lbl_8006417C
	bl       GDOverflowed

lbl_8006417C:
	mulli    r4, r31, 3
	lbz      r5, 0(r30)
	addi     r3, r30, 0x64
	addi     r4, r4, 0x1e
	bl       J3DGDLoadTexMtxImm__FPA4_fUl13_GXTexMtxType
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800641A8
 * Size:	000580
 */
void J3DGDLoadTexMtxImm(float (*)[4], unsigned long, _GXTexMtxType)
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

/*
 * --INFO--
 * Address:	80064728
 * Size:	000060
 */
void J3DTexMtx::loadPostTexMtx(unsigned long) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r5, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r5)
	lwz      r0, 0xc(r5)
	addi     r3, r3, 0x35
	cmplw    r3, r0
	ble      lbl_80064760
	bl       GDOverflowed

lbl_80064760:
	mulli    r4, r31, 3
	addi     r3, r30, 0x64
	addi     r4, r4, 0x40
	bl       J3DGDLoadPostTexMtxImm__FPA4_fUl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80064788
 * Size:	00056C
 */
void J3DGDLoadPostTexMtxImm(float (*)[4], unsigned long)
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

/*
 * --INFO--
 * Address:	80064CF4
 * Size:	000020
 */
void J3DTexMtx::calc(const float (*)[4])
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       calcTexMtx__9J3DTexMtxFPA4_Cf
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80064D14
 * Size:	0002EC
 */
void J3DTexMtx::calcTexMtx(const float (*)[4])
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stw      r31, 0x8c(r1)
	mr       r31, r4
	stw      r30, 0x88(r1)
	mr       r30, r3
	lbz      r3, 1(r3)
	clrlwi   r0, r3, 0x1a
	rlwinm   r4, r3, 0x19, 0x1f, 0x1f
	cmplwi   r0, 0xb
	bgt      lbl_80064FB8
	lis      r3, lbl_804A1870@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804A1870@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80064D5C

lbl_80064D5C:
	cmplwi   r4, 0
	bne      lbl_80064D78
	addi     r3, r30, 0x10
	addi     r4, r30, 4
	addi     r5, r1, 8
	bl       J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_80064D8C

lbl_80064D78:
	cmplwi   r4, 1
	bne      lbl_80064D8C
	addi     r3, r30, 0x10
	addi     r4, r1, 8
	bl       J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f

lbl_80064D8C:
	lis      r4, qMtx$1682@ha
	addi     r3, r1, 8
	addi     r4, r4, qMtx$1682@l
	mr       r5, r3
	bl       PSMTXConcat
	addi     r3, r1, 8
	addi     r4, r30, 0x24
	addi     r5, r1, 0x48
	bl       J3DMtxProjConcat__FPA4_fPA4_fPA4_f
	mr       r4, r31
	addi     r3, r1, 0x48
	addi     r5, r30, 0x64
	bl       PSMTXConcat
	b        lbl_80064FE8
	.global  lbl_80064DC4

lbl_80064DC4:
	cmplwi   r4, 0
	bne      lbl_80064DE0
	addi     r3, r30, 0x10
	addi     r4, r30, 4
	addi     r5, r1, 0x48
	bl       J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_80064DF4

lbl_80064DE0:
	cmplwi   r4, 1
	bne      lbl_80064DF4
	addi     r3, r30, 0x10
	addi     r4, r1, 0x48
	bl       J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f

lbl_80064DF4:
	lis      r4, qMtx$1682@ha
	addi     r3, r1, 0x48
	addi     r4, r4, qMtx$1682@l
	mr       r5, r3
	bl       PSMTXConcat
	mr       r4, r31
	addi     r3, r1, 0x48
	addi     r5, r30, 0x64
	bl       PSMTXConcat
	b        lbl_80064FE8
	.global  lbl_80064E1C

lbl_80064E1C:
	cmplwi   r4, 0
	bne      lbl_80064E38
	addi     r3, r30, 0x10
	addi     r4, r30, 4
	addi     r5, r1, 8
	bl       J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_80064E4C

lbl_80064E38:
	cmplwi   r4, 1
	bne      lbl_80064E4C
	addi     r3, r30, 0x10
	addi     r4, r1, 8
	bl       J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f

lbl_80064E4C:
	lis      r4, qMtx2$1683@ha
	addi     r3, r1, 8
	addi     r4, r4, qMtx2$1683@l
	mr       r5, r3
	bl       PSMTXConcat
	addi     r3, r1, 8
	addi     r4, r30, 0x24
	addi     r5, r1, 0x48
	bl       J3DMtxProjConcat__FPA4_fPA4_fPA4_f
	mr       r4, r31
	addi     r3, r1, 0x48
	addi     r5, r30, 0x64
	bl       PSMTXConcat
	b        lbl_80064FE8
	.global  lbl_80064E84

lbl_80064E84:
	cmplwi   r4, 0
	bne      lbl_80064EA0
	addi     r3, r30, 0x10
	addi     r4, r30, 4
	addi     r5, r1, 0x48
	bl       J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_80064EB4

lbl_80064EA0:
	cmplwi   r4, 1
	bne      lbl_80064EB4
	addi     r3, r30, 0x10
	addi     r4, r1, 0x48
	bl       J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f

lbl_80064EB4:
	lis      r4, qMtx2$1683@ha
	addi     r3, r1, 0x48
	addi     r4, r4, qMtx2$1683@l
	mr       r5, r3
	bl       PSMTXConcat
	mr       r4, r31
	addi     r3, r1, 0x48
	addi     r5, r30, 0x64
	bl       PSMTXConcat
	b        lbl_80064FE8
	.global  lbl_80064EDC

lbl_80064EDC:
	cmplwi   r4, 0
	bne      lbl_80064EF8
	addi     r3, r30, 0x10
	addi     r4, r30, 4
	addi     r5, r1, 0x48
	bl       J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_80064F0C

lbl_80064EF8:
	cmplwi   r4, 1
	bne      lbl_80064F0C
	addi     r3, r30, 0x10
	addi     r4, r1, 0x48
	bl       J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f

lbl_80064F0C:
	mr       r4, r31
	addi     r3, r1, 0x48
	addi     r5, r30, 0x64
	bl       PSMTXConcat
	b        lbl_80064FE8
	.global  lbl_80064F20

lbl_80064F20:
	cmplwi   r4, 0
	bne      lbl_80064F3C
	addi     r3, r30, 0x10
	addi     r4, r30, 4
	addi     r5, r1, 8
	bl       J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_80064F50

lbl_80064F3C:
	cmplwi   r4, 1
	bne      lbl_80064F50
	addi     r3, r30, 0x10
	addi     r4, r1, 8
	bl       J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f

lbl_80064F50:
	addi     r3, r1, 8
	addi     r4, r30, 0x24
	addi     r5, r1, 0x48
	bl       J3DMtxProjConcat__FPA4_fPA4_fPA4_f
	mr       r4, r31
	addi     r3, r1, 0x48
	addi     r5, r30, 0x64
	bl       PSMTXConcat
	b        lbl_80064FE8
	.global  lbl_80064F74

lbl_80064F74:
	cmplwi   r4, 0
	bne      lbl_80064F90
	addi     r3, r30, 0x10
	addi     r4, r30, 4
	addi     r5, r1, 8
	bl       J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_80064FA4

lbl_80064F90:
	cmplwi   r4, 1
	bne      lbl_80064FA4
	addi     r3, r30, 0x10
	addi     r4, r1, 8
	bl       J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f

lbl_80064FA4:
	addi     r3, r1, 8
	addi     r4, r30, 0x24
	addi     r5, r30, 0x64
	bl       J3DMtxProjConcat__FPA4_fPA4_fPA4_f
	b        lbl_80064FE8
	.global  lbl_80064FB8

lbl_80064FB8:
	cmplwi   r4, 0
	bne      lbl_80064FD4
	addi     r3, r30, 0x10
	addi     r4, r30, 4
	addi     r5, r30, 0x64
	bl       J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_80064FE8

lbl_80064FD4:
	cmplwi   r4, 1
	bne      lbl_80064FE8
	addi     r3, r30, 0x10
	addi     r4, r30, 0x64
	bl       J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f

lbl_80064FE8:
	lwz      r0, 0x94(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80065000
 * Size:	000358
 */
void J3DTexMtx::calcPostTexMtx(const float (*)[4])
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stw      r31, 0x8c(r1)
	mr       r31, r3
	stw      r30, 0x88(r1)
	mr       r30, r4
	lbz      r3, 1(r3)
	clrlwi   r0, r3, 0x1a
	rlwinm   r4, r3, 0x19, 0x1f, 0x1f
	cmplwi   r0, 0xb
	bgt      lbl_80065310
	lis      r3, lbl_804A1900@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804A1900@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80065048

lbl_80065048:
	cmplwi   r4, 0
	bne      lbl_80065064
	addi     r3, r31, 0x10
	addi     r4, r31, 4
	addi     r5, r1, 8
	bl       J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_80065078

lbl_80065064:
	cmplwi   r4, 1
	bne      lbl_80065078
	addi     r3, r31, 0x10
	addi     r4, r1, 8
	bl       J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f

lbl_80065078:
	lis      r4, qMtx$1744@ha
	addi     r3, r1, 8
	addi     r4, r4, qMtx$1744@l
	mr       r5, r3
	bl       PSMTXConcat
	addi     r3, r1, 8
	addi     r4, r31, 0x24
	addi     r5, r1, 0x48
	bl       J3DMtxProjConcat__FPA4_fPA4_fPA4_f
	mr       r4, r30
	addi     r3, r1, 0x48
	addi     r5, r31, 0x64
	bl       PSMTXConcat
	b        lbl_80065340
	.global  lbl_800650B0

lbl_800650B0:
	cmplwi   r4, 0
	bne      lbl_800650CC
	addi     r3, r31, 0x10
	addi     r4, r31, 4
	addi     r5, r1, 8
	bl       J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_800650E0

lbl_800650CC:
	cmplwi   r4, 1
	bne      lbl_800650E0
	addi     r3, r31, 0x10
	addi     r4, r1, 8
	bl       J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f

lbl_800650E0:
	lis      r4, qMtx$1744@ha
	addi     r3, r1, 8
	addi     r4, r4, qMtx$1744@l
	mr       r5, r3
	bl       PSMTXConcat
	addi     r3, r1, 8
	addi     r4, r31, 0x24
	addi     r5, r31, 0x64
	bl       J3DMtxProjConcat__FPA4_fPA4_fPA4_f
	b        lbl_80065340
	.global  lbl_80065108

lbl_80065108:
	cmplwi   r4, 0
	bne      lbl_80065124
	addi     r3, r31, 0x10
	addi     r4, r31, 4
	addi     r5, r1, 0x48
	bl       J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_80065138

lbl_80065124:
	cmplwi   r4, 1
	bne      lbl_80065138
	addi     r3, r31, 0x10
	addi     r4, r1, 0x48
	bl       J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f

lbl_80065138:
	lis      r4, qMtx$1744@ha
	addi     r3, r1, 0x48
	addi     r4, r4, qMtx$1744@l
	addi     r5, r31, 0x64
	bl       PSMTXConcat
	b        lbl_80065340
	.global  lbl_80065150

lbl_80065150:
	cmplwi   r4, 0
	bne      lbl_8006516C
	addi     r3, r31, 0x10
	addi     r4, r31, 4
	addi     r5, r1, 8
	bl       J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_80065180

lbl_8006516C:
	cmplwi   r4, 1
	bne      lbl_80065180
	addi     r3, r31, 0x10
	addi     r4, r1, 8
	bl       J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f

lbl_80065180:
	lis      r4, qMtx2$1745@ha
	addi     r3, r1, 8
	addi     r4, r4, qMtx2$1745@l
	mr       r5, r3
	bl       PSMTXConcat
	addi     r3, r1, 8
	addi     r4, r31, 0x24
	addi     r5, r1, 0x48
	bl       J3DMtxProjConcat__FPA4_fPA4_fPA4_f
	mr       r4, r30
	addi     r3, r1, 0x48
	addi     r5, r31, 0x64
	bl       PSMTXConcat
	b        lbl_80065340
	.global  lbl_800651B8

lbl_800651B8:
	cmplwi   r4, 0
	bne      lbl_800651D4
	addi     r3, r31, 0x10
	addi     r4, r31, 4
	addi     r5, r1, 0x48
	bl       J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_800651E8

lbl_800651D4:
	cmplwi   r4, 1
	bne      lbl_800651E8
	addi     r3, r31, 0x10
	addi     r4, r1, 0x48
	bl       J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f

lbl_800651E8:
	lis      r4, qMtx2$1745@ha
	addi     r3, r1, 0x48
	addi     r4, r4, qMtx2$1745@l
	addi     r5, r31, 0x64
	bl       PSMTXConcat
	b        lbl_80065340
	.global  lbl_80065200

lbl_80065200:
	cmplwi   r4, 0
	bne      lbl_8006521C
	addi     r3, r31, 0x10
	addi     r4, r31, 4
	addi     r5, r31, 0x64
	bl       J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_80065340

lbl_8006521C:
	cmplwi   r4, 1
	bne      lbl_80065340
	addi     r3, r31, 0x10
	addi     r4, r31, 0x64
	bl       J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f
	b        lbl_80065340
	.global  lbl_80065234

lbl_80065234:
	cmplwi   r4, 0
	bne      lbl_80065250
	addi     r3, r31, 0x10
	addi     r4, r31, 4
	addi     r5, r1, 8
	bl       J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_80065264

lbl_80065250:
	cmplwi   r4, 1
	bne      lbl_80065264
	addi     r3, r31, 0x10
	addi     r4, r1, 8
	bl       J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f

lbl_80065264:
	addi     r3, r1, 8
	addi     r4, r31, 0x24
	addi     r5, r1, 0x48
	bl       J3DMtxProjConcat__FPA4_fPA4_fPA4_f
	mr       r4, r30
	addi     r3, r1, 0x48
	addi     r5, r31, 0x64
	bl       PSMTXConcat
	b        lbl_80065340
	.global  lbl_80065288

lbl_80065288:
	cmplwi   r4, 0
	bne      lbl_800652A4
	addi     r3, r31, 0x10
	addi     r4, r31, 4
	addi     r5, r1, 8
	bl       J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_800652B8

lbl_800652A4:
	cmplwi   r4, 1
	bne      lbl_800652B8
	addi     r3, r31, 0x10
	addi     r4, r1, 8
	bl       J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f

lbl_800652B8:
	addi     r3, r1, 8
	addi     r4, r31, 0x24
	addi     r5, r31, 0x64
	bl       J3DMtxProjConcat__FPA4_fPA4_fPA4_f
	b        lbl_80065340
	.global  lbl_800652CC

lbl_800652CC:
	cmplwi   r4, 0
	bne      lbl_800652E8
	addi     r3, r31, 0x10
	addi     r4, r31, 4
	addi     r5, r1, 8
	bl       J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_800652FC

lbl_800652E8:
	cmplwi   r4, 1
	bne      lbl_800652FC
	addi     r3, r31, 0x10
	addi     r4, r1, 8
	bl       J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f

lbl_800652FC:
	addi     r3, r1, 8
	addi     r4, r31, 0x24
	addi     r5, r31, 0x64
	bl       J3DMtxProjConcat__FPA4_fPA4_fPA4_f
	b        lbl_80065340
	.global  lbl_80065310

lbl_80065310:
	cmplwi   r4, 0
	bne      lbl_8006532C
	addi     r3, r31, 0x10
	addi     r4, r31, 4
	addi     r5, r31, 0x64
	bl       J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_80065340

lbl_8006532C:
	cmplwi   r4, 1
	bne      lbl_80065340
	addi     r3, r31, 0x10
	addi     r4, r31, 0x64
	bl       J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f

lbl_80065340:
	lwz      r0, 0x94(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80065358
 * Size:	000024
 */
void isTexNoReg(void*)
{
	/*
	lbz      r0, 1(r3)
	cmplwi   r0, 0x80
	blt      lbl_80065374
	cmplwi   r0, 0xbb
	bgt      lbl_80065374
	li       r3, 1
	blr

lbl_80065374:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006537C
 * Size:	00000C
 */
void getTexNoReg(void*)
{
	/*
	lwz      r0, 1(r3)
	clrlwi   r3, r0, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80065388
 * Size:	0001B8
 */
void loadTexNo(unsigned long, const unsigned short&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, j3dSys@ha
	stw      r0, 0x34(r1)
	lhz      r0, 0(r4)
	addi     r4, r5, j3dSys@l
	stw      r31, 0x2c(r1)
	slwi     r0, r0, 5
	stw      r30, 0x28(r1)
	mr       r30, r3
	lis      r3, sTexCoordScaleTable__6J3DSys@ha
	stw      r29, 0x24(r1)
	slwi     r6, r30, 3
	stw      r28, 0x20(r1)
	lwz      r4, 0x58(r4)
	lwz      r7, __GDCurrentDL@sda21(r13)
	lwz      r5, 4(r4)
	addi     r4, r3, sTexCoordScaleTable__6J3DSys@l
	add      r3, r4, r6
	add      r31, r5, r0
	lhz      r0, 2(r31)
	sthx     r0, r4, r6
	lhz      r0, 4(r31)
	sth      r0, 2(r3)
	lwz      r3, 8(r7)
	lwz      r0, 0xc(r7)
	addi     r3, r3, 0x14
	cmplw    r3, r0
	ble      lbl_80065400
	bl       GDOverflowed

lbl_80065400:
	lwz      r0, 0x1c(r31)
	mr       r3, r30
	add      r4, r31, r0
	bl       J3DGDSetTexImgPtr__F11_GXTexMapIDPv
	lbz      r0, 0(r31)
	mr       r3, r30
	lhz      r4, 2(r31)
	lhz      r5, 4(r31)
	clrlwi   r6, r0, 0x1c
	bl       J3DGDSetTexImgAttr__F11_GXTexMapIDUsUs9_GXTexFmt
	lbz      r6, 0x16(r31)
	lis      r5, 0x4330
	lbz      r4, 0x17(r31)
	mr       r3, r30
	lha      r0, 0x1a(r31)
	extsb    r6, r6
	extsb    r4, r4
	stw      r5, 8(r1)
	xoris    r6, r6, 0x8000
	xoris    r0, r0, 0x8000
	xoris    r4, r4, 0x8000
	stw      r6, 0xc(r1)
	lfd      f4, lbl_805169B8@sda21(r2)
	lfd      f0, 8(r1)
	stw      r4, 0x14(r1)
	fsubs    f1, f0, f4
	lfs      f5, lbl_805169B0@sda21(r2)
	stw      r5, 0x10(r1)
	lfs      f3, lbl_805169B4@sda21(r2)
	lfd      f0, 0x10(r1)
	fmuls    f1, f5, f1
	stw      r0, 0x1c(r1)
	fsubs    f2, f0, f4
	lbz      r4, 6(r31)
	stw      r5, 0x18(r1)
	lbz      r5, 7(r31)
	lfd      f0, 0x18(r1)
	fmuls    f2, f5, f2
	lbz      r6, 0x14(r31)
	fsubs    f0, f0, f4
	lbz      r7, 0x15(r31)
	lbz      r8, 0x12(r31)
	lbz      r9, 0x11(r31)
	fmuls    f3, f3, f0
	lbz      r10, 0x13(r31)
	bl
J3DGDSetTexLookupMode__F11_GXTexMapID14_GXTexWrapMode14_GXTexWrapMode12_GXTexFilter12_GXTexFilterfffUcUc13_GXAnisotropy
	lbz      r0, 8(r31)
	cmplwi   r0, 1
	bne      lbl_80065520
	lhz      r0, 0xa(r31)
	li       r29, 1
	cmplwi   r0, 0x10
	ble      lbl_800654D8
	li       r29, 0x10

lbl_800654D8:
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	lwz      r0, 0xc(r4)
	addi     r3, r3, 0x14
	cmplw    r3, r0
	ble      lbl_800654F4
	bl       GDOverflowed

lbl_800654F4:
	slwi     r3, r30, 0xd
	lwz      r0, 0xc(r31)
	addis    r28, r3, 0xf
	mr       r5, r29
	mr       r4, r28
	add      r3, r31, r0
	bl       J3DGDLoadTlut__FPvUl11_GXTlutSize
	lbz      r5, 9(r31)
	mr       r3, r30
	mr       r4, r28
	bl       J3DGDSetTexTlut__F11_GXTexMapIDUl10_GXTlutFmt

lbl_80065520:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80065540
 * Size:	000024
 */
void patchTexNo_PtrToIdx(unsigned long, const unsigned short&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lhz      r4, 0(r4)
	stw      r0, 0x14(r1)
	bl       J3DGDSetTexImgPtrRaw__F11_GXTexMapIDUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80065564
 * Size:	000034
 */
void loadNBTScale(J3DNBTScale&)
{
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

/*
 * --INFO--
 * Address:	80065598
 * Size:	000160
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

/*
 * --INFO--
 * Address:	800656F8
 * Size:	000130
 */
void makeAlphaCmpTable()
{
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

/*
 * --INFO--
 * Address:	80065828
 * Size:	000138
 */
void makeZModeTable()
{
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

/*
 * --INFO--
 * Address:	80065960
 * Size:	000044
 */
void makeTevSwapTable()
{
	/*
	lis      r3, j3dTevSwapTableTable@ha
	li       r6, 0
	addi     r0, r3, j3dTevSwapTableTable@l
	mr       r5, r0

lbl_80065970:
	srawi    r0, r6, 6
	rlwinm   r4, r6, 0x1c, 0x1e, 0x1f
	stb      r0, 0(r5)
	rlwinm   r3, r6, 0x1e, 0x1e, 0x1f
	clrlwi   r0, r6, 0x1e
	addi     r6, r6, 1
	stb      r4, 1(r5)
	cmpwi    r6, 0x100
	stb      r3, 2(r5)
	stb      r0, 3(r5)
	addi     r5, r5, 4
	blt      lbl_80065970
	blr
	*/
}
