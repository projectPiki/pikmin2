

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
 * Address:	8015CD14
 * Size:	0000B4
 */
void Game::PikiMgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x5518
	  lis       r3, 0x804B
	  li        r4, 0
	  addi      r3, r3, 0x16C8
	  subi      r0, r2, 0x5C08
	  stw       r3, 0x0(r31)
	  addi      r5, r3, 0x2C
	  li        r3, 0x122C
	  stw       r5, 0x1C(r31)
	  stb       r4, 0x38(r31)
	  stb       r4, 0x39(r31)
	  stb       r4, 0x38(r31)
	  stw       r4, 0x30(r31)
	  stw       r0, 0x14(r31)
	  bl        -0x138EBC
	  mr.       r0, r3
	  beq-      .loc_0x60
	  bl        .loc_0xB4
	  mr        r0, r3

	.loc_0x60:
	  stw       r0, 0x6C(r31)
	  li        r3, 0x18
	  bl        -0x138ED8
	  mr.       r0, r3
	  beq-      .loc_0x7C
	  bl        0x399F0
	  mr        r0, r3

	.loc_0x7C:
	  stw       r0, 0x78(r31)
	  li        r4, 0xA
	  lwz       r3, 0x78(r31)
	  bl        0x39A44
	  mr        r3, r31
	  bl        0x2B1C
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x39(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0xB4:
	*/
}

/*
 * --INFO--
 * Address:	8015CDC8
 * Size:	000060
 */
void Game::PikiParms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x2B14
	  lis       r4, 0x804B
	  addi      r3, r31, 0x27C
	  addi      r0, r4, 0x189C
	  li        r4, 0x1
	  stw       r0, 0xD8(r31)
	  bl        .loc_0x60
	  lfs       f0, -0x5C00(r2)
	  mr        r3, r31
	  lfs       f1, -0x5BFC(r2)
	  stfs      f0, 0x24(r31)
	  lfs       f0, -0x5BF8(r2)
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
 * Address:	8015CE28
 * Size:	0017C4
 */
