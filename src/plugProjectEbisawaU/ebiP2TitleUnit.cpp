#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void E3DModel_set2DCoordToBaseTRMatrix__Q23ebi5titleFP8J3DModelR10Vector2<float>
    R10Vector2<float> f(void)
{
	// UNUSED FUNCTION
}

namespace ebi {

/*
 * --INFO--
 * Address:	803C0AF8
 * Size:	000088
 */
void title::TParamBase::loadSettingFile(JKRArchive*, char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x430(r1)
	  mflr      r0
	  stw       r0, 0x434(r1)
	  stw       r31, 0x42C(r1)
	  mr        r31, r3
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  mr        r4, r5
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x70
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  li        r5, -0x1
	  bl        0x54DC0
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x14(r1)
	  bne-      .loc_0x5C
	  li        r0, 0
	  stw       r0, 0x41C(r1)

	.loc_0x5C:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        0x52C98
	  li        r3, 0x1
	  b         .loc_0x74

	.loc_0x70:
	  li        r3, 0

	.loc_0x74:
	  lwz       r0, 0x434(r1)
	  lwz       r31, 0x42C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x430
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C0B80
 * Size:	0000B0
 */
void title::TObjBase::calcModelBaseMtx_(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f6, 0x14DC(r2)
	  stw       r0, 0x44(r1)
	  lfs       f7, 0x14D8(r2)
	  stw       r31, 0x3C(r1)
	  lfs       f0, 0x10(r3)
	  lfs       f1, 0x18(r3)
	  fneg      f8, f0
	  lwz       r4, 0x28(r3)
	  lfs       f5, 0xC(r3)
	  fmr       f2, f1
	  addi      r31, r4, 0x24
	  fmsubs    f3, f7, f8, f6
	  fmuls     f4, f6, f8
	  fnmsubs   f0, f7, f5, f6
	  stfs      f3, 0x24(r4)
	  fmr       f3, f1
	  fmsubs    f4, f6, f5, f4
	  stfs      f6, 0x28(r4)
	  stfs      f5, 0x2C(r4)
	  lfs       f5, 0x4(r3)
	  stfs      f5, 0x30(r4)
	  stfs      f4, 0x34(r4)
	  stfs      f7, 0x38(r4)
	  stfs      f6, 0x3C(r4)
	  stfs      f6, 0x40(r4)
	  stfs      f0, 0x44(r4)
	  stfs      f6, 0x48(r4)
	  stfs      f8, 0x4C(r4)
	  lfs       f0, 0x8(r3)
	  addi      r3, r1, 0x8
	  fneg      f0, f0
	  stfs      f0, 0x50(r4)
	  bl        -0x2D6434
	  mr        r3, r31
	  mr        r5, r31
	  addi      r4, r1, 0x8
	  bl        -0x2D6918
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

} // namespace ebi

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void pushOut___Q33ebi5title8TObjBaseFP10Vector2<float> f(void)
{
	// UNUSED FUNCTION
}

namespace ebi {

/*
 * --INFO--
 * Address:	803C0C30
 * Size:	000094
 */
void title::TObjBase::pushOut(ebi::title::TObjBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7C
	  lfs       f1, 0x1C(r30)
	  addi      r3, r1, 0x8
	  lfs       f0, 0x1C(r31)
	  addi      r4, r31, 0x4
	  fadds     f0, f1, f0
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0xC(r1)
	  bl        0x95F4

	.loc_0x7C:
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
 * Address:	803C0CC4
 * Size:	000220
 */
void title::TMapBase::setArchive(JKRArchive*)
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
	  addi      r30, r4, 0x61D8
	  mr        r3, r28
	  lwz       r12, 0x14(r12)
	  addi      r4, r30, 0x1C
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  bne-      .loc_0x60
	  addi      r3, r30, 0x28
	  addi      r5, r30, 0x3C
	  li        r4, 0x60
	  crclr     6, 0x6
	  bl        -0x3966E0

	.loc_0x60:
	  mr        r3, r29
	  lis       r4, 0x2010
	  bl        -0x351498
	  stw       r3, 0x30(r31)
	  mr        r3, r28
	  addi      r4, r30, 0x48
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  bne-      .loc_0xA4
	  addi      r3, r30, 0x28
	  addi      r5, r30, 0x3C
	  li        r4, 0x6A
	  crclr     6, 0x6
	  bl        -0x396724

	.loc_0xA4:
	  mr        r3, r29
	  bl        -0x34E7CC
	  stw       r3, 0x48(r31)
	  mr        r3, r28
	  addi      r4, r30, 0x5C
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  bne-      .loc_0xE4
	  addi      r3, r30, 0x28
	  addi      r5, r30, 0x3C
	  li        r4, 0x6F
	  crclr     6, 0x6
	  bl        -0x396764

	.loc_0xE4:
	  mr        r3, r29
	  bl        -0x34E80C
	  stw       r3, 0x64(r31)
	  lis       r4, 0x4
	  lwz       r3, 0x30(r31)
	  bl        -0x33D4E4
	  lwz       r3, 0x30(r31)
	  bl        -0x33D394
	  lwz       r3, 0x30(r31)
	  lwz       r4, 0x48(r31)
	  lwz       r0, 0x18(r3)
	  rlwinm    r3,r0,0,28,31
	  bl        -0x3556B0
	  stw       r3, 0x4C(r31)
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0
	  lwz       r3, 0x30(r31)
	  lwz       r4, 0x48(r31)
	  lwz       r0, 0x18(r3)
	  lwz       r5, 0x64(r31)
	  rlwinm    r3,r0,0,28,31
	  bl        -0x3AB010
	  stw       r3, 0x68(r31)
	  li        r3, 0xDC
	  lfs       f0, 0x14DC(r2)
	  stfs      f0, 0x14(r31)
	  bl        -0x39CF70
	  mr.       r30, r3
	  beq-      .loc_0x194
	  lis       r3, 0x804A
	  lwz       r29, 0x30(r31)
	  addi      r0, r3, 0x19F0
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  addi      r3, r28, 0x88
	  bl        -0x3621F0
	  mr        r3, r28
	  bl        -0x35AB44
	  mr        r3, r28
	  mr        r4, r29
	  lis       r5, 0x2
	  li        r6, 0x1
	  bl        -0x35AAD4

	.loc_0x194:
	  stw       r30, 0x28(r31)
	  addi      r3, r31, 0x34
	  lwz       r4, 0x48(r31)
	  lha       r4, 0x6(r4)
	  bl        -0x3597F0
	  li        r0, 0x2
	  lfs       f1, 0x14E4(r2)
	  stb       r0, 0x38(r31)
	  addi      r3, r31, 0x50
	  lfs       f2, 0x14E0(r2)
	  lwz       r4, -0x6514(r13)
	  lfs       f0, 0x54(r4)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x40(r31)
	  lwz       r4, 0x64(r31)
	  lha       r4, 0x6(r4)
	  bl        -0x359824
	  li        r0, 0x2
	  lfs       f1, 0x14E4(r2)
	  stb       r0, 0x54(r31)
	  lfs       f2, 0x14E0(r2)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x5C(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C0EE4
 * Size:	000048
 */
void title::TMapBase::startWind(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0x2C(r3)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FF3C0
	  stw       r3, 0x6C(r31)
	  stw       r3, 0x70(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C0F2C
 * Size:	00027C
 */
void title::TMapBase::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  lfs       f0, 0x10(r3)
	  mr        r31, r3
	  lfs       f1, 0x18(r31)
	  addi      r3, r1, 0x8
	  fneg      f8, f0
	  lfs       f6, 0x14DC(r2)
	  lfs       f7, 0x14D8(r2)
	  fmr       f2, f1
	  lwz       r4, 0x28(r31)
	  fmsubs    f3, f7, f8, f6
	  lfs       f5, 0xC(r31)
	  fmuls     f4, f6, f8
	  addi      r30, r4, 0x24
	  stfs      f3, 0x24(r4)
	  fnmsubs   f0, f7, f5, f6
	  fmsubs    f4, f6, f5, f4
	  stfs      f6, 0x28(r4)
	  fmr       f3, f1
	  stfs      f5, 0x2C(r4)
	  lfs       f5, 0x4(r31)
	  stfs      f5, 0x30(r4)
	  stfs      f4, 0x34(r4)
	  stfs      f7, 0x38(r4)
	  stfs      f6, 0x3C(r4)
	  stfs      f6, 0x40(r4)
	  stfs      f0, 0x44(r4)
	  stfs      f6, 0x48(r4)
	  stfs      f8, 0x4C(r4)
	  lfs       f0, 0x8(r31)
	  fneg      f0, f0
	  stfs      f0, 0x50(r4)
	  bl        -0x2D67F0
	  mr        r3, r30
	  mr        r5, r30
	  addi      r4, r1, 0x8
	  bl        -0x2D6CD4
	  lwz       r0, 0x6C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xC0
	  li        r0, 0
	  stw       r0, 0x2C(r31)

	.loc_0xC0:
	  lwz       r0, 0x2C(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x10C
	  bge-      .loc_0x220
	  cmpwi     r0, 0
	  bge-      .loc_0xDC
	  b         .loc_0x220

	.loc_0xDC:
	  addi      r3, r31, 0x34
	  bl        -0x359964
	  lfs       f0, 0x44(r31)
	  lwz       r3, 0x48(r31)
	  stfs      f0, 0x8(r3)
	  lwz       r3, 0x28(r31)
	  lwz       r0, 0x4C(r31)
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r3, 0x0(r3)
	  stw       r0, 0x54(r3)
	  b         .loc_0x220

	.loc_0x10C:
	  addi      r3, r31, 0x34
	  bl        -0x359994
	  addi      r3, r31, 0x50
	  bl        -0x35999C
	  lfs       f0, 0x44(r31)
	  lwz       r3, 0x48(r31)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x60(r31)
	  lwz       r3, 0x64(r31)
	  stfs      f0, 0x8(r3)
	  lwz       r3, 0x6C(r31)
	  lwz       r30, 0x68(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x14C
	  subi      r0, r3, 0x1
	  stw       r0, 0x6C(r31)

	.loc_0x14C:
	  lwz       r4, 0x70(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x18C
	  lwz       r3, 0x6C(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x38(r1)
	  lfd       f2, 0x14F8(r2)
	  stw       r3, 0x3C(r1)
	  lfd       f0, 0x38(r1)
	  stw       r4, 0x44(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x40(r1)
	  lfd       f0, 0x40(r1)
	  fsubs     f0, f0, f2
	  fdivs     f1, f1, f0
	  b         .loc_0x190

	.loc_0x18C:
	  lfs       f1, 0x14DC(r2)

	.loc_0x190:
	  lfs       f31, 0x14D8(r2)
	  lfs       f0, 0x14E8(r2)
	  fsubs     f2, f31, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x1B0
	  fdivs     f31, f2, f0
	  b         .loc_0x1D0

	.loc_0x1B0:
	  lfs       f0, 0x14EC(r2)
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x1C4
	  b         .loc_0x1D0

	.loc_0x1C4:
	  lfs       f1, 0x14F0(r2)
	  fneg      f0, f1
	  fmadds    f31, f1, f2, f0

	.loc_0x1D0:
	  mr        r3, r30
	  lfs       f0, 0x14D8(r2)
	  lwz       r12, 0x0(r30)
	  li        r4, 0
	  fsubs     f1, f0, f31
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  fmr       f1, f31
	  lwz       r12, 0x0(r30)
	  li        r4, 0x1
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x28(r31)
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r3, 0x0(r3)
	  stw       r30, 0x54(r3)

	.loc_0x220:
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
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
	  psq_l     f31,0x58(r1),0,0
	  lwz       r0, 0x64(r1)
	  lfd       f31, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C11A8
 * Size:	000150
 */
void title::TBGEnemyBase::setArchive(JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  lis       r4, 0x8049
	  stw       r28, 0x10(r1)
	  addi      r31, r4, 0x61D8
	  mr        r28, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  addi      r4, r31, 0x70
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r30, r3
	  bne-      .loc_0x60
	  addi      r3, r31, 0x28
	  addi      r5, r31, 0x3C
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x396BC4

	.loc_0x60:
	  mr        r3, r30
	  lis       r4, 0x2010
	  bl        -0x35197C
	  stw       r3, 0x2C(r28)
	  mr        r3, r29
	  addi      r4, r31, 0x7C
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r30, r3
	  bne-      .loc_0xA4
	  addi      r3, r31, 0x28
	  addi      r5, r31, 0x3C
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x396C08

	.loc_0xA4:
	  mr        r3, r30
	  bl        -0x34ECB0
	  stw       r3, 0x44(r28)
	  lis       r4, 0x4
	  lwz       r3, 0x2C(r28)
	  bl        -0x33D988
	  lwz       r3, 0x2C(r28)
	  bl        -0x33D838
	  lwz       r3, 0x2C(r28)
	  lwz       r4, 0x44(r28)
	  lwz       r0, 0x18(r3)
	  rlwinm    r3,r0,0,28,31
	  bl        -0x355B54
	  stw       r3, 0x48(r28)
	  li        r3, 0xDC
	  lfs       f0, 0x14DC(r2)
	  stfs      f0, 0x14(r28)
	  bl        -0x39D3EC
	  mr.       r31, r3
	  beq-      .loc_0x12C
	  lis       r3, 0x804A
	  lwz       r30, 0x2C(r28)
	  addi      r0, r3, 0x19F0
	  mr        r29, r31
	  stw       r0, 0x0(r31)
	  addi      r3, r29, 0x88
	  bl        -0x36266C
	  mr        r3, r29
	  bl        -0x35AFC0
	  mr        r3, r29
	  mr        r4, r30
	  lis       r5, 0x2
	  li        r6, 0x1
	  bl        -0x35AF50

	.loc_0x12C:
	  stw       r31, 0x28(r28)
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
 * Address:	803C12F8
 * Size:	00005C
 */
void title::TBGEnemyBase::start(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, 0x44(r3)
	  addi      r3, r31, 0x30
	  lha       r4, 0x6(r4)
	  bl        -0x359CA0
	  li        r0, 0
	  lfs       f1, 0x14E4(r2)
	  stb       r0, 0x34(r31)
	  lfs       f2, 0x14E0(r2)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x3C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C1354
 * Size:	000124
 */
void title::TBGEnemyBase::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f7, 0x14D8(r2)
	  stw       r0, 0x44(r1)
	  lfs       f6, 0x14DC(r2)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lfs       f0, 0x10(r3)
	  addi      r3, r1, 0x8
	  lfs       f1, 0x18(r30)
	  fneg      f8, f0
	  lwz       r4, 0x28(r30)
	  lfs       f5, 0xC(r30)
	  fmr       f2, f1
	  addi      r31, r4, 0x24
	  fmsubs    f3, f7, f8, f6
	  fmuls     f4, f6, f8
	  fnmsubs   f0, f7, f5, f6
	  stfs      f3, 0x24(r4)
	  fmr       f3, f1
	  fmsubs    f4, f6, f5, f4
	  stfs      f6, 0x28(r4)
	  stfs      f5, 0x2C(r4)
	  lfs       f5, 0x4(r30)
	  stfs      f5, 0x30(r4)
	  stfs      f4, 0x34(r4)
	  stfs      f7, 0x38(r4)
	  stfs      f6, 0x3C(r4)
	  stfs      f6, 0x40(r4)
	  stfs      f0, 0x44(r4)
	  stfs      f6, 0x48(r4)
	  stfs      f8, 0x4C(r4)
	  lfs       f0, 0x8(r30)
	  fneg      f0, f0
	  stfs      f0, 0x50(r4)
	  bl        -0x2D6C10
	  mr        r3, r31
	  mr        r5, r31
	  addi      r4, r1, 0x8
	  bl        -0x2D70F4
	  addi      r3, r30, 0x30
	  bl        -0x359D54
	  lfs       f0, 0x40(r30)
	  lwz       r3, 0x44(r30)
	  stfs      f0, 0x8(r3)
	  lwz       r3, 0x28(r30)
	  lwz       r0, 0x48(r30)
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r3, 0x0(r3)
	  stw       r0, 0x54(r3)
	  lwz       r3, 0x28(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x28(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x28(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C1478
 * Size:	0002D8
 */
void title::TBlackPlane::setArchive(JKRArchive*)
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
	  mr        r29, r4
	  mr        r3, r29
	  addi      r4, r2, 0x1500
	  stw       r28, 0x10(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r28, r3
	  bne-      .loc_0x60
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6200
	  li        r4, 0x102
	  addi      r5, r5, 0x6214
	  crclr     6, 0x6
	  bl        -0x396E94

	.loc_0x60:
	  mr        r3, r28
	  lis       r4, 0x1010
	  bl        -0x351C4C
	  stw       r3, 0x2C(r31)
	  mr        r3, r29
	  addi      r4, r2, 0x1508
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r28, r3
	  bne-      .loc_0xAC
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6200
	  li        r4, 0x10C
	  addi      r5, r5, 0x6214
	  crclr     6, 0x6
	  bl        -0x396EE0

	.loc_0xAC:
	  mr        r3, r28
	  bl        -0x34EF88
	  stw       r3, 0x44(r31)
	  mr        r3, r29
	  addi      r4, r2, 0x1510
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r28, r3
	  bne-      .loc_0xF4
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6200
	  li        r4, 0x111
	  addi      r5, r5, 0x6214
	  crclr     6, 0x6
	  bl        -0x396F28

	.loc_0xF4:
	  mr        r3, r28
	  bl        -0x34EFD0
	  stw       r3, 0x60(r31)
	  lwz       r3, 0x2C(r31)
	  lwz       r4, 0x44(r31)
	  lwz       r0, 0x18(r3)
	  rlwinm    r3,r0,0,28,31
	  bl        -0x355E60
	  stw       r3, 0x48(r31)
	  li        r3, 0xDC
	  lfs       f0, 0x14DC(r2)
	  stfs      f0, 0x14(r31)
	  bl        -0x39D6F8
	  mr.       r29, r3
	  beq-      .loc_0x168
	  lis       r3, 0x804A
	  lwz       r30, 0x2C(r31)
	  addi      r0, r3, 0x19F0
	  mr        r28, r29
	  stw       r0, 0x0(r29)
	  addi      r3, r28, 0x88
	  bl        -0x362978
	  mr        r3, r28
	  bl        -0x35B2CC
	  mr        r3, r28
	  mr        r4, r30
	  lis       r5, 0x2
	  li        r6, 0x1
	  bl        -0x35B25C

	.loc_0x168:
	  stw       r29, 0x28(r31)
	  lwz       r4, 0x28(r31)
	  lwz       r3, 0x60(r31)
	  lwz       r4, 0x4(r4)
	  bl        -0x357F14
	  li        r29, 0
	  b         .loc_0x284

	.loc_0x184:
	  li        r3, 0xF4
	  bl        -0x39D75C
	  mr.       r30, r3
	  beq-      .loc_0x248
	  lis       r3, 0x804A
	  lis       r4, 0x8008
	  addi      r0, r3, 0x1B10
	  li        r6, 0x8
	  lis       r3, 0x8007
	  stw       r0, 0x0(r30)
	  subi      r5, r3, 0x5B9C
	  addi      r4, r4, 0x3CF0
	  addi      r3, r30, 0x4
	  li        r7, 0x2
	  bl        -0x2FFDF8
	  lis       r3, 0x8008
	  lis       r5, 0x8007
	  addi      r4, r3, 0x3EF0
	  li        r6, 0x8
	  addi      r3, r30, 0x14
	  subi      r5, r5, 0x5B60
	  li        r7, 0x8
	  bl        -0x2FFE18
	  lis       r3, 0x8008
	  lis       r5, 0x8007
	  addi      r4, r3, 0x3D08
	  li        r6, 0xC
	  addi      r3, r30, 0x54
	  subi      r5, r5, 0x5B24
	  li        r7, 0x8
	  bl        -0x2FFE38
	  lis       r3, 0x8008
	  lis       r5, 0x8007
	  addi      r4, r3, 0x424C
	  li        r6, 0x8
	  addi      r3, r30, 0xB4
	  subi      r5, r5, 0x5ADC
	  li        r7, 0x4
	  bl        -0x2FFE58
	  lis       r3, 0x8008
	  lis       r5, 0x8007
	  addi      r4, r3, 0x4234
	  li        r6, 0x8
	  addi      r3, r30, 0xD4
	  subi      r5, r5, 0x5AA0
	  li        r7, 0x4
	  bl        -0x2FFE78
	  mr        r3, r30
	  bl        -0x3575C8

	.loc_0x248:
	  lwz       r3, 0x28(r31)
	  rlwinm    r28,r29,2,14,29
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x60(r3)
	  lwzx      r3, r3, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x28(r31)
	  addi      r29, r29, 0x1
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x60(r3)
	  lwzx      r3, r3, r28
	  stw       r30, 0x3C(r3)

	.loc_0x284:
	  lwz       r4, 0x28(r31)
	  rlwinm    r3,r29,0,16,31
	  lwz       r5, 0x4(r4)
	  lhz       r0, 0x5C(r5)
	  cmplw     r3, r0
	  blt+      .loc_0x184
	  lwz       r4, 0x60(r31)
	  addi      r3, r5, 0x58
	  bl        -0x33CEB4
	  lis       r5, 0x8051
	  mr        r4, r3
	  subi      r3, r5, 0xDD0
	  bl        -0x362BD8
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
 * Address:	803C1750
 * Size:	0000A0
 */
void title::TBlackPlane::start(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, 0x44(r3)
	  addi      r3, r31, 0x30
	  lha       r4, 0x6(r4)
	  subi      r0, r4, 0x2
	  extsh     r4, r0
	  bl        -0x35A100
	  li        r0, 0
	  lfs       f1, 0x14E4(r2)
	  stb       r0, 0x34(r31)
	  addi      r3, r31, 0x4C
	  lfs       f2, 0x14E0(r2)
	  lwz       r4, -0x6514(r13)
	  lfs       f0, 0x54(r4)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x3C(r31)
	  lwz       r4, 0x60(r31)
	  lha       r4, 0x6(r4)
	  subi      r0, r4, 0x2
	  extsh     r4, r0
	  bl        -0x35A13C
	  li        r0, 0
	  lfs       f1, 0x14E4(r2)
	  stb       r0, 0x50(r31)
	  lfs       f2, 0x14E0(r2)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x58(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C17F0
 * Size:	000110
 */
void title::TBlackPlane::updateBeforeCamera(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f7, 0x14D8(r2)
	  stw       r0, 0x44(r1)
	  lfs       f6, 0x14DC(r2)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lfs       f0, 0x10(r3)
	  addi      r3, r1, 0x8
	  lfs       f1, 0x18(r30)
	  fneg      f8, f0
	  lwz       r4, 0x28(r30)
	  lfs       f5, 0xC(r30)
	  fmr       f2, f1
	  addi      r31, r4, 0x24
	  fmsubs    f3, f7, f8, f6
	  fmuls     f4, f6, f8
	  fnmsubs   f0, f7, f5, f6
	  stfs      f3, 0x24(r4)
	  fmr       f3, f1
	  fmsubs    f4, f6, f5, f4
	  stfs      f6, 0x28(r4)
	  stfs      f5, 0x2C(r4)
	  lfs       f5, 0x4(r30)
	  stfs      f5, 0x30(r4)
	  stfs      f4, 0x34(r4)
	  stfs      f7, 0x38(r4)
	  stfs      f6, 0x3C(r4)
	  stfs      f6, 0x40(r4)
	  stfs      f0, 0x44(r4)
	  stfs      f6, 0x48(r4)
	  stfs      f8, 0x4C(r4)
	  lfs       f0, 0x8(r30)
	  fneg      f0, f0
	  stfs      f0, 0x50(r4)
	  bl        -0x2D70AC
	  mr        r3, r31
	  mr        r5, r31
	  addi      r4, r1, 0x8
	  bl        -0x2D7590
	  addi      r3, r30, 0x30
	  bl        -0x35A1F0
	  addi      r3, r30, 0x4C
	  bl        -0x35A1F8
	  lfs       f0, 0x5C(r30)
	  lwz       r3, 0x60(r30)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x40(r30)
	  lwz       r3, 0x44(r30)
	  stfs      f0, 0x8(r3)
	  lwz       r3, 0x28(r30)
	  lwz       r0, 0x48(r30)
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r3, 0x0(r3)
	  stw       r0, 0x54(r3)
	  lwz       r3, 0x28(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C1900
 * Size:	000050
 */
void title::TBlackPlane::updateAfterCamera(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x28(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C1950
 * Size:	00004C
 */
void title::TBlackPlane::setLogo(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r0, 0x4330
	  lfd       f1, 0x1518(r2)
	  lha       r4, 0x38(r3)
	  stw       r0, 0x8(r1)
	  xoris     r4, r4, 0x8000
	  stw       r4, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x10(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x40(r3)
	  lha       r0, 0x54(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x5C(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C199C
 * Size:	000078
 */
void title::TBlackPlane::getCameraPos(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lis       r4, 0x8049
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r4, r4, 0x6260
	  lwz       r5, 0x28(r31)
	  lwz       r3, 0x4(r5)
	  lwz       r3, 0x54(r3)
	  bl        -0x392C48
	  lwz       r4, 0x28(r31)
	  mulli     r0, r3, 0x30
	  lwz       r3, 0x84(r4)
	  lwz       r3, 0xC(r3)
	  add       r3, r3, r0
	  lfs       f2, 0x2C(r3)
	  lfs       f1, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x0(r30)
	  stfs      f1, 0x4(r30)
	  stfs      f2, 0x8(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace ebi

/*
 * --INFO--
 * Address:	803C1A14
 * Size:	000028
 */
void __sinit_ebiP2TitleUnit_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804E
	  stw       r0, -0x65C8(r13)
	  stfsu     f0, 0x79B8(r3)
	  stfs      f0, -0x65C4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
