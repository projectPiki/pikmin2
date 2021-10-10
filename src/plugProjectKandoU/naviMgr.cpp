

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
 * Address:	8015928C
 * Size:	0000CC
 */
void Game::NaviMgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x3938
	  addi      r3, r31, 0x30
	  bl        -0x13C2DC
	  lis       r4, 0x804B
	  li        r0, 0
	  addi      r6, r4, 0x14A0
	  lis       r3, 0x8043
	  stw       r6, 0x0(r31)
	  addi      r5, r6, 0x2C
	  addi      r4, r3, 0x4240
	  addi      r6, r6, 0x8C
	  stw       r5, 0x1C(r31)
	  addi      r3, r31, 0x60
	  li        r5, 0
	  li        r7, 0x2
	  stw       r6, 0x30(r31)
	  li        r6, 0x14
	  stb       r0, 0x5C(r31)
	  bl        -0x97AAC
	  lis       r4, 0x8043
	  addi      r3, r31, 0x88
	  addi      r4, r4, 0x4240
	  li        r5, 0
	  li        r6, 0x14
	  li        r7, 0x2
	  bl        -0x97AC8
	  subi      r0, r2, 0x5CF8
	  li        r3, 0xC64
	  stw       r0, 0x14(r31)
	  bl        -0x135470
	  mr.       r0, r3
	  beq-      .loc_0x9C
	  bl        .loc_0xCC
	  mr        r0, r3

	.loc_0x9C:
	  stw       r0, 0xC8(r31)
	  mr        r3, r31
	  bl        0x1EC0
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x48(r31)
	  stw       r0, 0x4C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0xCC:
	*/
}

/*
 * --INFO--
 * Address:	80159358
 * Size:	000060
 */
void Game::NaviParms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0xF5C
	  lis       r4, 0x804B
	  addi      r3, r31, 0x27C
	  addi      r0, r4, 0x1688
	  li        r4, 0x1
	  stw       r0, 0xD8(r31)
	  bl        .loc_0x60
	  lfs       f0, -0x5CF0(r2)
	  mr        r3, r31
	  lfs       f1, -0x5CEC(r2)
	  stfs      f0, 0x24(r31)
	  lfs       f0, -0x5CE8(r2)
	  stfs      f1, 0x74(r31)
	  stfs      f0, 0x9C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x60:
	*/
}

/*
 * --INFO--
 * Address:	801593B8
 * Size:	000F10
 */
