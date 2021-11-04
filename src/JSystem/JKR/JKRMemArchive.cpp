#include "types.h"

/*
 * --INFO--
 * Address:	80024644
 * Size:	0000BC
 */
JKRMemArchive::JKRMemArchive(long, JKRArchive::EMountDirection)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  li        r5, 0x1
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0xA1B0
	  lis       r3, 0x804A
	  li        r0, 0
	  subi      r4, r3, 0xA0
	  mr        r3, r29
	  stw       r4, 0x0(r29)
	  mr        r4, r30
	  stb       r0, 0x30(r29)
	  stw       r31, 0x60(r29)
	  lwz       r5, 0x60(r29)
	  bl        0x1DC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x64
	  mr        r3, r29
	  b         .loc_0xA0

	.loc_0x64:
	  lis       r4, 0x5241
	  lis       r3, 0x8050
	  addi      r0, r4, 0x5243
	  stw       r0, 0x2C(r29)
	  addi      r4, r29, 0x18
	  addi      r3, r3, 0x6E24
	  lwz       r5, 0x48(r29)
	  lwz       r6, 0x54(r29)
	  lwz       r0, 0x4(r5)
	  add       r0, r6, r0
	  stw       r0, 0x28(r29)
	  bl        0x22C8
	  li        r0, 0x1
	  mr        r3, r29
	  stb       r0, 0x30(r29)

	.loc_0xA0:
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
 * Address:	80024700
 * Size:	0000C8
 */
JKRMemArchive::JKRMemArchive(void*, unsigned long, JKRMemBreakFlag)
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
	  li        r5, 0x1
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bl        -0xA274
	  lis       r3, 0x804A
	  li        r0, 0
	  subi      r4, r3, 0xA0
	  mr        r3, r28
	  stw       r4, 0x0(r28)
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  stb       r0, 0x30(r28)
	  bl        0x280
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x6C
	  mr        r3, r28
	  b         .loc_0xA8

	.loc_0x6C:
	  lis       r4, 0x5241
	  lis       r3, 0x8050
	  addi      r0, r4, 0x5243
	  stw       r0, 0x2C(r28)
	  addi      r4, r28, 0x18
	  addi      r3, r3, 0x6E24
	  lwz       r5, 0x48(r28)
	  lwz       r6, 0x54(r28)
	  lwz       r0, 0x4(r5)
	  add       r0, r6, r0
	  stw       r0, 0x28(r28)
	  bl        0x2204
	  li        r0, 0x1
	  mr        r3, r28
	  stb       r0, 0x30(r28)

	.loc_0xA8:
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
 * Address:	800247C8
 * Size:	0000A8
 */
