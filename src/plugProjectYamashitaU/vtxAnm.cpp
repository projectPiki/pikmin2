#include "Game/FieldVtxColorMgr.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047B420
    lbl_8047B420:
        .4byte 0x4669656C
        .4byte 0x64567478
        .4byte 0x436F6C6F
        .4byte 0x724D6772
        .4byte 0x00000000
    .global lbl_8047B434
    lbl_8047B434:
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000001
        .4byte 0x00000002
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game16FieldVtxColorMgr
    __vt__Q24Game16FieldVtxColorMgr:
        .4byte 0
        .4byte 0
        .4byte calc__Q24Game16FieldVtxColorMgrFP15J3DVertexBuffer
        .4byte __dt__Q24Game16FieldVtxColorMgrFv
        .4byte 0
        .4byte 0
        .4byte "@12@__dt__Q24Game16FieldVtxColorMgrFv"
        .4byte getChildCount__5CNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80517CC0
    lbl_80517CC0:
        .4byte 0x41200000
    .global lbl_80517CC4
    lbl_80517CC4:
        .4byte 0x00000000
    .global lbl_80517CC8
    lbl_80517CC8:
        .float 1.0
    .global lbl_80517CCC
    lbl_80517CCC:
        .4byte 0x3C23D70A
    .global lbl_80517CD0
    lbl_80517CD0:
        .4byte 0x437F0000
    .global lbl_80517CD4
    lbl_80517CD4:
        .float 0.5
    .global lbl_80517CD8
    lbl_80517CD8:
        .4byte 0x401C0000
        .4byte 0x00000000
    .global lbl_80517CE0
    lbl_80517CE0:
        .4byte 0x43300000
        .4byte 0x80000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80122450
 * Size:	0000B0
 */
