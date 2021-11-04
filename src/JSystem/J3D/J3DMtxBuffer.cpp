#include "types.h"

/*
 * --INFO--
 * Address:	800888D8
 * Size:	000040
 */
void J3DMtxBuffer::initialize()
{
	/*
	.loc_0x0:
	  li        r4, 0
	  li        r0, 0x1
	  stw       r4, 0x0(r3)
	  stw       r4, 0x4(r3)
	  stw       r4, 0x8(r3)
	  stw       r4, 0xC(r3)
	  stw       r4, 0x10(r3)
	  stw       r4, 0x14(r3)
	  stw       r4, 0x18(r3)
	  stw       r4, 0x1C(r3)
	  stw       r4, 0x20(r3)
	  stw       r4, 0x24(r3)
	  stw       r4, 0x28(r3)
	  stw       r0, 0x2C(r3)
	  stw       r4, 0x30(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80088918
 * Size:	00011C
 */
void J3DMtxBuffer::create(J3DModelData*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  addi      r0, r29, 0x10
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  stw       r30, 0x2C(r3)
	  stw       r0, 0x0(r3)
	  bl        .loc_0x11C
	  cmpwi     r3, 0
	  beq-      .loc_0x44
	  b         .loc_0xFC

	.loc_0x44:
	  mr        r3, r28
	  mr        r4, r29
	  bl        0x12C
	  mr.       r31, r3
	  beq-      .loc_0x5C
	  b         .loc_0xFC

	.loc_0x5C:
	  lwz       r3, 0x8(r29)
	  rlwinm.   r0,r3,24,31,31
	  beq-      .loc_0x74
	  mr        r3, r28
	  bl        0x168
	  b         .loc_0xB4

	.loc_0x74:
	  rlwinm    r0,r3,0,27,27
	  cmpwi     r0, 0x10
	  beq-      .loc_0x90
	  bge-      .loc_0xA0
	  cmpwi     r0, 0
	  beq-      .loc_0xA0
	  b         .loc_0xA0

	.loc_0x90:
	  mr        r3, r28
	  bl        0x140
	  mr        r31, r3
	  b         .loc_0xB4

	.loc_0xA0:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        0x154
	  mr        r31, r3

	.loc_0xB4:
	  cmpwi     r31, 0
	  beq-      .loc_0xC4
	  mr        r3, r31
	  b         .loc_0xFC

	.loc_0xC4:
	  lwz       r0, 0x8(r29)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0xDC
	  li        r0, 0
	  sth       r0, 0xC(r29)
	  b         .loc_0xF8

	.loc_0xDC:
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        0x1F8
	  mr.       r31, r3
	  beq-      .loc_0xF8
	  b         .loc_0xFC

	.loc_0xF8:
	  mr        r3, r31

	.loc_0xFC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x11C:
	*/
}

/*
 * --INFO--
 * Address:	80088A34
 * Size:	00005C
 */
void J3DMtxBuffer::createAnmMtx(J3DModelData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lhz       r3, 0x2C(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  bl        -0x64AB0
	  stw       r3, 0x4(r30)
	  lhz       r0, 0x2C(r31)
	  mulli     r3, r0, 0x30
	  bl        -0x64AC0
	  stw       r3, 0xC(r30)

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80088A90
 * Size:	00005C
 */
void J3DMtxBuffer::createWeightEnvelopeMtx(J3DModelData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lhz       r3, 0x2E(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  bl        -0x64B0C
	  stw       r3, 0x8(r30)
	  lhz       r0, 0x2E(r31)
	  mulli     r3, r0, 0x30
	  bl        -0x64B1C
	  stw       r3, 0x10(r30)

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80088AEC
 * Size:	00002C
 */
void J3DMtxBuffer::setNoUseDrawMtx()
{
	/*
	.loc_0x0:
	  subi      r5, r13, 0x7F40
	  subi      r4, r13, 0x7F3C
	  stw       r5, 0x18(r3)
	  li        r0, 0
	  stw       r5, 0x14(r3)
	  stw       r4, 0x20(r3)
	  stw       r4, 0x1C(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x24(r3)
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80088B18
 * Size:	0000E0
 */
void J3DMtxBuffer::createDoubleDrawMtx(J3DModelData*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr.       r27, r5
	  mr        r25, r3
	  mr        r26, r4
	  beq-      .loc_0x5C
	  mr        r30, r25
	  rlwinm    r29,r27,2,0,29
	  li        r28, 0
	  li        r31, 0

	.loc_0x30:
	  mr        r3, r29
	  bl        -0x64BA0
	  stw       r3, 0x14(r30)
	  mr        r3, r29
	  bl        -0x64BAC
	  stw       r3, 0x1C(r30)
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x2
	  stw       r31, 0x24(r30)
	  addi      r30, r30, 0x4
	  blt+      .loc_0x30

	.loc_0x5C:
	  li        r28, 0
	  mr        r30, r25

	.loc_0x64:
	  li        r31, 0
	  li        r29, 0
	  b         .loc_0xB0

	.loc_0x70:
	  lhz       r0, 0x44(r26)
	  cmplwi    r0, 0
	  beq-      .loc_0xA8
	  mulli     r3, r0, 0x30
	  li        r4, 0x20
	  bl        -0x64BA4
	  lwz       r5, 0x14(r30)
	  li        r4, 0x20
	  stwx      r3, r5, r29
	  lhz       r0, 0x44(r26)
	  mulli     r3, r0, 0x24
	  bl        -0x64BBC
	  lwz       r4, 0x1C(r30)
	  stwx      r3, r4, r29

	.loc_0xA8:
	  addi      r29, r29, 0x4
	  addi      r31, r31, 0x1

	.loc_0xB0:
	  cmplw     r31, r27
	  blt+      .loc_0x70
	  addi      r28, r28, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r28, 0x2
	  blt+      .loc_0x64
	  lmw       r25, 0x14(r1)
	  li        r3, 0
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80088BF8
 * Size:	000214
 */
void J3DMtxBuffer::createBumpMtxArray(J3DModelData*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r20, 0x10(r1)
	  mr        r26, r4
	  mr        r25, r3
	  mr        r27, r5
	  lwz       r0, 0x1C(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x1FC
	  lhz       r28, 0x5C(r26)
	  li        r20, 0
	  li        r31, 0
	  li        r21, 0
	  b         .loc_0x7C

	.loc_0x3C:
	  lwz       r3, 0x60(r26)
	  rlwinm    r0,r21,2,14,29
	  lwzx      r29, r3, r0
	  lwz       r3, 0x28(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x78
	  lwz       r3, 0x8(r29)
	  bl        -0x2832C
	  add       r20, r20, r3
	  addi      r31, r31, 0x1

	.loc_0x78:
	  addi      r21, r21, 0x1

	.loc_0x7C:
	  rlwinm    r0,r21,0,16,31
	  cmplw     r0, r28
	  blt+      .loc_0x3C
	  rlwinm.   r0,r20,0,16,31
	  beq-      .loc_0xC0
	  cmplwi    r27, 0
	  beq-      .loc_0xC0
	  mr        r23, r25
	  rlwinm    r24,r31,2,14,29
	  li        r20, 0

	.loc_0xA4:
	  mr        r3, r24
	  bl        -0x64CF4
	  addi      r20, r20, 0x1
	  stw       r3, 0x24(r23)
	  cmpwi     r20, 0x2
	  addi      r23, r23, 0x4
	  blt+      .loc_0xA4

	.loc_0xC0:
	  rlwinm    r20,r27,2,0,29
	  mr        r21, r25
	  li        r30, 0

	.loc_0xCC:
	  lhz       r24, 0x5C(r26)
	  li        r29, 0
	  li        r28, 0
	  li        r22, 0
	  b         .loc_0x130

	.loc_0xE0:
	  lwz       r3, 0x60(r26)
	  rlwinm    r0,r28,2,14,29
	  lwzx      r23, r3, r0
	  lwz       r3, 0x28(r23)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x12C
	  mr        r3, r20
	  bl        -0x64D5C
	  lwz       r4, 0x24(r21)
	  stwx      r3, r4, r22
	  addi      r22, r22, 0x4
	  lwz       r3, 0x8(r23)
	  stw       r29, 0x64(r3)
	  addi      r29, r29, 0x1

	.loc_0x12C:
	  addi      r28, r28, 0x1

	.loc_0x130:
	  rlwinm    r0,r28,0,16,31
	  cmplw     r0, r24
	  blt+      .loc_0xE0
	  addi      r30, r30, 0x1
	  addi      r21, r21, 0x4
	  cmpwi     r30, 0x2
	  blt+      .loc_0xCC
	  li        r24, 0
	  mr        r22, r25

	.loc_0x154:
	  lhz       r23, 0x5C(r26)
	  li        r25, 0
	  li        r21, 0
	  b         .loc_0x1D0

	.loc_0x164:
	  lwz       r3, 0x60(r26)
	  rlwinm    r0,r25,2,14,29
	  lwzx      r3, r3, r0
	  lwz       r3, 0x28(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x1CC
	  li        r28, 0
	  li        r20, 0
	  b         .loc_0x1C0

	.loc_0x19C:
	  lhz       r0, 0x44(r26)
	  li        r4, 0x20
	  mulli     r3, r0, 0x24
	  bl        -0x64DA8
	  lwz       r0, 0x24(r22)
	  addi      r28, r28, 0x1
	  lwzx      r4, r21, r0
	  stwx      r3, r4, r20
	  addi      r20, r20, 0x4

	.loc_0x1C0:
	  cmplw     r28, r27
	  blt+      .loc_0x19C
	  addi      r21, r21, 0x4

	.loc_0x1CC:
	  addi      r25, r25, 0x1

	.loc_0x1D0:
	  rlwinm    r0,r25,0,16,31
	  cmplw     r0, r23
	  blt+      .loc_0x164
	  addi      r24, r24, 0x1
	  addi      r22, r22, 0x4
	  cmpwi     r24, 0x2
	  blt+      .loc_0x154
	  rlwinm.   r0,r31,0,16,31
	  beq-      .loc_0x1FC
	  li        r0, 0x1
	  sth       r0, 0xC(r26)

	.loc_0x1FC:
	  lmw       r20, 0x10(r1)
	  li        r3, 0
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80088E0C
 * Size:	000220
 */
void J3DMtxBuffer::calcWeightEnvelopeMtx()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
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
	  stfd      f26, 0x40(r1)
	  psq_st    f26,0x48(r1),0,0
	  stfd      f25, 0x30(r1)
	  psq_st    f25,0x38(r1),0,0
	  stfd      f24, 0x20(r1)
	  psq_st    f24,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  subi      r4, r13, 0x7F38
	  lwz       r6, 0x0(r3)
	  psq_l     f24,0x0(r4),0,0
	  li        r31, -0x1
	  lwz       r5, 0x24(r6)
	  li        r8, -0x30
	  lwz       r4, 0x28(r6)
	  ps_merge00f11, f24, f24
	  ps_merge00f13, f24, f24
	  lhz       r7, 0x1E(r6)
	  ps_merge00f30, f24, f24
	  subi      r30, r5, 0x2
	  subi      r29, r4, 0x4
	  b         .loc_0x1BC

	.loc_0x88:
	  lwz       r6, 0x8(r3)
	  li        r4, 0x1
	  ps_merge00f10, f24, f24
	  rlwinm    r0,r31,0,16,31
	  stbx      r4, r6, r31
	  ps_merge00f12, f24, f24
	  ps_merge00f31, f24, f24
	  li        r11, 0
	  lwz       r4, 0x0(r3)
	  lwz       r5, 0x10(r3)
	  lwz       r4, 0x20(r4)
	  add       r9, r5, r8
	  lbzx      r12, r4, r0

	.loc_0xBC:
	  lhzu      r10, 0x2(r30)
	  addi      r11, r11, 0x1
	  lwz       r5, 0x0(r3)
	  cmpw      r11, r12
	  mulli     r4, r10, 0x30
	  lwz       r0, 0xC(r3)
	  lwz       r5, 0x2C(r5)
	  lfsu      f0, 0x4(r29)
	  add       r5, r5, r4
	  add       r4, r0, r4
	  psq_l     f2,0x0(r5),0,0
	  psq_l     f1,0x0(r4),0,0
	  psq_l     f3,0x10(r4),0,0
	  ps_muls0  f29, f2, f1
	  psq_l     f8,0x10(r5),0,0
	  ps_muls0  f27, f2, f3
	  psq_l     f5,0x20(r4),0,0
	  psq_l     f7,0x8(r5),0,0
	  ps_muls0  f25, f2, f5
	  ps_madds1 f29, f8, f1, f29
	  psq_l     f9,0x20(r5),0,0
	  psq_l     f2,0x8(r4),0,0
	  ps_madds1 f27, f8, f3, f27
	  psq_l     f4,0x18(r4),0,0
	  ps_madds0 f29, f9, f2, f29
	  ps_madds1 f25, f8, f5, f25
	  psq_l     f6,0x28(r4),0,0
	  ps_madds0 f27, f9, f4, f27
	  psq_l     f8,0x18(r5),0,0
	  ps_muls0  f28, f7, f1
	  ps_muls0  f26, f7, f3
	  ps_madds0 f25, f9, f6, f25
	  psq_l     f9,0x28(r5),0,0
	  ps_madds0 f10, f29, f0, f10
	  ps_muls0  f7, f7, f5
	  ps_madds1 f28, f8, f1, f28
	  ps_madds1 f26, f8, f3, f26
	  psq_st    f10,0x0(r9),0,0
	  ps_madds0 f12, f27, f0, f12
	  ps_madds1 f7, f8, f5, f7
	  ps_madds0 f28, f9, f2, f28
	  ps_madds0 f26, f9, f4, f26
	  psq_st    f12,0x10(r9),0,0
	  ps_madds0 f31, f25, f0, f31
	  ps_madds0 f7, f9, f6, f7
	  ps_madd   f28, f24, f2, f28
	  psq_st    f31,0x20(r9),0,0
	  ps_madd   f26, f24, f4, f26
	  ps_madd   f7, f24, f6, f7
	  lwz       r4, 0x4(r3)
	  ps_madds0 f11, f28, f0, f11
	  lbzx      r5, r6, r31
	  ps_madds0 f13, f26, f0, f13
	  lbzx      r0, r4, r10
	  ps_madds0 f30, f7, f0, f30
	  and       r0, r5, r0
	  stbx      r0, r6, r31
	  blt+      .loc_0xBC
	  psq_st    f11,0x8(r9),0,0
	  ps_merge00f11, f24, f24
	  psq_st    f13,0x18(r9),0,0
	  ps_merge00f13, f24, f24
	  psq_st    f30,0x28(r9),0,0
	  ps_merge00f30, f24, f24

	.loc_0x1BC:
	  addi      r31, r31, 0x1
	  addi      r8, r8, 0x30
	  cmpw      r31, r7
	  blt+      .loc_0x88
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
	  psq_l     f26,0x48(r1),0,0
	  lfd       f26, 0x40(r1)
	  psq_l     f25,0x38(r1),0,0
	  lfd       f25, 0x30(r1)
	  psq_l     f24,0x28(r1),0,0
	  lfd       f24, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008902C
 * Size:	000304
 */
void J3DMtxBuffer::calcDrawMtx(unsigned long, const Vec&, const float (&)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  cmpwi     r4, 0x1
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  stw       r29, 0x74(r1)
	  stw       r28, 0x70(r1)
	  mr        r28, r3
	  beq-      .loc_0xEC
	  bge-      .loc_0x38
	  cmpwi     r4, 0
	  bge-      .loc_0x44
	  b         .loc_0x2E4

	.loc_0x38:
	  cmpwi     r4, 0x3
	  bge-      .loc_0x2E4
	  b         .loc_0x1A4

	.loc_0x44:
	  lwz       r3, 0x0(r28)
	  lis       r4, 0x8051
	  subi      r0, r4, 0xDD0
	  li        r29, 0
	  lhz       r31, 0x36(r3)
	  mr        r30, r0
	  b         .loc_0xA4

	.loc_0x60:
	  lwz       r4, 0x0(r28)
	  rlwinm    r0,r29,0,16,31
	  lwz       r3, 0x30(r28)
	  rlwinm    r6,r29,1,15,30
	  lwz       r7, 0x3C(r4)
	  mulli     r0, r0, 0x30
	  lwz       r5, 0x18(r28)
	  rlwinm    r4,r3,2,0,29
	  lhzx      r6, r7, r6
	  mr        r3, r30
	  lwzx      r4, r5, r4
	  mulli     r6, r6, 0x30
	  lwz       r7, 0xC(r28)
	  add       r5, r4, r0
	  add       r4, r7, r6
	  bl        0x61238
	  addi      r29, r29, 0x1

	.loc_0xA4:
	  rlwinm    r0,r29,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0x60
	  lwz       r7, 0x0(r28)
	  lhz       r0, 0x34(r7)
	  cmplw     r0, r31
	  ble-      .loc_0x2E4
	  lwz       r4, 0x30(r28)
	  mulli     r0, r31, 0x30
	  lwz       r6, 0x18(r28)
	  mr        r3, r30
	  rlwinm    r5,r4,2,0,29
	  lwz       r4, 0x10(r28)
	  lwzx      r5, r6, r5
	  lhz       r6, 0x1E(r7)
	  add       r5, r5, r0
	  bl        -0x299C0
	  b         .loc_0x2E4

	.loc_0xEC:
	  lwz       r3, 0x0(r28)
	  li        r30, 0
	  lhz       r29, 0x36(r3)
	  b         .loc_0x13C

	.loc_0xFC:
	  lwz       r4, 0x0(r28)
	  rlwinm    r0,r30,0,16,31
	  lwz       r3, 0x30(r28)
	  rlwinm    r5,r30,1,15,30
	  lwz       r6, 0x3C(r4)
	  mulli     r0, r0, 0x30
	  lwz       r4, 0x18(r28)
	  rlwinm    r3,r3,2,0,29
	  lhzx      r5, r6, r5
	  lwzx      r3, r4, r3
	  mulli     r5, r5, 0x30
	  lwz       r6, 0xC(r28)
	  add       r4, r3, r0
	  add       r3, r6, r5
	  bl        0x6116C
	  addi      r30, r30, 0x1

	.loc_0x13C:
	  rlwinm    r0,r30,0,16,31
	  cmplw     r0, r29
	  blt+      .loc_0xFC
	  lwz       r3, 0x0(r28)
	  li        r30, 0
	  lhz       r29, 0x36(r3)
	  b         .loc_0x194

	.loc_0x158:
	  lwz       r3, 0x0(r28)
	  rlwinm    r6,r30,0,16,31
	  lwz       r5, 0x30(r28)
	  mulli     r0, r6, 0x30
	  lhz       r4, 0x36(r3)
	  lwz       r3, 0x10(r28)
	  rlwinm    r5,r5,2,0,29
	  add       r4, r6, r4
	  lwz       r6, 0x18(r28)
	  mulli     r4, r4, 0x30
	  add       r3, r3, r0
	  lwzx      r0, r6, r5
	  add       r4, r0, r4
	  bl        0x61114
	  addi      r30, r30, 0x1

	.loc_0x194:
	  rlwinm    r0,r30,0,16,31
	  cmplw     r0, r29
	  blt+      .loc_0x158
	  b         .loc_0x2E4

	.loc_0x1A4:
	  lfs       f2, 0x0(r5)
	  lis       r3, 0x8051
	  lfs       f1, 0x10(r6)
	  subi      r3, r3, 0xDD0
	  lfs       f3, 0x0(r6)
	  addi      r4, r1, 0x8
	  fmuls     f7, f1, f2
	  lfs       f0, 0x20(r6)
	  fmuls     f13, f3, f2
	  lfs       f1, 0x4(r6)
	  fmuls     f3, f0, f2
	  lfs       f12, 0x4(r5)
	  fmuls     f11, f1, f12
	  lfs       f10, 0x8(r5)
	  lfs       f2, 0x8(r6)
	  addi      r5, r1, 0x38
	  lfs       f1, 0x14(r6)
	  fmuls     f9, f2, f10
	  fmuls     f6, f1, f12
	  lfs       f5, 0x18(r6)
	  lfs       f2, 0x24(r6)
	  lfs       f1, 0x28(r6)
	  fmuls     f5, f5, f10
	  fmuls     f2, f2, f12
	  fmuls     f1, f1, f10
	  lfs       f8, 0xC(r6)
	  lfs       f4, 0x1C(r6)
	  lfs       f0, 0x2C(r6)
	  stfs      f13, 0x8(r1)
	  stfs      f11, 0xC(r1)
	  stfs      f9, 0x10(r1)
	  stfs      f8, 0x14(r1)
	  stfs      f7, 0x18(r1)
	  stfs      f6, 0x1C(r1)
	  stfs      f5, 0x20(r1)
	  stfs      f4, 0x24(r1)
	  stfs      f3, 0x28(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  bl        0x61090
	  lwz       r3, 0x0(r28)
	  li        r30, 0
	  lhz       r29, 0x36(r3)
	  b         .loc_0x29C

	.loc_0x258:
	  lwz       r4, 0x0(r28)
	  rlwinm    r0,r30,0,16,31
	  lwz       r3, 0x30(r28)
	  rlwinm    r6,r30,1,15,30
	  lwz       r7, 0x3C(r4)
	  mulli     r0, r0, 0x30
	  lwz       r5, 0x18(r28)
	  rlwinm    r4,r3,2,0,29
	  lhzx      r6, r7, r6
	  addi      r3, r1, 0x38
	  lwzx      r4, r5, r4
	  mulli     r6, r6, 0x30
	  lwz       r7, 0xC(r28)
	  add       r5, r4, r0
	  add       r4, r7, r6
	  bl        0x61040
	  addi      r30, r30, 0x1

	.loc_0x29C:
	  rlwinm    r0,r30,0,16,31
	  cmplw     r0, r29
	  blt+      .loc_0x258
	  lwz       r7, 0x0(r28)
	  lhz       r3, 0x36(r7)
	  lhz       r0, 0x34(r7)
	  cmplw     r0, r3
	  ble-      .loc_0x2E4
	  lwz       r4, 0x30(r28)
	  mulli     r0, r3, 0x30
	  lwz       r6, 0x18(r28)
	  addi      r3, r1, 0x38
	  rlwinm    r5,r4,2,0,29
	  lwz       r4, 0x10(r28)
	  lwzx      r5, r6, r5
	  lhz       r6, 0x1E(r7)
	  add       r5, r5, r0
	  bl        -0x29BBC

	.loc_0x2E4:
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r29, 0x74(r1)
	  lwz       r28, 0x70(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80089330
 * Size:	0001BC
 */
void J3DMtxBuffer::calcNrmMtx()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x0(r3)
	  lhz       r31, 0x34(r3)
	  b         .loc_0x194

	.loc_0x2C:
	  lwz       r4, 0x0(r29)
	  rlwinm    r0,r30,0,16,31
	  lwz       r3, 0x38(r4)
	  lbzx      r3, r3, r0
	  cmplwi    r3, 0
	  bne-      .loc_0xEC
	  lwz       r4, 0x3C(r4)
	  rlwinm    r3,r0,1,0,30
	  lwz       r5, 0x4(r29)
	  lhzx      r3, r4, r3
	  lbzx      r3, r5, r3
	  cmplwi    r3, 0x1
	  bne-      .loc_0xBC
	  lwz       r3, 0x30(r29)
	  mulli     r4, r0, 0x30
	  lwz       r5, 0x18(r29)
	  rlwinm    r6,r3,2,0,29
	  lwz       r3, 0x20(r29)
	  lwzx      r5, r5, r6
	  mulli     r0, r0, 0x24
	  lwzx      r3, r3, r6
	  add       r4, r5, r4
	  psq_l     f5,0x0(r4),0,0
	  add       r3, r3, r0
	  lfs       f4, 0x8(r4)
	  psq_l     f3,0x10(r4),0,0
	  lfs       f2, 0x18(r4)
	  psq_l     f1,0x20(r4),0,0
	  lfs       f0, 0x28(r4)
	  psq_st    f5,0x0(r3),0,0
	  stfs      f4, 0x8(r3)
	  psq_st    f3,0xC(r3),0,0
	  stfs      f2, 0x14(r3)
	  psq_st    f1,0x18(r3),0,0
	  stfs      f0, 0x20(r3)
	  b         .loc_0x190

	.loc_0xBC:
	  lwz       r3, 0x30(r29)
	  mulli     r5, r0, 0x30
	  lwz       r4, 0x18(r29)
	  rlwinm    r7,r3,2,0,29
	  lwz       r3, 0x20(r29)
	  lwzx      r6, r4, r7
	  mulli     r0, r0, 0x24
	  lwzx      r4, r3, r7
	  add       r3, r6, r5
	  add       r4, r4, r0
	  bl        -0x2A370
	  b         .loc_0x190

	.loc_0xEC:
	  lwz       r4, 0x3C(r4)
	  rlwinm    r3,r0,1,0,30
	  lwz       r5, 0x8(r29)
	  lhzx      r3, r4, r3
	  lbzx      r3, r5, r3
	  cmplwi    r3, 0x1
	  bne-      .loc_0x164
	  lwz       r3, 0x30(r29)
	  mulli     r4, r0, 0x30
	  lwz       r5, 0x18(r29)
	  rlwinm    r6,r3,2,0,29
	  lwz       r3, 0x20(r29)
	  lwzx      r5, r5, r6
	  mulli     r0, r0, 0x24
	  lwzx      r3, r3, r6
	  add       r4, r5, r4
	  psq_l     f5,0x0(r4),0,0
	  add       r3, r3, r0
	  lfs       f4, 0x8(r4)
	  psq_l     f3,0x10(r4),0,0
	  lfs       f2, 0x18(r4)
	  psq_l     f1,0x20(r4),0,0
	  lfs       f0, 0x28(r4)
	  psq_st    f5,0x0(r3),0,0
	  stfs      f4, 0x8(r3)
	  psq_st    f3,0xC(r3),0,0
	  stfs      f2, 0x14(r3)
	  psq_st    f1,0x18(r3),0,0
	  stfs      f0, 0x20(r3)
	  b         .loc_0x190

	.loc_0x164:
	  lwz       r3, 0x30(r29)
	  mulli     r5, r0, 0x30
	  lwz       r4, 0x18(r29)
	  rlwinm    r7,r3,2,0,29
	  lwz       r3, 0x20(r29)
	  lwzx      r6, r4, r7
	  mulli     r0, r0, 0x24
	  lwzx      r4, r3, r7
	  add       r3, r6, r5
	  add       r4, r4, r0
	  bl        -0x2A418

	.loc_0x190:
	  addi      r30, r30, 0x1

	.loc_0x194:
	  rlwinm    r0,r30,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0x2C
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
 * Address:	800894EC
 * Size:	000178
 */
void J3DMtxBuffer::calcBBoardMtx()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r3
	  li        r29, 0
	  lwz       r3, 0x0(r3)
	  lhz       r31, 0x34(r3)
	  b         .loc_0x158

	.loc_0x24:
	  lwz       r4, 0x0(r28)
	  rlwinm    r30,r29,0,16,31
	  lwz       r3, 0x38(r4)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x154
	  lwz       r3, 0x3C(r4)
	  rlwinm    r0,r30,1,0,30
	  lwz       r4, 0x18(r4)
	  lhzx      r0, r3, r0
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r4, r0
	  lbz       r0, 0x16(r3)
	  rlwinm    r0,r0,28,28,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x10C
	  lwz       r3, 0x30(r28)
	  mulli     r0, r30, 0x30
	  lwz       r4, 0x18(r28)
	  rlwinm    r3,r3,2,0,29
	  lwzx      r3, r4, r3
	  add       r27, r3, r0
	  mr        r3, r27
	  bl        -0x2A6F4
	  lwz       r3, 0x30(r28)
	  mulli     r0, r30, 0x24
	  lwz       r4, 0x20(r28)
	  rlwinm    r3,r3,2,0,29
	  lfs       f0, -0x7864(r2)
	  lfs       f1, 0x0(r27)
	  lwzx      r3, r4, r3
	  fcmpu     cr0, f0, f1
	  add       r3, r3, r0
	  beq-      .loc_0xB4
	  lfs       f0, -0x7868(r2)
	  fdivs     f0, f0, f1

	.loc_0xB4:
	  stfs      f0, 0x0(r3)
	  lfs       f0, -0x7864(r2)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  stfs      f0, 0xC(r3)
	  lfs       f1, 0x14(r27)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0xDC
	  lfs       f0, -0x7868(r2)
	  fdivs     f0, f0, f1

	.loc_0xDC:
	  stfs      f0, 0x10(r3)
	  lfs       f0, -0x7864(r2)
	  stfs      f0, 0x14(r3)
	  stfs      f0, 0x18(r3)
	  stfs      f0, 0x1C(r3)
	  lfs       f1, 0x28(r27)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x104
	  lfs       f0, -0x7868(r2)
	  fdivs     f0, f0, f1

	.loc_0x104:
	  stfs      f0, 0x20(r3)
	  b         .loc_0x154

	.loc_0x10C:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x154
	  lwz       r3, 0x30(r28)
	  mulli     r0, r30, 0x30
	  lwz       r4, 0x18(r28)
	  rlwinm    r3,r3,2,0,29
	  lwzx      r3, r4, r3
	  add       r27, r3, r0
	  mr        r3, r27
	  bl        -0x2A6B4
	  lwz       r4, 0x30(r28)
	  mulli     r0, r30, 0x24
	  lwz       r5, 0x20(r28)
	  mr        r3, r27
	  rlwinm    r4,r4,2,0,29
	  lwzx      r4, r5, r4
	  add       r4, r4, r0
	  bl        -0x2A598

	.loc_0x154:
	  addi      r29, r29, 0x1

	.loc_0x158:
	  rlwinm    r0,r29,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0x24
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
