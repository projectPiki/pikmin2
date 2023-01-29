#include "types.h"

/*
 * --INFO--
 * Address:	800BC0C8
 * Size:	000008
 */
u32 TRKTerminateSerialHandler(void) { return 0x0; }

/*
 * --INFO--
 * Address:	800BC0D0
 * Size:	0000C4
 */
void TRKInitializeSerialHandler(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x804F
	  lis       r4, 0x8048
	  stw       r0, 0x14(r1)
	  addi      r6, r3, 0x4260
	  li        r0, 0
	  li        r3, -0x1
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x68C0
	  addi      r4, r31, 0
	  li        r5, 0x40
	  stw       r3, 0x0(r6)
	  li        r3, 0x1
	  stw       r0, 0x8(r6)
	  stw       r0, 0xC(r6)
	  crclr     6, 0x6
	  bl        0x5434
	  addi      r4, r31, 0x24
	  li        r3, 0x1
	  li        r5, 0x40
	  crclr     6, 0x6
	  bl        0x5420
	  addi      r4, r31, 0x48
	  li        r3, 0x1
	  li        r5, 0x40
	  crclr     6, 0x6
	  bl        0x540C
	  addi      r4, r31, 0x6C
	  li        r3, 0x1
	  li        r5, 0x40
	  crclr     6, 0x6
	  bl        0x53F8
	  addi      r4, r31, 0x8C
	  li        r3, 0x1
	  li        r5, 0x40
	  crclr     6, 0x6
	  bl        0x53E4
	  addi      r4, r31, 0xAC
	  li        r3, 0x1
	  li        r5, 0x40
	  crclr     6, 0x6
	  bl        0x53D0
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BC194
 * Size:	000050
 */
void TRKProcessInput(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r4, 0x2
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  bl        -0xD04
	  lis       r3, 0x804F
	  li        r0, -0x1
	  addi      r4, r3, 0x4260
	  stw       r31, 0x10(r1)
	  addi      r3, r1, 0x8
	  stw       r0, 0x0(r4)
	  bl        -0xD08
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BC1E4
 * Size:	000060
 */
void TRKGetInput(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  bl        .loc_0x60
	  mr        r31, r3
	  cmpwi     r31, -0x1
	  beq-      .loc_0x4C
	  bl        -0x2A4
	  addi      r3, r1, 0x8
	  li        r4, 0x2
	  bl        -0xD64
	  lis       r3, 0x804F
	  li        r0, -0x1
	  addi      r4, r3, 0x4260
	  stw       r31, 0x10(r1)
	  addi      r3, r1, 0x8
	  stw       r0, 0x0(r4)
	  bl        -0xD68

	.loc_0x4C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x60:
	*/
}

/*
 * --INFO--
 * Address:	800BC244
 * Size:	00013C
 */
void TRKTestForPacket(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x8E0(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x8E4(r1)
	  stw       r31, 0x8DC(r1)
	  subi      r31, r3, 0x68C0
	  stw       r30, 0x8D8(r1)
	  bl        0x43F0
	  cmpwi     r3, 0
	  bgt-      .loc_0x30
	  li        r3, -0x1
	  b         .loc_0x124

	.loc_0x30:
	  addi      r3, r1, 0xC
	  addi      r4, r1, 0x8
	  bl        -0x2F0
	  mr        r30, r3
	  addi      r4, r31, 0xD0
	  li        r3, 0x4
	  mr        r5, r30
	  crclr     6, 0x6
	  bl        0x52B4
	  lwz       r3, 0x8(r1)
	  li        r4, 0
	  bl        -0x414
	  addi      r3, r1, 0x10
	  li        r4, 0x40
	  bl        0x4368
	  cmpwi     r3, 0
	  bne-      .loc_0xF0
	  lwz       r3, 0x8(r1)
	  addi      r4, r1, 0x10
	  li        r5, 0x40
	  bl        -0x6CC
	  lwz       r3, 0x10(r1)
	  lwz       r30, 0xC(r1)
	  subic.    r5, r3, 0x40
	  ble-      .loc_0x10C
	  addi      r4, r31, 0xF4
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x5264
	  lwz       r4, 0x10(r1)
	  addi      r3, r1, 0x50
	  subi      r4, r4, 0x40
	  bl        0x4320
	  cmpwi     r3, 0
	  bne-      .loc_0xD0
	  lwz       r3, 0x8(r1)
	  addi      r4, r1, 0x50
	  lwz       r5, 0x10(r1)
	  bl        -0x714
	  b         .loc_0x10C

	.loc_0xD0:
	  addi      r4, r31, 0x110
	  li        r3, 0x8
	  crclr     6, 0x6
	  bl        0x5228
	  mr        r3, r30
	  bl        -0x42C
	  li        r30, -0x1
	  b         .loc_0x10C

	.loc_0xF0:
	  addi      r4, r31, 0x144
	  li        r3, 0x8
	  crclr     6, 0x6
	  bl        0x5208
	  mr        r3, r30
	  bl        -0x44C
	  li        r30, -0x1

	.loc_0x10C:
	  mr        r5, r30
	  addi      r4, r31, 0x16C
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x51E8
	  mr        r3, r30

	.loc_0x124:
	  lwz       r0, 0x8E4(r1)
	  lwz       r31, 0x8DC(r1)
	  lwz       r30, 0x8D8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x8E0
	  blr
	*/
}