FieldVtxColorMgr::FieldVtxColorMgr(J3DModelData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r7, __vt__5CNode@ha
	lis      r6, lbl_8047B420@ha
	stw      r0, 0x14(r1)
	lis      r5, __vt__15J3DVtxColorCalc@ha
	addi     r0, r5, __vt__15J3DVtxColorCalc@l
	li       r8, 0
	stw      r31, 0xc(r1)
	lis      r5, __vt__Q24Game16FieldVtxColorMgr@ha
	addi     r7, r7, __vt__5CNode@l
	addi     r6, r6, lbl_8047B420@l
	stw      r0, 0(r3)
	li       r0, 1
	addi     r5, r5, __vt__Q24Game16FieldVtxColorMgr@l
	lfs      f0, lbl_80517CCC@sda21(r2)
	stw      r0, 4(r3)
	addi     r0, r5, 0x10
	mr       r31, r3
	stw      r8, 8(r3)
	stw      r7, 0xc(r3)
	stw      r8, 0x1c(r3)
	stw      r8, 0x18(r3)
	stw      r8, 0x14(r3)
	stw      r8, 0x10(r3)
	stw      r6, 0x20(r3)
	stw      r5, 0(r3)
	stw      r0, 0xc(r3)
	stw      r8, 0x24(r3)
	stw      r8, 0x28(r3)
	stw      r8, 0x30(r3)
	stfs     f0, 0x34(r3)
	stb      r8, 0x38(r3)
	stb      r8, 0x39(r3)
	stb      r8, 0x3a(r3)
	stb      r8, 0x3b(r3)
	stw      r4, 0x24(r3)
	bl       createFieldVtxColorInfo__Q24Game16FieldVtxColorMgrFv
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
 * Address:	80122500
 * Size:	0001F8
 */
void FieldVtxColorMgr::createFieldVtxColorInfo()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r4, -4
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r3, 0x24(r3)
	lwz      r31, 0xac(r3)
	stw      r0, 0x2c(r30)
	lwz      r3, 0x24(r30)
	lwz      r29, 0x88(r3)
	mulli    r3, r29, 6
	addi     r3, r3, 0x10
	bl       __nwa__FUli
	lis      r4, __ct__Q24Game17FieldVtxColorInfoFv@ha
	mr       r7, r29
	addi     r4, r4, __ct__Q24Game17FieldVtxColorInfoFv@l
	li       r5, 0
	li       r6, 6
	bl       __construct_new_array
	stw      r3, 0x28(r30)
	li       r5, 0
	b        lbl_80122584

lbl_8012256C:
	clrlwi   r0, r5, 0x10
	lwz      r4, 0x28(r30)
	mulli    r3, r0, 6
	addi     r0, r3, 2
	sthx     r5, r4, r0
	addi     r5, r5, 1

lbl_80122584:
	lwz      r4, 0x24(r30)
	clrlwi   r0, r5, 0x10
	lwz      r3, 0x88(r4)
	cmplw    r0, r3
	blt      lbl_8012256C
	lhz      r29, 0x7c(r4)
	li       r28, 0
	b        lbl_801225C0

lbl_801225A4:
	lwz      r4, 0x24(r30)
	rlwinm   r0, r28, 2, 0xe, 0x1d
	mr       r3, r30
	lwz      r4, 0x80(r4)
	lwzx     r4, r4, r0
	bl       setupFieldVtxColorInfo__Q24Game16FieldVtxColorMgrFP8J3DShape
	addi     r28, r28, 1

lbl_801225C0:
	clrlwi   r0, r28, 0x10
	cmplw    r0, r29
	blt      lbl_801225A4
	li       r6, 0
	li       r5, 0xff
	b        lbl_80122618

lbl_801225D8:
	clrlwi   r0, r6, 0x10
	lwz      r3, 0x28(r30)
	mulli    r0, r0, 6
	lhzx     r0, r3, r0
	slwi     r0, r0, 2
	add      r4, r31, r0
	lbz      r0, 3(r4)
	cmplwi   r0, 0
	beq      lbl_80122608
	lwz      r3, 0x2c(r30)
	addi     r0, r3, 1
	stw      r0, 0x2c(r30)

lbl_80122608:
	stb      r5, 2(r4)
	addi     r6, r6, 1
	stb      r5, 1(r4)
	stb      r5, 0(r4)

lbl_80122618:
	lwz      r3, 0x24(r30)
	clrlwi   r4, r6, 0x10
	lwz      r0, 0x88(r3)
	cmplw    r4, r0
	blt      lbl_801225D8
	lwz      r29, 0x2c(r30)
	mulli    r3, r29, 6
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q24Game17FieldVtxColorInfoFv@ha
	mr       r7, r29
	addi     r4, r4, __ct__Q24Game17FieldVtxColorInfoFv@l
	li       r5, 0
	li       r6, 6
	bl       __construct_new_array
	mr       r29, r3
	li       r3, 0
	li       r7, 0
	b        lbl_801226AC

lbl_80122664:
	clrlwi   r0, r7, 0x10
	lwz      r4, 0x28(r30)
	mulli    r0, r0, 6
	add      r6, r4, r0
	lhz      r5, 0(r6)
	rlwinm   r4, r5, 2, 0xe, 0x1d
	addi     r0, r4, 3
	lbzx     r0, r31, r0
	cmplwi   r0, 0
	beq      lbl_801226A8
	add      r4, r29, r3
	addi     r3, r3, 6
	sth      r5, 0(r4)
	lhz      r0, 2(r6)
	sth      r0, 2(r4)
	lbz      r0, 4(r6)
	stb      r0, 4(r4)

lbl_801226A8:
	addi     r7, r7, 1

lbl_801226AC:
	lwz      r4, 0x24(r30)
	clrlwi   r5, r7, 0x10
	lwz      r0, 0x88(r4)
	cmplw    r5, r0
	blt      lbl_80122664
	lwz      r3, 0x28(r30)
	cmplwi   r3, 0
	beq      lbl_801226D4
	addi     r3, r3, -16
	bl       __dla__FPv

lbl_801226D4:
	stw      r29, 0x28(r30)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801226F8
 * Size:	00001C
 */
FieldVtxColorInfo::FieldVtxColorInfo()
{
	/*
	lis      r4, 0x0000FFFF@ha
	li       r0, 0
	addi     r4, r4, 0x0000FFFF@l
	sth      r4, 0(r3)
	sth      r4, 2(r3)
	stb      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80122714
 * Size:	0001C8
 */
void FieldVtxColorMgr::initVtxColor()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	li       r5, 0
	lfs      f31, 0x34(r3)
	mr       r4, r5
	lfs      f0, lbl_80517CC8@sda21(r2)
	li       r6, 0
	stfs     f0, 0x34(r3)
	b        lbl_80122760

lbl_8012274C:
	lwz      r3, 0x28(r31)
	addi     r0, r5, 4
	addi     r5, r5, 6
	addi     r6, r6, 1
	stbx     r4, r3, r0

lbl_80122760:
	lwz      r0, 0x2c(r31)
	cmpw     r6, r0
	blt      lbl_8012274C
	lwz      r8, 0x30(r31)
	lfs      f2, lbl_80517CD0@sda21(r2)
	lfs      f1, lbl_80517CC4@sda21(r2)
	b        lbl_8012284C

lbl_8012277C:
	lfs      f4, 0x18(r8)
	lfs      f3, 0x14(r8)
	lfs      f5, 0x34(r31)
	fsubs    f0, f4, f3
	lwz      r7, 0x1c(r8)
	fabs     f0, f0
	frsp     f0, f0
	fcmpo    cr0, f0, f5
	bge      lbl_801227A8
	stfs     f3, 0x18(r8)
	b        lbl_801227C4

lbl_801227A8:
	fcmpo    cr0, f4, f3
	bge      lbl_801227B4
	b        lbl_801227B8

lbl_801227B4:
	fneg     f5, f5

lbl_801227B8:
	lfs      f0, 0x18(r8)
	fadds    f0, f0, f5
	stfs     f0, 0x18(r8)

lbl_801227C4:
	lfs      f0, 0x18(r8)
	fmuls    f3, f2, f0
	fcmpo    cr0, f3, f1
	cror     2, 1, 2
	bne      lbl_801227E4
	lfs      f0, lbl_80517CD4@sda21(r2)
	fadds    f0, f0, f3
	b        lbl_801227EC

lbl_801227E4:
	lfs      f0, lbl_80517CD4@sda21(r2)
	fsubs    f0, f3, f0

lbl_801227EC:
	fctiwz   f0, f0
	li       r4, 0xff
	li       r0, 0
	stfd     f0, 0x10(r1)
	lwz      r3, 0x14(r1)
	clrlwi   r6, r3, 0x18
	b        lbl_80122840

lbl_80122808:
	lbz      r3, 8(r7)
	lwz      r5, 4(r7)
	cmplw    r3, r6
	bgt      lbl_8012282C
	lbz      r3, 4(r5)
	cmplwi   r3, 0xff
	bge      lbl_8012283C
	stb      r4, 4(r5)
	b        lbl_8012283C

lbl_8012282C:
	lbz      r3, 4(r5)
	cmplwi   r3, 0
	bge      lbl_8012283C
	stb      r0, 4(r5)

lbl_8012283C:
	lwz      r7, 0(r7)

lbl_80122840:
	cmplwi   r7, 0
	bne      lbl_80122808
	lwz      r8, 0(r8)

lbl_8012284C:
	cmplwi   r8, 0
	bne      lbl_8012277C
	lwz      r3, 0x24(r31)
	li       r0, 0xff
	stb      r0, 0xa(r1)
	li       r7, 0
	lwz      r3, 0xac(r3)
	li       r6, 0
	stb      r0, 9(r1)
	stb      r0, 8(r1)
	b        lbl_801228A0

lbl_80122878:
	lwz      r5, 0x28(r31)
	addi     r0, r6, 4
	addi     r7, r7, 1
	lbzx     r4, r5, r0
	lhzx     r0, r5, r6
	addi     r6, r6, 6
	stb      r4, 0xb(r1)
	slwi     r0, r0, 2
	lwz      r4, 8(r1)
	stwx     r4, r3, r0

lbl_801228A0:
	lwz      r0, 0x2c(r31)
	cmpw     r7, r0
	blt      lbl_80122878
	lwz      r4, 0x24(r31)
	lwz      r0, 0x90(r4)
	slwi     r4, r0, 2
	bl       DCStoreRange
	stfs     f31, 0x34(r31)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801228DC
 * Size:	000280
 */
void FieldVtxColorMgr::calc(J3DVertexBuffer*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r0, 0x38(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80122B08
	li       r5, 0
	lwz      r31, 0x14(r29)
	mr       r4, r5
	li       r30, 1
	li       r6, 0
	b        lbl_80122938

lbl_80122924:
	lwz      r3, 0x28(r28)
	addi     r0, r5, 4
	addi     r5, r5, 6
	addi     r6, r6, 1
	stbx     r4, r3, r0

lbl_80122938:
	lwz      r0, 0x2c(r28)
	cmpw     r6, r0
	blt      lbl_80122924
	lwz      r8, 0x30(r28)
	lfs      f2, lbl_80517CD0@sda21(r2)
	lfs      f1, lbl_80517CC4@sda21(r2)
	b        lbl_80122A24

lbl_80122954:
	lfs      f4, 0x18(r8)
	lfs      f3, 0x14(r8)
	lfs      f5, 0x34(r28)
	fsubs    f0, f4, f3
	lwz      r7, 0x1c(r8)
	fabs     f0, f0
	frsp     f0, f0
	fcmpo    cr0, f0, f5
	bge      lbl_80122980
	stfs     f3, 0x18(r8)
	b        lbl_8012299C

lbl_80122980:
	fcmpo    cr0, f4, f3
	bge      lbl_8012298C
	b        lbl_80122990

lbl_8012298C:
	fneg     f5, f5

lbl_80122990:
	lfs      f0, 0x18(r8)
	fadds    f0, f0, f5
	stfs     f0, 0x18(r8)

lbl_8012299C:
	lfs      f0, 0x18(r8)
	fmuls    f3, f2, f0
	fcmpo    cr0, f3, f1
	cror     2, 1, 2
	bne      lbl_801229BC
	lfs      f0, lbl_80517CD4@sda21(r2)
	fadds    f0, f0, f3
	b        lbl_801229C4

lbl_801229BC:
	lfs      f0, lbl_80517CD4@sda21(r2)
	fsubs    f0, f3, f0

lbl_801229C4:
	fctiwz   f0, f0
	li       r4, 0xff
	li       r0, 0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	clrlwi   r6, r3, 0x18
	b        lbl_80122A18

lbl_801229E0:
	lbz      r3, 8(r7)
	lwz      r5, 4(r7)
	cmplw    r3, r6
	bgt      lbl_80122A04
	lbz      r3, 4(r5)
	cmplwi   r3, 0xff
	bge      lbl_80122A14
	stb      r4, 4(r5)
	b        lbl_80122A14

lbl_80122A04:
	lbz      r3, 4(r5)
	cmplwi   r3, 0
	bge      lbl_80122A14
	stb      r0, 4(r5)

lbl_80122A14:
	lwz      r7, 0(r7)

lbl_80122A18:
	cmplwi   r7, 0
	bne      lbl_801229E0
	lwz      r8, 0(r8)

lbl_80122A24:
	cmplwi   r8, 0
	bne      lbl_80122954
	li       r7, 0
	li       r5, 0
	b        lbl_80122ACC

lbl_80122A38:
	lwz      r4, 0x28(r28)
	add      r3, r4, r5
	lhz      r0, 0(r3)
	lbz      r3, 4(r3)
	rlwinm   r0, r0, 2, 0xe, 0x1d
	add      r8, r31, r0
	lbz      r6, 3(r8)
	cmplw    r6, r3
	beq      lbl_80122AC4
	subf     r3, r3, r6
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	stw      r0, 8(r1)
	lfd      f2, lbl_80517CE0@sda21(r2)
	stw      r3, 0xc(r1)
	lfd      f0, lbl_80517CD8@sda21(r2)
	lfd      f1, 8(r1)
	fsub     f1, f1, f2
	fabs     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80122A9C
	addi     r0, r5, 4
	lbzx     r0, r4, r0
	stb      r0, 3(r8)
	b        lbl_80122AC0

lbl_80122A9C:
	addi     r0, r5, 4
	li       r3, -7
	lbzx     r0, r4, r0
	cmplw    r6, r0
	bge      lbl_80122AB4
	li       r3, 7

lbl_80122AB4:
	lbz      r0, 3(r8)
	add      r0, r0, r3
	stb      r0, 3(r8)

lbl_80122AC0:
	li       r30, 0

lbl_80122AC4:
	addi     r5, r5, 6
	addi     r7, r7, 1

lbl_80122ACC:
	lwz      r0, 0x2c(r28)
	cmpw     r7, r0
	blt      lbl_80122A38
	lwz      r4, 0(r29)
	mr       r3, r31
	lwz      r0, 8(r4)
	slwi     r4, r0, 2
	bl       DCStoreRange
	clrlwi.  r0, r30, 0x18
	stw      r31, 0x34(r29)
	beq      lbl_80122B3C
	lwz      r0, 0x38(r28)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x38(r28)
	b        lbl_80122B3C

lbl_80122B08:
	lwz      r3, 0x30(r28)
	b        lbl_80122B34

lbl_80122B10:
	lfs      f1, 0x14(r3)
	lfs      f0, 0x18(r3)
	fcmpu    cr0, f1, f0
	beq      lbl_80122B30
	lwz      r0, 0x38(r28)
	ori      r0, r0, 1
	stw      r0, 0x38(r28)
	b        lbl_80122B3C

lbl_80122B30:
	lwz      r3, 0(r3)

lbl_80122B34:
	cmplwi   r3, 0
	bne      lbl_80122B10

lbl_80122B3C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80122B5C
 * Size:	000158
 */
void FieldVtxColorMgr::setupFieldVtxColorInfoFromStrip(void*, int, int, int, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  rlwinm    r0,r5,1,0,30
	  add       r9, r4, r5
	  cmpwi     r8, 0x3
	  stw       r31, 0x1C(r1)
	  add       r10, r4, r0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lhzx      r11, r9, r6
	  lhzx      r12, r10, r6
	  lhzx      r0, r4, r6
	  lhzx      r31, r4, r7
	  lhzx      r9, r9, r7
	  lhzx      r10, r10, r7
	  bgt-      .loc_0x98
	  mulli     r0, r0, 0x6
	  lwz       r4, 0x28(r3)
	  lhzx      r5, r4, r0
	  cmplwi    r5, 0xFFFF
	  beq-      .loc_0x58
	  b         .loc_0x5C

	.loc_0x58:
	  sthx      r31, r4, r0

	.loc_0x5C:
	  mulli     r0, r11, 0x6
	  lwz       r4, 0x28(r3)
	  lhzx      r5, r4, r0
	  cmplwi    r5, 0xFFFF
	  beq-      .loc_0x74
	  b         .loc_0x78

	.loc_0x74:
	  sthx      r9, r4, r0

	.loc_0x78:
	  mulli     r0, r12, 0x6
	  lwz       r3, 0x28(r3)
	  lhzx      r4, r3, r0
	  cmplwi    r4, 0xFFFF
	  beq-      .loc_0x90
	  b         .loc_0x140

	.loc_0x90:
	  sthx      r10, r3, r0
	  b         .loc_0x140

	.loc_0x98:
	  subic.    r0, r8, 0x2
	  li        r12, 0
	  li        r11, 0
	  mtctr     r0
	  ble-      .loc_0x140

	.loc_0xAC:
	  add       r31, r4, r11
	  addi      r8, r12, 0x1
	  lhzx      r0, r31, r6
	  addi      r9, r12, 0x2
	  mullw     r10, r5, r8
	  lwz       r8, 0x28(r3)
	  lhzx      r30, r31, r7
	  mullw     r9, r5, r9
	  add       r10, r4, r10
	  lhzx      r31, r10, r6
	  lhzx      r29, r10, r7
	  add       r9, r4, r9
	  mulli     r0, r0, 0x6
	  lhzx      r10, r9, r6
	  lhzx      r28, r9, r7
	  lhzx      r9, r8, r0
	  cmplwi    r9, 0xFFFF
	  beq-      .loc_0xF8
	  b         .loc_0xFC

	.loc_0xF8:
	  sthx      r30, r8, r0

	.loc_0xFC:
	  mulli     r0, r31, 0x6
	  lwz       r8, 0x28(r3)
	  lhzx      r9, r8, r0
	  cmplwi    r9, 0xFFFF
	  beq-      .loc_0x114
	  b         .loc_0x118

	.loc_0x114:
	  sthx      r29, r8, r0

	.loc_0x118:
	  mulli     r0, r10, 0x6
	  lwz       r8, 0x28(r3)
	  lhzx      r9, r8, r0
	  cmplwi    r9, 0xFFFF
	  beq-      .loc_0x130
	  b         .loc_0x134

	.loc_0x130:
	  sthx      r28, r8, r0

	.loc_0x134:
	  add       r11, r11, r5
	  addi      r12, r12, 0x1
	  bdnz+     .loc_0xAC

	.loc_0x140:
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80122CB4
 * Size:	000210
 */
void FieldVtxColorMgr::setupFieldVtxColorInfo(J3DShape*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r5, lbl_8047B434@ha
	stw      r0, 0x44(r1)
	addi     r7, r5, lbl_8047B434@l
	stmw     r22, 0x18(r1)
	mr       r22, r3
	mr       r23, r4
	addi     r3, r1, 8
	li       r30, -1
	li       r29, -1
	li       r28, 0
	lwz      r8, 0x30(r4)
	lwz      r6, 0(r7)
	lwz      r5, 4(r7)
	lwz      r4, 8(r7)
	lwz      r0, 0xc(r7)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r0, 0x14(r1)
	b        lbl_80122D68

lbl_80122D0C:
	cmpwi    r0, 0xa
	beq      lbl_80122D54
	bge      lbl_80122D24
	cmpwi    r0, 9
	bge      lbl_80122D30
	b        lbl_80122D54

lbl_80122D24:
	cmpwi    r0, 0xc
	bge      lbl_80122D54
	b        lbl_80122D44

lbl_80122D30:
	lwz      r0, 4(r8)
	mr       r30, r28
	cmpwi    r0, 3
	beq      lbl_80122D54
	b        lbl_80122EB0

lbl_80122D44:
	lwz      r0, 4(r8)
	mr       r29, r28
	cmpwi    r0, 3
	bne      lbl_80122EB0

lbl_80122D54:
	lwz      r0, 4(r8)
	addi     r8, r8, 8
	slwi     r0, r0, 2
	lwzx     r0, r3, r0
	add      r28, r28, r0

lbl_80122D68:
	lwz      r0, 0(r8)
	cmpwi    r0, 0xff
	bne      lbl_80122D0C
	li       r27, 0
	b        lbl_80122EA0

lbl_80122D7C:
	lwz      r3, 0x3c(r23)
	rlwinm   r31, r27, 2, 0xe, 0x1d
	lwzx     r3, r3, r31
	lwz      r26, 8(r3)
	mr       r25, r26
	b        lbl_80122E84

lbl_80122D94:
	lbz      r0, 0(r25)
	cmplwi   r0, 0
	beq      lbl_80122EB0
	cmplwi   r0, 0x98
	lhz      r24, 1(r25)
	bne      lbl_80122DCC
	mr       r3, r22
	mr       r5, r28
	mr       r6, r30
	mr       r7, r29
	mr       r8, r24
	addi     r4, r25, 3
	bl       setupFieldVtxColorInfoFromStrip__Q24Game16FieldVtxColorMgrFPviiii
	b        lbl_80122E78

lbl_80122DCC:
	cmplwi   r0, 0xa0
	bne      lbl_80122EB0
	addi     r5, r25, 3
	add      r4, r25, r28
	lhzx     r0, r5, r30
	addi     r4, r4, 3
	lhzx     r6, r4, r30
	mulli    r0, r0, 6
	lwz      r3, 0x28(r22)
	lhzx     r5, r5, r29
	lhzx     r4, r4, r29
	lhzx     r7, r3, r0
	cmplwi   r7, 0xffff
	beq      lbl_80122E08
	b        lbl_80122E0C

lbl_80122E08:
	sthx     r5, r3, r0

lbl_80122E0C:
	mulli    r0, r6, 6
	lwz      r3, 0x28(r22)
	lhzx     r5, r3, r0
	cmplwi   r5, 0xffff
	beq      lbl_80122E24
	b        lbl_80122E28

lbl_80122E24:
	sthx     r4, r3, r0

lbl_80122E28:
	addi     r0, r24, -2
	slwi     r5, r28, 1
	mtctr    r0
	cmpwi    r24, 2
	ble      lbl_80122E78

lbl_80122E3C:
	add      r4, r25, r5
	lwz      r3, 0x28(r22)
	addi     r4, r4, 3
	lhzx     r0, r4, r30
	lhzx     r4, r4, r29
	mulli    r0, r0, 6
	lhzx     r6, r3, r0
	cmplwi   r6, 0xffff
	beq      lbl_80122E64
	b        lbl_80122E68

lbl_80122E64:
	sthx     r4, r3, r0

lbl_80122E68:
	add      r5, r5, r28
	bdnz     lbl_80122E3C
	b        lbl_80122E78
	b        lbl_80122EB0

lbl_80122E78:
	mullw    r0, r28, r24
	add      r25, r25, r0
	addi     r25, r25, 3

lbl_80122E84:
	lwz      r0, 0x3c(r23)
	subf     r4, r26, r25
	lwzx     r3, r31, r0
	lwz      r0, 4(r3)
	cmplw    r4, r0
	blt      lbl_80122D94
	addi     r27, r27, 1

lbl_80122EA0:
	lhz      r0, 0xa(r23)
	clrlwi   r3, r27, 0x10
	cmplw    r3, r0
	blt      lbl_80122D7C

lbl_80122EB0:
	lmw      r22, 0x18(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80122EC4
 * Size:	000128
 */
FieldVtxColorControl* FieldVtxColorMgr::createNewControl(Vector3f&, float, float)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	fmr      f30, f1
	mr       r29, r3
	fmr      f31, f2
	mr       r30, r4
	li       r3, 0x20
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80122F4C
	li       r0, 0
	lis      r3, "zero__10Vector3<f>"@ha
	stw      r0, 0(r31)
	lfs      f2, lbl_80517CC0@sda21(r2)
	lfsu     f0, "zero__10Vector3<f>"@l(r3)
	lfs      f1, lbl_80517CC4@sda21(r2)
	stfs     f0, 4(r31)
	lfs      f0, lbl_80517CC8@sda21(r2)
	lfs      f3, 4(r3)
	stfs     f3, 8(r31)
	lfs      f3, 8(r3)
	stfs     f3, 0xc(r31)
	stfs     f2, 0x10(r31)
	stfs     f1, 0x14(r31)
	stfs     f0, 0x18(r31)
	stw      r0, 0x1c(r31)

lbl_80122F4C:
	cmplwi   r31, 0
	beq      lbl_80122FBC
	fmr      f1, f30
	mr       r3, r29
	fmr      f2, f31
	mr       r4, r31
	mr       r5, r30
	bl
"setupFieldVtxColorControl__Q24Game16FieldVtxColorMgrFPQ24Game20FieldVtxColorControlR10Vector3<f>ff"
	lwz      r3, 0x30(r29)
	cmplwi   r3, 0
	bne      lbl_80122F80
	stw      r31, 0x30(r29)
	b        lbl_80122FBC

lbl_80122F80:
	li       r0, 0
	stw      r0, 0(r31)
	lwz      r4, 0(r3)
	cmplwi   r4, 0
	bne      lbl_80122FB0
	stw      r31, 0(r3)
	b        lbl_80122FBC
	b        lbl_80122FB0

lbl_80122FA0:
	lwz      r0, 0(r4)
	cmplwi   r0, 0
	beq      lbl_80122FB8
	mr       r4, r0

lbl_80122FB0:
	cmplwi   r4, 0
	bne      lbl_80122FA0

lbl_80122FB8:
	stw      r31, 0(r4)

lbl_80122FBC:
	mr       r3, r31
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x44(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80122FEC
 * Size:	000204
 */
void FieldVtxColorMgr::setupFieldVtxColorControl(Game::FieldVtxColorControl*, Vector3f&, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stfd      f29, 0x30(r1)
	  psq_st    f29,0x38(r1),0,0
	  stmw      r26, 0x18(r1)
	  mr        r27, r3
	  mr        r29, r5
	  lwz       r3, 0x24(r3)
	  mr        r28, r4
	  lfs       f0, 0x0(r5)
	  fmr       f31, f1
	  lwz       r31, 0xA0(r3)
	  li        r30, 0
	  lfs       f30, -0x669C(r2)
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x4(r5)
	  stfs      f0, 0x8(r4)
	  lfs       f0, 0x8(r5)
	  stfs      f0, 0xC(r4)
	  stfs      f31, 0x10(r4)
	  stfs      f2, 0x14(r4)
	  b         .loc_0x1C8

	.loc_0x6C:
	  rlwinm    r0,r30,0,16,31
	  lwz       r3, 0x28(r27)
	  mulli     r0, r0, 0x6
	  lfs       f2, 0x4(r29)
	  lfs       f4, 0x0(r29)
	  lfs       f1, 0x8(r29)
	  add       r26, r3, r0
	  lhz       r0, 0x2(r26)
	  mulli     r0, r0, 0xC
	  add       r3, r31, r0
	  lfs       f0, 0x4(r3)
	  lfs       f3, 0x0(r3)
	  fsubs     f2, f2, f0
	  lfs       f0, 0x8(r3)
	  fsubs     f3, f4, f3
	  fsubs     f0, f1, f0
	  fmuls     f1, f2, f2
	  fmuls     f2, f0, f0
	  fmadds    f0, f3, f3, f1
	  fadds     f29, f2, f0
	  fcmpo     cr0, f29, f30
	  ble-      .loc_0xD4
	  ble-      .loc_0xD8
	  fsqrte    f0, f29
	  fmuls     f29, f0, f29
	  b         .loc_0xD8

	.loc_0xD4:
	  fmr       f29, f30

	.loc_0xD8:
	  fcmpo     cr0, f29, f31
	  bge-      .loc_0x1C4
	  li        r3, 0xC
	  bl        -0xFF22C
	  cmplwi    r3, 0
	  beq-      .loc_0x174
	  fdivs     f2, f29, f31
	  lfs       f0, -0x669C(r2)
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  stw       r26, 0x4(r3)
	  fcmpo     cr0, f2, f0
	  blt-      .loc_0x118
	  lfs       f0, -0x6698(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x138

	.loc_0x118:
	  lfs       f0, -0x669C(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x128
	  fmr       f2, f0

	.loc_0x128:
	  lfs       f0, -0x6698(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x138
	  fmr       f2, f0

	.loc_0x138:
	  lfs       f1, -0x6690(r2)
	  lfs       f0, -0x669C(r2)
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x15C
	  lfs       f0, -0x668C(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x164

	.loc_0x15C:
	  lfs       f0, -0x668C(r2)
	  fsubs     f0, f1, f0

	.loc_0x164:
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  stb       r0, 0x8(r3)

	.loc_0x174:
	  lwz       r4, 0x1C(r28)
	  cmplwi    r4, 0
	  bne-      .loc_0x188
	  stw       r3, 0x1C(r28)
	  b         .loc_0x1C4

	.loc_0x188:
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  lwz       r5, 0x0(r4)
	  cmplwi    r5, 0
	  bne-      .loc_0x1B8
	  stw       r3, 0x0(r4)
	  b         .loc_0x1C4
	  b         .loc_0x1B8

	.loc_0x1A8:
	  lwz       r0, 0x0(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C0
	  mr        r5, r0

	.loc_0x1B8:
	  cmplwi    r5, 0
	  bne+      .loc_0x1A8

	.loc_0x1C0:
	  stw       r3, 0x0(r5)

	.loc_0x1C4:
	  addi      r30, r30, 0x1

	.loc_0x1C8:
	  lwz       r0, 0x2C(r27)
	  rlwinm    r3,r30,0,16,31
	  cmpw      r3, r0
	  blt+      .loc_0x6C
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801231F0
 * Size:	000080
 */
FieldVtxColorMgr::~FieldVtxColorMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80123254
	lis      r4, __vt__Q24Game16FieldVtxColorMgr@ha
	addi     r3, r30, 0xc
	addi     r5, r4, __vt__Q24Game16FieldVtxColorMgr@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x10
	stw      r0, 0xc(r30)
	bl       __dt__5CNodeFv
	cmplwi   r30, 0
	beq      lbl_80123244
	lis      r3, __vt__15J3DVtxColorCalc@ha
	addi     r0, r3, __vt__15J3DVtxColorCalc@l
	stw      r0, 0(r30)

lbl_80123244:
	extsh.   r0, r31
	ble      lbl_80123254
	mr       r3, r30
	bl       __dl__FPv

lbl_80123254:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80123270
 * Size:	000008
 */
// FieldVtxColorMgr::@12 @~FieldVtxColorMgr()
// {
// 	/*
// 	addi     r3, r3, -12
// 	b        __dt__Q24Game16FieldVtxColorMgrFv
// 	*/
// }
} // namespace Game