void Game::NaviParms::Parms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x2F78
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x9E4
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x7030
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3030
	  addi      r6, r31, 0xC
	  bl        0x2BA24C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CE4(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3630
	  lfs       f0, -0x5CDC(r2)
	  addi      r6, r31, 0x1C
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x2BA210
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CD8(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3632
	  lfs       f0, -0x5CD4(r2)
	  addi      r6, r31, 0x2C
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x2BA1D4
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CD0(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x5CDC(r2)
	  addi      r6, r31, 0x40
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x2BA198
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CCC(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3533
	  lfs       f0, -0x5CDC(r2)
	  addi      r6, r31, 0x54
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x2BA15C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CC8(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x5CDC(r2)
	  addi      r6, r31, 0x68
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x2BA120
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CC4(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x5CDC(r2)
	  addi      r6, r31, 0x7C
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x2BA0E4
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CF0(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x5CDC(r2)
	  addi      r6, r31, 0x90
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x2BA0A8
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CC0(r2)
	  stw       r0, 0x124(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x14C
	  stfs      f0, 0x13C(r30)
	  addi      r5, r5, 0x3536
	  lfs       f0, -0x5CDC(r2)
	  addi      r6, r31, 0x9C
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
	  bl        0x2BA06C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CC0(r2)
	  stw       r0, 0x14C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x174
	  stfs      f0, 0x164(r30)
	  addi      r5, r5, 0x3338
	  lfs       f0, -0x5CDC(r2)
	  addi      r6, r31, 0xB0
	  stfs      f1, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  bl        0x2BA030
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CBC(r2)
	  stw       r0, 0x174(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE8(r2)
	  addi      r3, r30, 0x19C
	  stfs      f0, 0x18C(r30)
	  addi      r5, r5, 0x3035
	  lfs       f0, -0x5CB8(r2)
	  subi      r6, r2, 0x5CB4
	  stfs      f1, 0x194(r30)
	  stfs      f0, 0x198(r30)
	  bl        0x2B9FF4
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CAC(r2)
	  stw       r0, 0x19C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x1C4
	  stfs      f0, 0x1B4(r30)
	  addi      r5, r5, 0x3230
	  lfs       f0, -0x5CF0(r2)
	  addi      r6, r31, 0xC0
	  stfs      f1, 0x1BC(r30)
	  stfs      f0, 0x1C0(r30)
	  bl        0x2B9FB8
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CE8(r2)
	  stw       r0, 0x1C4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x1EC
	  stfs      f0, 0x1DC(r30)
	  addi      r5, r5, 0x3036
	  lfs       f0, -0x5CF0(r2)
	  subi      r6, r2, 0x5CA8
	  stfs      f1, 0x1E4(r30)
	  stfs      f0, 0x1E8(r30)
	  bl        0x2B9F7C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CA0(r2)
	  stw       r0, 0x1EC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x214
	  stfs      f0, 0x204(r30)
	  addi      r5, r5, 0x3037
	  lfs       f0, -0x5CF0(r2)
	  subi      r6, r2, 0x5C9C
	  stfs      f1, 0x20C(r30)
	  stfs      f0, 0x210(r30)
	  bl        0x2B9F40
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x5CF0(r2)
	  stw       r0, 0x214(r30)
	  mr        r4, r30
	  lfs       f0, -0x5CE0(r2)
	  addi      r3, r30, 0x23C
	  stfs      f1, 0x22C(r30)
	  addi      r5, r5, 0x3038
	  addi      r6, r31, 0xCC
	  stfs      f0, 0x234(r30)
	  stfs      f1, 0x238(r30)
	  bl        0x2B9F08
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C94(r2)
	  stw       r0, 0x23C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CCC(r2)
	  addi      r3, r30, 0x264
	  stfs      f0, 0x254(r30)
	  addi      r5, r5, 0x3039
	  lfs       f0, -0x5C90(r2)
	  addi      r6, r31, 0xD8
	  stfs      f1, 0x25C(r30)
	  stfs      f0, 0x260(r30)
	  bl        0x2B9ECC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C8C(r2)
	  stw       r0, 0x264(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x28C
	  stfs      f0, 0x27C(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, -0x5CB8(r2)
	  addi      r6, r31, 0xEC
	  stfs      f1, 0x284(r30)
	  stfs      f0, 0x288(r30)
	  bl        0x2B9E90
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C88(r2)
	  stw       r0, 0x28C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x2B4
	  stfs      f0, 0x2A4(r30)
	  addi      r5, r5, 0x3131
	  lfs       f0, -0x5CD4(r2)
	  addi      r6, r31, 0xFC
	  stfs      f1, 0x2AC(r30)
	  stfs      f0, 0x2B0(r30)
	  bl        0x2B9E54
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C88(r2)
	  stw       r0, 0x2B4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x2DC
	  stfs      f0, 0x2CC(r30)
	  addi      r5, r5, 0x3234
	  lfs       f0, -0x5CDC(r2)
	  addi      r6, r31, 0x10C
	  stfs      f1, 0x2D4(r30)
	  stfs      f0, 0x2D8(r30)
	  bl        0x2B9E18
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C84(r2)
	  stw       r0, 0x2DC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x304
	  stfs      f0, 0x2F4(r30)
	  addi      r5, r5, 0x3235
	  lfs       f0, -0x5CD4(r2)
	  addi      r6, r31, 0x11C
	  stfs      f1, 0x2FC(r30)
	  stfs      f0, 0x300(r30)
	  bl        0x2B9DDC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C84(r2)
	  stw       r0, 0x304(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x32C
	  stfs      f0, 0x31C(r30)
	  addi      r5, r5, 0x3534
	  lfs       f0, -0x5CD4(r2)
	  addi      r6, r31, 0x12C
	  stfs      f1, 0x324(r30)
	  stfs      f0, 0x328(r30)
	  bl        0x2B9DA0
	  lis       r3, 0x804B
	  lis       r5, 0x7130
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C80(r2)
	  stw       r0, 0x32C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x354
	  stfs      f0, 0x344(r30)
	  addi      r5, r5, 0x3030
	  lfs       f0, -0x5CD4(r2)
	  addi      r6, r31, 0x13C
	  stfs      f1, 0x34C(r30)
	  stfs      f0, 0x350(r30)
	  bl        0x2B9D64
	  lis       r3, 0x804B
	  lis       r5, 0x7130
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C7C(r2)
	  stw       r0, 0x354(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x37C
	  stfs      f0, 0x36C(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x5C78(r2)
	  addi      r6, r31, 0x14C
	  stfs      f1, 0x374(r30)
	  stfs      f0, 0x378(r30)
	  bl        0x2B9D28
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C84(r2)
	  stw       r0, 0x37C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x3A4
	  stfs      f0, 0x394(r30)
	  addi      r5, r5, 0x3236
	  lfs       f0, -0x5C78(r2)
	  addi      r6, r31, 0x15C
	  stfs      f1, 0x39C(r30)
	  stfs      f0, 0x3A0(r30)
	  bl        0x2B9CEC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CF0(r2)
	  stw       r0, 0x3A4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x3CC
	  stfs      f0, 0x3BC(r30)
	  addi      r5, r5, 0x3337
	  lfs       f0, -0x5C74(r2)
	  addi      r6, r31, 0x168
	  stfs      f1, 0x3C4(r30)
	  stfs      f0, 0x3C8(r30)
	  bl        0x2B9CB0
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CD0(r2)
	  stw       r0, 0x3CC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x3F4
	  stfs      f0, 0x3E4(r30)
	  addi      r5, r5, 0x3432
	  lfs       f0, -0x5CD8(r2)
	  addi      r6, r31, 0x180
	  stfs      f1, 0x3EC(r30)
	  stfs      f0, 0x3F0(r30)
	  bl        0x2B9C74
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5370
	  li        r7, 0
	  stw       r0, 0x3F4(r30)
	  li        r0, 0xA
	  mr        r4, r30
	  addi      r3, r30, 0x41C
	  stw       r7, 0x40C(r30)
	  addi      r5, r5, 0x3339
	  addi      r6, r31, 0x190
	  stw       r7, 0x414(r30)
	  stw       r0, 0x418(r30)
	  bl        0x2B9C3C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CD0(r2)
	  stw       r0, 0x41C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x444
	  stfs      f0, 0x434(r30)
	  addi      r5, r5, 0x3430
	  lfs       f0, -0x5CD8(r2)
	  addi      r6, r31, 0x1A0
	  stfs      f1, 0x43C(r30)
	  stfs      f0, 0x440(r30)
	  bl        0x2B9C00
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C70(r2)
	  stw       r0, 0x444(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x46C
	  stfs      f0, 0x45C(r30)
	  addi      r5, r5, 0x3231
	  lfs       f0, -0x5CD8(r2)
	  addi      r6, r31, 0x1C4
	  stfs      f1, 0x464(r30)
	  stfs      f0, 0x468(r30)
	  bl        0x2B9BC4
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C6C(r2)
	  stw       r0, 0x46C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x494
	  stfs      f0, 0x484(r30)
	  addi      r5, r5, 0x3431
	  lfs       f0, -0x5C74(r2)
	  addi      r6, r31, 0x1D4
	  stfs      f1, 0x48C(r30)
	  stfs      f0, 0x490(r30)
	  bl        0x2B9B88
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C68(r2)
	  stw       r0, 0x494(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x4BC
	  stfs      f0, 0x4AC(r30)
	  addi      r5, r5, 0x3232
	  lfs       f0, -0x5C74(r2)
	  addi      r6, r31, 0x1E8
	  stfs      f1, 0x4B4(r30)
	  stfs      f0, 0x4B8(r30)
	  bl        0x2B9B4C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CF0(r2)
	  stw       r0, 0x4BC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x4E4
	  stfs      f0, 0x4D4(r30)
	  addi      r5, r5, 0x3233
	  lfs       f0, -0x5C64(r2)
	  addi      r6, r31, 0x1F4
	  stfs      f1, 0x4DC(r30)
	  stfs      f0, 0x4E0(r30)
	  bl        0x2B9B10
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C60(r2)
	  stw       r0, 0x4E4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x50C
	  stfs      f0, 0x4FC(r30)
	  addi      r5, r5, 0x3331
	  lfs       f0, -0x5CF0(r2)
	  addi      r6, r31, 0x20C
	  stfs      f1, 0x504(r30)
	  stfs      f0, 0x508(r30)
	  bl        0x2B9AD4
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C5C(r2)
	  stw       r0, 0x50C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x534
	  stfs      f0, 0x524(r30)
	  addi      r5, r5, 0x3332
	  lfs       f0, -0x5CB8(r2)
	  addi      r6, r31, 0x21C
	  stfs      f1, 0x52C(r30)
	  stfs      f0, 0x530(r30)
	  bl        0x2B9A98
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CF0(r2)
	  stw       r0, 0x534(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x55C
	  stfs      f0, 0x54C(r30)
	  addi      r5, r5, 0x3333
	  lfs       f0, -0x5CB8(r2)
	  addi      r6, r31, 0x22C
	  stfs      f1, 0x554(r30)
	  stfs      f0, 0x558(r30)
	  bl        0x2B9A5C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CA0(r2)
	  stw       r0, 0x55C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x584
	  stfs      f0, 0x574(r30)
	  addi      r5, r5, 0x3334
	  lfs       f0, -0x5CB8(r2)
	  addi      r6, r31, 0x23C
	  stfs      f1, 0x57C(r30)
	  stfs      f0, 0x580(r30)
	  bl        0x2B9A20
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C58(r2)
	  stw       r0, 0x584(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x5AC
	  stfs      f0, 0x59C(r30)
	  addi      r5, r5, 0x3335
	  lfs       f0, -0x5CF0(r2)
	  addi      r6, r31, 0x254
	  stfs      f1, 0x5A4(r30)
	  stfs      f0, 0x5A8(r30)
	  bl        0x2B99E4
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CB8(r2)
	  stw       r0, 0x5AC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x5D4
	  stfs      f0, 0x5C4(r30)
	  addi      r5, r5, 0x3336
	  lfs       f0, -0x5C90(r2)
	  addi      r6, r31, 0x264
	  stfs      f1, 0x5CC(r30)
	  stfs      f0, 0x5D0(r30)
	  bl        0x2B99A8
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CE8(r2)
	  stw       r0, 0x5D4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x5FC
	  stfs      f0, 0x5EC(r30)
	  addi      r5, r5, 0x3438
	  lfs       f0, -0x5CF0(r2)
	  addi      r6, r31, 0x278
	  stfs      f1, 0x5F4(r30)
	  stfs      f0, 0x5F8(r30)
	  bl        0x2B996C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C54(r2)
	  stw       r0, 0x5FC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x624
	  stfs      f0, 0x614(r30)
	  addi      r5, r5, 0x3439
	  lfs       f0, -0x5C50(r2)
	  addi      r6, r31, 0x28C
	  stfs      f1, 0x61C(r30)
	  stfs      f0, 0x620(r30)
	  bl        0x2B9930
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CC8(r2)
	  stw       r0, 0x624(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x64C
	  stfs      f0, 0x63C(r30)
	  addi      r5, r5, 0x3433
	  lfs       f0, -0x5C50(r2)
	  addi      r6, r31, 0x2A8
	  stfs      f1, 0x644(r30)
	  stfs      f0, 0x648(r30)
	  bl        0x2B98F4
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CE8(r2)
	  stw       r0, 0x64C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x674
	  stfs      f0, 0x664(r30)
	  addi      r5, r5, 0x3434
	  lfs       f0, -0x5CF0(r2)
	  addi      r6, r31, 0x2C0
	  stfs      f1, 0x66C(r30)
	  stfs      f0, 0x670(r30)
	  bl        0x2B98B8
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C4C(r2)
	  stw       r0, 0x674(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x69C
	  stfs      f0, 0x68C(r30)
	  addi      r5, r5, 0x3438
	  lfs       f0, -0x5CF0(r2)
	  addi      r6, r31, 0x2D8
	  stfs      f1, 0x694(r30)
	  stfs      f0, 0x698(r30)
	  bl        0x2B987C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C54(r2)
	  stw       r0, 0x69C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x6C4
	  stfs      f0, 0x6B4(r30)
	  addi      r5, r5, 0x3435
	  lfs       f0, -0x5CF0(r2)
	  addi      r6, r31, 0x2EC
	  stfs      f1, 0x6BC(r30)
	  stfs      f0, 0x6C0(r30)
	  bl        0x2B9840
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x5CE0(r2)
	  stw       r0, 0x6C4(r30)
	  mr        r4, r30
	  lfs       f0, -0x5CD4(r2)
	  addi      r3, r30, 0x6EC
	  stfs      f1, 0x6DC(r30)
	  addi      r5, r5, 0x3436
	  addi      r6, r31, 0x304
	  stfs      f1, 0x6E4(r30)
	  stfs      f0, 0x6E8(r30)
	  bl        0x2B9808
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C74(r2)
	  stw       r0, 0x6EC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x714
	  stfs      f0, 0x704(r30)
	  addi      r5, r5, 0x3437
	  lfs       f0, -0x5C64(r2)
	  addi      r6, r31, 0x31C
	  stfs      f1, 0x70C(r30)
	  stfs      f0, 0x710(r30)
	  bl        0x2B97CC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C48(r2)
	  stw       r0, 0x714(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x73C
	  stfs      f0, 0x72C(r30)
	  addi      r5, r5, 0x3530
	  lfs       f0, -0x5CD4(r2)
	  subi      r6, r2, 0x5C44
	  stfs      f1, 0x734(r30)
	  stfs      f0, 0x738(r30)
	  bl        0x2B9790
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C74(r2)
	  stw       r0, 0x73C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x764
	  stfs      f0, 0x754(r30)
	  addi      r5, r5, 0x3531
	  lfs       f0, -0x5CD4(r2)
	  subi      r6, r2, 0x5C3C
	  stfs      f1, 0x75C(r30)
	  stfs      f0, 0x760(r30)
	  bl        0x2B9754
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CB8(r2)
	  stw       r0, 0x764(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x78C
	  stfs      f0, 0x77C(r30)
	  addi      r5, r5, 0x3532
	  lfs       f0, -0x5CD4(r2)
	  addi      r6, r31, 0x334
	  stfs      f1, 0x784(r30)
	  stfs      f0, 0x788(r30)
	  bl        0x2B9718
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CB8(r2)
	  stw       r0, 0x78C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x7B4
	  stfs      f0, 0x7A4(r30)
	  addi      r5, r5, 0x3535
	  lfs       f0, -0x5C74(r2)
	  addi      r6, r31, 0x340
	  stfs      f1, 0x7AC(r30)
	  stfs      f0, 0x7B0(r30)
	  bl        0x2B96DC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5370
	  li        r3, 0x1
	  stw       r0, 0x7B4(r30)
	  li        r7, 0
	  li        r0, 0xA
	  mr        r4, r30
	  stw       r3, 0x7CC(r30)
	  addi      r3, r30, 0x7DC
	  addi      r5, r5, 0x3537
	  addi      r6, r31, 0x354
	  stw       r7, 0x7D4(r30)
	  stw       r0, 0x7D8(r30)
	  bl        0x2B96A0
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5370
	  li        r3, 0x3
	  stw       r0, 0x7DC(r30)
	  li        r7, 0
	  li        r0, 0x10
	  mr        r4, r30
	  stw       r3, 0x7F4(r30)
	  addi      r3, r30, 0x804
	  addi      r5, r5, 0x3538
	  addi      r6, r31, 0x368
	  stw       r7, 0x7FC(r30)
	  stw       r0, 0x800(r30)
	  bl        0x2B9664
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5370
	  li        r3, 0x2
	  stw       r0, 0x804(r30)
	  li        r7, 0
	  li        r0, 0x10
	  mr        r4, r30
	  stw       r3, 0x81C(r30)
	  addi      r3, r30, 0x82C
	  addi      r5, r5, 0x3539
	  addi      r6, r31, 0x378
	  stw       r7, 0x824(r30)
	  stw       r0, 0x828(r30)
	  bl        0x2B9628
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5370
	  li        r3, 0x2
	  stw       r0, 0x82C(r30)
	  li        r7, 0
	  li        r0, 0x10
	  mr        r4, r30
	  stw       r3, 0x844(r30)
	  addi      r3, r30, 0x854
	  addi      r5, r5, 0x3631
	  addi      r6, r31, 0x388
	  stw       r7, 0x84C(r30)
	  stw       r0, 0x850(r30)
	  bl        0x2B95EC
	  lis       r3, 0x804B
	  lis       r5, 0x7130
	  subi      r0, r3, 0x5370
	  li        r3, 0x50
	  stw       r0, 0x854(r30)
	  li        r7, 0
	  li        r0, 0x3E8
	  mr        r4, r30
	  stw       r3, 0x86C(r30)
	  addi      r3, r30, 0x87C
	  addi      r5, r5, 0x3032
	  addi      r6, r31, 0x3A8
	  stw       r7, 0x874(r30)
	  stw       r0, 0x878(r30)
	  bl        0x2B95B0
	  lis       r3, 0x804B
	  lis       r5, 0x7130
	  subi      r0, r3, 0x5370
	  li        r3, 0xA
	  stw       r0, 0x87C(r30)
	  li        r7, 0x1
	  li        r0, 0x64
	  mr        r4, r30
	  stw       r3, 0x894(r30)
	  addi      r3, r30, 0x8A4
	  addi      r5, r5, 0x3033
	  addi      r6, r31, 0x3B8
	  stw       r7, 0x89C(r30)
	  stw       r0, 0x8A0(r30)
	  bl        0x2B9574
	  lis       r3, 0x804B
	  lis       r5, 0x7130
	  subi      r0, r3, 0x5370
	  li        r3, 0x19
	  stw       r0, 0x8A4(r30)
	  li        r7, 0x1
	  li        r0, 0x64
	  mr        r4, r30
	  stw       r3, 0x8BC(r30)
	  addi      r3, r30, 0x8CC
	  addi      r5, r5, 0x3034
	  addi      r6, r31, 0x3C8
	  stw       r7, 0x8C4(r30)
	  stw       r0, 0x8C8(r30)
	  bl        0x2B9538
	  lis       r3, 0x804B
	  lis       r5, 0x7130
	  subi      r0, r3, 0x5370
	  li        r3, 0x32
	  stw       r0, 0x8CC(r30)
	  li        r7, 0x1
	  li        r0, 0x64
	  mr        r4, r30
	  stw       r3, 0x8E4(r30)
	  addi      r3, r30, 0x8F4
	  addi      r5, r5, 0x3035
	  addi      r6, r31, 0x3D8
	  stw       r7, 0x8EC(r30)
	  stw       r0, 0x8F0(r30)
	  bl        0x2B94FC
	  lis       r3, 0x804B
	  lis       r5, 0x7130
	  subi      r0, r3, 0x5370
	  li        r7, 0x64
	  stw       r0, 0x8F4(r30)
	  li        r0, 0x1
	  mr        r4, r30
	  addi      r3, r30, 0x91C
	  stw       r7, 0x90C(r30)
	  addi      r5, r5, 0x3036
	  addi      r6, r31, 0x3E8
	  stw       r0, 0x914(r30)
	  stw       r7, 0x918(r30)
	  bl        0x2B94C4
	  lis       r3, 0x804B
	  lis       r5, 0x7130
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C34(r2)
	  stw       r0, 0x91C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x944
	  stfs      f0, 0x934(r30)
	  addi      r5, r5, 0x3037
	  lfs       f0, -0x5CDC(r2)
	  addi      r6, r31, 0x3FC
	  stfs      f1, 0x93C(r30)
	  stfs      f0, 0x940(r30)
	  bl        0x2B9488
	  lis       r3, 0x804B
	  lis       r5, 0x7130
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CD8(r2)
	  stw       r0, 0x944(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x96C
	  stfs      f0, 0x95C(r30)
	  addi      r5, r5, 0x3038
	  lfs       f0, -0x5C48(r2)
	  addi      r6, r31, 0x40C
	  stfs      f1, 0x964(r30)
	  stfs      f0, 0x968(r30)
	  bl        0x2B944C
	  lis       r3, 0x804B
	  lis       r5, 0x7130
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CEC(r2)
	  stw       r0, 0x96C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x994
	  stfs      f0, 0x984(r30)
	  addi      r5, r5, 0x3039
	  lfs       f0, -0x5CF0(r2)
	  addi      r6, r31, 0x424
	  stfs      f1, 0x98C(r30)
	  stfs      f0, 0x990(r30)
	  bl        0x2B9410
	  lis       r3, 0x804B
	  lis       r5, 0x7130
	  subi      r0, r3, 0x5370
	  li        r3, 0x2
	  stw       r0, 0x994(r30)
	  li        r7, 0
	  li        r0, 0xA
	  mr        r4, r30
	  stw       r3, 0x9AC(r30)
	  addi      r3, r30, 0x9BC
	  addi      r5, r5, 0x3130
	  addi      r6, r31, 0x438
	  stw       r7, 0x9B4(r30)
	  stw       r0, 0x9B8(r30)
	  bl        0x2B93D4
	  lis       r3, 0x804B
	  lfs       f2, -0x5CB8(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x5CE0(r2)
	  stw       r0, 0x9BC(r30)
	  mr        r3, r30
	  lfs       f0, -0x5CD8(r2)
	  stfs      f2, 0x9D4(r30)
	  stfs      f1, 0x9DC(r30)
	  stfs      f0, 0x9E0(r30)
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
 * Address:	8015A2C8
 * Size:	0001A4
 */
void Game::FakePikiParms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x7330
	  lis       r4, 0x804B
	  stw       r0, 0x14(r1)
	  subi      r0, r4, 0x5350
	  addi      r5, r5, 0x3030
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x8048
	  stw       r30, 0x8(r1)
	  subi      r30, r3, 0x2F78
	  li        r3, 0
	  mr        r4, r31
	  stw       r0, 0xD8(r31)
	  addi      r0, r31, 0xD4
	  addi      r6, r30, 0x460
	  stw       r0, 0x0(r31)
	  addi      r0, r30, 0x44C
	  stw       r3, 0x4(r31)
	  addi      r3, r31, 0xC
	  stw       r0, 0x8(r31)
	  bl        0x2B9338
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CEC(r2)
	  stw       r0, 0xC(r31)
	  mr        r4, r31
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r31, 0x34
	  stfs      f0, 0x24(r31)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x5CF0(r2)
	  addi      r6, r30, 0x474
	  stfs      f1, 0x2C(r31)
	  stfs      f0, 0x30(r31)
	  bl        0x2B92FC
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CEC(r2)
	  stw       r0, 0x34(r31)
	  mr        r4, r31
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r31, 0x5C
	  stfs      f0, 0x4C(r31)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x5CF0(r2)
	  addi      r6, r30, 0x484
	  stfs      f1, 0x54(r31)
	  stfs      f0, 0x58(r31)
	  bl        0x2B92C0
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C30(r2)
	  stw       r0, 0x5C(r31)
	  mr        r4, r31
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r31, 0x84
	  stfs      f0, 0x74(r31)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x5CF0(r2)
	  subi      r6, r2, 0x5C2C
	  stfs      f1, 0x7C(r31)
	  stfs      f0, 0x80(r31)
	  bl        0x2B9284
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CE8(r2)
	  stw       r0, 0x84(r31)
	  mr        r4, r31
	  lfs       f1, -0x5C24(r2)
	  addi      r3, r31, 0xAC
	  stfs      f0, 0x9C(r31)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x5C5C(r2)
	  addi      r6, r30, 0x494
	  stfs      f1, 0xA4(r31)
	  stfs      f0, 0xA8(r31)
	  bl        0x2B9248
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5344
	  lfs       f0, -0x5C58(r2)
	  stw       r0, 0xAC(r31)
	  addi      r0, r3, 0x167C
	  lfs       f1, -0x5C24(r2)
	  addi      r3, r31, 0xDC
	  stfs      f0, 0xC4(r31)
	  li        r4, 0x1
	  lfs       f0, -0x5C5C(r2)
	  stfs      f1, 0xCC(r31)
	  stfs      f0, 0xD0(r31)
	  stw       r0, 0xD8(r31)
	  bl        .loc_0x1A4
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x1A4:
	*/
}

/*
 * --INFO--
 * Address:	8015A46C
 * Size:	0002B4
 */
void Game::FakePikiParms::Parms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x2F78
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x19C
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x6670
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x4A4
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0x4B4
	  bl        0x2B9198
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CC8(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x5CDC(r2)
	  addi      r6, r31, 0x4CC
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x2B915C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C6C(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x5CDC(r2)
	  addi      r6, r31, 0x4E0
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x2B9120
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C20(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x5CDC(r2)
	  addi      r6, r31, 0x4F4
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x2B90E4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C1C(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x5CDC(r2)
	  addi      r6, r31, 0x508
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x2B90A8
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C50(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x3035
	  lfs       f0, -0x5C48(r2)
	  addi      r6, r31, 0x524
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x2B906C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5CCC(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3036
	  lfs       f0, -0x5C48(r2)
	  addi      r6, r31, 0x540
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x2B9030
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C70(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3037
	  lfs       f0, -0x5C48(r2)
	  addi      r6, r31, 0x558
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x2B8FF4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C50(r2)
	  stw       r0, 0x124(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x14C
	  stfs      f0, 0x13C(r30)
	  addi      r5, r5, 0x3038
	  lfs       f0, -0x5C48(r2)
	  addi      r6, r31, 0x570
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
	  bl        0x2B8FB8
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5C50(r2)
	  stw       r0, 0x14C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5CE0(r2)
	  addi      r3, r30, 0x174
	  stfs      f0, 0x164(r30)
	  addi      r5, r5, 0x3039
	  lfs       f0, -0x5C48(r2)
	  addi      r6, r31, 0x58C
	  stfs      f1, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  bl        0x2B8F7C
	  lis       r3, 0x804B
	  lfs       f2, -0x5CCC(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x5CE0(r2)
	  stw       r0, 0x174(r30)
	  mr        r3, r30
	  lfs       f0, -0x5C48(r2)
	  stfs      f2, 0x18C(r30)
	  stfs      f1, 0x194(r30)
	  stfs      f0, 0x198(r30)
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
 * Address:	8015A720
 * Size:	0000A0
 */
void MonoObjectMgr<Game::Navi>::~MonoObjectMgr()
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
	  beq-      .loc_0x84
	  lis       r4, 0x804B
	  addi      r4, r4, 0x15F0
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804B
	  addi      r4, r4, 0x1574
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804B
	  addi      r0, r4, 0x1548
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x74
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2B6DF8

	.loc_0x74:
	  extsh.    r0, r31
	  ble-      .loc_0x84
	  mr        r3, r30
	  bl        -0x1366EC

	.loc_0x84:
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
 * Address:	8015A7C0
 * Size:	000110
 */
void Game::NaviMgr::__dt(void)
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
	  beq-      .loc_0xF4
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r3, r3, 0x14A0
	  stw       r3, 0x0(r30)
	  addi      r4, r3, 0x2C
	  addi      r3, r3, 0x8C
	  stw       r4, 0x1C(r30)
	  stw       r3, 0x30(r30)
	  stw       r0, -0x6D1C(r13)
	  stw       r0, -0x6D20(r13)
	  lwz       r3, 0x48(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  bl        -0x136760
	  li        r0, 0
	  stw       r0, 0x48(r30)

	.loc_0x60:
	  lwz       r3, 0x4C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  bl        -0x136778
	  li        r0, 0
	  stw       r0, 0x4C(r30)

	.loc_0x78:
	  addi      r3, r30, 0x30
	  li        r4, 0
	  bl        -0x13D80C
	  cmplwi    r30, 0
	  beq-      .loc_0xE4
	  lis       r3, 0x804B
	  addi      r3, r3, 0x15F0
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0xE4
	  lis       r3, 0x804B
	  addi      r3, r3, 0x1574
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0xE4
	  lis       r3, 0x804B
	  addi      r0, r3, 0x1548
	  stw       r0, 0x0(r30)
	  beq-      .loc_0xE4
	  lis       r4, 0x804B
	  mr        r3, r30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  bl        0x2B6CE8

	.loc_0xE4:
	  extsh.    r0, r31
	  ble-      .loc_0xF4
	  mr        r3, r30
	  bl        -0x1367FC

	.loc_0xF4:
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
 * Address:	........
 * Size:	000020
 */
void Game::NaviMgr::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8015A8D0
 * Size:	000078
 */
void Game::NaviMgr::createPSMDirectorUpdator(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x10
	  bl        -0x136A48
	  mr.       r31, r3
	  beq-      .loc_0x44
	  bl        0x2FE678
	  mr        r4, r3
	  mr        r3, r31
	  li        r5, 0x2
	  li        r6, 0
	  bl        0x2FDBA4
	  mr        r31, r3

	.loc_0x44:
	  stw       r31, 0x4C(r30)
	  li        r4, 0
	  lwz       r3, 0x4C(r30)
	  bl        0x2FDC2C
	  lwz       r3, 0x4C(r30)
	  li        r4, 0x1
	  bl        0x2FDC20
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
 * Address:	8015A948
 * Size:	00005C
 */
void Game::NaviMgr::resetMgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1624
	  lwz       r3, 0x48(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  bl        -0x1368B8
	  li        r0, 0
	  stw       r0, 0x48(r31)

	.loc_0x30:
	  lwz       r3, 0x4C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  bl        -0x1368D0
	  li        r0, 0
	  stw       r0, 0x4C(r31)

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015A9A4
 * Size:	000090
 */
void Game::NaviMgr::killAll(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x64

	.loc_0x2C:
	  lwz       r0, 0x28(r28)
	  li        r4, 0
	  add       r29, r0, r31
	  mr        r3, r29
	  bl        -0x1F8F0
	  lwz       r3, -0x6E44(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  lwz       r4, 0x26C(r29)
	  cmplwi    r4, 0
	  beq-      .loc_0x5C
	  bl        -0x133DD8

	.loc_0x5C:
	  addi      r31, r31, 0x320
	  addi      r30, r30, 0x1

	.loc_0x64:
	  lwz       r0, 0x24(r28)
	  cmpw      r30, r0
	  blt+      .loc_0x2C
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
 * Address:	8015AA34
 * Size:	0000F0
 */
void Game::NaviMgr::setupNavi((Game::Navi*))
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
	  lhz       r4, 0x2DC(r4)
	  bl        0x5D8
	  stw       r3, 0x174(r31)
	  li        r3, 0x14
	  lwz       r0, 0xC8(r30)
	  stw       r0, 0xC0(r31)
	  bl        -0x136BC4
	  mr.       r0, r3
	  beq-      .loc_0x54
	  lwz       r4, 0xB8(r30)
	  li        r5, 0
	  li        r6, 0x2
	  bl        0x2E3758
	  mr        r0, r3

	.loc_0x54:
	  stw       r0, 0x290(r31)
	  li        r3, 0x14
	  bl        -0x136BEC
	  mr.       r0, r3
	  beq-      .loc_0x7C
	  lwz       r4, 0xC4(r30)
	  lis       r5, 0x8
	  li        r6, 0x2
	  bl        0x2E3730
	  mr        r0, r3

	.loc_0x7C:
	  stw       r0, 0x294(r31)
	  lis       r4, 0x100
	  lwz       r3, 0x294(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0xF43E8
	  lwz       r3, 0x294(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x294(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x294(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0xF41D8
	  lwz       r3, 0x294(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0xF4314
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
 * Address:	8015AB24
 * Size:	0000FC
 */
void Game::NaviMgr::birth(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  bl        0x102C
	  mr.       r29, r3
	  beq-      .loc_0x90
	  lwz       r3, 0x20(r31)
	  subi      r0, r3, 0x1
	  sth       r0, 0x2DC(r29)
	  lwz       r0, 0x26C(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x60
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x29D0
	  li        r4, 0x15D
	  subi      r5, r5, 0x29C4
	  crclr     6, 0x6
	  bl        -0x130540

	.loc_0x60:
	  lwz       r3, 0x26C(r29)
	  lhz       r4, 0x2DC(r29)
	  bl        0x30806C
	  lwz       r3, -0x6B70(r13)
	  lbz       r0, 0x2F(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x90
	  lhz       r0, 0x2DC(r29)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x90
	  lwz       r3, 0x26C(r29)
	  bl        0x30806C

	.loc_0x90:
	  mr        r30, r31
	  li        r28, 0
	  b         .loc_0xCC

	.loc_0x9C:
	  lwz       r3, 0x54(r30)
	  lhz       r0, 0x2DC(r29)
	  cmpw      r3, r0
	  bne-      .loc_0xC4
	  mr        r3, r29
	  li        r4, 0
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC4:
	  addi      r30, r30, 0x4
	  addi      r28, r28, 0x1

	.loc_0xCC:
	  lwz       r0, 0x50(r31)
	  cmpw      r28, r0
	  blt+      .loc_0x9C
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
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
 * Address:	8015AC20
 * Size:	00009C
 */
void Game::NaviMgr::getActiveNavi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  mr        r31, r0
	  li        r4, 0x1
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r31, 0
	  bne-      .loc_0x60
	  cmplwi    r3, 0
	  bne-      .loc_0x60
	  li        r3, 0
	  b         .loc_0x88

	.loc_0x60:
	  lwz       r0, 0x278(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  mr        r3, r31
	  b         .loc_0x88

	.loc_0x74:
	  lwz       r0, 0x278(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x84
	  b         .loc_0x88

	.loc_0x84:
	  li        r3, 0

	.loc_0x88:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015ACBC
 * Size:	0000BC
 */
void Game::NaviMgr::loadResources(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x440(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  li        r5, 0
	  stw       r0, 0x444(r1)
	  li        r0, 0
	  li        r6, 0
	  li        r7, 0
	  stw       r31, 0x43C(r1)
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  stw       r30, 0x438(r1)
	  mr        r30, r3
	  stw       r0, 0x8(r1)
	  subi      r0, r4, 0x29B8
	  li        r4, 0
	  mr        r3, r0
	  bl        -0x13BB7C
	  mr.       r31, r3
	  beq-      .loc_0x9C
	  mr        r4, r31
	  addi      r3, r1, 0x10
	  li        r5, -0x1
	  bl        0x2BABDC
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x1C(r1)
	  bne-      .loc_0x7C
	  li        r0, 0
	  stw       r0, 0x424(r1)

	.loc_0x7C:
	  lwz       r3, 0xC8(r30)
	  addi      r4, r1, 0x10
	  lwz       r12, 0xD8(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x136C7C

	.loc_0x9C:
	  mr        r3, r30
	  bl        0x6C
	  lwz       r0, 0x444(r1)
	  lwz       r31, 0x43C(r1)
	  lwz       r30, 0x438(r1)
	  mtlr      r0
	  addi      r1, r1, 0x440
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015AD78
 * Size:	000050
 */
void Game::NaviParms::read((Stream&))
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
	  bl        0x2B8A60
	  mr        r4, r31
	  addi      r3, r30, 0xDC
	  bl        0x2B8A54
	  mr        r4, r31
	  addi      r3, r30, 0x27C
	  bl        0x2B8A48
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
 * Address:	8015ADC8
 * Size:	000264
 */
void Game::NaviMgr::load(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r4, 0x2F78
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r3, -0x77D4(r13)
	  bl        -0x137614
	  lwz       r5, -0x77D4(r13)
	  addi      r3, r31, 0x5DC
	  li        r4, 0x1
	  li        r6, 0x2
	  bl        -0x13FCD8
	  mr        r30, r3
	  lwz       r3, -0x77D4(r13)
	  bl        -0x137634
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x5F8
	  li        r5, 0
	  bl        0x2C8538
	  lwz       r5, -0x6514(r13)
	  addi      r3, r31, 0x60C
	  li        r4, 0x1
	  li        r6, 0x1
	  lwz       r5, 0x38(r5)
	  bl        -0x13FD0C
	  mr        r29, r3
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x5F8
	  bl        0x2C8518
	  mr        r3, r29
	  addi      r4, r31, 0x628
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x2000
	  addi      r4, r4, 0x30
	  bl        -0xEB5DC
	  li        r4, 0
	  mr        r5, r3
	  b         .loc_0xD8

	.loc_0xB8:
	  lwz       r3, 0x80(r5)
	  rlwinm    r0,r4,2,14,29
	  addi      r4, r4, 0x1
	  lwzx      r3, r3, r0
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,20,15
	  ori       r0, r0, 0x2000
	  stw       r0, 0xC(r3)

	.loc_0xD8:
	  lhz       r0, 0x7C(r5)
	  rlwinm    r3,r4,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0xB8
	  stw       r5, 0xB0(r28)
	  lwz       r0, -0x6D1C(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x110
	  mr        r3, r30
	  mr        r6, r29
	  addi      r4, r31, 0x640
	  subi      r7, r2, 0x5C18
	  bl        0x2E2E8C
	  stw       r3, -0x6D1C(r13)

	.loc_0x110:
	  mr        r3, r30
	  addi      r4, r31, 0x64C
	  bl        -0x2259C
	  stw       r3, 0xCC(r28)
	  mr        r3, r29
	  addi      r4, r31, 0x65C
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x24
	  bl        -0xEB670
	  stw       r3, 0xB8(r28)
	  mr        r3, r29
	  addi      r4, r31, 0x670
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x24
	  bl        -0xEB694
	  stw       r3, 0xC4(r28)
	  lis       r4, 0x4
	  lwz       r3, 0xC4(r28)
	  bl        -0xD7660
	  lwz       r3, 0xB8(r28)
	  li        r4, 0
	  bl        0x2E3358
	  mr        r3, r29
	  addi      r4, r31, 0x684
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0xB8(r28)
	  mr        r4, r3
	  addi      r3, r28, 0x60
	  bl        0x2D90B4
	  mr        r3, r29
	  addi      r4, r31, 0x69C
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0xB8(r28)
	  mr        r4, r3
	  addi      r3, r28, 0x74
	  bl        0x2D908C
	  mr        r3, r29
	  addi      r4, r31, 0x6B4
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0xB8(r28)
	  mr        r4, r3
	  addi      r3, r28, 0x88
	  bl        0x2D9064
	  mr        r3, r29
	  addi      r4, r31, 0x6CC
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0xB8(r28)
	  mr        r4, r3
	  addi      r3, r28, 0x9C
	  bl        0x2D903C
	  lwz       r3, -0x77D4(r13)
	  bl        -0x13780C
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x77D4(r13)
	  bl        -0x137828
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
 * Address:	8015B02C
 * Size:	000064
 */
void Game::NaviMgr::createModel((int))
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
	  li        r3, 0x14
	  bl        -0x1371A8
	  mr.       r0, r3
	  beq-      .loc_0x48
	  rlwinm    r0,r31,2,0,29
	  li        r5, 0
	  add       r4, r30, r0
	  li        r6, 0x2
	  lwz       r4, 0xB0(r4)
	  bl        0x2E316C
	  mr        r0, r3

	.loc_0x48:
	  mr        r3, r0
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
 * Address:	8015B090
 * Size:	0000D4
 */
void Game::NaviMgr::loadResources_float(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  li        r6, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  subi      r30, r5, 0x2F78
	  addi      r3, r30, 0x60C
	  lwz       r4, -0x6514(r13)
	  lwz       r5, 0x38(r4)
	  li        r4, 0x1
	  bl        -0x13FF94
	  lwz       r4, -0x6B70(r13)
	  lbz       r0, 0x2F(r4)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x60
	  lwz       r12, 0x0(r3)
	  addi      r4, r30, 0x6E4
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x74

	.loc_0x60:
	  lwz       r12, 0x0(r3)
	  addi      r4, r30, 0x6FC
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x74:
	  lis       r4, 0x2000
	  addi      r4, r4, 0x30
	  bl        -0xEB878
	  li        r5, 0
	  b         .loc_0xA8

	.loc_0x88:
	  lwz       r4, 0x80(r3)
	  rlwinm    r0,r5,2,14,29
	  addi      r5, r5, 0x1
	  lwzx      r4, r4, r0
	  lwz       r0, 0xC(r4)
	  rlwinm    r0,r0,0,20,15
	  ori       r0, r0, 0x2000
	  stw       r0, 0xC(r4)

	.loc_0xA8:
	  lhz       r0, 0x7C(r3)
	  rlwinm    r4,r5,0,16,31
	  cmplw     r4, r0
	  blt+      .loc_0x88
	  stw       r3, 0xB4(r31)
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
 * Address:	8015B164
 * Size:	00008C
 */
void Game::NaviMgr::getAliveCount(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x5C

	.loc_0x30:
	  lwz       r0, 0x28(r28)
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54
	  addi      r30, r30, 0x1

	.loc_0x54:
	  addi      r31, r31, 0x320
	  addi      r29, r29, 0x1

	.loc_0x5C:
	  lwz       r0, 0x24(r28)
	  cmpw      r29, r0
	  blt+      .loc_0x30
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
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
void Game::NaviMgr::getSurviveNavi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8015B1F0
 * Size:	000018
 */
void Game::NaviMgr::clearDeadCount(void)
{
	/*
	.loc_0x0:
	  li        r4, 0
	  li        r0, -0x1
	  stw       r4, 0x50(r3)
	  stw       r0, 0x54(r3)
	  stw       r0, 0x58(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015B208
 * Size:	000078
 */
void Game::NaviMgr::informOrimaDead((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  lwz       r6, 0x50(r3)
	  mtctr     r6
	  cmpwi     r6, 0
	  ble-      .loc_0x34

	.loc_0x20:
	  lwz       r0, 0x54(r5)
	  cmpw      r0, r4
	  beq-      .loc_0x68
	  addi      r5, r5, 0x4
	  bdnz+     .loc_0x20

	.loc_0x34:
	  rlwinm    r0,r6,2,0,29
	  add       r5, r3, r0
	  stw       r4, 0x54(r5)
	  lwz       r5, 0x50(r3)
	  addi      r0, r5, 0x1
	  stw       r0, 0x50(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  bl        -0x15DE0

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015B280
 * Size:	00004C
 */
void Game::NaviMgr::getDeadOrima((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x50(r3)
	  cmpw      r0, r4
	  ble-      .loc_0x38
	  lwz       r12, 0x0(r3)
	  rlwinm    r0,r4,2,0,29
	  add       r4, r3, r0
	  lwz       r12, 0x24(r12)
	  lwz       r4, 0x54(r4)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3C

	.loc_0x38:
	  li        r3, 0

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015B2CC
 * Size:	0000EC
 */
void Game::NaviMgr::getAliveOrima((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r0, 0x50(r3)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0xD4

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x64
	  lwz       r0, 0x54(r31)
	  cmpwi     r30, 0
	  subfic    r4, r0, 0x1
	  bne-      .loc_0x5C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xD4

	.loc_0x5C:
	  li        r3, 0
	  b         .loc_0xD4

	.loc_0x64:
	  cmpwi     r0, 0
	  bne-      .loc_0xD0
	  lwz       r12, 0x0(r3)
	  li        r4, 0
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  mr        r31, r0
	  li        r4, 0x1
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x278(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xB4
	  mr        r0, r31
	  b         .loc_0xBC

	.loc_0xB4:
	  mr        r0, r3
	  mr        r3, r31

	.loc_0xBC:
	  cmpwi     r30, 0
	  bne-      .loc_0xD4
	  mr        r3, r0
	  b         .loc_0xD4
	  b         .loc_0xD4

	.loc_0xD0:
	  li        r3, 0

	.loc_0xD4:
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
 * Address:	8015B3B8
 * Size:	0000A8
 */
void Game::NaviMgr::setMovieDraw((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm.   r0,r4,0,24,31
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bne-      .loc_0x3C
	  lbz       r0, 0x5C(r28)
	  ori       r0, r0, 0x1
	  stb       r0, 0x5C(r28)
	  b         .loc_0x48

	.loc_0x3C:
	  lbz       r0, 0x5C(r28)
	  rlwinm    r0,r0,0,24,30
	  stb       r0, 0x5C(r28)

	.loc_0x48:
	  li        r30, 0
	  li        r31, 0
	  b         .loc_0x7C

	.loc_0x54:
	  lwz       r3, 0x2C(r28)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x74
	  lwz       r0, 0x28(r28)
	  mr        r4, r29
	  add       r3, r0, r31
	  bl        -0x188FC

	.loc_0x74:
	  addi      r31, r31, 0x320
	  addi      r30, r30, 0x1

	.loc_0x7C:
	  lwz       r0, 0x24(r28)
	  cmpw      r30, r0
	  blt+      .loc_0x54
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
 * Address:	8015B460
 * Size:	0000E0
 */
void Game::NaviMgr::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lbz       r0, 0x5C(r3)
	  rlwinm    r31,r0,0,31,31
	  b         .loc_0xB4

	.loc_0x34:
	  lwz       r3, 0x2C(r28)
	  lbzx      r0, r3, r29
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  cmplwi    r31, 0
	  beq-      .loc_0x6C
	  lwz       r0, 0x28(r28)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xAC

	.loc_0x6C:
	  lwz       r0, 0x28(r28)
	  add       r3, r0, r30
	  lfs       f0, 0x1FC(r3)
	  stfs      f0, 0x244(r3)
	  lwz       r0, 0x28(r28)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1CC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x28(r28)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xAC:
	  addi      r30, r30, 0x320
	  addi      r29, r29, 0x1

	.loc_0xB4:
	  lwz       r0, 0x24(r28)
	  cmpw      r29, r0
	  blt+      .loc_0x34
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
 * Address:	8015B540
 * Size:	000168
 */
void Game::NaviMgr::doEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  li        r29, 0
	  lwz       r4, -0x6C18(r13)
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x2C
	  li        r29, 0x1

	.loc_0x2C:
	  lbz       r0, 0x5C(r27)
	  li        r28, 0
	  li        r30, 0
	  rlwinm    r31,r0,0,31,31
	  b         .loc_0x148

	.loc_0x40:
	  lwz       r3, 0x2C(r27)
	  lbzx      r0, r3, r28
	  cmplwi    r0, 0
	  bne-      .loc_0x140
	  cmplwi    r31, 0
	  beq-      .loc_0x94
	  lwz       r0, 0x28(r27)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x94
	  lwz       r5, 0x28(r27)
	  addi      r4, r30, 0xD8
	  li        r0, -0x35
	  lbzx      r3, r5, r4
	  and       r0, r3, r0
	  stbx      r0, r5, r4
	  b         .loc_0xC8

	.loc_0x94:
	  lwz       r0, 0x28(r27)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC8
	  lwz       r4, 0x28(r27)
	  addi      r3, r30, 0xD8
	  lbzx      r0, r4, r3
	  ori       r0, r0, 0x34
	  stbx      r0, r4, r3

	.loc_0xC8:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x128
	  lwz       r0, 0x28(r27)
	  add       r5, r0, r30
	  lhz       r4, 0x2DC(r5)
	  cmpwi     r4, 0x1
	  bne-      .loc_0x104
	  lwz       r3, -0x6D0C(r13)
	  lbz       r0, 0x38(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x104
	  lbz       r0, 0xD8(r5)
	  rlwinm    r0,r0,0,28,26
	  stb       r0, 0xD8(r5)
	  b         .loc_0x128

	.loc_0x104:
	  cmpwi     r4, 0
	  bne-      .loc_0x128
	  lwz       r3, -0x6D0C(r13)
	  lbz       r0, 0x38(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x128
	  lbz       r0, 0xD8(r5)
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0xD8(r5)

	.loc_0x128:
	  lwz       r0, 0x28(r27)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl

	.loc_0x140:
	  addi      r30, r30, 0x320
	  addi      r28, r28, 0x1

	.loc_0x148:
	  lwz       r0, 0x24(r27)
	  cmpw      r28, r0
	  blt+      .loc_0x40
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015B6A8
 * Size:	000378
 */
void Game::NaviMgr::doSimulation((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  bl        0x79C
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x3C
	  cmpwi     r0, 0x3
	  bne-      .loc_0x40

	.loc_0x3C:
	  li        r3, 0x1

	.loc_0x40:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x54
	  lwz       r0, 0x4C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x274

	.loc_0x54:
	  li        r0, 0
	  lis       r3, 0x804B
	  subi      r3, r3, 0x434C
	  stw       r0, 0x14(r1)
	  cmplwi    r0, 0
	  stw       r3, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r31, 0x10(r1)
	  bne-      .loc_0x94
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x248

	.loc_0x94:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x104

	.loc_0xB0:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x248
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x104:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xB0
	  b         .loc_0x248

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x17C
	  lfs       f1, 0x2A0(r30)
	  lfs       f0, -0x5CEC(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x17C
	  lhz       r0, 0x2DC(r30)
	  lwz       r3, 0x4C(r31)
	  rlwinm    r4,r0,0,24,31
	  bl        0x2FCCFC
	  b         .loc_0x18C

	.loc_0x17C:
	  lhz       r0, 0x2DC(r30)
	  lwz       r3, 0x4C(r31)
	  rlwinm    r4,r0,0,24,31
	  bl        0x2FCD1C

	.loc_0x18C:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1B8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x248

	.loc_0x1B8:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x22C

	.loc_0x1D8:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x248
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x22C:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1D8

	.loc_0x248:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x124
	  lwz       r3, 0x4C(r31)
	  bl        0x2FCC6C
	  b         .loc_0x35C

	.loc_0x274:
	  bl        0x2FD654
	  mr.       r29, r3
	  beq-      .loc_0x35C
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r31)
	  mr        r30, r3
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r30, 0
	  bne-      .loc_0x2D0
	  cmplwi    r3, 0
	  bne-      .loc_0x2D0
	  li        r30, 0
	  b         .loc_0x2F8

	.loc_0x2D0:
	  lwz       r0, 0x278(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x2E0
	  b         .loc_0x2F8

	.loc_0x2E0:
	  lwz       r0, 0x278(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x2F4
	  mr        r30, r3
	  b         .loc_0x2F8

	.loc_0x2F4:
	  li        r30, 0

	.loc_0x2F8:
	  cmplwi    r30, 0
	  beq-      .loc_0x348
	  mr        r3, r30
	  bl        -0x199B0
	  lfs       f0, -0x5CEC(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x330
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x35C

	.loc_0x330:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x35C

	.loc_0x348:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x35C:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void Game::NaviMgr::draw2d((J2DGrafContext&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8015BA20
 * Size:	000004
 */
void Game::NaviMgr::setupSoundViewerAndBas(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015BA24
 * Size:	000008
 */
void Game::NaviMgr::getMgrName(void)
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x5C10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015BA2C
 * Size:	000008
 */
void Game::NaviMgr::frozenable(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015BA34
 * Size:	000070
 */
void Container<Game::Navi>::~Container()
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
	  beq-      .loc_0x54
	  lis       r4, 0x804B
	  addi      r0, r4, 0x1548
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2B5B14

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x1379D0

	.loc_0x54:
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
 * Address:	8015BAA4
 * Size:	000088
 */
void ObjectMgr<Game::Navi>::~ObjectMgr()
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
	  beq-      .loc_0x6C
	  lis       r4, 0x804B
	  addi      r4, r4, 0x1574
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x5C
	  lis       r4, 0x804B
	  addi      r0, r4, 0x1548
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x5C
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2B5A8C

	.loc_0x5C:
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x137A58

	.loc_0x6C:
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
 * Address:	8015BB2C
 * Size:	000044
 */
void Game::FakePikiParms::read((Stream&))
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
	  bl        0x2B7CAC
	  mr        r4, r31
	  addi      r3, r30, 0xDC
	  bl        0x2B7CA0
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
 * Address:	8015BB70
 * Size:	000060
 */
void MonoObjectMgr<Game::Navi>::birth()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x444
	  cmpwi     r3, -0x1
	  beq-      .loc_0x48
	  lwz       r6, 0x28(r31)
	  li        r0, 0
	  lwz       r4, 0x2C(r31)
	  mulli     r5, r3, 0x320
	  stbx      r0, r4, r3
	  add       r3, r6, r5
	  lwz       r4, 0x20(r31)
	  addi      r0, r4, 0x1
	  stw       r0, 0x20(r31)
	  b         .loc_0x4C

	.loc_0x48:
	  li        r3, 0

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015BBD0
 * Size:	000040
 */
void MonoObjectMgr<Game::Navi>::getNext(void*)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x24(r3)
	  addi      r6, r4, 0x1
	  sub       r0, r5, r6
	  mtctr     r0
	  cmpw      r6, r5
	  bge-      .loc_0x38

	.loc_0x18:
	  lwz       r4, 0x2C(r3)
	  lbzx      r0, r4, r6
	  cmplwi    r0, 0
	  bne-      .loc_0x30
	  mr        r3, r6
	  blr

	.loc_0x30:
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x18

	.loc_0x38:
	  mr        r3, r5
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015BC10
 * Size:	000030
 */
void MonoObjectMgr<Game::Navi>::getStart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, -0x1
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	8015BC40
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::getEnd()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015BC48
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::getTo()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015BC50
 * Size:	000080
 */
void MonoObjectMgr<Game::Navi>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x58

	.loc_0x28:
	  lwz       r3, 0x2C(r29)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lwz       r0, 0x28(r29)
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  addi      r31, r31, 0x320
	  addi      r30, r30, 0x1

	.loc_0x58:
	  lwz       r0, 0x24(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x28
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
 * Address:	8015BCD0
 * Size:	000080
 */
void MonoObjectMgr<Game::Navi>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x58

	.loc_0x28:
	  lwz       r3, 0x2C(r29)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lwz       r0, 0x28(r29)
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  addi      r31, r31, 0x320
	  addi      r30, r30, 0x1

	.loc_0x58:
	  lwz       r0, 0x24(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x28
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
 * Address:	8015BD50
 * Size:	000090
 */
void MonoObjectMgr<Game::Navi>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x64

	.loc_0x30:
	  lwz       r3, 0x2C(r28)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lwz       r0, 0x28(r28)
	  mr        r4, r29
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  addi      r31, r31, 0x320
	  addi      r30, r30, 0x1

	.loc_0x64:
	  lwz       r0, 0x24(r28)
	  cmpw      r30, r0
	  blt+      .loc_0x30
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
 * Address:	8015BDE0
 * Size:	000080
 */
void MonoObjectMgr<Game::Navi>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x58

	.loc_0x28:
	  lwz       r3, 0x2C(r29)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lwz       r0, 0x28(r29)
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  addi      r31, r31, 0x320
	  addi      r30, r30, 0x1

	.loc_0x58:
	  lwz       r0, 0x24(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x28
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
 * Address:	8015BE60
 * Size:	000090
 */
void MonoObjectMgr<Game::Navi>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  li        r31, 0
	  stw       r30, 0x10(r1)
	  li        r30, 0
	  stw       r29, 0xC(r1)
	  mr        r29, r3
	  b         .loc_0x64

	.loc_0x30:
	  lwz       r3, 0x2C(r29)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lwz       r0, 0x28(r29)
	  fmr       f1, f31
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  addi      r31, r31, 0x320
	  addi      r30, r30, 0x1

	.loc_0x64:
	  lwz       r0, 0x24(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x30
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015BEF0
 * Size:	000090
 */
void MonoObjectMgr<Game::Navi>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x64

	.loc_0x30:
	  lwz       r3, 0x2C(r28)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lwz       r0, 0x28(r28)
	  mr        r4, r29
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  addi      r31, r31, 0x320
	  addi      r30, r30, 0x1

	.loc_0x64:
	  lwz       r0, 0x24(r28)
	  cmpw      r30, r0
	  blt+      .loc_0x30
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
 * Address:	8015BF80
 * Size:	000018
 */
void MonoObjectMgr<Game::Navi>::resetMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x28(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x20(r3)
	  stw       r0, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015BF98
 * Size:	000030
 */
void MonoObjectMgr<Game::Navi>::clearMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  li        r6, 0
	  stw       r0, 0x20(r3)
	  li        r5, 0x1
	  b         .loc_0x20

	.loc_0x14:
	  lwz       r4, 0x2C(r3)
	  stbx      r5, r4, r6
	  addi      r6, r6, 0x1

	.loc_0x20:
	  lwz       r0, 0x24(r3)
	  cmpw      r6, r0
	  blt+      .loc_0x14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015BFC8
 * Size:	00003C
 */
void MonoObjectMgr<Game::Navi>::getEmptyIndex()
{
	/*
	.loc_0x0:
	  lwz       r0, 0x24(r3)
	  li        r5, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x34

	.loc_0x14:
	  lwz       r4, 0x2C(r3)
	  lbzx      r0, r4, r5
	  cmplwi    r0, 0x1
	  bne-      .loc_0x2C
	  mr        r3, r5
	  blr

	.loc_0x2C:
	  addi      r5, r5, 0x1
	  bdnz+     .loc_0x14

	.loc_0x34:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015C004
 * Size:	000010
 */
void MonoObjectMgr<Game::Navi>::get(void*)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x320
	  lwz       r3, 0x28(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015C014
 * Size:	0001E4
 */
void ObjectMgr<Game::Navi>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x434C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015C1F8
 * Size:	0001E4
 */
void ObjectMgr<Game::Navi>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x434C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015C3DC
 * Size:	0001F4
 */
void ObjectMgr<Game::Navi>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r5, r5, 0x434C
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015C5D0
 * Size:	0001E4
 */
void ObjectMgr<Game::Navi>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x434C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015C7B4
 * Size:	0001F4
 */
void ObjectMgr<Game::Navi>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x434C
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  fmr       f1, f31
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015C9A8
 * Size:	0001F4
 */
void ObjectMgr<Game::Navi>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r5, r5, 0x434C
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015CB9C
 * Size:	00002C
 */
void Container<Game::Navi>::getObject(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
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
 * Address:	8015CBC8
 * Size:	000008
 */
void Container<Game::Navi>::getAt(int)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015CBD0
 * Size:	000008
 */
void Container<Game::Navi>::getTo()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015CBD8
 * Size:	00009C
 */
void MonoObjectMgr<Game::Navi>::MonoObjectMgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x2B47A4
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r6, 0x804B
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x1548
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  stw       r0, 0x0(r31)
	  li        r8, 0
	  addi      r7, r4, 0x1574
	  addi      r5, r3, 0x15F0
	  stb       r8, 0x18(r31)
	  subi      r0, r6, 0x4A10
	  addi      r6, r7, 0x2C
	  addi      r4, r5, 0x2C
	  stw       r0, 0x1C(r31)
	  li        r0, 0x1
	  mr        r3, r31
	  stw       r7, 0x0(r31)
	  stw       r6, 0x1C(r31)
	  stw       r5, 0x0(r31)
	  stw       r4, 0x1C(r31)
	  stb       r0, 0x18(r31)
	  stw       r8, 0x24(r31)
	  stw       r8, 0x20(r31)
	  stw       r8, 0x28(r31)
	  stw       r8, 0x2C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015CC74
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::@28 @resetMgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xCF8
	*/
}

/*
 * --INFO--
 * Address:	8015CC7C
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xE20
	*/
}

/*
 * --INFO--
 * Address:	8015CC84
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xFB8
	*/
}

/*
 * --INFO--
 * Address:	8015CC8C
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1040
	*/
}

/*
 * --INFO--
 * Address:	8015CC94
 * Size:	000008
 */
void ObjectMgr<Game::Navi>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x2F0
	*/
}

/*
 * --INFO--
 * Address:	8015CC9C
 * Size:	000008
 */
void ObjectMgr<Game::Navi>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x4EC
	*/
}

/*
 * --INFO--
 * Address:	8015CCA4
 * Size:	000008
 */
void ObjectMgr<Game::Navi>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x6D8
	*/
}

/*
 * --INFO--
 * Address:	8015CCAC
 * Size:	000008
 */
void ObjectMgr<Game::Navi>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x8D4
	*/
}

/*
 * --INFO--
 * Address:	8015CCB4
 * Size:	000008
 */
void ObjectMgr<Game::Navi>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xAC0
	*/
}

/*
 * --INFO--
 * Address:	8015CCBC
 * Size:	000008
 */
void ObjectMgr<Game::Navi>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xCAC
	*/
}

/*
 * --INFO--
 * Address:	8015CCC4
 * Size:	000008
 */
void @28 @Game::NaviMgr::frozenable(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x129C
	*/
}

/*
 * --INFO--
 * Address:	8015CCCC
 * Size:	000008
 */
void @28 @Game::NaviMgr::resetMgr(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x2388
	*/
}

/*
 * --INFO--
 * Address:	8015CCD4
 * Size:	000008
 */
void @28 @Game::NaviMgr::loadResources(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x201C
	*/
}

/*
 * --INFO--
 * Address:	8015CCDC
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xDF0
	*/
}

/*
 * --INFO--
 * Address:	8015CCE4
 * Size:	000008
 */
void @28 @Game::NaviMgr::doSimulation((float))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1640
	*/
}

/*
 * --INFO--
 * Address:	8015CCEC
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xF10
	*/
}

/*
 * --INFO--
 * Address:	8015CCF4
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xFA8
	*/
}

/*
 * --INFO--
 * Address:	8015CCFC
 * Size:	000008
 */
void @28 @Game::NaviMgr::doEntry(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x17C0
	*/
}

/*
 * --INFO--
 * Address:	8015CD04
 * Size:	000008
 */
void @28 @Game::NaviMgr::doAnimation(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x18A8
	*/
}

/*
 * --INFO--
 * Address:	8015CD0C
 * Size:	000008
 */
void @48 @Game::NaviMgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x2550
	*/
}
