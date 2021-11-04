#include "types.h"

/*
 * --INFO--
 * Address:	8001B130
 * Size:	000064
 */
void JKRArchive::mount(const char*, JKRArchive::EMountMode, JKRHeap*,
                       JKRArchive::EMountDirection)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  bl        0xC1010
	  cmpwi     r3, 0
	  bge-      .loc_0x38
	  li        r3, 0
	  b         .loc_0x48

	.loc_0x38:
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  bl        0xF8

	.loc_0x48:
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
 * Address:	8001B194
 * Size:	0000D8
 */
void JKRArchive::mount(void*, JKRHeap*, JKRArchive::EMountDirection)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  mr        r7, r4
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bne-      .loc_0x24
	  lwz       r7, -0x77D4(r13)

	.loc_0x24:
	  lis       r3, 0x8050
	  lwz       r8, 0x6E24(r3)
	  b         .loc_0x70

	.loc_0x30:
	  lwz       r3, 0x0(r8)
	  lwz       r6, 0x2C(r3)
	  subis     r0, r6, 0x5241
	  cmplwi    r0, 0x5243
	  bne-      .loc_0x6C
	  lwz       r0, 0x40(r3)
	  cmpw      r0, r31
	  bne-      .loc_0x6C
	  lwz       r0, 0x38(r3)
	  cmplw     r0, r7
	  bne-      .loc_0x6C
	  lwz       r6, 0x34(r3)
	  addi      r0, r6, 0x1
	  stw       r0, 0x34(r3)
	  b         .loc_0x7C

	.loc_0x6C:
	  lwz       r8, 0xC(r8)

	.loc_0x70:
	  cmplwi    r8, 0
	  bne+      .loc_0x30
	  li        r3, 0

	.loc_0x7C:
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  b         .loc_0xC4

	.loc_0x88:
	  cmpwi     r5, 0x1
	  li        r3, 0x70
	  li        r5, -0x4
	  bne-      .loc_0x9C
	  li        r5, 0x4

	.loc_0x9C:
	  bl        0x8D10
	  mr.       r0, r3
	  beq-      .loc_0xC0
	  lis       r5, 0x1
	  mr        r4, r31
	  subi      r5, r5, 0x1
	  li        r6, 0
	  bl        0x94B4
	  mr        r0, r3

	.loc_0xC0:
	  mr        r3, r0

	.loc_0xC4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001B26C
 * Size:	0001D8
 */
