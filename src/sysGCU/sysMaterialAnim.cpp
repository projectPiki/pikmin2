#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void Sys::MatBaseAnimation::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80434020
 * Size:	000084
 */
void Sys::MatBaseAnimation::attachResource((void*, J3DModelData*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5960
	  li        r4, 0x31
	  subi      r5, r5, 0x594C
	  crclr     6, 0x6
	  bl        -0x409A28

	.loc_0x4C:
	  stw       r31, 0x4(r29)
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804340A4
 * Size:	000090
 */
void Sys::MatBaseAnimation::getFrameMax(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x48
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5960
	  li        r4, 0x39
	  subi      r5, r5, 0x594C
	  crclr     6, 0x6
	  bl        -0x409AA8

	.loc_0x48:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lha       r3, 0x6(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f1, 0x2420(r2)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f0, f1
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80434134
 * Size:	00002C
 */
void Sys::MatTexAnimation::__ct(void)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804F
	  lis       r4, 0x804F
	  subi      r0, r5, 0x3B1C
	  li        r5, 0
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x3B34
	  stw       r5, 0x4(r3)
	  stw       r0, 0x0(r3)
	  stw       r5, 0x8(r3)
	  stw       r5, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80434160
 * Size:	000088
 */
void Sys::MatTexAnimation::onAttachResource((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5960
	  li        r4, 0x4B
	  subi      r5, r5, 0x594C
	  crclr     6, 0x6
	  bl        -0x409B60

	.loc_0x44:
	  mr        r3, r31
	  bl        -0x3C1C08
	  stw       r3, 0x8(r30)
	  lwz       r31, 0x4(r30)
	  lwz       r3, 0x8(r30)
	  mr        r4, r31
	  bl        -0x3CB19C
	  lwz       r4, 0x8(r30)
	  addi      r3, r31, 0x58
	  addi      r5, r30, 0xC
	  bl        -0x3B04A0
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
 * Address:	804341E8
 * Size:	00002C
 */
void Sys::MatTexAnimation::set(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x4(r3)
	  lwz       r4, 0x8(r3)
	  addi      r3, r5, 0x58
	  bl        -0x3AFD18
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80434214
 * Size:	00002C
 */
void Sys::MatTexAnimation::remove(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x4(r3)
	  lwz       r4, 0x8(r3)
	  addi      r3, r5, 0x58
	  bl        -0x3AFFC8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80434240
 * Size:	000030
 */
void Sys::MatTevRegAnimation::__ct(void)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804F
	  lis       r4, 0x804F
	  subi      r0, r5, 0x3B1C
	  li        r5, 0
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x3B4C
	  stw       r5, 0x4(r3)
	  stw       r0, 0x0(r3)
	  stw       r5, 0x8(r3)
	  stw       r5, 0xC(r3)
	  stw       r5, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80434270
 * Size:	00008C
 */
void Sys::MatTevRegAnimation::onAttachResource((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5960
	  li        r4, 0x6F
	  subi      r5, r5, 0x594C
	  crclr     6, 0x6
	  bl        -0x409C70

	.loc_0x44:
	  mr        r3, r31
	  bl        -0x3C1D18
	  stw       r3, 0x8(r30)
	  lwz       r31, 0x4(r30)
	  lwz       r3, 0x8(r30)
	  mr        r4, r31
	  bl        -0x3CABF0
	  lwz       r4, 0x8(r30)
	  addi      r3, r31, 0x58
	  addi      r5, r30, 0xC
	  addi      r6, r30, 0x10
	  bl        -0x3B03D8
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
 * Address:	804342FC
 * Size:	00002C
 */
void Sys::MatTevRegAnimation::set(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x4(r3)
	  lwz       r4, 0x8(r3)
	  addi      r3, r5, 0x58
	  bl        -0x3AFAAC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80434328
 * Size:	00002C
 */
void Sys::MatTevRegAnimation::remove(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x4(r3)
	  lwz       r4, 0x8(r3)
	  addi      r3, r5, 0x58
	  bl        -0x3B0030
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80434354
 * Size:	000018
 */
void Sys::MatBaseAnimator::__ct(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x804F
	  li        r0, 0
	  subi      r4, r4, 0x3B60
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043436C
 * Size:	000070
 */
void Sys::MatBaseAnimator::start((Sys::MatBaseAnimation*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x38:
	  stw       r31, 0x4(r30)
	  lwz       r3, 0x4(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x2428(r2)
	  stfs      f0, 0x8(r30)
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
 * Address:	........
 * Size:	00004C
 */
void Sys::MatBaseAnimator::removeMotion(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001A4
 */
void Sys::MatBaseAnimator::forward((float))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804343DC
 * Size:	000170
 */
void Sys::MatBaseAnimator::setCurrentFrame((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r31, r3
	  fmr       f31, f1
	  lwz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5960
	  li        r4, 0xC9
	  subi      r5, r5, 0x594C
	  crclr     6, 0x6
	  bl        -0x409DE4

	.loc_0x4C:
	  lfs       f0, 0x2428(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x60
	  fmr       f31, f0
	  b         .loc_0x14C

	.loc_0x60:
	  lwz       r30, 0x4(r31)
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x9C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5960
	  li        r4, 0x39
	  subi      r5, r5, 0x594C
	  crclr     6, 0x6
	  bl        -0x409E34

	.loc_0x9C:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lha       r3, 0x6(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f1, 0x2420(r2)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f31, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x14C
	  lwz       r30, 0x4(r31)
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x118
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5960
	  li        r4, 0x39
	  subi      r5, r5, 0x594C
	  crclr     6, 0x6
	  bl        -0x409EB0

	.loc_0x118:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lha       r3, 0x6(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f1, 0x2420(r2)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f31, f0, f1

	.loc_0x14C:
	  stfs      f31, 0x8(r31)
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043454C
 * Size:	000078
 */
void Sys::MatBaseAnimator::animate((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  lwz       r4, -0x6514(r13)
	  mr        r31, r3
	  lwz       r3, 0x4(r3)
	  lfs       f0, 0x54(r4)
	  cmplwi    r3, 0
	  fmuls     f31, f1, f0
	  beq-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x44:
	  mr        r3, r31
	  fmr       f1, f31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804345C4
 * Size:	000004
 */
void Sys::MatBaseAnimator::do_animate((float)) { }

/*
 * --INFO--
 * Address:	804345C8
 * Size:	0001B0
 */
void Sys::MatLoopAnimator::do_animate((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r31, r3
	  lwz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x1
	  subi      r30, r3, 0x8000
	  b         .loc_0x17C

	.loc_0x3C:
	  lfs       f2, 0x8(r31)
	  li        r30, 0
	  lfs       f0, 0x2428(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x8(r31)
	  lfs       f1, 0x8(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x68
	  stfs      f0, 0x8(r31)
	  li        r30, 0x1
	  b         .loc_0x160

	.loc_0x68:
	  lwz       r29, 0x4(r31)
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0xA4
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5960
	  li        r4, 0x39
	  subi      r5, r5, 0x594C
	  crclr     6, 0x6
	  bl        -0x40A028

	.loc_0xA4:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lha       r3, 0x6(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f1, 0x2420(r2)
	  stw       r0, 0xC(r1)
	  lfs       f2, 0x8(r31)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x160
	  lwz       r29, 0x4(r31)
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x124
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5960
	  li        r4, 0x39
	  subi      r5, r5, 0x594C
	  crclr     6, 0x6
	  bl        -0x40A0A8

	.loc_0x124:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lha       r3, 0x6(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  li        r30, 0x2
	  xoris     r0, r3, 0x8000
	  lfd       f1, 0x2420(r2)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x8(r31)

	.loc_0x160:
	  lwz       r3, 0x4(r31)
	  lfs       f31, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  stfs      f31, 0x8(r3)

	.loc_0x17C:
	  cmplwi    r30, 0x2
	  bne-      .loc_0x18C
	  lfs       f0, 0x2428(r2)
	  stfs      f0, 0x8(r31)

	.loc_0x18C:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80434778
 * Size:	00000C
 */
void Sys::MatRepeatAnimator::onStart(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  stb       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80434784
 * Size:	000328
 */
void Sys::MatRepeatAnimator::do_animate((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r31, r3
	  lbz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x19C
	  lwz       r0, 0x4(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x48
	  lis       r3, 0x1
	  subi      r30, r3, 0x8000
	  b         .loc_0x188

	.loc_0x48:
	  lfs       f2, 0x8(r31)
	  li        r30, 0
	  lfs       f0, 0x2428(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x8(r31)
	  lfs       f1, 0x8(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x74
	  stfs      f0, 0x8(r31)
	  li        r30, 0x1
	  b         .loc_0x16C

	.loc_0x74:
	  lwz       r29, 0x4(r31)
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0xB0
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5960
	  li        r4, 0x39
	  subi      r5, r5, 0x594C
	  crclr     6, 0x6
	  bl        -0x40A1F0

	.loc_0xB0:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lha       r3, 0x6(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f1, 0x2420(r2)
	  stw       r0, 0xC(r1)
	  lfs       f2, 0x8(r31)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x16C
	  lwz       r29, 0x4(r31)
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x130
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5960
	  li        r4, 0x39
	  subi      r5, r5, 0x594C
	  crclr     6, 0x6
	  bl        -0x40A270

	.loc_0x130:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lha       r3, 0x6(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  li        r30, 0x2
	  xoris     r0, r3, 0x8000
	  lfd       f1, 0x2420(r2)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x8(r31)

	.loc_0x16C:
	  lwz       r3, 0x4(r31)
	  lfs       f31, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  stfs      f31, 0x8(r3)

	.loc_0x188:
	  cmplwi    r30, 0x2
	  bne-      .loc_0x304
	  li        r0, 0
	  stb       r0, 0xC(r31)
	  b         .loc_0x304

	.loc_0x19C:
	  lwz       r0, 0x4(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1B4
	  lis       r3, 0x1
	  subi      r30, r3, 0x8000
	  b         .loc_0x2F4

	.loc_0x1B4:
	  lfs       f2, 0x8(r31)
	  li        r30, 0
	  lfs       f0, 0x2428(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x8(r31)
	  lfs       f1, 0x8(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1E0
	  stfs      f0, 0x8(r31)
	  li        r30, 0x1
	  b         .loc_0x2D8

	.loc_0x1E0:
	  lwz       r29, 0x4(r31)
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x21C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5960
	  li        r4, 0x39
	  subi      r5, r5, 0x594C
	  crclr     6, 0x6
	  bl        -0x40A35C

	.loc_0x21C:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lha       r3, 0x6(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f1, 0x2420(r2)
	  stw       r0, 0xC(r1)
	  lfs       f2, 0x8(r31)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x2D8
	  lwz       r29, 0x4(r31)
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x29C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5960
	  li        r4, 0x39
	  subi      r5, r5, 0x594C
	  crclr     6, 0x6
	  bl        -0x40A3DC

	.loc_0x29C:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lha       r3, 0x6(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  li        r30, 0x2
	  xoris     r0, r3, 0x8000
	  lfd       f1, 0x2420(r2)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x8(r31)

	.loc_0x2D8:
	  lwz       r3, 0x4(r31)
	  lfs       f31, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  stfs      f31, 0x8(r3)

	.loc_0x2F4:
	  cmplwi    r30, 0x1
	  bne-      .loc_0x304
	  li        r0, 0x1
	  stb       r0, 0xC(r31)

	.loc_0x304:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80434AAC
 * Size:	000004
 */
void Sys::MatBaseAnimator::onStart(void) { }

/*
 * --INFO--
 * Address:	80434AB0
 * Size:	000008
 */
void Sys::MatTevRegAnimation::getAnmBase(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80434AB8
 * Size:	000008
 */
void Sys::MatTexAnimation::getAnmBase(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x8(r3)
	  blr
	*/
}
