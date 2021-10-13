

/*
 * --INFO--
 * Address:	80049B20
 * Size:	0000AC
 */
void J2DColorBlock::initialize()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  li        r4, 0x2
	  lwz       r9, -0x7A54(r2)
	  subi      r10, r2, 0x7A28
	  li        r0, 0
	  stw       r9, 0x8(r1)
	  lbz       r8, 0x8(r1)
	  lbz       r7, 0x9(r1)
	  stb       r8, 0x0(r3)
	  lbz       r6, 0xA(r1)
	  lbz       r5, 0xB(r1)
	  stb       r7, 0x1(r3)
	  stb       r6, 0x2(r3)
	  stw       r9, 0x8(r1)
	  stb       r8, 0xC(r1)
	  lbz       r8, 0x8(r1)
	  stb       r5, 0x3(r3)
	  stb       r7, 0xD(r1)
	  lbz       r7, 0x9(r1)
	  stb       r8, 0x4(r3)
	  stb       r6, 0xE(r1)
	  lbz       r6, 0xA(r1)
	  stb       r7, 0x5(r3)
	  stb       r5, 0xF(r1)
	  lbz       r5, 0xB(r1)
	  stb       r6, 0x6(r3)
	  stb       r5, 0x7(r3)
	  stb       r4, 0x8(r3)
	  lbz       r4, 0x1(r10)
	  stb       r8, 0xC(r1)
	  sth       r4, 0xA(r3)
	  lbz       r4, 0x1(r10)
	  stb       r7, 0xD(r1)
	  sth       r4, 0xC(r3)
	  lbz       r4, 0x1(r10)
	  stb       r6, 0xE(r1)
	  sth       r4, 0xE(r3)
	  lbz       r4, 0x1(r10)
	  stb       r5, 0xF(r1)
	  sth       r4, 0x10(r3)
	  stb       r0, 0x12(r3)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80049BCC
 * Size:	0000F4
 */
void J2DColorBlock::setGX()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  li        r30, 0
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  mr        r28, r3
	  mr        r31, r28

	.loc_0x28:
	  lwz       r0, 0x0(r31)
	  addi      r3, r30, 0x4
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        0x9D170
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x2
	  blt+      .loc_0x28
	  lbz       r3, 0x8(r28)
	  bl        0x9D248
	  lis       r3, 0x8048
	  mr        r31, r28
	  subi      r6, r3, 0x7A30
	  addi      r30, r1, 0xC
	  lwz       r5, 0x0(r6)
	  li        r29, 0
	  lwz       r4, 0x4(r6)
	  lwz       r3, 0x8(r6)
	  lwz       r0, 0xC(r6)
	  stw       r5, 0xC(r1)
	  stw       r4, 0x10(r1)
	  stw       r3, 0x14(r1)
	  stw       r0, 0x18(r1)
	  b         .loc_0xBC

	.loc_0x8C:
	  lhz       r0, 0xA(r31)
	  li        r4, 0
	  lwz       r3, 0x0(r30)
	  li        r5, 0
	  rlwinm    r6,r0,0,31,31
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0x9D228
	  addi      r31, r31, 0x2
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x1

	.loc_0xBC:
	  lbz       r0, 0x8(r28)
	  rlwinm    r0,r0,1,0,30
	  cmpw      r29, r0
	  blt+      .loc_0x8C
	  lbz       r3, 0x12(r28)
	  bl        0x9BF0C
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80049CC0
 * Size:	0000F0
 */
