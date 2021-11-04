#include "types.h"

/*
 * --INFO--
 * Address:	8001F188
 * Size:	0000B4
 */
void JKRDvdRipper::loadToMainRAM(const char*, unsigned char*, JKRExpandSwitch,
                                 unsigned long, JKRHeap*,
                                 JKRDvdRipper::EAllocDirection, unsigned long,
                                 int*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x130(r1)
	  mflr      r0
	  stw       r0, 0x134(r1)
	  stmw      r23, 0x10C(r1)
	  mr        r23, r3
	  lwz       r31, 0x138(r1)
	  mr        r24, r4
	  mr        r25, r5
	  mr        r26, r6
	  mr        r27, r7
	  mr        r28, r8
	  mr        r29, r9
	  mr        r30, r10
	  addi      r3, r1, 0x10
	  bl        -0x2108
	  mr        r4, r23
	  addi      r3, r1, 0x10
	  bl        -0x1E38
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x64
	  addi      r3, r1, 0x10
	  li        r4, -0x1
	  bl        -0x1F54
	  li        r3, 0
	  b         .loc_0xA0

	.loc_0x64:
	  stw       r31, 0x8(r1)
	  mr        r4, r24
	  mr        r5, r25
	  mr        r6, r26
	  mr        r7, r27
	  mr        r8, r28
	  mr        r9, r29
	  mr        r10, r30
	  addi      r3, r1, 0x10
	  bl        0xE0
	  mr        r31, r3
	  addi      r3, r1, 0x10
	  li        r4, -0x1
	  bl        -0x1F94
	  mr        r3, r31

	.loc_0xA0:
	  lmw       r23, 0x10C(r1)
	  lwz       r0, 0x134(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001F23C
 * Size:	0000B4
 */
void JKRDvdRipper::loadToMainRAM(long, unsigned char*, JKRExpandSwitch,
                                 unsigned long, JKRHeap*,
                                 JKRDvdRipper::EAllocDirection, unsigned long,
                                 int*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x130(r1)
	  mflr      r0
	  stw       r0, 0x134(r1)
	  stmw      r23, 0x10C(r1)
	  mr        r23, r3
	  lwz       r31, 0x138(r1)
	  mr        r24, r4
	  mr        r25, r5
	  mr        r26, r6
	  mr        r27, r7
	  mr        r28, r8
	  mr        r29, r9
	  mr        r30, r10
	  addi      r3, r1, 0x10
	  bl        -0x21BC
	  mr        r4, r23
	  addi      r3, r1, 0x10
	  bl        -0x1E74
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x64
	  addi      r3, r1, 0x10
	  li        r4, -0x1
	  bl        -0x2008
	  li        r3, 0
	  b         .loc_0xA0

	.loc_0x64:
	  stw       r31, 0x8(r1)
	  mr        r4, r24
	  mr        r5, r25
	  mr        r6, r26
	  mr        r7, r27
	  mr        r8, r28
	  mr        r9, r29
	  mr        r10, r30
	  addi      r3, r1, 0x10
	  bl        .loc_0xB4
	  mr        r31, r3
	  addi      r3, r1, 0x10
	  li        r4, -0x1
	  bl        -0x2048
	  mr        r3, r31

	.loc_0xA0:
	  lmw       r23, 0x10C(r1)
	  lwz       r0, 0x134(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr

	.loc_0xB4:
	*/
}

/*
 * --INFO--
 * Address:	8001F2F0
 * Size:	0004AC
 */
void JKRDvdRipper::loadToMainRAM(JKRDvdFile*, unsigned char*, JKRExpandSwitch,
                                 unsigned long, JKRHeap*,
                                 JKRDvdRipper::EAllocDirection, unsigned long,
                                 int*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  lis       r11, 0x8047
	  stw       r0, 0xD4(r1)
	  stmw      r17, 0x94(r1)
	  mr        r31, r3
	  mr        r25, r4
	  mr        r21, r5
	  mr        r29, r6
	  mr        r19, r7
	  mr        r17, r8
	  mr        r28, r9
	  mr        r18, r10
	  addi      r20, r11, 0x3688
	  lwz       r22, 0xD8(r1)
	  li        r27, 0
	  li        r24, 0
	  li        r26, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r21, 0x1
	  addi      r0, r3, 0x1F
	  rlwinm    r30,r0,0,0,26
	  bne-      .loc_0xEC
	  addi      r0, r1, 0x67
	  rlwinm    r23,r0,0,0,26

	.loc_0x70:
	  mr        r4, r23
	  addi      r3, r31, 0x5C
	  li        r5, 0x20
	  li        r6, 0
	  li        r7, 0x2
	  bl        0xBD70C
	  cmpwi     r3, 0
	  bge-      .loc_0xB4
	  cmpwi     r3, -0x3
	  beq-      .loc_0xA4
	  lbz       r0, -0x7FF0(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xAC

	.loc_0xA4:
	  li        r3, 0
	  b         .loc_0x498

	.loc_0xAC:
	  bl        0xB1E98
	  b         .loc_0x70

	.loc_0xB4:
	  mr        r3, r23
	  li        r4, 0x20
	  bl        0xCD340
	  mr        r3, r23
	  bl        -0x24C4
	  lbz       r0, 0x5(r23)
	  mr        r24, r3
	  lbz       r4, 0x4(r23)
	  rlwinm    r0,r0,16,0,15
	  lbz       r5, 0x6(r23)
	  rlwimi    r0,r4,24,0,7
	  lbz       r6, 0x7(r23)
	  rlwimi    r0,r5,8,16,23
	  or        r23, r6, r0

	.loc_0xEC:
	  cmplwi    r18, 0
	  beq-      .loc_0xF8
	  stw       r24, 0x0(r18)

	.loc_0xF8:
	  cmpwi     r21, 0x1
	  bne-      .loc_0x198
	  cmpwi     r24, 0
	  beq-      .loc_0x198
	  cmplwi    r29, 0
	  beq-      .loc_0x11C
	  cmplw     r23, r29
	  ble-      .loc_0x11C
	  mr        r23, r29

	.loc_0x11C:
	  cmplwi    r25, 0
	  bne-      .loc_0x148
	  cmpwi     r17, 0x1
	  mr        r3, r23
	  li        r4, -0x20
	  bne-      .loc_0x138
	  li        r4, 0x20

	.loc_0x138:
	  mr        r5, r19
	  bl        0x41B4
	  li        r27, 0x1
	  mr        r25, r3

	.loc_0x148:
	  cmplwi    r25, 0
	  bne-      .loc_0x158
	  li        r3, 0
	  b         .loc_0x498

	.loc_0x158:
	  cmpwi     r24, 0x1
	  bne-      .loc_0x1E8
	  mr        r3, r30
	  mr        r5, r19
	  li        r4, 0x20
	  bl        0x4184
	  mr.       r26, r3
	  bne-      .loc_0x1E8
	  rlwinm    r0,r27,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x1E8
	  mr        r3, r25
	  li        r4, 0
	  bl        0x41F0
	  li        r3, 0
	  b         .loc_0x498

	.loc_0x198:
	  cmplwi    r25, 0
	  bne-      .loc_0x1D8
	  cmplwi    r29, 0
	  sub       r3, r30, r28
	  beq-      .loc_0x1B8
	  cmplw     r3, r29
	  ble-      .loc_0x1B8
	  mr        r3, r29

	.loc_0x1B8:
	  cmpwi     r17, 0x1
	  li        r4, -0x20
	  bne-      .loc_0x1C8
	  li        r4, 0x20

	.loc_0x1C8:
	  mr        r5, r19
	  bl        0x4124
	  li        r27, 0x1
	  mr        r25, r3

	.loc_0x1D8:
	  cmplwi    r25, 0
	  bne-      .loc_0x1E8
	  li        r3, 0
	  b         .loc_0x498

	.loc_0x1E8:
	  cmpwi     r24, 0
	  bne-      .loc_0x364
	  cmplwi    r28, 0
	  li        r3, 0
	  beq-      .loc_0x278
	  addi      r0, r1, 0x27
	  mr        r17, r28
	  rlwinm    r18,r0,0,0,26

	.loc_0x208:
	  mr        r4, r18
	  mr        r6, r17
	  addi      r3, r31, 0x5C
	  li        r5, 0x20
	  li        r7, 0x2
	  bl        0xBD574
	  cmpwi     r3, 0
	  bge-      .loc_0x264
	  cmpwi     r3, -0x3
	  beq-      .loc_0x23C
	  lbz       r0, -0x7FF0(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x25C

	.loc_0x23C:
	  rlwinm    r0,r27,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x254
	  mr        r3, r25
	  li        r4, 0
	  bl        0x412C

	.loc_0x254:
	  li        r3, 0
	  b         .loc_0x498

	.loc_0x25C:
	  bl        0xB1CE8
	  b         .loc_0x208

	.loc_0x264:
	  mr        r3, r18
	  li        r4, 0x20
	  bl        0xCD190
	  mr        r3, r18
	  bl        -0x2674

	.loc_0x278:
	  cmpwi     r3, 0
	  beq-      .loc_0x290
	  cmpwi     r21, 0x2
	  beq-      .loc_0x290
	  cmpwi     r21, 0
	  bne-      .loc_0x31C

	.loc_0x290:
	  cmplwi    r29, 0
	  sub       r18, r30, r28
	  beq-      .loc_0x2A8
	  cmplw     r29, r18
	  bge-      .loc_0x2A8
	  mr        r18, r29

	.loc_0x2A8:
	  mr        r17, r28

	.loc_0x2AC:
	  mr        r4, r25
	  mr        r5, r18
	  mr        r6, r17
	  addi      r3, r31, 0x5C
	  li        r7, 0x2
	  bl        0xBD4D0
	  cmpwi     r3, 0
	  bge-      .loc_0x308
	  cmpwi     r3, -0x3
	  beq-      .loc_0x2E0
	  lbz       r0, -0x7FF0(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x300

	.loc_0x2E0:
	  rlwinm    r0,r27,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x2F8
	  mr        r3, r25
	  li        r4, 0
	  bl        0x4088

	.loc_0x2F8:
	  li        r3, 0
	  b         .loc_0x498

	.loc_0x300:
	  bl        0xB1C44
	  b         .loc_0x2AC

	.loc_0x308:
	  cmplwi    r22, 0
	  beq-      .loc_0x314
	  stw       r18, 0x0(r22)

	.loc_0x314:
	  mr        r3, r25
	  b         .loc_0x498

	.loc_0x31C:
	  cmpwi     r3, 0x2
	  bne-      .loc_0x348
	  mr        r3, r31
	  mr        r4, r25
	  mr        r5, r30
	  mr        r6, r29
	  mr        r8, r28
	  mr        r9, r22
	  li        r7, 0
	  bl        .loc_0x4AC
	  b         .loc_0x35C

	.loc_0x348:
	  addi      r3, r20, 0
	  addi      r5, r20, 0x14
	  li        r4, 0x142
	  crclr     6, 0x6
	  bl        0xCE124

	.loc_0x35C:
	  mr        r3, r25
	  b         .loc_0x498

	.loc_0x364:
	  cmpwi     r24, 0x1
	  bne-      .loc_0x430
	  cmplwi    r28, 0
	  beq-      .loc_0x388
	  addi      r3, r20, 0
	  addi      r5, r20, 0x3C
	  li        r4, 0x14C
	  crclr     6, 0x6
	  bl        0xCE0F8

	.loc_0x388:
	  mr        r4, r26
	  mr        r5, r30
	  addi      r3, r31, 0x5C
	  li        r6, 0
	  li        r7, 0x2
	  bl        0xBD3F4
	  cmpwi     r3, 0
	  bge-      .loc_0x3F0
	  cmpwi     r3, -0x3
	  beq-      .loc_0x3BC
	  lbz       r0, -0x7FF0(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x3E8

	.loc_0x3BC:
	  rlwinm    r0,r27,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x3D4
	  mr        r3, r25
	  li        r4, 0
	  bl        0x3FAC

	.loc_0x3D4:
	  mr        r3, r26
	  li        r4, 0
	  bl        0x3FA0
	  li        r3, 0
	  b         .loc_0x498

	.loc_0x3E8:
	  bl        0xB1B5C
	  b         .loc_0x388

	.loc_0x3F0:
	  mr        r3, r26
	  mr        r4, r30
	  bl        0xCD004
	  mr        r3, r26
	  mr        r4, r25
	  mr        r5, r23
	  mr        r6, r28
	  bl        -0x2BC0
	  mr        r3, r26
	  li        r4, 0
	  bl        0x3F64
	  cmplwi    r22, 0
	  beq-      .loc_0x428
	  stw       r23, 0x0(r22)

	.loc_0x428:
	  mr        r3, r25
	  b         .loc_0x498

	.loc_0x430:
	  cmpwi     r24, 0x2
	  bne-      .loc_0x480
	  mr        r3, r31
	  mr        r4, r25
	  mr        r5, r30
	  mr        r6, r23
	  mr        r7, r28
	  mr        r9, r22
	  li        r8, 0
	  bl        .loc_0x4AC
	  cmplwi    r3, 0
	  beq-      .loc_0x478
	  rlwinm.   r0,r27,0,24,31
	  beq-      .loc_0x474
	  mr        r3, r25
	  li        r4, 0
	  bl        0x3F0C

	.loc_0x474:
	  li        r25, 0

	.loc_0x478:
	  mr        r3, r25
	  b         .loc_0x498

	.loc_0x480:
	  rlwinm.   r0,r27,0,24,31
	  beq-      .loc_0x494
	  mr        r3, r25
	  li        r4, 0
	  bl        0x3EEC

	.loc_0x494:
	  li        r3, 0

	.loc_0x498:
	  lmw       r17, 0x94(r1)
	  lwz       r0, 0xD4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr

	.loc_0x4AC:
	*/
}

/*
 * --INFO--
 * Address:	8001F79C
 * Size:	000174
 */
void JKRDecompressFromDVD(JKRDvdFile*, void*, unsigned long, unsigned long,
                          unsigned long, unsigned long, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r24, 0x10(r1)
	  mr        r25, r3
	  mr        r26, r4
	  mr        r27, r5
	  mr        r28, r6
	  mr        r29, r7
	  mr        r30, r8
	  mr        r31, r9
	  bl        0xCF470
	  lbz       r0, -0x7808(r13)
	  mr        r24, r3
	  cmplwi    r0, 0
	  bne-      .loc_0x54
	  lis       r3, 0x804F
	  subi      r3, r3, 0x7C
	  bl        0xD034C
	  li        r0, 0x1
	  stb       r0, -0x7808(r13)

	.loc_0x54:
	  mr        r3, r24
	  bl        0xCF46C
	  lis       r3, 0x804F
	  subi      r3, r3, 0x7C
	  bl        0xD0368
	  lwz       r24, -0x7FEC(r13)
	  li        r5, -0x20
	  lwz       r3, -0x77D8(r13)
	  mr        r4, r24
	  bl        0x3E2C
	  add       r0, r3, r24
	  cmplwi    r29, 0
	  stw       r3, -0x7838(r13)
	  stw       r0, -0x7834(r13)
	  beq-      .loc_0xB4
	  lwz       r3, -0x77D8(r13)
	  li        r4, 0x1120
	  li        r5, -0x4
	  bl        0x3E08
	  addi      r0, r3, 0x1120
	  stw       r3, -0x7830(r13)
	  stw       r0, -0x782C(r13)
	  stw       r3, -0x7828(r13)
	  b         .loc_0xBC

	.loc_0xB4:
	  li        r0, 0
	  stw       r0, -0x7830(r13)

	.loc_0xBC:
	  sub       r3, r27, r30
	  li        r0, 0
	  cmplwi    r31, 0
	  stw       r25, -0x7818(r13)
	  stw       r30, -0x7824(r13)
	  stw       r3, -0x7820(r13)
	  stw       r29, -0x7814(r13)
	  stw       r0, -0x7810(r13)
	  stw       r28, -0x780C(r13)
	  beq-      .loc_0xEC
	  mr        r3, r31
	  b         .loc_0xF0

	.loc_0xEC:
	  subi      r3, r13, 0x7800

	.loc_0xF0:
	  stw       r3, -0x7804(r13)
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  bl        0x330
	  cmplwi    r3, 0
	  beq-      .loc_0x118
	  mr        r4, r26
	  bl        .loc_0x174
	  mr        r0, r3
	  b         .loc_0x11C

	.loc_0x118:
	  li        r0, -0x1

	.loc_0x11C:
	  lwz       r3, -0x7838(r13)
	  mr        r24, r0
	  li        r4, 0
	  bl        0x3DA8
	  lwz       r3, -0x7830(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x140
	  li        r4, 0
	  bl        0x3D94

	.loc_0x140:
	  lwz       r4, -0x7804(r13)
	  mr        r3, r26
	  lwz       r4, 0x0(r4)
	  bl        0xCCEBC
	  lis       r3, 0x804F
	  subi      r3, r3, 0x7C
	  bl        0xD0350
	  mr        r3, r24
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x174:
	*/
}

/*
 * --INFO--
 * Address:	8001F910
 * Size:	0002B8
 */
void decompSZS_subroutine(unsigned char*, unsigned char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  li        r4, 0
	  lbz       r5, 0x0(r3)
	  cmpwi     r5, 0x59
	  bne-      .loc_0x58
	  lbz       r5, 0x1(r3)
	  cmpwi     r5, 0x61
	  bne-      .loc_0x58
	  lbz       r5, 0x2(r3)
	  cmpwi     r5, 0x7A
	  bne-      .loc_0x58
	  lbz       r5, 0x3(r3)
	  cmpwi     r5, 0x30
	  beq-      .loc_0x60

	.loc_0x58:
	  li        r3, -0x1
	  b         .loc_0x29C

	.loc_0x60:
	  lwz       r7, -0x7814(r13)
	  lwz       r6, 0x4(r3)
	  lwz       r5, -0x780C(r13)
	  sub       r6, r6, r7
	  add       r31, r29, r6
	  add       r5, r29, r5
	  cmplw     r31, r5
	  ble-      .loc_0x84
	  mr        r31, r5

	.loc_0x84:
	  addi      r3, r3, 0x10

	.loc_0x88:
	  cmpwi     r4, 0
	  bne-      .loc_0xC8
	  lwz       r0, -0x781C(r13)
	  cmplw     r3, r0
	  ble-      .loc_0xBC
	  lwz       r0, -0x7820(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xBC
	  bl        0x2E4
	  cmplwi    r3, 0
	  bne-      .loc_0xBC
	  li        r3, -0x1
	  b         .loc_0x29C

	.loc_0xBC:
	  lbz       r0, 0x0(r3)
	  li        r4, 0x8
	  addi      r3, r3, 0x1

	.loc_0xC8:
	  rlwinm.   r5,r0,0,24,24
	  beq-      .loc_0x160
	  lwz       r6, -0x7814(r13)
	  cmplwi    r6, 0
	  beq-      .loc_0x134
	  lwz       r5, -0x7810(r13)
	  cmplw     r5, r6
	  blt-      .loc_0x100
	  lbz       r5, 0x0(r3)
	  addi      r30, r30, 0x1
	  stb       r5, 0x0(r29)
	  addi      r29, r29, 0x1
	  cmplw     r29, r31
	  beq-      .loc_0x290

	.loc_0x100:
	  lwz       r6, -0x7828(r13)
	  lbz       r7, 0x0(r3)
	  addi      r5, r6, 0x1
	  stw       r5, -0x7828(r13)
	  stb       r7, 0x0(r6)
	  lwz       r6, -0x7828(r13)
	  lwz       r5, -0x782C(r13)
	  cmplw     r6, r5
	  bne-      .loc_0x12C
	  lwz       r5, -0x7830(r13)
	  stw       r5, -0x7828(r13)

	.loc_0x12C:
	  addi      r3, r3, 0x1
	  b         .loc_0x150

	.loc_0x134:
	  lbz       r5, 0x0(r3)
	  addi      r3, r3, 0x1
	  addi      r30, r30, 0x1
	  stb       r5, 0x0(r29)
	  addi      r29, r29, 0x1
	  cmplw     r29, r31
	  beq-      .loc_0x290

	.loc_0x150:
	  lwz       r5, -0x7810(r13)
	  addi      r5, r5, 0x1
	  stw       r5, -0x7810(r13)
	  b         .loc_0x280

	.loc_0x160:
	  lwz       r8, -0x7814(r13)
	  lbz       r6, 0x0(r3)
	  cmplwi    r8, 0
	  lbz       r9, 0x1(r3)
	  srawi     r5, r6, 0x4
	  rlwimi    r9,r6,8,20,23
	  addi      r3, r3, 0x2
	  beq-      .loc_0x1A8
	  lwz       r6, -0x7828(r13)
	  lwz       r7, -0x7830(r13)
	  sub       r6, r6, r9
	  subi      r9, r6, 0x1
	  cmplw     r9, r7
	  bge-      .loc_0x1B0
	  lwz       r6, -0x782C(r13)
	  sub       r6, r6, r7
	  add       r9, r9, r6
	  b         .loc_0x1B0

	.loc_0x1A8:
	  sub       r6, r29, r9
	  subi      r9, r6, 0x1

	.loc_0x1B0:
	  cmpwi     r5, 0
	  bne-      .loc_0x1C8
	  lbz       r5, 0x0(r3)
	  addi      r3, r3, 0x1
	  addi      r5, r5, 0x12
	  b         .loc_0x1CC

	.loc_0x1C8:
	  addi      r5, r5, 0x2

	.loc_0x1CC:
	  cmplwi    r8, 0
	  beq-      .loc_0x250

	.loc_0x1D4:
	  lwz       r7, -0x7810(r13)
	  lwz       r6, -0x7814(r13)
	  cmplw     r7, r6
	  blt-      .loc_0x1FC
	  lbz       r6, 0x0(r9)
	  addi      r30, r30, 0x1
	  stb       r6, 0x0(r29)
	  addi      r29, r29, 0x1
	  cmplw     r29, r31
	  beq-      .loc_0x280

	.loc_0x1FC:
	  lwz       r7, -0x7828(r13)
	  lbz       r8, 0x0(r9)
	  addi      r6, r7, 0x1
	  stw       r6, -0x7828(r13)
	  stb       r8, 0x0(r7)
	  lwz       r6, -0x7828(r13)
	  lwz       r7, -0x782C(r13)
	  cmplw     r6, r7
	  bne-      .loc_0x228
	  lwz       r6, -0x7830(r13)
	  stw       r6, -0x7828(r13)

	.loc_0x228:
	  addi      r9, r9, 0x1
	  cmplw     r9, r7
	  bne-      .loc_0x238
	  lwz       r9, -0x7830(r13)

	.loc_0x238:
	  lwz       r6, -0x7810(r13)
	  subic.    r5, r5, 0x1
	  addi      r6, r6, 0x1
	  stw       r6, -0x7810(r13)
	  bne+      .loc_0x1D4
	  b         .loc_0x280

	.loc_0x250:
	  lbz       r6, 0x0(r9)
	  addi      r30, r30, 0x1
	  stb       r6, 0x0(r29)
	  addi      r29, r29, 0x1
	  cmplw     r29, r31
	  beq-      .loc_0x280
	  lwz       r6, -0x7810(r13)
	  subic.    r5, r5, 0x1
	  addi      r9, r9, 0x1
	  addi      r6, r6, 0x1
	  stw       r6, -0x7810(r13)
	  bne+      .loc_0x250

	.loc_0x280:
	  cmplw     r29, r31
	  rlwinm    r0,r0,1,0,30
	  subi      r4, r4, 0x1
	  blt+      .loc_0x88

	.loc_0x290:
	  lwz       r4, -0x7804(r13)
	  li        r3, 0
	  stw       r30, 0x0(r4)

	.loc_0x29C:
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
 * Address:	8001FBC8
 * Size:	0000D4
 */
void firstSrcData()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r4, -0x7834(r13)
	  lwz       r3, -0x7838(r13)
	  subi      r0, r4, 0x19
	  lwz       r5, -0x7820(r13)
	  sub       r4, r4, r3
	  stw       r0, -0x781C(r13)
	  cmplw     r5, r4
	  mr        r29, r3
	  mr        r31, r4
	  bge-      .loc_0x44
	  mr        r31, r5

	.loc_0x44:
	  mr        r30, r31

	.loc_0x48:
	  lwz       r3, -0x7818(r13)
	  mr        r4, r29
	  lwz       r6, -0x7824(r13)
	  mr        r5, r30
	  addi      r3, r3, 0x5C
	  li        r7, 0x2
	  bl        0xBCE58
	  cmpwi     r3, 0
	  bge-      .loc_0x90
	  cmpwi     r3, -0x3
	  beq-      .loc_0x80
	  lbz       r0, -0x7FF0(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x88

	.loc_0x80:
	  li        r3, 0
	  b         .loc_0xB8

	.loc_0x88:
	  bl        0xB15E4
	  b         .loc_0x48

	.loc_0x90:
	  mr        r3, r29
	  mr        r4, r31
	  bl        0xCCA8C
	  lwz       r4, -0x7824(r13)
	  mr        r3, r29
	  lwz       r0, -0x7820(r13)
	  add       r4, r4, r31
	  sub       r0, r0, r31
	  stw       r4, -0x7824(r13)
	  stw       r0, -0x7820(r13)

	.loc_0xB8:
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
 * Address:	8001FC9C
 * Size:	00010C
 */
void nextSrcData(unsigned char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lwz       r0, -0x7834(r13)
	  sub       r29, r0, r4
	  rlwinm.   r5,r29,0,27,31
	  beq-      .loc_0x40
	  lwz       r3, -0x7838(r13)
	  addi      r0, r3, 0x20
	  sub       r28, r0, r5
	  b         .loc_0x44

	.loc_0x40:
	  lwz       r28, -0x7838(r13)

	.loc_0x44:
	  mr        r3, r28
	  mr        r5, r29
	  bl        -0x1AB4C
	  lwz       r0, -0x7834(r13)
	  add       r29, r28, r29
	  lwz       r3, -0x7820(r13)
	  sub       r30, r0, r29
	  cmplw     r30, r3
	  ble-      .loc_0x6C
	  mr        r30, r3

	.loc_0x6C:
	  lis       r3, 0x8002
	  subi      r31, r3, 0x258

	.loc_0x74:
	  lwz       r3, -0x7818(r13)
	  mr        r4, r29
	  lwz       r6, -0x7824(r13)
	  mr        r5, r30
	  addi      r3, r3, 0x5C
	  li        r7, 0x2
	  bl        0xBCD58
	  cmpwi     r3, 0
	  bge-      .loc_0xB8
	  cmpwi     r3, -0x3
	  beq-      .loc_0xA8
	  cmplwi    r31, 0
	  bne-      .loc_0xB0

	.loc_0xA8:
	  li        r3, 0
	  b         .loc_0xEC

	.loc_0xB0:
	  bl        0xB14E8
	  b         .loc_0x74

	.loc_0xB8:
	  mr        r3, r29
	  mr        r4, r30
	  bl        0xCC990
	  lwz       r0, -0x7820(r13)
	  lwz       r3, -0x7824(r13)
	  sub.      r0, r0, r30
	  add       r3, r3, r30
	  stw       r3, -0x7824(r13)
	  stw       r0, -0x7820(r13)
	  bne-      .loc_0xE8
	  add       r0, r29, r30
	  stw       r0, -0x781C(r13)

	.loc_0xE8:
	  mr        r3, r28

	.loc_0xEC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001FDA8
 * Size:	000008
 */
void JKRDvdRipper::isErrorRetry()
{
	/*
	.loc_0x0:
	  lbz       r3, -0x7FF0(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001FDB0
 * Size:	000044
 */
void __sinit_JKRDvdRipper_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8050
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x6E18
	  bl        0x6B0C
	  lis       r3, 0x8050
	  lis       r4, 0x8002
	  lis       r5, 0x804F
	  addi      r3, r3, 0x6E18
	  subi      r4, r4, 0x20C
	  subi      r5, r5, 0x88
	  bl        0xA1920
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001FDF4
 * Size:	000054
 */
void JSUList<JKRDMCommand>::~JSUList()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x38
	  li        r4, 0
	  bl        0x6A50
	  extsh.    r0, r31
	  ble-      .loc_0x38
	  mr        r3, r30
	  bl        0x428C

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
