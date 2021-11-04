

/*
 * --INFO--
 * Address:	800FEB2C
 * Size:	000054
 */
void ShortCommandProc(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x804F
	  rlwinm    r3,r3,8,0,23
	  addi      r0, r4, 0x75C0
	  add       r3, r0, r3
	  lwz       r0, 0x20(r3)
	  cmpwi     r0, 0
	  bnelr-
	  lbz       r0, 0x5(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x34
	  lbz       r0, 0x6(r3)
	  cmplwi    r0, 0x4
	  beq-      .loc_0x40

	.loc_0x34:
	  li        r0, 0x1
	  stw       r0, 0x20(r3)
	  blr

	.loc_0x40:
	  lbz       r0, 0x7(r3)
	  lwz       r3, 0x14(r3)
	  andi.     r0, r0, 0x3A
	  stb       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FEB80
 * Size:	0000C0
 */
void GBAInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stmw      r27, 0xC(r1)
	  lwz       r0, -0x6E68(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0xAC
	  li        r0, 0x1
	  lwz       r3, -0x7C48(r13)
	  stw       r0, -0x6E68(r13)
	  bl        -0x13120
	  lis       r3, 0x8000
	  lwz       r0, 0xF8(r3)
	  lis       r3, 0x431C
	  lis       r4, 0x804F
	  rlwinm    r0,r0,30,2,31
	  subi      r3, r3, 0x217D
	  mulhwu    r0, r3, r0
	  rlwinm    r0,r0,17,15,31
	  mulli     r0, r0, 0x3C
	  lis       r3, 0x804F
	  addi      r29, r4, 0x75C0
	  addi      r28, r3, 0x74C0
	  rlwinm    r30,r0,29,3,31
	  li        r27, 0
	  li        r31, 0

	.loc_0x68:
	  stw       r30, 0x34(r29)
	  addi      r3, r29, 0x24
	  stw       r31, 0x30(r29)
	  bl        -0xD240
	  addi      r27, r27, 0x1
	  stw       r28, 0xF8(r29)
	  cmpwi     r27, 0x4
	  addi      r29, r29, 0x100
	  addi      r28, r28, 0x40
	  blt+      .loc_0x68
	  bl        -0x1315C
	  bl        -0x23ED8
	  li        r0, 0
	  lis       r3, 0x804B
	  stw       r0, -0x6E64(r13)
	  subi      r3, r3, 0x5EC0
	  bl        -0xE984

	.loc_0xAC:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void GBAGetStatusAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800FEC40
 * Size:	000090
 */
void GBAGetStatus(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r3, 0
	  lis       r3, 0x804F
	  rlwinm    r5,r31,8,0,23
	  addi      r0, r3, 0x75C0
	  add       r7, r0, r5
	  lwz       r0, 0x1C(r7)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  li        r3, 0x2
	  b         .loc_0x68

	.loc_0x38:
	  li        r0, 0
	  stb       r0, 0x0(r7)
	  lis       r5, 0x8010
	  subi      r0, r5, 0xFCC
	  stw       r4, 0x14(r7)
	  lis       r3, 0x8010
	  subi      r6, r3, 0x14D4
	  stw       r0, 0x1C(r7)
	  addi      r3, r31, 0
	  li        r4, 0x1
	  li        r5, 0x3
	  bl        0x554

	.loc_0x68:
	  cmpwi     r3, 0
	  beq-      .loc_0x74
	  b         .loc_0x7C

	.loc_0x74:
	  mr        r3, r31
	  bl        0x3B0

	.loc_0x7C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void GBAResetAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800FECD0
 * Size:	000090
 */
void GBAReset(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r3, 0
	  lis       r3, 0x804F
	  rlwinm    r5,r31,8,0,23
	  addi      r0, r3, 0x75C0
	  add       r7, r0, r5
	  lwz       r0, 0x1C(r7)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  li        r3, 0x2
	  b         .loc_0x68

	.loc_0x38:
	  li        r0, 0xFF
	  stb       r0, 0x0(r7)
	  lis       r5, 0x8010
	  subi      r0, r5, 0xFCC
	  stw       r4, 0x14(r7)
	  lis       r3, 0x8010
	  subi      r6, r3, 0x14D4
	  stw       r0, 0x1C(r7)
	  addi      r3, r31, 0
	  li        r4, 0x1
	  li        r5, 0x3
	  bl        0x4C4

	.loc_0x68:
	  cmpwi     r3, 0
	  beq-      .loc_0x74
	  b         .loc_0x7C

	.loc_0x74:
	  mr        r3, r31
	  bl        0x320

	.loc_0x7C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FED60
 * Size:	000010
 */
void OnReset(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  stw       r0, -0x6E64(r13)
	  li        r3, 0x1
	  blr
	*/
}
