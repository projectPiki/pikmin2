#include "types.h"

/*
 * --INFO--
 * Address:	80084A00
 * Size:	0001E0
 */
J3DMaterialFactory_v21::J3DMaterialFactory_v21(const J3DMaterialBlock_v21&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lhz       r0, 0x8(r4)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r4, 0xC(r4)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  sth       r0, 0x0(r30)
	  bl        0x16C0
	  stw       r3, 0x4(r30)
	  mr        r3, r31
	  lwz       r4, 0x10(r31)
	  bl        -0x3B5B8
	  stw       r3, 0x8(r30)
	  mr        r3, r31
	  lwz       r4, 0x18(r31)
	  bl        -0x2FFA4
	  stw       r3, 0x30(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        -0x2FFCC
	  stw       r3, 0xC(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        -0x3B618
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  bl        -0x1523C
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        -0x3B638
	  stw       r3, 0x18(r30)
	  mr        r3, r31
	  lwz       r4, 0x2C(r31)
	  bl        -0x1528C
	  stw       r3, 0x1C(r30)
	  mr        r3, r31
	  lwz       r4, 0x30(r31)
	  bl        -0x152B4
	  stw       r3, 0x20(r30)
	  mr        r3, r31
	  lwz       r4, 0x34(r31)
	  bl        -0x152DC
	  stw       r3, 0x24(r30)
	  mr        r3, r31
	  lwz       r4, 0x38(r31)
	  bl        -0x152EC
	  stw       r3, 0x28(r30)
	  mr        r3, r31
	  lwz       r4, 0x3C(r31)
	  bl        -0x3B658
	  stw       r3, 0x2C(r30)
	  mr        r3, r31
	  lwz       r4, 0x40(r31)
	  bl        -0x15324
	  stw       r3, 0x34(r30)
	  mr        r3, r31
	  lwz       r4, 0x44(r31)
	  bl        -0x300E4
	  stw       r3, 0x38(r30)
	  mr        r3, r31
	  lwz       r4, 0x48(r31)
	  bl        -0x3007C
	  stw       r3, 0x3C(r30)
	  mr        r3, r31
	  lwz       r4, 0x4C(r31)
	  bl        -0x3B6C8
	  stw       r3, 0x40(r30)
	  mr        r3, r31
	  lwz       r4, 0x50(r31)
	  bl        -0x1537C
	  stw       r3, 0x44(r30)
	  mr        r3, r31
	  lwz       r4, 0x54(r31)
	  bl        -0x153A4
	  stw       r3, 0x48(r30)
	  mr        r3, r31
	  lwz       r4, 0x58(r31)
	  bl        -0x153CC
	  stw       r3, 0x4C(r30)
	  mr        r3, r31
	  lwz       r4, 0x5C(r31)
	  bl        -0x153F4
	  stw       r3, 0x50(r30)
	  mr        r3, r31
	  lwz       r4, 0x60(r31)
	  bl        -0x1541C
	  stw       r3, 0x54(r30)
	  mr        r3, r31
	  lwz       r4, 0x64(r31)
	  bl        -0x15444
	  stw       r3, 0x58(r30)
	  mr        r3, r31
	  lwz       r4, 0x68(r31)
	  bl        -0x1546C
	  stw       r3, 0x5C(r30)
	  mr        r3, r31
	  lwz       r4, 0x6C(r31)
	  bl        -0x3B748
	  stw       r3, 0x60(r30)
	  mr        r3, r31
	  lwz       r4, 0x70(r31)
	  bl        -0x3B758
	  stw       r3, 0x64(r30)
	  mr        r3, r31
	  lwz       r4, 0x74(r31)
	  bl        -0x154B4
	  stw       r3, 0x68(r30)
	  mr        r3, r30
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
 * Address:	80084BE0
 * Size:	00004C
 */
void J3DMaterialFactory_v21::countUniqueMaterials()
{
	/*
	.loc_0x0:
	  lhz       r5, 0x0(r3)
	  li        r3, 0
	  cmplwi    r5, 0
	  blelr-
	  cmplwi    r5, 0x8
	  subi      r0, r5, 0x8
	  ble-      .loc_0x3C
	  rlwinm    r0,r0,0,16,31
	  b         .loc_0x28

	.loc_0x24:
	  addi      r3, r3, 0x8

	.loc_0x28:
	  rlwinm    r4,r3,0,16,31
	  cmplw     r4, r0
	  blt+      .loc_0x24
	  b         .loc_0x3C

	.loc_0x38:
	  addi      r3, r3, 0x1

	.loc_0x3C:
	  rlwinm    r0,r3,0,16,31
	  cmplw     r0, r5
	  blt+      .loc_0x38
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80084C2C
 * Size:	000838
 */
void J3DMaterialFactory_v21::create(J3DMaterial*, int, unsigned long) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  li        r7, 0
	  stw       r0, 0xF4(r1)
	  stmw      r19, 0xBC(r1)
	  mr        r30, r3
	  lwz       r3, 0x8(r3)
	  rlwinm    r27,r5,1,0,30
	  mr        r29, r5
	  lwz       r5, 0x4(r30)
	  mr        r31, r4
	  lhzx      r0, r3, r27
	  mr        r3, r7
	  mulli     r0, r0, 0x138
	  add       r4, r5, r0
	  lbz       r0, 0x4(r4)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x50
	  lwz       r3, 0x40(r30)
	  lbzx      r3, r3, r0

	.loc_0x50:
	  lhz       r0, 0x70(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x60
	  li        r7, 0x1

	.loc_0x60:
	  lhz       r0, 0x72(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x70
	  addi      r7, r7, 0x1

	.loc_0x70:
	  lhz       r0, 0x74(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x80
	  addi      r7, r7, 0x1

	.loc_0x80:
	  lhz       r0, 0x76(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x90
	  addi      r7, r7, 0x1

	.loc_0x90:
	  lhz       r0, 0x78(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xA0
	  addi      r7, r7, 0x1

	.loc_0xA0:
	  lhz       r0, 0x7A(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xB0
	  addi      r7, r7, 0x1

	.loc_0xB0:
	  lhz       r0, 0x7C(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xC0
	  addi      r7, r7, 0x1

	.loc_0xC0:
	  lhz       r0, 0x7E(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xD0
	  addi      r7, r7, 0x1

	.loc_0xD0:
	  cmplw     r3, r7
	  beq-      .loc_0xF0
	  cmplwi    r7, 0
	  beq-      .loc_0xF0
	  cmplw     r3, r7
	  ble-      .loc_0xF4
	  mr        r7, r3
	  b         .loc_0xF4

	.loc_0xF0:
	  mr        r7, r3

	.loc_0xF4:
	  rlwinm    r28,r6,16,27,31
	  cmplw     r7, r28
	  ble-      .loc_0x104
	  mr        r28, r7

	.loc_0x104:
	  cmplwi    r28, 0x8
	  li        r25, 0x8
	  bgt-      .loc_0x114
	  mr        r25, r28

	.loc_0x114:
	  lbz       r0, 0x3(r4)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x12C
	  lwz       r3, 0x18(r30)
	  lbzx      r26, r3, r0
	  b         .loc_0x130

	.loc_0x12C:
	  li        r26, 0

	.loc_0x130:
	  li        r0, 0x4
	  cmplwi    r31, 0
	  subc      r3, r0, r26
	  rlwinm    r23,r6,0,0,1
	  rlwinm    r0,r6,0,4,5
	  rlwinm    r22,r6,0,2,3
	  subfe     r3, r3, r3
	  rlwinm    r21,r6,8,31,31
	  andc      r24, r0, r3
	  bne-      .loc_0x190
	  li        r3, 0x4C
	  bl        -0x60EE4
	  mr.       r31, r3
	  beq-      .loc_0x190
	  lis       r4, 0x804A
	  lis       r5, 0x3CF4
	  addi      r0, r4, 0x15D8
	  lis       r4, 0xF4
	  stw       r0, 0x0(r31)
	  subi      r5, r5, 0x3100
	  subi      r0, r4, 0x30C4
	  stw       r5, 0x40(r31)
	  stw       r0, 0x44(r31)
	  bl        -0x22620

	.loc_0x190:
	  mr        r3, r23
	  bl        -0x238E0
	  stw       r3, 0x24(r31)
	  mr        r3, r24
	  bl        -0x23590
	  stw       r3, 0x28(r31)
	  rlwinm    r3,r28,0,16,31
	  bl        -0x2336C
	  stw       r3, 0x2C(r31)
	  mr        r3, r21
	  bl        -0x22C68
	  stw       r3, 0x30(r31)
	  mr        r3, r22
	  lwz       r4, 0x8(r30)
	  lwz       r5, 0x4(r30)
	  lhzx      r0, r4, r27
	  mulli     r0, r0, 0x138
	  lbzx      r4, r5, r0
	  bl        -0x22A70
	  stw       r3, 0x34(r31)
	  mr        r3, r30
	  lwz       r5, 0x8(r30)
	  mr        r4, r29
	  sth       r29, 0x14(r31)
	  lwz       r6, 0x4(r30)
	  lhzx      r0, r5, r27
	  mulli     r0, r0, 0x138
	  lbzx      r0, r6, r0
	  stw       r0, 0x10(r31)
	  bl        0x6C4
	  mr        r4, r3
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0xA80
	  mr        r4, r3
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x848
	  mr        r4, r3
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x60
	  bl        0x11A4
	  lwz       r6, 0x60(r1)
	  addi      r4, r1, 0x70
	  lwz       r5, 0x64(r1)
	  lwz       r3, 0x68(r1)
	  lwz       r0, 0x6C(r1)
	  stw       r6, 0x70(r1)
	  stw       r5, 0x74(r1)
	  stw       r3, 0x78(r1)
	  stw       r0, 0x7C(r1)
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x80
	  bl        0xD44
	  lwz       r3, 0x34(r31)
	  addi      r4, r1, 0x80
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x34
	  bl        0xF68
	  lwz       r3, 0x34(r31)
	  addi      r4, r1, 0x34
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x30
	  bl        0xFC0
	  lwz       r3, 0x34(r31)
	  addi      r4, r1, 0x30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x14
	  bl        0x1014
	  lhz       r0, 0x14(r1)
	  addi      r4, r1, 0x18
	  sth       r0, 0x18(r1)
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1048
	  mr        r4, r3
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x105C
	  mr        r4, r3
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0xB24
	  mr        r4, r3
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  li        r19, 0
	  b         .loc_0x3F8

	.loc_0x3CC:
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x914
	  mr        r5, r3
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r19,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x3F8:
	  rlwinm    r5,r19,0,24,31
	  cmplw     r5, r25
	  blt+      .loc_0x3CC
	  li        r19, 0
	  b         .loc_0x444

	.loc_0x40C:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x28
	  bl        0x918
	  lwz       r0, 0x28(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x2C
	  stw       r0, 0x2C(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x444:
	  rlwinm    r6,r19,0,24,31
	  cmplw     r6, r28
	  blt+      .loc_0x40C
	  lwz       r24, 0x4(r30)
	  li        r23, 0
	  lwz       r25, 0x8(r30)
	  b         .loc_0x538

	.loc_0x460:
	  lhzx      r0, r27, r25
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x48
	  mulli     r0, r0, 0x138
	  add       r20, r24, r0
	  bl        0xA8C
	  lwz       r3, 0x48(r1)
	  rlwinm    r21,r23,0,24,31
	  lwz       r0, 0x4C(r1)
	  mr        r4, r21
	  stw       r3, 0x50(r1)
	  addi      r5, r1, 0x50
	  stw       r0, 0x54(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r3,r21,1,0,30
	  addi      r22, r3, 0xF0
	  lhzx      r0, r20, r22
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x534
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r0,2,14,29
	  lwz       r5, 0x48(r30)
	  addi      r0, r4, 0x1
	  lwz       r12, 0x0(r3)
	  mr        r4, r21
	  lbzx      r19, r5, r0
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lbz       r6, 0x7(r3)
	  rlwinm    r0,r19,2,22,29
	  lwz       r5, 0x48(r30)
	  mr        r4, r21
	  rlwinm    r6,r6,0,30,27
	  or        r0, r6, r0
	  stb       r0, 0x7(r3)
	  lwz       r3, 0x2C(r31)
	  lhzx      r0, r20, r22
	  lwz       r12, 0x0(r3)
	  rlwinm    r0,r0,2,0,29
	  lwz       r12, 0xA4(r12)
	  lbzx      r19, r5, r0
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x7(r3)
	  rlwinm    r0,r0,0,0,29
	  or        r0, r0, r19
	  stb       r0, 0x7(r3)

	.loc_0x534:
	  addi      r23, r23, 0x1

	.loc_0x538:
	  rlwinm    r6,r23,0,24,31
	  cmplw     r6, r28
	  blt+      .loc_0x460
	  li        r19, 0
	  b         .loc_0x580

	.loc_0x54C:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x24
	  rlwinm    r6,r19,0,24,31
	  bl        0x8E0
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x24
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x580:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x54C
	  li        r19, 0
	  b         .loc_0x5C8

	.loc_0x594:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x40
	  rlwinm    r6,r19,0,24,31
	  bl        0x800
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x40
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x5C8:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x594
	  li        r19, 0
	  b         .loc_0x618

	.loc_0x5DC:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x8
	  rlwinm    r6,r19,0,24,31
	  bl        0x978
	  lbz       r0, 0x8(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0xC
	  stb       r0, 0xC(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x618:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x5DC
	  li        r19, 0
	  b         .loc_0x660

	.loc_0x62C:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x20
	  rlwinm    r6,r19,0,24,31
	  bl        .loc_0x838
	  lwz       r3, 0x24(r31)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x20
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x660:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x2
	  blt+      .loc_0x62C
	  li        r19, 0
	  b         .loc_0x6B0

	.loc_0x674:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x10
	  rlwinm    r6,r19,0,24,31
	  bl        0x27C
	  lhz       r0, 0x10(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x1C
	  sth       r0, 0x1C(r1)
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x6B0:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x674
	  li        r19, 0
	  b         .loc_0x704

	.loc_0x6C4:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x38
	  bl        0x3FC
	  lwz       r3, 0x38(r1)
	  rlwinm    r4,r19,0,24,31
	  lhz       r0, 0x3C(r1)
	  addi      r5, r1, 0x58
	  stw       r3, 0x58(r1)
	  sth       r0, 0x5C(r1)
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x704:
	  rlwinm    r6,r19,0,24,31
	  cmplw     r6, r26
	  blt+      .loc_0x6C4
	  li        r19, 0
	  b         .loc_0x748

	.loc_0x718:
	  mr        r3, r30
	  mr        r4, r29
	  rlwinm    r5,r19,0,24,31
	  bl        0x42C
	  mr        r5, r3
	  lwz       r3, 0x28(r31)
	  rlwinm    r4,r19,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x748:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x718
	  lwz       r3, 0x8(r30)
	  li        r20, 0
	  lwz       r4, 0x4(r30)
	  lhzx      r0, r3, r27
	  mulli     r0, r0, 0x138
	  add       r19, r4, r0
	  b         .loc_0x7B8

	.loc_0x770:
	  rlwinm    r4,r20,0,24,31
	  addi      r0, r4, 0x88
	  lbzx      r5, r19, r0
	  cmplwi    r5, 0xFF
	  beq-      .loc_0x79C
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x7B4

	.loc_0x79C:
	  lwz       r3, 0x2C(r31)
	  li        r5, 0xC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x7B4:
	  addi      r20, r20, 0x1

	.loc_0x7B8:
	  rlwinm    r0,r20,0,24,31
	  cmplw     r0, r28
	  blt+      .loc_0x770
	  li        r20, 0
	  b         .loc_0x814

	.loc_0x7CC:
	  rlwinm    r4,r20,0,24,31
	  addi      r0, r4, 0x98
	  lbzx      r5, r19, r0
	  cmplwi    r5, 0xFF
	  beq-      .loc_0x7F8
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x810

	.loc_0x7F8:
	  lwz       r3, 0x2C(r31)
	  li        r5, 0x1C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl

	.loc_0x810:
	  addi      r20, r20, 0x1

	.loc_0x814:
	  rlwinm    r0,r20,0,24,31
	  cmplw     r0, r28
	  blt+      .loc_0x7CC
	  mr        r3, r31
	  lmw       r19, 0xBC(r1)
	  lwz       r0, 0xF4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr

	.loc_0x838:
	*/
}

/*
 * --INFO--
 * Address:	80085464
 * Size:	000090
 */
void J3DMaterialFactory_v21::newMatColor(int, int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r0,r6,1,0,30
	  lwz       r7, 0x8(r4)
	  rlwinm    r5,r5,1,0,30
	  lwz       r8, -0x7880(r2)
	  lhzx      r5, r7, r5
	  stw       r8, 0x8(r1)
	  mulli     r5, r5, 0x138
	  lwz       r6, 0x4(r4)
	  lbz       r7, 0x9(r1)
	  lbz       r8, 0xA(r1)
	  addi      r5, r5, 0x8
	  lbz       r9, 0xB(r1)
	  add       r0, r5, r0
	  lhzx      r0, r6, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x74
	  lwz       r4, 0xC(r4)
	  rlwinm    r0,r0,2,14,29
	  add       r4, r4, r0
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0x3(r3)
	  b         .loc_0x88

	.loc_0x74:
	  lbz       r0, 0x8(r1)
	  stb       r0, 0x0(r3)
	  stb       r7, 0x1(r3)
	  stb       r8, 0x2(r3)
	  stb       r9, 0x3(r3)

	.loc_0x88:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800854F4
 * Size:	000038
 */
void J3DMaterialFactory_v21::newColorChanNum(int) const
{
	/*
	.loc_0x0:
	  lwz       r5, 0x8(r3)
	  rlwinm    r0,r4,1,0,30
	  lwz       r6, 0x4(r3)
	  lhzx      r0, r5, r0
	  mulli     r4, r0, 0x138
	  addi      r0, r4, 0x2
	  lbzx      r0, r6, r0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x30
	  lwz       r3, 0x10(r3)
	  lbzx      r3, r3, r0
	  blr

	.loc_0x30:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008552C
 * Size:	000194
 */
void J3DMaterialFactory_v21::newColorChan(int, int) const
{
	/*
	.loc_0x0:
	  lwz       r7, 0x8(r4)
	  rlwinm    r5,r5,1,0,30
	  rlwinm    r0,r6,1,0,30
	  lwz       r6, 0x4(r4)
	  lhzx      r5, r7, r5
	  mulli     r5, r5, 0x138
	  addi      r5, r5, 0xC
	  add       r0, r5, r0
	  lhzx      r0, r6, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xE0
	  lwz       r4, 0x14(r4)
	  rlwinm    r0,r0,3,13,28
	  add       r8, r4, r0
	  lbz       r10, 0x5(r8)
	  lbz       r0, 0x2(r8)
	  lbz       r5, 0x0(r8)
	  subi      r7, r10, 0xFF
	  subfic    r6, r10, 0xFF
	  lbz       r4, 0x1(r8)
	  nor       r6, r7, r6
	  rlwinm    r7,r5,1,15,30
	  srawi     r5, r6, 0x1F
	  lbz       r9, 0x4(r8)
	  andc      r5, r10, r5
	  or        r4, r7, r4
	  rlwinm    r6,r4,0,26,24
	  rlwinm    r11,r0,7,18,18
	  rlwinm    r5,r5,6,18,25
	  cntlzw    r4, r9
	  or        r12, r6, r5
	  lbz       r6, 0x3(r8)
	  rlwinm    r5,r4,27,31,31
	  neg       r4, r9
	  rlwimi    r12,r0,2,29,29
	  rlwinm    r10,r0,7,17,17
	  rlwimi    r12,r0,2,28,28
	  neg       r5, r5
	  andc      r5, r6, r5
	  subfic    r6, r9, 0x2
	  rlwimi    r12,r0,2,27,27
	  or        r4, r4, r9
	  rlwimi    r12,r0,2,26,26
	  rlwinm    r7,r5,7,0,24
	  rlwimi    r12,r0,7,20,20
	  subi      r5, r9, 0x2
	  rlwimi    r12,r0,7,19,19
	  rlwimi    r11,r12,0,19,31
	  or        r0, r6, r5
	  rlwimi    r10,r11,0,18,31
	  rlwinm    r5,r10,0,25,22
	  or        r5, r5, r7
	  rlwimi    r5,r0,10,22,22
	  rlwimi    r5,r4,11,21,21
	  sth       r5, 0x0(r3)
	  blr

	.loc_0xE0:
	  subi      r8, r2, 0x7970
	  lis       r4, 0x1
	  lbz       r10, 0x5(r8)
	  subi      r4, r4, 0x1
	  lbz       r0, 0x2(r8)
	  lbz       r5, -0x7970(r2)
	  sub       r7, r10, r4
	  sub       r6, r4, r10
	  lbz       r4, 0x1(r8)
	  nor       r6, r7, r6
	  rlwinm    r7,r5,1,15,30
	  srawi     r5, r6, 0x1F
	  lbz       r9, 0x4(r8)
	  andc      r5, r10, r5
	  or        r4, r7, r4
	  rlwinm    r6,r4,0,26,24
	  rlwinm    r11,r0,7,18,18
	  rlwinm    r5,r5,6,18,25
	  cntlzw    r4, r9
	  or        r12, r6, r5
	  lbz       r6, 0x3(r8)
	  rlwinm    r5,r4,27,31,31
	  neg       r4, r9
	  rlwimi    r12,r0,2,29,29
	  rlwinm    r10,r0,7,17,17
	  rlwimi    r12,r0,2,28,28
	  neg       r5, r5
	  andc      r5, r6, r5
	  subfic    r6, r9, 0x2
	  rlwimi    r12,r0,2,27,27
	  or        r4, r4, r9
	  rlwimi    r12,r0,2,26,26
	  rlwinm    r7,r5,7,0,24
	  rlwimi    r12,r0,7,20,20
	  subi      r5, r9, 0x2
	  rlwimi    r12,r0,7,19,19
	  rlwimi    r11,r12,0,19,31
	  or        r0, r6, r5
	  rlwimi    r10,r11,0,18,31
	  rlwinm    r5,r10,0,25,22
	  or        r5, r5, r7
	  rlwimi    r5,r0,10,22,22
	  rlwimi    r5,r4,11,21,21
	  sth       r5, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800856C0
 * Size:	000038
 */
void J3DMaterialFactory_v21::newTexGenNum(int) const
{
	/*
	.loc_0x0:
	  lwz       r5, 0x8(r3)
	  rlwinm    r0,r4,1,0,30
	  lwz       r6, 0x4(r3)
	  lhzx      r0, r5, r0
	  mulli     r4, r0, 0x138
	  addi      r0, r4, 0x3
	  lbzx      r0, r6, r0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x30
	  lwz       r3, 0x18(r3)
	  lbzx      r3, r3, r0
	  blr

	.loc_0x30:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800856F8
 * Size:	000084
 */
void J3DMaterialFactory_v21::newTexCoord(int, int) const
{
	/*
	.loc_0x0:
	  lwz       r7, 0x8(r4)
	  rlwinm    r5,r5,1,0,30
	  rlwinm    r0,r6,1,0,30
	  lwz       r6, 0x4(r4)
	  lhzx      r5, r7, r5
	  mulli     r5, r5, 0x138
	  addi      r5, r5, 0x14
	  add       r0, r5, r0
	  lhzx      r0, r6, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x5C
	  lwz       r4, 0x1C(r4)
	  rlwinm    r0,r0,2,14,29
	  add       r4, r4, r0
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  lbz       r0, 0x2(r3)
	  sth       r0, 0x4(r3)
	  blr

	.loc_0x5C:
	  lis       r4, 0x8048
	  lbzu      r0, -0x7758(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  lbz       r0, 0x2(r3)
	  sth       r0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008577C
 * Size:	000158
 */
void J3DMaterialFactory_v21::newTexMtx(int, int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lwz       r6, 0x8(r3)
	  rlwinm    r4,r4,1,0,30
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,1,0,30
	  stw       r31, 0x1C(r1)
	  lwz       r31, 0x4(r3)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  li        r3, 0
	  lhzx      r4, r6, r4
	  mulli     r4, r4, 0x138
	  addi      r4, r4, 0x34
	  add       r30, r4, r0
	  lhzx      r0, r31, r30
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x13C
	  li        r3, 0x94
	  bl        -0x61928
	  cmplwi    r3, 0
	  beq-      .loc_0x13C
	  lhzx      r0, r31, r30
	  lwz       r4, 0x24(r29)
	  mulli     r0, r0, 0x64
	  add       r4, r4, r0
	  lfs       f0, 0x24(r4)
	  stfs      f0, 0x24(r3)
	  lfs       f0, 0x28(r4)
	  stfs      f0, 0x28(r3)
	  lfs       f0, 0x2C(r4)
	  stfs      f0, 0x2C(r3)
	  lfs       f0, 0x30(r4)
	  stfs      f0, 0x30(r3)
	  lfs       f0, 0x34(r4)
	  stfs      f0, 0x34(r3)
	  lfs       f0, 0x38(r4)
	  stfs      f0, 0x38(r3)
	  lfs       f0, 0x3C(r4)
	  stfs      f0, 0x3C(r3)
	  lfs       f0, 0x40(r4)
	  stfs      f0, 0x40(r3)
	  lfs       f0, 0x44(r4)
	  stfs      f0, 0x44(r3)
	  lfs       f0, 0x48(r4)
	  stfs      f0, 0x48(r3)
	  lfs       f0, 0x4C(r4)
	  stfs      f0, 0x4C(r3)
	  lfs       f0, 0x50(r4)
	  stfs      f0, 0x50(r3)
	  lfs       f0, 0x54(r4)
	  stfs      f0, 0x54(r3)
	  lfs       f0, 0x58(r4)
	  stfs      f0, 0x58(r3)
	  lfs       f0, 0x5C(r4)
	  stfs      f0, 0x5C(r3)
	  lfs       f0, 0x60(r4)
	  stfs      f0, 0x60(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0xC(r3)
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lfs       f0, 0x10(r4)
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0x14(r4)
	  stfs      f0, 0x14(r3)
	  lha       r0, 0x18(r4)
	  sth       r0, 0x18(r3)
	  lfs       f0, 0x1C(r4)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x20(r4)
	  stfs      f0, 0x20(r3)

	.loc_0x13C:
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
 * Address:	800858D4
 * Size:	000040
 */
void J3DMaterialFactory_v21::newCullMode(int) const
{
	/*
	.loc_0x0:
	  lwz       r5, 0x8(r3)
	  rlwinm    r0,r4,1,0,30
	  lwz       r6, 0x4(r3)
	  lhzx      r0, r5, r0
	  mulli     r4, r0, 0x138
	  addi      r0, r4, 0x1
	  lbzx      r0, r6, r0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x38
	  lwz       r3, 0x30(r3)
	  rlwinm    r0,r0,2,22,29
	  lwzx      r0, r3, r0
	  rlwinm    r3,r0,0,24,31
	  blr

	.loc_0x38:
	  li        r3, 0xFF
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80085914
 * Size:	000048
 */
void J3DMaterialFactory_v21::newTexNo(int, int) const
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  rlwinm    r4,r4,1,0,30
	  rlwinm    r0,r5,1,0,30
	  lwz       r5, 0x4(r3)
	  lhzx      r4, r6, r4
	  mulli     r4, r4, 0x138
	  addi      r4, r4, 0x70
	  add       r0, r4, r0
	  lhzx      r0, r5, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x3C
	  lwz       r3, 0x2C(r3)
	  rlwinm    r0,r0,1,15,30
	  lhzx      r3, r3, r0
	  blr

	.loc_0x3C:
	  lis       r3, 0x1
	  subi      r3, r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008595C
 * Size:	000074
 */
void J3DMaterialFactory_v21::newTevOrder(int, int) const
{
	/*
	.loc_0x0:
	  lwz       r7, 0x8(r4)
	  rlwinm    r5,r5,1,0,30
	  rlwinm    r0,r6,1,0,30
	  lwz       r6, 0x4(r4)
	  lhzx      r5, r7, r5
	  mulli     r5, r5, 0x138
	  addi      r5, r5, 0xA8
	  add       r0, r5, r0
	  lhzx      r0, r6, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x54
	  lwz       r4, 0x34(r4)
	  rlwinm    r0,r0,2,14,29
	  add       r4, r4, r0
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  blr

	.loc_0x54:
	  lbz       r0, -0x7994(r2)
	  subi      r4, r2, 0x7994
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800859D0
 * Size:	000098
 */
void J3DMaterialFactory_v21::newTevColor(int, int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r0,r6,1,0,30
	  lwz       r7, 0x8(r4)
	  rlwinm    r5,r5,1,0,30
	  lwz       r8, 0x2AF0(r2)
	  lhzx      r5, r7, r5
	  lwz       r7, 0x2AF4(r2)
	  mulli     r5, r5, 0x138
	  lwz       r6, 0x4(r4)
	  stw       r8, 0x8(r1)
	  addi      r5, r5, 0xC8
	  stw       r7, 0xC(r1)
	  add       r0, r5, r0
	  lha       r7, 0xA(r1)
	  lhzx      r0, r6, r0
	  lha       r5, 0xC(r1)
	  cmplwi    r0, 0xFFFF
	  lha       r6, 0xE(r1)
	  beq-      .loc_0x7C
	  lwz       r4, 0x38(r4)
	  rlwinm    r0,r0,3,13,28
	  add       r4, r4, r0
	  lha       r0, 0x0(r4)
	  sth       r0, 0x0(r3)
	  lha       r0, 0x2(r4)
	  sth       r0, 0x2(r3)
	  lha       r0, 0x4(r4)
	  sth       r0, 0x4(r3)
	  lha       r0, 0x6(r4)
	  sth       r0, 0x6(r3)
	  b         .loc_0x90

	.loc_0x7C:
	  lha       r0, 0x8(r1)
	  sth       r0, 0x0(r3)
	  sth       r7, 0x2(r3)
	  sth       r5, 0x4(r3)
	  sth       r6, 0x6(r3)

	.loc_0x90:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80085A68
 * Size:	000090
 */
void J3DMaterialFactory_v21::newTevKColor(int, int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r0,r6,1,0,30
	  lwz       r7, 0x8(r4)
	  rlwinm    r5,r5,1,0,30
	  lwz       r8, -0x787C(r2)
	  lhzx      r5, r7, r5
	  stw       r8, 0x8(r1)
	  mulli     r5, r5, 0x138
	  lwz       r6, 0x4(r4)
	  lbz       r7, 0x9(r1)
	  lbz       r8, 0xA(r1)
	  addi      r5, r5, 0x80
	  lbz       r9, 0xB(r1)
	  add       r0, r5, r0
	  lhzx      r0, r6, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x74
	  lwz       r4, 0x3C(r4)
	  rlwinm    r0,r0,2,14,29
	  add       r4, r4, r0
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0x3(r3)
	  b         .loc_0x88

	.loc_0x74:
	  lbz       r0, 0x8(r1)
	  stb       r0, 0x0(r3)
	  stb       r7, 0x1(r3)
	  stb       r8, 0x2(r3)
	  stb       r9, 0x3(r3)

	.loc_0x88:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80085AF8
 * Size:	000038
 */
void J3DMaterialFactory_v21::newTevStageNum(int) const
{
	/*
	.loc_0x0:
	  lwz       r5, 0x8(r3)
	  rlwinm    r0,r4,1,0,30
	  lwz       r6, 0x4(r3)
	  lhzx      r0, r5, r0
	  mulli     r4, r0, 0x138
	  addi      r0, r4, 0x4
	  lbzx      r0, r6, r0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x30
	  lwz       r3, 0x40(r3)
	  lbzx      r3, r3, r0
	  blr

	.loc_0x30:
	  li        r3, 0xFF
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80085B30
 * Size:	000060
 */
void J3DMaterialFactory_v21::newTevStage(int, int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lwz       r7, 0x8(r4)
	  rlwinm    r5,r5,1,0,30
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r6,1,0,30
	  lwz       r6, 0x4(r4)
	  lhzx      r5, r7, r5
	  mulli     r5, r5, 0x138
	  addi      r5, r5, 0xD0
	  add       r0, r5, r0
	  lhzx      r0, r6, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x4C
	  mulli     r0, r0, 0x14
	  lwz       r4, 0x44(r4)
	  add       r4, r4, r0
	  bl        -0x17048
	  b         .loc_0x50

	.loc_0x4C:
	  bl        -0x23CA8

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80085B90
 * Size:	00009C
 */
void J3DMaterialFactory_v21::newTevSwapModeTable(int, int) const
{
	/*
	.loc_0x0:
	  lwz       r7, 0x8(r4)
	  rlwinm    r5,r5,1,0,30
	  rlwinm    r0,r6,1,0,30
	  lwz       r6, 0x4(r4)
	  lhzx      r5, r7, r5
	  mulli     r5, r5, 0x138
	  addi      r5, r5, 0x110
	  add       r0, r5, r0
	  lhzx      r0, r6, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x68
	  lwz       r4, 0x4C(r4)
	  rlwinm    r0,r0,2,14,29
	  add       r6, r4, r0
	  lbz       r5, 0x2(r6)
	  lbz       r0, 0x1(r6)
	  lbz       r4, 0x0(r6)
	  rlwinm    r5,r5,2,0,29
	  rlwinm    r0,r0,4,0,27
	  lbz       r6, 0x3(r6)
	  add       r0, r0, r5
	  rlwinm    r4,r4,6,0,25
	  add       r0, r0, r6
	  add       r0, r4, r0
	  stb       r0, 0x0(r3)
	  blr

	.loc_0x68:
	  subi      r6, r2, 0x7978
	  lbz       r4, -0x7978(r2)
	  lbz       r5, 0x2(r6)
	  lbz       r0, 0x1(r6)
	  rlwinm    r4,r4,6,0,25
	  rlwinm    r5,r5,2,0,29
	  lbz       r6, 0x3(r6)
	  rlwinm    r0,r0,4,0,27
	  add       r0, r0, r5
	  add       r0, r0, r6
	  add       r0, r4, r0
	  stb       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80085C2C
 * Size:	00024C
 */
void J3DMaterialFactory_v21::newFog(int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  rlwinm    r0,r5,1,0,30
	  lwz       r6, 0x8(r4)
	  lis       r5, 0x8048
	  stmw      r26, 0x68(r1)
	  subi      r31, r5, 0x7698
	  lwz       r7, 0x4(r4)
	  lhzx      r0, r6, r0
	  lhz       r10, 0x18(r31)
	  mulli     r5, r0, 0x138
	  lhz       r9, 0x1A(r31)
	  lhz       r8, 0x1C(r31)
	  lhz       r6, 0x1E(r31)
	  addi      r0, r5, 0x130
	  lhz       r5, 0x20(r31)
	  lhzx      r26, r7, r0
	  sth       r10, 0x4C(r1)
	  lbz       r30, 0x0(r31)
	  cmplwi    r26, 0xFFFF
	  sth       r9, 0x4E(r1)
	  lbz       r29, 0x1(r31)
	  sth       r8, 0x50(r1)
	  lhz       r28, 0x2(r31)
	  sth       r6, 0x52(r1)
	  lfs       f3, 0x4(r31)
	  sth       r5, 0x54(r1)
	  lfs       f2, 0x8(r31)
	  lfs       f1, 0xC(r31)
	  lfs       f0, 0x10(r31)
	  lbz       r12, 0x14(r31)
	  lbz       r11, 0x15(r31)
	  lbz       r7, 0x16(r31)
	  lbz       r0, 0x17(r31)
	  lhz       r10, 0x22(r31)
	  lhz       r9, 0x24(r31)
	  lhz       r8, 0x26(r31)
	  lhz       r6, 0x28(r31)
	  lhz       r5, 0x2A(r31)
	  stb       r30, 0x34(r1)
	  stb       r29, 0x35(r1)
	  sth       r28, 0x36(r1)
	  stfs      f3, 0x38(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  stb       r12, 0x48(r1)
	  stb       r11, 0x49(r1)
	  stb       r7, 0x4A(r1)
	  stb       r0, 0x4B(r1)
	  sth       r10, 0x56(r1)
	  sth       r9, 0x58(r1)
	  sth       r8, 0x5A(r1)
	  sth       r6, 0x5C(r1)
	  sth       r5, 0x5E(r1)
	  beq-      .loc_0x1E8
	  mulli     r0, r26, 0x2C
	  lwz       r4, 0x50(r4)
	  add       r8, r4, r0
	  lwz       r0, 0x18(r8)
	  lwz       r4, 0x1C(r8)
	  stw       r0, 0x20(r1)
	  lwz       r0, 0x20(r8)
	  stw       r4, 0x24(r1)
	  lwz       r4, 0x0(r8)
	  stw       r0, 0x28(r1)
	  lwz       r7, 0x4(r8)
	  stw       r4, 0x8(r1)
	  lwz       r6, 0x8(r8)
	  lwz       r5, 0xC(r8)
	  lwz       r4, 0x10(r8)
	  lwz       r0, 0x14(r8)
	  lwz       r28, 0x24(r8)
	  stw       r0, 0x1C(r1)
	  lwz       r29, 0x28(r8)
	  stw       r7, 0xC(r1)
	  lhz       r7, 0x20(r1)
	  stw       r6, 0x10(r1)
	  lhz       r6, 0x22(r1)
	  stw       r5, 0x14(r1)
	  lhz       r5, 0x24(r1)
	  stw       r4, 0x18(r1)
	  lhz       r4, 0x26(r1)
	  lhz       r0, 0x28(r1)
	  sth       r7, 0x4C(r1)
	  lbz       r30, 0x8(r1)
	  lbz       r31, 0x9(r1)
	  lhz       r12, 0xA(r1)
	  lfs       f3, 0xC(r1)
	  lfs       f2, 0x10(r1)
	  lfs       f1, 0x14(r1)
	  lfs       f0, 0x18(r1)
	  lbz       r11, 0x1C(r1)
	  lbz       r10, 0x1D(r1)
	  lbz       r9, 0x1E(r1)
	  lbz       r8, 0x1F(r1)
	  lhz       r7, 0x2A(r1)
	  stw       r28, 0x2C(r1)
	  sth       r6, 0x4E(r1)
	  lhz       r6, 0x2C(r1)
	  sth       r5, 0x50(r1)
	  lhz       r5, 0x2E(r1)
	  stw       r29, 0x30(r1)
	  sth       r4, 0x52(r1)
	  lhz       r4, 0x30(r1)
	  sth       r0, 0x54(r1)
	  lhz       r0, 0x32(r1)
	  stb       r30, 0x34(r1)
	  stb       r31, 0x35(r1)
	  sth       r12, 0x36(r1)
	  stfs      f3, 0x38(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  stb       r11, 0x48(r1)
	  stb       r10, 0x49(r1)
	  stb       r9, 0x4A(r1)
	  stb       r8, 0x4B(r1)
	  sth       r7, 0x56(r1)
	  sth       r6, 0x58(r1)
	  sth       r5, 0x5A(r1)
	  sth       r4, 0x5C(r1)
	  sth       r0, 0x5E(r1)

	.loc_0x1E8:
	  lwz       r0, 0x34(r1)
	  lwz       r4, 0x38(r1)
	  stw       r0, 0x0(r3)
	  lwz       r0, 0x3C(r1)
	  stw       r4, 0x4(r3)
	  lwz       r4, 0x40(r1)
	  stw       r0, 0x8(r3)
	  lwz       r0, 0x44(r1)
	  stw       r4, 0xC(r3)
	  lwz       r4, 0x48(r1)
	  stw       r0, 0x10(r3)
	  lwz       r0, 0x4C(r1)
	  stw       r4, 0x14(r3)
	  lwz       r4, 0x50(r1)
	  stw       r0, 0x18(r3)
	  lwz       r0, 0x54(r1)
	  stw       r4, 0x1C(r3)
	  lwz       r4, 0x58(r1)
	  stw       r0, 0x20(r3)
	  lwz       r0, 0x5C(r1)
	  stw       r4, 0x24(r3)
	  stw       r0, 0x28(r3)
	  lmw       r26, 0x68(r1)
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80085E78
 * Size:	000080
 */
void J3DMaterialFactory_v21::newAlphaComp(int) const
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r4)
	  rlwinm    r0,r5,1,0,30
	  lwz       r7, 0x4(r4)
	  lhzx      r0, r6, r0
	  mulli     r5, r0, 0x138
	  addi      r0, r5, 0x132
	  lhzx      r0, r7, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x64
	  lwz       r4, 0x54(r4)
	  rlwinm    r0,r0,3,13,28
	  add       r6, r4, r0
	  lbz       r0, 0x2(r6)
	  lbz       r4, 0x0(r6)
	  lbz       r5, 0x3(r6)
	  rlwinm    r0,r0,3,0,28
	  rlwinm    r4,r4,5,0,26
	  add       r0, r0, r5
	  add       r0, r4, r0
	  sth       r0, 0x0(r3)
	  lbz       r0, 0x1(r6)
	  stb       r0, 0x2(r3)
	  lbz       r0, 0x4(r6)
	  stb       r0, 0x3(r3)
	  blr

	.loc_0x64:
	  lis       r4, 0x1
	  li        r0, 0
	  subi      r4, r4, 0x1
	  sth       r4, 0x0(r3)
	  stb       r0, 0x2(r3)
	  stb       r0, 0x3(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80085EF8
 * Size:	00007C
 */
void J3DMaterialFactory_v21::newBlend(int) const
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r4)
	  rlwinm    r0,r5,1,0,30
	  lwz       r7, 0x4(r4)
	  lhzx      r0, r6, r0
	  mulli     r5, r0, 0x138
	  addi      r0, r5, 0x134
	  lhzx      r0, r7, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x54
	  lwz       r4, 0x58(r4)
	  rlwinm    r0,r0,2,14,29
	  add       r4, r4, r0
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0x3(r3)
	  blr

	.loc_0x54:
	  lbz       r0, -0x7974(r2)
	  subi      r4, r2, 0x7974
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0x3(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80085F74
 * Size:	000060
 */
void J3DMaterialFactory_v21::newZMode(int) const
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r4)
	  rlwinm    r0,r5,1,0,30
	  lwz       r7, 0x4(r4)
	  lhzx      r0, r6, r0
	  mulli     r5, r0, 0x138
	  addi      r0, r5, 0x6
	  lbzx      r0, r7, r0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x54
	  lwz       r4, 0x5C(r4)
	  rlwinm    r0,r0,2,22,29
	  add       r5, r4, r0
	  lbz       r0, 0x0(r5)
	  lbz       r4, 0x1(r5)
	  lbz       r5, 0x2(r5)
	  rlwinm    r0,r0,4,0,27
	  rlwinm    r4,r4,1,0,30
	  add       r0, r0, r5
	  add       r0, r4, r0
	  sth       r0, 0x0(r3)
	  blr

	.loc_0x54:
	  lhz       r0, -0x7964(r2)
	  sth       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80085FD4
 * Size:	000038
 */
void J3DMaterialFactory_v21::newZCompLoc(int) const
{
	/*
	.loc_0x0:
	  lwz       r5, 0x8(r3)
	  rlwinm    r0,r4,1,0,30
	  lwz       r6, 0x4(r3)
	  lhzx      r0, r5, r0
	  mulli     r4, r0, 0x138
	  addi      r0, r4, 0x5
	  lbzx      r0, r6, r0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x30
	  lwz       r3, 0x60(r3)
	  lbzx      r3, r3, r0
	  blr

	.loc_0x30:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008600C
 * Size:	000038
 */
void J3DMaterialFactory_v21::newDither(int) const
{
	/*
	.loc_0x0:
	  lwz       r5, 0x8(r3)
	  rlwinm    r0,r4,1,0,30
	  lwz       r6, 0x4(r3)
	  lhzx      r0, r5, r0
	  mulli     r4, r0, 0x138
	  addi      r0, r4, 0x7
	  lbzx      r0, r6, r0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x30
	  lwz       r3, 0x64(r3)
	  lbzx      r3, r3, r0
	  blr

	.loc_0x30:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80086044
 * Size:	0000A8
 */
void J3DMaterialFactory_v21::newNBTScale(int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  rlwinm    r0,r5,1,0,30
	  lwz       r6, 0x8(r4)
	  lis       r5, 0x8048
	  subi      r8, r5, 0x766C
	  lwz       r7, 0x4(r4)
	  lhzx      r0, r6, r0
	  lbz       r6, 0x0(r8)
	  mulli     r5, r0, 0x138
	  lfs       f2, 0x4(r8)
	  lfs       f1, 0x8(r8)
	  lfs       f0, 0xC(r8)
	  addi      r0, r5, 0x136
	  stb       r6, 0x8(r1)
	  lhzx      r0, r7, r0
	  stfs      f2, 0xC(r1)
	  cmplwi    r0, 0xFFFF
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  beq-      .loc_0x80
	  lwz       r4, 0x68(r4)
	  rlwinm    r0,r0,4,12,27
	  add       r4, r4, r0
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0xC(r3)
	  b         .loc_0xA0

	.loc_0x80:
	  lwz       r4, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  stw       r4, 0x0(r3)
	  lwz       r4, 0x10(r1)
	  stw       r0, 0x4(r3)
	  lwz       r0, 0x14(r1)
	  stw       r4, 0x8(r3)
	  stw       r0, 0xC(r3)

	.loc_0xA0:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800860EC
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DMaterialInitData_v21>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}
