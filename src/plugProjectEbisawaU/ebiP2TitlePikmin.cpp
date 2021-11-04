#include "types.h"

namespace ebi {

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
title::Pikmin::TBoidParamMgr::TBoidParamMgr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void title::Pikmin::TBoidParamMgr::startState(
    (ebi::title::Pikmin::TBoidParamMgr::enumState, float))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000130
 */
void title::Pikmin::TBoidParamMgr::update(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
title::Pikmin::TAnimator::TAnimator(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803E3DE8
 * Size:	0002D8
 */
void title::Pikmin::TAnimator::setArchive(JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r28)
	  addi      r30, r4, 0x7158
	  mr        r3, r28
	  lwz       r12, 0x14(r12)
	  addi      r4, r30, 0x104
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  bne-      .loc_0x60
	  addi      r3, r30, 0x120
	  addi      r5, r30, 0x138
	  li        r4, 0xB0
	  crclr     6, 0x6
	  bl        -0x3B9804

	.loc_0x60:
	  mr        r3, r29
	  lis       r4, 0x2010
	  bl        -0x3745BC
	  stw       r3, 0x0(r31)
	  mr        r3, r28
	  addi      r4, r30, 0x144
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  bne-      .loc_0xA4
	  addi      r3, r30, 0x120
	  addi      r5, r30, 0x138
	  li        r4, 0xBA
	  crclr     6, 0x6
	  bl        -0x3B9848

	.loc_0xA4:
	  mr        r3, r29
	  lis       r4, 0x2010
	  bl        -0x374600
	  stw       r3, 0x4(r31)
	  mr        r3, r28
	  addi      r4, r30, 0x164
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  bne-      .loc_0xE8
	  addi      r3, r30, 0x120
	  addi      r5, r30, 0x138
	  li        r4, 0xC4
	  crclr     6, 0x6
	  bl        -0x3B988C

	.loc_0xE8:
	  mr        r3, r29
	  lis       r4, 0x2010
	  bl        -0x374644
	  stw       r3, 0x8(r31)
	  mr        r3, r28
	  addi      r4, r30, 0x180
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  bne-      .loc_0x12C
	  addi      r3, r30, 0x120
	  addi      r5, r30, 0x138
	  li        r4, 0xCE
	  crclr     6, 0x6
	  bl        -0x3B98D0

	.loc_0x12C:
	  mr        r3, r29
	  lis       r4, 0x2010
	  bl        -0x374688
	  stw       r3, 0xC(r31)
	  mr        r3, r28
	  addi      r4, r30, 0x19C
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  bne-      .loc_0x170
	  addi      r3, r30, 0x120
	  addi      r5, r30, 0x138
	  li        r4, 0xD8
	  crclr     6, 0x6
	  bl        -0x3B9914

	.loc_0x170:
	  mr        r3, r29
	  lis       r4, 0x2010
	  bl        -0x3746CC
	  stw       r3, 0x10(r31)
	  mr        r3, r28
	  addi      r4, r30, 0x1B8
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  bne-      .loc_0x1B4
	  addi      r3, r30, 0x120
	  addi      r5, r30, 0x138
	  li        r4, 0xE4
	  crclr     6, 0x6
	  bl        -0x3B9958

	.loc_0x1B4:
	  mr        r3, r29
	  bl        -0x371A00
	  stw       r3, 0x14(r31)
	  mr        r3, r28
	  addi      r4, r30, 0x1C8
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  bne-      .loc_0x1F4
	  addi      r3, r30, 0x120
	  addi      r5, r30, 0x138
	  li        r4, 0xE9
	  crclr     6, 0x6
	  bl        -0x3B9998

	.loc_0x1F4:
	  mr        r3, r29
	  bl        -0x371A40
	  stw       r3, 0x18(r31)
	  lwz       r3, 0x0(r31)
	  lwz       r4, 0x14(r31)
	  lwz       r0, 0x18(r3)
	  rlwinm    r3,r0,0,28,31
	  bl        -0x3788D0
	  stw       r3, 0x1C(r31)
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0
	  lwz       r3, 0x0(r31)
	  lwz       r4, 0x14(r31)
	  lwz       r0, 0x18(r3)
	  lwz       r5, 0x18(r31)
	  rlwinm    r3,r0,0,28,31
	  bl        -0x3CE230
	  stw       r3, 0x20(r31)
	  lis       r4, 0x4
	  lwz       r29, 0x8(r31)
	  mr        r3, r29
	  bl        -0x36075C
	  mr        r3, r29
	  bl        -0x36060C
	  lwz       r30, 0x0(r31)
	  lis       r4, 0x4
	  mr        r3, r30
	  bl        -0x360774
	  mr        r3, r30
	  bl        -0x360624
	  lwz       r30, 0x4(r31)
	  lis       r4, 0x4
	  mr        r3, r30
	  bl        -0x36078C
	  mr        r3, r30
	  bl        -0x36063C
	  lwz       r30, 0xC(r31)
	  lis       r4, 0x4
	  mr        r3, r30
	  bl        -0x3607A4
	  mr        r3, r30
	  bl        -0x360654
	  lwz       r30, 0x10(r31)
	  lis       r4, 0x4
	  mr        r3, r30
	  bl        -0x3607BC
	  mr        r3, r30
	  bl        -0x36066C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
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
 * Address:	........
 * Size:	000020
 */
void title::Pikmin::TAnimator::setAnmWait(J3DModel*, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void title::Pikmin::TAnimator::setAnmWave(J3DModel*, float, float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000218
 */
void title::Pikmin::TAnimator::newJ3DModel(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803E40C0
 * Size:	000198
 */
title::Pikmin::TMgr::TMgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804F
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  subi      r0, r4, 0x4AD8
	  lis       r4, 0x8049
	  stw       r31, 0xC(r1)
	  addi      r5, r4, 0x7330
	  mr        r31, r3
	  li        r4, 0x1
	  stw       r0, 0x0(r3)
	  lis       r3, 0x804E
	  addi      r0, r3, 0x787C
	  stw       r6, 0x10(r31)
	  addi      r3, r31, 0x1C
	  stw       r6, 0xC(r31)
	  stw       r6, 0x8(r31)
	  stw       r6, 0x4(r31)
	  stw       r5, 0x14(r31)
	  stw       r0, 0x0(r31)
	  bl        0x2DFC
	  lis       r3, 0x804F
	  lis       r4, 0x8049
	  subi      r0, r3, 0x4AD8
	  li        r9, 0
	  stw       r0, 0x2B0(r31)
	  lis       r5, 0x804E
	  addi      r0, r5, 0x786C
	  addi      r8, r4, 0x7178
	  stw       r9, 0x2C0(r31)
	  lis       r3, 0x803E
	  addi      r4, r3, 0x6BDC
	  li        r5, 0
	  stw       r9, 0x2BC(r31)
	  addi      r3, r31, 0x2D0
	  li        r6, 0x150
	  li        r7, 0x5
	  stw       r9, 0x2B8(r31)
	  stw       r9, 0x2B4(r31)
	  stw       r8, 0x2C4(r31)
	  stw       r0, 0x2B0(r31)
	  bl        -0x32292C
	  li        r0, 0
	  lfs       f1, 0x1900(r2)
	  stw       r0, 0x980(r31)
	  stw       r0, 0x984(r31)
	  stfs      f1, 0x960(r31)
	  stfs      f1, 0x964(r31)
	  stfs      f1, 0x968(r31)
	  stfs      f1, 0x96C(r31)
	  stfs      f1, 0x970(r31)
	  stfs      f1, 0x974(r31)
	  stfs      f1, 0x978(r31)
	  stfs      f1, 0x97C(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x32265C
	  stw       r3, 0x980(r31)
	  li        r0, 0
	  stw       r3, 0x984(r31)
	  li        r3, 0x24
	  stw       r0, 0x2CC(r31)
	  stw       r0, 0x2C8(r31)
	  bl        -0x3C0320
	  cmplwi    r3, 0
	  beq-      .loc_0x138
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0xC(r3)
	  stw       r0, 0x10(r3)
	  stw       r0, 0x14(r3)
	  stw       r0, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  stw       r0, 0x20(r3)

	.loc_0x138:
	  stw       r3, 0x18(r31)
	  lis       r3, 0x1
	  addi      r3, r3, 0x28F0
	  bl        -0x3C0258
	  lis       r4, 0x803E
	  lis       r5, 0x803E
	  addi      r4, r4, 0x6E14
	  li        r6, 0x98
	  addi      r5, r5, 0x4258
	  li        r7, 0x1F4
	  bl        -0x322830
	  stw       r3, 0x2AC(r31)
	  mr        r3, r31
	  lfs       f0, 0x1900(r2)
	  addi      r4, r31, 0x2B0
	  stfs      f0, 0x988(r31)
	  stfs      f0, 0x98C(r31)
	  bl        0x2D1CC
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
 * Address:	803E4258
 * Size:	000074
 */
title::Pikmin::TUnit::~TUnit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x5C
	  lis       r3, 0x804F
	  addic.    r0, r31, 0x4C
	  subi      r0, r3, 0x6204
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x38
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x4C(r31)

	.loc_0x38:
	  addic.    r0, r31, 0x38
	  beq-      .loc_0x4C
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x38(r31)

	.loc_0x4C:
	  extsh.    r0, r4
	  ble-      .loc_0x5C
	  mr        r3, r31
	  bl        -0x3C01FC

	.loc_0x5C:
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
 * Address:	803E42CC
 * Size:	0000D8
 */
void title::Pikmin::TMgr::setArchive(JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x430(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x434(r1)
	  addi      r5, r5, 0x7470
	  stw       r31, 0x42C(r1)
	  mr        r31, r4
	  stw       r30, 0x428(r1)
	  mr        r30, r3
	  addi      r3, r30, 0x1C
	  bl        -0x237FC
	  lwz       r3, 0x18(r30)
	  mr        r4, r31
	  bl        -0x518
	  lwz       r12, 0x0(r31)
	  lis       r4, 0x8049
	  mr        r3, r31
	  lwz       r12, 0x14(r12)
	  addi      r4, r4, 0x7488
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xC0
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  li        r5, -0x1
	  bl        0x315C4
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x14(r1)
	  bne-      .loc_0x84
	  li        r0, 0
	  stw       r0, 0x41C(r1)

	.loc_0x84:
	  addi      r3, r30, 0x2D0
	  addi      r4, r1, 0x8
	  bl        0x2F49C
	  addi      r3, r30, 0x420
	  addi      r4, r1, 0x8
	  bl        0x2F490
	  addi      r3, r30, 0x570
	  addi      r4, r1, 0x8
	  bl        0x2F484
	  addi      r3, r30, 0x6C0
	  addi      r4, r1, 0x8
	  bl        0x2F478
	  addi      r3, r30, 0x810
	  addi      r4, r1, 0x8
	  bl        0x2F46C

	.loc_0xC0:
	  lwz       r0, 0x434(r1)
	  lwz       r31, 0x42C(r1)
	  lwz       r30, 0x428(r1)
	  mtlr      r0
	  addi      r1, r1, 0x430
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E43A4
 * Size:	00011C
 */
void title::Pikmin::TMgr::initUnit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3

	.loc_0x24:
	  lwz       r0, 0x2AC(r29)
	  mr        r4, r29
	  li        r5, 0
	  add       r3, r0, r31
	  bl        0xEC4
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x98
	  cmpwi     r30, 0x64
	  blt+      .loc_0x24
	  li        r30, 0x64
	  li        r31, 0x3B60

	.loc_0x50:
	  lwz       r0, 0x2AC(r29)
	  mr        r4, r29
	  li        r5, 0x1
	  add       r3, r0, r31
	  bl        0xE98
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x98
	  cmpwi     r30, 0xC8
	  blt+      .loc_0x50
	  li        r30, 0xC8
	  li        r31, 0x76C0

	.loc_0x7C:
	  lwz       r0, 0x2AC(r29)
	  mr        r4, r29
	  li        r5, 0x2
	  add       r3, r0, r31
	  bl        0xE6C
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x98
	  cmpwi     r30, 0x12C
	  blt+      .loc_0x7C
	  lis       r3, 0x1
	  li        r30, 0x12C
	  subi      r31, r3, 0x4DE0

	.loc_0xAC:
	  lwz       r0, 0x2AC(r29)
	  mr        r4, r29
	  li        r5, 0x3
	  add       r3, r0, r31
	  bl        0xE3C
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x98
	  cmpwi     r30, 0x190
	  blt+      .loc_0xAC
	  lis       r3, 0x1
	  li        r30, 0x190
	  subi      r31, r3, 0x1280

	.loc_0xDC:
	  lwz       r0, 0x2AC(r29)
	  mr        r4, r29
	  li        r5, 0x4
	  add       r3, r0, r31
	  bl        0xE0C
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x98
	  cmpwi     r30, 0x1F4
	  blt+      .loc_0xDC
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
 * Address:	803E44C0
 * Size:	0001A8
 */
void title::Pikmin::TMgr::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  lwz       r3, 0x980(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  subi      r0, r3, 0x1
	  stw       r0, 0x980(r31)

	.loc_0x30:
	  lwz       r3, 0x2CC(r31)
	  lwz       r0, 0x2C8(r31)
	  lwz       r6, 0x984(r31)
	  mulli     r3, r3, 0x150
	  cmplwi    r6, 0
	  mulli     r0, r0, 0x150
	  add       r5, r31, r3
	  add       r4, r31, r0
	  beq-      .loc_0x88
	  lwz       r3, 0x980(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lfd       f2, 0x1938(r2)
	  stw       r3, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  stw       r6, 0x14(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fdivs     f0, f1, f0
	  b         .loc_0x8C

	.loc_0x88:
	  lfs       f0, 0x1900(r2)

	.loc_0x8C:
	  lfs       f1, 0x1930(r2)
	  mr        r3, r31
	  lfs       f2, 0x344(r4)
	  fsubs     f0, f1, f0
	  lfs       f3, 0x344(r5)
	  fsubs     f1, f1, f0
	  fmuls     f2, f0, f2
	  fmadds    f2, f1, f3, f2
	  stfs      f2, 0x960(r31)
	  lfs       f2, 0x31C(r4)
	  lfs       f3, 0x31C(r5)
	  fmuls     f2, f0, f2
	  fmadds    f2, f1, f3, f2
	  stfs      f2, 0x964(r31)
	  lfs       f2, 0x2F4(r4)
	  lfs       f3, 0x2F4(r5)
	  fmuls     f2, f0, f2
	  fmadds    f2, f1, f3, f2
	  stfs      f2, 0x968(r31)
	  lfs       f2, 0x3BC(r4)
	  lfs       f3, 0x3BC(r5)
	  fmuls     f2, f0, f2
	  fmadds    f2, f1, f3, f2
	  stfs      f2, 0x96C(r31)
	  lfs       f2, 0x394(r4)
	  lfs       f3, 0x394(r5)
	  fmuls     f2, f0, f2
	  fmadds    f2, f1, f3, f2
	  stfs      f2, 0x970(r31)
	  lfs       f2, 0x36C(r4)
	  lfs       f3, 0x36C(r5)
	  fmuls     f2, f0, f2
	  fmadds    f2, f1, f3, f2
	  stfs      f2, 0x974(r31)
	  lfs       f2, 0x40C(r4)
	  lfs       f3, 0x40C(r5)
	  fmuls     f2, f0, f2
	  fmadds    f2, f1, f3, f2
	  stfs      f2, 0x978(r31)
	  lfs       f2, 0x3E4(r4)
	  lfs       f3, 0x3E4(r5)
	  fmuls     f0, f0, f2
	  fmadds    f0, f1, f3, f0
	  stfs      f0, 0x97C(r31)
	  bl        0x868
	  li        r29, 0
	  li        r30, 0

	.loc_0x148:
	  lwz       r0, 0x2AC(r31)
	  add       r3, r0, r30
	  bl        0x12A8
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x98
	  cmpwi     r29, 0x1F4
	  blt+      .loc_0x148
	  li        r29, 0
	  li        r30, 0

	.loc_0x16C:
	  lwz       r0, 0x2AC(r31)
	  lwz       r3, -0x65D8(r13)
	  add       r4, r0, r30
	  bl        -0x2580C
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x98
	  cmpwi     r29, 0x1F4
	  blt+      .loc_0x16C
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

} // namespace ebi

/*
 * --INFO--
 * Address:	803E4668
 * Size:	000164
 */
void setStartPos__Q43ebi5title6Pikmin4TMgrFP10Vector2<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  li        r0, 0x3E
	  mr        r7, r4
	  li        r6, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  mtctr     r0

	.loc_0x24:
	  lwz       r0, 0x2AC(r3)
	  addi      r30, r6, 0x98
	  lfs       f0, 0x0(r7)
	  addi      r31, r6, 0x130
	  add       r5, r0, r6
	  addi      r12, r6, 0x1C8
	  stfs      f0, 0x4(r5)
	  addi      r11, r6, 0x260
	  addi      r10, r6, 0x2F8
	  addi      r9, r6, 0x390
	  lfs       f0, 0x4(r7)
	  addi      r8, r6, 0x428
	  addi      r6, r6, 0x4C0
	  addi      r29, r29, 0x8
	  stfs      f0, 0x8(r5)
	  lwz       r0, 0x2AC(r3)
	  lfs       f0, 0x8(r7)
	  add       r30, r0, r30
	  stfs      f0, 0x4(r30)
	  lfs       f0, 0xC(r7)
	  stfs      f0, 0x8(r30)
	  lwz       r0, 0x2AC(r3)
	  lfs       f0, 0x10(r7)
	  add       r31, r0, r31
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x14(r7)
	  stfs      f0, 0x8(r31)
	  lwz       r0, 0x2AC(r3)
	  lfs       f0, 0x18(r7)
	  add       r12, r0, r12
	  stfs      f0, 0x4(r12)
	  lfs       f0, 0x1C(r7)
	  stfs      f0, 0x8(r12)
	  lwz       r0, 0x2AC(r3)
	  lfs       f0, 0x20(r7)
	  add       r11, r0, r11
	  stfs      f0, 0x4(r11)
	  lfs       f0, 0x24(r7)
	  stfs      f0, 0x8(r11)
	  lwz       r0, 0x2AC(r3)
	  lfs       f0, 0x28(r7)
	  add       r10, r0, r10
	  stfs      f0, 0x4(r10)
	  lfs       f0, 0x2C(r7)
	  stfs      f0, 0x8(r10)
	  lwz       r0, 0x2AC(r3)
	  lfs       f0, 0x30(r7)
	  add       r9, r0, r9
	  stfs      f0, 0x4(r9)
	  lfs       f0, 0x34(r7)
	  stfs      f0, 0x8(r9)
	  lwz       r0, 0x2AC(r3)
	  lfs       f0, 0x38(r7)
	  add       r8, r0, r8
	  stfs      f0, 0x4(r8)
	  lfs       f0, 0x3C(r7)
	  addi      r7, r7, 0x40
	  stfs      f0, 0x8(r8)
	  bdnz+     .loc_0x24
	  rlwinm    r5,r29,3,0,28
	  subfic    r0, r29, 0x1F4
	  mulli     r6, r29, 0x98
	  add       r4, r4, r5
	  mtctr     r0
	  cmpwi     r29, 0x1F4
	  bge-      .loc_0x150

	.loc_0x12C:
	  lwz       r0, 0x2AC(r3)
	  lfs       f0, 0x0(r4)
	  add       r5, r0, r6
	  addi      r6, r6, 0x98
	  stfs      f0, 0x4(r5)
	  lfs       f0, 0x4(r4)
	  addi      r4, r4, 0x8
	  stfs      f0, 0x8(r5)
	  bdnz+     .loc_0x12C

	.loc_0x150:
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E47CC
 * Size:	000164
 */
void setDestPos__Q43ebi5title6Pikmin4TMgrFP10Vector2<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  li        r0, 0x3E
	  mr        r7, r4
	  li        r6, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  mtctr     r0

	.loc_0x24:
	  lwz       r0, 0x2AC(r3)
	  addi      r30, r6, 0x98
	  lfs       f0, 0x0(r7)
	  addi      r31, r6, 0x130
	  add       r5, r0, r6
	  addi      r12, r6, 0x1C8
	  stfs      f0, 0x2C(r5)
	  addi      r11, r6, 0x260
	  addi      r10, r6, 0x2F8
	  addi      r9, r6, 0x390
	  lfs       f0, 0x4(r7)
	  addi      r8, r6, 0x428
	  addi      r6, r6, 0x4C0
	  addi      r29, r29, 0x8
	  stfs      f0, 0x30(r5)
	  lwz       r0, 0x2AC(r3)
	  lfs       f0, 0x8(r7)
	  add       r30, r0, r30
	  stfs      f0, 0x2C(r30)
	  lfs       f0, 0xC(r7)
	  stfs      f0, 0x30(r30)
	  lwz       r0, 0x2AC(r3)
	  lfs       f0, 0x10(r7)
	  add       r31, r0, r31
	  stfs      f0, 0x2C(r31)
	  lfs       f0, 0x14(r7)
	  stfs      f0, 0x30(r31)
	  lwz       r0, 0x2AC(r3)
	  lfs       f0, 0x18(r7)
	  add       r12, r0, r12
	  stfs      f0, 0x2C(r12)
	  lfs       f0, 0x1C(r7)
	  stfs      f0, 0x30(r12)
	  lwz       r0, 0x2AC(r3)
	  lfs       f0, 0x20(r7)
	  add       r11, r0, r11
	  stfs      f0, 0x2C(r11)
	  lfs       f0, 0x24(r7)
	  stfs      f0, 0x30(r11)
	  lwz       r0, 0x2AC(r3)
	  lfs       f0, 0x28(r7)
	  add       r10, r0, r10
	  stfs      f0, 0x2C(r10)
	  lfs       f0, 0x2C(r7)
	  stfs      f0, 0x30(r10)
	  lwz       r0, 0x2AC(r3)
	  lfs       f0, 0x30(r7)
	  add       r9, r0, r9
	  stfs      f0, 0x2C(r9)
	  lfs       f0, 0x34(r7)
	  stfs      f0, 0x30(r9)
	  lwz       r0, 0x2AC(r3)
	  lfs       f0, 0x38(r7)
	  add       r8, r0, r8
	  stfs      f0, 0x2C(r8)
	  lfs       f0, 0x3C(r7)
	  addi      r7, r7, 0x40
	  stfs      f0, 0x30(r8)
	  bdnz+     .loc_0x24
	  rlwinm    r5,r29,3,0,28
	  subfic    r0, r29, 0x1F4
	  mulli     r6, r29, 0x98
	  add       r4, r4, r5
	  mtctr     r0
	  cmpwi     r29, 0x1F4
	  bge-      .loc_0x150

	.loc_0x12C:
	  lwz       r0, 0x2AC(r3)
	  lfs       f0, 0x0(r4)
	  add       r5, r0, r6
	  addi      r6, r6, 0x98
	  stfs      f0, 0x2C(r5)
	  lfs       f0, 0x4(r4)
	  addi      r4, r4, 0x8
	  stfs      f0, 0x30(r5)
	  bdnz+     .loc_0x12C

	.loc_0x150:
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  blr
	*/
}

namespace ebi {

/*
 * --INFO--
 * Address:	803E4930
 * Size:	0000C0
 */
void title::Pikmin::TMgr::forceArriveDest(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3

	.loc_0x24:
	  lwz       r0, 0x2AC(r29)
	  add       r3, r0, r31
	  bl        0xDA4
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x98
	  cmpwi     r30, 0x1F4
	  blt+      .loc_0x24
	  lwz       r3, 0x2C8(r29)
	  li        r0, 0
	  lfs       f1, 0x1900(r2)
	  stw       r3, 0x2CC(r29)
	  stw       r0, 0x2C8(r29)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x322E44
	  stw       r3, 0x980(r29)
	  li        r30, 0
	  li        r31, 0
	  stw       r3, 0x984(r29)

	.loc_0x74:
	  lwz       r0, 0x2AC(r29)
	  li        r4, 0x1
	  add       r3, r0, r31
	  lfs       f0, 0x2C(r3)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x30(r3)
	  stfs      f0, 0x8(r3)
	  bl        0xDA8
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x98
	  cmpwi     r30, 0x1F4
	  blt+      .loc_0x74
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
 * Address:	803E49F0
 * Size:	000088
 */
void title::Pikmin::TMgr::assemble(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f1, 0x1910(r2)
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x2C8(r3)
	  stw       r3, 0x2CC(r29)
	  stw       r0, 0x2C8(r29)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x322EE0
	  stw       r3, 0x980(r29)
	  li        r30, 0
	  li        r31, 0
	  stw       r3, 0x984(r29)

	.loc_0x50:
	  lwz       r0, 0x2AC(r29)
	  add       r3, r0, r31
	  bl        0xBB4
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x98
	  cmpwi     r30, 0x1F4
	  blt+      .loc_0x50
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
 * Address:	803E4A78
 * Size:	000088
 */
void title::Pikmin::TMgr::quickAssemble(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f1, 0x1930(r2)
	  stw       r0, 0x24(r1)
	  li        r0, 0x1
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x2C8(r3)
	  stw       r3, 0x2CC(r29)
	  stw       r0, 0x2C8(r29)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x322F68
	  stw       r3, 0x980(r29)
	  li        r30, 0
	  li        r31, 0
	  stw       r3, 0x984(r29)

	.loc_0x50:
	  lwz       r0, 0x2AC(r29)
	  add       r3, r0, r31
	  bl        0xB2C
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x98
	  cmpwi     r30, 0x1F4
	  blt+      .loc_0x50
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
 * Address:	803E4B00
 * Size:	000090
 */
void title::Pikmin::TMgr::startBoid1(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, 0x1960(r2)
	  stw       r0, 0x24(r1)
	  li        r0, 0x2
	  fmuls     f1, f1, f0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x2C8(r3)
	  stw       r3, 0x2CC(r29)
	  stw       r0, 0x2C8(r29)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x322FF4
	  stw       r3, 0x980(r29)
	  li        r30, 0
	  li        r31, 0
	  stw       r3, 0x984(r29)

	.loc_0x54:
	  lwz       r0, 0x2AC(r29)
	  li        r4, 0x4
	  add       r3, r0, r31
	  bl        0xC08
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x98
	  cmpwi     r30, 0x1F4
	  blt+      .loc_0x54
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
 * Address:	803E4B90
 * Size:	000090
 */
void title::Pikmin::TMgr::startBoid2(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, 0x1960(r2)
	  stw       r0, 0x24(r1)
	  li        r0, 0x3
	  fmuls     f1, f1, f0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x2C8(r3)
	  stw       r3, 0x2CC(r29)
	  stw       r0, 0x2C8(r29)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x323084
	  stw       r3, 0x980(r29)
	  li        r30, 0
	  li        r31, 0
	  stw       r3, 0x984(r29)

	.loc_0x54:
	  lwz       r0, 0x2AC(r29)
	  li        r4, 0x4
	  add       r3, r0, r31
	  bl        0xB78
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x98
	  cmpwi     r30, 0x1F4
	  blt+      .loc_0x54
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
 * Address:	803E4C20
 * Size:	000090
 */
void title::Pikmin::TMgr::startBoid3(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, 0x1960(r2)
	  stw       r0, 0x24(r1)
	  li        r0, 0x4
	  fmuls     f1, f1, f0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x2C8(r3)
	  stw       r3, 0x2CC(r29)
	  stw       r0, 0x2C8(r29)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x323114
	  stw       r3, 0x980(r29)
	  li        r30, 0
	  li        r31, 0
	  stw       r3, 0x984(r29)

	.loc_0x54:
	  lwz       r0, 0x2AC(r29)
	  li        r4, 0x4
	  add       r3, r0, r31
	  bl        0xAE8
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x98
	  cmpwi     r30, 0x1F4
	  blt+      .loc_0x54
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
 * Address:	803E4CB0
 * Size:	00009C
 */
void title::Pikmin::TMgr::startWindBlow(ebi::EGEBox2f&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r27, r3
	  mr        r28, r4
	  li        r30, 0
	  li        r31, 0

	.loc_0x20:
	  lwz       r0, 0x2AC(r27)
	  add       r29, r0, r31
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x78
	  lfs       f1, 0x8(r29)
	  mr        r3, r28
	  lfs       f0, 0x4(r29)
	  addi      r4, r1, 0x8
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  bl        -0x1AD18
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x78
	  lwz       r0, 0x2AC(r27)
	  li        r4, 0x3
	  add       r3, r0, r31
	  bl        0xA44

	.loc_0x78:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x98
	  cmpwi     r30, 0x1F4
	  blt+      .loc_0x20
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E4D4C
 * Size:	0000AC
 */
void title::Pikmin::TMgr::startDemo(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3

	.loc_0x24:
	  lwz       r0, 0x2AC(r29)
	  add       r3, r0, r31
	  bl        0x988
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x98
	  cmpwi     r30, 0x1F4
	  blt+      .loc_0x24
	  lwz       r3, 0x2C8(r29)
	  li        r0, 0x1
	  lfs       f1, 0x1930(r2)
	  stw       r3, 0x2CC(r29)
	  stw       r0, 0x2C8(r29)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x323260
	  stw       r3, 0x980(r29)
	  li        r31, 0
	  mr        r30, r31
	  stw       r3, 0x984(r29)

	.loc_0x74:
	  lwz       r0, 0x2AC(r29)
	  add       r3, r0, r30
	  bl        0x834
	  addi      r31, r31, 0x1
	  addi      r30, r30, 0x98
	  cmpwi     r31, 0x1F4
	  blt+      .loc_0x74
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
 * Address:	803E4DF8
 * Size:	00006C
 */
void title::Pikmin::TMgr::enemyPushOut(ebi::title::TObjBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3

	.loc_0x2C:
	  lwz       r0, 0x2AC(r28)
	  mr        r3, r29
	  add       r4, r0, r31
	  bl        -0x24200
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x98
	  cmpwi     r30, 0x1F4
	  blt+      .loc_0x2C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
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
 * Address:	803E4E64
 * Size:	0003B8
 */
void title::Pikmin::TMgr::updateCalcBoid_(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stfd      f29, 0x70(r1)
	  psq_st    f29,0x78(r1),0,0
	  stfd      f28, 0x60(r1)
	  psq_st    f28,0x68(r1),0,0
	  stfd      f27, 0x50(r1)
	  psq_st    f27,0x58(r1),0,0
	  stfd      f26, 0x40(r1)
	  psq_st    f26,0x48(r1),0,0
	  stmw      r23, 0x1C(r1)
	  lbz       r0, -0x658C(r13)
	  mr        r31, r3
	  extsb.    r0, r0
	  bne-      .loc_0x60
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, -0x6590(r13)
	  stb       r0, -0x658C(r13)

	.loc_0x60:
	  lwz       r3, -0x6590(r13)
	  addi      r0, r3, 0x1
	  cmpwi     r0, 0xA
	  stw       r0, -0x6590(r13)
	  blt-      .loc_0x130
	  li        r30, 0
	  lfs       f0, 0x1900(r2)
	  stw       r30, -0x6590(r13)
	  li        r29, 0
	  li        r28, 0
	  stfs      f0, 0x988(r31)
	  stfs      f0, 0x98C(r31)

	.loc_0x90:
	  lwz       r0, 0x2AC(r31)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xDC
	  lwz       r0, 0x2AC(r31)
	  addi      r29, r29, 0x1
	  lfs       f1, 0x988(r31)
	  add       r3, r0, r30
	  lfs       f3, 0x98C(r31)
	  lfs       f0, 0x4(r3)
	  lfs       f2, 0x8(r3)
	  fadds     f0, f1, f0
	  fadds     f1, f3, f2
	  stfs      f0, 0x988(r31)
	  stfs      f1, 0x98C(r31)

	.loc_0xDC:
	  addi      r28, r28, 0x1
	  addi      r30, r30, 0x98
	  cmpwi     r28, 0x1F4
	  blt+      .loc_0x90
	  cmpwi     r29, 0
	  beq-      .loc_0x130
	  xoris     r3, r29, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f2, 0x1978(r2)
	  stw       r0, 0x8(r1)
	  lfs       f3, 0x1930(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f0, 0x988(r31)
	  fsubs     f1, f1, f2
	  fdivs     f1, f3, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x988(r31)
	  lfs       f0, 0x98C(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x98C(r31)

	.loc_0x130:
	  lwz       r5, -0x6590(r13)
	  lis       r3, 0x6666
	  addi      r4, r3, 0x6667
	  mulli     r0, r5, 0x1F4
	  cmpwi     r5, 0x9
	  mulhw     r0, r4, r0
	  srawi     r0, r0, 0x2
	  rlwinm    r3,r0,1,31,31
	  add       r6, r0, r3
	  bne-      .loc_0x160
	  li        r28, 0x1F4
	  b         .loc_0x178

	.loc_0x160:
	  addi      r0, r5, 0x1
	  mulli     r0, r0, 0x1F4
	  mulhw     r0, r4, r0
	  srawi     r0, r0, 0x2
	  rlwinm    r3,r0,1,31,31
	  add       r28, r0, r3

	.loc_0x178:
	  mulli     r29, r6, 0x98
	  mr        r27, r6
	  b         .loc_0x36C

	.loc_0x184:
	  lwz       r0, 0x2AC(r31)
	  add       r26, r0, r29
	  mr        r3, r26
	  bl        0x750
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x364
	  lfs       f4, 0x978(r31)
	  li        r25, 0
	  lfs       f1, 0x1930(r2)
	  li        r24, 0
	  lfs       f29, 0x1900(r2)
	  li        r30, 0
	  lfs       f0, 0x98C(r31)
	  fsubs     f5, f1, f4
	  lfs       f2, 0x30(r26)
	  fmr       f28, f29
	  lfs       f1, 0x988(r31)
	  fmuls     f3, f0, f4
	  lfs       f0, 0x2C(r26)
	  fmuls     f2, f2, f5
	  fmuls     f1, f1, f4
	  fmuls     f0, f0, f5
	  fmr       f27, f29
	  fmr       f26, f29
	  fadds     f31, f3, f2
	  fadds     f30, f1, f0

	.loc_0x1EC:
	  lwz       r0, 0x2AC(r31)
	  add       r23, r0, r30
	  mr        r3, r23
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2EC
	  lfs       f2, 0x8(r26)
	  lfs       f0, 0x8(r23)
	  lfs       f1, 0x4(r26)
	  fsubs     f6, f2, f0
	  lfs       f0, 0x4(r23)
	  lfs       f3, 0x1900(r2)
	  fsubs     f5, f1, f0
	  fmuls     f7, f6, f6
	  fmadds    f8, f5, f5, f7
	  fcmpo     cr0, f8, f3
	  ble-      .loc_0x250
	  ble-      .loc_0x24C
	  fsqrte    f0, f8
	  fmuls     f3, f0, f8
	  b         .loc_0x250

	.loc_0x24C:
	  fmr       f3, f8

	.loc_0x250:
	  lfs       f0, 0x97C(r31)
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x2EC
	  lfs       f4, 0x14(r23)
	  lfs       f0, 0xC(r23)
	  lfs       f1, 0x10(r23)
	  fmuls     f2, f0, f4
	  lfs       f0, 0x1930(r2)
	  fmuls     f1, f1, f4
	  fcmpo     cr0, f3, f0
	  fadds     f29, f29, f2
	  fadds     f28, f28, f1
	  bge-      .loc_0x288
	  fmr       f3, f0

	.loc_0x288:
	  lfs       f0, 0x1900(r2)
	  fcmpo     cr0, f8, f0
	  ble-      .loc_0x2AC
	  fmadds    f1, f5, f5, f7
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x2B0
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x2B0

	.loc_0x2AC:
	  fmr       f1, f0

	.loc_0x2B0:
	  lfs       f0, 0x1900(r2)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x2CC
	  lfs       f0, 0x1930(r2)
	  fdivs     f0, f0, f1
	  fmuls     f5, f5, f0
	  fmuls     f6, f6, f0

	.loc_0x2CC:
	  fmuls     f0, f3, f3
	  lfs       f1, 0x1930(r2)
	  addi      r25, r25, 0x1
	  fdivs     f0, f1, f0
	  fmuls     f1, f6, f0
	  fmuls     f0, f5, f0
	  fadds     f26, f26, f1
	  fadds     f27, f27, f0

	.loc_0x2EC:
	  addi      r24, r24, 0x1
	  addi      r30, r30, 0x98
	  cmpwi     r24, 0x1F4
	  blt+      .loc_0x1EC
	  cmpwi     r25, 0
	  bne-      .loc_0x318
	  lfs       f2, 0x1900(r2)
	  fmr       f3, f2
	  fmr       f1, f2
	  fmr       f0, f2
	  b         .loc_0x34C

	.loc_0x318:
	  xoris     r3, r25, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f1, 0x1978(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x1930(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  fmuls     f3, f26, f0
	  fmuls     f2, f27, f0
	  fmuls     f1, f29, f0
	  fmuls     f0, f28, f0

	.loc_0x34C:
	  stfs      f30, 0x6C(r26)
	  stfs      f31, 0x70(r26)
	  stfs      f1, 0x74(r26)
	  stfs      f0, 0x78(r26)
	  stfs      f2, 0x7C(r26)
	  stfs      f3, 0x80(r26)

	.loc_0x364:
	  addi      r29, r29, 0x98
	  addi      r27, r27, 0x1

	.loc_0x36C:
	  cmpw      r27, r28
	  blt+      .loc_0x184
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  psq_l     f28,0x68(r1),0,0
	  lfd       f28, 0x60(r1)
	  psq_l     f27,0x58(r1),0,0
	  lfd       f27, 0x50(r1)
	  psq_l     f26,0x48(r1),0,0
	  lfd       f26, 0x40(r1)
	  lmw       r23, 0x1C(r1)
	  lwz       r0, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E521C
 * Size:	000070
 */
void title::Pikmin::TMgr::isAssemble(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3

	.loc_0x24:
	  lwz       r0, 0x2AC(r29)
	  add       r3, r0, r31
	  bl        0x4D8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x40
	  li        r3, 0
	  b         .loc_0x54

	.loc_0x40:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x98
	  cmpwi     r30, 0x1F4
	  blt+      .loc_0x24
	  li        r3, 0x1

	.loc_0x54:
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
 * Address:	803E528C
 * Size:	000010
 */
void title::Pikmin::TMgr::getUnit(long)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x98
	  lwz       r3, 0x2AC(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E529C
 * Size:	000360
 */
void title::Pikmin::TUnit::init(ebi::title::Pikmin::TMgr*, long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stfd      f30, 0x30(r1)
	  psq_st    f30,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r3
	  mr        r29, r5
	  stw       r4, 0x34(r3)
	  lwz       r3, 0x34(r3)
	  lfs       f30, 0x1A8(r3)
	  lfs       f31, 0x1D0(r3)
	  bl        -0x31BD3C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  fsubs     f0, f30, f31
	  lfd       f3, 0x1978(r2)
	  cmpwi     r29, 0
	  stw       r0, 0x8(r1)
	  li        r0, 0
	  lfs       f1, 0x1980(r2)
	  lfd       f2, 0x8(r1)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmadds    f0, f0, f1, f31
	  stfs      f0, 0x60(r30)
	  lwz       r3, 0x34(r30)
	  lwz       r31, 0x18(r3)
	  blt-      .loc_0x94
	  cmpwi     r29, 0x5
	  bge-      .loc_0x94
	  li        r0, 0x1

	.loc_0x94:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0xB8
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x7278
	  li        r4, 0x124
	  addi      r5, r5, 0x7290
	  crclr     6, 0x6
	  bl        -0x3BAD10

	.loc_0xB8:
	  cmpwi     r29, 0x2
	  beq-      .loc_0x12C
	  bge-      .loc_0xD4
	  cmpwi     r29, 0
	  beq-      .loc_0x174
	  bge-      .loc_0xE4
	  b         .loc_0x24C

	.loc_0xD4:
	  cmpwi     r29, 0x4
	  beq-      .loc_0x204
	  bge-      .loc_0x24C
	  b         .loc_0x1BC

	.loc_0xE4:
	  li        r3, 0xDC
	  bl        -0x3C14E0
	  mr.       r29, r3
	  beq-      .loc_0x250
	  lis       r3, 0x804A
	  lwz       r31, 0x0(r31)
	  addi      r0, r3, 0x19F0
	  stw       r0, 0x0(r29)
	  addi      r3, r29, 0x88
	  bl        -0x38675C
	  mr        r3, r29
	  bl        -0x37F0B0
	  mr        r3, r29
	  mr        r4, r31
	  lis       r5, 0x2
	  li        r6, 0x1
	  bl        -0x37F040
	  b         .loc_0x250

	.loc_0x12C:
	  li        r3, 0xDC
	  bl        -0x3C1528
	  mr.       r29, r3
	  beq-      .loc_0x250
	  lis       r3, 0x804A
	  lwz       r31, 0x4(r31)
	  addi      r0, r3, 0x19F0
	  stw       r0, 0x0(r29)
	  addi      r3, r29, 0x88
	  bl        -0x3867A4
	  mr        r3, r29
	  bl        -0x37F0F8
	  mr        r3, r29
	  mr        r4, r31
	  lis       r5, 0x2
	  li        r6, 0x1
	  bl        -0x37F088
	  b         .loc_0x250

	.loc_0x174:
	  li        r3, 0xDC
	  bl        -0x3C1570
	  mr.       r29, r3
	  beq-      .loc_0x250
	  lis       r3, 0x804A
	  lwz       r31, 0x8(r31)
	  addi      r0, r3, 0x19F0
	  stw       r0, 0x0(r29)
	  addi      r3, r29, 0x88
	  bl        -0x3867EC
	  mr        r3, r29
	  bl        -0x37F140
	  mr        r3, r29
	  mr        r4, r31
	  lis       r5, 0x2
	  li        r6, 0x1
	  bl        -0x37F0D0
	  b         .loc_0x250

	.loc_0x1BC:
	  li        r3, 0xDC
	  bl        -0x3C15B8
	  mr.       r29, r3
	  beq-      .loc_0x250
	  lis       r3, 0x804A
	  lwz       r31, 0xC(r31)
	  addi      r0, r3, 0x19F0
	  stw       r0, 0x0(r29)
	  addi      r3, r29, 0x88
	  bl        -0x386834
	  mr        r3, r29
	  bl        -0x37F188
	  mr        r3, r29
	  mr        r4, r31
	  lis       r5, 0x2
	  li        r6, 0x1
	  bl        -0x37F118
	  b         .loc_0x250

	.loc_0x204:
	  li        r3, 0xDC
	  bl        -0x3C1600
	  mr.       r29, r3
	  beq-      .loc_0x250
	  lis       r3, 0x804A
	  lwz       r31, 0x10(r31)
	  addi      r0, r3, 0x19F0
	  stw       r0, 0x0(r29)
	  addi      r3, r29, 0x88
	  bl        -0x38687C
	  mr        r3, r29
	  bl        -0x37F1D0
	  mr        r3, r29
	  mr        r4, r31
	  lis       r5, 0x2
	  li        r6, 0x1
	  bl        -0x37F160
	  b         .loc_0x250

	.loc_0x24C:
	  li        r29, 0

	.loc_0x250:
	  stw       r29, 0x28(r30)
	  addi      r3, r30, 0x38
	  lwz       r4, 0x34(r30)
	  lwz       r4, 0x18(r4)
	  lwz       r4, 0x14(r4)
	  lha       r4, 0x6(r4)
	  bl        -0x37DE8C
	  lwz       r4, 0x34(r30)
	  addi      r3, r30, 0x4C
	  lwz       r4, 0x18(r4)
	  lwz       r4, 0x18(r4)
	  lha       r4, 0x6(r4)
	  bl        -0x37DEA4
	  lwz       r3, -0x6514(r13)
	  lwz       r0, 0xD4(r3)
	  cmpwi     r0, 0x5
	  beq-      .loc_0x298
	  b         .loc_0x2A8

	.loc_0x298:
	  lwz       r3, 0x34(r30)
	  lfs       f0, 0x68(r3)
	  stfs      f0, 0x18(r30)
	  b         .loc_0x2B4

	.loc_0x2A8:
	  lwz       r3, 0x34(r30)
	  lfs       f0, 0x40(r3)
	  stfs      f0, 0x18(r30)

	.loc_0x2B4:
	  lwz       r3, 0x34(r30)
	  lfs       f0, 0x90(r3)
	  stfs      f0, 0x1C(r30)
	  bl        -0x31BFBC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, 0x1978(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, 0x1980(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, 0x1954(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x48(r30)
	  bl        -0x31BFF0
	  xoris     r0, r3, 0x8000
	  lis       r3, 0x4330
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  lfd       f3, 0x1978(r2)
	  stw       r3, 0x10(r1)
	  lfs       f2, 0x1980(r2)
	  lfd       f0, 0x10(r1)
	  lfs       f1, 0x1988(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0x1984(r2)
	  fdivs     f2, f3, f2
	  fmadds    f0, f1, f2, f0
	  stfs      f0, 0x64(r30)
	  stb       r0, 0x94(r30)
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E55FC
 * Size:	000098
 */
void title::Pikmin::TUnit::goDestination(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, 0x1900(r2)
	  stw       r0, 0x14(r1)
	  lfs       f3, 0x30(r3)
	  lfs       f1, 0x8(r3)
	  lfs       f2, 0x2C(r3)
	  fsubs     f3, f3, f1
	  lfs       f1, 0x4(r3)
	  fsubs     f1, f2, f1
	  fmuls     f2, f3, f3
	  fmadds    f1, f1, f1, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x48
	  ble-      .loc_0x4C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x4C

	.loc_0x48:
	  fmr       f1, f0

	.loc_0x4C:
	  lwz       r4, 0x34(r3)
	  lfs       f0, 0xB8(r4)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x68
	  li        r4, 0x1
	  bl        0x10C
	  b         .loc_0x88

	.loc_0x68:
	  lfs       f0, 0xE0(r4)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x80
	  li        r4, 0x2
	  bl        0xF4
	  b         .loc_0x88

	.loc_0x80:
	  li        r4, 0x2
	  bl        0xE8

	.loc_0x88:
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
void title::Pikmin::TUnit::chaseKogane(ebi::title::TObjBase*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803E5694
 * Size:	00006C
 */
void title::Pikmin::TUnit::beAttacked(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lbz       r0, 0x94(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x28
	  li        r3, 0
	  b         .loc_0x58

	.loc_0x28:
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0x94(r31)
	  addi      r3, r1, 0x8
	  stw       r0, 0x84(r31)
	  lwz       r4, -0x65D8(r13)
	  bl        -0x2665C
	  lfs       f0, 0x8(r1)
	  li        r3, 0x1
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x8(r31)

	.loc_0x58:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E5700
 * Size:	00000C
 */
void title::Pikmin::TUnit::alive(void)
{
	// Generated from stb r0, 0x94(r3)
	_94 = 0;
}

/*
 * --INFO--
 * Address:	803E570C
 * Size:	000014
 */
void title::Pikmin::TUnit::isCalc(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x84(r3)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E5720
 * Size:	000024
 */
void title::Pikmin::TUnit::isAssemble(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x84(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x14
	  cmpwi     r0, 0x1
	  bne-      .loc_0x1C

	.loc_0x14:
	  li        r3, 0x1
	  blr

	.loc_0x1C:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E5744
 * Size:	000024
 */
void title::Pikmin::TUnit::isWalk(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x84(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x14
	  cmpwi     r0, 0x4
	  bne-      .loc_0x1C

	.loc_0x14:
	  li        r3, 0x1
	  blr

	.loc_0x1C:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void title::Pikmin::TUnit::isBoid(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803E5768
 * Size:	000150
 */
void title::Pikmin::TUnit::startState(ebi::title::Pikmin::TUnit::enumState)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0x84(r3)
	  cmpw      r4, r3
	  beq-      .loc_0x13C
	  lbz       r0, 0x94(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x38
	  li        r0, 0
	  stw       r0, 0x84(r31)
	  b         .loc_0x40

	.loc_0x38:
	  stw       r3, 0x88(r31)
	  stw       r4, 0x84(r31)

	.loc_0x40:
	  lwz       r0, 0x84(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x13C
	  bge-      .loc_0x60
	  cmpwi     r0, 0
	  beq-      .loc_0x6C
	  bge-      .loc_0x110
	  b         .loc_0x13C

	.loc_0x60:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x13C
	  b         .loc_0x80

	.loc_0x6C:
	  lfs       f0, 0x2C(r31)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x30(r31)
	  stfs      f0, 0x8(r31)
	  b         .loc_0x13C

	.loc_0x80:
	  lfs       f1, 0x1930(r2)
	  lfs       f0, 0x1900(r2)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  lwz       r4, 0x34(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x270(r4)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x323CC0
	  stw       r3, 0x8C(r31)
	  stw       r3, 0x90(r31)
	  bl        -0x31C278
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f2, 0x1978(r2)
	  stw       r0, 0x8(r1)
	  lfs       f3, 0x1980(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f0, 0x1954(r2)
	  fsubs     f4, f1, f2
	  lfs       f1, 0x198C(r2)
	  lfs       f2, 0x1960(r2)
	  fdivs     f3, f4, f3
	  fmuls     f0, f0, f3
	  stfs      f0, 0x5C(r31)
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x34(r31)
	  lfs       f0, 0x54(r3)
	  lfs       f3, 0x180(r4)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x58(r31)
	  b         .loc_0x13C

	.loc_0x110:
	  lfs       f0, 0x1900(r2)
	  lfs       f1, 0x198C(r2)
	  stfs      f0, 0x14(r31)
	  lfs       f2, 0x1960(r2)
	  lwz       r3, -0x6514(r13)
	  lfs       f3, 0x60(r31)
	  lfs       f0, 0x54(r3)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x44(r31)

	.loc_0x13C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E58B8
 * Size:	000DD4
 */
void title::Pikmin::TUnit::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stfd      f29, 0x70(r1)
	  psq_st    f29,0x78(r1),0,0
	  stfd      f28, 0x60(r1)
	  psq_st    f28,0x68(r1),0,0
	  stfd      f27, 0x50(r1)
	  psq_st    f27,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  mr        r31, r3
	  lwz       r3, -0x65D8(r13)
	  mr        r4, r31
	  bl        -0x26914
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x19C
	  lwz       r3, -0x65D8(r13)
	  addi      r4, r31, 0x2C
	  lfs       f1, 0x1900(r2)
	  bl        -0x26970
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x19C
	  lwz       r3, 0x84(r31)
	  cmpwi     r3, 0
	  beq-      .loc_0x19C
	  lbz       r0, 0x94(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x94
	  li        r0, 0
	  stw       r0, 0x84(r31)
	  b         .loc_0xA0

	.loc_0x94:
	  stw       r3, 0x88(r31)
	  li        r0, 0
	  stw       r0, 0x84(r31)

	.loc_0xA0:
	  lwz       r0, 0x84(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x19C
	  bge-      .loc_0xC0
	  cmpwi     r0, 0
	  beq-      .loc_0xCC
	  bge-      .loc_0x170
	  b         .loc_0x19C

	.loc_0xC0:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x19C
	  b         .loc_0xE0

	.loc_0xCC:
	  lfs       f0, 0x2C(r31)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x30(r31)
	  stfs      f0, 0x8(r31)
	  b         .loc_0x19C

	.loc_0xE0:
	  lfs       f1, 0x1930(r2)
	  lfs       f0, 0x1900(r2)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  lwz       r4, 0x34(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x270(r4)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x323E70
	  stw       r3, 0x8C(r31)
	  stw       r3, 0x90(r31)
	  bl        -0x31C428
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2C(r1)
	  lfd       f2, 0x1978(r2)
	  stw       r0, 0x28(r1)
	  lfs       f3, 0x1980(r2)
	  lfd       f1, 0x28(r1)
	  lfs       f0, 0x1954(r2)
	  fsubs     f4, f1, f2
	  lfs       f1, 0x198C(r2)
	  lfs       f2, 0x1960(r2)
	  fdivs     f3, f4, f3
	  fmuls     f0, f0, f3
	  stfs      f0, 0x5C(r31)
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x34(r31)
	  lfs       f0, 0x54(r3)
	  lfs       f3, 0x180(r4)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x58(r31)
	  b         .loc_0x19C

	.loc_0x170:
	  lfs       f0, 0x1900(r2)
	  lfs       f1, 0x198C(r2)
	  stfs      f0, 0x14(r31)
	  lfs       f2, 0x1960(r2)
	  lwz       r3, -0x6514(r13)
	  lfs       f3, 0x60(r31)
	  lfs       f0, 0x54(r3)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x44(r31)

	.loc_0x19C:
	  lwz       r0, 0x84(r31)
	  lwz       r3, 0x34(r31)
	  cmpwi     r0, 0x3
	  lfs       f7, 0x96C(r3)
	  lfs       f9, 0x970(r3)
	  lfs       f31, 0x974(r3)
	  beq-      .loc_0x1DC
	  bge-      .loc_0x1CC
	  cmpwi     r0, 0x1
	  beq-      .loc_0x32C
	  bge-      .loc_0x3F0
	  b         .loc_0xB10

	.loc_0x1CC:
	  cmpwi     r0, 0x5
	  beq-      .loc_0x71C
	  bge-      .loc_0xB10
	  b         .loc_0xA90

	.loc_0x1DC:
	  lwz       r3, 0x8C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x1F0
	  subi      r0, r3, 0x1
	  stw       r0, 0x8C(r31)

	.loc_0x1F0:
	  lwz       r0, 0x8C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xB10
	  lwz       r3, 0x84(r31)
	  cmpwi     r3, 0x1
	  beq-      .loc_0xB10
	  lbz       r0, 0x94(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x220
	  li        r0, 0
	  stw       r0, 0x84(r31)
	  b         .loc_0x22C

	.loc_0x220:
	  stw       r3, 0x88(r31)
	  li        r0, 0x1
	  stw       r0, 0x84(r31)

	.loc_0x22C:
	  lwz       r0, 0x84(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xB10
	  bge-      .loc_0x24C
	  cmpwi     r0, 0
	  beq-      .loc_0x258
	  bge-      .loc_0x2FC
	  b         .loc_0xB10

	.loc_0x24C:
	  cmpwi     r0, 0x4
	  bge-      .loc_0xB10
	  b         .loc_0x26C

	.loc_0x258:
	  lfs       f0, 0x2C(r31)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x30(r31)
	  stfs      f0, 0x8(r31)
	  b         .loc_0xB10

	.loc_0x26C:
	  lfs       f1, 0x1930(r2)
	  lfs       f0, 0x1900(r2)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  lwz       r4, 0x34(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x270(r4)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x323FFC
	  stw       r3, 0x8C(r31)
	  stw       r3, 0x90(r31)
	  bl        -0x31C5B4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2C(r1)
	  lfd       f2, 0x1978(r2)
	  stw       r0, 0x28(r1)
	  lfs       f3, 0x1980(r2)
	  lfd       f1, 0x28(r1)
	  lfs       f0, 0x1954(r2)
	  fsubs     f4, f1, f2
	  lfs       f1, 0x198C(r2)
	  lfs       f2, 0x1960(r2)
	  fdivs     f3, f4, f3
	  fmuls     f0, f0, f3
	  stfs      f0, 0x5C(r31)
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x34(r31)
	  lfs       f0, 0x54(r3)
	  lfs       f3, 0x180(r4)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x58(r31)
	  b         .loc_0xB10

	.loc_0x2FC:
	  lfs       f0, 0x1900(r2)
	  lfs       f1, 0x198C(r2)
	  stfs      f0, 0x14(r31)
	  lfs       f2, 0x1960(r2)
	  lwz       r3, -0x6514(r13)
	  lfs       f3, 0x60(r31)
	  lfs       f0, 0x54(r3)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x44(r31)
	  b         .loc_0xB10

	.loc_0x32C:
	  lfs       f1, 0xC(r31)
	  lfs       f0, 0x1904(r2)
	  lfs       f2, 0x10(r31)
	  fadds     f0, f1, f0
	  lfs       f1, 0x1900(r2)
	  fadds     f2, f2, f1
	  stfs      f0, 0xC(r31)
	  stfs      f2, 0x10(r31)
	  lfs       f3, 0xC(r31)
	  lfs       f2, 0x10(r31)
	  fmuls     f0, f3, f3
	  fmuls     f2, f2, f2
	  fadds     f0, f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x380
	  fmadds    f2, f3, f3, f2
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x384
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x384

	.loc_0x380:
	  fmr       f2, f1

	.loc_0x384:
	  lfs       f0, 0x1900(r2)
	  fcmpu     cr0, f0, f2
	  beq-      .loc_0x3B0
	  lfs       f1, 0x1930(r2)
	  lfs       f0, 0xC(r31)
	  fdivs     f1, f1, f2
	  fmuls     f0, f0, f1
	  stfs      f0, 0xC(r31)
	  lfs       f0, 0x10(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x10(r31)

	.loc_0x3B0:
	  lfs       f0, 0x2C(r31)
	  mr        r3, r31
	  lfs       f5, 0x4(r31)
	  lfs       f1, 0x30(r31)
	  lfs       f4, 0x8(r31)
	  fsubs     f2, f0, f5
	  lfs       f0, 0x1990(r2)
	  fsubs     f3, f1, f4
	  fmuls     f1, f2, f0
	  fmuls     f0, f3, f0
	  fadds     f1, f5, f1
	  fadds     f0, f4, f0
	  stfs      f1, 0x4(r31)
	  stfs      f0, 0x8(r31)
	  bl        0xBEC
	  b         .loc_0xB10

	.loc_0x3F0:
	  lfs       f2, 0x30(r31)
	  lfs       f0, 0x8(r31)
	  lfs       f1, 0x2C(r31)
	  fsubs     f29, f2, f0
	  lfs       f0, 0x4(r31)
	  lfs       f31, 0x1900(r2)
	  fsubs     f30, f1, f0
	  fmuls     f28, f29, f29
	  fmadds    f27, f30, f30, f28
	  fcmpo     cr0, f27, f31
	  ble-      .loc_0x430
	  ble-      .loc_0x42C
	  fsqrte    f0, f27
	  fmuls     f31, f0, f27
	  b         .loc_0x430

	.loc_0x42C:
	  fmr       f31, f27

	.loc_0x430:
	  lfs       f0, 0xB8(r3)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x56C
	  cmpwi     r0, 0x1
	  beq-      .loc_0x6A4
	  lbz       r0, 0x94(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x45C
	  li        r0, 0
	  stw       r0, 0x84(r31)
	  b         .loc_0x46C

	.loc_0x45C:
	  lwz       r3, 0x84(r31)
	  li        r0, 0x1
	  stw       r3, 0x88(r31)
	  stw       r0, 0x84(r31)

	.loc_0x46C:
	  lwz       r0, 0x84(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x6A4
	  bge-      .loc_0x48C
	  cmpwi     r0, 0
	  beq-      .loc_0x498
	  bge-      .loc_0x53C
	  b         .loc_0x6A4

	.loc_0x48C:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x6A4
	  b         .loc_0x4AC

	.loc_0x498:
	  lfs       f0, 0x2C(r31)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x30(r31)
	  stfs      f0, 0x8(r31)
	  b         .loc_0x6A4

	.loc_0x4AC:
	  lfs       f1, 0x1930(r2)
	  lfs       f0, 0x1900(r2)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  lwz       r4, 0x34(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x270(r4)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x32423C
	  stw       r3, 0x8C(r31)
	  stw       r3, 0x90(r31)
	  bl        -0x31C7F4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2C(r1)
	  lfd       f2, 0x1978(r2)
	  stw       r0, 0x28(r1)
	  lfs       f3, 0x1980(r2)
	  lfd       f1, 0x28(r1)
	  lfs       f0, 0x1954(r2)
	  fsubs     f4, f1, f2
	  lfs       f1, 0x198C(r2)
	  lfs       f2, 0x1960(r2)
	  fdivs     f3, f4, f3
	  fmuls     f0, f0, f3
	  stfs      f0, 0x5C(r31)
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x34(r31)
	  lfs       f0, 0x54(r3)
	  lfs       f3, 0x180(r4)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x58(r31)
	  b         .loc_0x6A4

	.loc_0x53C:
	  lfs       f0, 0x1900(r2)
	  lfs       f1, 0x198C(r2)
	  stfs      f0, 0x14(r31)
	  lfs       f2, 0x1960(r2)
	  lwz       r3, -0x6514(r13)
	  lfs       f3, 0x60(r31)
	  lfs       f0, 0x54(r3)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x44(r31)
	  b         .loc_0x6A4

	.loc_0x56C:
	  lfs       f0, 0xE0(r3)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x6A4
	  cmpwi     r0, 0x2
	  beq-      .loc_0x6A4
	  lbz       r0, 0x94(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x598
	  li        r0, 0
	  stw       r0, 0x84(r31)
	  b         .loc_0x5A8

	.loc_0x598:
	  lwz       r3, 0x84(r31)
	  li        r0, 0x2
	  stw       r3, 0x88(r31)
	  stw       r0, 0x84(r31)

	.loc_0x5A8:
	  lwz       r0, 0x84(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x6A4
	  bge-      .loc_0x5C8
	  cmpwi     r0, 0
	  beq-      .loc_0x5D4
	  bge-      .loc_0x678
	  b         .loc_0x6A4

	.loc_0x5C8:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x6A4
	  b         .loc_0x5E8

	.loc_0x5D4:
	  lfs       f0, 0x2C(r31)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x30(r31)
	  stfs      f0, 0x8(r31)
	  b         .loc_0x6A4

	.loc_0x5E8:
	  lfs       f1, 0x1930(r2)
	  lfs       f0, 0x1900(r2)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  lwz       r4, 0x34(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x270(r4)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x324378
	  stw       r3, 0x8C(r31)
	  stw       r3, 0x90(r31)
	  bl        -0x31C930
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2C(r1)
	  lfd       f2, 0x1978(r2)
	  stw       r0, 0x28(r1)
	  lfs       f3, 0x1980(r2)
	  lfd       f1, 0x28(r1)
	  lfs       f0, 0x1954(r2)
	  fsubs     f4, f1, f2
	  lfs       f1, 0x198C(r2)
	  lfs       f2, 0x1960(r2)
	  fdivs     f3, f4, f3
	  fmuls     f0, f0, f3
	  stfs      f0, 0x5C(r31)
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x34(r31)
	  lfs       f0, 0x54(r3)
	  lfs       f3, 0x180(r4)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x58(r31)
	  b         .loc_0x6A4

	.loc_0x678:
	  lfs       f0, 0x1900(r2)
	  lfs       f1, 0x198C(r2)
	  stfs      f0, 0x14(r31)
	  lfs       f2, 0x1960(r2)
	  lwz       r3, -0x6514(r13)
	  lfs       f3, 0x60(r31)
	  lfs       f0, 0x54(r3)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x44(r31)

	.loc_0x6A4:
	  lwz       r3, 0x34(r31)
	  lfs       f0, 0x1900(r2)
	  lfs       f1, 0x298(r3)
	  fcmpo     cr0, f27, f0
	  fmuls     f2, f31, f1
	  ble-      .loc_0x6D4
	  fmadds    f1, f30, f30, f28
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x6D8
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x6D8

	.loc_0x6D4:
	  fmr       f1, f0

	.loc_0x6D8:
	  lfs       f0, 0x1900(r2)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x6F4
	  lfs       f0, 0x1930(r2)
	  fdivs     f0, f0, f1
	  fmuls     f30, f30, f0
	  fmuls     f29, f29, f0

	.loc_0x6F4:
	  fmuls     f1, f30, f2
	  mr        r3, r31
	  fmuls     f0, f29, f2
	  addi      r4, r1, 0x20
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  bl        .loc_0xDD4
	  mr        r3, r31
	  bl        0x8C0
	  b         .loc_0xB10

	.loc_0x71C:
	  lfs       f1, 0x30(r31)
	  lfs       f0, 0x8(r31)
	  lfs       f2, 0x2C(r31)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x4(r31)
	  lfs       f0, 0x1900(r2)
	  fsubs     f1, f2, f1
	  fmuls     f2, f3, f3
	  fmadds    f1, f1, f1, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x758
	  ble-      .loc_0x75C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x75C

	.loc_0x758:
	  fmr       f1, f0

	.loc_0x75C:
	  lfs       f0, 0x248(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x770
	  li        r0, 0
	  stw       r0, 0x68(r31)

	.loc_0x770:
	  lwz       r3, 0x68(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x960
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x954
	  lwz       r3, 0x68(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x5
	  beq-      .loc_0x7CC
	  bge-      .loc_0x7C0
	  cmpwi     r3, -0x1
	  beq-      .loc_0xB10
	  b         .loc_0xB10

	.loc_0x7C0:
	  cmpwi     r3, 0x7
	  bge-      .loc_0xB10
	  b         .loc_0x890

	.loc_0x7CC:
	  lwz       r3, 0x68(r31)
	  lfs       f0, 0x8(r31)
	  lfs       f1, 0x8(r3)
	  lfs       f2, 0x4(r3)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x4(r31)
	  lfs       f0, 0x1900(r2)
	  fsubs     f6, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f6, f6, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x80C
	  ble-      .loc_0x810
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x810

	.loc_0x80C:
	  fmr       f1, f0

	.loc_0x810:
	  lfs       f0, 0x1900(r2)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x82C
	  lfs       f0, 0x1930(r2)
	  fdivs     f0, f0, f1
	  fmuls     f6, f6, f0
	  fmuls     f3, f3, f0

	.loc_0x82C:
	  lwz       r5, 0x34(r31)
	  mr        r3, r31
	  lfs       f5, 0x14(r31)
	  addi      r4, r1, 0x18
	  lfs       f4, 0x1F8(r5)
	  lfs       f1, 0x10(r31)
	  lfs       f0, 0xC(r31)
	  fmuls     f2, f3, f4
	  fmuls     f3, f1, f5
	  fmuls     f1, f0, f5
	  fmuls     f0, f6, f4
	  fadds     f3, f3, f2
	  fadds     f2, f1, f0
	  stfs      f3, 0x1C(r1)
	  stfs      f2, 0x18(r1)
	  lfs       f1, 0x80(r31)
	  lfs       f0, 0x7C(r31)
	  fmuls     f1, f1, f31
	  fmuls     f0, f0, f31
	  fadds     f1, f3, f1
	  fadds     f0, f2, f0
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x18(r1)
	  bl        .loc_0xDD4
	  b         .loc_0xB10

	.loc_0x890:
	  lwz       r3, 0x68(r31)
	  lfs       f0, 0x8(r31)
	  lfs       f1, 0x8(r3)
	  lfs       f2, 0x4(r3)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x4(r31)
	  lfs       f0, 0x1900(r2)
	  fsubs     f6, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f6, f6, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x8D0
	  ble-      .loc_0x8D4
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x8D4

	.loc_0x8D0:
	  fmr       f1, f0

	.loc_0x8D4:
	  lfs       f0, 0x1900(r2)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x8F0
	  lfs       f0, 0x1930(r2)
	  fdivs     f0, f0, f1
	  fmuls     f6, f6, f0
	  fmuls     f3, f3, f0

	.loc_0x8F0:
	  lwz       r5, 0x34(r31)
	  mr        r3, r31
	  lfs       f5, 0x14(r31)
	  addi      r4, r1, 0x10
	  lfs       f4, 0x220(r5)
	  lfs       f1, 0x10(r31)
	  lfs       f0, 0xC(r31)
	  fmuls     f2, f3, f4
	  fmuls     f3, f1, f5
	  fmuls     f1, f0, f5
	  fmuls     f0, f6, f4
	  fadds     f3, f3, f2
	  fadds     f2, f1, f0
	  stfs      f3, 0x14(r1)
	  stfs      f2, 0x10(r1)
	  lfs       f1, 0x80(r31)
	  lfs       f0, 0x7C(r31)
	  fmuls     f1, f1, f31
	  fmuls     f0, f0, f31
	  fadds     f1, f3, f1
	  fadds     f0, f2, f0
	  stfs      f1, 0x14(r1)
	  stfs      f0, 0x10(r1)
	  bl        .loc_0xDD4
	  b         .loc_0xB10

	.loc_0x954:
	  li        r0, 0
	  stw       r0, 0x68(r31)
	  b         .loc_0xB10

	.loc_0x960:
	  lwz       r3, 0x84(r31)
	  cmpwi     r3, 0x2
	  beq-      .loc_0xB10
	  lbz       r0, 0x94(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x984
	  li        r0, 0
	  stw       r0, 0x84(r31)
	  b         .loc_0x990

	.loc_0x984:
	  stw       r3, 0x88(r31)
	  li        r0, 0x2
	  stw       r0, 0x84(r31)

	.loc_0x990:
	  lwz       r0, 0x84(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xB10
	  bge-      .loc_0x9B0
	  cmpwi     r0, 0
	  beq-      .loc_0x9BC
	  bge-      .loc_0xA60
	  b         .loc_0xB10

	.loc_0x9B0:
	  cmpwi     r0, 0x4
	  bge-      .loc_0xB10
	  b         .loc_0x9D0

	.loc_0x9BC:
	  lfs       f0, 0x2C(r31)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x30(r31)
	  stfs      f0, 0x8(r31)
	  b         .loc_0xB10

	.loc_0x9D0:
	  lfs       f1, 0x1930(r2)
	  lfs       f0, 0x1900(r2)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  lwz       r4, 0x34(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x270(r4)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x324760
	  stw       r3, 0x8C(r31)
	  stw       r3, 0x90(r31)
	  bl        -0x31CD18
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2C(r1)
	  lfd       f2, 0x1978(r2)
	  stw       r0, 0x28(r1)
	  lfs       f3, 0x1980(r2)
	  lfd       f1, 0x28(r1)
	  lfs       f0, 0x1954(r2)
	  fsubs     f4, f1, f2
	  lfs       f1, 0x198C(r2)
	  lfs       f2, 0x1960(r2)
	  fdivs     f3, f4, f3
	  fmuls     f0, f0, f3
	  stfs      f0, 0x5C(r31)
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x34(r31)
	  lfs       f0, 0x54(r3)
	  lfs       f3, 0x180(r4)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x58(r31)
	  b         .loc_0xB10

	.loc_0xA60:
	  lfs       f0, 0x1900(r2)
	  lfs       f1, 0x198C(r2)
	  stfs      f0, 0x14(r31)
	  lfs       f2, 0x1960(r2)
	  lwz       r3, -0x6514(r13)
	  lfs       f3, 0x60(r31)
	  lfs       f0, 0x54(r3)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x44(r31)
	  b         .loc_0xB10

	.loc_0xA90:
	  lfs       f3, 0x70(r31)
	  mr        r3, r31
	  lfs       f2, 0x8(r31)
	  addi      r4, r1, 0x8
	  lfs       f1, 0x6C(r31)
	  lfs       f0, 0x4(r31)
	  fsubs     f5, f3, f2
	  lfs       f3, 0x78(r31)
	  fsubs     f2, f1, f0
	  lfs       f1, 0x74(r31)
	  lfs       f4, 0x80(r31)
	  fmuls     f6, f5, f7
	  fmuls     f5, f3, f9
	  lfs       f0, 0x7C(r31)
	  fmuls     f2, f2, f7
	  lfs       f8, 0x14(r31)
	  fmuls     f1, f1, f9
	  lfs       f7, 0x10(r31)
	  lfs       f3, 0xC(r31)
	  fadds     f5, f6, f5
	  fmuls     f4, f4, f31
	  fadds     f1, f2, f1
	  fmuls     f0, f0, f31
	  fmuls     f6, f7, f8
	  fadds     f4, f5, f4
	  fmuls     f2, f3, f8
	  fadds     f0, f1, f0
	  fadds     f1, f6, f4
	  fadds     f0, f2, f0
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x8(r1)
	  bl        .loc_0xDD4

	.loc_0xB10:
	  lwz       r0, 0x84(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0xD90
	  mr        r3, r31
	  bl        -0x25858
	  lwz       r0, 0x84(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xC98
	  bge-      .loc_0xB44
	  cmpwi     r0, 0
	  beq-      .loc_0xD04
	  bge-      .loc_0xC60
	  b         .loc_0xD04

	.loc_0xB44:
	  cmpwi     r0, 0x6
	  bge-      .loc_0xD04
	  cmpwi     r0, 0x4
	  bge-      .loc_0xC98
	  addi      r3, r31, 0x4C
	  bl        -0x37ED68
	  addi      r3, r31, 0x38
	  bl        -0x37ED70
	  lwz       r4, 0x90(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0xBA4
	  lwz       r3, 0x8C(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x28(r1)
	  lfd       f2, 0x1938(r2)
	  stw       r3, 0x2C(r1)
	  lfd       f0, 0x28(r1)
	  stw       r4, 0x34(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x30(r1)
	  lfd       f0, 0x30(r1)
	  fsubs     f0, f0, f2
	  fdivs     f1, f1, f0
	  b         .loc_0xBA8

	.loc_0xBA4:
	  lfs       f1, 0x1900(r2)

	.loc_0xBA8:
	  lfs       f27, 0x1930(r2)
	  lfs       f0, 0x1904(r2)
	  fsubs     f2, f27, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xBC8
	  fdivs     f27, f2, f0
	  b         .loc_0xBE8

	.loc_0xBC8:
	  lfs       f0, 0x1960(r2)
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xBDC
	  b         .loc_0xBE8

	.loc_0xBDC:
	  lfs       f1, 0x1994(r2)
	  fneg      f0, f1
	  fmadds    f27, f1, f2, f0

	.loc_0xBE8:
	  lwz       r3, 0x34(r31)
	  li        r4, 0
	  lfs       f0, 0x1930(r2)
	  lwz       r5, 0x18(r3)
	  lfs       f2, 0x48(r31)
	  fsubs     f1, f0, f27
	  lwz       r29, 0x28(r31)
	  lfs       f0, 0x5C(r31)
	  lwz       r3, 0x18(r5)
	  stfs      f0, 0x8(r3)
	  lwz       r3, 0x14(r5)
	  stfs      f2, 0x8(r3)
	  lwz       r30, 0x20(r5)
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  fmr       f1, f27
	  lwz       r12, 0x0(r30)
	  li        r4, 0x1
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4(r29)
	  lwz       r3, 0x28(r3)
	  lwz       r3, 0x0(r3)
	  stw       r30, 0x54(r3)
	  b         .loc_0xD04

	.loc_0xC60:
	  addi      r3, r31, 0x38
	  bl        -0x37EE74
	  lwz       r3, 0x34(r31)
	  lwz       r4, 0x28(r31)
	  lwz       r5, 0x18(r3)
	  lfs       f0, 0x48(r31)
	  lwz       r3, 0x14(r5)
	  stfs      f0, 0x8(r3)
	  lwz       r3, 0x4(r4)
	  lwz       r0, 0x1C(r5)
	  lwz       r3, 0x28(r3)
	  lwz       r3, 0x0(r3)
	  stw       r0, 0x54(r3)
	  b         .loc_0xD04

	.loc_0xC98:
	  lwz       r5, 0x34(r31)
	  addi      r3, r31, 0x38
	  lwz       r4, -0x6514(r13)
	  lfs       f3, 0x14(r31)
	  lfs       f2, 0x158(r5)
	  lfs       f1, 0x198C(r2)
	  lfs       f0, 0x54(r4)
	  fmuls     f2, f3, f2
	  lfs       f3, 0x64(r31)
	  fmuls     f0, f1, f0
	  lfs       f1, 0x1960(r2)
	  fmuls     f2, f3, f2
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x44(r31)
	  bl        -0x37EEE4
	  lwz       r3, 0x34(r31)
	  lwz       r4, 0x28(r31)
	  lwz       r5, 0x18(r3)
	  lfs       f0, 0x48(r31)
	  lwz       r3, 0x14(r5)
	  stfs      f0, 0x8(r3)
	  lwz       r3, 0x4(r4)
	  lwz       r0, 0x1C(r5)
	  lwz       r3, 0x28(r3)
	  lwz       r3, 0x0(r3)
	  stw       r0, 0x54(r3)

	.loc_0xD04:
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x28(r31)
	  addi      r4, r2, 0x1998
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x54(r3)
	  bl        -0x3B785C
	  lwz       r4, 0x28(r31)
	  mulli     r0, r3, 0x30
	  lwz       r3, 0x34(r31)
	  lwz       r4, 0x84(r4)
	  lfs       f0, 0x108(r3)
	  lwz       r3, 0xC(r4)
	  add       r4, r3, r0
	  lfs       f1, 0xC(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0xC(r4)
	  lwz       r3, 0x34(r31)
	  lfs       f1, 0x2C(r4)
	  lfs       f0, 0x130(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C(r4)
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xD90:
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  psq_l     f28,0x68(r1),0,0
	  lfd       f28, 0x60(r1)
	  psq_l     f27,0x58(r1),0,0
	  lfd       f27, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr

	.loc_0xDD4:
	*/
}

} // namespace ebi

/*
 * --INFO--
 * Address:	803E668C
 * Size:	000200
 */
void updateSmoothWalk___Q43ebi5title6Pikmin5TUnitFR10Vector2<float>(void)
{
	/*
	.loc_0x0:
	  lfs       f5, 0x0(r4)
	  lfs       f0, 0x4(r4)
	  fmuls     f1, f5, f5
	  lwz       r5, 0x34(r3)
	  fmuls     f6, f0, f0
	  lfs       f0, 0x1900(r2)
	  lfs       f2, 0x964(r5)
	  lfs       f3, 0x968(r5)
	  fadds     f1, f1, f6
	  lfs       f4, 0x960(r5)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x48
	  fmadds    f1, f5, f5, f6
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x4C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x4C

	.loc_0x48:
	  fmr       f1, f0

	.loc_0x4C:
	  fcmpo     cr0, f1, f4
	  ble-      .loc_0x5C
	  fmr       f1, f4
	  b         .loc_0x6C

	.loc_0x5C:
	  lfs       f0, 0x1900(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x6C
	  fmr       f1, f0

	.loc_0x6C:
	  stfs      f1, 0x14(r3)
	  lfs       f0, 0x1900(r2)
	  lfs       f5, 0x4(r4)
	  lfs       f4, 0x0(r4)
	  fmuls     f1, f5, f5
	  fmadds    f1, f4, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x9C
	  ble-      .loc_0xA0
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xA0

	.loc_0x9C:
	  fmr       f1, f0

	.loc_0xA0:
	  lfs       f0, 0x1900(r2)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0xBC
	  lfs       f0, 0x1930(r2)
	  fdivs     f0, f0, f1
	  fmuls     f4, f4, f0
	  fmuls     f5, f5, f0

	.loc_0xBC:
	  fmuls     f7, f5, f2
	  lfs       f0, 0x1900(r2)
	  fmuls     f6, f4, f2
	  fmuls     f1, f7, f7
	  fmr       f2, f6
	  fmr       f4, f7
	  fmadds    f5, f6, f6, f1
	  fcmpo     cr0, f5, f0
	  ble-      .loc_0xF4
	  ble-      .loc_0xF0
	  fsqrte    f0, f5
	  fmuls     f0, f0, f5
	  b         .loc_0xF4

	.loc_0xF0:
	  fmr       f0, f5

	.loc_0xF4:
	  fcmpo     cr0, f0, f3
	  ble-      .loc_0x150
	  lfs       f0, 0x1900(r2)
	  fcmpo     cr0, f5, f0
	  ble-      .loc_0x120
	  fmadds    f1, f6, f6, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x124
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x124

	.loc_0x120:
	  fmr       f1, f0

	.loc_0x124:
	  lfs       f0, 0x1900(r2)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0x140
	  lfs       f0, 0x1930(r2)
	  fdivs     f0, f0, f1
	  fmuls     f2, f2, f0
	  fmuls     f4, f4, f0

	.loc_0x140:
	  fmuls     f2, f2, f3
	  fmuls     f4, f4, f3
	  fmr       f6, f2
	  fmr       f7, f4

	.loc_0x150:
	  lfs       f0, 0xC(r3)
	  lfs       f2, 0x10(r3)
	  fadds     f1, f0, f6
	  lfs       f0, 0x1900(r2)
	  fadds     f2, f2, f7
	  stfs      f1, 0xC(r3)
	  stfs      f2, 0x10(r3)
	  lfs       f3, 0xC(r3)
	  lfs       f2, 0x10(r3)
	  fmuls     f1, f3, f3
	  fmuls     f2, f2, f2
	  fadds     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1A0
	  fmadds    f2, f3, f3, f2
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x1A4
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x1A4

	.loc_0x1A0:
	  fmr       f2, f0

	.loc_0x1A4:
	  lfs       f0, 0x1900(r2)
	  fcmpu     cr0, f0, f2
	  beq-      .loc_0x1D0
	  lfs       f1, 0x1930(r2)
	  lfs       f0, 0xC(r3)
	  fdivs     f1, f1, f2
	  fmuls     f0, f0, f1
	  stfs      f0, 0xC(r3)
	  lfs       f0, 0x10(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x10(r3)

	.loc_0x1D0:
	  lfs       f3, 0x14(r3)
	  lfs       f0, 0xC(r3)
	  lfs       f2, 0x10(r3)
	  fmuls     f0, f0, f3
	  lfs       f1, 0x4(r3)
	  fmuls     f2, f2, f3
	  lfs       f3, 0x8(r3)
	  fadds     f0, f1, f0
	  fadds     f1, f3, f2
	  stfs      f0, 0x4(r3)
	  stfs      f1, 0x8(r3)
	  blr
	*/
}

namespace ebi {

/*
 * --INFO--
 * Address:	803E688C
 * Size:	000350
 */
void title::Pikmin::TUnit::updateEnemyReaction_(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0x68(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x334
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x334
	  lwz       r3, 0x68(r31)
	  lfs       f0, 0x8(r31)
	  lfs       f1, 0x8(r3)
	  lfs       f2, 0x4(r3)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x4(r31)
	  lfs       f0, 0x1900(r2)
	  fsubs     f1, f2, f1
	  fmuls     f2, f3, f3
	  fmadds    f31, f1, f1, f2
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x80
	  ble-      .loc_0x84
	  fsqrte    f0, f31
	  fmuls     f31, f0, f31
	  b         .loc_0x84

	.loc_0x80:
	  fmr       f31, f0

	.loc_0x84:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x5
	  beq-      .loc_0xB8
	  bge-      .loc_0xAC
	  cmpwi     r3, -0x1
	  beq-      .loc_0x334
	  b         .loc_0x334

	.loc_0xAC:
	  cmpwi     r3, 0x7
	  bge-      .loc_0x334
	  b         .loc_0x1F8

	.loc_0xB8:
	  lwz       r3, 0x68(r31)
	  lfs       f0, 0x20(r3)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x334
	  lwz       r3, 0x84(r31)
	  cmpwi     r3, 0x5
	  beq-      .loc_0x334
	  lbz       r0, 0x94(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0xEC
	  li        r0, 0
	  stw       r0, 0x84(r31)
	  b         .loc_0xF8

	.loc_0xEC:
	  stw       r3, 0x88(r31)
	  li        r0, 0x5
	  stw       r0, 0x84(r31)

	.loc_0xF8:
	  lwz       r0, 0x84(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x334
	  bge-      .loc_0x118
	  cmpwi     r0, 0
	  beq-      .loc_0x124
	  bge-      .loc_0x1C8
	  b         .loc_0x334

	.loc_0x118:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x334
	  b         .loc_0x138

	.loc_0x124:
	  lfs       f0, 0x2C(r31)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x30(r31)
	  stfs      f0, 0x8(r31)
	  b         .loc_0x334

	.loc_0x138:
	  lfs       f1, 0x1930(r2)
	  lfs       f0, 0x1900(r2)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  lwz       r4, 0x34(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x270(r4)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x324E9C
	  stw       r3, 0x8C(r31)
	  stw       r3, 0x90(r31)
	  bl        -0x31D454
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f2, 0x1978(r2)
	  stw       r0, 0x8(r1)
	  lfs       f3, 0x1980(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f0, 0x1954(r2)
	  fsubs     f4, f1, f2
	  lfs       f1, 0x198C(r2)
	  lfs       f2, 0x1960(r2)
	  fdivs     f3, f4, f3
	  fmuls     f0, f0, f3
	  stfs      f0, 0x5C(r31)
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x34(r31)
	  lfs       f0, 0x54(r3)
	  lfs       f3, 0x180(r4)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x58(r31)
	  b         .loc_0x334

	.loc_0x1C8:
	  lfs       f0, 0x1900(r2)
	  lfs       f1, 0x198C(r2)
	  stfs      f0, 0x14(r31)
	  lfs       f2, 0x1960(r2)
	  lwz       r3, -0x6514(r13)
	  lfs       f3, 0x60(r31)
	  lfs       f0, 0x54(r3)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x44(r31)
	  b         .loc_0x334

	.loc_0x1F8:
	  lwz       r3, 0x68(r31)
	  lfs       f0, 0x20(r3)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x334
	  lwz       r3, 0x84(r31)
	  cmpwi     r3, 0x5
	  beq-      .loc_0x334
	  lbz       r0, 0x94(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x22C
	  li        r0, 0
	  stw       r0, 0x84(r31)
	  b         .loc_0x238

	.loc_0x22C:
	  stw       r3, 0x88(r31)
	  li        r0, 0x5
	  stw       r0, 0x84(r31)

	.loc_0x238:
	  lwz       r0, 0x84(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x334
	  bge-      .loc_0x258
	  cmpwi     r0, 0
	  beq-      .loc_0x264
	  bge-      .loc_0x308
	  b         .loc_0x334

	.loc_0x258:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x334
	  b         .loc_0x278

	.loc_0x264:
	  lfs       f0, 0x2C(r31)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x30(r31)
	  stfs      f0, 0x8(r31)
	  b         .loc_0x334

	.loc_0x278:
	  lfs       f1, 0x1930(r2)
	  lfs       f0, 0x1900(r2)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  lwz       r4, 0x34(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x270(r4)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x324FDC
	  stw       r3, 0x8C(r31)
	  stw       r3, 0x90(r31)
	  bl        -0x31D594
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f2, 0x1978(r2)
	  stw       r0, 0x8(r1)
	  lfs       f3, 0x1980(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f0, 0x1954(r2)
	  fsubs     f4, f1, f2
	  lfs       f1, 0x198C(r2)
	  lfs       f2, 0x1960(r2)
	  fdivs     f3, f4, f3
	  fmuls     f0, f0, f3
	  stfs      f0, 0x5C(r31)
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x34(r31)
	  lfs       f0, 0x54(r3)
	  lfs       f3, 0x180(r4)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x58(r31)
	  b         .loc_0x334

	.loc_0x308:
	  lfs       f0, 0x1900(r2)
	  lfs       f1, 0x198C(r2)
	  stfs      f0, 0x14(r31)
	  lfs       f2, 0x1960(r2)
	  lwz       r3, -0x6514(r13)
	  lfs       f3, 0x60(r31)
	  lfs       f0, 0x54(r3)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x44(r31)

	.loc_0x334:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E6BDC
 * Size:	000238
 */
title::Pikmin::TBoidParam::TBoidParam(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8049
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x7158
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x14C
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x7473
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x30
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x7030
	  addi      r6, r31, 0x48
	  bl        0x2CA28
	  lis       r3, 0x804B
	  lis       r5, 0x7473
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1904(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x7031
	  lfs       f0, 0x1908(r2)
	  addi      r6, r31, 0x64
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x2C9EC
	  lis       r3, 0x804B
	  lis       r5, 0x7473
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x190C(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x7032
	  lfs       f0, 0x1908(r2)
	  addi      r6, r31, 0x7C
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x2C9B0
	  lis       r3, 0x804B
	  lis       r5, 0x7473
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1910(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x7035
	  lfs       f0, 0x1908(r2)
	  addi      r6, r31, 0x8C
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x2C974
	  lis       r3, 0x804B
	  lis       r5, 0x7473
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1914(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x7036
	  lfs       f0, 0x1918(r2)
	  addi      r6, r31, 0xA0
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x2C938
	  lis       r3, 0x804B
	  lis       r5, 0x7473
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x191C(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x7037
	  lfs       f0, 0x1920(r2)
	  addi      r6, r31, 0xB4
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x2C8FC
	  lis       r3, 0x804B
	  lis       r5, 0x7473
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1924(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x7038
	  lfs       f0, 0x1908(r2)
	  addi      r6, r31, 0xC8
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x2C8C0
	  lis       r3, 0x804B
	  lis       r5, 0x7473
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1928(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x7039
	  lfs       f0, 0x192C(r2)
	  addi      r6, r31, 0xE4
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x2C884
	  lis       r3, 0x804B
	  lfs       f1, 0x1900(r2)
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1930(r2)
	  stw       r0, 0x124(r30)
	  mr        r3, r30
	  stfs      f1, 0x13C(r30)
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E6E14
 * Size:	0000FC
 */
title::Pikmin::TUnit::TUnit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804E
	  lfs       f2, 0x1900(r2)
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x79A8
	  lis       r4, 0x804F
	  lfs       f1, 0x1940(r2)
	  stw       r31, 0xC(r1)
	  subi      r5, r4, 0x6204
	  mr        r31, r3
	  lfs       f0, 0x1930(r2)
	  stw       r0, 0x0(r3)
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  li        r6, 0
	  stfs      f2, 0x4(r31)
	  addi      r3, r31, 0x38
	  li        r4, 0
	  stfs      f2, 0x8(r31)
	  stfs      f2, 0xC(r31)
	  stfs      f1, 0x10(r31)
	  stfs      f2, 0x14(r31)
	  stfs      f0, 0x18(r31)
	  stfs      f2, 0x1C(r31)
	  stfs      f2, 0x20(r31)
	  stfs      f2, 0x24(r31)
	  stw       r6, 0x28(r31)
	  stw       r5, 0x0(r31)
	  stw       r0, 0x38(r31)
	  bl        -0x37F814
	  lis       r4, 0x804E
	  addi      r3, r31, 0x4C
	  addi      r0, r4, 0x798C
	  li        r4, 0
	  stw       r0, 0x4C(r31)
	  bl        -0x37F82C
	  li        r0, 0
	  lfs       f1, 0x1900(r2)
	  stw       r0, 0x8C(r31)
	  mr        r3, r31
	  lfs       f0, 0x1930(r2)
	  stw       r0, 0x90(r31)
	  stfs      f1, 0x2C(r31)
	  stfs      f1, 0x30(r31)
	  stw       r0, 0x34(r31)
	  stfs      f0, 0x60(r31)
	  stfs      f0, 0x64(r31)
	  stw       r0, 0x68(r31)
	  stfs      f1, 0x6C(r31)
	  stfs      f1, 0x70(r31)
	  stfs      f1, 0x74(r31)
	  stfs      f1, 0x78(r31)
	  stfs      f1, 0x7C(r31)
	  stfs      f1, 0x80(r31)
	  stw       r0, 0x84(r31)
	  stw       r0, 0x88(r31)
	  stb       r0, 0x94(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E6F10
 * Size:	000418
 */
title::Pikmin::TParam::TParam(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8049
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x7158
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x28C
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x706B
	  stw       r0, 0x4(r30)
	  addi      r0, r2, 0x1944
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3030
	  addi      r6, r31, 0x1E4
	  bl        0x2C6F4
	  lis       r3, 0x804B
	  lis       r5, 0x706B
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x194C(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3939
	  lfs       f0, 0x1908(r2)
	  addi      r6, r31, 0x1F4
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x2C6B8
	  lis       r3, 0x804B
	  lis       r5, 0x706B
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1950(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, 0x1908(r2)
	  addi      r6, r31, 0x208
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x2C67C
	  lis       r3, 0x804B
	  lis       r5, 0x706B
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1954(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, 0x1920(r2)
	  addi      r6, r31, 0x218
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x2C640
	  lis       r3, 0x804B
	  lis       r5, 0x706B
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1958(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, 0x1920(r2)
	  addi      r6, r31, 0x224
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x2C604
	  lis       r3, 0x804B
	  lis       r5, 0x706B
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x195C(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x3035
	  lfs       f0, 0x1920(r2)
	  addi      r6, r31, 0x230
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x2C5C8
	  lis       r3, 0x804B
	  lis       r5, 0x706B
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1954(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3036
	  lfs       f0, 0x1920(r2)
	  addi      r6, r31, 0x23C
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x2C58C
	  lis       r3, 0x804B
	  lis       r5, 0x706B
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1954(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3037
	  lfs       f0, 0x1920(r2)
	  addi      r6, r31, 0x248
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x2C550
	  lis       r3, 0x804B
	  lis       r5, 0x706B
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1960(r2)
	  stw       r0, 0x124(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0x14C
	  stfs      f0, 0x13C(r30)
	  addi      r5, r5, 0x3038
	  lfs       f0, 0x1908(r2)
	  addi      r6, r31, 0x268
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
	  bl        0x2C514
	  lis       r3, 0x804B
	  lis       r5, 0x706B
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1960(r2)
	  stw       r0, 0x14C(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0x174
	  stfs      f0, 0x164(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, 0x1908(r2)
	  addi      r6, r31, 0x27C
	  stfs      f1, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  bl        0x2C4D8
	  lis       r3, 0x804B
	  lis       r5, 0x706B
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1960(r2)
	  stw       r0, 0x174(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0x19C
	  stfs      f0, 0x18C(r30)
	  addi      r5, r5, 0x3039
	  lfs       f0, 0x1908(r2)
	  addi      r6, r31, 0x294
	  stfs      f1, 0x194(r30)
	  stfs      f0, 0x198(r30)
	  bl        0x2C49C
	  lis       r3, 0x804B
	  lis       r5, 0x706B
	  subi      r0, r3, 0x5344
	  lfs       f1, 0x1900(r2)
	  stw       r0, 0x19C(r30)
	  mr        r4, r30
	  lfs       f0, 0x1908(r2)
	  addi      r3, r30, 0x1C4
	  stfs      f1, 0x1B4(r30)
	  addi      r5, r5, 0x3132
	  addi      r6, r31, 0x2AC
	  stfs      f1, 0x1BC(r30)
	  stfs      f0, 0x1C0(r30)
	  bl        0x2C464
	  lis       r3, 0x804B
	  lis       r5, 0x706B
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1954(r2)
	  stw       r0, 0x1C4(r30)
	  mr        r4, r30
	  lfs       f1, 0x1964(r2)
	  addi      r3, r30, 0x1EC
	  stfs      f0, 0x1DC(r30)
	  addi      r5, r5, 0x3133
	  lfs       f0, 0x1908(r2)
	  addi      r6, r31, 0x2C0
	  stfs      f1, 0x1E4(r30)
	  stfs      f0, 0x1E8(r30)
	  bl        0x2C428
	  lis       r3, 0x804B
	  lis       r5, 0x706B
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1968(r2)
	  stw       r0, 0x1EC(r30)
	  mr        r4, r30
	  lfs       f1, 0x1964(r2)
	  addi      r3, r30, 0x214
	  stfs      f0, 0x204(r30)
	  addi      r5, r5, 0x3134
	  lfs       f0, 0x1908(r2)
	  addi      r6, r31, 0x2DC
	  stfs      f1, 0x20C(r30)
	  stfs      f0, 0x210(r30)
	  bl        0x2C3EC
	  lis       r3, 0x804B
	  lis       r5, 0x706B
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x196C(r2)
	  stw       r0, 0x214(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0x23C
	  stfs      f0, 0x22C(r30)
	  addi      r5, r5, 0x3131
	  lfs       f0, 0x192C(r2)
	  addi      r6, r31, 0x2F4
	  stfs      f1, 0x234(r30)
	  stfs      f0, 0x238(r30)
	  bl        0x2C3B0
	  lis       r3, 0x804B
	  lis       r5, 0x706B
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1970(r2)
	  stw       r0, 0x23C(r30)
	  mr        r4, r30
	  lfs       f1, 0x1900(r2)
	  addi      r3, r30, 0x264
	  stfs      f0, 0x254(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, 0x1908(r2)
	  addi      r6, r31, 0x304
	  stfs      f1, 0x25C(r30)
	  stfs      f0, 0x260(r30)
	  bl        0x2C374
	  lis       r3, 0x804B
	  lfs       f2, 0x1904(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, 0x1900(r2)
	  stw       r0, 0x264(r30)
	  mr        r3, r30
	  lfs       f0, 0x1930(r2)
	  stfs      f2, 0x27C(r30)
	  stfs      f1, 0x284(r30)
	  stfs      f0, 0x288(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E7328
 * Size:	000008
 */
u32 title::Pikmin::TUnit::getCreatureType(void) { return 0x0; }

} // namespace ebi

/*
 * --INFO--
 * Address:	803E7330
 * Size:	000028
 */
void __sinit_ebiP2TitlePikmin_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804F
	  stw       r0, -0x6598(r13)
	  stfsu     f0, -0x6210(r3)
	  stfs      f0, -0x6594(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
