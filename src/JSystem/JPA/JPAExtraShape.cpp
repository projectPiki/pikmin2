#include "types.h"

/*
 * --INFO--
 * Address:	80091030
 * Size:	000070
 */
void JPACalcScaleX(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x4(r3)
	  lfs       f3, 0x1FC(r3)
	  lwz       r5, 0x20(r5)
	  lwz       r3, 0x0(r5)
	  lfs       f0, 0xC(r3)
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x38
	  lfs       f1, 0xC(r5)
	  lfs       f0, 0x14(r3)
	  lfs       f2, 0x68(r4)
	  fmadds    f0, f3, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x60(r4)
	  blr

	.loc_0x38:
	  lfs       f0, 0x10(r3)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x64
	  fsubs     f1, f3, f0
	  lfs       f2, 0x14(r5)
	  lfs       f0, -0x7790(r2)
	  lfs       f3, 0x68(r4)
	  fmadds    f0, f2, f1, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x60(r4)
	  blr

	.loc_0x64:
	  lfs       f0, 0x68(r4)
	  stfs      f0, 0x60(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800910A0
 * Size:	000070
 */
void JPACalcScaleY(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x4(r3)
	  lfs       f3, 0x1FC(r3)
	  lwz       r5, 0x20(r5)
	  lwz       r3, 0x0(r5)
	  lfs       f0, 0xC(r3)
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x38
	  lfs       f1, 0x10(r5)
	  lfs       f0, 0x1C(r3)
	  lfs       f2, 0x68(r4)
	  fmadds    f0, f3, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x64(r4)
	  blr

	.loc_0x38:
	  lfs       f0, 0x10(r3)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x64
	  fsubs     f1, f3, f0
	  lfs       f2, 0x18(r5)
	  lfs       f0, -0x7790(r2)
	  lfs       f3, 0x68(r4)
	  fmadds    f0, f2, f1, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x64(r4)
	  blr

	.loc_0x64:
	  lfs       f0, 0x68(r4)
	  stfs      f0, 0x64(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80091110
 * Size:	00000C
 */
void JPACalcScaleCopy(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x60(r4)
	  stfs      f0, 0x64(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009111C
 * Size:	00000C
 */
void JPACalcScaleAnmNormal(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x84(r4)
	  stfs      f0, 0x1FC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80091128
 * Size:	000064
 */
void JPACalcScaleAnmRepeatX(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r0, 0x4330
	  lfd       f2, -0x7788(r2)
	  lwz       r6, 0x4(r3)
	  lha       r5, 0x80(r4)
	  lwz       r4, 0x20(r6)
	  stw       r0, 0x8(r1)
	  lwz       r4, 0x0(r4)
	  stw       r0, 0x10(r1)
	  lha       r6, 0x28(r4)
	  divw      r4, r5, r6
	  xoris     r0, r6, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  mullw     r0, r4, r6
	  sub       r0, r5, r0
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x1FC(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009118C
 * Size:	000064
 */
void JPACalcScaleAnmRepeatY(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r0, 0x4330
	  lfd       f2, -0x7788(r2)
	  lwz       r6, 0x4(r3)
	  lha       r5, 0x80(r4)
	  lwz       r4, 0x20(r6)
	  stw       r0, 0x8(r1)
	  lwz       r4, 0x0(r4)
	  stw       r0, 0x10(r1)
	  lha       r6, 0x2A(r4)
	  divw      r4, r5, r6
	  xoris     r0, r6, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  mullw     r0, r4, r6
	  sub       r0, r5, r0
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x1FC(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800911F0
 * Size:	00008C
 */
void JPACalcScaleAnmReverseX(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r5, 0x4330
	  lfd       f5, -0x7788(r2)
	  lwz       r6, 0x4(r3)
	  lha       r7, 0x80(r4)
	  lwz       r4, 0x20(r6)
	  stw       r5, 0x8(r1)
	  lwz       r4, 0x0(r4)
	  stw       r5, 0x10(r1)
	  lha       r4, 0x28(r4)
	  stw       r5, 0x18(r1)
	  divw      r6, r7, r4
	  xoris     r0, r4, 0x8000
	  stw       r0, 0x14(r1)
	  lfs       f1, -0x7780(r2)
	  lfd       f0, 0x10(r1)
	  fsubs     f3, f0, f5
	  mullw     r4, r6, r4
	  rlwinm    r0,r6,0,31,31
	  lfs       f0, -0x7790(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x1C(r1)
	  sub       r0, r7, r4
	  xoris     r0, r0, 0x8000
	  lfd       f2, 0x18(r1)
	  stw       r0, 0xC(r1)
	  fsubs     f2, f2, f5
	  lfd       f4, 0x8(r1)
	  fsubs     f4, f4, f5
	  fdivs     f3, f4, f3
	  fnmsubs   f0, f1, f3, f0
	  fmadds    f0, f2, f0, f3
	  stfs      f0, 0x1FC(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009127C
 * Size:	00008C
 */
void JPACalcScaleAnmReverseY(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r5, 0x4330
	  lfd       f5, -0x7788(r2)
	  lwz       r6, 0x4(r3)
	  lha       r7, 0x80(r4)
	  lwz       r4, 0x20(r6)
	  stw       r5, 0x8(r1)
	  lwz       r4, 0x0(r4)
	  stw       r5, 0x10(r1)
	  lha       r4, 0x2A(r4)
	  stw       r5, 0x18(r1)
	  divw      r6, r7, r4
	  xoris     r0, r4, 0x8000
	  stw       r0, 0x14(r1)
	  lfs       f1, -0x7780(r2)
	  lfd       f0, 0x10(r1)
	  fsubs     f3, f0, f5
	  mullw     r4, r6, r4
	  rlwinm    r0,r6,0,31,31
	  lfs       f0, -0x7790(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x1C(r1)
	  sub       r0, r7, r4
	  xoris     r0, r0, 0x8000
	  lfd       f2, 0x18(r1)
	  stw       r0, 0xC(r1)
	  fsubs     f2, f2, f5
	  lfd       f4, 0x8(r1)
	  fsubs     f4, f4, f5
	  fdivs     f3, f4, f3
	  fnmsubs   f0, f1, f3, f0
	  fmadds    f0, f2, f0, f3
	  stfs      f0, 0x1FC(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80091308
 * Size:	000080
 */
void JPACalcAlphaAnm(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lwz       r3, 0x4(r3)
	  lfs       f3, 0x84(r4)
	  lwz       r5, 0x20(r3)
	  lwz       r3, 0x0(r5)
	  lfs       f0, 0x2C(r3)
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x38
	  lfs       f1, 0x4(r5)
	  lfs       f0, 0x34(r3)
	  lfs       f2, -0x777C(r2)
	  fmadds    f0, f3, f1, f0
	  fmuls     f4, f2, f0
	  b         .loc_0x6C

	.loc_0x38:
	  lfs       f0, 0x30(r3)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x60
	  fsubs     f2, f3, f0
	  lfs       f1, 0x8(r5)
	  lfs       f0, 0x38(r3)
	  lfs       f3, -0x777C(r2)
	  fmadds    f0, f2, f1, f0
	  fmuls     f4, f3, f0
	  b         .loc_0x6C

	.loc_0x60:
	  lfs       f1, -0x777C(r2)
	  lfs       f0, 0x38(r3)
	  fmuls     f4, f1, f0

	.loc_0x6C:
	  psq_st    f4,0x8(r1),0x1,0x2
	  lbz       r0, 0x8(r1)
	  stb       r0, 0x96(r4)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80091388
 * Size:	0000E4
 */
void JPACalcAlphaFlickAnm(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lwz       r3, 0x4(r3)
	  lfs       f2, 0x84(r4)
	  lwz       r3, 0x20(r3)
	  lwz       r6, 0x0(r3)
	  lfs       f0, 0x2C(r6)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x30
	  lfs       f1, 0x4(r3)
	  lfs       f0, 0x34(r6)
	  fmadds    f7, f2, f1, f0
	  b         .loc_0x54

	.loc_0x30:
	  lfs       f0, 0x30(r6)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x50
	  fsubs     f2, f2, f0
	  lfs       f1, 0x8(r3)
	  lfs       f0, 0x38(r6)
	  fmadds    f7, f2, f1, f0
	  b         .loc_0x54

	.loc_0x50:
	  lfs       f7, 0x38(r6)

	.loc_0x54:
	  lha       r5, 0x80(r4)
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  lis       r3, 0x8050
	  xoris     r0, r5, 0x8000
	  lfd       f1, -0x7788(r2)
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x71A0
	  lfs       f4, 0x6C(r4)
	  lfd       f0, 0x10(r1)
	  lfs       f5, -0x7774(r2)
	  fsubs     f3, f0, f1
	  lfs       f2, -0x7790(r2)
	  lfs       f1, 0x40(r6)
	  lfs       f0, 0x48(r6)
	  fmuls     f3, f4, f3
	  lfs       f4, -0x7778(r2)
	  fsubs     f1, f2, f1
	  lfs       f6, -0x777C(r2)
	  fmuls     f3, f5, f3
	  fmuls     f1, f3, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,30,18,28
	  lfsx      f1, r3, r0
	  fsubs     f1, f1, f2
	  fmuls     f0, f1, f0
	  fmadds    f0, f4, f0, f2
	  fmuls     f0, f6, f0
	  fmuls     f7, f7, f0
	  psq_st    f7,0x8(r1),0x1,0x2
	  lbz       r0, 0x8(r1)
	  stb       r0, 0x96(r4)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009146C
 * Size:	000034
 */
JPAExtraShape::JPAExtraShape(const unsigned char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0x0(r3)
	  bl        .loc_0x34
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x34:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001FC
 */
void JPAExtraShape::init_jpa(const unsigned char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800914A0
 * Size:	000100
 */
void JPAExtraShape::init()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x0(r3)
	  lfs       f0, -0x7770(r2)
	  lfs       f2, 0x2C(r4)
	  fcmpu     cr0, f0, f2
	  beq-      .loc_0x28
	  lfs       f1, 0x38(r4)
	  lfs       f0, 0x34(r4)
	  fsubs     f0, f1, f0
	  fdivs     f0, f0, f2
	  b         .loc_0x2C

	.loc_0x28:
	  lfs       f0, -0x7790(r2)

	.loc_0x2C:
	  stfs      f0, 0x4(r3)
	  lfs       f0, -0x7790(r2)
	  lwz       r4, 0x0(r3)
	  lfs       f1, 0x30(r4)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x58
	  lfs       f2, 0x3C(r4)
	  fsubs     f0, f0, f1
	  lfs       f1, 0x38(r4)
	  fsubs     f1, f2, f1
	  fdivs     f0, f1, f0

	.loc_0x58:
	  stfs      f0, 0x8(r3)
	  lfs       f0, -0x7770(r2)
	  lwz       r4, 0x0(r3)
	  lfs       f1, 0xC(r4)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0xA0
	  lfs       f2, -0x7790(r2)
	  lfs       f0, 0x14(r4)
	  fsubs     f0, f2, f0
	  fdivs     f0, f0, f1
	  stfs      f0, 0xC(r3)
	  lwz       r4, 0x0(r3)
	  lfs       f1, 0x1C(r4)
	  lfs       f0, 0xC(r4)
	  fsubs     f1, f2, f1
	  fdivs     f0, f1, f0
	  stfs      f0, 0x10(r3)
	  b         .loc_0xAC

	.loc_0xA0:
	  lfs       f0, -0x7790(r2)
	  stfs      f0, 0x10(r3)
	  stfs      f0, 0xC(r3)

	.loc_0xAC:
	  lwz       r4, 0x0(r3)
	  lfs       f2, -0x7790(r2)
	  lfs       f0, 0x10(r4)
	  fcmpu     cr0, f2, f0
	  beq-      .loc_0xF4
	  lfs       f1, 0x18(r4)
	  fsubs     f0, f2, f0
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x14(r3)
	  lwz       r4, 0x0(r3)
	  lfs       f1, 0x20(r4)
	  lfs       f0, 0x10(r4)
	  fsubs     f1, f1, f2
	  fsubs     f0, f2, f0
	  fdivs     f0, f1, f0
	  stfs      f0, 0x18(r3)
	  blr

	.loc_0xF4:
	  stfs      f2, 0x18(r3)
	  stfs      f2, 0x14(r3)
	  blr
	*/
}
