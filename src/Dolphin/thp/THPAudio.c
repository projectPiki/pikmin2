

/*
 * --INFO--
 * Address:	800FE6B0
 * Size:	0003B0
 */
void THPAudioDecode(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x58(r1)
	  stmw      r21, 0x2C(r1)
	  addi      r31, r4, 0
	  beq-      .loc_0x24
	  cmplwi    r31, 0
	  bne-      .loc_0x2C

	.loc_0x24:
	  li        r3, 0
	  b         .loc_0x39C

	.loc_0x2C:
	  lwz       r0, 0x0(r31)
	  cmpwi     r5, 0x1
	  addi      r4, r31, 0x50
	  add       r22, r31, r0
	  addi      r22, r22, 0x50
	  bne-      .loc_0x5C
	  lwz       r0, 0x4(r31)
	  addi      r28, r3, 0
	  li        r23, 0x1
	  rlwinm    r0,r0,1,0,30
	  add       r29, r3, r0
	  b         .loc_0x68

	.loc_0x5C:
	  addi      r28, r3, 0
	  addi      r29, r3, 0x2
	  li        r23, 0x2

	.loc_0x68:
	  lwz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x188
	  addi      r3, r1, 0x14
	  bl        0x3C8
	  lis       r3, 0x1
	  lha       r22, 0x48(r31)
	  lis       r25, 0x8000
	  lha       r21, 0x4A(r31)
	  rlwinm    r30,r23,1,0,30
	  subi      r27, r3, 0x8000
	  subi      r26, r25, 0x1
	  li        r23, 0
	  b         .loc_0x178

	.loc_0xA0:
	  addi      r3, r1, 0x14
	  bl        .loc_0x3B0
	  lbz       r5, 0x1C(r1)
	  extsh     r6, r21
	  lbz       r0, 0x1D(r1)
	  extsh     r4, r22
	  rlwinm    r5,r5,2,0,29
	  add       r5, r31, r5
	  lha       r7, 0xA(r5)
	  slw       r0, r3, r0
	  lha       r3, 0x8(r5)
	  rlwinm    r5,r0,11,0,20
	  mullw     r6, r7, r6
	  mullw     r4, r3, r4
	  srawi     r3, r6, 0x1F
	  srawi     r0, r4, 0x1F
	  addc      r4, r6, r4
	  adde      r3, r3, r0
	  srawi     r0, r5, 0x1F
	  addc      r4, r4, r5
	  adde      r3, r3, r0
	  li        r5, 0x5
	  bl        -0x3C6BC
	  li        r0, 0
	  addc      r4, r4, r27
	  adde      r3, r3, r0
	  xoris     r6, r0, 0x8000
	  xoris     r5, r3, 0x8000
	  subc      r0, r26, r4
	  subfe     r5, r5, r6
	  subfe     r5, r6, r6
	  neg.      r5, r5
	  beq-      .loc_0x12C
	  subi      r4, r25, 0x1
	  li        r3, 0

	.loc_0x12C:
	  li        r0, -0x1
	  xoris     r5, r0, 0x8000
	  xoris     r6, r3, 0x8000
	  subc      r0, r4, r25
	  subfe     r5, r5, r6
	  subfe     r5, r6, r6
	  neg.      r5, r5
	  beq-      .loc_0x154
	  lis       r4, 0x8000
	  li        r3, -0x1

	.loc_0x154:
	  li        r5, 0x10
	  bl        -0x3C6D4
	  sth       r4, 0x0(r29)
	  mr        r21, r22
	  addi      r22, r4, 0
	  sth       r4, 0x0(r28)
	  add       r29, r29, r30
	  add       r28, r28, r30
	  addi      r23, r23, 0x1

	.loc_0x178:
	  lwz       r0, 0x4(r31)
	  cmplw     r23, r0
	  blt+      .loc_0xA0
	  b         .loc_0x398

	.loc_0x188:
	  addi      r3, r1, 0x14
	  bl        0x2B4
	  lis       r3, 0x1
	  lha       r24, 0x48(r31)
	  lis       r26, 0x8000
	  lha       r21, 0x4A(r31)
	  rlwinm    r30,r23,1,0,30
	  subi      r25, r3, 0x8000
	  subi      r27, r26, 0x1
	  li        r23, 0
	  b         .loc_0x284

	.loc_0x1B4:
	  addi      r3, r1, 0x14
	  bl        .loc_0x3B0
	  lbz       r5, 0x1C(r1)
	  extsh     r6, r21
	  lbz       r0, 0x1D(r1)
	  extsh     r4, r24
	  rlwinm    r5,r5,2,0,29
	  add       r5, r31, r5
	  lha       r7, 0xA(r5)
	  slw       r0, r3, r0
	  lha       r3, 0x8(r5)
	  rlwinm    r5,r0,11,0,20
	  mullw     r6, r7, r6
	  mullw     r4, r3, r4
	  srawi     r3, r6, 0x1F
	  srawi     r0, r4, 0x1F
	  addc      r4, r6, r4
	  adde      r3, r3, r0
	  srawi     r0, r5, 0x1F
	  addc      r4, r4, r5
	  adde      r3, r3, r0
	  li        r5, 0x5
	  bl        -0x3C7D0
	  li        r7, 0
	  addc      r4, r4, r25
	  adde      r3, r3, r7
	  xoris     r6, r7, 0x8000
	  xoris     r5, r3, 0x8000
	  subc      r0, r27, r4
	  subfe     r5, r5, r6
	  subfe     r5, r6, r6
	  neg.      r5, r5
	  beq-      .loc_0x240
	  subi      r4, r26, 0x1
	  addi      r3, r7, 0

	.loc_0x240:
	  li        r7, -0x1
	  xoris     r6, r3, 0x8000
	  xoris     r5, r7, 0x8000
	  subc      r0, r4, r26
	  subfe     r5, r5, r6
	  subfe     r5, r6, r6
	  neg.      r5, r5
	  beq-      .loc_0x268
	  lis       r4, 0x8000
	  addi      r3, r7, 0

	.loc_0x268:
	  li        r5, 0x10
	  bl        -0x3C7E8
	  sth       r4, 0x0(r29)
	  addi      r21, r24, 0
	  addi      r24, r4, 0
	  add       r29, r29, r30
	  addi      r23, r23, 0x1

	.loc_0x284:
	  lwz       r0, 0x4(r31)
	  cmplw     r23, r0
	  blt+      .loc_0x1B4
	  addi      r3, r1, 0x14
	  addi      r4, r22, 0
	  bl        0x1A8
	  lis       r3, 0x1
	  lha       r25, 0x4C(r31)
	  lis       r29, 0x8000
	  lha       r22, 0x4E(r31)
	  subi      r26, r3, 0x8000
	  subi      r27, r29, 0x1
	  li        r24, 0
	  b         .loc_0x38C

	.loc_0x2BC:
	  addi      r3, r1, 0x14
	  bl        .loc_0x3B0
	  lbz       r5, 0x1C(r1)
	  extsh     r6, r22
	  lbz       r0, 0x1D(r1)
	  extsh     r4, r25
	  rlwinm    r5,r5,2,0,29
	  add       r5, r31, r5
	  lha       r7, 0x2A(r5)
	  slw       r0, r3, r0
	  lha       r3, 0x28(r5)
	  rlwinm    r5,r0,11,0,20
	  mullw     r6, r7, r6
	  mullw     r4, r3, r4
	  srawi     r3, r6, 0x1F
	  srawi     r0, r4, 0x1F
	  addc      r4, r6, r4
	  adde      r3, r3, r0
	  srawi     r0, r5, 0x1F
	  addc      r4, r4, r5
	  adde      r3, r3, r0
	  li        r5, 0x5
	  bl        -0x3C8D8
	  li        r7, 0
	  addc      r4, r4, r26
	  adde      r3, r3, r7
	  xoris     r6, r7, 0x8000
	  xoris     r5, r3, 0x8000
	  subc      r0, r27, r4
	  subfe     r5, r5, r6
	  subfe     r5, r6, r6
	  neg.      r5, r5
	  beq-      .loc_0x348
	  subi      r4, r29, 0x1
	  addi      r3, r7, 0

	.loc_0x348:
	  li        r7, -0x1
	  xoris     r6, r3, 0x8000
	  xoris     r5, r7, 0x8000
	  subc      r0, r4, r29
	  subfe     r5, r5, r6
	  subfe     r5, r6, r6
	  neg.      r5, r5
	  beq-      .loc_0x370
	  lis       r4, 0x8000
	  addi      r3, r7, 0

	.loc_0x370:
	  li        r5, 0x10
	  bl        -0x3C8F0
	  sth       r4, 0x0(r28)
	  addi      r22, r25, 0
	  addi      r25, r4, 0
	  add       r28, r28, r30
	  addi      r24, r24, 0x1

	.loc_0x38C:
	  lwz       r0, 0x4(r31)
	  cmplw     r24, r0
	  blt+      .loc_0x2BC

	.loc_0x398:
	  lwz       r3, 0x4(r31)

	.loc_0x39C:
	  lmw       r21, 0x2C(r1)
	  lwz       r0, 0x5C(r1)
	  addi      r1, r1, 0x58
	  mtlr      r0
	  blr

	.loc_0x3B0:
	*/
}

