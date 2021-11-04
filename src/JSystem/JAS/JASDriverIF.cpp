#include "types.h"

/*
 * --INFO--
 * Address:	800A47D8
 * Size:	000030
 */
void JASDriver::key2pitch_c5(int)
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0
	  bge-      .loc_0x10
	  li        r3, 0
	  b         .loc_0x1C

	.loc_0x10:
	  cmpwi     r3, 0x7F
	  ble-      .loc_0x1C
	  li        r3, 0x7F

	.loc_0x1C:
	  lis       r4, 0x8048
	  rlwinm    r0,r3,2,0,29
	  subi      r3, r4, 0x7190
	  lfsx      f1, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A4808
 * Size:	000050
 */
void JASDriver::setLevel(float, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x7510(r2)
	  stw       r0, 0x24(r1)
	  fmuls     f4, f0, f1
	  fmuls     f0, f0, f2
	  fmr       f1, f3
	  fctiwz    f2, f4
	  fctiwz    f0, f0
	  stfd      f2, 0x8(r1)
	  stfd      f0, 0x10(r1)
	  lwz       r3, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  sth       r3, -0x7EF0(r13)
	  sth       r0, -0x7EEE(r13)
	  bl        0xB78
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A4858
 * Size:	00003C
 */
void JASDriver::setMixerLevel(float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7510(r2)
	  stw       r0, 0x14(r1)
	  fmuls     f0, f0, f1
	  fmr       f1, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  sth       r0, -0x7EF0(r13)
	  bl        0xB3C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JASDriver::setChannelLevel(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A4894
 * Size:	000024
 */
void JASDriver::setAutoLevel(float)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x7510(r2)
	  stwu      r1, -0x10(r1)
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  sth       r0, -0x7EEE(r13)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A48B8
 * Size:	000020
 */
void JASDriver::setDSPLevel(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0xAF8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A48D8
 * Size:	000008
 */
void JASDriver::getChannelLevel()
{
	/*
	.loc_0x0:
	  lhz       r3, -0x7EF0(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A48E0
 * Size:	000008
 */
void JASDriver::getAutoLevel()
{
	/*
	.loc_0x0:
	  lhz       r3, -0x7EEE(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JASDriver::getDSPLevel()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JASDriver::getChannelLevel_f32()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A48E8
 * Size:	000030
 */
void JASDriver::getAutoLevel_f32()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lis       r0, 0x4330
	  lfd       f2, -0x7508(r2)
	  lhz       r3, -0x7EEE(r13)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x7510(r2)
	  stw       r3, 0xC(r1)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fdivs     f1, f1, f0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A4918
 * Size:	000020
 */
void JASDriver::getDSPLevel_f32()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0xABC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A4938
 * Size:	000008
 */
void JASDriver::setOutputMode(unsigned long)
{
	/*
	.loc_0x0:
	  stw       r3, -0x7EEC(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A4940
 * Size:	000008
 */
void JASDriver::getOutputMode()
{
	/*
	.loc_0x0:
	  lwz       r3, -0x7EEC(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A4948
 * Size:	000090
 */
void JASDriver::rejectCallback(long (*)(void*), void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804F
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  addi      r30, r5, 0x568
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  mr        r5, r29
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r4, r28
	  addi      r3, r30, 0
	  bl        0x1C1C
	  mr        r31, r3
	  mr        r4, r28
	  mr        r5, r29
	  addi      r3, r30, 0x80
	  bl        0x1C08
	  or        r0, r31, r3
	  mr        r4, r28
	  mr        r5, r29
	  addi      r3, r30, 0x100
	  rlwinm    r30,r0,0,24,31
	  bl        0x1BF0
	  or        r0, r30, r3
	  lwz       r31, 0x1C(r1)
	  rlwinm    r3,r0,0,24,31
	  lwz       r0, 0x24(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A49D8
 * Size:	000034
 */
void JASDriver::registerDspSyncCallback(long (*)(void*), void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x804F
	  stw       r0, 0x14(r1)
	  mr        r0, r3
	  addi      r3, r5, 0x568
	  mr        r5, r4
	  mr        r4, r0
	  bl        0x1B08
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A4A0C
 * Size:	000034
 */
void JASDriver::registerSubFrameCallback(long (*)(void*), void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x804F
	  stw       r0, 0x14(r1)
	  mr        r0, r3
	  addi      r3, r5, 0x5E8
	  mr        r5, r4
	  mr        r4, r0
	  bl        0x1AD4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JASDriver::registerUpdateDacCallback(long (*)(void*), void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A4A40
 * Size:	000028
 */
void JASDriver::subframeCallback()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x5E8
	  bl        0x1C58
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A4A68
 * Size:	000028
 */
void JASDriver::DSPSyncCallback()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x568
	  bl        0x1C30
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A4A90
 * Size:	000028
 */
void JASDriver::updateDacCallback()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x668
	  bl        0x1C08
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A4AB8
 * Size:	000080
 */
void __sinit_JASDriverIF_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804F
	  lis       r3, 0x800A
	  stw       r0, 0x14(r1)
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x10
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x568
	  addi      r4, r3, 0x4B38
	  addi      r3, r31, 0
	  bl        0x1CD54
	  lis       r4, 0x800A
	  addi      r3, r31, 0x80
	  addi      r4, r4, 0x4B38
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x10
	  bl        0x1CD38
	  lis       r4, 0x800A
	  addi      r3, r31, 0x100
	  addi      r4, r4, 0x4B38
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x10
	  bl        0x1CD1C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A4B38
 * Size:	000010
 */
JASCallbackMgr::TCallback::TCallback(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  blr
	*/
}
