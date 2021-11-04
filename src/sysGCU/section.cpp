#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80423770
 * Size:	000004
 */
void Section::init() { }

/*
 * --INFO--
 * Address:	80423774
 * Size:	0001D0
 */
void Section::Section(JFWDisplay*, JKRHeap*, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r31, r3
	  mr        r0, r31
	  mr        r28, r4
	  mr        r29, r5
	  mr        r30, r6
	  mr        r27, r0
	  bl        -0x4067D0
	  lis       r3, 0x804F
	  lis       r4, 0x804F
	  subi      r0, r3, 0x442C
	  li        r3, 0
	  stw       r0, 0x0(r27)
	  subi      r4, r4, 0x4474
	  lfs       f0, 0x20E0(r2)
	  li        r0, 0x1
	  stw       r4, 0x0(r31)
	  cmplwi    r29, 0
	  stb       r3, 0x37(r31)
	  stw       r3, 0x1C(r31)
	  stw       r3, 0x20(r31)
	  stw       r3, 0x24(r31)
	  stw       r3, 0x28(r31)
	  stw       r3, 0x18(r31)
	  stfs      f0, 0x30(r31)
	  stb       r0, 0x34(r31)
	  stb       r3, 0x36(r31)
	  stb       r3, 0x35(r31)
	  stb       r3, 0x38(r31)
	  beq-      .loc_0xAC
	  mr        r3, r29
	  bl        -0x400048
	  mr        r4, r29
	  li        r5, 0x1
	  bl        -0x403940
	  stw       r3, 0x1C(r31)
	  lwz       r3, 0x1C(r31)
	  bl        -0x400270
	  stw       r3, 0x20(r31)
	  b         .loc_0xD0

	.loc_0xAC:
	  lwz       r3, -0x77D0(r13)
	  bl        -0x400070
	  li        r4, 0
	  li        r5, 0x1
	  bl        -0x403968
	  stw       r3, 0x1C(r31)
	  lwz       r3, 0x1C(r31)
	  bl        -0x400298
	  stw       r3, 0x20(r31)

	.loc_0xD0:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x190
	  cmplwi    r28, 0
	  beq-      .loc_0xF8
	  stw       r28, 0x24(r31)
	  li        r0, 0
	  lwz       r3, 0x4(r28)
	  stw       r3, 0x28(r31)
	  stb       r0, 0x35(r31)
	  b         .loc_0x190

	.loc_0xF8:
	  lwz       r4, 0x1C(r31)
	  li        r3, 0
	  li        r5, 0x2
	  li        r6, 0
	  bl        -0x399D54
	  stw       r3, 0x24(r31)
	  li        r3, 0x28
	  bl        -0x3FF9E4
	  mr.       r0, r3
	  beq-      .loc_0x160
	  li        r0, 0
	  lwz       r6, -0x76E0(r13)
	  stb       r0, 0x8(r1)
	  addi      r8, r1, 0xC
	  li        r4, 0
	  li        r5, 0
	  stb       r0, 0x9(r1)
	  stb       r0, 0xA(r1)
	  stb       r0, 0xB(r1)
	  lwz       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  lwz       r7, 0x4(r6)
	  lhz       r6, 0x4(r7)
	  lhz       r7, 0x6(r7)
	  bl        -0x3F6A70
	  mr        r0, r3

	.loc_0x160:
	  stw       r0, 0x28(r31)
	  li        r0, 0x1
	  lwz       r4, 0x28(r31)
	  lwz       r3, 0x24(r31)
	  stw       r4, 0x4(r3)
	  stb       r0, 0x35(r31)
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x24(r31)
	  bl        -0x884
	  lwz       r3, -0x6514(r13)
	  li        r4, 0x1
	  bl        -0x3D4

	.loc_0x190:
	  li        r3, 0x2A0
	  bl        -0x3FFA64
	  mr.       r0, r3
	  beq-      .loc_0x1A8
	  bl        0x3AB0
	  mr        r0, r3

	.loc_0x1A8:
	  stw       r0, 0x2C(r31)
	  mr        r3, r31
	  lwz       r0, 0x2C(r31)
	  lwz       r4, -0x6514(r13)
	  stw       r0, 0x24(r4)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80423944
 * Size:	000060
 */
void ISection::~ISection()
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
	  beq-      .loc_0x44
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x442C
	  stw       r0, 0x0(r30)
	  bl        -0x406940
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x3FF8D0

	.loc_0x44:
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
 * Address:	804239A4
 * Size:	000120
 */
void Section::~Section()
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
	  stw       r28, 0x10(r1)
	  mr.       r28, r3
	  beq-      .loc_0xFC
	  lis       r3, 0x804F
	  subi      r0, r3, 0x4474
	  stw       r0, 0x0(r28)
	  lbz       r0, 0x35(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x8C
	  lwz       r0, 0x24(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x8C
	  lwz       r3, 0x28(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x6C:
	  lwz       r3, -0x76C8(r13)
	  bl        -0x3EFD18
	  bl        -0x399DD4
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x24(r28)
	  bl        -0x9A4
	  li        r0, 0
	  stw       r0, 0x24(r28)

	.loc_0x8C:
	  lwz       r3, 0x1C(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0xC0
	  bl        -0x40030C
	  lwz       r3, 0x1C(r28)
	  mr        r31, r3
	  bl        -0x400294
	  addi      r30, r3, 0x4
	  lwz       r3, 0x1C(r28)
	  bl        -0x4004A0
	  mr        r3, r31
	  mr        r4, r30
	  bl        -0x337318

	.loc_0xC0:
	  lwz       r3, -0x6514(r13)
	  li        r0, 0
	  cmplwi    r28, 0
	  stw       r0, 0x24(r3)
	  beq-      .loc_0xEC
	  lis       r4, 0x804F
	  mr        r3, r28
	  subi      r0, r4, 0x442C
	  li        r4, 0
	  stw       r0, 0x0(r28)
	  bl        -0x406A58

	.loc_0xEC:
	  extsh.    r0, r29
	  ble-      .loc_0xFC
	  mr        r3, r28
	  bl        -0x3FF9E8

	.loc_0xFC:
	  lwz       r0, 0x24(r1)
	  mr        r3, r28
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
 * Size:	000090
 */
void Section::loading()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000120
 */
void Section::fadeIn()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001A4
 */
void Section::main()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001D0
 */
void Section::fadeOut()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80423AC4
 * Size:	0004B8
 */
void Section::run()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stfd      f30, 0x20(r1)
	  psq_st    f30,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r30, r3
	  lis       r3, 0x804A
	  lwz       r0, 0x24(r30)
	  subi      r31, r3, 0x6610
	  cmplwi    r0, 0
	  bne-      .loc_0x58
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x3C
	  li        r4, 0x21F
	  crclr     6, 0x6
	  bl        -0x3F94D8

	.loc_0x58:
	  lwz       r3, 0x24(r30)
	  li        r4, 0x1
	  bl        -0x39954C
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl

	.loc_0x78:
	  mr        r3, r30
	  bl        0x48C
	  mr        r3, r30
	  bl        0x4CC
	  mr        r3, r30
	  bl        0x4E8
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  mr        r29, r3
	  mr        r3, r30
	  bl        0x480
	  rlwinm.   r0,r29,0,24,31
	  bne+      .loc_0x78
	  lwz       r3, -0x6514(r13)
	  bl        -0x790
	  rlwinm.   r0,r3,0,24,31
	  bne+      .loc_0x78
	  mr        r3, r30
	  lwz       r4, 0x2C(r30)
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x30(r30)
	  lfs       f1, 0x20E4(r2)
	  lfs       f0, 0x20E8(r2)
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x10C
	  lfs       f0, 0x20E0(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x114

	.loc_0x10C:
	  lfs       f0, 0x20E0(r2)
	  fsubs     f0, f1, f0

	.loc_0x114:
	  fctiwz    f0, f0
	  lwz       r3, 0x24(r30)
	  lwz       r3, 0x4(r3)
	  stfd      f0, 0x8(r1)
	  cmplwi    r3, 0
	  lwz       r4, 0xC(r1)
	  beq-      .loc_0x140
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x140:
	  lfs       f30, 0x20E8(r2)
	  lfs       f31, 0x20E4(r2)
	  b         .loc_0x198

	.loc_0x14C:
	  mr        r3, r30
	  bl        0x3B8
	  mr        r3, r30
	  bl        0x3F8
	  mr        r3, r30
	  lwz       r4, 0x2C(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  bl        0x3FC
	  mr        r3, r30
	  bl        0x3AC
	  lwz       r3, -0x6514(r13)
	  bl        -0x85C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x198
	  fadds     f30, f30, f31

	.loc_0x198:
	  lfs       f0, 0x30(r30)
	  fcmpo     cr0, f30, f0
	  blt+      .loc_0x14C
	  mr        r3, r30
	  lwz       r4, 0x2C(r30)
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1C0:
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x28(r3)
	  bl        0x6E4C
	  mr        r3, r30
	  bl        0x338
	  mr        r3, r30
	  bl        0x378
	  lwz       r3, -0x6514(r13)
	  addi      r4, r2, 0x20EC
	  li        r5, 0x1
	  lwz       r3, 0x28(r3)
	  bl        0x6E48
	  mr        r3, r30
	  lwz       r4, 0x2C(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  addi      r4, r2, 0x20EC
	  lwz       r3, 0x28(r3)
	  bl        0x6E24
	  mr        r3, r30
	  bl        0x358
	  lwz       r3, -0x6514(r13)
	  addi      r4, r2, 0x20F4
	  li        r5, 0x1
	  lwz       r3, 0x28(r3)
	  bl        0x6E04
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  addi      r4, r2, 0x20F4
	  lwz       r3, 0x28(r3)
	  bl        0x6DE4
	  mr        r3, r30
	  bl        0x2D0
	  lbz       r0, 0x37(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x278
	  lbz       r0, 0x34(r30)
	  cmplwi    r0, 0
	  bne+      .loc_0x1C0

	.loc_0x278:
	  lfs       f2, 0x30(r30)
	  lfs       f1, 0x20E4(r2)
	  lfs       f0, 0x20E8(r2)
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x2A0
	  lfs       f0, 0x20E0(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x2A8

	.loc_0x2A0:
	  lfs       f0, 0x20E0(r2)
	  fsubs     f0, f1, f0

	.loc_0x2A8:
	  fctiwz    f0, f0
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  stfd      f0, 0x8(r1)
	  lwz       r29, 0xC(r1)
	  bne-      .loc_0x2D4
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x3F9754

	.loc_0x2D4:
	  lwz       r28, -0x6780(r13)
	  cmplwi    r28, 0
	  bne-      .loc_0x2F4
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x3F9774

	.loc_0x2F4:
	  lwz       r0, 0x4(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x314
	  addi      r3, r31, 0x24
	  addi      r5, r31, 0x18
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x3F9794

	.loc_0x314:
	  lwz       r3, 0x4(r28)
	  lwz       r3, 0x4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x338
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl

	.loc_0x338:
	  lwz       r3, 0x24(r30)
	  lwz       r3, 0x4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x35C
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x35C:
	  mr        r3, r30
	  lwz       r4, 0x2C(r30)
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lfs       f30, 0x20E8(r2)
	  b         .loc_0x3E4

	.loc_0x380:
	  mr        r3, r30
	  bl        0x184
	  mr        r3, r30
	  bl        0x1C4
	  mr        r3, r30
	  lwz       r4, 0x2C(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  bl        0x1C8
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  bl        0x164
	  lwz       r3, -0x6514(r13)
	  bl        -0xAA4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3E4
	  lfs       f0, 0x20E4(r2)
	  fadds     f30, f30, f0

	.loc_0x3E4:
	  lfs       f0, 0x30(r30)
	  fcmpo     cr0, f30, f0
	  blt+      .loc_0x380
	  b         .loc_0x414

	.loc_0x3F4:
	  mr        r3, r30
	  bl        0x110
	  mr        r3, r30
	  bl        0x150
	  mr        r3, r30
	  bl        0x16C
	  mr        r3, r30
	  bl        0x11C

	.loc_0x414:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x3F4
	  lwz       r3, -0x6514(r13)
	  bl        -0xB08
	  rlwinm.   r0,r3,0,24,31
	  bne+      .loc_0x3F4
	  lbz       r0, 0x37(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x488

	.loc_0x44C:
	  mr        r3, r30
	  bl        0xB8
	  mr        r3, r30
	  bl        0xF8
	  mr        r3, r30
	  bl        0x114
	  mr        r3, r30
	  bl        0xC4
	  lwz       r3, -0x6514(r13)
	  bl        -0x900
	  cmpwi     r3, 0
	  bne+      .loc_0x44C
	  lbz       r0, -0x63B0(r13)
	  cmplwi    r0, 0
	  bne+      .loc_0x44C

	.loc_0x488:
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80423F7C
 * Size:	000050
 */
void Section::exit()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x20(r31)
	  bl        -0x400A00
	  lwz       r3, -0x6514(r13)
	  bl        -0xA88
	  lwz       r3, -0x6514(r13)
	  bl        -0xA8C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80423FCC
 * Size:	000024
 */
void Section::beginFrame()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6514(r13)
	  bl        -0xF40
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80423FF0
 * Size:	000024
 */
void Section::endFrame()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6514(r13)
	  bl        -0xF28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80424014
 * Size:	000024
 */
void Section::beginRender()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6514(r13)
	  bl        -0xEF0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80424038
 * Size:	000040
 */
void Section::endRender()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x18(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r3, -0x6514(r13)
	  bl        -0xEE8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80424078
 * Size:	00007C
 */
void Section::update()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, -0x6514(r13)
	  bl        -0xCA8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x48
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  b         .loc_0x60

	.loc_0x48:
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x60:
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
 * Address:	804240F4
 * Size:	00005C
 */
void Section::draw(Graphics&)
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
	  lwz       r3, -0x6514(r13)
	  bl        -0xD24
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x44
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl

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
 * Address:	80424150
 * Size:	000054
 */
void __sinit_section_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8000
	  lis       r4, 0x8051
	  lwz       r0, 0xF8(r3)
	  li        r7, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r6, 0x804F
	  rlwinm    r5,r0,30,2,31
	  li        r3, 0x12C
	  li        r4, 0
	  stfsu     f0, -0x4480(r6)
	  mulhwu    r0, r5, r3
	  stw       r7, -0x6508(r13)
	  stfs      f0, -0x6504(r13)
	  mullw     r3, r4, r3
	  stfs      f0, 0x4(r6)
	  stfs      f0, 0x8(r6)
	  mulli     r4, r5, 0x12C
	  add       r0, r0, r3
	  stw       r0, -0x6500(r13)
	  stw       r4, -0x64FC(r13)
	  blr
	*/
}
