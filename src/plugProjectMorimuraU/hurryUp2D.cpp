#include "types.h"

/*
 * --INFO--
 * Address:	80346178
 * Size:	000224
 */
void Morimura::THuWhitePaneSet::drawSelf(float, float, float (*)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stfd      f30, 0x70(r1)
	  psq_st    f30,0x78(r1),0,0
	  stfd      f29, 0x60(r1)
	  psq_st    f29,0x68(r1),0,0
	  stfd      f28, 0x50(r1)
	  psq_st    f28,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  fmr       f31, f1
	  mr        r30, r3
	  fmr       f30, f2
	  mr        r31, r4
	  bl        .loc_0x224
	  li        r3, 0
	  bl        -0x25D098
	  li        r3, 0x1
	  bl        -0x25D074
	  li        r3, 0x1
	  li        r4, 0
	  bl        -0x25CEEC
	  lfs       f3, 0x28(r30)
	  mr        r3, r31
	  lfs       f2, 0x20(r30)
	  addi      r4, r30, 0x80
	  lfs       f1, 0x2C(r30)
	  addi      r5, r1, 0x8
	  lfs       f0, 0x24(r30)
	  fsubs     f2, f3, f2
	  fsubs     f0, f1, f0
	  fadds     f29, f30, f2
	  fadds     f28, f31, f0
	  bl        -0x25BF08
	  addi      r3, r1, 0x8
	  li        r4, 0
	  bl        -0x25CC9C
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        -0x26089C
	  lis       r5, 0xCC01
	  lfs       f0, -0x108(r2)
	  stfs      f30, -0x8000(r5)
	  li        r3, 0
	  li        r4, 0
	  stfs      f31, -0x8000(r5)
	  stfs      f0, -0x8000(r5)
	  stfs      f29, -0x8000(r5)
	  stfs      f31, -0x8000(r5)
	  stfs      f0, -0x8000(r5)
	  stfs      f29, -0x8000(r5)
	  stfs      f28, -0x8000(r5)
	  stfs      f0, -0x8000(r5)
	  stfs      f30, -0x8000(r5)
	  stfs      f28, -0x8000(r5)
	  stfs      f0, -0x8000(r5)
	  bl        -0x25CF7C
	  fmr       f1, f31
	  mr        r3, r30
	  fmr       f2, f30
	  mr        r4, r31
	  bl        -0x2F0EA8
	  mr        r3, r30
	  bl        .loc_0x224
	  li        r3, 0x1
	  li        r4, 0
	  bl        -0x25CFA4
	  lbz       r4, 0x1E0(r30)
	  lis       r0, 0x4330
	  stw       r0, 0x38(r1)
	  addi      r3, r1, 0x8
	  subfic    r0, r4, 0xFF
	  lfd       f3, -0xF8(r2)
	  xoris     r0, r0, 0x8000
	  lfs       f1, 0x28(r30)
	  stw       r0, 0x3C(r1)
	  li        r4, 0
	  lfs       f0, 0x20(r30)
	  lfd       f2, 0x38(r1)
	  fsubs     f1, f1, f0
	  lfs       f0, -0x104(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f2, f1
	  fdivs     f30, f1, f0
	  bl        -0x25CD60
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        -0x260960
	  fsubs     f30, f29, f30
	  lis       r5, 0xCC01
	  lfs       f0, -0x108(r2)
	  li        r3, 0
	  li        r4, 0
	  stfs      f30, -0x8000(r5)
	  stfs      f31, -0x8000(r5)
	  stfs      f0, -0x8000(r5)
	  stfs      f29, -0x8000(r5)
	  stfs      f31, -0x8000(r5)
	  stfs      f0, -0x8000(r5)
	  stfs      f29, -0x8000(r5)
	  stfs      f28, -0x8000(r5)
	  stfs      f0, -0x8000(r5)
	  stfs      f30, -0x8000(r5)
	  stfs      f28, -0x8000(r5)
	  stfs      f0, -0x8000(r5)
	  bl        -0x25D044
	  li        r3, 0x1
	  bl        -0x25D20C
	  addi      r3, r1, 0x8
	  addi      r4, r30, 0x1B0
	  bl        -0x25C078
	  lfs       f1, 0x2C(r30)
	  lfs       f0, 0x24(r30)
	  lfs       f2, -0x100(r2)
	  fsubs     f0, f1, f0
	  stfs      f30, 0x1A8(r30)
	  fnmsubs   f0, f2, f0, f28
	  stfs      f0, 0x1AC(r30)
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  psq_l     f28,0x58(r1),0,0
	  lfd       f28, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr

	.loc_0x224:
	*/
}

/*
 * --INFO--
 * Address:	8034639C
 * Size:	000094
 */
void Morimura::THuWhitePaneSet::gxSet(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x261CD8
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        -0x262130
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        -0x261CC4
	  li        r3, 0x1
	  bl        -0x25F570
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        -0x25F554
	  li        r3, 0x1
	  bl        -0x25D844
	  li        r3, 0
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        -0x25D9F4
	  li        r3, 0
	  li        r4, 0x4
	  bl        -0x25DFA0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80346430
 * Size:	0000B0
 */
Morimura::THurryUp2D::THurryUp2D(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  addi      r4, r4, 0x298
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x2D7C
	  lis       r4, 0x804E
	  li        r8, 0
	  subi      r4, r4, 0x4D0C
	  lfs       f0, -0x108(r2)
	  stw       r4, 0x0(r31)
	  addi      r0, r4, 0x10
	  lis       r3, 0x8034
	  li        r5, 0
	  stw       r0, 0x18(r31)
	  addi      r4, r3, 0x64E0
	  li        r0, 0x1
	  addi      r3, r31, 0xD0
	  stw       r8, 0x7C(r31)
	  li        r6, 0xC
	  li        r7, 0x6
	  stw       r8, 0x80(r31)
	  stw       r8, 0x84(r31)
	  stw       r8, 0x88(r31)
	  stw       r8, 0x8C(r31)
	  stw       r8, 0x90(r31)
	  stw       r8, 0x94(r31)
	  stw       r8, 0x98(r31)
	  stw       r8, 0xB0(r31)
	  stfs      f0, 0xB4(r31)
	  sth       r8, 0xC0(r31)
	  sth       r8, 0xC2(r31)
	  stb       r0, 0xC4(r31)
	  stfs      f0, 0xC8(r31)
	  stfs      f0, 0xCC(r31)
	  bl        -0x284C88
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
 * Address:	803464E0
 * Size:	000024
 */
Morimura::THurryUp2D::TStateParam::TStateParam(void)
{
	/*
	.loc_0x0:
	  li        r4, 0
	  li        r0, 0xFF
	  stb       r4, 0x0(r3)
	  lfs       f1, -0x108(r2)
	  stb       r0, 0x1(r3)
	  lfs       f0, -0xF0(r2)
	  stfs      f1, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80346504
 * Size:	000390
 */
void Morimura::THurryUp2D::doCreate(JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  lis       r4, 0x8049
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  addi      r31, r4, 0x280
	  stw       r28, 0x20(r1)
	  stw       r30, 0x78(r3)
	  bl        0x10DA74
	  lis       r4, 0x4F
	  lis       r6, 0x4F55
	  mr        r28, r3
	  li        r5, 0x4752
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4E44
	  bl        -0x37234
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64
	  addi      r0, r28, 0x78
	  stw       r0, 0xAC(r29)
	  b         .loc_0xAC

	.loc_0x64:
	  li        r3, 0x10
	  bl        -0x3226C8
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  addi      r0, r5, 0x1148
	  li        r5, 0
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x10AC
	  lfs       f0, -0xEC(r2)
	  stw       r5, 0x4(r3)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0xC(r3)
	  stfs      f0, 0x8(r3)

	.loc_0xA0:
	  stw       r3, 0xAC(r29)
	  li        r0, 0x1
	  stb       r0, -0x6760(r13)

	.loc_0xAC:
	  li        r3, 0x148
	  bl        -0x322710
	  mr.       r0, r3
	  beq-      .loc_0xC4
	  bl        0xEE7EC
	  mr        r0, r3

	.loc_0xC4:
	  stw       r0, 0x7C(r29)
	  mr        r6, r30
	  addi      r4, r31, 0x24
	  lis       r5, 0x2
	  lwz       r3, 0x7C(r29)
	  bl        -0x306FB8
	  lwz       r3, 0x7C(r29)
	  lis       r4, 0x6875
	  addi      r6, r4, 0x7272
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x80(r29)
	  lwz       r0, 0x80(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x120
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x40
	  li        r4, 0x96
	  crclr     6, 0x6
	  bl        -0x31BFE0

	.loc_0x120:
	  lwz       r3, 0x7C(r29)
	  lis       r4, 0x7375
	  addi      r6, r4, 0x6E64
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x84(r29)
	  lwz       r0, 0x84(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x164
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x40
	  li        r4, 0x99
	  crclr     6, 0x6
	  bl        -0x31C024

	.loc_0x164:
	  lwz       r3, 0x7C(r29)
	  lis       r4, 0x7375
	  addi      r6, r4, 0x6E6C
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x90(r29)
	  lwz       r0, 0x90(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x1A8
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x40
	  li        r4, 0x9C
	  crclr     6, 0x6
	  bl        -0x31C068

	.loc_0x1A8:
	  lwz       r3, 0x7C(r29)
	  lis       r4, 0x7375
	  addi      r6, r4, 0x6E77
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x88(r29)
	  lwz       r0, 0x88(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x1EC
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x40
	  li        r4, 0x9F
	  crclr     6, 0x6
	  bl        -0x31C0AC

	.loc_0x1EC:
	  lwz       r3, 0x7C(r29)
	  lis       r4, 0x6875
	  addi      r6, r4, 0x7232
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r29)
	  lwz       r0, 0x94(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x230
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x40
	  li        r4, 0xA2
	  crclr     6, 0x6
	  bl        -0x31C0F0

	.loc_0x230:
	  lwz       r3, 0x7C(r29)
	  lis       r4, 0x7375
	  addi      r6, r4, 0x6E32
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x98(r29)
	  lwz       r0, 0x98(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x274
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x40
	  li        r4, 0xA5
	  crclr     6, 0x6
	  bl        -0x31C134

	.loc_0x274:
	  li        r3, 0x1E8
	  bl        -0x3228D8
	  mr.       r30, r3
	  beq-      .loc_0x2E8
	  lwz       r9, 0x88(r29)
	  lis       r4, 0x7465
	  lfs       f0, -0x108(r2)
	  addi      r6, r4, 0x7374
	  lfs       f4, 0x2C(r9)
	  addi      r7, r1, 0x8
	  lfs       f3, 0x24(r9)
	  addi      r8, r31, 0x4C
	  lfs       f2, 0x28(r9)
	  li        r5, 0
	  lfs       f1, 0x20(r9)
	  fsubs     f3, f4, f3
	  lis       r9, 0x110
	  fsubs     f1, f2, f1
	  stfs      f0, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f3, 0x14(r1)
	  bl        -0x2F1694
	  lis       r3, 0x804E
	  lfs       f0, -0x108(r2)
	  subi      r0, r3, 0x4C90
	  stw       r0, 0x0(r30)
	  stfs      f0, 0x1A8(r30)
	  stfs      f0, 0x1AC(r30)

	.loc_0x2E8:
	  stw       r30, 0x8C(r29)
	  lwz       r0, 0x88(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x30C
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x40
	  li        r4, 0xA9
	  crclr     6, 0x6
	  bl        -0x31C1CC

	.loc_0x30C:
	  lwz       r3, 0x8C(r29)
	  li        r4, 0x4
	  bl        -0x30DB5C
	  lwz       r3, 0x8C(r29)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8C(r29)
	  li        r0, 0
	  stb       r0, 0x1E0(r3)
	  lwz       r3, 0x90(r29)
	  lwz       r4, 0x8C(r29)
	  bl        -0x30F184
	  lwz       r3, 0x80(r29)
	  lfs       f1, 0xD8(r3)
	  lfs       f0, 0xD4(r3)
	  stfs      f0, 0x9C(r29)
	  stfs      f1, 0xA0(r29)
	  lwz       r3, 0x84(r29)
	  lfs       f1, 0xD8(r3)
	  lfs       f0, 0xD4(r3)
	  stfs      f0, 0xA4(r29)
	  stfs      f1, 0xA8(r29)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80346894
 * Size:	00018C
 */
void Morimura::THurryUp2D::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  lwz       r3, 0xAC(r31)
	  lfs       f0, 0x8(r3)
	  lfs       f1, 0xC(r3)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x38
	  stfs      f1, 0x8(r3)

	.loc_0x38:
	  lwz       r3, 0xAC(r31)
	  lfs       f1, -0xE8(r2)
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0xE4(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x8(r3)
	  lwz       r3, 0xAC(r31)
	  lfs       f1, 0x8(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x70
	  lfs       f0, 0xC(r3)
	  li        r0, 0
	  stfs      f0, 0x8(r3)
	  stw       r0, 0xB0(r31)

	.loc_0x70:
	  lwz       r0, 0xB0(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x110
	  bge-      .loc_0x90
	  cmpwi     r0, 0
	  beq-      .loc_0xA0
	  bge-      .loc_0xBC
	  b         .loc_0x130

	.loc_0x90:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x128
	  bge-      .loc_0x130
	  b         .loc_0x11C

	.loc_0xA0:
	  mr        r3, r31
	  bl        0x550
	  lfs       f1, -0x108(r2)
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x1224
	  b         .loc_0x130

	.loc_0xBC:
	  lfs       f1, -0xE0(r2)
	  lfs       f0, 0xB4(r31)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x104
	  lwz       r0, -0x67A8(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xF4
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x2B0
	  li        r4, 0xD2
	  addi      r5, r5, 0x2C0
	  crclr     6, 0x6
	  bl        -0x31C344

	.loc_0xF4:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1817
	  li        r5, 0
	  bl        -0xE364

	.loc_0x104:
	  mr        r3, r31
	  bl        0x9AC
	  b         .loc_0x130

	.loc_0x110:
	  mr        r3, r31
	  bl        0xC6C
	  b         .loc_0x130

	.loc_0x11C:
	  mr        r3, r31
	  bl        0xDC8
	  b         .loc_0x130

	.loc_0x128:
	  mr        r3, r31
	  bl        0xF6C

	.loc_0x130:
	  lwz       r3, 0xAC(r31)
	  lfs       f1, 0xCC(r31)
	  lfs       f0, 0x8(r3)
	  fcmpu     cr0, f1, f0
	  beq-      .loc_0x154
	  lfs       f1, 0xB4(r31)
	  lfs       f0, -0xF0(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0xB4(r31)

	.loc_0x154:
	  lwz       r3, 0xAC(r31)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0xCC(r31)
	  lwz       r3, 0x7C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	80346A20
 * Size:	00040C
 */
void Morimura::THurryUp2D::doDraw(Graphics&)
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
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  lbz       r0, -0x6760(r13)
	  mr        r30, r3
	  mr        r31, r4
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  li        r3, 0x1
	  li        r4, 0
	  bl        -0x25D884

	.loc_0x54:
	  addi      r3, r31, 0x190
	  lwz       r12, 0x190(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x7C(r30)
	  mr        r4, r31
	  addi      r5, r31, 0x190
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xB0(r30)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x3D4
	  lbz       r0, 0xC4(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x3D4
	  lwz       r4, 0x88(r30)
	  lwz       r3, 0x8C(r30)
	  lfs       f0, -0xD8(r2)
	  lfs       f1, 0x1A8(r3)
	  lfs       f3, 0x2C(r4)
	  lfs       f2, 0x24(r4)
	  fsubs     f31, f1, f0
	  lfs       f1, 0x28(r4)
	  lfs       f0, 0x20(r4)
	  fsubs     f28, f3, f2
	  lfs       f30, 0x1AC(r3)
	  fsubs     f29, f1, f0
	  bl        -0x26241C
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        -0x262874
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        -0x262408
	  li        r3, 0x1
	  bl        -0x25FCB4
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        -0x25FC98
	  li        r3, 0x1
	  bl        -0x25DF88
	  li        r3, 0
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        -0x25E138
	  li        r3, 0
	  li        r4, 0x4
	  bl        -0x25E6E4
	  lwz       r3, 0x8C(r30)
	  lbz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,31,24,31
	  cmplwi    r0, 0x80
	  ble-      .loc_0x15C
	  li        r0, 0x80

	.loc_0x15C:
	  rlwinm    r3,r0,0,24,31
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  addi      r4, r1, 0xC
	  lwz       r5, -0xDC(r2)
	  li        r3, 0x4
	  stw       r0, 0x10(r1)
	  lfd       f2, -0xB8(r2)
	  lfd       f1, 0x10(r1)
	  lfs       f0, 0x40(r30)
	  fsubs     f1, f1, f2
	  stw       r5, 0x8(r1)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  stb       r0, 0xB(r1)
	  lwz       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        -0x25FE54
	  li        r3, 0
	  bl        -0x261028
	  lwz       r3, 0x8C(r30)
	  li        r4, 0
	  addi      r3, r3, 0x1B0
	  bl        -0x25D668
	  lfs       f0, -0xE0(r2)
	  li        r5, 0x168
	  li        r3, 0x90
	  li        r4, 0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  divw      r0, r5, r0
	  rlwinm    r31,r0,0,16,31
	  mulli     r0, r31, 0x6
	  rlwinm    r5,r0,0,16,31
	  bl        -0x261288
	  lis       r3, 0x8050
	  lfs       f5, -0xD4(r2)
	  addi      r6, r3, 0x71A0
	  lfs       f4, -0xE0(r2)
	  lfd       f3, -0xF8(r2)
	  li        r3, 0
	  lfs       f2, -0xD0(r2)
	  lis       r7, 0x4330
	  lfs       f1, -0xCC(r2)
	  lis       r4, 0xCC01
	  lfs       f0, -0x108(r2)
	  lfs       f9, -0xC4(r2)
	  lfs       f7, -0xC0(r2)
	  mtctr     r31
	  cmpwi     r31, 0
	  ble-      .loc_0x3D4

	.loc_0x234:
	  xoris     r5, r3, 0x8000
	  addi      r0, r3, 0x1
	  stw       r5, 0x24(r1)
	  xoris     r0, r0, 0x8000
	  stw       r7, 0x20(r1)
	  lfd       f6, 0x20(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f8, f6, f3
	  stw       r7, 0x18(r1)
	  lfd       f6, 0x18(r1)
	  fmuls     f8, f4, f8
	  fsubs     f6, f6, f3
	  fmuls     f8, f5, f8
	  fmuls     f6, f4, f6
	  fdivs     f10, f8, f2
	  fmuls     f6, f5, f6
	  fcmpo     cr0, f10, f0
	  fdivs     f6, f6, f2
	  bge-      .loc_0x2AC
	  lfs       f8, -0xC8(r2)
	  lis       r5, 0x8050
	  addi      r5, r5, 0x71A0
	  fmuls     f8, f10, f8
	  fctiwz    f8, f8
	  stfd      f8, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f8, r5, r0
	  fneg      f8, f8
	  b         .loc_0x2D0

	.loc_0x2AC:
	  lfs       f8, -0xC4(r2)
	  lis       r5, 0x8050
	  addi      r5, r5, 0x71A0
	  fmuls     f8, f10, f8
	  fctiwz    f8, f8
	  stfd      f8, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f8, r5, r0

	.loc_0x2D0:
	  fcmpo     cr0, f10, f0
	  fmadds    f11, f1, f8, f31
	  bge-      .loc_0x2E0
	  fneg      f10, f10

	.loc_0x2E0:
	  fmuls     f8, f10, f9
	  fcmpo     cr0, f6, f0
	  fctiwz    f8, f8
	  stfd      f8, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r5, r6, r0
	  lfs       f8, 0x4(r5)
	  fnmsubs   f10, f1, f8, f30
	  bge-      .loc_0x334
	  lfs       f8, -0xC8(r2)
	  lis       r5, 0x8050
	  addi      r5, r5, 0x71A0
	  fmuls     f8, f6, f8
	  fctiwz    f8, f8
	  stfd      f8, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f8, r5, r0
	  fneg      f8, f8
	  b         .loc_0x354

	.loc_0x334:
	  fmuls     f8, f6, f9
	  lis       r5, 0x8050
	  addi      r5, r5, 0x71A0
	  fctiwz    f8, f8
	  stfd      f8, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f8, r5, r0

	.loc_0x354:
	  fcmpo     cr0, f6, f0
	  fmadds    f8, f1, f8, f31
	  bge-      .loc_0x364
	  fneg      f6, f6

	.loc_0x364:
	  fmuls     f6, f6, f9
	  addi      r3, r3, 0x1
	  fctiwz    f6, f6
	  stfd      f6, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r5, r6, r0
	  lfs       f6, 0x4(r5)
	  stfs      f31, -0x8000(r4)
	  fnmsubs   f6, f1, f6, f30
	  stfs      f30, -0x8000(r4)
	  stfs      f0, -0x8000(r4)
	  stfs      f11, -0x8000(r4)
	  stfs      f10, -0x8000(r4)
	  stfs      f0, -0x8000(r4)
	  stfs      f8, -0x8000(r4)
	  stfs      f6, -0x8000(r4)
	  stfs      f0, -0x8000(r4)
	  stfs      f29, -0x8000(r4)
	  stfs      f28, -0x8000(r4)
	  stfs      f7, -0x8000(r4)
	  stfs      f11, -0x8000(r4)
	  stfs      f10, -0x8000(r4)
	  stfs      f0, -0x8000(r4)
	  stfs      f8, -0x8000(r4)
	  stfs      f6, -0x8000(r4)
	  stfs      f0, -0x8000(r4)
	  bdnz+     .loc_0x234

	.loc_0x3D4:
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  psq_l     f28,0x68(r1),0,0
	  lfd       f28, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80346E2C
 * Size:	00005C
 */
void Morimura::THurryUp2D::doStart(Screen::StartSceneArg const*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        0x2408
	  mr        r0, r3
	  mr        r3, r30
	  mr        r31, r0
	  bl        .loc_0x5C
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x5C:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void Morimura::THurryUp2D::calcCount(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80346E88
 * Size:	0004C0
 */
void Morimura::THurryUp2D::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  li        r4, 0
	  lfs       f0, -0x108(r2)
	  stw       r0, 0x34(r1)
	  li        r0, 0xFF
	  lfs       f4, -0x100(r2)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lfs       f3, -0xF0(r2)
	  stw       r4, 0xB0(r3)
	  li        r3, 0x64
	  lfs       f2, -0xA8(r2)
	  stfs      f0, 0xB4(r31)
	  lfs       f1, -0xA4(r2)
	  stfs      f0, 0xCC(r31)
	  lfs       f0, -0xA0(r2)
	  stb       r3, 0xDC(r31)
	  stb       r0, 0xDD(r31)
	  stfs      f4, 0xE0(r31)
	  stfs      f3, 0xE4(r31)
	  stb       r3, 0xE8(r31)
	  stb       r0, 0xE9(r31)
	  stfs      f2, 0xEC(r31)
	  stfs      f1, 0xF0(r31)
	  stb       r0, 0x100(r31)
	  stb       r4, 0x101(r31)
	  stfs      f3, 0x104(r31)
	  stfs      f0, 0x108(r31)
	  lwz       r3, 0x80(r31)
	  stb       r4, 0xB0(r3)
	  lfs       f1, 0x9C(r31)
	  lfs       f0, -0x7A88(r13)
	  lwz       r3, 0x80(r31)
	  fadds     f0, f1, f0
	  lfs       f1, 0xA0(r31)
	  stfs      f0, 0xD4(r3)
	  stfs      f1, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x80(r31)
	  li        r4, 0x4
	  bl        -0x30E27C
	  lwz       r3, 0x80(r31)
	  lfs       f0, -0x100(r2)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x80(r31)
	  li        r4, 0x64
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x84(r31)
	  li        r0, 0
	  stb       r0, 0xB0(r3)
	  lfs       f1, 0xA4(r31)
	  lfs       f0, -0x7A88(r13)
	  lwz       r3, 0x84(r31)
	  fsubs     f0, f1, f0
	  lfs       f1, 0xA8(r31)
	  stfs      f0, 0xD4(r3)
	  stfs      f1, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x84(r31)
	  li        r4, 0x4
	  bl        -0x30E2F8
	  lwz       r3, 0x84(r31)
	  lfs       f0, -0x100(r2)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x84(r31)
	  li        r4, 0x64
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x90(r31)
	  li        r4, 0x4
	  bl        -0x30E33C
	  lwz       r3, 0x90(r31)
	  lfs       f0, 0xEC(r31)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x90(r31)
	  li        r4, 0x64
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x90(r31)
	  li        r0, 0
	  li        r4, 0x4
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x88(r31)
	  bl        -0x30E38C
	  lwz       r3, 0x88(r31)
	  lfs       f0, -0xF0(r2)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x88(r31)
	  li        r0, 0
	  li        r4, 0x4
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x94(r31)
	  bl        -0x30E3C4
	  lwz       r3, 0x94(r31)
	  lfs       f0, -0x100(r2)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x94(r31)
	  li        r0, 0
	  li        r4, 0x64
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x94(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x98(r31)
	  li        r4, 0x4
	  bl        -0x30E414
	  lwz       r3, 0x98(r31)
	  lfs       f0, -0x100(r2)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x98(r31)
	  li        r0, 0
	  li        r4, 0x64
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x98(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0xC4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x364
	  lwz       r3, 0x8C(r31)
	  li        r6, 0x1
	  li        r5, 0x6
	  li        r4, 0x7
	  stb       r6, 0xB0(r3)
	  li        r0, 0
	  lwz       r3, 0x88(r31)
	  stb       r6, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  stb       r5, 0x1D(r1)
	  lwz       r12, 0x13C(r12)
	  stb       r4, 0x1E(r1)
	  stb       r0, 0x1F(r1)
	  lwz       r0, 0x1C(r1)
	  stw       r0, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lbz       r6, 0x10(r1)
	  li        r4, 0x1
	  li        r0, 0
	  lbz       r5, 0x11(r1)
	  stb       r6, 0x7C(r3)
	  lbz       r6, 0x12(r1)
	  stb       r5, 0x7D(r3)
	  lbz       r5, 0x13(r1)
	  stb       r6, 0x7E(r3)
	  stb       r5, 0x7F(r3)
	  lwz       r3, 0x8C(r31)
	  stb       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  stb       r4, 0x19(r1)
	  lwz       r12, 0x13C(r12)
	  stb       r0, 0x1A(r1)
	  stb       r0, 0x1B(r1)
	  lwz       r0, 0x18(r1)
	  stw       r0, 0xC(r1)
	  mtctr     r12
	  bctrl
	  lbz       r5, 0xC(r1)
	  li        r0, 0
	  lbz       r4, 0xD(r1)
	  stb       r5, 0x7C(r3)
	  lbz       r5, 0xE(r1)
	  stb       r4, 0x7D(r3)
	  lbz       r4, 0xF(r1)
	  stb       r5, 0x7E(r3)
	  stb       r4, 0x7F(r3)
	  lwz       r3, 0x8C(r31)
	  stb       r0, 0x1E0(r3)
	  b         .loc_0x3E8

	.loc_0x364:
	  lwz       r3, 0x7C(r31)
	  li        r6, 0x1
	  li        r5, 0x4
	  li        r7, 0x5
	  lwz       r12, 0x0(r3)
	  li        r0, 0
	  lis       r4, 0x7375
	  stb       r6, 0x14(r1)
	  lwz       r12, 0x3C(r12)
	  addi      r6, r4, 0x6E77
	  stb       r5, 0x15(r1)
	  li        r5, 0
	  stb       r7, 0x16(r1)
	  stb       r0, 0x17(r1)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r0, 0x14(r1)
	  lwz       r12, 0x13C(r12)
	  stw       r0, 0x8(r1)
	  mtctr     r12
	  bctrl
	  lbz       r5, 0x8(r1)
	  li        r0, 0
	  lbz       r4, 0x9(r1)
	  stb       r5, 0x7C(r3)
	  lbz       r5, 0xA(r1)
	  stb       r4, 0x7D(r3)
	  lbz       r4, 0xB(r1)
	  stb       r5, 0x7E(r3)
	  stb       r4, 0x7F(r3)
	  lwz       r3, 0x8C(r31)
	  stb       r0, 0xB0(r3)

	.loc_0x3E8:
	  lbz       r0, -0x6760(r13)
	  li        r6, 0x4B
	  lfs       f2, -0xB0(r2)
	  li        r4, 0x9
	  cmplwi    r0, 0
	  li        r3, 0x40
	  li        r0, 0x6
	  beq-      .loc_0x40C
	  lfs       f2, -0xAC(r2)

	.loc_0x40C:
	  lwz       r7, 0xAC(r31)
	  li        r5, 0x1
	  lfs       f1, 0x8(r7)
	  lfs       f0, 0xC(r7)
	  fsubs     f0, f1, f0
	  stw       r5, 0xB0(r31)
	  fdivs     f0, f0, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r7, 0x24(r1)
	  cmpw      r7, r6
	  blt-      .loc_0x47C
	  sub       r7, r7, r6
	  li        r5, 0x2
	  cmpw      r7, r4
	  stw       r5, 0xB0(r31)
	  blt-      .loc_0x47C
	  sub       r7, r7, r4
	  li        r5, 0x3
	  cmpw      r7, r3
	  stw       r5, 0xB0(r31)
	  blt-      .loc_0x47C
	  sub       r7, r7, r3
	  li        r5, 0x4
	  cmpw      r7, r0
	  stw       r5, 0xB0(r31)
	  blt-      .loc_0x47C
	  sub       r7, r7, r0

	.loc_0x47C:
	  xoris     r3, r7, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  mr        r3, r31
	  lfd       f1, -0xF8(r2)
	  stw       r0, 0x20(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0xB4(r31)
	  lwz       r4, 0xB0(r31)
	  lfs       f1, 0xB4(r31)
	  bl        0x83C
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80347348
 * Size:	0002CC
 */
void Morimura::THurryUp2D::move(void)
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
	  lfs       f1, -0x9C(r2)
	  mr        r31, r3
	  lfs       f0, -0x7A84(r13)
	  lwz       r3, -0x6514(r13)
	  fmuls     f3, f1, f0
	  lfs       f1, 0x9C(r31)
	  lfs       f2, 0x54(r3)
	  lfs       f0, -0x7A88(r13)
	  fmuls     f31, f3, f2
	  lfs       f2, 0xB4(r31)
	  fadds     f0, f1, f0
	  lwz       r3, 0x80(r31)
	  lfs       f1, 0xA0(r31)
	  fnmsubs   f0, f31, f2, f0
	  stfs      f0, 0xD4(r3)
	  stfs      f1, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xA4(r31)
	  lfs       f0, -0x7A88(r13)
	  lwz       r3, 0x84(r31)
	  fsubs     f0, f1, f0
	  lfs       f1, 0xB4(r31)
	  lfs       f2, 0xA8(r31)
	  fmadds    f0, f31, f1, f0
	  stfs      f0, 0xD4(r3)
	  stfs      f2, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r4, 0xDC(r31)
	  lis       r0, 0x4330
	  lwz       r3, 0x80(r31)
	  stw       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  stw       r0, 0x8(r1)
	  lfd       f2, -0xB8(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f0, 0x40(r31)
	  fsubs     f1, f1, f2
	  lwz       r12, 0x24(r12)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r30, 0x14(r1)
	  mr        r4, r30
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x84(r31)
	  mr        r4, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x80(r31)
	  lfs       f0, 0x9C(r31)
	  lfs       f1, 0xD4(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x254
	  lwz       r3, 0x94(r31)
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x98(r31)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x80(r31)
	  lwz       r0, 0xB0(r31)
	  lfs       f1, 0x9C(r31)
	  lfs       f0, 0xD4(r3)
	  mulli     r0, r0, 0xC
	  lfs       f2, -0x7A78(r13)
	  fsubs     f0, f1, f0
	  add       r3, r31, r0
	  lfs       f30, 0xD4(r3)
	  fabs      f0, f0
	  lfs       f1, 0xD8(r3)
	  frsp      f0, f0
	  fdivs     f0, f0, f31
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x198

	.loc_0x17C:
	  fcmpo     cr0, f30, f1
	  bge-      .loc_0x188
	  fmuls     f30, f30, f2

	.loc_0x188:
	  fcmpo     cr0, f30, f1
	  ble-      .loc_0x194
	  fmr       f30, f1

	.loc_0x194:
	  bdnz+     .loc_0x17C

	.loc_0x198:
	  lwz       r3, 0x94(r31)
	  lbz       r0, 0xB2(r3)
	  cmplwi    r0, 0xFF
	  bge-      .loc_0x21C
	  lfs       f1, 0xB8(r31)
	  lis       r0, 0x4330
	  lfs       f0, 0xBC(r31)
	  lwz       r12, 0x0(r3)
	  fmadds    f0, f1, f30, f0
	  stw       r0, 0x8(r1)
	  lfd       f1, -0xB8(r2)
	  lfs       f2, 0x40(r31)
	  fctiwz    f0, f0
	  lwz       r12, 0x24(r12)
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,0,24,31
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r30, 0x1C(r1)
	  mr        r4, r30
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x98(r31)
	  mr        r4, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x21C:
	  lwz       r3, 0x94(r31)
	  stfs      f30, 0xCC(r3)
	  stfs      f30, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x98(r31)
	  stfs      f30, 0xCC(r3)
	  stfs      f30, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x254:
	  lfs       f1, 0x9C(r31)
	  lfs       f0, -0x7A88(r13)
	  lwz       r3, 0x80(r31)
	  fsubs     f0, f1, f0
	  lfs       f1, 0xD4(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2A4
	  lwz       r0, 0xB0(r31)
	  lwz       r3, 0x94(r31)
	  mulli     r0, r0, 0xC
	  lfs       f1, 0xCC(r3)
	  add       r3, r31, r0
	  lfs       f0, 0xD8(r3)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x2A4
	  lfs       f1, -0x108(r2)
	  mr        r3, r31
	  li        r4, 0x2
	  bl        0x584

	.loc_0x2A4:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80347614
 * Size:	000168
 */
void Morimura::THurryUp2D::scaleUp1(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lwz       r0, 0xB0(r3)
	  lwz       r5, 0x90(r3)
	  mulli     r0, r0, 0xC
	  lfs       f0, 0xCC(r5)
	  add       r4, r30, r0
	  lfs       f4, 0xD8(r4)
	  fcmpo     cr0, f0, f4
	  bge-      .loc_0xD4
	  lfs       f1, 0xB4(r30)
	  lfs       f0, -0x7A80(r13)
	  lwz       r3, -0x6514(r13)
	  fmuls     f2, f1, f0
	  lfs       f3, -0x9C(r2)
	  lfs       f1, 0x54(r3)
	  lfs       f0, 0xD4(r4)
	  fmuls     f2, f3, f2
	  fmadds    f31, f2, f1, f0
	  fcmpo     cr0, f31, f4
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x74
	  fmr       f31, f4

	.loc_0x74:
	  lfs       f1, 0xB8(r30)
	  lis       r0, 0x4330
	  lfs       f0, 0xBC(r30)
	  mr        r3, r5
	  lwz       r12, 0x0(r5)
	  fmadds    f0, f1, f31, f0
	  stw       r0, 0x10(r1)
	  lfd       f1, -0xB8(r2)
	  lfs       f2, 0x40(r30)
	  fctiwz    f0, f0
	  lwz       r12, 0x24(r12)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,0,24,31
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r4, 0x1C(r1)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE4

	.loc_0xD4:
	  lfs       f31, -0xF0(r2)
	  li        r4, 0x3
	  lfs       f1, -0x108(r2)
	  bl        0x478

	.loc_0xE4:
	  lwz       r3, 0x90(r30)
	  stfs      f31, 0xCC(r3)
	  stfs      f31, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, -0x104(r2)
	  lfs       f0, 0x40(r30)
	  lwz       r3, 0x94(r30)
	  fmuls     f0, f1, f0
	  lwz       r12, 0x0(r3)
	  fctiwz    f0, f0
	  lwz       r12, 0x24(r12)
	  stfd      f0, 0x18(r1)
	  lwz       r31, 0x1C(r1)
	  mr        r4, r31
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x98(r30)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034777C
 * Size:	0001B0
 */
void Morimura::THurryUp2D::colorUp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x4330
	  lfs       f1, -0x98(r2)
	  stw       r0, 0x34(r1)
	  lfd       f3, -0xF8(r2)
	  stw       r31, 0x2C(r1)
	  li        r31, 0xFF
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lwz       r4, -0x6514(r13)
	  lwz       r0, 0xB0(r3)
	  lfs       f0, 0x54(r4)
	  mulli     r0, r0, 0xC
	  lfs       f2, -0x7A74(r13)
	  fmuls     f0, f1, f0
	  stw       r5, 0x10(r1)
	  lfs       f4, 0xB4(r3)
	  add       r4, r30, r0
	  fmuls     f0, f2, f0
	  lbz       r0, 0xD1(r4)
	  stw       r5, 0x18(r1)
	  lfd       f2, -0xB8(r2)
	  fctiwz    f1, f0
	  stw       r0, 0x1C(r1)
	  lfd       f0, 0x18(r1)
	  stfd      f1, 0x8(r1)
	  fsubs     f0, f0, f2
	  lwz       r0, 0xC(r1)
	  xoris     r6, r0, 0x8000
	  stw       r6, 0x14(r1)
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f3
	  fmuls     f1, f1, f4
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xC8
	  lbz       r0, 0xD0(r4)
	  stw       r6, 0x1C(r1)
	  stw       r5, 0x18(r1)
	  lfd       f0, 0x18(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f1, f0, f3
	  stw       r5, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fmadds    f0, f4, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r31, 0xC(r1)
	  b         .loc_0xD4

	.loc_0xC8:
	  lfs       f1, -0x108(r2)
	  li        r4, 0x4
	  bl        0x320

	.loc_0xD4:
	  lwz       r3, 0x8C(r30)
	  li        r4, 0xFF
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r3,r31,0,24,31
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lwz       r3, 0x8C(r30)
	  stw       r0, 0x18(r1)
	  lfd       f2, -0xB8(r2)
	  stb       r31, 0x1E0(r3)
	  lfd       f1, 0x18(r1)
	  lfs       f0, 0x40(r30)
	  fsubs     f1, f1, f2
	  lwz       r3, 0x90(r30)
	  lwz       r12, 0x0(r3)
	  fmuls     f0, f1, f0
	  lwz       r12, 0x24(r12)
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r4, 0x14(r1)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x88(r30)
	  li        r4, 0xFF
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, -0x104(r2)
	  lfs       f0, 0x40(r30)
	  lwz       r3, 0x94(r30)
	  fmuls     f0, f1, f0
	  lwz       r12, 0x0(r3)
	  fctiwz    f0, f0
	  lwz       r12, 0x24(r12)
	  stfd      f0, 0x8(r1)
	  lwz       r31, 0xC(r1)
	  mr        r4, r31
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x98(r30)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034792C
 * Size:	000240
 */
void Morimura::THurryUp2D::scaleUp2(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  lwz       r0, 0xB0(r3)
	  lwz       r3, 0x90(r3)
	  mulli     r0, r0, 0xC
	  lfs       f0, 0xCC(r3)
	  add       r4, r30, r0
	  lfs       f4, 0xD8(r4)
	  fcmpo     cr0, f0, f4
	  bge-      .loc_0x150
	  lfs       f1, 0xB4(r30)
	  lfs       f0, -0x7A7C(r13)
	  lwz       r3, -0x6514(r13)
	  fmuls     f2, f1, f0
	  lfs       f3, -0x9C(r2)
	  lfs       f1, 0x54(r3)
	  lfs       f0, 0xD4(r4)
	  fmuls     f2, f3, f2
	  fmadds    f31, f2, f1, f0
	  fcmpo     cr0, f31, f4
	  ble-      .loc_0x70
	  fmr       f31, f4

	.loc_0x70:
	  lfs       f1, 0xB8(r30)
	  lis       r0, 0x4330
	  lfs       f0, 0xBC(r30)
	  lwz       r3, 0x94(r30)
	  fmadds    f0, f1, f31, f0
	  stw       r0, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lfd       f1, -0xB8(r2)
	  fctiwz    f0, f0
	  lfs       f2, 0x40(r30)
	  lwz       r12, 0x24(r12)
	  stfd      f0, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,0,24,31
	  stw       r0, 0x4C(r1)
	  lfd       f0, 0x48(r1)
	  fsubs     f0, f0, f1
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x50(r1)
	  lwz       r31, 0x54(r1)
	  mr        r4, r31
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x98(r30)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x90(r30)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x88(r30)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8C(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x90(r30)
	  stfs      f31, 0xCC(r3)
	  stfs      f31, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x220

	.loc_0x150:
	  lbz       r4, -0x6760(r13)
	  cmplwi    r4, 0
	  bne-      .loc_0x220
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x220
	  cmplwi    r4, 0
	  bne-      .loc_0x220
	  lwz       r0, -0x64AC(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x220
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x15
	  bl        -0x1606D4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x220
	  lfs       f0, -0x108(r2)
	  lis       r4, 0x8049
	  li        r0, 0
	  lwz       r3, -0x6D20(r13)
	  addi      r4, r4, 0x2D8
	  stw       r0, 0xC(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stfs      f0, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  stw       r0, 0x18(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0x34(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x38(r1)
	  bl        -0x1ECEE8
	  mr.       r31, r3
	  beq-      .loc_0x220
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x220
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x15
	  bl        -0x160784
	  lwz       r3, -0x64AC(r13)
	  addi      r4, r1, 0x8
	  stw       r31, 0x18C(r3)
	  lwz       r0, 0x280(r31)
	  lwz       r3, -0x64AC(r13)
	  stw       r0, 0x190(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0xE4E88

	.loc_0x220:
	  psq_l     f31,0x68(r1),0,0
	  lwz       r0, 0x74(r1)
	  lfd       f31, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80347B6C
 * Size:	000254
 */
void Morimura::THurryUp2D::changeState(int, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfd       f4, -0xB8(r2)
	  stw       r0, 0x24(r1)
	  lis       r0, 0x4330
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r4, 0xB0(r3)
	  stfs      f1, 0xB4(r3)
	  lwz       r3, 0xB0(r3)
	  stw       r0, 0x8(r1)
	  mulli     r3, r3, 0xC
	  stw       r0, 0x10(r1)
	  add       r4, r31, r3
	  lbz       r3, 0xD1(r4)
	  lbz       r0, 0xD0(r4)
	  stw       r3, 0xC(r1)
	  lfs       f1, 0xD8(r4)
	  stw       r0, 0x14(r1)
	  lfd       f3, 0x8(r1)
	  lfd       f2, 0x10(r1)
	  lfs       f0, 0xD4(r4)
	  fsubs     f3, f3, f4
	  fsubs     f2, f2, f4
	  fsubs     f0, f1, f0
	  fsubs     f1, f3, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0xB8(r31)
	  lwz       r0, 0xB0(r31)
	  lfs       f1, 0xB8(r31)
	  mulli     r0, r0, 0xC
	  add       r3, r31, r0
	  lfs       f0, 0xD8(r3)
	  fnmsubs   f0, f1, f0, f3
	  stfs      f0, 0xBC(r31)
	  lwz       r0, 0xB0(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xE0
	  bge-      .loc_0xAC
	  cmpwi     r0, 0
	  beq-      .loc_0xB8
	  bge-      .loc_0xC8
	  b         .loc_0x240

	.loc_0xAC:
	  cmpwi     r0, 0x5
	  bge-      .loc_0x240
	  b         .loc_0x16C

	.loc_0xB8:
	  lwz       r3, 0x8C(r31)
	  li        r0, 0
	  stb       r0, 0x1E0(r3)
	  b         .loc_0x240

	.loc_0xC8:
	  lwz       r3, 0x80(r31)
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x84(r31)
	  stb       r0, 0xB0(r3)
	  b         .loc_0x240

	.loc_0xE0:
	  lwz       r3, 0x80(r31)
	  li        r0, 0
	  lfs       f0, -0xF0(r2)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x84(r31)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x94(r31)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x98(r31)
	  lfs       f0, -0xF0(r2)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x94(r31)
	  li        r0, 0x1
	  li        r4, 0
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x98(r31)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x90(r31)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x90(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x240

	.loc_0x16C:
	  lwz       r3, 0x90(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x88(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x94(r31)
	  lfs       f0, -0xF0(r2)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x98(r31)
	  lfs       f0, -0xF0(r2)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x90(r31)
	  lfs       f0, -0xF0(r2)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x88(r31)
	  lfs       f0, -0xF0(r2)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x94(r31)
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x98(r31)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x90(r31)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x88(r31)
	  stb       r0, 0xB0(r3)

	.loc_0x240:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80347DC0
 * Size:	000034
 */
void Morimura::THurryUp2D::getDispMemberBase(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x20
	  lwz       r3, 0xAC(r3)
	  b         .loc_0x24

	.loc_0x20:
	  bl        0x10C1C8

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80347DF4
 * Size:	0000C4
 */
Morimura::THurryUp2D::~THurryUp2D(void)
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
	  beq-      .loc_0xA8
	  lis       r4, 0x804E
	  subi      r4, r4, 0x4D0C
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x98
	  lis       r4, 0x804E
	  subi      r4, r4, 0x4708
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x98
	  lis       r4, 0x804F
	  subi      r4, r4, 0x28A8
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x98
	  lis       r4, 0x804E
	  subi      r4, r4, 0x7DC0
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  bl        0xC9760
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x32AE48
	  mr        r3, r30
	  li        r4, 0
	  bl        0xC9700

	.loc_0x98:
	  extsh.    r0, r31
	  ble-      .loc_0xA8
	  mr        r3, r30
	  bl        -0x323DE4

	.loc_0xA8:
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
 * Address:	80347EB8
 * Size:	000060
 */
Morimura::THuWhitePaneSet::~THuWhitePaneSet(void)
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
	  lis       r5, 0x804E
	  li        r4, 0
	  subi      r0, r5, 0x4C90
	  stw       r0, 0x0(r30)
	  bl        -0x2F2C9C
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x323E44

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
 * Address:	80347F18
 * Size:	000028
 */
void __sinit_hurryUp2D_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804E
	  stw       r0, -0x6768(r13)
	  stfsu     f0, -0x4D18(r3)
	  stfs      f0, -0x6764(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80347F40
 * Size:	000008
 */
@24 @Morimura::THurryUp2D::~THurryUp2D(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x150
	*/
}
