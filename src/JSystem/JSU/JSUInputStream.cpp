#include "types.h"

/*
 * --INFO--
 * Address:	80026378
 * Size:	00005C
 */
JSUInputStream::~JSUInputStream()
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
	  addi      r0, r3, 0x64
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x30
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x2304

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
 * Address:	800263D4
 * Size:	000058
 */
void JSUInputStream::read(void*, long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r3, r31
	  beq-      .loc_0x40
	  lbz       r0, 0x4(r30)
	  ori       r0, r0, 0x1
	  stb       r0, 0x4(r30)

	.loc_0x40:
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
 * Address:	8002642C
 * Size:	0000B0
 */
void JSUInputStream::read(char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r5, 0x2
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x8
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0x2
	  beq-      .loc_0x58
	  li        r0, 0
	  li        r3, 0
	  stb       r0, 0x0(r31)
	  lbz       r0, 0x4(r30)
	  ori       r0, r0, 0x1
	  stb       r0, 0x4(r30)
	  b         .loc_0x98

	.loc_0x58:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lhz       r5, 0x8(r1)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stbx      r0, r31, r3
	  lhz       r0, 0x8(r1)
	  cmpw      r3, r0
	  beq-      .loc_0x94
	  lbz       r0, 0x4(r30)
	  ori       r0, r0, 0x1
	  stb       r0, 0x4(r30)

	.loc_0x94:
	  mr        r3, r31

	.loc_0x98:
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
 * Address:	800264DC
 * Size:	000088
 */
void JSUInputStream::skip(long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x60

	.loc_0x28:
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r29)
	  li        r5, 0x1
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0x1
	  beq-      .loc_0x5C
	  lbz       r0, 0x4(r29)
	  ori       r0, r0, 0x1
	  stb       r0, 0x4(r29)
	  b         .loc_0x68

	.loc_0x5C:
	  addi      r31, r31, 0x1

	.loc_0x60:
	  cmpw      r31, r30
	  blt+      .loc_0x28

	.loc_0x68:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
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
 * Address:	80026564
 * Size:	00008C
 */
void JSURandomInputStream::align(long)
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
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  add       r4, r31, r3
	  subi      r0, r31, 0x1
	  subi      r4, r4, 0x1
	  andc      r4, r4, r0
	  sub.      r31, r4, r3
	  beq-      .loc_0x70
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  li        r5, 0
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r3, r31
	  beq-      .loc_0x70
	  lbz       r0, 0x4(r30)
	  ori       r0, r0, 0x1
	  stb       r0, 0x4(r30)

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800265F0
 * Size:	00005C
 */
void JSURandomInputStream::skip(long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r3, r31
	  beq-      .loc_0x44
	  lbz       r0, 0x4(r30)
	  ori       r0, r0, 0x1
	  stb       r0, 0x4(r30)

	.loc_0x44:
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
 * Address:	8002664C
 * Size:	0000BC
 */
void JSURandomInputStream::peek(void*, long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  mr        r30, r0
	  mr        r4, r31
	  mr        r5, r29
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  cmpw      r31, r29
	  beq-      .loc_0x74
	  lbz       r0, 0x4(r28)
	  ori       r0, r0, 0x1
	  stb       r0, 0x4(r28)

	.loc_0x74:
	  cmpwi     r31, 0
	  beq-      .loc_0x98
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl

	.loc_0x98:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
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
 * Address:	80026708
 * Size:	000044
 */
void JSURandomInputStream::seek(long, JSUStreamSeekFrom)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x4(r31)
	  rlwinm    r0,r0,0,24,30
	  stb       r0, 0x4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002674C
 * Size:	00006C
 */
JSURandomInputStream::~JSURandomInputStream()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x40
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x64
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x30
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x26E8

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
