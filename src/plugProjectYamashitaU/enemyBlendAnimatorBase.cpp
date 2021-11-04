#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	8012E0E8
 * Size:	000044
 */
EnemyBlendAnimatorBase::EnemyBlendAnimatorBase()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x6788
	  lis       r4, 0x804B
	  addi      r3, r31, 0x10
	  subi      r0, r4, 0x7DC
	  stw       r0, 0x0(r31)
	  bl        0x2FB114
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
 * Address:	8012E12C
 * Size:	000024
 */
void EnemyBlendAnimatorBase::setAnimMgr(SysShape::AnimMgr*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x10
	  stw       r0, 0x14(r1)
	  bl        0x2FB168
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012E150
 * Size:	000008
 */
void EnemyBlendAnimatorBase::getAnimator()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012E158
 * Size:	000014
 */
void EnemyBlendAnimatorBase::getAnimator(int)
{
	/*
	.loc_0x0:
	  mulli     r4, r4, 0x1C
	  mr        r0, r3
	  addi      r3, r4, 0x14
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012E16C
 * Size:	00009C
 */
void EnemyBlendAnimatorBase::startBlend(int, int, SysShape::BlendFunction*,
                                        float, SysShape::MotionListener*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x28(r1)
	  fmr       f31, f1
	  stmw      r27, 0x14(r1)
	  mr        r28, r4
	  mr        r27, r3
	  mr        r29, r5
	  mr        r30, r6
	  mr        r31, r7
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  li        r5, 0
	  bl        0x2FAAD4
	  mr        r3, r27
	  li        r4, 0x1
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  li        r5, 0
	  bl        0x2FAAB0
	  fmr       f1, f31
	  mr        r4, r30
	  mr        r5, r31
	  addi      r3, r27, 0x10
	  bl        0x2FB20C
	  lfd       f31, 0x28(r1)
	  lmw       r27, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012E208
 * Size:	000024
 */
void EnemyBlendAnimatorBase::endBlend()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x10
	  stw       r0, 0x14(r1)
	  bl        0x2FB33C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012E22C
 * Size:	000048
 */
void EnemyBlendAnimatorBase::animate(SysShape::BlendFunction*, float, float,
                                     float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0xC(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x24
	  addi      r3, r3, 0x10
	  bl        0x2FB324
	  b         .loc_0x38

	.loc_0x24:
	  lfs       f1, -0x6248(r2)
	  addi      r3, r3, 0x10
	  fmr       f2, f1
	  fmr       f3, f1
	  bl        0x2FB30C

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012E274
 * Size:	0000B0
 */
void EnemyBlendAnimatorBase::animate(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  stw       r0, 0x14(r1)
	  subi      r0, r5, 0x526C
	  stw       r0, 0x8(r1)
	  subi      r0, r4, 0x7E8
	  stw       r0, 0x8(r1)
	  lwz       r0, 0xC(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x68
	  bne-      .loc_0x4C
	  fmr       f2, f1
	  addi      r3, r3, 0x10
	  fmr       f3, f1
	  addi      r4, r1, 0x8
	  bl        0x2FB2B4
	  b         .loc_0xA0

	.loc_0x4C:
	  lfs       f1, -0x6248(r2)
	  addi      r3, r3, 0x10
	  addi      r4, r1, 0x8
	  fmr       f2, f1
	  fmr       f3, f1
	  bl        0x2FB298
	  b         .loc_0xA0

	.loc_0x68:
	  bne-      .loc_0x88
	  lfs       f1, -0x6248(r2)
	  addi      r3, r3, 0x10
	  addi      r4, r1, 0x8
	  fmr       f2, f1
	  fmr       f3, f1
	  bl        0x2FB278
	  b         .loc_0xA0

	.loc_0x88:
	  lfs       f1, -0x6248(r2)
	  addi      r3, r3, 0x10
	  addi      r4, r1, 0x8
	  fmr       f2, f1
	  fmr       f3, f1
	  bl        0x2FB25C

	.loc_0xA0:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace Game

namespace SysShape {

/*
 * --INFO--
 * Address:	8012E324
 * Size:	000004
 */
void BlendLinearFun::getValue(float) { }

} // namespace SysShape

/*
 * --INFO--
 * Address:	8012E328
 * Size:	00001C
 */
void __sinit_enemyBlendAnimatorBase_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r4, r4, 0x7E8
	  subi      r0, r3, 0x7B4
	  stw       r4, -0x6DC0(r13)
	  stw       r0, -0x6DBC(r13)
	  blr
	*/
}

namespace SysShape {

/*
 * --INFO--
 * Address:	8012E344
 * Size:	000008
 */
void BlendQuadraticFunc::getValue(float)
{
	/*
	.loc_0x0:
	  fmuls     f1, f1, f1
	  blr
	*/
}
} // namespace SysShape
