

/*
 * --INFO--
 * Address:	8002EB34
 * Size:	0000DC
 */
void JUTGraphFifo::JUTGraphFifo(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x1F
	  rlwinm    r0,r0,0,0,26
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r5, 0x4D0
	  stw       r3, 0x0(r31)
	  stw       r0, 0xC(r31)
	  lbz       r0, -0x7718(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  lwz       r4, 0xC(r31)
	  li        r5, 0x20
	  lwz       r3, -0x77D8(r13)
	  addi      r4, r4, 0x80
	  bl        -0xB53C
	  stw       r3, 0x4(r31)
	  lwz       r3, 0x4(r31)
	  addi      r0, r3, 0x80
	  stw       r0, 0x8(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x8(r31)
	  lwz       r5, 0xC(r31)
	  bl        0xB4F98
	  lwz       r4, 0x8(r31)
	  lwz       r3, 0x4(r31)
	  mr        r5, r4
	  bl        0xB4FF4
	  b         .loc_0xC4

	.loc_0x80:
	  lwz       r4, 0xC(r31)
	  li        r5, 0x20
	  lwz       r3, -0x77D8(r13)
	  addi      r4, r4, 0xA0
	  bl        -0xB584
	  stw       r3, 0x8(r31)
	  lwz       r3, 0x8(r31)
	  addi      r0, r3, 0x1F
	  rlwinm    r0,r0,0,0,26
	  stw       r0, 0x8(r31)
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0xC(r31)
	  bl        0xB3D4C
	  stw       r3, 0x4(r31)
	  li        r0, 0x1
	  stb       r0, -0x7718(r13)
	  stw       r31, -0x7714(r13)

	.loc_0xC4:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002EC10
 * Size:	0000BC
 */
void JUTGraphFifo::~JUTGraphFifo()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr.       r26, r3
	  mr        r27, r4
	  beq-      .loc_0xA4
	  lis       r3, 0x804A
	  addi      r0, r3, 0x4D0
	  stw       r0, 0x0(r26)
	  lwz       r3, -0x7714(r13)
	  lwz       r3, 0x4(r3)
	  bl        0xB527C
	  subi      r31, r13, 0x7710
	  mr        r30, r31
	  mr        r29, r31
	  addi      r28, r31, 0x1
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x3
	  addi      r29, r29, 0x2

	.loc_0x50:
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  mr        r7, r31
	  subi      r3, r13, 0x7710
	  bl        0xB5344
	  lbz       r0, 0x0(r29)
	  cmplwi    r0, 0
	  beq+      .loc_0x50
	  lwz       r0, -0x7714(r13)
	  cmplw     r0, r26
	  bne-      .loc_0x88
	  li        r0, 0
	  stw       r0, -0x7714(r13)

	.loc_0x88:
	  lwz       r3, -0x77D8(r13)
	  lwz       r4, 0x8(r26)
	  bl        -0xB5EC
	  extsh.    r0, r27
	  ble-      .loc_0xA4
	  mr        r3, r26
	  bl        -0xABFC

	.loc_0xA4:
	  mr        r3, r26
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void JUTGraphFifo::becomeCurrent()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JUTGraphFifo::setBreakPt()
{
	// UNUSED FUNCTION
}