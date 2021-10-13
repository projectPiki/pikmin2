

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80250988
 * Size:	000048
 */
void Game::CameraMgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1C09F4
	  lis       r3, 0x804C
	  lis       r4, 0x8048
	  addi      r0, r3, 0x1BD4
	  mr        r3, r31
	  stw       r0, 0x0(r31)
	  addi      r0, r4, 0x41AC
	  stw       r0, 0x14(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802509D0
 * Size:	00012C
 */
void Game::CameraMgr::loadResource(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0x18(r3)
	  li        r3, 0x8
	  bl        -0x22CA44
	  stw       r3, 0x1C(r31)
	  li        r3, 0x8
	  bl        -0x22CA50
	  stw       r3, 0x20(r31)
	  li        r3, 0x8
	  bl        -0x22CA5C
	  stw       r3, 0x24(r31)
	  li        r3, 0x998
	  bl        -0x22CB70
	  mr.       r0, r3
	  beq-      .loc_0x5C
	  li        r4, 0x1
	  bl        0x5A8
	  mr        r0, r3

	.loc_0x5C:
	  stw       r0, 0x28(r31)
	  li        r3, 0x998
	  bl        -0x22CB90
	  mr.       r0, r3
	  beq-      .loc_0x7C
	  li        r4, 0x1
	  bl        0x588
	  mr        r0, r3

	.loc_0x7C:
	  stw       r0, 0x2C(r31)
	  li        r3, 0x308
	  bl        -0x22CBB0
	  mr.       r0, r3
	  beq-      .loc_0x9C
	  li        r4, 0x1
	  bl        .loc_0x12C
	  mr        r0, r3

	.loc_0x9C:
	  stw       r0, 0x30(r31)
	  li        r0, 0
	  stw       r0, 0x34(r31)
	  stw       r0, 0x38(r31)
	  lwz       r3, 0x1C(r31)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x20(r31)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x24(r31)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x1C(r31)
	  stw       r0, 0x4(r3)
	  lwz       r3, 0x20(r31)
	  stw       r0, 0x4(r3)
	  lwz       r3, 0x24(r31)
	  stw       r0, 0x4(r3)
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x108
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x108
	  lis       r4, 0x8048
	  mr        r3, r31
	  addi      r4, r4, 0x41B8
	  bl        0x1EAC
	  b         .loc_0x118

	.loc_0x108:
	  lis       r4, 0x8048
	  mr        r3, r31
	  addi      r4, r4, 0x41E4
	  bl        0x1E98

	.loc_0x118:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x12C:
	*/
}

/*
 * --INFO--
 * Address:	80250AFC
 * Size:	0004D0
 */
void Game::VibrationParms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x4190
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x304
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x6365
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x84
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x6C76
	  addi      r6, r31, 0x94
	  bl        0x1C2B08
	  lis       r3, 0x804B
	  lis       r5, 0x6365
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AC8(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x6D76
	  lfs       f0, -0x3AC0(r2)
	  addi      r6, r31, 0xAC
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x1C2ACC
	  lis       r3, 0x804B
	  lis       r5, 0x6365
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3ABC(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x6876
	  lfs       f0, -0x3AC0(r2)
	  addi      r6, r31, 0xC4
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x1C2A90
	  lis       r3, 0x804B
	  lis       r5, 0x6365
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AB8(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x7373
	  lfs       f0, -0x3AC0(r2)
	  addi      r6, r31, 0xD8
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x1C2A54
	  lis       r3, 0x804B
	  lis       r5, 0x6365
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AB4(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x6D73
	  lfs       f0, -0x3AB0(r2)
	  addi      r6, r31, 0xF0
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x1C2A18
	  lis       r3, 0x804B
	  lis       r5, 0x6365
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AAC(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x6673
	  lfs       f0, -0x3AB0(r2)
	  addi      r6, r31, 0x108
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x1C29DC
	  lis       r3, 0x804B
	  lis       r5, 0x6365
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AA8(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x7374
	  lfs       f0, -0x3AB0(r2)
	  addi      r6, r31, 0x120
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x1C29A0
	  lis       r3, 0x804B
	  lis       r5, 0x6365
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AA4(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x6D74
	  lfs       f0, -0x3AB8(r2)
	  addi      r6, r31, 0x138
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x1C2964
	  lis       r3, 0x804B
	  lis       r5, 0x6365
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AA0(r2)
	  stw       r0, 0x124(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x14C
	  stfs      f0, 0x13C(r30)
	  addi      r5, r5, 0x6C74
	  lfs       f0, -0x3AB8(r2)
	  addi      r6, r31, 0x150
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
	  bl        0x1C2928
	  lis       r3, 0x804B
	  lis       r5, 0x6365
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A9C(r2)
	  stw       r0, 0x14C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x174
	  stfs      f0, 0x164(r30)
	  addi      r5, r5, 0x7176
	  lfs       f0, -0x3AB8(r2)
	  addi      r6, r31, 0x168
	  stfs      f1, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  bl        0x1C28EC
	  lis       r3, 0x804B
	  lis       r5, 0x6365
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A98(r2)
	  stw       r0, 0x174(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x19C
	  stfs      f0, 0x18C(r30)
	  addi      r5, r5, 0x7173
	  lfs       f0, -0x3A94(r2)
	  addi      r6, r31, 0x17C
	  stfs      f1, 0x194(r30)
	  stfs      f0, 0x198(r30)
	  bl        0x1C28B0
	  lis       r3, 0x804B
	  lis       r5, 0x6365
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AA8(r2)
	  stw       r0, 0x19C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x1C4
	  stfs      f0, 0x1B4(r30)
	  addi      r5, r5, 0x7174
	  lfs       f0, -0x3AB0(r2)
	  addi      r6, r31, 0x194
	  stfs      f1, 0x1BC(r30)
	  stfs      f0, 0x1C0(r30)
	  bl        0x1C2874
	  lis       r3, 0x804B
	  lis       r5, 0x637A
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A90(r2)
	  stw       r0, 0x1C4(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x1EC
	  stfs      f0, 0x1DC(r30)
	  addi      r5, r5, 0x7376
	  lfs       f0, -0x3AB8(r2)
	  addi      r6, r31, 0x1AC
	  stfs      f1, 0x1E4(r30)
	  stfs      f0, 0x1E8(r30)
	  bl        0x1C2838
	  lis       r3, 0x804B
	  lis       r5, 0x637A
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AAC(r2)
	  stw       r0, 0x1EC(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x214
	  stfs      f0, 0x204(r30)
	  addi      r5, r5, 0x7373
	  lfs       f0, -0x3AB0(r2)
	  addi      r6, r31, 0x1BC
	  stfs      f1, 0x20C(r30)
	  stfs      f0, 0x210(r30)
	  bl        0x1C27FC
	  lis       r3, 0x804B
	  lis       r5, 0x637A
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AA8(r2)
	  stw       r0, 0x214(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x23C
	  stfs      f0, 0x22C(r30)
	  addi      r5, r5, 0x7374
	  lfs       f0, -0x3A94(r2)
	  addi      r6, r31, 0x1D0
	  stfs      f1, 0x234(r30)
	  stfs      f0, 0x238(r30)
	  bl        0x1C27C0
	  lis       r3, 0x804B
	  lis       r5, 0x6361
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AA0(r2)
	  stw       r0, 0x23C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x264
	  stfs      f0, 0x254(r30)
	  addi      r5, r5, 0x7376
	  lfs       f0, -0x3AB8(r2)
	  addi      r6, r31, 0x1E4
	  stfs      f1, 0x25C(r30)
	  stfs      f0, 0x260(r30)
	  bl        0x1C2784
	  lis       r3, 0x804B
	  lis       r5, 0x6361
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A8C(r2)
	  stw       r0, 0x264(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x28C
	  stfs      f0, 0x27C(r30)
	  addi      r5, r5, 0x7373
	  lfs       f0, -0x3AC8(r2)
	  addi      r6, r31, 0x1F8
	  stfs      f1, 0x284(r30)
	  stfs      f0, 0x288(r30)
	  bl        0x1C2748
	  lis       r3, 0x804B
	  lis       r5, 0x6361
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A88(r2)
	  stw       r0, 0x28C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x2B4
	  stfs      f0, 0x2A4(r30)
	  addi      r5, r5, 0x7374
	  lfs       f0, -0x3A94(r2)
	  addi      r6, r31, 0x210
	  stfs      f1, 0x2AC(r30)
	  stfs      f0, 0x2B0(r30)
	  bl        0x1C270C
	  lis       r3, 0x804B
	  lis       r5, 0x636D
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AA0(r2)
	  stw       r0, 0x2B4(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x2DC
	  stfs      f0, 0x2CC(r30)
	  addi      r5, r5, 0x646D
	  lfs       f0, -0x3AB8(r2)
	  addi      r6, r31, 0x224
	  stfs      f1, 0x2D4(r30)
	  stfs      f0, 0x2D8(r30)
	  bl        0x1C26D0
	  lis       r3, 0x804B
	  lfs       f2, -0x3A84(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x3AC4(r2)
	  stw       r0, 0x2DC(r30)
	  mr        r3, r30
	  lfs       f0, -0x3A80(r2)
	  stfs      f2, 0x2F4(r30)
	  stfs      f1, 0x2FC(r30)
	  stfs      f0, 0x300(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80250FCC
 * Size:	000E78
 */
void Game::CameraParms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x4190
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x994
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x636E
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x238
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x6C64
	  addi      r6, r31, 0x244
	  bl        0x1C2638
	  lis       r3, 0x804B
	  lis       r5, 0x636E
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A7C(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x6C61
	  lfs       f0, -0x3A78(r2)
	  addi      r6, r31, 0x254
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x1C25FC
	  lis       r3, 0x804B
	  lis       r5, 0x636E
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A98(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x6C66
	  lfs       f0, -0x3A74(r2)
	  addi      r6, r31, 0x268
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x1C25C0
	  lis       r3, 0x804B
	  lis       r5, 0x636E
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AC0(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC8(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x6C6F
	  lfs       f0, -0x3A70(r2)
	  addi      r6, r31, 0x278
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x1C2584
	  lis       r3, 0x804B
	  lis       r5, 0x636E
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AAC(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x6C77
	  lfs       f0, -0x3A6C(r2)
	  addi      r6, r31, 0x28C
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x1C2548
	  lis       r3, 0x804B
	  lis       r5, 0x6E6C
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A80(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x6474
	  lfs       f0, -0x3A78(r2)
	  addi      r6, r31, 0x2A0
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x1C250C
	  lis       r3, 0x804B
	  lis       r5, 0x6E6C
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A68(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x6E63
	  lfs       f0, -0x3A80(r2)
	  addi      r6, r31, 0x2B4
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x1C24D0
	  lis       r3, 0x804B
	  lis       r5, 0x6E6C
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x3AC8(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f0, -0x3A64(r2)
	  addi      r3, r30, 0x124
	  stfs      f1, 0x114(r30)
	  addi      r5, r5, 0x6663
	  addi      r6, r31, 0x2C4
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x1C2498
	  lis       r3, 0x804B
	  lis       r5, 0x636D
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x3A64(r2)
	  stw       r0, 0x124(r30)
	  mr        r4, r30
	  lfs       f0, -0x3AC8(r2)
	  addi      r3, r30, 0x14C
	  stfs      f1, 0x13C(r30)
	  addi      r5, r5, 0x6C64
	  addi      r6, r31, 0x2D4
	  stfs      f0, 0x144(r30)
	  stfs      f1, 0x148(r30)
	  bl        0x1C2460
	  lis       r3, 0x804B
	  lis       r5, 0x636D
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A7C(r2)
	  stw       r0, 0x14C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0x174
	  stfs      f0, 0x164(r30)
	  addi      r5, r5, 0x6C61
	  lfs       f0, -0x3A78(r2)
	  addi      r6, r31, 0x2E4
	  stfs      f1, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  bl        0x1C2424
	  lis       r3, 0x804B
	  lis       r5, 0x636D
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A60(r2)
	  stw       r0, 0x174(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x19C
	  stfs      f0, 0x18C(r30)
	  addi      r5, r5, 0x6C66
	  lfs       f0, -0x3A74(r2)
	  addi      r6, r31, 0x2F8
	  stfs      f1, 0x194(r30)
	  stfs      f0, 0x198(r30)
	  bl        0x1C23E8
	  lis       r3, 0x804B
	  lis       r5, 0x636D
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A5C(r2)
	  stw       r0, 0x19C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC8(r2)
	  addi      r3, r30, 0x1C4
	  stfs      f0, 0x1B4(r30)
	  addi      r5, r5, 0x6C6F
	  lfs       f0, -0x3A70(r2)
	  addi      r6, r31, 0x308
	  stfs      f1, 0x1BC(r30)
	  stfs      f0, 0x1C0(r30)
	  bl        0x1C23AC
	  lis       r3, 0x804B
	  lis       r5, 0x636D
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A58(r2)
	  stw       r0, 0x1C4(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0x1EC
	  stfs      f0, 0x1DC(r30)
	  addi      r5, r5, 0x6C77
	  lfs       f0, -0x3A6C(r2)
	  addi      r6, r31, 0x31C
	  stfs      f1, 0x1E4(r30)
	  stfs      f0, 0x1E8(r30)
	  bl        0x1C2370
	  lis       r3, 0x804B
	  lis       r5, 0x6D6C
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A6C(r2)
	  stw       r0, 0x1EC(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0x214
	  stfs      f0, 0x204(r30)
	  addi      r5, r5, 0x6474
	  lfs       f0, -0x3A78(r2)
	  addi      r6, r31, 0x330
	  stfs      f1, 0x20C(r30)
	  stfs      f0, 0x210(r30)
	  bl        0x1C2334
	  lis       r3, 0x804B
	  lis       r5, 0x6D6C
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A54(r2)
	  stw       r0, 0x214(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x23C
	  stfs      f0, 0x22C(r30)
	  addi      r5, r5, 0x6E63
	  lfs       f0, -0x3A80(r2)
	  addi      r6, r31, 0x344
	  stfs      f1, 0x234(r30)
	  stfs      f0, 0x238(r30)
	  bl        0x1C22F8
	  lis       r3, 0x804B
	  lis       r5, 0x6D6C
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x3AC8(r2)
	  stw       r0, 0x23C(r30)
	  mr        r4, r30
	  lfs       f0, -0x3A64(r2)
	  addi      r3, r30, 0x264
	  stfs      f1, 0x254(r30)
	  addi      r5, r5, 0x6663
	  addi      r6, r31, 0x354
	  stfs      f1, 0x25C(r30)
	  stfs      f0, 0x260(r30)
	  bl        0x1C22C0
	  lis       r3, 0x804B
	  lis       r5, 0x6366
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x3A64(r2)
	  stw       r0, 0x264(r30)
	  mr        r4, r30
	  lfs       f0, -0x3AC8(r2)
	  addi      r3, r30, 0x28C
	  stfs      f1, 0x27C(r30)
	  addi      r5, r5, 0x6C64
	  addi      r6, r31, 0x360
	  stfs      f0, 0x284(r30)
	  stfs      f1, 0x288(r30)
	  bl        0x1C2288
	  lis       r3, 0x804B
	  lis       r5, 0x6366
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A50(r2)
	  stw       r0, 0x28C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0x2B4
	  stfs      f0, 0x2A4(r30)
	  addi      r5, r5, 0x6C61
	  lfs       f0, -0x3A78(r2)
	  addi      r6, r31, 0x370
	  stfs      f1, 0x2AC(r30)
	  stfs      f0, 0x2B0(r30)
	  bl        0x1C224C
	  lis       r3, 0x804B
	  lis       r5, 0x6366
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AAC(r2)
	  stw       r0, 0x2B4(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x2DC
	  stfs      f0, 0x2CC(r30)
	  addi      r5, r5, 0x6C66
	  lfs       f0, -0x3A74(r2)
	  addi      r6, r31, 0x384
	  stfs      f1, 0x2D4(r30)
	  stfs      f0, 0x2D8(r30)
	  bl        0x1C2210
	  lis       r3, 0x804B
	  lis       r5, 0x6366
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A4C(r2)
	  stw       r0, 0x2DC(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC8(r2)
	  addi      r3, r30, 0x304
	  stfs      f0, 0x2F4(r30)
	  addi      r5, r5, 0x6C6F
	  lfs       f0, -0x3A70(r2)
	  addi      r6, r31, 0x394
	  stfs      f1, 0x2FC(r30)
	  stfs      f0, 0x300(r30)
	  bl        0x1C21D4
	  lis       r3, 0x804B
	  lis       r5, 0x6366
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A48(r2)
	  stw       r0, 0x304(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0x32C
	  stfs      f0, 0x31C(r30)
	  addi      r5, r5, 0x6C77
	  lfs       f0, -0x3A6C(r2)
	  addi      r6, r31, 0x3A8
	  stfs      f1, 0x324(r30)
	  stfs      f0, 0x328(r30)
	  bl        0x1C2198
	  lis       r3, 0x804B
	  lis       r5, 0x666C
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A44(r2)
	  stw       r0, 0x32C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0x354
	  stfs      f0, 0x344(r30)
	  addi      r5, r5, 0x6474
	  lfs       f0, -0x3A78(r2)
	  addi      r6, r31, 0x3BC
	  stfs      f1, 0x34C(r30)
	  stfs      f0, 0x350(r30)
	  bl        0x1C215C
	  lis       r3, 0x804B
	  lis       r5, 0x666C
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A40(r2)
	  stw       r0, 0x354(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x37C
	  stfs      f0, 0x36C(r30)
	  addi      r5, r5, 0x6E63
	  lfs       f0, -0x3A80(r2)
	  addi      r6, r31, 0x3D0
	  stfs      f1, 0x374(r30)
	  stfs      f0, 0x378(r30)
	  bl        0x1C2120
	  lis       r3, 0x804B
	  lis       r5, 0x666C
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x3AC8(r2)
	  stw       r0, 0x37C(r30)
	  mr        r4, r30
	  lfs       f0, -0x3A64(r2)
	  addi      r3, r30, 0x3A4
	  stfs      f1, 0x394(r30)
	  addi      r5, r5, 0x6663
	  addi      r6, r31, 0x3E0
	  stfs      f1, 0x39C(r30)
	  stfs      f0, 0x3A0(r30)
	  bl        0x1C20E8
	  lis       r3, 0x804B
	  lis       r5, 0x636E
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x3A64(r2)
	  stw       r0, 0x3A4(r30)
	  mr        r4, r30
	  lfs       f0, -0x3AC8(r2)
	  addi      r3, r30, 0x3CC
	  stfs      f1, 0x3BC(r30)
	  addi      r5, r5, 0x6864
	  addi      r6, r31, 0x3EC
	  stfs      f0, 0x3C4(r30)
	  stfs      f1, 0x3C8(r30)
	  bl        0x1C20B0
	  lis       r3, 0x804B
	  lis       r5, 0x636E
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A50(r2)
	  stw       r0, 0x3CC(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0x3F4
	  stfs      f0, 0x3E4(r30)
	  addi      r5, r5, 0x6861
	  lfs       f0, -0x3A78(r2)
	  addi      r6, r31, 0x3FC
	  stfs      f1, 0x3EC(r30)
	  stfs      f0, 0x3F0(r30)
	  bl        0x1C2074
	  lis       r3, 0x804B
	  lis       r5, 0x636E
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A70(r2)
	  stw       r0, 0x3F4(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x41C
	  stfs      f0, 0x40C(r30)
	  addi      r5, r5, 0x6866
	  lfs       f0, -0x3A74(r2)
	  addi      r6, r31, 0x410
	  stfs      f1, 0x414(r30)
	  stfs      f0, 0x418(r30)
	  bl        0x1C2038
	  lis       r3, 0x804B
	  lis       r5, 0x636E
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AC0(r2)
	  stw       r0, 0x41C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC8(r2)
	  addi      r3, r30, 0x444
	  stfs      f0, 0x434(r30)
	  addi      r5, r5, 0x686F
	  lfs       f0, -0x3A70(r2)
	  addi      r6, r31, 0x424
	  stfs      f1, 0x43C(r30)
	  stfs      f0, 0x440(r30)
	  bl        0x1C1FFC
	  lis       r3, 0x804B
	  lis       r5, 0x636E
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A88(r2)
	  stw       r0, 0x444(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0x46C
	  stfs      f0, 0x45C(r30)
	  addi      r5, r5, 0x6877
	  lfs       f0, -0x3A6C(r2)
	  addi      r6, r31, 0x43C
	  stfs      f1, 0x464(r30)
	  stfs      f0, 0x468(r30)
	  bl        0x1C1FC0
	  lis       r3, 0x804B
	  lis       r5, 0x6E68
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A80(r2)
	  stw       r0, 0x46C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0x494
	  stfs      f0, 0x484(r30)
	  addi      r5, r5, 0x6474
	  lfs       f0, -0x3A78(r2)
	  addi      r6, r31, 0x450
	  stfs      f1, 0x48C(r30)
	  stfs      f0, 0x490(r30)
	  bl        0x1C1F84
	  lis       r3, 0x804B
	  lis       r5, 0x6E68
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A3C(r2)
	  stw       r0, 0x494(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x4BC
	  stfs      f0, 0x4AC(r30)
	  addi      r5, r5, 0x6E63
	  lfs       f0, -0x3A80(r2)
	  addi      r6, r31, 0x464
	  stfs      f1, 0x4B4(r30)
	  stfs      f0, 0x4B8(r30)
	  bl        0x1C1F48
	  lis       r3, 0x804B
	  lis       r5, 0x6E68
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x3AC8(r2)
	  stw       r0, 0x4BC(r30)
	  mr        r4, r30
	  lfs       f0, -0x3A64(r2)
	  addi      r3, r30, 0x4E4
	  stfs      f1, 0x4D4(r30)
	  addi      r5, r5, 0x6663
	  addi      r6, r31, 0x474
	  stfs      f1, 0x4DC(r30)
	  stfs      f0, 0x4E0(r30)
	  bl        0x1C1F10
	  lis       r3, 0x804B
	  lis       r5, 0x636D
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x3A64(r2)
	  stw       r0, 0x4E4(r30)
	  mr        r4, r30
	  lfs       f0, -0x3AC8(r2)
	  addi      r3, r30, 0x50C
	  stfs      f1, 0x4FC(r30)
	  addi      r5, r5, 0x6864
	  addi      r6, r31, 0x484
	  stfs      f0, 0x504(r30)
	  stfs      f1, 0x508(r30)
	  bl        0x1C1ED8
	  lis       r3, 0x804B
	  lis       r5, 0x636D
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A50(r2)
	  stw       r0, 0x50C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0x534
	  stfs      f0, 0x524(r30)
	  addi      r5, r5, 0x6861
	  lfs       f0, -0x3A78(r2)
	  addi      r6, r31, 0x494
	  stfs      f1, 0x52C(r30)
	  stfs      f0, 0x530(r30)
	  bl        0x1C1E9C
	  lis       r3, 0x804B
	  lis       r5, 0x636D
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A70(r2)
	  stw       r0, 0x534(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x55C
	  stfs      f0, 0x54C(r30)
	  addi      r5, r5, 0x6866
	  lfs       f0, -0x3A74(r2)
	  addi      r6, r31, 0x4A8
	  stfs      f1, 0x554(r30)
	  stfs      f0, 0x558(r30)
	  bl        0x1C1E60
	  lis       r3, 0x804B
	  lis       r5, 0x636D
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A98(r2)
	  stw       r0, 0x55C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC8(r2)
	  addi      r3, r30, 0x584
	  stfs      f0, 0x574(r30)
	  addi      r5, r5, 0x686F
	  lfs       f0, -0x3A70(r2)
	  addi      r6, r31, 0x4B8
	  stfs      f1, 0x57C(r30)
	  stfs      f0, 0x580(r30)
	  bl        0x1C1E24
	  lis       r3, 0x804B
	  lis       r5, 0x636D
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A38(r2)
	  stw       r0, 0x584(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0x5AC
	  stfs      f0, 0x59C(r30)
	  addi      r5, r5, 0x6877
	  lfs       f0, -0x3A6C(r2)
	  addi      r6, r31, 0x4CC
	  stfs      f1, 0x5A4(r30)
	  stfs      f0, 0x5A8(r30)
	  bl        0x1C1DE8
	  lis       r3, 0x804B
	  lis       r5, 0x6D68
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A6C(r2)
	  stw       r0, 0x5AC(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0x5D4
	  stfs      f0, 0x5C4(r30)
	  addi      r5, r5, 0x6474
	  lfs       f0, -0x3A78(r2)
	  addi      r6, r31, 0x4E0
	  stfs      f1, 0x5CC(r30)
	  stfs      f0, 0x5D0(r30)
	  bl        0x1C1DAC
	  lis       r3, 0x804B
	  lis       r5, 0x6D68
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A34(r2)
	  stw       r0, 0x5D4(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x5FC
	  stfs      f0, 0x5EC(r30)
	  addi      r5, r5, 0x6E63
	  lfs       f0, -0x3A80(r2)
	  addi      r6, r31, 0x4F4
	  stfs      f1, 0x5F4(r30)
	  stfs      f0, 0x5F8(r30)
	  bl        0x1C1D70
	  lis       r3, 0x804B
	  lis       r5, 0x6D68
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x3AC8(r2)
	  stw       r0, 0x5FC(r30)
	  mr        r4, r30
	  lfs       f0, -0x3A64(r2)
	  addi      r3, r30, 0x624
	  stfs      f1, 0x614(r30)
	  addi      r5, r5, 0x6663
	  addi      r6, r31, 0x504
	  stfs      f1, 0x61C(r30)
	  stfs      f0, 0x620(r30)
	  bl        0x1C1D38
	  lis       r3, 0x804B
	  lis       r5, 0x6366
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x3A64(r2)
	  stw       r0, 0x624(r30)
	  mr        r4, r30
	  lfs       f0, -0x3AC8(r2)
	  addi      r3, r30, 0x64C
	  stfs      f1, 0x63C(r30)
	  addi      r5, r5, 0x6864
	  addi      r6, r31, 0x514
	  stfs      f0, 0x644(r30)
	  stfs      f1, 0x648(r30)
	  bl        0x1C1D00
	  lis       r3, 0x804B
	  lis       r5, 0x6366
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A30(r2)
	  stw       r0, 0x64C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0x674
	  stfs      f0, 0x664(r30)
	  addi      r5, r5, 0x6861
	  lfs       f0, -0x3A78(r2)
	  addi      r6, r31, 0x524
	  stfs      f1, 0x66C(r30)
	  stfs      f0, 0x670(r30)
	  bl        0x1C1CC4
	  lis       r3, 0x804B
	  lis       r5, 0x6366
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A70(r2)
	  stw       r0, 0x674(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x69C
	  stfs      f0, 0x68C(r30)
	  addi      r5, r5, 0x6866
	  lfs       f0, -0x3A74(r2)
	  addi      r6, r31, 0x538
	  stfs      f1, 0x694(r30)
	  stfs      f0, 0x698(r30)
	  bl        0x1C1C88
	  lis       r3, 0x804B
	  lis       r5, 0x6366
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A2C(r2)
	  stw       r0, 0x69C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC8(r2)
	  addi      r3, r30, 0x6C4
	  stfs      f0, 0x6B4(r30)
	  addi      r5, r5, 0x686F
	  lfs       f0, -0x3A70(r2)
	  addi      r6, r31, 0x548
	  stfs      f1, 0x6BC(r30)
	  stfs      f0, 0x6C0(r30)
	  bl        0x1C1C4C
	  lis       r3, 0x804B
	  lis       r5, 0x6366
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AB0(r2)
	  stw       r0, 0x6C4(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0x6EC
	  stfs      f0, 0x6DC(r30)
	  addi      r5, r5, 0x6877
	  lfs       f0, -0x3A6C(r2)
	  addi      r6, r31, 0x55C
	  stfs      f1, 0x6E4(r30)
	  stfs      f0, 0x6E8(r30)
	  bl        0x1C1C10
	  lis       r3, 0x804B
	  lis       r5, 0x6668
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A28(r2)
	  stw       r0, 0x6EC(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0x714
	  stfs      f0, 0x704(r30)
	  addi      r5, r5, 0x6474
	  lfs       f0, -0x3A78(r2)
	  addi      r6, r31, 0x570
	  stfs      f1, 0x70C(r30)
	  stfs      f0, 0x710(r30)
	  bl        0x1C1BD4
	  lis       r3, 0x804B
	  lis       r5, 0x6668
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A24(r2)
	  stw       r0, 0x714(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x73C
	  stfs      f0, 0x72C(r30)
	  addi      r5, r5, 0x6E63
	  lfs       f0, -0x3A80(r2)
	  addi      r6, r31, 0x584
	  stfs      f1, 0x734(r30)
	  stfs      f0, 0x738(r30)
	  bl        0x1C1B98
	  lis       r3, 0x804B
	  lis       r5, 0x6668
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x3AC8(r2)
	  stw       r0, 0x73C(r30)
	  mr        r4, r30
	  lfs       f0, -0x3A64(r2)
	  addi      r3, r30, 0x764
	  stfs      f1, 0x754(r30)
	  addi      r5, r5, 0x6663
	  addi      r6, r31, 0x594
	  stfs      f1, 0x75C(r30)
	  stfs      f0, 0x760(r30)
	  bl        0x1C1B60
	  lis       r3, 0x804B
	  lis       r5, 0x7A6D
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x3A64(r2)
	  stw       r0, 0x764(r30)
	  mr        r4, r30
	  lfs       f0, -0x3AC8(r2)
	  addi      r3, r30, 0x78C
	  stfs      f1, 0x77C(r30)
	  addi      r5, r5, 0x6474
	  addi      r6, r31, 0x5A4
	  stfs      f0, 0x784(r30)
	  stfs      f1, 0x788(r30)
	  bl        0x1C1B28
	  lis       r3, 0x804B
	  lis       r5, 0x7A6D
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A20(r2)
	  stw       r0, 0x78C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC0(r2)
	  addi      r3, r30, 0x7B4
	  stfs      f0, 0x7A4(r30)
	  addi      r5, r5, 0x616E
	  lfs       f0, -0x3A78(r2)
	  addi      r6, r31, 0x5B0
	  stfs      f1, 0x7AC(r30)
	  stfs      f0, 0x7B0(r30)
	  bl        0x1C1AEC
	  lis       r3, 0x804B
	  lis       r5, 0x7A6D
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A1C(r2)
	  stw       r0, 0x7B4(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x7DC
	  stfs      f0, 0x7CC(r30)
	  addi      r5, r5, 0x6676
	  lfs       f0, -0x3A74(r2)
	  addi      r6, r31, 0x5C0
	  stfs      f1, 0x7D4(r30)
	  stfs      f0, 0x7D8(r30)
	  bl        0x1C1AB0
	  lis       r3, 0x804B
	  lis       r5, 0x636C
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AA8(r2)
	  stw       r0, 0x7DC(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC8(r2)
	  addi      r3, r30, 0x804
	  stfs      f0, 0x7F4(r30)
	  addi      r5, r5, 0x6372
	  lfs       f0, -0x3A70(r2)
	  addi      r6, r31, 0x5CC
	  stfs      f1, 0x7FC(r30)
	  stfs      f0, 0x800(r30)
	  bl        0x1C1A74
	  lis       r3, 0x804B
	  lis       r5, 0x636C
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A18(r2)
	  stw       r0, 0x804(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x82C
	  stfs      f0, 0x81C(r30)
	  addi      r5, r5, 0x6D73
	  lfs       f0, -0x3A6C(r2)
	  addi      r6, r31, 0x5DC
	  stfs      f1, 0x824(r30)
	  stfs      f0, 0x828(r30)
	  bl        0x1C1A38
	  lis       r3, 0x804B
	  lis       r5, 0x636C
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A14(r2)
	  stw       r0, 0x82C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3A10(r2)
	  addi      r3, r30, 0x854
	  stfs      f0, 0x844(r30)
	  addi      r5, r5, 0x6D68
	  lfs       f0, -0x3AC8(r2)
	  addi      r6, r31, 0x5F0
	  stfs      f1, 0x84C(r30)
	  stfs      f0, 0x850(r30)
	  bl        0x1C19FC
	  lis       r3, 0x804B
	  lis       r5, 0x636C
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AB8(r2)
	  stw       r0, 0x854(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x87C
	  stfs      f0, 0x86C(r30)
	  addi      r5, r5, 0x6E68
	  lfs       f0, -0x3AB0(r2)
	  addi      r6, r31, 0x604
	  stfs      f1, 0x874(r30)
	  stfs      f0, 0x878(r30)
	  bl        0x1C19C0
	  lis       r3, 0x804B
	  lis       r5, 0x6370
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3AAC(r2)
	  stw       r0, 0x87C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x8A4
	  stfs      f0, 0x894(r30)
	  addi      r5, r5, 0x6D64
	  lfs       f0, -0x3A6C(r2)
	  addi      r6, r31, 0x618
	  stfs      f1, 0x89C(r30)
	  stfs      f0, 0x8A0(r30)
	  bl        0x1C1984
	  lis       r3, 0x804B
	  lis       r5, 0x636D
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A0C(r2)
	  stw       r0, 0x8A4(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x8CC
	  stfs      f0, 0x8BC(r30)
	  addi      r5, r5, 0x6D74
	  lfs       f0, -0x3AC8(r2)
	  addi      r6, r31, 0x628
	  stfs      f1, 0x8C4(r30)
	  stfs      f0, 0x8C8(r30)
	  bl        0x1C1948
	  lis       r3, 0x804B
	  lis       r5, 0x636D
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A08(r2)
	  stw       r0, 0x8CC(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x8F4
	  stfs      f0, 0x8E4(r30)
	  addi      r5, r5, 0x6674
	  lfs       f0, -0x3AC8(r2)
	  addi      r6, r31, 0x634
	  stfs      f1, 0x8EC(r30)
	  stfs      f0, 0x8F0(r30)
	  bl        0x1C190C
	  lis       r3, 0x804B
	  lis       r5, 0x636D
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A04(r2)
	  stw       r0, 0x8F4(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x91C
	  stfs      f0, 0x90C(r30)
	  addi      r5, r5, 0x7461
	  lfs       f0, -0x3ABC(r2)
	  addi      r6, r31, 0x644
	  stfs      f1, 0x914(r30)
	  stfs      f0, 0x918(r30)
	  bl        0x1C18D0
	  lis       r3, 0x804B
	  lis       r5, 0x636D
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A14(r2)
	  stw       r0, 0x91C(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x944
	  stfs      f0, 0x934(r30)
	  addi      r5, r5, 0x746D
	  lfs       f0, -0x3AC8(r2)
	  addi      r6, r31, 0x650
	  stfs      f1, 0x93C(r30)
	  stfs      f0, 0x940(r30)
	  bl        0x1C1894
	  lis       r3, 0x804B
	  lis       r5, 0x636D
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3A00(r2)
	  stw       r0, 0x944(r30)
	  mr        r4, r30
	  lfs       f1, -0x3AC4(r2)
	  addi      r3, r30, 0x96C
	  stfs      f0, 0x95C(r30)
	  addi      r5, r5, 0x7462
	  lfs       f0, -0x3AB8(r2)
	  addi      r6, r31, 0x660
	  stfs      f1, 0x964(r30)
	  stfs      f0, 0x968(r30)
	  bl        0x1C1858
	  lis       r3, 0x804B
	  lfs       f2, -0x39FC(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x3AC4(r2)
	  stw       r0, 0x96C(r30)
	  mr        r3, r30
	  lfs       f0, -0x3AC8(r2)
	  stfs      f2, 0x984(r30)
	  stfs      f1, 0x98C(r30)
	  stfs      f0, 0x990(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80251E44
 * Size:	0000A8
 */
void Game::CameraMgr::setViewport((Viewport*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  rlwinm    r31,r5,2,0,29
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x20(r3)
	  stwx      r4, r3, r31
	  lwz       r3, 0x20(r30)
	  lwzx      r0, r3, r31
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x47FC
	  li        r4, 0x52
	  addi      r5, r5, 0x480C
	  crclr     6, 0x6
	  bl        -0x227850

	.loc_0x50:
	  lwz       r4, 0x20(r30)
	  lwz       r3, 0x24(r30)
	  lwzx      r4, r4, r31
	  lwz       r0, 0x44(r4)
	  stwx      r0, r3, r31
	  lwz       r3, 0x24(r30)
	  lwzx      r0, r3, r31
	  cmplwi    r0, 0
	  bne-      .loc_0x90
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x47FC
	  li        r4, 0x55
	  addi      r5, r5, 0x480C
	  crclr     6, 0x6
	  bl        -0x227890

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
 * Address:	80251EEC
 * Size:	00014C
 */
void Game::CameraMgr::init((int))
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
	  mr        r28, r3
	  lis       r3, 0x8048
	  lwz       r0, 0x28(r28)
	  addi      r31, r3, 0x4190
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  addi      r3, r31, 0x66C
	  addi      r5, r31, 0x67C
	  li        r4, 0x5E
	  crclr     6, 0x6
	  bl        -0x2278F4

	.loc_0x4C:
	  lwz       r0, 0x2C(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x6C
	  addi      r3, r31, 0x66C
	  addi      r5, r31, 0x67C
	  li        r4, 0x5F
	  crclr     6, 0x6
	  bl        -0x227914

	.loc_0x6C:
	  lwz       r0, 0x30(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x8C
	  addi      r3, r31, 0x66C
	  addi      r5, r31, 0x67C
	  li        r4, 0x60
	  crclr     6, 0x6
	  bl        -0x227934

	.loc_0x8C:
	  stw       r29, 0x18(r28)
	  li        r30, 0
	  li        r29, 0
	  stw       r30, 0x34(r28)
	  stw       r30, 0x38(r28)

	.loc_0xA0:
	  lwz       r3, 0x1C(r28)
	  li        r0, 0
	  stwx      r0, r3, r30
	  lwz       r3, 0x24(r28)
	  lwzx      r3, r3, r30
	  cmplwi    r3, 0
	  beq-      .loc_0x108
	  lwz       r0, 0x18(r28)
	  cmpwi     r0, 0
	  bne-      .loc_0xD4
	  lwz       r4, 0x28(r28)
	  bl        -0x12A90
	  b         .loc_0xDC

	.loc_0xD4:
	  lwz       r4, 0x2C(r28)
	  bl        -0x12A9C

	.loc_0xDC:
	  lwz       r3, 0x24(r28)
	  lwz       r4, 0x30(r28)
	  lwzx      r3, r3, r30
	  bl        -0x12AA4
	  lwz       r3, 0x24(r28)
	  lwzx      r3, r3, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x11C

	.loc_0x108:
	  addi      r3, r31, 0x66C
	  addi      r5, r31, 0x688
	  li        r4, 0x7C
	  crclr     6, 0x6
	  bl        -0x2279C4

	.loc_0x11C:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x2
	  blt+      .loc_0xA0
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
 * Address:	80252038
 * Size:	000094
 */
void Game::CameraMgr::setCameraAngle((float, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x34(r1)
	  addi      r4, r1, 0x8
	  stfd      f31, 0x28(r1)
	  fmr       f31, f1
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  stw       r29, 0x1C(r1)
	  mr        r29, r3
	  bl        0x82C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  lwz       r0, 0x8(r1)
	  mr        r30, r0
	  rlwinm    r31,r0,2,0,29
	  b         .loc_0x68

	.loc_0x48:
	  lwz       r3, 0x24(r29)
	  lwzx      r3, r3, r31
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  fmr       f1, f31
	  bl        -0x129F0

	.loc_0x60:
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x1

	.loc_0x68:
	  lwz       r0, 0xC(r1)
	  cmpw      r30, r0
	  blt+      .loc_0x48

	.loc_0x74:
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x28(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  lwz       r29, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802520CC
 * Size:	000170
 */
void Game::CameraMgr::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  mr        r31, r3
	  stw       r30, 0x78(r1)
	  stw       r29, 0x74(r1)
	  bl        0x780
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x154
	  lwz       r0, 0x18(r31)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x5C
	  li        r29, 0
	  li        r30, 0

	.loc_0x3C:
	  lwz       r3, 0x24(r31)
	  lwzx      r3, r3, r30
	  bl        0x1C8CA4
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x2
	  blt+      .loc_0x3C
	  b         .loc_0x104

	.loc_0x5C:
	  lwz       r3, -0x6D20(r13)
	  bl        -0xF750C
	  cmplwi    r3, 0
	  beq-      .loc_0xE0
	  lhz       r29, 0x2DC(r3)
	  lwz       r3, 0x24(r31)
	  rlwinm    r30,r29,2,0,29
	  lwzx      r3, r3, r30
	  bl        0x1C8C6C
	  lwz       r3, 0x24(r31)
	  addi      r4, r1, 0x38
	  lwzx      r3, r3, r30
	  addi      r3, r3, 0x144
	  bl        -0x167E90
	  lwz       r3, 0x24(r31)
	  addi      r4, r1, 0xC
	  lwzx      r3, r3, r30
	  bl        -0x12A94
	  xori      r0, r29, 0x1
	  lwz       r4, 0x24(r31)
	  rlwinm    r30,r0,2,0,29
	  addi      r3, r1, 0x38
	  lwzx      r4, r4, r30
	  addi      r4, r4, 0x144
	  bl        -0x167EBC
	  lwz       r3, 0x24(r31)
	  addi      r4, r1, 0xC
	  lwzx      r3, r3, r30
	  bl        -0x12A64
	  lwz       r3, 0x24(r31)
	  lwzx      r3, r3, r30
	  bl        -0x12780
	  b         .loc_0x104

	.loc_0xE0:
	  li        r29, 0
	  li        r30, 0

	.loc_0xE8:
	  lwz       r3, 0x24(r31)
	  lwzx      r3, r3, r30
	  bl        0x1C8BF8
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x2
	  blt+      .loc_0xE8

	.loc_0x104:
	  lwz       r0, 0x34(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x154
	  lwz       r3, 0x24(r31)
	  lwz       r4, 0x0(r3)
	  lwz       r3, 0x4(r3)
	  lwz       r4, 0x19C(r4)
	  lwz       r0, 0x19C(r3)
	  or.       r0, r4, r0
	  bne-      .loc_0x154
	  lwz       r0, 0x18(r31)
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x34(r31)

	.loc_0x154:
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r29, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025223C
 * Size:	000154
 */
void startVibration__Q24Game9CameraMgrFiR10Vector3<float> i(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r27, 0x2C(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  lwz       r0, 0x38(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x140

	.loc_0x40:
	  mr        r5, r6
	  addi      r4, r1, 0x8
	  bl        0x60C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x140
	  lwz       r0, 0x8(r1)
	  mr        r30, r0
	  rlwinm    r31,r0,2,0,29
	  b         .loc_0x134

	.loc_0x64:
	  lwz       r3, 0x20(r27)
	  lwzx      r3, r3, r31
	  bl        0x1D2F98
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x12C
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r30
	  bl        0x638
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x12C
	  lwz       r4, 0x24(r27)
	  addi      r3, r1, 0x10
	  lwzx      r4, r4, r31
	  lwz       r4, 0x198(r4)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x4(r29)
	  lfs       f0, 0x14(r1)
	  lfs       f3, 0x0(r29)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x10(r1)
	  lfs       f1, 0x8(r29)
	  lfs       f0, 0x18(r1)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x3AC4(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x100
	  ble-      .loc_0x104
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x104

	.loc_0x100:
	  fmr       f1, f0

	.loc_0x104:
	  lwz       r3, 0x30(r27)
	  lfs       f2, 0x2F4(r3)
	  fcmpo     cr0, f1, f2
	  bge-      .loc_0x12C
	  fsubs     f0, f2, f1
	  lwz       r3, 0x24(r27)
	  mr        r4, r28
	  lwzx      r3, r3, r31
	  fdivs     f1, f0, f2
	  bl        -0x12880

	.loc_0x12C:
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x1

	.loc_0x134:
	  lwz       r0, 0xC(r1)
	  cmpw      r30, r0
	  blt+      .loc_0x64

	.loc_0x140:
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80252390
 * Size:	0000DC
 */
void Game::CameraMgr::startVibration((int, int))
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
	  mr        r28, r3
	  lwz       r0, 0x38(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xBC

	.loc_0x48:
	  addi      r4, r1, 0x8
	  bl        0x4B4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xBC
	  lwz       r0, 0x8(r1)
	  mr        r30, r0
	  rlwinm    r31,r0,2,0,29
	  b         .loc_0xB0

	.loc_0x68:
	  lwz       r3, 0x20(r28)
	  lwzx      r3, r3, r31
	  bl        0x1D2E40
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA8
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        0x4E0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA8
	  lwz       r3, 0x24(r28)
	  mr        r4, r29
	  lfs       f1, -0x3AC8(r2)
	  lwzx      r3, r3, r31
	  bl        -0x12950

	.loc_0xA8:
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x1

	.loc_0xB0:
	  lwz       r0, 0xC(r1)
	  cmpw      r30, r0
	  blt+      .loc_0x68

	.loc_0xBC:
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
 * Address:	8025246C
 * Size:	000070
 */
void Game::CameraMgr::controllerLock((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x24(r1)
	  addi      r4, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        0x408
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5C
	  lwz       r0, 0x8(r1)
	  li        r4, 0
	  mr        r6, r0
	  rlwinm    r5,r0,2,0,29
	  b         .loc_0x50

	.loc_0x3C:
	  lwz       r3, 0x24(r31)
	  addi      r6, r6, 0x1
	  lwzx      r3, r3, r5
	  addi      r5, r5, 0x4
	  stb       r4, 0x248(r3)

	.loc_0x50:
	  lwz       r0, 0xC(r1)
	  cmpw      r6, r0
	  blt+      .loc_0x3C

	.loc_0x5C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802524DC
 * Size:	000070
 */
void Game::CameraMgr::controllerUnLock((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x24(r1)
	  addi      r4, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        0x398
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5C
	  lwz       r0, 0x8(r1)
	  li        r4, 0x1
	  mr        r6, r0
	  rlwinm    r5,r0,2,0,29
	  b         .loc_0x50

	.loc_0x3C:
	  lwz       r3, 0x24(r31)
	  addi      r6, r6, 0x1
	  lwzx      r3, r3, r5
	  addi      r5, r5, 0x4
	  stb       r4, 0x248(r3)

	.loc_0x50:
	  lwz       r0, 0xC(r1)
	  cmpw      r6, r0
	  blt+      .loc_0x3C

	.loc_0x5C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025254C
 * Size:	000090
 */
void Game::CameraMgr::startDemoCamera((int, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  mr        r0, r4
	  addi      r4, r1, 0x8
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  mr        r5, r0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bl        0x314
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x70
	  lwz       r0, 0x8(r1)
	  mr        r30, r0
	  rlwinm    r31,r0,2,0,29
	  b         .loc_0x64

	.loc_0x4C:
	  lwz       r3, 0x24(r28)
	  mr        r4, r29
	  lwzx      r3, r3, r31
	  bl        -0x128B8
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x1

	.loc_0x64:
	  lwz       r0, 0xC(r1)
	  cmpw      r30, r0
	  blt+      .loc_0x4C

	.loc_0x70:
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
 * Address:	802525DC
 * Size:	00007C
 */
void Game::CameraMgr::finishDemoCamera((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x24(r1)
	  addi      r4, r1, 0x8
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        0x290
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  lwz       r0, 0x8(r1)
	  mr        r30, r0
	  rlwinm    r31,r0,2,0,29
	  b         .loc_0x54

	.loc_0x40:
	  lwz       r3, 0x24(r29)
	  lwzx      r3, r3, r31
	  bl        -0x12868
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x1

	.loc_0x54:
	  lwz       r0, 0xC(r1)
	  cmpw      r30, r0
	  blt+      .loc_0x40

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
 * Address:	80252658
 * Size:	000160
 */
void changePlayerMode__Q24Game9CameraMgrFiP30IDelegate1<Game::CameraArg*>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  mr        r31, r5
	  stw       r30, 0x68(r1)
	  mr        r30, r4
	  cmpwi     r30, 0x1
	  stw       r29, 0x64(r1)
	  mr        r29, r3
	  stw       r28, 0x60(r1)
	  li        r28, 0
	  beq-      .loc_0xA4
	  bge-      .loc_0x44
	  cmpwi     r30, 0
	  bge-      .loc_0x50
	  b         .loc_0x138

	.loc_0x44:
	  cmpwi     r30, 0x3
	  bge-      .loc_0x138
	  b         .loc_0xF8

	.loc_0x50:
	  lwz       r0, 0x18(r29)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x80
	  lwz       r3, 0x24(r29)
	  addi      r4, r1, 0x34
	  lwz       r3, 0x4(r3)
	  bl        -0x12FE8
	  lwz       r3, 0x24(r29)
	  addi      r4, r1, 0x34
	  lwz       r3, 0x0(r3)
	  bl        -0x12F9C
	  li        r28, 0x1

	.loc_0x80:
	  lwz       r3, 0x24(r29)
	  lwz       r4, 0x28(r29)
	  lwz       r3, 0x0(r3)
	  bl        -0x131BC
	  lwz       r3, 0x24(r29)
	  mr        r4, r28
	  lwz       r3, 0x0(r3)
	  bl        -0x12F64
	  b         .loc_0x138

	.loc_0xA4:
	  lwz       r0, 0x18(r29)
	  cmpwi     r0, 0
	  bne-      .loc_0xD4
	  lwz       r3, 0x24(r29)
	  addi      r4, r1, 0x8
	  lwz       r3, 0x0(r3)
	  bl        -0x1303C
	  lwz       r3, 0x24(r29)
	  addi      r4, r1, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x12FF0
	  li        r28, 0x1

	.loc_0xD4:
	  lwz       r3, 0x24(r29)
	  lwz       r4, 0x28(r29)
	  lwz       r3, 0x4(r3)
	  bl        -0x13210
	  lwz       r3, 0x24(r29)
	  mr        r4, r28
	  lwz       r3, 0x4(r3)
	  bl        -0x12FB8
	  b         .loc_0x138

	.loc_0xF8:
	  lwz       r3, 0x24(r29)
	  lwz       r4, 0x2C(r29)
	  lwz       r3, 0x0(r3)
	  bl        -0x13234
	  lwz       r3, 0x24(r29)
	  li        r4, 0
	  lwz       r3, 0x0(r3)
	  bl        -0x12FDC
	  lwz       r3, 0x24(r29)
	  lwz       r4, 0x2C(r29)
	  lwz       r3, 0x4(r3)
	  bl        -0x13254
	  lwz       r3, 0x24(r29)
	  li        r4, 0
	  lwz       r3, 0x4(r3)
	  bl        -0x12FFC

	.loc_0x138:
	  stw       r30, 0x18(r29)
	  stw       r31, 0x34(r29)
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  lwz       r28, 0x60(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802527B8
 * Size:	000058
 */
void Game::CameraMgr::isChangePlayer(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x34(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x14
	  li        r3, 0x1
	  blr

	.loc_0x14:
	  lwz       r4, 0x24(r3)
	  lwz       r3, 0x0(r4)
	  lwz       r3, 0x19C(r3)
	  rlwinm.   r0,r3,0,31,31
	  mr        r5, r3
	  beq-      .loc_0x34
	  li        r3, 0x1
	  blr

	.loc_0x34:
	  lwz       r3, 0x4(r4)
	  lwz       r3, 0x19C(r3)
	  or        r5, r5, r3
	  rlwinm.   r0,r5,0,31,31
	  beq-      .loc_0x50
	  li        r3, 0x1
	  blr

	.loc_0x50:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80252810
 * Size:	000058
 */
void Game::CameraMgr::setZukanCamera((LookAtCamera*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x6C18(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0x2C
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x2C
	  stw       r4, 0x38(r3)
	  b         .loc_0x48

	.loc_0x2C:
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x47FC
	  li        r4, 0x1CF
	  addi      r5, r5, 0x4828
	  crclr     6, 0x6
	  bl        -0x228214

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80252868
 * Size:	000028
 */
void Game::CameraMgr::isCameraUpdateOn(void)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x20
	  lbz       r0, 0x4A(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x20
	  li        r3, 0x1
	  blr

	.loc_0x20:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80252890
 * Size:	000068
 */
void Game::CameraMgr::isStartAndEnd((int*, int))
{
	/*
	.loc_0x0:
	  cmpwi     r5, 0x2
	  bne-      .loc_0x20
	  li        r3, 0
	  li        r0, 0x2
	  stw       r3, 0x0(r4)
	  li        r3, 0x1
	  stw       r0, 0x4(r4)
	  blr

	.loc_0x20:
	  cmpwi     r5, 0
	  bne-      .loc_0x40
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, 0x0(r4)
	  li        r3, 0x1
	  stw       r0, 0x4(r4)
	  blr

	.loc_0x40:
	  cmpwi     r5, 0x1
	  bne-      .loc_0x60
	  li        r3, 0x1
	  li        r0, 0x2
	  stw       r3, 0x0(r4)
	  li        r3, 0x1
	  stw       r0, 0x4(r4)
	  blr

	.loc_0x60:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802528F8
 * Size:	000084
 */
void Game::CameraMgr::isVibrationStart((int, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  rlwinm    r31,r5,2,0,29
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x24(r3)
	  lwzx      r3, r3, r31
	  bl        -0x12E84
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54
	  lwz       r3, 0x1C(r29)
	  lwzx      r0, r3, r31
	  cmpw      r30, r0
	  blt-      .loc_0x64
	  stwx      r30, r3, r31
	  li        r3, 0x1
	  b         .loc_0x68

	.loc_0x54:
	  lwz       r4, 0x1C(r29)
	  li        r3, 0x1
	  stwx      r30, r4, r31
	  b         .loc_0x68

	.loc_0x64:
	  li        r3, 0

	.loc_0x68:
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
 * Address:	8025297C
 * Size:	0000A8
 */
void Game::CameraMgr::readCameraParms((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x440(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x444(r1)
	  li        r0, 0
	  li        r7, 0
	  li        r8, 0x2
	  stw       r31, 0x43C(r1)
	  li        r9, 0
	  li        r10, 0
	  stw       r30, 0x438(r1)
	  mr        r30, r3
	  mr        r3, r4
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  bl        -0x233834
	  mr.       r31, r3
	  beq-      .loc_0x74
	  mr        r4, r31
	  addi      r3, r1, 0x10
	  li        r5, -0x1
	  bl        0x1C2F24
	  mr        r3, r30
	  addi      r4, r1, 0x10
	  bl        .loc_0xA8
	  mr        r3, r31
	  bl        -0x22E910
	  b         .loc_0x90

	.loc_0x74:
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x47FC
	  li        r4, 0x22F
	  addi      r5, r5, 0x4838
	  crclr     6, 0x6
	  bl        -0x2283C8

	.loc_0x90:
	  lwz       r0, 0x444(r1)
	  lwz       r31, 0x43C(r1)
	  lwz       r30, 0x438(r1)
	  mtlr      r0
	  addi      r1, r1, 0x440
	  blr

	.loc_0xA8:
	*/
}

/*
 * --INFO--
 * Address:	80252A24
 * Size:	000074
 */
void Game::CameraMgr::readParameter((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stw       r0, 0xC(r4)
	  lwz       r0, 0xC(r4)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x38
	  li        r0, 0
	  stw       r0, 0x414(r31)

	.loc_0x38:
	  lwz       r3, 0x28(r30)
	  mr        r4, r31
	  bl        0x1C0D90
	  lwz       r3, 0x2C(r30)
	  mr        r4, r31
	  bl        0x1C0D84
	  lwz       r3, 0x30(r30)
	  mr        r4, r31
	  bl        0x1C0D78
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
 * Address:	........
 * Size:	000074
 */
void Game::CameraMgr::writeParameter((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80252A98
 * Size:	000060
 */
void Game::CameraMgr::__dt(void)
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
	  lis       r5, 0x804C
	  li        r4, 0
	  addi      r0, r5, 0x1BD4
	  stw       r0, 0x0(r30)
	  bl        0x1BEAC0
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x22EA24

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
 * Address:	80252AF8
 * Size:	000028
 */
void __sinit_CameraMgr_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6968(r13)
	  stfsu     f0, 0x1BC8(r3)
	  stfs      f0, -0x6964(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
