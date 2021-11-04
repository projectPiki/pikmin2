

/*
 * --INFO--
 * Address:	800E1530
 * Size:	00018C
 */
void ProbeBarnacle(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  addi      r31, r5, 0
	  stw       r30, 0x20(r1)
	  addi      r30, r4, 0
	  stw       r29, 0x1C(r1)
	  addi      r29, r3, 0
	  cmpwi     r29, 0x2
	  stw       r28, 0x18(r1)
	  beq-      .loc_0x54
	  cmplwi    r30, 0
	  bne-      .loc_0x54
	  addi      r3, r29, 0
	  li        r4, 0
	  bl        -0xF88
	  cmpwi     r3, 0
	  bne-      .loc_0x54
	  li        r3, 0
	  b         .loc_0x16C

	.loc_0x54:
	  addi      r3, r29, 0
	  addi      r4, r30, 0
	  li        r5, 0
	  bl        -0x620
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  mr.       r28, r0
	  bne-      .loc_0x128
	  addi      r3, r29, 0
	  addi      r4, r30, 0
	  li        r5, 0
	  bl        -0xE00
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  mr.       r28, r0
	  bne-      .loc_0x120
	  lis       r3, 0x2001
	  addi      r0, r3, 0x1300
	  stw       r0, 0x14(r1)
	  addi      r3, r29, 0
	  addi      r4, r1, 0x14
	  li        r5, 0x4
	  li        r6, 0x1
	  li        r7, 0
	  bl        -0x199C
	  cntlzw    r0, r3
	  addi      r3, r29, 0
	  rlwinm    r28,r0,27,5,31
	  bl        -0x15C4
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  addi      r3, r29, 0
	  addi      r4, r31, 0
	  or        r28, r28, r0
	  li        r5, 0x4
	  li        r6, 0
	  li        r7, 0
	  bl        -0x19D0
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  addi      r3, r29, 0
	  or        r28, r28, r0
	  bl        -0x15FC
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  addi      r3, r29, 0
	  or        r28, r28, r0
	  bl        -0xD64
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r28, r28, r0

	.loc_0x120:
	  mr        r3, r29
	  bl        -0x5F0

	.loc_0x128:
	  cmpwi     r29, 0x2
	  beq-      .loc_0x140
	  cmplwi    r30, 0
	  bne-      .loc_0x140
	  mr        r3, r29
	  bl        -0xF78

	.loc_0x140:
	  cmpwi     r28, 0
	  beq-      .loc_0x150
	  li        r3, 0
	  b         .loc_0x16C

	.loc_0x150:
	  lwz       r3, 0x0(r31)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x168
	  li        r3, 0x1
	  b         .loc_0x16C

	.loc_0x168:
	  li        r3, 0

	.loc_0x16C:
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  lwz       r29, 0x1C(r1)
	  lwz       r28, 0x18(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E16BC
 * Size:	0001BC
 */
void __OSEnableBarnacle(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0
	  addi      r5, r1, 0x10
	  stw       r30, 0x18(r1)
	  addi      r30, r3, 0
	  bl        -0x55C
	  cmpwi     r3, 0
	  beq-      .loc_0x1A4
	  lwz       r4, 0x10(r1)
	  lis       r0, 0x102
	  cmpw      r4, r0
	  beq-      .loc_0x1A4
	  bge-      .loc_0xD0
	  cmpwi     r4, 0x4
	  beq-      .loc_0x1A4
	  bge-      .loc_0x9C
	  lis       r3, 0x8000
	  addi      r0, r3, 0x10
	  cmpw      r4, r0
	  beq-      .loc_0x1A4
	  bge-      .loc_0x80
	  addi      r0, r3, 0x8
	  cmpw      r4, r0
	  beq-      .loc_0x1A4
	  bge-      .loc_0x174
	  addi      r0, r3, 0x4
	  cmpw      r4, r0
	  beq-      .loc_0x1A4
	  b         .loc_0x174

	.loc_0x80:
	  cmpwi     r4, -0x1
	  beq-      .loc_0x1A4
	  bge-      .loc_0x174
	  addi      r0, r3, 0x20
	  cmpw      r4, r0
	  beq-      .loc_0x1A4
	  b         .loc_0x174

	.loc_0x9C:
	  cmpwi     r4, 0x20
	  beq-      .loc_0x1A4
	  bge-      .loc_0xC0
	  cmpwi     r4, 0x10
	  beq-      .loc_0x1A4
	  bge-      .loc_0x174
	  cmpwi     r4, 0x8
	  beq-      .loc_0x1A4
	  b         .loc_0x174

	.loc_0xC0:
	  lis       r0, 0x101
	  cmpw      r4, r0
	  beq-      .loc_0x1A4
	  b         .loc_0x174

	.loc_0xD0:
	  lis       r3, 0x404
	  addi      r0, r3, 0x404
	  cmpw      r4, r0
	  beq-      .loc_0x1A4
	  bge-      .loc_0x138
	  lis       r3, 0x402
	  addi      r0, r3, 0x100
	  cmpw      r4, r0
	  beq-      .loc_0x1A4
	  bge-      .loc_0x118
	  lis       r0, 0x301
	  cmpw      r4, r0
	  beq-      .loc_0x1A4
	  bge-      .loc_0x174
	  lis       r0, 0x202
	  cmpw      r4, r0
	  beq-      .loc_0x1A4
	  b         .loc_0x174

	.loc_0x118:
	  addi      r0, r3, 0x300
	  cmpw      r4, r0
	  beq-      .loc_0x1A4
	  bge-      .loc_0x174
	  addi      r0, r3, 0x200
	  cmpw      r4, r0
	  beq-      .loc_0x1A4
	  b         .loc_0x174

	.loc_0x138:
	  lis       r0, 0x413
	  cmpw      r4, r0
	  beq-      .loc_0x1A4
	  bge-      .loc_0x168
	  lis       r0, 0x412
	  cmpw      r4, r0
	  beq-      .loc_0x1A4
	  bge-      .loc_0x174
	  lis       r0, 0x406
	  cmpw      r4, r0
	  beq-      .loc_0x1A4
	  b         .loc_0x174

	.loc_0x168:
	  lis       r0, 0x422
	  cmpw      r4, r0
	  beq-      .loc_0x1A4

	.loc_0x174:
	  addi      r3, r30, 0
	  addi      r4, r31, 0
	  addi      r5, r1, 0x10
	  bl        -0x30C
	  cmpwi     r3, 0
	  beq-      .loc_0x1A4
	  lis       r3, 0xA5FF
	  stw       r30, -0x7168(r13)
	  addi      r0, r3, 0x5A
	  stw       r31, -0x7164(r13)
	  stw       r0, -0x715C(r13)
	  stw       r0, -0x7160(r13)

	.loc_0x1A4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E1878
 * Size:	000070
 */
void InitializeUART(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  lwz       r3, -0x715C(r13)
	  addis     r0, r3, 0x5A01
	  cmplwi    r0, 0x5A
	  bne-      .loc_0x24
	  li        r3, 0
	  b         .loc_0x60

	.loc_0x24:
	  bl        0x9854
	  rlwinm.   r0,r3,0,3,3
	  bne-      .loc_0x40
	  li        r0, 0
	  stw       r0, -0x7160(r13)
	  li        r3, 0x2
	  b         .loc_0x60

	.loc_0x40:
	  lis       r3, 0xA5FF
	  addi      r0, r3, 0x5A
	  li        r3, 0
	  stw       r0, -0x7160(r13)
	  li        r0, 0x1
	  stw       r3, -0x7168(r13)
	  li        r3, 0
	  stw       r0, -0x7164(r13)

	.loc_0x60:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void ReadUARTN(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void QueueLength(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E18E8
 * Size:	00021C
 */
void WriteUARTN(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x38(r1)
	  stmw      r25, 0x1C(r1)
	  addi      r30, r3, 0
	  addi      r31, r4, 0
	  lwz       r5, -0x7160(r13)
	  addis     r0, r5, 0x5A01
	  cmplwi    r0, 0x5A
	  beq-      .loc_0x30
	  li        r3, 0x2
	  b         .loc_0x208

	.loc_0x30:
	  bl        0xD320
	  mr        r0, r3
	  lwz       r3, -0x7168(r13)
	  lwz       r4, -0x7164(r13)
	  mr        r27, r0
	  li        r5, 0
	  bl        -0x9C0
	  cmpwi     r3, 0
	  bne-      .loc_0x64
	  mr        r3, r27
	  bl        0xD320
	  li        r3, 0
	  b         .loc_0x208

	.loc_0x64:
	  addi      r4, r30, 0
	  li        r3, 0xD
	  b         .loc_0x84

	.loc_0x70:
	  lbz       r0, 0x0(r4)
	  cmpwi     r0, 0xA
	  bne-      .loc_0x80
	  stb       r3, 0x0(r4)

	.loc_0x80:
	  addi      r4, r4, 0x1

	.loc_0x84:
	  sub       r0, r4, r30
	  cmplw     r0, r31
	  blt+      .loc_0x70
	  lis       r0, 0xA001
	  stw       r0, 0x14(r1)
	  li        r25, 0
	  lis       r29, 0x2001
	  b         .loc_0x1EC

	.loc_0xA4:
	  lwz       r3, -0x7168(r13)
	  li        r5, 0x3
	  lwz       r4, -0x7164(r13)
	  bl        -0x11E8
	  cmpwi     r3, 0
	  bne-      .loc_0xC4
	  li        r0, -0x1
	  b         .loc_0x11C

	.loc_0xC4:
	  stw       r29, 0x10(r1)
	  addi      r4, r1, 0x10
	  lwz       r3, -0x7168(r13)
	  li        r5, 0x4
	  li        r6, 0x1
	  li        r7, 0
	  bl        -0x1D7C
	  lwz       r3, -0x7168(r13)
	  bl        -0x199C
	  lwz       r3, -0x7168(r13)
	  addi      r4, r1, 0x10
	  li        r5, 0x1
	  li        r6, 0
	  li        r7, 0
	  bl        -0x1D9C
	  lwz       r3, -0x7168(r13)
	  bl        -0x19BC
	  lwz       r3, -0x7168(r13)
	  bl        -0x1118
	  lwz       r0, 0x10(r1)
	  rlwinm    r0,r0,8,24,31
	  subfic    r0, r0, 0x10

	.loc_0x11C:
	  cmpwi     r0, 0
	  mr        r26, r0
	  bge-      .loc_0x130
	  li        r25, 0x3
	  b         .loc_0x1F4

	.loc_0x130:
	  cmpwi     r0, 0xC
	  bge-      .loc_0x140
	  cmplw     r0, r31
	  blt-      .loc_0x1EC

	.loc_0x140:
	  lwz       r3, -0x7168(r13)
	  li        r5, 0x3
	  lwz       r4, -0x7164(r13)
	  bl        -0x1284
	  cmpwi     r3, 0
	  bne-      .loc_0x160
	  li        r25, 0x3
	  b         .loc_0x1F4

	.loc_0x160:
	  lwz       r3, -0x7168(r13)
	  addi      r4, r1, 0x14
	  li        r5, 0x4
	  li        r6, 0x1
	  li        r7, 0
	  bl        -0x1E14
	  lwz       r3, -0x7168(r13)
	  bl        -0x1A34
	  b         .loc_0x1D4

	.loc_0x184:
	  cmpwi     r26, 0x4
	  bge-      .loc_0x194
	  cmplw     r26, r31
	  blt-      .loc_0x1E4

	.loc_0x194:
	  cmplwi    r31, 0x4
	  bge-      .loc_0x1A4
	  mr        r28, r31
	  b         .loc_0x1A8

	.loc_0x1A4:
	  li        r28, 0x4

	.loc_0x1A8:
	  lwz       r3, -0x7168(r13)
	  mr        r5, r28
	  addi      r4, r30, 0
	  li        r6, 0x1
	  li        r7, 0
	  bl        -0x1E5C
	  lwz       r3, -0x7168(r13)
	  add       r30, r30, r28
	  sub       r31, r31, r28
	  sub       r26, r26, r28
	  bl        -0x1A88

	.loc_0x1D4:
	  cmpwi     r26, 0
	  beq-      .loc_0x1E4
	  cmplwi    r31, 0
	  bne+      .loc_0x184

	.loc_0x1E4:
	  lwz       r3, -0x7168(r13)
	  bl        -0x11F4

	.loc_0x1EC:
	  cmplwi    r31, 0
	  bne+      .loc_0xA4

	.loc_0x1F4:
	  lwz       r3, -0x7168(r13)
	  bl        -0xA7C
	  mr        r3, r27
	  bl        0xD178
	  mr        r3, r25

	.loc_0x208:
	  lmw       r25, 0x1C(r1)
	  lwz       r0, 0x3C(r1)
	  addi      r1, r1, 0x38
	  mtlr      r0
	  blr
	*/
}