void Game::PikiParms::Parms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x2860
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0xFAC
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x7030
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0xC
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3030
	  addi      r6, r31, 0x18
	  bl        0x2B67DC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BF4(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x5BEC(r2)
	  addi      r6, r31, 0x24
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x2B67A0
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BE8(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3534
	  lfs       f0, -0x5BEC(r2)
	  addi      r6, r31, 0x30
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x2B6764
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BE4(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3635
	  lfs       f0, -0x5BEC(r2)
	  addi      r6, r31, 0x40
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x2B6728
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BE0(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3338
	  lfs       f0, -0x5BEC(r2)
	  addi      r6, r31, 0x50
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x2B66EC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BDC(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5C00(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x5BD8(r2)
	  addi      r6, r31, 0x64
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x2B66B0
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BD4(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x70
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x2B6674
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BCC(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3131
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x80
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x2B6638
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BC8(r2)
	  stw       r0, 0x124(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x14C
	  stfs      f0, 0x13C(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x8C
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
	  bl        0x2B65FC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BD8(r2)
	  stw       r0, 0x14C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x174
	  stfs      f0, 0x164(r30)
	  addi      r5, r5, 0x3132
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x98
	  stfs      f1, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  bl        0x2B65C0
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BC4(r2)
	  stw       r0, 0x174(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x19C
	  stfs      f0, 0x18C(r30)
	  addi      r5, r5, 0x3133
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0xA4
	  stfs      f1, 0x194(r30)
	  stfs      f0, 0x198(r30)
	  bl        0x2B6584
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BD8(r2)
	  stw       r0, 0x19C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x1C4
	  stfs      f0, 0x1B4(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0xB0
	  stfs      f1, 0x1BC(r30)
	  stfs      f0, 0x1C0(r30)
	  bl        0x2B6548
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BD8(r2)
	  stw       r0, 0x1C4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BDC(r2)
	  addi      r3, r30, 0x1EC
	  stfs      f0, 0x1DC(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x5BC0(r2)
	  addi      r6, r31, 0xBC
	  stfs      f1, 0x1E4(r30)
	  stfs      f0, 0x1E8(r30)
	  bl        0x2B650C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x5BDC(r2)
	  stw       r0, 0x1EC(r30)
	  mr        r4, r30
	  lfs       f0, -0x5BC0(r2)
	  addi      r3, r30, 0x214
	  stfs      f1, 0x204(r30)
	  addi      r5, r5, 0x3035
	  addi      r6, r31, 0xC8
	  stfs      f1, 0x20C(r30)
	  stfs      f0, 0x210(r30)
	  bl        0x2B64D4
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5370
	  li        r7, 0x1
	  stw       r0, 0x214(r30)
	  li        r0, 0x64
	  mr        r4, r30
	  addi      r3, r30, 0x23C
	  stw       r7, 0x22C(r30)
	  addi      r5, r5, 0x3036
	  addi      r6, r31, 0xE4
	  stw       r7, 0x234(r30)
	  stw       r0, 0x238(r30)
	  bl        0x2B649C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5370
	  li        r3, 0x2
	  stw       r0, 0x23C(r30)
	  li        r7, 0x1
	  li        r0, 0x64
	  mr        r4, r30
	  stw       r3, 0x254(r30)
	  addi      r3, r30, 0x264
	  addi      r5, r5, 0x3037
	  addi      r6, r31, 0xFC
	  stw       r7, 0x25C(r30)
	  stw       r0, 0x260(r30)
	  bl        0x2B6460
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BFC(r2)
	  stw       r0, 0x264(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x28C
	  stfs      f0, 0x27C(r30)
	  addi      r5, r5, 0x3038
	  lfs       f0, -0x5BBC(r2)
	  addi      r6, r31, 0x114
	  stfs      f1, 0x284(r30)
	  stfs      f0, 0x288(r30)
	  bl        0x2B6424
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BB8(r2)
	  stw       r0, 0x28C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x2B4
	  stfs      f0, 0x2A4(r30)
	  addi      r5, r5, 0x3039
	  lfs       f0, -0x5BBC(r2)
	  addi      r6, r31, 0x12C
	  stfs      f1, 0x2AC(r30)
	  stfs      f0, 0x2B0(r30)
	  bl        0x2B63E8
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BB4(r2)
	  stw       r0, 0x2B4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x2DC
	  stfs      f0, 0x2CC(r30)
	  addi      r5, r5, 0x3134
	  lfs       f0, -0x5BBC(r2)
	  addi      r6, r31, 0x148
	  stfs      f1, 0x2D4(r30)
	  stfs      f0, 0x2D8(r30)
	  bl        0x2B63AC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BB0(r2)
	  stw       r0, 0x2DC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x304
	  stfs      f0, 0x2F4(r30)
	  addi      r5, r5, 0x3135
	  lfs       f0, -0x5BD8(r2)
	  addi      r6, r31, 0x158
	  stfs      f1, 0x2FC(r30)
	  stfs      f0, 0x300(r30)
	  bl        0x2B6370
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BAC(r2)
	  stw       r0, 0x304(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x32C
	  stfs      f0, 0x31C(r30)
	  addi      r5, r5, 0x3136
	  lfs       f0, -0x5BD8(r2)
	  subi      r6, r2, 0x5BA8
	  stfs      f1, 0x324(r30)
	  stfs      f0, 0x328(r30)
	  bl        0x2B6334
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BDC(r2)
	  stw       r0, 0x32C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x354
	  stfs      f0, 0x344(r30)
	  addi      r5, r5, 0x3337
	  lfs       f0, -0x5BD8(r2)
	  addi      r6, r31, 0x168
	  stfs      f1, 0x34C(r30)
	  stfs      f0, 0x350(r30)
	  bl        0x2B62F8
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BA0(r2)
	  stw       r0, 0x354(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x37C
	  stfs      f0, 0x36C(r30)
	  addi      r5, r5, 0x3137
	  lfs       f0, -0x5BC8(r2)
	  addi      r6, r31, 0x17C
	  stfs      f1, 0x374(r30)
	  stfs      f0, 0x378(r30)
	  bl        0x2B62BC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BB0(r2)
	  stw       r0, 0x37C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x3A4
	  stfs      f0, 0x394(r30)
	  addi      r5, r5, 0x3138
	  lfs       f0, -0x5BEC(r2)
	  addi      r6, r31, 0x194
	  stfs      f1, 0x39C(r30)
	  stfs      f0, 0x3A0(r30)
	  bl        0x2B6280
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B9C(r2)
	  stw       r0, 0x3A4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x3CC
	  stfs      f0, 0x3BC(r30)
	  addi      r5, r5, 0x3139
	  lfs       f0, -0x5BEC(r2)
	  addi      r6, r31, 0x1A8
	  stfs      f1, 0x3C4(r30)
	  stfs      f0, 0x3C8(r30)
	  bl        0x2B6244
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B98(r2)
	  stw       r0, 0x3CC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x3F4
	  stfs      f0, 0x3E4(r30)
	  addi      r5, r5, 0x3230
	  lfs       f0, -0x5BEC(r2)
	  addi      r6, r31, 0x1BC
	  stfs      f1, 0x3EC(r30)
	  stfs      f0, 0x3F0(r30)
	  bl        0x2B6208
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B94(r2)
	  stw       r0, 0x3F4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x41C
	  stfs      f0, 0x40C(r30)
	  addi      r5, r5, 0x3231
	  lfs       f0, -0x5BEC(r2)
	  addi      r6, r31, 0x1D0
	  stfs      f1, 0x414(r30)
	  stfs      f0, 0x418(r30)
	  bl        0x2B61CC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BC0(r2)
	  stw       r0, 0x41C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x444
	  stfs      f0, 0x434(r30)
	  addi      r5, r5, 0x3232
	  lfs       f0, -0x5B90(r2)
	  addi      r6, r31, 0x1EC
	  stfs      f1, 0x43C(r30)
	  stfs      f0, 0x440(r30)
	  bl        0x2B6190
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B8C(r2)
	  stw       r0, 0x444(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x46C
	  stfs      f0, 0x45C(r30)
	  addi      r5, r5, 0x3233
	  lfs       f0, -0x5B90(r2)
	  addi      r6, r31, 0x208
	  stfs      f1, 0x464(r30)
	  stfs      f0, 0x468(r30)
	  bl        0x2B6154
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BC0(r2)
	  stw       r0, 0x46C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x494
	  stfs      f0, 0x484(r30)
	  addi      r5, r5, 0x3234
	  lfs       f0, -0x5B90(r2)
	  addi      r6, r31, 0x220
	  stfs      f1, 0x48C(r30)
	  stfs      f0, 0x490(r30)
	  bl        0x2B6118
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B8C(r2)
	  stw       r0, 0x494(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x4BC
	  stfs      f0, 0x4AC(r30)
	  addi      r5, r5, 0x3235
	  lfs       f0, -0x5B90(r2)
	  addi      r6, r31, 0x238
	  stfs      f1, 0x4B4(r30)
	  stfs      f0, 0x4B8(r30)
	  bl        0x2B60DC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BC0(r2)
	  stw       r0, 0x4BC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x4E4
	  stfs      f0, 0x4D4(r30)
	  addi      r5, r5, 0x3236
	  lfs       f0, -0x5B90(r2)
	  addi      r6, r31, 0x254
	  stfs      f1, 0x4DC(r30)
	  stfs      f0, 0x4E0(r30)
	  bl        0x2B60A0
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B8C(r2)
	  stw       r0, 0x4E4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x50C
	  stfs      f0, 0x4FC(r30)
	  addi      r5, r5, 0x3237
	  lfs       f0, -0x5B90(r2)
	  addi      r6, r31, 0x270
	  stfs      f1, 0x504(r30)
	  stfs      f0, 0x508(r30)
	  bl        0x2B6064
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B88(r2)
	  stw       r0, 0x50C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x534
	  stfs      f0, 0x524(r30)
	  addi      r5, r5, 0x3334
	  lfs       f0, -0x5BD4(r2)
	  addi      r6, r31, 0x284
	  stfs      f1, 0x52C(r30)
	  stfs      f0, 0x530(r30)
	  bl        0x2B6028
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BD8(r2)
	  stw       r0, 0x534(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x55C
	  stfs      f0, 0x54C(r30)
	  addi      r5, r5, 0x3238
	  lfs       f0, -0x5BD4(r2)
	  addi      r6, r31, 0x298
	  stfs      f1, 0x554(r30)
	  stfs      f0, 0x558(r30)
	  bl        0x2B5FEC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BD4(r2)
	  stw       r0, 0x55C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x584
	  stfs      f0, 0x574(r30)
	  addi      r5, r5, 0x3339
	  lfs       f0, -0x5B84(r2)
	  addi      r6, r31, 0x2A4
	  stfs      f1, 0x57C(r30)
	  stfs      f0, 0x580(r30)
	  bl        0x2B5FB0
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B80(r2)
	  stw       r0, 0x584(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x5AC
	  stfs      f0, 0x59C(r30)
	  addi      r5, r5, 0x3239
	  lfs       f0, -0x5BD4(r2)
	  addi      r6, r31, 0x2B8
	  stfs      f1, 0x5A4(r30)
	  stfs      f0, 0x5A8(r30)
	  bl        0x2B5F74
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B7C(r2)
	  stw       r0, 0x5AC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x5D4
	  stfs      f0, 0x5C4(r30)
	  addi      r5, r5, 0x3330
	  lfs       f0, -0x5B78(r2)
	  addi      r6, r31, 0x2C4
	  stfs      f1, 0x5CC(r30)
	  stfs      f0, 0x5D0(r30)
	  bl        0x2B5F38
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BD0(r2)
	  stw       r0, 0x5D4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x5FC
	  stfs      f0, 0x5EC(r30)
	  addi      r5, r5, 0x3331
	  lfs       f0, -0x5B78(r2)
	  addi      r6, r31, 0x2D0
	  stfs      f1, 0x5F4(r30)
	  stfs      f0, 0x5F8(r30)
	  bl        0x2B5EFC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BD8(r2)
	  stw       r0, 0x5FC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x624
	  stfs      f0, 0x614(r30)
	  addi      r5, r5, 0x3332
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x2DC
	  stfs      f1, 0x61C(r30)
	  stfs      f0, 0x620(r30)
	  bl        0x2B5EC0
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BC8(r2)
	  stw       r0, 0x624(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x64C
	  stfs      f0, 0x63C(r30)
	  addi      r5, r5, 0x3333
	  lfs       f0, -0x5B78(r2)
	  addi      r6, r31, 0x2F0
	  stfs      f1, 0x644(r30)
	  stfs      f0, 0x648(r30)
	  bl        0x2B5E84
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B74(r2)
	  stw       r0, 0x64C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x674
	  stfs      f0, 0x664(r30)
	  addi      r5, r5, 0x3335
	  lfs       f0, -0x5B78(r2)
	  addi      r6, r31, 0x300
	  stfs      f1, 0x66C(r30)
	  stfs      f0, 0x670(r30)
	  bl        0x2B5E48
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B70(r2)
	  stw       r0, 0x674(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x69C
	  stfs      f0, 0x68C(r30)
	  addi      r5, r5, 0x3336
	  lfs       f0, -0x5BD8(r2)
	  addi      r6, r31, 0x31C
	  stfs      f1, 0x694(r30)
	  stfs      f0, 0x698(r30)
	  bl        0x2B5E0C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B70(r2)
	  stw       r0, 0x69C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x6C4
	  stfs      f0, 0x6B4(r30)
	  addi      r5, r5, 0x3430
	  lfs       f0, -0x5BD8(r2)
	  addi      r6, r31, 0x338
	  stfs      f1, 0x6BC(r30)
	  stfs      f0, 0x6C0(r30)
	  bl        0x2B5DD0
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BC4(r2)
	  stw       r0, 0x6C4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BDC(r2)
	  addi      r3, r30, 0x6EC
	  stfs      f0, 0x6DC(r30)
	  addi      r5, r5, 0x3431
	  lfs       f0, -0x5B6C(r2)
	  addi      r6, r31, 0x350
	  stfs      f1, 0x6E4(r30)
	  stfs      f0, 0x6E8(r30)
	  bl        0x2B5D94
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B8C(r2)
	  stw       r0, 0x6EC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BDC(r2)
	  addi      r3, r30, 0x714
	  stfs      f0, 0x704(r30)
	  addi      r5, r5, 0x3432
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x364
	  stfs      f1, 0x70C(r30)
	  stfs      f0, 0x710(r30)
	  bl        0x2B5D58
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BC0(r2)
	  stw       r0, 0x714(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BDC(r2)
	  addi      r3, r30, 0x73C
	  stfs      f0, 0x72C(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x37C
	  stfs      f1, 0x734(r30)
	  stfs      f0, 0x738(r30)
	  bl        0x2B5D1C
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BC0(r2)
	  stw       r0, 0x73C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BDC(r2)
	  addi      r3, r30, 0x764
	  stfs      f0, 0x754(r30)
	  addi      r5, r5, 0x3131
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x37C
	  stfs      f1, 0x75C(r30)
	  stfs      f0, 0x760(r30)
	  bl        0x2B5CE0
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BA0(r2)
	  stw       r0, 0x764(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BDC(r2)
	  addi      r3, r30, 0x78C
	  stfs      f0, 0x77C(r30)
	  addi      r5, r5, 0x3132
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x394
	  stfs      f1, 0x784(r30)
	  stfs      f0, 0x788(r30)
	  bl        0x2B5CA4
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BD4(r2)
	  stw       r0, 0x78C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BDC(r2)
	  addi      r3, r30, 0x7B4
	  stfs      f0, 0x7A4(r30)
	  addi      r5, r5, 0x3133
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x3A8
	  stfs      f1, 0x7AC(r30)
	  stfs      f0, 0x7B0(r30)
	  bl        0x2B5C68
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BC0(r2)
	  stw       r0, 0x7B4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BDC(r2)
	  addi      r3, r30, 0x7DC
	  stfs      f0, 0x7CC(r30)
	  addi      r5, r5, 0x3134
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x3C0
	  stfs      f1, 0x7D4(r30)
	  stfs      f0, 0x7D8(r30)
	  bl        0x2B5C2C
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BC0(r2)
	  stw       r0, 0x7DC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BDC(r2)
	  addi      r3, r30, 0x804
	  stfs      f0, 0x7F4(r30)
	  addi      r5, r5, 0x3135
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x3D8
	  stfs      f1, 0x7FC(r30)
	  stfs      f0, 0x800(r30)
	  bl        0x2B5BF0
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BC0(r2)
	  stw       r0, 0x804(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BDC(r2)
	  addi      r3, r30, 0x82C
	  stfs      f0, 0x81C(r30)
	  addi      r5, r5, 0x3433
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x3F0
	  stfs      f1, 0x824(r30)
	  stfs      f0, 0x828(r30)
	  bl        0x2B5BB4
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B68(r2)
	  stw       r0, 0x82C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x854
	  stfs      f0, 0x844(r30)
	  addi      r5, r5, 0x3734
	  lfs       f0, -0x5BD8(r2)
	  addi      r6, r31, 0x410
	  stfs      f1, 0x84C(r30)
	  stfs      f0, 0x850(r30)
	  bl        0x2B5B78
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B68(r2)
	  stw       r0, 0x854(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x87C
	  stfs      f0, 0x86C(r30)
	  addi      r5, r5, 0x3434
	  lfs       f0, -0x5BD8(r2)
	  addi      r6, r31, 0x430
	  stfs      f1, 0x874(r30)
	  stfs      f0, 0x878(r30)
	  bl        0x2B5B3C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BD8(r2)
	  stw       r0, 0x87C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BDC(r2)
	  addi      r3, r30, 0x8A4
	  stfs      f0, 0x894(r30)
	  addi      r5, r5, 0x3435
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x44C
	  stfs      f1, 0x89C(r30)
	  stfs      f0, 0x8A0(r30)
	  bl        0x2B5B00
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BD8(r2)
	  stw       r0, 0x8A4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BDC(r2)
	  addi      r3, r30, 0x8CC
	  stfs      f0, 0x8BC(r30)
	  addi      r5, r5, 0x3436
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x468
	  stfs      f1, 0x8C4(r30)
	  stfs      f0, 0x8C8(r30)
	  bl        0x2B5AC4
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BD8(r2)
	  stw       r0, 0x8CC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BDC(r2)
	  addi      r3, r30, 0x8F4
	  stfs      f0, 0x8E4(r30)
	  addi      r5, r5, 0x3437
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x484
	  stfs      f1, 0x8EC(r30)
	  stfs      f0, 0x8F0(r30)
	  bl        0x2B5A88
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BD8(r2)
	  stw       r0, 0x8F4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BDC(r2)
	  addi      r3, r30, 0x91C
	  stfs      f0, 0x90C(r30)
	  addi      r5, r5, 0x3438
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x4A0
	  stfs      f1, 0x914(r30)
	  stfs      f0, 0x918(r30)
	  bl        0x2B5A4C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B64(r2)
	  stw       r0, 0x91C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x944
	  stfs      f0, 0x934(r30)
	  addi      r5, r5, 0x3439
	  lfs       f0, -0x5BDC(r2)
	  addi      r6, r31, 0x4B0
	  stfs      f1, 0x93C(r30)
	  stfs      f0, 0x940(r30)
	  bl        0x2B5A10
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BDC(r2)
	  stw       r0, 0x944(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x96C
	  stfs      f0, 0x95C(r30)
	  addi      r5, r5, 0x3530
	  lfs       f0, -0x5B90(r2)
	  addi      r6, r31, 0x4C4
	  stfs      f1, 0x964(r30)
	  stfs      f0, 0x968(r30)
	  bl        0x2B59D4
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BDC(r2)
	  stw       r0, 0x96C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x994
	  stfs      f0, 0x984(r30)
	  addi      r5, r5, 0x3531
	  lfs       f0, -0x5B90(r2)
	  addi      r6, r31, 0x4D8
	  stfs      f1, 0x98C(r30)
	  stfs      f0, 0x990(r30)
	  bl        0x2B5998
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B60(r2)
	  stw       r0, 0x994(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x9BC
	  stfs      f0, 0x9AC(r30)
	  addi      r5, r5, 0x3532
	  lfs       f0, -0x5B90(r2)
	  addi      r6, r31, 0x4EC
	  stfs      f1, 0x9B4(r30)
	  stfs      f0, 0x9B8(r30)
	  bl        0x2B595C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B60(r2)
	  stw       r0, 0x9BC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0x9E4
	  stfs      f0, 0x9D4(r30)
	  addi      r5, r5, 0x3533
	  lfs       f0, -0x5B90(r2)
	  addi      r6, r31, 0x4FC
	  stfs      f1, 0x9DC(r30)
	  stfs      f0, 0x9E0(r30)
	  bl        0x2B5920
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BDC(r2)
	  stw       r0, 0x9E4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xA0C
	  stfs      f0, 0x9FC(r30)
	  addi      r5, r5, 0x3535
	  lfs       f0, -0x5B90(r2)
	  addi      r6, r31, 0x510
	  stfs      f1, 0xA04(r30)
	  stfs      f0, 0xA08(r30)
	  bl        0x2B58E4
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BAC(r2)
	  stw       r0, 0xA0C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xA34
	  stfs      f0, 0xA24(r30)
	  addi      r5, r5, 0x3536
	  lfs       f0, -0x5BC0(r2)
	  addi      r6, r31, 0x52C
	  stfs      f1, 0xA2C(r30)
	  stfs      f0, 0xA30(r30)
	  bl        0x2B58A8
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BFC(r2)
	  stw       r0, 0xA34(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xA5C
	  stfs      f0, 0xA4C(r30)
	  addi      r5, r5, 0x3537
	  lfs       f0, -0x5BDC(r2)
	  addi      r6, r31, 0x54C
	  stfs      f1, 0xA54(r30)
	  stfs      f0, 0xA58(r30)
	  bl        0x2B586C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BBC(r2)
	  stw       r0, 0xA5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xA84
	  stfs      f0, 0xA74(r30)
	  addi      r5, r5, 0x3538
	  lfs       f0, -0x5B8C(r2)
	  addi      r6, r31, 0x55C
	  stfs      f1, 0xA7C(r30)
	  stfs      f0, 0xA80(r30)
	  bl        0x2B5830
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B5C(r2)
	  stw       r0, 0xA84(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xAAC
	  stfs      f0, 0xA9C(r30)
	  addi      r5, r5, 0x3539
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x56C
	  stfs      f1, 0xAA4(r30)
	  stfs      f0, 0xAA8(r30)
	  bl        0x2B57F4
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BC8(r2)
	  stw       r0, 0xAAC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xAD4
	  stfs      f0, 0xAC4(r30)
	  addi      r5, r5, 0x3735
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x580
	  stfs      f1, 0xACC(r30)
	  stfs      f0, 0xAD0(r30)
	  bl        0x2B57B8
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BD8(r2)
	  stw       r0, 0xAD4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xAFC
	  stfs      f0, 0xAEC(r30)
	  addi      r5, r5, 0x3736
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x594
	  stfs      f1, 0xAF4(r30)
	  stfs      f0, 0xAF8(r30)
	  bl        0x2B577C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BE8(r2)
	  stw       r0, 0xAFC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xB24
	  stfs      f0, 0xB14(r30)
	  addi      r5, r5, 0x3737
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x5A8
	  stfs      f1, 0xB1C(r30)
	  stfs      f0, 0xB20(r30)
	  bl        0x2B5740
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B58(r2)
	  stw       r0, 0xB24(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xB4C
	  stfs      f0, 0xB3C(r30)
	  addi      r5, r5, 0x3630
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x5BC
	  stfs      f1, 0xB44(r30)
	  stfs      f0, 0xB48(r30)
	  bl        0x2B5704
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BC8(r2)
	  stw       r0, 0xB4C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xB74
	  stfs      f0, 0xB64(r30)
	  addi      r5, r5, 0x3631
	  lfs       f0, -0x5B54(r2)
	  addi      r6, r31, 0x5D0
	  stfs      f1, 0xB6C(r30)
	  stfs      f0, 0xB70(r30)
	  bl        0x2B56C8
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B50(r2)
	  stw       r0, 0xB74(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xB9C
	  stfs      f0, 0xB8C(r30)
	  addi      r5, r5, 0x3632
	  lfs       f0, -0x5B54(r2)
	  addi      r6, r31, 0x5E0
	  stfs      f1, 0xB94(r30)
	  stfs      f0, 0xB98(r30)
	  bl        0x2B568C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5370
	  li        r3, 0x1E
	  stw       r0, 0xB9C(r30)
	  li        r7, 0
	  li        r0, 0x12C
	  mr        r4, r30
	  stw       r3, 0xBB4(r30)
	  addi      r3, r30, 0xBC4
	  addi      r5, r5, 0x3633
	  addi      r6, r31, 0x5F4
	  stw       r7, 0xBBC(r30)
	  stw       r0, 0xBC0(r30)
	  bl        0x2B5650
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5370
	  li        r3, 0xA
	  stw       r0, 0xBC4(r30)
	  li        r7, 0
	  li        r0, 0x12C
	  mr        r4, r30
	  stw       r3, 0xBDC(r30)
	  addi      r3, r30, 0xBEC
	  addi      r5, r5, 0x3634
	  addi      r6, r31, 0x614
	  stw       r7, 0xBE4(r30)
	  stw       r0, 0xBE8(r30)
	  bl        0x2B5614
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BB0(r2)
	  stw       r0, 0xBEC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BDC(r2)
	  addi      r3, r30, 0xC14
	  stfs      f0, 0xC04(r30)
	  addi      r5, r5, 0x3636
	  lfs       f0, -0x5BE8(r2)
	  addi      r6, r31, 0x628
	  stfs      f1, 0xC0C(r30)
	  stfs      f0, 0xC10(r30)
	  bl        0x2B55D8
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B90(r2)
	  stw       r0, 0xC14(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xC3C
	  stfs      f0, 0xC2C(r30)
	  addi      r5, r5, 0x3637
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x638
	  stfs      f1, 0xC34(r30)
	  stfs      f0, 0xC38(r30)
	  bl        0x2B559C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B4C(r2)
	  stw       r0, 0xC3C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xC64
	  stfs      f0, 0xC54(r30)
	  addi      r5, r5, 0x3638
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x648
	  stfs      f1, 0xC5C(r30)
	  stfs      f0, 0xC60(r30)
	  bl        0x2B5560
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B94(r2)
	  stw       r0, 0xC64(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xC8C
	  stfs      f0, 0xC7C(r30)
	  addi      r5, r5, 0x3639
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x658
	  stfs      f1, 0xC84(r30)
	  stfs      f0, 0xC88(r30)
	  bl        0x2B5524
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BB8(r2)
	  stw       r0, 0xC8C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xCB4
	  stfs      f0, 0xCA4(r30)
	  addi      r5, r5, 0x3730
	  lfs       f0, -0x5B8C(r2)
	  addi      r6, r31, 0x66C
	  stfs      f1, 0xCAC(r30)
	  stfs      f0, 0xCB0(r30)
	  bl        0x2B54E8
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BCC(r2)
	  stw       r0, 0xCB4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xCDC
	  stfs      f0, 0xCCC(r30)
	  addi      r5, r5, 0x3731
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x680
	  stfs      f1, 0xCD4(r30)
	  stfs      f0, 0xCD8(r30)
	  bl        0x2B54AC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B90(r2)
	  stw       r0, 0xCDC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xD04
	  stfs      f0, 0xCF4(r30)
	  addi      r5, r5, 0x3732
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x690
	  stfs      f1, 0xCFC(r30)
	  stfs      f0, 0xD00(r30)
	  bl        0x2B5470
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B48(r2)
	  stw       r0, 0xD04(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xD2C
	  stfs      f0, 0xD1C(r30)
	  addi      r5, r5, 0x3733
	  lfs       f0, -0x5BD8(r2)
	  addi      r6, r31, 0x6A0
	  stfs      f1, 0xD24(r30)
	  stfs      f0, 0xD28(r30)
	  bl        0x2B5434
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B5C(r2)
	  stw       r0, 0xD2C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xD54
	  stfs      f0, 0xD44(r30)
	  addi      r5, r5, 0x3030
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x6B0
	  stfs      f1, 0xD4C(r30)
	  stfs      f0, 0xD50(r30)
	  bl        0x2B53F8
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BB4(r2)
	  stw       r0, 0xD54(r30)
	  mr        r4, r30
	  lfs       f1, -0x5B44(r2)
	  addi      r3, r30, 0xD7C
	  stfs      f0, 0xD6C(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x5BBC(r2)
	  addi      r6, r31, 0x6C0
	  stfs      f1, 0xD74(r30)
	  stfs      f0, 0xD78(r30)
	  bl        0x2B53BC
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BBC(r2)
	  stw       r0, 0xD7C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BDC(r2)
	  addi      r3, r30, 0xDA4
	  stfs      f0, 0xD94(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x5BAC(r2)
	  addi      r6, r31, 0x6D0
	  stfs      f1, 0xD9C(r30)
	  stfs      f0, 0xDA0(r30)
	  bl        0x2B5380
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B70(r2)
	  stw       r0, 0xDA4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5C00(r2)
	  addi      r3, r30, 0xDCC
	  stfs      f0, 0xDBC(r30)
	  addi      r5, r5, 0x3035
	  lfs       f0, -0x5BAC(r2)
	  addi      r6, r31, 0x6E0
	  stfs      f1, 0xDC4(r30)
	  stfs      f0, 0xDC8(r30)
	  bl        0x2B5344
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B44(r2)
	  stw       r0, 0xDCC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xDF4
	  stfs      f0, 0xDE4(r30)
	  addi      r5, r5, 0x3036
	  lfs       f0, -0x5BB0(r2)
	  addi      r6, r31, 0x6F0
	  stfs      f1, 0xDEC(r30)
	  stfs      f0, 0xDF0(r30)
	  bl        0x2B5308
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BB8(r2)
	  stw       r0, 0xDF4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xE1C
	  stfs      f0, 0xE0C(r30)
	  addi      r5, r5, 0x3230
	  lfs       f0, -0x5BB0(r2)
	  addi      r6, r31, 0x700
	  stfs      f1, 0xE14(r30)
	  stfs      f0, 0xE18(r30)
	  bl        0x2B52CC
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B44(r2)
	  stw       r0, 0xE1C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xE44
	  stfs      f0, 0xE34(r30)
	  addi      r5, r5, 0x3231
	  lfs       f0, -0x5BBC(r2)
	  addi      r6, r31, 0x714
	  stfs      f1, 0xE3C(r30)
	  stfs      f0, 0xE40(r30)
	  bl        0x2B5290
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BDC(r2)
	  stw       r0, 0xE44(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xE6C
	  stfs      f0, 0xE5C(r30)
	  addi      r5, r5, 0x3138
	  lfs       f0, -0x5BBC(r2)
	  addi      r6, r31, 0x728
	  stfs      f1, 0xE64(r30)
	  stfs      f0, 0xE68(r30)
	  bl        0x2B5254
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B68(r2)
	  stw       r0, 0xE6C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xE94
	  stfs      f0, 0xE84(r30)
	  addi      r5, r5, 0x3139
	  lfs       f0, -0x5BBC(r2)
	  addi      r6, r31, 0x728
	  stfs      f1, 0xE8C(r30)
	  stfs      f0, 0xE90(r30)
	  bl        0x2B5218
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B40(r2)
	  stw       r0, 0xE94(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xEBC
	  stfs      f0, 0xEAC(r30)
	  addi      r5, r5, 0x3037
	  lfs       f0, -0x5BBC(r2)
	  addi      r6, r31, 0x738
	  stfs      f1, 0xEB4(r30)
	  stfs      f0, 0xEB8(r30)
	  bl        0x2B51DC
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5BC0(r2)
	  stw       r0, 0xEBC(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xEE4
	  stfs      f0, 0xED4(r30)
	  addi      r5, r5, 0x3038
	  lfs       f0, -0x5BC8(r2)
	  addi      r6, r31, 0x74C
	  stfs      f1, 0xEDC(r30)
	  stfs      f0, 0xEE0(r30)
	  bl        0x2B51A0
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B3C(r2)
	  stw       r0, 0xEE4(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xF0C
	  stfs      f0, 0xEFC(r30)
	  addi      r5, r5, 0x3039
	  lfs       f0, -0x5BD4(r2)
	  addi      r6, r31, 0x760
	  stfs      f1, 0xF04(r30)
	  stfs      f0, 0xF08(r30)
	  bl        0x2B5164
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B38(r2)
	  stw       r0, 0xF0C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xF34
	  stfs      f0, 0xF24(r30)
	  addi      r5, r5, 0x3136
	  lfs       f0, -0x5B34(r2)
	  addi      r6, r31, 0x778
	  stfs      f1, 0xF2C(r30)
	  stfs      f0, 0xF30(r30)
	  bl        0x2B5128
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B30(r2)
	  stw       r0, 0xF34(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xF5C
	  stfs      f0, 0xF4C(r30)
	  addi      r5, r5, 0x3137
	  lfs       f0, -0x5BE8(r2)
	  addi      r6, r31, 0x788
	  stfs      f1, 0xF54(r30)
	  stfs      f0, 0xF58(r30)
	  bl        0x2B50EC
	  lis       r3, 0x804B
	  lis       r5, 0x5030
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x5B8C(r2)
	  stw       r0, 0xF5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x5BF0(r2)
	  addi      r3, r30, 0xF84
	  stfs      f0, 0xF74(r30)
	  addi      r5, r5, 0x3232
	  lfs       f0, -0x5BD0(r2)
	  addi      r6, r31, 0x794
	  stfs      f1, 0xF7C(r30)
	  stfs      f0, 0xF80(r30)
	  bl        0x2B50B0
	  lis       r3, 0x804B
	  lfs       f2, -0x5BD4(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x5BF0(r2)
	  stw       r0, 0xF84(r30)
	  mr        r3, r30
	  lfs       f0, -0x5BD0(r2)
	  stfs      f2, 0xF9C(r30)
	  stfs      f1, 0xFA4(r30)
	  stfs      f0, 0xFA8(r30)
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
 * Address:	8015E5EC
 * Size:	0000A0
 */
void MonoObjectMgr<Game::Piki>::~MonoObjectMgr()
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
	  addi      r4, r4, 0x1810
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804B
	  addi      r4, r4, 0x1794
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804B
	  addi      r0, r4, 0x1768
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x74
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2B2F2C

	.loc_0x74:
	  extsh.    r0, r31
	  ble-      .loc_0x84
	  mr        r3, r30
	  bl        -0x13A5B8

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
 * Address:	........
 * Size:	000050
 */
void Game::PikiMgr::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8015E68C
 * Size:	000038
 */
void Game::PikiMgr::resetMgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x2F48
	  li        r0, 0
	  stw       r0, 0x30(r31)
	  stb       r0, 0x38(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015E6C4
 * Size:	000064
 */
void Game::PikiMgr::onAlloc(void)
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
	  b         .loc_0x40

	.loc_0x20:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  stw       r31, 0x2C0(r3)
	  addi      r31, r31, 0x1

	.loc_0x40:
	  lwz       r0, 0x24(r30)
	  cmpw      r31, r0
	  blt+      .loc_0x20
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
 * Address:	8015E728
 * Size:	000010
 */
void MonoObjectMgr<Game::Piki>::getAt(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2C8
	  lwz       r3, 0x28(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015E738
 * Size:	000060
 */
void Game::PikiMgr::setupPiki((Game::Piki*))
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
	  lbz       r4, 0x2B8(r4)
	  lwz       r5, 0x2C0(r31)
	  bl        0x7F8
	  stw       r3, 0x174(r31)
	  mr        r3, r30
	  lbz       r4, 0x2B9(r31)
	  lwz       r5, 0x2C0(r31)
	  bl        0x808
	  stw       r3, 0x2BC(r31)
	  lwz       r0, 0x6C(r30)
	  stw       r0, 0xC0(r31)
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
 * Address:	8015E798
 * Size:	000324
 */
void Game::PikiMgr::birth(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  stw       r29, 0x24(r1)
	  lwz       r0, -0x6D08(r13)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x70
	  bge-      .loc_0x38
	  cmpwi     r0, 0
	  bge-      .loc_0x44
	  b         .loc_0x300

	.loc_0x38:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x300
	  b         .loc_0x78

	.loc_0x44:
	  lwz       r3, -0x6B90(r13)
	  li        r4, 0
	  lwz       r0, 0x20(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  lwz       r4, 0x6C(r3)

	.loc_0x5C:
	  add       r0, r0, r4
	  cmpwi     r0, 0x64
	  blt-      .loc_0x300
	  li        r3, 0
	  b         .loc_0x308

	.loc_0x70:
	  bl        0x29D0
	  b         .loc_0x308

	.loc_0x78:
	  lwz       r3, -0x6B90(r13)
	  li        r4, 0
	  lwz       r0, 0x20(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  lwz       r4, 0x6C(r3)

	.loc_0x90:
	  add       r0, r0, r4
	  li        r3, 0
	  cmpwi     r0, 0x64
	  bge-      .loc_0xA8
	  mr        r3, r30
	  bl        0x299C

	.loc_0xA8:
	  cmplwi    r3, 0
	  bne-      .loc_0x308
	  li        r0, 0
	  lis       r3, 0x804B
	  subi      r3, r3, 0x4364
	  stw       r0, 0x1C(r1)
	  cmplwi    r0, 0
	  li        r31, 0
	  stw       r3, 0x10(r1)
	  stw       r0, 0x14(r1)
	  stw       r30, 0x18(r1)
	  bne-      .loc_0xF4
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x294

	.loc_0xF4:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x164

	.loc_0x110:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x294
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0x164:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x110
	  b         .loc_0x294

	.loc_0x184:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x2B8(r3)
	  mr        r29, r3
	  cmpwi     r0, 0x5
	  bne-      .loc_0x1D8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1D8
	  mr        r3, r29
	  bl        -0x146D4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1D8
	  mr        r31, r29
	  b         .loc_0x2B4

	.loc_0x1D8:
	  lwz       r0, 0x1C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x204
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x294

	.loc_0x204:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x278

	.loc_0x224:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x294
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0x278:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x224

	.loc_0x294:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x14(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x184

	.loc_0x2B4:
	  cmplwi    r31, 0
	  beq-      .loc_0x2F4
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5D30
	  li        r5, 0x1
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x1160
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  stw       r5, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x2398C
	  mr        r3, r30
	  bl        0x2754
	  b         .loc_0x308

	.loc_0x2F4:
	  li        r3, 0
	  b         .loc_0x308
	  b         .loc_0x308

	.loc_0x300:
	  mr        r3, r30
	  bl        0x273C

	.loc_0x308:
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
 * Address:	8015EABC
 * Size:	0000CC
 */
void Game::PikiMgr::loadResources((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x440(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  li        r6, 0
	  stw       r0, 0x444(r1)
	  li        r0, 0
	  li        r7, 0
	  li        r8, 0x2
	  stw       r31, 0x43C(r1)
	  li        r9, 0
	  li        r10, 0
	  stw       r30, 0x438(r1)
	  mr        r30, r4
	  li        r4, 0
	  stw       r29, 0x434(r1)
	  mr        r29, r3
	  stw       r0, 0x8(r1)
	  subi      r0, r5, 0x2028
	  mr        r3, r0
	  li        r5, 0
	  bl        -0x13F984
	  mr.       r31, r3
	  beq-      .loc_0xA4
	  mr        r4, r31
	  addi      r3, r1, 0x10
	  li        r5, -0x1
	  bl        0x2B6DD4
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x1C(r1)
	  bne-      .loc_0x84
	  li        r0, 0
	  stw       r0, 0x424(r1)

	.loc_0x84:
	  lwz       r3, 0x6C(r29)
	  addi      r4, r1, 0x10
	  lwz       r12, 0xD8(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x13AA84

	.loc_0xA4:
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x70
	  lwz       r0, 0x444(r1)
	  lwz       r31, 0x43C(r1)
	  lwz       r30, 0x438(r1)
	  lwz       r29, 0x434(r1)
	  mtlr      r0
	  addi      r1, r1, 0x440
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015EB88
 * Size:	000050
 */
void Game::PikiParms::read((Stream&))
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
	  bl        0x2B4C50
	  mr        r4, r31
	  addi      r3, r30, 0xDC
	  bl        0x2B4C44
	  mr        r4, r31
	  addi      r3, r30, 0x27C
	  bl        0x2B4C38
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
 * Address:	8015EBD8
 * Size:	000298
 */
void Game::PikiMgr::load((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r29, r3
	  mr        r30, r4
	  subi      r31, r5, 0x2860
	  lwz       r27, -0x77D4(r13)
	  mr        r3, r27
	  bl        -0x13B44C
	  lwz       r5, -0x6514(r13)
	  addi      r3, r31, 0x854
	  li        r4, 0x1
	  li        r6, 0x1
	  lwz       r5, 0x38(r5)
	  bl        -0x143AE8
	  mr        r28, r3
	  mr        r3, r27
	  stw       r28, 0x7C(r29)
	  bl        -0x13B474
	  cmplwi    r28, 0
	  bne-      .loc_0x70
	  addi      r3, r31, 0x818
	  addi      r5, r31, 0x870
	  li        r4, 0x1C2
	  crclr     6, 0x6
	  bl        -0x134604

	.loc_0x70:
	  mr        r3, r29
	  addi      r5, r31, 0x888
	  li        r4, 0
	  bl        .loc_0x298
	  mr        r3, r29
	  addi      r5, r31, 0x898
	  li        r4, 0x1
	  bl        .loc_0x298
	  mr        r3, r29
	  addi      r5, r31, 0x8A4
	  li        r4, 0x2
	  bl        .loc_0x298
	  mr        r3, r29
	  addi      r5, r31, 0x8B4
	  li        r4, 0x4
	  bl        .loc_0x298
	  mr        r3, r29
	  addi      r5, r31, 0x8C4
	  li        r4, 0x3
	  bl        .loc_0x298
	  mr        r3, r29
	  addi      r5, r31, 0x8D4
	  li        r4, 0x5
	  bl        .loc_0x298
	  mr        r3, r29
	  addi      r5, r31, 0x8E4
	  li        r4, 0x6
	  bl        .loc_0x298
	  mr        r3, r28
	  addi      r4, r31, 0x8F0
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x2000
	  bl        -0xEF440
	  stw       r3, 0x58(r29)
	  mr        r3, r28
	  addi      r4, r31, 0x908
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x24
	  bl        -0xEF464
	  stw       r3, 0x5C(r29)
	  mr        r3, r28
	  addi      r4, r31, 0x91C
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x24
	  bl        -0xEF488
	  stw       r3, 0x60(r29)
	  mr        r3, r28
	  addi      r4, r31, 0x934
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x24
	  bl        -0xEF4AC
	  stw       r3, 0x64(r29)
	  mr        r3, r28
	  addi      r4, r31, 0x94C
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x24
	  bl        -0xEF4D0
	  stw       r3, 0x68(r29)
	  addi      r4, r31, 0x968
	  li        r5, 0
	  lwz       r3, -0x6514(r13)
	  bl        0x2C45E4
	  li        r3, 0x1C
	  bl        -0x13AEDC
	  mr.       r28, r3
	  beq-      .loc_0x22C
	  li        r3, 0x14
	  bl        -0x13AEEC
	  mr.       r9, r3
	  beq-      .loc_0x20C
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  addi      r7, r3, 0x16A4
	  lis       r3, 0x804B
	  lwz       r6, 0x0(r7)
	  addi      r4, r4, 0x16BC
	  lwz       r5, 0x4(r7)
	  addi      r0, r3, 0x16B0
	  lwz       r3, 0x8(r7)
	  stw       r6, 0x8(r1)
	  stw       r4, 0x0(r9)
	  stw       r0, 0x0(r9)
	  stw       r29, 0x4(r9)
	  stw       r6, 0x8(r9)
	  stw       r5, 0xC(r9)
	  stw       r5, 0xC(r1)
	  stw       r3, 0x10(r1)
	  stw       r3, 0x10(r9)

	.loc_0x20C:
	  mr        r3, r28
	  mr        r8, r30
	  addi      r5, r29, 0x3C
	  li        r4, 0x7
	  li        r6, 0x64
	  lis       r7, 0x2
	  bl        0x2CBD04
	  mr        r28, r3

	.loc_0x22C:
	  stw       r28, 0x70(r29)
	  addi      r4, r31, 0x968
	  lwz       r3, -0x6514(r13)
	  bl        0x2C4554
	  lis       r3, 0x8048
	  mr        r28, r29
	  subi      r29, r3, 0x7794
	  li        r27, 0

	.loc_0x24C:
	  lwz       r30, 0x58(r28)
	  lis       r4, 0x4
	  mr        r3, r30
	  bl        -0xDB558
	  mr        r3, r30
	  mr        r5, r29
	  li        r4, 0
	  bl        -0xDB390
	  mr        r3, r30
	  bl        -0xDB418
	  addi      r27, r27, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r27, 0x5
	  blt+      .loc_0x24C
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x298:
	*/
}

/*
 * --INFO--
 * Address:	8015EE70
 * Size:	000098
 */
void Game::PikiMgr::loadBmd((int, char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  lis       r6, 0x8048
	  stw       r0, 0x124(r1)
	  subi      r0, r6, 0x1EE8
	  stw       r31, 0x11C(r1)
	  stw       r30, 0x118(r1)
	  mr        r30, r4
	  mr        r4, r0
	  stw       r29, 0x114(r1)
	  mr        r29, r3
	  addi      r3, r1, 0x8
	  crclr     6, 0x6
	  bl        -0x97A6C
	  lwz       r3, 0x7C(r29)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x6
	  addi      r4, r4, 0x10
	  bl        -0xEF634
	  lis       r4, 0x4
	  mr        r31, r3
	  bl        -0xDB5FC
	  mr        r3, r31
	  bl        -0xDB4AC
	  rlwinm    r0,r30,2,0,29
	  add       r3, r29, r0
	  stw       r31, 0x3C(r3)
	  lwz       r31, 0x11C(r1)
	  lwz       r30, 0x118(r1)
	  lwz       r29, 0x114(r1)
	  lwz       r0, 0x124(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015EF08
 * Size:	00004C
 */
void Game::PikiMgr::createModelCallback((SysShape::Model*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r3, 0x8(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r31)
	  bl        -0xF8610
	  lwz       r3, 0x8(r31)
	  bl        -0xF8748
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015EF54
 * Size:	000024
 */
void Game::PikiMgr::createModel((int, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x70(r3)
	  bl        0x2CBE98
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015EF78
 * Size:	000008
 */
void Game::PikiMgr::createLeafModel((int, int))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015EF80
 * Size:	000280
 */
void Game::PikiMgr::setMovieDraw((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm.   r0,r4,0,24,31
	  stmw      r26, 0x8(r1)
	  mr        r28, r4
	  mr        r27, r3
	  bne-      .loc_0x30
	  lbz       r0, 0x39(r27)
	  ori       r0, r0, 0x1
	  stb       r0, 0x39(r27)
	  b         .loc_0x3C

	.loc_0x30:
	  lbz       r0, 0x39(r27)
	  rlwinm    r0,r0,0,24,30
	  stb       r0, 0x39(r27)

	.loc_0x3C:
	  li        r29, 0
	  li        r30, 0
	  b         .loc_0x260

	.loc_0x48:
	  lwz       r3, 0x2C(r27)
	  lbzx      r0, r3, r29
	  cmplwi    r0, 0
	  bne-      .loc_0x258
	  lwz       r0, 0x28(r27)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x258
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x190
	  lwz       r3, 0x28(r27)
	  addi      r0, r30, 0x258
	  lwzx      r31, r3, r0
	  lwz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,0,0
	  beq-      .loc_0xAC
	  lwz       r0, 0x4(r31)
	  stw       r0, 0x0(r31)
	  lwz       r0, 0x0(r31)
	  rlwinm    r0,r0,0,1,31
	  stw       r0, 0x0(r31)

	.loc_0xAC:
	  lwz       r3, 0x0(r31)
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0xD8
	  ori       r0, r3, 0x1
	  stw       r0, 0x0(r31)
	  lwz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0xD8
	  lwz       r4, 0xC(r31)
	  mr        r3, r31
	  bl        0x2597D4

	.loc_0xD8:
	  lwz       r3, 0x0(r31)
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x100
	  ori       r0, r3, 0x2
	  mr        r3, r31
	  stw       r0, 0x0(r31)
	  lwz       r4, 0xC(r31)
	  bl        0x25983C
	  mr        r3, r31
	  bl        0x259810

	.loc_0x100:
	  lwz       r3, 0x0(r31)
	  rlwinm.   r0,r3,0,29,29
	  beq-      .loc_0x120
	  ori       r0, r3, 0x4
	  mr        r3, r31
	  stw       r0, 0x0(r31)
	  lwz       r4, 0xC(r31)
	  bl        0x2599D4

	.loc_0x120:
	  lwz       r3, 0x0(r31)
	  rlwinm.   r0,r3,0,28,28
	  beq-      .loc_0x140
	  ori       r0, r3, 0x8
	  mr        r3, r31
	  stw       r0, 0x0(r31)
	  lwz       r4, 0xC(r31)
	  bl        0x259A74

	.loc_0x140:
	  lwz       r3, 0x0(r31)
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0x160
	  ori       r0, r3, 0x10
	  mr        r3, r31
	  stw       r0, 0x0(r31)
	  lwz       r4, 0x14(r31)
	  bl        0x259BF8

	.loc_0x160:
	  lwz       r0, 0x0(r31)
	  rlwinm.   r26,r0,0,26,26
	  beq-      .loc_0x258
	  ori       r0, r0, 0x20
	  mr        r3, r31
	  stw       r0, 0x0(r31)
	  bl        0x259660
	  cmplwi    r26, 0
	  bne-      .loc_0x258
	  addi      r3, r31, 0x28
	  bl        0x25878C
	  b         .loc_0x258

	.loc_0x190:
	  lwz       r3, 0x28(r27)
	  addi      r0, r30, 0x258
	  lwzx      r31, r3, r0
	  lwz       r3, 0x0(r31)
	  rlwinm.   r0,r3,0,0,0
	  bne-      .loc_0x1CC
	  stw       r3, 0x4(r31)
	  li        r0, 0
	  stb       r0, 0x0(r31)
	  stb       r0, 0x1(r31)
	  stb       r0, 0x2(r31)
	  stb       r0, 0x3(r31)
	  lwz       r0, 0x0(r31)
	  oris      r0, r0, 0x8000
	  stw       r0, 0x0(r31)

	.loc_0x1CC:
	  addi      r3, r31, 0x34
	  lwz       r12, 0x34(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x48
	  lwz       r12, 0x48(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x5C
	  lwz       r12, 0x5C(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x259700
	  mr        r3, r31
	  bl        0x25977C
	  mr        r3, r31
	  bl        0x259890
	  mr        r3, r31
	  bl        0x259948
	  mr        r3, r31
	  bl        0x2599E4
	  mr        r3, r31
	  bl        0x259A60
	  mr        r3, r31
	  bl        0x259AEC
	  mr        r3, r31
	  bl        0x259B70
	  mr        r3, r31
	  bl        0x259BEC
	  mr        r3, r31
	  bl        0x259C68

	.loc_0x258:
	  addi      r30, r30, 0x2C8
	  addi      r29, r29, 0x1

	.loc_0x260:
	  lwz       r0, 0x24(r27)
	  cmpw      r29, r0
	  blt+      .loc_0x48
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015F200
 * Size:	000084
 */
void Game::PikiMgr::debugShapeDL((char*))
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
	  b         .loc_0x58

	.loc_0x30:
	  lwz       r3, 0x2C(r28)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lwz       r0, 0x28(r28)
	  mr        r4, r29
	  add       r3, r0, r31
	  bl        -0x1FD7C

	.loc_0x50:
	  addi      r31, r31, 0x2C8
	  addi      r30, r30, 0x1

	.loc_0x58:
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
 * Address:	8015F284
 * Size:	000198
 */
void Game::PikiMgr::doSimpleDraw((Viewport*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stmw      r22, 0x38(r1)
	  mr        r23, r3
	  mr        r24, r4
	  li        r3, 0x10
	  mr        r29, r23
	  li        r27, 0
	  lhz       r0, 0x18(r4)
	  lis       r4, 0x8051
	  subi      r31, r4, 0xDD0
	  slw       r28, r3, r0

	.loc_0x34:
	  lwz       r5, 0x58(r29)
	  li        r0, 0
	  lwz       r4, 0x28(r5)
	  lwz       r3, 0xA0(r5)
	  lwz       r4, 0x0(r4)
	  lwz       r26, 0x58(r4)
	  stw       r3, 0x10C(r31)
	  lwz       r3, 0xA4(r5)
	  stw       r3, 0x110(r31)
	  lwz       r3, 0xAC(r5)
	  stw       r3, 0x114(r31)
	  stw       r0, -0x7690(r13)
	  b         .loc_0x16C

	.loc_0x68:
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r26)
	  bl        -0xFE4C4
	  li        r25, 0
	  li        r30, 0
	  b         .loc_0x15C

	.loc_0x90:
	  lwz       r3, 0x2C(r23)
	  lbzx      r0, r3, r25
	  cmplwi    r0, 0
	  bne-      .loc_0x154
	  lwz       r0, 0x28(r23)
	  add       r22, r0, r30
	  lbz       r0, 0xD8(r22)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x154
	  mr        r3, r22
	  bl        -0x1535C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x154
	  lbz       r0, 0xD8(r22)
	  and.      r0, r0, r28
	  beq-      .loc_0x154
	  lbz       r3, 0x2B8(r22)
	  lbz       r0, 0x2B9(r22)
	  cmpwi     r3, 0x4
	  mr        r4, r0
	  beq-      .loc_0xEC
	  cmpwi     r3, 0x3
	  bne-      .loc_0xF8

	.loc_0xEC:
	  cmpwi     r0, 0x1
	  blt-      .loc_0xF8
	  addi      r4, r4, 0x2

	.loc_0xF8:
	  cmpw      r4, r27
	  bne-      .loc_0x154
	  lwz       r3, 0x268(r22)
	  bl        0x2CA518
	  mr        r0, r3
	  mr        r3, r24
	  mr        r22, r0
	  li        r4, 0x1
	  bl        0x2C5DC0
	  mr        r4, r22
	  addi      r5, r1, 0x8
	  bl        -0x750A8
	  addi      r3, r1, 0x8
	  li        r4, 0
	  bl        -0x75E3C
	  addi      r3, r1, 0x8
	  li        r4, 0
	  bl        -0x75DF8
	  lwz       r3, 0x8(r26)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x154:
	  addi      r30, r30, 0x2C8
	  addi      r25, r25, 0x1

	.loc_0x15C:
	  lwz       r0, 0x24(r23)
	  cmpw      r25, r0
	  blt+      .loc_0x90
	  lwz       r26, 0x4(r26)

	.loc_0x16C:
	  cmplwi    r26, 0
	  bne+      .loc_0x68
	  addi      r27, r27, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r27, 0x5
	  blt+      .loc_0x34
	  lmw       r22, 0x38(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015F41C
 * Size:	0001D8
 */
void Game::PikiMgr::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  subi      r4, r2, 0x5B2C
	  li        r5, 0x1
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r6, -0x6514(r13)
	  lwz       r3, 0x28(r6)
	  bl        0x2CB6B0
	  lwz       r3, 0x78(r31)
	  bl        0x37344
	  lbz       r0, 0x39(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xE8
	  li        r29, 0
	  li        r30, 0
	  b         .loc_0xD8

	.loc_0x50:
	  lwz       r3, 0x2C(r31)
	  lbzx      r0, r3, r29
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  lwz       r0, 0x28(r31)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD0
	  lwz       r0, 0x28(r31)
	  add       r3, r0, r30
	  lfs       f0, 0x1FC(r3)
	  stfs      f0, 0x244(r3)
	  lwz       r0, 0x28(r31)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1CC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r31)
	  lbzx      r0, r3, r29
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  lwz       r0, 0x28(r31)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xD0:
	  addi      r30, r30, 0x2C8
	  addi      r29, r29, 0x1

	.loc_0xD8:
	  lwz       r0, 0x24(r31)
	  cmpw      r29, r0
	  blt+      .loc_0x50
	  b         .loc_0x168

	.loc_0xE8:
	  li        r29, 0
	  li        r30, 0
	  b         .loc_0x15C

	.loc_0xF4:
	  lwz       r3, 0x2C(r31)
	  lbzx      r0, r3, r29
	  cmplwi    r0, 0
	  bne-      .loc_0x154
	  lwz       r0, 0x28(r31)
	  add       r3, r0, r30
	  lfs       f0, 0x1FC(r3)
	  stfs      f0, 0x244(r3)
	  lwz       r0, 0x28(r31)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1CC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r31)
	  lbzx      r0, r3, r29
	  cmplwi    r0, 0
	  bne-      .loc_0x154
	  lwz       r0, 0x28(r31)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x154:
	  addi      r30, r30, 0x2C8
	  addi      r29, r29, 0x1

	.loc_0x15C:
	  lwz       r0, 0x24(r31)
	  cmpw      r29, r0
	  blt+      .loc_0xF4

	.loc_0x168:
	  lwz       r0, 0x30(r31)
	  cmpwi     r0, 0
	  ble-      .loc_0x1AC
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x1AC
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x1AC
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x1AC
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1071
	  li        r5, 0
	  bl        0x1D906C

	.loc_0x1AC:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5B2C
	  lwz       r3, 0x28(r3)
	  bl        0x2CB528
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
 * Address:	8015F5F4
 * Size:	000058
 */
void Game::PikiMgr::setVsXlu((int, bool))
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x30
	  cmpwi     r4, 0
	  bne-      .loc_0x20
	  lbz       r0, 0x38(r3)
	  rlwinm    r0,r0,0,24,30
	  stb       r0, 0x38(r3)
	  blr

	.loc_0x20:
	  lbz       r0, 0x38(r3)
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x38(r3)
	  blr

	.loc_0x30:
	  cmpwi     r4, 0
	  bne-      .loc_0x48
	  lbz       r0, 0x38(r3)
	  ori       r0, r0, 0x1
	  stb       r0, 0x38(r3)
	  blr

	.loc_0x48:
	  lbz       r0, 0x38(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x38(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015F64C
 * Size:	0001FC
 */
void Game::PikiMgr::doEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r4, -0x6C18(r13)
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x130
	  lbz       r0, 0x39(r28)
	  li        r29, 0
	  li        r30, 0
	  rlwinm    r31,r0,0,31,31
	  b         .loc_0x120

	.loc_0x44:
	  lwz       r3, 0x2C(r28)
	  lbzx      r0, r3, r29
	  cmplwi    r0, 0
	  bne-      .loc_0x118
	  cmplwi    r31, 0
	  beq-      .loc_0x98
	  lwz       r0, 0x28(r28)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x98
	  lwz       r5, 0x28(r28)
	  addi      r4, r30, 0xD8
	  li        r0, -0x35
	  lbzx      r3, r5, r4
	  and       r0, r3, r0
	  stbx      r0, r5, r4
	  b         .loc_0xB0

	.loc_0x98:
	  lwz       r0, 0x28(r28)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB0:
	  lwz       r0, 0x28(r28)
	  add       r4, r0, r30
	  lbz       r3, 0x2B8(r4)
	  cmpwi     r3, 0
	  bne-      .loc_0xE0
	  lbz       r0, 0x38(r28)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xE0
	  lbz       r0, 0xD8(r4)
	  rlwinm    r0,r0,0,28,26
	  stb       r0, 0xD8(r4)
	  b         .loc_0x100

	.loc_0xE0:
	  cmpwi     r3, 0x1
	  bne-      .loc_0x100
	  lbz       r0, 0x38(r28)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x100
	  lbz       r0, 0xD8(r4)
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0xD8(r4)

	.loc_0x100:
	  lwz       r0, 0x28(r28)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl

	.loc_0x118:
	  addi      r30, r30, 0x2C8
	  addi      r29, r29, 0x1

	.loc_0x120:
	  lwz       r0, 0x24(r28)
	  cmpw      r29, r0
	  blt+      .loc_0x44
	  b         .loc_0x1DC

	.loc_0x130:
	  lbz       r0, 0x39(r28)
	  li        r31, 0
	  li        r30, 0
	  rlwinm    r29,r0,0,31,31
	  b         .loc_0x1D0

	.loc_0x144:
	  lwz       r3, 0x2C(r28)
	  lbzx      r0, r3, r31
	  cmplwi    r0, 0
	  bne-      .loc_0x1C8
	  cmplwi    r29, 0
	  beq-      .loc_0x198
	  lwz       r0, 0x28(r28)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x198
	  lwz       r5, 0x28(r28)
	  addi      r4, r30, 0xD8
	  li        r0, -0x35
	  lbzx      r3, r5, r4
	  and       r0, r3, r0
	  stbx      r0, r5, r4
	  b         .loc_0x1B0

	.loc_0x198:
	  lwz       r0, 0x28(r28)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1B0:
	  lwz       r0, 0x28(r28)
	  add       r3, r0, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1C8:
	  addi      r30, r30, 0x2C8
	  addi      r31, r31, 0x1

	.loc_0x1D0:
	  lwz       r0, 0x24(r28)
	  cmpw      r31, r0
	  blt+      .loc_0x144

	.loc_0x1DC:
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
 * Address:	8015F848
 * Size:	000004
 */
void Game::PikiMgr::setupSoundViewerAndBas(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015F84C
 * Size:	000074
 */
void Game::PikiMgr::getColorTransportScale((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  blt-      .loc_0x28
	  cmpwi     r31, 0x7
	  bge-      .loc_0x28
	  li        r0, 0x1

	.loc_0x28:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x4C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x2048
	  li        r4, 0x359
	  subi      r5, r5, 0x1ED4
	  crclr     6, 0x6
	  bl        -0x135254

	.loc_0x4C:
	  cmpwi     r31, 0x3
	  bne-      .loc_0x5C
	  li        r3, 0xA
	  b         .loc_0x60

	.loc_0x5C:
	  li        r3, 0x1

	.loc_0x60:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015F8C0
 * Size:	00003C
 */
void Game::PikiMgr::allocStorePikmins(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x54
	  bl        -0x13B92C
	  stw       r3, 0x34(r31)
	  mr        r3, r31
	  bl        .loc_0x3C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x3C:
	*/
}

/*
 * --INFO--
 * Address:	8015F8FC
 * Size:	00006C
 */
void Game::PikiMgr::clearStorePikmins(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x3
	  li        r11, 0
	  mtctr     r0
	  mr        r10, r11

	.loc_0x10:
	  lwz       r4, 0x34(r3)
	  addi      r8, r11, 0x4
	  addi      r7, r11, 0x8
	  addi      r6, r11, 0xC
	  stwx      r10, r4, r11
	  addi      r5, r11, 0x10
	  addi      r4, r11, 0x14
	  addi      r0, r11, 0x18
	  lwz       r9, 0x34(r3)
	  addi      r11, r11, 0x1C
	  stwx      r10, r9, r8
	  lwz       r8, 0x34(r3)
	  stwx      r10, r8, r7
	  lwz       r7, 0x34(r3)
	  stwx      r10, r7, r6
	  lwz       r6, 0x34(r3)
	  stwx      r10, r6, r5
	  lwz       r5, 0x34(r3)
	  stwx      r10, r5, r4
	  lwz       r4, 0x34(r3)
	  stwx      r10, r4, r0
	  bdnz+     .loc_0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002C0
 */
void saveStorePikmins__Q24Game7PikiMgrFP23Condition<Game::Piki>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void Game::PikiMgr::getStorePikmin((int, int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8015F968
 * Size:	00034C
 */
void moveAllPikmins__Q24Game7PikiMgrFR10Vector3<float>
fP23Condition<Game::Piki>(void)
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
	  stw       r29, 0x44(r1)
	  li        r0, 0
	  lis       r6, 0x804B
	  subi      r6, r6, 0x4364
	  fmr       f31, f1
	  cmplwi    r0, 0
	  stw       r6, 0x14(r1)
	  mr        r30, r4
	  mr        r31, r5
	  stw       r0, 0x20(r1)
	  stw       r0, 0x18(r1)
	  stw       r3, 0x1C(r1)
	  bne-      .loc_0x80
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x2F0

	.loc_0x80:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0xEC

	.loc_0x98:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2F0
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)

	.loc_0xEC:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x98
	  b         .loc_0x2F0

	.loc_0x10C:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xBC(r3)
	  mr        r29, r3
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x234
	  cmplwi    r31, 0
	  beq-      .loc_0x158
	  mr        r3, r31
	  mr        r4, r29
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x234

	.loc_0x158:
	  bl        -0x96520
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2C(r1)
	  lfd       f3, -0x5B18(r2)
	  stw       r0, 0x28(r1)
	  lfs       f1, -0x5B24(r2)
	  lfd       f2, 0x28(r1)
	  lfs       f0, -0x5B20(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f29, f0, f1
	  bl        -0x96550
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x34(r1)
	  fmr       f1, f29
	  lfd       f3, -0x5B18(r2)
	  stw       r0, 0x30(r1)
	  lfs       f0, -0x5B24(r2)
	  lfd       f2, 0x30(r1)
	  fsubs     f2, f2, f3
	  fdivs     f0, f2, f0
	  fmuls     f28, f31, f0
	  bl        0x2B1C78
	  fmuls     f30, f28, f1
	  fmr       f1, f29
	  bl        0x2B1C04
	  fmuls     f4, f28, f1
	  lfs       f3, -0x5BF0(r2)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f3, 0xC(r1)
	  cmplwi    r3, 0
	  stfs      f4, 0x8(r1)
	  stfs      f30, 0x10(r1)
	  lfs       f2, 0x8(r30)
	  lfs       f1, 0x4(r30)
	  lfs       f0, 0x0(r30)
	  fadds     f2, f30, f2
	  fadds     f1, f3, f1
	  fadds     f0, f4, f0
	  stfs      f2, 0x10(r1)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  beq-      .loc_0x224
	  lwz       r12, 0x4(r3)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0xC(r1)

	.loc_0x224:
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  li        r5, 0
	  bl        -0x249F0

	.loc_0x234:
	  lwz       r0, 0x20(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x260
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x2F0

	.loc_0x260:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x2D4

	.loc_0x280:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2F0
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)

	.loc_0x2D4:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x280

	.loc_0x2F0:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x18(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x10C
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  psq_l     f28,0x58(r1),0,0
	  lfd       f28, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015FCB4
 * Size:	000298
 */
void Game::PikiMgr::forceEnterPikmins((unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x34(r1)
	  li        r0, 0
	  subi      r5, r5, 0x4364
	  stw       r31, 0x2C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  stw       r0, 0x1C(r1)
	  stw       r5, 0x10(r1)
	  stw       r0, 0x14(r1)
	  stw       r3, 0x18(r1)
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x260

	.loc_0x54:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0xC0

	.loc_0x6C:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x260
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0xC0:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x6C
	  b         .loc_0x260

	.loc_0xE0:
	  lwz       r3, 0x18(r1)
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
	  beq-      .loc_0x1A4
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1A4
	  rlwinm    r0,r31,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x154
	  mr        r3, r30
	  bl        -0x17FA8
	  cmpwi     r3, 0
	  bne-      .loc_0x154
	  lwz       r0, 0x17C(r30)
	  rlwinm.   r0,r0,0,25,25
	  bne-      .loc_0x1A4

	.loc_0x154:
	  lwz       r3, -0x6B70(r13)
	  lbz       r4, 0x2B8(r30)
	  lbz       r5, 0x2B9(r30)
	  addi      r3, r3, 0xA8
	  bl        0x91604
	  lwz       r7, 0x0(r3)
	  lis       r6, 0x804B
	  lis       r5, 0x1
	  lis       r4, 0x804B
	  addi      r0, r7, 0x1
	  subi      r6, r6, 0x5D30
	  stw       r0, 0x0(r3)
	  addi      r5, r5, 0x1
	  addi      r0, r4, 0x1160
	  mr        r3, r30
	  stw       r6, 0x8(r1)
	  addi      r4, r1, 0x8
	  stw       r5, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x24D64

	.loc_0x1A4:
	  lwz       r0, 0x1C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1D0
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x260

	.loc_0x1D0:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x244

	.loc_0x1F0:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x260
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0x244:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1F0

	.loc_0x260:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x14(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xE0
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
 * Address:	8015FF4C
 * Size:	00060C
 */
void Game::PikiMgr::killDayEndPikmins((Game::PikiContainer&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x260(r1)
	  mflr      r0
	  stw       r0, 0x264(r1)
	  stfd      f31, 0x250(r1)
	  psq_st    f31,0x258(r1),0,0
	  stfd      f30, 0x240(r1)
	  psq_st    f30,0x248(r1),0,0
	  stfd      f29, 0x230(r1)
	  psq_st    f29,0x238(r1),0,0
	  stfd      f28, 0x220(r1)
	  psq_st    f28,0x228(r1),0,0
	  stmw      r25, 0x204(r1)
	  mr        r28, r4
	  mr        r25, r3
	  mr        r3, r28
	  bl        0x91304
	  li        r27, 0
	  lis       r3, 0x804B
	  subi      r0, r3, 0x4364
	  stw       r27, 0x68(r1)
	  cmplwi    r27, 0
	  li        r30, 0
	  stw       r0, 0x5C(r1)
	  stw       r27, 0x60(r1)
	  stw       r25, 0x64(r1)
	  bne-      .loc_0x84
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x60(r1)
	  b         .loc_0x538

	.loc_0x84:
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x60(r1)
	  b         .loc_0xF4

	.loc_0xA0:
	  lwz       r3, 0x64(r1)
	  lwz       r4, 0x60(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x538
	  lwz       r3, 0x64(r1)
	  lwz       r4, 0x60(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x60(r1)

	.loc_0xF4:
	  lwz       r12, 0x5C(r1)
	  addi      r3, r1, 0x5C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xA0
	  b         .loc_0x538

	.loc_0x114:
	  lwz       r3, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x47C
	  mr        r3, r31
	  bl        -0x171BC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x47C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x47C
	  lwz       r3, -0x6CF8(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x21C
	  lfs       f0, -0x5BF0(r2)
	  lfs       f1, -0x5B10(r2)
	  stfs      f0, 0x54(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x50(r1)
	  stfs      f0, 0x58(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r4, r1, 0x50
	  addi      r5, r1, 0x10
	  bl        -0x75530
	  lfs       f2, 0x10(r1)
	  mr        r4, r31
	  lfs       f1, 0x14(r1)
	  addi      r3, r1, 0x34
	  lfs       f0, 0x18(r1)
	  stfs      f2, 0x50(r1)
	  stfs      f1, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x3C(r1)
	  lfs       f0, 0x58(r1)
	  lfs       f2, 0x34(r1)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x50(r1)
	  lfs       f0, -0x5B0C(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  blt-      .loc_0x47C

	.loc_0x21C:
	  lwz       r3, -0x6CD0(r13)
	  li        r29, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x230
	  addi      r3, r3, 0x30

	.loc_0x230:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x548
	  stw       r0, 0x4C(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x40(r1)
	  stw       r0, 0x44(r1)
	  stw       r3, 0x48(r1)
	  bne-      .loc_0x26C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)
	  b         .loc_0x2F4

	.loc_0x26C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)
	  b         .loc_0x2D8

	.loc_0x284:
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2F4
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)

	.loc_0x2D8:
	  lwz       r12, 0x40(r1)
	  addi      r3, r1, 0x40
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x284

	.loc_0x2F4:
	  lfs       f31, -0x5B90(r2)
	  b         .loc_0x444

	.loc_0x2FC:
	  lwz       r3, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r31)
	  mr        r26, r3
	  mr        r4, r31
	  addi      r3, r1, 0x28
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r26
	  addi      r3, r1, 0x1C
	  lwz       r12, 0x0(r26)
	  lfs       f30, 0x28(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f29, 0x2C(r1)
	  lfs       f28, 0x30(r1)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x20(r1)
	  lfs       f1, 0x1C(r1)
	  fsubs     f2, f0, f29
	  lfs       f0, 0x24(r1)
	  fsubs     f3, f1, f30
	  fsubs     f1, f0, f28
	  fmuls     f0, f2, f2
	  fmadds    f0, f3, f3, f0
	  fmadds    f1, f1, f1, f0
	  bl        0x2B1544
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0x388
	  li        r29, 0x1
	  b         .loc_0x464

	.loc_0x388:
	  lwz       r0, 0x4C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x3B4
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)
	  b         .loc_0x444

	.loc_0x3B4:
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)
	  b         .loc_0x428

	.loc_0x3D4:
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x444
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)

	.loc_0x428:
	  lwz       r12, 0x40(r1)
	  addi      r3, r1, 0x40
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x3D4

	.loc_0x444:
	  lwz       r3, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x44(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x2FC

	.loc_0x464:
	  rlwinm.   r0,r29,0,24,31
	  bne-      .loc_0x47C
	  addi      r3, r1, 0x6C
	  addi      r30, r30, 0x1
	  stwx      r31, r3, r27
	  addi      r27, r27, 0x4

	.loc_0x47C:
	  lwz       r0, 0x68(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x4A8
	  lwz       r3, 0x64(r1)
	  lwz       r4, 0x60(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x60(r1)
	  b         .loc_0x538

	.loc_0x4A8:
	  lwz       r3, 0x64(r1)
	  lwz       r4, 0x60(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x60(r1)
	  b         .loc_0x51C

	.loc_0x4C8:
	  lwz       r3, 0x64(r1)
	  lwz       r4, 0x60(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x538
	  lwz       r3, 0x64(r1)
	  lwz       r4, 0x60(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x60(r1)

	.loc_0x51C:
	  lwz       r12, 0x5C(r1)
	  addi      r3, r1, 0x5C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x4C8

	.loc_0x538:
	  lwz       r3, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x60(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x114
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r26, r1, 0x6C
	  li        r25, 0
	  subi      r31, r4, 0x5D30
	  addi      r27, r3, 0x1160
	  li        r29, 0x1
	  b         .loc_0x5C0

	.loc_0x578:
	  li        r3, 0x1
	  bl        0xD0250
	  li        r3, 0x7
	  bl        0xD0248
	  lwz       r4, 0x0(r26)
	  mr        r3, r28
	  bl        0x91008
	  lwz       r5, 0x0(r3)
	  addi      r4, r1, 0x8
	  addi      r0, r5, 0x1
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x0(r26)
	  stw       r31, 0x8(r1)
	  stw       r29, 0xC(r1)
	  stw       r27, 0x8(r1)
	  bl        -0x25410
	  addi      r26, r26, 0x4
	  addi      r25, r25, 0x1

	.loc_0x5C0:
	  cmpw      r25, r30
	  blt+      .loc_0x578
	  lis       r4, 0x8048
	  mr        r3, r28
	  subi      r4, r4, 0x1EC8
	  bl        0x90E88
	  psq_l     f31,0x258(r1),0,0
	  lfd       f31, 0x250(r1)
	  psq_l     f30,0x248(r1),0,0
	  lfd       f30, 0x240(r1)
	  psq_l     f29,0x238(r1),0,0
	  lfd       f29, 0x230(r1)
	  psq_l     f28,0x228(r1),0,0
	  lfd       f28, 0x220(r1)
	  lmw       r25, 0x204(r1)
	  lwz       r0, 0x264(r1)
	  mtlr      r0
	  addi      r1, r1, 0x260
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80160558
 * Size:	000258
 */
void Game::PikiMgr::killAllPikmins(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1D0(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x1D4(r1)
	  subi      r0, r4, 0x4364
	  stmw      r26, 0x1B8(r1)
	  li        r30, 0
	  cmplwi    r30, 0
	  li        r31, 0
	  stw       r30, 0x1C(r1)
	  stw       r0, 0x10(r1)
	  stw       r30, 0x14(r1)
	  stw       r3, 0x18(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x1D8

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1D8
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0xBC:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1D8

	.loc_0xDC:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x11C
	  addi      r3, r1, 0x20
	  addi      r31, r31, 0x1
	  stwx      r28, r3, r30
	  addi      r30, r30, 0x4

	.loc_0x11C:
	  lwz       r0, 0x1C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x148
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x1D8

	.loc_0x148:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x1BC

	.loc_0x168:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1D8
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0x1BC:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x168

	.loc_0x1D8:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x14(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lis       r5, 0x804B
	  lis       r4, 0x1
	  lis       r3, 0x804B
	  addi      r27, r1, 0x20
	  subi      r28, r5, 0x5D30
	  addi      r29, r4, 0x1
	  addi      r30, r3, 0x1160
	  li        r26, 0
	  b         .loc_0x23C

	.loc_0x21C:
	  stw       r28, 0x8(r1)
	  addi      r4, r1, 0x8
	  lwz       r3, 0x0(r27)
	  stw       r29, 0xC(r1)
	  stw       r30, 0x8(r1)
	  bl        -0x25698
	  addi      r27, r27, 0x4
	  addi      r26, r26, 0x1

	.loc_0x23C:
	  cmpw      r26, r31
	  blt+      .loc_0x21C
	  lmw       r26, 0x1B8(r1)
	  lwz       r0, 0x1D4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1D0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801607B0
 * Size:	0002C8
 */
void Game::PikiMgr::caveSaveFormationPikmins((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1D0(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x1D4(r1)
	  subi      r0, r5, 0x4364
	  stmw      r25, 0x1B4(r1)
	  li        r29, 0
	  cmplwi    r29, 0
	  mr        r30, r4
	  li        r31, 0
	  stw       r29, 0x1C(r1)
	  stw       r0, 0x10(r1)
	  stw       r29, 0x14(r1)
	  stw       r3, 0x18(r1)
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x1F8

	.loc_0x54:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0xC0

	.loc_0x6C:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1F8
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0xC0:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x6C
	  b         .loc_0x1F8

	.loc_0xE0:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r27, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x13C
	  mr        r3, r27
	  bl        -0x18A7C
	  cmpwi     r3, 0
	  bne-      .loc_0x13C
	  lwz       r0, 0x17C(r27)
	  rlwinm.   r0,r0,0,25,25
	  beq-      .loc_0x13C
	  addi      r3, r1, 0x20
	  addi      r31, r31, 0x1
	  stwx      r27, r3, r29
	  addi      r29, r29, 0x4

	.loc_0x13C:
	  lwz       r0, 0x1C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x168
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x1F8

	.loc_0x168:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x1DC

	.loc_0x188:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1F8
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0x1DC:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x188

	.loc_0x1F8:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x14(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xE0
	  cmpwi     r31, 0
	  bne-      .loc_0x22C
	  li        r0, 0x7D
	  mtctr     r0

	.loc_0x228:
	  bdnz-     .loc_0x228

	.loc_0x22C:
	  lis       r5, 0x804B
	  lis       r4, 0x1
	  lis       r3, 0x804B
	  addi      r26, r1, 0x20
	  rlwinm    r27,r30,0,24,31
	  subi      r28, r5, 0x5D30
	  addi      r30, r4, 0x1
	  addi      r29, r3, 0x1160
	  li        r25, 0
	  b         .loc_0x298

	.loc_0x254:
	  lwz       r3, -0x6B70(r13)
	  lwz       r4, 0x0(r26)
	  addi      r3, r3, 0x60
	  bl        0x90AD4
	  lwz       r4, 0x0(r3)
	  cmplwi    r27, 0
	  addi      r0, r4, 0x1
	  stw       r0, 0x0(r3)
	  beq-      .loc_0x290
	  stw       r28, 0x8(r1)
	  addi      r4, r1, 0x8
	  lwz       r3, 0x0(r26)
	  stw       r30, 0xC(r1)
	  stw       r29, 0x8(r1)
	  bl        -0x2594C

	.loc_0x290:
	  addi      r26, r26, 0x4
	  addi      r25, r25, 0x1

	.loc_0x298:
	  cmpw      r25, r31
	  blt+      .loc_0x254
	  lwz       r5, -0x6B70(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x1EB8
	  addi      r3, r5, 0x60
	  bl        0x90948
	  lmw       r25, 0x1B4(r1)
	  lwz       r0, 0x1D4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1D0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80160A78
 * Size:	0002C4
 */
void Game::PikiMgr::caveSaveAllPikmins((bool, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1D0(r1)
	  mflr      r0
	  lis       r6, 0x804B
	  stw       r0, 0x1D4(r1)
	  subi      r0, r6, 0x4364
	  stmw      r25, 0x1B4(r1)
	  li        r28, 0
	  cmplwi    r28, 0
	  mr        r29, r4
	  mr        r30, r5
	  li        r31, 0
	  stw       r28, 0x1C(r1)
	  stw       r0, 0x10(r1)
	  stw       r28, 0x14(r1)
	  stw       r3, 0x18(r1)
	  bne-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x21C

	.loc_0x58:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0xC4

	.loc_0x70:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x21C
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0xC4:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x70
	  b         .loc_0x21C

	.loc_0xE4:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r27, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x160
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x128
	  lbz       r0, 0x2B8(r27)
	  cmpwi     r0, 0x5
	  beq-      .loc_0x160

	.loc_0x128:
	  lbz       r0, 0x2B8(r27)
	  cmpwi     r0, 0x5
	  bne-      .loc_0x150
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x160

	.loc_0x150:
	  addi      r3, r1, 0x20
	  addi      r31, r31, 0x1
	  stwx      r27, r3, r28
	  addi      r28, r28, 0x4

	.loc_0x160:
	  lwz       r0, 0x1C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x18C
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x21C

	.loc_0x18C:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x200

	.loc_0x1AC:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x21C
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0x200:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1AC

	.loc_0x21C:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x14(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xE4
	  lis       r5, 0x804B
	  lis       r4, 0x1
	  lis       r3, 0x804B
	  addi      r26, r1, 0x20
	  rlwinm    r27,r29,0,24,31
	  subi      r30, r5, 0x5D30
	  addi      r29, r4, 0x1
	  addi      r28, r3, 0x1160
	  li        r25, 0
	  b         .loc_0x2A8

	.loc_0x264:
	  lwz       r3, -0x6B70(r13)
	  lwz       r4, 0x0(r26)
	  addi      r3, r3, 0x60
	  bl        0x907FC
	  lwz       r4, 0x0(r3)
	  cmplwi    r27, 0
	  addi      r0, r4, 0x1
	  stw       r0, 0x0(r3)
	  beq-      .loc_0x2A0
	  stw       r30, 0x8(r1)
	  addi      r4, r1, 0x8
	  lwz       r3, 0x0(r26)
	  stw       r29, 0xC(r1)
	  stw       r28, 0x8(r1)
	  bl        -0x25C24

	.loc_0x2A0:
	  addi      r26, r26, 0x4
	  addi      r25, r25, 0x1

	.loc_0x2A8:
	  cmpw      r25, r31
	  blt+      .loc_0x264
	  lmw       r25, 0x1B4(r1)
	  lwz       r0, 0x1D4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1D0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000290
 */
void Game::PikiMgr::saveFormationPikmins((Game::PikiContainer&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80160D3C
 * Size:	0002A8
 */
void Game::PikiMgr::saveAllPikmins((Game::PikiContainer&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1C0(r1)
	  mflr      r0
	  stw       r0, 0x1C4(r1)
	  stw       r31, 0x1BC(r1)
	  stw       r30, 0x1B8(r1)
	  mr        r30, r4
	  stw       r29, 0x1B4(r1)
	  stw       r28, 0x1B0(r1)
	  mr        r28, r3
	  mr        r3, r30
	  bl        0x90528
	  li        r29, 0
	  lis       r3, 0x804B
	  subi      r0, r3, 0x4364
	  stw       r29, 0x14(r1)
	  cmplwi    r29, 0
	  li        r31, 0
	  stw       r0, 0x8(r1)
	  stw       r29, 0xC(r1)
	  stw       r28, 0x10(r1)
	  bne-      .loc_0x70
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x224

	.loc_0x70:
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xE0

	.loc_0x8C:
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
	  bne-      .loc_0x224
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xE0:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x8C
	  b         .loc_0x224

	.loc_0x100:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x2B8(r3)
	  mr        r28, r3
	  cmpwi     r0, 0x5
	  bne-      .loc_0x13C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x168

	.loc_0x13C:
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x168
	  addi      r3, r1, 0x18
	  addi      r31, r31, 0x1
	  stwx      r28, r3, r29
	  addi      r29, r29, 0x4

	.loc_0x168:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x194
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x224

	.loc_0x194:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x208

	.loc_0x1B4:
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
	  bne-      .loc_0x224
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x208:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1B4

	.loc_0x224:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x100
	  addi      r28, r1, 0x18
	  li        r29, 0
	  b         .loc_0x270

	.loc_0x250:
	  lwz       r4, 0x0(r28)
	  mr        r3, r30
	  bl        0x90550
	  lwz       r4, 0x0(r3)
	  addi      r28, r28, 0x4
	  addi      r29, r29, 0x1
	  addi      r0, r4, 0x1
	  stw       r0, 0x0(r3)

	.loc_0x270:
	  cmpw      r29, r31
	  blt+      .loc_0x250
	  lis       r4, 0x8048
	  mr        r3, r30
	  subi      r4, r4, 0x1E9C
	  bl        0x903E8
	  lwz       r0, 0x1C4(r1)
	  lwz       r31, 0x1BC(r1)
	  lwz       r30, 0x1B8(r1)
	  lwz       r29, 0x1B4(r1)
	  lwz       r28, 0x1B0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1C0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80160FE4
 * Size:	0000B8
 */
void Game::PikiMgr::__dt(void)
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
	  lis       r4, 0x804B
	  addi      r4, r4, 0x16C8
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x8C
	  lis       r4, 0x804B
	  addi      r4, r4, 0x1810
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x8C
	  lis       r4, 0x804B
	  addi      r4, r4, 0x1794
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x8C
	  lis       r4, 0x804B
	  addi      r0, r4, 0x1768
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x8C
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2B051C

	.loc_0x8C:
	  extsh.    r0, r31
	  ble-      .loc_0x9C
	  mr        r3, r30
	  bl        -0x13CFC8

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
 * Address:	8016109C
 * Size:	000008
 */
void Game::PikiMgr::getMgrName(void)
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x5B08
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801610A4
 * Size:	000008
 */
void Game::PikiMgr::getMatrixLoadType(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801610AC
 * Size:	000004
 */
void Game::PikiMgr::loadResources(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801610B0
 * Size:	000070
 */
void Container<Game::Piki>::~Container()
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
	  addi      r0, r4, 0x1768
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2B0498

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x13D04C

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
 * Address:	80161120
 * Size:	000088
 */
void ObjectMgr<Game::Piki>::~ObjectMgr()
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
	  addi      r4, r4, 0x1794
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x5C
	  lis       r4, 0x804B
	  addi      r0, r4, 0x1768
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x5C
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2B0410

	.loc_0x5C:
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x13D0D4

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
 * Address:	801611A8
 * Size:	000030
 */
void Delegate1<Game::PikiMgr, SysShape::Model*>::invoke(SysShape::Model*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r5, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x9F69C
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801611D8
 * Size:	000060
 */
void MonoObjectMgr<Game::Piki>::birth()
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
	  mulli     r5, r3, 0x2C8
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
 * Address:	80161238
 * Size:	000040
 */
void MonoObjectMgr<Game::Piki>::getNext(void*)
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
 * Address:	80161278
 * Size:	000030
 */
void MonoObjectMgr<Game::Piki>::getStart()
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
 * Address:	801612A8
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::getEnd()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801612B0
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::getTo()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801612B8
 * Size:	000080
 */
void MonoObjectMgr<Game::Piki>::doAnimation()
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
	  addi      r31, r31, 0x2C8
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
 * Address:	80161338
 * Size:	000080
 */
void MonoObjectMgr<Game::Piki>::doEntry()
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
	  addi      r31, r31, 0x2C8
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
 * Address:	801613B8
 * Size:	000090
 */
void MonoObjectMgr<Game::Piki>::doSetView(int)
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
	  addi      r31, r31, 0x2C8
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
 * Address:	80161448
 * Size:	000080
 */
void MonoObjectMgr<Game::Piki>::doViewCalc()
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
	  addi      r31, r31, 0x2C8
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
 * Address:	801614C8
 * Size:	000090
 */
void MonoObjectMgr<Game::Piki>::doSimulation(float)
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
	  addi      r31, r31, 0x2C8
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
 * Address:	80161558
 * Size:	000090
 */
void MonoObjectMgr<Game::Piki>::doDirectDraw(Graphics&)
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
	  addi      r31, r31, 0x2C8
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
 * Address:	801615E8
 * Size:	000018
 */
void MonoObjectMgr<Game::Piki>::resetMgr()
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
 * Address:	80161600
 * Size:	000030
 */
void MonoObjectMgr<Game::Piki>::clearMgr()
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
 * Address:	80161630
 * Size:	00003C
 */
void MonoObjectMgr<Game::Piki>::getEmptyIndex()
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
 * Address:	8016166C
 * Size:	000010
 */
void MonoObjectMgr<Game::Piki>::get(void*)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2C8
	  lwz       r3, 0x28(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016167C
 * Size:	0001E4
 */
void ObjectMgr<Game::Piki>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x4364
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
 * Address:	80161860
 * Size:	0001E4
 */
void ObjectMgr<Game::Piki>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x4364
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
 * Address:	80161A44
 * Size:	0001F4
 */
void ObjectMgr<Game::Piki>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r5, r5, 0x4364
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
 * Address:	80161C38
 * Size:	0001E4
 */
void ObjectMgr<Game::Piki>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x4364
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
 * Address:	80161E1C
 * Size:	0001F4
 */
void ObjectMgr<Game::Piki>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x4364
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
 * Address:	80162010
 * Size:	0001F4
 */
void ObjectMgr<Game::Piki>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r5, r5, 0x4364
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
 * Address:	80162204
 * Size:	00002C
 */
void Container<Game::Piki>::getObject(void*)
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
 * Address:	80162230
 * Size:	000008
 */
void Container<Game::Piki>::getAt(int)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80162238
 * Size:	000008
 */
void Container<Game::Piki>::getTo()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80162240
 * Size:	00009C
 */
void MonoObjectMgr<Game::Piki>::MonoObjectMgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x2AF13C
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r6, 0x804B
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x1768
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  stw       r0, 0x0(r31)
	  li        r8, 0
	  addi      r7, r4, 0x1794
	  addi      r5, r3, 0x1810
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
 * Address:	801622DC
 * Size:	000028
 */
void __sinit_pikiMgr_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6D18(r13)
	  stfsu     f0, 0x1698(r3)
	  stfs      f0, -0x6D14(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80162304
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::@28 @resetMgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xD20
	*/
}

/*
 * --INFO--
 * Address:	8016230C
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xFD8
	*/
}

/*
 * --INFO--
 * Address:	80162314
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1060
	*/
}

/*
 * --INFO--
 * Address:	8016231C
 * Size:	000008
 */
void ObjectMgr<Game::Piki>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x310
	*/
}

/*
 * --INFO--
 * Address:	80162324
 * Size:	000008
 */
void ObjectMgr<Game::Piki>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x50C
	*/
}

/*
 * --INFO--
 * Address:	8016232C
 * Size:	000008
 */
void ObjectMgr<Game::Piki>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x6F8
	*/
}

/*
 * --INFO--
 * Address:	80162334
 * Size:	000008
 */
void ObjectMgr<Game::Piki>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x8F4
	*/
}

/*
 * --INFO--
 * Address:	8016233C
 * Size:	000008
 */
void ObjectMgr<Game::Piki>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xAE0
	*/
}

/*
 * --INFO--
 * Address:	80162344
 * Size:	000008
 */
void ObjectMgr<Game::Piki>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xCCC
	*/
}

/*
 * --INFO--
 * Address:	8016234C
 * Size:	000008
 */
void @28 @Game::PikiMgr::getMatrixLoadType(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x12AC
	*/
}

/*
 * --INFO--
 * Address:	80162354
 * Size:	000008
 */
void @28 @Game::PikiMgr::resetMgr(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x3CCC
	*/
}

/*
 * --INFO--
 * Address:	8016235C
 * Size:	000008
 */
void @28 @Game::PikiMgr::loadResources(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x12B4
	*/
}

/*
 * --INFO--
 * Address:	80162364
 * Size:	000008
 */
void @28 @Game::PikiMgr::doSimpleDraw((Viewport*))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x30E4
	*/
}

/*
 * --INFO--
 * Address:	8016236C
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xE18
	*/
}

/*
 * --INFO--
 * Address:	80162374
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xEB0
	*/
}

/*
 * --INFO--
 * Address:	8016237C
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xF38
	*/
}

/*
 * --INFO--
 * Address:	80162384
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xFD0
	*/
}

/*
 * --INFO--
 * Address:	8016238C
 * Size:	000008
 */
void @28 @Game::PikiMgr::doEntry(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x2D44
	*/
}

/*
 * --INFO--
 * Address:	80162394
 * Size:	000008
 */
void @28 @Game::PikiMgr::doAnimation(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x2F7C
	*/
}