JKRMemArchive::~JKRMemArchive()
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
	  beq-      .loc_0x8C
	  lis       r3, 0x804A
	  subi      r0, r3, 0xA0
	  stw       r0, 0x0(r30)
	  lbz       r0, 0x30(r30)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x70
	  lbz       r0, 0x6C(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  lwz       r3, 0x64(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  lwz       r4, 0x38(r30)
	  bl        -0x11B0

	.loc_0x58:
	  lis       r3, 0x8050
	  addi      r4, r30, 0x18
	  addi      r3, r3, 0x6E24
	  bl        0x23F8
	  li        r0, 0
	  stb       r0, 0x30(r30)

	.loc_0x70:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0xA2DC
	  extsh.    r0, r31
	  ble-      .loc_0x8C
	  mr        r3, r30
	  bl        -0x79C

	.loc_0x8C:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80024870
 * Size:	000168
 */
void JKRMemArchive::open(long, JKRArchive::EMountDirection)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r0, 0x64(r3)
	  stw       r0, 0x44(r3)
	  stw       r0, 0x68(r3)
	  stw       r0, 0x48(r3)
	  stw       r0, 0x4C(r3)
	  stw       r0, 0x54(r3)
	  stb       r0, 0x6C(r3)
	  stw       r5, 0x60(r3)
	  lwz       r0, 0x60(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x8C
	  addi      r0, r1, 0x14
	  mr        r3, r4
	  stw       r0, 0x8(r1)
	  addi      r10, r31, 0x5C
	  li        r4, 0
	  li        r5, 0x1
	  lwz       r7, 0x38(r31)
	  li        r6, 0
	  li        r8, 0x1
	  li        r9, 0
	  bl        -0x56A0
	  stw       r3, 0x64(r31)
	  lwz       r3, 0x64(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  lwz       r4, 0x14(r1)
	  bl        0xC7DF8
	  b         .loc_0xD0

	.loc_0x8C:
	  addi      r0, r1, 0x10
	  mr        r3, r4
	  stw       r0, 0x8(r1)
	  addi      r10, r31, 0x5C
	  li        r4, 0
	  li        r5, 0x1
	  lwz       r7, 0x38(r31)
	  li        r6, 0
	  li        r8, 0x2
	  li        r9, 0
	  bl        -0x56E8
	  stw       r3, 0x64(r31)
	  lwz       r3, 0x64(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  lwz       r4, 0x10(r1)
	  bl        0xC7DB0

	.loc_0xD0:
	  lwz       r4, 0x64(r31)
	  cmplwi    r4, 0
	  bne-      .loc_0xE8
	  li        r0, 0
	  stb       r0, 0x3C(r31)
	  b         .loc_0x144

	.loc_0xE8:
	  lwz       r3, 0x8(r4)
	  li        r0, 0x1
	  add       r3, r4, r3
	  stw       r3, 0x44(r31)
	  lwz       r4, 0x44(r31)
	  lwz       r3, 0x4(r4)
	  add       r3, r4, r3
	  stw       r3, 0x48(r31)
	  lwz       r4, 0x44(r31)
	  lwz       r3, 0xC(r4)
	  add       r3, r4, r3
	  stw       r3, 0x4C(r31)
	  lwz       r4, 0x44(r31)
	  lwz       r3, 0x14(r4)
	  add       r3, r4, r3
	  stw       r3, 0x54(r31)
	  lwz       r5, 0x64(r31)
	  lwz       r4, 0xC(r5)
	  lwz       r3, 0x8(r5)
	  add       r3, r3, r4
	  add       r3, r5, r3
	  stw       r3, 0x68(r31)
	  stb       r0, 0x6C(r31)

	.loc_0x144:
	  lbz       r3, 0x3C(r31)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800249D8
 * Size:	0000AC
 */
void JKRMemArchive::open(void*, unsigned long, JKRMemBreakFlag)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  subfic    r0, r6, 0x1
	  cntlzw    r0, r0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  rlwinm    r0,r0,27,5,31
	  stw       r4, 0x64(r3)
	  mr        r3, r4
	  lwz       r5, 0x64(r31)
	  lwz       r4, 0x8(r5)
	  add       r4, r5, r4
	  stw       r4, 0x44(r31)
	  lwz       r5, 0x44(r31)
	  lwz       r4, 0x4(r5)
	  add       r4, r5, r4
	  stw       r4, 0x48(r31)
	  lwz       r5, 0x44(r31)
	  lwz       r4, 0xC(r5)
	  add       r4, r5, r4
	  stw       r4, 0x4C(r31)
	  lwz       r5, 0x44(r31)
	  lwz       r4, 0x14(r5)
	  add       r4, r5, r4
	  stw       r4, 0x54(r31)
	  lwz       r6, 0x64(r31)
	  lwz       r5, 0xC(r6)
	  lwz       r4, 0x8(r6)
	  add       r4, r4, r5
	  add       r4, r6, r4
	  stw       r4, 0x68(r31)
	  stb       r0, 0x6C(r31)
	  bl        -0x1168
	  stw       r3, 0x38(r31)
	  li        r0, 0
	  li        r3, 0x1
	  stw       r0, 0x5C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80024A84
 * Size:	000034
 */
void JKRMemArchive::fetchResource(JKRArchive::SDIFileEntry*, unsigned long*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x10(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C
	  lwz       r3, 0x68(r3)
	  lwz       r0, 0x8(r4)
	  add       r0, r3, r0
	  stw       r0, 0x10(r4)

	.loc_0x1C:
	  cmplwi    r5, 0
	  beq-      .loc_0x2C
	  lwz       r0, 0xC(r4)
	  stw       r0, 0x0(r5)

	.loc_0x2C:
	  lwz       r3, 0x10(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80024AB8
 * Size:	0000C8
 */
void JKRMemArchive::fetchResource(void*, unsigned long,
                                  JKRArchive::SDIFileEntry*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r8, r5
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r7
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  lwz       r31, 0xC(r6)
	  cmplw     r31, r8
	  ble-      .loc_0x34
	  mr        r31, r8

	.loc_0x34:
	  lwz       r4, 0x10(r6)
	  cmplwi    r4, 0
	  beq-      .loc_0x50
	  mr        r3, r29
	  mr        r5, r31
	  bl        -0x1F964
	  b         .loc_0x9C

	.loc_0x50:
	  lwz       r4, 0x4(r6)
	  rlwinm.   r0,r4,8,29,29
	  rlwinm    r4,r4,8,24,31
	  bne-      .loc_0x68
	  li        r7, 0
	  b         .loc_0x7C

	.loc_0x68:
	  rlwinm.   r0,r4,0,24,24
	  beq-      .loc_0x78
	  li        r7, 0x2
	  b         .loc_0x7C

	.loc_0x78:
	  li        r7, 0x1

	.loc_0x7C:
	  lwz       r0, 0x8(r6)
	  mr        r4, r31
	  lwz       r3, 0x68(r3)
	  mr        r5, r29
	  mr        r6, r8
	  add       r3, r3, r0
	  bl        0xC0
	  mr        r31, r3

	.loc_0x9C:
	  cmplwi    r30, 0
	  beq-      .loc_0xA8
	  stw       r31, 0x0(r30)

	.loc_0xA8:
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
 * Address:	80024B80
 * Size:	000050
 */
void JKRMemArchive::removeResourceAll()
{
	/*
	.loc_0x0:
	  lwz       r0, 0x44(r3)
	  cmplwi    r0, 0
	  beqlr-
	  lbz       r0, 0x3C(r3)
	  cmplwi    r0, 0x1
	  beqlr-
	  lwz       r6, 0x4C(r3)
	  li        r7, 0
	  li        r5, 0
	  b         .loc_0x3C

	.loc_0x28:
	  lwz       r0, 0x10(r6)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  stw       r5, 0x10(r6)

	.loc_0x38:
	  addi      r7, r7, 0x1

	.loc_0x3C:
	  lwz       r4, 0x44(r3)
	  lwz       r0, 0x8(r4)
	  cmplw     r7, r0
	  blt+      .loc_0x28
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80024BD0
 * Size:	00003C
 */
void JKRMemArchive::removeResource(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x9D5C
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
 * Address:	80024C0C
 * Size:	0000D4
 */
void JKRMemArchive::fetchResource_subroutine(unsigned char*, unsigned long,
                                             unsigned char*, unsigned long, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r7, 0
	  mr        r8, r3
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  beq-      .loc_0x30
	  blt-      .loc_0xA0
	  cmpwi     r7, 0x3
	  bge-      .loc_0xA0
	  b         .loc_0x54

	.loc_0x30:
	  cmplw     r31, r6
	  ble-      .loc_0x3C
	  mr        r31, r6

	.loc_0x3C:
	  mr        r3, r5
	  mr        r4, r8
	  mr        r5, r31
	  bl        -0x1FAB8
	  mr        r3, r31
	  b         .loc_0xC0

	.loc_0x54:
	  lbz       r0, 0x5(r8)
	  lbz       r3, 0x4(r8)
	  rlwinm    r0,r0,16,0,15
	  lbz       r4, 0x6(r8)
	  rlwimi    r0,r3,24,0,7
	  lbz       r7, 0x7(r8)
	  rlwimi    r0,r4,8,16,23
	  or        r0, r7, r0
	  cmplw     r0, r6
	  mr        r31, r0
	  ble-      .loc_0x84
	  mr        r31, r6

	.loc_0x84:
	  mr        r3, r8
	  mr        r4, r5
	  mr        r5, r31
	  li        r6, 0
	  bl        -0x8164
	  mr        r3, r31
	  b         .loc_0xC0

	.loc_0xA0:
	  lis       r3, 0x8047
	  lis       r5, 0x8047
	  addi      r3, r3, 0x3A78
	  li        r4, 0x2D3
	  addi      r5, r5, 0x3A8C
	  crclr     6, 0x6
	  bl        0xC8AA8
	  li        r3, 0

	.loc_0xC0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80024CE0
 * Size:	000090
 */
void JKRMemArchive::getExpandedResSize(const void*) const
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
	  bl        -0x9E7C
	  cmplwi    r3, 0
	  bne-      .loc_0x30
	  li        r3, -0x1
	  b         .loc_0x78

	.loc_0x30:
	  lwz       r0, 0x4(r3)
	  rlwinm.   r0,r0,8,29,29
	  bne-      .loc_0x58
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x78

	.loc_0x58:
	  lbz       r0, 0x5(r31)
	  lbz       r3, 0x4(r31)
	  rlwinm    r0,r0,16,0,15
	  lbz       r4, 0x6(r31)
	  rlwimi    r0,r3,24,0,7
	  lbz       r5, 0x7(r31)
	  rlwimi    r0,r4,8,16,23
	  or        r3, r5, r0

	.loc_0x78:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
