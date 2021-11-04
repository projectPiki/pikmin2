

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void DLAddFront(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void DLLookup(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void DLExtract(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EC210
 * Size:	0000AC
 */
void DLInsert(void)
{
	/*
	.loc_0x0:
	  addi      r7, r3, 0
	  li        r6, 0
	  b         .loc_0x1C

	.loc_0xC:
	  cmplw     r4, r7
	  ble-      .loc_0x24
	  mr        r6, r7
	  lwz       r7, 0x4(r7)

	.loc_0x1C:
	  cmplwi    r7, 0
	  bne+      .loc_0xC

	.loc_0x24:
	  stw       r7, 0x4(r4)
	  cmplwi    r7, 0
	  stw       r6, 0x0(r4)
	  beq-      .loc_0x68
	  stw       r4, 0x0(r7)
	  lwz       r5, 0x8(r4)
	  add       r0, r4, r5
	  cmplw     r0, r7
	  bne-      .loc_0x68
	  lwz       r0, 0x8(r7)
	  add       r0, r5, r0
	  stw       r0, 0x8(r4)
	  lwz       r7, 0x4(r7)
	  cmplwi    r7, 0
	  stw       r7, 0x4(r4)
	  beq-      .loc_0x68
	  stw       r4, 0x0(r7)

	.loc_0x68:
	  cmplwi    r6, 0
	  beq-      .loc_0xA4
	  stw       r4, 0x4(r6)
	  lwz       r5, 0x8(r6)
	  add       r0, r6, r5
	  cmplw     r0, r4
	  bnelr-
	  lwz       r0, 0x8(r4)
	  cmplwi    r7, 0
	  add       r0, r5, r0
	  stw       r0, 0x8(r6)
	  stw       r7, 0x4(r6)
	  beqlr-
	  stw       r6, 0x0(r7)
	  blr

	.loc_0xA4:
	  mr        r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void DLOverlap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void DLSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void OSAllocFromHeap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000284
 */
void OSAllocFixed(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EC2BC
 * Size:	00007C
 */
void OSFreeToHeap(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  subi      r6, r4, 0x20
	  stw       r0, 0x4(r1)
	  mulli     r0, r3, 0xC
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  lwz       r4, -0x70A8(r13)
	  lwz       r3, 0x4(r6)
	  add       r31, r4, r0
	  cmplwi    r3, 0
	  lwz       r5, 0x8(r31)
	  mr        r4, r6
	  beq-      .loc_0x3C
	  lwz       r0, 0x0(r4)
	  stw       r0, 0x0(r3)

	.loc_0x3C:
	  lwz       r3, 0x0(r4)
	  cmplwi    r3, 0
	  bne-      .loc_0x50
	  lwz       r5, 0x4(r4)
	  b         .loc_0x58

	.loc_0x50:
	  lwz       r0, 0x4(r4)
	  stw       r0, 0x4(r3)

	.loc_0x58:
	  stw       r5, 0x8(r31)
	  lwz       r3, 0x4(r31)
	  bl        -0x10C
	  stw       r3, 0x4(r31)
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EC338
 * Size:	000010
 */
void OSSetCurrentHeap(void)
{
	/*
	.loc_0x0:
	  lwz       r0, -0x7CA8(r13)
	  stw       r3, -0x7CA8(r13)
	  mr        r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EC348
 * Size:	000070
 */
void OSInitAlloc(void)
{
	/*
	.loc_0x0:
	  mulli     r7, r5, 0xC
	  stw       r3, -0x70A8(r13)
	  stw       r5, -0x70A4(r13)
	  li        r6, 0
	  addi      r3, r6, 0
	  li        r8, 0
	  li        r5, -0x1
	  b         .loc_0x3C

	.loc_0x20:
	  lwz       r0, -0x70A8(r13)
	  addi      r8, r8, 0x1
	  add       r9, r0, r6
	  stw       r5, 0x0(r9)
	  addi      r6, r6, 0xC
	  stw       r3, 0x8(r9)
	  stw       r3, 0x4(r9)

	.loc_0x3C:
	  lwz       r0, -0x70A4(r13)
	  cmpw      r8, r0
	  blt+      .loc_0x20
	  lwz       r3, -0x70A8(r13)
	  rlwinm    r0,r4,0,0,26
	  li        r4, -0x1
	  stw       r0, -0x709C(r13)
	  add       r3, r3, r7
	  addi      r0, r3, 0x1F
	  stw       r4, -0x7CA8(r13)
	  rlwinm    r3,r0,0,0,26
	  stw       r3, -0x70A0(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EC3B8
 * Size:	00006C
 */
void OSCreateHeap(void)
{
	/*
	.loc_0x0:
	  lwz       r6, -0x70A4(r13)
	  addi      r0, r3, 0x1F
	  lwz       r5, -0x70A8(r13)
	  rlwinm    r7,r0,0,0,26
	  cmpwi     r6, 0
	  mtctr     r6
	  rlwinm    r4,r4,0,0,26
	  li        r3, 0
	  ble-      .loc_0x64

	.loc_0x24:
	  lwz       r0, 0x0(r5)
	  cmpwi     r0, 0
	  bge-      .loc_0x58
	  sub       r0, r4, r7
	  stw       r0, 0x0(r5)
	  li        r4, 0
	  stw       r4, 0x0(r7)
	  stw       r4, 0x4(r7)
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x8(r7)
	  stw       r7, 0x4(r5)
	  stw       r4, 0x8(r5)
	  blr

	.loc_0x58:
	  addi      r5, r5, 0xC
	  addi      r3, r3, 0x1
	  bdnz+     .loc_0x24

	.loc_0x64:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void OSDestroyHeap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void OSAddToHeap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000360
 */
void OSCheckHeap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void OSReferentSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
void OSDumpHeap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void OSVisitAllocated(void)
{
	// UNUSED FUNCTION
}
