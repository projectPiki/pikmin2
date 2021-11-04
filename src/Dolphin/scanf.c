

/*
 * --INFO--
 * Address:	800C95C0
 * Size:	0000C4
 */
void sscanf(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stw       r31, 0x8C(r1)
	  bne-      cr1, .loc_0x34
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x34:
	  addi      r11, r1, 0x98
	  addi      r0, r1, 0x8
	  lis       r12, 0x200
	  cmplwi    r3, 0
	  stw       r3, 0x8(r1)
	  addi      r31, r1, 0x70
	  stw       r4, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  stw       r12, 0x70(r1)
	  stw       r11, 0x74(r1)
	  stw       r0, 0x78(r1)
	  stw       r3, 0x68(r1)
	  beq-      .loc_0x88
	  lbz       r0, 0x0(r3)
	  extsb.    r0, r0
	  bne-      .loc_0x90

	.loc_0x88:
	  li        r3, -0x1
	  b         .loc_0xB0

	.loc_0x90:
	  li        r0, 0
	  lis       r3, 0x800D
	  stw       r0, 0x6C(r1)
	  mr        r5, r4
	  subi      r3, r3, 0x697C
	  mr        r6, r31
	  addi      r4, r1, 0x68
	  bl        0xA8

	.loc_0xB0:
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x8C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void vsscanf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void vfscanf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void scanf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void vscanf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void fscanf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C9684
 * Size:	000090
 */
void __StringRead(void)
{
	/*
	.loc_0x0:
	  cmpwi     r5, 0x1
	  mr        r6, r3
	  beq-      .loc_0x54
	  bge-      .loc_0x1C
	  cmpwi     r5, 0
	  bge-      .loc_0x28
	  b         .loc_0x88

	.loc_0x1C:
	  cmpwi     r5, 0x3
	  bge-      .loc_0x88
	  b         .loc_0x80

	.loc_0x28:
	  lwz       r4, 0x0(r6)
	  lbz       r3, 0x0(r4)
	  extsb.    r0, r3
	  bne-      .loc_0x48
	  li        r0, 0x1
	  li        r3, -0x1
	  stw       r0, 0x4(r6)
	  blr

	.loc_0x48:
	  addi      r0, r4, 0x1
	  stw       r0, 0x0(r6)
	  blr

	.loc_0x54:
	  lwz       r0, 0x4(r6)
	  cmpwi     r0, 0
	  bne-      .loc_0x70
	  lwz       r3, 0x0(r6)
	  subi      r0, r3, 0x1
	  stw       r0, 0x0(r6)
	  b         .loc_0x78

	.loc_0x70:
	  li        r0, 0
	  stw       r0, 0x4(r6)

	.loc_0x78:
	  mr        r3, r4
	  blr

	.loc_0x80:
	  lwz       r3, 0x4(r6)
	  blr

	.loc_0x88:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void(int, long, ..., ...&, double)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C9714
 * Size:	0009AC
 */
void __sformatter(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  lis       r7, 0x804A
	  stw       r0, 0x84(r1)
	  stmw      r16, 0x40(r1)
	  mr        r30, r3
	  mr        r31, r4
	  mr        r16, r6
	  mr        r26, r5
	  addi      r18, r7, 0x6BF0
	  li        r29, 0
	  li        r28, 0
	  li        r27, 0
	  b         .loc_0x958

	.loc_0x38:
	  rlwinm    r0,r17,0,24,31
	  lbzx      r0, r18, r0
	  rlwinm.   r0,r0,0,29,30
	  beq-      .loc_0xBC
	  lis       r3, 0x804A
	  addi      r3, r3, 0x6BF0

	.loc_0x50:
	  lbzu      r0, 0x1(r26)
	  lbzx      r0, r3, r0
	  rlwinm.   r0,r0,0,29,30
	  bne+      .loc_0x50
	  lis       r3, 0x804A
	  addi      r17, r3, 0x6BF0
	  b         .loc_0x70

	.loc_0x6C:
	  addi      r29, r29, 0x1

	.loc_0x70:
	  mr        r12, r30
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  stb       r3, 0x8(r1)
	  lbzx      r0, r17, r0
	  rlwinm.   r0,r0,0,29,30
	  bne+      .loc_0x6C
	  rlwinm    r4,r3,0,24,31
	  mr        r12, r30
	  mr        r3, r31
	  li        r5, 0x1
	  extsb     r4, r4
	  mtctr     r12
	  bctrl
	  b         .loc_0x958

	.loc_0xBC:
	  cmpwi     r17, 0x25
	  beq-      .loc_0x11C
	  mr        r12, r30
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r17,0,24,31
	  extsb     r4, r3
	  cmpw      r0, r4
	  stb       r3, 0x8(r1)
	  beq-      .loc_0x110
	  rlwinm    r4,r3,0,24,31
	  mr        r12, r30
	  mr        r3, r31
	  li        r5, 0x1
	  extsb     r4, r4
	  mtctr     r12
	  bctrl
	  b         .loc_0x964

	.loc_0x110:
	  addi      r29, r29, 0x1
	  addi      r26, r26, 0x1
	  b         .loc_0x958

	.loc_0x11C:
	  mr        r3, r26
	  addi      r4, r1, 0x18
	  bl        .loc_0x9AC
	  lbz       r0, 0x18(r1)
	  mr        r26, r3
	  cmplwi    r0, 0
	  bne-      .loc_0x158
	  lbz       r0, 0x1B(r1)
	  cmplwi    r0, 0x25
	  beq-      .loc_0x158
	  mr        r3, r16
	  li        r4, 0x1
	  bl        -0x8270
	  lwz       r22, 0x0(r3)
	  b         .loc_0x15C

	.loc_0x158:
	  li        r22, 0

	.loc_0x15C:
	  lbz       r0, 0x1B(r1)
	  cmplwi    r0, 0x6E
	  beq-      .loc_0x188
	  mr        r12, r30
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0x2
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  bne-      .loc_0x964

	.loc_0x188:
	  lbz       r0, 0x1B(r1)
	  cmpwi     r0, 0x64
	  beq-      .loc_0x24C
	  bge-      .loc_0x1EC
	  cmpwi     r0, 0x58
	  beq-      .loc_0x390
	  bge-      .loc_0x1C8
	  cmpwi     r0, 0x45
	  beq-      .loc_0x49C
	  bge-      .loc_0x1BC
	  cmpwi     r0, 0x25
	  beq-      .loc_0x630
	  b         .loc_0x964

	.loc_0x1BC:
	  cmpwi     r0, 0x47
	  beq-      .loc_0x49C
	  b         .loc_0x964

	.loc_0x1C8:
	  cmpwi     r0, 0x61
	  beq-      .loc_0x49C
	  bge-      .loc_0x1E0
	  cmpwi     r0, 0x5B
	  beq-      .loc_0x710
	  b         .loc_0x964

	.loc_0x1E0:
	  cmpwi     r0, 0x63
	  bge-      .loc_0x518
	  b         .loc_0x964

	.loc_0x1EC:
	  cmpwi     r0, 0x73
	  beq-      .loc_0x69C
	  bge-      .loc_0x228
	  cmpwi     r0, 0x6E
	  beq-      .loc_0x8F4
	  bge-      .loc_0x21C
	  cmpwi     r0, 0x69
	  beq-      .loc_0x254
	  bge-      .loc_0x964
	  cmpwi     r0, 0x68
	  bge-      .loc_0x964
	  b         .loc_0x49C

	.loc_0x21C:
	  cmpwi     r0, 0x70
	  bge-      .loc_0x964
	  b         .loc_0x380

	.loc_0x228:
	  cmpwi     r0, 0x78
	  beq-      .loc_0x390
	  bge-      .loc_0x240
	  cmpwi     r0, 0x75
	  beq-      .loc_0x388
	  b         .loc_0x964

	.loc_0x240:
	  cmpwi     r0, 0xFF
	  beq-      .loc_0x964
	  b         .loc_0x964

	.loc_0x24C:
	  li        r17, 0xA
	  b         .loc_0x258

	.loc_0x254:
	  li        r17, 0

	.loc_0x258:
	  lbz       r0, 0x1A(r1)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x28C
	  lwz       r4, 0x1C(r1)
	  mr        r3, r17
	  mr        r5, r30
	  mr        r6, r31
	  addi      r7, r1, 0x14
	  addi      r8, r1, 0x10
	  addi      r9, r1, 0xC
	  bl        0x2140
	  mr        r24, r4
	  mr        r23, r3

	.loc_0x28C:
	  lbz       r0, 0x1A(r1)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x2BC
	  lwz       r4, 0x1C(r1)
	  mr        r3, r17
	  mr        r5, r30
	  mr        r6, r31
	  addi      r7, r1, 0x14
	  addi      r8, r1, 0x10
	  addi      r9, r1, 0xC
	  bl        0x2518
	  mr        r25, r3

	.loc_0x2BC:
	  lwz       r0, 0x14(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x964
	  lbz       r4, 0x1A(r1)
	  add       r29, r29, r0
	  cmplwi    r4, 0x4
	  bne-      .loc_0x300
	  lwz       r0, 0x10(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x2F0
	  subfic    r20, r24, 0
	  subfze    r0, r23
	  b         .loc_0x2F8

	.loc_0x2F0:
	  mr        r20, r24
	  mr        r0, r23

	.loc_0x2F8:
	  mr        r19, r0
	  b         .loc_0x318

	.loc_0x300:
	  lwz       r0, 0x10(r1)
	  mr        r3, r25
	  cmpwi     r0, 0
	  beq-      .loc_0x314
	  neg       r3, r25

	.loc_0x314:
	  mr        r21, r3

	.loc_0x318:
	  cmplwi    r22, 0
	  beq-      .loc_0x378
	  cmpwi     r4, 0x2
	  beq-      .loc_0x35C
	  bge-      .loc_0x33C
	  cmpwi     r4, 0
	  beq-      .loc_0x34C
	  bge-      .loc_0x354
	  b         .loc_0x374

	.loc_0x33C:
	  cmpwi     r4, 0x4
	  beq-      .loc_0x36C
	  bge-      .loc_0x374
	  b         .loc_0x364

	.loc_0x34C:
	  stw       r21, 0x0(r22)
	  b         .loc_0x374

	.loc_0x354:
	  stb       r21, 0x0(r22)
	  b         .loc_0x374

	.loc_0x35C:
	  sth       r21, 0x0(r22)
	  b         .loc_0x374

	.loc_0x364:
	  stw       r21, 0x0(r22)
	  b         .loc_0x374

	.loc_0x36C:
	  stw       r20, 0x4(r22)
	  stw       r19, 0x0(r22)

	.loc_0x374:
	  addi      r28, r28, 0x1

	.loc_0x378:
	  addi      r27, r27, 0x1
	  b         .loc_0x958

	.loc_0x380:
	  li        r17, 0x8
	  b         .loc_0x394

	.loc_0x388:
	  li        r17, 0xA
	  b         .loc_0x394

	.loc_0x390:
	  li        r17, 0x10

	.loc_0x394:
	  lbz       r0, 0x1A(r1)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x3C8
	  lwz       r4, 0x1C(r1)
	  mr        r3, r17
	  mr        r5, r30
	  mr        r6, r31
	  addi      r7, r1, 0x14
	  addi      r8, r1, 0x10
	  addi      r9, r1, 0xC
	  bl        0x2004
	  mr        r24, r4
	  mr        r23, r3

	.loc_0x3C8:
	  lbz       r0, 0x1A(r1)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x3F8
	  lwz       r4, 0x1C(r1)
	  mr        r3, r17
	  mr        r5, r30
	  mr        r6, r31
	  addi      r7, r1, 0x14
	  addi      r8, r1, 0x10
	  addi      r9, r1, 0xC
	  bl        0x23DC
	  mr        r25, r3

	.loc_0x3F8:
	  lwz       r3, 0x14(r1)
	  cmpwi     r3, 0
	  beq-      .loc_0x964
	  lwz       r0, 0x10(r1)
	  add       r29, r29, r3
	  cmpwi     r0, 0
	  beq-      .loc_0x430
	  lbz       r0, 0x1A(r1)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x42C
	  subfic    r24, r24, 0
	  subfze    r23, r23
	  b         .loc_0x430

	.loc_0x42C:
	  neg       r25, r25

	.loc_0x430:
	  cmplwi    r22, 0
	  beq-      .loc_0x494
	  lbz       r0, 0x1A(r1)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x478
	  bge-      .loc_0x458
	  cmpwi     r0, 0
	  beq-      .loc_0x468
	  bge-      .loc_0x470
	  b         .loc_0x490

	.loc_0x458:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x488
	  bge-      .loc_0x490
	  b         .loc_0x480

	.loc_0x468:
	  stw       r25, 0x0(r22)
	  b         .loc_0x490

	.loc_0x470:
	  stb       r25, 0x0(r22)
	  b         .loc_0x490

	.loc_0x478:
	  sth       r25, 0x0(r22)
	  b         .loc_0x490

	.loc_0x480:
	  stw       r25, 0x0(r22)
	  b         .loc_0x490

	.loc_0x488:
	  stw       r24, 0x4(r22)
	  stw       r23, 0x0(r22)

	.loc_0x490:
	  addi      r28, r28, 0x1

	.loc_0x494:
	  addi      r27, r27, 0x1
	  b         .loc_0x958

	.loc_0x49C:
	  lwz       r3, 0x1C(r1)
	  mr        r4, r30
	  mr        r5, r31
	  addi      r6, r1, 0x14
	  addi      r7, r1, 0xC
	  bl        0xD68
	  lwz       r0, 0x14(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x964
	  cmplwi    r22, 0
	  add       r29, r29, r0
	  beq-      .loc_0x510
	  lbz       r0, 0x1A(r1)
	  cmpwi     r0, 0x5
	  beq-      .loc_0x500
	  bge-      .loc_0x4E8
	  cmpwi     r0, 0
	  beq-      .loc_0x4F4
	  b         .loc_0x50C

	.loc_0x4E8:
	  cmpwi     r0, 0x7
	  bge-      .loc_0x50C
	  b         .loc_0x508

	.loc_0x4F4:
	  frsp      f0, f1
	  stfs      f0, 0x0(r22)
	  b         .loc_0x50C

	.loc_0x500:
	  stfd      f1, 0x0(r22)
	  b         .loc_0x50C

	.loc_0x508:
	  stfd      f1, 0x0(r22)

	.loc_0x50C:
	  addi      r28, r28, 0x1

	.loc_0x510:
	  addi      r27, r27, 0x1
	  b         .loc_0x958

	.loc_0x518:
	  lbz       r0, 0x19(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x52C
	  li        r0, 0x1
	  stw       r0, 0x1C(r1)

	.loc_0x52C:
	  cmplwi    r22, 0
	  beq-      .loc_0x5C8
	  li        r0, 0
	  stw       r0, 0x14(r1)
	  b         .loc_0x57C

	.loc_0x540:
	  lbz       r0, 0x1A(r1)
	  stb       r3, 0x8(r1)
	  cmplwi    r0, 0x7
	  bne-      .loc_0x568
	  mr        r3, r22
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        -0x2E94
	  addi      r22, r22, 0x1
	  b         .loc_0x570

	.loc_0x568:
	  stb       r3, 0x0(r22)
	  addi      r22, r22, 0x1

	.loc_0x570:
	  lwz       r3, 0x14(r1)
	  addi      r0, r3, 0x1
	  stw       r0, 0x14(r1)

	.loc_0x57C:
	  lwz       r3, 0x1C(r1)
	  subi      r0, r3, 0x1
	  cmpwi     r3, 0
	  stw       r0, 0x1C(r1)
	  beq-      .loc_0x5B0
	  mr        r12, r30
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  bctrl
	  cmpwi     r3, -0x1
	  bne+      .loc_0x540

	.loc_0x5B0:
	  lwz       r0, 0x14(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x964
	  add       r29, r29, r0
	  addi      r28, r28, 0x1
	  b         .loc_0x628

	.loc_0x5C8:
	  li        r0, 0
	  stw       r0, 0x14(r1)
	  b         .loc_0x5E0

	.loc_0x5D4:
	  lwz       r3, 0x14(r1)
	  addi      r0, r3, 0x1
	  stw       r0, 0x14(r1)

	.loc_0x5E0:
	  lwz       r3, 0x1C(r1)
	  subi      r0, r3, 0x1
	  cmpwi     r3, 0
	  stw       r0, 0x1C(r1)
	  beq-      .loc_0x61C
	  mr        r12, r30
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  bctrl
	  extsb     r0, r3
	  stb       r3, 0x8(r1)
	  cmpwi     r0, -0x1
	  bne+      .loc_0x5D4

	.loc_0x61C:
	  lwz       r0, 0x14(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x964

	.loc_0x628:
	  addi      r27, r27, 0x1
	  b         .loc_0x958

	.loc_0x630:
	  lis       r3, 0x804A
	  addi      r17, r3, 0x6BF0
	  b         .loc_0x640

	.loc_0x63C:
	  addi      r29, r29, 0x1

	.loc_0x640:
	  mr        r12, r30
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  stb       r3, 0x8(r1)
	  lbzx      r0, r17, r0
	  rlwinm.   r0,r0,0,29,30
	  bne+      .loc_0x63C
	  rlwinm    r0,r3,0,24,31
	  extsb     r4, r0
	  cmpwi     r4, 0x25
	  beq-      .loc_0x694
	  mr        r12, r30
	  mr        r3, r31
	  li        r5, 0x1
	  mtctr     r12
	  bctrl
	  b         .loc_0x964

	.loc_0x694:
	  addi      r29, r29, 0x1
	  b         .loc_0x958

	.loc_0x69C:
	  mr        r12, r30
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804A
	  stb       r3, 0x8(r1)
	  addi      r17, r4, 0x6BF0
	  b         .loc_0x6E4

	.loc_0x6C4:
	  mr        r12, r30
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  addi      r29, r29, 0x1
	  bctrl
	  stb       r3, 0x8(r1)

	.loc_0x6E4:
	  lbz       r4, 0x8(r1)
	  extsb     r4, r4
	  rlwinm    r0,r4,0,24,31
	  lbzx      r0, r17, r0
	  rlwinm.   r0,r0,0,29,30
	  bne+      .loc_0x6C4
	  mr        r12, r30
	  mr        r3, r31
	  li        r5, 0x1
	  mtctr     r12
	  bctrl

	.loc_0x710:
	  cmplwi    r22, 0
	  beq-      .loc_0x818
	  li        r0, 0
	  addi      r17, r1, 0x18
	  stw       r0, 0x14(r1)
	  b         .loc_0x760

	.loc_0x728:
	  lbz       r0, 0x1A(r1)
	  cmplwi    r0, 0x7
	  bne-      .loc_0x74C
	  mr        r3, r22
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        -0x3078
	  addi      r22, r22, 0x2
	  b         .loc_0x754

	.loc_0x74C:
	  stb       r5, 0x0(r22)
	  addi      r22, r22, 0x1

	.loc_0x754:
	  lwz       r3, 0x14(r1)
	  addi      r0, r3, 0x1
	  stw       r0, 0x14(r1)

	.loc_0x760:
	  lwz       r3, 0x1C(r1)
	  subi      r0, r3, 0x1
	  cmpwi     r3, 0
	  stw       r0, 0x1C(r1)
	  beq-      .loc_0x7C0
	  mr        r12, r30
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  bctrl
	  extsb     r0, r3
	  stb       r3, 0x8(r1)
	  cmpwi     r0, -0x1
	  beq-      .loc_0x7C0
	  rlwinm    r5,r3,0,24,31
	  rlwinm    r3,r3,29,27,31
	  addi      r4, r3, 0x8
	  li        r3, 0x1
	  rlwinm    r0,r5,0,29,31
	  lbzx      r4, r17, r4
	  slw       r0, r3, r0
	  and.      r0, r4, r0
	  bne+      .loc_0x728

	.loc_0x7C0:
	  lwz       r3, 0x14(r1)
	  cmpwi     r3, 0
	  bne-      .loc_0x7EC
	  lbz       r4, 0x8(r1)
	  mr        r12, r30
	  mr        r3, r31
	  li        r5, 0x1
	  extsb     r4, r4
	  mtctr     r12
	  bctrl
	  b         .loc_0x964

	.loc_0x7EC:
	  lbz       r0, 0x1A(r1)
	  add       r29, r29, r3
	  cmplwi    r0, 0x7
	  bne-      .loc_0x808
	  li        r0, 0
	  sth       r0, 0x0(r22)
	  b         .loc_0x810

	.loc_0x808:
	  li        r0, 0
	  stb       r0, 0x0(r22)

	.loc_0x810:
	  addi      r28, r28, 0x1
	  b         .loc_0x8C4

	.loc_0x818:
	  li        r0, 0
	  addi      r17, r1, 0x18
	  stw       r0, 0x14(r1)
	  b         .loc_0x834

	.loc_0x828:
	  lwz       r3, 0x14(r1)
	  addi      r0, r3, 0x1
	  stw       r0, 0x14(r1)

	.loc_0x834:
	  lwz       r3, 0x1C(r1)
	  subi      r0, r3, 0x1
	  cmpwi     r3, 0
	  stw       r0, 0x1C(r1)
	  beq-      .loc_0x894
	  mr        r12, r30
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  bctrl
	  extsb     r0, r3
	  stb       r3, 0x8(r1)
	  cmpwi     r0, -0x1
	  beq-      .loc_0x894
	  rlwinm    r0,r3,0,24,31
	  rlwinm    r3,r3,29,27,31
	  addi      r4, r3, 0x8
	  li        r3, 0x1
	  rlwinm    r0,r0,0,29,31
	  lbzx      r4, r17, r4
	  slw       r0, r3, r0
	  and.      r0, r4, r0
	  bne+      .loc_0x828

	.loc_0x894:
	  lwz       r0, 0x14(r1)
	  cmpwi     r0, 0
	  bne-      .loc_0x8C0
	  lbz       r4, 0x8(r1)
	  mr        r12, r30
	  mr        r3, r31
	  li        r5, 0x1
	  extsb     r4, r4
	  mtctr     r12
	  bctrl
	  b         .loc_0x958

	.loc_0x8C0:
	  add       r29, r29, r0

	.loc_0x8C4:
	  lwz       r0, 0x1C(r1)
	  cmpwi     r0, 0
	  blt-      .loc_0x8EC
	  lbz       r4, 0x8(r1)
	  mr        r12, r30
	  mr        r3, r31
	  li        r5, 0x1
	  extsb     r4, r4
	  mtctr     r12
	  bctrl

	.loc_0x8EC:
	  addi      r27, r27, 0x1
	  b         .loc_0x958

	.loc_0x8F4:
	  cmplwi    r22, 0
	  beq-      .loc_0x958
	  lbz       r0, 0x1A(r1)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x934
	  bge-      .loc_0x91C
	  cmpwi     r0, 0
	  beq-      .loc_0x92C
	  bge-      .loc_0x944
	  b         .loc_0x958

	.loc_0x91C:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x94C
	  bge-      .loc_0x958
	  b         .loc_0x93C

	.loc_0x92C:
	  stw       r29, 0x0(r22)
	  b         .loc_0x958

	.loc_0x934:
	  sth       r29, 0x0(r22)
	  b         .loc_0x958

	.loc_0x93C:
	  stw       r29, 0x0(r22)
	  b         .loc_0x958

	.loc_0x944:
	  stb       r29, 0x0(r22)
	  b         .loc_0x958

	.loc_0x94C:
	  stw       r29, 0x4(r22)
	  srawi     r0, r29, 0x1F
	  stw       r0, 0x0(r22)

	.loc_0x958:
	  lbz       r0, 0x0(r26)
	  extsb.    r17, r0
	  bne+      .loc_0x38

	.loc_0x964:
	  mr        r12, r30
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0x2
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  beq-      .loc_0x994
	  cmpwi     r27, 0
	  bne-      .loc_0x994
	  li        r3, -0x1
	  b         .loc_0x998

	.loc_0x994:
	  mr        r3, r28

	.loc_0x998:
	  lmw       r16, 0x40(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr

	.loc_0x9AC:
	*/
}

/*
 * --INFO--
 * Address:	800CA0C0
 * Size:	000548
 */
void parse_format(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  lis       r6, 0x8048
	  lbzu      r5, 0x1(r3)
	  stw       r31, 0x3C(r1)
	  extsb     r5, r5
	  stw       r30, 0x38(r1)
	  cmpwi     r5, 0x25
	  lwzu      r0, -0x5F28(r6)
	  lwz       r30, 0x4(r6)
	  lwz       r31, 0x8(r6)
	  lwz       r12, 0xC(r6)
	  lwz       r11, 0x10(r6)
	  lwz       r10, 0x14(r6)
	  lwz       r9, 0x18(r6)
	  lwz       r8, 0x1C(r6)
	  lwz       r7, 0x20(r6)
	  lwz       r6, 0x24(r6)
	  stw       r0, 0x8(r1)
	  stw       r30, 0xC(r1)
	  stw       r31, 0x10(r1)
	  stw       r12, 0x14(r1)
	  stw       r11, 0x18(r1)
	  stw       r10, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r8, 0x24(r1)
	  stw       r7, 0x28(r1)
	  stw       r6, 0x2C(r1)
	  bne-      .loc_0xA8
	  stb       r5, 0xB(r1)
	  addi      r3, r3, 0x1
	  lwz       r0, 0x8(r1)
	  stw       r0, 0x0(r4)
	  stw       r30, 0x4(r4)
	  stw       r31, 0x8(r4)
	  stw       r12, 0xC(r4)
	  stw       r11, 0x10(r4)
	  stw       r10, 0x14(r4)
	  stw       r9, 0x18(r4)
	  stw       r8, 0x1C(r4)
	  stw       r7, 0x20(r4)
	  stw       r6, 0x24(r4)
	  b         .loc_0x538

	.loc_0xA8:
	  cmpwi     r5, 0x2A
	  bne-      .loc_0xC0
	  lbzu      r5, 0x1(r3)
	  li        r0, 0x1
	  stb       r0, 0x8(r1)
	  extsb     r5, r5

	.loc_0xC0:
	  lis       r6, 0x804A
	  rlwinm    r0,r5,0,24,31
	  addi      r7, r6, 0x6BF0
	  lbzx      r0, r7, r0
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x178
	  li        r0, 0
	  stw       r0, 0xC(r1)

	.loc_0xE0:
	  lwz       r0, 0xC(r1)
	  mulli     r0, r0, 0xA
	  add       r6, r5, r0
	  lbzu      r5, 0x1(r3)
	  subi      r9, r6, 0x30
	  extsb     r5, r5
	  stw       r9, 0xC(r1)
	  rlwinm    r0,r5,0,24,31
	  lbzx      r0, r7, r0
	  rlwinm.   r0,r0,0,27,27
	  bne+      .loc_0xE0
	  cmpwi     r9, 0
	  bne-      .loc_0x170
	  li        r0, 0xFF
	  lwz       r6, 0x10(r1)
	  stb       r0, 0xB(r1)
	  addi      r3, r3, 0x1
	  lwz       r5, 0x14(r1)
	  lwz       r7, 0x8(r1)
	  lwz       r0, 0x18(r1)
	  stw       r7, 0x0(r4)
	  lwz       r8, 0x1C(r1)
	  stw       r9, 0x4(r4)
	  lwz       r7, 0x20(r1)
	  stw       r6, 0x8(r4)
	  lwz       r6, 0x24(r1)
	  stw       r5, 0xC(r4)
	  lwz       r5, 0x28(r1)
	  stw       r0, 0x10(r4)
	  lwz       r0, 0x2C(r1)
	  stw       r8, 0x14(r4)
	  stw       r7, 0x18(r4)
	  stw       r6, 0x1C(r4)
	  stw       r5, 0x20(r4)
	  stw       r0, 0x24(r4)
	  b         .loc_0x538

	.loc_0x170:
	  li        r0, 0x1
	  stb       r0, 0x9(r1)

	.loc_0x178:
	  cmpwi     r5, 0x68
	  li        r7, 0x1
	  beq-      .loc_0x1A0
	  bge-      .loc_0x194
	  cmpwi     r5, 0x4C
	  beq-      .loc_0x1F8
	  b         .loc_0x204

	.loc_0x194:
	  cmpwi     r5, 0x6C
	  beq-      .loc_0x1CC
	  b         .loc_0x204

	.loc_0x1A0:
	  lbz       r0, 0x1(r3)
	  li        r6, 0x2
	  stb       r6, 0xA(r1)
	  extsb     r6, r0
	  cmpwi     r6, 0x68
	  bne-      .loc_0x208
	  li        r0, 0x1
	  mr        r5, r6
	  stb       r0, 0xA(r1)
	  addi      r3, r3, 0x1
	  b         .loc_0x208

	.loc_0x1CC:
	  lbz       r0, 0x1(r3)
	  li        r6, 0x3
	  stb       r6, 0xA(r1)
	  extsb     r6, r0
	  cmpwi     r6, 0x6C
	  bne-      .loc_0x208
	  li        r0, 0x4
	  mr        r5, r6
	  stb       r0, 0xA(r1)
	  addi      r3, r3, 0x1
	  b         .loc_0x208

	.loc_0x1F8:
	  li        r0, 0x6
	  stb       r0, 0xA(r1)
	  b         .loc_0x208

	.loc_0x204:
	  li        r7, 0

	.loc_0x208:
	  cmpwi     r7, 0
	  beq-      .loc_0x218
	  lbzu      r5, 0x1(r3)
	  extsb     r5, r5

	.loc_0x218:
	  subi      r0, r5, 0x45
	  stb       r5, 0xB(r1)
	  cmplwi    r0, 0x33
	  bgt-      .loc_0x4DC
	  lis       r5, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r5, r5, 0x7158
	  lwzx      r0, r5, r0
	  mtctr     r0
	  bctr
	  lbz       r0, 0xA(r1)
	  cmplwi    r0, 0x6
	  bne-      .loc_0x4E4
	  li        r0, 0xFF
	  stb       r0, 0xB(r1)
	  b         .loc_0x4E4
	  lbz       r0, 0xA(r1)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x274
	  cmplwi    r0, 0x2
	  beq-      .loc_0x274
	  cmplwi    r0, 0x4
	  bne-      .loc_0x280

	.loc_0x274:
	  li        r0, 0xFF
	  stb       r0, 0xB(r1)
	  b         .loc_0x4E4

	.loc_0x280:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x4E4
	  li        r0, 0x5
	  stb       r0, 0xA(r1)
	  b         .loc_0x4E4
	  li        r5, 0x3
	  li        r0, 0x78
	  stb       r5, 0xA(r1)
	  stb       r0, 0xB(r1)
	  b         .loc_0x4E4
	  lbz       r0, 0xA(r1)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x2C0
	  li        r0, 0x7
	  stb       r0, 0xA(r1)
	  b         .loc_0x4E4

	.loc_0x2C0:
	  cmplwi    r0, 0
	  beq-      .loc_0x4E4
	  li        r0, 0xFF
	  stb       r0, 0xB(r1)
	  b         .loc_0x4E4
	  lbz       r0, 0xA(r1)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x2EC
	  li        r0, 0x7
	  stb       r0, 0xA(r1)
	  b         .loc_0x2FC

	.loc_0x2EC:
	  cmplwi    r0, 0
	  beq-      .loc_0x2FC
	  li        r0, 0xFF
	  stb       r0, 0xB(r1)

	.loc_0x2FC:
	  li        r0, 0x4
	  addi      r6, r1, 0x10
	  li        r5, 0xFF
	  mtctr     r0

	.loc_0x30C:
	  stb       r5, 0x0(r6)
	  stb       r5, 0x1(r6)
	  stb       r5, 0x2(r6)
	  stb       r5, 0x3(r6)
	  stb       r5, 0x4(r6)
	  stb       r5, 0x5(r6)
	  stb       r5, 0x6(r6)
	  stb       r5, 0x7(r6)
	  addi      r6, r6, 0x8
	  bdnz+     .loc_0x30C
	  li        r5, 0xC1
	  li        r0, 0xFE
	  stb       r5, 0x11(r1)
	  stb       r0, 0x14(r1)
	  b         .loc_0x4E4
	  lbz       r0, 0xA(r1)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x360
	  li        r0, 0x7
	  stb       r0, 0xA(r1)
	  b         .loc_0x370

	.loc_0x360:
	  cmplwi    r0, 0
	  beq-      .loc_0x370
	  li        r0, 0xFF
	  stb       r0, 0xB(r1)

	.loc_0x370:
	  lbzu      r10, 0x1(r3)
	  li        r11, 0
	  extsb     r10, r10
	  cmpwi     r10, 0x5E
	  bne-      .loc_0x390
	  lbzu      r10, 0x1(r3)
	  li        r11, 0x1
	  extsb     r10, r10

	.loc_0x390:
	  cmpwi     r10, 0x5D
	  bne-      .loc_0x3AC
	  lbz       r0, 0x1B(r1)
	  lbzu      r10, 0x1(r3)
	  ori       r0, r0, 0x20
	  stb       r0, 0x1B(r1)
	  extsb     r10, r10

	.loc_0x3AC:
	  addi      r9, r1, 0x8
	  b         .loc_0x438

	.loc_0x3B4:
	  rlwinm    r5,r10,29,27,31
	  lbz       r0, 0x1(r3)
	  addi      r7, r5, 0x8
	  li        r8, 0x1
	  rlwinm    r5,r10,0,29,31
	  lbzx      r6, r9, r7
	  slw       r5, r8, r5
	  cmpwi     r0, 0x2D
	  or        r5, r6, r5
	  stbx      r5, r9, r7
	  bne-      .loc_0x430
	  lbz       r12, 0x2(r3)
	  extsb.    r12, r12
	  beq-      .loc_0x430
	  cmpwi     r12, 0x5D
	  beq-      .loc_0x430
	  addi      r7, r1, 0x8
	  b         .loc_0x418

	.loc_0x3FC:
	  rlwinm    r5,r10,29,27,31
	  rlwinm    r0,r10,0,29,31
	  addi      r6, r5, 0x8
	  lbzx      r5, r7, r6
	  slw       r0, r8, r0
	  or        r0, r5, r0
	  stbx      r0, r7, r6

	.loc_0x418:
	  addi      r10, r10, 0x1
	  cmpw      r10, r12
	  ble+      .loc_0x3FC
	  lbzu      r10, 0x3(r3)
	  extsb     r10, r10
	  b         .loc_0x438

	.loc_0x430:
	  lbzu      r10, 0x1(r3)
	  extsb     r10, r10

	.loc_0x438:
	  cmpwi     r10, 0
	  beq-      .loc_0x448
	  cmpwi     r10, 0x5D
	  bne+      .loc_0x3B4

	.loc_0x448:
	  cmpwi     r10, 0
	  bne-      .loc_0x45C
	  li        r0, 0xFF
	  stb       r0, 0xB(r1)
	  b         .loc_0x4E4

	.loc_0x45C:
	  cmpwi     r11, 0
	  beq-      .loc_0x4E4
	  li        r0, 0x4
	  addi      r5, r1, 0x10
	  mtctr     r0

	.loc_0x470:
	  lbz       r0, 0x0(r5)
	  not       r0, r0
	  stb       r0, 0x0(r5)
	  lbz       r0, 0x1(r5)
	  not       r0, r0
	  stb       r0, 0x1(r5)
	  lbz       r0, 0x2(r5)
	  not       r0, r0
	  stb       r0, 0x2(r5)
	  lbz       r0, 0x3(r5)
	  not       r0, r0
	  stb       r0, 0x3(r5)
	  lbz       r0, 0x4(r5)
	  not       r0, r0
	  stb       r0, 0x4(r5)
	  lbz       r0, 0x5(r5)
	  not       r0, r0
	  stb       r0, 0x5(r5)
	  lbz       r0, 0x6(r5)
	  not       r0, r0
	  stb       r0, 0x6(r5)
	  lbz       r0, 0x7(r5)
	  not       r0, r0
	  stb       r0, 0x7(r5)
	  addi      r5, r5, 0x8
	  bdnz+     .loc_0x470
	  b         .loc_0x4E4

	.loc_0x4DC:
	  li        r0, 0xFF
	  stb       r0, 0xB(r1)

	.loc_0x4E4:
	  lwz       r5, 0x8(r1)
	  addi      r3, r3, 0x1
	  lwz       r0, 0xC(r1)
	  stw       r5, 0x0(r4)
	  lwz       r5, 0x10(r1)
	  stw       r0, 0x4(r4)
	  lwz       r0, 0x14(r1)
	  stw       r5, 0x8(r4)
	  lwz       r5, 0x18(r1)
	  stw       r0, 0xC(r4)
	  lwz       r0, 0x1C(r1)
	  stw       r5, 0x10(r4)
	  lwz       r5, 0x20(r1)
	  stw       r0, 0x14(r4)
	  lwz       r0, 0x24(r1)
	  stw       r5, 0x18(r4)
	  lwz       r5, 0x28(r1)
	  stw       r0, 0x1C(r4)
	  lwz       r0, 0x2C(r1)
	  stw       r5, 0x20(r4)
	  stw       r0, 0x24(r4)

	.loc_0x538:
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  addi      r1, r1, 0x40
	  blr
	*/
}
