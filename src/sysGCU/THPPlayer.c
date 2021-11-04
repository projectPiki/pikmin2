

/*
 * --INFO--
 * Address:	8044DE38
 * Size:	0000A8
 */
void audioCallbackWithMSound(long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r4, 0x4490
	  lwz       r0, 0xA0(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x40
	  lbz       r0, 0xA5(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x40
	  lbz       r0, 0xA7(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x48

	.loc_0x40:
	  li        r3, 0
	  b         .loc_0x94

	.loc_0x48:
	  bl        -0x35F234
	  lwz       r0, -0x63BC(r13)
	  mr        r5, r31
	  lis       r4, 0x8050
	  mr        r31, r3
	  xori      r7, r0, 0x1
	  mulli     r6, r7, 0x8C0
	  addi      r0, r4, 0x31A0
	  stw       r7, -0x63BC(r13)
	  li        r4, 0
	  add       r3, r0, r6
	  bl        0x1368
	  mr        r3, r31
	  bl        -0x35F254
	  lwz       r4, -0x63BC(r13)
	  lis       r3, 0x8050
	  addi      r0, r3, 0x31A0
	  mulli     r3, r4, 0x8C0
	  add       r3, r0, r3

	.loc_0x94:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void audioInitWithMSound()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void audioQuitWithMSound()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044DEE0
 * Size:	0000D8
 */
void THPPlayerInit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8050
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x3100
	  stw       r30, 0x8(r1)
	  lwz       r0, -0x63C8(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0xBC
	  lis       r3, 0x8051
	  li        r4, 0
	  addi      r3, r3, 0x4490
	  li        r5, 0x1D0
	  bl        -0x448E64
	  bl        -0x3615FC
	  addi      r3, r31, 0x60
	  addi      r4, r31, 0x80
	  li        r5, 0x3
	  bl        -0x35EA70
	  bl        -0x34F920
	  cmpwi     r3, 0
	  bne-      .loc_0x64
	  li        r3, 0
	  b         .loc_0xC0

	.loc_0x64:
	  bl        -0x35F30C
	  li        r5, 0
	  lis       r4, 0x8045
	  subi      r0, r4, 0x21C8
	  stw       r5, -0x63BC(r13)
	  mr        r30, r3
	  li        r4, 0x3
	  stw       r5, -0x63B8(r13)
	  mr        r3, r0
	  stw       r5, -0x63B4(r13)
	  bl        -0x3A5D88
	  mr        r3, r30
	  bl        -0x35F314
	  addi      r3, r31, 0xA0
	  li        r4, 0
	  li        r5, 0x1180
	  bl        -0x448ED0
	  addi      r3, r31, 0xA0
	  li        r4, 0x1180
	  bl        -0x361878
	  li        r0, 0x1
	  stw       r0, -0x63C8(r13)

	.loc_0xBC:
	  li        r3, 0x1

	.loc_0xC0:
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
 * Address:	8044DFB8
 * Size:	000034
 */
void THPPlayerQuit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x36166C
	  li        r3, 0
	  li        r4, 0
	  bl        -0x3A5DEC
	  li        r0, 0
	  stw       r0, -0x63C8(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044DFEC
 * Size:	000334
 */
void THPPlayerOpen(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r23, 0xC(r1)
	  mr        r23, r3
	  mr        r31, r4
	  lwz       r0, -0x63C8(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x320

	.loc_0x2C:
	  lis       r3, 0x8051
	  addi      r30, r3, 0x4490
	  lwz       r0, 0xA0(r30)
	  cmpwi     r0, 0
	  beq-      .loc_0x48
	  li        r3, 0
	  b         .loc_0x320

	.loc_0x48:
	  addi      r29, r30, 0x80
	  li        r4, 0
	  mr        r3, r29
	  li        r5, 0xC
	  bl        -0x448F90
	  lis       r3, 0x8051
	  li        r4, 0
	  addi      r3, r3, 0x4490
	  li        r5, 0x10
	  addi      r28, r3, 0x8C
	  mr        r3, r28
	  bl        -0x448FAC
	  lis       r4, 0x8051
	  mr        r3, r23
	  addi      r4, r4, 0x4490
	  bl        -0x371BA4
	  cmpwi     r3, 0
	  bne-      .loc_0x98
	  li        r3, 0
	  b         .loc_0x320

	.loc_0x98:
	  li        r0, 0x1
	  lis       r3, 0x8051
	  lis       r4, 0x8050
	  stb       r0, -0x63B0(r13)
	  addi      r3, r3, 0x4490
	  li        r5, 0x40
	  addi      r4, r4, 0x3100
	  li        r6, 0
	  li        r7, 0x2
	  bl        -0x371628
	  cmpwi     r3, 0
	  bge-      .loc_0xDC
	  lis       r3, 0x8051
	  addi      r3, r3, 0x4490
	  bl        -0x371B28
	  li        r3, 0
	  b         .loc_0x320

	.loc_0xDC:
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r4, r3, 0x4490
	  stb       r0, -0x63B0(r13)
	  lis       r3, 0x8050
	  li        r5, 0x30
	  addi      r23, r4, 0x3C
	  addi      r4, r3, 0x3100
	  mr        r3, r23
	  bl        -0x448F50
	  mr        r3, r23
	  addi      r4, r2, 0x2798
	  bl        -0x383A38
	  cmpwi     r3, 0
	  beq-      .loc_0x12C
	  lis       r3, 0x8051
	  addi      r3, r3, 0x4490
	  bl        -0x371B78
	  li        r3, 0
	  b         .loc_0x320

	.loc_0x12C:
	  lis       r3, 0x8051
	  addi      r3, r3, 0x4490
	  lwz       r4, 0x40(r3)
	  subis     r0, r4, 0x1
	  cmplwi    r0, 0x1000
	  beq-      .loc_0x150
	  bl        -0x371B9C
	  li        r3, 0
	  b         .loc_0x320

	.loc_0x150:
	  lwz       r24, 0x5C(r3)
	  li        r0, 0x1
	  lis       r4, 0x8050
	  stb       r0, -0x63B0(r13)
	  addi      r4, r4, 0x3100
	  mr        r6, r24
	  li        r5, 0x20
	  li        r7, 0x2
	  bl        -0x3716DC
	  cmpwi     r3, 0
	  bge-      .loc_0x190
	  lis       r3, 0x8051
	  addi      r3, r3, 0x4490
	  bl        -0x371BDC
	  li        r3, 0
	  b         .loc_0x320

	.loc_0x190:
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r4, r3, 0x4490
	  stb       r0, -0x63B0(r13)
	  lis       r3, 0x8050
	  li        r5, 0x14
	  addi      r25, r4, 0x6C
	  addi      r4, r3, 0x3100
	  mr        r3, r25
	  bl        -0x449004
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r27, r3, 0x4490
	  addi      r24, r24, 0x14
	  stb       r0, 0xA7(r27)
	  mr        r26, r27
	  li        r23, 0
	  b         .loc_0x2DC

	.loc_0x1D8:
	  lbz       r0, 0x70(r26)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x25C
	  bge-      .loc_0x2CC
	  cmpwi     r0, 0
	  bge-      .loc_0x1F4
	  b         .loc_0x2CC

	.loc_0x1F4:
	  li        r0, 0x1
	  lis       r3, 0x8051
	  lis       r4, 0x8050
	  stb       r0, -0x63B0(r13)
	  addi      r3, r3, 0x4490
	  mr        r6, r24
	  addi      r4, r4, 0x3100
	  li        r5, 0x20
	  li        r7, 0x2
	  bl        -0x371784
	  cmpwi     r3, 0
	  bge-      .loc_0x238
	  lis       r3, 0x8051
	  addi      r3, r3, 0x4490
	  bl        -0x371C84
	  li        r3, 0
	  b         .loc_0x320

	.loc_0x238:
	  li        r0, 0
	  lis       r3, 0x8050
	  stb       r0, -0x63B0(r13)
	  addi      r4, r3, 0x3100
	  mr        r3, r29
	  li        r5, 0xC
	  bl        -0x4490A0
	  addi      r24, r24, 0xC
	  b         .loc_0x2D4

	.loc_0x25C:
	  li        r0, 0x1
	  lis       r3, 0x8051
	  lis       r4, 0x8050
	  stb       r0, -0x63B0(r13)
	  addi      r3, r3, 0x4490
	  mr        r6, r24
	  addi      r4, r4, 0x3100
	  li        r5, 0x20
	  li        r7, 0x2
	  bl        -0x3717EC
	  cmpwi     r3, 0
	  bge-      .loc_0x2A0
	  lis       r3, 0x8051
	  addi      r3, r3, 0x4490
	  bl        -0x371CEC
	  li        r3, 0
	  b         .loc_0x320

	.loc_0x2A0:
	  li        r0, 0
	  lis       r3, 0x8050
	  stb       r0, -0x63B0(r13)
	  addi      r4, r3, 0x3100
	  mr        r3, r28
	  li        r5, 0x10
	  bl        -0x449108
	  li        r0, 0x1
	  addi      r24, r24, 0x10
	  stb       r0, 0xA7(r27)
	  b         .loc_0x2D4

	.loc_0x2CC:
	  li        r3, 0
	  b         .loc_0x320

	.loc_0x2D4:
	  addi      r26, r26, 0x1
	  addi      r23, r23, 0x1

	.loc_0x2DC:
	  lwz       r0, 0x0(r25)
	  cmplw     r23, r0
	  blt+      .loc_0x1D8
	  lis       r3, 0x8051
	  lfs       f0, 0x279C(r2)
	  addi      r4, r3, 0x4490
	  li        r5, 0
	  li        r0, 0x1
	  stb       r5, 0xA5(r4)
	  li        r3, 0x1
	  stb       r5, 0xA4(r4)
	  stb       r5, 0xA6(r4)
	  stw       r31, 0xB0(r4)
	  stw       r0, 0xA0(r30)
	  stfs      f0, 0xDC(r4)
	  stfs      f0, 0xE0(r4)
	  stw       r5, 0xE8(r4)

	.loc_0x320:
	  lmw       r23, 0xC(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044E320
 * Size:	000054
 */
void THPPlayerClose(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x4490
	  lwz       r0, 0xA0(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x40
	  lbz       r0, 0xA4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  li        r0, 0
	  stw       r0, 0xA0(r3)
	  bl        -0x371DC0
	  li        r3, 0x1
	  b         .loc_0x44

	.loc_0x40:
	  li        r3, 0

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044E374
 * Size:	0000B0
 */
void THPPlayerCalcNeedMemory(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8051
	  addi      r3, r3, 0x4490
	  lwz       r0, 0xA0(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0xA8
	  lwz       r0, 0xB0(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x30
	  lwz       r3, 0x58(r3)
	  addi      r0, r3, 0x1F
	  rlwinm    r6,r0,0,0,26
	  b         .loc_0x40

	.loc_0x30:
	  lwz       r3, 0x44(r3)
	  addi      r0, r3, 0x1F
	  rlwinm    r0,r0,0,0,26
	  mulli     r6, r0, 0xA

	.loc_0x40:
	  lis       r3, 0x8051
	  addi      r5, r3, 0x4490
	  lwz       r4, 0x80(r5)
	  lwz       r3, 0x84(r5)
	  lbz       r0, 0xA7(r5)
	  mullw     r3, r4, r3
	  cmplwi    r0, 0
	  addi      r0, r3, 0x1F
	  rlwinm    r3,r3,30,2,31
	  rlwinm    r4,r0,0,0,26
	  addi      r0, r3, 0x1F
	  mulli     r3, r4, 0x3
	  rlwinm    r0,r0,0,0,26
	  mulli     r0, r0, 0x3
	  add       r6, r6, r3
	  add       r6, r6, r0
	  add       r6, r6, r0
	  beq-      .loc_0xA0
	  lwz       r0, 0x48(r5)
	  rlwinm    r3,r0,2,0,29
	  addi      r0, r3, 0x1F
	  rlwinm    r0,r0,0,0,26
	  mulli     r0, r0, 0x3
	  add       r6, r6, r0

	.loc_0xA0:
	  addi      r3, r6, 0x1000
	  blr

	.loc_0xA8:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044E424
 * Size:	000210
 */
void THPPlayerSetBuffer(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x24(r1)
	  addi      r5, r4, 0x4490
	  stmw      r27, 0xC(r1)
	  lwz       r0, 0xA0(r5)
	  cmpwi     r0, 0
	  beq-      .loc_0x1F8
	  lbz       r0, 0xA4(r5)
	  cmplwi    r0, 0
	  bne-      .loc_0x1F8
	  lwz       r0, 0xB0(r5)
	  cmpwi     r0, 0
	  beq-      .loc_0x4C
	  lwz       r0, 0x58(r5)
	  stw       r3, 0xB4(r5)
	  add       r31, r3, r0
	  b         .loc_0x114

	.loc_0x4C:
	  stw       r3, 0x100(r5)
	  lwz       r4, 0x44(r5)
	  addi      r0, r4, 0x1F
	  rlwinm    r0,r0,0,0,26
	  add       r31, r3, r0
	  stw       r31, 0x10C(r5)
	  lwz       r3, 0x44(r5)
	  addi      r0, r3, 0x1F
	  rlwinm    r0,r0,0,0,26
	  add       r31, r31, r0
	  stw       r31, 0x118(r5)
	  lwz       r3, 0x44(r5)
	  addi      r0, r3, 0x1F
	  rlwinm    r0,r0,0,0,26
	  add       r31, r31, r0
	  stw       r31, 0x124(r5)
	  lwz       r3, 0x44(r5)
	  addi      r0, r3, 0x1F
	  rlwinm    r0,r0,0,0,26
	  add       r31, r31, r0
	  stw       r31, 0x130(r5)
	  lwz       r3, 0x44(r5)
	  addi      r0, r3, 0x1F
	  rlwinm    r0,r0,0,0,26
	  add       r31, r31, r0
	  stw       r31, 0x13C(r5)
	  lwz       r4, 0x44(r5)
	  addi      r0, r4, 0x1F
	  rlwinm    r0,r0,0,0,26
	  add       r31, r31, r0
	  stw       r31, 0x148(r5)
	  lwz       r3, 0x44(r5)
	  addi      r0, r3, 0x1F
	  rlwinm    r0,r0,0,0,26
	  add       r31, r31, r0
	  stw       r31, 0x154(r5)
	  lwz       r3, 0x44(r5)
	  addi      r0, r3, 0x1F
	  rlwinm    r0,r0,0,0,26
	  add       r31, r31, r0
	  stw       r31, 0x160(r5)
	  lwz       r3, 0x44(r5)
	  addi      r0, r3, 0x1F
	  rlwinm    r0,r0,0,0,26
	  add       r31, r31, r0
	  stw       r31, 0x16C(r5)
	  lwz       r3, 0x44(r5)
	  addi      r0, r3, 0x1F
	  rlwinm    r0,r0,0,0,26
	  add       r31, r31, r0

	.loc_0x114:
	  lis       r3, 0x8051
	  li        r29, 0
	  addi      r30, r3, 0x4490
	  lwz       r3, 0x80(r30)
	  lwz       r0, 0x84(r30)
	  mullw     r4, r3, r0
	  rlwinm    r3,r4,30,2,31
	  addi      r4, r4, 0x1F
	  addi      r0, r3, 0x1F
	  rlwinm    r28,r4,0,0,26
	  rlwinm    r27,r0,0,0,26

	.loc_0x140:
	  stw       r31, 0x178(r30)
	  mr        r3, r31
	  mr        r4, r28
	  bl        -0x361E84
	  add       r31, r31, r28
	  mr        r4, r27
	  stw       r31, 0x17C(r30)
	  mr        r3, r31
	  bl        -0x361E98
	  add       r31, r31, r27
	  mr        r4, r27
	  stw       r31, 0x180(r30)
	  mr        r3, r31
	  bl        -0x361EAC
	  addi      r29, r29, 0x1
	  add       r31, r31, r27
	  cmplwi    r29, 0x3
	  addi      r30, r30, 0x10
	  blt+      .loc_0x140
	  lis       r3, 0x8051
	  addi      r5, r3, 0x4490
	  lbz       r0, 0xA7(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x1E4
	  lwz       r0, 0x48(r5)
	  li        r4, 0
	  stw       r31, 0x1A8(r5)
	  rlwinm    r3,r0,2,0,29
	  addi      r0, r3, 0x1F
	  stw       r31, 0x1AC(r5)
	  rlwinm    r0,r0,0,0,26
	  add       r31, r31, r0
	  stw       r4, 0x1B0(r5)
	  stw       r31, 0x1B4(r5)
	  stw       r31, 0x1B8(r5)
	  add       r31, r31, r0
	  stw       r4, 0x1BC(r5)
	  stw       r31, 0x1C0(r5)
	  stw       r31, 0x1C4(r5)
	  add       r31, r31, r0
	  stw       r4, 0x1C8(r5)

	.loc_0x1E4:
	  lis       r4, 0x8051
	  li        r3, 0x1
	  addi      r4, r4, 0x4490
	  stw       r31, 0x9C(r4)
	  b         .loc_0x1FC

	.loc_0x1F8:
	  li        r3, 0

	.loc_0x1FC:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void InitAllMessageQueue()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void WaitUntilPrepare()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044E634
 * Size:	000030
 */
void PrepareReady(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8050
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r3, r5, 0x3140
	  li        r5, 0x1
	  bl        -0x35F134
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044E664
 * Size:	000394
 */
void THPPlayerPrepare(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r6, 0x8051
	  lis       r7, 0x804A
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  addi      r29, r6, 0x4490
	  mr        r30, r3
	  mr        r27, r4
	  mr        r31, r5
	  subi      r28, r7, 0x4B90
	  lwz       r0, 0xA0(r29)
	  cmpwi     r0, 0
	  beq-      .loc_0x37C
	  lbz       r0, 0xA4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x37C
	  cmpwi     r30, 0
	  ble-      .loc_0xE8
	  lwz       r6, 0x60(r29)
	  cmplwi    r6, 0
	  bne-      .loc_0x60
	  li        r3, 0
	  b         .loc_0x380

	.loc_0x60:
	  lwz       r0, 0x50(r29)
	  cmplw     r0, r30
	  ble-      .loc_0xE0
	  subi      r0, r30, 0x1
	  li        r4, 0x1
	  rlwinm    r0,r0,2,0,29
	  lis       r3, 0x8050
	  stb       r4, -0x63B0(r13)
	  addi      r4, r3, 0x3100
	  mr        r3, r29
	  li        r5, 0x20
	  add       r6, r6, r0
	  li        r7, 0x2
	  bl        -0x371C78
	  cmpwi     r3, 0
	  bge-      .loc_0xA8
	  li        r3, 0
	  b         .loc_0x380

	.loc_0xA8:
	  lis       r4, 0x8051
	  lis       r3, 0x8050
	  addi      r5, r4, 0x4490
	  lwzu      r7, 0x3100(r3)
	  lwz       r4, 0x64(r5)
	  li        r6, 0
	  lwz       r0, 0x4(r3)
	  add       r3, r4, r7
	  stb       r6, -0x63B0(r13)
	  sub       r0, r0, r7
	  stw       r3, 0xB8(r5)
	  stw       r30, 0xC0(r5)
	  stw       r0, 0xBC(r5)
	  b         .loc_0xFC

	.loc_0xE0:
	  li        r3, 0
	  b         .loc_0x380

	.loc_0xE8:
	  lwz       r3, 0x64(r29)
	  lwz       r0, 0x54(r29)
	  stw       r3, 0xB8(r29)
	  stw       r0, 0xBC(r29)
	  stw       r30, 0xC0(r29)

	.loc_0xFC:
	  lis       r3, 0x8051
	  addi      r30, r3, 0x4490
	  lbz       r0, 0xA7(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x130
	  cmpwi     r31, 0
	  blt-      .loc_0x124
	  lwz       r0, 0x98(r30)
	  cmplw     r31, r0
	  blt-      .loc_0x12C

	.loc_0x124:
	  li        r3, 0
	  b         .loc_0x380

	.loc_0x12C:
	  stw       r31, 0xEC(r30)

	.loc_0x130:
	  lis       r3, 0x8051
	  rlwinm    r4,r27,0,31,31
	  addi      r31, r3, 0x4490
	  li        r3, 0
	  lwz       r0, 0xB0(r31)
	  stb       r4, 0xA6(r31)
	  cmpwi     r0, 0
	  stw       r3, 0xD8(r31)
	  beq-      .loc_0x1D0
	  li        r0, 0x1
	  lwz       r4, 0xB4(r31)
	  stb       r0, -0x63B0(r13)
	  mr        r3, r31
	  lwz       r5, 0x58(r31)
	  li        r7, 0x2
	  lwz       r6, 0x64(r31)
	  bl        -0x371D54
	  cmpwi     r3, 0
	  bge-      .loc_0x184
	  li        r3, 0
	  b         .loc_0x380

	.loc_0x184:
	  lis       r3, 0x8051
	  li        r6, 0
	  addi      r3, r3, 0x4490
	  lwz       r4, 0xB4(r31)
	  lwz       r0, 0xB8(r3)
	  li        r3, 0xE
	  lwz       r5, 0x64(r31)
	  add       r0, r4, r0
	  stb       r6, -0x63B0(r13)
	  sub       r25, r0, r5
	  mr        r4, r25
	  bl        0x10A0
	  lbz       r0, 0xA7(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x250
	  mr        r4, r25
	  li        r3, 0xC
	  bl        -0x1568
	  b         .loc_0x250

	.loc_0x1D0:
	  li        r3, 0xE
	  li        r4, 0
	  bl        0x1078
	  cmpwi     r3, 0
	  bne-      .loc_0x1F8
	  addi      r3, r28, 0
	  addi      r5, r28, 0xC
	  li        r4, 0x315
	  crclr     6, 0x6
	  bl        -0x424218

	.loc_0x1F8:
	  lbz       r0, 0xA7(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x22C
	  li        r3, 0xC
	  li        r4, 0
	  bl        -0x15AC
	  cmpwi     r3, 0
	  bne-      .loc_0x22C
	  addi      r3, r28, 0
	  addi      r5, r28, 0x30
	  li        r4, 0x321
	  crclr     6, 0x6
	  bl        -0x42424C

	.loc_0x22C:
	  li        r3, 0x8
	  bl        0xCF8
	  cmpwi     r3, 0
	  bne-      .loc_0x250
	  addi      r3, r28, 0
	  addi      r5, r28, 0x54
	  li        r4, 0x32C
	  crclr     6, 0x6
	  bl        -0x424270

	.loc_0x250:
	  lwz       r0, 0xB0(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x280
	  lis       r3, 0x8051
	  li        r27, 0
	  addi      r26, r3, 0x4490

	.loc_0x268:
	  addi      r3, r26, 0x100
	  bl        0xF50
	  addi      r27, r27, 0x1
	  addi      r26, r26, 0xC
	  cmpwi     r27, 0xA
	  blt+      .loc_0x268

	.loc_0x280:
	  lis       r3, 0x8051
	  li        r25, 0
	  addi      r27, r3, 0x4490
	  mr        r26, r27

	.loc_0x290:
	  addi      r3, r26, 0x178
	  bl        0x1454
	  addi      r25, r25, 0x1
	  addi      r26, r26, 0x10
	  cmpwi     r25, 0x3
	  blt+      .loc_0x290
	  lbz       r0, 0xA7(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x2D0
	  li        r26, 0

	.loc_0x2B8:
	  addi      r3, r27, 0x1A8
	  bl        -0x1340
	  addi      r26, r26, 0x1
	  addi      r27, r27, 0xC
	  cmpwi     r26, 0x3
	  blt+      .loc_0x2B8

	.loc_0x2D0:
	  lis       r3, 0x8050
	  subi      r4, r13, 0x63C4
	  addi      r3, r3, 0x3140
	  li        r5, 0x1
	  bl        -0x35F488
	  bl        0x1044
	  lbz       r0, 0xA7(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x2F8
	  bl        -0x15C0

	.loc_0x2F8:
	  lwz       r0, 0xB0(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x308
	  bl        0xCC4

	.loc_0x308:
	  lis       r3, 0x8050
	  addi      r4, r1, 0x8
	  addi      r3, r3, 0x3140
	  li        r5, 0x1
	  bl        -0x35F398
	  lwz       r0, 0x8(r1)
	  cmpwi     r0, 0
	  bne-      .loc_0x330
	  li        r3, 0
	  b         .loc_0x380

	.loc_0x330:
	  lis       r4, 0x8051
	  li        r5, 0x1
	  li        r0, 0
	  lis       r3, 0x8045
	  addi      r4, r4, 0x4490
	  stb       r5, 0xA4(r29)
	  subi      r3, r3, 0x149C
	  stb       r0, 0xA5(r4)
	  stw       r0, 0xF8(r4)
	  stw       r0, 0xFC(r4)
	  stw       r0, 0xF0(r4)
	  stw       r0, 0xF4(r4)
	  bl        -0x37DF24
	  stw       r3, -0x63C0(r13)
	  addi      r3, r28, 0x70
	  crclr     6, 0x6
	  bl        -0x3612E8
	  li        r3, 0x1
	  b         .loc_0x380

	.loc_0x37C:
	  li        r3, 0

	.loc_0x380:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044E9F8
 * Size:	000060
 */
void THPPlayerPlay(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8051
	  addi      r7, r3, 0x4490
	  lwz       r0, 0xA0(r7)
	  cmpwi     r0, 0
	  beq-      .loc_0x58
	  lbz       r0, 0xA4(r7)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x28
	  cmplwi    r0, 0x4
	  bne-      .loc_0x58

	.loc_0x28:
	  lis       r3, 0x8051
	  li        r6, 0x2
	  addi      r4, r3, 0x4490
	  li        r5, 0
	  li        r0, -0x1
	  stb       r6, 0xA4(r7)
	  li        r3, 0x1
	  stw       r5, 0xD0(r4)
	  stw       r5, 0xD4(r4)
	  stw       r0, 0xCC(r4)
	  stw       r0, 0xC8(r4)
	  blr

	.loc_0x58:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044EA58
 * Size:	0000D0
 */
void THPPlayerStop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  stw       r0, 0x14(r1)
	  addi      r4, r3, 0x4490
	  lwz       r0, 0xA0(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0xC0
	  lbz       r0, 0xA4(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  li        r0, 0
	  lwz       r3, -0x63C0(r13)
	  stb       r0, 0xA5(r4)
	  stb       r0, 0xA4(r4)
	  bl        -0x37DFF4
	  lis       r3, 0x8051
	  addi      r3, r3, 0x4490
	  lwz       r0, 0xB0(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x5C
	  bl        -0x36F974
	  bl        0xBB0

	.loc_0x5C:
	  bl        0xF0C
	  lis       r3, 0x8051
	  addi      r3, r3, 0x4490
	  lbz       r0, 0xA7(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  bl        -0x1700
	  li        r3, 0
	  li        r4, 0
	  bl        -0x3A68F4
	  lis       r3, 0x804A
	  subi      r3, r3, 0x4B08
	  crclr     6, 0x6
	  bl        -0x3613FC

	.loc_0x94:
	  bl        0x674
	  cmplwi    r3, 0
	  bne+      .loc_0x94
	  lis       r3, 0x8051
	  li        r0, 0
	  addi      r3, r3, 0x4490
	  lfs       f0, 0xE0(r3)
	  stw       r0, 0xE8(r3)
	  stfs      f0, 0xDC(r3)
	  stw       r0, 0xA8(r3)
	  stw       r0, 0xAC(r3)

	.loc_0xC0:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044EB28
 * Size:	00003C
 */
void THPPlayerPause(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8051
	  addi      r4, r3, 0x4490
	  lwz       r0, 0xA0(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x34
	  lbz       r0, 0xA4(r4)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x34
	  li        r0, 0x4
	  li        r3, 0x1
	  stb       r0, 0xA5(r4)
	  stb       r0, 0xA4(r4)
	  blr

	.loc_0x34:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C4
 */
void THPPlayerSkip(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044EB64
 * Size:	0002B8
 */
void PlayControl(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r12, -0x63C0(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x2C
	  mtctr     r12
	  bctrl

	.loc_0x2C:
	  lis       r3, 0x8051
	  li        r30, -0x1
	  addi      r31, r3, 0x4490
	  lwz       r0, 0xA0(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x29C
	  lbz       r0, 0xA4(r31)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x29C
	  lwz       r0, 0xA8(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x68
	  lwz       r0, 0xAC(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x80

	.loc_0x68:
	  lis       r3, 0x8051
	  li        r0, 0x5
	  addi      r3, r3, 0x4490
	  stb       r0, 0xA4(r31)
	  stb       r0, 0xA5(r3)
	  b         .loc_0x29C

	.loc_0x80:
	  lwz       r3, 0xCC(r31)
	  li        r7, 0x1
	  lwz       r0, 0xC8(r31)
	  li        r6, 0
	  addc      r5, r3, r7
	  adde      r4, r0, r6
	  stw       r5, 0xCC(r31)
	  xor       r3, r5, r6
	  xor       r0, r4, r6
	  stw       r4, 0xC8(r31)
	  or.       r0, r3, r0
	  bne-      .loc_0x140
	  bl        .loc_0x2B8
	  cmpwi     r3, 0
	  beq-      .loc_0x130
	  lis       r3, 0x8051
	  addi      r29, r3, 0x4490
	  lbz       r0, 0xA7(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x120
	  lwz       r3, 0xF4(r29)
	  lwz       r0, 0xF0(r29)
	  sub       r0, r0, r3
	  cmpwi     r0, 0x1
	  bgt-      .loc_0x114
	  li        r3, 0
	  bl        0x1130
	  lis       r5, 0x8051
	  lwz       r4, 0xF0(r29)
	  addi      r6, r5, 0x4490
	  mr        r30, r3
	  lwz       r5, 0xD8(r6)
	  addi      r0, r4, 0x1
	  stw       r0, 0xF0(r29)
	  subi      r0, r5, 0x1
	  stw       r0, 0xD8(r6)
	  b         .loc_0x1C8

	.loc_0x114:
	  li        r0, 0x2
	  stb       r0, 0xA5(r29)
	  b         .loc_0x1C8

	.loc_0x120:
	  li        r3, 0
	  bl        0x10F4
	  mr        r30, r3
	  b         .loc_0x1C8

	.loc_0x130:
	  li        r0, -0x1
	  stw       r0, 0xCC(r31)
	  stw       r0, 0xC8(r31)
	  b         .loc_0x1C8

	.loc_0x140:
	  xor       r3, r5, r7
	  xor       r0, r4, r6
	  or.       r0, r3, r0
	  bne-      .loc_0x158
	  li        r0, 0x2
	  stb       r0, 0xA5(r31)

	.loc_0x158:
	  bl        0x1CC
	  cmpwi     r3, 0
	  beq-      .loc_0x1C8
	  lis       r3, 0x8051
	  addi      r29, r3, 0x4490
	  lbz       r0, 0xA7(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x1BC
	  lwz       r3, 0xF4(r29)
	  lwz       r0, 0xF0(r29)
	  sub       r0, r0, r3
	  cmpwi     r0, 0x1
	  bgt-      .loc_0x1C8
	  li        r3, 0
	  bl        0x1088
	  lis       r5, 0x8051
	  lwz       r4, 0xF0(r29)
	  addi      r6, r5, 0x4490
	  mr        r30, r3
	  lwz       r5, 0xD8(r6)
	  addi      r0, r4, 0x1
	  stw       r0, 0xF0(r29)
	  subi      r0, r5, 0x1
	  stw       r0, 0xD8(r6)
	  b         .loc_0x1C8

	.loc_0x1BC:
	  li        r3, 0
	  bl        0x1058
	  mr        r30, r3

	.loc_0x1C8:
	  cmplwi    r30, 0
	  beq-      .loc_0x1F8
	  addis     r0, r30, 0x1
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x1F8
	  lis       r3, 0x8051
	  addi      r29, r3, 0x4490
	  lwz       r3, 0xF8(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x1F4
	  bl        0x3DC

	.loc_0x1F4:
	  stw       r30, 0xF8(r29)

	.loc_0x1F8:
	  lis       r3, 0x8051
	  addi      r5, r3, 0x4490
	  lbz       r0, 0xA6(r5)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x29C
	  lbz       r0, 0xA7(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x24C
	  lwz       r4, 0xF4(r5)
	  lwz       r3, 0xC0(r5)
	  lwz       r0, 0x50(r5)
	  add       r3, r4, r3
	  cmplw     r3, r0
	  bne-      .loc_0x29C
	  lwz       r0, 0xFC(r5)
	  cmplwi    r0, 0
	  bne-      .loc_0x29C
	  li        r0, 0x3
	  stb       r0, 0xA5(r5)
	  stb       r0, 0xA4(r31)
	  b         .loc_0x29C

	.loc_0x24C:
	  lwz       r3, 0xF8(r5)
	  cmplwi    r3, 0
	  beq-      .loc_0x268
	  lwz       r3, 0xC(r3)
	  lwz       r0, 0xC0(r5)
	  add       r5, r3, r0
	  b         .loc_0x270

	.loc_0x268:
	  lwz       r3, 0xC0(r5)
	  subi      r5, r3, 0x1

	.loc_0x270:
	  lis       r3, 0x8051
	  addi      r4, r3, 0x4490
	  lwz       r3, 0x50(r4)
	  subi      r0, r3, 0x1
	  cmplw     r5, r0
	  bne-      .loc_0x29C
	  cmplwi    r30, 0
	  bne-      .loc_0x29C
	  li        r0, 0x3
	  stb       r0, 0xA5(r4)
	  stb       r0, 0xA4(r31)

	.loc_0x29C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x2B8:
	*/
}

/*
 * --INFO--
 * Address:	8044EE1C
 * Size:	00006C
 */
void ProperTimingForStart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x4490
	  lwz       r3, 0x88(r3)
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x34
	  bl        -0x37CC4C
	  cmplwi    r3, 0
	  bne-      .loc_0x58
	  li        r3, 0x1
	  b         .loc_0x5C

	.loc_0x34:
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x50
	  bl        -0x37CC68
	  cmplwi    r3, 0x1
	  bne-      .loc_0x58
	  li        r3, 0x1
	  b         .loc_0x5C

	.loc_0x50:
	  li        r3, 0x1
	  b         .loc_0x5C

	.loc_0x58:
	  li        r3, 0

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044EE88
 * Size:	000140
 */
void ProperTimingForGettingNextFrame()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  stw       r0, 0x24(r1)
	  addi      r3, r3, 0x4490
	  stw       r31, 0x1C(r1)
	  lwz       r4, 0x88(r3)
	  rlwinm.   r0,r4,0,31,31
	  beq-      .loc_0x38
	  bl        -0x37CCBC
	  cmplwi    r3, 0
	  bne-      .loc_0x128
	  li        r3, 0x1
	  b         .loc_0x12C

	.loc_0x38:
	  rlwinm.   r0,r4,0,30,30
	  beq-      .loc_0x54
	  bl        -0x37CCD8
	  cmplwi    r3, 0x1
	  bne-      .loc_0x128
	  li        r3, 0x1
	  b         .loc_0x12C

	.loc_0x54:
	  lfs       f1, 0x27A0(r2)
	  lfs       f0, 0x4C(r3)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r31, 0xC(r1)
	  bl        -0x37CBD0
	  cmplwi    r3, 0x1
	  bne-      .loc_0xC0
	  lis       r3, 0x8051
	  srawi     r0, r31, 0x1F
	  addi      r3, r3, 0x4490
	  li        r5, 0
	  lwz       r8, 0xCC(r3)
	  li        r6, 0x1388
	  lwz       r4, 0xC8(r3)
	  mulhwu    r3, r8, r31
	  mullw     r7, r4, r31
	  mullw     r0, r8, r0
	  add       r3, r3, r7
	  mullw     r4, r8, r31
	  add       r3, r3, r0
	  bl        -0x38D170
	  lis       r3, 0x8051
	  addi      r3, r3, 0x4490
	  stw       r4, 0xD4(r3)
	  b         .loc_0x104

	.loc_0xC0:
	  lis       r3, 0x8051
	  srawi     r0, r31, 0x1F
	  addi      r3, r3, 0x4490
	  li        r5, 0
	  lwz       r8, 0xCC(r3)
	  li        r6, 0x176A
	  lwz       r4, 0xC8(r3)
	  mulhwu    r3, r8, r31
	  mullw     r7, r4, r31
	  mullw     r0, r8, r0
	  add       r3, r3, r7
	  mullw     r4, r8, r31
	  add       r3, r3, r0
	  bl        -0x38D1B8
	  lis       r3, 0x8051
	  addi      r3, r3, 0x4490
	  stw       r4, 0xD4(r3)

	.loc_0x104:
	  lis       r3, 0x8051
	  addi      r3, r3, 0x4490
	  lwz       r0, 0xD0(r3)
	  lwz       r4, 0xD4(r3)
	  cmpw      r0, r4
	  beq-      .loc_0x128
	  stw       r4, 0xD0(r3)
	  li        r3, 0x1
	  b         .loc_0x12C

	.loc_0x128:
	  li        r3, 0

	.loc_0x12C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044EFC8
 * Size:	0000D8
 */
void THPPlayerDrawCurrentFrame(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r8, 0x8051
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  addi      r31, r8, 0x4490
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r6
	  mr        r30, r7
	  lwz       r0, 0xA0(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0xC0
	  lbz       r0, 0xA4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  lwz       r0, 0xF8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  bl        -0x1878
	  lwz       r5, 0xF8(r31)
	  extsh     r0, r30
	  lis       r3, 0x8051
	  extsh     r6, r27
	  stw       r0, 0x8(r1)
	  addi      r3, r3, 0x4490
	  extsh     r7, r28
	  extsh     r10, r29
	  lwz       r4, 0x80(r3)
	  lwz       r0, 0x84(r3)
	  lwz       r3, 0x0(r5)
	  extsh     r8, r4
	  lwz       r4, 0x4(r5)
	  extsh     r9, r0
	  lwz       r5, 0x8(r5)
	  bl        -0x13F8
	  bl        -0x19D4
	  lwz       r4, 0xF8(r31)
	  lis       r3, 0x8051
	  addi      r3, r3, 0x4490
	  lwz       r4, 0xC(r4)
	  lwz       r0, 0xC0(r3)
	  lwz       r3, 0x50(r3)
	  add       r4, r4, r0
	  divwu     r0, r4, r3
	  mullw     r0, r0, r3
	  sub       r3, r4, r0
	  b         .loc_0xC4

	.loc_0xC0:
	  li        r3, -0x1

	.loc_0xC4:
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044F0A0
 * Size:	000048
 */
void THPPlayerGetVideoInfo(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x14(r1)
	  addi      r4, r4, 0x4490
	  lwz       r0, 0xA0(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x34
	  addi      r4, r4, 0x80
	  li        r5, 0xC
	  bl        -0x449F2C
	  li        r3, 0x1
	  b         .loc_0x38

	.loc_0x34:
	  li        r3, 0

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044F0E8
 * Size:	000048
 */
void THPPlayerGetAudioInfo(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x14(r1)
	  addi      r4, r4, 0x4490
	  lwz       r0, 0xA0(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x34
	  addi      r4, r4, 0x8C
	  li        r5, 0x10
	  bl        -0x449F74
	  li        r3, 0x1
	  b         .loc_0x38

	.loc_0x34:
	  li        r3, 0

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void THPPlayerGetFrameRate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void THPPlayerGetTotalFrame(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void THPPlayerGetState(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044F130
 * Size:	000030
 */
void PushUsedTextureSet(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8050
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r3, r5, 0x3160
	  li        r5, 0
	  bl        -0x35FC30
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044F160
 * Size:	000044
 */
void PopUsedTextureSet()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8050
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  addi      r4, r1, 0x8
	  addi      r3, r3, 0x3160
	  bl        -0x35FB98
	  cmpwi     r3, 0x1
	  bne-      .loc_0x30
	  lwz       r3, 0x8(r1)
	  b         .loc_0x34

	.loc_0x30:
	  li        r3, 0

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044F1A4
 * Size:	000070
 */
void THPPlayerDrawDone(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  bl        -0x369C78
	  lwz       r0, -0x63C8(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x5C
	  lis       r3, 0x8050
	  addi      r31, r3, 0x3160

	.loc_0x28:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  li        r5, 0
	  bl        -0x35FBF4
	  cmpwi     r3, 0x1
	  bne-      .loc_0x48
	  lwz       r3, 0x8(r1)
	  b         .loc_0x4C

	.loc_0x48:
	  li        r3, 0

	.loc_0x4C:
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  bl        0xB54
	  b         .loc_0x28

	.loc_0x5C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044F214
 * Size:	000250
 */
void MixAudio(short*, short*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stmw      r23, 0x3C(r1)
	  lis       r4, 0x8051
	  addi      r31, r4, 0x4490
	  lwz       r0, 0xA0(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x220
	  lbz       r0, 0xA5(r31)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x220
	  lbz       r0, 0xA7(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x220
	  mr        r29, r5
	  mr        r27, r3

	.loc_0x54:
	  lwz       r0, 0xFC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x94
	  li        r3, 0
	  bl        -0x1C68
	  cmplwi    r3, 0
	  stw       r3, 0xFC(r31)
	  bne-      .loc_0x88
	  mr        r3, r27
	  rlwinm    r5,r29,2,0,29
	  li        r4, 0
	  bl        -0x44A1E0
	  b         .loc_0x22C

	.loc_0x88:
	  lwz       r3, 0xF4(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0xF4(r31)

	.loc_0x94:
	  lwz       r4, 0xFC(r31)
	  lwz       r30, 0x8(r4)
	  cmplwi    r30, 0
	  beq+      .loc_0x54
	  cmplw     r30, r29
	  blt-      .loc_0xB0
	  mr        r30, r29

	.loc_0xB0:
	  lis       r3, 0x804F
	  lwz       r26, 0x4(r4)
	  lfd       f30, 0x27A8(r2)
	  subi      r24, r3, 0x2C40
	  lfs       f31, 0x27A4(r2)
	  li        r28, 0
	  lis       r25, 0x4330
	  b         .loc_0x1D4

	.loc_0xD0:
	  lwz       r3, 0xE8(r31)
	  cmpwi     r3, 0
	  beq-      .loc_0xF8
	  lfs       f1, 0xDC(r31)
	  subi      r0, r3, 0x1
	  lfs       f0, 0xE4(r31)
	  stw       r0, 0xE8(r31)
	  fadds     f0, f1, f0
	  stfs      f0, 0xDC(r31)
	  b         .loc_0x100

	.loc_0xF8:
	  lfs       f0, 0xE0(r31)
	  stfs      f0, 0xDC(r31)

	.loc_0x100:
	  lfs       f0, 0xDC(r31)
	  subi      r3, r13, 0x6340
	  lha       r0, 0x0(r26)
	  fctiwz    f0, f0
	  stw       r25, 0x10(r1)
	  stfd      f0, 0x8(r1)
	  lwz       r4, 0xC(r1)
	  rlwinm    r4,r4,1,0,30
	  lhzx      r23, r24, r4
	  mullw     r0, r23, r0
	  srawi     r0, r0, 0xF
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f30
	  fdivs     f1, f0, f31
	  bl        0x232CC
	  fmuls     f0, f31, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  cmpwi     r0, -0x8000
	  bge-      .loc_0x160
	  li        r0, -0x8000

	.loc_0x160:
	  cmpwi     r0, 0x7FFF
	  ble-      .loc_0x16C
	  li        r0, 0x7FFF

	.loc_0x16C:
	  sth       r0, 0x0(r27)
	  subi      r3, r13, 0x6340
	  lha       r0, 0x2(r26)
	  stw       r25, 0x20(r1)
	  mullw     r0, r23, r0
	  srawi     r0, r0, 0xF
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x24(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f30
	  fdivs     f1, f0, f31
	  bl        0x23274
	  fmuls     f0, f31, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  cmpwi     r0, -0x8000
	  bge-      .loc_0x1B8
	  li        r0, -0x8000

	.loc_0x1B8:
	  cmpwi     r0, 0x7FFF
	  ble-      .loc_0x1C4
	  li        r0, 0x7FFF

	.loc_0x1C4:
	  sth       r0, 0x2(r27)
	  addi      r27, r27, 0x4
	  addi      r26, r26, 0x4
	  addi      r28, r28, 0x1

	.loc_0x1D4:
	  cmplw     r28, r30
	  blt+      .loc_0xD0
	  lwz       r3, 0xFC(r31)
	  sub       r29, r29, r30
	  lwz       r0, 0x8(r3)
	  sub       r0, r0, r30
	  stw       r0, 0x8(r3)
	  lwz       r3, 0xFC(r31)
	  stw       r26, 0x4(r3)
	  lwz       r3, 0xFC(r31)
	  lwz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x214
	  bl        -0x1E3C
	  li        r0, 0
	  stw       r0, 0xFC(r31)

	.loc_0x214:
	  cmplwi    r29, 0
	  beq-      .loc_0x22C
	  b         .loc_0x54

	.loc_0x220:
	  rlwinm    r5,r5,2,0,29
	  li        r4, 0
	  bl        -0x44A388

	.loc_0x22C:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  lmw       r23, 0x3C(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044F464
 * Size:	000128
 */
void THPPlayerSetVolume(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8051
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  addi      r3, r5, 0x4490
	  lwz       r0, 0xA0(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x108
	  lbz       r0, 0xA7(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x108
	  bl        -0x35897C
	  cmplwi    r3, 0
	  li        r31, 0x30
	  bne-      .loc_0x54
	  li        r31, 0x20

	.loc_0x54:
	  cmpwi     r29, 0x7F
	  ble-      .loc_0x60
	  li        r29, 0x7F

	.loc_0x60:
	  cmpwi     r29, 0
	  bge-      .loc_0x6C
	  li        r29, 0

	.loc_0x6C:
	  lis       r3, 0x1
	  subi      r0, r3, 0x15A0
	  cmpw      r30, r0
	  ble-      .loc_0x80
	  mr        r30, r0

	.loc_0x80:
	  cmpwi     r30, 0
	  bge-      .loc_0x8C
	  li        r30, 0

	.loc_0x8C:
	  bl        -0x3608B8
	  xoris     r4, r29, 0x8000
	  lis       r0, 0x4330
	  stw       r4, 0xC(r1)
	  lis       r4, 0x8051
	  lfd       f2, 0x27A8(r2)
	  cmpwi     r30, 0
	  stw       r0, 0x8(r1)
	  addi      r5, r4, 0x4490
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f0, f2
	  stfs      f1, 0xE0(r5)
	  beq-      .loc_0xF0
	  mullw     r4, r31, r30
	  lfs       f0, 0xDC(r5)
	  stw       r0, 0x8(r1)
	  fsubs     f1, f1, f0
	  xoris     r0, r4, 0x8000
	  stw       r4, 0xE8(r5)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0xE4(r5)
	  b         .loc_0xFC

	.loc_0xF0:
	  li        r0, 0
	  stfs      f1, 0xDC(r5)
	  stw       r0, 0xE8(r5)

	.loc_0xFC:
	  bl        -0x360900
	  li        r3, 0x1
	  b         .loc_0x10C

	.loc_0x108:
	  li        r3, 0

	.loc_0x10C:
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
 * Address:	........
 * Size:	000038
 */
void THPPlayerGetVolume(void)
{
	// UNUSED FUNCTION
}
