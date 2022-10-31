#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DAnmLoader.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__20J2DAnmFullLoader_v15
    __vt__20J2DAnmFullLoader_v15:
        .4byte 0
        .4byte 0
        .4byte load__20J2DAnmFullLoader_v15FPCv
        .4byte setResource__20J2DAnmFullLoader_v15FP10J2DAnmBasePCv
        .4byte __dt__20J2DAnmFullLoader_v15Fv
    .global __vt__19J2DAnmKeyLoader_v15
    __vt__19J2DAnmKeyLoader_v15:
        .4byte 0
        .4byte 0
        .4byte load__19J2DAnmKeyLoader_v15FPCv
        .4byte setResource__19J2DAnmKeyLoader_v15FP10J2DAnmBasePCv
        .4byte __dt__19J2DAnmKeyLoader_v15Fv
    .global __vt__12J2DAnmLoader
    __vt__12J2DAnmLoader:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte __dt__12J2DAnmLoaderFv
    .global __vt__20J2DAnmVisibilityFull
    __vt__20J2DAnmVisibilityFull:
        .4byte 0
        .4byte 0
        .4byte __dt__20J2DAnmVisibilityFullFv
        .4byte searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen
    .global __vt__14J2DAnmVtxColor
    __vt__14J2DAnmVtxColor:
        .4byte 0
        .4byte 0
        .4byte __dt__14J2DAnmVtxColorFv
        .4byte searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen
        .4byte getColor__14J2DAnmVtxColorCFUcUsP8_GXColor
    .global __vt__15J2DAnmTransform
    __vt__15J2DAnmTransform:
        .4byte 0
        .4byte 0
        .4byte __dt__15J2DAnmTransformFv
        .4byte searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen
        .4byte getTransform__15J2DAnmTransformCFUsP16J3DTransformInfo
    .global __vt__10J2DAnmBase
    __vt__10J2DAnmBase:
        .4byte 0
        .4byte 0
        .4byte __dt__10J2DAnmBaseFv
        .4byte searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805168C0
    lbl_805168C0:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8004791C
 * Size:	00079C
 */
