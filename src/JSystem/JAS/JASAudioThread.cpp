

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void JASAudioThread::JASAudioThread(int, int, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A5B88
 * Size:	000074
 */
void JASAudioThread::create(long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x7C
	  lwz       r4, -0x7548(r13)
	  bl        -0x81C6C
	  mr.       r31, r3
	  beq-      .loc_0x50
	  lwz       r4, -0x7548(r13)
	  mr        r7, r30
	  li        r5, 0x1000
	  li        r6, 0x10
	  bl        -0x804D8
	  lis       r3, 0x804A
	  addi      r0, r3, 0x4458
	  stw       r0, 0x0(r31)

	.loc_0x50:
	  stw       r31, -0x7568(r13)
	  lwz       r3, 0x2C(r31)
	  bl        0x4C914
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
 * Address:	800A5BFC
 * Size:	000038
 */
void JASAudioThread::stop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x7568(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  addi      r3, r3, 0x30
	  li        r4, 0x2
	  li        r5, 0x1
	  bl        0x49AA0

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void JASAudioThread::pause(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A5C34
 * Size:	00017C
 */
void JASAudioThread::run()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  li        r3, 0x4
	  oris      r3, r3, 0x4
	  mtspr     914, r3
	  li        r3, 0x5
	  oris      r3, r3, 0x5
	  mtspr     915, r3
	  li        r3, 0x6
	  oris      r3, r3, 0x6
	  mtspr     916, r3
	  li        r3, 0x7
	  oris      r3, r3, 0x7
	  mtspr     917, r3
	  lis       r4, 0x800A
	  addi      r3, r4, 0x5DB0
	  bl        0x1CE4
	  lis       r4, 0x800A
	  addi      r3, r4, 0x5DF8
	  bl        -0x980
	  bl        -0x874
	  bl        -0x107C
	  lwz       r0, -0x75DC(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  bl        0x48F90
	  lwz       r0, -0x75DC(r13)
	  stw       r3, 0x8(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xA8
	  lwz       r4, -0x7548(r13)
	  li        r3, 0xC
	  li        r5, 0
	  bl        -0x81D88
	  mr.       r31, r3
	  beq-      .loc_0xA4
	  bl        0x14B0

	.loc_0xA4:
	  stw       r31, -0x75DC(r13)

	.loc_0xA8:
	  lwz       r3, 0x8(r1)
	  bl        0x48F80

	.loc_0xB0:
	  lwz       r3, -0x75DC(r13)
	  li        r4, 0x118
	  li        r5, 0x48
	  bl        0x14A8
	  bl        0x1DB0

	.loc_0xC4:
	  addi      r3, r30, 0x30
	  addi      r4, r1, 0xC
	  li        r5, 0x1
	  bl        0x498E0
	  lwz       r0, 0xC(r1)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x12C
	  bge-      .loc_0xF0
	  cmpwi     r0, 0
	  bge-      .loc_0xFC
	  b         .loc_0xC4

	.loc_0xF0:
	  cmpwi     r0, 0x3
	  bge+      .loc_0xC4
	  b         .loc_0x170

	.loc_0xFC:
	  lbz       r0, -0x7554(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x114
	  bl        0x1D88
	  subi      r3, r13, 0x7564
	  bl        0x4CBA8

	.loc_0x114:
	  lwz       r4, -0x755C(r13)
	  addi      r0, r4, 0x1
	  stw       r0, -0x755C(r13)
	  bl        0x1D90
	  bl        -0x12C8
	  b         .loc_0xC4

	.loc_0x12C:
	  lwz       r4, -0x7558(r13)
	  subi      r0, r4, 0x1
	  stw       r0, -0x7558(r13)
	  lwz       r0, -0x7558(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x154
	  li        r3, 0x7
	  bl        0x17B8
	  bl        0x22C0
	  b         .loc_0xC4

	.loc_0x154:
	  li        r3, 0x2
	  subi      r4, r2, 0x7500
	  bl        0x1744
	  bl        0x1EAC
	  li        r3, 0x2
	  bl        0x1798
	  b         .loc_0xC4

	.loc_0x170:
	  li        r3, 0
	  bl        0x4C40C
	  b         .loc_0xC4
	*/
}

/*
 * --INFO--
 * Address:	800A5DB0
 * Size:	000048
 */
void JASAudioThread::DMACallback()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x4
	  stw       r0, 0x14(r1)
	  bl        0x1774
	  lis       r4, 0x8048
	  li        r3, 0x4
	  subi      r4, r4, 0x6A28
	  bl        0x1704
	  lwz       r3, -0x7568(r13)
	  li        r4, 0
	  li        r5, 0
	  addi      r3, r3, 0x30
	  bl        0x49738
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A5DF8
 * Size:	000064
 */
void JASAudioThread::DSPCallback(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)

	.loc_0xC:
	  bl        0x34EBC
	  cmplwi    r3, 0
	  beq+      .loc_0xC
	  bl        0x34EC0
	  rlwinm    r0,r3,16,16,31
	  cmplwi    r0, 0xF355
	  bne-      .loc_0x54
	  rlwinm    r0,r3,0,16,23
	  cmplwi    r0, 0xFF00
	  bne-      .loc_0x4C
	  lwz       r3, -0x7568(r13)
	  li        r4, 0x1
	  li        r5, 0
	  addi      r3, r3, 0x30
	  bl        0x496E0
	  b         .loc_0x54

	.loc_0x4C:
	  rlwinm    r3,r3,0,16,31
	  bl        -0xACC

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void JASAudioThread::bootDSP()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASAudioThread::getCurrentVCounter()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A5E5C
 * Size:	000060
 */
void JASAudioThread::~JASAudioThread()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x44
	  lis       r5, 0x804A
	  li        r4, 0
	  addi      r0, r5, 0x4458
	  stw       r0, 0x0(r30)
	  bl        -0x80654
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x81DE8

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