/*
 * --INFO--
 * Address:	800FEA60
 * Size:	000090
 */
void __THPAudioGetNewSample(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,28,31
	  bne-      .loc_0x44
	  lwz       r4, 0x0(r3)
	  lbz       r0, 0x0(r4)
	  rlwinm    r0,r0,28,29,31
	  stb       r0, 0x8(r3)
	  lwz       r4, 0x0(r3)
	  lbz       r0, 0x0(r4)
	  rlwinm    r0,r0,0,28,31
	  stb       r0, 0x9(r3)
	  lwz       r4, 0x0(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x0(r3)
	  lwz       r4, 0x4(r3)
	  addi      r0, r4, 0x2
	  stw       r0, 0x4(r3)

	.loc_0x44:
	  lwz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x6C
	  lwz       r5, 0x0(r3)
	  lbz       r4, 0x0(r5)
	  addi      r0, r5, 0x1
	  stw       r0, 0x0(r3)
	  rlwinm    r0,r4,28,0,3
	  srawi     r5, r0, 0x1C
	  b         .loc_0x7C

	.loc_0x6C:
	  lwz       r4, 0x0(r3)
	  lbz       r0, 0x0(r4)
	  rlwinm    r0,r0,24,0,3
	  srawi     r5, r0, 0x1C

	.loc_0x7C:
	  lwz       r4, 0x4(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x4(r3)
	  mr        r3, r5
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FEAF0
 * Size:	00003C
 */
void __THPAudioInitialize(void)
{
	/*
	.loc_0x0:
	  stw       r4, 0x0(r3)
	  li        r0, 0x2
	  stw       r0, 0x4(r3)
	  lwz       r4, 0x0(r3)
	  lbz       r0, 0x0(r4)
	  rlwinm    r0,r0,28,29,31
	  stb       r0, 0x8(r3)
	  lwz       r4, 0x0(r3)
	  lbz       r0, 0x0(r4)
	  rlwinm    r0,r0,0,28,31
	  stb       r0, 0x9(r3)
	  lwz       r4, 0x0(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x0(r3)
	  blr
	*/
}
