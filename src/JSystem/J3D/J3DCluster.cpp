#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516A48
    lbl_80516A48:
        .float 1.0
    .global lbl_80516A4C
    lbl_80516A4C:
        .float 1.0
    .global lbl_80516A50
    lbl_80516A50:
        .float -1.0
    .global lbl_80516A54
    lbl_80516A54:
        .4byte 0x00000000
    .global lbl_80516A58
    lbl_80516A58:
        .float -1.0
    .global lbl_80516A5C
    lbl_80516A5C:
        .4byte 0x40490FDB
    .global lbl_80516A60
    lbl_80516A60:
        .4byte 0x447FE000
    .global lbl_80516A64
    lbl_80516A64:
        .4byte 0x3FC90FDB
    .global lbl_80516A68
    lbl_80516A68:
        .4byte 0x42652EE0
    .global lbl_80516A6C
    lbl_80516A6C:
        .4byte 0x43340000
    .global lbl_80516A70
    lbl_80516A70:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8006A59C
 * Size:	000024
 */
void J3DDeformData::deform(J3DModel*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r4, 0x88
	stw      r0, 0x14(r1)
	bl       deform__13J3DDeformDataFP15J3DVertexBuffer
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006A5C0
 * Size:	0000D4
 */
void J3DDeformData::deform(J3DVertexBuffer*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 4(r4)
	lwz      r0, 8(r4)
	stw      r0, 4(r4)
	stw      r3, 8(r4)
	lwz      r3, 0xc(r4)
	lwz      r0, 0x10(r4)
	stw      r0, 0xc(r4)
	stw      r3, 0x10(r4)
	b        lbl_8006A62C

lbl_8006A608:
	clrlwi   r0, r31, 0x10
	lwz      r6, 8(r29)
	mulli    r3, r0, 0x24
	mr       r4, r30
	mr       r5, r31
	addi     r0, r3, 0x20
	lwzx     r3, r6, r0
	bl       deform__11J3DDeformerFP15J3DVertexBufferUs
	addi     r31, r31, 1

lbl_8006A62C:
	lhz      r0, 0(r29)
	clrlwi   r3, r31, 0x10
	cmplw    r3, r0
	blt      lbl_8006A608
	lwz      r4, 0(r30)
	lwz      r3, 4(r30)
	lwz      r0, 0(r4)
	mulli    r4, r0, 0xc
	bl       DCStoreRangeNoSync
	lwz      r4, 0(r30)
	lwz      r3, 0xc(r30)
	lwz      r0, 4(r4)
	mulli    r4, r0, 0xc
	bl       DCStoreRangeNoSync
	bl       PPCSync
	lwz      r0, 4(r30)
	stw      r0, 0x2c(r30)
	lwz      r0, 0xc(r30)
	stw      r0, 0x30(r30)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006A694
 * Size:	000168
 */
void J3DDeformer::deform(J3DVertexBuffer*, unsigned short)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r28, r3
	mr       r29, r4
	mr       r30, r5
	li       r31, 0
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_8006A7E8
	clrlwi   r0, r30, 0x10
	li       r3, 0
	cmplwi   r0, 0
	ble      lbl_8006A77C
	cmplwi   r0, 8
	addi     r0, r30, -8
	ble      lbl_8006A748
	clrlwi   r0, r0, 0x10
	b        lbl_8006A73C

lbl_8006A6E4:
	clrlwi   r4, r3, 0x10
	lwz      r5, 0(r28)
	mulli    r4, r4, 0x24
	addi     r3, r3, 8
	lwz      r5, 8(r5)
	add      r6, r5, r4
	lhz      r5, 0x10(r6)
	lhz      r4, 0x34(r6)
	add      r31, r31, r5
	lhz      r5, 0x58(r6)
	add      r31, r31, r4
	lhz      r4, 0x7c(r6)
	add      r31, r31, r5
	lhz      r5, 0xa0(r6)
	add      r31, r31, r4
	lhz      r4, 0xc4(r6)
	add      r31, r31, r5
	lhz      r5, 0xe8(r6)
	add      r31, r31, r4
	lhz      r4, 0x10c(r6)
	add      r31, r31, r5
	add      r31, r31, r4

lbl_8006A73C:
	clrlwi   r4, r3, 0x10
	cmplw    r4, r0
	blt      lbl_8006A6E4

lbl_8006A748:
	clrlwi   r0, r30, 0x10
	b        lbl_8006A770

lbl_8006A750:
	clrlwi   r4, r3, 0x10
	lwz      r5, 0(r28)
	mulli    r4, r4, 0x24
	addi     r3, r3, 1
	lwz      r5, 8(r5)
	addi     r4, r4, 0x10
	lhzx     r4, r5, r4
	add      r31, r31, r4

lbl_8006A770:
	clrlwi   r4, r3, 0x10
	cmplw    r4, r0
	blt      lbl_8006A750

lbl_8006A77C:
	clrlwi   r0, r30, 0x10
	lwz      r4, 0(r28)
	mulli    r3, r0, 0x24
	li       r26, 0
	lwz      r4, 8(r4)
	addi     r0, r3, 0x10
	lhzx     r27, r4, r0
	b        lbl_8006A7C8

lbl_8006A79C:
	lwz      r3, 4(r28)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	addi     r31, r31, 1
	bctrl
	lwz      r3, 8(r28)
	rlwinm   r0, r26, 2, 0xe, 0x1d
	addi     r26, r26, 1
	stfsx    f1, r3, r0

lbl_8006A7C8:
	clrlwi   r0, r26, 0x10
	cmplw    r0, r27
	blt      lbl_8006A79C
	lwz      r6, 8(r28)
	mr       r3, r28
	mr       r4, r29
	mr       r5, r30
	bl       deform__11J3DDeformerFP15J3DVertexBufferUsPf

lbl_8006A7E8:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006A7FC
 * Size:	00026C
 */
void J3DDeformer::deform_VtxPosF32(J3DVertexBuffer*, J3DCluster*, J3DClusterKey*, float*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  li        r11, 0
	  stmw      r26, 0x18(r1)
	  lhz       r8, 0x12(r5)
	  lwz       r3, 0x0(r3)
	  cmpwi     r8, 0
	  lhz       r9, 0x10(r5)
	  lwz       r4, 0x4(r4)
	  lwz       r0, 0x18(r3)
	  lwz       r10, 0x18(r5)
	  ble-      .loc_0x180
	  cmpwi     r8, 0x8
	  subi      r31, r8, 0x8
	  ble-      .loc_0x140
	  addi      r12, r31, 0x7
	  mr        r3, r10
	  rlwinm    r12,r12,29,3,31
	  lfs       f0, -0x790C(r2)
	  mtctr     r12
	  cmpwi     r31, 0
	  ble-      .loc_0x140

	.loc_0x54:
	  lhz       r12, 0x0(r3)
	  addi      r11, r11, 0x8
	  mulli     r12, r12, 0x3
	  rlwinm    r12,r12,2,0,29
	  add       r12, r4, r12
	  stfs      f0, 0x0(r12)
	  stfs      f0, 0x4(r12)
	  stfs      f0, 0x8(r12)
	  lhz       r12, 0x2(r3)
	  mulli     r12, r12, 0x3
	  rlwinm    r12,r12,2,0,29
	  add       r12, r4, r12
	  stfs      f0, 0x0(r12)
	  stfs      f0, 0x4(r12)
	  stfs      f0, 0x8(r12)
	  lhz       r12, 0x4(r3)
	  mulli     r12, r12, 0x3
	  rlwinm    r12,r12,2,0,29
	  add       r12, r4, r12
	  stfs      f0, 0x0(r12)
	  stfs      f0, 0x4(r12)
	  stfs      f0, 0x8(r12)
	  lhz       r12, 0x6(r3)
	  mulli     r12, r12, 0x3
	  rlwinm    r12,r12,2,0,29
	  add       r12, r4, r12
	  stfs      f0, 0x0(r12)
	  stfs      f0, 0x4(r12)
	  stfs      f0, 0x8(r12)
	  lhz       r12, 0x8(r3)
	  mulli     r12, r12, 0x3
	  rlwinm    r12,r12,2,0,29
	  add       r12, r4, r12
	  stfs      f0, 0x0(r12)
	  stfs      f0, 0x4(r12)
	  stfs      f0, 0x8(r12)
	  lhz       r12, 0xA(r3)
	  mulli     r12, r12, 0x3
	  rlwinm    r12,r12,2,0,29
	  add       r12, r4, r12
	  stfs      f0, 0x0(r12)
	  stfs      f0, 0x4(r12)
	  stfs      f0, 0x8(r12)
	  lhz       r12, 0xC(r3)
	  mulli     r12, r12, 0x3
	  rlwinm    r12,r12,2,0,29
	  add       r12, r4, r12
	  stfs      f0, 0x0(r12)
	  stfs      f0, 0x4(r12)
	  stfs      f0, 0x8(r12)
	  lhz       r12, 0xE(r3)
	  addi      r3, r3, 0x10
	  mulli     r12, r12, 0x3
	  rlwinm    r12,r12,2,0,29
	  add       r12, r4, r12
	  stfs      f0, 0x0(r12)
	  stfs      f0, 0x4(r12)
	  stfs      f0, 0x8(r12)
	  bdnz+     .loc_0x54

	.loc_0x140:
	  rlwinm    r12,r11,1,0,30
	  sub       r3, r8, r11
	  add       r10, r10, r12
	  lfs       f0, -0x790C(r2)
	  mtctr     r3
	  cmpw      r11, r8
	  bge-      .loc_0x180

	.loc_0x15C:
	  lhz       r3, 0x0(r10)
	  addi      r10, r10, 0x2
	  mulli     r3, r3, 0x3
	  rlwinm    r3,r3,2,0,29
	  add       r3, r4, r3
	  stfs      f0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  bdnz+     .loc_0x15C

	.loc_0x180:
	  lwz       r11, -0x7914(r2)
	  addi      r12, r1, 0x8
	  lwz       r10, -0x7910(r2)
	  li        r3, 0
	  stw       r11, 0x8(r1)
	  stw       r10, 0xC(r1)
	  b         .loc_0x254

	.loc_0x19C:
	  lwz       r10, 0x18(r5)
	  rlwinm    r30,r3,1,15,30
	  li        r27, 0
	  lhzx      r10, r10, r30
	  mulli     r10, r10, 0x3
	  rlwinm    r10,r10,2,0,29
	  add       r29, r4, r10
	  b         .loc_0x244

	.loc_0x1BC:
	  rlwinm    r11,r27,0,16,31
	  rlwinm    r10,r27,2,14,29
	  mulli     r11, r11, 0xC
	  lfsx      f1, r7, r10
	  lfs       f0, 0x0(r29)
	  addi      r27, r27, 0x1
	  addi      r11, r11, 0x4
	  lwzx      r11, r6, r11
	  lhzx      r26, r30, r11
	  rlwinm    r11,r26,0,19,15
	  mulli     r31, r11, 0xC
	  rlwinm    r11,r26,20,29,29
	  lfsx      f3, r12, r11
	  add       r28, r0, r31
	  rlwinm    r11,r26,21,29,29
	  rlwinm    r31,r26,19,29,29
	  lfs       f4, 0x0(r28)
	  lfsx      f2, r12, r31
	  lfs       f5, 0x4(r28)
	  fmuls     f4, f4, f2
	  lfs       f6, 0x8(r28)
	  lfsx      f2, r12, r11
	  fmuls     f5, f5, f3
	  fmadds    f0, f4, f1, f0
	  fmuls     f6, f6, f2
	  stfs      f0, 0x0(r29)
	  lfsx      f1, r7, r10
	  lfs       f0, 0x4(r29)
	  fmadds    f0, f5, f1, f0
	  stfs      f0, 0x4(r29)
	  lfsx      f1, r7, r10
	  lfs       f0, 0x8(r29)
	  fmadds    f0, f6, f1, f0
	  stfs      f0, 0x8(r29)

	.loc_0x244:
	  rlwinm    r10,r27,0,16,31
	  cmpw      r10, r9
	  blt+      .loc_0x1BC
	  addi      r3, r3, 0x1

	.loc_0x254:
	  rlwinm    r10,r3,0,16,31
	  cmpw      r10, r8
	  blt+      .loc_0x19C
	  lmw       r26, 0x18(r1)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006AA68
 * Size:	000470
 */
void J3DDeformer::deform_VtxNrmF32(J3DVertexBuffer*, J3DCluster*, J3DClusterKey*, float*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stfd      f29, 0x70(r1)
	  psq_st    f29,0x78(r1),0,0
	  stfd      f28, 0x60(r1)
	  psq_st    f28,0x68(r1),0,0
	  stfd      f27, 0x50(r1)
	  psq_st    f27,0x58(r1),0,0
	  stmw      r21, 0x24(r1)
	  lwz       r8, 0x0(r3)
	  mr        r31, r5
	  lwz       r27, 0xC(r4)
	  mr        r22, r6
	  lwz       r30, 0x1C(r8)
	  mr        r21, r7
	  lwz       r26, 0xC(r3)
	  li        r29, 0
	  lhz       r28, 0x10(r5)
	  lhz       r25, 0x16(r5)
	  lfs       f27, -0x790C(r2)
	  b         .loc_0x17C

	.loc_0x68:
	  rlwinm    r0,r29,0,16,31
	  rlwinm    r4,r29,1,15,30
	  mulli     r0, r0, 0x3
	  li        r5, 0
	  rlwinm    r0,r0,2,0,29
	  add       r3, r26, r0
	  stfs      f27, 0x0(r3)
	  stfs      f27, 0x4(r3)
	  stfs      f27, 0x8(r3)
	  b         .loc_0x164

	.loc_0x90:
	  rlwinm    r0,r5,0,16,31
	  mulli     r6, r0, 0xC
	  addi      r6, r6, 0x8
	  lwzx      r6, r22, r6
	  lhzx      r7, r4, r6
	  rlwinm.   r6,r7,0,16,16
	  beq-      .loc_0xC0
	  rlwinm    r6,r7,0,19,15
	  mulli     r6, r6, 0xC
	  lfsx      f0, r30, r6
	  fneg      f2, f0
	  b         .loc_0xCC

	.loc_0xC0:
	  rlwinm    r6,r7,0,19,15
	  mulli     r6, r6, 0xC
	  lfsx      f2, r30, r6

	.loc_0xCC:
	  rlwinm.   r6,r7,0,17,17
	  beq-      .loc_0xEC
	  rlwinm    r6,r7,0,19,15
	  mulli     r6, r6, 0xC
	  addi      r6, r6, 0x4
	  lfsx      f0, r30, r6
	  fneg      f3, f0
	  b         .loc_0xFC

	.loc_0xEC:
	  rlwinm    r6,r7,0,19,15
	  mulli     r6, r6, 0xC
	  addi      r6, r6, 0x4
	  lfsx      f3, r30, r6

	.loc_0xFC:
	  rlwinm.   r6,r7,0,18,18
	  beq-      .loc_0x11C
	  rlwinm    r6,r7,0,19,15
	  mulli     r6, r6, 0xC
	  addi      r6, r6, 0x8
	  lfsx      f0, r30, r6
	  fneg      f4, f0
	  b         .loc_0x12C

	.loc_0x11C:
	  rlwinm    r6,r7,0,19,15
	  mulli     r6, r6, 0xC
	  addi      r6, r6, 0x8
	  lfsx      f4, r30, r6

	.loc_0x12C:
	  rlwinm    r0,r0,2,0,29
	  lfs       f0, 0x0(r3)
	  lfsx      f1, r21, r0
	  addi      r5, r5, 0x1
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x0(r3)
	  lfsx      f1, r21, r0
	  lfs       f0, 0x4(r3)
	  fmadds    f0, f3, f1, f0
	  stfs      f0, 0x4(r3)
	  lfsx      f1, r21, r0
	  lfs       f0, 0x8(r3)
	  fmadds    f0, f4, f1, f0
	  stfs      f0, 0x8(r3)

	.loc_0x164:
	  rlwinm    r0,r5,0,16,31
	  cmplw     r0, r28
	  blt+      .loc_0x90
	  mr        r4, r3
	  bl        0x80320
	  addi      r29, r29, 0x1

	.loc_0x17C:
	  lhz       r0, 0x14(r31)
	  rlwinm    r3,r29,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x68
	  lfs       f29, -0x790C(r2)
	  li        r24, 0
	  lfs       f30, -0x7918(r2)
	  lis       r30, 0x4330
	  lfd       f31, -0x78F0(r2)
	  b         .loc_0x428

	.loc_0x1A4:
	  rlwinm    r0,r24,0,16,31
	  lwz       r3, 0x1C(r31)
	  mulli     r0, r0, 0xC
	  stw       r30, 0x18(r1)
	  li        r4, 0
	  stfs      f29, 0x8(r1)
	  add       r23, r3, r0
	  stfs      f29, 0xC(r1)
	  stfs      f29, 0x10(r1)
	  lhz       r0, 0x0(r23)
	  stw       r0, 0x1C(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f31
	  fdivs     f4, f30, f0
	  b         .loc_0x22C

	.loc_0x1E0:
	  lwz       r3, 0x4(r23)
	  rlwinm    r0,r4,1,15,30
	  lfs       f2, 0x8(r1)
	  addi      r4, r4, 0x1
	  lhzx      r0, r3, r0
	  lfs       f1, 0xC(r1)
	  mulli     r0, r0, 0x3
	  lfs       f0, 0x10(r1)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r26, r0
	  lfs       f3, 0x0(r3)
	  fmadds    f2, f4, f3, f2
	  stfs      f2, 0x8(r1)
	  lfs       f2, 0x4(r3)
	  fmadds    f1, f4, f2, f1
	  stfs      f1, 0xC(r1)
	  lfs       f1, 0x8(r3)
	  fmadds    f0, f4, f1, f0
	  stfs      f0, 0x10(r1)

	.loc_0x22C:
	  lhz       r0, 0x0(r23)
	  rlwinm    r3,r4,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x1E0
	  addi      r3, r1, 0x8
	  mr        r4, r3
	  bl        0x80250
	  li        r22, 0
	  b         .loc_0x414

	.loc_0x250:
	  lwz       r3, 0x8(r23)
	  rlwinm    r0,r22,1,15,30
	  lhzx      r4, r3, r0
	  cmplwi    r4, 0xFFFF
	  beq-      .loc_0x410
	  lwz       r3, 0x4(r23)
	  mulli     r21, r4, 0x3
	  lfs       f2, 0xC(r1)
	  lhzx      r28, r3, r0
	  lfs       f28, 0x8(r1)
	  mulli     r0, r28, 0x3
	  lfs       f3, 0x10(r1)
	  lfs       f1, -0x7918(r2)
	  rlwinm    r0,r0,2,0,29
	  add       r29, r26, r0
	  lfs       f0, 0x4(r29)
	  lfs       f27, 0x0(r29)
	  fmuls     f0, f2, f0
	  lfs       f2, 0x8(r29)
	  fmadds    f0, f28, f27, f0
	  fmadds    f2, f3, f2, f0
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x2B8
	  lfs       f2, -0x790C(r2)
	  b         .loc_0x358

	.loc_0x2B8:
	  lfs       f0, -0x7908(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x354
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x2D8
	  lfs       f1, -0x790C(r2)
	  b         .loc_0x348

	.loc_0x2D8:
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2EC
	  lfs       f1, -0x7904(r2)
	  b         .loc_0x348

	.loc_0x2EC:
	  lfs       f0, -0x790C(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x324
	  fneg      f0, f2
	  lfs       f1, -0x7900(r2)
	  fmuls     f1, f1, f0
	  bl        0x56DE0
	  lis       r4, 0x8051
	  rlwinm    r0,r3,2,0,29
	  subi      r3, r4, 0x1E00
	  lfs       f0, -0x78FC(r2)
	  lfsx      f1, r3, r0
	  fadds     f1, f1, f0
	  b         .loc_0x348

	.loc_0x324:
	  lfs       f0, -0x7900(r2)
	  fmuls     f1, f0, f2
	  bl        0x56DB8
	  lis       r4, 0x8051
	  rlwinm    r0,r3,2,0,29
	  subi      r3, r4, 0x1E00
	  lfs       f0, -0x78FC(r2)
	  lfsx      f1, r3, r0
	  fsubs     f1, f0, f1

	.loc_0x348:
	  lfs       f0, -0x78F8(r2)
	  fmuls     f2, f1, f0
	  b         .loc_0x358

	.loc_0x354:
	  lfs       f2, -0x78F4(r2)

	.loc_0x358:
	  lfs       f0, 0x4(r31)
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x388
	  rlwinm    r0,r21,2,0,29
	  add       r3, r27, r0
	  stfs      f28, 0x0(r3)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x8(r3)
	  b         .loc_0x410

	.loc_0x388:
	  lfs       f1, 0x0(r31)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x3C0
	  mulli     r3, r28, 0xC
	  rlwinm    r0,r21,2,0,29
	  add       r4, r27, r0
	  add       r3, r26, r3
	  lfs       f0, 0x0(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x8(r4)
	  b         .loc_0x410

	.loc_0x3C0:
	  fsubs     f2, f2, f0
	  rlwinm    r0,r21,2,0,29
	  fsubs     f1, f1, f0
	  lfs       f0, -0x7918(r2)
	  add       r3, r27, r0
	  fdivs     f2, f2, f1
	  fsubs     f3, f0, f2
	  fmuls     f0, f3, f28
	  fmadds    f0, f2, f27, f0
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0xC(r1)
	  lfs       f1, 0x4(r29)
	  fmuls     f0, f3, f0
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x10(r1)
	  lfs       f1, 0x8(r29)
	  fmuls     f0, f3, f0
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x8(r3)

	.loc_0x410:
	  addi      r22, r22, 0x1

	.loc_0x414:
	  lhz       r0, 0x0(r23)
	  rlwinm    r3,r22,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x250
	  addi      r24, r24, 0x1

	.loc_0x428:
	  rlwinm    r0,r24,0,16,31
	  cmpw      r0, r25
	  blt+      .loc_0x1A4
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  psq_l     f28,0x68(r1),0,0
	  lfd       f28, 0x60(r1)
	  psq_l     f27,0x58(r1),0,0
	  lfd       f27, 0x50(r1)
	  lmw       r21, 0x24(r1)
	  lwz       r0, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006AED8
 * Size:	0001CC
 */
void J3DDeformer::deform(J3DVertexBuffer*, unsigned short, float*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r28, r3
	mr       r29, r4
	mr       r30, r6
	lwz      r0, 0x10(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8006B090
	lwz      r3, 0(r29)
	lwz      r0, 0x50(r3)
	cmpwi    r0, 4
	bne      lbl_8006B090
	clrlwi   r8, r5, 0x10
	lwz      r4, 0(r28)
	mulli    r7, r8, 0x24
	li       r0, 0
	lwz      r3, 8(r4)
	cmplwi   r8, 0
	li       r6, 0
	add      r31, r3, r7
	ble      lbl_8006B018
	cmplwi   r8, 8
	addi     r7, r5, -8
	ble      lbl_8006AFE4
	clrlwi   r7, r7, 0x10
	b        lbl_8006AFD8

lbl_8006AF48:
	clrlwi   r8, r6, 0x10
	addi     r6, r6, 8
	mulli    r8, r8, 0x24
	add      r26, r3, r8
	lhz      r9, 0x10(r26)
	lhz      r8, 0x34(r26)
	add      r9, r9, r0
	lhz      r27, 0x58(r26)
	addi     r0, r9, 1
	lhz      r12, 0x7c(r26)
	clrlwi   r0, r0, 0x10
	lhz      r11, 0xa0(r26)
	add      r8, r8, r0
	lhz      r10, 0xc4(r26)
	addi     r0, r8, 1
	lhz      r9, 0xe8(r26)
	clrlwi   r0, r0, 0x10
	lhz      r8, 0x10c(r26)
	add      r27, r27, r0
	addi     r0, r27, 1
	clrlwi   r0, r0, 0x10
	add      r12, r12, r0
	addi     r0, r12, 1
	clrlwi   r0, r0, 0x10
	add      r11, r11, r0
	addi     r0, r11, 1
	clrlwi   r0, r0, 0x10
	add      r10, r10, r0
	addi     r0, r10, 1
	clrlwi   r0, r0, 0x10
	add      r9, r9, r0
	addi     r0, r9, 1
	clrlwi   r0, r0, 0x10
	add      r8, r8, r0
	addi     r0, r8, 1
	clrlwi   r0, r0, 0x10

lbl_8006AFD8:
	clrlwi   r8, r6, 0x10
	cmplw    r8, r7
	blt      lbl_8006AF48

lbl_8006AFE4:
	clrlwi   r5, r5, 0x10
	b        lbl_8006B00C

lbl_8006AFEC:
	clrlwi   r7, r6, 0x10
	addi     r6, r6, 1
	mulli    r7, r7, 0x24
	addi     r7, r7, 0x10
	lhzx     r7, r3, r7
	add      r7, r7, r0
	addi     r0, r7, 1
	clrlwi   r0, r0, 0x10

lbl_8006B00C:
	clrlwi   r7, r6, 0x10
	cmplw    r7, r5
	blt      lbl_8006AFEC

lbl_8006B018:
	clrlwi   r0, r0, 0x10
	lwz      r6, 0xc(r4)
	mulli    r0, r0, 0xc
	lhz      r4, 0x10(r31)
	mr       r3, r28
	mr       r5, r30
	add      r27, r6, r0
	bl       normalizeWeight__11J3DDeformerFiPf
	mr       r3, r28
	mr       r4, r29
	mr       r5, r31
	mr       r6, r27
	mr       r7, r30
	bl
deform_VtxPosF32__11J3DDeformerFP15J3DVertexBufferP10J3DClusterP13J3DClusterKeyPf
	lwz      r0, 0x10(r28)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8006B090
	lbz      r0, 0xc(r31)
	cmplwi   r0, 0
	beq      lbl_8006B090
	lwz      r3, 0(r29)
	lwz      r0, 0x58(r3)
	cmpwi    r0, 4
	bne      lbl_8006B090
	mr       r3, r28
	mr       r4, r29
	mr       r5, r31
	mr       r6, r27
	mr       r7, r30
	bl
deform_VtxNrmF32__11J3DDeformerFP15J3DVertexBufferP10J3DClusterP13J3DClusterKeyPf

lbl_8006B090:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006B0A4
 * Size:	00015C
 */
void J3DDeformer::normalizeWeight(int, float*)
{
	/*
	cmpwi    r4, 0
	lfs      f6, lbl_80516A54@sda21(r2)
	li       r7, 0
	ble      lbl_8006B13C
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_8006B130
	b        lbl_8006B110

lbl_8006B0C4:
	rlwinm   r0, r7, 2, 0xe, 0x1d
	addi     r7, r7, 8
	add      r6, r5, r0
	lfs      f1, 0(r6)
	lfs      f0, 4(r6)
	fadds    f6, f6, f1
	lfs      f5, 8(r6)
	lfs      f4, 0xc(r6)
	lfs      f3, 0x10(r6)
	fadds    f6, f6, f0
	lfs      f2, 0x14(r6)
	lfs      f1, 0x18(r6)
	lfs      f0, 0x1c(r6)
	fadds    f6, f6, f5
	fadds    f6, f6, f4
	fadds    f6, f6, f3
	fadds    f6, f6, f2
	fadds    f6, f6, f1
	fadds    f6, f6, f0

lbl_8006B110:
	clrlwi   r0, r7, 0x10
	cmpw     r0, r3
	blt      lbl_8006B0C4
	b        lbl_8006B130

lbl_8006B120:
	rlwinm   r0, r7, 2, 0xe, 0x1d
	addi     r7, r7, 1
	lfsx     f0, r5, r0
	fadds    f6, f6, f0

lbl_8006B130:
	clrlwi   r0, r7, 0x10
	cmpw     r0, r4
	blt      lbl_8006B120

lbl_8006B13C:
	lfs      f0, lbl_80516A48@sda21(r2)
	cmpwi    r4, 0
	li       r7, 0
	fdivs    f1, f0, f6
	blelr
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_8006B1F0
	b        lbl_8006B1CC

lbl_8006B160:
	rlwinm   r0, r7, 2, 0xe, 0x1d
	addi     r7, r7, 8
	add      r6, r5, r0
	lfs      f0, 0(r6)
	fmuls    f0, f0, f1
	stfs     f0, 0(r6)
	lfs      f0, 4(r6)
	fmuls    f0, f0, f1
	stfs     f0, 4(r6)
	lfs      f0, 8(r6)
	fmuls    f0, f0, f1
	stfs     f0, 8(r6)
	lfs      f0, 0xc(r6)
	fmuls    f0, f0, f1
	stfs     f0, 0xc(r6)
	lfs      f0, 0x10(r6)
	fmuls    f0, f0, f1
	stfs     f0, 0x10(r6)
	lfs      f0, 0x14(r6)
	fmuls    f0, f0, f1
	stfs     f0, 0x14(r6)
	lfs      f0, 0x18(r6)
	fmuls    f0, f0, f1
	stfs     f0, 0x18(r6)
	lfs      f0, 0x1c(r6)
	fmuls    f0, f0, f1
	stfs     f0, 0x1c(r6)

lbl_8006B1CC:
	clrlwi   r0, r7, 0x10
	cmpw     r0, r3
	blt      lbl_8006B160
	b        lbl_8006B1F0

lbl_8006B1DC:
	rlwinm   r0, r7, 2, 0xe, 0x1d
	addi     r7, r7, 1
	lfsx     f0, r5, r0
	fmuls    f0, f0, f1
	stfsx    f0, r5, r0

lbl_8006B1F0:
	clrlwi   r0, r7, 0x10
	cmpw     r0, r4
	blt      lbl_8006B1DC
	blr
	*/
}