void J2DTexGenBlock::initialize()
{
	/*
	.loc_0x0:
	  li        r5, 0
	  lis       r4, 0x8048
	  stw       r5, 0x0(r3)
	  lbzu      r0, -0x79B8(r4)
	  stb       r0, 0x4(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x5(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x6(r3)
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x8(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x9(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0xA(r3)
	  lbz       r0, 0x0(r4)
	  stb       r0, 0xC(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0xD(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0xE(r3)
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x10(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x11(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x12(r3)
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x14(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x15(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x16(r3)
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x18(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x19(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x1A(r3)
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x1C(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1D(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x1E(r3)
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x20(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x21(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x22(r3)
	  stw       r5, 0x24(r3)
	  stw       r5, 0x28(r3)
	  stw       r5, 0x2C(r3)
	  stw       r5, 0x30(r3)
	  stw       r5, 0x34(r3)
	  stw       r5, 0x38(r3)
	  stw       r5, 0x3C(r3)
	  stw       r5, 0x40(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80049DB0
 * Size:	0000B4
 */
void J2DTexGenBlock::setGX()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, 0x0(r3)
	  rlwinm    r3,r0,0,24,31
	  bl        0x9B1C8
	  mr        r31, r29
	  li        r30, 0
	  b         .loc_0x58

	.loc_0x34:
	  lbz       r4, 0x4(r31)
	  mr        r3, r30
	  lbz       r5, 0x5(r31)
	  li        r7, 0
	  lbz       r6, 0x6(r31)
	  li        r8, 0x7D
	  bl        0x9AF20
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x1

	.loc_0x58:
	  lwz       r0, 0x0(r29)
	  cmplw     r30, r0
	  blt+      .loc_0x34
	  li        r30, 0
	  b         .loc_0x8C

	.loc_0x6C:
	  rlwinm    r3,r30,2,22,29
	  rlwinm    r4,r30,0,24,31
	  addi      r0, r3, 0x24
	  lwzx      r3, r29, r0
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  bl        0xF3E8

	.loc_0x88:
	  addi      r30, r30, 0x1

	.loc_0x8C:
	  rlwinm    r0,r30,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x6C
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
 * Address:	80049E64
 * Size:	000090
 */
void J2DTexGenBlock::~J2DTexGenBlock()
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
	  beq-      .loc_0x6C
	  lis       r3, 0x804A
	  mr        r31, r28
	  addi      r0, r3, 0x1150
	  li        r30, 0
	  stw       r0, 0x44(r28)

	.loc_0x3C:
	  lwz       r3, 0x24(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  bl        -0x25DF8

	.loc_0x4C:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x8
	  blt+      .loc_0x3C
	  extsh.    r0, r29
	  ble-      .loc_0x6C
	  mr        r3, r28
	  bl        -0x25E18

	.loc_0x6C:
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
 * Address:	80049EF4
 * Size:	000158
 */
void J2DTexGenBlock::setTexMtx(unsigned long, J2DTexMtx&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  rlwinm    r0,r4,2,0,29
	  stw       r31, 0x3C(r1)
	  add       r31, r3, r0
	  stw       r30, 0x38(r1)
	  mr        r30, r5
	  lwz       r9, 0x24(r31)
	  cmplwi    r9, 0
	  bne-      .loc_0xA0
	  li        r3, 0x54
	  bl        -0x26080
	  cmplwi    r3, 0
	  beq-      .loc_0x8C
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0xC(r30)
	  stfs      f0, 0xC(r3)
	  lbz       r0, 0x0(r30)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r30)
	  stb       r0, 0x1(r3)
	  lfs       f0, 0x10(r30)
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0x14(r30)
	  stfs      f0, 0x14(r3)
	  lfs       f0, 0x18(r30)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0x1C(r30)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x20(r30)
	  stfs      f0, 0x20(r3)

	.loc_0x8C:
	  stw       r3, 0x24(r31)
	  lwz       r0, 0x24(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x138
	  b         .loc_0x140

	.loc_0xA0:
	  lwz       r3, 0x4(r30)
	  lwz       r0, 0x8(r30)
	  stw       r3, 0xC(r1)
	  lwz       r3, 0x0(r30)
	  stw       r0, 0x10(r1)
	  lwz       r0, 0xC(r30)
	  lwz       r8, 0x10(r30)
	  lwz       r7, 0x14(r30)
	  stw       r3, 0x8(r1)
	  lwz       r6, 0x18(r30)
	  lwz       r5, 0x1C(r30)
	  lwz       r4, 0x20(r30)
	  lfs       f0, 0xC(r1)
	  stw       r0, 0x14(r1)
	  lfs       f1, 0x10(r1)
	  stfs      f0, 0x4(r9)
	  lfs       f0, 0x14(r1)
	  stfs      f1, 0x8(r9)
	  lbz       r3, 0x8(r1)
	  stfs      f0, 0xC(r9)
	  lbz       r0, 0x9(r1)
	  stw       r8, 0x18(r1)
	  stb       r3, 0x0(r9)
	  lfs       f0, 0x18(r1)
	  stw       r7, 0x1C(r1)
	  stb       r0, 0x1(r9)
	  lfs       f1, 0x1C(r1)
	  stw       r6, 0x20(r1)
	  stfs      f0, 0x10(r9)
	  lfs       f0, 0x20(r1)
	  stw       r5, 0x24(r1)
	  stfs      f1, 0x14(r9)
	  lfs       f1, 0x24(r1)
	  stw       r4, 0x28(r1)
	  stfs      f0, 0x18(r9)
	  lfs       f0, 0x28(r1)
	  stfs      f1, 0x1C(r9)
	  stfs      f0, 0x20(r9)

	.loc_0x138:
	  lwz       r3, 0x24(r31)
	  bl        0xF21C

	.loc_0x140:
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
 * Address:	8004A04C
 * Size:	0000B8
 */
void J2DTexGenBlock::getTexMtx(unsigned long, J2DTexMtx&)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  stwu      r1, -0x30(r1)
	  add       r3, r3, r0
	  lwz       r4, 0x24(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0xB0
	  lwz       r3, 0x4(r4)
	  lwz       r0, 0x8(r4)
	  stw       r3, 0xC(r1)
	  lwz       r3, 0x0(r4)
	  stw       r0, 0x10(r1)
	  lwz       r0, 0xC(r4)
	  lwz       r9, 0x10(r4)
	  lwz       r8, 0x14(r4)
	  stw       r3, 0x8(r1)
	  lwz       r7, 0x18(r4)
	  lwz       r6, 0x1C(r4)
	  lwz       r4, 0x20(r4)
	  lfs       f0, 0xC(r1)
	  stw       r0, 0x14(r1)
	  lfs       f1, 0x10(r1)
	  stfs      f0, 0x4(r5)
	  lfs       f0, 0x14(r1)
	  stfs      f1, 0x8(r5)
	  lbz       r3, 0x8(r1)
	  stfs      f0, 0xC(r5)
	  lbz       r0, 0x9(r1)
	  stw       r9, 0x18(r1)
	  stb       r3, 0x0(r5)
	  lfs       f0, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stb       r0, 0x1(r5)
	  lfs       f1, 0x1C(r1)
	  stw       r7, 0x20(r1)
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x20(r1)
	  stw       r6, 0x24(r1)
	  stfs      f1, 0x14(r5)
	  lfs       f1, 0x24(r1)
	  stw       r4, 0x28(r1)
	  stfs      f0, 0x18(r5)
	  lfs       f0, 0x28(r1)
	  stfs      f1, 0x1C(r5)
	  stfs      f0, 0x20(r5)

	.loc_0xB0:
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004A104
 * Size:	000008
 */
void J2DTevBlock::getTexture(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004A10C
 * Size:	000008
 */
void J2DTevBlock::getPalette(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004A114
 * Size:	00010C
 */
void J2DTevBlock1::J2DTevBlock1()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x1094
	  lis       r4, 0x8005
	  li        r6, 0x4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x804A
	  subi      r4, r4, 0x5D3C
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0xFD8
	  addi      r3, r31, 0x8
	  li        r7, 0x1
	  stw       r0, 0x0(r31)
	  bl        0x776E4
	  lis       r4, 0x8005
	  addi      r3, r31, 0xC
	  subi      r4, r4, 0x5D40
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x4
	  bl        0x776C8
	  lis       r4, 0x8005
	  addi      r3, r31, 0x2C
	  subi      r4, r4, 0x6A28
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x1
	  bl        0x776AC
	  lis       r4, 0x8004
	  addi      r3, r31, 0x34
	  subi      r4, r4, 0x646C
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x77690
	  lis       r4, 0x8005
	  addi      r3, r31, 0x46
	  subi      r4, r4, 0x5D4C
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0x4
	  bl        0x77674
	  lis       r4, 0x8005
	  addi      r3, r31, 0x4C
	  subi      r4, r4, 0x5DE0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x1
	  bl        0x77658
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x50(r31)
	  stb       r0, 0x5C(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8004A220
 * Size:	000094
 */
void J2DIndTevStage::J2DIndTevStage()
{
	/*
	.loc_0x0:
	  lis       r4, 0x8048
	  stwu      r1, -0x20(r1)
	  subi      r5, r4, 0x7944
	  lwz       r4, 0x4(r5)
	  lwz       r0, 0x8(r5)
	  stw       r4, 0xC(r1)
	  lwz       r4, 0x0(r5)
	  stw       r0, 0x10(r1)
	  lbz       r0, 0xF(r1)
	  stw       r4, 0x8(r1)
	  lbz       r4, 0x10(r1)
	  rlwinm    r0,r0,21,0,10
	  lbz       r5, 0xE(r1)
	  rlwinm    r4,r4,22,0,9
	  lbz       r6, 0xB(r1)
	  or        r0, r4, r0
	  rlwinm    r5,r5,20,0,11
	  lbz       r7, 0xD(r1)
	  or        r0, r5, r0
	  rlwinm    r4,r6,16,0,15
	  lbz       r8, 0xC(r1)
	  lbz       r9, 0xA(r1)
	  or        r0, r4, r0
	  rlwinm    r5,r7,11,0,20
	  lbz       r10, 0x9(r1)
	  or        r0, r5, r0
	  rlwinm    r6,r8,8,0,23
	  or        r0, r6, r0
	  rlwinm    r4,r9,4,0,27
	  rlwinm    r5,r10,2,0,29
	  lbz       r6, 0x8(r1)
	  or        r0, r4, r0
	  or        r0, r5, r0
	  or        r0, r6, r0
	  stw       r0, 0x0(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004A2B4
 * Size:	00000C
 */
void J2DTevSwapModeTable::J2DTevSwapModeTable()
{
	/*
	.loc_0x0:
	  lbz       r0, -0x7A24(r2)
	  stb       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004A2C0
 * Size:	000004
 */
void J2DGXColorS10::J2DGXColorS10()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004A2C4
 * Size:	000020
 */
void J2DTevOrder::J2DTevOrder()
{
	/*
	.loc_0x0:
	  lbz       r0, -0x7A50(r2)
	  subi      r4, r2, 0x7A50
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
 * Address:	8004A2E4
 * Size:	000048
 */
void J2DTevBlock::~J2DTevBlock()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804A
	  extsh.    r0, r4
	  addi      r0, r5, 0x1094
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x2625C

	.loc_0x30:
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
 * Address:	8004A32C
 * Size:	0000B8
 */
void J2DTevBlock1::~J2DTevBlock1()
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
	  beq-      .loc_0x9C
	  lis       r3, 0x804A
	  addi      r0, r3, 0xFD8
	  stw       r0, 0x0(r30)
	  lbz       r0, 0x5C(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x44
	  lwz       r3, 0x50(r30)
	  li        r4, 0x1
	  bl        -0x1735C

	.loc_0x44:
	  lwz       r3, 0x54(r30)
	  bl        -0x262C0
	  lbz       r0, 0x5C(r30)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x78
	  lwz       r3, 0x58(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x78:
	  cmplwi    r30, 0
	  beq-      .loc_0x8C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1094
	  stw       r0, 0x0(r30)

	.loc_0x8C:
	  extsh.    r0, r31
	  ble-      .loc_0x9C
	  mr        r3, r30
	  bl        -0x26310

	.loc_0x9C:
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
 * Address:	8004A3E4
 * Size:	000278
 */
void J2DTevBlock1::initialize()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  subi      r6, r2, 0x7A48
	  lis       r4, 0x1
	  subi      r12, r2, 0x7A50
	  stw       r31, 0x2C(r1)
	  subi      r0, r4, 0x1
	  lha       r10, -0x7A48(r2)
	  li        r5, 0xC0
	  sth       r0, 0x4(r3)
	  li        r4, 0xC1
	  lha       r9, 0x2(r6)
	  mr        r31, r3
	  sth       r0, 0x6(r3)
	  li        r0, 0x2
	  lha       r8, 0x4(r6)
	  lbz       r7, -0x7A50(r2)
	  lha       r6, 0x6(r6)
	  stb       r7, 0x8(r3)
	  lwz       r7, -0x7A3C(r2)
	  lbz       r11, 0x1(r12)
	  stb       r11, 0x9(r3)
	  lbz       r11, 0x2(r12)
	  stb       r11, 0xA(r3)
	  sth       r10, 0xC(r3)
	  sth       r9, 0xE(r3)
	  sth       r8, 0x10(r3)
	  sth       r6, 0x12(r3)
	  sth       r10, 0x14(r3)
	  sth       r9, 0x16(r3)
	  sth       r8, 0x18(r3)
	  sth       r6, 0x1A(r3)
	  sth       r10, 0x1C(r3)
	  sth       r9, 0x1E(r3)
	  sth       r8, 0x20(r3)
	  sth       r6, 0x22(r3)
	  sth       r10, 0x24(r3)
	  sth       r9, 0x26(r3)
	  sth       r8, 0x28(r3)
	  sth       r6, 0x2A(r3)
	  stb       r5, 0x2C(r3)
	  stb       r4, 0x30(r3)
	  mtctr     r0

	.loc_0xA8:
	  stw       r7, 0x8(r1)
	  lbz       r6, 0x8(r1)
	  lbz       r5, 0x9(r1)
	  stb       r6, 0x34(r31)
	  lbz       r4, 0xA(r1)
	  lbz       r0, 0xB(r1)
	  stb       r5, 0x35(r31)
	  stb       r4, 0x36(r31)
	  stw       r7, 0x8(r1)
	  stb       r6, 0xC(r1)
	  lbz       r6, 0x8(r1)
	  stb       r0, 0x37(r31)
	  stb       r5, 0xD(r1)
	  lbz       r5, 0x9(r1)
	  stb       r6, 0x38(r31)
	  stb       r4, 0xE(r1)
	  lbz       r4, 0xA(r1)
	  stb       r5, 0x39(r31)
	  stb       r0, 0xF(r1)
	  lbz       r0, 0xB(r1)
	  stb       r4, 0x3A(r31)
	  stb       r0, 0x3B(r31)
	  addi      r31, r31, 0x8
	  stb       r6, 0xC(r1)
	  stb       r5, 0xD(r1)
	  stb       r4, 0xE(r1)
	  stb       r0, 0xF(r1)
	  bdnz+     .loc_0xA8
	  li        r7, 0xFF
	  lis       r5, 0x8048
	  stb       r7, 0x44(r3)
	  subi      r4, r2, 0x7A34
	  subi      r6, r5, 0x7944
	  li        r0, 0
	  stb       r7, 0x45(r3)
	  lbz       r5, 0x1(r4)
	  lbz       r8, 0x2(r4)
	  lbz       r7, -0x7A34(r2)
	  rlwinm    r5,r5,4,20,27
	  rlwinm    r8,r8,2,0,29
	  lbz       r9, 0x3(r4)
	  add       r5, r5, r8
	  rlwinm    r7,r7,6,0,25
	  add       r5, r5, r9
	  add       r5, r7, r5
	  stb       r5, 0x46(r3)
	  lbz       r5, 0x1(r4)
	  lbz       r8, 0x2(r4)
	  lbz       r7, -0x7A34(r2)
	  rlwinm    r5,r5,4,20,27
	  rlwinm    r8,r8,2,0,29
	  lbz       r9, 0x3(r4)
	  add       r5, r5, r8
	  rlwinm    r7,r7,6,0,25
	  add       r5, r5, r9
	  add       r5, r7, r5
	  stb       r5, 0x47(r3)
	  lbz       r5, 0x1(r4)
	  lbz       r8, 0x2(r4)
	  lbz       r7, -0x7A34(r2)
	  rlwinm    r5,r5,4,20,27
	  rlwinm    r8,r8,2,0,29
	  lbz       r9, 0x3(r4)
	  add       r5, r5, r8
	  rlwinm    r7,r7,6,0,25
	  add       r5, r5, r9
	  add       r5, r7, r5
	  stb       r5, 0x48(r3)
	  lbz       r8, 0x2(r4)
	  lbz       r5, 0x1(r4)
	  lbz       r7, -0x7A34(r2)
	  rlwinm    r8,r8,2,0,29
	  rlwinm    r5,r5,4,0,27
	  lbz       r9, 0x3(r4)
	  add       r4, r5, r8
	  rlwinm    r5,r7,6,0,25
	  add       r4, r4, r9
	  add       r4, r5, r4
	  stb       r4, 0x49(r3)
	  lwz       r5, 0x4(r6)
	  lwz       r4, 0x8(r6)
	  stw       r5, 0x14(r1)
	  lwz       r5, 0x0(r6)
	  stw       r4, 0x18(r1)
	  lbz       r4, 0x17(r1)
	  stw       r5, 0x10(r1)
	  lbz       r5, 0x18(r1)
	  rlwinm    r4,r4,21,0,10
	  lbz       r6, 0x16(r1)
	  rlwinm    r5,r5,22,0,9
	  lbz       r7, 0x13(r1)
	  or        r4, r5, r4
	  rlwinm    r6,r6,20,0,11
	  lbz       r8, 0x15(r1)
	  or        r4, r6, r4
	  rlwinm    r5,r7,16,0,15
	  lbz       r9, 0x14(r1)
	  lbz       r10, 0x12(r1)
	  or        r4, r5, r4
	  rlwinm    r6,r8,11,0,20
	  lbz       r11, 0x11(r1)
	  or        r4, r6, r4
	  rlwinm    r7,r9,8,0,23
	  or        r4, r7, r4
	  rlwinm    r5,r10,4,0,27
	  rlwinm    r6,r11,2,0,29
	  lbz       r7, 0x10(r1)
	  or        r4, r5, r4
	  or        r4, r6, r4
	  or        r4, r7, r4
	  stw       r4, 0x4C(r3)
	  stw       r0, 0x54(r3)
	  stw       r0, 0x58(r3)
	  lwz       r31, 0x2C(r1)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004A65C
 * Size:	0000BC
 */
void J2DTevBlock1::prepareTexture(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,24,31
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x2C
	  li        r3, 0x1
	  b         .loc_0xA4

	.loc_0x2C:
	  lwz       r0, 0x50(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x88
	  li        r3, 0x40
	  bl        -0x267F4
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  lbz       r4, 0x3B(r3)
	  li        r0, 0
	  rlwinm    r4,r4,0,30,30
	  stb       r4, 0x3B(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x20(r3)

	.loc_0x60:
	  stw       r3, 0x50(r30)
	  lwz       r0, 0x50(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x78
	  li        r3, 0
	  b         .loc_0xA4

	.loc_0x78:
	  lbz       r0, 0x5C(r30)
	  rlwinm    r0,r0,0,24,24
	  ori       r0, r0, 0x1
	  stb       r0, 0x5C(r30)

	.loc_0x88:
	  rlwinm    r4,r31,0,24,31
	  li        r3, 0x1
	  subfic    r0, r4, 0x1
	  orc       r3, r3, r4
	  rlwinm    r0,r0,31,1,31
	  sub       r0, r3, r0
	  rlwinm    r3,r0,1,31,31

	.loc_0xA4:
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
 * Address:	8004A718
 * Size:	000134
 */
void J2DTevBlock1::insertTexture(unsigned long, const ResTIMG*, JUTPalette*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bne-      .loc_0x38
	  cmplwi    r29, 0
	  bne-      .loc_0x40

	.loc_0x38:
	  li        r3, 0
	  b         .loc_0x114

	.loc_0x40:
	  lwz       r3, 0x50(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x60
	  li        r3, 0
	  b         .loc_0x114

	.loc_0x60:
	  cmplwi    r3, 0
	  bne-      .loc_0xC8
	  li        r3, 0x40
	  bl        -0x268E0
	  mr.       r31, r3
	  beq-      .loc_0x98
	  li        r0, 0
	  mr        r4, r29
	  stw       r0, 0x28(r31)
	  li        r5, 0
	  bl        -0x1771C
	  lbz       r0, 0x3B(r31)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r31)

	.loc_0x98:
	  stw       r31, 0x50(r28)
	  lwz       r3, 0x50(r28)
	  cmplwi    r3, 0
	  bne-      .loc_0xB0
	  li        r3, 0
	  b         .loc_0x114

	.loc_0xB0:
	  cmplwi    r30, 0
	  beq-      .loc_0xEC
	  mr        r4, r29
	  mr        r5, r30
	  bl        -0x175A8
	  b         .loc_0xEC

	.loc_0xC8:
	  cmplwi    r30, 0
	  bne-      .loc_0xE0
	  mr        r4, r29
	  li        r5, 0
	  bl        -0x1776C
	  b         .loc_0xEC

	.loc_0xE0:
	  mr        r4, r29
	  mr        r5, r30
	  bl        -0x175D0

	.loc_0xEC:
	  lbz       r0, 0x5C(r28)
	  lis       r4, 0x1
	  li        r5, 0
	  li        r3, 0x1
	  rlwinm    r6,r0,0,24,24
	  subi      r0, r4, 0x1
	  ori       r4, r6, 0x1
	  stb       r4, 0x5C(r28)
	  stw       r5, 0x54(r28)
	  sth       r0, 0x4(r28)

	.loc_0x114:
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
 * Address:	8004A84C
 * Size:	0000A8
 */
void J2DTevBlock1::insertTexture(unsigned long, JUTTexture*)
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
	  lwz       r3, 0x50(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C
	  li        r3, 0
	  b         .loc_0x90

	.loc_0x3C:
	  cmplwi    r4, 0
	  bne-      .loc_0x4C
	  cmplwi    r31, 0
	  bne-      .loc_0x54

	.loc_0x4C:
	  li        r3, 0
	  b         .loc_0x90

	.loc_0x54:
	  lbz       r0, 0x5C(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x68
	  li        r4, 0x1
	  bl        -0x178A0

	.loc_0x68:
	  stw       r31, 0x50(r30)
	  lis       r4, 0x1
	  li        r5, 0
	  li        r3, 0x1
	  lbz       r6, 0x5C(r30)
	  subi      r0, r4, 0x1
	  rlwinm    r4,r6,0,24,24
	  stb       r4, 0x5C(r30)
	  stw       r5, 0x54(r30)
	  sth       r0, 0x4(r30)

	.loc_0x90:
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
 * Address:	8004A8F4
 * Size:	000198
 */
void J2DTevBlock1::setTexture(unsigned long, const ResTIMG*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  beq-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x17C

	.loc_0x30:
	  lwz       r3, 0x50(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0xB0
	  cmplwi    r29, 0
	  beq-      .loc_0xA0
	  li        r3, 0x40
	  bl        -0x26A98
	  mr.       r30, r3
	  beq-      .loc_0x74
	  li        r0, 0
	  mr        r4, r29
	  stw       r0, 0x28(r30)
	  li        r5, 0
	  bl        -0x178D4
	  lbz       r0, 0x3B(r30)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r30)

	.loc_0x74:
	  stw       r30, 0x50(r31)
	  lwz       r0, 0x50(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x8C
	  li        r3, 0
	  b         .loc_0x17C

	.loc_0x8C:
	  lbz       r0, 0x5C(r31)
	  rlwinm    r0,r0,0,24,24
	  ori       r0, r0, 0x1
	  stb       r0, 0x5C(r31)
	  b         .loc_0x15C

	.loc_0xA0:
	  lbz       r0, 0x5C(r31)
	  rlwinm    r0,r0,0,24,24
	  stb       r0, 0x5C(r31)
	  b         .loc_0x15C

	.loc_0xB0:
	  lbz       r0, 0x5C(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xF4
	  cmplwi    r29, 0
	  beq-      .loc_0xD4
	  mr        r4, r29
	  li        r5, 0
	  bl        -0x1793C
	  b         .loc_0x15C

	.loc_0xD4:
	  li        r4, 0x1
	  bl        -0x179BC
	  li        r0, 0
	  stw       r0, 0x50(r31)
	  lbz       r0, 0x5C(r31)
	  rlwinm    r0,r0,0,24,24
	  stb       r0, 0x5C(r31)
	  b         .loc_0x15C

	.loc_0xF4:
	  li        r0, 0
	  cmplwi    r29, 0
	  stw       r0, 0x50(r31)
	  beq-      .loc_0x15C
	  li        r3, 0x40
	  bl        -0x26B58
	  mr.       r30, r3
	  beq-      .loc_0x134
	  li        r0, 0
	  mr        r4, r29
	  stw       r0, 0x28(r30)
	  li        r5, 0
	  bl        -0x17994
	  lbz       r0, 0x3B(r30)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r30)

	.loc_0x134:
	  stw       r30, 0x50(r31)
	  lwz       r0, 0x50(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x14C
	  li        r3, 0
	  b         .loc_0x17C

	.loc_0x14C:
	  lbz       r0, 0x5C(r31)
	  rlwinm    r0,r0,0,24,24
	  ori       r0, r0, 0x1
	  stb       r0, 0x5C(r31)

	.loc_0x15C:
	  lwz       r3, 0x54(r31)
	  bl        -0x269A0
	  li        r0, 0
	  lis       r3, 0x1
	  stw       r0, 0x54(r31)
	  subi      r0, r3, 0x1
	  li        r3, 0x1
	  sth       r0, 0x4(r31)

	.loc_0x17C:
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
 * Address:	8004AA8C
 * Size:	00008C
 */
void J2DTevBlock1::setTexture(unsigned long, JUTTexture*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x74

	.loc_0x2C:
	  lbz       r0, 0x5C(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x44
	  lwz       r3, 0x50(r30)
	  li        r4, 0x1
	  bl        -0x17ABC

	.loc_0x44:
	  stw       r31, 0x50(r30)
	  lbz       r0, 0x5C(r30)
	  rlwinm    r0,r0,0,24,24
	  stb       r0, 0x5C(r30)
	  lwz       r3, 0x54(r30)
	  bl        -0x26A30
	  li        r0, 0
	  lis       r3, 0x1
	  stw       r0, 0x54(r30)
	  subi      r0, r3, 0x1
	  li        r3, 0x1
	  sth       r0, 0x4(r30)

	.loc_0x74:
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
 * Address:	8004AB18
 * Size:	00007C
 */
void J2DTevBlock1::removeTexture(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  blt-      .loc_0x24
	  li        r3, 0
	  b         .loc_0x68

	.loc_0x24:
	  lbz       r0, 0x5C(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x3C
	  lwz       r3, 0x50(r31)
	  li        r4, 0x1
	  bl        -0x17B40

	.loc_0x3C:
	  li        r0, 0
	  stw       r0, 0x50(r31)
	  lbz       r0, 0x5C(r31)
	  rlwinm    r0,r0,0,24,24
	  stb       r0, 0x5C(r31)
	  lwz       r3, 0x54(r31)
	  bl        -0x26AB8
	  lis       r4, 0x1
	  li        r3, 0x1
	  subi      r0, r4, 0x1
	  sth       r0, 0x4(r31)

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
 * Address:	8004AB94
 * Size:	0000BC
 */
void J2DTevBlock1::setFont(ResFONT*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bne-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0xA0

	.loc_0x2C:
	  li        r3, 0x70
	  bl        -0x26D20
	  mr.       r31, r3
	  beq-      .loc_0x4C
	  mr        r4, r30
	  li        r5, 0
	  bl        -0x19A0C
	  mr        r31, r3

	.loc_0x4C:
	  cmplwi    r31, 0
	  bne-      .loc_0x5C
	  li        r3, 0
	  b         .loc_0xA0

	.loc_0x5C:
	  lbz       r0, 0x5C(r29)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x88
	  lwz       r3, 0x58(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x88:
	  stw       r31, 0x58(r29)
	  li        r3, 0x1
	  lbz       r0, 0x5C(r29)
	  rlwinm    r0,r0,0,25,31
	  ori       r0, r0, 0x80
	  stb       r0, 0x5C(r29)

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
 * Address:	8004AC50
 * Size:	000080
 */
void J2DTevBlock1::setFont(JUTFont*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x28
	  li        r3, 0
	  b         .loc_0x68

	.loc_0x28:
	  lbz       r0, 0x5C(r30)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x54
	  lwz       r3, 0x58(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  stw       r31, 0x58(r30)
	  li        r3, 0x1
	  lbz       r0, 0x5C(r30)
	  rlwinm    r0,r0,0,25,31
	  stb       r0, 0x5C(r30)

	.loc_0x68:
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
 * Address:	8004ACD0
 * Size:	0000C8
 */
void J2DTevBlock1::setPalette(unsigned long, const ResTLUT*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  beq-      .loc_0x30
	  li        r3, 0
	  b         .loc_0xAC

	.loc_0x30:
	  cmplwi    r30, 0
	  beq-      .loc_0x98
	  lwz       r3, 0x54(r29)
	  cmplwi    r3, 0
	  bne-      .loc_0x78
	  li        r3, 0x18
	  bl        -0x26E74
	  mr.       r31, r3
	  beq-      .loc_0x60
	  mr        r5, r30
	  li        r4, 0
	  bl        -0x1BE68

	.loc_0x60:
	  stw       r31, 0x54(r29)
	  lwz       r0, 0x54(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  li        r3, 0
	  b         .loc_0xAC

	.loc_0x78:
	  li        r4, 0
	  bl        -0x1BE88

	.loc_0x80:
	  lwz       r3, 0x50(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  lwz       r4, 0x54(r29)
	  bl        -0x179C4
	  b         .loc_0xA8

	.loc_0x98:
	  lwz       r3, 0x54(r29)
	  bl        -0x26CB8
	  li        r0, 0
	  stw       r0, 0x54(r29)

	.loc_0xA8:
	  li        r3, 0x1

	.loc_0xAC:
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
 * Address:	8004AD98
 * Size:	000010
 */
void J2DTevBlock1::shiftDeleteFlag(unsigned char, bool)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x5C(r3)
	  rlwinm    r0,r0,0,24,24
	  stb       r0, 0x5C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004ADA8
 * Size:	00024C
 */
void J2DTevBlock1::setGX()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  li        r4, 0
	  li        r5, 0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lbz       r4, 0x8(r31)
	  li        r3, 0
	  lbz       r5, 0x9(r31)
	  lbz       r6, 0xA(r31)
	  bl        0x9DC2C
	  mr        r29, r31
	  addi      r30, r1, 0xC
	  li        r28, 0

	.loc_0x58:
	  lwz       r4, 0xC(r29)
	  cmpwi     r28, 0x3
	  lwz       r0, 0x10(r29)
	  li        r3, 0
	  stw       r4, 0xC(r1)
	  stw       r0, 0x10(r1)
	  beq-      .loc_0x78
	  addi      r3, r28, 0x1

	.loc_0x78:
	  mr        r4, r30
	  bl        0x9D8B8
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x8
	  cmpwi     r28, 0x4
	  blt+      .loc_0x58
	  li        r3, 0x1
	  bl        0x9DD7C
	  lbz       r0, 0x2F(r31)
	  li        r3, 0
	  lbz       r5, 0x2E(r31)
	  rlwinm    r6,r0,28,28,31
	  rlwinm    r7,r0,0,28,31
	  rlwinm    r4,r5,28,28,31
	  rlwinm    r5,r5,0,28,31
	  bl        0x9D6AC
	  lbz       r5, 0x32(r31)
	  li        r3, 0
	  lbz       r6, 0x33(r31)
	  rlwinm    r0,r5,0,24,26
	  srawi     r4, r0, 0x5
	  rlwinm    r7,r6,28,29,31
	  rlwinm    r0,r6,25,31,31
	  rlwimi    r0,r5,1,29,30
	  rlwinm    r4,r4,0,24,31
	  rlwinm    r5,r5,30,29,31
	  rlwinm    r6,r0,0,24,31
	  bl        0x9D6C0
	  lbz       r7, 0x2D(r31)
	  li        r3, 0
	  rlwinm    r0,r7,0,26,27
	  rlwinm    r5,r7,0,30,31
	  srawi     r6, r0, 0x4
	  rlwinm    r9,r7,30,31,31
	  rlwinm    r0,r7,29,29,30
	  cmplwi    r5, 0x3
	  add       r4, r9, r0
	  rlwinm    r8,r7,26,30,31
	  addi      r0, r4, 0x8
	  rlwinm    r6,r6,0,24,31
	  rlwinm    r7,r7,29,31,31
	  rlwinm    r0,r0,0,24,31
	  beq-      .loc_0x128
	  mr        r0, r9

	.loc_0x128:
	  rlwinm    r4,r0,0,24,31
	  bl        0x9D6BC
	  lbz       r7, 0x31(r31)
	  li        r3, 0
	  rlwinm    r0,r7,0,26,27
	  rlwinm    r5,r7,0,30,31
	  srawi     r6, r0, 0x4
	  rlwinm    r9,r7,30,31,31
	  rlwinm    r0,r7,29,29,30
	  cmplwi    r5, 0x3
	  add       r4, r9, r0
	  rlwinm    r8,r7,26,30,31
	  addi      r0, r4, 0x8
	  rlwinm    r6,r6,0,24,31
	  rlwinm    r7,r7,29,31,31
	  rlwinm    r0,r0,0,24,31
	  beq-      .loc_0x170
	  mr        r0, r9

	.loc_0x170:
	  rlwinm    r4,r0,0,24,31
	  bl        0x9D6DC
	  lbz       r0, 0x44(r31)
	  li        r4, 0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x18C
	  mr        r4, r0

	.loc_0x18C:
	  li        r3, 0
	  bl        0x9D894
	  lbz       r0, 0x45(r31)
	  li        r4, 0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x1A8
	  mr        r4, r0

	.loc_0x1A8:
	  li        r3, 0
	  bl        0x9D8D4
	  li        r28, 0
	  mr        r29, r31

	.loc_0x1B8:
	  lwz       r0, 0x34(r29)
	  mr        r3, r28
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        0x9D7E8
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r28, 0x4
	  blt+      .loc_0x1B8
	  lbz       r0, 0x33(r31)
	  li        r3, 0
	  rlwinm    r4,r0,0,30,31
	  rlwinm    r5,r0,30,30,31
	  bl        0x9D8F0
	  li        r28, 0

	.loc_0x1F4:
	  addi      r0, r28, 0x46
	  mr        r3, r28
	  lbzx      r0, r31, r0
	  rlwinm    r4,r0,26,30,31
	  rlwinm    r5,r0,28,30,31
	  rlwinm    r6,r0,30,30,31
	  rlwinm    r7,r0,0,30,31
	  bl        0x9D914
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x4
	  blt+      .loc_0x1F4
	  addi      r3, r31, 0x4C
	  li        r4, 0
	  bl        0xE5F4
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004AFF4
 * Size:	000048
 */
void J2DTevBlock1::loadTexture(_GXTexMapID, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x14(r1)
	  bne-      .loc_0x38
	  rlwinm    r0,r5,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x50(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  bl        -0x179F8

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004B03C
 * Size:	000110
 */
void J2DTevBlock2::J2DTevBlock2()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x1094
	  lis       r4, 0x8005
	  li        r6, 0x4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x804A
	  subi      r4, r4, 0x5D3C
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0xF1C
	  addi      r3, r31, 0xA
	  li        r7, 0x2
	  stw       r0, 0x0(r31)
	  bl        0x767BC
	  lis       r4, 0x8005
	  addi      r3, r31, 0x12
	  subi      r4, r4, 0x5D40
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x4
	  bl        0x767A0
	  lis       r4, 0x8005
	  addi      r3, r31, 0x33
	  subi      r4, r4, 0x6A28
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x2
	  bl        0x76784
	  lis       r4, 0x8004
	  addi      r3, r31, 0x44
	  subi      r4, r4, 0x646C
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x76768
	  lis       r4, 0x8005
	  addi      r3, r31, 0x58
	  subi      r4, r4, 0x5D4C
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0x4
	  bl        0x7674C
	  lis       r4, 0x8005
	  addi      r3, r31, 0x5C
	  subi      r4, r4, 0x5DE0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x2
	  bl        0x76730
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x64(r31)
	  stw       r0, 0x68(r31)
	  stb       r0, 0x78(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8004B14C
 * Size:	0000D8
 */
void J2DTevBlock2::~J2DTevBlock2()
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
	  beq-      .loc_0xBC
	  lis       r3, 0x804A
	  addi      r0, r3, 0xF1C
	  stw       r0, 0x0(r30)
	  lbz       r0, 0x78(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x44
	  lwz       r3, 0x64(r30)
	  li        r4, 0x1
	  bl        -0x1817C

	.loc_0x44:
	  lbz       r0, 0x78(r30)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x5C
	  lwz       r3, 0x68(r30)
	  li        r4, 0x1
	  bl        -0x18194

	.loc_0x5C:
	  lwz       r3, 0x6C(r30)
	  bl        -0x270F8
	  lwz       r3, 0x70(r30)
	  bl        -0x27100
	  lbz       r0, 0x78(r30)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x98
	  lwz       r3, 0x74(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x98
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x98:
	  cmplwi    r30, 0
	  beq-      .loc_0xAC
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1094
	  stw       r0, 0x0(r30)

	.loc_0xAC:
	  extsh.    r0, r31
	  ble-      .loc_0xBC
	  mr        r3, r30
	  bl        -0x27150

	.loc_0xBC:
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
 * Address:	8004B224
 * Size:	000350
 */
void J2DTevBlock2::initialize()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  subi      r7, r2, 0x7A48
	  lis       r4, 0x1
	  lha       r12, 0x2(r7)
	  stw       r31, 0x3C(r1)
	  subi      r0, r4, 0x1
	  lha       r31, -0x7A48(r2)
	  li        r9, 0x1
	  stw       r30, 0x38(r1)
	  li        r8, 0xC0
	  lha       r11, 0x4(r7)
	  li        r6, 0xC1
	  stw       r29, 0x34(r1)
	  li        r5, 0xC2
	  lha       r10, 0x6(r7)
	  li        r4, 0xC3
	  stw       r28, 0x30(r1)
	  subi      r28, r2, 0x7A50
	  mr        r29, r3
	  lwz       r7, -0x7A3C(r2)
	  sth       r0, 0x4(r3)
	  sth       r0, 0x6(r3)
	  sth       r0, 0x8(r3)
	  li        r0, 0x2
	  lbz       r30, -0x7A50(r2)
	  stb       r30, 0xA(r3)
	  lbz       r30, 0x1(r28)
	  stb       r30, 0xB(r3)
	  lbz       r30, 0x2(r28)
	  stb       r30, 0xC(r3)
	  lbz       r30, -0x7A50(r2)
	  stb       r30, 0xE(r3)
	  lbz       r30, 0x1(r28)
	  stb       r30, 0xF(r3)
	  lbz       r30, 0x2(r28)
	  stb       r30, 0x10(r3)
	  sth       r31, 0x12(r3)
	  sth       r12, 0x14(r3)
	  sth       r11, 0x16(r3)
	  sth       r10, 0x18(r3)
	  sth       r31, 0x1A(r3)
	  sth       r12, 0x1C(r3)
	  sth       r11, 0x1E(r3)
	  sth       r10, 0x20(r3)
	  sth       r31, 0x22(r3)
	  sth       r12, 0x24(r3)
	  sth       r11, 0x26(r3)
	  sth       r10, 0x28(r3)
	  sth       r31, 0x2A(r3)
	  sth       r12, 0x2C(r3)
	  sth       r11, 0x2E(r3)
	  sth       r10, 0x30(r3)
	  stb       r9, 0x32(r3)
	  stb       r8, 0x33(r3)
	  stb       r6, 0x37(r3)
	  stb       r5, 0x3B(r3)
	  stb       r4, 0x3F(r3)
	  mtctr     r0

	.loc_0xE8:
	  stw       r7, 0x8(r1)
	  lbz       r6, 0x8(r1)
	  lbz       r5, 0x9(r1)
	  stb       r6, 0x44(r29)
	  lbz       r4, 0xA(r1)
	  lbz       r0, 0xB(r1)
	  stb       r5, 0x45(r29)
	  stb       r4, 0x46(r29)
	  stw       r7, 0x8(r1)
	  stb       r6, 0xC(r1)
	  lbz       r6, 0x8(r1)
	  stb       r0, 0x47(r29)
	  stb       r5, 0xD(r1)
	  lbz       r5, 0x9(r1)
	  stb       r6, 0x48(r29)
	  stb       r4, 0xE(r1)
	  lbz       r4, 0xA(r1)
	  stb       r5, 0x49(r29)
	  stb       r0, 0xF(r1)
	  lbz       r0, 0xB(r1)
	  stb       r4, 0x4A(r29)
	  stb       r0, 0x4B(r29)
	  addi      r29, r29, 0x8
	  stb       r6, 0xC(r1)
	  stb       r5, 0xD(r1)
	  stb       r4, 0xE(r1)
	  stb       r0, 0xF(r1)
	  bdnz+     .loc_0xE8
	  li        r0, 0xFF
	  lis       r4, 0x8048
	  stb       r0, 0x54(r3)
	  subi      r5, r2, 0x7A34
	  subi      r4, r4, 0x7944
	  stb       r0, 0x55(r3)
	  stb       r0, 0x56(r3)
	  stb       r0, 0x57(r3)
	  lbz       r0, 0x1(r5)
	  lbz       r7, 0x2(r5)
	  lbz       r6, -0x7A34(r2)
	  rlwinm    r0,r0,4,20,27
	  rlwinm    r7,r7,2,0,29
	  lbz       r8, 0x3(r5)
	  add       r0, r0, r7
	  rlwinm    r6,r6,6,0,25
	  add       r0, r0, r8
	  add       r0, r6, r0
	  stb       r0, 0x58(r3)
	  lbz       r0, 0x1(r5)
	  lbz       r7, 0x2(r5)
	  lbz       r6, -0x7A34(r2)
	  rlwinm    r0,r0,4,20,27
	  rlwinm    r7,r7,2,0,29
	  lbz       r8, 0x3(r5)
	  add       r0, r0, r7
	  rlwinm    r6,r6,6,0,25
	  add       r0, r0, r8
	  add       r0, r6, r0
	  stb       r0, 0x59(r3)
	  lbz       r0, 0x1(r5)
	  lbz       r7, 0x2(r5)
	  lbz       r6, -0x7A34(r2)
	  rlwinm    r0,r0,4,20,27
	  rlwinm    r7,r7,2,0,29
	  lbz       r8, 0x3(r5)
	  add       r0, r0, r7
	  rlwinm    r6,r6,6,0,25
	  add       r0, r0, r8
	  add       r0, r6, r0
	  stb       r0, 0x5A(r3)
	  lbz       r7, 0x2(r5)
	  lbz       r0, 0x1(r5)
	  lbz       r6, -0x7A34(r2)
	  rlwinm    r7,r7,2,0,29
	  rlwinm    r0,r0,4,0,27
	  lbz       r8, 0x3(r5)
	  add       r0, r0, r7
	  rlwinm    r5,r6,6,0,25
	  add       r0, r0, r8
	  add       r0, r5, r0
	  stb       r0, 0x5B(r3)
	  lwz       r5, 0x4(r4)
	  lwz       r0, 0x8(r4)
	  stw       r5, 0x20(r1)
	  lwz       r5, 0x0(r4)
	  stw       r0, 0x24(r1)
	  lbz       r0, 0x23(r1)
	  stw       r5, 0x1C(r1)
	  lbz       r5, 0x24(r1)
	  rlwinm    r0,r0,21,0,10
	  lbz       r6, 0x22(r1)
	  rlwinm    r5,r5,22,0,9
	  lbz       r7, 0x1F(r1)
	  or        r0, r5, r0
	  rlwinm    r6,r6,20,0,11
	  lbz       r8, 0x21(r1)
	  or        r0, r6, r0
	  rlwinm    r5,r7,16,0,15
	  lbz       r9, 0x20(r1)
	  lbz       r10, 0x1E(r1)
	  or        r0, r5, r0
	  rlwinm    r6,r8,11,0,20
	  lbz       r11, 0x1D(r1)
	  or        r0, r6, r0
	  rlwinm    r7,r9,8,0,23
	  or        r0, r7, r0
	  rlwinm    r5,r10,4,0,27
	  rlwinm    r6,r11,2,0,29
	  lbz       r7, 0x1C(r1)
	  or        r0, r5, r0
	  or        r0, r6, r0
	  or        r0, r7, r0
	  stw       r0, 0x5C(r3)
	  lwz       r6, 0x0(r4)
	  lwz       r5, 0x4(r4)
	  lwz       r0, 0x8(r4)
	  stw       r6, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stw       r0, 0x18(r1)
	  lbz       r5, 0x18(r1)
	  li        r0, 0
	  lbz       r4, 0x17(r1)
	  lbz       r6, 0x16(r1)
	  rlwinm    r5,r5,22,0,9
	  rlwinm    r4,r4,21,0,10
	  lbz       r7, 0x13(r1)
	  lbz       r8, 0x15(r1)
	  rlwinm    r6,r6,20,0,11
	  or        r4, r5, r4
	  lbz       r9, 0x14(r1)
	  lbz       r10, 0x12(r1)
	  rlwinm    r5,r7,16,0,15
	  or        r4, r6, r4
	  lbz       r11, 0x11(r1)
	  rlwinm    r6,r8,11,0,20
	  rlwinm    r7,r9,8,0,23
	  or        r4, r5, r4
	  rlwinm    r5,r10,4,0,27
	  or        r4, r6, r4
	  rlwinm    r6,r11,2,0,29
	  or        r4, r7, r4
	  lbz       r7, 0x10(r1)
	  or        r4, r5, r4
	  or        r4, r6, r4
	  or        r4, r7, r4
	  stw       r4, 0x60(r3)
	  stw       r0, 0x6C(r3)
	  stw       r0, 0x70(r3)
	  stw       r0, 0x74(r3)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004B574
 * Size:	0000E0
 */
void J2DTevBlock2::prepareTexture(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  rlwinm    r31,r4,0,24,31
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0xB0

	.loc_0x2C:
	  rlwinm    r0,r29,0,24,31
	  cmplwi    r0, 0x2
	  blt-      .loc_0x40
	  li        r3, 0
	  b         .loc_0xC0

	.loc_0x40:
	  rlwinm    r3,r29,2,22,29
	  addi      r30, r3, 0x64
	  lwzx      r0, r28, r30
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  li        r3, 0x40
	  bl        -0x27728
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  lbz       r4, 0x3B(r3)
	  li        r0, 0
	  rlwinm    r4,r4,0,30,30
	  stb       r4, 0x3B(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x20(r3)

	.loc_0x7C:
	  stwx      r3, r28, r30
	  lwzx      r0, r28, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x94
	  li        r3, 0
	  b         .loc_0xC0

	.loc_0x94:
	  rlwinm    r0,r29,0,24,31
	  li        r3, 0x1
	  lbz       r4, 0x78(r28)
	  slw       r0, r3, r0
	  or        r0, r4, r0
	  stb       r0, 0x78(r28)

	.loc_0xAC:
	  addi      r29, r29, 0x1

	.loc_0xB0:
	  rlwinm    r0,r29,0,24,31
	  cmplw     r0, r31
	  blt+      .loc_0x2C
	  li        r3, 0x1

	.loc_0xC0:
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
 * Address:	8004B654
 * Size:	0002CC
 */
void J2DTevBlock2::insertTexture(unsigned long, const ResTIMG*, JUTPalette*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r28, r4
	  cmplwi    r28, 0x2
	  mr        r27, r3
	  mr        r29, r5
	  mr        r30, r6
	  bge-      .loc_0x30
	  cmplwi    r29, 0
	  bne-      .loc_0x38

	.loc_0x30:
	  li        r3, 0
	  b         .loc_0x2B8

	.loc_0x38:
	  li        r31, 0
	  b         .loc_0x64

	.loc_0x40:
	  rlwinm    r3,r31,2,22,29
	  addi      r0, r3, 0x64
	  lwzx      r3, r27, r0
	  cmplwi    r3, 0
	  beq-      .loc_0x70
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  addi      r31, r31, 0x1

	.loc_0x64:
	  rlwinm    r0,r31,0,24,31
	  cmplwi    r0, 0x2
	  blt+      .loc_0x40

	.loc_0x70:
	  rlwinm    r0,r31,0,24,31
	  cmplw     r0, r28
	  bge-      .loc_0x84
	  li        r3, 0
	  b         .loc_0x2B8

	.loc_0x84:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x94
	  li        r3, 0
	  b         .loc_0x2B8

	.loc_0x94:
	  lbz       r0, 0x8(r29)
	  li        r25, 0
	  cmplwi    r0, 0
	  beq-      .loc_0xE8
	  cmplwi    r30, 0
	  bne-      .loc_0xE8
	  lwz       r4, 0x64(r27)
	  cmplwi    r4, 0
	  beq-      .loc_0xE8
	  lwz       r3, 0x20(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0xE8
	  lbz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xE8
	  lbz       r0, 0x3A(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0xE4
	  cmpwi     r0, 0x10
	  bne-      .loc_0xE8

	.loc_0xE4:
	  li        r25, 0x1

	.loc_0xE8:
	  rlwinm    r0,r31,2,22,29
	  add       r3, r27, r0
	  lwz       r26, 0x64(r3)
	  cmplwi    r26, 0
	  bne-      .loc_0x1B4
	  li        r3, 0x40
	  bl        -0x278B0
	  mr.       r31, r3
	  beq-      .loc_0x12C
	  li        r0, 0
	  mr        r4, r29
	  stw       r0, 0x28(r31)
	  mr        r5, r25
	  bl        -0x186EC
	  lbz       r0, 0x3B(r31)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r31)

	.loc_0x12C:
	  cmplwi    r31, 0
	  bne-      .loc_0x13C
	  li        r3, 0
	  b         .loc_0x2B8

	.loc_0x13C:
	  cmplwi    r30, 0
	  beq-      .loc_0x154
	  mr        r3, r31
	  mr        r4, r29
	  mr        r5, r30
	  bl        -0x18574

	.loc_0x154:
	  cmplwi    r28, 0
	  bne-      .loc_0x174
	  lwz       r0, 0x64(r27)
	  stw       r0, 0x68(r27)
	  lwz       r0, 0x6C(r27)
	  stw       r0, 0x70(r27)
	  lhz       r0, 0x4(r27)
	  sth       r0, 0x6(r27)

	.loc_0x174:
	  rlwinm    r0,r28,2,0,29
	  mr        r3, r27
	  add       r5, r27, r0
	  rlwinm    r4,r28,0,24,31
	  stw       r31, 0x64(r5)
	  li        r5, 0x1
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lbz       r3, 0x78(r27)
	  slw       r0, r0, r28
	  or        r0, r3, r0
	  stb       r0, 0x78(r27)
	  b         .loc_0x290

	.loc_0x1B4:
	  cmplwi    r30, 0
	  bne-      .loc_0x1D0
	  mr        r3, r26
	  mr        r4, r29
	  mr        r5, r25
	  bl        -0x18798
	  b         .loc_0x1E0

	.loc_0x1D0:
	  mr        r3, r26
	  mr        r4, r29
	  mr        r5, r30
	  bl        -0x18600

	.loc_0x1E0:
	  lbz       r0, 0x78(r27)
	  cmplwi    r28, 0
	  rlwinm    r3,r0,0,31,31
	  rlwinm    r0,r0,31,31,31
	  stb       r3, 0x8(r1)
	  stb       r0, 0x9(r1)
	  bne-      .loc_0x224
	  rlwinm    r0,r31,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x224
	  lwz       r0, 0x64(r27)
	  stb       r3, 0x9(r1)
	  stw       r0, 0x68(r27)
	  lwz       r0, 0x6C(r27)
	  stw       r0, 0x70(r27)
	  lhz       r0, 0x4(r27)
	  sth       r0, 0x6(r27)

	.loc_0x224:
	  rlwinm    r0,r28,2,0,29
	  addi      r5, r1, 0x8
	  add       r3, r27, r0
	  li        r7, 0
	  stw       r26, 0x64(r3)
	  li        r3, 0x1
	  lbz       r0, 0x78(r27)
	  rlwinm    r0,r0,0,24,24
	  stb       r0, 0x78(r27)
	  b         .loc_0x270

	.loc_0x24C:
	  rlwinm    r6,r7,0,24,31
	  lbzx      r0, r5, r6
	  cmplwi    r0, 0
	  beq-      .loc_0x26C
	  lbz       r4, 0x78(r27)
	  slw       r0, r3, r6
	  or        r0, r4, r0
	  stb       r0, 0x78(r27)

	.loc_0x26C:
	  addi      r7, r7, 0x1

	.loc_0x270:
	  rlwinm    r0,r7,0,24,31
	  cmplwi    r0, 0x2
	  blt+      .loc_0x24C
	  li        r0, 0x1
	  lbz       r3, 0x78(r27)
	  slw       r0, r0, r28
	  or        r0, r3, r0
	  stb       r0, 0x78(r27)

	.loc_0x290:
	  rlwinm    r3,r28,2,0,29
	  rlwinm    r0,r28,1,0,30
	  add       r4, r27, r3
	  li        r5, 0
	  lis       r3, 0x1
	  stw       r5, 0x6C(r4)
	  subi      r4, r3, 0x1
	  add       r3, r27, r0
	  sth       r4, 0x4(r3)
	  li        r3, 0x1

	.loc_0x2B8:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004B920
 * Size:	000168
 */
void J2DTevBlock2::insertTexture(unsigned long, JUTTexture*)
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
	  cmplwi    r30, 0x2
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bge-      .loc_0x34
	  cmplwi    r31, 0
	  bne-      .loc_0x3C

	.loc_0x34:
	  li        r3, 0
	  b         .loc_0x14C

	.loc_0x3C:
	  li        r4, 0
	  b         .loc_0x68

	.loc_0x44:
	  rlwinm    r3,r4,2,22,29
	  addi      r0, r3, 0x64
	  lwzx      r3, r29, r0
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  addi      r4, r4, 0x1

	.loc_0x68:
	  rlwinm    r0,r4,0,24,31
	  cmplwi    r0, 0x2
	  blt+      .loc_0x44

	.loc_0x74:
	  rlwinm    r0,r4,0,24,31
	  cmplw     r0, r30
	  bge-      .loc_0x88
	  li        r3, 0
	  b         .loc_0x14C

	.loc_0x88:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x98
	  li        r3, 0
	  b         .loc_0x14C

	.loc_0x98:
	  lwz       r3, 0x68(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  lbz       r0, 0x78(r29)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0xC4
	  li        r4, 0x1
	  bl        -0x189D0

	.loc_0xC4:
	  lbz       r0, 0x78(r29)
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x78(r29)

	.loc_0xD0:
	  cmplwi    r30, 0
	  bne-      .loc_0xF0
	  lwz       r0, 0x64(r29)
	  stw       r0, 0x68(r29)
	  lwz       r0, 0x6C(r29)
	  stw       r0, 0x70(r29)
	  lhz       r0, 0x4(r29)
	  sth       r0, 0x6(r29)

	.loc_0xF0:
	  rlwinm    r3,r30,2,0,29
	  rlwinm    r0,r30,1,0,30
	  add       r5, r29, r3
	  lis       r3, 0x1
	  stw       r31, 0x64(r5)
	  li        r4, 0
	  subi      r7, r3, 0x1
	  add       r6, r29, r0
	  stw       r4, 0x6C(r5)
	  mr        r3, r29
	  rlwinm    r4,r30,0,24,31
	  li        r5, 0x1
	  sth       r7, 0x4(r6)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lbz       r4, 0x78(r29)
	  slw       r0, r0, r30
	  li        r3, 0x1
	  andc      r0, r4, r0
	  stb       r0, 0x78(r29)

	.loc_0x14C:
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
 * Address:	8004BA88
 * Size:	00021C
 */
void J2DTevBlock2::setTexture(unsigned long, const ResTIMG*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r4
	  cmplwi    r26, 0x2
	  mr        r25, r3
	  mr        r27, r5
	  blt-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x208

	.loc_0x2C:
	  cmplwi    r27, 0
	  li        r28, 0
	  beq-      .loc_0x98
	  lbz       r0, 0x8(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x98
	  cntlzw    r0, r26
	  rlwinm    r0,r0,29,22,29
	  add       r3, r25, r0
	  lwz       r4, 0x64(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x98
	  lwz       r3, 0x20(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x98
	  lbz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x98
	  lbz       r3, 0x3A(r4)
	  li        r0, 0
	  cmpwi     r3, 0x10
	  blt-      .loc_0x88
	  li        r0, 0x10

	.loc_0x88:
	  sub       r0, r3, r0
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x98
	  li        r28, 0x1

	.loc_0x98:
	  rlwinm    r29,r26,2,0,29
	  add       r31, r25, r29
	  lwz       r3, 0x64(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0x12C
	  cmplwi    r27, 0
	  beq-      .loc_0x114
	  li        r3, 0x40
	  bl        -0x27C9C
	  mr.       r30, r3
	  beq-      .loc_0xE4
	  li        r0, 0
	  mr        r4, r27
	  stw       r0, 0x28(r30)
	  mr        r5, r28
	  bl        -0x18AD8
	  lbz       r0, 0x3B(r30)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r30)

	.loc_0xE4:
	  stw       r30, 0x64(r31)
	  lwz       r0, 0x64(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xFC
	  li        r3, 0
	  b         .loc_0x208

	.loc_0xFC:
	  li        r0, 0x1
	  lbz       r3, 0x78(r25)
	  slw       r0, r0, r26
	  or        r0, r3, r0
	  stb       r0, 0x78(r25)
	  b         .loc_0x1DC

	.loc_0x114:
	  li        r0, 0x1
	  lbz       r3, 0x78(r25)
	  slw       r0, r0, r26
	  andc      r0, r3, r0
	  stb       r0, 0x78(r25)
	  b         .loc_0x1DC

	.loc_0x12C:
	  li        r0, 0x1
	  lbz       r4, 0x78(r25)
	  slw       r30, r0, r26
	  and.      r0, r4, r30
	  beq-      .loc_0x178
	  cmplwi    r27, 0
	  beq-      .loc_0x158
	  mr        r4, r27
	  mr        r5, r28
	  bl        -0x18B54
	  b         .loc_0x1DC

	.loc_0x158:
	  li        r4, 0x1
	  bl        -0x18BD4
	  li        r0, 0
	  stw       r0, 0x64(r31)
	  lbz       r0, 0x78(r25)
	  andc      r0, r0, r30
	  stb       r0, 0x78(r25)
	  b         .loc_0x1DC

	.loc_0x178:
	  li        r0, 0
	  cmplwi    r27, 0
	  stw       r0, 0x64(r31)
	  beq-      .loc_0x1DC
	  li        r3, 0x40
	  bl        -0x27D70
	  mr.       r28, r3
	  beq-      .loc_0x1B8
	  li        r0, 0
	  mr        r4, r27
	  stw       r0, 0x28(r28)
	  li        r5, 0
	  bl        -0x18BAC
	  lbz       r0, 0x3B(r28)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r28)

	.loc_0x1B8:
	  stw       r28, 0x64(r31)
	  lwz       r0, 0x64(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1D0
	  li        r3, 0
	  b         .loc_0x208

	.loc_0x1D0:
	  lbz       r0, 0x78(r25)
	  or        r0, r0, r30
	  stb       r0, 0x78(r25)

	.loc_0x1DC:
	  add       r27, r25, r29
	  lwz       r3, 0x6C(r27)
	  bl        -0x27BB8
	  li        r4, 0
	  rlwinm    r0,r26,1,0,30
	  lis       r3, 0x1
	  stw       r4, 0x6C(r27)
	  subi      r4, r3, 0x1
	  add       r3, r25, r0
	  sth       r4, 0x4(r3)
	  li        r3, 0x1

	.loc_0x208:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004BCA4
 * Size:	0000A8
 */
void J2DTevBlock2::setTexture(unsigned long, JUTTexture*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r4
	  cmplwi    r28, 0x2
	  mr        r27, r3
	  mr        r29, r5
	  blt-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x94

	.loc_0x2C:
	  li        r0, 0x1
	  lbz       r3, 0x78(r27)
	  slw       r30, r0, r28
	  and.      r0, r3, r30
	  beq-      .loc_0x54
	  rlwinm    r0,r28,2,0,29
	  li        r4, 0x1
	  add       r3, r27, r0
	  lwz       r3, 0x64(r3)
	  bl        -0x18CE4

	.loc_0x54:
	  rlwinm    r0,r28,2,0,29
	  add       r31, r27, r0
	  stw       r29, 0x64(r31)
	  lbz       r0, 0x78(r27)
	  andc      r0, r0, r30
	  stb       r0, 0x78(r27)
	  lwz       r3, 0x6C(r31)
	  bl        -0x27C60
	  li        r4, 0
	  rlwinm    r0,r28,1,0,30
	  lis       r3, 0x1
	  stw       r4, 0x6C(r31)
	  subi      r4, r3, 0x1
	  add       r3, r27, r0
	  sth       r4, 0x4(r3)
	  li        r3, 0x1

	.loc_0x94:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004BD4C
 * Size:	0000D4
 */
void J2DTevBlock2::removeTexture(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  cmplwi    r31, 0x2
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  blt-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0xBC

	.loc_0x2C:
	  li        r0, 0x1
	  lbz       r3, 0x78(r30)
	  slw       r0, r0, r31
	  and.      r0, r3, r0
	  beq-      .loc_0x54
	  rlwinm    r0,r31,2,0,29
	  li        r4, 0x1
	  add       r3, r30, r0
	  lwz       r3, 0x64(r3)
	  bl        -0x18D8C

	.loc_0x54:
	  rlwinm    r0,r31,2,0,29
	  add       r3, r30, r0
	  lwz       r3, 0x6C(r3)
	  bl        -0x27CF8
	  cmplwi    r31, 0
	  bne-      .loc_0x84
	  lwz       r0, 0x68(r30)
	  stw       r0, 0x64(r30)
	  lwz       r0, 0x70(r30)
	  stw       r0, 0x6C(r30)
	  lhz       r0, 0x6(r30)
	  sth       r0, 0x4(r30)

	.loc_0x84:
	  li        r5, 0
	  lis       r3, 0x1
	  stw       r5, 0x68(r30)
	  subi      r0, r3, 0x1
	  mr        r3, r30
	  rlwinm    r4,r31,0,24,31
	  stw       r5, 0x70(r30)
	  li        r5, 0
	  sth       r0, 0x6(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1

	.loc_0xBC:
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
 * Address:	8004BE20
 * Size:	0000BC
 */
void J2DTevBlock2::setFont(ResFONT*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bne-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0xA0

	.loc_0x2C:
	  li        r3, 0x70
	  bl        -0x27FAC
	  mr.       r31, r3
	  beq-      .loc_0x4C
	  mr        r4, r30
	  li        r5, 0
	  bl        -0x1AC98
	  mr        r31, r3

	.loc_0x4C:
	  cmplwi    r31, 0
	  bne-      .loc_0x5C
	  li        r3, 0
	  b         .loc_0xA0

	.loc_0x5C:
	  lbz       r0, 0x78(r29)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x88
	  lwz       r3, 0x74(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x88:
	  stw       r31, 0x74(r29)
	  li        r3, 0x1
	  lbz       r0, 0x78(r29)
	  rlwinm    r0,r0,0,25,31
	  ori       r0, r0, 0x80
	  stb       r0, 0x78(r29)

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
 * Address:	8004BEDC
 * Size:	000080
 */
void J2DTevBlock2::setFont(JUTFont*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x28
	  li        r3, 0
	  b         .loc_0x68

	.loc_0x28:
	  lbz       r0, 0x78(r30)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x54
	  lwz       r3, 0x74(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  stw       r31, 0x74(r30)
	  li        r3, 0x1
	  lbz       r0, 0x78(r30)
	  rlwinm    r0,r0,0,25,31
	  stb       r0, 0x78(r30)

	.loc_0x68:
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
 * Address:	8004BF5C
 * Size:	0000D0
 */
void J2DTevBlock2::setPalette(unsigned long, const ResTLUT*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r4
	  cmplwi    r27, 0x2
	  mr        r26, r3
	  mr        r28, r5
	  blt-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0xBC

	.loc_0x2C:
	  cmplwi    r28, 0
	  beq-      .loc_0xA0
	  rlwinm    r29,r27,2,0,29
	  add       r30, r26, r29
	  lwz       r3, 0x6C(r30)
	  cmplwi    r3, 0
	  bne-      .loc_0x7C
	  li        r3, 0x18
	  bl        -0x28104
	  mr.       r31, r3
	  beq-      .loc_0x64
	  mr        r4, r27
	  mr        r5, r28
	  bl        -0x1D0F8

	.loc_0x64:
	  stw       r31, 0x6C(r30)
	  lwz       r0, 0x6C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x84
	  li        r3, 0
	  b         .loc_0xBC

	.loc_0x7C:
	  li        r4, 0
	  bl        -0x1D118

	.loc_0x84:
	  add       r3, r26, r29
	  lwz       r3, 0x64(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  lwz       r4, 0x6C(r30)
	  bl        -0x18C58
	  b         .loc_0xB8

	.loc_0xA0:
	  rlwinm    r0,r27,2,0,29
	  add       r29, r26, r0
	  lwz       r3, 0x6C(r29)
	  bl        -0x27F54
	  li        r0, 0
	  stw       r0, 0x6C(r29)

	.loc_0xB8:
	  li        r3, 0x1

	.loc_0xBC:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004C02C
 * Size:	000088
 */
void J2DTevBlock2::shiftDeleteFlag(unsigned char, bool)
{
	/*
	.loc_0x0:
	  lbz       r6, 0x78(r3)
	  rlwinm.   r0,r5,0,24,31
	  rlwinm    r0,r6,0,25,31
	  rlwinm    r6,r6,0,24,24
	  stb       r0, 0x78(r3)
	  beq-      .loc_0x44
	  rlwinm    r0,r4,0,24,31
	  li        r4, 0x1
	  slw       r4, r4, r0
	  lbz       r5, 0x78(r3)
	  subi      r4, r4, 0x1
	  andc      r0, r5, r4
	  and       r4, r5, r4
	  rlwinm    r0,r0,1,0,30
	  or        r0, r4, r0
	  stb       r0, 0x78(r3)
	  b         .loc_0x78

	.loc_0x44:
	  rlwinm    r7,r4,0,24,31
	  li        r5, 0x1
	  addi      r0, r7, 0x1
	  lbz       r8, 0x78(r3)
	  slw       r4, r5, r0
	  slw       r5, r5, r7
	  subi      r0, r4, 0x1
	  subi      r4, r5, 0x1
	  andc      r0, r8, r0
	  and       r4, r8, r4
	  srawi     r0, r0, 0x1
	  or        r0, r4, r0
	  stb       r0, 0x78(r3)

	.loc_0x78:
	  lbz       r0, 0x78(r3)
	  or        r0, r0, r6
	  stb       r0, 0x78(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004C0B4
 * Size:	0002E8
 */
void J2DTevBlock2::setGX()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  stw       r28, 0x20(r1)
	  li        r28, 0

	.loc_0x24:
	  mr        r3, r29
	  mr        r4, r28
	  lwz       r12, 0x0(r29)
	  mr        r5, r28
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x2
	  blt+      .loc_0x24
	  mr        r30, r29
	  li        r28, 0
	  b         .loc_0x74

	.loc_0x58:
	  lbz       r4, 0xA(r30)
	  mr        r3, r28
	  lbz       r5, 0xB(r30)
	  lbz       r6, 0xC(r30)
	  bl        0x9C900
	  addi      r30, r30, 0x4
	  addi      r28, r28, 0x1

	.loc_0x74:
	  lbz       r0, 0x32(r29)
	  cmpw      r28, r0
	  blt+      .loc_0x58
	  mr        r31, r29
	  addi      r30, r1, 0xC
	  li        r28, 0

	.loc_0x8C:
	  lwz       r4, 0x12(r31)
	  cmpwi     r28, 0x3
	  lwz       r0, 0x16(r31)
	  li        r3, 0
	  stw       r4, 0xC(r1)
	  stw       r0, 0x10(r1)
	  beq-      .loc_0xAC
	  addi      r3, r28, 0x1

	.loc_0xAC:
	  mr        r4, r30
	  bl        0x9C578
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x8
	  cmpwi     r28, 0x4
	  blt+      .loc_0x8C
	  lbz       r3, 0x32(r29)
	  bl        0x9CA3C
	  mr        r30, r29
	  li        r31, 0
	  b         .loc_0x1FC

	.loc_0xD8:
	  lbz       r0, 0x36(r30)
	  mr        r3, r31
	  lbz       r5, 0x35(r30)
	  rlwinm    r6,r0,28,28,31
	  rlwinm    r7,r0,0,28,31
	  rlwinm    r4,r5,28,28,31
	  rlwinm    r5,r5,0,28,31
	  bl        0x9C360
	  lbz       r5, 0x39(r30)
	  mr        r3, r31
	  lbz       r6, 0x3A(r30)
	  rlwinm    r0,r5,0,24,26
	  srawi     r4, r0, 0x5
	  rlwinm    r7,r6,28,29,31
	  rlwinm    r0,r6,25,31,31
	  rlwimi    r0,r5,1,29,30
	  rlwinm    r4,r4,0,24,31
	  rlwinm    r5,r5,30,29,31
	  rlwinm    r6,r0,0,24,31
	  bl        0x9C374
	  lbz       r7, 0x34(r30)
	  mr        r3, r31
	  rlwinm    r0,r7,0,26,27
	  rlwinm    r5,r7,0,30,31
	  srawi     r6, r0, 0x4
	  rlwinm    r9,r7,30,31,31
	  rlwinm    r0,r7,29,29,30
	  cmplwi    r5, 0x3
	  add       r4, r9, r0
	  rlwinm    r8,r7,26,30,31
	  addi      r0, r4, 0x8
	  rlwinm    r6,r6,0,24,31
	  rlwinm    r7,r7,29,31,31
	  rlwinm    r0,r0,0,24,31
	  beq-      .loc_0x168
	  mr        r0, r9

	.loc_0x168:
	  rlwinm    r4,r0,0,24,31
	  bl        0x9C370
	  lbz       r7, 0x38(r30)
	  mr        r3, r31
	  rlwinm    r0,r7,0,26,27
	  rlwinm    r5,r7,0,30,31
	  srawi     r6, r0, 0x4
	  rlwinm    r9,r7,30,31,31
	  rlwinm    r0,r7,29,29,30
	  cmplwi    r5, 0x3
	  add       r4, r9, r0
	  rlwinm    r8,r7,26,30,31
	  addi      r0, r4, 0x8
	  rlwinm    r6,r6,0,24,31
	  rlwinm    r7,r7,29,31,31
	  rlwinm    r0,r0,0,24,31
	  beq-      .loc_0x1B0
	  mr        r0, r9

	.loc_0x1B0:
	  rlwinm    r4,r0,0,24,31
	  bl        0x9C390
	  add       r28, r29, r31
	  li        r4, 0
	  lbz       r0, 0x54(r28)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x1D0
	  mr        r4, r0

	.loc_0x1D0:
	  mr        r3, r31
	  bl        0x9C544
	  lbz       r0, 0x56(r28)
	  li        r4, 0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x1EC
	  mr        r4, r0

	.loc_0x1EC:
	  mr        r3, r31
	  bl        0x9C584
	  addi      r30, r30, 0x8
	  addi      r31, r31, 0x1

	.loc_0x1FC:
	  lbz       r0, 0x32(r29)
	  cmpw      r31, r0
	  blt+      .loc_0xD8
	  li        r28, 0
	  mr        r30, r29

	.loc_0x210:
	  lwz       r0, 0x44(r30)
	  mr        r3, r28
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        0x9C484
	  addi      r28, r28, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r28, 0x4
	  blt+      .loc_0x210
	  mr        r30, r29
	  li        r28, 0
	  b         .loc_0x25C

	.loc_0x240:
	  lbz       r0, 0x3A(r30)
	  mr        r3, r28
	  rlwinm    r4,r0,0,30,31
	  rlwinm    r5,r0,30,30,31
	  bl        0x9C580
	  addi      r30, r30, 0x8
	  addi      r28, r28, 0x1

	.loc_0x25C:
	  lbz       r0, 0x32(r29)
	  cmpw      r28, r0
	  blt+      .loc_0x240
	  li        r28, 0

	.loc_0x26C:
	  addi      r0, r28, 0x58
	  mr        r3, r28
	  lbzx      r0, r29, r0
	  rlwinm    r4,r0,26,30,31
	  rlwinm    r5,r0,28,30,31
	  rlwinm    r6,r0,30,30,31
	  rlwinm    r7,r0,0,30,31
	  bl        0x9C590
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x4
	  blt+      .loc_0x26C
	  li        r28, 0
	  b         .loc_0x2B8

	.loc_0x2A0:
	  rlwinm    r3,r28,2,22,29
	  mr        r4, r28
	  addi      r3, r3, 0x5C
	  add       r3, r29, r3
	  bl        0xD260
	  addi      r28, r28, 0x1

	.loc_0x2B8:
	  lbz       r0, 0x32(r29)
	  rlwinm    r3,r28,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x2A0
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004C39C
 * Size:	000048
 */
void J2DTevBlock2::loadTexture(_GXTexMapID, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0x2
	  stw       r0, 0x14(r1)
	  bge-      .loc_0x38
	  rlwinm    r0,r5,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x64(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  bl        -0x18DA0

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004C3E4
 * Size:	000118
 */
void J2DTevBlock4::J2DTevBlock4()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x1094
	  lis       r4, 0x8005
	  li        r6, 0x4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x804A
	  subi      r4, r4, 0x5D3C
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0xE60
	  addi      r3, r31, 0xE
	  li        r7, 0x4
	  stw       r0, 0x0(r31)
	  bl        0x75414
	  lis       r4, 0x8005
	  addi      r3, r31, 0x1E
	  subi      r4, r4, 0x5D40
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x4
	  bl        0x753F8
	  lis       r4, 0x8005
	  addi      r3, r31, 0x3F
	  subi      r4, r4, 0x6A28
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x4
	  bl        0x753DC
	  lis       r4, 0x8004
	  addi      r3, r31, 0x60
	  subi      r4, r4, 0x646C
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x753C0
	  lis       r4, 0x8005
	  addi      r3, r31, 0x78
	  subi      r4, r4, 0x5D4C
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0x4
	  bl        0x753A4
	  lis       r4, 0x8005
	  addi      r3, r31, 0x7C
	  subi      r4, r4, 0x5DE0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x75388
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x8C(r31)
	  stw       r0, 0x90(r31)
	  stw       r0, 0x94(r31)
	  stw       r0, 0x98(r31)
	  stb       r0, 0xB0(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8004C4FC
 * Size:	0000D0
 */
void J2DTevBlock4::~J2DTevBlock4()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr.       r27, r3
	  mr        r28, r4
	  beq-      .loc_0xB8
	  lis       r3, 0x804A
	  mr        r30, r27
	  addi      r0, r3, 0xE60
	  li        r29, 0
	  stw       r0, 0x0(r27)
	  li        r31, 0x1

	.loc_0x34:
	  lbz       r3, 0xB0(r27)
	  slw       r0, r31, r29
	  and.      r0, r3, r0
	  beq-      .loc_0x50
	  lwz       r3, 0x8C(r30)
	  li        r4, 0x1
	  bl        -0x19538

	.loc_0x50:
	  lwz       r3, 0x9C(r30)
	  bl        -0x2849C
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x4
	  blt+      .loc_0x34
	  lbz       r0, 0xB0(r27)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x94
	  lwz       r3, 0xAC(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0x94
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
	  cmplwi    r27, 0
	  beq-      .loc_0xA8
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1094
	  stw       r0, 0x0(r27)

	.loc_0xA8:
	  extsh.    r0, r28
	  ble-      .loc_0xB8
	  mr        r3, r27
	  bl        -0x284FC

	.loc_0xB8:
	  mr        r3, r27
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004C5CC
 * Size:	0003BC
 */
void J2DTevBlock4::initialize()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  lis       r4, 0x1
	  subi      r0, r4, 0x1
	  subi      r5, r2, 0x7A50
	  stmw      r24, 0x20(r1)
	  subi      r6, r2, 0x7A48
	  lha       r25, -0x7A48(r2)
	  li        r29, 0x1
	  lha       r26, 0x2(r6)
	  li        r30, 0xC0
	  lha       r27, 0x4(r6)
	  li        r31, 0xC1
	  lha       r28, 0x6(r6)
	  li        r12, 0xC2
	  li        r11, 0xC3
	  li        r10, 0xC4
	  li        r9, 0xC5
	  li        r7, 0xC6
	  li        r6, 0xC7
	  mr        r4, r3
	  lwz       r8, -0x7A3C(r2)
	  sth       r0, 0x4(r3)
	  sth       r0, 0x6(r3)
	  sth       r0, 0x8(r3)
	  sth       r0, 0xA(r3)
	  sth       r0, 0xC(r3)
	  li        r0, 0x2
	  lbz       r24, -0x7A50(r2)
	  stb       r24, 0xE(r3)
	  lbz       r24, 0x1(r5)
	  stb       r24, 0xF(r3)
	  lbz       r24, 0x2(r5)
	  stb       r24, 0x10(r3)
	  lbz       r24, -0x7A50(r2)
	  stb       r24, 0x12(r3)
	  lbz       r24, 0x1(r5)
	  stb       r24, 0x13(r3)
	  lbz       r24, 0x2(r5)
	  stb       r24, 0x14(r3)
	  lbz       r24, -0x7A50(r2)
	  stb       r24, 0x16(r3)
	  lbz       r24, 0x1(r5)
	  stb       r24, 0x17(r3)
	  lbz       r24, 0x2(r5)
	  stb       r24, 0x18(r3)
	  lbz       r24, -0x7A50(r2)
	  stb       r24, 0x1A(r3)
	  lbz       r24, 0x1(r5)
	  stb       r24, 0x1B(r3)
	  lbz       r5, 0x2(r5)
	  stb       r5, 0x1C(r3)
	  sth       r25, 0x1E(r3)
	  sth       r26, 0x20(r3)
	  sth       r27, 0x22(r3)
	  sth       r28, 0x24(r3)
	  sth       r25, 0x26(r3)
	  sth       r26, 0x28(r3)
	  sth       r27, 0x2A(r3)
	  sth       r28, 0x2C(r3)
	  sth       r25, 0x2E(r3)
	  sth       r26, 0x30(r3)
	  sth       r27, 0x32(r3)
	  sth       r28, 0x34(r3)
	  sth       r25, 0x36(r3)
	  sth       r26, 0x38(r3)
	  sth       r27, 0x3A(r3)
	  sth       r28, 0x3C(r3)
	  stb       r29, 0x3E(r3)
	  stb       r30, 0x3F(r3)
	  stb       r31, 0x43(r3)
	  stb       r12, 0x47(r3)
	  stb       r11, 0x4B(r3)
	  stb       r10, 0x4F(r3)
	  stb       r9, 0x53(r3)
	  stb       r7, 0x57(r3)
	  stb       r6, 0x5B(r3)
	  mtctr     r0

	.loc_0x134:
	  stw       r8, 0x8(r1)
	  lbz       r7, 0x8(r1)
	  lbz       r6, 0x9(r1)
	  stb       r7, 0x60(r4)
	  lbz       r5, 0xA(r1)
	  lbz       r0, 0xB(r1)
	  stb       r6, 0x61(r4)
	  stb       r5, 0x62(r4)
	  stw       r8, 0x8(r1)
	  stb       r7, 0xC(r1)
	  lbz       r7, 0x8(r1)
	  stb       r0, 0x63(r4)
	  stb       r6, 0xD(r1)
	  lbz       r6, 0x9(r1)
	  stb       r7, 0x64(r4)
	  stb       r5, 0xE(r1)
	  lbz       r5, 0xA(r1)
	  stb       r6, 0x65(r4)
	  stb       r0, 0xF(r1)
	  lbz       r0, 0xB(r1)
	  stb       r5, 0x66(r4)
	  stb       r0, 0x67(r4)
	  addi      r4, r4, 0x8
	  stb       r7, 0xC(r1)
	  stb       r6, 0xD(r1)
	  stb       r5, 0xE(r1)
	  stb       r0, 0xF(r1)
	  bdnz+     .loc_0x134
	  li        r7, 0xFF
	  lis       r4, 0x8048
	  stb       r7, 0x70(r3)
	  subi      r6, r2, 0x7A34
	  li        r0, 0x2
	  mr        r5, r3
	  stb       r7, 0x74(r3)
	  subi      r4, r4, 0x7944
	  stb       r7, 0x71(r3)
	  stb       r7, 0x75(r3)
	  stb       r7, 0x72(r3)
	  stb       r7, 0x76(r3)
	  stb       r7, 0x73(r3)
	  stb       r7, 0x77(r3)
	  lbz       r7, 0x1(r6)
	  lbz       r9, 0x2(r6)
	  lbz       r8, -0x7A34(r2)
	  rlwinm    r7,r7,4,20,27
	  rlwinm    r9,r9,2,0,29
	  lbz       r10, 0x3(r6)
	  add       r7, r7, r9
	  rlwinm    r8,r8,6,0,25
	  add       r7, r7, r10
	  add       r7, r8, r7
	  stb       r7, 0x78(r3)
	  lbz       r7, 0x1(r6)
	  lbz       r9, 0x2(r6)
	  lbz       r8, -0x7A34(r2)
	  rlwinm    r7,r7,4,20,27
	  rlwinm    r9,r9,2,0,29
	  lbz       r10, 0x3(r6)
	  add       r7, r7, r9
	  rlwinm    r8,r8,6,0,25
	  add       r7, r7, r10
	  add       r7, r8, r7
	  stb       r7, 0x79(r3)
	  lbz       r7, 0x1(r6)
	  lbz       r9, 0x2(r6)
	  lbz       r8, -0x7A34(r2)
	  rlwinm    r7,r7,4,20,27
	  rlwinm    r9,r9,2,0,29
	  lbz       r10, 0x3(r6)
	  add       r7, r7, r9
	  rlwinm    r8,r8,6,0,25
	  add       r7, r7, r10
	  add       r7, r8, r7
	  stb       r7, 0x7A(r3)
	  lbz       r9, 0x2(r6)
	  lbz       r7, 0x1(r6)
	  lbz       r8, -0x7A34(r2)
	  rlwinm    r9,r9,2,0,29
	  rlwinm    r7,r7,4,0,27
	  lbz       r10, 0x3(r6)
	  add       r6, r7, r9
	  rlwinm    r7,r8,6,0,25
	  add       r6, r6, r10
	  add       r6, r7, r6
	  stb       r6, 0x7B(r3)
	  mtctr     r0

	.loc_0x290:
	  lwz       r6, 0x4(r4)
	  lwz       r0, 0x8(r4)
	  stw       r6, 0x14(r1)
	  lwz       r6, 0x0(r4)
	  stw       r0, 0x18(r1)
	  lbz       r0, 0x17(r1)
	  stw       r6, 0x10(r1)
	  lbz       r6, 0x18(r1)
	  rlwinm    r0,r0,21,0,10
	  lbz       r7, 0x16(r1)
	  rlwinm    r6,r6,22,0,9
	  lbz       r8, 0x13(r1)
	  lbz       r9, 0x15(r1)
	  rlwinm    r7,r7,20,0,11
	  or        r0, r6, r0
	  lbz       r10, 0x14(r1)
	  lbz       r11, 0x12(r1)
	  rlwinm    r6,r8,16,0,15
	  or        r0, r7, r0
	  lbz       r12, 0x11(r1)
	  rlwinm    r7,r9,11,0,20
	  rlwinm    r8,r10,8,0,23
	  or        r0, r6, r0
	  rlwinm    r6,r11,4,0,27
	  or        r0, r7, r0
	  rlwinm    r7,r12,2,0,29
	  or        r0, r8, r0
	  lbz       r8, 0x10(r1)
	  or        r0, r6, r0
	  or        r0, r7, r0
	  or        r0, r8, r0
	  stw       r0, 0x7C(r5)
	  lwz       r6, 0x4(r4)
	  lwz       r0, 0x8(r4)
	  stw       r6, 0x14(r1)
	  lwz       r6, 0x0(r4)
	  stw       r0, 0x18(r1)
	  lbz       r0, 0x17(r1)
	  stw       r6, 0x10(r1)
	  lbz       r6, 0x18(r1)
	  rlwinm    r0,r0,21,0,10
	  lbz       r7, 0x16(r1)
	  rlwinm    r6,r6,22,0,9
	  lbz       r8, 0x13(r1)
	  lbz       r9, 0x15(r1)
	  rlwinm    r7,r7,20,0,11
	  or        r0, r6, r0
	  lbz       r10, 0x14(r1)
	  lbz       r11, 0x12(r1)
	  rlwinm    r6,r8,16,0,15
	  or        r0, r7, r0
	  lbz       r12, 0x11(r1)
	  rlwinm    r7,r9,11,0,20
	  rlwinm    r8,r10,8,0,23
	  or        r0, r6, r0
	  rlwinm    r6,r11,4,0,27
	  or        r0, r7, r0
	  rlwinm    r7,r12,2,0,29
	  or        r0, r8, r0
	  lbz       r8, 0x10(r1)
	  or        r0, r6, r0
	  or        r0, r7, r0
	  or        r0, r8, r0
	  stw       r0, 0x80(r5)
	  addi      r5, r5, 0x8
	  bdnz+     .loc_0x290
	  li        r0, 0
	  stw       r0, 0x9C(r3)
	  stw       r0, 0xA0(r3)
	  stw       r0, 0xA4(r3)
	  stw       r0, 0xA8(r3)
	  stw       r0, 0xAC(r3)
	  lmw       r24, 0x20(r1)
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004C988
 * Size:	0000E0
 */
void J2DTevBlock4::prepareTexture(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  rlwinm    r31,r4,0,24,31
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0xB0

	.loc_0x2C:
	  rlwinm    r0,r29,0,24,31
	  cmplwi    r0, 0x4
	  blt-      .loc_0x40
	  li        r3, 0
	  b         .loc_0xC0

	.loc_0x40:
	  rlwinm    r3,r29,2,22,29
	  addi      r30, r3, 0x8C
	  lwzx      r0, r28, r30
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  li        r3, 0x40
	  bl        -0x28B3C
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  lbz       r4, 0x3B(r3)
	  li        r0, 0
	  rlwinm    r4,r4,0,30,30
	  stb       r4, 0x3B(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x20(r3)

	.loc_0x7C:
	  stwx      r3, r28, r30
	  lwzx      r0, r28, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x94
	  li        r3, 0
	  b         .loc_0xC0

	.loc_0x94:
	  rlwinm    r0,r29,0,24,31
	  li        r3, 0x1
	  lbz       r4, 0xB0(r28)
	  slw       r0, r3, r0
	  or        r0, r4, r0
	  stb       r0, 0xB0(r28)

	.loc_0xAC:
	  addi      r29, r29, 0x1

	.loc_0xB0:
	  rlwinm    r0,r29,0,24,31
	  cmplw     r0, r31
	  blt+      .loc_0x2C
	  li        r3, 0x1

	.loc_0xC0:
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
 * Address:	8004CA68
 * Size:	0003AC
 */
void J2DTevBlock4::insertTexture(unsigned long, const ResTIMG*, JUTPalette*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r4
	  cmplwi    r26, 0x4
	  mr        r25, r3
	  mr        r27, r5
	  mr        r28, r6
	  bge-      .loc_0x30
	  cmplwi    r27, 0
	  bne-      .loc_0x38

	.loc_0x30:
	  li        r3, 0
	  b         .loc_0x398

	.loc_0x38:
	  li        r30, 0
	  b         .loc_0x64

	.loc_0x40:
	  rlwinm    r3,r30,2,22,29
	  addi      r0, r3, 0x8C
	  lwzx      r3, r25, r0
	  cmplwi    r3, 0
	  beq-      .loc_0x70
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  addi      r30, r30, 0x1

	.loc_0x64:
	  rlwinm    r0,r30,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x40

	.loc_0x70:
	  rlwinm    r0,r30,0,24,31
	  cmplw     r0, r26
	  bge-      .loc_0x84
	  li        r3, 0
	  b         .loc_0x398

	.loc_0x84:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x94
	  li        r3, 0
	  b         .loc_0x398

	.loc_0x94:
	  lbz       r0, 0x8(r27)
	  li        r29, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x154
	  cmplwi    r28, 0
	  bne-      .loc_0x154
	  li        r0, 0x3
	  mr        r5, r25
	  li        r7, 0
	  mtctr     r0
	  li        r3, 0x1

	.loc_0xC0:
	  lwz       r6, 0x8C(r5)
	  cmplwi    r6, 0
	  beq-      .loc_0x114
	  lwz       r4, 0x20(r6)
	  cmplwi    r4, 0
	  beq-      .loc_0x114
	  lbz       r0, 0x8(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x114
	  lbz       r4, 0x3A(r6)
	  li        r0, 0
	  cmpwi     r4, 0x10
	  blt-      .loc_0xF8
	  li        r0, 0x10

	.loc_0xF8:
	  sub       r0, r4, r0
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0x4
	  bge-      .loc_0x114
	  slw       r0, r3, r0
	  or        r0, r7, r0
	  rlwinm    r7,r0,0,24,31

	.loc_0x114:
	  addi      r5, r5, 0x4
	  bdnz+     .loc_0xC0
	  rlwinm    r4,r7,0,24,31
	  li        r5, 0
	  li        r3, 0x1
	  b         .loc_0x148

	.loc_0x12C:
	  rlwinm    r0,r5,0,24,31
	  slw       r0, r3, r0
	  and.      r0, r4, r0
	  bne-      .loc_0x144
	  mr        r29, r5
	  b         .loc_0x154

	.loc_0x144:
	  addi      r5, r5, 0x1

	.loc_0x148:
	  rlwinm    r0,r5,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x12C

	.loc_0x154:
	  rlwinm    r0,r30,2,22,29
	  add       r3, r25, r0
	  lwz       r31, 0x8C(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0x250
	  li        r3, 0x40
	  bl        -0x28D30
	  mr.       r31, r3
	  beq-      .loc_0x198
	  li        r0, 0
	  mr        r4, r27
	  stw       r0, 0x28(r31)
	  mr        r5, r29
	  bl        -0x19B6C
	  lbz       r0, 0x3B(r31)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r31)

	.loc_0x198:
	  cmplwi    r31, 0
	  bne-      .loc_0x1A8
	  li        r3, 0
	  b         .loc_0x398

	.loc_0x1A8:
	  cmplwi    r28, 0
	  beq-      .loc_0x1C0
	  mr        r3, r31
	  mr        r4, r27
	  mr        r5, r28
	  bl        -0x199F4

	.loc_0x1C0:
	  li        r8, 0x3
	  b         .loc_0x204

	.loc_0x1C8:
	  rlwinm    r3,r4,2,0,29
	  rlwinm    r0,r8,2,22,29
	  add       r6, r25, r3
	  rlwinm    r4,r4,1,0,30
	  lwz       r5, 0x88(r6)
	  add       r7, r25, r0
	  rlwinm    r3,r8,1,23,30
	  addi      r4, r4, 0x2
	  stw       r5, 0x8C(r7)
	  addi      r0, r3, 0x4
	  subi      r8, r8, 0x1
	  lwz       r3, 0x98(r6)
	  stw       r3, 0x9C(r7)
	  lhzx      r3, r25, r4
	  sthx      r3, r25, r0

	.loc_0x204:
	  rlwinm    r4,r8,0,24,31
	  cmplw     r4, r26
	  bgt+      .loc_0x1C8
	  rlwinm    r0,r26,2,0,29
	  mr        r3, r25
	  add       r5, r25, r0
	  rlwinm    r4,r26,0,24,31
	  stw       r31, 0x8C(r5)
	  li        r5, 0x1
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lbz       r3, 0xB0(r25)
	  slw       r0, r0, r26
	  or        r0, r3, r0
	  stb       r0, 0xB0(r25)
	  b         .loc_0x370

	.loc_0x250:
	  cmplwi    r28, 0
	  bne-      .loc_0x26C
	  mr        r3, r31
	  mr        r4, r27
	  mr        r5, r29
	  bl        -0x19C48
	  b         .loc_0x27C

	.loc_0x26C:
	  mr        r3, r31
	  mr        r4, r27
	  mr        r5, r28
	  bl        -0x19AB0

	.loc_0x27C:
	  lbz       r0, 0xB0(r25)
	  mr        r10, r30
	  addi      r3, r1, 0x8
	  rlwinm    r6,r0,0,31,31
	  rlwinm    r5,r0,31,31,31
	  rlwinm    r4,r0,30,31,31
	  rlwinm    r0,r0,29,31,31
	  stb       r6, 0x8(r1)
	  stb       r5, 0x9(r1)
	  stb       r4, 0xA(r1)
	  stb       r0, 0xB(r1)
	  b         .loc_0x2F8

	.loc_0x2AC:
	  rlwinm    r4,r7,2,0,29
	  rlwinm    r0,r10,2,22,29
	  add       r8, r25, r4
	  rlwinm    r5,r7,1,0,30
	  lwz       r6, 0x88(r8)
	  add       r9, r25, r0
	  subi      r0, r7, 0x1
	  rlwinm    r4,r10,1,23,30
	  stw       r6, 0x8C(r9)
	  rlwinm    r7,r10,0,24,31
	  lbzx      r0, r3, r0
	  addi      r5, r5, 0x2
	  lwz       r6, 0x98(r8)
	  addi      r4, r4, 0x4
	  stbx      r0, r3, r7
	  subi      r10, r10, 0x1
	  stw       r6, 0x9C(r9)
	  lhzx      r0, r25, r5
	  sthx      r0, r25, r4

	.loc_0x2F8:
	  rlwinm    r7,r10,0,24,31
	  cmplw     r7, r26
	  bgt+      .loc_0x2AC
	  rlwinm    r0,r26,2,0,29
	  addi      r5, r1, 0x8
	  add       r3, r25, r0
	  li        r7, 0
	  stw       r31, 0x8C(r3)
	  li        r3, 0x1
	  lbz       r0, 0xB0(r25)
	  rlwinm    r0,r0,0,24,24
	  stb       r0, 0xB0(r25)
	  b         .loc_0x350

	.loc_0x32C:
	  rlwinm    r6,r7,0,24,31
	  lbzx      r0, r5, r6
	  cmplwi    r0, 0
	  beq-      .loc_0x34C
	  lbz       r4, 0xB0(r25)
	  slw       r0, r3, r6
	  or        r0, r4, r0
	  stb       r0, 0xB0(r25)

	.loc_0x34C:
	  addi      r7, r7, 0x1

	.loc_0x350:
	  rlwinm    r0,r7,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x32C
	  li        r0, 0x1
	  lbz       r3, 0xB0(r25)
	  slw       r0, r0, r26
	  or        r0, r3, r0
	  stb       r0, 0xB0(r25)

	.loc_0x370:
	  rlwinm    r3,r26,2,0,29
	  rlwinm    r0,r26,1,0,30
	  add       r4, r25, r3
	  li        r5, 0
	  lis       r3, 0x1
	  stw       r5, 0x9C(r4)
	  subi      r4, r3, 0x1
	  add       r3, r25, r0
	  sth       r4, 0x4(r3)
	  li        r3, 0x1

	.loc_0x398:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004CE14
 * Size:	000198
 */
void J2DTevBlock4::insertTexture(unsigned long, JUTTexture*)
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
	  cmplwi    r30, 0x4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bge-      .loc_0x34
	  cmplwi    r31, 0
	  bne-      .loc_0x3C

	.loc_0x34:
	  li        r3, 0
	  b         .loc_0x17C

	.loc_0x3C:
	  li        r4, 0
	  b         .loc_0x68

	.loc_0x44:
	  rlwinm    r3,r4,2,22,29
	  addi      r0, r3, 0x8C
	  lwzx      r3, r29, r0
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  addi      r4, r4, 0x1

	.loc_0x68:
	  rlwinm    r0,r4,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x44

	.loc_0x74:
	  rlwinm    r0,r4,0,24,31
	  cmplw     r0, r30
	  bge-      .loc_0x88
	  li        r3, 0
	  b         .loc_0x17C

	.loc_0x88:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x98
	  li        r3, 0
	  b         .loc_0x17C

	.loc_0x98:
	  lwz       r3, 0x98(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  lbz       r0, 0xB0(r29)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0xC4
	  li        r4, 0x1
	  bl        -0x19EC4

	.loc_0xC4:
	  lbz       r0, 0xB0(r29)
	  rlwinm    r0,r0,0,29,27
	  stb       r0, 0xB0(r29)

	.loc_0xD0:
	  li        r8, 0x3
	  b         .loc_0x114

	.loc_0xD8:
	  rlwinm    r3,r4,2,0,29
	  rlwinm    r0,r8,2,22,29
	  add       r6, r29, r3
	  rlwinm    r4,r4,1,0,30
	  lwz       r5, 0x88(r6)
	  add       r7, r29, r0
	  rlwinm    r3,r8,1,23,30
	  addi      r4, r4, 0x2
	  stw       r5, 0x8C(r7)
	  addi      r0, r3, 0x4
	  subi      r8, r8, 0x1
	  lwz       r3, 0x98(r6)
	  stw       r3, 0x9C(r7)
	  lhzx      r3, r29, r4
	  sthx      r3, r29, r0

	.loc_0x114:
	  rlwinm    r4,r8,0,24,31
	  cmplw     r4, r30
	  bgt+      .loc_0xD8
	  rlwinm    r3,r30,2,0,29
	  rlwinm    r0,r30,1,0,30
	  add       r5, r29, r3
	  lis       r3, 0x1
	  stw       r31, 0x8C(r5)
	  li        r4, 0
	  subi      r7, r3, 0x1
	  add       r6, r29, r0
	  stw       r4, 0x9C(r5)
	  mr        r3, r29
	  rlwinm    r4,r30,0,24,31
	  li        r5, 0x1
	  sth       r7, 0x4(r6)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lbz       r4, 0xB0(r29)
	  slw       r0, r0, r30
	  li        r3, 0x1
	  andc      r0, r4, r0
	  stb       r0, 0xB0(r29)

	.loc_0x17C:
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
 * Address:	8004CFAC
 * Size:	0002E4
 */
void J2DTevBlock4::setTexture(unsigned long, const ResTIMG*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r4
	  cmplwi    r26, 0x4
	  mr        r25, r3
	  mr        r27, r5
	  blt-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x2D0

	.loc_0x2C:
	  cmplwi    r27, 0
	  li        r28, 0
	  beq-      .loc_0x160
	  lbz       r0, 0x8(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x160
	  li        r0, 0x2
	  mr        r4, r25
	  li        r6, 0
	  li        r7, 0
	  mtctr     r0

	.loc_0x58:
	  cmplw     r7, r26
	  beq-      .loc_0xB8
	  lwz       r5, 0x8C(r4)
	  cmplwi    r5, 0
	  beq-      .loc_0xB8
	  lwz       r3, 0x20(r5)
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  lbz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  lbz       r3, 0x3A(r5)
	  li        r0, 0
	  cmpwi     r3, 0x10
	  blt-      .loc_0x98
	  li        r0, 0x10

	.loc_0x98:
	  sub       r0, r3, r0
	  rlwinm    r3,r0,0,24,31
	  cmplwi    r3, 0x4
	  bge-      .loc_0xB8
	  li        r0, 0x1
	  slw       r0, r0, r3
	  or        r0, r6, r0
	  rlwinm    r6,r0,0,24,31

	.loc_0xB8:
	  addi      r7, r7, 0x1
	  cmplw     r7, r26
	  beq-      .loc_0x11C
	  lwz       r5, 0x90(r4)
	  cmplwi    r5, 0
	  beq-      .loc_0x11C
	  lwz       r3, 0x20(r5)
	  cmplwi    r3, 0
	  beq-      .loc_0x11C
	  lbz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x11C
	  lbz       r3, 0x3A(r5)
	  li        r0, 0
	  cmpwi     r3, 0x10
	  blt-      .loc_0xFC
	  li        r0, 0x10

	.loc_0xFC:
	  sub       r0, r3, r0
	  rlwinm    r3,r0,0,24,31
	  cmplwi    r3, 0x4
	  bge-      .loc_0x11C
	  li        r0, 0x1
	  slw       r0, r0, r3
	  or        r0, r6, r0
	  rlwinm    r6,r0,0,24,31

	.loc_0x11C:
	  addi      r4, r4, 0x8
	  addi      r7, r7, 0x1
	  bdnz+     .loc_0x58
	  rlwinm    r4,r6,0,24,31
	  li        r5, 0
	  li        r3, 0x1
	  b         .loc_0x154

	.loc_0x138:
	  rlwinm    r0,r5,0,24,31
	  slw       r0, r3, r0
	  and.      r0, r4, r0
	  bne-      .loc_0x150
	  mr        r28, r5
	  b         .loc_0x160

	.loc_0x150:
	  addi      r5, r5, 0x1

	.loc_0x154:
	  rlwinm    r0,r5,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x138

	.loc_0x160:
	  rlwinm    r29,r26,2,0,29
	  add       r31, r25, r29
	  lwz       r3, 0x8C(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0x1F4
	  cmplwi    r27, 0
	  beq-      .loc_0x1DC
	  li        r3, 0x40
	  bl        -0x29288
	  mr.       r30, r3
	  beq-      .loc_0x1AC
	  li        r0, 0
	  mr        r4, r27
	  stw       r0, 0x28(r30)
	  mr        r5, r28
	  bl        -0x1A0C4
	  lbz       r0, 0x3B(r30)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r30)

	.loc_0x1AC:
	  stw       r30, 0x8C(r31)
	  lwz       r0, 0x8C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C4
	  li        r3, 0
	  b         .loc_0x2D0

	.loc_0x1C4:
	  li        r0, 0x1
	  lbz       r3, 0xB0(r25)
	  slw       r0, r0, r26
	  or        r0, r3, r0
	  stb       r0, 0xB0(r25)
	  b         .loc_0x2A4

	.loc_0x1DC:
	  li        r0, 0x1
	  lbz       r3, 0xB0(r25)
	  slw       r0, r0, r26
	  andc      r0, r3, r0
	  stb       r0, 0xB0(r25)
	  b         .loc_0x2A4

	.loc_0x1F4:
	  li        r0, 0x1
	  lbz       r4, 0xB0(r25)
	  slw       r30, r0, r26
	  and.      r0, r4, r30
	  beq-      .loc_0x240
	  cmplwi    r27, 0
	  beq-      .loc_0x220
	  mr        r4, r27
	  mr        r5, r28
	  bl        -0x1A140
	  b         .loc_0x2A4

	.loc_0x220:
	  li        r4, 0x1
	  bl        -0x1A1C0
	  li        r0, 0
	  stw       r0, 0x8C(r31)
	  lbz       r0, 0xB0(r25)
	  andc      r0, r0, r30
	  stb       r0, 0xB0(r25)
	  b         .loc_0x2A4

	.loc_0x240:
	  li        r0, 0
	  cmplwi    r27, 0
	  stw       r0, 0x8C(r31)
	  beq-      .loc_0x2A4
	  li        r3, 0x40
	  bl        -0x2935C
	  mr.       r28, r3
	  beq-      .loc_0x280
	  li        r0, 0
	  mr        r4, r27
	  stw       r0, 0x28(r28)
	  li        r5, 0
	  bl        -0x1A198
	  lbz       r0, 0x3B(r28)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r28)

	.loc_0x280:
	  stw       r28, 0x8C(r31)
	  lwz       r0, 0x8C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x298
	  li        r3, 0
	  b         .loc_0x2D0

	.loc_0x298:
	  lbz       r0, 0xB0(r25)
	  or        r0, r0, r30
	  stb       r0, 0xB0(r25)

	.loc_0x2A4:
	  add       r27, r25, r29
	  lwz       r3, 0x9C(r27)
	  bl        -0x291A4
	  li        r4, 0
	  rlwinm    r0,r26,1,0,30
	  lis       r3, 0x1
	  stw       r4, 0x9C(r27)
	  subi      r4, r3, 0x1
	  add       r3, r25, r0
	  sth       r4, 0x4(r3)
	  li        r3, 0x1

	.loc_0x2D0:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004D290
 * Size:	0000A8
 */
void J2DTevBlock4::setTexture(unsigned long, JUTTexture*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r4
	  cmplwi    r28, 0x4
	  mr        r27, r3
	  mr        r29, r5
	  blt-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x94

	.loc_0x2C:
	  li        r0, 0x1
	  lbz       r3, 0xB0(r27)
	  slw       r30, r0, r28
	  and.      r0, r3, r30
	  beq-      .loc_0x54
	  rlwinm    r0,r28,2,0,29
	  li        r4, 0x1
	  add       r3, r27, r0
	  lwz       r3, 0x8C(r3)
	  bl        -0x1A2D0

	.loc_0x54:
	  rlwinm    r0,r28,2,0,29
	  add       r31, r27, r0
	  stw       r29, 0x8C(r31)
	  lbz       r0, 0xB0(r27)
	  andc      r0, r0, r30
	  stb       r0, 0xB0(r27)
	  lwz       r3, 0x9C(r31)
	  bl        -0x2924C
	  li        r4, 0
	  rlwinm    r0,r28,1,0,30
	  lis       r3, 0x1
	  stw       r4, 0x9C(r31)
	  subi      r4, r3, 0x1
	  add       r3, r27, r0
	  sth       r4, 0x4(r3)
	  li        r3, 0x1

	.loc_0x94:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004D338
 * Size:	000210
 */
void J2DTevBlock4::removeTexture(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  cmplwi    r31, 0x4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  blt-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x1F4

	.loc_0x30:
	  li        r0, 0x1
	  lbz       r3, 0xB0(r30)
	  slw       r0, r0, r31
	  and.      r0, r3, r0
	  beq-      .loc_0x58
	  rlwinm    r0,r31,2,0,29
	  li        r4, 0x1
	  add       r3, r30, r0
	  lwz       r3, 0x8C(r3)
	  bl        -0x1A37C

	.loc_0x58:
	  rlwinm    r29,r31,2,0,29
	  add       r3, r30, r29
	  lwz       r3, 0x9C(r3)
	  bl        -0x292E8
	  cmplwi    r31, 0x3
	  mr        r5, r31
	  bge-      .loc_0x1BC
	  subfic    r0, r31, 0x3
	  cmplwi    r0, 0x8
	  ble-      .loc_0x178
	  subfic    r0, r31, 0x2
	  rlwinm    r4,r31,1,0,30
	  rlwinm    r0,r0,29,3,31
	  add       r3, r30, r29
	  add       r4, r30, r4
	  mtctr     r0
	  lis       r6, 0
	  subi      r6, r6, 0x5
	  cmplw     r31, r6
	  bge-      .loc_0x178

	.loc_0xA8:
	  lwz       r0, 0x90(r3)
	  addi      r5, r5, 0x8
	  stw       r0, 0x8C(r3)
	  lwz       r0, 0xA0(r3)
	  stw       r0, 0x9C(r3)
	  lhz       r0, 0x6(r4)
	  sth       r0, 0x4(r4)
	  lwz       r0, 0x94(r3)
	  stw       r0, 0x90(r3)
	  lwz       r0, 0xA4(r3)
	  stw       r0, 0xA0(r3)
	  lhz       r0, 0x8(r4)
	  sth       r0, 0x6(r4)
	  lwz       r0, 0x98(r3)
	  stw       r0, 0x94(r3)
	  lwz       r0, 0xA8(r3)
	  stw       r0, 0xA4(r3)
	  lhz       r0, 0xA(r4)
	  sth       r0, 0x8(r4)
	  lwz       r0, 0x9C(r3)
	  stw       r0, 0x98(r3)
	  lwz       r0, 0xAC(r3)
	  stw       r0, 0xA8(r3)
	  lhz       r0, 0xC(r4)
	  sth       r0, 0xA(r4)
	  lwz       r0, 0xA0(r3)
	  stw       r0, 0x9C(r3)
	  lwz       r0, 0xB0(r3)
	  stw       r0, 0xAC(r3)
	  lhz       r0, 0xE(r4)
	  sth       r0, 0xC(r4)
	  lwz       r0, 0xA4(r3)
	  stw       r0, 0xA0(r3)
	  lwz       r0, 0xB4(r3)
	  stw       r0, 0xB0(r3)
	  lhz       r0, 0x10(r4)
	  sth       r0, 0xE(r4)
	  lwz       r0, 0xA8(r3)
	  stw       r0, 0xA4(r3)
	  lwz       r0, 0xB8(r3)
	  stw       r0, 0xB4(r3)
	  lhz       r0, 0x12(r4)
	  sth       r0, 0x10(r4)
	  lwz       r0, 0xAC(r3)
	  stw       r0, 0xA8(r3)
	  lwz       r0, 0xBC(r3)
	  stw       r0, 0xB8(r3)
	  addi      r3, r3, 0x20
	  lhz       r0, 0x14(r4)
	  sth       r0, 0x12(r4)
	  addi      r4, r4, 0x10
	  bdnz+     .loc_0xA8

	.loc_0x178:
	  rlwinm    r4,r5,2,0,29
	  rlwinm    r3,r5,1,0,30
	  subfic    r0, r5, 0x3
	  add       r4, r30, r4
	  add       r3, r30, r3
	  mtctr     r0
	  cmplwi    r5, 0x3
	  bge-      .loc_0x1BC

	.loc_0x198:
	  lwz       r0, 0x90(r4)
	  stw       r0, 0x8C(r4)
	  lwz       r0, 0xA0(r4)
	  stw       r0, 0x9C(r4)
	  addi      r4, r4, 0x4
	  lhz       r0, 0x6(r3)
	  sth       r0, 0x4(r3)
	  addi      r3, r3, 0x2
	  bdnz+     .loc_0x198

	.loc_0x1BC:
	  li        r5, 0
	  lis       r3, 0x1
	  stw       r5, 0x98(r30)
	  subi      r0, r3, 0x1
	  mr        r3, r30
	  rlwinm    r4,r31,0,24,31
	  stw       r5, 0xA8(r30)
	  li        r5, 0
	  sth       r0, 0xA(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1

	.loc_0x1F4:
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
 * Address:	8004D548
 * Size:	0000BC
 */
void J2DTevBlock4::setFont(ResFONT*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bne-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0xA0

	.loc_0x2C:
	  li        r3, 0x70
	  bl        -0x296D4
	  mr.       r31, r3
	  beq-      .loc_0x4C
	  mr        r4, r30
	  li        r5, 0
	  bl        -0x1C3C0
	  mr        r31, r3

	.loc_0x4C:
	  cmplwi    r31, 0
	  bne-      .loc_0x5C
	  li        r3, 0
	  b         .loc_0xA0

	.loc_0x5C:
	  lbz       r0, 0xB0(r29)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x88
	  lwz       r3, 0xAC(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x88:
	  stw       r31, 0xAC(r29)
	  li        r3, 0x1
	  lbz       r0, 0xB0(r29)
	  rlwinm    r0,r0,0,25,31
	  ori       r0, r0, 0x80
	  stb       r0, 0xB0(r29)

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
 * Address:	8004D604
 * Size:	000080
 */
void J2DTevBlock4::setFont(JUTFont*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x28
	  li        r3, 0
	  b         .loc_0x68

	.loc_0x28:
	  lbz       r0, 0xB0(r30)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x54
	  lwz       r3, 0xAC(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  stw       r31, 0xAC(r30)
	  li        r3, 0x1
	  lbz       r0, 0xB0(r30)
	  rlwinm    r0,r0,0,25,31
	  stb       r0, 0xB0(r30)

	.loc_0x68:
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
 * Address:	8004D684
 * Size:	0000D0
 */
void J2DTevBlock4::setPalette(unsigned long, const ResTLUT*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r4
	  cmplwi    r27, 0x4
	  mr        r26, r3
	  mr        r28, r5
	  blt-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0xBC

	.loc_0x2C:
	  cmplwi    r28, 0
	  beq-      .loc_0xA0
	  rlwinm    r29,r27,2,0,29
	  add       r30, r26, r29
	  lwz       r3, 0x9C(r30)
	  cmplwi    r3, 0
	  bne-      .loc_0x7C
	  li        r3, 0x18
	  bl        -0x2982C
	  mr.       r31, r3
	  beq-      .loc_0x64
	  mr        r4, r27
	  mr        r5, r28
	  bl        -0x1E820

	.loc_0x64:
	  stw       r31, 0x9C(r30)
	  lwz       r0, 0x9C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x84
	  li        r3, 0
	  b         .loc_0xBC

	.loc_0x7C:
	  li        r4, 0
	  bl        -0x1E840

	.loc_0x84:
	  add       r3, r26, r29
	  lwz       r3, 0x8C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  lwz       r4, 0x9C(r30)
	  bl        -0x1A380
	  b         .loc_0xB8

	.loc_0xA0:
	  rlwinm    r0,r27,2,0,29
	  add       r29, r26, r0
	  lwz       r3, 0x9C(r29)
	  bl        -0x2967C
	  li        r0, 0
	  stw       r0, 0x9C(r29)

	.loc_0xB8:
	  li        r3, 0x1

	.loc_0xBC:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004D754
 * Size:	000088
 */
void J2DTevBlock4::shiftDeleteFlag(unsigned char, bool)
{
	/*
	.loc_0x0:
	  lbz       r6, 0xB0(r3)
	  rlwinm.   r0,r5,0,24,31
	  rlwinm    r0,r6,0,25,31
	  rlwinm    r6,r6,0,24,24
	  stb       r0, 0xB0(r3)
	  beq-      .loc_0x44
	  rlwinm    r0,r4,0,24,31
	  li        r4, 0x1
	  slw       r4, r4, r0
	  lbz       r5, 0xB0(r3)
	  subi      r4, r4, 0x1
	  andc      r0, r5, r4
	  and       r4, r5, r4
	  rlwinm    r0,r0,1,0,30
	  or        r0, r4, r0
	  stb       r0, 0xB0(r3)
	  b         .loc_0x78

	.loc_0x44:
	  rlwinm    r7,r4,0,24,31
	  li        r5, 0x1
	  addi      r0, r7, 0x1
	  lbz       r8, 0xB0(r3)
	  slw       r4, r5, r0
	  slw       r5, r5, r7
	  subi      r0, r4, 0x1
	  subi      r4, r5, 0x1
	  andc      r0, r8, r0
	  and       r4, r8, r4
	  srawi     r0, r0, 0x1
	  or        r0, r4, r0
	  stb       r0, 0xB0(r3)

	.loc_0x78:
	  lbz       r0, 0xB0(r3)
	  or        r0, r0, r6
	  stb       r0, 0xB0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004D7DC
 * Size:	0002E8
 */
void J2DTevBlock4::setGX()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  stw       r28, 0x20(r1)
	  li        r28, 0

	.loc_0x24:
	  mr        r3, r29
	  mr        r4, r28
	  lwz       r12, 0x0(r29)
	  mr        r5, r28
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x4
	  blt+      .loc_0x24
	  mr        r30, r29
	  li        r28, 0
	  b         .loc_0x74

	.loc_0x58:
	  lbz       r4, 0xE(r30)
	  mr        r3, r28
	  lbz       r5, 0xF(r30)
	  lbz       r6, 0x10(r30)
	  bl        0x9B1D8
	  addi      r30, r30, 0x4
	  addi      r28, r28, 0x1

	.loc_0x74:
	  lbz       r0, 0x3E(r29)
	  cmpw      r28, r0
	  blt+      .loc_0x58
	  mr        r31, r29
	  addi      r30, r1, 0xC
	  li        r28, 0

	.loc_0x8C:
	  lwz       r4, 0x1E(r31)
	  cmpwi     r28, 0x3
	  lwz       r0, 0x22(r31)
	  li        r3, 0
	  stw       r4, 0xC(r1)
	  stw       r0, 0x10(r1)
	  beq-      .loc_0xAC
	  addi      r3, r28, 0x1

	.loc_0xAC:
	  mr        r4, r30
	  bl        0x9AE50
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x8
	  cmpwi     r28, 0x4
	  blt+      .loc_0x8C
	  lbz       r3, 0x3E(r29)
	  bl        0x9B314
	  mr        r30, r29
	  li        r31, 0
	  b         .loc_0x1FC

	.loc_0xD8:
	  lbz       r0, 0x42(r30)
	  mr        r3, r31
	  lbz       r5, 0x41(r30)
	  rlwinm    r6,r0,28,28,31
	  rlwinm    r7,r0,0,28,31
	  rlwinm    r4,r5,28,28,31
	  rlwinm    r5,r5,0,28,31
	  bl        0x9AC38
	  lbz       r5, 0x45(r30)
	  mr        r3, r31
	  lbz       r6, 0x46(r30)
	  rlwinm    r0,r5,0,24,26
	  srawi     r4, r0, 0x5
	  rlwinm    r7,r6,28,29,31
	  rlwinm    r0,r6,25,31,31
	  rlwimi    r0,r5,1,29,30
	  rlwinm    r4,r4,0,24,31
	  rlwinm    r5,r5,30,29,31
	  rlwinm    r6,r0,0,24,31
	  bl        0x9AC4C
	  lbz       r7, 0x40(r30)
	  mr        r3, r31
	  rlwinm    r0,r7,0,26,27
	  rlwinm    r5,r7,0,30,31
	  srawi     r6, r0, 0x4
	  rlwinm    r9,r7,30,31,31
	  rlwinm    r0,r7,29,29,30
	  cmplwi    r5, 0x3
	  add       r4, r9, r0
	  rlwinm    r8,r7,26,30,31
	  addi      r0, r4, 0x8
	  rlwinm    r6,r6,0,24,31
	  rlwinm    r7,r7,29,31,31
	  rlwinm    r0,r0,0,24,31
	  beq-      .loc_0x168
	  mr        r0, r9

	.loc_0x168:
	  rlwinm    r4,r0,0,24,31
	  bl        0x9AC48
	  lbz       r7, 0x44(r30)
	  mr        r3, r31
	  rlwinm    r0,r7,0,26,27
	  rlwinm    r5,r7,0,30,31
	  srawi     r6, r0, 0x4
	  rlwinm    r9,r7,30,31,31
	  rlwinm    r0,r7,29,29,30
	  cmplwi    r5, 0x3
	  add       r4, r9, r0
	  rlwinm    r8,r7,26,30,31
	  addi      r0, r4, 0x8
	  rlwinm    r6,r6,0,24,31
	  rlwinm    r7,r7,29,31,31
	  rlwinm    r0,r0,0,24,31
	  beq-      .loc_0x1B0
	  mr        r0, r9

	.loc_0x1B0:
	  rlwinm    r4,r0,0,24,31
	  bl        0x9AC68
	  add       r28, r29, r31
	  li        r4, 0
	  lbz       r0, 0x70(r28)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x1D0
	  mr        r4, r0

	.loc_0x1D0:
	  mr        r3, r31
	  bl        0x9AE1C
	  lbz       r0, 0x74(r28)
	  li        r4, 0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x1EC
	  mr        r4, r0

	.loc_0x1EC:
	  mr        r3, r31
	  bl        0x9AE5C
	  addi      r30, r30, 0x8
	  addi      r31, r31, 0x1

	.loc_0x1FC:
	  lbz       r0, 0x3E(r29)
	  cmpw      r31, r0
	  blt+      .loc_0xD8
	  li        r28, 0
	  mr        r30, r29

	.loc_0x210:
	  lwz       r0, 0x60(r30)
	  mr        r3, r28
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        0x9AD5C
	  addi      r28, r28, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r28, 0x4
	  blt+      .loc_0x210
	  mr        r30, r29
	  li        r28, 0
	  b         .loc_0x25C

	.loc_0x240:
	  lbz       r0, 0x46(r30)
	  mr        r3, r28
	  rlwinm    r4,r0,0,30,31
	  rlwinm    r5,r0,30,30,31
	  bl        0x9AE58
	  addi      r30, r30, 0x8
	  addi      r28, r28, 0x1

	.loc_0x25C:
	  lbz       r0, 0x3E(r29)
	  cmpw      r28, r0
	  blt+      .loc_0x240
	  li        r28, 0

	.loc_0x26C:
	  addi      r0, r28, 0x78
	  mr        r3, r28
	  lbzx      r0, r29, r0
	  rlwinm    r4,r0,26,30,31
	  rlwinm    r5,r0,28,30,31
	  rlwinm    r6,r0,30,30,31
	  rlwinm    r7,r0,0,30,31
	  bl        0x9AE68
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x4
	  blt+      .loc_0x26C
	  li        r28, 0
	  b         .loc_0x2B8

	.loc_0x2A0:
	  rlwinm    r3,r28,2,22,29
	  mr        r4, r28
	  addi      r3, r3, 0x7C
	  add       r3, r29, r3
	  bl        0xBB38
	  addi      r28, r28, 0x1

	.loc_0x2B8:
	  lbz       r0, 0x3E(r29)
	  rlwinm    r3,r28,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x2A0
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004DAC4
 * Size:	000048
 */
void J2DTevBlock4::loadTexture(_GXTexMapID, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0x4
	  stw       r0, 0x14(r1)
	  bge-      .loc_0x38
	  rlwinm    r0,r5,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x8C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  bl        -0x1A4C8

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004DB0C
 * Size:	000128
 */
void J2DTevBlock8::J2DTevBlock8()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x1094
	  lis       r4, 0x8005
	  li        r6, 0x4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x804A
	  subi      r4, r4, 0x5D3C
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0xDA4
	  addi      r3, r31, 0x16
	  li        r7, 0x8
	  stw       r0, 0x0(r31)
	  bl        0x73CEC
	  lis       r4, 0x8005
	  addi      r3, r31, 0x36
	  subi      r4, r4, 0x5D40
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x4
	  bl        0x73CD0
	  lis       r4, 0x8005
	  addi      r3, r31, 0x57
	  subi      r4, r4, 0x6A28
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x8
	  bl        0x73CB4
	  lis       r4, 0x8004
	  addi      r3, r31, 0x98
	  subi      r4, r4, 0x646C
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x73C98
	  lis       r4, 0x8005
	  addi      r3, r31, 0xB8
	  subi      r4, r4, 0x5D4C
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0x4
	  bl        0x73C7C
	  lis       r4, 0x8005
	  addi      r3, r31, 0xBC
	  subi      r4, r4, 0x5DE0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x8
	  bl        0x73C60
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0xDC(r31)
	  stw       r0, 0xE0(r31)
	  stw       r0, 0xE4(r31)
	  stw       r0, 0xE8(r31)
	  stw       r0, 0xEC(r31)
	  stw       r0, 0xF0(r31)
	  stw       r0, 0xF4(r31)
	  stw       r0, 0xF8(r31)
	  stb       r0, 0x120(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8004DC34
 * Size:	0000D0
 */
void J2DTevBlock8::~J2DTevBlock8()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr.       r27, r3
	  mr        r28, r4
	  beq-      .loc_0xB8
	  lis       r3, 0x804A
	  mr        r30, r27
	  addi      r0, r3, 0xDA4
	  li        r29, 0
	  stw       r0, 0x0(r27)
	  li        r31, 0x1

	.loc_0x34:
	  lbz       r3, 0x120(r27)
	  slw       r0, r31, r29
	  and.      r0, r3, r0
	  beq-      .loc_0x50
	  lwz       r3, 0xDC(r30)
	  li        r4, 0x1
	  bl        -0x1AC70

	.loc_0x50:
	  lwz       r3, 0xFC(r30)
	  bl        -0x29BD4
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x8
	  blt+      .loc_0x34
	  lbz       r0, 0x121(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  lwz       r3, 0x11C(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0x94
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
	  cmplwi    r27, 0
	  beq-      .loc_0xA8
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1094
	  stw       r0, 0x0(r27)

	.loc_0xA8:
	  extsh.    r0, r28
	  ble-      .loc_0xB8
	  mr        r3, r27
	  bl        -0x29C34

	.loc_0xB8:
	  mr        r3, r27
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004DD04
 * Size:	0004A0
 */
void J2DTevBlock8::initialize()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  subi      r8, r2, 0x7A48
	  lis       r5, 0x1
	  subi      r4, r2, 0x7A50
	  stmw      r21, 0x24(r1)
	  subi      r6, r5, 0x1
	  lha       r5, -0x7A48(r2)
	  lha       r0, 0x2(r8)
	  lha       r7, 0x4(r8)
	  lha       r22, 0x6(r8)
	  sth       r6, 0x4(r3)
	  sth       r6, 0x6(r3)
	  sth       r6, 0x8(r3)
	  sth       r6, 0xA(r3)
	  sth       r6, 0xC(r3)
	  sth       r6, 0xE(r3)
	  sth       r6, 0x10(r3)
	  sth       r6, 0x12(r3)
	  sth       r6, 0x14(r3)
	  lbz       r6, -0x7A50(r2)
	  stb       r6, 0x16(r3)
	  lbz       r6, 0x1(r4)
	  stb       r6, 0x17(r3)
	  lbz       r6, 0x2(r4)
	  stb       r6, 0x18(r3)
	  lbz       r6, -0x7A50(r2)
	  stb       r6, 0x1A(r3)
	  lbz       r6, 0x1(r4)
	  stb       r6, 0x1B(r3)
	  lbz       r6, 0x2(r4)
	  stb       r6, 0x1C(r3)
	  lbz       r6, -0x7A50(r2)
	  stb       r6, 0x1E(r3)
	  lbz       r6, 0x1(r4)
	  stb       r6, 0x1F(r3)
	  lbz       r6, 0x2(r4)
	  stb       r6, 0x20(r3)
	  lbz       r6, -0x7A50(r2)
	  stb       r6, 0x22(r3)
	  lbz       r6, 0x1(r4)
	  stb       r6, 0x23(r3)
	  lbz       r6, 0x2(r4)
	  stb       r6, 0x24(r3)
	  lbz       r6, -0x7A50(r2)
	  stb       r6, 0x26(r3)
	  lbz       r6, 0x1(r4)
	  stb       r6, 0x27(r3)
	  lbz       r6, 0x2(r4)
	  stb       r6, 0x28(r3)
	  lbz       r6, -0x7A50(r2)
	  stb       r6, 0x2A(r3)
	  lbz       r6, 0x1(r4)
	  stb       r6, 0x2B(r3)
	  lbz       r6, 0x2(r4)
	  stb       r6, 0x2C(r3)
	  lbz       r6, -0x7A50(r2)
	  stb       r6, 0x2E(r3)
	  lbz       r6, 0x1(r4)
	  stb       r6, 0x2F(r3)
	  lbz       r6, 0x2(r4)
	  stb       r6, 0x30(r3)
	  lbz       r6, -0x7A50(r2)
	  stb       r6, 0x32(r3)
	  lbz       r6, 0x1(r4)
	  stb       r6, 0x33(r3)
	  lbz       r4, 0x2(r4)
	  stb       r4, 0x34(r3)
	  sth       r5, 0x36(r3)
	  sth       r0, 0x38(r3)
	  sth       r7, 0x3A(r3)
	  sth       r22, 0x3C(r3)
	  sth       r5, 0x3E(r3)
	  sth       r0, 0x40(r3)
	  sth       r7, 0x42(r3)
	  sth       r22, 0x44(r3)
	  sth       r5, 0x46(r3)
	  li        r23, 0x1
	  li        r24, 0xC0
	  li        r25, 0xC1
	  sth       r0, 0x48(r3)
	  li        r26, 0xC2
	  li        r27, 0xC3
	  li        r28, 0xC4
	  sth       r7, 0x4A(r3)
	  li        r29, 0xC5
	  li        r30, 0xC6
	  li        r31, 0xC7
	  sth       r22, 0x4C(r3)
	  li        r12, 0xC8
	  li        r11, 0xC9
	  li        r10, 0xCA
	  sth       r5, 0x4E(r3)
	  li        r9, 0xCB
	  li        r8, 0xCC
	  li        r6, 0xCD
	  sth       r0, 0x50(r3)
	  li        r5, 0xCE
	  li        r4, 0xCF
	  li        r0, 0x2
	  sth       r7, 0x52(r3)
	  mr        r21, r3
	  lwz       r7, -0x7A3C(r2)
	  sth       r22, 0x54(r3)
	  stb       r23, 0x56(r3)
	  stb       r24, 0x57(r3)
	  stb       r25, 0x5B(r3)
	  stb       r26, 0x5F(r3)
	  stb       r27, 0x63(r3)
	  stb       r28, 0x67(r3)
	  stb       r29, 0x6B(r3)
	  stb       r30, 0x6F(r3)
	  stb       r31, 0x73(r3)
	  stb       r12, 0x77(r3)
	  stb       r11, 0x7B(r3)
	  stb       r10, 0x7F(r3)
	  stb       r9, 0x83(r3)
	  stb       r8, 0x87(r3)
	  stb       r6, 0x8B(r3)
	  stb       r5, 0x8F(r3)
	  stb       r4, 0x93(r3)
	  mtctr     r0

	.loc_0x1E4:
	  stw       r7, 0x8(r1)
	  lbz       r6, 0x8(r1)
	  lbz       r5, 0x9(r1)
	  stb       r6, 0x98(r21)
	  lbz       r4, 0xA(r1)
	  lbz       r0, 0xB(r1)
	  stb       r5, 0x99(r21)
	  stb       r4, 0x9A(r21)
	  stw       r7, 0x8(r1)
	  stb       r6, 0xC(r1)
	  lbz       r6, 0x8(r1)
	  stb       r0, 0x9B(r21)
	  stb       r5, 0xD(r1)
	  lbz       r5, 0x9(r1)
	  stb       r6, 0x9C(r21)
	  stb       r4, 0xE(r1)
	  lbz       r4, 0xA(r1)
	  stb       r5, 0x9D(r21)
	  stb       r0, 0xF(r1)
	  lbz       r0, 0xB(r1)
	  stb       r4, 0x9E(r21)
	  stb       r0, 0x9F(r21)
	  addi      r21, r21, 0x8
	  stb       r6, 0xC(r1)
	  stb       r5, 0xD(r1)
	  stb       r4, 0xE(r1)
	  stb       r0, 0xF(r1)
	  bdnz+     .loc_0x1E4
	  li        r7, 0xFF
	  lis       r4, 0x8048
	  stb       r7, 0xA8(r3)
	  subi      r6, r2, 0x7A34
	  li        r0, 0x4
	  mr        r5, r3
	  stb       r7, 0xB0(r3)
	  subi      r4, r4, 0x7944
	  stb       r7, 0xA9(r3)
	  stb       r7, 0xB1(r3)
	  stb       r7, 0xAA(r3)
	  stb       r7, 0xB2(r3)
	  stb       r7, 0xAB(r3)
	  stb       r7, 0xB3(r3)
	  stb       r7, 0xAC(r3)
	  stb       r7, 0xB4(r3)
	  stb       r7, 0xAD(r3)
	  stb       r7, 0xB5(r3)
	  stb       r7, 0xAE(r3)
	  stb       r7, 0xB6(r3)
	  stb       r7, 0xAF(r3)
	  stb       r7, 0xB7(r3)
	  lbz       r7, 0x1(r6)
	  lbz       r9, 0x2(r6)
	  lbz       r8, -0x7A34(r2)
	  rlwinm    r7,r7,4,20,27
	  rlwinm    r9,r9,2,0,29
	  lbz       r10, 0x3(r6)
	  add       r7, r7, r9
	  rlwinm    r8,r8,6,0,25
	  add       r7, r7, r10
	  add       r7, r8, r7
	  stb       r7, 0xB8(r3)
	  lbz       r7, 0x1(r6)
	  lbz       r9, 0x2(r6)
	  lbz       r8, -0x7A34(r2)
	  rlwinm    r7,r7,4,20,27
	  rlwinm    r9,r9,2,0,29
	  lbz       r10, 0x3(r6)
	  add       r7, r7, r9
	  rlwinm    r8,r8,6,0,25
	  add       r7, r7, r10
	  add       r7, r8, r7
	  stb       r7, 0xB9(r3)
	  lbz       r7, 0x1(r6)
	  lbz       r9, 0x2(r6)
	  lbz       r8, -0x7A34(r2)
	  rlwinm    r7,r7,4,20,27
	  rlwinm    r9,r9,2,0,29
	  lbz       r10, 0x3(r6)
	  add       r7, r7, r9
	  rlwinm    r8,r8,6,0,25
	  add       r7, r7, r10
	  add       r7, r8, r7
	  stb       r7, 0xBA(r3)
	  lbz       r9, 0x2(r6)
	  lbz       r7, 0x1(r6)
	  lbz       r8, -0x7A34(r2)
	  rlwinm    r9,r9,2,0,29
	  rlwinm    r7,r7,4,0,27
	  lbz       r10, 0x3(r6)
	  add       r6, r7, r9
	  rlwinm    r7,r8,6,0,25
	  add       r6, r6, r10
	  add       r6, r7, r6
	  stb       r6, 0xBB(r3)
	  mtctr     r0

	.loc_0x360:
	  lwz       r6, 0x4(r4)
	  lwz       r0, 0x8(r4)
	  stw       r6, 0x14(r1)
	  lwz       r6, 0x0(r4)
	  stw       r0, 0x18(r1)
	  lbz       r0, 0x17(r1)
	  stw       r6, 0x10(r1)
	  lbz       r6, 0x18(r1)
	  rlwinm    r0,r0,21,0,10
	  lbz       r7, 0x16(r1)
	  rlwinm    r6,r6,22,0,9
	  lbz       r8, 0x13(r1)
	  lbz       r9, 0x15(r1)
	  rlwinm    r7,r7,20,0,11
	  or        r0, r6, r0
	  lbz       r10, 0x14(r1)
	  lbz       r11, 0x12(r1)
	  rlwinm    r6,r8,16,0,15
	  or        r0, r7, r0
	  lbz       r12, 0x11(r1)
	  rlwinm    r7,r9,11,0,20
	  rlwinm    r8,r10,8,0,23
	  or        r0, r6, r0
	  rlwinm    r6,r11,4,0,27
	  or        r0, r7, r0
	  rlwinm    r7,r12,2,0,29
	  or        r0, r8, r0
	  lbz       r8, 0x10(r1)
	  or        r0, r6, r0
	  or        r0, r7, r0
	  or        r0, r8, r0
	  stw       r0, 0xBC(r5)
	  lwz       r6, 0x4(r4)
	  lwz       r0, 0x8(r4)
	  stw       r6, 0x14(r1)
	  lwz       r6, 0x0(r4)
	  stw       r0, 0x18(r1)
	  lbz       r0, 0x17(r1)
	  stw       r6, 0x10(r1)
	  lbz       r6, 0x18(r1)
	  rlwinm    r0,r0,21,0,10
	  lbz       r7, 0x16(r1)
	  rlwinm    r6,r6,22,0,9
	  lbz       r8, 0x13(r1)
	  lbz       r9, 0x15(r1)
	  rlwinm    r7,r7,20,0,11
	  or        r0, r6, r0
	  lbz       r10, 0x14(r1)
	  lbz       r11, 0x12(r1)
	  rlwinm    r6,r8,16,0,15
	  or        r0, r7, r0
	  lbz       r12, 0x11(r1)
	  rlwinm    r7,r9,11,0,20
	  rlwinm    r8,r10,8,0,23
	  or        r0, r6, r0
	  rlwinm    r6,r11,4,0,27
	  or        r0, r7, r0
	  rlwinm    r7,r12,2,0,29
	  or        r0, r8, r0
	  lbz       r8, 0x10(r1)
	  or        r0, r6, r0
	  or        r0, r7, r0
	  or        r0, r8, r0
	  stw       r0, 0xC0(r5)
	  addi      r5, r5, 0x8
	  bdnz+     .loc_0x360
	  li        r0, 0
	  stw       r0, 0xFC(r3)
	  stw       r0, 0x100(r3)
	  stw       r0, 0x104(r3)
	  stw       r0, 0x108(r3)
	  stw       r0, 0x10C(r3)
	  stw       r0, 0x110(r3)
	  stw       r0, 0x114(r3)
	  stw       r0, 0x118(r3)
	  stw       r0, 0x11C(r3)
	  stb       r0, 0x121(r3)
	  lmw       r21, 0x24(r1)
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004E1A4
 * Size:	0000E0
 */
void J2DTevBlock8::prepareTexture(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  rlwinm    r31,r4,0,24,31
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0xB0

	.loc_0x2C:
	  rlwinm    r0,r29,0,24,31
	  cmplwi    r0, 0x8
	  blt-      .loc_0x40
	  li        r3, 0
	  b         .loc_0xC0

	.loc_0x40:
	  rlwinm    r3,r29,2,22,29
	  addi      r30, r3, 0xDC
	  lwzx      r0, r28, r30
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  li        r3, 0x40
	  bl        -0x2A358
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  lbz       r4, 0x3B(r3)
	  li        r0, 0
	  rlwinm    r4,r4,0,30,30
	  stb       r4, 0x3B(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x20(r3)

	.loc_0x7C:
	  stwx      r3, r28, r30
	  lwzx      r0, r28, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x94
	  li        r3, 0
	  b         .loc_0xC0

	.loc_0x94:
	  rlwinm    r0,r29,0,24,31
	  li        r3, 0x1
	  lbz       r4, 0x120(r28)
	  slw       r0, r3, r0
	  or        r0, r4, r0
	  stb       r0, 0x120(r28)

	.loc_0xAC:
	  addi      r29, r29, 0x1

	.loc_0xB0:
	  rlwinm    r0,r29,0,24,31
	  cmplw     r0, r31
	  blt+      .loc_0x2C
	  li        r3, 0x1

	.loc_0xC0:
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
 * Address:	8004E284
 * Size:	0003C8
 */
void J2DTevBlock8::insertTexture(unsigned long, const ResTIMG*, JUTPalette*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r4
	  cmplwi    r26, 0x8
	  mr        r25, r3
	  mr        r27, r5
	  mr        r28, r6
	  bge-      .loc_0x30
	  cmplwi    r27, 0
	  bne-      .loc_0x38

	.loc_0x30:
	  li        r3, 0
	  b         .loc_0x3B4

	.loc_0x38:
	  li        r30, 0
	  b         .loc_0x64

	.loc_0x40:
	  rlwinm    r3,r30,2,22,29
	  addi      r0, r3, 0xDC
	  lwzx      r3, r25, r0
	  cmplwi    r3, 0
	  beq-      .loc_0x70
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  addi      r30, r30, 0x1

	.loc_0x64:
	  rlwinm    r0,r30,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x40

	.loc_0x70:
	  rlwinm    r0,r30,0,24,31
	  cmplw     r0, r26
	  bge-      .loc_0x84
	  li        r3, 0
	  b         .loc_0x3B4

	.loc_0x84:
	  cmplwi    r0, 0x8
	  bne-      .loc_0x94
	  li        r3, 0
	  b         .loc_0x3B4

	.loc_0x94:
	  lbz       r0, 0x8(r27)
	  li        r29, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x154
	  cmplwi    r28, 0
	  bne-      .loc_0x154
	  li        r0, 0x7
	  mr        r5, r25
	  li        r7, 0
	  mtctr     r0
	  li        r3, 0x1

	.loc_0xC0:
	  lwz       r6, 0xDC(r5)
	  cmplwi    r6, 0
	  beq-      .loc_0x114
	  lwz       r4, 0x20(r6)
	  cmplwi    r4, 0
	  beq-      .loc_0x114
	  lbz       r0, 0x8(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x114
	  lbz       r4, 0x3A(r6)
	  li        r0, 0
	  cmpwi     r4, 0x10
	  blt-      .loc_0xF8
	  li        r0, 0x10

	.loc_0xF8:
	  sub       r0, r4, r0
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0x8
	  bge-      .loc_0x114
	  slw       r0, r3, r0
	  or        r0, r7, r0
	  rlwinm    r7,r0,0,24,31

	.loc_0x114:
	  addi      r5, r5, 0x4
	  bdnz+     .loc_0xC0
	  rlwinm    r4,r7,0,24,31
	  li        r5, 0
	  li        r3, 0x1
	  b         .loc_0x148

	.loc_0x12C:
	  rlwinm    r0,r5,0,24,31
	  slw       r0, r3, r0
	  and.      r0, r4, r0
	  bne-      .loc_0x144
	  mr        r29, r5
	  b         .loc_0x154

	.loc_0x144:
	  addi      r5, r5, 0x1

	.loc_0x148:
	  rlwinm    r0,r5,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x12C

	.loc_0x154:
	  rlwinm    r0,r30,2,22,29
	  add       r3, r25, r0
	  lwz       r31, 0xDC(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0x250
	  li        r3, 0x40
	  bl        -0x2A54C
	  mr.       r31, r3
	  beq-      .loc_0x198
	  li        r0, 0
	  mr        r4, r27
	  stw       r0, 0x28(r31)
	  mr        r5, r29
	  bl        -0x1B388
	  lbz       r0, 0x3B(r31)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r31)

	.loc_0x198:
	  cmplwi    r31, 0
	  bne-      .loc_0x1A8
	  li        r3, 0
	  b         .loc_0x3B4

	.loc_0x1A8:
	  cmplwi    r28, 0
	  beq-      .loc_0x1C0
	  mr        r3, r31
	  mr        r4, r27
	  mr        r5, r28
	  bl        -0x1B210

	.loc_0x1C0:
	  li        r8, 0x7
	  b         .loc_0x204

	.loc_0x1C8:
	  rlwinm    r3,r4,2,0,29
	  rlwinm    r0,r8,2,22,29
	  add       r6, r25, r3
	  rlwinm    r4,r4,1,0,30
	  lwz       r5, 0xD8(r6)
	  add       r7, r25, r0
	  rlwinm    r3,r8,1,23,30
	  addi      r4, r4, 0x2
	  stw       r5, 0xDC(r7)
	  addi      r0, r3, 0x4
	  subi      r8, r8, 0x1
	  lwz       r3, 0xF8(r6)
	  stw       r3, 0xFC(r7)
	  lhzx      r3, r25, r4
	  sthx      r3, r25, r0

	.loc_0x204:
	  rlwinm    r4,r8,0,24,31
	  cmplw     r4, r26
	  bgt+      .loc_0x1C8
	  rlwinm    r0,r26,2,0,29
	  mr        r3, r25
	  add       r5, r25, r0
	  rlwinm    r4,r26,0,24,31
	  stw       r31, 0xDC(r5)
	  li        r5, 0x1
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lbz       r3, 0x120(r25)
	  slw       r0, r0, r26
	  or        r0, r3, r0
	  stb       r0, 0x120(r25)
	  b         .loc_0x38C

	.loc_0x250:
	  cmplwi    r28, 0
	  bne-      .loc_0x26C
	  mr        r3, r31
	  mr        r4, r27
	  mr        r5, r29
	  bl        -0x1B464
	  b         .loc_0x27C

	.loc_0x26C:
	  mr        r3, r31
	  mr        r4, r27
	  mr        r5, r28
	  bl        -0x1B2CC

	.loc_0x27C:
	  lbz       r0, 0x120(r25)
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  rlwinm    r11,r0,0,31,31
	  rlwinm    r10,r0,31,31,31
	  rlwinm    r9,r0,30,31,31
	  rlwinm    r8,r0,29,31,31
	  rlwinm    r7,r0,28,31,31
	  rlwinm    r6,r0,27,31,31
	  rlwinm    r5,r0,26,31,31
	  rlwinm    r0,r0,25,31,31
	  stb       r11, 0x8(r1)
	  stb       r10, 0x9(r1)
	  stb       r9, 0xA(r1)
	  stb       r8, 0xB(r1)
	  stb       r7, 0xC(r1)
	  stb       r6, 0xD(r1)
	  stb       r5, 0xE(r1)
	  stb       r0, 0xF(r1)
	  b         .loc_0x318

	.loc_0x2CC:
	  rlwinm    r5,r8,2,0,29
	  rlwinm    r0,r3,2,22,29
	  add       r9, r25, r5
	  rlwinm    r6,r8,1,0,30
	  lwz       r7, 0xD8(r9)
	  add       r10, r25, r0
	  subi      r0, r8, 0x1
	  rlwinm    r5,r3,1,23,30
	  stw       r7, 0xDC(r10)
	  rlwinm    r8,r3,0,24,31
	  lbzx      r0, r4, r0
	  addi      r6, r6, 0x2
	  lwz       r7, 0xF8(r9)
	  addi      r5, r5, 0x4
	  stbx      r0, r4, r8
	  subi      r3, r3, 0x1
	  stw       r7, 0xFC(r10)
	  lhzx      r0, r25, r6
	  sthx      r0, r25, r5

	.loc_0x318:
	  rlwinm    r8,r3,0,24,31
	  cmplw     r8, r26
	  bgt+      .loc_0x2CC
	  rlwinm    r3,r26,2,0,29
	  li        r0, 0
	  add       r3, r25, r3
	  addi      r5, r1, 0x8
	  stw       r31, 0xDC(r3)
	  li        r7, 0
	  li        r3, 0x1
	  stb       r0, 0x120(r25)
	  b         .loc_0x36C

	.loc_0x348:
	  rlwinm    r6,r7,0,24,31
	  lbzx      r0, r5, r6
	  cmplwi    r0, 0
	  beq-      .loc_0x368
	  lbz       r4, 0x120(r25)
	  slw       r0, r3, r6
	  or        r0, r4, r0
	  stb       r0, 0x120(r25)

	.loc_0x368:
	  addi      r7, r7, 0x1

	.loc_0x36C:
	  rlwinm    r0,r7,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x348
	  li        r0, 0x1
	  lbz       r3, 0x120(r25)
	  slw       r0, r0, r26
	  or        r0, r3, r0
	  stb       r0, 0x120(r25)

	.loc_0x38C:
	  rlwinm    r3,r26,2,0,29
	  rlwinm    r0,r26,1,0,30
	  add       r4, r25, r3
	  li        r5, 0
	  lis       r3, 0x1
	  stw       r5, 0xFC(r4)
	  subi      r4, r3, 0x1
	  add       r3, r25, r0
	  sth       r4, 0x4(r3)
	  li        r3, 0x1

	.loc_0x3B4:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004E64C
 * Size:	000198
 */
void J2DTevBlock8::insertTexture(unsigned long, JUTTexture*)
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
	  cmplwi    r30, 0x8
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bge-      .loc_0x34
	  cmplwi    r31, 0
	  bne-      .loc_0x3C

	.loc_0x34:
	  li        r3, 0
	  b         .loc_0x17C

	.loc_0x3C:
	  li        r4, 0
	  b         .loc_0x68

	.loc_0x44:
	  rlwinm    r3,r4,2,22,29
	  addi      r0, r3, 0xDC
	  lwzx      r3, r29, r0
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  addi      r4, r4, 0x1

	.loc_0x68:
	  rlwinm    r0,r4,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x44

	.loc_0x74:
	  rlwinm    r0,r4,0,24,31
	  cmplw     r0, r30
	  bge-      .loc_0x88
	  li        r3, 0
	  b         .loc_0x17C

	.loc_0x88:
	  cmplwi    r0, 0x8
	  bne-      .loc_0x98
	  li        r3, 0
	  b         .loc_0x17C

	.loc_0x98:
	  lwz       r3, 0xF8(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  lbz       r0, 0x120(r29)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0xC4
	  li        r4, 0x1
	  bl        -0x1B6FC

	.loc_0xC4:
	  lbz       r0, 0x120(r29)
	  rlwinm    r0,r0,0,25,31
	  stb       r0, 0x120(r29)

	.loc_0xD0:
	  li        r8, 0x7
	  b         .loc_0x114

	.loc_0xD8:
	  rlwinm    r3,r4,2,0,29
	  rlwinm    r0,r8,2,22,29
	  add       r6, r29, r3
	  rlwinm    r4,r4,1,0,30
	  lwz       r5, 0xD8(r6)
	  add       r7, r29, r0
	  rlwinm    r3,r8,1,23,30
	  addi      r4, r4, 0x2
	  stw       r5, 0xDC(r7)
	  addi      r0, r3, 0x4
	  subi      r8, r8, 0x1
	  lwz       r3, 0xF8(r6)
	  stw       r3, 0xFC(r7)
	  lhzx      r3, r29, r4
	  sthx      r3, r29, r0

	.loc_0x114:
	  rlwinm    r4,r8,0,24,31
	  cmplw     r4, r30
	  bgt+      .loc_0xD8
	  rlwinm    r3,r30,2,0,29
	  rlwinm    r0,r30,1,0,30
	  add       r5, r29, r3
	  lis       r3, 0x1
	  stw       r31, 0xDC(r5)
	  li        r4, 0
	  subi      r7, r3, 0x1
	  add       r6, r29, r0
	  stw       r4, 0xFC(r5)
	  mr        r3, r29
	  rlwinm    r4,r30,0,24,31
	  li        r5, 0x1
	  sth       r7, 0x4(r6)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lbz       r4, 0x120(r29)
	  slw       r0, r0, r30
	  li        r3, 0x1
	  andc      r0, r4, r0
	  stb       r0, 0x120(r29)

	.loc_0x17C:
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
 * Address:	8004E7E4
 * Size:	0002E4
 */
void J2DTevBlock8::setTexture(unsigned long, const ResTIMG*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r4
	  cmplwi    r26, 0x8
	  mr        r25, r3
	  mr        r27, r5
	  blt-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x2D0

	.loc_0x2C:
	  cmplwi    r27, 0
	  li        r28, 0
	  beq-      .loc_0x160
	  lbz       r0, 0x8(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x160
	  li        r0, 0x4
	  mr        r4, r25
	  li        r6, 0
	  li        r7, 0
	  mtctr     r0

	.loc_0x58:
	  cmplw     r7, r26
	  beq-      .loc_0xB8
	  lwz       r5, 0xDC(r4)
	  cmplwi    r5, 0
	  beq-      .loc_0xB8
	  lwz       r3, 0x20(r5)
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  lbz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  lbz       r3, 0x3A(r5)
	  li        r0, 0
	  cmpwi     r3, 0x10
	  blt-      .loc_0x98
	  li        r0, 0x10

	.loc_0x98:
	  sub       r0, r3, r0
	  rlwinm    r3,r0,0,24,31
	  cmplwi    r3, 0x8
	  bge-      .loc_0xB8
	  li        r0, 0x1
	  slw       r0, r0, r3
	  or        r0, r6, r0
	  rlwinm    r6,r0,0,24,31

	.loc_0xB8:
	  addi      r7, r7, 0x1
	  cmplw     r7, r26
	  beq-      .loc_0x11C
	  lwz       r5, 0xE0(r4)
	  cmplwi    r5, 0
	  beq-      .loc_0x11C
	  lwz       r3, 0x20(r5)
	  cmplwi    r3, 0
	  beq-      .loc_0x11C
	  lbz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x11C
	  lbz       r3, 0x3A(r5)
	  li        r0, 0
	  cmpwi     r3, 0x10
	  blt-      .loc_0xFC
	  li        r0, 0x10

	.loc_0xFC:
	  sub       r0, r3, r0
	  rlwinm    r3,r0,0,24,31
	  cmplwi    r3, 0x8
	  bge-      .loc_0x11C
	  li        r0, 0x1
	  slw       r0, r0, r3
	  or        r0, r6, r0
	  rlwinm    r6,r0,0,24,31

	.loc_0x11C:
	  addi      r4, r4, 0x8
	  addi      r7, r7, 0x1
	  bdnz+     .loc_0x58
	  rlwinm    r4,r6,0,24,31
	  li        r5, 0
	  li        r3, 0x1
	  b         .loc_0x154

	.loc_0x138:
	  rlwinm    r0,r5,0,24,31
	  slw       r0, r3, r0
	  and.      r0, r4, r0
	  bne-      .loc_0x150
	  mr        r28, r5
	  b         .loc_0x160

	.loc_0x150:
	  addi      r5, r5, 0x1

	.loc_0x154:
	  rlwinm    r0,r5,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x138

	.loc_0x160:
	  rlwinm    r29,r26,2,0,29
	  add       r31, r25, r29
	  lwz       r3, 0xDC(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0x1F4
	  cmplwi    r27, 0
	  beq-      .loc_0x1DC
	  li        r3, 0x40
	  bl        -0x2AAC0
	  mr.       r30, r3
	  beq-      .loc_0x1AC
	  li        r0, 0
	  mr        r4, r27
	  stw       r0, 0x28(r30)
	  mr        r5, r28
	  bl        -0x1B8FC
	  lbz       r0, 0x3B(r30)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r30)

	.loc_0x1AC:
	  stw       r30, 0xDC(r31)
	  lwz       r0, 0xDC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C4
	  li        r3, 0
	  b         .loc_0x2D0

	.loc_0x1C4:
	  li        r0, 0x1
	  lbz       r3, 0x120(r25)
	  slw       r0, r0, r26
	  or        r0, r3, r0
	  stb       r0, 0x120(r25)
	  b         .loc_0x2A4

	.loc_0x1DC:
	  li        r0, 0x1
	  lbz       r3, 0x120(r25)
	  slw       r0, r0, r26
	  andc      r0, r3, r0
	  stb       r0, 0x120(r25)
	  b         .loc_0x2A4

	.loc_0x1F4:
	  li        r0, 0x1
	  lbz       r4, 0x120(r25)
	  slw       r30, r0, r26
	  and.      r0, r4, r30
	  beq-      .loc_0x240
	  cmplwi    r27, 0
	  beq-      .loc_0x220
	  mr        r4, r27
	  mr        r5, r28
	  bl        -0x1B978
	  b         .loc_0x2A4

	.loc_0x220:
	  li        r4, 0x1
	  bl        -0x1B9F8
	  li        r0, 0
	  stw       r0, 0xDC(r31)
	  lbz       r0, 0x120(r25)
	  andc      r0, r0, r30
	  stb       r0, 0x120(r25)
	  b         .loc_0x2A4

	.loc_0x240:
	  li        r0, 0
	  cmplwi    r27, 0
	  stw       r0, 0xDC(r31)
	  beq-      .loc_0x2A4
	  li        r3, 0x40
	  bl        -0x2AB94
	  mr.       r28, r3
	  beq-      .loc_0x280
	  li        r0, 0
	  mr        r4, r27
	  stw       r0, 0x28(r28)
	  li        r5, 0
	  bl        -0x1B9D0
	  lbz       r0, 0x3B(r28)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r28)

	.loc_0x280:
	  stw       r28, 0xDC(r31)
	  lwz       r0, 0xDC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x298
	  li        r3, 0
	  b         .loc_0x2D0

	.loc_0x298:
	  lbz       r0, 0x120(r25)
	  or        r0, r0, r30
	  stb       r0, 0x120(r25)

	.loc_0x2A4:
	  add       r27, r25, r29
	  lwz       r3, 0xFC(r27)
	  bl        -0x2A9DC
	  li        r4, 0
	  rlwinm    r0,r26,1,0,30
	  lis       r3, 0x1
	  stw       r4, 0xFC(r27)
	  subi      r4, r3, 0x1
	  add       r3, r25, r0
	  sth       r4, 0x4(r3)
	  li        r3, 0x1

	.loc_0x2D0:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004EAC8
 * Size:	0000A8
 */
void J2DTevBlock8::setTexture(unsigned long, JUTTexture*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r4
	  cmplwi    r28, 0x8
	  mr        r27, r3
	  mr        r29, r5
	  blt-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x94

	.loc_0x2C:
	  li        r0, 0x1
	  lbz       r3, 0x120(r27)
	  slw       r30, r0, r28
	  and.      r0, r3, r30
	  beq-      .loc_0x54
	  rlwinm    r0,r28,2,0,29
	  li        r4, 0x1
	  add       r3, r27, r0
	  lwz       r3, 0xDC(r3)
	  bl        -0x1BB08

	.loc_0x54:
	  rlwinm    r0,r28,2,0,29
	  add       r31, r27, r0
	  stw       r29, 0xDC(r31)
	  lbz       r0, 0x120(r27)
	  andc      r0, r0, r30
	  stb       r0, 0x120(r27)
	  lwz       r3, 0xFC(r31)
	  bl        -0x2AA84
	  li        r4, 0
	  rlwinm    r0,r28,1,0,30
	  lis       r3, 0x1
	  stw       r4, 0xFC(r31)
	  subi      r4, r3, 0x1
	  add       r3, r27, r0
	  sth       r4, 0x4(r3)
	  li        r3, 0x1

	.loc_0x94:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004EB70
 * Size:	000210
 */
void J2DTevBlock8::removeTexture(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  cmplwi    r31, 0x8
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  blt-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x1F4

	.loc_0x30:
	  li        r0, 0x1
	  lbz       r3, 0x120(r30)
	  slw       r0, r0, r31
	  and.      r0, r3, r0
	  beq-      .loc_0x58
	  rlwinm    r0,r31,2,0,29
	  li        r4, 0x1
	  add       r3, r30, r0
	  lwz       r3, 0xDC(r3)
	  bl        -0x1BBB4

	.loc_0x58:
	  rlwinm    r29,r31,2,0,29
	  add       r3, r30, r29
	  lwz       r3, 0xFC(r3)
	  bl        -0x2AB20
	  cmplwi    r31, 0x7
	  mr        r5, r31
	  bge-      .loc_0x1BC
	  subfic    r0, r31, 0x7
	  cmplwi    r0, 0x8
	  ble-      .loc_0x178
	  subfic    r0, r31, 0x6
	  rlwinm    r4,r31,1,0,30
	  rlwinm    r0,r0,29,3,31
	  add       r3, r30, r29
	  add       r4, r30, r4
	  mtctr     r0
	  lis       r6, 0
	  subi      r6, r6, 0x1
	  cmplw     r31, r6
	  bge-      .loc_0x178

	.loc_0xA8:
	  lwz       r0, 0xE0(r3)
	  addi      r5, r5, 0x8
	  stw       r0, 0xDC(r3)
	  lwz       r0, 0x100(r3)
	  stw       r0, 0xFC(r3)
	  lhz       r0, 0x6(r4)
	  sth       r0, 0x4(r4)
	  lwz       r0, 0xE4(r3)
	  stw       r0, 0xE0(r3)
	  lwz       r0, 0x104(r3)
	  stw       r0, 0x100(r3)
	  lhz       r0, 0x8(r4)
	  sth       r0, 0x6(r4)
	  lwz       r0, 0xE8(r3)
	  stw       r0, 0xE4(r3)
	  lwz       r0, 0x108(r3)
	  stw       r0, 0x104(r3)
	  lhz       r0, 0xA(r4)
	  sth       r0, 0x8(r4)
	  lwz       r0, 0xEC(r3)
	  stw       r0, 0xE8(r3)
	  lwz       r0, 0x10C(r3)
	  stw       r0, 0x108(r3)
	  lhz       r0, 0xC(r4)
	  sth       r0, 0xA(r4)
	  lwz       r0, 0xF0(r3)
	  stw       r0, 0xEC(r3)
	  lwz       r0, 0x110(r3)
	  stw       r0, 0x10C(r3)
	  lhz       r0, 0xE(r4)
	  sth       r0, 0xC(r4)
	  lwz       r0, 0xF4(r3)
	  stw       r0, 0xF0(r3)
	  lwz       r0, 0x114(r3)
	  stw       r0, 0x110(r3)
	  lhz       r0, 0x10(r4)
	  sth       r0, 0xE(r4)
	  lwz       r0, 0xF8(r3)
	  stw       r0, 0xF4(r3)
	  lwz       r0, 0x118(r3)
	  stw       r0, 0x114(r3)
	  lhz       r0, 0x12(r4)
	  sth       r0, 0x10(r4)
	  lwz       r0, 0xFC(r3)
	  stw       r0, 0xF8(r3)
	  lwz       r0, 0x11C(r3)
	  stw       r0, 0x118(r3)
	  addi      r3, r3, 0x20
	  lhz       r0, 0x14(r4)
	  sth       r0, 0x12(r4)
	  addi      r4, r4, 0x10
	  bdnz+     .loc_0xA8

	.loc_0x178:
	  rlwinm    r4,r5,2,0,29
	  rlwinm    r3,r5,1,0,30
	  subfic    r0, r5, 0x7
	  add       r4, r30, r4
	  add       r3, r30, r3
	  mtctr     r0
	  cmplwi    r5, 0x7
	  bge-      .loc_0x1BC

	.loc_0x198:
	  lwz       r0, 0xE0(r4)
	  stw       r0, 0xDC(r4)
	  lwz       r0, 0x100(r4)
	  stw       r0, 0xFC(r4)
	  addi      r4, r4, 0x4
	  lhz       r0, 0x6(r3)
	  sth       r0, 0x4(r3)
	  addi      r3, r3, 0x2
	  bdnz+     .loc_0x198

	.loc_0x1BC:
	  li        r5, 0
	  lis       r3, 0x1
	  stw       r5, 0xF8(r30)
	  subi      r0, r3, 0x1
	  mr        r3, r30
	  rlwinm    r4,r31,0,24,31
	  stw       r5, 0x118(r30)
	  li        r5, 0
	  sth       r0, 0x12(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1

	.loc_0x1F4:
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
 * Address:	8004ED80
 * Size:	0000B4
 */
void J2DTevBlock8::setFont(ResFONT*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bne-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x98

	.loc_0x2C:
	  li        r3, 0x70
	  bl        -0x2AF0C
	  mr.       r31, r3
	  beq-      .loc_0x4C
	  mr        r4, r30
	  li        r5, 0
	  bl        -0x1DBF8
	  mr        r31, r3

	.loc_0x4C:
	  cmplwi    r31, 0
	  bne-      .loc_0x5C
	  li        r3, 0
	  b         .loc_0x98

	.loc_0x5C:
	  lbz       r0, 0x121(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  lwz       r3, 0x11C(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x88:
	  stw       r31, 0x11C(r29)
	  li        r0, 0x1
	  li        r3, 0x1
	  stb       r0, 0x121(r29)

	.loc_0x98:
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
 * Address:	8004EE34
 * Size:	00007C
 */
void J2DTevBlock8::setFont(JUTFont*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x28
	  li        r3, 0
	  b         .loc_0x64

	.loc_0x28:
	  lbz       r0, 0x121(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  lwz       r3, 0x11C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  stw       r31, 0x11C(r30)
	  li        r0, 0
	  li        r3, 0x1
	  stb       r0, 0x121(r30)

	.loc_0x64:
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
 * Address:	8004EEB0
 * Size:	0000D0
 */
void J2DTevBlock8::setPalette(unsigned long, const ResTLUT*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r4
	  cmplwi    r27, 0x8
	  mr        r26, r3
	  mr        r28, r5
	  blt-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0xBC

	.loc_0x2C:
	  cmplwi    r28, 0
	  beq-      .loc_0xA0
	  rlwinm    r29,r27,2,0,29
	  add       r30, r26, r29
	  lwz       r3, 0xFC(r30)
	  cmplwi    r3, 0
	  bne-      .loc_0x7C
	  li        r3, 0x18
	  bl        -0x2B058
	  mr.       r31, r3
	  beq-      .loc_0x64
	  mr        r4, r27
	  mr        r5, r28
	  bl        -0x2004C

	.loc_0x64:
	  stw       r31, 0xFC(r30)
	  lwz       r0, 0xFC(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x84
	  li        r3, 0
	  b         .loc_0xBC

	.loc_0x7C:
	  li        r4, 0
	  bl        -0x2006C

	.loc_0x84:
	  add       r3, r26, r29
	  lwz       r3, 0xDC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  lwz       r4, 0xFC(r30)
	  bl        -0x1BBAC
	  b         .loc_0xB8

	.loc_0xA0:
	  rlwinm    r0,r27,2,0,29
	  add       r29, r26, r0
	  lwz       r3, 0xFC(r29)
	  bl        -0x2AEA8
	  li        r0, 0
	  stw       r0, 0xFC(r29)

	.loc_0xB8:
	  li        r3, 0x1

	.loc_0xBC:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004EF80
 * Size:	00006C
 */
void J2DTevBlock8::shiftDeleteFlag(unsigned char, bool)
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x34
	  rlwinm    r0,r4,0,24,31
	  li        r4, 0x1
	  slw       r4, r4, r0
	  lbz       r5, 0x120(r3)
	  subi      r4, r4, 0x1
	  andc      r0, r5, r4
	  and       r4, r5, r4
	  rlwinm    r0,r0,1,0,30
	  or        r0, r4, r0
	  stb       r0, 0x120(r3)
	  blr

	.loc_0x34:
	  rlwinm    r6,r4,0,24,31
	  li        r5, 0x1
	  addi      r0, r6, 0x1
	  lbz       r7, 0x120(r3)
	  slw       r4, r5, r0
	  slw       r5, r5, r6
	  subi      r0, r4, 0x1
	  subi      r4, r5, 0x1
	  andc      r0, r7, r0
	  and       r4, r7, r4
	  srawi     r0, r0, 0x1
	  or        r0, r4, r0
	  stb       r0, 0x120(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004EFEC
 * Size:	0002E8
 */
void J2DTevBlock8::setGX()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  stw       r28, 0x20(r1)
	  li        r28, 0

	.loc_0x24:
	  mr        r3, r29
	  mr        r4, r28
	  lwz       r12, 0x0(r29)
	  mr        r5, r28
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x8
	  blt+      .loc_0x24
	  mr        r30, r29
	  li        r28, 0
	  b         .loc_0x74

	.loc_0x58:
	  lbz       r4, 0x16(r30)
	  mr        r3, r28
	  lbz       r5, 0x17(r30)
	  lbz       r6, 0x18(r30)
	  bl        0x999C8
	  addi      r30, r30, 0x4
	  addi      r28, r28, 0x1

	.loc_0x74:
	  lbz       r0, 0x56(r29)
	  cmpw      r28, r0
	  blt+      .loc_0x58
	  mr        r31, r29
	  addi      r30, r1, 0xC
	  li        r28, 0

	.loc_0x8C:
	  lwz       r4, 0x36(r31)
	  cmpwi     r28, 0x3
	  lwz       r0, 0x3A(r31)
	  li        r3, 0
	  stw       r4, 0xC(r1)
	  stw       r0, 0x10(r1)
	  beq-      .loc_0xAC
	  addi      r3, r28, 0x1

	.loc_0xAC:
	  mr        r4, r30
	  bl        0x99640
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x8
	  cmpwi     r28, 0x4
	  blt+      .loc_0x8C
	  lbz       r3, 0x56(r29)
	  bl        0x99B04
	  mr        r30, r29
	  li        r31, 0
	  b         .loc_0x1FC

	.loc_0xD8:
	  lbz       r0, 0x5A(r30)
	  mr        r3, r31
	  lbz       r5, 0x59(r30)
	  rlwinm    r6,r0,28,28,31
	  rlwinm    r7,r0,0,28,31
	  rlwinm    r4,r5,28,28,31
	  rlwinm    r5,r5,0,28,31
	  bl        0x99428
	  lbz       r5, 0x5D(r30)
	  mr        r3, r31
	  lbz       r6, 0x5E(r30)
	  rlwinm    r0,r5,0,24,26
	  srawi     r4, r0, 0x5
	  rlwinm    r7,r6,28,29,31
	  rlwinm    r0,r6,25,31,31
	  rlwimi    r0,r5,1,29,30
	  rlwinm    r4,r4,0,24,31
	  rlwinm    r5,r5,30,29,31
	  rlwinm    r6,r0,0,24,31
	  bl        0x9943C
	  lbz       r7, 0x58(r30)
	  mr        r3, r31
	  rlwinm    r0,r7,0,26,27
	  rlwinm    r5,r7,0,30,31
	  srawi     r6, r0, 0x4
	  rlwinm    r9,r7,30,31,31
	  rlwinm    r0,r7,29,29,30
	  cmplwi    r5, 0x3
	  add       r4, r9, r0
	  rlwinm    r8,r7,26,30,31
	  addi      r0, r4, 0x8
	  rlwinm    r6,r6,0,24,31
	  rlwinm    r7,r7,29,31,31
	  rlwinm    r0,r0,0,24,31
	  beq-      .loc_0x168
	  mr        r0, r9

	.loc_0x168:
	  rlwinm    r4,r0,0,24,31
	  bl        0x99438
	  lbz       r7, 0x5C(r30)
	  mr        r3, r31
	  rlwinm    r0,r7,0,26,27
	  rlwinm    r5,r7,0,30,31
	  srawi     r6, r0, 0x4
	  rlwinm    r9,r7,30,31,31
	  rlwinm    r0,r7,29,29,30
	  cmplwi    r5, 0x3
	  add       r4, r9, r0
	  rlwinm    r8,r7,26,30,31
	  addi      r0, r4, 0x8
	  rlwinm    r6,r6,0,24,31
	  rlwinm    r7,r7,29,31,31
	  rlwinm    r0,r0,0,24,31
	  beq-      .loc_0x1B0
	  mr        r0, r9

	.loc_0x1B0:
	  rlwinm    r4,r0,0,24,31
	  bl        0x99458
	  add       r28, r29, r31
	  li        r4, 0
	  lbz       r0, 0xA8(r28)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x1D0
	  mr        r4, r0

	.loc_0x1D0:
	  mr        r3, r31
	  bl        0x9960C
	  lbz       r0, 0xB0(r28)
	  li        r4, 0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x1EC
	  mr        r4, r0

	.loc_0x1EC:
	  mr        r3, r31
	  bl        0x9964C
	  addi      r30, r30, 0x8
	  addi      r31, r31, 0x1

	.loc_0x1FC:
	  lbz       r0, 0x56(r29)
	  cmpw      r31, r0
	  blt+      .loc_0xD8
	  li        r28, 0
	  mr        r30, r29

	.loc_0x210:
	  lwz       r0, 0x98(r30)
	  mr        r3, r28
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        0x9954C
	  addi      r28, r28, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r28, 0x4
	  blt+      .loc_0x210
	  mr        r30, r29
	  li        r28, 0
	  b         .loc_0x25C

	.loc_0x240:
	  lbz       r0, 0x5E(r30)
	  mr        r3, r28
	  rlwinm    r4,r0,0,30,31
	  rlwinm    r5,r0,30,30,31
	  bl        0x99648
	  addi      r30, r30, 0x8
	  addi      r28, r28, 0x1

	.loc_0x25C:
	  lbz       r0, 0x56(r29)
	  cmpw      r28, r0
	  blt+      .loc_0x240
	  li        r28, 0

	.loc_0x26C:
	  addi      r0, r28, 0xB8
	  mr        r3, r28
	  lbzx      r0, r29, r0
	  rlwinm    r4,r0,26,30,31
	  rlwinm    r5,r0,28,30,31
	  rlwinm    r6,r0,30,30,31
	  rlwinm    r7,r0,0,30,31
	  bl        0x99658
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x4
	  blt+      .loc_0x26C
	  li        r28, 0
	  b         .loc_0x2B8

	.loc_0x2A0:
	  rlwinm    r3,r28,2,22,29
	  mr        r4, r28
	  addi      r3, r3, 0xBC
	  add       r3, r29, r3
	  bl        0xA328
	  addi      r28, r28, 0x1

	.loc_0x2B8:
	  lbz       r0, 0x56(r29)
	  rlwinm    r3,r28,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x2A0
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004F2D4
 * Size:	000048
 */
void J2DTevBlock8::loadTexture(_GXTexMapID, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0x8
	  stw       r0, 0x14(r1)
	  bge-      .loc_0x38
	  rlwinm    r0,r5,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0xDC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  bl        -0x1BCD8

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004F31C
 * Size:	000128
 */
void J2DTevBlock16::J2DTevBlock16()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x1094
	  lis       r4, 0x8005
	  li        r6, 0x4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x804A
	  subi      r4, r4, 0x5D3C
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0xCE8
	  addi      r3, r31, 0x16
	  li        r7, 0x10
	  stw       r0, 0x0(r31)
	  bl        0x724DC
	  lis       r4, 0x8005
	  addi      r3, r31, 0x56
	  subi      r4, r4, 0x5D40
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x4
	  bl        0x724C0
	  lis       r4, 0x8005
	  addi      r3, r31, 0x77
	  subi      r4, r4, 0x6A28
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x10
	  bl        0x724A4
	  lis       r4, 0x8004
	  addi      r3, r31, 0xF8
	  subi      r4, r4, 0x646C
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x72488
	  lis       r4, 0x8005
	  addi      r3, r31, 0x128
	  subi      r4, r4, 0x5D4C
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0x4
	  bl        0x7246C
	  lis       r4, 0x8005
	  addi      r3, r31, 0x12C
	  subi      r4, r4, 0x5DE0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x10
	  bl        0x72450
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x16C(r31)
	  stw       r0, 0x170(r31)
	  stw       r0, 0x174(r31)
	  stw       r0, 0x178(r31)
	  stw       r0, 0x17C(r31)
	  stw       r0, 0x180(r31)
	  stw       r0, 0x184(r31)
	  stw       r0, 0x188(r31)
	  stb       r0, 0x1B0(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8004F444
 * Size:	0000D0
 */
void J2DTevBlock16::~J2DTevBlock16()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr.       r27, r3
	  mr        r28, r4
	  beq-      .loc_0xB8
	  lis       r3, 0x804A
	  mr        r30, r27
	  addi      r0, r3, 0xCE8
	  li        r29, 0
	  stw       r0, 0x0(r27)
	  li        r31, 0x1

	.loc_0x34:
	  lbz       r3, 0x1B0(r27)
	  slw       r0, r31, r29
	  and.      r0, r3, r0
	  beq-      .loc_0x50
	  lwz       r3, 0x16C(r30)
	  li        r4, 0x1
	  bl        -0x1C480

	.loc_0x50:
	  lwz       r3, 0x18C(r30)
	  bl        -0x2B3E4
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x8
	  blt+      .loc_0x34
	  lbz       r0, 0x1B1(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  lwz       r3, 0x1AC(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0x94
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
	  cmplwi    r27, 0
	  beq-      .loc_0xA8
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1094
	  stw       r0, 0x0(r27)

	.loc_0xA8:
	  extsh.    r0, r28
	  ble-      .loc_0xB8
	  mr        r3, r27
	  bl        -0x2B444

	.loc_0xB8:
	  mr        r3, r27
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004F514
 * Size:	000550
 */
void J2DTevBlock16::initialize()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  lis       r4, 0x1
	  subi      r6, r4, 0x1
	  li        r0, 0x2
	  stw       r31, 0x2C(r1)
	  mr        r4, r3
	  subi      r5, r2, 0x7A50
	  sth       r6, 0x4(r3)
	  sth       r6, 0x6(r3)
	  sth       r6, 0x8(r3)
	  sth       r6, 0xA(r3)
	  sth       r6, 0xC(r3)
	  sth       r6, 0xE(r3)
	  sth       r6, 0x10(r3)
	  sth       r6, 0x12(r3)
	  sth       r6, 0x14(r3)
	  mtctr     r0

	.loc_0x44:
	  lbz       r0, -0x7A50(r2)
	  stb       r0, 0x16(r4)
	  lbz       r0, 0x1(r5)
	  stb       r0, 0x17(r4)
	  lbz       r0, 0x2(r5)
	  stb       r0, 0x18(r4)
	  lbz       r0, -0x7A50(r2)
	  stb       r0, 0x1A(r4)
	  lbz       r0, 0x1(r5)
	  stb       r0, 0x1B(r4)
	  lbz       r0, 0x2(r5)
	  stb       r0, 0x1C(r4)
	  lbz       r0, -0x7A50(r2)
	  stb       r0, 0x1E(r4)
	  lbz       r0, 0x1(r5)
	  stb       r0, 0x1F(r4)
	  lbz       r0, 0x2(r5)
	  stb       r0, 0x20(r4)
	  lbz       r0, -0x7A50(r2)
	  stb       r0, 0x22(r4)
	  lbz       r0, 0x1(r5)
	  stb       r0, 0x23(r4)
	  lbz       r0, 0x2(r5)
	  stb       r0, 0x24(r4)
	  lbz       r0, -0x7A50(r2)
	  stb       r0, 0x26(r4)
	  lbz       r0, 0x1(r5)
	  stb       r0, 0x27(r4)
	  lbz       r0, 0x2(r5)
	  stb       r0, 0x28(r4)
	  lbz       r0, -0x7A50(r2)
	  stb       r0, 0x2A(r4)
	  lbz       r0, 0x1(r5)
	  stb       r0, 0x2B(r4)
	  lbz       r0, 0x2(r5)
	  stb       r0, 0x2C(r4)
	  lbz       r0, -0x7A50(r2)
	  stb       r0, 0x2E(r4)
	  lbz       r0, 0x1(r5)
	  stb       r0, 0x2F(r4)
	  lbz       r0, 0x2(r5)
	  stb       r0, 0x30(r4)
	  lbz       r0, -0x7A50(r2)
	  stb       r0, 0x32(r4)
	  lbz       r0, 0x1(r5)
	  stb       r0, 0x33(r4)
	  lbz       r0, 0x2(r5)
	  stb       r0, 0x34(r4)
	  addi      r4, r4, 0x20
	  bdnz+     .loc_0x44
	  lha       r11, -0x7A48(r2)
	  subi      r6, r2, 0x7A48
	  lha       r10, 0x2(r6)
	  li        r7, 0x1
	  sth       r11, 0x56(r3)
	  li        r0, 0x2
	  lha       r9, 0x4(r6)
	  mr        r4, r3
	  sth       r10, 0x58(r3)
	  li        r5, 0
	  lha       r8, 0x6(r6)
	  li        r6, 0
	  sth       r9, 0x5A(r3)
	  sth       r8, 0x5C(r3)
	  sth       r11, 0x5E(r3)
	  sth       r10, 0x60(r3)
	  sth       r9, 0x62(r3)
	  sth       r8, 0x64(r3)
	  sth       r11, 0x66(r3)
	  sth       r10, 0x68(r3)
	  sth       r9, 0x6A(r3)
	  sth       r8, 0x6C(r3)
	  sth       r11, 0x6E(r3)
	  sth       r10, 0x70(r3)
	  sth       r9, 0x72(r3)
	  sth       r8, 0x74(r3)
	  stb       r7, 0x76(r3)
	  mtctr     r0

	.loc_0x17C:
	  addi      r0, r6, 0xC0
	  addi      r7, r6, 0xC1
	  stb       r0, 0x77(r4)
	  addi      r0, r5, 0x1
	  rlwinm    r8,r0,1,0,30
	  addi      r6, r6, 0x10
	  stb       r7, 0x7B(r4)
	  addi      r7, r8, 0xC0
	  addi      r0, r5, 0x2
	  addi      r9, r8, 0xC1
	  stb       r7, 0x7F(r4)
	  rlwinm    r10,r0,1,0,30
	  addi      r8, r10, 0xC0
	  addi      r0, r5, 0x3
	  stb       r9, 0x83(r4)
	  rlwinm    r9,r0,1,0,30
	  addi      r7, r10, 0xC1
	  addi      r0, r5, 0x4
	  stb       r8, 0x87(r4)
	  rlwinm    r11,r0,1,0,30
	  addi      r10, r9, 0xC0
	  addi      r0, r5, 0x5
	  stb       r7, 0x8B(r4)
	  rlwinm    r12,r0,1,0,30
	  addi      r9, r9, 0xC1
	  addi      r8, r11, 0xC0
	  stb       r10, 0x8F(r4)
	  addi      r7, r11, 0xC1
	  addi      r11, r12, 0xC0
	  addi      r10, r12, 0xC1
	  stb       r9, 0x93(r4)
	  addi      r0, r5, 0x6
	  rlwinm    r12,r0,1,0,30
	  stb       r8, 0x97(r4)
	  addi      r0, r5, 0x7
	  rlwinm    r31,r0,1,0,30
	  addi      r9, r12, 0xC0
	  stb       r7, 0x9B(r4)
	  addi      r8, r12, 0xC1
	  addi      r7, r31, 0xC0
	  addi      r0, r31, 0xC1
	  stb       r11, 0x9F(r4)
	  addi      r5, r5, 0x8
	  stb       r10, 0xA3(r4)
	  stb       r9, 0xA7(r4)
	  stb       r8, 0xAB(r4)
	  stb       r7, 0xAF(r4)
	  stb       r0, 0xB3(r4)
	  addi      r4, r4, 0x40
	  bdnz+     .loc_0x17C
	  li        r0, 0x2
	  mr        r8, r3
	  lwz       r7, -0x7A3C(r2)
	  mtctr     r0

	.loc_0x254:
	  stw       r7, 0x8(r1)
	  lbz       r6, 0x8(r1)
	  lbz       r5, 0x9(r1)
	  stb       r6, 0xF8(r8)
	  lbz       r4, 0xA(r1)
	  lbz       r0, 0xB(r1)
	  stb       r5, 0xF9(r8)
	  stb       r4, 0xFA(r8)
	  stw       r7, 0x8(r1)
	  stb       r6, 0xC(r1)
	  lbz       r6, 0x8(r1)
	  stb       r0, 0xFB(r8)
	  stb       r5, 0xD(r1)
	  lbz       r5, 0x9(r1)
	  stb       r6, 0xFC(r8)
	  stb       r4, 0xE(r1)
	  lbz       r4, 0xA(r1)
	  stb       r5, 0xFD(r8)
	  stb       r0, 0xF(r1)
	  lbz       r0, 0xB(r1)
	  stb       r4, 0xFE(r8)
	  stb       r0, 0xFF(r8)
	  addi      r8, r8, 0x8
	  stb       r6, 0xC(r1)
	  stb       r5, 0xD(r1)
	  stb       r4, 0xE(r1)
	  stb       r0, 0xF(r1)
	  bdnz+     .loc_0x254
	  li        r7, 0xFF
	  lis       r4, 0x8048
	  stb       r7, 0x108(r3)
	  subi      r6, r2, 0x7A34
	  li        r0, 0x8
	  mr        r5, r3
	  stb       r7, 0x118(r3)
	  subi      r4, r4, 0x7944
	  stb       r7, 0x109(r3)
	  stb       r7, 0x119(r3)
	  stb       r7, 0x10A(r3)
	  stb       r7, 0x11A(r3)
	  stb       r7, 0x10B(r3)
	  stb       r7, 0x11B(r3)
	  stb       r7, 0x10C(r3)
	  stb       r7, 0x11C(r3)
	  stb       r7, 0x10D(r3)
	  stb       r7, 0x11D(r3)
	  stb       r7, 0x10E(r3)
	  stb       r7, 0x11E(r3)
	  stb       r7, 0x10F(r3)
	  stb       r7, 0x11F(r3)
	  stb       r7, 0x110(r3)
	  stb       r7, 0x120(r3)
	  stb       r7, 0x111(r3)
	  stb       r7, 0x121(r3)
	  stb       r7, 0x112(r3)
	  stb       r7, 0x122(r3)
	  stb       r7, 0x113(r3)
	  stb       r7, 0x123(r3)
	  stb       r7, 0x114(r3)
	  stb       r7, 0x124(r3)
	  stb       r7, 0x115(r3)
	  stb       r7, 0x125(r3)
	  stb       r7, 0x116(r3)
	  stb       r7, 0x126(r3)
	  stb       r7, 0x117(r3)
	  stb       r7, 0x127(r3)
	  lbz       r7, 0x1(r6)
	  lbz       r9, 0x2(r6)
	  lbz       r8, -0x7A34(r2)
	  rlwinm    r7,r7,4,20,27
	  rlwinm    r9,r9,2,0,29
	  lbz       r10, 0x3(r6)
	  add       r7, r7, r9
	  rlwinm    r8,r8,6,0,25
	  add       r7, r7, r10
	  add       r7, r8, r7
	  stb       r7, 0x128(r3)
	  lbz       r7, 0x1(r6)
	  lbz       r9, 0x2(r6)
	  lbz       r8, -0x7A34(r2)
	  rlwinm    r7,r7,4,20,27
	  rlwinm    r9,r9,2,0,29
	  lbz       r10, 0x3(r6)
	  add       r7, r7, r9
	  rlwinm    r8,r8,6,0,25
	  add       r7, r7, r10
	  add       r7, r8, r7
	  stb       r7, 0x129(r3)
	  lbz       r7, 0x1(r6)
	  lbz       r9, 0x2(r6)
	  lbz       r8, -0x7A34(r2)
	  rlwinm    r7,r7,4,20,27
	  rlwinm    r9,r9,2,0,29
	  lbz       r10, 0x3(r6)
	  add       r7, r7, r9
	  rlwinm    r8,r8,6,0,25
	  add       r7, r7, r10
	  add       r7, r8, r7
	  stb       r7, 0x12A(r3)
	  lbz       r9, 0x2(r6)
	  lbz       r7, 0x1(r6)
	  lbz       r8, -0x7A34(r2)
	  rlwinm    r9,r9,2,0,29
	  rlwinm    r7,r7,4,0,27
	  lbz       r10, 0x3(r6)
	  add       r6, r7, r9
	  rlwinm    r7,r8,6,0,25
	  add       r6, r6, r10
	  add       r6, r7, r6
	  stb       r6, 0x12B(r3)
	  mtctr     r0

	.loc_0x410:
	  lwz       r6, 0x4(r4)
	  lwz       r0, 0x8(r4)
	  stw       r6, 0x14(r1)
	  lwz       r6, 0x0(r4)
	  stw       r0, 0x18(r1)
	  lbz       r0, 0x17(r1)
	  stw       r6, 0x10(r1)
	  lbz       r6, 0x18(r1)
	  rlwinm    r0,r0,21,0,10
	  lbz       r7, 0x16(r1)
	  rlwinm    r6,r6,22,0,9
	  lbz       r8, 0x13(r1)
	  lbz       r9, 0x15(r1)
	  rlwinm    r7,r7,20,0,11
	  or        r0, r6, r0
	  lbz       r10, 0x14(r1)
	  lbz       r11, 0x12(r1)
	  rlwinm    r6,r8,16,0,15
	  or        r0, r7, r0
	  lbz       r12, 0x11(r1)
	  rlwinm    r7,r9,11,0,20
	  rlwinm    r8,r10,8,0,23
	  or        r0, r6, r0
	  rlwinm    r6,r11,4,0,27
	  or        r0, r7, r0
	  rlwinm    r7,r12,2,0,29
	  or        r0, r8, r0
	  lbz       r8, 0x10(r1)
	  or        r0, r6, r0
	  or        r0, r7, r0
	  or        r0, r8, r0
	  stw       r0, 0x12C(r5)
	  lwz       r6, 0x4(r4)
	  lwz       r0, 0x8(r4)
	  stw       r6, 0x14(r1)
	  lwz       r6, 0x0(r4)
	  stw       r0, 0x18(r1)
	  lbz       r0, 0x17(r1)
	  stw       r6, 0x10(r1)
	  lbz       r6, 0x18(r1)
	  rlwinm    r0,r0,21,0,10
	  lbz       r7, 0x16(r1)
	  rlwinm    r6,r6,22,0,9
	  lbz       r8, 0x13(r1)
	  lbz       r9, 0x15(r1)
	  rlwinm    r7,r7,20,0,11
	  or        r0, r6, r0
	  lbz       r10, 0x14(r1)
	  lbz       r11, 0x12(r1)
	  rlwinm    r6,r8,16,0,15
	  or        r0, r7, r0
	  lbz       r12, 0x11(r1)
	  rlwinm    r7,r9,11,0,20
	  rlwinm    r8,r10,8,0,23
	  or        r0, r6, r0
	  rlwinm    r6,r11,4,0,27
	  or        r0, r7, r0
	  rlwinm    r7,r12,2,0,29
	  or        r0, r8, r0
	  lbz       r8, 0x10(r1)
	  or        r0, r6, r0
	  or        r0, r7, r0
	  or        r0, r8, r0
	  stw       r0, 0x130(r5)
	  addi      r5, r5, 0x8
	  bdnz+     .loc_0x410
	  li        r0, 0
	  stw       r0, 0x18C(r3)
	  stw       r0, 0x190(r3)
	  stw       r0, 0x194(r3)
	  stw       r0, 0x198(r3)
	  stw       r0, 0x19C(r3)
	  stw       r0, 0x1A0(r3)
	  stw       r0, 0x1A4(r3)
	  stw       r0, 0x1A8(r3)
	  stw       r0, 0x1AC(r3)
	  stb       r0, 0x1B1(r3)
	  lwz       r31, 0x2C(r1)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004FA64
 * Size:	0000E0
 */
void J2DTevBlock16::prepareTexture(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  rlwinm    r31,r4,0,24,31
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0xB0

	.loc_0x2C:
	  rlwinm    r0,r29,0,24,31
	  cmplwi    r0, 0x8
	  blt-      .loc_0x40
	  li        r3, 0
	  b         .loc_0xC0

	.loc_0x40:
	  rlwinm    r3,r29,2,22,29
	  addi      r30, r3, 0x16C
	  lwzx      r0, r28, r30
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  li        r3, 0x40
	  bl        -0x2BC18
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  lbz       r4, 0x3B(r3)
	  li        r0, 0
	  rlwinm    r4,r4,0,30,30
	  stb       r4, 0x3B(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x20(r3)

	.loc_0x7C:
	  stwx      r3, r28, r30
	  lwzx      r0, r28, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x94
	  li        r3, 0
	  b         .loc_0xC0

	.loc_0x94:
	  rlwinm    r0,r29,0,24,31
	  li        r3, 0x1
	  lbz       r4, 0x1B0(r28)
	  slw       r0, r3, r0
	  or        r0, r4, r0
	  stb       r0, 0x1B0(r28)

	.loc_0xAC:
	  addi      r29, r29, 0x1

	.loc_0xB0:
	  rlwinm    r0,r29,0,24,31
	  cmplw     r0, r31
	  blt+      .loc_0x2C
	  li        r3, 0x1

	.loc_0xC0:
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
 * Address:	8004FB44
 * Size:	0003C8
 */
void J2DTevBlock16::insertTexture(unsigned long, const ResTIMG*, JUTPalette*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r4
	  cmplwi    r26, 0x8
	  mr        r25, r3
	  mr        r27, r5
	  mr        r28, r6
	  bge-      .loc_0x30
	  cmplwi    r27, 0
	  bne-      .loc_0x38

	.loc_0x30:
	  li        r3, 0
	  b         .loc_0x3B4

	.loc_0x38:
	  li        r30, 0
	  b         .loc_0x64

	.loc_0x40:
	  rlwinm    r3,r30,2,22,29
	  addi      r0, r3, 0x16C
	  lwzx      r3, r25, r0
	  cmplwi    r3, 0
	  beq-      .loc_0x70
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  addi      r30, r30, 0x1

	.loc_0x64:
	  rlwinm    r0,r30,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x40

	.loc_0x70:
	  rlwinm    r0,r30,0,24,31
	  cmplw     r0, r26
	  bge-      .loc_0x84
	  li        r3, 0
	  b         .loc_0x3B4

	.loc_0x84:
	  cmplwi    r0, 0x8
	  bne-      .loc_0x94
	  li        r3, 0
	  b         .loc_0x3B4

	.loc_0x94:
	  lbz       r0, 0x8(r27)
	  li        r29, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x154
	  cmplwi    r28, 0
	  bne-      .loc_0x154
	  li        r0, 0x7
	  mr        r5, r25
	  li        r7, 0
	  mtctr     r0
	  li        r3, 0x1

	.loc_0xC0:
	  lwz       r6, 0x16C(r5)
	  cmplwi    r6, 0
	  beq-      .loc_0x114
	  lwz       r4, 0x20(r6)
	  cmplwi    r4, 0
	  beq-      .loc_0x114
	  lbz       r0, 0x8(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x114
	  lbz       r4, 0x3A(r6)
	  li        r0, 0
	  cmpwi     r4, 0x10
	  blt-      .loc_0xF8
	  li        r0, 0x10

	.loc_0xF8:
	  sub       r0, r4, r0
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0x8
	  bge-      .loc_0x114
	  slw       r0, r3, r0
	  or        r0, r7, r0
	  rlwinm    r7,r0,0,24,31

	.loc_0x114:
	  addi      r5, r5, 0x4
	  bdnz+     .loc_0xC0
	  rlwinm    r4,r7,0,24,31
	  li        r5, 0
	  li        r3, 0x1
	  b         .loc_0x148

	.loc_0x12C:
	  rlwinm    r0,r5,0,24,31
	  slw       r0, r3, r0
	  and.      r0, r4, r0
	  bne-      .loc_0x144
	  mr        r29, r5
	  b         .loc_0x154

	.loc_0x144:
	  addi      r5, r5, 0x1

	.loc_0x148:
	  rlwinm    r0,r5,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x12C

	.loc_0x154:
	  rlwinm    r0,r30,2,22,29
	  add       r3, r25, r0
	  lwz       r31, 0x16C(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0x250
	  li        r3, 0x40
	  bl        -0x2BE0C
	  mr.       r31, r3
	  beq-      .loc_0x198
	  li        r0, 0
	  mr        r4, r27
	  stw       r0, 0x28(r31)
	  mr        r5, r29
	  bl        -0x1CC48
	  lbz       r0, 0x3B(r31)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r31)

	.loc_0x198:
	  cmplwi    r31, 0
	  bne-      .loc_0x1A8
	  li        r3, 0
	  b         .loc_0x3B4

	.loc_0x1A8:
	  cmplwi    r28, 0
	  beq-      .loc_0x1C0
	  mr        r3, r31
	  mr        r4, r27
	  mr        r5, r28
	  bl        -0x1CAD0

	.loc_0x1C0:
	  li        r8, 0x7
	  b         .loc_0x204

	.loc_0x1C8:
	  rlwinm    r3,r4,2,0,29
	  rlwinm    r0,r8,2,22,29
	  add       r6, r25, r3
	  rlwinm    r4,r4,1,0,30
	  lwz       r5, 0x168(r6)
	  add       r7, r25, r0
	  rlwinm    r3,r8,1,23,30
	  addi      r4, r4, 0x2
	  stw       r5, 0x16C(r7)
	  addi      r0, r3, 0x4
	  subi      r8, r8, 0x1
	  lwz       r3, 0x188(r6)
	  stw       r3, 0x18C(r7)
	  lhzx      r3, r25, r4
	  sthx      r3, r25, r0

	.loc_0x204:
	  rlwinm    r4,r8,0,24,31
	  cmplw     r4, r26
	  bgt+      .loc_0x1C8
	  rlwinm    r0,r26,2,0,29
	  mr        r3, r25
	  add       r5, r25, r0
	  rlwinm    r4,r26,0,24,31
	  stw       r31, 0x16C(r5)
	  li        r5, 0x1
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lbz       r3, 0x1B0(r25)
	  slw       r0, r0, r26
	  or        r0, r3, r0
	  stb       r0, 0x1B0(r25)
	  b         .loc_0x38C

	.loc_0x250:
	  cmplwi    r28, 0
	  bne-      .loc_0x26C
	  mr        r3, r31
	  mr        r4, r27
	  mr        r5, r29
	  bl        -0x1CD24
	  b         .loc_0x27C

	.loc_0x26C:
	  mr        r3, r31
	  mr        r4, r27
	  mr        r5, r28
	  bl        -0x1CB8C

	.loc_0x27C:
	  lbz       r0, 0x1B0(r25)
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  rlwinm    r11,r0,0,31,31
	  rlwinm    r10,r0,31,31,31
	  rlwinm    r9,r0,30,31,31
	  rlwinm    r8,r0,29,31,31
	  rlwinm    r7,r0,28,31,31
	  rlwinm    r6,r0,27,31,31
	  rlwinm    r5,r0,26,31,31
	  rlwinm    r0,r0,25,31,31
	  stb       r11, 0x8(r1)
	  stb       r10, 0x9(r1)
	  stb       r9, 0xA(r1)
	  stb       r8, 0xB(r1)
	  stb       r7, 0xC(r1)
	  stb       r6, 0xD(r1)
	  stb       r5, 0xE(r1)
	  stb       r0, 0xF(r1)
	  b         .loc_0x318

	.loc_0x2CC:
	  rlwinm    r5,r8,2,0,29
	  rlwinm    r0,r3,2,22,29
	  add       r9, r25, r5
	  rlwinm    r6,r8,1,0,30
	  lwz       r7, 0x168(r9)
	  add       r10, r25, r0
	  subi      r0, r8, 0x1
	  rlwinm    r5,r3,1,23,30
	  stw       r7, 0x16C(r10)
	  rlwinm    r8,r3,0,24,31
	  lbzx      r0, r4, r0
	  addi      r6, r6, 0x2
	  lwz       r7, 0x188(r9)
	  addi      r5, r5, 0x4
	  stbx      r0, r4, r8
	  subi      r3, r3, 0x1
	  stw       r7, 0x18C(r10)
	  lhzx      r0, r25, r6
	  sthx      r0, r25, r5

	.loc_0x318:
	  rlwinm    r8,r3,0,24,31
	  cmplw     r8, r26
	  bgt+      .loc_0x2CC
	  rlwinm    r3,r26,2,0,29
	  li        r0, 0
	  add       r3, r25, r3
	  addi      r5, r1, 0x8
	  stw       r31, 0x16C(r3)
	  li        r7, 0
	  li        r3, 0x1
	  stb       r0, 0x1B0(r25)
	  b         .loc_0x36C

	.loc_0x348:
	  rlwinm    r6,r7,0,24,31
	  lbzx      r0, r5, r6
	  cmplwi    r0, 0
	  beq-      .loc_0x368
	  lbz       r4, 0x1B0(r25)
	  slw       r0, r3, r6
	  or        r0, r4, r0
	  stb       r0, 0x1B0(r25)

	.loc_0x368:
	  addi      r7, r7, 0x1

	.loc_0x36C:
	  rlwinm    r0,r7,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x348
	  li        r0, 0x1
	  lbz       r3, 0x1B0(r25)
	  slw       r0, r0, r26
	  or        r0, r3, r0
	  stb       r0, 0x1B0(r25)

	.loc_0x38C:
	  rlwinm    r3,r26,2,0,29
	  rlwinm    r0,r26,1,0,30
	  add       r4, r25, r3
	  li        r5, 0
	  lis       r3, 0x1
	  stw       r5, 0x18C(r4)
	  subi      r4, r3, 0x1
	  add       r3, r25, r0
	  sth       r4, 0x4(r3)
	  li        r3, 0x1

	.loc_0x3B4:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004FF0C
 * Size:	000198
 */
void J2DTevBlock16::insertTexture(unsigned long, JUTTexture*)
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
	  cmplwi    r30, 0x8
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bge-      .loc_0x34
	  cmplwi    r31, 0
	  bne-      .loc_0x3C

	.loc_0x34:
	  li        r3, 0
	  b         .loc_0x17C

	.loc_0x3C:
	  li        r4, 0
	  b         .loc_0x68

	.loc_0x44:
	  rlwinm    r3,r4,2,22,29
	  addi      r0, r3, 0x16C
	  lwzx      r3, r29, r0
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  addi      r4, r4, 0x1

	.loc_0x68:
	  rlwinm    r0,r4,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x44

	.loc_0x74:
	  rlwinm    r0,r4,0,24,31
	  cmplw     r0, r30
	  bge-      .loc_0x88
	  li        r3, 0
	  b         .loc_0x17C

	.loc_0x88:
	  cmplwi    r0, 0x8
	  bne-      .loc_0x98
	  li        r3, 0
	  b         .loc_0x17C

	.loc_0x98:
	  lwz       r3, 0x188(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  lbz       r0, 0x1B0(r29)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0xC4
	  li        r4, 0x1
	  bl        -0x1CFBC

	.loc_0xC4:
	  lbz       r0, 0x1B0(r29)
	  rlwinm    r0,r0,0,25,31
	  stb       r0, 0x1B0(r29)

	.loc_0xD0:
	  li        r8, 0x7
	  b         .loc_0x114

	.loc_0xD8:
	  rlwinm    r3,r4,2,0,29
	  rlwinm    r0,r8,2,22,29
	  add       r6, r29, r3
	  rlwinm    r4,r4,1,0,30
	  lwz       r5, 0x168(r6)
	  add       r7, r29, r0
	  rlwinm    r3,r8,1,23,30
	  addi      r4, r4, 0x2
	  stw       r5, 0x16C(r7)
	  addi      r0, r3, 0x4
	  subi      r8, r8, 0x1
	  lwz       r3, 0x188(r6)
	  stw       r3, 0x18C(r7)
	  lhzx      r3, r29, r4
	  sthx      r3, r29, r0

	.loc_0x114:
	  rlwinm    r4,r8,0,24,31
	  cmplw     r4, r30
	  bgt+      .loc_0xD8
	  rlwinm    r3,r30,2,0,29
	  rlwinm    r0,r30,1,0,30
	  add       r5, r29, r3
	  lis       r3, 0x1
	  stw       r31, 0x16C(r5)
	  li        r4, 0
	  subi      r7, r3, 0x1
	  add       r6, r29, r0
	  stw       r4, 0x18C(r5)
	  mr        r3, r29
	  rlwinm    r4,r30,0,24,31
	  li        r5, 0x1
	  sth       r7, 0x4(r6)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lbz       r4, 0x1B0(r29)
	  slw       r0, r0, r30
	  li        r3, 0x1
	  andc      r0, r4, r0
	  stb       r0, 0x1B0(r29)

	.loc_0x17C:
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
 * Address:	800500A4
 * Size:	0002E4
 */
void J2DTevBlock16::setTexture(unsigned long, const ResTIMG*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r4
	  cmplwi    r26, 0x8
	  mr        r25, r3
	  mr        r27, r5
	  blt-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x2D0

	.loc_0x2C:
	  cmplwi    r27, 0
	  li        r28, 0
	  beq-      .loc_0x160
	  lbz       r0, 0x8(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x160
	  li        r0, 0x4
	  mr        r4, r25
	  li        r6, 0
	  li        r7, 0
	  mtctr     r0

	.loc_0x58:
	  cmplw     r7, r26
	  beq-      .loc_0xB8
	  lwz       r5, 0x16C(r4)
	  cmplwi    r5, 0
	  beq-      .loc_0xB8
	  lwz       r3, 0x20(r5)
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  lbz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  lbz       r3, 0x3A(r5)
	  li        r0, 0
	  cmpwi     r3, 0x10
	  blt-      .loc_0x98
	  li        r0, 0x10

	.loc_0x98:
	  sub       r0, r3, r0
	  rlwinm    r3,r0,0,24,31
	  cmplwi    r3, 0x8
	  bge-      .loc_0xB8
	  li        r0, 0x1
	  slw       r0, r0, r3
	  or        r0, r6, r0
	  rlwinm    r6,r0,0,24,31

	.loc_0xB8:
	  addi      r7, r7, 0x1
	  cmplw     r7, r26
	  beq-      .loc_0x11C
	  lwz       r5, 0x170(r4)
	  cmplwi    r5, 0
	  beq-      .loc_0x11C
	  lwz       r3, 0x20(r5)
	  cmplwi    r3, 0
	  beq-      .loc_0x11C
	  lbz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x11C
	  lbz       r3, 0x3A(r5)
	  li        r0, 0
	  cmpwi     r3, 0x10
	  blt-      .loc_0xFC
	  li        r0, 0x10

	.loc_0xFC:
	  sub       r0, r3, r0
	  rlwinm    r3,r0,0,24,31
	  cmplwi    r3, 0x8
	  bge-      .loc_0x11C
	  li        r0, 0x1
	  slw       r0, r0, r3
	  or        r0, r6, r0
	  rlwinm    r6,r0,0,24,31

	.loc_0x11C:
	  addi      r4, r4, 0x8
	  addi      r7, r7, 0x1
	  bdnz+     .loc_0x58
	  rlwinm    r4,r6,0,24,31
	  li        r5, 0
	  li        r3, 0x1
	  b         .loc_0x154

	.loc_0x138:
	  rlwinm    r0,r5,0,24,31
	  slw       r0, r3, r0
	  and.      r0, r4, r0
	  bne-      .loc_0x150
	  mr        r28, r5
	  b         .loc_0x160

	.loc_0x150:
	  addi      r5, r5, 0x1

	.loc_0x154:
	  rlwinm    r0,r5,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x138

	.loc_0x160:
	  rlwinm    r29,r26,2,0,29
	  add       r31, r25, r29
	  lwz       r3, 0x16C(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0x1F4
	  cmplwi    r27, 0
	  beq-      .loc_0x1DC
	  li        r3, 0x40
	  bl        -0x2C380
	  mr.       r30, r3
	  beq-      .loc_0x1AC
	  li        r0, 0
	  mr        r4, r27
	  stw       r0, 0x28(r30)
	  mr        r5, r28
	  bl        -0x1D1BC
	  lbz       r0, 0x3B(r30)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r30)

	.loc_0x1AC:
	  stw       r30, 0x16C(r31)
	  lwz       r0, 0x16C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C4
	  li        r3, 0
	  b         .loc_0x2D0

	.loc_0x1C4:
	  li        r0, 0x1
	  lbz       r3, 0x1B0(r25)
	  slw       r0, r0, r26
	  or        r0, r3, r0
	  stb       r0, 0x1B0(r25)
	  b         .loc_0x2A4

	.loc_0x1DC:
	  li        r0, 0x1
	  lbz       r3, 0x1B0(r25)
	  slw       r0, r0, r26
	  andc      r0, r3, r0
	  stb       r0, 0x1B0(r25)
	  b         .loc_0x2A4

	.loc_0x1F4:
	  li        r0, 0x1
	  lbz       r4, 0x1B0(r25)
	  slw       r30, r0, r26
	  and.      r0, r4, r30
	  beq-      .loc_0x240
	  cmplwi    r27, 0
	  beq-      .loc_0x220
	  mr        r4, r27
	  mr        r5, r28
	  bl        -0x1D238
	  b         .loc_0x2A4

	.loc_0x220:
	  li        r4, 0x1
	  bl        -0x1D2B8
	  li        r0, 0
	  stw       r0, 0x16C(r31)
	  lbz       r0, 0x1B0(r25)
	  andc      r0, r0, r30
	  stb       r0, 0x1B0(r25)
	  b         .loc_0x2A4

	.loc_0x240:
	  li        r0, 0
	  cmplwi    r27, 0
	  stw       r0, 0x16C(r31)
	  beq-      .loc_0x2A4
	  li        r3, 0x40
	  bl        -0x2C454
	  mr.       r28, r3
	  beq-      .loc_0x280
	  li        r0, 0
	  mr        r4, r27
	  stw       r0, 0x28(r28)
	  li        r5, 0
	  bl        -0x1D290
	  lbz       r0, 0x3B(r28)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r28)

	.loc_0x280:
	  stw       r28, 0x16C(r31)
	  lwz       r0, 0x16C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x298
	  li        r3, 0
	  b         .loc_0x2D0

	.loc_0x298:
	  lbz       r0, 0x1B0(r25)
	  or        r0, r0, r30
	  stb       r0, 0x1B0(r25)

	.loc_0x2A4:
	  add       r27, r25, r29
	  lwz       r3, 0x18C(r27)
	  bl        -0x2C29C
	  li        r4, 0
	  rlwinm    r0,r26,1,0,30
	  lis       r3, 0x1
	  stw       r4, 0x18C(r27)
	  subi      r4, r3, 0x1
	  add       r3, r25, r0
	  sth       r4, 0x4(r3)
	  li        r3, 0x1

	.loc_0x2D0:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80050388
 * Size:	0000A8
 */
void J2DTevBlock16::setTexture(unsigned long, JUTTexture*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r4
	  cmplwi    r28, 0x8
	  mr        r27, r3
	  mr        r29, r5
	  blt-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x94

	.loc_0x2C:
	  li        r0, 0x1
	  lbz       r3, 0x1B0(r27)
	  slw       r30, r0, r28
	  and.      r0, r3, r30
	  beq-      .loc_0x54
	  rlwinm    r0,r28,2,0,29
	  li        r4, 0x1
	  add       r3, r27, r0
	  lwz       r3, 0x16C(r3)
	  bl        -0x1D3C8

	.loc_0x54:
	  rlwinm    r0,r28,2,0,29
	  add       r31, r27, r0
	  stw       r29, 0x16C(r31)
	  lbz       r0, 0x1B0(r27)
	  andc      r0, r0, r30
	  stb       r0, 0x1B0(r27)
	  lwz       r3, 0x18C(r31)
	  bl        -0x2C344
	  li        r4, 0
	  rlwinm    r0,r28,1,0,30
	  lis       r3, 0x1
	  stw       r4, 0x18C(r31)
	  subi      r4, r3, 0x1
	  add       r3, r27, r0
	  sth       r4, 0x4(r3)
	  li        r3, 0x1

	.loc_0x94:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80050430
 * Size:	000210
 */
void J2DTevBlock16::removeTexture(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  cmplwi    r31, 0x8
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  blt-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x1F4

	.loc_0x30:
	  li        r0, 0x1
	  lbz       r3, 0x1B0(r30)
	  slw       r0, r0, r31
	  and.      r0, r3, r0
	  beq-      .loc_0x58
	  rlwinm    r0,r31,2,0,29
	  li        r4, 0x1
	  add       r3, r30, r0
	  lwz       r3, 0x16C(r3)
	  bl        -0x1D474

	.loc_0x58:
	  rlwinm    r29,r31,2,0,29
	  add       r3, r30, r29
	  lwz       r3, 0x18C(r3)
	  bl        -0x2C3E0
	  cmplwi    r31, 0x7
	  mr        r5, r31
	  bge-      .loc_0x1BC
	  subfic    r0, r31, 0x7
	  cmplwi    r0, 0x8
	  ble-      .loc_0x178
	  subfic    r0, r31, 0x6
	  rlwinm    r4,r31,1,0,30
	  rlwinm    r0,r0,29,3,31
	  add       r3, r30, r29
	  add       r4, r30, r4
	  mtctr     r0
	  lis       r6, 0
	  subi      r6, r6, 0x1
	  cmplw     r31, r6
	  bge-      .loc_0x178

	.loc_0xA8:
	  lwz       r0, 0x170(r3)
	  addi      r5, r5, 0x8
	  stw       r0, 0x16C(r3)
	  lwz       r0, 0x190(r3)
	  stw       r0, 0x18C(r3)
	  lhz       r0, 0x6(r4)
	  sth       r0, 0x4(r4)
	  lwz       r0, 0x174(r3)
	  stw       r0, 0x170(r3)
	  lwz       r0, 0x194(r3)
	  stw       r0, 0x190(r3)
	  lhz       r0, 0x8(r4)
	  sth       r0, 0x6(r4)
	  lwz       r0, 0x178(r3)
	  stw       r0, 0x174(r3)
	  lwz       r0, 0x198(r3)
	  stw       r0, 0x194(r3)
	  lhz       r0, 0xA(r4)
	  sth       r0, 0x8(r4)
	  lwz       r0, 0x17C(r3)
	  stw       r0, 0x178(r3)
	  lwz       r0, 0x19C(r3)
	  stw       r0, 0x198(r3)
	  lhz       r0, 0xC(r4)
	  sth       r0, 0xA(r4)
	  lwz       r0, 0x180(r3)
	  stw       r0, 0x17C(r3)
	  lwz       r0, 0x1A0(r3)
	  stw       r0, 0x19C(r3)
	  lhz       r0, 0xE(r4)
	  sth       r0, 0xC(r4)
	  lwz       r0, 0x184(r3)
	  stw       r0, 0x180(r3)
	  lwz       r0, 0x1A4(r3)
	  stw       r0, 0x1A0(r3)
	  lhz       r0, 0x10(r4)
	  sth       r0, 0xE(r4)
	  lwz       r0, 0x188(r3)
	  stw       r0, 0x184(r3)
	  lwz       r0, 0x1A8(r3)
	  stw       r0, 0x1A4(r3)
	  lhz       r0, 0x12(r4)
	  sth       r0, 0x10(r4)
	  lwz       r0, 0x18C(r3)
	  stw       r0, 0x188(r3)
	  lwz       r0, 0x1AC(r3)
	  stw       r0, 0x1A8(r3)
	  addi      r3, r3, 0x20
	  lhz       r0, 0x14(r4)
	  sth       r0, 0x12(r4)
	  addi      r4, r4, 0x10
	  bdnz+     .loc_0xA8

	.loc_0x178:
	  rlwinm    r4,r5,2,0,29
	  rlwinm    r3,r5,1,0,30
	  subfic    r0, r5, 0x7
	  add       r4, r30, r4
	  add       r3, r30, r3
	  mtctr     r0
	  cmplwi    r5, 0x7
	  bge-      .loc_0x1BC

	.loc_0x198:
	  lwz       r0, 0x170(r4)
	  stw       r0, 0x16C(r4)
	  lwz       r0, 0x190(r4)
	  stw       r0, 0x18C(r4)
	  addi      r4, r4, 0x4
	  lhz       r0, 0x6(r3)
	  sth       r0, 0x4(r3)
	  addi      r3, r3, 0x2
	  bdnz+     .loc_0x198

	.loc_0x1BC:
	  li        r5, 0
	  lis       r3, 0x1
	  stw       r5, 0x188(r30)
	  subi      r0, r3, 0x1
	  mr        r3, r30
	  rlwinm    r4,r31,0,24,31
	  stw       r5, 0x1A8(r30)
	  li        r5, 0
	  sth       r0, 0x12(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1

	.loc_0x1F4:
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
 * Address:	80050640
 * Size:	0000B4
 */
void J2DTevBlock16::setFont(ResFONT*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bne-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x98

	.loc_0x2C:
	  li        r3, 0x70
	  bl        -0x2C7CC
	  mr.       r31, r3
	  beq-      .loc_0x4C
	  mr        r4, r30
	  li        r5, 0
	  bl        -0x1F4B8
	  mr        r31, r3

	.loc_0x4C:
	  cmplwi    r31, 0
	  bne-      .loc_0x5C
	  li        r3, 0
	  b         .loc_0x98

	.loc_0x5C:
	  lbz       r0, 0x1B1(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  lwz       r3, 0x1AC(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x88:
	  stw       r31, 0x1AC(r29)
	  li        r0, 0x1
	  li        r3, 0x1
	  stb       r0, 0x1B1(r29)

	.loc_0x98:
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
 * Address:	800506F4
 * Size:	00007C
 */
void J2DTevBlock16::setFont(JUTFont*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x28
	  li        r3, 0
	  b         .loc_0x64

	.loc_0x28:
	  lbz       r0, 0x1B1(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  lwz       r3, 0x1AC(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  stw       r31, 0x1AC(r30)
	  li        r0, 0
	  li        r3, 0x1
	  stb       r0, 0x1B1(r30)

	.loc_0x64:
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
 * Address:	80050770
 * Size:	0000D0
 */
void J2DTevBlock16::setPalette(unsigned long, const ResTLUT*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r4
	  cmplwi    r27, 0x8
	  mr        r26, r3
	  mr        r28, r5
	  blt-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0xBC

	.loc_0x2C:
	  cmplwi    r28, 0
	  beq-      .loc_0xA0
	  rlwinm    r29,r27,2,0,29
	  add       r30, r26, r29
	  lwz       r3, 0x18C(r30)
	  cmplwi    r3, 0
	  bne-      .loc_0x7C
	  li        r3, 0x18
	  bl        -0x2C918
	  mr.       r31, r3
	  beq-      .loc_0x64
	  mr        r4, r27
	  mr        r5, r28
	  bl        -0x2190C

	.loc_0x64:
	  stw       r31, 0x18C(r30)
	  lwz       r0, 0x18C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x84
	  li        r3, 0
	  b         .loc_0xBC

	.loc_0x7C:
	  li        r4, 0
	  bl        -0x2192C

	.loc_0x84:
	  add       r3, r26, r29
	  lwz       r3, 0x16C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  lwz       r4, 0x18C(r30)
	  bl        -0x1D46C
	  b         .loc_0xB8

	.loc_0xA0:
	  rlwinm    r0,r27,2,0,29
	  add       r29, r26, r0
	  lwz       r3, 0x18C(r29)
	  bl        -0x2C768
	  li        r0, 0
	  stw       r0, 0x18C(r29)

	.loc_0xB8:
	  li        r3, 0x1

	.loc_0xBC:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80050840
 * Size:	00006C
 */
void J2DTevBlock16::shiftDeleteFlag(unsigned char, bool)
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x34
	  rlwinm    r0,r4,0,24,31
	  li        r4, 0x1
	  slw       r4, r4, r0
	  lbz       r5, 0x1B0(r3)
	  subi      r4, r4, 0x1
	  andc      r0, r5, r4
	  and       r4, r5, r4
	  rlwinm    r0,r0,1,0,30
	  or        r0, r4, r0
	  stb       r0, 0x1B0(r3)
	  blr

	.loc_0x34:
	  rlwinm    r6,r4,0,24,31
	  li        r5, 0x1
	  addi      r0, r6, 0x1
	  lbz       r7, 0x1B0(r3)
	  slw       r4, r5, r0
	  slw       r5, r5, r6
	  subi      r0, r4, 0x1
	  subi      r4, r5, 0x1
	  andc      r0, r7, r0
	  and       r4, r7, r4
	  srawi     r0, r0, 0x1
	  or        r0, r4, r0
	  stb       r0, 0x1B0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800508AC
 * Size:	0002E8
 */
void J2DTevBlock16::setGX()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  stw       r28, 0x20(r1)
	  li        r28, 0

	.loc_0x24:
	  mr        r3, r29
	  mr        r4, r28
	  lwz       r12, 0x0(r29)
	  mr        r5, r28
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x8
	  blt+      .loc_0x24
	  mr        r30, r29
	  li        r28, 0
	  b         .loc_0x74

	.loc_0x58:
	  lbz       r4, 0x16(r30)
	  mr        r3, r28
	  lbz       r5, 0x17(r30)
	  lbz       r6, 0x18(r30)
	  bl        0x98108
	  addi      r30, r30, 0x4
	  addi      r28, r28, 0x1

	.loc_0x74:
	  lbz       r0, 0x76(r29)
	  cmpw      r28, r0
	  blt+      .loc_0x58
	  mr        r31, r29
	  addi      r30, r1, 0xC
	  li        r28, 0

	.loc_0x8C:
	  lwz       r4, 0x56(r31)
	  cmpwi     r28, 0x3
	  lwz       r0, 0x5A(r31)
	  li        r3, 0
	  stw       r4, 0xC(r1)
	  stw       r0, 0x10(r1)
	  beq-      .loc_0xAC
	  addi      r3, r28, 0x1

	.loc_0xAC:
	  mr        r4, r30
	  bl        0x97D80
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x8
	  cmpwi     r28, 0x4
	  blt+      .loc_0x8C
	  lbz       r3, 0x76(r29)
	  bl        0x98244
	  mr        r30, r29
	  li        r31, 0
	  b         .loc_0x1FC

	.loc_0xD8:
	  lbz       r0, 0x7A(r30)
	  mr        r3, r31
	  lbz       r5, 0x79(r30)
	  rlwinm    r6,r0,28,28,31
	  rlwinm    r7,r0,0,28,31
	  rlwinm    r4,r5,28,28,31
	  rlwinm    r5,r5,0,28,31
	  bl        0x97B68
	  lbz       r5, 0x7D(r30)
	  mr        r3, r31
	  lbz       r6, 0x7E(r30)
	  rlwinm    r0,r5,0,24,26
	  srawi     r4, r0, 0x5
	  rlwinm    r7,r6,28,29,31
	  rlwinm    r0,r6,25,31,31
	  rlwimi    r0,r5,1,29,30
	  rlwinm    r4,r4,0,24,31
	  rlwinm    r5,r5,30,29,31
	  rlwinm    r6,r0,0,24,31
	  bl        0x97B7C
	  lbz       r7, 0x78(r30)
	  mr        r3, r31
	  rlwinm    r0,r7,0,26,27
	  rlwinm    r5,r7,0,30,31
	  srawi     r6, r0, 0x4
	  rlwinm    r9,r7,30,31,31
	  rlwinm    r0,r7,29,29,30
	  cmplwi    r5, 0x3
	  add       r4, r9, r0
	  rlwinm    r8,r7,26,30,31
	  addi      r0, r4, 0x8
	  rlwinm    r6,r6,0,24,31
	  rlwinm    r7,r7,29,31,31
	  rlwinm    r0,r0,0,24,31
	  beq-      .loc_0x168
	  mr        r0, r9

	.loc_0x168:
	  rlwinm    r4,r0,0,24,31
	  bl        0x97B78
	  lbz       r7, 0x7C(r30)
	  mr        r3, r31
	  rlwinm    r0,r7,0,26,27
	  rlwinm    r5,r7,0,30,31
	  srawi     r6, r0, 0x4
	  rlwinm    r9,r7,30,31,31
	  rlwinm    r0,r7,29,29,30
	  cmplwi    r5, 0x3
	  add       r4, r9, r0
	  rlwinm    r8,r7,26,30,31
	  addi      r0, r4, 0x8
	  rlwinm    r6,r6,0,24,31
	  rlwinm    r7,r7,29,31,31
	  rlwinm    r0,r0,0,24,31
	  beq-      .loc_0x1B0
	  mr        r0, r9

	.loc_0x1B0:
	  rlwinm    r4,r0,0,24,31
	  bl        0x97B98
	  add       r28, r29, r31
	  li        r4, 0
	  lbz       r0, 0x108(r28)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x1D0
	  mr        r4, r0

	.loc_0x1D0:
	  mr        r3, r31
	  bl        0x97D4C
	  lbz       r0, 0x118(r28)
	  li        r4, 0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x1EC
	  mr        r4, r0

	.loc_0x1EC:
	  mr        r3, r31
	  bl        0x97D8C
	  addi      r30, r30, 0x8
	  addi      r31, r31, 0x1

	.loc_0x1FC:
	  lbz       r0, 0x76(r29)
	  cmpw      r31, r0
	  blt+      .loc_0xD8
	  li        r28, 0
	  mr        r30, r29

	.loc_0x210:
	  lwz       r0, 0xF8(r30)
	  mr        r3, r28
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        0x97C8C
	  addi      r28, r28, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r28, 0x4
	  blt+      .loc_0x210
	  mr        r30, r29
	  li        r28, 0
	  b         .loc_0x25C

	.loc_0x240:
	  lbz       r0, 0x7E(r30)
	  mr        r3, r28
	  rlwinm    r4,r0,0,30,31
	  rlwinm    r5,r0,30,30,31
	  bl        0x97D88
	  addi      r30, r30, 0x8
	  addi      r28, r28, 0x1

	.loc_0x25C:
	  lbz       r0, 0x76(r29)
	  cmpw      r28, r0
	  blt+      .loc_0x240
	  li        r28, 0

	.loc_0x26C:
	  addi      r0, r28, 0x128
	  mr        r3, r28
	  lbzx      r0, r29, r0
	  rlwinm    r4,r0,26,30,31
	  rlwinm    r5,r0,28,30,31
	  rlwinm    r6,r0,30,30,31
	  rlwinm    r7,r0,0,30,31
	  bl        0x97D98
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x4
	  blt+      .loc_0x26C
	  li        r28, 0
	  b         .loc_0x2B8

	.loc_0x2A0:
	  rlwinm    r3,r28,2,22,29
	  mr        r4, r28
	  addi      r3, r3, 0x12C
	  add       r3, r29, r3
	  bl        0x8A68
	  addi      r28, r28, 0x1

	.loc_0x2B8:
	  lbz       r0, 0x76(r29)
	  rlwinm    r3,r28,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x2A0
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80050B94
 * Size:	000048
 */
void J2DTevBlock16::loadTexture(_GXTexMapID, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0x8
	  stw       r0, 0x14(r1)
	  bge-      .loc_0x38
	  rlwinm    r0,r5,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x16C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  bl        -0x1D598

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80050BDC
 * Size:	000148
 */
void J2DIndBlockFull::initialize()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  lis       r4, 0x8048
	  stb       r0, 0x4(r3)
	  subi      r4, r4, 0x7974
	  subi      r6, r2, 0x7A4C
	  lbz       r0, -0x7A4C(r2)
	  addi      r5, r4, 0xC
	  stb       r0, 0x5(r3)
	  lbz       r0, 0x1(r6)
	  stb       r0, 0x6(r3)
	  lbz       r0, -0x7A4C(r2)
	  stb       r0, 0x7(r3)
	  lbz       r0, 0x1(r6)
	  stb       r0, 0x8(r3)
	  lbz       r0, -0x7A4C(r2)
	  stb       r0, 0x9(r3)
	  lbz       r0, 0x1(r6)
	  stb       r0, 0xA(r3)
	  lbz       r0, -0x7A4C(r2)
	  stb       r0, 0xB(r3)
	  lbz       r0, 0x1(r6)
	  stb       r0, 0xC(r3)
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x14(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x10(r4)
	  stfs      f0, 0x20(r3)
	  lfs       f0, 0x14(r4)
	  stfs      f0, 0x24(r3)
	  lbz       r0, 0x18(r4)
	  stb       r0, 0x28(r3)
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x2C(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x30(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x34(r3)
	  lfs       f0, 0x0(r5)
	  stfs      f0, 0x38(r3)
	  lfs       f0, 0x4(r5)
	  stfs      f0, 0x3C(r3)
	  lfs       f0, 0x8(r5)
	  stfs      f0, 0x40(r3)
	  lbz       r0, 0x18(r4)
	  stb       r0, 0x44(r3)
	  lfs       f0, 0x0(r4)
	  subi      r6, r2, 0x7A40
	  stfs      f0, 0x48(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x4C(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x50(r3)
	  lfs       f0, 0x0(r5)
	  stfs      f0, 0x54(r3)
	  lfs       f0, 0x4(r5)
	  stfs      f0, 0x58(r3)
	  lfs       f0, 0x8(r5)
	  stfs      f0, 0x5C(r3)
	  lbz       r0, 0x18(r4)
	  stb       r0, 0x60(r3)
	  lbz       r0, -0x7A40(r2)
	  stb       r0, 0x64(r3)
	  lbz       r0, 0x1(r6)
	  stb       r0, 0x65(r3)
	  lbz       r0, -0x7A40(r2)
	  stb       r0, 0x66(r3)
	  lbz       r0, 0x1(r6)
	  stb       r0, 0x67(r3)
	  lbz       r0, -0x7A40(r2)
	  stb       r0, 0x68(r3)
	  lbz       r0, 0x1(r6)
	  stb       r0, 0x69(r3)
	  lbz       r0, -0x7A40(r2)
	  stb       r0, 0x6A(r3)
	  lbz       r0, 0x1(r6)
	  stb       r0, 0x6B(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80050D24
 * Size:	0000CC
 */
void J2DIndBlockFull::setGX()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lbz       r3, 0x4(r3)
	  bl        0x97614
	  li        r31, 0
	  b         .loc_0x44

	.loc_0x28:
	  rlwinm    r0,r31,0,24,31
	  mr        r4, r31
	  mulli     r3, r0, 0x1C
	  addi      r3, r3, 0x10
	  add       r3, r30, r3
	  bl        0x88B8
	  addi      r31, r31, 0x1

	.loc_0x44:
	  lbz       r0, 0x4(r30)
	  rlwinm    r3,r31,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x28
	  li        r31, 0
	  b         .loc_0x74

	.loc_0x5C:
	  rlwinm    r3,r31,1,23,30
	  mr        r4, r31
	  addi      r3, r3, 0x64
	  add       r3, r30, r3
	  bl        0x88B8
	  addi      r31, r31, 0x1

	.loc_0x74:
	  lbz       r0, 0x4(r30)
	  rlwinm    r3,r31,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x5C
	  li        r31, 0
	  b         .loc_0xA4

	.loc_0x8C:
	  rlwinm    r3,r31,1,23,30
	  mr        r4, r31
	  addi      r3, r3, 0x5
	  add       r3, r30, r3
	  bl        0x88B8
	  addi      r31, r31, 0x1

	.loc_0xA4:
	  lbz       r0, 0x4(r30)
	  rlwinm    r3,r31,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x8C
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
 * Address:	80050DF0
 * Size:	000044
 */
void J2DPEBlock::initialize()
{
	/*
	.loc_0x0:
	  lhz       r6, -0x7A22(r2)
	  li        r4, 0
	  subi      r5, r2, 0x7A30
	  lbz       r0, -0x7A2C(r2)
	  sth       r6, 0x0(r3)
	  stb       r4, 0x2(r3)
	  stb       r4, 0x3(r3)
	  lbz       r4, -0x7A30(r2)
	  stb       r4, 0x4(r3)
	  lbz       r4, 0x1(r5)
	  stb       r4, 0x5(r3)
	  lbz       r4, 0x2(r5)
	  stb       r4, 0x6(r3)
	  lbz       r4, 0x3(r5)
	  stb       r4, 0x7(r3)
	  stb       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80050E34
 * Size:	000060
 */
void J2DPEBlock::setGX()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lhz       r0, 0x0(r3)
	  lbz       r4, 0x2(r3)
	  lbz       r7, 0x3(r31)
	  rlwinm    r3,r0,27,29,31
	  rlwinm    r5,r0,29,30,31
	  rlwinm    r6,r0,0,29,31
	  bl        0x97AEC
	  lbz       r3, 0x4(r31)
	  lbz       r4, 0x5(r31)
	  lbz       r5, 0x6(r31)
	  lbz       r6, 0x7(r31)
	  bl        0x98264
	  lbz       r3, 0x8(r31)
	  bl        0x98444
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80050E94
 * Size:	00000C
 */
void J2DIndBlockFull::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x4942
	  addi      r3, r3, 0x4C46
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80050EA0
 * Size:	000008
 */
void J2DIndBlockFull::setIndTexStageNum(unsigned char)
{
	/*
	.loc_0x0:
	  stb       r4, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80050EA8
 * Size:	000008
 */
void J2DIndBlockFull::getIndTexStageNum() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80050EB0
 * Size:	00001C
 */
void J2DIndBlockFull::setIndTexOrder(unsigned long, J2DIndTexOrder)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  lbz       r4, 0x0(r5)
	  add       r3, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r4, 0x5(r3)
	  stb       r0, 0x6(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80050ECC
 * Size:	000014
 */
void J2DIndBlockFull::getIndTexOrder(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,1,0,30
	  mr        r0, r3
	  addi      r3, r4, 0x5
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80050EE0
 * Size:	000044
 */
void J2DIndBlockFull::setIndTexMtx(unsigned long, J2DIndTexMtx)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x1C
	  lfs       f2, 0x0(r5)
	  lfs       f1, 0x4(r5)
	  lfs       f0, 0x8(r5)
	  add       r3, r3, r0
	  lbz       r0, 0x18(r5)
	  stfs      f2, 0x10(r3)
	  lfs       f2, 0xC(r5)
	  stfs      f1, 0x14(r3)
	  lfs       f1, 0x10(r5)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0x14(r5)
	  stfs      f2, 0x1C(r3)
	  stfs      f1, 0x20(r3)
	  stfs      f0, 0x24(r3)
	  stb       r0, 0x28(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80050F24
 * Size:	000014
 */
void J2DIndBlockFull::getIndTexMtx(unsigned long)
{
	/*
	.loc_0x0:
	  mulli     r4, r4, 0x1C
	  mr        r0, r3
	  addi      r3, r4, 0x10
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80050F38
 * Size:	00001C
 */
void J2DIndBlockFull::setIndTexCoordScale(unsigned long, J2DIndTexCoordScale)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  lbz       r4, 0x0(r5)
	  add       r3, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r4, 0x64(r3)
	  stb       r0, 0x65(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80050F54
 * Size:	000014
 */
void J2DIndBlockFull::getIndTexCoordScale(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,1,0,30
	  mr        r0, r3
	  addi      r3, r4, 0x64
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80050F68
 * Size:	00009C
 */
void J2DIndBlockFull::~J2DIndBlockFull()
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
	  beq-      .loc_0x80
	  lis       r3, 0x804A
	  lis       r4, 0x8005
	  addi      r0, r3, 0xC78
	  li        r5, 0x2
	  stw       r0, 0x0(r30)
	  addi      r3, r30, 0x64
	  addi      r4, r4, 0x1040
	  li        r6, 0x4
	  bl        0x7081C
	  lis       r4, 0x8005
	  addi      r3, r30, 0x10
	  addi      r4, r4, 0x1004
	  li        r5, 0x1C
	  li        r6, 0x3
	  bl        0x70804
	  cmplwi    r30, 0
	  beq-      .loc_0x70
	  lis       r3, 0x804A
	  addi      r0, r3, 0xCB0
	  stw       r0, 0x0(r30)

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2CF30

	.loc_0x80:
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
 * Address:	80051004
 * Size:	00003C
 */
void J2DIndTexMtx::~J2DIndTexMtx()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x24
	  extsh.    r0, r4
	  ble-      .loc_0x24
	  bl        -0x2CF70

	.loc_0x24:
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
 * Address:	80051040
 * Size:	00003C
 */
void J2DIndTexCoordScale::~J2DIndTexCoordScale()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x24
	  extsh.    r0, r4
	  ble-      .loc_0x24
	  bl        -0x2CFAC

	.loc_0x24:
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
 * Address:	8005107C
 * Size:	000004
 */
void J2DIndBlock::initialize()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051080
 * Size:	000004
 */
void J2DIndBlock::setGX()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051084
 * Size:	000004
 */
void J2DIndBlock::setIndTexStageNum(unsigned char)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051088
 * Size:	000004
 */
void J2DIndBlock::setIndTexOrder(unsigned long, J2DIndTexOrder)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005108C
 * Size:	000008
 */
void J2DIndBlock::getIndTexOrder(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051094
 * Size:	000004
 */
void J2DIndBlock::setIndTexMtx(unsigned long, J2DIndTexMtx)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051098
 * Size:	000008
 */
void J2DIndBlock::getIndTexMtx(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800510A0
 * Size:	000004
 */
void J2DIndBlock::setIndTexCoordScale(unsigned long, J2DIndTexCoordScale)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800510A4
 * Size:	000008
 */
void J2DIndBlock::getIndTexCoordScale(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800510AC
 * Size:	000048
 */
void J2DIndBlock::~J2DIndBlock()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804A
	  extsh.    r0, r4
	  addi      r0, r5, 0xCB0
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x2D024

	.loc_0x30:
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
 * Address:	800510F4
 * Size:	00000C
 */
void J2DTevBlock16::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5456
	  addi      r3, r3, 0x3136
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051100
 * Size:	000008
 */
void J2DTevBlock16::getMaxStage()
{
	/*
	.loc_0x0:
	  li        r3, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051108
 * Size:	000010
 */
void J2DTevBlock16::setTexNo(unsigned long, unsigned short)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  sth       r5, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051118
 * Size:	000010
 */
void J2DTevBlock16::getTexNo(unsigned long) const
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  lhz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051128
 * Size:	000008
 */
void J2DTevBlock16::setFontNo(unsigned short)
{
	/*
	.loc_0x0:
	  sth       r4, 0x14(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051130
 * Size:	000008
 */
void J2DTevBlock16::getFontNo() const
{
	/*
	.loc_0x0:
	  lhz       r3, 0x14(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051138
 * Size:	000024
 */
void J2DTevBlock16::setTevOrder(unsigned long, J2DTevOrder)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  lbz       r0, 0x0(r5)
	  add       r4, r3, r4
	  lbz       r3, 0x1(r5)
	  stb       r0, 0x16(r4)
	  lbz       r0, 0x2(r5)
	  stb       r3, 0x17(r4)
	  stb       r0, 0x18(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005115C
 * Size:	000014
 */
void J2DTevBlock16::getTevOrder(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x16
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051170
 * Size:	00002C
 */
void J2DTevBlock16::setTevColor(unsigned long, J2DGXColorS10)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lha       r6, 0x0(r5)
	  add       r4, r3, r0
	  lha       r0, 0x2(r5)
	  sth       r6, 0x56(r4)
	  lha       r3, 0x4(r5)
	  sth       r0, 0x58(r4)
	  lha       r0, 0x6(r5)
	  sth       r3, 0x5A(r4)
	  sth       r0, 0x5C(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005119C
 * Size:	000014
 */
void J2DTevBlock16::getTevColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0x56
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800511B0
 * Size:	00002C
 */
void J2DTevBlock16::setTevKColor(unsigned long, JUtility::TColor)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0xF8(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0xF9(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0xFA(r4)
	  stb       r0, 0xFB(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800511DC
 * Size:	000014
 */
void J2DTevBlock16::getTevKColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0xF8
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800511F0
 * Size:	00000C
 */
void J2DTevBlock16::setTevKColorSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  stb       r5, 0x108(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800511FC
 * Size:	00000C
 */
void J2DTevBlock16::getTevKColorSel(unsigned long)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  lbz       r3, 0x108(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051208
 * Size:	00000C
 */
void J2DTevBlock16::setTevKAlphaSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  stb       r5, 0x118(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051214
 * Size:	00000C
 */
void J2DTevBlock16::getTevKAlphaSel(unsigned long)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  lbz       r3, 0x118(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051220
 * Size:	000008
 */
void J2DTevBlock16::setTevStageNum(unsigned char)
{
	/*
	.loc_0x0:
	  stb       r4, 0x76(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051228
 * Size:	000008
 */
void J2DTevBlock16::getTevStageNum() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0x76(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051230
 * Size:	00003C
 */
void J2DTevBlock16::setTevStage(unsigned long, J2DTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r6, 0x1(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x2(r5)
	  stb       r6, 0x78(r4)
	  lbz       r3, 0x3(r5)
	  stb       r0, 0x79(r4)
	  lbz       r0, 0x5(r5)
	  stb       r3, 0x7A(r4)
	  lbz       r3, 0x6(r5)
	  stb       r0, 0x7C(r4)
	  lbz       r0, 0x7(r5)
	  stb       r3, 0x7D(r4)
	  stb       r0, 0x7E(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005126C
 * Size:	000014
 */
void J2DTevBlock16::getTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0x77
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051280
 * Size:	000038
 */
void J2DTevBlock16::setTevSwapModeInfo(unsigned long, J2DTevSwapModeInfo)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r4, 0x1(r5)
	  add       r6, r3, r0
	  lbz       r0, 0x0(r5)
	  lbz       r5, 0x7E(r6)
	  rlwinm    r3,r4,2,0,29
	  rlwinm    r4,r5,0,30,27
	  or        r3, r4, r3
	  stb       r3, 0x7E(r6)
	  lbz       r3, 0x7E(r6)
	  rlwinm    r3,r3,0,0,29
	  or        r0, r3, r0
	  stb       r0, 0x7E(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800512B8
 * Size:	000010
 */
void J2DTevBlock16::setTevSwapModeTable(unsigned long, J2DTevSwapModeTable)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0x128(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800512C8
 * Size:	000010
 */
void J2DTevBlock16::getTevSwapModeTable(unsigned long)
{
	/*
	.loc_0x0:
	  mr        r0, r3
	  addi      r3, r4, 0x128
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800512D8
 * Size:	000014
 */
void J2DTevBlock16::setIndTevStage(unsigned long, J2DIndTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lwz       r4, 0x0(r5)
	  add       r3, r3, r0
	  stw       r4, 0x12C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800512EC
 * Size:	000014
 */
void J2DTevBlock16::getIndTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x12C
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051300
 * Size:	000030
 */
void J2DTevBlock16::insertTexture(unsigned long, const ResTIMG*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051330
 * Size:	000020
 */
void J2DTevBlock16::getTexture(unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0x8
	  blt-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x16C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051350
 * Size:	000020
 */
void J2DTevBlock16::getPalette(unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0x8
	  blt-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x18C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051370
 * Size:	000008
 */
void J2DTevBlock16::getFont()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1AC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051378
 * Size:	000010
 */
void J2DTevBlock16::setUndeleteFlag(unsigned char)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x1B0(r3)
	  and       r0, r0, r4
	  stb       r0, 0x1B0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051388
 * Size:	00000C
 */
void J2DTevBlock16::setFontUndeleteFlag()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stb       r0, 0x1B1(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051394
 * Size:	00000C
 */
void J2DTevBlock8::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5456
	  addi      r3, r3, 0x4238
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800513A0
 * Size:	000008
 */
void J2DTevBlock8::getMaxStage()
{
	/*
	.loc_0x0:
	  li        r3, 0x8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800513A8
 * Size:	000010
 */
void J2DTevBlock8::setTexNo(unsigned long, unsigned short)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  sth       r5, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800513B8
 * Size:	000010
 */
void J2DTevBlock8::getTexNo(unsigned long) const
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  lhz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800513C8
 * Size:	000008
 */
void J2DTevBlock8::setFontNo(unsigned short)
{
	/*
	.loc_0x0:
	  sth       r4, 0x14(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800513D0
 * Size:	000008
 */
void J2DTevBlock8::getFontNo() const
{
	/*
	.loc_0x0:
	  lhz       r3, 0x14(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800513D8
 * Size:	000024
 */
void J2DTevBlock8::setTevOrder(unsigned long, J2DTevOrder)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  lbz       r0, 0x0(r5)
	  add       r4, r3, r4
	  lbz       r3, 0x1(r5)
	  stb       r0, 0x16(r4)
	  lbz       r0, 0x2(r5)
	  stb       r3, 0x17(r4)
	  stb       r0, 0x18(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800513FC
 * Size:	000014
 */
void J2DTevBlock8::getTevOrder(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x16
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051410
 * Size:	00002C
 */
void J2DTevBlock8::setTevColor(unsigned long, J2DGXColorS10)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lha       r6, 0x0(r5)
	  add       r4, r3, r0
	  lha       r0, 0x2(r5)
	  sth       r6, 0x36(r4)
	  lha       r3, 0x4(r5)
	  sth       r0, 0x38(r4)
	  lha       r0, 0x6(r5)
	  sth       r3, 0x3A(r4)
	  sth       r0, 0x3C(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005143C
 * Size:	000014
 */
void J2DTevBlock8::getTevColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0x36
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051450
 * Size:	00002C
 */
void J2DTevBlock8::setTevKColor(unsigned long, JUtility::TColor)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0x98(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0x99(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0x9A(r4)
	  stb       r0, 0x9B(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005147C
 * Size:	000014
 */
void J2DTevBlock8::getTevKColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x98
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051490
 * Size:	00000C
 */
void J2DTevBlock8::setTevKColorSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  stb       r5, 0xA8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005149C
 * Size:	00000C
 */
void J2DTevBlock8::getTevKColorSel(unsigned long)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  lbz       r3, 0xA8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800514A8
 * Size:	00000C
 */
void J2DTevBlock8::setTevKAlphaSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  stb       r5, 0xB0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800514B4
 * Size:	00000C
 */
void J2DTevBlock8::getTevKAlphaSel(unsigned long)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  lbz       r3, 0xB0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800514C0
 * Size:	000008
 */
void J2DTevBlock8::setTevStageNum(unsigned char)
{
	/*
	.loc_0x0:
	  stb       r4, 0x56(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800514C8
 * Size:	000008
 */
void J2DTevBlock8::getTevStageNum() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0x56(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800514D0
 * Size:	00003C
 */
void J2DTevBlock8::setTevStage(unsigned long, J2DTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r6, 0x1(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x2(r5)
	  stb       r6, 0x58(r4)
	  lbz       r3, 0x3(r5)
	  stb       r0, 0x59(r4)
	  lbz       r0, 0x5(r5)
	  stb       r3, 0x5A(r4)
	  lbz       r3, 0x6(r5)
	  stb       r0, 0x5C(r4)
	  lbz       r0, 0x7(r5)
	  stb       r3, 0x5D(r4)
	  stb       r0, 0x5E(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005150C
 * Size:	000014
 */
void J2DTevBlock8::getTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0x57
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051520
 * Size:	000038
 */
void J2DTevBlock8::setTevSwapModeInfo(unsigned long, J2DTevSwapModeInfo)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r4, 0x1(r5)
	  add       r6, r3, r0
	  lbz       r0, 0x0(r5)
	  lbz       r5, 0x5E(r6)
	  rlwinm    r3,r4,2,0,29
	  rlwinm    r4,r5,0,30,27
	  or        r3, r4, r3
	  stb       r3, 0x5E(r6)
	  lbz       r3, 0x5E(r6)
	  rlwinm    r3,r3,0,0,29
	  or        r0, r3, r0
	  stb       r0, 0x5E(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051558
 * Size:	000010
 */
void J2DTevBlock8::setTevSwapModeTable(unsigned long, J2DTevSwapModeTable)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0xB8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051568
 * Size:	000010
 */
void J2DTevBlock8::getTevSwapModeTable(unsigned long)
{
	/*
	.loc_0x0:
	  mr        r0, r3
	  addi      r3, r4, 0xB8
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051578
 * Size:	000014
 */
void J2DTevBlock8::setIndTevStage(unsigned long, J2DIndTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lwz       r4, 0x0(r5)
	  add       r3, r3, r0
	  stw       r4, 0xBC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005158C
 * Size:	000014
 */
void J2DTevBlock8::getIndTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0xBC
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800515A0
 * Size:	000030
 */
void J2DTevBlock8::insertTexture(unsigned long, const ResTIMG*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800515D0
 * Size:	000020
 */
void J2DTevBlock8::getTexture(unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0x8
	  blt-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0xDC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800515F0
 * Size:	000020
 */
void J2DTevBlock8::getPalette(unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0x8
	  blt-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0xFC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051610
 * Size:	000008
 */
void J2DTevBlock8::getFont()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x11C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051618
 * Size:	000010
 */
void J2DTevBlock8::setUndeleteFlag(unsigned char)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x120(r3)
	  and       r0, r0, r4
	  stb       r0, 0x120(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051628
 * Size:	00000C
 */
void J2DTevBlock8::setFontUndeleteFlag()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stb       r0, 0x121(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051634
 * Size:	00000C
 */
void J2DTevBlock4::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5456
	  addi      r3, r3, 0x4234
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051640
 * Size:	000008
 */
void J2DTevBlock4::getMaxStage()
{
	/*
	.loc_0x0:
	  li        r3, 0x4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051648
 * Size:	000010
 */
void J2DTevBlock4::setTexNo(unsigned long, unsigned short)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  sth       r5, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051658
 * Size:	000010
 */
void J2DTevBlock4::getTexNo(unsigned long) const
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  lhz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051668
 * Size:	000008
 */
void J2DTevBlock4::setFontNo(unsigned short)
{
	/*
	.loc_0x0:
	  sth       r4, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051670
 * Size:	000008
 */
void J2DTevBlock4::getFontNo() const
{
	/*
	.loc_0x0:
	  lhz       r3, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051678
 * Size:	000024
 */
void J2DTevBlock4::setTevOrder(unsigned long, J2DTevOrder)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  lbz       r0, 0x0(r5)
	  add       r4, r3, r4
	  lbz       r3, 0x1(r5)
	  stb       r0, 0xE(r4)
	  lbz       r0, 0x2(r5)
	  stb       r3, 0xF(r4)
	  stb       r0, 0x10(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005169C
 * Size:	000014
 */
void J2DTevBlock4::getTevOrder(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0xE
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800516B0
 * Size:	00002C
 */
void J2DTevBlock4::setTevColor(unsigned long, J2DGXColorS10)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lha       r6, 0x0(r5)
	  add       r4, r3, r0
	  lha       r0, 0x2(r5)
	  sth       r6, 0x1E(r4)
	  lha       r3, 0x4(r5)
	  sth       r0, 0x20(r4)
	  lha       r0, 0x6(r5)
	  sth       r3, 0x22(r4)
	  sth       r0, 0x24(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800516DC
 * Size:	000014
 */
void J2DTevBlock4::getTevColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0x1E
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800516F0
 * Size:	00002C
 */
void J2DTevBlock4::setTevKColor(unsigned long, JUtility::TColor)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0x60(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0x61(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0x62(r4)
	  stb       r0, 0x63(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005171C
 * Size:	000014
 */
void J2DTevBlock4::getTevKColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x60
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051730
 * Size:	00000C
 */
void J2DTevBlock4::setTevKColorSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  stb       r5, 0x70(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005173C
 * Size:	00000C
 */
void J2DTevBlock4::getTevKColorSel(unsigned long)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  lbz       r3, 0x70(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051748
 * Size:	00000C
 */
void J2DTevBlock4::setTevKAlphaSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  stb       r5, 0x74(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051754
 * Size:	00000C
 */
void J2DTevBlock4::getTevKAlphaSel(unsigned long)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  lbz       r3, 0x74(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051760
 * Size:	000008
 */
void J2DTevBlock4::setTevStageNum(unsigned char)
{
	/*
	.loc_0x0:
	  stb       r4, 0x3E(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051768
 * Size:	000008
 */
void J2DTevBlock4::getTevStageNum() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0x3E(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051770
 * Size:	00003C
 */
void J2DTevBlock4::setTevStage(unsigned long, J2DTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r6, 0x1(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x2(r5)
	  stb       r6, 0x40(r4)
	  lbz       r3, 0x3(r5)
	  stb       r0, 0x41(r4)
	  lbz       r0, 0x5(r5)
	  stb       r3, 0x42(r4)
	  lbz       r3, 0x6(r5)
	  stb       r0, 0x44(r4)
	  lbz       r0, 0x7(r5)
	  stb       r3, 0x45(r4)
	  stb       r0, 0x46(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800517AC
 * Size:	000014
 */
void J2DTevBlock4::getTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0x3F
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800517C0
 * Size:	000038
 */
void J2DTevBlock4::setTevSwapModeInfo(unsigned long, J2DTevSwapModeInfo)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r4, 0x1(r5)
	  add       r6, r3, r0
	  lbz       r0, 0x0(r5)
	  lbz       r5, 0x46(r6)
	  rlwinm    r3,r4,2,0,29
	  rlwinm    r4,r5,0,30,27
	  or        r3, r4, r3
	  stb       r3, 0x46(r6)
	  lbz       r3, 0x46(r6)
	  rlwinm    r3,r3,0,0,29
	  or        r0, r3, r0
	  stb       r0, 0x46(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800517F8
 * Size:	000010
 */
void J2DTevBlock4::setTevSwapModeTable(unsigned long, J2DTevSwapModeTable)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0x78(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051808
 * Size:	000010
 */
void J2DTevBlock4::getTevSwapModeTable(unsigned long)
{
	/*
	.loc_0x0:
	  mr        r0, r3
	  addi      r3, r4, 0x78
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051818
 * Size:	000014
 */
void J2DTevBlock4::setIndTevStage(unsigned long, J2DIndTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lwz       r4, 0x0(r5)
	  add       r3, r3, r0
	  stw       r4, 0x7C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005182C
 * Size:	000014
 */
void J2DTevBlock4::getIndTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x7C
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051840
 * Size:	000030
 */
void J2DTevBlock4::insertTexture(unsigned long, const ResTIMG*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051870
 * Size:	000020
 */
void J2DTevBlock4::getTexture(unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0x4
	  blt-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x8C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051890
 * Size:	000020
 */
void J2DTevBlock4::getPalette(unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0x4
	  blt-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x9C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800518B0
 * Size:	000008
 */
void J2DTevBlock4::getFont()
{
	/*
	.loc_0x0:
	  lwz       r3, 0xAC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800518B8
 * Size:	000010
 */
void J2DTevBlock4::setUndeleteFlag(unsigned char)
{
	/*
	.loc_0x0:
	  lbz       r0, 0xB0(r3)
	  and       r0, r0, r4
	  stb       r0, 0xB0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800518C8
 * Size:	000010
 */
void J2DTevBlock4::setFontUndeleteFlag()
{
	/*
	.loc_0x0:
	  lbz       r0, 0xB0(r3)
	  rlwinm    r0,r0,0,25,31
	  stb       r0, 0xB0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800518D8
 * Size:	00000C
 */
void J2DTevBlock2::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5456
	  addi      r3, r3, 0x4232
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800518E4
 * Size:	000008
 */
void J2DTevBlock2::getMaxStage()
{
	/*
	.loc_0x0:
	  li        r3, 0x2
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800518EC
 * Size:	000010
 */
void J2DTevBlock2::setTexNo(unsigned long, unsigned short)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  sth       r5, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800518FC
 * Size:	000010
 */
void J2DTevBlock2::getTexNo(unsigned long) const
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  lhz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005190C
 * Size:	000008
 */
void J2DTevBlock2::setFontNo(unsigned short)
{
	/*
	.loc_0x0:
	  sth       r4, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051914
 * Size:	000008
 */
void J2DTevBlock2::getFontNo() const
{
	/*
	.loc_0x0:
	  lhz       r3, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005191C
 * Size:	000024
 */
void J2DTevBlock2::setTevOrder(unsigned long, J2DTevOrder)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  lbz       r0, 0x0(r5)
	  add       r4, r3, r4
	  lbz       r3, 0x1(r5)
	  stb       r0, 0xA(r4)
	  lbz       r0, 0x2(r5)
	  stb       r3, 0xB(r4)
	  stb       r0, 0xC(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051940
 * Size:	000014
 */
void J2DTevBlock2::getTevOrder(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0xA
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051954
 * Size:	00002C
 */
void J2DTevBlock2::setTevColor(unsigned long, J2DGXColorS10)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lha       r6, 0x0(r5)
	  add       r4, r3, r0
	  lha       r0, 0x2(r5)
	  sth       r6, 0x12(r4)
	  lha       r3, 0x4(r5)
	  sth       r0, 0x14(r4)
	  lha       r0, 0x6(r5)
	  sth       r3, 0x16(r4)
	  sth       r0, 0x18(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051980
 * Size:	000014
 */
void J2DTevBlock2::getTevColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0x12
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051994
 * Size:	00002C
 */
void J2DTevBlock2::setTevKColor(unsigned long, JUtility::TColor)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0x44(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0x45(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0x46(r4)
	  stb       r0, 0x47(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800519C0
 * Size:	000014
 */
void J2DTevBlock2::getTevKColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x44
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800519D4
 * Size:	00000C
 */
void J2DTevBlock2::setTevKColorSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  stb       r5, 0x54(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800519E0
 * Size:	00000C
 */
void J2DTevBlock2::getTevKColorSel(unsigned long)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  lbz       r3, 0x54(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800519EC
 * Size:	00000C
 */
void J2DTevBlock2::setTevKAlphaSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  stb       r5, 0x56(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800519F8
 * Size:	00000C
 */
void J2DTevBlock2::getTevKAlphaSel(unsigned long)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  lbz       r3, 0x56(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051A04
 * Size:	000008
 */
void J2DTevBlock2::setTevStageNum(unsigned char)
{
	/*
	.loc_0x0:
	  stb       r4, 0x32(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051A0C
 * Size:	000008
 */
void J2DTevBlock2::getTevStageNum() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0x32(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051A14
 * Size:	00003C
 */
void J2DTevBlock2::setTevStage(unsigned long, J2DTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r6, 0x1(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x2(r5)
	  stb       r6, 0x34(r4)
	  lbz       r3, 0x3(r5)
	  stb       r0, 0x35(r4)
	  lbz       r0, 0x5(r5)
	  stb       r3, 0x36(r4)
	  lbz       r3, 0x6(r5)
	  stb       r0, 0x38(r4)
	  lbz       r0, 0x7(r5)
	  stb       r3, 0x39(r4)
	  stb       r0, 0x3A(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051A50
 * Size:	000014
 */
void J2DTevBlock2::getTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0x33
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051A64
 * Size:	000038
 */
void J2DTevBlock2::setTevSwapModeInfo(unsigned long, J2DTevSwapModeInfo)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r4, 0x1(r5)
	  add       r6, r3, r0
	  lbz       r0, 0x0(r5)
	  lbz       r5, 0x3A(r6)
	  rlwinm    r3,r4,2,0,29
	  rlwinm    r4,r5,0,30,27
	  or        r3, r4, r3
	  stb       r3, 0x3A(r6)
	  lbz       r3, 0x3A(r6)
	  rlwinm    r3,r3,0,0,29
	  or        r0, r3, r0
	  stb       r0, 0x3A(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051A9C
 * Size:	000010
 */
void J2DTevBlock2::setTevSwapModeTable(unsigned long, J2DTevSwapModeTable)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0x58(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051AAC
 * Size:	000010
 */
void J2DTevBlock2::getTevSwapModeTable(unsigned long)
{
	/*
	.loc_0x0:
	  mr        r0, r3
	  addi      r3, r4, 0x58
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051ABC
 * Size:	000014
 */
void J2DTevBlock2::setIndTevStage(unsigned long, J2DIndTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lwz       r4, 0x0(r5)
	  add       r3, r3, r0
	  stw       r4, 0x5C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051AD0
 * Size:	000014
 */
void J2DTevBlock2::getIndTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x5C
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051AE4
 * Size:	000030
 */
void J2DTevBlock2::insertTexture(unsigned long, const ResTIMG*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051B14
 * Size:	000020
 */
void J2DTevBlock2::getTexture(unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0x2
	  blt-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x64(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051B34
 * Size:	000020
 */
void J2DTevBlock2::getPalette(unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0x2
	  blt-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x6C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051B54
 * Size:	000008
 */
void J2DTevBlock2::getFont()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x74(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051B5C
 * Size:	000010
 */
void J2DTevBlock2::setUndeleteFlag(unsigned char)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x78(r3)
	  and       r0, r0, r4
	  stb       r0, 0x78(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051B6C
 * Size:	000010
 */
void J2DTevBlock2::setFontUndeleteFlag()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x78(r3)
	  rlwinm    r0,r0,0,25,31
	  stb       r0, 0x78(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051B7C
 * Size:	00000C
 */
void J2DTevBlock1::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5456
	  addi      r3, r3, 0x4231
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051B88
 * Size:	000008
 */
void J2DTevBlock1::getMaxStage()
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051B90
 * Size:	000010
 */
void J2DTevBlock1::setTexNo(unsigned long, unsigned short)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  sth       r5, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051BA0
 * Size:	000010
 */
void J2DTevBlock1::getTexNo(unsigned long) const
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  lhz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051BB0
 * Size:	000008
 */
void J2DTevBlock1::setFontNo(unsigned short)
{
	/*
	.loc_0x0:
	  sth       r4, 0x6(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051BB8
 * Size:	000008
 */
void J2DTevBlock1::getFontNo() const
{
	/*
	.loc_0x0:
	  lhz       r3, 0x6(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051BC0
 * Size:	000024
 */
void J2DTevBlock1::setTevOrder(unsigned long, J2DTevOrder)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  lbz       r0, 0x0(r5)
	  add       r4, r3, r4
	  lbz       r3, 0x1(r5)
	  stb       r0, 0x8(r4)
	  lbz       r0, 0x2(r5)
	  stb       r3, 0x9(r4)
	  stb       r0, 0xA(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051BE4
 * Size:	000014
 */
void J2DTevBlock1::getTevOrder(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x8
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051BF8
 * Size:	00002C
 */
void J2DTevBlock1::setTevColor(unsigned long, J2DGXColorS10)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lha       r6, 0x0(r5)
	  add       r4, r3, r0
	  lha       r0, 0x2(r5)
	  sth       r6, 0xC(r4)
	  lha       r3, 0x4(r5)
	  sth       r0, 0xE(r4)
	  lha       r0, 0x6(r5)
	  sth       r3, 0x10(r4)
	  sth       r0, 0x12(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051C24
 * Size:	000014
 */
void J2DTevBlock1::getTevColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0xC
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051C38
 * Size:	00002C
 */
void J2DTevBlock1::setTevKColor(unsigned long, JUtility::TColor)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0x34(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0x35(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0x36(r4)
	  stb       r0, 0x37(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051C64
 * Size:	000014
 */
void J2DTevBlock1::getTevKColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x34
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051C78
 * Size:	00000C
 */
void J2DTevBlock1::setTevKColorSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  stb       r5, 0x44(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051C84
 * Size:	00000C
 */
void J2DTevBlock1::getTevKColorSel(unsigned long)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  lbz       r3, 0x44(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051C90
 * Size:	00000C
 */
void J2DTevBlock1::setTevKAlphaSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  stb       r5, 0x45(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051C9C
 * Size:	00000C
 */
void J2DTevBlock1::getTevKAlphaSel(unsigned long)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  lbz       r3, 0x45(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051CA8
 * Size:	000004
 */
void J2DTevBlock1::setTevStageNum(unsigned char)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051CAC
 * Size:	000008
 */
void J2DTevBlock1::getTevStageNum() const
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051CB4
 * Size:	00003C
 */
void J2DTevBlock1::setTevStage(unsigned long, J2DTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r6, 0x1(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x2(r5)
	  stb       r6, 0x2D(r4)
	  lbz       r3, 0x3(r5)
	  stb       r0, 0x2E(r4)
	  lbz       r0, 0x5(r5)
	  stb       r3, 0x2F(r4)
	  lbz       r3, 0x6(r5)
	  stb       r0, 0x31(r4)
	  lbz       r0, 0x7(r5)
	  stb       r3, 0x32(r4)
	  stb       r0, 0x33(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051CF0
 * Size:	000014
 */
void J2DTevBlock1::getTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0x2C
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051D04
 * Size:	000038
 */
void J2DTevBlock1::setTevSwapModeInfo(unsigned long, J2DTevSwapModeInfo)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r4, 0x1(r5)
	  add       r6, r3, r0
	  lbz       r0, 0x0(r5)
	  lbz       r5, 0x33(r6)
	  rlwinm    r3,r4,2,0,29
	  rlwinm    r4,r5,0,30,27
	  or        r3, r4, r3
	  stb       r3, 0x33(r6)
	  lbz       r3, 0x33(r6)
	  rlwinm    r3,r3,0,0,29
	  or        r0, r3, r0
	  stb       r0, 0x33(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051D3C
 * Size:	000010
 */
void J2DTevBlock1::setTevSwapModeTable(unsigned long, J2DTevSwapModeTable)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0x46(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051D4C
 * Size:	000010
 */
void J2DTevBlock1::getTevSwapModeTable(unsigned long)
{
	/*
	.loc_0x0:
	  mr        r0, r3
	  addi      r3, r4, 0x46
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051D5C
 * Size:	000014
 */
void J2DTevBlock1::setIndTevStage(unsigned long, J2DIndTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lwz       r4, 0x0(r5)
	  add       r3, r3, r0
	  stw       r4, 0x4C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051D70
 * Size:	000014
 */
void J2DTevBlock1::getIndTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x4C
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051D84
 * Size:	000030
 */
void J2DTevBlock1::insertTexture(unsigned long, const ResTIMG*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051DB4
 * Size:	000020
 */
void J2DTevBlock1::getTexture(unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0x1
	  blt-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x50(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051DD4
 * Size:	000020
 */
void J2DTevBlock1::getPalette(unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0x1
	  blt-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x54(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051DF4
 * Size:	000008
 */
void J2DTevBlock1::getFont()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x58(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051DFC
 * Size:	000010
 */
void J2DTevBlock1::setUndeleteFlag(unsigned char)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x5C(r3)
	  and       r0, r0, r4
	  stb       r0, 0x5C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E0C
 * Size:	000010
 */
void J2DTevBlock1::setFontUndeleteFlag()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x5C(r3)
	  rlwinm    r0,r0,0,25,31
	  stb       r0, 0x5C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E1C
 * Size:	000004
 */
void J2DTevBlock::initialize()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E20
 * Size:	000004
 */
void J2DTevBlock::setGX()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E24
 * Size:	000004
 */
void J2DTevBlock::loadTexture(_GXTexMapID, unsigned long)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E28
 * Size:	000004
 */
void J2DTevBlock::setFontNo(unsigned short)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E2C
 * Size:	000004
 */
void J2DTevBlock::setTevKColor(unsigned long, JUtility::TColor)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E30
 * Size:	000008
 */
void J2DTevBlock::getTevKColorSel(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E38
 * Size:	000008
 */
void J2DTevBlock::getTevKAlphaSel(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E40
 * Size:	000004
 */
void J2DTevBlock::setTevStage(unsigned long, J2DTevStage)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E44
 * Size:	000004
 */
void J2DTevBlock::setTevSwapModeInfo(unsigned long, J2DTevSwapModeInfo)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E48
 * Size:	000004
 */
void J2DTevBlock::setTevSwapModeTable(unsigned long, J2DTevSwapModeTable)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E4C
 * Size:	000004
 */
void J2DTevBlock::setIndTevStage(unsigned long, J2DIndTevStage)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E50
 * Size:	000008
 */
void J2DTevBlock::getIndTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E58
 * Size:	000008
 */
void J2DTevBlock::insertTexture(unsigned long, JUTTexture*)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E60
 * Size:	000008
 */
void J2DTevBlock::insertTexture(unsigned long, const ResTIMG*, JUTPalette*)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E68
 * Size:	000008
 */
void J2DTevBlock::setTexture(unsigned long, JUTTexture*)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E70
 * Size:	000008
 */
void J2DTevBlock::setTexture(unsigned long, const ResTIMG*)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E78
 * Size:	000008
 */
void J2DTevBlock::removeTexture(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E80
 * Size:	000008
 */
void J2DTevBlock::setFont(JUTFont*)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E88
 * Size:	000008
 */
void J2DTevBlock::setFont(ResFONT*)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E90
 * Size:	000008
 */
void J2DTevBlock::setPalette(unsigned long, const ResTLUT*)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051E98
 * Size:	000008
 */
void J2DTevBlock::prepareTexture(unsigned char)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051EA0
 * Size:	000004
 */
void J2DTevBlock::shiftDeleteFlag(unsigned char, bool)
{
	/*
	.loc_0x0:
	  blr
	*/
}