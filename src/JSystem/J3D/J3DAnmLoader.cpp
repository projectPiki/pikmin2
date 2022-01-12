#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__19J3DAnmKeyLoader_v15
    __vt__19J3DAnmKeyLoader_v15:
        .4byte 0
        .4byte 0
        .4byte load__19J3DAnmKeyLoader_v15FPCv
        .4byte setResource__19J3DAnmKeyLoader_v15FP10J3DAnmBasePCv
        .4byte __dt__19J3DAnmKeyLoader_v15Fv
    .global __vt__20J3DAnmFullLoader_v15
    __vt__20J3DAnmFullLoader_v15:
        .4byte 0
        .4byte 0
        .4byte load__20J3DAnmFullLoader_v15FPCv
        .4byte setResource__20J3DAnmFullLoader_v15FP10J3DAnmBasePCv
        .4byte __dt__20J3DAnmFullLoader_v15Fv
    .global __vt__12J3DAnmLoader
    __vt__12J3DAnmLoader:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte __dt__12J3DAnmLoaderFv
    .global __vt__20J3DAnmVisibilityFull
    __vt__20J3DAnmVisibilityFull:
        .4byte 0
        .4byte 0
        .4byte __dt__20J3DAnmVisibilityFullFv
        .4byte getKind__20J3DAnmVisibilityFullCFv
    .global __vt__16J3DAnmTexPattern
    __vt__16J3DAnmTexPattern:
        .4byte 0
        .4byte 0
        .4byte __dt__16J3DAnmTexPatternFv
        .4byte getKind__16J3DAnmTexPatternCFv
    .global __vt__15J3DAnmTevRegKey
    __vt__15J3DAnmTevRegKey:
        .4byte 0
        .4byte 0
        .4byte __dt__15J3DAnmTevRegKeyFv
        .4byte getKind__15J3DAnmTevRegKeyCFv
    .global __vt__19J3DAnmTextureSRTKey
    __vt__19J3DAnmTextureSRTKey:
        .4byte 0
        .4byte 0
        .4byte __dt__19J3DAnmTextureSRTKeyFv
        .4byte getKind__19J3DAnmTextureSRTKeyCFv
    .global __vt__18J3DAnmTransformKey
    __vt__18J3DAnmTransformKey:
        .4byte 0
        .4byte 0
        .4byte __dt__18J3DAnmTransformKeyFv
        .4byte getKind__18J3DAnmTransformKeyCFv
        .4byte getTransform__18J3DAnmTransformKeyCFUsP16J3DTransformInfo

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516A90
    lbl_80516A90:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800725A0
 * Size:	0008C4
 */
