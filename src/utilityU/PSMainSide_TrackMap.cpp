#include "types.h"

namespace PSM {

/*
 * --INFO--
 * Address:	804718D0
 * Size:	0000A8
 */
BgmTrackMapFile::BgmTrackMapFile(bool)
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
	  bl        -0x138F6C
	  lis       r3, 0x804F
	  addic.    r4, r30, 0x1C
	  subi      r0, r3, 0x68C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x38
	  subi      r4, r4, 0x1C

	.loc_0x38:
	  lis       r3, 0x804F
	  stw       r4, -0x6E40(r13)
	  subi      r3, r3, 0x558
	  rlwinm.   r0,r31,0,24,31
	  stw       r3, 0x0(r30)
	  addi      r4, r3, 0x10
	  li        r3, 0
	  stw       r4, 0x1C(r30)
	  stw       r3, 0x20(r30)
	  stw       r3, 0x24(r30)
	  stb       r31, 0x28(r30)
	  beq-      .loc_0x8C
	  li        r3, 0x7D0
	  bl        -0x44D990
	  lis       r4, 0x8047
	  li        r5, 0
	  addi      r4, r4, 0x2388
	  li        r6, 0x3E
	  li        r7, 0x20
	  bl        -0x3AFF64
	  stw       r3, 0x20(r30)

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
 * Address:	80471978
 * Size:	00077C
 */
void BgmTrackMapFile::readTrackMap(const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x490(r1)
	  mflr      r0
	  stw       r0, 0x494(r1)
	  stmw      r24, 0x470(r1)
	  mr        r24, r4
	  lis       r4, 0x804A
	  mr        r27, r3
	  mr        r28, r5
	  subi      r31, r4, 0x2188
	  lwz       r0, 0x18(r24)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  addi      r3, r31, 0
	  addi      r5, r31, 0x18
	  li        r4, 0x77
	  crclr     6, 0x6
	  bl        -0x447378

	.loc_0x44:
	  lwz       r4, 0x18(r24)
	  addi      r3, r1, 0x48
	  li        r5, -0x1
	  bl        -0x5C0D0
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x54(r1)
	  bne-      .loc_0x6C
	  li        r0, 0
	  stw       r0, 0x45C(r1)

	.loc_0x6C:
	  li        r4, 0
	  addi      r3, r1, 0x8
	  stb       r4, 0x28(r1)
	  stb       r4, 0x29(r1)
	  stb       r4, 0x2A(r1)
	  stb       r4, 0x2B(r1)
	  stb       r4, 0x2C(r1)
	  stb       r4, 0x2D(r1)
	  b         .loc_0x114

	.loc_0x90:
	  rlwinm    r5,r4,0,24,31
	  addi      r0, r4, 0x1
	  addi      r6, r5, 0x26
	  li        r7, 0
	  rlwinm    r5,r0,0,24,31
	  stbx      r7, r3, r6
	  addi      r6, r5, 0x26
	  addi      r0, r4, 0x2
	  rlwinm    r5,r0,0,24,31
	  stbx      r7, r3, r6
	  addi      r6, r5, 0x26
	  addi      r0, r4, 0x3
	  rlwinm    r5,r0,0,24,31
	  stbx      r7, r3, r6
	  addi      r6, r5, 0x26
	  addi      r0, r4, 0x4
	  rlwinm    r5,r0,0,24,31
	  stbx      r7, r3, r6
	  addi      r6, r5, 0x26
	  addi      r0, r4, 0x5
	  rlwinm    r5,r0,0,24,31
	  stbx      r7, r3, r6
	  addi      r6, r5, 0x26
	  addi      r0, r4, 0x6
	  rlwinm    r5,r0,0,24,31
	  stbx      r7, r3, r6
	  addi      r0, r4, 0x7
	  addi      r4, r4, 0x8
	  addi      r6, r5, 0x26
	  rlwinm    r5,r0,0,24,31
	  stbx      r7, r3, r6
	  addi      r0, r5, 0x26
	  stbx      r7, r3, r0

	.loc_0x114:
	  rlwinm    r0,r4,0,24,31
	  cmplwi    r0, 0x10
	  blt+      .loc_0x90
	  li        r0, 0
	  addi      r3, r1, 0x8
	  stb       r0, 0x3E(r1)
	  addi      r4, r2, 0x2A50
	  stb       r0, 0x3F(r1)
	  stb       r0, 0x40(r1)
	  stb       r0, 0x41(r1)
	  stb       r0, 0x42(r1)
	  stb       r0, 0x43(r1)
	  stb       r0, 0x44(r1)
	  stb       r0, 0x45(r1)
	  bl        -0x3A726C
	  addi      r26, r1, 0x8
	  li        r30, 0
	  b         .loc_0x610

	.loc_0x15C:
	  addi      r3, r1, 0x48
	  li        r4, 0
	  li        r5, 0
	  bl        -0x5CA0C
	  addi      r4, r31, 0x24
	  mr        r29, r3
	  bl        -0x3A742C
	  cmpwi     r3, 0
	  bne-      .loc_0x2D0
	  mr        r6, r28
	  addi      r3, r31, 0
	  addi      r5, r31, 0x30
	  li        r4, 0x87
	  crclr     6, 0x6
	  bl        -0x4474CC
	  lbz       r0, 0x28(r1)
	  addi      r8, r1, 0x8
	  li        r9, 0
	  stb       r0, 0x20(r27)
	  lbz       r0, 0x29(r1)
	  stb       r0, 0x21(r27)
	  lbz       r0, 0x2A(r1)
	  stb       r0, 0x22(r27)
	  lbz       r0, 0x2B(r1)
	  stb       r0, 0x23(r27)
	  lbz       r0, 0x2C(r1)
	  stb       r0, 0x24(r27)
	  lbz       r0, 0x2D(r1)
	  stb       r0, 0x25(r27)
	  b         .loc_0x274

	.loc_0x1D4:
	  rlwinm    r3,r9,0,24,31
	  addi      r4, r9, 0x1
	  addi      r3, r3, 0x26
	  addi      r5, r9, 0x2
	  lbzx      r0, r8, r3
	  addi      r6, r9, 0x3
	  rlwinm    r6,r6,0,24,31
	  addi      r10, r9, 0x5
	  rlwinm    r4,r4,0,24,31
	  stbx      r0, r27, r3
	  addi      r3, r4, 0x26
	  addi      r11, r9, 0x6
	  lbzx      r0, r8, r3
	  addi      r4, r9, 0x4
	  addi      r12, r9, 0x7
	  rlwinm    r5,r5,0,24,31
	  stbx      r0, r27, r3
	  addi      r3, r5, 0x26
	  rlwinm    r10,r10,0,24,31
	  addi      r7, r6, 0x26
	  lbzx      r0, r8, r3
	  rlwinm    r4,r4,0,24,31
	  addi      r6, r4, 0x26
	  rlwinm    r11,r11,0,24,31
	  stbx      r0, r27, r3
	  rlwinm    r12,r12,0,24,31
	  addi      r5, r10, 0x26
	  addi      r4, r11, 0x26
	  lbzx      r0, r8, r7
	  addi      r3, r12, 0x26
	  addi      r9, r9, 0x8
	  stbx      r0, r27, r7
	  lbzx      r0, r8, r6
	  stbx      r0, r27, r6
	  lbzx      r0, r8, r5
	  stbx      r0, r27, r5
	  lbzx      r0, r8, r4
	  stbx      r0, r27, r4
	  lbzx      r0, r8, r3
	  stbx      r0, r27, r3

	.loc_0x274:
	  rlwinm    r0,r9,0,24,31
	  cmplwi    r0, 0x10
	  blt+      .loc_0x1D4
	  lbz       r0, 0x3E(r1)
	  mr        r3, r27
	  addi      r4, r1, 0x8
	  stb       r0, 0x36(r27)
	  lbz       r0, 0x3F(r1)
	  stb       r0, 0x37(r27)
	  lbz       r0, 0x40(r1)
	  stb       r0, 0x38(r27)
	  lbz       r0, 0x41(r1)
	  stb       r0, 0x39(r27)
	  lbz       r0, 0x42(r1)
	  stb       r0, 0x3A(r27)
	  lbz       r0, 0x43(r1)
	  stb       r0, 0x3B(r27)
	  lbz       r0, 0x44(r1)
	  stb       r0, 0x3C(r27)
	  lbz       r0, 0x45(r1)
	  stb       r0, 0x3D(r27)
	  bl        -0x3A73E8
	  b         .loc_0x768

	.loc_0x2D0:
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  bl        -0x3A73F8
	  addi      r3, r1, 0x48
	  bl        -0x5D7BC
	  rlwinm    r0,r3,0,24,31
	  stb       r3, 0x28(r1)
	  cmplwi    r0, 0x10
	  blt-      .loc_0x310
	  mr        r6, r28
	  addi      r3, r31, 0
	  addi      r5, r31, 0x48
	  rlwinm    r7,r30,0,24,31
	  li        r4, 0x8E
	  crclr     6, 0x6
	  bl        -0x447644

	.loc_0x310:
	  addi      r3, r1, 0x48
	  bl        -0x5D7F0
	  rlwinm    r0,r3,0,24,31
	  stb       r3, 0x29(r1)
	  cmplwi    r0, 0x10
	  blt-      .loc_0x344
	  mr        r6, r28
	  addi      r3, r31, 0
	  addi      r5, r31, 0x68
	  rlwinm    r7,r30,0,24,31
	  li        r4, 0x91
	  crclr     6, 0x6
	  bl        -0x447678

	.loc_0x344:
	  addi      r3, r1, 0x48
	  bl        -0x5D824
	  rlwinm    r0,r3,0,24,31
	  stb       r3, 0x2A(r1)
	  cmplwi    r0, 0x10
	  blt-      .loc_0x378
	  mr        r6, r28
	  addi      r3, r31, 0
	  addi      r5, r31, 0x88
	  rlwinm    r7,r30,0,24,31
	  li        r4, 0x94
	  crclr     6, 0x6
	  bl        -0x4476AC

	.loc_0x378:
	  addi      r3, r1, 0x48
	  bl        -0x5D858
	  rlwinm    r0,r3,0,24,31
	  stb       r3, 0x2B(r1)
	  cmplwi    r0, 0x10
	  blt-      .loc_0x3AC
	  mr        r6, r28
	  addi      r3, r31, 0
	  addi      r5, r31, 0xA8
	  rlwinm    r7,r30,0,24,31
	  li        r4, 0x97
	  crclr     6, 0x6
	  bl        -0x4476E0

	.loc_0x3AC:
	  addi      r3, r1, 0x48
	  bl        -0x5D88C
	  rlwinm    r0,r3,0,24,31
	  stb       r3, 0x2C(r1)
	  cmplwi    r0, 0x10
	  blt-      .loc_0x3E0
	  mr        r6, r28
	  addi      r3, r31, 0
	  addi      r5, r31, 0xC8
	  rlwinm    r7,r30,0,24,31
	  li        r4, 0x9A
	  crclr     6, 0x6
	  bl        -0x447714

	.loc_0x3E0:
	  addi      r3, r1, 0x48
	  bl        -0x5D8C0
	  rlwinm    r0,r3,0,24,31
	  stb       r3, 0x2D(r1)
	  cmplwi    r0, 0x10
	  blt-      .loc_0x414
	  mr        r6, r28
	  addi      r3, r31, 0
	  addi      r5, r31, 0xE8
	  rlwinm    r7,r30,0,24,31
	  li        r4, 0x9D
	  crclr     6, 0x6
	  bl        -0x447748

	.loc_0x414:
	  rlwinm    r25,r30,0,24,31
	  li        r24, 0
	  b         .loc_0x460

	.loc_0x420:
	  addi      r3, r1, 0x48
	  bl        -0x5D900
	  rlwinm    r4,r24,0,24,31
	  addi      r0, r4, 0x26
	  stbx      r3, r26, r0
	  lbzx      r0, r26, r0
	  cmplwi    r0, 0x1
	  ble-      .loc_0x45C
	  mr        r6, r28
	  mr        r7, r25
	  addi      r3, r31, 0
	  addi      r5, r31, 0x108
	  li        r4, 0xA1
	  crclr     6, 0x6
	  bl        -0x447790

	.loc_0x45C:
	  addi      r24, r24, 0x1

	.loc_0x460:
	  rlwinm    r0,r24,0,24,31
	  cmplwi    r0, 0x10
	  blt+      .loc_0x420
	  li        r24, 0
	  b         .loc_0x4B4

	.loc_0x474:
	  addi      r3, r1, 0x48
	  bl        -0x5D954
	  rlwinm    r4,r24,0,24,31
	  addi      r0, r4, 0x36
	  stbx      r3, r26, r0
	  lbzx      r0, r26, r0
	  cmplwi    r0, 0x1
	  ble-      .loc_0x4B0
	  mr        r6, r28
	  mr        r7, r25
	  addi      r3, r31, 0
	  addi      r5, r31, 0x128
	  li        r4, 0xA6
	  crclr     6, 0x6
	  bl        -0x4477E4

	.loc_0x4B0:
	  addi      r24, r24, 0x1

	.loc_0x4B4:
	  rlwinm    r0,r24,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x474
	  mr        r3, r29
	  mr        r4, r28
	  bl        -0x3A7780
	  cmpwi     r3, 0
	  bne-      .loc_0x60C
	  lbz       r0, 0x28(r1)
	  addi      r8, r1, 0x8
	  li        r9, 0
	  stb       r0, 0x20(r27)
	  lbz       r0, 0x29(r1)
	  stb       r0, 0x21(r27)
	  lbz       r0, 0x2A(r1)
	  stb       r0, 0x22(r27)
	  lbz       r0, 0x2B(r1)
	  stb       r0, 0x23(r27)
	  lbz       r0, 0x2C(r1)
	  stb       r0, 0x24(r27)
	  lbz       r0, 0x2D(r1)
	  stb       r0, 0x25(r27)
	  b         .loc_0x5B0

	.loc_0x510:
	  rlwinm    r3,r9,0,24,31
	  addi      r4, r9, 0x1
	  addi      r3, r3, 0x26
	  addi      r5, r9, 0x2
	  lbzx      r0, r8, r3
	  addi      r6, r9, 0x3
	  rlwinm    r6,r6,0,24,31
	  addi      r10, r9, 0x5
	  rlwinm    r4,r4,0,24,31
	  stbx      r0, r27, r3
	  addi      r3, r4, 0x26
	  addi      r11, r9, 0x6
	  lbzx      r0, r8, r3
	  addi      r4, r9, 0x4
	  addi      r12, r9, 0x7
	  rlwinm    r5,r5,0,24,31
	  stbx      r0, r27, r3
	  addi      r3, r5, 0x26
	  rlwinm    r10,r10,0,24,31
	  addi      r7, r6, 0x26
	  lbzx      r0, r8, r3
	  rlwinm    r4,r4,0,24,31
	  addi      r6, r4, 0x26
	  rlwinm    r11,r11,0,24,31
	  stbx      r0, r27, r3
	  rlwinm    r12,r12,0,24,31
	  addi      r5, r10, 0x26
	  addi      r4, r11, 0x26
	  lbzx      r0, r8, r7
	  addi      r3, r12, 0x26
	  addi      r9, r9, 0x8
	  stbx      r0, r27, r7
	  lbzx      r0, r8, r6
	  stbx      r0, r27, r6
	  lbzx      r0, r8, r5
	  stbx      r0, r27, r5
	  lbzx      r0, r8, r4
	  stbx      r0, r27, r4
	  lbzx      r0, r8, r3
	  stbx      r0, r27, r3

	.loc_0x5B0:
	  rlwinm    r0,r9,0,24,31
	  cmplwi    r0, 0x10
	  blt+      .loc_0x510
	  lbz       r0, 0x3E(r1)
	  mr        r3, r27
	  addi      r4, r1, 0x8
	  stb       r0, 0x36(r27)
	  lbz       r0, 0x3F(r1)
	  stb       r0, 0x37(r27)
	  lbz       r0, 0x40(r1)
	  stb       r0, 0x38(r27)
	  lbz       r0, 0x41(r1)
	  stb       r0, 0x39(r27)
	  lbz       r0, 0x42(r1)
	  stb       r0, 0x3A(r27)
	  lbz       r0, 0x43(r1)
	  stb       r0, 0x3B(r27)
	  lbz       r0, 0x44(r1)
	  stb       r0, 0x3C(r27)
	  lbz       r0, 0x45(r1)
	  stb       r0, 0x3D(r27)
	  bl        -0x3A7724
	  b         .loc_0x768

	.loc_0x60C:
	  addi      r30, r30, 0x1

	.loc_0x610:
	  rlwinm    r0,r30,0,24,31
	  cmplwi    r0, 0x20
	  blt+      .loc_0x15C
	  mr        r6, r28
	  addi      r3, r31, 0
	  addi      r5, r31, 0x148
	  li        r4, 0xB3
	  crclr     6, 0x6
	  bl        -0x447968
	  lbz       r0, 0x28(r1)
	  addi      r8, r1, 0x8
	  li        r9, 0
	  stb       r0, 0x20(r27)
	  lbz       r0, 0x29(r1)
	  stb       r0, 0x21(r27)
	  lbz       r0, 0x2A(r1)
	  stb       r0, 0x22(r27)
	  lbz       r0, 0x2B(r1)
	  stb       r0, 0x23(r27)
	  lbz       r0, 0x2C(r1)
	  stb       r0, 0x24(r27)
	  lbz       r0, 0x2D(r1)
	  stb       r0, 0x25(r27)
	  b         .loc_0x710

	.loc_0x670:
	  rlwinm    r3,r9,0,24,31
	  addi      r4, r9, 0x1
	  addi      r3, r3, 0x26
	  addi      r5, r9, 0x2
	  lbzx      r0, r8, r3
	  addi      r6, r9, 0x3
	  rlwinm    r6,r6,0,24,31
	  addi      r10, r9, 0x5
	  rlwinm    r4,r4,0,24,31
	  stbx      r0, r27, r3
	  addi      r3, r4, 0x26
	  addi      r11, r9, 0x6
	  lbzx      r0, r8, r3
	  addi      r4, r9, 0x4
	  addi      r12, r9, 0x7
	  rlwinm    r5,r5,0,24,31
	  stbx      r0, r27, r3
	  addi      r3, r5, 0x26
	  rlwinm    r10,r10,0,24,31
	  addi      r7, r6, 0x26
	  lbzx      r0, r8, r3
	  rlwinm    r4,r4,0,24,31
	  addi      r6, r4, 0x26
	  rlwinm    r11,r11,0,24,31
	  stbx      r0, r27, r3
	  rlwinm    r12,r12,0,24,31
	  addi      r5, r10, 0x26
	  addi      r4, r11, 0x26
	  lbzx      r0, r8, r7
	  addi      r3, r12, 0x26
	  addi      r9, r9, 0x8
	  stbx      r0, r27, r7
	  lbzx      r0, r8, r6
	  stbx      r0, r27, r6
	  lbzx      r0, r8, r5
	  stbx      r0, r27, r5
	  lbzx      r0, r8, r4
	  stbx      r0, r27, r4
	  lbzx      r0, r8, r3
	  stbx      r0, r27, r3

	.loc_0x710:
	  rlwinm    r0,r9,0,24,31
	  cmplwi    r0, 0x10
	  blt+      .loc_0x670
	  lbz       r0, 0x3E(r1)
	  mr        r3, r27
	  addi      r4, r1, 0x8
	  stb       r0, 0x36(r27)
	  lbz       r0, 0x3F(r1)
	  stb       r0, 0x37(r27)
	  lbz       r0, 0x40(r1)
	  stb       r0, 0x38(r27)
	  lbz       r0, 0x41(r1)
	  stb       r0, 0x39(r27)
	  lbz       r0, 0x42(r1)
	  stb       r0, 0x3A(r27)
	  lbz       r0, 0x43(r1)
	  stb       r0, 0x3B(r27)
	  lbz       r0, 0x44(r1)
	  stb       r0, 0x3C(r27)
	  lbz       r0, 0x45(r1)
	  stb       r0, 0x3D(r27)
	  bl        -0x3A7884

	.loc_0x768:
	  lmw       r24, 0x470(r1)
	  lwz       r0, 0x494(r1)
	  mtlr      r0
	  addi      r1, r1, 0x490
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804720F4
 * Size:	000294
 */
void BgmTrackMapFile::read(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r3
	  lis       r3, 0x804A
	  mr        r28, r4
	  subi      r31, r3, 0x2188
	  lbz       r0, 0x28(r27)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x40
	  addi      r3, r31, 0
	  addi      r5, r31, 0x168
	  li        r4, 0xCD
	  crclr     6, 0x6
	  bl        -0x447AF0

	.loc_0x40:
	  li        r0, 0
	  stw       r0, 0x24(r27)
	  b         .loc_0x25C

	.loc_0x4C:
	  mr        r3, r28
	  li        r4, 0
	  li        r5, 0
	  bl        -0x5D078
	  addi      r4, r31, 0x24
	  mr        r29, r3
	  bl        -0x3A7A98
	  cmpwi     r3, 0
	  bne-      .loc_0x78
	  li        r3, 0x1
	  b         .loc_0x280

	.loc_0x78:
	  mulli     r0, r30, 0x3E
	  lwz       r3, 0x20(r27)
	  mr        r4, r29
	  add       r29, r3, r0
	  mr        r3, r29
	  bl        -0x3A7928
	  mr        r3, r28
	  bl        -0x5DCEC
	  stb       r3, 0x20(r29)
	  lbz       r0, 0x20(r29)
	  cmplwi    r0, 0x10
	  blt-      .loc_0xC0
	  mr        r6, r30
	  addi      r3, r31, 0
	  addi      r5, r31, 0x184
	  li        r4, 0xDF
	  crclr     6, 0x6
	  bl        -0x447B70

	.loc_0xC0:
	  mr        r3, r28
	  bl        -0x5DD1C
	  stb       r3, 0x21(r29)
	  lbz       r0, 0x21(r29)
	  cmplwi    r0, 0x10
	  blt-      .loc_0xF0
	  mr        r6, r30
	  addi      r3, r31, 0
	  addi      r5, r31, 0x1A0
	  li        r4, 0xE2
	  crclr     6, 0x6
	  bl        -0x447BA0

	.loc_0xF0:
	  mr        r3, r28
	  bl        -0x5DD4C
	  stb       r3, 0x22(r29)
	  lbz       r0, 0x22(r29)
	  cmplwi    r0, 0x10
	  blt-      .loc_0x120
	  mr        r6, r30
	  addi      r3, r31, 0
	  addi      r5, r31, 0x1BC
	  li        r4, 0xE5
	  crclr     6, 0x6
	  bl        -0x447BD0

	.loc_0x120:
	  mr        r3, r28
	  bl        -0x5DD7C
	  stb       r3, 0x23(r29)
	  lbz       r0, 0x23(r29)
	  cmplwi    r0, 0x10
	  blt-      .loc_0x150
	  mr        r6, r30
	  addi      r3, r31, 0
	  addi      r5, r31, 0x1D8
	  li        r4, 0xE8
	  crclr     6, 0x6
	  bl        -0x447C00

	.loc_0x150:
	  mr        r3, r28
	  bl        -0x5DDAC
	  stb       r3, 0x24(r29)
	  lbz       r0, 0x24(r29)
	  cmplwi    r0, 0x10
	  blt-      .loc_0x180
	  mr        r6, r30
	  addi      r3, r31, 0
	  addi      r5, r31, 0x1F4
	  li        r4, 0xEB
	  crclr     6, 0x6
	  bl        -0x447C30

	.loc_0x180:
	  mr        r3, r28
	  bl        -0x5DDDC
	  stb       r3, 0x25(r29)
	  lbz       r0, 0x25(r29)
	  cmplwi    r0, 0x10
	  blt-      .loc_0x1B0
	  mr        r6, r30
	  addi      r3, r31, 0
	  addi      r5, r31, 0x210
	  li        r4, 0xEE
	  crclr     6, 0x6
	  bl        -0x447C60

	.loc_0x1B0:
	  li        r26, 0
	  b         .loc_0x1F4

	.loc_0x1B8:
	  mr        r3, r28
	  bl        -0x5DE14
	  rlwinm    r4,r26,0,24,31
	  addi      r0, r4, 0x26
	  stbx      r3, r29, r0
	  lbzx      r0, r29, r0
	  cmplwi    r0, 0x1
	  ble-      .loc_0x1F0
	  mr        r6, r30
	  addi      r3, r31, 0
	  addi      r5, r31, 0x22C
	  li        r4, 0xF2
	  crclr     6, 0x6
	  bl        -0x447CA0

	.loc_0x1F0:
	  addi      r26, r26, 0x1

	.loc_0x1F4:
	  rlwinm    r0,r26,0,24,31
	  cmplwi    r0, 0x10
	  blt+      .loc_0x1B8
	  li        r26, 0
	  b         .loc_0x244

	.loc_0x208:
	  mr        r3, r28
	  bl        -0x5DE64
	  rlwinm    r4,r26,0,24,31
	  addi      r0, r4, 0x36
	  stbx      r3, r29, r0
	  lbzx      r0, r29, r0
	  cmplwi    r0, 0x1
	  ble-      .loc_0x240
	  mr        r6, r30
	  addi      r3, r31, 0
	  addi      r5, r31, 0x248
	  li        r4, 0xF6
	  crclr     6, 0x6
	  bl        -0x447CF0

	.loc_0x240:
	  addi      r26, r26, 0x1

	.loc_0x244:
	  rlwinm    r0,r26,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x208
	  lwz       r3, 0x24(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x24(r27)

	.loc_0x25C:
	  lwz       r30, 0x24(r27)
	  cmpwi     r30, 0x20
	  blt+      .loc_0x4C
	  addi      r3, r31, 0
	  addi      r5, r31, 0x264
	  li        r4, 0xFA
	  crclr     6, 0x6
	  bl        -0x447D2C
	  li        r3, 0

	.loc_0x280:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80472388
 * Size:	000110
 */
BgmTrackMap::BgmTrackMap()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stb       r0, 0x20(r3)
	  stb       r0, 0x21(r3)
	  stb       r0, 0x22(r3)
	  stb       r0, 0x23(r3)
	  stb       r0, 0x24(r3)
	  stb       r0, 0x25(r3)
	  b         .loc_0xBC

	.loc_0x38:
	  rlwinm    r3,r6,0,24,31
	  addi      r0, r6, 0x1
	  addi      r4, r3, 0x26
	  li        r5, 0
	  rlwinm    r3,r0,0,24,31
	  stbx      r5, r31, r4
	  addi      r4, r3, 0x26
	  addi      r0, r6, 0x2
	  rlwinm    r3,r0,0,24,31
	  stbx      r5, r31, r4
	  addi      r4, r3, 0x26
	  addi      r0, r6, 0x3
	  rlwinm    r3,r0,0,24,31
	  stbx      r5, r31, r4
	  addi      r4, r3, 0x26
	  addi      r0, r6, 0x4
	  rlwinm    r3,r0,0,24,31
	  stbx      r5, r31, r4
	  addi      r4, r3, 0x26
	  addi      r0, r6, 0x5
	  rlwinm    r3,r0,0,24,31
	  stbx      r5, r31, r4
	  addi      r4, r3, 0x26
	  addi      r0, r6, 0x6
	  rlwinm    r3,r0,0,24,31
	  stbx      r5, r31, r4
	  addi      r0, r6, 0x7
	  addi      r6, r6, 0x8
	  addi      r4, r3, 0x26
	  rlwinm    r3,r0,0,24,31
	  stbx      r5, r31, r4
	  addi      r0, r3, 0x26
	  stbx      r5, r31, r0

	.loc_0xBC:
	  rlwinm    r0,r6,0,24,31
	  cmplwi    r0, 0x10
	  blt+      .loc_0x38
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x36(r31)
	  addi      r4, r2, 0x2A50
	  stb       r0, 0x37(r31)
	  stb       r0, 0x38(r31)
	  stb       r0, 0x39(r31)
	  stb       r0, 0x3A(r31)
	  stb       r0, 0x3B(r31)
	  stb       r0, 0x3C(r31)
	  stb       r0, 0x3D(r31)
	  bl        -0x3A7C24
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
 * Address:	80472498
 * Size:	000008
 */
BgmTrackMapFile::@28 @~BgmTrackMapFile()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1740
	*/
}
} // namespace PSM
