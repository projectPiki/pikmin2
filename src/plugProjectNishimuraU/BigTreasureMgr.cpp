

/*
 * --INFO--
 * Address:	802D90E4
 * Size:	000110
 */
void Game::BigTreasure::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stmw      r27, 0x4C(r1)
	  mr        r30, r3
	  bl        -0x1AA464
	  lis       r3, 0x804D
	  lis       r6, 0x8049
	  addi      r3, r3, 0x3198
	  lis       r5, 0x8049
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  stw       r0, 0x4(r30)
	  subi      r0, r6, 0x3D90
	  subi      r7, r5, 0x3DA4
	  addi      r31, r1, 0x8
	  stw       r0, 0x18(r30)
	  subi      r28, r4, 0x5D0C
	  subi      r29, r3, 0x5D48
	  li        r27, 0
	  lwz       r6, 0x0(r7)
	  lwz       r5, 0x4(r7)
	  lwz       r4, 0x8(r7)
	  lwz       r3, 0xC(r7)
	  lwz       r0, 0x10(r7)
	  stw       r6, 0x8(r1)
	  stw       r5, 0xC(r1)
	  stw       r4, 0x10(r1)
	  stw       r3, 0x14(r1)
	  stw       r0, 0x18(r1)

	.loc_0x80:
	  stw       r28, 0x1C(r1)
	  li        r8, 0
	  li        r0, -0x1
	  li        r7, 0xFF
	  li        r6, 0x1
	  stw       r29, 0x1C(r1)
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x1C
	  stb       r8, 0x38(r1)
	  lwz       r5, 0x0(r31)
	  sth       r8, 0x30(r1)
	  stb       r7, 0x32(r1)
	  stw       r8, 0x34(r1)
	  stb       r8, 0x33(r1)
	  stb       r6, 0x20(r1)
	  stb       r8, 0x39(r1)
	  stw       r0, 0x40(r1)
	  stw       r0, 0x3C(r1)
	  stb       r8, 0x3A(r1)
	  stb       r8, 0x3B(r1)
	  bl        -0x16B7D0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE8
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x1C
	  bl        -0x16BAEC

	.loc_0xE8:
	  addi      r27, r27, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r27, 0x5
	  blt+      .loc_0x80
	  mr        r3, r30
	  lmw       r27, 0x4C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802D91F4
 * Size:	000048
 */
void Game::BigTreasure::Mgr::doAlloc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x1280
	  bl        -0x2B5368
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x1A9988
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x48:
	*/
}

/*
 * --INFO--
 * Address:	802D923C
 * Size:	000048
 */
void Game::BigTreasure::Parms::Parms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1CFAB4
	  lis       r4, 0x804D
	  addi      r3, r31, 0x7F8
	  addi      r0, r4, 0x3278
	  li        r4, 0x1
	  stw       r0, 0xD8(r31)
	  bl        .loc_0x48
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x48:
	*/
}

/*
 * --INFO--
 * Address:	802D9284
 * Size:	000FF8
 */
