

/*
 * --INFO--
 * Address:	800DF45C
 * Size:	000038
 */
void __DVDClearWaitingQueue(void)
{
/*
.loc_0x0:
  lis       r3, 0x804F
  addi      r3, r3, 0x5E98
  stw       r3, 0x0(r3)
  addi      r5, r3, 0x8
  addi      r4, r3, 0x10
  stw       r3, 0x4(r3)
  addi      r3, r3, 0x18
  stw       r5, 0x0(r5)
  stw       r5, 0x4(r5)
  stw       r4, 0x0(r4)
  stw       r4, 0x4(r4)
  stw       r3, 0x0(r3)
  stw       r3, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800DF494
 * Size:	000068
 */
void __DVDPushWaitingQueue(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x18(r1)
  stw       r31, 0x14(r1)
  addi      r31, r4, 0
  stw       r30, 0x10(r1)
  addi      r30, r3, 0
  bl        0xF788
  lis       r4, 0x804F
  rlwinm    r5,r30,3,0,28
  addi      r0, r4, 0x5E98
  add       r5, r0, r5
  lwz       r4, 0x4(r5)
  stw       r31, 0x0(r4)
  lwz       r0, 0x4(r5)
  stw       r0, 0x4(r31)
  stw       r5, 0x0(r31)
  stw       r31, 0x4(r5)
  bl        0xF784
  lwz       r0, 0x1C(r1)
  li        r3, 0x1
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
 * Size:	000064
 */
void PopWaitingQueuePrio(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DF4FC
 * Size:	0000A0
 */
void __DVDPopWaitingQueue(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x10(r1)
  stw       r31, 0xC(r1)
  bl        0xF72C
  li        r0, 0x4
  lis       r4, 0x804F
  mtctr     r0
  addi      r4, r4, 0x5E98
  li        r31, 0

.loc_0x28:
  lwz       r0, 0x0(r4)
  cmplw     r0, r4
  beq-      .loc_0x78
  bl        0xF730
  bl        0xF704
  lis       r4, 0x804F
  rlwinm    r5,r31,3,0,28
  addi      r0, r4, 0x5E98
  add       r5, r0, r5
  lwz       r31, 0x0(r5)
  lwz       r0, 0x0(r31)
  stw       r0, 0x0(r5)
  lwz       r4, 0x0(r31)
  stw       r5, 0x4(r4)
  bl        0xF704
  li        r0, 0
  stw       r0, 0x0(r31)
  mr        r3, r31
  stw       r0, 0x4(r31)
  b         .loc_0x8C

.loc_0x78:
  addi      r4, r4, 0x8
  addi      r31, r31, 0x1
  bdnz+     .loc_0x28
  bl        0xF6E0
  li        r3, 0

.loc_0x8C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  addi      r1, r1, 0x10
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	800DF59C
 * Size:	000058
 */
void __DVDCheckWaitingQueue(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x8(r1)
  bl        0xF690
  li        r0, 0x4
  lis       r4, 0x804F
  mtctr     r0
  addi      r4, r4, 0x5E98

.loc_0x20:
  lwz       r0, 0x0(r4)
  cmplw     r0, r4
  beq-      .loc_0x38
  bl        0xF698
  li        r3, 0x1
  b         .loc_0x48

.loc_0x38:
  addi      r4, r4, 0x8
  bdnz+     .loc_0x20
  bl        0xF684
  li        r3, 0

.loc_0x48:
  lwz       r0, 0xC(r1)
  addi      r1, r1, 0x8
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	800DF5F4
 * Size:	000060
 */
void __DVDDequeueWaitingQueue(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x18(r1)
  stw       r31, 0x14(r1)
  mr        r31, r3
  bl        0xF630
  lwz       r4, 0x4(r31)
  lwz       r5, 0x0(r31)
  cmplwi    r4, 0
  beq-      .loc_0x30
  cmplwi    r5, 0
  bne-      .loc_0x3C

.loc_0x30:
  bl        0xF63C
  li        r3, 0
  b         .loc_0x4C

.loc_0x3C:
  stw       r5, 0x0(r4)
  stw       r4, 0x4(r5)
  bl        0xF628
  li        r3, 0x1

.loc_0x4C:
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
 * Size:	0000CC
 */
void __DVDIsBlockInWaitingQueue(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void DVDDumpWaitingQueue(void)
{
	// UNUSED FUNCTION
}