J2DAnmBase* J2DAnmLoaderDataBase::load(const void*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	or.      r31, r3, r3
	stw      r30, 0x58(r1)
	bne      lbl_80047940
	li       r3, 0
	b        lbl_800480A0

lbl_80047940:
	lwz      r3, 0(r31)
	addis    r0, r3, 0xb5cd
	cmplwi   r0, 0x4431
	bne      lbl_8004809C
	lis      r3, 0x62726B31@ha
	lwz      r5, 4(r31)
	addi     r0, r3, 0x62726B31@l
	cmpw     r5, r0
	beq      lbl_80047C44
	bge      lbl_800479D4
	lis      r4, 0x626C6B31@ha
	addi     r0, r4, 0x626C6B31@l
	cmpw     r5, r0
	beq      lbl_80047B70
	bge      lbl_800479B0
	lis      r3, 0x62636B31@ha
	addi     r0, r3, 0x62636B31@l
	cmpw     r5, r0
	beq      lbl_80047A30
	bge      lbl_800479A0
	addi     r0, r3, 0x6131
	cmpw     r5, r0
	beq      lbl_80047DAC
	b        lbl_80048094

lbl_800479A0:
	addi     r0, r4, 0x6131
	cmpw     r5, r0
	beq      lbl_80047FF8
	b        lbl_80048094

lbl_800479B0:
	lis      r3, 0x62706B31@ha
	addi     r0, r3, 0x62706B31@l
	cmpw     r5, r0
	beq      lbl_80047ABC
	bge      lbl_80048094
	addi     r0, r3, 0x6131
	cmpw     r5, r0
	beq      lbl_80047E34
	b        lbl_80048094

lbl_800479D4:
	lis      r3, 0x62766131@ha
	addi     r0, r3, 0x62766131@l
	cmpw     r5, r0
	beq      lbl_80047F78
	bge      lbl_80047A0C
	lis      r3, 0x62747031@ha
	addi     r0, r3, 0x62747031@l
	cmpw     r5, r0
	beq      lbl_80047EE8
	bge      lbl_80048094
	addi     r0, r3, 0x6b31
	cmpw     r5, r0
	beq      lbl_80047B78
	b        lbl_80048094

lbl_80047A0C:
	lis      r3, 0x62786B31@ha
	addi     r0, r3, 0x62786B31@l
	cmpw     r5, r0
	beq      lbl_80047D18
	bge      lbl_80048094
	addi     r0, r3, 0x6131
	cmpw     r5, r0
	beq      lbl_80048000
	b        lbl_80048094

lbl_80047A30:
	addi     r3, r1, 0x50
	bl       __ct__19J2DAnmKeyLoader_v15Fv
	li       r3, 0x2c
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80047A94
	lis      r4, __vt__10J2DAnmBase@ha
	lis      r5, __vt__15J2DAnmTransform@ha
	addi     r0, r4, __vt__10J2DAnmBase@l
	lis      r4, __vt__18J2DAnmTransformKey@ha
	stw      r0, 0(r3)
	li       r6, 0
	lfs      f0, lbl_805168C0@sda21(r2)
	addi     r5, r5, __vt__15J2DAnmTransform@l
	addi     r0, r4, __vt__18J2DAnmTransformKey@l
	stfs     f0, 8(r3)
	sth      r6, 6(r3)
	stw      r5, 0(r3)
	stw      r6, 0x10(r3)
	stw      r6, 0x14(r3)
	stw      r6, 0x18(r3)
	stw      r6, 0xc(r3)
	stw      r0, 0(r3)
	stw      r6, 0x24(r3)
	stw      r6, 0x28(r3)

lbl_80047A94:
	stw      r3, 0x54(r1)
	mr       r4, r31
	addi     r3, r1, 0x50
	bl       load__19J2DAnmKeyLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x50
	li       r4, -1
	bl       __dt__19J2DAnmKeyLoader_v15Fv
	mr       r3, r31
	b        lbl_800480A0

lbl_80047ABC:
	addi     r3, r1, 0x48
	bl       __ct__19J2DAnmKeyLoader_v15Fv
	li       r3, 0x44
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80047B48
	lis      r3, __vt__10J2DAnmBase@ha
	lfs      f0, lbl_805168C0@sda21(r2)
	addi     r0, r3, __vt__10J2DAnmBase@l
	li       r4, 0
	stw      r0, 0(r30)
	lis      r3, __vt__11J2DAnmColor@ha
	addi     r0, r3, __vt__11J2DAnmColor@l
	stfs     f0, 8(r30)
	addi     r3, r30, 0x20
	sth      r4, 6(r30)
	stw      r0, 0(r30)
	bl       __ct__10JUTNameTabFv
	li       r5, 0
	lis      r3, __vt__14J2DAnmColorKey@ha
	sth      r5, 0x16(r30)
	li       r4, 1
	addi     r0, r3, __vt__14J2DAnmColorKey@l
	sth      r5, 0x14(r30)
	sth      r5, 0x12(r30)
	sth      r5, 0x10(r30)
	sth      r5, 0x18(r30)
	stw      r5, 0x1c(r30)
	stw      r4, 0xc(r30)
	stw      r0, 0(r30)
	stw      r5, 0x30(r30)
	stw      r5, 0x34(r30)
	stw      r5, 0x38(r30)
	stw      r5, 0x3c(r30)
	stw      r5, 0x40(r30)

lbl_80047B48:
	stw      r30, 0x4c(r1)
	mr       r4, r31
	addi     r3, r1, 0x48
	bl       load__19J2DAnmKeyLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x48
	li       r4, -1
	bl       __dt__19J2DAnmKeyLoader_v15Fv
	mr       r3, r31
	b        lbl_800480A0

lbl_80047B70:
	li       r3, 0
	b        lbl_800480A0

lbl_80047B78:
	addi     r3, r1, 0x40
	bl       __ct__19J2DAnmKeyLoader_v15Fv
	li       r3, 0x88
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80047C1C
	lis      r3, __vt__10J2DAnmBase@ha
	lfs      f0, lbl_805168C0@sda21(r2)
	addi     r0, r3, __vt__10J2DAnmBase@l
	li       r4, 0
	stw      r0, 0(r30)
	lis      r3, __vt__19J2DAnmTextureSRTKey@ha
	addi     r0, r3, __vt__19J2DAnmTextureSRTKey@l
	stfs     f0, 8(r30)
	addi     r3, r30, 0x38
	sth      r4, 6(r30)
	stw      r0, 0(r30)
	bl       __ct__10JUTNameTabFv
	addi     r3, r30, 0x70
	bl       __ct__10JUTNameTabFv
	li       r3, 0
	li       r0, 4
	stw      r3, 0x10(r30)
	sth      r3, 0x20(r30)
	sth      r3, 0x1e(r30)
	sth      r3, 0x1c(r30)
	sth      r3, 0x14(r30)
	stw      r3, 0x18(r30)
	stw      r3, 0x2c(r30)
	stw      r3, 0x24(r30)
	stw      r3, 0x28(r30)
	sth      r3, 0x50(r30)
	sth      r3, 0x4e(r30)
	sth      r3, 0x4c(r30)
	sth      r3, 0x60(r30)
	stw      r3, 0x64(r30)
	stw      r3, 0x5c(r30)
	stw      r3, 0x54(r30)
	stw      r3, 0x58(r30)
	stw      r3, 0x84(r30)
	stw      r0, 0xc(r30)

lbl_80047C1C:
	stw      r30, 0x44(r1)
	mr       r4, r31
	addi     r3, r1, 0x40
	bl       load__19J2DAnmKeyLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x40
	li       r4, -1
	bl       __dt__19J2DAnmKeyLoader_v15Fv
	mr       r3, r31
	b        lbl_800480A0

lbl_80047C44:
	addi     r3, r1, 0x38
	bl       __ct__19J2DAnmKeyLoader_v15Fv
	li       r3, 0x74
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80047CF0
	lis      r3, __vt__10J2DAnmBase@ha
	lfs      f0, lbl_805168C0@sda21(r2)
	addi     r0, r3, __vt__10J2DAnmBase@l
	li       r4, 0
	stw      r0, 0(r30)
	lis      r3, __vt__15J2DAnmTevRegKey@ha
	addi     r0, r3, __vt__15J2DAnmTevRegKey@l
	stfs     f0, 8(r30)
	addi     r3, r30, 0x28
	sth      r4, 6(r30)
	stw      r0, 0(r30)
	bl       __ct__10JUTNameTabFv
	addi     r3, r30, 0x3c
	bl       __ct__10JUTNameTabFv
	li       r3, 0
	li       r0, 5
	sth      r3, 0x12(r30)
	sth      r3, 0x10(r30)
	sth      r3, 0x1a(r30)
	sth      r3, 0x18(r30)
	sth      r3, 0x16(r30)
	sth      r3, 0x14(r30)
	sth      r3, 0x22(r30)
	sth      r3, 0x20(r30)
	sth      r3, 0x1e(r30)
	sth      r3, 0x1c(r30)
	stw      r3, 0x38(r30)
	stw      r3, 0x24(r30)
	stw      r3, 0x60(r30)
	stw      r3, 0x5c(r30)
	stw      r3, 0x58(r30)
	stw      r3, 0x54(r30)
	stw      r3, 0x70(r30)
	stw      r3, 0x6c(r30)
	stw      r3, 0x68(r30)
	stw      r3, 0x64(r30)
	stw      r0, 0xc(r30)

lbl_80047CF0:
	stw      r30, 0x3c(r1)
	mr       r4, r31
	addi     r3, r1, 0x38
	bl       load__19J2DAnmKeyLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x38
	li       r4, -1
	bl       __dt__19J2DAnmKeyLoader_v15Fv
	mr       r3, r31
	b        lbl_800480A0

lbl_80047D18:
	addi     r3, r1, 0x30
	bl       __ct__19J2DAnmKeyLoader_v15Fv
	li       r3, 0x3c
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80047D84
	lis      r4, __vt__10J2DAnmBase@ha
	lis      r5, __vt__14J2DAnmVtxColor@ha
	addi     r0, r4, __vt__10J2DAnmBase@l
	lis      r4, __vt__17J2DAnmVtxColorKey@ha
	stw      r0, 0(r3)
	li       r7, 0
	lfs      f0, lbl_805168C0@sda21(r2)
	addi     r6, r5, __vt__14J2DAnmVtxColor@l
	li       r5, 7
	addi     r0, r4, __vt__17J2DAnmVtxColorKey@l
	stfs     f0, 8(r3)
	sth      r7, 6(r3)
	stw      r6, 0(r3)
	stw      r5, 0xc(r3)
	sth      r7, 0x10(r3)
	sth      r7, 0x12(r3)
	stw      r7, 0x14(r3)
	stw      r7, 0x18(r3)
	stw      r0, 0(r3)
	stw      r7, 0x24(r3)
	stw      r7, 0x28(r3)

lbl_80047D84:
	stw      r3, 0x34(r1)
	mr       r4, r31
	addi     r3, r1, 0x30
	bl       load__19J2DAnmKeyLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x30
	li       r4, -1
	bl       __dt__19J2DAnmKeyLoader_v15Fv
	mr       r3, r31
	b        lbl_800480A0

lbl_80047DAC:
	addi     r3, r1, 0x28
	bl       __ct__20J2DAnmFullLoader_v15Fv
	li       r3, 0x28
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80047E0C
	lis      r4, __vt__10J2DAnmBase@ha
	lis      r5, __vt__15J2DAnmTransform@ha
	addi     r0, r4, __vt__10J2DAnmBase@l
	lis      r4, __vt__19J2DAnmTransformFull@ha
	stw      r0, 0(r3)
	li       r6, 0
	lfs      f0, lbl_805168C0@sda21(r2)
	addi     r5, r5, __vt__15J2DAnmTransform@l
	addi     r0, r4, __vt__19J2DAnmTransformFull@l
	stfs     f0, 8(r3)
	sth      r6, 6(r3)
	stw      r5, 0(r3)
	stw      r6, 0x10(r3)
	stw      r6, 0x14(r3)
	stw      r6, 0x18(r3)
	stw      r6, 0xc(r3)
	stw      r0, 0(r3)
	stw      r6, 0x24(r3)

lbl_80047E0C:
	stw      r3, 0x2c(r1)
	mr       r4, r31
	addi     r3, r1, 0x28
	bl       load__20J2DAnmFullLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x28
	li       r4, -1
	bl       __dt__20J2DAnmFullLoader_v15Fv
	mr       r3, r31
	b        lbl_800480A0

lbl_80047E34:
	addi     r3, r1, 0x20
	bl       __ct__20J2DAnmFullLoader_v15Fv
	li       r3, 0x44
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80047EC0
	lis      r3, __vt__10J2DAnmBase@ha
	lfs      f0, lbl_805168C0@sda21(r2)
	addi     r0, r3, __vt__10J2DAnmBase@l
	li       r4, 0
	stw      r0, 0(r30)
	lis      r3, __vt__11J2DAnmColor@ha
	addi     r0, r3, __vt__11J2DAnmColor@l
	stfs     f0, 8(r30)
	addi     r3, r30, 0x20
	sth      r4, 6(r30)
	stw      r0, 0(r30)
	bl       __ct__10JUTNameTabFv
	li       r5, 0
	lis      r3, __vt__15J2DAnmColorFull@ha
	sth      r5, 0x16(r30)
	li       r4, 1
	addi     r0, r3, __vt__15J2DAnmColorFull@l
	sth      r5, 0x14(r30)
	sth      r5, 0x12(r30)
	sth      r5, 0x10(r30)
	sth      r5, 0x18(r30)
	stw      r5, 0x1c(r30)
	stw      r4, 0xc(r30)
	stw      r0, 0(r30)
	stw      r5, 0x30(r30)
	stw      r5, 0x34(r30)
	stw      r5, 0x38(r30)
	stw      r5, 0x3c(r30)
	stw      r5, 0x40(r30)

lbl_80047EC0:
	stw      r30, 0x24(r1)
	mr       r4, r31
	addi     r3, r1, 0x20
	bl       load__20J2DAnmFullLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x20
	li       r4, -1
	bl       __dt__20J2DAnmFullLoader_v15Fv
	mr       r3, r31
	b        lbl_800480A0

lbl_80047EE8:
	addi     r3, r1, 0x18
	bl       __ct__20J2DAnmFullLoader_v15Fv
	li       r3, 0x34
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80047F50
	lis      r3, __vt__10J2DAnmBase@ha
	lfs      f0, lbl_805168C0@sda21(r2)
	addi     r0, r3, __vt__10J2DAnmBase@l
	li       r4, 0
	stw      r0, 0(r30)
	lis      r3, __vt__16J2DAnmTexPattern@ha
	addi     r0, r3, __vt__16J2DAnmTexPattern@l
	stfs     f0, 8(r30)
	addi     r3, r30, 0x20
	sth      r4, 6(r30)
	stw      r0, 0(r30)
	bl       __ct__10JUTNameTabFv
	li       r3, 0
	li       r0, 2
	stw      r3, 0x10(r30)
	stw      r3, 0x14(r30)
	stw      r0, 0xc(r30)
	sth      r3, 0x1a(r30)
	stw      r3, 0x1c(r30)
	stw      r3, 0x30(r30)

lbl_80047F50:
	stw      r30, 0x1c(r1)
	mr       r4, r31
	addi     r3, r1, 0x18
	bl       load__20J2DAnmFullLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x18
	li       r4, -1
	bl       __dt__20J2DAnmFullLoader_v15Fv
	mr       r3, r31
	b        lbl_800480A0

lbl_80047F78:
	addi     r3, r1, 0x10
	bl       __ct__20J2DAnmFullLoader_v15Fv
	li       r3, 0x1c
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80047FD0
	lis      r5, __vt__10J2DAnmBase@ha
	lis      r4, __vt__20J2DAnmVisibilityFull@ha
	addi     r0, r5, __vt__10J2DAnmBase@l
	lfs      f0, lbl_805168C0@sda21(r2)
	stw      r0, 0(r3)
	li       r5, 0
	addi     r4, r4, __vt__20J2DAnmVisibilityFull@l
	li       r0, 6
	stfs     f0, 8(r3)
	sth      r5, 6(r3)
	stw      r4, 0(r3)
	sth      r5, 0x10(r3)
	stw      r5, 0x14(r3)
	sth      r5, 0x12(r3)
	stw      r5, 0x18(r3)
	stw      r0, 0xc(r3)

lbl_80047FD0:
	stw      r3, 0x14(r1)
	mr       r4, r31
	addi     r3, r1, 0x10
	bl       load__20J2DAnmFullLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x10
	li       r4, -1
	bl       __dt__20J2DAnmFullLoader_v15Fv
	mr       r3, r31
	b        lbl_800480A0

lbl_80047FF8:
	li       r3, 0
	b        lbl_800480A0

lbl_80048000:
	addi     r3, r1, 8
	bl       __ct__20J2DAnmFullLoader_v15Fv
	li       r3, 0x3c
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8004806C
	lis      r4, __vt__10J2DAnmBase@ha
	lis      r5, __vt__14J2DAnmVtxColor@ha
	addi     r0, r4, __vt__10J2DAnmBase@l
	lis      r4, __vt__18J2DAnmVtxColorFull@ha
	stw      r0, 0(r3)
	li       r7, 0
	lfs      f0, lbl_805168C0@sda21(r2)
	addi     r6, r5, __vt__14J2DAnmVtxColor@l
	li       r5, 7
	addi     r0, r4, __vt__18J2DAnmVtxColorFull@l
	stfs     f0, 8(r3)
	sth      r7, 6(r3)
	stw      r6, 0(r3)
	stw      r5, 0xc(r3)
	sth      r7, 0x10(r3)
	sth      r7, 0x12(r3)
	stw      r7, 0x14(r3)
	stw      r7, 0x18(r3)
	stw      r0, 0(r3)
	stw      r7, 0x24(r3)
	stw      r7, 0x28(r3)

lbl_8004806C:
	stw      r3, 0xc(r1)
	mr       r4, r31
	addi     r3, r1, 8
	bl       load__20J2DAnmFullLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 8
	li       r4, -1
	bl       __dt__20J2DAnmFullLoader_v15Fv
	mr       r3, r31
	b        lbl_800480A0

lbl_80048094:
	li       r3, 0
	b        lbl_800480A0

lbl_8004809C:
	li       r3, 0

lbl_800480A0:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	800480B8
 * Size:	00005C
 */
J2DAnmVtxColor::~J2DAnmVtxColor()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_800480FC
	lis      r3, __vt__14J2DAnmVtxColor@ha
	addi     r0, r3, __vt__14J2DAnmVtxColor@l
	stw      r0, 0(r31)
	beq      lbl_800480EC
	lis      r3, __vt__10J2DAnmBase@ha
	addi     r0, r3, __vt__10J2DAnmBase@l
	stw      r0, 0(r31)

lbl_800480EC:
	extsh.   r0, r4
	ble      lbl_800480FC
	mr       r3, r31
	bl       __dl__FPv

lbl_800480FC:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80048114
 * Size:	000074
 */
J2DAnmColor::~J2DAnmColor()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80048170
	lis      r3, __vt__11J2DAnmColor@ha
	addic.   r0, r31, 0x20
	addi     r0, r3, __vt__11J2DAnmColor@l
	stw      r0, 0(r31)
	beq      lbl_8004814C
	lis      r3, __vt__10JUTNameTab@ha
	addi     r0, r3, __vt__10JUTNameTab@l
	stw      r0, 0x20(r31)

lbl_8004814C:
	cmplwi   r31, 0
	beq      lbl_80048160
	lis      r3, __vt__10J2DAnmBase@ha
	addi     r0, r3, __vt__10J2DAnmBase@l
	stw      r0, 0(r31)

lbl_80048160:
	extsh.   r0, r4
	ble      lbl_80048170
	mr       r3, r31
	bl       __dl__FPv

lbl_80048170:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80048188
 * Size:	00005C
 */
J2DAnmTransform::~J2DAnmTransform()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_800481CC
	lis      r3, __vt__15J2DAnmTransform@ha
	addi     r0, r3, __vt__15J2DAnmTransform@l
	stw      r0, 0(r31)
	beq      lbl_800481BC
	lis      r3, __vt__10J2DAnmBase@ha
	addi     r0, r3, __vt__10J2DAnmBase@l
	stw      r0, 0(r31)

lbl_800481BC:
	extsh.   r0, r4
	ble      lbl_800481CC
	mr       r3, r31
	bl       __dl__FPv

lbl_800481CC:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800481E4
 * Size:	000048
 */
J2DAnmBase::~J2DAnmBase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80048214
	lis      r5, __vt__10J2DAnmBase@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__10J2DAnmBase@l
	stw      r0, 0(r31)
	ble      lbl_80048214
	bl       __dl__FPv

lbl_80048214:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004822C
 * Size:	00001C
 */
J2DAnmKeyLoader_v15::J2DAnmKeyLoader_v15()
{
	/*
	lis      r5, __vt__12J2DAnmLoader@ha
	lis      r4, __vt__19J2DAnmKeyLoader_v15@ha
	addi     r5, r5, __vt__12J2DAnmLoader@l
	stw      r5, 0(r3)
	addi     r0, r4, __vt__19J2DAnmKeyLoader_v15@l
	stw      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80048248
 * Size:	000048
 */
J2DAnmLoader::~J2DAnmLoader()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80048278
	lis      r5, __vt__12J2DAnmLoader@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__12J2DAnmLoader@l
	stw      r0, 0(r31)
	ble      lbl_80048278
	bl       __dl__FPv

lbl_80048278:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80048290
 * Size:	00005C
 */
J2DAnmKeyLoader_v15::~J2DAnmKeyLoader_v15()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_800482D4
	lis      r3, __vt__19J2DAnmKeyLoader_v15@ha
	addi     r0, r3, __vt__19J2DAnmKeyLoader_v15@l
	stw      r0, 0(r31)
	beq      lbl_800482C4
	lis      r3, __vt__12J2DAnmLoader@ha
	addi     r0, r3, __vt__12J2DAnmLoader@l
	stw      r0, 0(r31)

lbl_800482C4:
	extsh.   r0, r4
	ble      lbl_800482D4
	mr       r3, r31
	bl       __dl__FPv

lbl_800482D4:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800482EC
 * Size:	000104
 */
void J2DAnmKeyLoader_v15::load(const void*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, 0x54524B31@ha
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	lwz      r31, 0xc(r4)
	addi     r29, r4, 0x20
	addi     r30, r5, 0x54524B31@l
	li       r28, 0
	b        lbl_800483D0

lbl_80048318:
	lwz      r4, 0(r29)
	cmpw     r4, r30
	beq      lbl_800483B8
	bge      lbl_80048350
	lis      r3, 0x50414B31@ha
	addi     r0, r3, 0x50414B31@l
	cmpw     r4, r0
	beq      lbl_80048388
	bge      lbl_800483C4
	lis      r3, 0x414E4B31@ha
	addi     r0, r3, 0x414E4B31@l
	cmpw     r4, r0
	beq      lbl_80048378
	b        lbl_800483C4

lbl_80048350:
	lis      r3, 0x56434B31@ha
	addi     r0, r3, 0x56434B31@l
	cmpw     r4, r0
	beq      lbl_800483A8
	bge      lbl_800483C4
	lis      r3, 0x54544B31@ha
	addi     r0, r3, 0x54544B31@l
	cmpw     r4, r0
	beq      lbl_80048398
	b        lbl_800483C4

lbl_80048378:
	mr       r3, r27
	mr       r4, r29
	bl       readAnmTransform__19J2DAnmKeyLoader_v15FPC22J3DAnmTransformKeyData
	b        lbl_800483C4

lbl_80048388:
	mr       r3, r27
	mr       r4, r29
	bl       readAnmColor__19J2DAnmKeyLoader_v15FPC18J3DAnmColorKeyData
	b        lbl_800483C4

lbl_80048398:
	mr       r3, r27
	mr       r4, r29
	bl readAnmTextureSRT__19J2DAnmKeyLoader_v15FPC23J3DAnmTextureSRTKeyData b
lbl_800483C4

lbl_800483A8:
	mr       r3, r27
	mr       r4, r29
	bl       readAnmVtxColor__19J2DAnmKeyLoader_v15FPC21J3DAnmVtxColorKeyData
	b        lbl_800483C4

lbl_800483B8:
	mr       r3, r27
	mr       r4, r29
	bl       readAnmTevReg__19J2DAnmKeyLoader_v15FPC19J3DAnmTevRegKeyData

lbl_800483C4:
	lwz      r0, 4(r29)
	addi     r28, r28, 1
	add      r29, r29, r0

lbl_800483D0:
	cmplw    r28, r31
	blt      lbl_80048318
	lwz      r3, 4(r27)
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800483F0
 * Size:	000154
 */
void J2DAnmKeyLoader_v15::setResource(J2DAnmBase*, const void*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, 0x54524B31@ha
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r27, r3
	lwz      r26, 0xc(r5)
	mr       r28, r4
	addi     r30, r5, 0x20
	addi     r31, r6, 0x54524B31@l
	li       r29, 0
	b        lbl_80048528

lbl_80048420:
	lwz      r4, 0(r30)
	cmpw     r4, r31
	beq      lbl_800484E0
	bge      lbl_80048458
	lis      r3, 0x50414B31@ha
	addi     r0, r3, 0x50414B31@l
	cmpw     r4, r0
	beq      lbl_800484A0
	bge      lbl_8004851C
	lis      r3, 0x414E4B31@ha
	addi     r0, r3, 0x414E4B31@l
	cmpw     r4, r0
	beq      lbl_80048480
	b        lbl_8004851C

lbl_80048458:
	lis      r3, 0x56434B31@ha
	addi     r0, r3, 0x56434B31@l
	cmpw     r4, r0
	beq      lbl_80048500
	bge      lbl_8004851C
	lis      r3, 0x54544B31@ha
	addi     r0, r3, 0x54544B31@l
	cmpw     r4, r0
	beq      lbl_800484C0
	b        lbl_8004851C

lbl_80048480:
	lwz      r0, 0xc(r28)
	cmpwi    r0, 0
	bne      lbl_8004851C
	mr       r3, r27
	mr       r4, r28
	mr       r5, r30
	bl
setAnmTransform__19J2DAnmKeyLoader_v15FP18J2DAnmTransformKeyPC22J3DAnmTransformKeyData
	b        lbl_8004851C

lbl_800484A0:
	lwz      r0, 0xc(r28)
	cmpwi    r0, 1
	bne      lbl_8004851C
	mr       r3, r27
	mr       r4, r28
	mr       r5, r30
	bl
setAnmColor__19J2DAnmKeyLoader_v15FP14J2DAnmColorKeyPC18J3DAnmColorKeyData b
lbl_8004851C

lbl_800484C0:
	lwz      r0, 0xc(r28)
	cmpwi    r0, 4
	bne      lbl_8004851C
	mr       r3, r27
	mr       r4, r28
	mr       r5, r30
	bl
setAnmTextureSRT__19J2DAnmKeyLoader_v15FP19J2DAnmTextureSRTKeyPC23J3DAnmTextureSRTKeyData
	b        lbl_8004851C

lbl_800484E0:
	lwz      r0, 0xc(r28)
	cmpwi    r0, 5
	bne      lbl_8004851C
	mr       r3, r27
	mr       r4, r28
	mr       r5, r30
	bl
setAnmTevReg__19J2DAnmKeyLoader_v15FP15J2DAnmTevRegKeyPC19J3DAnmTevRegKeyData b
lbl_8004851C

lbl_80048500:
	lwz      r0, 0xc(r28)
	cmpwi    r0, 7
	bne      lbl_8004851C
	mr       r3, r27
	mr       r4, r28
	mr       r5, r30
	bl
setAnmVtxColor__19J2DAnmKeyLoader_v15FP17J2DAnmVtxColorKeyPC21J3DAnmVtxColorKeyData

lbl_8004851C:
	lwz      r0, 4(r30)
	addi     r29, r29, 1
	add      r30, r30, r0

lbl_80048528:
	cmplw    r29, r26
	blt      lbl_80048420
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80048544
 * Size:	000028
 */
void J2DAnmKeyLoader_v15::readAnmTransform(const J3DAnmTransformKeyData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmTransform__19J2DAnmKeyLoader_v15FP18J2DAnmTransformKeyPC22J3DAnmTransformKeyData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004856C
 * Size:	00009C
 */
void J2DAnmKeyLoader_v15::setAnmTransform(J2DAnmTransformKey*, const J3DAnmTransformKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lha       r0, 0xA(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lhz       r4, 0xC(r5)
	  sth       r4, 0x22(r30)
	  lbz       r4, 0x8(r5)
	  sth       r0, 0x6(r30)
	  lbz       r0, 0x9(r5)
	  stb       r4, 0x4(r30)
	  lwz       r4, 0x14(r5)
	  stw       r0, 0x24(r30)
	  stfs      f0, 0x8(r30)
	  bl        0xF14
	  stw       r3, 0x28(r30)
	  mr        r3, r31
	  lwz       r4, 0x18(r31)
	  bl        0xEEC
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        0xEC4
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        0xECC
	  stw       r3, 0x18(r30)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80048608
 * Size:	000028
 */
void J2DAnmKeyLoader_v15::readAnmTextureSRT(const J3DAnmTextureSRTKeyData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmTextureSRT__19J2DAnmKeyLoader_v15FP19J2DAnmTextureSRTKeyPC23J3DAnmTextureSRTKeyData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80048630
 * Size:	0001EC
 */
void J2DAnmKeyLoader_v15::setAnmTextureSRT(J2DAnmTextureSRTKey*, const J3DAnmTextureSRTKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lhz       r6, 0xC(r5)
	  stw       r0, 0x14(r1)
	  lha       r0, 0xA(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lfs       f0, -0x7AA0(r2)
	  stw       r30, 0x8(r1)
	  mr        r30, r5
	  mr        r3, r30
	  sth       r6, 0x14(r4)
	  lbz       r4, 0x8(r5)
	  sth       r0, 0x6(r31)
	  lbz       r0, 0x9(r5)
	  stb       r4, 0x4(r31)
	  lhz       r4, 0xE(r5)
	  stw       r0, 0x10(r31)
	  lhz       r5, 0x10(r5)
	  stfs      f0, 0x8(r31)
	  lhz       r0, 0x12(r30)
	  sth       r6, 0x14(r31)
	  sth       r4, 0x1C(r31)
	  lwz       r4, 0x14(r30)
	  sth       r5, 0x1E(r31)
	  sth       r0, 0x20(r31)
	  bl        0xE34
	  stw       r3, 0x18(r31)
	  mr        r3, r30
	  lwz       r4, 0x18(r30)
	  bl        0xDDC
	  stw       r3, 0x34(r31)
	  mr        r3, r30
	  lwz       r4, 0x1C(r30)
	  bl        0xDB4
	  mr        r4, r3
	  addi      r3, r31, 0x38
	  bl        -0x1997C
	  lwz       r4, 0x20(r30)
	  mr        r3, r30
	  bl        0xD84
	  stw       r3, 0x30(r31)
	  mr        r3, r30
	  lwz       r4, 0x24(r30)
	  bl        0xD5C
	  stw       r3, 0x48(r31)
	  mr        r3, r30
	  lwz       r4, 0x28(r30)
	  bl        0xDC4
	  stw       r3, 0x24(r31)
	  mr        r3, r30
	  lwz       r4, 0x2C(r30)
	  bl        0xD9C
	  stw       r3, 0x28(r31)
	  mr        r3, r30
	  lwz       r4, 0x30(r30)
	  bl        0xDA4
	  lwz       r4, 0x44(r30)
	  stw       r3, 0x2C(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x108
	  mr        r3, r30
	  bl        0xD44
	  mr        r4, r3
	  addi      r3, r31, 0x70
	  bl        -0x199EC

	.loc_0x108:
	  lhz       r4, 0x34(r30)
	  mr        r3, r30
	  lhz       r0, 0x36(r30)
	  sth       r4, 0x60(r31)
	  lhz       r4, 0x38(r30)
	  sth       r0, 0x4C(r31)
	  lhz       r0, 0x3A(r30)
	  sth       r4, 0x4E(r31)
	  lwz       r4, 0x3C(r30)
	  sth       r0, 0x50(r31)
	  bl        0xD6C
	  stw       r3, 0x64(r31)
	  mr        r3, r30
	  lwz       r4, 0x40(r30)
	  bl        0xD14
	  stw       r3, 0x6C(r31)
	  mr        r3, r30
	  lwz       r4, 0x48(r30)
	  bl        0xCD4
	  stw       r3, 0x68(r31)
	  mr        r3, r30
	  lwz       r4, 0x4C(r30)
	  bl        0xCAC
	  stw       r3, 0x80(r31)
	  mr        r3, r30
	  lwz       r4, 0x50(r30)
	  bl        0xD14
	  stw       r3, 0x54(r31)
	  mr        r3, r30
	  lwz       r4, 0x54(r30)
	  bl        0xCEC
	  stw       r3, 0x58(r31)
	  mr        r3, r30
	  lwz       r4, 0x58(r30)
	  bl        0xCF4
	  lwz       r0, 0x5C(r30)
	  stw       r3, 0x5C(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x1C0
	  bge-      .loc_0x1CC
	  cmpwi     r0, 0
	  bge-      .loc_0x1B4
	  b         .loc_0x1CC

	.loc_0x1B4:
	  li        r0, 0
	  stw       r0, 0x84(r31)
	  b         .loc_0x1D4

	.loc_0x1C0:
	  li        r0, 0x1
	  stw       r0, 0x84(r31)
	  b         .loc_0x1D4

	.loc_0x1CC:
	  li        r0, 0
	  stw       r0, 0x84(r31)

	.loc_0x1D4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004881C
 * Size:	000028
 */
void J2DAnmKeyLoader_v15::readAnmColor(const J3DAnmColorKeyData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmColor__19J2DAnmKeyLoader_v15FP14J2DAnmColorKeyPC18J3DAnmColorKeyData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80048844
 * Size:	0000EC
 */
void J2DAnmKeyLoader_v15::setAnmColor(J2DAnmColorKey*, const J3DAnmColorKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xC(r5)
	  sth       r4, 0x6(r30)
	  lhz       r4, 0x10(r5)
	  stb       r0, 0x4(r30)
	  lhz       r0, 0xE(r5)
	  stfs      f0, 0x8(r30)
	  sth       r0, 0x18(r30)
	  lhz       r0, 0x12(r5)
	  sth       r4, 0x10(r30)
	  lhz       r4, 0x14(r5)
	  sth       r0, 0x12(r30)
	  lhz       r0, 0x16(r5)
	  sth       r4, 0x14(r30)
	  lwz       r4, 0x18(r5)
	  sth       r0, 0x16(r30)
	  bl        0xB7C
	  stw       r3, 0x40(r30)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  bl        0xBE4
	  stw       r3, 0x30(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        0xBD4
	  stw       r3, 0x34(r30)
	  mr        r3, r31
	  lwz       r4, 0x2C(r31)
	  bl        0xBC4
	  stw       r3, 0x38(r30)
	  mr        r3, r31
	  lwz       r4, 0x30(r31)
	  bl        0xBB4
	  stw       r3, 0x3C(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        0xB8C
	  stw       r3, 0x1C(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        0xB64
	  mr        r4, r3
	  addi      r3, r30, 0x20
	  bl        -0x19BCC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80048930
 * Size:	000028
 */
void J2DAnmKeyLoader_v15::readAnmVtxColor(const J3DAnmVtxColorKeyData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmVtxColor__19J2DAnmKeyLoader_v15FP17J2DAnmVtxColorKeyPC21J3DAnmVtxColorKeyData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80048958
 * Size:	0000FC
 */
void J2DAnmKeyLoader_v15::setAnmVtxColor(J2DAnmVtxColorKey*, const J3DAnmVtxColorKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xA(r5)
	  sth       r4, 0x6(r30)
	  lhz       r4, 0xC(r5)
	  stb       r0, 0x4(r30)
	  lhz       r0, 0xE(r5)
	  stfs      f0, 0x8(r30)
	  sth       r4, 0x10(r30)
	  lwz       r4, 0x18(r5)
	  sth       r0, 0x12(r30)
	  bl        0xA80
	  stw       r3, 0x24(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        0xA70
	  stw       r3, 0x28(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        0xA48
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  bl        0xA38
	  stw       r3, 0x18(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        0xAA0
	  stw       r3, 0x1C(r30)
	  mr        r3, r31
	  lwz       r4, 0x2C(r31)
	  bl        0xA90
	  stw       r3, 0x20(r30)
	  mr        r3, r31
	  lwz       r4, 0x30(r31)
	  bl        0xA98
	  stw       r3, 0x2C(r30)
	  mr        r3, r31
	  lwz       r4, 0x34(r31)
	  bl        0xA88
	  stw       r3, 0x30(r30)
	  mr        r3, r31
	  lwz       r4, 0x38(r31)
	  bl        0xA78
	  stw       r3, 0x34(r30)
	  mr        r3, r31
	  lwz       r4, 0x3C(r31)
	  bl        0xA68
	  stw       r3, 0x38(r30)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80048A54
 * Size:	000104
 */
void J2DAnmFullLoader_v15::load(const void*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, 0x54505431@ha
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	lwz      r31, 0xc(r4)
	addi     r29, r4, 0x20
	addi     r30, r5, 0x54505431@l
	li       r28, 0
	b        lbl_80048B38

lbl_80048A80:
	lwz      r4, 0(r29)
	cmpw     r4, r30
	beq      lbl_80048B00
	bge      lbl_80048AB8
	lis      r3, 0x50414631@ha
	addi     r0, r3, 0x50414631@l
	cmpw     r4, r0
	beq      lbl_80048AF0
	bge      lbl_80048B2C
	lis      r3, 0x414E4631@ha
	addi     r0, r3, 0x414E4631@l
	cmpw     r4, r0
	beq      lbl_80048AE0
	b        lbl_80048B2C

lbl_80048AB8:
	lis      r3, 0x56434631@ha
	addi     r0, r3, 0x56434631@l
	cmpw     r4, r0
	beq      lbl_80048B20
	bge      lbl_80048B2C
	lis      r3, 0x56414631@ha
	addi     r0, r3, 0x56414631@l
	cmpw     r4, r0
	beq      lbl_80048B10
	b        lbl_80048B2C

lbl_80048AE0:
	mr       r3, r27
	mr       r4, r29
	bl readAnmTransform__20J2DAnmFullLoader_v15FPC23J3DAnmTransformFullData b
lbl_80048B2C

lbl_80048AF0:
	mr       r3, r27
	mr       r4, r29
	bl       readAnmColor__20J2DAnmFullLoader_v15FPC19J3DAnmColorFullData
	b        lbl_80048B2C

lbl_80048B00:
	mr       r3, r27
	mr       r4, r29
	bl readAnmTexPattern__20J2DAnmFullLoader_v15FPC24J3DAnmTexPatternFullData b
lbl_80048B2C

lbl_80048B10:
	mr       r3, r27
	mr       r4, r29
	bl readAnmVisibility__20J2DAnmFullLoader_v15FPC24J3DAnmVisibilityFullData b
lbl_80048B2C

lbl_80048B20:
	mr       r3, r27
	mr       r4, r29
	bl       readAnmVtxColor__20J2DAnmFullLoader_v15FPC22J3DAnmVtxColorFullData

lbl_80048B2C:
	lwz      r0, 4(r29)
	addi     r28, r28, 1
	add      r29, r29, r0

lbl_80048B38:
	cmplw    r28, r31
	blt      lbl_80048A80
	lwz      r3, 4(r27)
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80048B58
 * Size:	000154
 */
void J2DAnmFullLoader_v15::setResource(J2DAnmBase*, const void*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, 0x54505431@ha
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r27, r3
	lwz      r26, 0xc(r5)
	mr       r28, r4
	addi     r30, r5, 0x20
	addi     r31, r6, 0x54505431@l
	li       r29, 0
	b        lbl_80048C90

lbl_80048B88:
	lwz      r4, 0(r30)
	cmpw     r4, r31
	beq      lbl_80048C28
	bge      lbl_80048BC0
	lis      r3, 0x50414631@ha
	addi     r0, r3, 0x50414631@l
	cmpw     r4, r0
	beq      lbl_80048C08
	bge      lbl_80048C84
	lis      r3, 0x414E4631@ha
	addi     r0, r3, 0x414E4631@l
	cmpw     r4, r0
	beq      lbl_80048BE8
	b        lbl_80048C84

lbl_80048BC0:
	lis      r3, 0x56434631@ha
	addi     r0, r3, 0x56434631@l
	cmpw     r4, r0
	beq      lbl_80048C68
	bge      lbl_80048C84
	lis      r3, 0x56414631@ha
	addi     r0, r3, 0x56414631@l
	cmpw     r4, r0
	beq      lbl_80048C48
	b        lbl_80048C84

lbl_80048BE8:
	lwz      r0, 0xc(r28)
	cmpwi    r0, 0
	bne      lbl_80048C84
	mr       r3, r27
	mr       r4, r28
	mr       r5, r30
	bl
setAnmTransform__20J2DAnmFullLoader_v15FP19J2DAnmTransformFullPC23J3DAnmTransformFullData
	b        lbl_80048C84

lbl_80048C08:
	lwz      r0, 0xc(r28)
	cmpwi    r0, 1
	bne      lbl_80048C84
	mr       r3, r27
	mr       r4, r28
	mr       r5, r30
	bl
setAnmColor__20J2DAnmFullLoader_v15FP15J2DAnmColorFullPC19J3DAnmColorFullData b
lbl_80048C84

lbl_80048C28:
	lwz      r0, 0xc(r28)
	cmpwi    r0, 2
	bne      lbl_80048C84
	mr       r3, r27
	mr       r4, r28
	mr       r5, r30
	bl
setAnmTexPattern__20J2DAnmFullLoader_v15FP16J2DAnmTexPatternPC24J3DAnmTexPatternFullData
	b        lbl_80048C84

lbl_80048C48:
	lwz      r0, 0xc(r28)
	cmpwi    r0, 6
	bne      lbl_80048C84
	mr       r3, r27
	mr       r4, r28
	mr       r5, r30
	bl
setAnmVisibility__20J2DAnmFullLoader_v15FP20J2DAnmVisibilityFullPC24J3DAnmVisibilityFullData
	b        lbl_80048C84

lbl_80048C68:
	lwz      r0, 0xc(r28)
	cmpwi    r0, 7
	bne      lbl_80048C84
	mr       r3, r27
	mr       r4, r28
	mr       r5, r30
	bl
setAnmVtxColor__20J2DAnmFullLoader_v15FP18J2DAnmVtxColorFullPC22J3DAnmVtxColorFullData

lbl_80048C84:
	lwz      r0, 4(r30)
	addi     r29, r29, 1
	add      r30, r30, r0

lbl_80048C90:
	cmplw    r29, r26
	blt      lbl_80048B88
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80048CAC
 * Size:	00001C
 */
J2DAnmFullLoader_v15::J2DAnmFullLoader_v15()
{
	/*
	lis      r5, __vt__12J2DAnmLoader@ha
	lis      r4, __vt__20J2DAnmFullLoader_v15@ha
	addi     r5, r5, __vt__12J2DAnmLoader@l
	stw      r5, 0(r3)
	addi     r0, r4, __vt__20J2DAnmFullLoader_v15@l
	stw      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80048CC8
 * Size:	00005C
 */
J2DAnmFullLoader_v15::~J2DAnmFullLoader_v15()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80048D0C
	lis      r3, __vt__20J2DAnmFullLoader_v15@ha
	addi     r0, r3, __vt__20J2DAnmFullLoader_v15@l
	stw      r0, 0(r31)
	beq      lbl_80048CFC
	lis      r3, __vt__12J2DAnmLoader@ha
	addi     r0, r3, __vt__12J2DAnmLoader@l
	stw      r0, 0(r31)

lbl_80048CFC:
	extsh.   r0, r4
	ble      lbl_80048D0C
	mr       r3, r31
	bl       __dl__FPv

lbl_80048D0C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80048D24
 * Size:	000028
 */
void J2DAnmFullLoader_v15::readAnmTransform(const J3DAnmTransformFullData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmTransform__20J2DAnmFullLoader_v15FP19J2DAnmTransformFullPC23J3DAnmTransformFullData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80048D4C
 * Size:	000094
 */
void J2DAnmFullLoader_v15::setAnmTransform(J2DAnmTransformFull*, const J3DAnmTransformFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lhz       r0, 0xC(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xA(r5)
	  sth       r0, 0x22(r30)
	  lbz       r0, 0x8(r5)
	  sth       r4, 0x6(r30)
	  lwz       r4, 0x14(r5)
	  stb       r0, 0x4(r30)
	  stfs      f0, 0x8(r30)
	  bl        0x664
	  stw       r3, 0x24(r30)
	  mr        r3, r31
	  lwz       r4, 0x18(r31)
	  bl        0x714
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        0x6EC
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        0x6F4
	  stw       r3, 0x18(r30)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80048DE0
 * Size:	000028
 */
void J2DAnmFullLoader_v15::readAnmColor(const J3DAnmColorFullData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmColor__20J2DAnmFullLoader_v15FP15J2DAnmColorFullPC19J3DAnmColorFullData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80048E08
 * Size:	0000CC
 */
void J2DAnmFullLoader_v15::setAnmColor(J2DAnmColorFull*, const J3DAnmColorFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xC(r5)
	  sth       r4, 0x6(r30)
	  lwz       r4, 0x18(r5)
	  stb       r0, 0x4(r30)
	  lhz       r0, 0xE(r5)
	  stfs      f0, 0x8(r30)
	  sth       r0, 0x18(r30)
	  bl        0x590
	  stw       r3, 0x40(r30)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  bl        0x5F8
	  stw       r3, 0x30(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        0x5E8
	  stw       r3, 0x34(r30)
	  mr        r3, r31
	  lwz       r4, 0x2C(r31)
	  bl        0x5D8
	  stw       r3, 0x38(r30)
	  mr        r3, r31
	  lwz       r4, 0x30(r31)
	  bl        0x5C8
	  stw       r3, 0x3C(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        0x5E8
	  stw       r3, 0x1C(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        0x5C0
	  mr        r4, r3
	  addi      r3, r30, 0x20
	  bl        -0x1A170
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80048ED4
 * Size:	000028
 */
void J2DAnmFullLoader_v15::readAnmTexPattern(const J3DAnmTexPatternFullData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmTexPattern__20J2DAnmFullLoader_v15FP16J2DAnmTexPatternPC24J3DAnmTexPatternFullData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80048EFC
 * Size:	0000A4
 */
void J2DAnmFullLoader_v15::setAnmTexPattern(J2DAnmTexPattern*, const J3DAnmTexPatternFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xA(r5)
	  sth       r4, 0x6(r30)
	  lhz       r4, 0xC(r5)
	  stb       r0, 0x4(r30)
	  lhz       r0, 0xE(r5)
	  stfs      f0, 0x8(r30)
	  sth       r4, 0x1A(r30)
	  lwz       r4, 0x10(r5)
	  sth       r0, 0x18(r30)
	  bl        0x47C
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  lwz       r4, 0x14(r31)
	  bl        0x52C
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x18(r31)
	  bl        0x51C
	  stw       r3, 0x1C(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        0x4F4
	  mr        r4, r3
	  addi      r3, r30, 0x20
	  bl        -0x1A23C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80048FA0
 * Size:	000028
 */
void J2DAnmKeyLoader_v15::readAnmTevReg(const J3DAnmTevRegKeyData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmTevReg__19J2DAnmKeyLoader_v15FP15J2DAnmTevRegKeyPC19J3DAnmTevRegKeyData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80048FC8
 * Size:	00018C
 */
void J2DAnmKeyLoader_v15::setAnmTevReg(J2DAnmTevRegKey*, const J3DAnmTevRegKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xA(r5)
	  sth       r4, 0x6(r30)
	  lwz       r4, 0x20(r5)
	  stb       r0, 0x4(r30)
	  lhz       r0, 0xC(r5)
	  stfs      f0, 0x8(r30)
	  sth       r0, 0x10(r30)
	  bl        0x3A0
	  stw       r3, 0x4C(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        0x468
	  stw       r3, 0x24(r30)
	  mr        r3, r31
	  lwz       r4, 0x30(r31)
	  bl        0x440
	  mr        r4, r3
	  addi      r3, r30, 0x28
	  bl        -0x1A2F0
	  lhz       r0, 0xE(r31)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  sth       r0, 0x12(r30)
	  bl        0x348
	  stw       r3, 0x50(r30)
	  mr        r3, r31
	  lwz       r4, 0x2C(r31)
	  bl        0x428
	  stw       r3, 0x38(r30)
	  mr        r3, r31
	  lwz       r4, 0x34(r31)
	  bl        0x400
	  mr        r4, r3
	  addi      r3, r30, 0x3C
	  bl        -0x1A330
	  lhz       r4, 0x10(r31)
	  mr        r3, r31
	  lhz       r0, 0x12(r31)
	  sth       r4, 0x14(r30)
	  lhz       r4, 0x14(r31)
	  sth       r0, 0x16(r30)
	  lhz       r0, 0x16(r31)
	  sth       r4, 0x18(r30)
	  lwz       r4, 0x38(r31)
	  sth       r0, 0x1A(r30)
	  bl        0x3F8
	  stw       r3, 0x54(r30)
	  mr        r3, r31
	  lwz       r4, 0x3C(r31)
	  bl        0x3E8
	  stw       r3, 0x58(r30)
	  mr        r3, r31
	  lwz       r4, 0x40(r31)
	  bl        0x3D8
	  stw       r3, 0x5C(r30)
	  mr        r3, r31
	  lwz       r4, 0x44(r31)
	  bl        0x3C8
	  stw       r3, 0x60(r30)
	  mr        r3, r31
	  lhz       r4, 0x18(r31)
	  lhz       r0, 0x1A(r31)
	  sth       r4, 0x1C(r30)
	  lhz       r4, 0x1C(r31)
	  sth       r0, 0x1E(r30)
	  lhz       r0, 0x1E(r31)
	  sth       r4, 0x20(r30)
	  lwz       r4, 0x48(r31)
	  sth       r0, 0x22(r30)
	  bl        0x398
	  stw       r3, 0x64(r30)
	  mr        r3, r31
	  lwz       r4, 0x4C(r31)
	  bl        0x388
	  stw       r3, 0x68(r30)
	  mr        r3, r31
	  lwz       r4, 0x50(r31)
	  bl        0x378
	  stw       r3, 0x6C(r30)
	  mr        r3, r31
	  lwz       r4, 0x54(r31)
	  bl        0x368
	  stw       r3, 0x70(r30)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80049154
 * Size:	000028
 */
void J2DAnmFullLoader_v15::readAnmVisibility(const J3DAnmVisibilityFullData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmVisibility__20J2DAnmFullLoader_v15FP20J2DAnmVisibilityFullPC24J3DAnmVisibilityFullData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004917C
 * Size:	00007C
 */
void J2DAnmFullLoader_v15::setAnmVisibility(J2DAnmVisibilityFull*, const J3DAnmVisibilityFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xA(r5)
	  sth       r4, 0x6(r30)
	  lhz       r4, 0xC(r5)
	  stb       r0, 0x4(r30)
	  lhz       r0, 0xE(r5)
	  stfs      f0, 0x8(r30)
	  sth       r4, 0x10(r30)
	  lwz       r4, 0x10(r5)
	  sth       r0, 0x12(r30)
	  bl        0x1B4
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  lwz       r4, 0x14(r31)
	  bl        0x27C
	  stw       r3, 0x18(r30)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800491F8
 * Size:	000028
 */
void J2DAnmFullLoader_v15::readAnmVtxColor(const J3DAnmVtxColorFullData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmVtxColor__20J2DAnmFullLoader_v15FP18J2DAnmVtxColorFullPC22J3DAnmVtxColorFullData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80049220
 * Size:	0000FC
 */
void J2DAnmFullLoader_v15::setAnmVtxColor(J2DAnmVtxColorFull*, const J3DAnmVtxColorFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xA(r5)
	  sth       r4, 0x6(r30)
	  lhz       r4, 0xC(r5)
	  stb       r0, 0x4(r30)
	  lhz       r0, 0xE(r5)
	  stfs      f0, 0x8(r30)
	  sth       r4, 0x10(r30)
	  lwz       r4, 0x18(r5)
	  sth       r0, 0x12(r30)
	  bl        0x170
	  stw       r3, 0x24(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        0x160
	  stw       r3, 0x28(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        0x180
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  bl        0x170
	  stw       r3, 0x18(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        0x1D8
	  stw       r3, 0x1C(r30)
	  mr        r3, r31
	  lwz       r4, 0x2C(r31)
	  bl        0x1C8
	  stw       r3, 0x20(r30)
	  mr        r3, r31
	  lwz       r4, 0x30(r31)
	  bl        0x188
	  stw       r3, 0x2C(r30)
	  mr        r3, r31
	  lwz       r4, 0x34(r31)
	  bl        0x178
	  stw       r3, 0x30(r30)
	  mr        r3, r31
	  lwz       r4, 0x38(r31)
	  bl        0x168
	  stw       r3, 0x34(r30)
	  mr        r3, r31
	  lwz       r4, 0x3C(r31)
	  bl        0x158
	  stw       r3, 0x38(r30)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004931C
 * Size:	00005C
 */
J2DAnmVisibilityFull::~J2DAnmVisibilityFull()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80049360
	lis      r3, __vt__20J2DAnmVisibilityFull@ha
	addi     r0, r3, __vt__20J2DAnmVisibilityFull@l
	stw      r0, 0(r31)
	beq      lbl_80049350
	lis      r3, __vt__10J2DAnmBase@ha
	addi     r0, r3, __vt__10J2DAnmBase@l
	stw      r0, 0(r31)

lbl_80049350:
	extsh.   r0, r4
	ble      lbl_80049360
	mr       r3, r31
	bl       __dl__FPv

lbl_80049360:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80049378
 * Size:	000004
 */
void J2DAnmBase::searchUpdateMaterialID(J2DScreen*) { }

/*
 * --INFO--
 * Address:	8004937C
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmVisibilityFullTable>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_8004938C
	li       r3, 0
	blr

lbl_8004938C:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80049394
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmKRegKeyTable>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_800493A4
	li       r3, 0
	blr

lbl_800493A4:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	800493AC
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmCRegKeyTable>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_800493BC
	li       r3, 0
	blr

lbl_800493BC:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	800493C4
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmTexPatternFullTable>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_800493D4
	li       r3, 0
	blr

lbl_800493D4:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	800493DC
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmColorFullTable>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_800493EC
	li       r3, 0
	blr

lbl_800493EC:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	800493F4
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmTransformFullTable>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_80049404
	li       r3, 0
	blr

lbl_80049404:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004940C
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_8004941C
	li       r3, 0
	blr

lbl_8004941C:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80049424
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmColorKeyTable>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_80049434
	li       r3, 0
	blr

lbl_80049434:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004943C
 * Size:	000018
 */
void JSUConvertOffsetToPtr<Vec>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_8004944C
	li       r3, 0
	blr

lbl_8004944C:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80049454
 * Size:	000018
 */
void JSUConvertOffsetToPtr<unsigned char>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_80049464
	li       r3, 0
	blr

lbl_80049464:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004946C
 * Size:	000018
 */
void JSUConvertOffsetToPtr<ResNTAB>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_8004947C
	li       r3, 0
	blr

lbl_8004947C:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80049484
 * Size:	000018
 */
void JSUConvertOffsetToPtr<unsigned short>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_80049494
	li       r3, 0
	blr

lbl_80049494:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004949C
 * Size:	000018
 */
void JSUConvertOffsetToPtr<short>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_800494AC
	li       r3, 0
	blr

lbl_800494AC:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	800494B4
 * Size:	000018
 */
void JSUConvertOffsetToPtr<float>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_800494C4
	li       r3, 0
	blr

lbl_800494C4:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	800494CC
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmTransformKeyTable>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_800494DC
	li       r3, 0
	blr

lbl_800494DC:
	add      r3, r3, r4
	blr
	*/
}