void Game::BigTreasure::Parms::ProperParms::ProperParms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8049
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x3E10
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0xA84
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x6670
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x98
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0xA8
	  bl        0x13A380
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x188C(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x1884(r2)
	  addi      r6, r31, 0xB4
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x13A344
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1880(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, -0x187C(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x1878(r2)
	  addi      r6, r31, 0xC4
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x13A308
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1874(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x187C(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x1878(r2)
	  addi      r6, r31, 0xD4
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x13A2CC
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1870(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, -0x186C(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3035
	  lfs       f0, -0x1884(r2)
	  addi      r6, r31, 0xE4
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x13A290
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x1884(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f0, -0x186C(r2)
	  addi      r3, r30, 0xD4
	  stfs      f1, 0xC4(r30)
	  addi      r5, r5, 0x3036
	  addi      r6, r31, 0xF4
	  stfs      f0, 0xCC(r30)
	  stfs      f1, 0xD0(r30)
	  bl        0x13A258
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1868(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, -0x1864(r2)
	  addi      r6, r31, 0x104
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x13A21C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1860(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3131
	  lfs       f0, -0x1884(r2)
	  addi      r6, r31, 0x114
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x13A1E0
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x185C(r2)
	  stw       r0, 0x124(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x14C
	  stfs      f0, 0x13C(r30)
	  addi      r5, r5, 0x3331
	  lfs       f0, -0x1884(r2)
	  addi      r6, r31, 0x124
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
	  bl        0x13A1A4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1860(r2)
	  stw       r0, 0x14C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x174
	  stfs      f0, 0x164(r30)
	  addi      r5, r5, 0x3132
	  lfs       f0, -0x1884(r2)
	  addi      r6, r31, 0x134
	  stfs      f1, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  bl        0x13A168
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1860(r2)
	  stw       r0, 0x174(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x19C
	  stfs      f0, 0x18C(r30)
	  addi      r5, r5, 0x3133
	  lfs       f0, -0x1884(r2)
	  addi      r6, r31, 0x144
	  stfs      f1, 0x194(r30)
	  stfs      f0, 0x198(r30)
	  bl        0x13A12C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1860(r2)
	  stw       r0, 0x19C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x1C4
	  stfs      f0, 0x1B4(r30)
	  addi      r5, r5, 0x3230
	  lfs       f0, -0x1884(r2)
	  addi      r6, r31, 0x154
	  stfs      f1, 0x1BC(r30)
	  stfs      f0, 0x1C0(r30)
	  bl        0x13A0F0
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1878(r2)
	  stw       r0, 0x1C4(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x1EC
	  stfs      f0, 0x1DC(r30)
	  addi      r5, r5, 0x3231
	  lfs       f0, -0x1884(r2)
	  addi      r6, r31, 0x164
	  stfs      f1, 0x1E4(r30)
	  stfs      f0, 0x1E8(r30)
	  bl        0x13A0B4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1878(r2)
	  stw       r0, 0x1EC(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x214
	  stfs      f0, 0x204(r30)
	  addi      r5, r5, 0x3232
	  lfs       f0, -0x1884(r2)
	  addi      r6, r31, 0x174
	  stfs      f1, 0x20C(r30)
	  stfs      f0, 0x210(r30)
	  bl        0x13A078
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1878(r2)
	  stw       r0, 0x214(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x23C
	  stfs      f0, 0x22C(r30)
	  addi      r5, r5, 0x3233
	  lfs       f0, -0x1884(r2)
	  addi      r6, r31, 0x184
	  stfs      f1, 0x234(r30)
	  stfs      f0, 0x238(r30)
	  bl        0x13A03C
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1878(r2)
	  stw       r0, 0x23C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x264
	  stfs      f0, 0x254(r30)
	  addi      r5, r5, 0x3030
	  lfs       f0, -0x1884(r2)
	  addi      r6, r31, 0x194
	  stfs      f1, 0x25C(r30)
	  stfs      f0, 0x260(r30)
	  bl        0x13A000
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1858(r2)
	  stw       r0, 0x264(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x28C
	  stfs      f0, 0x27C(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x1854(r2)
	  addi      r6, r31, 0x1A4
	  stfs      f1, 0x284(r30)
	  stfs      f0, 0x288(r30)
	  bl        0x139FC4
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1850(r2)
	  stw       r0, 0x28C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x2B4
	  stfs      f0, 0x2A4(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x1854(r2)
	  addi      r6, r31, 0x1B4
	  stfs      f1, 0x2AC(r30)
	  stfs      f0, 0x2B0(r30)
	  bl        0x139F88
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x184C(r2)
	  stw       r0, 0x2B4(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x2DC
	  stfs      f0, 0x2CC(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x1C4
	  stfs      f1, 0x2D4(r30)
	  stfs      f0, 0x2D8(r30)
	  bl        0x139F4C
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1844(r2)
	  stw       r0, 0x2DC(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x304
	  stfs      f0, 0x2F4(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x1D4
	  stfs      f1, 0x2FC(r30)
	  stfs      f0, 0x300(r30)
	  bl        0x139F10
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1840(r2)
	  stw       r0, 0x304(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x32C
	  stfs      f0, 0x31C(r30)
	  addi      r5, r5, 0x3035
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x1E4
	  stfs      f1, 0x324(r30)
	  stfs      f0, 0x328(r30)
	  bl        0x139ED4
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1864(r2)
	  stw       r0, 0x32C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x354
	  stfs      f0, 0x344(r30)
	  addi      r5, r5, 0x3036
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x1F4
	  stfs      f1, 0x34C(r30)
	  stfs      f0, 0x350(r30)
	  bl        0x139E98
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x183C(r2)
	  stw       r0, 0x354(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x37C
	  stfs      f0, 0x36C(r30)
	  addi      r5, r5, 0x3038
	  lfs       f0, -0x1878(r2)
	  addi      r6, r31, 0x204
	  stfs      f1, 0x374(r30)
	  stfs      f0, 0x378(r30)
	  bl        0x139E5C
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1838(r2)
	  stw       r0, 0x37C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x3A4
	  stfs      f0, 0x394(r30)
	  addi      r5, r5, 0x3037
	  lfs       f0, -0x1854(r2)
	  addi      r6, r31, 0x214
	  stfs      f1, 0x39C(r30)
	  stfs      f0, 0x3A0(r30)
	  bl        0x139E20
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5370
	  li        r3, 0xA
	  stw       r0, 0x3A4(r30)
	  li        r7, 0
	  li        r0, 0x10
	  mr        r4, r30
	  stw       r3, 0x3BC(r30)
	  addi      r3, r30, 0x3CC
	  addi      r5, r5, 0x3130
	  addi      r6, r31, 0x220
	  stw       r7, 0x3C4(r30)
	  stw       r0, 0x3C8(r30)
	  bl        0x139DE4
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1834(r2)
	  stw       r0, 0x3CC(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x3F4
	  stfs      f0, 0x3E4(r30)
	  addi      r5, r5, 0x3131
	  lfs       f0, -0x1854(r2)
	  addi      r6, r31, 0x230
	  stfs      f1, 0x3EC(r30)
	  stfs      f0, 0x3F0(r30)
	  bl        0x139DA8
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1850(r2)
	  stw       r0, 0x3F4(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x41C
	  stfs      f0, 0x40C(r30)
	  addi      r5, r5, 0x3132
	  lfs       f0, -0x1854(r2)
	  addi      r6, r31, 0x240
	  stfs      f1, 0x414(r30)
	  stfs      f0, 0x418(r30)
	  bl        0x139D6C
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1830(r2)
	  stw       r0, 0x41C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x444
	  stfs      f0, 0x434(r30)
	  addi      r5, r5, 0x3133
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x250
	  stfs      f1, 0x43C(r30)
	  stfs      f0, 0x440(r30)
	  bl        0x139D30
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x182C(r2)
	  stw       r0, 0x444(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x46C
	  stfs      f0, 0x45C(r30)
	  addi      r5, r5, 0x3134
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x260
	  stfs      f1, 0x464(r30)
	  stfs      f0, 0x468(r30)
	  bl        0x139CF4
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1828(r2)
	  stw       r0, 0x46C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x494
	  stfs      f0, 0x484(r30)
	  addi      r5, r5, 0x3135
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x270
	  stfs      f1, 0x48C(r30)
	  stfs      f0, 0x490(r30)
	  bl        0x139CB8
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x184C(r2)
	  stw       r0, 0x494(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x4BC
	  stfs      f0, 0x4AC(r30)
	  addi      r5, r5, 0x3136
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x280
	  stfs      f1, 0x4B4(r30)
	  stfs      f0, 0x4B8(r30)
	  bl        0x139C7C
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1824(r2)
	  stw       r0, 0x4BC(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x4E4
	  stfs      f0, 0x4D4(r30)
	  addi      r5, r5, 0x3138
	  lfs       f0, -0x1878(r2)
	  addi      r6, r31, 0x290
	  stfs      f1, 0x4DC(r30)
	  stfs      f0, 0x4E0(r30)
	  bl        0x139C40
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1838(r2)
	  stw       r0, 0x4E4(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x50C
	  stfs      f0, 0x4FC(r30)
	  addi      r5, r5, 0x3137
	  lfs       f0, -0x1854(r2)
	  addi      r6, r31, 0x2A0
	  stfs      f1, 0x504(r30)
	  stfs      f0, 0x508(r30)
	  bl        0x139C04
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5370
	  li        r3, 0xC
	  stw       r0, 0x50C(r30)
	  li        r7, 0
	  li        r0, 0x10
	  mr        r4, r30
	  stw       r3, 0x524(r30)
	  addi      r3, r30, 0x534
	  addi      r5, r5, 0x3230
	  addi      r6, r31, 0x2AC
	  stw       r7, 0x52C(r30)
	  stw       r0, 0x530(r30)
	  bl        0x139BC8
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1820(r2)
	  stw       r0, 0x534(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x55C
	  stfs      f0, 0x54C(r30)
	  addi      r5, r5, 0x3231
	  lfs       f0, -0x1854(r2)
	  addi      r6, r31, 0x2BC
	  stfs      f1, 0x554(r30)
	  stfs      f0, 0x558(r30)
	  bl        0x139B8C
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1858(r2)
	  stw       r0, 0x55C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x584
	  stfs      f0, 0x574(r30)
	  addi      r5, r5, 0x3232
	  lfs       f0, -0x1854(r2)
	  addi      r6, r31, 0x2CC
	  stfs      f1, 0x57C(r30)
	  stfs      f0, 0x580(r30)
	  bl        0x139B50
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x181C(r2)
	  stw       r0, 0x584(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x5AC
	  stfs      f0, 0x59C(r30)
	  addi      r5, r5, 0x3233
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x2DC
	  stfs      f1, 0x5A4(r30)
	  stfs      f0, 0x5A8(r30)
	  bl        0x139B14
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1818(r2)
	  stw       r0, 0x5AC(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x5D4
	  stfs      f0, 0x5C4(r30)
	  addi      r5, r5, 0x3234
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x2EC
	  stfs      f1, 0x5CC(r30)
	  stfs      f0, 0x5D0(r30)
	  bl        0x139AD8
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1828(r2)
	  stw       r0, 0x5D4(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x5FC
	  stfs      f0, 0x5EC(r30)
	  addi      r5, r5, 0x3235
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x2FC
	  stfs      f1, 0x5F4(r30)
	  stfs      f0, 0x5F8(r30)
	  bl        0x139A9C
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x184C(r2)
	  stw       r0, 0x5FC(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x624
	  stfs      f0, 0x614(r30)
	  addi      r5, r5, 0x3236
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x30C
	  stfs      f1, 0x61C(r30)
	  stfs      f0, 0x620(r30)
	  bl        0x139A60
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1874(r2)
	  stw       r0, 0x624(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x64C
	  stfs      f0, 0x63C(r30)
	  addi      r5, r5, 0x3238
	  lfs       f0, -0x1878(r2)
	  addi      r6, r31, 0x31C
	  stfs      f1, 0x644(r30)
	  stfs      f0, 0x648(r30)
	  bl        0x139A24
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1814(r2)
	  stw       r0, 0x64C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x674
	  stfs      f0, 0x664(r30)
	  addi      r5, r5, 0x3237
	  lfs       f0, -0x1854(r2)
	  addi      r6, r31, 0x32C
	  stfs      f1, 0x66C(r30)
	  stfs      f0, 0x670(r30)
	  bl        0x1399E8
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5370
	  li        r3, 0x8
	  stw       r0, 0x674(r30)
	  li        r7, 0
	  li        r0, 0x10
	  mr        r4, r30
	  stw       r3, 0x68C(r30)
	  addi      r3, r30, 0x69C
	  addi      r5, r5, 0x3330
	  addi      r6, r31, 0x338
	  stw       r7, 0x694(r30)
	  stw       r0, 0x698(r30)
	  bl        0x1399AC
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1810(r2)
	  stw       r0, 0x69C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x6C4
	  stfs      f0, 0x6B4(r30)
	  addi      r5, r5, 0x3331
	  lfs       f0, -0x1854(r2)
	  addi      r6, r31, 0x348
	  stfs      f1, 0x6BC(r30)
	  stfs      f0, 0x6C0(r30)
	  bl        0x139970
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x180C(r2)
	  stw       r0, 0x6C4(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x6EC
	  stfs      f0, 0x6DC(r30)
	  addi      r5, r5, 0x3332
	  lfs       f0, -0x1854(r2)
	  addi      r6, r31, 0x358
	  stfs      f1, 0x6E4(r30)
	  stfs      f0, 0x6E8(r30)
	  bl        0x139934
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x184C(r2)
	  stw       r0, 0x6EC(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x714
	  stfs      f0, 0x704(r30)
	  addi      r5, r5, 0x3333
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x368
	  stfs      f1, 0x70C(r30)
	  stfs      f0, 0x710(r30)
	  bl        0x1398F8
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1808(r2)
	  stw       r0, 0x714(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x73C
	  stfs      f0, 0x72C(r30)
	  addi      r5, r5, 0x3334
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x378
	  stfs      f1, 0x734(r30)
	  stfs      f0, 0x738(r30)
	  bl        0x1398BC
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1818(r2)
	  stw       r0, 0x73C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x764
	  stfs      f0, 0x754(r30)
	  addi      r5, r5, 0x3335
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x388
	  stfs      f1, 0x75C(r30)
	  stfs      f0, 0x760(r30)
	  bl        0x139880
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1804(r2)
	  stw       r0, 0x764(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x78C
	  stfs      f0, 0x77C(r30)
	  addi      r5, r5, 0x3336
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x398
	  stfs      f1, 0x784(r30)
	  stfs      f0, 0x788(r30)
	  bl        0x139844
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1810(r2)
	  stw       r0, 0x78C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x7B4
	  stfs      f0, 0x7A4(r30)
	  addi      r5, r5, 0x3338
	  lfs       f0, -0x1878(r2)
	  addi      r6, r31, 0x3A8
	  stfs      f1, 0x7AC(r30)
	  stfs      f0, 0x7B0(r30)
	  bl        0x139808
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1800(r2)
	  stw       r0, 0x7B4(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x7DC
	  stfs      f0, 0x7CC(r30)
	  addi      r5, r5, 0x3337
	  lfs       f0, -0x1854(r2)
	  addi      r6, r31, 0x3B8
	  stfs      f1, 0x7D4(r30)
	  stfs      f0, 0x7D8(r30)
	  bl        0x1397CC
	  lis       r3, 0x804B
	  lis       r5, 0x6665
	  subi      r0, r3, 0x5370
	  li        r3, 0xE
	  stw       r0, 0x7DC(r30)
	  li        r7, 0
	  li        r0, 0x10
	  mr        r4, r30
	  stw       r3, 0x7F4(r30)
	  addi      r3, r30, 0x804
	  addi      r5, r5, 0x3939
	  addi      r6, r31, 0x3C4
	  stw       r7, 0x7FC(r30)
	  stw       r0, 0x800(r30)
	  bl        0x139790
	  lis       r3, 0x804B
	  lis       r5, 0x6666
	  subi      r0, r3, 0x5370
	  li        r7, 0
	  stw       r0, 0x804(r30)
	  li        r0, 0x4
	  mr        r4, r30
	  addi      r3, r30, 0x82C
	  stw       r7, 0x81C(r30)
	  addi      r5, r5, 0x3030
	  addi      r6, r31, 0x3D8
	  stw       r7, 0x824(r30)
	  stw       r0, 0x828(r30)
	  bl        0x139758
	  lis       r3, 0x804B
	  lis       r5, 0x6666
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1854(r2)
	  stw       r0, 0x82C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1874(r2)
	  addi      r3, r30, 0x854
	  stfs      f0, 0x844(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, -0x1878(r2)
	  addi      r6, r31, 0x3E8
	  stfs      f1, 0x84C(r30)
	  stfs      f0, 0x850(r30)
	  bl        0x13971C
	  lis       r3, 0x804B
	  lis       r5, 0x6667
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x17FC(r2)
	  stw       r0, 0x854(r30)
	  mr        r4, r30
	  lfs       f1, -0x1874(r2)
	  addi      r3, r30, 0x87C
	  stfs      f0, 0x86C(r30)
	  addi      r5, r5, 0x3939
	  lfs       f0, -0x1878(r2)
	  addi      r6, r31, 0x3C4
	  stfs      f1, 0x874(r30)
	  stfs      f0, 0x878(r30)
	  bl        0x1396E0
	  lis       r3, 0x804B
	  lis       r5, 0x6667
	  subi      r0, r3, 0x5370
	  li        r7, 0
	  stw       r0, 0x87C(r30)
	  li        r0, 0x2
	  mr        r4, r30
	  addi      r3, r30, 0x8A4
	  stw       r7, 0x894(r30)
	  addi      r5, r5, 0x3030
	  addi      r6, r31, 0x3F8
	  stw       r7, 0x89C(r30)
	  stw       r0, 0x8A0(r30)
	  bl        0x1396A8
	  lis       r3, 0x804B
	  lis       r5, 0x6667
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x17F8(r2)
	  stw       r0, 0x8A4(r30)
	  mr        r4, r30
	  lfs       f1, -0x17F4(r2)
	  addi      r3, r30, 0x8CC
	  stfs      f0, 0x8BC(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, -0x17F0(r2)
	  addi      r6, r31, 0x408
	  stfs      f1, 0x8C4(r30)
	  stfs      f0, 0x8C8(r30)
	  bl        0x13966C
	  lis       r3, 0x804B
	  lis       r5, 0x6667
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1838(r2)
	  stw       r0, 0x8CC(r30)
	  mr        r4, r30
	  lfs       f1, -0x17F4(r2)
	  addi      r3, r30, 0x8F4
	  stfs      f0, 0x8E4(r30)
	  addi      r5, r5, 0x3330
	  lfs       f0, -0x17F0(r2)
	  addi      r6, r31, 0x418
	  stfs      f1, 0x8EC(r30)
	  stfs      f0, 0x8F0(r30)
	  bl        0x139630
	  lis       r3, 0x804B
	  lis       r5, 0x6667
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x17EC(r2)
	  stw       r0, 0x8F4(r30)
	  mr        r4, r30
	  lfs       f0, -0x1888(r2)
	  addi      r3, r30, 0x91C
	  stfs      f1, 0x90C(r30)
	  addi      r5, r5, 0x3430
	  addi      r6, r31, 0x428
	  stfs      f0, 0x914(r30)
	  stfs      f1, 0x918(r30)
	  bl        0x1395F8
	  lis       r3, 0x804B
	  lis       r5, 0x6667
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x17E8(r2)
	  stw       r0, 0x91C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x944
	  stfs      f0, 0x934(r30)
	  addi      r5, r5, 0x3939
	  lfs       f0, -0x17EC(r2)
	  addi      r6, r31, 0x3C4
	  stfs      f1, 0x93C(r30)
	  stfs      f0, 0x940(r30)
	  bl        0x1395BC
	  lis       r3, 0x804B
	  lis       r5, 0x6677
	  subi      r0, r3, 0x5370
	  li        r7, 0
	  stw       r0, 0x944(r30)
	  li        r0, 0x3
	  mr        r4, r30
	  addi      r3, r30, 0x96C
	  stw       r7, 0x95C(r30)
	  addi      r5, r5, 0x3030
	  addi      r6, r31, 0x438
	  stw       r7, 0x964(r30)
	  stw       r0, 0x968(r30)
	  bl        0x139584
	  lis       r3, 0x804B
	  lis       r5, 0x6677
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1874(r2)
	  stw       r0, 0x96C(r30)
	  mr        r4, r30
	  lfs       f1, -0x17E4(r2)
	  addi      r3, r30, 0x994
	  stfs      f0, 0x984(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x1854(r2)
	  addi      r6, r31, 0x444
	  stfs      f1, 0x98C(r30)
	  stfs      f0, 0x990(r30)
	  bl        0x139548
	  lis       r3, 0x804B
	  lis       r5, 0x6677
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1874(r2)
	  stw       r0, 0x994(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x9BC
	  stfs      f0, 0x9AC(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x1854(r2)
	  addi      r6, r31, 0x454
	  stfs      f1, 0x9B4(r30)
	  stfs      f0, 0x9B8(r30)
	  bl        0x13950C
	  lis       r3, 0x804B
	  lis       r5, 0x6677
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x184C(r2)
	  stw       r0, 0x9BC(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0x9E4
	  stfs      f0, 0x9D4(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x464
	  stfs      f1, 0x9DC(r30)
	  stfs      f0, 0x9E0(r30)
	  bl        0x1394D0
	  lis       r3, 0x804B
	  lis       r5, 0x6677
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1814(r2)
	  stw       r0, 0x9E4(r30)
	  mr        r4, r30
	  lfs       f1, -0x17E4(r2)
	  addi      r3, r30, 0xA0C
	  stfs      f0, 0x9FC(r30)
	  addi      r5, r5, 0x3131
	  lfs       f0, -0x1854(r2)
	  addi      r6, r31, 0x470
	  stfs      f1, 0xA04(r30)
	  stfs      f0, 0xA08(r30)
	  bl        0x139494
	  lis       r3, 0x804B
	  lis       r5, 0x6677
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x17E0(r2)
	  stw       r0, 0xA0C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0xA34
	  stfs      f0, 0xA24(r30)
	  addi      r5, r5, 0x3132
	  lfs       f0, -0x1854(r2)
	  addi      r6, r31, 0x480
	  stfs      f1, 0xA2C(r30)
	  stfs      f0, 0xA30(r30)
	  bl        0x139458
	  lis       r3, 0x804B
	  lis       r5, 0x6677
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x17DC(r2)
	  stw       r0, 0xA34(r30)
	  mr        r4, r30
	  lfs       f1, -0x1888(r2)
	  addi      r3, r30, 0xA5C
	  stfs      f0, 0xA4C(r30)
	  addi      r5, r5, 0x3939
	  lfs       f0, -0x1848(r2)
	  addi      r6, r31, 0x3C4
	  stfs      f1, 0xA54(r30)
	  stfs      f0, 0xA58(r30)
	  bl        0x13941C
	  lis       r3, 0x804B
	  li        r4, 0
	  subi      r3, r3, 0x5370
	  li        r0, 0x2
	  stw       r3, 0xA5C(r30)
	  mr        r3, r30
	  stw       r4, 0xA74(r30)
	  stw       r4, 0xA7C(r30)
	  stw       r0, 0xA80(r30)
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
 * Address:	802DA27C
 * Size:	000060
 */
void Game::BigTreasure::Mgr::createObj(int)
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
	  mulli     r3, r31, 0x594
	  addi      r3, r3, 0x10
	  bl        -0x2B62F4
	  lis       r4, 0x802E
	  lis       r5, 0x802E
	  subi      r4, r4, 0x4404
	  mr        r7, r31
	  subi      r5, r5, 0x5D24
	  li        r6, 0x594
	  bl        -0x2188CC
	  stw       r3, 0x44(r30)
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
 * Address:	802DA2DC
 * Size:	0000BC
 */
void Game::BigTreasure::Obj::~Obj()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  beq-      .loc_0xA0
	  lis       r3, 0x804D
	  addi      r0, r31, 0x584
	  addi      r4, r3, 0x3580
	  stw       r4, 0x0(r31)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x2FC
	  stw       r3, 0x178(r31)
	  lwz       r3, 0x17C(r31)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x17C(r31)
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0x90
	  lis       r3, 0x804B
	  addi      r0, r31, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r31, 0x290
	  stw       r4, 0x0(r31)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r31)
	  lwz       r5, 0x17C(r31)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r31)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0x137220

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x2B62C4

	.loc_0xA0:
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
 * Address:	802DA398
 * Size:	000010
 */
void Game::BigTreasure::Mgr::getEnemy(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x594
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DA3A8
 * Size:	000068
 */
void Game::BigTreasure::Mgr::loadModelData()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1AA2B0
	  li        r5, 0
	  b         .loc_0x40

	.loc_0x20:
	  lwz       r3, 0x80(r4)
	  rlwinm    r0,r5,2,14,29
	  addi      r5, r5, 0x1
	  lwzx      r3, r3, r0
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,20,15
	  ori       r0, r0, 0x2000
	  stw       r0, 0xC(r3)

	.loc_0x40:
	  lwz       r4, 0x1C(r31)
	  rlwinm    r0,r5,0,16,31
	  lhz       r3, 0x7C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x20
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DA410
 * Size:	00007C
 */
void Game::BigTreasure::Mgr::createModel()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x14
	  bl        -0x2B6588
	  mr.       r31, r3
	  beq-      .loc_0x3C
	  lwz       r4, 0x1C(r30)
	  lis       r5, 0x4
	  lbz       r6, 0x24(r30)
	  bl        0x163D94
	  mr        r31, r3

	.loc_0x3C:
	  cmplwi    r31, 0
	  bne-      .loc_0x60
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x36C8
	  li        r4, 0x78
	  subi      r5, r5, 0x36B4
	  crclr     6, 0x6
	  bl        -0x2AFE2C

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
 * Address:	802DA48C
 * Size:	0000B0
 */
void Game::BigTreasure::Mgr::~Mgr()
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
	  beq-      .loc_0x94
	  lis       r3, 0x804D
	  addi      r3, r3, 0x3198
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0x13707C

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x2B6468

	.loc_0x94:
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
 * Address:	802DA53C
 * Size:	000008
 */
void Game::BigTreasure::Mgr::getEnemyTypeID()
{
	/*
	.loc_0x0:
	  li        r3, 0x49
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DA544
 * Size:	00002C
 */
void Game::BigTreasure::Mgr::doLoadBmd(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x124
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x30
	  bl        -0x26ACC8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802DA570
 * Size:	000050
 */
void Game::BigTreasure::Parms::read(Stream&)
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
	  bl        0x139268
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x13925C
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0x139250
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
 * Address:	802DA5C0
 * Size:	000008
 */
void Game::BigTreasure::Mgr::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x138
	*/
}
