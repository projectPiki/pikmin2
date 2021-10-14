

/*
 * --INFO--
 * Address:	........
 * Size:	000130
 */
void JASProbe::JASProbe()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void JASProbe::reset()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void JASProbe::start(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void JASProbe::stop()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void JASKernel::initProbe(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000190
 */
void JASKernel::resetProbe()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A74D4
 * Size:	000060
 */
void JASKernel::probeStart(long, char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  lwz       r5, -0x7538(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0x48
	  mulli     r0, r3, 0x1AC
	  add       r30, r5, r0
	  bl        0x47738
	  stw       r31, 0x0(r30)
	  mr        r31, r3
	  bl        0x4B684
	  stw       r4, 0x4(r30)
	  mr        r3, r31
	  bl        0x47748

	.loc_0x48:
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
 * Address:	800A7534
 * Size:	00013C
 */
void JASKernel::probeFinish(long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  lwz       r4, -0x7538(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x124
	  mulli     r0, r3, 0x1AC
	  add       r31, r4, r0
	  bl        0x476DC
	  mr        r30, r3
	  bl        0x4B62C
	  lwz       r5, 0x4(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lis       r3, 0x8000
	  sub       r4, r4, r5
	  lfd       f3, -0x74E8(r2)
	  stw       r4, 0xC(r1)
	  lfs       f0, -0x74F8(r2)
	  lfd       f1, 0x8(r1)
	  stw       r0, 0x10(r1)
	  fsubs     f1, f1, f3
	  stfs      f1, 0x8(r31)
	  lwz       r0, 0xF8(r3)
	  lfs       f2, 0x8(r31)
	  rlwinm    r0,r0,30,2,31
	  stw       r0, 0x14(r1)
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f3
	  fdivs     f0, f1, f0
	  fdivs     f0, f2, f0
	  stfs      f0, 0x8(r31)
	  lfs       f0, 0x10(r31)
	  lfs       f1, 0x8(r31)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0xA8
	  lwz       r0, 0x1A8(r31)
	  cmplwi    r0, 0x64
	  ble-      .loc_0xA8
	  stfs      f1, 0x10(r31)

	.loc_0xA8:
	  lfs       f1, -0x74F0(r2)
	  lis       r3, 0x51EC
	  lfs       f0, 0x8(r31)
	  subi      r0, r3, 0x7AE1
	  lfs       f2, -0x74F4(r2)
	  mr        r3, r30
	  fmuls     f0, f1, f0
	  lfs       f1, 0xC(r31)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0xC(r31)
	  lwz       r4, 0x1A8(r31)
	  lfs       f1, 0x14(r31)
	  mulhwu    r0, r0, r4
	  rlwinm    r0,r0,27,5,31
	  mulli     r0, r0, 0x64
	  sub       r0, r4, r0
	  rlwinm    r0,r0,2,0,29
	  add       r4, r31, r0
	  lfs       f0, 0x18(r4)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x14(r31)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0x18(r4)
	  lfs       f1, 0x14(r31)
	  lfs       f0, 0x8(r31)
	  fadds     f0, f1, f0
	  stfs      f0, 0x14(r31)
	  lwz       r4, 0x1A8(r31)
	  addi      r0, r4, 0x1
	  stw       r0, 0x1A8(r31)
	  bl        0x4760C

	.loc_0x124:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JASKernel::getProbeName(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASKernel::getProbeLast(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASKernel::getProbeAvg(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JASKernel::getProbeTotalAvg(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASKernel::getProbeMax(long)
{
	// UNUSED FUNCTION
}
