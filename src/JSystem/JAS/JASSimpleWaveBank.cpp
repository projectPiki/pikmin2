#include "types.h"

/*
 * --INFO--
 * Address:	8009B6C4
 * Size:	000060
 */
JASSimpleWaveBank::JASSimpleWaveBank()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x37F8
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0x0(r3)
	  addi      r3, r31, 0x4
	  bl        0x3AC
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r4, r3, 0x386C
	  mr        r3, r31
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x14
	  stw       r4, 0x4(r31)
	  stw       r0, 0x60(r31)
	  stw       r0, 0x64(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009B724
 * Size:	0000D4
 */
JASSimpleWaveBank::~JASSimpleWaveBank()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr.       r29, r3
	  beq-      .loc_0xB4
	  lis       r4, 0x804A
	  lis       r3, 0x800A
	  addi      r4, r4, 0x386C
	  stw       r4, 0x0(r29)
	  addi      r0, r4, 0x14
	  subi      r4, r3, 0x4808
	  stw       r0, 0x4(r29)
	  lwz       r3, 0x60(r29)
	  bl        0x25FE0
	  addic.    r0, r29, 0x4
	  beq-      .loc_0x90
	  lis       r3, 0x804A
	  addic.    r31, r29, 0x8
	  addi      r0, r3, 0x38D8
	  stw       r0, 0x4(r29)
	  beq-      .loc_0x90
	  cmplwi    r31, 0
	  beq-      .loc_0x90
	  addic.    r3, r29, 0x14
	  beq-      .loc_0x7C
	  li        r4, 0
	  bl        -0x74FCC

	.loc_0x7C:
	  cmplwi    r31, 0
	  beq-      .loc_0x90
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x74F48

	.loc_0x90:
	  cmplwi    r29, 0
	  beq-      .loc_0xA4
	  lis       r3, 0x804A
	  addi      r0, r3, 0x37F8
	  stw       r0, 0x0(r29)

	.loc_0xA4:
	  extsh.    r0, r30
	  ble-      .loc_0xB4
	  mr        r3, r29
	  bl        -0x77720

	.loc_0xB4:
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
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
 * Address:	8009B7F8
 * Size:	00005C
 */
JASSimpleWaveBank::TWaveHandle::~TWaveHandle(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x3858
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x37BC
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x77784

	.loc_0x44:
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
 * Address:	8009B854
 * Size:	000084
 */
void JASSimpleWaveBank::setWaveTableSize(unsigned long)
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
	  lis       r3, 0x800A
	  subi      r0, r3, 0x4808
	  lwz       r3, 0x60(r30)
	  mr        r4, r0
	  bl        0x25EC8
	  bl        0x7AC
	  mulli     r6, r31, 0x30
	  mr        r4, r3
	  li        r5, 0
	  addi      r3, r6, 0x10
	  bl        -0x77850
	  lis       r4, 0x800A
	  lis       r5, 0x800A
	  subi      r4, r4, 0x4728
	  mr        r7, r31
	  subi      r5, r5, 0x4808
	  li        r6, 0x30
	  bl        0x2613C
	  stw       r3, 0x60(r30)
	  stw       r31, 0x64(r30)
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
 * Address:	8009B8D8
 * Size:	000024
 */
JASSimpleWaveBank::TWaveHandle::TWaveHandle(void)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r5, r5, 0x37BC
	  li        r0, 0
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x3858
	  stw       r4, 0x0(r3)
	  stw       r0, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009B8FC
 * Size:	000024
 */
void JASSimpleWaveBank::getWaveHandle(unsigned long) const
{
	/*
	.loc_0x0:
	  lwz       r0, 0x64(r3)
	  cmplw     r4, r0
	  blt-      .loc_0x14
	  li        r3, 0
	  blr

	.loc_0x14:
	  mulli     r0, r4, 0x30
	  lwz       r3, 0x60(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009B920
 * Size:	000094
 */
void JASSimpleWaveBank::setWaveInfo(unsigned long, const JASWaveInfo&)
{
	/*
	.loc_0x0:
	  mulli     r11, r4, 0x30
	  lwz       r0, 0x60(r3)
	  lbz       r8, 0x0(r5)
	  addi      r6, r3, 0x4C
	  lbz       r7, 0x1(r5)
	  addi      r4, r3, 0x8
	  addi      r10, r11, 0x4
	  lfs       f0, 0x4(r5)
	  add       r10, r0, r10
	  lwz       r0, 0x8(r5)
	  stb       r8, 0x0(r10)
	  lwz       r9, 0xC(r5)
	  stb       r7, 0x1(r10)
	  lwz       r8, 0x10(r5)
	  stfs      f0, 0x4(r10)
	  lwz       r7, 0x14(r5)
	  stw       r0, 0x8(r10)
	  lwz       r0, 0x18(r5)
	  stw       r9, 0xC(r10)
	  lwz       r9, 0x1C(r5)
	  stw       r8, 0x10(r10)
	  lha       r8, 0x20(r5)
	  stw       r7, 0x14(r10)
	  lha       r7, 0x22(r5)
	  stw       r0, 0x18(r10)
	  lwz       r0, 0x24(r5)
	  stw       r9, 0x1C(r10)
	  sth       r8, 0x20(r10)
	  sth       r7, 0x22(r10)
	  stw       r0, 0x24(r10)
	  lwz       r0, 0x60(r3)
	  add       r5, r0, r11
	  stw       r6, 0x28(r5)
	  lwz       r0, 0x60(r3)
	  add       r3, r0, r11
	  stw       r4, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009B9B4
 * Size:	000020
 */
void JASSimpleWaveBank::getWaveArc(int)
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0
	  beq-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  cmplwi    r3, 0
	  beqlr-
	  addi      r3, r3, 0x4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009B9D4
 * Size:	000008
 */
void JASSimpleWaveBank::TWaveHandle::getWaveInfo() const
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009B9DC
 * Size:	000024
 */
void JASSimpleWaveBank::TWaveHandle::getWavePtr() const
{
	/*
	.loc_0x0:
	  lwz       r4, 0x2C(r3)
	  lwz       r4, 0x38(r4)
	  cmplwi    r4, 0
	  bne-      .loc_0x18
	  li        r3, 0
	  blr

	.loc_0x18:
	  lwz       r0, 0xC(r3)
	  add       r3, r4, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009BA00
 * Size:	000004
 */
void JASWaveArc::onLoadDone() { }

/*
 * --INFO--
 * Address:	8009BA04
 * Size:	000004
 */
void JASWaveArc::onEraseDone() { }
