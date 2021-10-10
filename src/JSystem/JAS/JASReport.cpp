

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JASReportInit(JKRHeap*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASReportGetLineMax()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
void JASReportCopyBuffer(char*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A786C
 * Size:	0000FC
 */
void JASReport(const char*, ...)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  mr        r31, r3
	  bne-      cr1, .loc_0x38
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x38:
	  lwz       r0, -0x7530(r13)
	  stw       r3, 0x8(r1)
	  cmplwi    r0, 0
	  stw       r4, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  beq-      .loc_0xE8
	  lis       r3, 0x804F
	  addi      r4, r1, 0x88
	  addi      r3, r3, 0x750
	  addi      r0, r1, 0x8
	  lis       r5, 0x100
	  stw       r4, 0x70(r1)
	  stw       r5, 0x6C(r1)
	  stw       r0, 0x74(r1)
	  stw       r3, 0x68(r1)
	  bl        0x48274
	  lwz       r0, -0x7524(r13)
	  mr        r5, r31
	  lwz       r3, -0x7530(r13)
	  addi      r6, r1, 0x6C
	  rlwinm    r0,r0,6,0,25
	  li        r4, 0x40
	  add       r3, r3, r0
	  bl        0x1FD50
	  lwz       r3, -0x7524(r13)
	  lwz       r4, -0x752C(r13)
	  addi      r0, r3, 0x1
	  cmpw      r0, r4
	  stw       r0, -0x7524(r13)
	  blt-      .loc_0xCC
	  li        r0, 0
	  stw       r0, -0x7524(r13)

	.loc_0xCC:
	  lwz       r3, -0x7528(r13)
	  cmpw      r3, r4
	  bge-      .loc_0xE0
	  addi      r0, r3, 0x1
	  stw       r0, -0x7528(r13)

	.loc_0xE0:
	  lwz       r3, 0x68(r1)
	  bl        0x482F4

	.loc_0xE8:
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}