void JKRArchive::mount(long, JKRArchive::EMountMode, JKRHeap*,
                       JKRArchive::EMountDirection)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  mr        r7, r5
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r6
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x2C
	  lwz       r7, -0x77D4(r13)

	.loc_0x2C:
	  lis       r3, 0x8050
	  lwz       r8, 0x6E24(r3)
	  b         .loc_0x78

	.loc_0x38:
	  lwz       r3, 0x0(r8)
	  lwz       r6, 0x2C(r3)
	  subis     r0, r6, 0x5241
	  cmplwi    r0, 0x5243
	  bne-      .loc_0x74
	  lwz       r0, 0x40(r3)
	  cmpw      r0, r30
	  bne-      .loc_0x74
	  lwz       r0, 0x38(r3)
	  cmplw     r0, r7
	  bne-      .loc_0x74
	  lwz       r6, 0x34(r3)
	  addi      r0, r6, 0x1
	  stw       r0, 0x34(r3)
	  b         .loc_0x84

	.loc_0x74:
	  lwz       r8, 0xC(r8)

	.loc_0x78:
	  cmplwi    r8, 0
	  bne+      .loc_0x38
	  li        r3, 0

	.loc_0x84:
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  b         .loc_0x1C0

	.loc_0x90:
	  cmpwi     r31, 0x1
	  li        r0, -0x4
	  bne-      .loc_0xA0
	  li        r0, 0x4

	.loc_0xA0:
	  cmpwi     r4, 0x3
	  beq-      .loc_0x128
	  bge-      .loc_0xBC
	  cmpwi     r4, 0x1
	  beq-      .loc_0xC8
	  bge-      .loc_0xF8
	  b         .loc_0x184

	.loc_0xBC:
	  cmpwi     r4, 0x5
	  bge-      .loc_0x184
	  b         .loc_0x158

	.loc_0xC8:
	  mr        r4, r5
	  mr        r5, r0
	  li        r3, 0x70
	  bl        0x8C00
	  mr.       r0, r3
	  beq-      .loc_0xF0
	  mr        r4, r30
	  mr        r5, r31
	  bl        0x92F0
	  mr        r0, r3

	.loc_0xF0:
	  mr        r4, r0
	  b         .loc_0x184

	.loc_0xF8:
	  mr        r4, r5
	  mr        r5, r0
	  li        r3, 0x6C
	  bl        0x8BD0
	  mr.       r0, r3
	  beq-      .loc_0x120
	  mr        r4, r30
	  mr        r5, r31
	  bl        -0x2A2C
	  mr        r0, r3

	.loc_0x120:
	  mr        r4, r0
	  b         .loc_0x184

	.loc_0x128:
	  mr        r4, r5
	  mr        r5, r0
	  li        r3, 0x6C
	  bl        0x8BA0
	  mr.       r0, r3
	  beq-      .loc_0x150
	  mr        r4, r30
	  mr        r5, r31
	  bl        0x31C8
	  mr        r0, r3

	.loc_0x150:
	  mr        r4, r0
	  b         .loc_0x184

	.loc_0x158:
	  mr        r4, r5
	  mr        r5, r0
	  li        r3, 0x80
	  bl        0x8B70
	  mr.       r0, r3
	  beq-      .loc_0x180
	  mr        r4, r30
	  mr        r5, r31
	  bl        0x7D4
	  mr        r0, r3

	.loc_0x180:
	  mr        r4, r0

	.loc_0x184:
	  cmplwi    r4, 0
	  beq-      .loc_0x1BC
	  lbz       r0, 0x3C(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x1BC
	  cmplwi    r4, 0
	  beq-      .loc_0x1B8
	  mr        r3, r4
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1B8:
	  li        r4, 0

	.loc_0x1BC:
	  mr        r3, r4

	.loc_0x1C0:
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
 * Address:	8001B444
 * Size:	000088
 */
void JKRArchive::becomeCurrent(const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x0(r4)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  cmpwi     r0, 0x2F
	  bne-      .loc_0x40
	  lbzu      r0, 0x1(r4)
	  extsb.    r0, r0
	  bne-      .loc_0x30
	  li        r4, 0

	.loc_0x30:
	  mr        r3, r31
	  li        r5, 0
	  bl        -0xE6C
	  b         .loc_0x48

	.loc_0x40:
	  lwz       r5, -0x7890(r13)
	  bl        -0xE78

	.loc_0x48:
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm.   r4,r0,1,31,31
	  beq-      .loc_0x70
	  stw       r31, -0x77E0(r13)
	  lwz       r0, 0x48(r31)
	  sub       r0, r3, r0
	  srawi     r0, r0, 0x4
	  addze     r0, r0
	  stw       r0, -0x7890(r13)

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  mr        r3, r4
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001B4CC
 * Size:	000078
 */
void JKRArchive::getDirEntry(JKRArchive::SDirEntry*, unsigned long) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r4, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x738
	  cmplwi    r3, 0
	  bne-      .loc_0x34
	  li        r3, 0
	  b         .loc_0x60

	.loc_0x34:
	  lwz       r0, 0x4(r3)
	  lwz       r4, 0x54(r30)
	  rlwinm    r0,r0,8,24,31
	  stb       r0, 0x0(r31)
	  lhz       r0, 0x0(r3)
	  sth       r0, 0x2(r31)
	  lwz       r0, 0x4(r3)
	  li        r3, 0x1
	  rlwinm    r0,r0,0,8,31
	  add       r0, r4, r0
	  stw       r0, 0x4(r31)

	.loc_0x60:
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
 * Address:	8001B544
 * Size:	0000B8
 */
void JKRArchive::getGlbResource(unsigned long, const char*, JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  li        r6, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  beq-      .loc_0x4C
	  mr        r3, r5
	  mr        r4, r29
	  lwz       r12, 0x0(r5)
	  mr        r5, r30
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x9C

	.loc_0x4C:
	  lis       r3, 0x8050
	  lwz       r31, 0x6E24(r3)
	  b         .loc_0x90

	.loc_0x58:
	  lwz       r3, 0x0(r31)
	  lwz       r4, 0x2C(r3)
	  subis     r0, r4, 0x5241
	  cmplwi    r0, 0x5243
	  bne-      .loc_0x8C
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  mr        r5, r30
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  mr.       r6, r3
	  bne-      .loc_0x98

	.loc_0x8C:
	  lwz       r31, 0xC(r31)

	.loc_0x90:
	  cmplwi    r31, 0
	  bne+      .loc_0x58

	.loc_0x98:
	  mr        r3, r6

	.loc_0x9C:
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
 * Address:	8001B5FC
 * Size:	00007C
 */
void JKRArchive::getResource(const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x0(r4)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  cmpwi     r0, 0x2F
	  bne-      .loc_0x34
	  addi      r4, r4, 0x1
	  li        r5, 0
	  bl        -0xBB0
	  mr        r4, r3
	  b         .loc_0x40

	.loc_0x34:
	  lwz       r5, -0x7890(r13)
	  bl        -0xBC0
	  mr        r4, r3

	.loc_0x40:
	  cmplwi    r4, 0
	  beq-      .loc_0x64
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r5, 0
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x68

	.loc_0x64:
	  li        r3, 0

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001B678
 * Size:	000080
 */
void JKRArchive::getResource(unsigned long, const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x28
	  subis     r0, r4, 0x3F3F
	  cmplwi    r0, 0x3F3F
	  bne-      .loc_0x3C

	.loc_0x28:
	  mr        r3, r31
	  mr        r4, r5
	  bl        -0x8CC
	  mr        r4, r3
	  b         .loc_0x44

	.loc_0x3C:
	  bl        -0xD34
	  mr        r4, r3

	.loc_0x44:
	  cmplwi    r4, 0
	  beq-      .loc_0x68
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r5, 0
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x6C

	.loc_0x68:
	  li        r3, 0

	.loc_0x6C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001B6F8
 * Size:	000054
 */
void JKRArchive::getIdxResource(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x958
	  mr.       r4, r3
	  beq-      .loc_0x3C
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  li        r5, 0
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x40

	.loc_0x3C:
	  li        r3, 0

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001B74C
 * Size:	0000AC
 */
void JKRArchive::readResource(void*, unsigned long, unsigned long, const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r6, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  beq-      .loc_0x38
	  subis     r0, r6, 0x3F3F
	  cmplwi    r0, 0x3F3F
	  bne-      .loc_0x4C

	.loc_0x38:
	  mr        r3, r29
	  mr        r4, r7
	  bl        -0x9B0
	  mr        r6, r3
	  b         .loc_0x5C

	.loc_0x4C:
	  mr        r4, r6
	  mr        r5, r7
	  bl        -0xE20
	  mr        r6, r3

	.loc_0x5C:
	  cmplwi    r6, 0
	  beq-      .loc_0x8C
	  lwz       r12, 0x0(r29)
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x44(r12)
	  addi      r7, r1, 0x8
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r1)
	  b         .loc_0x90

	.loc_0x8C:
	  li        r3, 0

	.loc_0x90:
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
 * Address:	8001B7F8
 * Size:	0000A4
 */
void JKRArchive::readResource(void*, unsigned long, const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  lbz       r0, 0x0(r6)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  cmpwi     r0, 0x2F
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bne-      .loc_0x44
	  addi      r4, r6, 0x1
	  li        r5, 0
	  bl        -0xDBC
	  mr        r6, r3
	  b         .loc_0x54

	.loc_0x44:
	  lwz       r5, -0x7890(r13)
	  mr        r4, r6
	  bl        -0xDD0
	  mr        r6, r3

	.loc_0x54:
	  cmplwi    r6, 0
	  beq-      .loc_0x84
	  lwz       r12, 0x0(r29)
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x44(r12)
	  addi      r7, r1, 0x8
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r1)
	  b         .loc_0x88

	.loc_0x84:
	  li        r3, 0

	.loc_0x88:
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
 * Address:	8001B89C
 * Size:	00007C
 */
void JKRArchive::readResource(void*, unsigned long, unsigned short)
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
	  mr        r4, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0xA10
	  mr.       r6, r3
	  beq-      .loc_0x5C
	  lwz       r12, 0x0(r29)
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x44(r12)
	  addi      r7, r1, 0x8
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r1)
	  b         .loc_0x60

	.loc_0x5C:
	  li        r3, 0

	.loc_0x60:
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
 * Address:	8001B918
 * Size:	000098
 */
void JKRArchive::removeResourceAll()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r0, 0x44(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x78
	  lbz       r0, 0x3C(r28)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x78
	  lwz       r30, 0x4C(r28)
	  li        r29, 0
	  li        r31, 0
	  b         .loc_0x68

	.loc_0x48:
	  lwz       r3, 0x10(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  lwz       r4, 0x38(r28)
	  bl        0x7CFC
	  stw       r31, 0x10(r30)

	.loc_0x60:
	  addi      r30, r30, 0x14
	  addi      r29, r29, 0x1

	.loc_0x68:
	  lwz       r3, 0x44(r28)
	  lwz       r0, 0x8(r3)
	  cmplw     r29, r0
	  blt+      .loc_0x48

	.loc_0x78:
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
 * Address:	8001B9B0
 * Size:	000060
 */
void JKRArchive::removeResource(void*)
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
	  bl        -0xB4C
	  cmplwi    r3, 0
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x48

	.loc_0x30:
	  li        r0, 0
	  stw       r0, 0x10(r3)
	  mr        r3, r31
	  lwz       r4, 0x38(r30)
	  bl        0x7C7C
	  li        r3, 0x1

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
 * Address:	8001BA10
 * Size:	00003C
 */
void JKRArchive::detachResource(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0xB9C
	  cmplwi    r3, 0
	  bne-      .loc_0x20
	  li        r3, 0
	  b         .loc_0x2C

	.loc_0x20:
	  li        r0, 0
	  stw       r0, 0x10(r3)
	  li        r3, 0x1

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001BA4C
 * Size:	000034
 */
void JKRArchive::getResSize(const void*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0xBD8
	  cmplwi    r3, 0
	  bne-      .loc_0x20
	  li        r3, -0x1
	  b         .loc_0x24

	.loc_0x20:
	  lwz       r3, 0xC(r3)

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001BA80
 * Size:	000060
 */
void JKRArchive::countFile(const char*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x0(r4)
	  cmpwi     r0, 0x2F
	  bne-      .loc_0x34
	  lbzu      r0, 0x1(r4)
	  extsb.    r0, r0
	  bne-      .loc_0x28
	  li        r4, 0

	.loc_0x28:
	  li        r5, 0
	  bl        -0x149C
	  b         .loc_0x3C

	.loc_0x34:
	  lwz       r5, -0x7890(r13)
	  bl        -0x14A8

	.loc_0x3C:
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lhz       r3, 0xA(r3)
	  b         .loc_0x50

	.loc_0x4C:
	  li        r3, 0

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001BAE0
 * Size:	0000AC
 */
void JKRArchive::getFirstFile(const char*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x0(r4)
	  stw       r31, 0xC(r1)
	  cmpwi     r0, 0x2F
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x48
	  lbzu      r0, 0x1(r4)
	  extsb.    r0, r0
	  bne-      .loc_0x34
	  li        r4, 0

	.loc_0x34:
	  mr        r3, r30
	  li        r5, 0
	  bl        -0x150C
	  mr        r31, r3
	  b         .loc_0x54

	.loc_0x48:
	  lwz       r5, -0x7890(r13)
	  bl        -0x151C
	  mr        r31, r3

	.loc_0x54:
	  cmplwi    r31, 0
	  beq-      .loc_0x90
	  lwz       r4, -0x77D8(r13)
	  li        r3, 0x24
	  li        r5, 0
	  bl        0x83F8
	  mr.       r0, r3
	  beq-      .loc_0x88
	  lwz       r5, 0xC(r31)
	  mr        r4, r30
	  lhz       r6, 0xA(r31)
	  bl        0x6F7C
	  mr        r0, r3

	.loc_0x88:
	  mr        r3, r0
	  b         .loc_0x94

	.loc_0x90:
	  li        r3, 0

	.loc_0x94:
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
 * Address:	8001BB8C
 * Size:	00002C
 */
void JKRArchive::getExpandedResSize(const void*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
