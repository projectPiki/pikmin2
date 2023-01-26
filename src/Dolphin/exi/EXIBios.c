

/*
 * --INFO--
 * Address:	800DFB54
 * Size:	0000F4
 */
void SetExiInterruptMask(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r4, 0
	  lis       r4, 0x804F
	  addi      r4, r4, 0x5F28
	  addi      r4, r4, 0x80
	  cmpwi     r3, 0x1
	  beq-      .loc_0x80
	  bge-      .loc_0x38
	  cmpwi     r3, 0
	  bge-      .loc_0x44
	  b         .loc_0xE0

	.loc_0x38:
	  cmpwi     r3, 0x3
	  bge-      .loc_0xE0
	  b         .loc_0xB0

	.loc_0x44:
	  lwz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lwz       r0, 0x0(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x68

	.loc_0x5C:
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x74

	.loc_0x68:
	  lis       r3, 0x41
	  bl        0xF440
	  b         .loc_0xE0

	.loc_0x74:
	  lis       r3, 0x41
	  bl        0xF4BC
	  b         .loc_0xE0

	.loc_0x80:
	  lwz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x98
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0xA4

	.loc_0x98:
	  lis       r3, 0x8
	  bl        0xF410
	  b         .loc_0xE0

	.loc_0xA4:
	  lis       r3, 0x8
	  bl        0xF48C
	  b         .loc_0xE0

	.loc_0xB0:
	  li        r3, 0x19
	  bl        0xF098
	  cmplwi    r3, 0
	  beq-      .loc_0xCC
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0xD8

	.loc_0xCC:
	  li        r3, 0x40
	  bl        0xF3DC
	  b         .loc_0xE0

	.loc_0xD8:
	  li        r3, 0x40
	  bl        0xF458

	.loc_0xE0:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void CompleteTransfer(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DFC48
 * Size:	00025C
 */
void EXIImm(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x40(r1)
	  stmw      r25, 0x24(r1)
	  addi      r26, r3, 0
	  addi      r27, r4, 0
	  addi      r28, r5, 0
	  addi      r29, r6, 0
	  addi      r25, r7, 0
	  rlwinm    r4,r3,6,0,25
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5F28
	  add       r31, r0, r4
	  bl        0xEFBC
	  mr        r30, r3
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,30,31
	  bne-      .loc_0x54
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x64

	.loc_0x54:
	  mr        r3, r30
	  bl        0xEFC0
	  li        r3, 0
	  b         .loc_0x248

	.loc_0x64:
	  stw       r25, 0x4(r31)
	  lwz       r0, 0x4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x98
	  addi      r3, r26, 0
	  li        r4, 0
	  li        r5, 0x1
	  li        r6, 0
	  bl        0x5B0
	  lis       r3, 0x20
	  mulli     r0, r26, 0x3
	  srw       r3, r3, r0
	  bl        0xF3AC

	.loc_0x98:
	  lwz       r0, 0xC(r31)
	  ori       r0, r0, 0x2
	  stw       r0, 0xC(r31)
	  cmplwi    r29, 0
	  beq-      .loc_0x1EC
	  li        r0, 0
	  li        r4, 0
	  cmpw      r4, r28
	  bge-      .loc_0x1D8
	  subi      r6, r28, 0x8
	  cmpwi     r28, 0x8
	  ble-      .loc_0x240
	  addi      r3, r27, 0
	  addi      r5, r6, 0x7
	  rlwinm    r5,r5,29,3,31
	  mtctr     r5
	  cmpwi     r6, 0
	  ble-      .loc_0x240

	.loc_0xE0:
	  lbz       r6, 0x0(r3)
	  subfic    r5, r4, 0x3
	  rlwinm    r5,r5,3,0,28
	  slw       r5, r6, r5
	  or        r0, r0, r5
	  lbz       r6, 0x1(r3)
	  addi      r5, r4, 0x1
	  subfic    r5, r5, 0x3
	  rlwinm    r5,r5,3,0,28
	  slw       r5, r6, r5
	  or        r0, r0, r5
	  lbz       r6, 0x2(r3)
	  addi      r5, r4, 0x2
	  subfic    r5, r5, 0x3
	  rlwinm    r5,r5,3,0,28
	  slw       r5, r6, r5
	  or        r0, r0, r5
	  lbz       r6, 0x3(r3)
	  neg       r5, r4
	  rlwinm    r5,r5,3,0,28
	  slw       r5, r6, r5
	  or        r0, r0, r5
	  lbz       r6, 0x4(r3)
	  addi      r5, r4, 0x4
	  subfic    r5, r5, 0x3
	  rlwinm    r5,r5,3,0,28
	  slw       r5, r6, r5
	  or        r0, r0, r5
	  lbz       r6, 0x5(r3)
	  addi      r5, r4, 0x5
	  subfic    r5, r5, 0x3
	  rlwinm    r5,r5,3,0,28
	  slw       r5, r6, r5
	  or        r0, r0, r5
	  lbz       r6, 0x6(r3)
	  addi      r5, r4, 0x6
	  subfic    r5, r5, 0x3
	  rlwinm    r5,r5,3,0,28
	  slw       r5, r6, r5
	  or        r0, r0, r5
	  lbz       r6, 0x7(r3)
	  addi      r5, r4, 0x7
	  subfic    r5, r5, 0x3
	  rlwinm    r5,r5,3,0,28
	  slw       r5, r6, r5
	  or        r0, r0, r5
	  addi      r3, r3, 0x8
	  addi      r4, r4, 0x8
	  bdnz+     .loc_0xE0
	  b         .loc_0x240

	.loc_0x1A8:
	  sub       r3, r28, r4
	  mtctr     r3
	  cmpw      r4, r28
	  bge-      .loc_0x1D8

	.loc_0x1B8:
	  lbz       r5, 0x0(r6)
	  subfic    r3, r4, 0x3
	  rlwinm    r3,r3,3,0,28
	  slw       r3, r5, r3
	  or        r0, r0, r3
	  addi      r6, r6, 0x1
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x1B8

	.loc_0x1D8:
	  lis       r3, 0xCC00
	  addi      r4, r3, 0x6800
	  mulli     r3, r26, 0x14
	  add       r3, r4, r3
	  stw       r0, 0x10(r3)

	.loc_0x1EC:
	  stw       r27, 0x14(r31)
	  cmplwi    r29, 0x1
	  beq-      .loc_0x200
	  mr        r0, r28
	  b         .loc_0x204

	.loc_0x200:
	  li        r0, 0

	.loc_0x204:
	  stw       r0, 0x10(r31)
	  rlwinm    r0,r29,2,0,29
	  ori       r3, r0, 0x1
	  subi      r0, r28, 0x1
	  rlwinm    r0,r0,4,0,27
	  or        r4, r3, r0
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6800
	  mulli     r0, r26, 0x14
	  add       r3, r3, r0
	  stw       r4, 0xC(r3)
	  mr        r3, r30
	  bl        0xEDE4
	  li        r3, 0x1
	  b         .loc_0x248

	.loc_0x240:
	  add       r6, r27, r4
	  b         .loc_0x1A8

	.loc_0x248:
	  lwz       r0, 0x44(r1)
	  lmw       r25, 0x24(r1)
	  addi      r1, r1, 0x40
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DFEA4
 * Size:	0000A0
 */
void EXIImmEx(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stmw      r27, 0x1C(r1)
	  addi      r27, r3, 0
	  addi      r28, r4, 0
	  addi      r29, r5, 0
	  addi      r30, r6, 0
	  b         .loc_0x80

	.loc_0x24:
	  cmpwi     r29, 0x4
	  bge-      .loc_0x34
	  mr        r31, r29
	  b         .loc_0x38

	.loc_0x34:
	  li        r31, 0x4

	.loc_0x38:
	  addi      r5, r31, 0
	  addi      r3, r27, 0
	  addi      r4, r28, 0
	  addi      r6, r30, 0
	  li        r7, 0
	  bl        -0x2A8
	  cmpwi     r3, 0
	  bne-      .loc_0x60
	  li        r3, 0
	  b         .loc_0x8C

	.loc_0x60:
	  mr        r3, r27
	  bl        0x128
	  cmpwi     r3, 0
	  bne-      .loc_0x78
	  li        r3, 0
	  b         .loc_0x8C

	.loc_0x78:
	  add       r28, r28, r31
	  sub       r29, r29, r31

	.loc_0x80:
	  cmpwi     r29, 0
	  bne+      .loc_0x24
	  li        r3, 0x1

	.loc_0x8C:
	  lwz       r0, 0x34(r1)
	  lmw       r27, 0x1C(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DFF44
 * Size:	0000EC
 */
void EXIDma(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x40(r1)
	  stmw      r25, 0x24(r1)
	  addi      r27, r3, 0
	  addi      r28, r4, 0
	  addi      r29, r5, 0
	  addi      r30, r6, 0
	  addi      r25, r7, 0
	  rlwinm    r4,r3,6,0,25
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5F28
	  add       r26, r0, r4
	  bl        0xECC0
	  mr        r31, r3
	  lwz       r0, 0xC(r26)
	  rlwinm.   r0,r0,0,30,31
	  bne-      .loc_0x54
	  lwz       r0, 0xC(r26)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x64

	.loc_0x54:
	  mr        r3, r31
	  bl        0xECC4
	  li        r3, 0
	  b         .loc_0xD8

	.loc_0x64:
	  stw       r25, 0x4(r26)
	  lwz       r0, 0x4(r26)
	  cmplwi    r0, 0
	  beq-      .loc_0x98
	  addi      r3, r27, 0
	  li        r4, 0
	  li        r5, 0x1
	  li        r6, 0
	  bl        0x2B4
	  lis       r3, 0x20
	  mulli     r0, r27, 0x3
	  srw       r3, r3, r0
	  bl        0xF0B0

	.loc_0x98:
	  lwz       r0, 0xC(r26)
	  ori       r0, r0, 0x1
	  stw       r0, 0xC(r26)
	  rlwinm    r4,r28,0,6,26
	  lis       r3, 0xCC00
	  addi      r0, r3, 0x6800
	  mulli     r3, r27, 0x14
	  add       r3, r0, r3
	  stw       r4, 0x4(r3)
	  stw       r29, 0x8(r3)
	  rlwinm    r0,r30,2,0,29
	  ori       r0, r0, 0x3
	  stw       r0, 0xC(r3)
	  mr        r3, r31
	  bl        0xEC4C
	  li        r3, 0x1

	.loc_0xD8:
	  lwz       r0, 0x44(r1)
	  lmw       r25, 0x24(r1)
	  addi      r1, r1, 0x40
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E0030
 * Size:	00024C
 */
void EXISync(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stmw      r27, 0x1C(r1)
	  rlwinm    r5,r3,6,0,25
	  lis       r4, 0x804F
	  addi      r0, r4, 0x5F28
	  add       r31, r0, r5
	  li        r28, 0
	  mulli     r30, r3, 0x14
	  lis       r3, 0xCC00
	  addi      r29, r3, 0x6800
	  add       r29, r29, r30
	  b         .loc_0x228

	.loc_0x38:
	  lwz       r0, 0xC(r29)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x228
	  bl        0xEBC4
	  mr        r27, r3
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x21C
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,30,31
	  beq-      .loc_0x194
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x188
	  lwz       r3, 0x10(r31)
	  cmpwi     r3, 0
	  beq-      .loc_0x188
	  lwz       r5, 0x14(r31)
	  lis       r4, 0xCC00
	  addi      r0, r4, 0x6800
	  add       r4, r0, r30
	  lwz       r0, 0x10(r4)
	  li        r4, 0
	  ble-      .loc_0x188
	  subi      r7, r3, 0x8
	  cmpwi     r3, 0x8
	  ble-      .loc_0x15C
	  addi      r6, r7, 0x7
	  rlwinm    r6,r6,29,3,31
	  mtctr     r6
	  cmpwi     r7, 0
	  ble-      .loc_0x15C

	.loc_0xB8:
	  subfic    r6, r4, 0x3
	  rlwinm    r6,r6,3,0,28
	  srw       r6, r0, r6
	  stb       r6, 0x0(r5)
	  addi      r6, r4, 0x1
	  subfic    r6, r6, 0x3
	  rlwinm    r6,r6,3,0,28
	  srw       r6, r0, r6
	  stb       r6, 0x1(r5)
	  addi      r6, r4, 0x2
	  subfic    r6, r6, 0x3
	  rlwinm    r6,r6,3,0,28
	  srw       r6, r0, r6
	  stb       r6, 0x2(r5)
	  neg       r6, r4
	  rlwinm    r6,r6,3,0,28
	  srw       r6, r0, r6
	  stb       r6, 0x3(r5)
	  addi      r6, r4, 0x4
	  subfic    r6, r6, 0x3
	  rlwinm    r6,r6,3,0,28
	  srw       r6, r0, r6
	  stb       r6, 0x4(r5)
	  addi      r6, r4, 0x5
	  subfic    r6, r6, 0x3
	  rlwinm    r6,r6,3,0,28
	  srw       r6, r0, r6
	  stb       r6, 0x5(r5)
	  addi      r6, r4, 0x6
	  subfic    r6, r6, 0x3
	  rlwinm    r6,r6,3,0,28
	  srw       r6, r0, r6
	  stb       r6, 0x6(r5)
	  addi      r6, r4, 0x7
	  subfic    r6, r6, 0x3
	  rlwinm    r6,r6,3,0,28
	  srw       r6, r0, r6
	  stb       r6, 0x7(r5)
	  addi      r5, r5, 0x8
	  addi      r4, r4, 0x8
	  bdnz+     .loc_0xB8

	.loc_0x15C:
	  sub       r6, r3, r4
	  mtctr     r6
	  cmpw      r4, r3
	  bge-      .loc_0x188

	.loc_0x16C:
	  subfic    r3, r4, 0x3
	  rlwinm    r3,r3,3,0,28
	  srw       r3, r0, r3
	  stb       r3, 0x0(r5)
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x16C

	.loc_0x188:
	  lwz       r0, 0xC(r31)
	  rlwinm    r0,r0,0,0,29
	  stw       r0, 0xC(r31)

	.loc_0x194:
	  bl        0xB8B0
	  cmplwi    r3, 0xFF
	  bne-      .loc_0x218
	  bl        0xAF20
	  rlwinm    r3,r3,0,0,3
	  subis     r0, r3, 0x2000
	  cmplwi    r0, 0
	  beq-      .loc_0x218
	  lwz       r0, 0x10(r31)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x218
	  lwz       r0, 0x0(r29)
	  rlwinm.   r0,r0,0,25,27
	  bne-      .loc_0x218
	  lis       r3, 0xCC00
	  addi      r0, r3, 0x6800
	  add       r4, r0, r30
	  lwzu      r3, 0x10(r4)
	  subis     r0, r3, 0x101
	  cmplwi    r0, 0
	  beq-      .loc_0x208
	  lwz       r3, 0x0(r4)
	  subis     r0, r3, 0x507
	  cmplwi    r0, 0
	  beq-      .loc_0x208
	  lwz       r3, 0x0(r4)
	  subis     r0, r3, 0x422
	  cmplwi    r0, 0x1
	  bne-      .loc_0x218

	.loc_0x208:
	  lis       r3, 0x8000
	  lhz       r0, 0x30E6(r3)
	  cmplwi    r0, 0x8200
	  bne-      .loc_0x21C

	.loc_0x218:
	  li        r28, 0x1

	.loc_0x21C:
	  mr        r3, r27
	  bl        0xEA10
	  b         .loc_0x234

	.loc_0x228:
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,29,29
	  bne+      .loc_0x38

	.loc_0x234:
	  mr        r3, r28
	  lwz       r0, 0x34(r1)
	  lmw       r27, 0x1C(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E027C
 * Size:	000048
 */
void EXIClearInterrupts(void)
{
	/*
	.loc_0x0:
	  mulli     r0, r3, 0x14
	  lis       r3, 0xCC00
	  addi      r7, r3, 0x6800
	  add       r7, r7, r0
	  lwz       r0, 0x0(r7)
	  mr        r3, r0
	  andi.     r0, r0, 0x7F5
	  cmpwi     r4, 0
	  beq-      .loc_0x28
	  ori       r0, r0, 0x2

	.loc_0x28:
	  cmpwi     r5, 0
	  beq-      .loc_0x34
	  ori       r0, r0, 0x8

	.loc_0x34:
	  cmpwi     r6, 0
	  beq-      .loc_0x40
	  ori       r0, r0, 0x800

	.loc_0x40:
	  stw       r0, 0x0(r7)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E02C4
 * Size:	00007C
 */
void EXISetExiCallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stmw      r26, 0x10(r1)
	  addi      r26, r3, 0
	  addi      r27, r4, 0
	  rlwinm    r0,r3,6,0,25
	  lis       r3, 0x804F
	  addi      r31, r3, 0x5F28
	  add       r30, r31, r0
	  bl        0xE94C
	  mr        r28, r3
	  lwz       r29, 0x0(r30)
	  stw       r27, 0x0(r30)
	  cmpwi     r26, 0x2
	  beq-      .loc_0x50
	  addi      r3, r26, 0
	  addi      r4, r30, 0
	  bl        -0x7B8
	  b         .loc_0x5C

	.loc_0x50:
	  li        r3, 0
	  addi      r4, r31, 0
	  bl        -0x7C8

	.loc_0x5C:
	  mr        r3, r28
	  bl        0xE93C
	  mr        r3, r29
	  lwz       r0, 0x2C(r1)
	  lmw       r26, 0x10(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void EXIProbeReset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E0340
 * Size:	000174
 */
void __EXIProbe(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stmw      r27, 0x14(r1)
	  addi      r28, r3, 0
	  rlwinm    r4,r3,6,0,25
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5F28
	  add       r31, r0, r4
	  cmpwi     r28, 0x2
	  bne-      .loc_0x34
	  li        r3, 0x1
	  b         .loc_0x160

	.loc_0x34:
	  li        r29, 0x1
	  bl        0xE8C0
	  addi      r30, r3, 0
	  mulli     r0, r28, 0x14
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6800
	  add       r3, r3, r0
	  lwz       r5, 0x0(r3)
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,28,28
	  bne-      .loc_0x128
	  rlwinm.   r0,r5,0,20,20
	  beq-      .loc_0x90
	  lwz       r0, 0x0(r3)
	  andi.     r0, r0, 0x7F5
	  ori       r0, r0, 0x800
	  stw       r0, 0x0(r3)
	  li        r4, 0
	  stw       r4, 0x20(r31)
	  rlwinm    r0,r28,2,0,29
	  lis       r3, 0x8000
	  addi      r3, r3, 0x30C0
	  stwx      r4, r3, r0

	.loc_0x90:
	  rlwinm.   r0,r5,0,19,19
	  beq-      .loc_0x108
	  lis       r31, 0x8000
	  lwz       r0, 0xF8(r31)
	  rlwinm    r0,r0,30,2,31
	  lis       r3, 0x1062
	  addi      r3, r3, 0x4DD3
	  mulhwu    r0, r3, r0
	  rlwinm    r27,r0,26,6,31
	  bl        0x1279C
	  li        r5, 0
	  addi      r6, r27, 0
	  bl        -0x1E63C
	  li        r5, 0
	  li        r6, 0x64
	  bl        -0x1E648
	  addi      r4, r4, 0x1
	  rlwinm    r0,r28,2,0,29
	  addi      r3, r31, 0x30C0
	  add       r3, r3, r0
	  lwz       r0, 0x0(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0xF0
	  stw       r4, 0x0(r3)

	.loc_0xF0:
	  lwz       r0, 0x0(r3)
	  sub       r0, r4, r0
	  cmpwi     r0, 0x3
	  bge-      .loc_0x154
	  li        r29, 0
	  b         .loc_0x154

	.loc_0x108:
	  li        r4, 0
	  stw       r4, 0x20(r31)
	  rlwinm    r0,r28,2,0,29
	  lis       r3, 0x8000
	  addi      r3, r3, 0x30C0
	  stwx      r4, r3, r0
	  li        r29, 0
	  b         .loc_0x154

	.loc_0x128:
	  rlwinm.   r0,r5,0,19,19
	  beq-      .loc_0x138
	  rlwinm.   r0,r5,0,20,20
	  beq-      .loc_0x154

	.loc_0x138:
	  li        r4, 0
	  stw       r4, 0x20(r31)
	  rlwinm    r0,r28,2,0,29
	  lis       r3, 0x8000
	  addi      r3, r3, 0x30C0
	  stwx      r4, r3, r0
	  li        r29, 0

	.loc_0x154:
	  mr        r3, r30
	  bl        0xE7C8
	  mr        r3, r29

	.loc_0x160:
	  lwz       r0, 0x2C(r1)
	  lmw       r27, 0x14(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E04B4
 * Size:	000080
 */
void EXIProbe(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0
	  rlwinm    r4,r3,6,0,25
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5F28
	  add       r31, r0, r4
	  addi      r3, r30, 0
	  bl        -0x1A0
	  cmpwi     r3, 0
	  beq-      .loc_0x68
	  lwz       r0, 0x20(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x68
	  addi      r3, r30, 0
	  li        r4, 0
	  addi      r5, r1, 0xC
	  bl        0xC7C
	  cmpwi     r3, 0
	  beq-      .loc_0x64
	  li        r3, 0x1
	  b         .loc_0x68

	.loc_0x64:
	  li        r3, 0

	.loc_0x68:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E0534
 * Size:	0000B4
 */
void EXIProbeEx(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0
	  rlwinm    r4,r3,6,0,25
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5F28
	  add       r31, r0, r4
	  addi      r3, r30, 0
	  bl        -0x220
	  cmpwi     r3, 0
	  beq-      .loc_0x68
	  lwz       r0, 0x20(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x68
	  addi      r3, r30, 0
	  li        r4, 0
	  addi      r5, r1, 0xC
	  bl        0xBFC
	  cmpwi     r3, 0
	  beq-      .loc_0x64
	  li        r3, 0x1
	  b         .loc_0x68

	.loc_0x64:
	  li        r3, 0

	.loc_0x68:
	  cmpwi     r3, 0
	  beq-      .loc_0x78
	  li        r3, 0x1
	  b         .loc_0x9C

	.loc_0x78:
	  rlwinm    r0,r30,2,0,29
	  lis       r3, 0x8000
	  addi      r3, r3, 0x30C0
	  lwzx      r0, r3, r0
	  cmpwi     r0, 0
	  beq-      .loc_0x98
	  li        r3, 0
	  b         .loc_0x9C

	.loc_0x98:
	  li        r3, -0x1

	.loc_0x9C:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
void __EXIAttach(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E05E8
 * Size:	00010C
 */
void EXIAttach(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x40(r1)
	  stmw      r27, 0x2C(r1)
	  addi      r27, r3, 0
	  addi      r28, r4, 0
	  rlwinm    r4,r3,6,0,25
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5F28
	  add       r30, r0, r4
	  addi      r3, r27, 0
	  bl        -0x2D4
	  cmpwi     r3, 0
	  beq-      .loc_0x54
	  lwz       r0, 0x20(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0x54
	  addi      r3, r27, 0
	  li        r4, 0
	  addi      r5, r1, 0x1C
	  bl        0xB48

	.loc_0x54:
	  bl        0xE5FC
	  mr        r29, r3
	  lwz       r0, 0x20(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0x78
	  mr        r3, r29
	  bl        0xE60C
	  li        r3, 0
	  b         .loc_0xF8

	.loc_0x78:
	  bl        0xE5D8
	  mr        r31, r3
	  lwz       r0, 0xC(r30)
	  rlwinm.   r0,r0,0,28,28
	  bne-      .loc_0x9C
	  mr        r3, r27
	  bl        -0x338
	  cmpwi     r3, 0
	  bne-      .loc_0xAC

	.loc_0x9C:
	  mr        r3, r31
	  bl        0xE5D8
	  li        r31, 0
	  b         .loc_0xEC

	.loc_0xAC:
	  addi      r3, r27, 0
	  li        r4, 0x1
	  li        r5, 0
	  li        r6, 0
	  bl        -0x428
	  stw       r28, 0x8(r30)
	  lis       r3, 0x10
	  mulli     r0, r27, 0x3
	  srw       r3, r3, r0
	  bl        0xE9D0
	  lwz       r0, 0xC(r30)
	  ori       r0, r0, 0x8
	  stw       r0, 0xC(r30)
	  mr        r3, r31
	  bl        0xE594
	  li        r31, 0x1

	.loc_0xEC:
	  mr        r3, r29
	  bl        0xE588
	  mr        r3, r31

	.loc_0xF8:
	  lwz       r0, 0x44(r1)
	  lmw       r27, 0x2C(r1)
	  addi      r1, r1, 0x40
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E06F4
 * Size:	0000BC
 */
void EXIDetach(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  addi      r29, r3, 0
	  rlwinm    r4,r3,6,0,25
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5F28
	  add       r31, r0, r4
	  bl        0xE518
	  mr        r30, r3
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,28,28
	  bne-      .loc_0x50
	  mr        r3, r30
	  bl        0xE528
	  li        r3, 0x1
	  b         .loc_0xA0

	.loc_0x50:
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x78
	  lwz       r0, 0x18(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x78
	  mr        r3, r30
	  bl        0xE500
	  li        r3, 0
	  b         .loc_0xA0

	.loc_0x78:
	  lwz       r0, 0xC(r31)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0xC(r31)
	  lis       r3, 0x50
	  mulli     r0, r29, 0x3
	  srw       r3, r3, r0
	  bl        0xE87C
	  mr        r3, r30
	  bl        0xE4D4
	  li        r3, 0x1

	.loc_0xA0:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E07B0
 * Size:	00012C
 */
void EXISelect(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stmw      r27, 0x1C(r1)
	  addi      r27, r3, 0
	  addi      r28, r4, 0
	  addi      r29, r5, 0
	  rlwinm    r4,r3,6,0,25
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5F28
	  add       r31, r0, r4
	  bl        0xE45C
	  mr        r30, r3
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x84
	  cmpwi     r27, 0x2
	  beq-      .loc_0x94
	  cmplwi    r28, 0
	  bne-      .loc_0x6C
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,28,28
	  bne-      .loc_0x6C
	  mr        r3, r27
	  bl        -0x4D0
	  cmpwi     r3, 0
	  beq-      .loc_0x84

	.loc_0x6C:
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x84
	  lwz       r0, 0x18(r31)
	  cmplw     r0, r28
	  beq-      .loc_0x94

	.loc_0x84:
	  mr        r3, r30
	  bl        0xE428
	  li        r3, 0
	  b         .loc_0x118

	.loc_0x94:
	  lwz       r0, 0xC(r31)
	  ori       r0, r0, 0x4
	  stw       r0, 0xC(r31)
	  mulli     r0, r27, 0x14
	  lis       r3, 0xCC00
	  addi      r4, r3, 0x6800
	  add       r4, r4, r0
	  lwz       r5, 0x0(r4)
	  andi.     r5, r5, 0x405
	  li        r0, 0x1
	  slw       r0, r0, r28
	  rlwinm    r3,r0,7,0,24
	  rlwinm    r0,r29,4,0,27
	  or        r0, r3, r0
	  or        r5, r5, r0
	  stw       r5, 0x0(r4)
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x10C
	  cmpwi     r27, 0x1
	  beq-      .loc_0x104
	  bge-      .loc_0x10C
	  cmpwi     r27, 0
	  bge-      .loc_0xF8
	  b         .loc_0x10C

	.loc_0xF8:
	  lis       r3, 0x10
	  bl        0xE754
	  b         .loc_0x10C

	.loc_0x104:
	  lis       r3, 0x2
	  bl        0xE748

	.loc_0x10C:
	  mr        r3, r30
	  bl        0xE3A0
	  li        r3, 0x1

	.loc_0x118:
	  lwz       r0, 0x34(r1)
	  lmw       r27, 0x1C(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E08DC
 * Size:	000110
 */
void EXIDeselect(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  addi      r31, r3, 0
	  rlwinm    r4,r3,6,0,25
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5F28
	  add       r30, r0, r4
	  bl        0xE32C
	  mr        r28, r3
	  lwz       r0, 0xC(r30)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x54
	  mr        r3, r28
	  bl        0xE33C
	  li        r3, 0
	  b         .loc_0xF0

	.loc_0x54:
	  lwz       r0, 0xC(r30)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0xC(r30)
	  mulli     r0, r31, 0x14
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6800
	  add       r3, r3, r0
	  lwz       r29, 0x0(r3)
	  andi.     r0, r29, 0x405
	  stw       r0, 0x0(r3)
	  lwz       r0, 0xC(r30)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0xB4
	  cmpwi     r31, 0x1
	  beq-      .loc_0xAC
	  bge-      .loc_0xB4
	  cmpwi     r31, 0
	  bge-      .loc_0xA0
	  b         .loc_0xB4

	.loc_0xA0:
	  lis       r3, 0x10
	  bl        0xE708
	  b         .loc_0xB4

	.loc_0xAC:
	  lis       r3, 0x2
	  bl        0xE6FC

	.loc_0xB4:
	  mr        r3, r28
	  bl        0xE2CC
	  cmpwi     r31, 0x2
	  beq-      .loc_0xEC
	  rlwinm.   r0,r29,0,24,24
	  beq-      .loc_0xEC
	  mr        r3, r31
	  bl        -0x66C
	  cmpwi     r3, 0
	  beq-      .loc_0xE4
	  li        r3, 0x1
	  b         .loc_0xF0

	.loc_0xE4:
	  li        r3, 0
	  b         .loc_0xF0

	.loc_0xEC:
	  li        r3, 0x1

	.loc_0xF0:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E09EC
 * Size:	0000C8
 */
void EXIIntrruptHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x2F8(r1)
	  stw       r31, 0x2F4(r1)
	  stw       r30, 0x2F0(r1)
	  stw       r29, 0x2EC(r1)
	  addi      r31, r4, 0
	  extsh     r3, r3
	  subi      r0, r3, 0x9
	  lis       r3, 0x5555
	  addi      r3, r3, 0x5556
	  mulhw     r3, r3, r0
	  rlwinm    r0,r3,1,31,31
	  add       r30, r3, r0
	  mulli     r0, r30, 0x14
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6800
	  add       r3, r3, r0
	  lwz       r0, 0x0(r3)
	  andi.     r0, r0, 0x7F5
	  ori       r0, r0, 0x2
	  stw       r0, 0x0(r3)
	  rlwinm    r4,r30,6,0,25
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5F28
	  add       r3, r0, r4
	  lwz       r0, 0x0(r3)
	  mr        r29, r0
	  cmplwi    r0, 0
	  beq-      .loc_0xAC
	  addi      r3, r1, 0x18
	  bl        0xC704
	  addi      r3, r1, 0x18
	  bl        0xC534
	  addi      r3, r30, 0
	  addi      r4, r31, 0
	  addi      r12, r29, 0
	  mtlr      r12
	  blrl
	  addi      r3, r1, 0x18
	  bl        0xC6E0
	  mr        r3, r31
	  bl        0xC510

	.loc_0xAC:
	  lwz       r0, 0x2FC(r1)
	  lwz       r31, 0x2F4(r1)
	  lwz       r30, 0x2F0(r1)
	  lwz       r29, 0x2EC(r1)
	  addi      r1, r1, 0x2F8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E0AB4
 * Size:	000218
 */
void TCIntrruptHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x2F8(r1)
	  stw       r31, 0x2F4(r1)
	  stw       r30, 0x2F0(r1)
	  stw       r29, 0x2EC(r1)
	  stw       r28, 0x2E8(r1)
	  addi      r28, r4, 0
	  extsh     r5, r3
	  subi      r0, r5, 0xA
	  lis       r3, 0x5555
	  addi      r3, r3, 0x5556
	  mulhw     r3, r3, r0
	  rlwinm    r0,r3,1,31,31
	  add       r30, r3, r0
	  rlwinm    r4,r30,6,0,25
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5F28
	  add       r31, r0, r4
	  lis       r0, 0x8000
	  srw       r3, r0, r5
	  bl        0xE4F8
	  mulli     r7, r30, 0x14
	  lis       r6, 0xCC00
	  addi      r3, r6, 0x6800
	  add       r3, r3, r7
	  lwz       r0, 0x0(r3)
	  andi.     r0, r0, 0x7F5
	  ori       r0, r0, 0x8
	  stw       r0, 0x0(r3)
	  lwz       r0, 0x4(r31)
	  mr        r29, r0
	  cmplwi    r0, 0
	  beq-      .loc_0x1F8
	  li        r4, 0
	  stw       r4, 0x4(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,30,31
	  beq-      .loc_0x1C4
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x1B8
	  lwz       r3, 0x10(r31)
	  cmpwi     r3, 0
	  beq-      .loc_0x1B8
	  lwz       r5, 0x14(r31)
	  addi      r0, r6, 0x6800
	  add       r6, r0, r7
	  lwz       r0, 0x10(r6)
	  ble-      .loc_0x1B8
	  subi      r7, r3, 0x8
	  cmpwi     r3, 0x8
	  ble-      .loc_0x18C
	  addi      r6, r7, 0x7
	  rlwinm    r6,r6,29,3,31
	  mtctr     r6
	  cmpwi     r7, 0
	  ble-      .loc_0x18C

	.loc_0xE8:
	  subfic    r6, r4, 0x3
	  rlwinm    r6,r6,3,0,28
	  srw       r6, r0, r6
	  stb       r6, 0x0(r5)
	  addi      r6, r4, 0x1
	  subfic    r6, r6, 0x3
	  rlwinm    r6,r6,3,0,28
	  srw       r6, r0, r6
	  stb       r6, 0x1(r5)
	  addi      r6, r4, 0x2
	  subfic    r6, r6, 0x3
	  rlwinm    r6,r6,3,0,28
	  srw       r6, r0, r6
	  stb       r6, 0x2(r5)
	  neg       r6, r4
	  rlwinm    r6,r6,3,0,28
	  srw       r6, r0, r6
	  stb       r6, 0x3(r5)
	  addi      r6, r4, 0x4
	  subfic    r6, r6, 0x3
	  rlwinm    r6,r6,3,0,28
	  srw       r6, r0, r6
	  stb       r6, 0x4(r5)
	  addi      r6, r4, 0x5
	  subfic    r6, r6, 0x3
	  rlwinm    r6,r6,3,0,28
	  srw       r6, r0, r6
	  stb       r6, 0x5(r5)
	  addi      r6, r4, 0x6
	  subfic    r6, r6, 0x3
	  rlwinm    r6,r6,3,0,28
	  srw       r6, r0, r6
	  stb       r6, 0x6(r5)
	  addi      r6, r4, 0x7
	  subfic    r6, r6, 0x3
	  rlwinm    r6,r6,3,0,28
	  srw       r6, r0, r6
	  stb       r6, 0x7(r5)
	  addi      r5, r5, 0x8
	  addi      r4, r4, 0x8
	  bdnz+     .loc_0xE8

	.loc_0x18C:
	  sub       r6, r3, r4
	  mtctr     r6
	  cmpw      r4, r3
	  bge-      .loc_0x1B8

	.loc_0x19C:
	  subfic    r3, r4, 0x3
	  rlwinm    r3,r3,3,0,28
	  srw       r3, r0, r3
	  stb       r3, 0x0(r5)
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x19C

	.loc_0x1B8:
	  lwz       r0, 0xC(r31)
	  rlwinm    r0,r0,0,0,29
	  stw       r0, 0xC(r31)

	.loc_0x1C4:
	  addi      r3, r1, 0x20
	  bl        0xC4F0
	  addi      r3, r1, 0x20
	  bl        0xC320
	  addi      r3, r30, 0
	  addi      r4, r28, 0
	  addi      r12, r29, 0
	  mtlr      r12
	  blrl
	  addi      r3, r1, 0x20
	  bl        0xC4CC
	  mr        r3, r28
	  bl        0xC2FC

	.loc_0x1F8:
	  lwz       r0, 0x2FC(r1)
	  lwz       r31, 0x2F4(r1)
	  lwz       r30, 0x2F0(r1)
	  lwz       r29, 0x2EC(r1)
	  lwz       r28, 0x2E8(r1)
	  addi      r1, r1, 0x2F8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E0CCC
 * Size:	0000D0
 */
void EXTIntrruptHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x2E8(r1)
	  stw       r31, 0x2E4(r1)
	  stw       r30, 0x2E0(r1)
	  stw       r29, 0x2DC(r1)
	  stw       r28, 0x2D8(r1)
	  addi      r31, r4, 0
	  extsh     r3, r3
	  subi      r0, r3, 0xB
	  lis       r3, 0x5555
	  addi      r3, r3, 0x5556
	  mulhw     r3, r3, r0
	  rlwinm    r0,r3,1,31,31
	  add       r30, r3, r0
	  lis       r3, 0x50
	  mulli     r0, r30, 0x3
	  srw       r3, r3, r0
	  bl        0xE2EC
	  rlwinm    r4,r30,6,0,25
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5F28
	  add       r29, r0, r4
	  lwz       r28, 0x8(r29)
	  lwz       r0, 0xC(r29)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0xC(r29)
	  cmplwi    r28, 0
	  beq-      .loc_0xB0
	  addi      r3, r1, 0x10
	  bl        0xC428
	  addi      r3, r1, 0x10
	  bl        0xC258
	  li        r0, 0
	  stw       r0, 0x8(r29)
	  addi      r3, r30, 0
	  addi      r4, r31, 0
	  addi      r12, r28, 0
	  mtlr      r12
	  blrl
	  addi      r3, r1, 0x10
	  bl        0xC3FC
	  mr        r3, r31
	  bl        0xC22C

	.loc_0xB0:
	  lwz       r0, 0x2EC(r1)
	  lwz       r31, 0x2E4(r1)
	  lwz       r30, 0x2E0(r1)
	  lwz       r29, 0x2DC(r1)
	  lwz       r28, 0x2D8(r1)
	  addi      r1, r1, 0x2E8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E0D9C
 * Size:	0001D4
 */
void EXIInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6800

	.loc_0x24:
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,31,31
	  cmplwi    r0, 0x1
	  beq+      .loc_0x24
	  lwz       r0, 0x20(r3)
	  rlwinm    r0,r0,0,31,31
	  cmplwi    r0, 0x1
	  beq+      .loc_0x24
	  lwz       r0, 0x34(r3)
	  rlwinm    r0,r0,0,31,31
	  cmplwi    r0, 0x1
	  beq+      .loc_0x24
	  lis       r3, 0x80
	  subi      r3, r3, 0x8000
	  bl        0xE208
	  li        r31, 0
	  lis       r4, 0xCC00
	  stw       r31, 0x6800(r4)
	  stw       r31, 0x6814(r4)
	  stw       r31, 0x6828(r4)
	  li        r0, 0x2000
	  stw       r0, 0x6800(r4)
	  li        r3, 0x9
	  lis       r4, 0x800E
	  addi      r28, r4, 0x9EC
	  addi      r4, r28, 0
	  bl        0xDE5C
	  li        r3, 0xA
	  lis       r4, 0x800E
	  addi      r29, r4, 0xAB4
	  addi      r4, r29, 0
	  bl        0xDE48
	  li        r3, 0xB
	  lis       r4, 0x800E
	  addi      r30, r4, 0xCCC
	  addi      r4, r30, 0
	  bl        0xDE34
	  li        r3, 0xC
	  addi      r4, r28, 0
	  bl        0xDE28
	  li        r3, 0xD
	  addi      r4, r29, 0
	  bl        0xDE1C
	  li        r3, 0xE
	  addi      r4, r30, 0
	  bl        0xDE10
	  li        r3, 0xF
	  addi      r4, r28, 0
	  bl        0xDE04
	  li        r3, 0x10
	  addi      r4, r29, 0
	  bl        0xDDF8
	  li        r3, 0
	  li        r4, 0x2
	  subi      r5, r13, 0x7170
	  bl        0x2E4
	  lwz       r0, -0x70C0(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x140
	  lis       r4, 0x8000
	  stw       r31, 0x30C4(r4)
	  stw       r31, 0x30C0(r4)
	  lis       r3, 0x804F
	  addi      r3, r3, 0x5F28
	  stw       r31, 0x60(r3)
	  stw       r31, 0x20(r3)
	  li        r3, 0
	  bl        -0xB8C
	  li        r3, 0x1
	  bl        -0xB94
	  b         .loc_0x1AC

	.loc_0x140:
	  li        r3, 0
	  li        r4, 0
	  addi      r5, r1, 0x8
	  bl        0x298
	  cmpwi     r3, 0
	  beq-      .loc_0x178
	  lwz       r3, 0x8(r1)
	  subis     r0, r3, 0x701
	  cmplwi    r0, 0
	  bne-      .loc_0x178
	  li        r3, 0x1
	  li        r4, 0
	  bl        0x7B0
	  b         .loc_0x1AC

	.loc_0x178:
	  li        r3, 0x1
	  li        r4, 0
	  addi      r5, r1, 0x8
	  bl        0x260
	  cmpwi     r3, 0
	  beq-      .loc_0x1AC
	  lwz       r3, 0x8(r1)
	  subis     r0, r3, 0x701
	  cmplwi    r0, 0
	  bne-      .loc_0x1AC
	  li        r3, 0
	  li        r4, 0x2
	  bl        0x778

	.loc_0x1AC:
	  lwz       r3, -0x7D20(r13)
	  bl        0xAB3C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E0F70
 * Size:	0000F4
 */
void EXILock(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stmw      r27, 0x1C(r1)
	  addi      r27, r3, 0
	  addi      r31, r4, 0
	  addi      r28, r5, 0
	  rlwinm    r4,r3,6,0,25
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5F28
	  add       r30, r0, r4
	  bl        0xDC9C
	  mr        r29, r3
	  lwz       r0, 0xC(r30)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0xB8
	  cmplwi    r28, 0
	  beq-      .loc_0xA8
	  mr        r3, r30
	  lwz       r4, 0x24(r30)
	  mtctr     r4
	  cmpwi     r4, 0
	  ble-      .loc_0x80

	.loc_0x5C:
	  lwz       r0, 0x28(r3)
	  cmplw     r0, r31
	  bne-      .loc_0x78
	  mr        r3, r29
	  bl        0xDC84
	  li        r3, 0
	  b         .loc_0xE0

	.loc_0x78:
	  addi      r3, r3, 0x8
	  bdnz+     .loc_0x5C

	.loc_0x80:
	  rlwinm    r0,r4,3,0,28
	  add       r3, r30, r0
	  stw       r28, 0x2C(r3)
	  lwz       r0, 0x24(r30)
	  rlwinm    r0,r0,3,0,28
	  add       r3, r30, r0
	  stw       r31, 0x28(r3)
	  lwz       r3, 0x24(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x24(r30)

	.loc_0xA8:
	  mr        r3, r29
	  bl        0xDC44
	  li        r3, 0
	  b         .loc_0xE0

	.loc_0xB8:
	  lwz       r0, 0xC(r30)
	  ori       r0, r0, 0x10
	  stw       r0, 0xC(r30)
	  stw       r31, 0x18(r30)
	  addi      r3, r27, 0
	  addi      r4, r30, 0
	  bl        -0x14EC
	  mr        r3, r29
	  bl        0xDC18
	  li        r3, 0x1

	.loc_0xE0:
	  lwz       r0, 0x34(r1)
	  lmw       r27, 0x1C(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E1064
 * Size:	0000DC
 */
void EXIUnlock(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  addi      r28, r3, 0
	  rlwinm    r4,r3,6,0,25
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5F28
	  add       r31, r0, r4
	  bl        0xDBA4
	  mr        r30, r3
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x54
	  mr        r3, r30
	  bl        0xDBB4
	  li        r3, 0
	  b         .loc_0xBC

	.loc_0x54:
	  lwz       r0, 0xC(r31)
	  rlwinm    r0,r0,0,28,26
	  stw       r0, 0xC(r31)
	  addi      r3, r28, 0
	  addi      r4, r31, 0
	  bl        -0x1578
	  lwz       r3, 0x24(r31)
	  cmpwi     r3, 0
	  ble-      .loc_0xB0
	  lwz       r29, 0x2C(r31)
	  subic.    r0, r3, 0x1
	  stw       r0, 0x24(r31)
	  ble-      .loc_0x9C
	  addi      r3, r31, 0x28
	  addi      r4, r31, 0x30
	  lwz       r0, 0x24(r31)
	  rlwinm    r5,r0,3,0,28
	  bl        -0x1A070

	.loc_0x9C:
	  addi      r3, r28, 0
	  li        r4, 0
	  addi      r12, r29, 0
	  mtlr      r12
	  blrl

	.loc_0xB0:
	  mr        r3, r30
	  bl        0xDB48
	  li        r3, 0x1

	.loc_0xBC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E1140
 * Size:	000018
 */
void EXIGetState(void)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r3,6,0,25
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5F28
	  add       r3, r0, r4
	  lwz       r3, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E1158
 * Size:	000028
 */
void UnlockedHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  li        r4, 0
	  addi      r5, r1, 0x10
	  bl        .loc_0x28
	  lwz       r0, 0x1C(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr

	.loc_0x28:
	*/
}

/*
 * --INFO--
 * Address:	800E1180
 * Size:	0003B0
 */
void EXIGetID(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x48(r1)
	  stmw      r23, 0x24(r1)
	  mr.       r25, r3
	  addi      r26, r4, 0
	  addi      r27, r5, 0
	  rlwinm    r4,r3,6,0,25
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5F28
	  add       r31, r0, r4
	  bne-      .loc_0x50
	  cmplwi    r26, 0x2
	  bne-      .loc_0x50
	  lwz       r0, -0x7170(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  stw       r0, 0x0(r27)
	  li        r3, 0x1
	  b         .loc_0x39C

	.loc_0x50:
	  cmpwi     r25, 0x2
	  bge-      .loc_0x134
	  cmplwi    r26, 0
	  bne-      .loc_0x134
	  mr        r3, r25
	  bl        -0xEA4
	  cmpwi     r3, 0
	  bne-      .loc_0x78
	  li        r3, 0
	  b         .loc_0x39C

	.loc_0x78:
	  lwz       r4, 0x20(r31)
	  rlwinm    r0,r25,2,0,29
	  lis       r3, 0x8000
	  addi      r30, r3, 0x30C0
	  add       r30, r30, r0
	  lwz       r0, 0x0(r30)
	  cmpw      r4, r0
	  bne-      .loc_0xA8
	  lwz       r0, 0x1C(r31)
	  stw       r0, 0x0(r27)
	  lwz       r3, 0x20(r31)
	  b         .loc_0x39C

	.loc_0xA8:
	  bl        0xDA10
	  mr        r28, r3
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,28,28
	  bne-      .loc_0xCC
	  mr        r3, r25
	  bl        -0xF00
	  cmpwi     r3, 0
	  bne-      .loc_0xDC

	.loc_0xCC:
	  mr        r3, r28
	  bl        0xDA10
	  li        r0, 0
	  b         .loc_0x120

	.loc_0xDC:
	  addi      r3, r25, 0
	  li        r4, 0x1
	  li        r5, 0
	  li        r6, 0
	  bl        -0xFF0
	  li        r0, 0
	  stw       r0, 0x8(r31)
	  lis       r3, 0x10
	  mulli     r0, r25, 0x3
	  srw       r3, r3, r0
	  bl        0xDE04
	  lwz       r0, 0xC(r31)
	  ori       r0, r0, 0x8
	  stw       r0, 0xC(r31)
	  mr        r3, r28
	  bl        0xD9C8
	  li        r0, 0x1

	.loc_0x120:
	  cmpwi     r0, 0
	  bne-      .loc_0x130
	  li        r3, 0
	  b         .loc_0x39C

	.loc_0x130:
	  lwz       r29, 0x0(r30)

	.loc_0x134:
	  bl        0xD984
	  addi      r28, r3, 0
	  li        r0, 0
	  cmpwi     r25, 0x2
	  bge-      .loc_0x154
	  cmplwi    r26, 0
	  bne-      .loc_0x154
	  li        r0, 0x1

	.loc_0x154:
	  cmpwi     r0, 0
	  beq-      .loc_0x168
	  lis       r3, 0x800E
	  addi      r5, r3, 0x1158
	  b         .loc_0x16C

	.loc_0x168:
	  li        r5, 0

	.loc_0x16C:
	  addi      r3, r25, 0
	  addi      r4, r26, 0
	  bl        -0x384
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  mr.       r30, r0
	  bne-      .loc_0x2B8
	  addi      r3, r25, 0
	  addi      r4, r26, 0
	  li        r5, 0
	  bl        -0xB64
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  mr.       r30, r0
	  bne-      .loc_0x234
	  li        r0, 0
	  stw       r0, 0x1C(r1)
	  addi      r3, r25, 0
	  addi      r4, r1, 0x1C
	  li        r5, 0x2
	  li        r6, 0x1
	  li        r7, 0
	  bl        -0x16FC
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r30, r30, r0
	  addi      r3, r25, 0
	  bl        -0x1328
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r30, r30, r0
	  addi      r3, r25, 0
	  addi      r4, r27, 0
	  li        r5, 0x4
	  li        r6, 0
	  li        r7, 0
	  bl        -0x1734
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r30, r30, r0
	  addi      r3, r25, 0
	  bl        -0x1360
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r30, r30, r0
	  addi      r3, r25, 0
	  bl        -0xAC8
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or        r30, r30, r0

	.loc_0x234:
	  bl        0xD884
	  mr        r23, r3
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x254
	  mr        r3, r23
	  bl        0xD894
	  b         .loc_0x2B8

	.loc_0x254:
	  lwz       r0, 0xC(r31)
	  rlwinm    r0,r0,0,28,26
	  stw       r0, 0xC(r31)
	  addi      r3, r25, 0
	  addi      r4, r31, 0
	  bl        -0x1894
	  lwz       r3, 0x24(r31)
	  cmpwi     r3, 0
	  ble-      .loc_0x2B0
	  lwz       r24, 0x2C(r31)
	  subic.    r0, r3, 0x1
	  stw       r0, 0x24(r31)
	  ble-      .loc_0x29C
	  addi      r3, r31, 0x28
	  addi      r4, r31, 0x30
	  lwz       r0, 0x24(r31)
	  rlwinm    r5,r0,3,0,28
	  bl        -0x1A38C

	.loc_0x29C:
	  addi      r3, r25, 0
	  li        r4, 0
	  addi      r12, r24, 0
	  mtlr      r12
	  blrl

	.loc_0x2B0:
	  mr        r3, r23
	  bl        0xD82C

	.loc_0x2B8:
	  mr        r3, r28
	  bl        0xD824
	  cmpwi     r25, 0x2
	  bge-      .loc_0x388
	  cmplwi    r26, 0
	  bne-      .loc_0x388
	  bl        0xD7E8
	  mr        r23, r3
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,28,28
	  bne-      .loc_0x2F0
	  mr        r3, r23
	  bl        0xD7F8
	  b         .loc_0x338

	.loc_0x2F0:
	  lwz       r0, 0xC(r31)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x314
	  lwz       r0, 0x18(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x314
	  mr        r3, r23
	  bl        0xD7D4
	  b         .loc_0x338

	.loc_0x314:
	  lwz       r0, 0xC(r31)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0xC(r31)
	  lis       r3, 0x50
	  mulli     r0, r25, 0x3
	  srw       r3, r3, r0
	  bl        0xDB54
	  mr        r3, r23
	  bl        0xD7AC

	.loc_0x338:
	  bl        0xD780
	  rlwinm    r0,r25,2,0,29
	  lis       r4, 0x8000
	  addi      r4, r4, 0x30C0
	  lwzx      r0, r4, r0
	  sub       r4, r0, r29
	  subic     r0, r4, 0x1
	  subfe     r0, r0, r4
	  or.       r30, r30, r0
	  bne-      .loc_0x36C
	  lwz       r0, 0x0(r27)
	  stw       r0, 0x1C(r31)
	  stw       r29, 0x20(r31)

	.loc_0x36C:
	  bl        0xD774
	  cmpwi     r30, 0
	  beq-      .loc_0x380
	  li        r3, 0
	  b         .loc_0x39C

	.loc_0x380:
	  lwz       r3, 0x20(r31)
	  b         .loc_0x39C

	.loc_0x388:
	  cmpwi     r30, 0
	  beq-      .loc_0x398
	  li        r3, 0
	  b         .loc_0x39C

	.loc_0x398:
	  li        r3, 0x1

	.loc_0x39C:
	  lwz       r0, 0x4C(r1)
	  lmw       r23, 0x24(r1)
	  addi      r1, r1, 0x48
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000118
 */
void EXIGetType(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000234
 */
void EXIGetTypeString(void)
{
	// UNUSED FUNCTION
}
