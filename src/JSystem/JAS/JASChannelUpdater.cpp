

/*
 * --INFO--
 * Address:	800A8504
 * Size:	000030
 */
void JASChannelUpdater::JASChannelUpdater()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        .loc_0x30
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x30:
	*/
}

/*
 * --INFO--
 * Address:	800A8534
 * Size:	0000C0
 */
void JASChannelUpdater::init()
{
	/*
	.loc_0x0:
	  lfs       f2, -0x74C0(r2)
	  li        r9, 0
	  lfs       f1, -0x74BC(r2)
	  li        r8, 0x7FFF
	  stfs      f2, 0x0(r3)
	  li        r7, 0x150
	  lfs       f0, -0x74B8(r2)
	  li        r6, 0x210
	  stfs      f2, 0x4(r3)
	  li        r5, 0x352
	  li        r4, 0x412
	  li        r0, 0xD
	  stfs      f1, 0x8(r3)
	  stfs      f0, 0xC(r3)
	  stfs      f0, 0x10(r3)
	  sth       r9, 0x14(r3)
	  sth       r9, 0x16(r3)
	  sth       r9, 0x18(r3)
	  sth       r9, 0x1A(r3)
	  sth       r9, 0x1C(r3)
	  sth       r9, 0x1E(r3)
	  sth       r9, 0x20(r3)
	  sth       r9, 0x22(r3)
	  sth       r8, 0x14(r3)
	  sth       r9, 0x34(r3)
	  sth       r9, 0x24(r3)
	  sth       r9, 0x26(r3)
	  sth       r9, 0x28(r3)
	  sth       r9, 0x2A(r3)
	  stb       r9, 0x42(r3)
	  stb       r9, 0x43(r3)
	  stb       r9, 0x44(r3)
	  stb       r9, 0x45(r3)
	  stb       r9, 0x46(r3)
	  stb       r9, 0x47(r3)
	  stb       r9, 0x48(r3)
	  sth       r8, 0x24(r3)
	  stb       r9, 0x49(r3)
	  sth       r7, 0x36(r3)
	  sth       r6, 0x38(r3)
	  sth       r5, 0x3A(r3)
	  sth       r4, 0x3C(r3)
	  sth       r9, 0x3E(r3)
	  sth       r9, 0x40(r3)
	  stb       r0, 0x4A(r3)
	  stb       r0, 0x4B(r3)
	  stb       r0, 0x4C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A85F4
 * Size:	000164
 */
void JASChannelUpdater::initialUpdateChannel(JASChannel*, JASDsp::TChannel*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r30, r3
	  mr        r27, r4
	  mr        r31, r5
	  li        r28, 0
	  mr        r29, r30

	.loc_0x24:
	  lhz       r5, 0x36(r29)
	  mr        r3, r27
	  mr        r4, r28
	  bl        -0x50AC
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x2
	  cmpwi     r28, 0x6
	  blt+      .loc_0x24
	  lhz       r0, 0xB0(r27)
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x5C
	  mr        r3, r31
	  bl        -0x2D90
	  b         .loc_0x98

	.loc_0x5C:
	  lbz       r4, 0x48(r30)
	  mr        r3, r31
	  bl        -0x2D30
	  li        r28, 0
	  b         .loc_0x8C

	.loc_0x70:
	  rlwinm    r4,r28,0,24,31
	  mr        r3, r31
	  addi      r0, r4, 0x42
	  mr        r4, r28
	  lbzx      r5, r30, r0
	  bl        -0x2D24
	  addi      r28, r28, 0x1

	.loc_0x8C:
	  rlwinm    r0,r28,0,24,31
	  cmplwi    r0, 0x6
	  blt+      .loc_0x70

	.loc_0x98:
	  lbz       r0, 0x4A(r30)
	  li        r28, 0
	  stb       r0, 0x108(r27)
	  lbz       r0, 0x4B(r30)
	  stb       r0, 0x109(r27)
	  lbz       r0, 0x4C(r30)
	  stb       r0, 0x10A(r27)
	  lfs       f0, 0x0(r30)
	  stfs      f0, 0x100(r27)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x104(r27)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0xD0(r27)
	  lfs       f0, 0xC(r30)
	  stfs      f0, 0xD8(r27)
	  lfs       f0, 0x10(r30)
	  stfs      f0, 0xE0(r27)
	  b         .loc_0xFC

	.loc_0xE0:
	  rlwinm    r4,r28,0,24,31
	  mr        r3, r31
	  addi      r0, r4, 0x42
	  mr        r4, r28
	  lbzx      r5, r30, r0
	  bl        -0x2D7C
	  addi      r28, r28, 0x1

	.loc_0xFC:
	  rlwinm    r0,r28,0,24,31
	  cmplwi    r0, 0x6
	  blt+      .loc_0xE0
	  lbz       r0, 0x49(r30)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x120
	  mr        r3, r31
	  addi      r4, r30, 0x24
	  bl        -0x2CA8

	.loc_0x120:
	  lbz       r0, 0x49(r30)
	  rlwinm.   r0,r0,0,27,31
	  beq-      .loc_0x138
	  mr        r3, r31
	  addi      r4, r30, 0x14
	  bl        -0x2C9C

	.loc_0x138:
	  lbz       r4, 0x49(r30)
	  mr        r3, r31
	  bl        -0x2D04
	  lha       r4, 0x34(r30)
	  mr        r3, r31
	  bl        -0x2C70
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A8758
 * Size:	0000E8
 */
void JASChannelUpdater::updateChannel(JASChannel*, JASDsp::TChannel*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, 0x18(r4)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xCC
	  lfs       f0, 0x0(r29)
	  li        r31, 0
	  stfs      f0, 0x100(r4)
	  lfs       f0, 0x4(r29)
	  stfs      f0, 0x104(r4)
	  lfs       f0, 0x8(r29)
	  stfs      f0, 0xD0(r4)
	  lfs       f0, 0xC(r29)
	  stfs      f0, 0xD8(r4)
	  lfs       f0, 0x10(r29)
	  stfs      f0, 0xE0(r4)
	  b         .loc_0x78

	.loc_0x5C:
	  rlwinm    r4,r31,0,24,31
	  mr        r3, r30
	  addi      r0, r4, 0x42
	  mr        r4, r31
	  lbzx      r5, r29, r0
	  bl        -0x2E5C
	  addi      r31, r31, 0x1

	.loc_0x78:
	  rlwinm    r0,r31,0,24,31
	  cmplwi    r0, 0x6
	  blt+      .loc_0x5C
	  lbz       r0, 0x49(r29)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x9C
	  mr        r3, r30
	  addi      r4, r29, 0x24
	  bl        -0x2D88

	.loc_0x9C:
	  lbz       r0, 0x49(r29)
	  rlwinm.   r0,r0,0,27,31
	  beq-      .loc_0xB4
	  mr        r3, r30
	  addi      r4, r29, 0x14
	  bl        -0x2D7C

	.loc_0xB4:
	  lbz       r4, 0x49(r29)
	  mr        r3, r30
	  bl        -0x2DE4
	  lha       r4, 0x34(r29)
	  mr        r3, r30
	  bl        -0x2D50

	.loc_0xCC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}