void J3DAnmLoaderDataBase::load(const void*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	or.      r31, r3, r3
	stw      r30, 0x68(r1)
	bne      lbl_800725C4
	li       r3, 0
	b        lbl_80072E4C

lbl_800725C4:
	lwz      r3, 0(r31)
	addis    r0, r3, 0xb5cd
	cmplwi   r0, 0x4431
	bne      lbl_80072E48
	lis      r3, 0x62726B31@ha
	lwz      r5, 4(r31)
	addi     r0, r3, 0x62726B31@l
	cmpw     r5, r0
	beq      lbl_8007295C
	bge      lbl_80072658
	lis      r4, 0x626C6B31@ha
	addi     r0, r4, 0x626C6B31@l
	cmpw     r5, r0
	beq      lbl_8007280C
	bge      lbl_80072634
	lis      r3, 0x62636B31@ha
	addi     r0, r3, 0x62636B31@l
	cmpw     r5, r0
	beq      lbl_800726B4
	bge      lbl_80072624
	addi     r0, r3, 0x6131
	cmpw     r5, r0
	beq      lbl_80072AC4
	b        lbl_80072E40

lbl_80072624:
	addi     r0, r4, 0x6131
	cmpw     r5, r0
	beq      lbl_80072D28
	b        lbl_80072E40

lbl_80072634:
	lis      r3, 0x62706B31@ha
	addi     r0, r3, 0x62706B31@l
	cmpw     r5, r0
	beq      lbl_80072754
	bge      lbl_80072E40
	addi     r0, r3, 0x6131
	cmpw     r5, r0
	beq      lbl_80072B60
	b        lbl_80072E40

lbl_80072658:
	lis      r3, 0x62766131@ha
	addi     r0, r3, 0x62766131@l
	cmpw     r5, r0
	beq      lbl_80072CA8
	bge      lbl_80072690
	lis      r3, 0x62747031@ha
	addi     r0, r3, 0x62747031@l
	cmpw     r5, r0
	beq      lbl_80072C18
	bge      lbl_80072E40
	addi     r0, r3, 0x6b31
	cmpw     r5, r0
	beq      lbl_80072890
	b        lbl_80072E40

lbl_80072690:
	lis      r3, 0x62786B31@ha
	addi     r0, r3, 0x62786B31@l
	cmpw     r5, r0
	beq      lbl_80072A30
	bge      lbl_80072E40
	addi     r0, r3, 0x6131
	cmpw     r5, r0
	beq      lbl_80072DAC
	b        lbl_80072E40

lbl_800726B4:
	addi     r3, r1, 0x60
	bl       __ct__19J3DAnmKeyLoader_v15Fv
	li       r3, 0x28
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8007272C
	lis      r4, __vt__10J3DAnmBase@ha
	lis      r5, __vt__15J3DAnmTransform@ha
	addi     r0, r4, __vt__10J3DAnmBase@l
	lis      r4, __vt__18J3DAnmTransformKey@ha
	stw      r0, 0(r3)
	li       r6, 0
	lfs      f0, lbl_80516A90@sda21(r2)
	addi     r5, r5, __vt__15J3DAnmTransform@l
	stb      r6, 4(r3)
	addi     r0, r4, __vt__18J3DAnmTransformKey@l
	stb      r6, 5(r3)
	sth      r6, 6(r3)
	stfs     f0, 8(r3)
	stw      r5, 0(r3)
	stw      r6, 0xc(r3)
	stw      r6, 0x10(r3)
	stw      r6, 0x14(r3)
	sth      r6, 0x18(r3)
	sth      r6, 0x1a(r3)
	sth      r6, 0x1c(r3)
	sth      r6, 0x1e(r3)
	stw      r0, 0(r3)
	stw      r6, 0x20(r3)
	stw      r6, 0x24(r3)

lbl_8007272C:
	stw      r3, 0x64(r1)
	mr       r4, r31
	addi     r3, r1, 0x60
	bl       load__19J3DAnmKeyLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x60
	li       r4, -1
	bl       __dt__19J3DAnmKeyLoader_v15Fv
	mr       r3, r31
	b        lbl_80072E4C

lbl_80072754:
	addi     r3, r1, 0x58
	bl       __ct__19J3DAnmKeyLoader_v15Fv
	li       r3, 0x40
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_800727E4
	lis      r3, __vt__10J3DAnmBase@ha
	mr       r5, r30
	addi     r0, r3, __vt__10J3DAnmBase@l
	lis      r3, __vt__11J3DAnmColor@ha
	stw      r0, 0(r30)
	li       r4, 0
	lfs      f0, lbl_80516A90@sda21(r2)
	addi     r0, r3, __vt__11J3DAnmColor@l
	stb      r4, 4(r30)
	addi     r3, r5, 0x1c
	stb      r4, 5(r30)
	sth      r4, 6(r30)
	stfs     f0, 8(r30)
	stw      r0, 0(r30)
	sth      r4, 0xc(r30)
	sth      r4, 0xe(r30)
	sth      r4, 0x10(r30)
	sth      r4, 0x12(r30)
	sth      r4, 0x14(r30)
	stw      r4, 0x18(r30)
	bl       __ct__10JUTNameTabFv
	lis      r3, __vt__14J3DAnmColorKey@ha
	li       r0, 0
	addi     r3, r3, __vt__14J3DAnmColorKey@l
	stw      r3, 0(r30)
	stw      r0, 0x2c(r30)
	stw      r0, 0x30(r30)
	stw      r0, 0x34(r30)
	stw      r0, 0x38(r30)
	stw      r0, 0x3c(r30)

lbl_800727E4:
	stw      r30, 0x5c(r1)
	mr       r4, r31
	addi     r3, r1, 0x58
	bl       load__19J3DAnmKeyLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x58
	li       r4, -1
	bl       __dt__19J3DAnmKeyLoader_v15Fv
	mr       r3, r31
	b        lbl_80072E4C

lbl_8007280C:
	addi     r3, r1, 0x50
	bl       __ct__19J3DAnmKeyLoader_v15Fv
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80072868
	lis      r4, __vt__10J3DAnmBase@ha
	lis      r5, __vt__13J3DAnmCluster@ha
	addi     r0, r4, __vt__10J3DAnmBase@l
	lis      r4, __vt__16J3DAnmClusterKey@ha
	stw      r0, 0(r3)
	li       r6, 0
	lfs      f0, lbl_80516A90@sda21(r2)
	addi     r5, r5, __vt__13J3DAnmCluster@l
	stb      r6, 4(r3)
	addi     r0, r4, __vt__16J3DAnmClusterKey@l
	stb      r6, 5(r3)
	sth      r6, 6(r3)
	stfs     f0, 8(r3)
	stw      r5, 0(r3)
	stw      r6, 0xc(r3)
	stw      r0, 0(r3)
	stw      r6, 0x10(r3)

lbl_80072868:
	stw      r3, 0x54(r1)
	mr       r4, r31
	addi     r3, r1, 0x50
	bl       load__19J3DAnmKeyLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x50
	li       r4, -1
	bl       __dt__19J3DAnmKeyLoader_v15Fv
	mr       r3, r31
	b        lbl_80072E4C

lbl_80072890:
	addi     r3, r1, 0x48
	bl       __ct__19J3DAnmKeyLoader_v15Fv
	li       r3, 0x7c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80072934
	lis      r3, __vt__10J3DAnmBase@ha
	li       r4, 0
	addi     r0, r3, __vt__10J3DAnmBase@l
	lfs      f0, lbl_80516A90@sda21(r2)
	stw      r0, 0(r30)
	lis      r3, __vt__19J3DAnmTextureSRTKey@ha
	addi     r0, r3, __vt__19J3DAnmTextureSRTKey@l
	stb      r4, 4(r30)
	addi     r3, r30, 0x30
	stb      r4, 5(r30)
	sth      r4, 6(r30)
	stfs     f0, 8(r30)
	stw      r0, 0(r30)
	bl       __ct__10JUTNameTabFv
	addi     r3, r30, 0x64
	bl       __ct__10JUTNameTabFv
	li       r0, 0
	stw      r0, 0xc(r30)
	sth      r0, 0x1a(r30)
	sth      r0, 0x18(r30)
	sth      r0, 0x16(r30)
	sth      r0, 0x14(r30)
	stw      r0, 0x10(r30)
	stw      r0, 0x24(r30)
	stw      r0, 0x1c(r30)
	stw      r0, 0x20(r30)
	sth      r0, 0x48(r30)
	sth      r0, 0x46(r30)
	sth      r0, 0x44(r30)
	sth      r0, 0x4a(r30)
	stw      r0, 0x58(r30)
	stw      r0, 0x54(r30)
	stw      r0, 0x4c(r30)
	stw      r0, 0x50(r30)
	stw      r0, 0x78(r30)

lbl_80072934:
	stw      r30, 0x4c(r1)
	mr       r4, r31
	addi     r3, r1, 0x48
	bl       load__19J3DAnmKeyLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x48
	li       r4, -1
	bl       __dt__19J3DAnmKeyLoader_v15Fv
	mr       r3, r31
	b        lbl_80072E4C

lbl_8007295C:
	addi     r3, r1, 0x40
	bl       __ct__19J3DAnmKeyLoader_v15Fv
	li       r3, 0x70
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80072A08
	lis      r3, __vt__10J3DAnmBase@ha
	li       r4, 0
	addi     r0, r3, __vt__10J3DAnmBase@l
	lfs      f0, lbl_80516A90@sda21(r2)
	stw      r0, 0(r30)
	lis      r3, __vt__15J3DAnmTevRegKey@ha
	addi     r0, r3, __vt__15J3DAnmTevRegKey@l
	stb      r4, 4(r30)
	addi     r3, r30, 0x24
	stb      r4, 5(r30)
	sth      r4, 6(r30)
	stfs     f0, 8(r30)
	stw      r0, 0(r30)
	bl       __ct__10JUTNameTabFv
	addi     r3, r30, 0x38
	bl       __ct__10JUTNameTabFv
	li       r0, 0
	sth      r0, 0xe(r30)
	sth      r0, 0xc(r30)
	sth      r0, 0x16(r30)
	sth      r0, 0x14(r30)
	sth      r0, 0x12(r30)
	sth      r0, 0x10(r30)
	sth      r0, 0x1e(r30)
	sth      r0, 0x1c(r30)
	sth      r0, 0x1a(r30)
	sth      r0, 0x18(r30)
	stw      r0, 0x34(r30)
	stw      r0, 0x20(r30)
	stw      r0, 0x5c(r30)
	stw      r0, 0x58(r30)
	stw      r0, 0x54(r30)
	stw      r0, 0x50(r30)
	stw      r0, 0x6c(r30)
	stw      r0, 0x68(r30)
	stw      r0, 0x64(r30)
	stw      r0, 0x60(r30)

lbl_80072A08:
	stw      r30, 0x44(r1)
	mr       r4, r31
	addi     r3, r1, 0x40
	bl       load__19J3DAnmKeyLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x40
	li       r4, -1
	bl       __dt__19J3DAnmKeyLoader_v15Fv
	mr       r3, r31
	b        lbl_80072E4C

lbl_80072A30:
	addi     r3, r1, 0x38
	bl       __ct__19J3DAnmKeyLoader_v15Fv
	li       r3, 0x30
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80072A9C
	lis      r4, __vt__10J3DAnmBase@ha
	lis      r5, __vt__14J3DAnmVtxColor@ha
	addi     r0, r4, __vt__10J3DAnmBase@l
	lis      r4, __vt__17J3DAnmVtxColorKey@ha
	stw      r0, 0(r3)
	li       r6, 0
	lfs      f0, lbl_80516A90@sda21(r2)
	addi     r5, r5, __vt__14J3DAnmVtxColor@l
	stb      r6, 4(r3)
	addi     r0, r4, __vt__17J3DAnmVtxColorKey@l
	stb      r6, 5(r3)
	sth      r6, 6(r3)
	stfs     f0, 8(r3)
	stw      r5, 0(r3)
	sth      r6, 0xc(r3)
	sth      r6, 0xe(r3)
	stw      r6, 0x10(r3)
	stw      r6, 0x14(r3)
	stw      r0, 0(r3)
	stw      r6, 0x18(r3)
	stw      r6, 0x1c(r3)

lbl_80072A9C:
	stw      r3, 0x3c(r1)
	mr       r4, r31
	addi     r3, r1, 0x38
	bl       load__19J3DAnmKeyLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x38
	li       r4, -1
	bl       __dt__19J3DAnmKeyLoader_v15Fv
	mr       r3, r31
	b        lbl_80072E4C

lbl_80072AC4:
	addi     r3, r1, 0x30
	bl       __ct__20J3DAnmFullLoader_v15Fv
	li       r3, 0x24
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80072B38
	lis      r4, __vt__10J3DAnmBase@ha
	lis      r5, __vt__15J3DAnmTransform@ha
	addi     r0, r4, __vt__10J3DAnmBase@l
	lis      r4, __vt__19J3DAnmTransformFull@ha
	stw      r0, 0(r3)
	li       r6, 0
	lfs      f0, lbl_80516A90@sda21(r2)
	addi     r5, r5, __vt__15J3DAnmTransform@l
	stb      r6, 4(r3)
	addi     r0, r4, __vt__19J3DAnmTransformFull@l
	stb      r6, 5(r3)
	sth      r6, 6(r3)
	stfs     f0, 8(r3)
	stw      r5, 0(r3)
	stw      r6, 0xc(r3)
	stw      r6, 0x10(r3)
	stw      r6, 0x14(r3)
	sth      r6, 0x18(r3)
	sth      r6, 0x1a(r3)
	sth      r6, 0x1c(r3)
	sth      r6, 0x1e(r3)
	stw      r0, 0(r3)
	stw      r6, 0x20(r3)

lbl_80072B38:
	stw      r3, 0x34(r1)
	mr       r4, r31
	addi     r3, r1, 0x30
	bl       load__20J3DAnmFullLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x30
	li       r4, -1
	bl       __dt__20J3DAnmFullLoader_v15Fv
	mr       r3, r31
	b        lbl_80072E4C

lbl_80072B60:
	addi     r3, r1, 0x28
	bl       __ct__20J3DAnmFullLoader_v15Fv
	li       r3, 0x40
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80072BF0
	lis      r3, __vt__10J3DAnmBase@ha
	mr       r5, r30
	addi     r0, r3, __vt__10J3DAnmBase@l
	lis      r3, __vt__11J3DAnmColor@ha
	stw      r0, 0(r30)
	li       r4, 0
	lfs      f0, lbl_80516A90@sda21(r2)
	addi     r0, r3, __vt__11J3DAnmColor@l
	stb      r4, 4(r30)
	addi     r3, r5, 0x1c
	stb      r4, 5(r30)
	sth      r4, 6(r30)
	stfs     f0, 8(r30)
	stw      r0, 0(r30)
	sth      r4, 0xc(r30)
	sth      r4, 0xe(r30)
	sth      r4, 0x10(r30)
	sth      r4, 0x12(r30)
	sth      r4, 0x14(r30)
	stw      r4, 0x18(r30)
	bl       __ct__10JUTNameTabFv
	lis      r3, __vt__15J3DAnmColorFull@ha
	li       r0, 0
	addi     r3, r3, __vt__15J3DAnmColorFull@l
	stw      r3, 0(r30)
	stw      r0, 0x2c(r30)
	stw      r0, 0x30(r30)
	stw      r0, 0x34(r30)
	stw      r0, 0x38(r30)
	stw      r0, 0x3c(r30)

lbl_80072BF0:
	stw      r30, 0x2c(r1)
	mr       r4, r31
	addi     r3, r1, 0x28
	bl       load__20J3DAnmFullLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x28
	li       r4, -1
	bl       __dt__20J3DAnmFullLoader_v15Fv
	mr       r3, r31
	b        lbl_80072E4C

lbl_80072C18:
	addi     r3, r1, 0x20
	bl       __ct__20J3DAnmFullLoader_v15Fv
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80072C80
	lis      r3, __vt__10J3DAnmBase@ha
	mr       r5, r30
	addi     r0, r3, __vt__10J3DAnmBase@l
	lis      r3, __vt__16J3DAnmTexPattern@ha
	stw      r0, 0(r30)
	li       r4, 0
	lfs      f0, lbl_80516A90@sda21(r2)
	addi     r0, r3, __vt__16J3DAnmTexPattern@l
	stb      r4, 4(r30)
	addi     r3, r5, 0x1c
	stb      r4, 5(r30)
	sth      r4, 6(r30)
	stfs     f0, 8(r30)
	stw      r0, 0(r30)
	stw      r4, 0xc(r30)
	stw      r4, 0x10(r30)
	sth      r4, 0x14(r30)
	sth      r4, 0x16(r30)
	stw      r4, 0x18(r30)
	bl       __ct__10JUTNameTabFv

lbl_80072C80:
	stw      r30, 0x24(r1)
	mr       r4, r31
	addi     r3, r1, 0x20
	bl       load__20J3DAnmFullLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x20
	li       r4, -1
	bl       __dt__20J3DAnmFullLoader_v15Fv
	mr       r3, r31
	b        lbl_80072E4C

lbl_80072CA8:
	addi     r3, r1, 0x18
	bl       __ct__20J3DAnmFullLoader_v15Fv
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80072D00
	lis      r5, __vt__10J3DAnmBase@ha
	lis      r4, __vt__20J3DAnmVisibilityFull@ha
	addi     r0, r5, __vt__10J3DAnmBase@l
	li       r5, 0
	stw      r0, 0(r3)
	addi     r0, r4, __vt__20J3DAnmVisibilityFull@l
	lfs      f0, lbl_80516A90@sda21(r2)
	stb      r5, 4(r3)
	stb      r5, 5(r3)
	sth      r5, 6(r3)
	stfs     f0, 8(r3)
	stw      r0, 0(r3)
	sth      r5, 0xc(r3)
	sth      r5, 0xe(r3)
	stw      r5, 0x10(r3)
	stw      r5, 0x14(r3)

lbl_80072D00:
	stw      r3, 0x1c(r1)
	mr       r4, r31
	addi     r3, r1, 0x18
	bl       load__20J3DAnmFullLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x18
	li       r4, -1
	bl       __dt__20J3DAnmFullLoader_v15Fv
	mr       r3, r31
	b        lbl_80072E4C

lbl_80072D28:
	addi     r3, r1, 0x10
	bl       __ct__20J3DAnmFullLoader_v15Fv
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80072D84
	lis      r4, __vt__10J3DAnmBase@ha
	lis      r5, __vt__13J3DAnmCluster@ha
	addi     r0, r4, __vt__10J3DAnmBase@l
	lis      r4, __vt__17J3DAnmClusterFull@ha
	stw      r0, 0(r3)
	li       r6, 0
	lfs      f0, lbl_80516A90@sda21(r2)
	addi     r5, r5, __vt__13J3DAnmCluster@l
	stb      r6, 4(r3)
	addi     r0, r4, __vt__17J3DAnmClusterFull@l
	stb      r6, 5(r3)
	sth      r6, 6(r3)
	stfs     f0, 8(r3)
	stw      r5, 0(r3)
	stw      r6, 0xc(r3)
	stw      r0, 0(r3)
	stw      r6, 0x10(r3)

lbl_80072D84:
	stw      r3, 0x14(r1)
	mr       r4, r31
	addi     r3, r1, 0x10
	bl       load__20J3DAnmFullLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 0x10
	li       r4, -1
	bl       __dt__20J3DAnmFullLoader_v15Fv
	mr       r3, r31
	b        lbl_80072E4C

lbl_80072DAC:
	addi     r3, r1, 8
	bl       __ct__20J3DAnmFullLoader_v15Fv
	li       r3, 0x30
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80072E18
	lis      r4, __vt__10J3DAnmBase@ha
	lis      r5, __vt__14J3DAnmVtxColor@ha
	addi     r0, r4, __vt__10J3DAnmBase@l
	lis      r4, __vt__18J3DAnmVtxColorFull@ha
	stw      r0, 0(r3)
	li       r6, 0
	lfs      f0, lbl_80516A90@sda21(r2)
	addi     r5, r5, __vt__14J3DAnmVtxColor@l
	stb      r6, 4(r3)
	addi     r0, r4, __vt__18J3DAnmVtxColorFull@l
	stb      r6, 5(r3)
	sth      r6, 6(r3)
	stfs     f0, 8(r3)
	stw      r5, 0(r3)
	sth      r6, 0xc(r3)
	sth      r6, 0xe(r3)
	stw      r6, 0x10(r3)
	stw      r6, 0x14(r3)
	stw      r0, 0(r3)
	stw      r6, 0x18(r3)
	stw      r6, 0x1c(r3)

lbl_80072E18:
	stw      r3, 0xc(r1)
	mr       r4, r31
	addi     r3, r1, 8
	bl       load__20J3DAnmFullLoader_v15FPCv
	mr       r31, r3
	addi     r3, r1, 8
	li       r4, -1
	bl       __dt__20J3DAnmFullLoader_v15Fv
	mr       r3, r31
	b        lbl_80072E4C

lbl_80072E40:
	li       r3, 0
	b        lbl_80072E4C

lbl_80072E48:
	li       r3, 0

lbl_80072E4C:
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80072E64
 * Size:	00001C
 */
J3DAnmFullLoader_v15::J3DAnmFullLoader_v15()
{
	/*
	lis      r5, __vt__12J3DAnmLoader@ha
	lis      r4, __vt__20J3DAnmFullLoader_v15@ha
	addi     r5, r5, __vt__12J3DAnmLoader@l
	stw      r5, 0(r3)
	addi     r0, r4, __vt__20J3DAnmFullLoader_v15@l
	stw      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80072E80
 * Size:	000048
 */
J3DAnmLoader::~J3DAnmLoader()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80072EB0
	lis      r5, __vt__12J3DAnmLoader@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__12J3DAnmLoader@l
	stw      r0, 0(r31)
	ble      lbl_80072EB0
	bl       __dl__FPv

lbl_80072EB0:
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
 * Address:	80072EC8
 * Size:	00005C
 */
J3DAnmFullLoader_v15::~J3DAnmFullLoader_v15()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80072F0C
	lis      r3, __vt__20J3DAnmFullLoader_v15@ha
	addi     r0, r3, __vt__20J3DAnmFullLoader_v15@l
	stw      r0, 0(r31)
	beq      lbl_80072EFC
	lis      r3, __vt__12J3DAnmLoader@ha
	addi     r0, r3, __vt__12J3DAnmLoader@l
	stw      r0, 0(r31)

lbl_80072EFC:
	extsh.   r0, r4
	ble      lbl_80072F0C
	mr       r3, r31
	bl       __dl__FPv

lbl_80072F0C:
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
 * Address:	80072F24
 * Size:	00001C
 */
J3DAnmKeyLoader_v15::J3DAnmKeyLoader_v15()
{
	/*
	lis      r5, __vt__12J3DAnmLoader@ha
	lis      r4, __vt__19J3DAnmKeyLoader_v15@ha
	addi     r5, r5, __vt__12J3DAnmLoader@l
	stw      r5, 0(r3)
	addi     r0, r4, __vt__19J3DAnmKeyLoader_v15@l
	stw      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80072F40
 * Size:	00005C
 */
J3DAnmKeyLoader_v15::~J3DAnmKeyLoader_v15()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80072F84
	lis      r3, __vt__19J3DAnmKeyLoader_v15@ha
	addi     r0, r3, __vt__19J3DAnmKeyLoader_v15@l
	stw      r0, 0(r31)
	beq      lbl_80072F74
	lis      r3, __vt__12J3DAnmLoader@ha
	addi     r0, r3, __vt__12J3DAnmLoader@l
	stw      r0, 0(r31)

lbl_80072F74:
	extsh.   r0, r4
	ble      lbl_80072F84
	mr       r3, r31
	bl       __dl__FPv

lbl_80072F84:
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
 * Address:	80072F9C
 * Size:	000128
 */
void J3DAnmFullLoader_v15::load(const void*)
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
	b        lbl_800730A4

lbl_80072FC8:
	lwz      r4, 0(r29)
	cmpw     r4, r30
	beq      lbl_8007305C
	bge      lbl_80073014
	lis      r3, 0x434C4631@ha
	addi     r0, r3, 0x434C4631@l
	cmpw     r4, r0
	beq      lbl_8007306C
	bge      lbl_80073000
	lis      r3, 0x414E4631@ha
	addi     r0, r3, 0x414E4631@l
	cmpw     r4, r0
	beq      lbl_8007303C
	b        lbl_80073098

lbl_80073000:
	lis      r3, 0x50414631@ha
	addi     r0, r3, 0x50414631@l
	cmpw     r4, r0
	beq      lbl_8007304C
	b        lbl_80073098

lbl_80073014:
	lis      r3, 0x56434631@ha
	addi     r0, r3, 0x56434631@l
	cmpw     r4, r0
	beq      lbl_8007308C
	bge      lbl_80073098
	lis      r3, 0x56414631@ha
	addi     r0, r3, 0x56414631@l
	cmpw     r4, r0
	beq      lbl_8007307C
	b        lbl_80073098

lbl_8007303C:
	mr       r3, r27
	mr       r4, r29
	bl readAnmTransform__20J3DAnmFullLoader_v15FPC23J3DAnmTransformFullData b
lbl_80073098

lbl_8007304C:
	mr       r3, r27
	mr       r4, r29
	bl       readAnmColor__20J3DAnmFullLoader_v15FPC19J3DAnmColorFullData
	b        lbl_80073098

lbl_8007305C:
	mr       r3, r27
	mr       r4, r29
	bl readAnmTexPattern__20J3DAnmFullLoader_v15FPC24J3DAnmTexPatternFullData b
lbl_80073098

lbl_8007306C:
	mr       r3, r27
	mr       r4, r29
	bl       readAnmCluster__20J3DAnmFullLoader_v15FPC21J3DAnmClusterFullData
	b        lbl_80073098

lbl_8007307C:
	mr       r3, r27
	mr       r4, r29
	bl readAnmVisibility__20J3DAnmFullLoader_v15FPC24J3DAnmVisibilityFullData b
lbl_80073098

lbl_8007308C:
	mr       r3, r27
	mr       r4, r29
	bl       readAnmVtxColor__20J3DAnmFullLoader_v15FPC22J3DAnmVtxColorFullData

lbl_80073098:
	lwz      r0, 4(r29)
	addi     r28, r28, 1
	add      r29, r29, r0

lbl_800730A4:
	cmplw    r28, r31
	blt      lbl_80072FC8
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
 * Address:	800730C4
 * Size:	000140
 */
void J3DAnmFullLoader_v15::setResource(J3DAnmBase*, const void*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, 0x54505431@ha
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r30, r3
	lwz      r29, 0xc(r5)
	mr       r31, r4
	addi     r27, r5, 0x20
	addi     r28, r6, 0x54505431@l
	li       r26, 0
	b        lbl_800731E8

lbl_800730F4:
	lwz      r4, 0(r27)
	cmpw     r4, r28
	beq      lbl_80073190
	bge      lbl_80073140
	lis      r3, 0x434C4631@ha
	addi     r0, r3, 0x434C4631@l
	cmpw     r4, r0
	beq      lbl_800731A4
	bge      lbl_8007312C
	lis      r3, 0x414E4631@ha
	addi     r0, r3, 0x414E4631@l
	cmpw     r4, r0
	beq      lbl_80073168
	b        lbl_800731DC

lbl_8007312C:
	lis      r3, 0x50414631@ha
	addi     r0, r3, 0x50414631@l
	cmpw     r4, r0
	beq      lbl_8007317C
	b        lbl_800731DC

lbl_80073140:
	lis      r3, 0x56434631@ha
	addi     r0, r3, 0x56434631@l
	cmpw     r4, r0
	beq      lbl_800731CC
	bge      lbl_800731DC
	lis      r3, 0x56414631@ha
	addi     r0, r3, 0x56414631@l
	cmpw     r4, r0
	beq      lbl_800731B8
	b        lbl_800731DC

lbl_80073168:
	mr       r3, r30
	mr       r4, r31
	mr       r5, r27
	bl
setAnmTransform__20J3DAnmFullLoader_v15FP19J3DAnmTransformFullPC23J3DAnmTransformFullData
	b        lbl_800731DC

lbl_8007317C:
	mr       r3, r30
	mr       r4, r31
	mr       r5, r27
	bl
setAnmColor__20J3DAnmFullLoader_v15FP15J3DAnmColorFullPC19J3DAnmColorFullData b
lbl_800731DC

lbl_80073190:
	mr       r3, r30
	mr       r4, r31
	mr       r5, r27
	bl
setAnmTexPattern__20J3DAnmFullLoader_v15FP16J3DAnmTexPatternPC24J3DAnmTexPatternFullData
	b        lbl_800731DC

lbl_800731A4:
	mr       r3, r30
	mr       r4, r31
	mr       r5, r27
	bl
setAnmCluster__20J3DAnmFullLoader_v15FP17J3DAnmClusterFullPC21J3DAnmClusterFullData
	b        lbl_800731DC

lbl_800731B8:
	mr       r3, r30
	mr       r4, r31
	mr       r5, r27
	bl
setAnmVisibility__20J3DAnmFullLoader_v15FP20J3DAnmVisibilityFullPC24J3DAnmVisibilityFullData
	b        lbl_800731DC

lbl_800731CC:
	mr       r3, r30
	mr       r4, r31
	mr       r5, r27
	bl
setAnmVtxColor__20J3DAnmFullLoader_v15FP18J3DAnmVtxColorFullPC22J3DAnmVtxColorFullData

lbl_800731DC:
	lwz      r0, 4(r27)
	addi     r26, r26, 1
	add      r27, r27, r0

lbl_800731E8:
	cmplw    r26, r29
	blt      lbl_800730F4
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80073204
 * Size:	000028
 */
void J3DAnmFullLoader_v15::readAnmTransform(const J3DAnmTransformFullData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmTransform__20J3DAnmFullLoader_v15FP19J3DAnmTransformFullPC23J3DAnmTransformFullData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8007322C
 * Size:	000094
 */
void J3DAnmFullLoader_v15::setAnmTransform(J3DAnmTransformFull*, const J3DAnmTransformFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x78D0(r2)
	  stw       r0, 0x14(r1)
	  lhz       r0, 0xC(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xA(r5)
	  sth       r0, 0x1E(r30)
	  lbz       r0, 0x8(r5)
	  sth       r4, 0x6(r30)
	  lwz       r4, 0x14(r5)
	  stb       r0, 0x4(r30)
	  stfs      f0, 0x8(r30)
	  bl        -0x29E7C
	  stw       r3, 0x20(r30)
	  mr        r3, r31
	  lwz       r4, 0x18(r31)
	  bl        -0x29DCC
	  stw       r3, 0xC(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        -0x29DF4
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        -0x29DEC
	  stw       r3, 0x14(r30)
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
 * Address:	800732C0
 * Size:	000028
 */
void J3DAnmFullLoader_v15::readAnmColor(const J3DAnmColorFullData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmColor__20J3DAnmFullLoader_v15FP15J3DAnmColorFullPC19J3DAnmColorFullData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800732E8
 * Size:	0000CC
 */
void J3DAnmFullLoader_v15::setAnmColor(J3DAnmColorFull*, const J3DAnmColorFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x78D0(r2)
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
	  sth       r0, 0x14(r30)
	  bl        -0x29F50
	  stw       r3, 0x3C(r30)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  bl        -0x29EE8
	  stw       r3, 0x2C(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        -0x29EF8
	  stw       r3, 0x30(r30)
	  mr        r3, r31
	  lwz       r4, 0x2C(r31)
	  bl        -0x29F08
	  stw       r3, 0x34(r30)
	  mr        r3, r31
	  lwz       r4, 0x30(r31)
	  bl        -0x29F18
	  stw       r3, 0x38(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        -0x29EF8
	  stw       r3, 0x18(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        -0x29F20
	  mr        r4, r3
	  addi      r3, r30, 0x1C
	  bl        -0x44650
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
 * Address:	800733B4
 * Size:	000028
 */
void J3DAnmFullLoader_v15::readAnmTexPattern(const J3DAnmTexPatternFullData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmTexPattern__20J3DAnmFullLoader_v15FP16J3DAnmTexPatternPC24J3DAnmTexPatternFullData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800733DC
 * Size:	0000A4
 */
void J3DAnmFullLoader_v15::setAnmTexPattern(J3DAnmTexPattern*, const J3DAnmTexPatternFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x78D0(r2)
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
	  sth       r4, 0x16(r30)
	  lwz       r4, 0x10(r5)
	  sth       r0, 0x14(r30)
	  bl        -0x2A064
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x14(r31)
	  bl        -0x29FB4
	  stw       r3, 0xC(r30)
	  mr        r3, r31
	  lwz       r4, 0x18(r31)
	  bl        -0x29FC4
	  stw       r3, 0x18(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        -0x29FEC
	  mr        r4, r3
	  addi      r3, r30, 0x1C
	  bl        -0x4471C
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
 * Address:	80073480
 * Size:	000028
 */
void J3DAnmFullLoader_v15::readAnmVisibility(const J3DAnmVisibilityFullData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmVisibility__20J3DAnmFullLoader_v15FP20J3DAnmVisibilityFullPC24J3DAnmVisibilityFullData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800734A8
 * Size:	00007C
 */
void J3DAnmFullLoader_v15::setAnmVisibility(J3DAnmVisibilityFull*, const J3DAnmVisibilityFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x78D0(r2)
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
	  sth       r4, 0xC(r30)
	  lwz       r4, 0x10(r5)
	  sth       r0, 0xE(r30)
	  bl        -0x2A178
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x14(r31)
	  bl        -0x2A0B0
	  stw       r3, 0x14(r30)
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
 * Address:	80073524
 * Size:	000028
 */
void J3DAnmFullLoader_v15::readAnmCluster(const J3DAnmClusterFullData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmCluster__20J3DAnmFullLoader_v15FP17J3DAnmClusterFullPC21J3DAnmClusterFullData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8007354C
 * Size:	00006C
 */
void J3DAnmFullLoader_v15::setAnmCluster(J3DAnmClusterFull*, const J3DAnmClusterFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x78D0(r2)
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xA(r5)
	  sth       r4, 0x6(r30)
	  lwz       r4, 0x10(r5)
	  stb       r0, 0x4(r30)
	  stfs      f0, 0x8(r30)
	  bl        0xE98
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x14(r31)
	  bl        -0x2A0E4
	  stw       r3, 0xC(r30)
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
 * Address:	800735B8
 * Size:	000028
 */
void J3DAnmFullLoader_v15::readAnmVtxColor(const J3DAnmVtxColorFullData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmVtxColor__20J3DAnmFullLoader_v15FP18J3DAnmVtxColorFullPC22J3DAnmVtxColorFullData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800735E0
 * Size:	000170
 */
void J3DAnmFullLoader_v15::setAnmVtxColor(J3DAnmVtxColorFull*, const J3DAnmVtxColorFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x78D0(r2)
	  stw       r0, 0x24(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  lha       r4, 0xA(r5)
	  stw       r29, 0x14(r1)
	  sth       r4, 0x6(r30)
	  lhz       r4, 0xC(r5)
	  stb       r0, 0x4(r30)
	  lhz       r0, 0xE(r5)
	  stfs      f0, 0x8(r30)
	  sth       r4, 0xC(r30)
	  lwz       r4, 0x18(r5)
	  sth       r0, 0xE(r30)
	  bl        -0x2A254
	  stw       r3, 0x18(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        -0x2A264
	  stw       r3, 0x1C(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        -0x2A244
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  bl        -0x2A254
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        -0x2A1EC
	  lwz       r4, 0x2C(r31)
	  mr        r29, r3
	  mr        r3, r31
	  bl        -0x2A1FC
	  li        r7, 0
	  li        r5, 0
	  b         .loc_0xD0

	.loc_0xB0:
	  lwz       r4, 0x10(r30)
	  addi      r6, r5, 0x4
	  addi      r5, r5, 0x8
	  addi      r7, r7, 0x1
	  lwzx      r0, r4, r6
	  rlwinm    r0,r0,1,0,30
	  add       r0, r29, r0
	  stwx      r0, r4, r6

	.loc_0xD0:
	  lhz       r0, 0xC(r30)
	  cmpw      r7, r0
	  blt+      .loc_0xB0
	  li        r7, 0
	  li        r5, 0
	  b         .loc_0x108

	.loc_0xE8:
	  lwz       r4, 0x14(r30)
	  addi      r6, r5, 0x4
	  addi      r5, r5, 0x8
	  addi      r7, r7, 0x1
	  lwzx      r0, r4, r6
	  rlwinm    r0,r0,1,0,30
	  add       r0, r3, r0
	  stwx      r0, r4, r6

	.loc_0x108:
	  lhz       r0, 0xE(r30)
	  cmpw      r7, r0
	  blt+      .loc_0xE8
	  lwz       r4, 0x30(r31)
	  mr        r3, r31
	  bl        -0x2A2A8
	  stw       r3, 0x20(r30)
	  mr        r3, r31
	  lwz       r4, 0x34(r31)
	  bl        -0x2A2B8
	  stw       r3, 0x24(r30)
	  mr        r3, r31
	  lwz       r4, 0x38(r31)
	  bl        -0x2A2C8
	  stw       r3, 0x28(r30)
	  mr        r3, r31
	  lwz       r4, 0x3C(r31)
	  bl        -0x2A2D8
	  stw       r3, 0x2C(r30)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80073750
 * Size:	000128
 */
void J3DAnmKeyLoader_v15::load(const void*)
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
	b        lbl_80073858

lbl_8007377C:
	lwz      r4, 0(r29)
	cmpw     r4, r30
	beq      lbl_80073830
	bge      lbl_800737C8
	lis      r3, 0x434C4B31@ha
	addi     r0, r3, 0x434C4B31@l
	cmpw     r4, r0
	beq      lbl_80073810
	bge      lbl_800737B4
	lis      r3, 0x414E4B31@ha
	addi     r0, r3, 0x414E4B31@l
	cmpw     r4, r0
	beq      lbl_800737F0
	b        lbl_8007384C

lbl_800737B4:
	lis      r3, 0x50414B31@ha
	addi     r0, r3, 0x50414B31@l
	cmpw     r4, r0
	beq      lbl_80073800
	b        lbl_8007384C

lbl_800737C8:
	lis      r3, 0x56434B31@ha
	addi     r0, r3, 0x56434B31@l
	cmpw     r4, r0
	beq      lbl_80073840
	bge      lbl_8007384C
	lis      r3, 0x54544B31@ha
	addi     r0, r3, 0x54544B31@l
	cmpw     r4, r0
	beq      lbl_80073820
	b        lbl_8007384C

lbl_800737F0:
	mr       r3, r27
	mr       r4, r29
	bl       readAnmTransform__19J3DAnmKeyLoader_v15FPC22J3DAnmTransformKeyData
	b        lbl_8007384C

lbl_80073800:
	mr       r3, r27
	mr       r4, r29
	bl       readAnmColor__19J3DAnmKeyLoader_v15FPC18J3DAnmColorKeyData
	b        lbl_8007384C

lbl_80073810:
	mr       r3, r27
	mr       r4, r29
	bl       readAnmCluster__19J3DAnmKeyLoader_v15FPC20J3DAnmClusterKeyData
	b        lbl_8007384C

lbl_80073820:
	mr       r3, r27
	mr       r4, r29
	bl readAnmTextureSRT__19J3DAnmKeyLoader_v15FPC23J3DAnmTextureSRTKeyData b
lbl_8007384C

lbl_80073830:
	mr       r3, r27
	mr       r4, r29
	bl       readAnmTevReg__19J3DAnmKeyLoader_v15FPC19J3DAnmTevRegKeyData
	b        lbl_8007384C

lbl_80073840:
	mr       r3, r27
	mr       r4, r29
	bl       readAnmVtxColor__19J3DAnmKeyLoader_v15FPC21J3DAnmVtxColorKeyData

lbl_8007384C:
	lwz      r0, 4(r29)
	addi     r28, r28, 1
	add      r29, r29, r0

lbl_80073858:
	cmplw    r28, r31
	blt      lbl_8007377C
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
 * Address:	80073878
 * Size:	000140
 */
void J3DAnmKeyLoader_v15::setResource(J3DAnmBase*, const void*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, 0x54524B31@ha
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r30, r3
	lwz      r29, 0xc(r5)
	mr       r31, r4
	addi     r27, r5, 0x20
	addi     r28, r6, 0x54524B31@l
	li       r26, 0
	b        lbl_8007399C

lbl_800738A8:
	lwz      r4, 0(r27)
	cmpw     r4, r28
	beq      lbl_8007396C
	bge      lbl_800738F4
	lis      r3, 0x434C4B31@ha
	addi     r0, r3, 0x434C4B31@l
	cmpw     r4, r0
	beq      lbl_80073944
	bge      lbl_800738E0
	lis      r3, 0x414E4B31@ha
	addi     r0, r3, 0x414E4B31@l
	cmpw     r4, r0
	beq      lbl_8007391C
	b        lbl_80073990

lbl_800738E0:
	lis      r3, 0x50414B31@ha
	addi     r0, r3, 0x50414B31@l
	cmpw     r4, r0
	beq      lbl_80073930
	b        lbl_80073990

lbl_800738F4:
	lis      r3, 0x56434B31@ha
	addi     r0, r3, 0x56434B31@l
	cmpw     r4, r0
	beq      lbl_80073980
	bge      lbl_80073990
	lis      r3, 0x54544B31@ha
	addi     r0, r3, 0x54544B31@l
	cmpw     r4, r0
	beq      lbl_80073958
	b        lbl_80073990

lbl_8007391C:
	mr       r3, r30
	mr       r4, r31
	mr       r5, r27
	bl
setAnmTransform__19J3DAnmKeyLoader_v15FP18J3DAnmTransformKeyPC22J3DAnmTransformKeyData
	b        lbl_80073990

lbl_80073930:
	mr       r3, r30
	mr       r4, r31
	mr       r5, r27
	bl
setAnmColor__19J3DAnmKeyLoader_v15FP14J3DAnmColorKeyPC18J3DAnmColorKeyData b
lbl_80073990

lbl_80073944:
	mr       r3, r30
	mr       r4, r31
	mr       r5, r27
	bl
setAnmCluster__19J3DAnmKeyLoader_v15FP16J3DAnmClusterKeyPC20J3DAnmClusterKeyData
	b        lbl_80073990

lbl_80073958:
	mr       r3, r30
	mr       r4, r31
	mr       r5, r27
	bl
setAnmTextureSRT__19J3DAnmKeyLoader_v15FP19J3DAnmTextureSRTKeyPC23J3DAnmTextureSRTKeyData
	b        lbl_80073990

lbl_8007396C:
	mr       r3, r30
	mr       r4, r31
	mr       r5, r27
	bl
setAnmTevReg__19J3DAnmKeyLoader_v15FP15J3DAnmTevRegKeyPC19J3DAnmTevRegKeyData b
lbl_80073990

lbl_80073980:
	mr       r3, r30
	mr       r4, r31
	mr       r5, r27
	bl
setAnmVtxColor__19J3DAnmKeyLoader_v15FP17J3DAnmVtxColorKeyPC21J3DAnmVtxColorKeyData

lbl_80073990:
	lwz      r0, 4(r27)
	addi     r26, r26, 1
	add      r27, r27, r0

lbl_8007399C:
	cmplw    r26, r29
	blt      lbl_800738A8
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800739B8
 * Size:	000028
 */
void J3DAnmKeyLoader_v15::readAnmTransform(const J3DAnmTransformKeyData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmTransform__19J3DAnmKeyLoader_v15FP18J3DAnmTransformKeyPC22J3DAnmTransformKeyData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800739E0
 * Size:	00009C
 */
void J3DAnmKeyLoader_v15::setAnmTransform(J3DAnmTransformKey*, const J3DAnmTransformKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x78D0(r2)
	  stw       r0, 0x14(r1)
	  lha       r0, 0xA(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lhz       r4, 0xC(r5)
	  sth       r4, 0x1E(r30)
	  lbz       r4, 0x8(r5)
	  sth       r0, 0x6(r30)
	  lbz       r0, 0x9(r5)
	  stb       r4, 0x4(r30)
	  lwz       r4, 0x14(r5)
	  stw       r0, 0x20(r30)
	  stfs      f0, 0x8(r30)
	  bl        -0x2A560
	  stw       r3, 0x24(r30)
	  mr        r3, r31
	  lwz       r4, 0x18(r31)
	  bl        -0x2A588
	  stw       r3, 0xC(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        -0x2A5B0
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        -0x2A5A8
	  stw       r3, 0x14(r30)
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
 * Address:	80073A7C
 * Size:	000028
 */
void J3DAnmKeyLoader_v15::readAnmTextureSRT(const J3DAnmTextureSRTKeyData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmTextureSRT__19J3DAnmKeyLoader_v15FP19J3DAnmTextureSRTKeyPC23J3DAnmTextureSRTKeyData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80073AA4
 * Size:	0001D8
 */
void J3DAnmKeyLoader_v15::setAnmTextureSRT(J3DAnmTextureSRTKey*, const J3DAnmTextureSRTKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lhz       r6, 0xC(r5)
	  stw       r0, 0x14(r1)
	  lha       r0, 0xA(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  lfs       f0, -0x78D0(r2)
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  sth       r6, 0x14(r4)
	  lbz       r4, 0x8(r5)
	  sth       r0, 0x6(r30)
	  lbz       r0, 0x9(r5)
	  stb       r4, 0x4(r30)
	  lhz       r4, 0xE(r5)
	  stw       r0, 0xC(r30)
	  lhz       r5, 0x10(r5)
	  stfs      f0, 0x8(r30)
	  lhz       r0, 0x12(r31)
	  sth       r6, 0x14(r30)
	  sth       r4, 0x16(r30)
	  lwz       r4, 0x14(r31)
	  sth       r5, 0x18(r30)
	  sth       r0, 0x1A(r30)
	  bl        -0x2A640
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x18(r31)
	  bl        -0x2A698
	  stw       r3, 0x2C(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        -0x2A6C0
	  mr        r4, r3
	  addi      r3, r30, 0x30
	  bl        -0x44DF0
	  lwz       r4, 0x20(r31)
	  mr        r3, r31
	  bl        -0x2A6F0
	  stw       r3, 0x28(r30)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  bl        -0x2A718
	  stw       r3, 0x40(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        -0x2A6B0
	  stw       r3, 0x1C(r30)
	  mr        r3, r31
	  lwz       r4, 0x2C(r31)
	  bl        -0x2A6D8
	  stw       r3, 0x20(r30)
	  mr        r3, r31
	  lwz       r4, 0x30(r31)
	  bl        -0x2A6D0
	  lwz       r4, 0x44(r31)
	  stw       r3, 0x24(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x108
	  mr        r3, r31
	  bl        -0x2A730
	  mr        r4, r3
	  addi      r3, r30, 0x64
	  bl        -0x44E60

	.loc_0x108:
	  lhz       r4, 0x34(r31)
	  mr        r3, r31
	  lhz       r0, 0x36(r31)
	  sth       r4, 0x4A(r30)
	  lhz       r4, 0x38(r31)
	  sth       r0, 0x44(r30)
	  lhz       r0, 0x3A(r31)
	  sth       r4, 0x46(r30)
	  lwz       r4, 0x3C(r31)
	  sth       r0, 0x48(r30)
	  bl        -0x2A708
	  stw       r3, 0x58(r30)
	  mr        r3, r31
	  lwz       r4, 0x40(r31)
	  bl        -0x2A760
	  stw       r3, 0x60(r30)
	  mr        r3, r31
	  lwz       r4, 0x48(r31)
	  bl        -0x2A7A0
	  stw       r3, 0x5C(r30)
	  mr        r3, r31
	  lwz       r4, 0x4C(r31)
	  bl        -0x2A7C8
	  stw       r3, 0x74(r30)
	  mr        r3, r31
	  lwz       r4, 0x50(r31)
	  bl        -0x2A760
	  stw       r3, 0x4C(r30)
	  mr        r3, r31
	  lwz       r4, 0x54(r31)
	  bl        -0x2A788
	  stw       r3, 0x50(r30)
	  mr        r3, r31
	  lwz       r4, 0x58(r31)
	  bl        -0x2A780
	  lwz       r0, 0x5C(r31)
	  stw       r3, 0x54(r30)
	  cmpwi     r0, 0x2
	  bge-      .loc_0x1B8
	  cmpwi     r0, 0
	  bge-      .loc_0x1B0
	  b         .loc_0x1B8

	.loc_0x1B0:
	  stw       r0, 0x78(r30)
	  b         .loc_0x1C0

	.loc_0x1B8:
	  li        r0, 0
	  stw       r0, 0x78(r30)

	.loc_0x1C0:
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
 * Address:	80073C7C
 * Size:	000028
 */
void J3DAnmKeyLoader_v15::readAnmColor(const J3DAnmColorKeyData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmColor__19J3DAnmKeyLoader_v15FP14J3DAnmColorKeyPC18J3DAnmColorKeyData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80073CA4
 * Size:	0000EC
 */
void J3DAnmKeyLoader_v15::setAnmColor(J3DAnmColorKey*, const J3DAnmColorKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x78D0(r2)
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
	  sth       r0, 0x14(r30)
	  lhz       r0, 0x12(r5)
	  sth       r4, 0xC(r30)
	  lhz       r4, 0x14(r5)
	  sth       r0, 0xE(r30)
	  lhz       r0, 0x16(r5)
	  sth       r4, 0x10(r30)
	  lwz       r4, 0x18(r5)
	  sth       r0, 0x12(r30)
	  bl        -0x2A8E4
	  stw       r3, 0x3C(r30)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  bl        -0x2A87C
	  stw       r3, 0x2C(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        -0x2A88C
	  stw       r3, 0x30(r30)
	  mr        r3, r31
	  lwz       r4, 0x2C(r31)
	  bl        -0x2A89C
	  stw       r3, 0x34(r30)
	  mr        r3, r31
	  lwz       r4, 0x30(r31)
	  bl        -0x2A8AC
	  stw       r3, 0x38(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        -0x2A8D4
	  stw       r3, 0x18(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        -0x2A8FC
	  mr        r4, r3
	  addi      r3, r30, 0x1C
	  bl        -0x4502C
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
 * Address:	80073D90
 * Size:	000028
 */
void J3DAnmKeyLoader_v15::readAnmCluster(const J3DAnmClusterKeyData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmCluster__19J3DAnmKeyLoader_v15FP16J3DAnmClusterKeyPC20J3DAnmClusterKeyData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80073DB8
 * Size:	00006C
 */
void J3DAnmKeyLoader_v15::setAnmCluster(J3DAnmClusterKey*, const J3DAnmClusterKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x78D0(r2)
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xA(r5)
	  sth       r4, 0x6(r30)
	  lwz       r4, 0x10(r5)
	  stb       r0, 0x4(r30)
	  stfs      f0, 0x8(r30)
	  bl        0x614
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x14(r31)
	  bl        -0x2A950
	  stw       r3, 0xC(r30)
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
 * Address:	80073E24
 * Size:	000028
 */
void J3DAnmKeyLoader_v15::readAnmTevReg(const J3DAnmTevRegKeyData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmTevReg__19J3DAnmKeyLoader_v15FP15J3DAnmTevRegKeyPC19J3DAnmTevRegKeyData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80073E4C
 * Size:	00018C
 */
void J3DAnmKeyLoader_v15::setAnmTevReg(J3DAnmTevRegKey*, const J3DAnmTevRegKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x78D0(r2)
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
	  sth       r0, 0xC(r30)
	  bl        -0x2AAE4
	  stw       r3, 0x48(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        -0x2AA1C
	  stw       r3, 0x20(r30)
	  mr        r3, r31
	  lwz       r4, 0x30(r31)
	  bl        -0x2AA44
	  mr        r4, r3
	  addi      r3, r30, 0x24
	  bl        -0x45174
	  lhz       r0, 0xE(r31)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  sth       r0, 0xE(r30)
	  bl        -0x2AB3C
	  stw       r3, 0x4C(r30)
	  mr        r3, r31
	  lwz       r4, 0x2C(r31)
	  bl        -0x2AA5C
	  stw       r3, 0x34(r30)
	  mr        r3, r31
	  lwz       r4, 0x34(r31)
	  bl        -0x2AA84
	  mr        r4, r3
	  addi      r3, r30, 0x38
	  bl        -0x451B4
	  lhz       r4, 0x10(r31)
	  mr        r3, r31
	  lhz       r0, 0x12(r31)
	  sth       r4, 0x10(r30)
	  lhz       r4, 0x14(r31)
	  sth       r0, 0x12(r30)
	  lhz       r0, 0x16(r31)
	  sth       r4, 0x14(r30)
	  lwz       r4, 0x38(r31)
	  sth       r0, 0x16(r30)
	  bl        -0x2AA8C
	  stw       r3, 0x50(r30)
	  mr        r3, r31
	  lwz       r4, 0x3C(r31)
	  bl        -0x2AA9C
	  stw       r3, 0x54(r30)
	  mr        r3, r31
	  lwz       r4, 0x40(r31)
	  bl        -0x2AAAC
	  stw       r3, 0x58(r30)
	  mr        r3, r31
	  lwz       r4, 0x44(r31)
	  bl        -0x2AABC
	  stw       r3, 0x5C(r30)
	  mr        r3, r31
	  lhz       r4, 0x18(r31)
	  lhz       r0, 0x1A(r31)
	  sth       r4, 0x18(r30)
	  lhz       r4, 0x1C(r31)
	  sth       r0, 0x1A(r30)
	  lhz       r0, 0x1E(r31)
	  sth       r4, 0x1C(r30)
	  lwz       r4, 0x48(r31)
	  sth       r0, 0x1E(r30)
	  bl        -0x2AAEC
	  stw       r3, 0x60(r30)
	  mr        r3, r31
	  lwz       r4, 0x4C(r31)
	  bl        -0x2AAFC
	  stw       r3, 0x64(r30)
	  mr        r3, r31
	  lwz       r4, 0x50(r31)
	  bl        -0x2AB0C
	  stw       r3, 0x68(r30)
	  mr        r3, r31
	  lwz       r4, 0x54(r31)
	  bl        -0x2AB1C
	  stw       r3, 0x6C(r30)
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
 * Address:	80073FD8
 * Size:	000028
 */
void J3DAnmKeyLoader_v15::readAnmVtxColor(const J3DAnmVtxColorKeyData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	bl
	setAnmVtxColor__19J3DAnmKeyLoader_v15FP17J3DAnmVtxColorKeyPC21J3DAnmVtxColorKeyData
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80074000
 * Size:	000170
 */
void J3DAnmKeyLoader_v15::setAnmVtxColor(J3DAnmVtxColorKey*, const J3DAnmVtxColorKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x78D0(r2)
	  stw       r0, 0x24(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  lha       r4, 0xA(r5)
	  stw       r29, 0x14(r1)
	  sth       r4, 0x6(r30)
	  lhz       r4, 0xC(r5)
	  stb       r0, 0x4(r30)
	  lhz       r0, 0xE(r5)
	  stfs      f0, 0x8(r30)
	  sth       r4, 0xC(r30)
	  lwz       r4, 0x18(r5)
	  sth       r0, 0xE(r30)
	  bl        -0x2AC2C
	  stw       r3, 0x18(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        -0x2AC3C
	  stw       r3, 0x1C(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        -0x2AC64
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  bl        -0x2AC74
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        -0x2AC0C
	  lwz       r4, 0x2C(r31)
	  mr        r29, r3
	  mr        r3, r31
	  bl        -0x2AC1C
	  li        r7, 0
	  li        r5, 0
	  b         .loc_0xD0

	.loc_0xB0:
	  lwz       r4, 0x10(r30)
	  addi      r6, r5, 0x4
	  addi      r5, r5, 0x8
	  addi      r7, r7, 0x1
	  lwzx      r0, r4, r6
	  rlwinm    r0,r0,1,0,30
	  add       r0, r29, r0
	  stwx      r0, r4, r6

	.loc_0xD0:
	  lhz       r0, 0xC(r30)
	  cmpw      r7, r0
	  blt+      .loc_0xB0
	  li        r7, 0
	  li        r5, 0
	  b         .loc_0x108

	.loc_0xE8:
	  lwz       r4, 0x14(r30)
	  addi      r6, r5, 0x4
	  addi      r5, r5, 0x8
	  addi      r7, r7, 0x1
	  lwzx      r0, r4, r6
	  rlwinm    r0,r0,1,0,30
	  add       r0, r3, r0
	  stwx      r0, r4, r6

	.loc_0x108:
	  lhz       r0, 0xE(r30)
	  cmpw      r7, r0
	  blt+      .loc_0xE8
	  lwz       r4, 0x30(r31)
	  mr        r3, r31
	  bl        -0x2AC80
	  stw       r3, 0x20(r30)
	  mr        r3, r31
	  lwz       r4, 0x34(r31)
	  bl        -0x2AC90
	  stw       r3, 0x24(r30)
	  mr        r3, r31
	  lwz       r4, 0x38(r31)
	  bl        -0x2ACA0
	  stw       r3, 0x28(r30)
	  mr        r3, r31
	  lwz       r4, 0x3C(r31)
	  bl        -0x2ACB0
	  stw       r3, 0x2C(r30)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80074170
 * Size:	00005C
 */
J3DAnmVisibilityFull::~J3DAnmVisibilityFull()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_800741B4
	lis      r3, __vt__20J3DAnmVisibilityFull@ha
	addi     r0, r3, __vt__20J3DAnmVisibilityFull@l
	stw      r0, 0(r31)
	beq      lbl_800741A4
	lis      r3, __vt__10J3DAnmBase@ha
	addi     r0, r3, __vt__10J3DAnmBase@l
	stw      r0, 0(r31)

lbl_800741A4:
	extsh.   r0, r4
	ble      lbl_800741B4
	mr       r3, r31
	bl       __dl__FPv

lbl_800741B4:
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
 * Address:	800741CC
 * Size:	000008
 */
u32 J3DAnmVisibilityFull::getKind() const { return 0x6; }

/*
 * --INFO--
 * Address:	800741D4
 * Size:	000074
 */
J3DAnmTexPattern::~J3DAnmTexPattern()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80074230
	lis      r3, __vt__16J3DAnmTexPattern@ha
	addic.   r0, r31, 0x1c
	addi     r0, r3, __vt__16J3DAnmTexPattern@l
	stw      r0, 0(r31)
	beq      lbl_8007420C
	lis      r3, __vt__10JUTNameTab@ha
	addi     r0, r3, __vt__10JUTNameTab@l
	stw      r0, 0x1c(r31)

lbl_8007420C:
	cmplwi   r31, 0
	beq      lbl_80074220
	lis      r3, __vt__10J3DAnmBase@ha
	addi     r0, r3, __vt__10J3DAnmBase@l
	stw      r0, 0(r31)

lbl_80074220:
	extsh.   r0, r4
	ble      lbl_80074230
	mr       r3, r31
	bl       __dl__FPv

lbl_80074230:
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
 * Address:	80074248
 * Size:	000008
 */
u32 J3DAnmTexPattern::getKind() const { return 0x2; }

/*
 * --INFO--
 * Address:	80074250
 * Size:	000088
 */
J3DAnmTevRegKey::~J3DAnmTevRegKey()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_800742C0
	lis      r3, __vt__15J3DAnmTevRegKey@ha
	addic.   r0, r31, 0x38
	addi     r0, r3, __vt__15J3DAnmTevRegKey@l
	stw      r0, 0(r31)
	beq      lbl_80074288
	lis      r3, __vt__10JUTNameTab@ha
	addi     r0, r3, __vt__10JUTNameTab@l
	stw      r0, 0x38(r31)

lbl_80074288:
	addic.   r0, r31, 0x24
	beq      lbl_8007429C
	lis      r3, __vt__10JUTNameTab@ha
	addi     r0, r3, __vt__10JUTNameTab@l
	stw      r0, 0x24(r31)

lbl_8007429C:
	cmplwi   r31, 0
	beq      lbl_800742B0
	lis      r3, __vt__10J3DAnmBase@ha
	addi     r0, r3, __vt__10J3DAnmBase@l
	stw      r0, 0(r31)

lbl_800742B0:
	extsh.   r0, r4
	ble      lbl_800742C0
	mr       r3, r31
	bl       __dl__FPv

lbl_800742C0:
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
 * Address:	800742D8
 * Size:	000008
 */
u32 J3DAnmTevRegKey::getKind() const { return 0x5; }

/*
 * --INFO--
 * Address:	800742E0
 * Size:	000088
 */
J3DAnmTextureSRTKey::~J3DAnmTextureSRTKey()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80074350
	lis      r3, __vt__19J3DAnmTextureSRTKey@ha
	addic.   r0, r31, 0x64
	addi     r0, r3, __vt__19J3DAnmTextureSRTKey@l
	stw      r0, 0(r31)
	beq      lbl_80074318
	lis      r3, __vt__10JUTNameTab@ha
	addi     r0, r3, __vt__10JUTNameTab@l
	stw      r0, 0x64(r31)

lbl_80074318:
	addic.   r0, r31, 0x30
	beq      lbl_8007432C
	lis      r3, __vt__10JUTNameTab@ha
	addi     r0, r3, __vt__10JUTNameTab@l
	stw      r0, 0x30(r31)

lbl_8007432C:
	cmplwi   r31, 0
	beq      lbl_80074340
	lis      r3, __vt__10J3DAnmBase@ha
	addi     r0, r3, __vt__10J3DAnmBase@l
	stw      r0, 0(r31)

lbl_80074340:
	extsh.   r0, r4
	ble      lbl_80074350
	mr       r3, r31
	bl       __dl__FPv

lbl_80074350:
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
 * Address:	80074368
 * Size:	000008
 */
u32 J3DAnmTextureSRTKey::getKind() const { return 0x4; }

/*
 * --INFO--
 * Address:	80074370
 * Size:	00006C
 */
J3DAnmTransformKey::~J3DAnmTransformKey()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_800743C4
	lis      r3, __vt__18J3DAnmTransformKey@ha
	addi     r0, r3, __vt__18J3DAnmTransformKey@l
	stw      r0, 0(r31)
	beq      lbl_800743B4
	lis      r3, __vt__15J3DAnmTransform@ha
	addi     r0, r3, __vt__15J3DAnmTransform@l
	stw      r0, 0(r31)
	beq      lbl_800743B4
	lis      r3, __vt__10J3DAnmBase@ha
	addi     r0, r3, __vt__10J3DAnmBase@l
	stw      r0, 0(r31)

lbl_800743B4:
	extsh.   r0, r4
	ble      lbl_800743C4
	mr       r3, r31
	bl       __dl__FPv

lbl_800743C4:
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
 * Address:	800743DC
 * Size:	000008
 */
u32 J3DAnmTransformKey::getKind() const { return 0x8; }

/*
 * --INFO--
 * Address:	800743E4
 * Size:	000024
 */
void J3DAnmTransformKey::getTransform(unsigned short, J3DTransformInfo*) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, 8(r3)
	stw      r0, 0x14(r1)
	bl       calcTransform__18J3DAnmTransformKeyCFfUsP16J3DTransformInfo
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80074408
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmClusterKeyTable>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_80074418
	li       r3, 0
	blr

lbl_80074418:
	add      r3, r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80074420
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmClusterFullTable>(const void*, const void*)
{
	/*
	cmplwi   r4, 0
	bne      lbl_80074430
	li       r3, 0
	blr

lbl_80074430:
	add      r3, r3, r4
	blr
	*/
}
