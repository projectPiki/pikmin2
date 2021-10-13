

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
 * Address:	803BCD18
 * Size:	0005EC
 */
void ebi::title::TTitleMgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x24(r1)
	  subi      r0, r4, 0x4AD8
	  li        r4, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lis       r3, 0x8049
	  stw       r29, 0x14(r1)
	  addi      r31, r3, 0x5C58
	  addi      r3, r30, 0x18
	  stw       r0, 0x0(r30)
	  addi      r0, r31, 0x18
	  stw       r4, 0x10(r30)
	  stw       r4, 0xC(r30)
	  stw       r4, 0x8(r30)
	  stw       r4, 0x4(r30)
	  stw       r0, 0x14(r30)
	  bl        -0x39FD9C
	  lis       r3, 0x804E
	  lis       r5, 0x804E
	  addi      r3, r3, 0x7850
	  lis       r4, 0x804E
	  stw       r3, 0x0(r30)
	  addi      r6, r3, 0x10
	  lis       r3, 0x804E
	  addi      r0, r5, 0x79A8
	  stw       r6, 0x18(r30)
	  li        r6, 0
	  lfs       f2, 0x1398(r2)
	  addi      r5, r4, 0x7998
	  stw       r0, 0x30(r30)
	  addi      r0, r3, 0x798C
	  lfs       f1, 0x139C(r2)
	  addi      r3, r30, 0x64
	  stfs      f2, 0x34(r30)
	  li        r4, 0
	  lfs       f0, 0x13A0(r2)
	  stfs      f2, 0x38(r30)
	  stfs      f2, 0x3C(r30)
	  stfs      f1, 0x40(r30)
	  stfs      f2, 0x44(r30)
	  stfs      f0, 0x48(r30)
	  stfs      f2, 0x4C(r30)
	  stfs      f2, 0x50(r30)
	  stfs      f2, 0x54(r30)
	  stw       r6, 0x58(r30)
	  stw       r5, 0x30(r30)
	  stw       r0, 0x64(r30)
	  bl        -0x35576C
	  lis       r4, 0x804E
	  addi      r3, r30, 0x80
	  addi      r0, r4, 0x798C
	  li        r4, 0
	  stw       r0, 0x80(r30)
	  bl        -0x355784
	  li        r0, 0
	  lfs       f1, 0x1398(r2)
	  stw       r0, 0x9C(r30)
	  stw       r0, 0xA0(r30)
	  stw       r0, 0x5C(r30)
	  stw       r0, 0x60(r30)
	  stw       r0, 0x78(r30)
	  stw       r0, 0x7C(r30)
	  stw       r0, 0x94(r30)
	  stw       r0, 0x98(r30)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FB2E8
	  stw       r3, 0x9C(r30)
	  lis       r6, 0x804E
	  lis       r5, 0x804E
	  lis       r4, 0x804E
	  stw       r3, 0xA0(r30)
	  addi      r0, r6, 0x79A8
	  lfs       f2, 0x1398(r2)
	  li        r6, 0
	  stw       r0, 0xA4(r30)
	  addi      r5, r5, 0x797C
	  lfs       f1, 0x139C(r2)
	  addi      r0, r4, 0x798C
	  stfs      f2, 0xA8(r30)
	  addi      r3, r30, 0xD4
	  lfs       f0, 0x13A0(r2)
	  li        r4, 0
	  stfs      f2, 0xAC(r30)
	  stfs      f2, 0xB0(r30)
	  stfs      f1, 0xB4(r30)
	  stfs      f2, 0xB8(r30)
	  stfs      f0, 0xBC(r30)
	  stfs      f2, 0xC0(r30)
	  stfs      f2, 0xC4(r30)
	  stfs      f2, 0xC8(r30)
	  stw       r6, 0xCC(r30)
	  stw       r5, 0xA4(r30)
	  stw       r0, 0xD4(r30)
	  bl        -0x35582C
	  li        r7, 0
	  lis       r5, 0x804E
	  stw       r7, 0xD0(r30)
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  addi      r6, r5, 0x79A8
	  stw       r7, 0xE8(r30)
	  addi      r5, r4, 0x796C
	  lfs       f2, 0x1398(r2)
	  addi      r0, r3, 0x798C
	  stw       r7, 0xEC(r30)
	  addi      r3, r30, 0x120
	  lfs       f1, 0x139C(r2)
	  li        r4, 0
	  stw       r6, 0xF0(r30)
	  lfs       f0, 0x13A0(r2)
	  stfs      f2, 0xF4(r30)
	  stfs      f2, 0xF8(r30)
	  stfs      f2, 0xFC(r30)
	  stfs      f1, 0x100(r30)
	  stfs      f2, 0x104(r30)
	  stfs      f0, 0x108(r30)
	  stfs      f2, 0x10C(r30)
	  stfs      f2, 0x110(r30)
	  stfs      f2, 0x114(r30)
	  stw       r7, 0x118(r30)
	  stw       r5, 0xF0(r30)
	  stw       r0, 0x120(r30)
	  bl        -0x3558A0
	  lis       r4, 0x804E
	  addi      r3, r30, 0x13C
	  addi      r0, r4, 0x798C
	  li        r4, 0
	  stw       r0, 0x13C(r30)
	  bl        -0x3558B8
	  li        r0, 0
	  addi      r3, r30, 0x154
	  stw       r0, 0x11C(r30)
	  stw       r0, 0x134(r30)
	  stw       r0, 0x138(r30)
	  stw       r0, 0x150(r30)
	  bl        0x27174
	  addi      r3, r30, 0xAE4
	  bl        0x2A404
	  addi      r3, r30, 0xCF4
	  bl        0x2B67C
	  li        r0, 0
	  lis       r3, 0x8038
	  stw       r0, 0xF60(r30)
	  subi      r4, r3, 0x2F48
	  addi      r3, r30, 0xF84
	  li        r5, 0
	  stw       r0, 0xF64(r30)
	  li        r6, 0x8
	  li        r7, 0x1F4
	  stw       r0, 0xF68(r30)
	  stw       r0, 0xF6C(r30)
	  stw       r0, 0xF74(r30)
	  stw       r0, 0xF78(r30)
	  stw       r0, 0xF7C(r30)
	  stw       r0, 0xF80(r30)
	  bl        -0x2FB760
	  lis       r3, 0x803E
	  lis       r5, 0x803C
	  addi      r4, r3, 0x396C
	  li        r6, 0x107C
	  addi      r3, r30, 0x1F24
	  subi      r5, r5, 0x1DC4
	  li        r7, 0x2
	  bl        -0x2FB780
	  addi      r3, r30, 0x4020
	  bl        0x680D8
	  addi      r29, r30, 0x4078
	  mr        r3, r29
	  bl        0x5E4C8
	  lis       r3, 0x804E
	  lis       r5, 0x6361
	  addi      r0, r3, 0x78EC
	  li        r6, 0
	  stw       r0, 0x0(r29)
	  addi      r3, r29, 0x1F4
	  addi      r0, r31, 0x24
	  addi      r4, r29, 0x198
	  stw       r3, 0x198(r29)
	  addi      r3, r4, 0xC
	  addi      r5, r5, 0x6D31
	  stw       r6, 0x19C(r29)
	  addi      r6, r31, 0x3C
	  stw       r0, 0x1A0(r29)
	  bl        0x5664C
	  lis       r3, 0x804B
	  lis       r5, 0x6361
	  subi      r0, r3, 0x5344
	  addi      r4, r29, 0x198
	  stw       r0, 0x1A4(r29)
	  addi      r3, r4, 0x34
	  lfs       f0, 0x13A4(r2)
	  addi      r5, r5, 0x6D34
	  lfs       f1, 0x13A8(r2)
	  addi      r6, r2, 0x13B0
	  stfs      f0, 0x1BC(r29)
	  lfs       f0, 0x13AC(r2)
	  stfs      f1, 0x1C4(r29)
	  stfs      f0, 0x1C8(r29)
	  bl        0x56610
	  lis       r3, 0x804B
	  lfs       f2, 0x13B8(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, 0x13A0(r2)
	  stw       r0, 0x1CC(r29)
	  addi      r3, r30, 0x4270
	  lfs       f0, 0x13BC(r2)
	  stfs      f2, 0x1E4(r29)
	  stfs      f1, 0x1EC(r29)
	  stfs      f0, 0x1F0(r29)
	  bl        0x89C
	  addi      r29, r30, 0x4788
	  mr        r3, r29
	  bl        0x758C8
	  lis       r3, 0x804E
	  lis       r5, 0x6667
	  addi      r0, r3, 0x78DC
	  li        r6, 0
	  stw       r0, 0x0(r29)
	  addi      r3, r29, 0x140
	  addi      r0, r31, 0x4C
	  addi      r4, r29, 0x28
	  stw       r3, 0x28(r29)
	  addi      r3, r4, 0xC
	  addi      r5, r5, 0x3130
	  stw       r6, 0x2C(r29)
	  addi      r6, r31, 0x60
	  stw       r0, 0x30(r29)
	  bl        0x5659C
	  lis       r3, 0x804B
	  lis       r5, 0x6667
	  addi      r0, r3, 0x80
	  addi      r4, r29, 0x28
	  stw       r0, 0x34(r29)
	  li        r7, 0x1
	  li        r0, 0
	  addi      r3, r4, 0x28
	  stb       r7, 0x4C(r29)
	  addi      r5, r5, 0x3030
	  addi      r6, r2, 0x13C0
	  stb       r0, 0x4E(r29)
	  stb       r7, 0x4F(r29)
	  bl        0x56564
	  lis       r3, 0x804B
	  lis       r5, 0x6667
	  subi      r0, r3, 0x5344
	  addi      r4, r29, 0x28
	  stw       r0, 0x50(r29)
	  addi      r3, r4, 0x50
	  lfs       f0, 0x13C8(r2)
	  addi      r5, r5, 0x3031
	  lfs       f1, 0x1398(r2)
	  addi      r6, r2, 0x13D0
	  stfs      f0, 0x68(r29)
	  lfs       f0, 0x13CC(r2)
	  stfs      f1, 0x70(r29)
	  stfs      f0, 0x74(r29)
	  bl        0x56528
	  lis       r3, 0x804B
	  lis       r5, 0x6667
	  subi      r0, r3, 0x5344
	  addi      r4, r29, 0x28
	  stw       r0, 0x78(r29)
	  addi      r3, r4, 0x78
	  lfs       f0, 0x13D8(r2)
	  addi      r5, r5, 0x3032
	  lfs       f1, 0x1398(r2)
	  addi      r6, r2, 0x13E0
	  stfs      f0, 0x90(r29)
	  lfs       f0, 0x13DC(r2)
	  stfs      f1, 0x98(r29)
	  stfs      f0, 0x9C(r29)
	  bl        0x564EC
	  lis       r3, 0x804B
	  lis       r5, 0x6667
	  subi      r0, r3, 0x5370
	  addi      r4, r29, 0x28
	  stw       r0, 0xA0(r29)
	  li        r7, 0xFF
	  li        r0, 0
	  addi      r3, r4, 0xA0
	  stw       r7, 0xB8(r29)
	  addi      r5, r5, 0x3033
	  addi      r6, r2, 0x13E8
	  stw       r0, 0xC0(r29)
	  stw       r7, 0xC4(r29)
	  bl        0x564B4
	  lis       r3, 0x804B
	  lis       r5, 0x6667
	  subi      r0, r3, 0x5370
	  addi      r4, r29, 0x28
	  stw       r0, 0xC8(r29)
	  li        r7, 0xFF
	  li        r0, 0
	  addi      r3, r4, 0xC8
	  stw       r7, 0xE0(r29)
	  addi      r5, r5, 0x3034
	  addi      r6, r2, 0x13F0
	  stw       r0, 0xE8(r29)
	  stw       r7, 0xEC(r29)
	  bl        0x5647C
	  lis       r3, 0x804B
	  lis       r5, 0x6667
	  subi      r0, r3, 0x5370
	  addi      r4, r29, 0x28
	  stw       r0, 0xF0(r29)
	  li        r7, 0xFF
	  li        r0, 0
	  addi      r3, r4, 0xF0
	  stw       r7, 0x108(r29)
	  addi      r5, r5, 0x3035
	  addi      r6, r2, 0x13F8
	  stw       r0, 0x110(r29)
	  stw       r7, 0x114(r29)
	  bl        0x56444
	  lis       r3, 0x804B
	  li        r5, 0xFF
	  subi      r3, r3, 0x5370
	  li        r0, 0
	  stw       r3, 0x118(r29)
	  addi      r3, r30, 0x48D4
	  li        r4, 0x1
	  stw       r5, 0x130(r29)
	  stw       r0, 0x138(r29)
	  stw       r5, 0x13C(r29)
	  bl        .loc_0x5EC
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0xF54(r30)
	  lfs       f1, 0x1398(r2)
	  stw       r0, 0xF58(r30)
	  stw       r3, 0xF5C(r30)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FB71C
	  stw       r3, 0xF60(r30)
	  lfs       f1, 0x1398(r2)
	  stw       r3, 0xF64(r30)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FB738
	  stw       r3, 0xF68(r30)
	  li        r0, 0
	  lfs       f1, 0x1398(r2)
	  stw       r3, 0xF6C(r30)
	  stb       r0, 0xF70(r30)
	  stb       r0, 0xF71(r30)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FB760
	  stw       r3, 0xF74(r30)
	  lfs       f1, 0x1398(r2)
	  stw       r3, 0xF78(r30)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FB77C
	  stw       r3, 0xF7C(r30)
	  li        r0, 0
	  stw       r3, 0xF80(r30)
	  mr        r3, r30
	  stw       r0, 0x401C(r30)
	  stw       r0, 0x48CC(r30)
	  stw       r0, 0x48CC(r30)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x5EC:
	*/
}

/*
 * --INFO--
 * Address:	803BD304
 * Size:	000458
 */
void ebi::title::TTitleParameters::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8049
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x5C58
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x2B4
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x7470
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x70
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3034
	  addi      r6, r31, 0x84
	  bl        0x56300
	  lis       r3, 0x804B
	  lis       r5, 0x7470
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1400(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, 0x1404(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3035
	  lfs       f0, 0x13D8(r2)
	  addi      r6, r31, 0x94
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x562C4
	  lis       r3, 0x804B
	  lis       r5, 0x7470
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1408(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, 0x1404(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3036
	  lfs       f0, 0x13D8(r2)
	  addi      r6, r31, 0xA4
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x56288
	  lis       r3, 0x804B
	  lis       r5, 0x7470
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x140C(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, 0x1404(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3037
	  lfs       f0, 0x13D8(r2)
	  addi      r6, r31, 0xB4
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x5624C
	  lis       r3, 0x804B
	  lis       r5, 0x7470
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1410(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, 0x1404(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3038
	  lfs       f0, 0x13D8(r2)
	  addi      r6, r31, 0xC4
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x56210
	  lis       r3, 0x804B
	  lis       r5, 0x7470
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1398(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, 0x1414(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x3039
	  lfs       f0, 0x1418(r2)
	  addi      r6, r31, 0xDC
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x561D4
	  lis       r3, 0x804B
	  lis       r5, 0x7470
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1398(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, 0x141C(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, 0x1420(r2)
	  addi      r6, r31, 0xF4
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x56198
	  lis       r3, 0x804B
	  lis       r5, 0x7470
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1424(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, 0x1398(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3131
	  lfs       f0, 0x1428(r2)
	  addi      r6, r31, 0x10C
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x5615C
	  lis       r3, 0x804B
	  lis       r5, 0x7470
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x142C(r2)
	  stw       r0, 0x124(r30)
	  mr        r4, r30
	  lfs       f1, 0x1398(r2)
	  addi      r3, r30, 0x14C
	  stfs      f0, 0x13C(r30)
	  addi      r5, r5, 0x3133
	  lfs       f0, 0x1428(r2)
	  addi      r6, r31, 0x13C
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
	  bl        0x56120
	  lis       r3, 0x804B
	  lis       r5, 0x7470
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1430(r2)
	  stw       r0, 0x14C(r30)
	  mr        r4, r30
	  lfs       f1, 0x1398(r2)
	  addi      r3, r30, 0x174
	  stfs      f0, 0x164(r30)
	  addi      r5, r5, 0x3530
	  lfs       f0, 0x13C8(r2)
	  addi      r6, r31, 0x150
	  stfs      f1, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  bl        0x560E4
	  lis       r3, 0x804B
	  lis       r5, 0x7470
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1434(r2)
	  stw       r0, 0x174(r30)
	  mr        r4, r30
	  lfs       f1, 0x1398(r2)
	  addi      r3, r30, 0x19C
	  stfs      f0, 0x18C(r30)
	  addi      r5, r5, 0x3135
	  lfs       f0, 0x13C8(r2)
	  addi      r6, r31, 0x164
	  stfs      f1, 0x194(r30)
	  stfs      f0, 0x198(r30)
	  bl        0x560A8
	  lis       r3, 0x804B
	  lis       r5, 0x7470
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1438(r2)
	  stw       r0, 0x19C(r30)
	  mr        r4, r30
	  lfs       f1, 0x1398(r2)
	  addi      r3, r30, 0x1C4
	  stfs      f0, 0x1B4(r30)
	  addi      r5, r5, 0x3136
	  lfs       f0, 0x143C(r2)
	  addi      r6, r31, 0x178
	  stfs      f1, 0x1BC(r30)
	  stfs      f0, 0x1C0(r30)
	  bl        0x5606C
	  lis       r3, 0x804B
	  lis       r5, 0x7470
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1438(r2)
	  stw       r0, 0x1C4(r30)
	  mr        r4, r30
	  lfs       f1, 0x1398(r2)
	  addi      r3, r30, 0x1EC
	  stfs      f0, 0x1DC(r30)
	  addi      r5, r5, 0x3137
	  lfs       f0, 0x143C(r2)
	  addi      r6, r31, 0x18C
	  stfs      f1, 0x1E4(r30)
	  stfs      f0, 0x1E8(r30)
	  bl        0x56030
	  lis       r3, 0x804B
	  lis       r5, 0x7470
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1440(r2)
	  stw       r0, 0x1EC(r30)
	  mr        r4, r30
	  lfs       f1, 0x1398(r2)
	  addi      r3, r30, 0x214
	  stfs      f0, 0x204(r30)
	  addi      r5, r5, 0x3139
	  lfs       f0, 0x143C(r2)
	  addi      r6, r31, 0x1A0
	  stfs      f1, 0x20C(r30)
	  stfs      f0, 0x210(r30)
	  bl        0x55FF4
	  lis       r3, 0x804B
	  lis       r5, 0x7470
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1438(r2)
	  stw       r0, 0x214(r30)
	  mr        r4, r30
	  lfs       f1, 0x1398(r2)
	  addi      r3, r30, 0x23C
	  stfs      f0, 0x22C(r30)
	  addi      r5, r5, 0x3230
	  lfs       f0, 0x143C(r2)
	  addi      r6, r31, 0x1B0
	  stfs      f1, 0x234(r30)
	  stfs      f0, 0x238(r30)
	  bl        0x55FB8
	  lis       r3, 0x804B
	  lis       r5, 0x7470
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1440(r2)
	  stw       r0, 0x23C(r30)
	  mr        r4, r30
	  lfs       f1, 0x1398(r2)
	  addi      r3, r30, 0x264
	  stfs      f0, 0x254(r30)
	  addi      r5, r5, 0x3231
	  lfs       f0, 0x143C(r2)
	  addi      r6, r31, 0x1C0
	  stfs      f1, 0x25C(r30)
	  stfs      f0, 0x260(r30)
	  bl        0x55F7C
	  lis       r3, 0x804B
	  lis       r5, 0x7470
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1444(r2)
	  stw       r0, 0x264(r30)
	  mr        r4, r30
	  lfs       f1, 0x1398(r2)
	  addi      r3, r30, 0x28C
	  stfs      f0, 0x27C(r30)
	  addi      r5, r5, 0x3232
	  lfs       f0, 0x143C(r2)
	  addi      r6, r31, 0x1D8
	  stfs      f1, 0x284(r30)
	  stfs      f0, 0x288(r30)
	  bl        0x55F40
	  lis       r3, 0x804B
	  lfs       f2, 0x1448(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, 0x1398(r2)
	  stw       r0, 0x28C(r30)
	  mr        r3, r30
	  lfs       f0, 0x143C(r2)
	  stfs      f2, 0x2A4(r30)
	  stfs      f1, 0x2AC(r30)
	  stfs      f0, 0x2B0(r30)
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
 * Address:	803BD75C
 * Size:	000070
 */
void ebi::title::TTitleFogMgr::__dt(void)
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
	  lis       r4, 0x804E
	  addi      r0, r4, 0x78DC
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804E
	  li        r4, 0
	  addi      r0, r5, 0x78CC
	  stw       r0, 0x0(r30)
	  bl        0x53DEC

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x3996F8

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
 * Address:	803BD7CC
 * Size:	000060
 */
void FogMgr::~FogMgr()
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
	  addi      r0, r5, 0x78CC
	  stw       r0, 0x0(r30)
	  bl        0x53D8C
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x399758

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
 * Address:	803BD82C
 * Size:	0000E4
 */
void ebi::title::TTitleLightMgr::__dt(void)
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
	  beq-      .loc_0xC8
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xA8
	  addi      r0, r3, 0x79E4
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x4C
	  lis       r4, 0x804F
	  addi      r3, r30, 0xA8
	  subi      r0, r4, 0x414C
	  li        r4, 0
	  stw       r0, 0xA8(r30)
	  bl        0x53D14

	.loc_0x4C:
	  addic.    r0, r30, 0x50
	  beq-      .loc_0x6C
	  lis       r4, 0x804F
	  addi      r3, r30, 0x50
	  subi      r0, r4, 0x414C
	  li        r4, 0
	  stw       r0, 0x50(r30)
	  bl        0x53CF4

	.loc_0x6C:
	  cmplwi    r30, 0
	  beq-      .loc_0xB8
	  lis       r4, 0x804F
	  addi      r3, r30, 0x34
	  subi      r0, r4, 0x416C
	  li        r4, -0x1
	  stw       r0, 0x0(r30)
	  bl        0x53CD4
	  addic.    r0, r30, 0x18
	  beq-      .loc_0xAC
	  lis       r4, 0x804B
	  addi      r3, r30, 0x18
	  subi      r0, r4, 0x3BA0
	  li        r4, 0
	  stw       r0, 0x18(r30)
	  bl        0x53CB4

	.loc_0xAC:
	  mr        r3, r30
	  li        r4, 0
	  bl        0x53CA8

	.loc_0xB8:
	  extsh.    r0, r31
	  ble-      .loc_0xC8
	  mr        r3, r30
	  bl        -0x39983C

	.loc_0xC8:
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
 * Address:	803BD910
 * Size:	0000D8
 */
void ebi::title::TTitleLightMgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0x5C58
	  addi      r4, r31, 0x1F4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  bl        0x6E158
	  li        r0, 0xFF
	  lis       r3, 0x804E
	  stb       r0, 0x10(r1)
	  addi      r8, r3, 0x79E4
	  addi      r3, r30, 0x50
	  addi      r4, r31, 0x200
	  stb       r0, 0x11(r1)
	  addi      r7, r1, 0x14
	  li        r5, 0x1
	  li        r6, 0x2
	  stb       r0, 0x12(r1)
	  stb       r0, 0x13(r1)
	  stw       r8, 0x0(r30)
	  lwz       r0, 0x10(r1)
	  stw       r0, 0x14(r1)
	  bl        0x6DAF8
	  li        r0, 0xFF
	  addi      r3, r30, 0xA8
	  stb       r0, 0x8(r1)
	  addi      r4, r31, 0x210
	  addi      r7, r1, 0xC
	  li        r5, 0x80
	  stb       r0, 0x9(r1)
	  li        r6, 0x4
	  stb       r0, 0xA(r1)
	  stb       r0, 0xB(r1)
	  lwz       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        0x6DAC4
	  addi      r3, r30, 0x100
	  bl        .loc_0xD8
	  mr        r3, r30
	  addi      r4, r30, 0x50
	  bl        0x6E1A8
	  mr        r3, r30
	  addi      r4, r30, 0xA8
	  bl        0x6E19C
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xD8:
	*/
}

/*
 * --INFO--
 * Address:	803BD9E8
 * Size:	00014C
 */
void ebi::title::TTitleLightSetting::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x746C
	  stw       r0, 0x14(r1)
	  addi      r5, r5, 0x3030
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r0, r30, 0xAC
	  lis       r3, 0x8049
	  stw       r0, 0x0(r30)
	  addi      r31, r3, 0x5C58
	  li        r0, 0
	  mr        r4, r30
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x224
	  addi      r3, r30, 0xC
	  addi      r6, r31, 0x230
	  stw       r0, 0x8(r30)
	  bl        0x55C24
	  lis       r3, 0x804B
	  lis       r5, 0x746C
	  subi      r0, r3, 0x5370
	  li        r7, 0
	  stw       r0, 0xC(r30)
	  li        r0, 0xFF
	  mr        r4, r30
	  addi      r3, r30, 0x34
	  stw       r7, 0x24(r30)
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0x240
	  stw       r7, 0x2C(r30)
	  stw       r0, 0x30(r30)
	  bl        0x55BEC
	  lis       r3, 0x804B
	  lis       r5, 0x746C
	  subi      r0, r3, 0x5370
	  li        r7, 0
	  stw       r0, 0x34(r30)
	  li        r0, 0xFF
	  mr        r4, r30
	  addi      r3, r30, 0x5C
	  stw       r7, 0x4C(r30)
	  addi      r5, r5, 0x3032
	  addi      r6, r31, 0x250
	  stw       r7, 0x54(r30)
	  stw       r0, 0x58(r30)
	  bl        0x55BB4
	  lis       r3, 0x804B
	  lis       r5, 0x746C
	  subi      r0, r3, 0x5370
	  li        r7, 0
	  stw       r0, 0x5C(r30)
	  li        r0, 0xFF
	  mr        r4, r30
	  addi      r3, r30, 0x84
	  stw       r7, 0x74(r30)
	  addi      r5, r5, 0x3033
	  addi      r6, r31, 0x260
	  stw       r7, 0x7C(r30)
	  stw       r0, 0x80(r30)
	  bl        0x55B7C
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r3, r3, 0x5370
	  li        r0, 0xFF
	  stw       r3, 0x84(r30)
	  addi      r3, r30, 0xB0
	  li        r4, 0x1
	  stw       r5, 0x9C(r30)
	  stw       r5, 0xA4(r30)
	  stw       r0, 0xA8(r30)
	  bl        0x254
	  addi      r3, r30, 0x2C8
	  li        r4, 0x1
	  bl        .loc_0x14C
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x14C:
	*/
}

/*
 * --INFO--
 * Address:	803BDB34
 * Size:	000228
 */
void ebi::title::TTitleLightSetting::TSpecParms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8049
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x5C58
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x14C
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x7370
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x270
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3034
	  addi      r6, r31, 0x27C
	  bl        0x55AD0
	  lis       r3, 0x804B
	  lis       r5, 0x7370
	  subi      r0, r3, 0x5370
	  li        r7, 0xFF
	  stw       r0, 0xC(r30)
	  li        r0, 0
	  mr        r4, r30
	  addi      r3, r30, 0x34
	  stw       r7, 0x24(r30)
	  addi      r5, r5, 0x3035
	  addi      r6, r31, 0x288
	  stw       r0, 0x2C(r30)
	  stw       r7, 0x30(r30)
	  bl        0x55A98
	  lis       r3, 0x804B
	  lis       r5, 0x7370
	  subi      r0, r3, 0x5370
	  li        r7, 0xFF
	  stw       r0, 0x34(r30)
	  li        r0, 0
	  mr        r4, r30
	  addi      r3, r30, 0x5C
	  stw       r7, 0x4C(r30)
	  addi      r5, r5, 0x3036
	  addi      r6, r31, 0x294
	  stw       r0, 0x54(r30)
	  stw       r7, 0x58(r30)
	  bl        0x55A60
	  lis       r3, 0x804B
	  lis       r5, 0x7370
	  subi      r0, r3, 0x5370
	  li        r7, 0xFF
	  stw       r0, 0x5C(r30)
	  li        r0, 0
	  mr        r4, r30
	  addi      r3, r30, 0x84
	  stw       r7, 0x74(r30)
	  addi      r5, r5, 0x3037
	  addi      r6, r31, 0x2A0
	  stw       r0, 0x7C(r30)
	  stw       r7, 0x80(r30)
	  bl        0x55A28
	  lis       r3, 0x804B
	  lis       r5, 0x7370
	  subi      r0, r3, 0x5370
	  li        r7, 0xFF
	  stw       r0, 0x84(r30)
	  li        r0, 0
	  mr        r4, r30
	  addi      r3, r30, 0xAC
	  stw       r7, 0x9C(r30)
	  addi      r5, r5, 0x3533
	  addi      r6, r2, 0x144C
	  stw       r0, 0xA4(r30)
	  stw       r7, 0xA8(r30)
	  bl        0x559F0
	  lis       r3, 0x804B
	  lis       r5, 0x7370
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1398(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, 0x139C(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x3534
	  lfs       f0, 0x13A0(r2)
	  addi      r6, r2, 0x1454
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x559B4
	  lis       r3, 0x804B
	  lis       r5, 0x7370
	  subi      r0, r3, 0x5344
	  lfs       f1, 0x139C(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f0, 0x13A0(r2)
	  addi      r3, r30, 0xFC
	  stfs      f1, 0xEC(r30)
	  addi      r5, r5, 0x3535
	  addi      r6, r2, 0x145C
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x5597C
	  lis       r3, 0x804B
	  lis       r5, 0x7370
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1398(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, 0x139C(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3536
	  lfs       f0, 0x13A0(r2)
	  addi      r6, r2, 0x1464
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x55940
	  lis       r3, 0x804B
	  lfs       f2, 0x146C(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, 0x1398(r2)
	  stw       r0, 0x124(r30)
	  mr        r3, r30
	  lfs       f0, 0x1470(r2)
	  stfs      f2, 0x13C(r30)
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
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
 * Address:	803BDD5C
 * Size:	000350
 */
void ebi::title::TTitleLightSetting::TMainParms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8049
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x5C58
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x214
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x746C
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x2AC
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3034
	  addi      r6, r31, 0x27C
	  bl        0x558A8
	  lis       r3, 0x804B
	  lis       r5, 0x746C
	  subi      r0, r3, 0x5370
	  li        r7, 0xFF
	  stw       r0, 0xC(r30)
	  li        r0, 0
	  mr        r4, r30
	  addi      r3, r30, 0x34
	  stw       r7, 0x24(r30)
	  addi      r5, r5, 0x3035
	  addi      r6, r31, 0x288
	  stw       r0, 0x2C(r30)
	  stw       r7, 0x30(r30)
	  bl        0x55870
	  lis       r3, 0x804B
	  lis       r5, 0x746C
	  subi      r0, r3, 0x5370
	  li        r7, 0xFF
	  stw       r0, 0x34(r30)
	  li        r0, 0
	  mr        r4, r30
	  addi      r3, r30, 0x5C
	  stw       r7, 0x4C(r30)
	  addi      r5, r5, 0x3036
	  addi      r6, r31, 0x294
	  stw       r0, 0x54(r30)
	  stw       r7, 0x58(r30)
	  bl        0x55838
	  lis       r3, 0x804B
	  lis       r5, 0x746C
	  subi      r0, r3, 0x5370
	  li        r7, 0xFF
	  stw       r0, 0x5C(r30)
	  li        r0, 0
	  mr        r4, r30
	  addi      r3, r30, 0x84
	  stw       r7, 0x74(r30)
	  addi      r5, r5, 0x3037
	  addi      r6, r31, 0x2A0
	  stw       r0, 0x7C(r30)
	  stw       r7, 0x80(r30)
	  bl        0x55800
	  lis       r3, 0x804B
	  lis       r5, 0x746C
	  subi      r0, r3, 0x5370
	  li        r7, 0xFF
	  stw       r0, 0x84(r30)
	  li        r0, 0
	  mr        r4, r30
	  addi      r3, r30, 0xAC
	  stw       r7, 0x9C(r30)
	  addi      r5, r5, 0x3530
	  addi      r6, r2, 0x1474
	  stw       r0, 0xA4(r30)
	  stw       r7, 0xA8(r30)
	  bl        0x557C8
	  lis       r3, 0x804B
	  lis       r5, 0x746C
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1398(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, 0x147C(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x3531
	  lfs       f0, 0x13AC(r2)
	  addi      r6, r2, 0x1480
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x5578C
	  lis       r3, 0x804B
	  lis       r5, 0x746C
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1428(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, 0x147C(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3532
	  lfs       f0, 0x1488(r2)
	  addi      r6, r2, 0x148C
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x55750
	  lis       r3, 0x804B
	  lis       r5, 0x746C
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1398(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, 0x147C(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3533
	  lfs       f0, 0x13AC(r2)
	  addi      r6, r2, 0x144C
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x55714
	  lis       r3, 0x804B
	  lis       r5, 0x746C
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1398(r2)
	  stw       r0, 0x124(r30)
	  mr        r4, r30
	  lfs       f1, 0x139C(r2)
	  addi      r3, r30, 0x14C
	  stfs      f0, 0x13C(r30)
	  addi      r5, r5, 0x3534
	  lfs       f0, 0x13A0(r2)
	  addi      r6, r2, 0x1454
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
	  bl        0x556D8
	  lis       r3, 0x804B
	  lis       r5, 0x746C
	  subi      r0, r3, 0x5344
	  lfs       f1, 0x139C(r2)
	  stw       r0, 0x14C(r30)
	  mr        r4, r30
	  lfs       f0, 0x13A0(r2)
	  addi      r3, r30, 0x174
	  stfs      f1, 0x164(r30)
	  addi      r5, r5, 0x3535
	  addi      r6, r2, 0x145C
	  stfs      f1, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  bl        0x556A0
	  lis       r3, 0x804B
	  lis       r5, 0x746C
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x1398(r2)
	  stw       r0, 0x174(r30)
	  mr        r4, r30
	  lfs       f1, 0x139C(r2)
	  addi      r3, r30, 0x19C
	  stfs      f0, 0x18C(r30)
	  addi      r5, r5, 0x3536
	  lfs       f0, 0x13A0(r2)
	  addi      r6, r31, 0x2B8
	  stfs      f1, 0x194(r30)
	  stfs      f0, 0x198(r30)
	  bl        0x55664
	  lis       r3, 0x804B
	  lis       r5, 0x746C
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x13AC(r2)
	  stw       r0, 0x19C(r30)
	  mr        r4, r30
	  lfs       f1, 0x13A0(r2)
	  addi      r3, r30, 0x1C4
	  stfs      f0, 0x1B4(r30)
	  addi      r5, r5, 0x3537
	  lfs       f0, 0x1488(r2)
	  addi      r6, r31, 0x2C8
	  stfs      f1, 0x1BC(r30)
	  stfs      f0, 0x1C0(r30)
	  bl        0x55628
	  lis       r3, 0x804B
	  lis       r5, 0x746C
	  subi      r0, r3, 0x5344
	  lfs       f1, 0x13A0(r2)
	  stw       r0, 0x1C4(r30)
	  mr        r4, r30
	  lfs       f0, 0x1398(r2)
	  addi      r3, r30, 0x1EC
	  stfs      f1, 0x1DC(r30)
	  addi      r5, r5, 0x3538
	  addi      r6, r31, 0x2D8
	  stfs      f0, 0x1E4(r30)
	  stfs      f1, 0x1E8(r30)
	  bl        0x555F0
	  lis       r3, 0x804B
	  lfs       f2, 0x1494(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, 0x13A0(r2)
	  stw       r0, 0x1EC(r30)
	  mr        r3, r30
	  lfs       f0, 0x13BC(r2)
	  stfs      f2, 0x204(r30)
	  stfs      f1, 0x20C(r30)
	  stfs      f0, 0x210(r30)
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
 * Address:	803BE0AC
 * Size:	000060
 */
void LightObj::~LightObj()
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
	  subi      r0, r5, 0x414C
	  stw       r0, 0x0(r30)
	  bl        0x534AC
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x39A038

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
 * Address:	803BE10C
 * Size:	0000D0
 */
void ebi::title::TTitleCameraMgr::__dt(void)
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
	  beq-      .loc_0xB4
	  lis       r4, 0x804E
	  addi      r0, r4, 0x78EC
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804F
	  subi      r0, r4, 0x4860
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804F
	  subi      r0, r4, 0x47E0
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804F
	  subi      r0, r4, 0x4764
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE94
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE4C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE20
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r31)
	  bl        0x533DC

	.loc_0xA4:
	  extsh.    r0, r30
	  ble-      .loc_0xB4
	  mr        r3, r31
	  bl        -0x39A108

	.loc_0xB4:
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
 * Address:	803BE1DC
 * Size:	000060
 */
void Viewport::~Viewport()
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
	  addi      r0, r5, 0x78BC
	  stw       r0, 0x0(r30)
	  bl        0x5337C
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x39A168

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
 * Address:	803BE23C
 * Size:	000060
 */
void ebi::title::TCoordMgr::__dt(void)
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
	  addi      r0, r5, 0x78AC
	  stw       r0, 0x0(r30)
	  bl        0x5331C
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x39A1C8

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
 * Address:	803BE29C
 * Size:	000060
 */
void ebi::title::Chappy::TMgr::__dt(void)
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
	  addi      r0, r5, 0x789C
	  stw       r0, 0x0(r30)
	  bl        0x532BC
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x39A228

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
 * Address:	803BE2FC
 * Size:	000060
 */
void ebi::title::Kogane::TMgr::__dt(void)
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
	  addi      r0, r5, 0x788C
	  stw       r0, 0x0(r30)
	  bl        0x5325C
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x39A288

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
 * Address:	803BE35C
 * Size:	000084
 */
void ebi::title::Pikmin::TMgr::__dt(void)
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
	  beq-      .loc_0x68
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x2B0
	  addi      r0, r3, 0x787C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x4C
	  lis       r4, 0x804E
	  addi      r3, r30, 0x2B0
	  addi      r0, r4, 0x786C
	  li        r4, 0
	  stw       r0, 0x2B0(r30)
	  bl        0x531E4

	.loc_0x4C:
	  mr        r3, r30
	  li        r4, 0
	  bl        0x531D8
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x39A30C

	.loc_0x68:
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
 * Size:	000074
 */
void ebi::title::TBlackPlane::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void ebi::title::TBGEnemyBase::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void ebi::title::TMapBase::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BE3E0
 * Size:	000048
 */
void J3DFrameCtrl::~J3DFrameCtrl()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804E
	  extsh.    r0, r4
	  addi      r0, r5, 0x798C
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x39A358

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
 * Address:	803BE428
 * Size:	00034C
 */
void ebi::title::TTitleMgr::__dt(void)
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
	  beq-      .loc_0x330
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x4788
	  addi      r3, r3, 0x7850
	  li        r0, 0
	  stw       r3, 0x0(r30)
	  addi      r3, r3, 0x10
	  stw       r3, 0x18(r30)
	  stw       r0, -0x65D4(r13)
	  stw       r0, -0x65D8(r13)
	  beq-      .loc_0x74
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x4788
	  addi      r0, r3, 0x78DC
	  stw       r0, 0x4788(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4788
	  addi      r0, r4, 0x78CC
	  li        r4, 0
	  stw       r0, 0x4788(r30)
	  bl        0x530F0

	.loc_0x74:
	  addic.    r0, r30, 0x4270
	  beq-      .loc_0x108
	  lis       r4, 0x804E
	  addic.    r3, r30, 0x4318
	  addi      r0, r4, 0x79E4
	  stw       r0, 0x4270(r30)
	  beq-      .loc_0xA4
	  lis       r4, 0x804F
	  subi      r0, r4, 0x414C
	  stw       r0, 0x4318(r30)
	  li        r4, 0
	  bl        0x530C0

	.loc_0xA4:
	  addic.    r3, r30, 0x42C0
	  beq-      .loc_0xC0
	  lis       r4, 0x804F
	  subi      r0, r4, 0x414C
	  stw       r0, 0x42C0(r30)
	  li        r4, 0
	  bl        0x530A4

	.loc_0xC0:
	  addic.    r0, r30, 0x4270
	  beq-      .loc_0x108
	  lis       r4, 0x804F
	  addi      r3, r30, 0x42A4
	  subi      r0, r4, 0x416C
	  li        r4, -0x1
	  stw       r0, 0x4270(r30)
	  bl        0x53084
	  addic.    r3, r30, 0x4288
	  beq-      .loc_0xFC
	  lis       r4, 0x804B
	  subi      r0, r4, 0x3BA0
	  stw       r0, 0x4288(r30)
	  li        r4, 0
	  bl        0x53068

	.loc_0xFC:
	  addi      r3, r30, 0x4270
	  li        r4, 0
	  bl        0x5305C

	.loc_0x108:
	  addic.    r0, r30, 0x4078
	  beq-      .loc_0x1B4
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x4078
	  addi      r0, r3, 0x78EC
	  stw       r0, 0x4078(r30)
	  beq-      .loc_0x1B4
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x4078
	  subi      r0, r3, 0x4860
	  stw       r0, 0x4078(r30)
	  beq-      .loc_0x1B4
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x4078
	  subi      r0, r3, 0x47E0
	  stw       r0, 0x4078(r30)
	  beq-      .loc_0x1B4
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x4078
	  subi      r0, r3, 0x4764
	  stw       r0, 0x4078(r30)
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4078
	  addi      r0, r3, 0xE94
	  stw       r0, 0x4078(r30)
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4078
	  addi      r0, r3, 0xE4C
	  stw       r0, 0x4078(r30)
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4078
	  addi      r0, r3, 0xE20
	  stw       r0, 0x4078(r30)
	  beq-      .loc_0x1B4
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4078
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4078(r30)
	  bl        0x52FB0

	.loc_0x1B4:
	  addic.    r0, r30, 0x4020
	  beq-      .loc_0x1D4
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4020
	  addi      r0, r4, 0x78BC
	  li        r4, 0
	  stw       r0, 0x4020(r30)
	  bl        0x52F90

	.loc_0x1D4:
	  lis       r4, 0x803C
	  addi      r3, r30, 0x1F24
	  subi      r4, r4, 0x1DC4
	  li        r5, 0x107C
	  li        r6, 0x2
	  bl        -0x2FCE4C
	  addic.    r0, r30, 0xCF4
	  beq-      .loc_0x20C
	  lis       r4, 0x804E
	  addi      r3, r30, 0xCF4
	  addi      r0, r4, 0x789C
	  li        r4, 0
	  stw       r0, 0xCF4(r30)
	  bl        0x52F58

	.loc_0x20C:
	  addic.    r0, r30, 0xAE4
	  beq-      .loc_0x22C
	  lis       r4, 0x804E
	  addi      r3, r30, 0xAE4
	  addi      r0, r4, 0x788C
	  li        r4, 0
	  stw       r0, 0xAE4(r30)
	  bl        0x52F38

	.loc_0x22C:
	  addic.    r0, r30, 0x154
	  beq-      .loc_0x268
	  lis       r4, 0x804E
	  addic.    r3, r30, 0x404
	  addi      r0, r4, 0x787C
	  stw       r0, 0x154(r30)
	  beq-      .loc_0x25C
	  lis       r4, 0x804E
	  addi      r0, r4, 0x786C
	  stw       r0, 0x404(r30)
	  li        r4, 0
	  bl        0x52F08

	.loc_0x25C:
	  addi      r3, r30, 0x154
	  li        r4, 0
	  bl        0x52EFC

	.loc_0x268:
	  addic.    r0, r30, 0xF0
	  beq-      .loc_0x2A4
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x13C
	  addi      r0, r3, 0x796C
	  stw       r0, 0xF0(r30)
	  beq-      .loc_0x290
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x13C(r30)

	.loc_0x290:
	  addic.    r0, r30, 0x120
	  beq-      .loc_0x2A4
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x120(r30)

	.loc_0x2A4:
	  addic.    r0, r30, 0xA4
	  beq-      .loc_0x2CC
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xD4
	  addi      r0, r3, 0x797C
	  stw       r0, 0xA4(r30)
	  beq-      .loc_0x2CC
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0xD4(r30)

	.loc_0x2CC:
	  addic.    r0, r30, 0x30
	  beq-      .loc_0x308
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x80
	  addi      r0, r3, 0x7998
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x2F4
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x80(r30)

	.loc_0x2F4:
	  addic.    r0, r30, 0x64
	  beq-      .loc_0x308
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x64(r30)

	.loc_0x308:
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x3A1704
	  mr        r3, r30
	  li        r4, 0
	  bl        0x52E44
	  extsh.    r0, r31
	  ble-      .loc_0x330
	  mr        r3, r30
	  bl        -0x39A6A0

	.loc_0x330:
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
 * Address:	803BE774
 * Size:	000024
 */
void ebi::title::TTitleMgr::globalInstance(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        .loc_0x24
	  stw       r3, -0x65D8(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x24:
	*/
}

/*
 * --INFO--
 * Address:	803BE798
 * Size:	000048
 */
void ebi::title::TTitleMgr::Instance(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x65D4(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x34
	  li        r3, 0x4B8C
	  bl        -0x39A910
	  mr.       r0, r3
	  beq-      .loc_0x30
	  bl        -0x1AA8
	  mr        r0, r3

	.loc_0x30:
	  stw       r0, -0x65D4(r13)

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  lwz       r3, -0x65D4(r13)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803BE7E0
 * Size:	000050
 */
void ebi::title::TTitleMgr::deleteInstance(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x65D4(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  beq-      .loc_0x30
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30:
	  li        r0, 0
	  stw       r0, -0x65D4(r13)

	.loc_0x38:
	  li        r0, 0
	  stw       r0, -0x65D8(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803BE830
 * Size:	000228
 */
void ebi::title::TTitleMgr::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  li        r5, 0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  stw       r30, 0x38(r1)
	  addi      r30, r4, 0x5C58
	  addi      r4, r30, 0x2E8
	  stw       r29, 0x34(r1)
	  stw       r28, 0x30(r1)
	  lwz       r3, -0x6514(r13)
	  bl        0x64AF8
	  li        r3, 0x24
	  bl        -0x39A9C8
	  mr.       r29, r3
	  beq-      .loc_0x58
	  bl        -0x358ED4
	  mr        r3, r29
	  li        r4, 0x400
	  bl        -0x358E78

	.loc_0x58:
	  stw       r29, 0x48CC(r31)
	  lis       r3, 0x8051
	  subi      r4, r3, 0xDD0
	  li        r3, 0x24
	  lwz       r0, 0x48CC(r31)
	  stw       r0, 0x48(r4)
	  bl        -0x39A9FC
	  mr.       r29, r3
	  beq-      .loc_0x8C
	  bl        -0x358F08
	  mr        r3, r29
	  li        r4, 0x400
	  bl        -0x358EAC

	.loc_0x8C:
	  stw       r29, 0x48D0(r31)
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  li        r0, 0x2
	  lwz       r4, 0x48D0(r31)
	  stw       r4, 0x4C(r3)
	  stw       r0, 0xC(r4)
	  lwz       r3, 0x48CC(r31)
	  bl        -0x358E4C
	  lwz       r3, 0x48D0(r31)
	  bl        -0x358E54
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x2E8
	  bl        0x64A74
	  lfs       f2, 0x1398(r2)
	  addi      r3, r31, 0x4078
	  lfs       f1, 0x13A0(r2)
	  stfs      f2, 0x41EC(r31)
	  lfs       f0, 0x139C(r2)
	  stfs      f1, 0x41F0(r31)
	  stfs      f2, 0x41F4(r31)
	  stfs      f2, 0x4204(r31)
	  stfs      f2, 0x4208(r31)
	  stfs      f0, 0x420C(r31)
	  lfs       f0, 0x41EC(r31)
	  stfs      f0, 0x41F8(r31)
	  lfs       f0, 0x41F0(r31)
	  stfs      f0, 0x41FC(r31)
	  lfs       f0, 0x41F4(r31)
	  stfs      f0, 0x4200(r31)
	  lfs       f0, 0x41FC(r31)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x41FC(r31)
	  lfs       f0, 0x425C(r31)
	  stfs      f0, 0x40A0(r31)
	  bl        0x5CDAC
	  lwz       r3, -0x6514(r13)
	  li        r4, 0x1
	  lwz       r29, 0x24(r3)
	  mr        r3, r29
	  bl        0x66C0C
	  addi      r0, r31, 0x4078
	  addi      r3, r31, 0x4020
	  stw       r0, 0x4064(r31)
	  bl        0x66924
	  bl        0x648B4
	  lhz       r28, 0x6(r3)
	  bl        0x648AC
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lfs       f3, 0x1398(r2)
	  addi      r3, r31, 0x4020
	  stw       r4, 0x1C(r1)
	  addi      r4, r1, 0x8
	  lfd       f2, 0x1498(r2)
	  stw       r0, 0x18(r1)
	  lfd       f0, 0x18(r1)
	  stw       r28, 0x24(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x20(r1)
	  lfd       f0, 0x20(r1)
	  stfs      f3, 0x8(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  bl        0x669BC
	  mr        r3, r29
	  addi      r4, r31, 0x4020
	  bl        0x66BF0
	  mr        r3, r31
	  addi      r4, r31, 0x4270
	  bl        0x52A2C
	  mr        r3, r31
	  addi      r4, r31, 0x4788
	  bl        0x52A20
	  mr        r3, r31
	  addi      r4, r31, 0x1F24
	  bl        0x52A14
	  addi      r0, r30, 0x2F8
	  mr        r3, r31
	  stw       r0, 0x1F38(r31)
	  addi      r4, r31, 0x2FA0
	  bl        0x52A00
	  addi      r0, r30, 0x308
	  mr        r3, r31
	  stw       r0, 0x2FB4(r31)
	  addi      r4, r31, 0x154
	  bl        0x529EC
	  mr        r3, r31
	  addi      r4, r31, 0xAE4
	  bl        0x529E0
	  mr        r3, r31
	  addi      r4, r31, 0xCF4
	  bl        0x529D4
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void ebi::title::TTitleMgr::setDestToPiki((long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void ebi::title::TTitleMgr::setPosToPiki((long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void ebi::title::TTitleMgr::setStartPosToPiki(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BEA58
 * Size:	000050
 */
void ebi::title::TTitleMgr::setLogo(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x154
	  bl        0x25EC0
	  lwz       r3, 0xCF0(r31)
	  bl        0x28D9C
	  lwz       r3, 0xF50(r31)
	  bl        0x2A030
	  addi      r3, r31, 0xF0
	  bl        0x2EC8
	  li        r0, 0x1
	  stw       r0, 0xF58(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001D8
 */
void ebi::title::TTitleMgr::calcBreakupDestination(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000208
 */
void ebi::title::TTitleMgr::calcDestination((long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void ebi::title::TTitleMgr::isAssemble(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BEAA8
 * Size:	000300
 */
void ebi::title::TTitleMgr::loadResource(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0x5C58
	  addi      r4, r31, 0x318
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, -0x6514(r13)
	  bl        0x64884
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x334
	  li        r5, 0
	  bl        0x64874
	  addi      r3, r31, 0x358
	  li        r4, 0x1
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x3A39CC
	  mr.       r30, r3
	  bne-      .loc_0x74
	  addi      r3, r31, 0x378
	  addi      r5, r31, 0x388
	  li        r4, 0x102
	  crclr     6, 0x6
	  bl        -0x3944D8

	.loc_0x74:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x334
	  bl        0x64840
	  mr        r3, r29
	  mr        r4, r30
	  addi      r5, r31, 0x394
	  bl        0x1E88
	  lis       r3, 0x8051
	  addi      r4, r3, 0x41FC
	  lwz       r0, 0x1C8(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0xC8
	  mr        r4, r30
	  addi      r3, r29, 0x1F24
	  addi      r5, r31, 0x3AC
	  bl        0x250D0
	  mr        r4, r30
	  addi      r3, r29, 0x2FA0
	  addi      r5, r31, 0x3C0
	  bl        0x250C0
	  b         .loc_0x140

	.loc_0xC8:
	  lwz       r3, -0x6514(r13)
	  lwz       r0, 0xD4(r3)
	  cmpwi     r0, 0x5
	  beq-      .loc_0xDC
	  b         .loc_0x120

	.loc_0xDC:
	  lwz       r0, 0x228(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0xFC
	  mr        r4, r30
	  addi      r3, r29, 0x1F24
	  addi      r5, r31, 0x3AC
	  bl        0x2508C
	  b         .loc_0x10C

	.loc_0xFC:
	  mr        r4, r30
	  addi      r3, r29, 0x1F24
	  addi      r5, r31, 0x3DC
	  bl        0x25078

	.loc_0x10C:
	  mr        r4, r30
	  addi      r3, r29, 0x2FA0
	  addi      r5, r31, 0x3C0
	  bl        0x25068
	  b         .loc_0x140

	.loc_0x120:
	  mr        r4, r30
	  addi      r3, r29, 0x1F24
	  addi      r5, r31, 0x3AC
	  bl        0x25054
	  mr        r4, r30
	  addi      r3, r29, 0x2FA0
	  addi      r5, r31, 0x3C0
	  bl        0x25044

	.loc_0x140:
	  lwz       r0, 0xF5C(r29)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x1B4
	  bge-      .loc_0x160
	  cmpwi     r0, 0
	  beq-      .loc_0x16C
	  bge-      .loc_0x190
	  b         .loc_0x1F8

	.loc_0x160:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x1F8
	  b         .loc_0x1D8

	.loc_0x16C:
	  mr        r4, r30
	  addi      r3, r29, 0x4270
	  addi      r5, r31, 0x3F0
	  bl        0x3338
	  mr        r4, r30
	  addi      r3, r29, 0x4788
	  addi      r5, r31, 0x410
	  bl        0x2C68C
	  b         .loc_0x1F8

	.loc_0x190:
	  mr        r4, r30
	  addi      r3, r29, 0x4270
	  addi      r5, r31, 0x42C
	  bl        0x3314
	  mr        r4, r30
	  addi      r3, r29, 0x4788
	  addi      r5, r31, 0x44C
	  bl        0x2C668
	  b         .loc_0x1F8

	.loc_0x1B4:
	  mr        r4, r30
	  addi      r3, r29, 0x4270
	  addi      r5, r31, 0x468
	  bl        0x32F0
	  mr        r4, r30
	  addi      r3, r29, 0x4788
	  addi      r5, r31, 0x488
	  bl        0x2C644
	  b         .loc_0x1F8

	.loc_0x1D8:
	  mr        r4, r30
	  addi      r3, r29, 0x4270
	  addi      r5, r31, 0x4A4
	  bl        0x32CC
	  mr        r4, r30
	  addi      r3, r29, 0x4788
	  addi      r5, r31, 0x4C4
	  bl        0x2C620

	.loc_0x1F8:
	  mr        r4, r30
	  addi      r3, r29, 0x154
	  bl        0x25624
	  mr        r4, r30
	  addi      r3, r29, 0xAE4
	  bl        0x287EC
	  mr        r4, r30
	  addi      r3, r29, 0xCF4
	  bl        0x29A68
	  lwz       r0, 0xF5C(r29)
	  addi      r30, r2, 0x14C0
	  cmpwi     r0, 0x2
	  beq-      .loc_0x25C
	  bge-      .loc_0x240
	  cmpwi     r0, 0
	  beq-      .loc_0x24C
	  bge-      .loc_0x254
	  b         .loc_0x268

	.loc_0x240:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x268
	  b         .loc_0x264

	.loc_0x24C:
	  addi      r30, r31, 0x4E0
	  b         .loc_0x268

	.loc_0x254:
	  addi      r30, r31, 0x504
	  b         .loc_0x268

	.loc_0x25C:
	  addi      r30, r31, 0x528
	  b         .loc_0x268

	.loc_0x264:
	  addi      r30, r31, 0x54C

	.loc_0x268:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x334
	  li        r5, 0
	  bl        0x64640
	  mr        r3, r30
	  li        r4, 0x1
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x3A3C00
	  mr.       r30, r3
	  bne-      .loc_0x2A8
	  addi      r3, r31, 0x378
	  addi      r5, r31, 0x388
	  li        r4, 0x156
	  crclr     6, 0x6
	  bl        -0x39470C

	.loc_0x2A8:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x334
	  bl        0x6460C
	  mr        r4, r30
	  addi      r3, r29, 0xF0
	  bl        0x2714
	  mr        r4, r30
	  addi      r3, r29, 0x30
	  bl        0x1F54
	  mr        r4, r30
	  addi      r3, r29, 0xA4
	  bl        0x242C
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x318
	  bl        0x645DC
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
 * Address:	803BEDA8
 * Size:	000040
 */
void ebi::title::TTitleMgr::initAfterLoadRes(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x154
	  bl        0x255E4
	  addi      r3, r31, 0xAE4
	  bl        0x28728
	  addi      r3, r31, 0xCF4
	  bl        0x299A8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803BEDE8
 * Size:	000044
 */
void ebi::title::TTitleMgr::setController((Controller*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0x401C(r3)
	  lwz       r3, 0xCF0(r3)
	  lwz       r4, 0x401C(r31)
	  bl        0x28894
	  lwz       r3, 0xF50(r31)
	  lwz       r4, 0x401C(r31)
	  bl        0x29B1C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void ebi::title::TTitleMgr::setDrawBufferToJ3DSys(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void inField__Q33ebi5title9TTitleMgrFP10Vector2<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BEE2C
 * Size:	000070
 */
void ebi::title::TTitleMgr::inField((ebi::title::TObjBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  lfs       f0, 0x1398(r2)
	  addi      r3, r1, 0x8
	  addi      r4, r31, 0x4
	  stfs      f0, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x4A10(r30)
	  stfs      f0, 0x10(r1)
	  bl        0xB364

	.loc_0x58:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803BEE9C
 * Size:	000008
 */
void ebi::title::TObjBase::isCalc(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void inViewField__Q33ebi5title9TTitleMgrFP10Vector2<float> f(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BEEA4
 * Size:	000080
 */
void ebi::title::TTitleMgr::inViewField((ebi::title::TObjBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x68
	  lfs       f1, 0x24(r31)
	  addi      r3, r1, 0x8
	  lfs       f2, 0x4970(r30)
	  addi      r4, r31, 0x4
	  lfs       f0, 0x4920(r30)
	  stfs      f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  lfs       f2, 0x4948(r30)
	  lfs       f0, 0x48F8(r30)
	  stfs      f0, 0x8(r1)
	  stfs      f2, 0xC(r1)
	  bl        0xB21C

	.loc_0x68:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void isInViewField__Q33ebi5title9TTitleMgrFR10Vector2<float> f(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BEF24
 * Size:	000088
 */
void ebi::title::TTitleMgr::isInViewField((ebi::title::TObjBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C
	  lfs       f1, 0x24(r31)
	  addi      r3, r1, 0x8
	  lfs       f2, 0x4970(r30)
	  addi      r4, r31, 0x4
	  lfs       f0, 0x4920(r30)
	  stfs      f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  lfs       f2, 0x4948(r30)
	  lfs       f0, 0x48F8(r30)
	  stfs      f0, 0x8(r1)
	  stfs      f2, 0xC(r1)
	  bl        0xB0C4
	  b         .loc_0x70

	.loc_0x6C:
	  li        r3, 0

	.loc_0x70:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803BEFAC
 * Size:	000044
 */
void isOutViewField__Q33ebi5title9TTitleMgrFR10Vector2<float> f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  lfs       f2, 0x4970(r3)
	  lfs       f0, 0x4920(r3)
	  stfs      f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  lfs       f2, 0x4948(r3)
	  lfs       f0, 0x48F8(r3)
	  addi      r3, r1, 0x8
	  stfs      f0, 0x8(r1)
	  stfs      f2, 0xC(r1)
	  bl        0xB0E0
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803BEFF0
 * Size:	000088
 */
void ebi::title::TTitleMgr::isOutViewField((ebi::title::TObjBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C
	  lfs       f1, 0x24(r31)
	  addi      r3, r1, 0x8
	  lfs       f2, 0x4970(r30)
	  addi      r4, r31, 0x4
	  lfs       f0, 0x4920(r30)
	  stfs      f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  lfs       f2, 0x4948(r30)
	  lfs       f0, 0x48F8(r30)
	  stfs      f0, 0x8(r1)
	  stfs      f2, 0xC(r1)
	  bl        0xB068
	  b         .loc_0x70

	.loc_0x6C:
	  li        r3, 0x1

	.loc_0x70:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803BF078
 * Size:	000020
 */
void ebi::title::TTitleMgr::getPosOutOfViewField(void)
{
	/*
	.loc_0x0:
	  lfs       f2, 0x1444(r2)
	  lfs       f0, 0x48F8(r4)
	  lfs       f1, 0x4948(r4)
	  fmuls     f0, f2, f0
	  fmuls     f1, f2, f1
	  stfs      f0, 0x0(r3)
	  stfs      f1, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803BF098
 * Size:	000408
 */
void ebi::title::TTitleMgr::start(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stfd      f30, 0xD0(r1)
	  psq_st    f30,0xD8(r1),0,0
	  stfd      f29, 0xC0(r1)
	  psq_st    f29,0xC8(r1),0,0
	  stfd      f28, 0xB0(r1)
	  psq_st    f28,0xB8(r1),0,0
	  stfd      f27, 0xA0(r1)
	  psq_st    f27,0xA8(r1),0,0
	  stfd      f26, 0x90(r1)
	  psq_st    f26,0x98(r1),0,0
	  stfd      f25, 0x80(r1)
	  psq_st    f25,0x88(r1),0,0
	  stfd      f24, 0x70(r1)
	  psq_st    f24,0x78(r1),0,0
	  stfd      f23, 0x60(r1)
	  psq_st    f23,0x68(r1),0,0
	  stmw      r27, 0x4C(r1)
	  lis       r4, 0x8051
	  mr        r29, r3
	  subi      r3, r4, 0xDD0
	  bl        -0x360D38
	  lwz       r3, 0x48CC(r29)
	  bl        -0x359674
	  lwz       r3, 0x48D0(r29)
	  bl        -0x35967C
	  lis       r3, 0x8050
	  lfd       f31, 0x14B8(r2)
	  lfs       f30, 0x14A0(r2)
	  mr        r30, r29
	  lfs       f29, 0x14A8(r2)
	  addi      r27, r3, 0x71A0
	  lfs       f28, 0x14A4(r2)
	  li        r31, 0
	  lfs       f27, 0x1398(r2)
	  lis       r28, 0x4330
	  lfs       f25, 0x14B0(r2)

	.loc_0xA4:
	  bl        -0x2F5B9C
	  xoris     r0, r3, 0x8000
	  stw       r28, 0x18(r1)
	  lfs       f23, 0x4A10(r29)
	  stw       r0, 0x1C(r1)
	  lfs       f24, 0x49E8(r29)
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f31
	  fdivs     f0, f0, f30
	  fmadds    f26, f29, f0, f28
	  bl        -0x2F5BC4
	  xoris     r0, r3, 0x8000
	  stw       r28, 0x20(r1)
	  fsubs     f0, f23, f24
	  stw       r0, 0x24(r1)
	  fcmpo     cr0, f26, f27
	  lfd       f1, 0x20(r1)
	  fsubs     f1, f1, f31
	  fdivs     f1, f1, f30
	  fmadds    f3, f0, f1, f24
	  bge-      .loc_0x124
	  lfs       f0, 0x14AC(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f26, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x148

	.loc_0x124:
	  lfs       f0, 0x14B0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f26, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x148:
	  lfs       f0, 0x49C0(r29)
	  fcmpo     cr0, f26, f27
	  fmadds    f2, f3, f1, f0
	  bge-      .loc_0x15C
	  fneg      f26, f26

	.loc_0x15C:
	  fmuls     f1, f26, f25
	  addi      r31, r31, 0x1
	  lfs       f0, 0x4998(r29)
	  cmpwi     r31, 0x1F4
	  fctiwz    f1, f1
	  stfd      f1, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r27, r0
	  lfs       f1, 0x4(r3)
	  fmadds    f0, f3, f1, f0
	  stfs      f0, 0xF84(r30)
	  stfs      f2, 0xF88(r30)
	  addi      r30, r30, 0x8
	  blt+      .loc_0xA4
	  addi      r3, r29, 0x154
	  addi      r4, r29, 0xF84
	  bl        0x25430
	  lis       r3, 0x8050
	  lfd       f27, 0x14B8(r2)
	  lfs       f28, 0x14A0(r2)
	  mr        r30, r29
	  lfs       f29, 0x14A8(r2)
	  addi      r28, r3, 0x71A0
	  lfs       f30, 0x14A4(r2)
	  li        r31, 0
	  lfs       f31, 0x1398(r2)
	  lis       r27, 0x4330
	  lfs       f25, 0x14B0(r2)

	.loc_0x1D0:
	  bl        -0x2F5CC8
	  xoris     r0, r3, 0x8000
	  stw       r27, 0x38(r1)
	  lfs       f24, 0x4A10(r29)
	  stw       r0, 0x3C(r1)
	  lfs       f23, 0x49E8(r29)
	  lfd       f0, 0x38(r1)
	  fsubs     f0, f0, f27
	  fdivs     f0, f0, f28
	  fmadds    f26, f29, f0, f30
	  bl        -0x2F5CF0
	  xoris     r0, r3, 0x8000
	  stw       r27, 0x30(r1)
	  fsubs     f0, f24, f23
	  stw       r0, 0x34(r1)
	  fcmpo     cr0, f26, f31
	  lfd       f1, 0x30(r1)
	  fsubs     f1, f1, f27
	  fdivs     f1, f1, f28
	  fmadds    f3, f0, f1, f23
	  bge-      .loc_0x250
	  lfs       f0, 0x14AC(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f26, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x274

	.loc_0x250:
	  lfs       f0, 0x14B0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f26, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x274:
	  lfs       f0, 0x49C0(r29)
	  fcmpo     cr0, f26, f31
	  fmadds    f2, f3, f1, f0
	  bge-      .loc_0x288
	  fneg      f26, f26

	.loc_0x288:
	  fmuls     f1, f26, f25
	  addi      r31, r31, 0x1
	  lfs       f0, 0x4998(r29)
	  cmpwi     r31, 0x1F4
	  fctiwz    f1, f1
	  stfd      f1, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r28, r0
	  lfs       f1, 0x4(r3)
	  fmadds    f0, f3, f1, f0
	  stfs      f0, 0xF84(r30)
	  stfs      f2, 0xF88(r30)
	  addi      r30, r30, 0x8
	  blt+      .loc_0x1D0
	  addi      r3, r29, 0x1F24
	  addi      r4, r29, 0xF84
	  bl        0x247AC
	  addi      r3, r29, 0x154
	  addi      r4, r29, 0xF84
	  bl        0x2545C
	  lwz       r3, 0xCF0(r29)
	  bl        0x2849C
	  lwz       r3, 0xF50(r29)
	  bl        0x29730
	  addi      r3, r29, 0xF0
	  bl        0x23C8
	  addi      r3, r29, 0xF0
	  bl        0x2460
	  addi      r3, r1, 0x8
	  addi      r4, r29, 0xF0
	  bl        0x2600
	  lfs       f1, 0xC(r1)
	  addi      r3, r29, 0x4078
	  lfs       f2, 0x10(r1)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x41EC(r29)
	  stfs      f1, 0x41F0(r29)
	  stfs      f2, 0x41F4(r29)
	  bl        0x2B00
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x1440(r2)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FD884
	  stw       r3, 0xF68(r29)
	  li        r0, 0
	  stw       r3, 0xF6C(r29)
	  stb       r0, 0xF70(r29)
	  stb       r0, 0xF71(r29)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x4B78(r29)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FD8AC
	  stw       r3, 0xF74(r29)
	  stw       r3, 0xF78(r29)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x4B50(r29)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FD8C8
	  stw       r3, 0xF7C(r29)
	  stw       r3, 0xF80(r29)
	  addi      r3, r29, 0x154
	  bl        0x25928
	  addi      r3, r29, 0xF0
	  bl        0x2324
	  addi      r3, r29, 0xA4
	  bl        0x1EC4
	  mr        r3, r29
	  li        r4, 0x1
	  bl        0x820
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  psq_l     f28,0xB8(r1),0,0
	  lfd       f28, 0xB0(r1)
	  psq_l     f27,0xA8(r1),0,0
	  lfd       f27, 0xA0(r1)
	  psq_l     f26,0x98(r1),0,0
	  lfd       f26, 0x90(r1)
	  psq_l     f25,0x88(r1),0,0
	  lfd       f25, 0x80(r1)
	  psq_l     f24,0x78(r1),0,0
	  lfd       f24, 0x70(r1)
	  psq_l     f23,0x68(r1),0,0
	  lfd       f23, 0x60(r1)
	  lmw       r27, 0x4C(r1)
	  lwz       r0, 0xF4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void ebi::title::TTitleMgr::windBlow(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BF4A0
 * Size:	00020C
 */
void ebi::title::TTitleMgr::breakup(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  stw       r0, 0xE4(r1)
	  stfd      f31, 0xD0(r1)
	  psq_st    f31,0xD8(r1),0,0
	  stfd      f30, 0xC0(r1)
	  psq_st    f30,0xC8(r1),0,0
	  stfd      f29, 0xB0(r1)
	  psq_st    f29,0xB8(r1),0,0
	  stfd      f28, 0xA0(r1)
	  psq_st    f28,0xA8(r1),0,0
	  stfd      f27, 0x90(r1)
	  psq_st    f27,0x98(r1),0,0
	  stfd      f26, 0x80(r1)
	  psq_st    f26,0x88(r1),0,0
	  stfd      f25, 0x70(r1)
	  psq_st    f25,0x78(r1),0,0
	  stfd      f24, 0x60(r1)
	  psq_st    f24,0x68(r1),0,0
	  stfd      f23, 0x50(r1)
	  psq_st    f23,0x58(r1),0,0
	  stmw      r27, 0x3C(r1)
	  mr        r29, r3
	  lis       r3, 0x8050
	  lfd       f27, 0x14B8(r2)
	  mr        r30, r29
	  lfs       f28, 0x14A0(r2)
	  addi      r28, r3, 0x71A0
	  lfs       f29, 0x14A8(r2)
	  li        r31, 0
	  lfs       f30, 0x14A4(r2)
	  lis       r27, 0x4330
	  lfs       f31, 0x1398(r2)
	  lfs       f25, 0x14B0(r2)

	.loc_0x88:
	  bl        -0x2F5F88
	  xoris     r0, r3, 0x8000
	  stw       r27, 0x8(r1)
	  lfs       f23, 0x4A10(r29)
	  stw       r0, 0xC(r1)
	  lfs       f24, 0x49E8(r29)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f27
	  fdivs     f0, f0, f28
	  fmadds    f26, f29, f0, f30
	  bl        -0x2F5FB0
	  xoris     r0, r3, 0x8000
	  stw       r27, 0x10(r1)
	  fsubs     f0, f23, f24
	  stw       r0, 0x14(r1)
	  fcmpo     cr0, f26, f31
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f27
	  fdivs     f1, f1, f28
	  fmadds    f3, f0, f1, f24
	  bge-      .loc_0x108
	  lfs       f0, 0x14AC(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f26, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x12C

	.loc_0x108:
	  lfs       f0, 0x14B0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f26, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x12C:
	  lfs       f0, 0x49C0(r29)
	  fcmpo     cr0, f26, f31
	  fmadds    f2, f3, f1, f0
	  bge-      .loc_0x140
	  fneg      f26, f26

	.loc_0x140:
	  fmuls     f1, f26, f25
	  addi      r31, r31, 0x1
	  lfs       f0, 0x4998(r29)
	  cmpwi     r31, 0x1F4
	  fctiwz    f1, f1
	  stfd      f1, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r28, r0
	  lfs       f1, 0x4(r3)
	  fmadds    f0, f3, f1, f0
	  stfs      f0, 0xF84(r30)
	  stfs      f2, 0xF88(r30)
	  addi      r30, r30, 0x8
	  blt+      .loc_0x88
	  addi      r3, r29, 0x154
	  addi      r4, r29, 0xF84
	  bl        0x251A8
	  addi      r3, r29, 0x154
	  bl        0x2544C
	  lwz       r3, 0xCF0(r29)
	  bl        0x281B0
	  lwz       r3, 0xF50(r29)
	  bl        0x29444
	  mr        r3, r29
	  li        r4, 0x1
	  bl        0x618
	  li        r3, 0x1
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  psq_l     f29,0xB8(r1),0,0
	  lfd       f29, 0xB0(r1)
	  psq_l     f28,0xA8(r1),0,0
	  lfd       f28, 0xA0(r1)
	  psq_l     f27,0x98(r1),0,0
	  lfd       f27, 0x90(r1)
	  psq_l     f26,0x88(r1),0,0
	  lfd       f26, 0x80(r1)
	  psq_l     f25,0x78(r1),0,0
	  lfd       f25, 0x70(r1)
	  psq_l     f24,0x68(r1),0,0
	  lfd       f24, 0x60(r1)
	  psq_l     f23,0x58(r1),0,0
	  lfd       f23, 0x50(r1)
	  lmw       r27, 0x3C(r1)
	  lwz       r0, 0xE4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803BF6AC
 * Size:	0001A0
 */
void ebi::title::TTitleMgr::startKogane(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x154
	  bl        0x25B58
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2C
	  li        r0, 0
	  b         .loc_0x78

	.loc_0x2C:
	  lwz       r3, 0xCF0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  li        r0, 0
	  b         .loc_0x78

	.loc_0x50:
	  lwz       r3, 0xF50(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  li        r0, 0
	  b         .loc_0x78

	.loc_0x74:
	  li        r0, 0x1

	.loc_0x78:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x88
	  li        r3, 0
	  b         .loc_0x18C

	.loc_0x88:
	  bl        -0x2F6194
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f3, 0x14B8(r2)
	  stw       r0, 0x18(r1)
	  lfs       f2, 0x14A0(r2)
	  lfd       f0, 0x18(r1)
	  lfs       f1, 0x14C4(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0x1398(r2)
	  lfs       f4, 0x4A10(r31)
	  fdivs     f2, f3, f2
	  fmuls     f3, f1, f2
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0xF4
	  lfs       f0, 0x14AC(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x118

	.loc_0xF4:
	  lfs       f0, 0x14B0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x118:
	  lfs       f0, 0x1398(r2)
	  fmuls     f2, f4, f1
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x12C
	  fneg      f3, f3

	.loc_0x12C:
	  lfs       f1, 0x14B0(r2)
	  lis       r3, 0x8050
	  lfs       f0, 0x1398(r2)
	  addi      r3, r3, 0x71A0
	  fmuls     f1, f3, f1
	  stfs      f2, 0x14(r1)
	  addi      r4, r1, 0x10
	  addi      r5, r1, 0x8
	  stfs      f0, 0x8(r1)
	  fctiwz    f1, f1
	  stfs      f0, 0xC(r1)
	  stfd      f1, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f0, f4, f0
	  stfs      f0, 0x10(r1)
	  lwz       r3, 0xCF0(r31)
	  bl        0x27F74
	  mr        r3, r31
	  li        r4, 0x3
	  bl        0x430
	  li        r3, 0x1

	.loc_0x18C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803BF84C
 * Size:	0001A0
 */
void ebi::title::TTitleMgr::startChappy(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x154
	  bl        0x259B8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2C
	  li        r0, 0
	  b         .loc_0x78

	.loc_0x2C:
	  lwz       r3, 0xCF0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  li        r0, 0
	  b         .loc_0x78

	.loc_0x50:
	  lwz       r3, 0xF50(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  li        r0, 0
	  b         .loc_0x78

	.loc_0x74:
	  li        r0, 0x1

	.loc_0x78:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x88
	  li        r3, 0
	  b         .loc_0x18C

	.loc_0x88:
	  bl        -0x2F6334
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f3, 0x14B8(r2)
	  stw       r0, 0x18(r1)
	  lfs       f2, 0x14A0(r2)
	  lfd       f0, 0x18(r1)
	  lfs       f1, 0x14C4(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0x1398(r2)
	  lfs       f4, 0x4A10(r31)
	  fdivs     f2, f3, f2
	  fmuls     f3, f1, f2
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0xF4
	  lfs       f0, 0x14AC(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x118

	.loc_0xF4:
	  lfs       f0, 0x14B0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x118:
	  lfs       f0, 0x1398(r2)
	  fmuls     f2, f4, f1
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x12C
	  fneg      f3, f3

	.loc_0x12C:
	  lfs       f1, 0x14B0(r2)
	  lis       r3, 0x8050
	  lfs       f0, 0x1398(r2)
	  addi      r3, r3, 0x71A0
	  fmuls     f1, f3, f1
	  stfs      f2, 0x14(r1)
	  addi      r4, r1, 0x10
	  addi      r5, r1, 0x8
	  stfs      f0, 0x8(r1)
	  fctiwz    f1, f1
	  stfs      f0, 0xC(r1)
	  stfd      f1, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f0, f4, f0
	  stfs      f0, 0x10(r1)
	  lwz       r3, 0xF50(r31)
	  bl        0x29068
	  mr        r3, r31
	  li        r4, 0x3
	  bl        0x290
	  li        r3, 0x1

	.loc_0x18C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803BF9EC
 * Size:	00023C
 */
void ebi::title::TTitleMgr::boidToAssemble((long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  stw       r0, 0xE4(r1)
	  stfd      f31, 0xD0(r1)
	  psq_st    f31,0xD8(r1),0,0
	  stfd      f30, 0xC0(r1)
	  psq_st    f30,0xC8(r1),0,0
	  stfd      f29, 0xB0(r1)
	  psq_st    f29,0xB8(r1),0,0
	  stfd      f28, 0xA0(r1)
	  psq_st    f28,0xA8(r1),0,0
	  stfd      f27, 0x90(r1)
	  psq_st    f27,0x98(r1),0,0
	  stfd      f26, 0x80(r1)
	  psq_st    f26,0x88(r1),0,0
	  stfd      f25, 0x70(r1)
	  psq_st    f25,0x78(r1),0,0
	  stfd      f24, 0x60(r1)
	  psq_st    f24,0x68(r1),0,0
	  stfd      f23, 0x50(r1)
	  psq_st    f23,0x58(r1),0,0
	  stmw      r26, 0x38(r1)
	  mr        r27, r3
	  mr        r28, r4
	  lwz       r3, 0xCF0(r3)
	  bl        0x27D94
	  lwz       r3, 0xF50(r27)
	  bl        0x29028
	  lis       r3, 0x8050
	  lfd       f27, 0x14B8(r2)
	  lfs       f28, 0x14A0(r2)
	  mr        r29, r27
	  lfs       f29, 0x14A8(r2)
	  addi      r26, r3, 0x71A0
	  lfs       f30, 0x14A4(r2)
	  li        r30, 0
	  lfs       f31, 0x1398(r2)
	  lis       r31, 0x4330
	  lfs       f25, 0x14B0(r2)

	.loc_0x9C:
	  bl        -0x2F64E8
	  xoris     r0, r3, 0x8000
	  stw       r31, 0x8(r1)
	  lfs       f23, 0x4A10(r27)
	  stw       r0, 0xC(r1)
	  lfs       f24, 0x49E8(r27)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f27
	  fdivs     f0, f0, f28
	  fmadds    f26, f29, f0, f30
	  bl        -0x2F6510
	  xoris     r0, r3, 0x8000
	  stw       r31, 0x10(r1)
	  fsubs     f0, f23, f24
	  stw       r0, 0x14(r1)
	  fcmpo     cr0, f26, f31
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f27
	  fdivs     f1, f1, f28
	  fmadds    f3, f0, f1, f24
	  bge-      .loc_0x11C
	  lfs       f0, 0x14AC(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f26, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x140

	.loc_0x11C:
	  lfs       f0, 0x14B0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f26, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x140:
	  lfs       f0, 0x49C0(r27)
	  fcmpo     cr0, f26, f31
	  fmadds    f2, f3, f1, f0
	  bge-      .loc_0x154
	  fneg      f26, f26

	.loc_0x154:
	  fmuls     f1, f26, f25
	  addi      r30, r30, 0x1
	  lfs       f0, 0x4998(r27)
	  cmpwi     r30, 0x1F4
	  fctiwz    f1, f1
	  stfd      f1, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r26, r0
	  lfs       f1, 0x4(r3)
	  fmadds    f0, f3, f1, f0
	  stfs      f0, 0xF84(r29)
	  stfs      f2, 0xF88(r29)
	  addi      r29, r29, 0x8
	  blt+      .loc_0x9C
	  cmpwi     r28, 0
	  bne-      .loc_0x1A8
	  addi      r3, r27, 0x1F24
	  addi      r4, r27, 0xF84
	  bl        0x23F84
	  b         .loc_0x1BC

	.loc_0x1A8:
	  cmpwi     r28, 0x1
	  bne-      .loc_0x1BC
	  addi      r3, r27, 0x2FA0
	  addi      r4, r27, 0xF84
	  bl        0x23F6C

	.loc_0x1BC:
	  addi      r3, r27, 0x154
	  addi      r4, r27, 0xF84
	  bl        0x24C1C
	  mr        r3, r27
	  li        r4, 0x4
	  bl        0xA4
	  li        r0, 0
	  li        r3, 0x1
	  stb       r0, 0xF70(r27)
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  psq_l     f29,0xB8(r1),0,0
	  lfd       f29, 0xB0(r1)
	  psq_l     f28,0xA8(r1),0,0
	  lfd       f28, 0xA0(r1)
	  psq_l     f27,0x98(r1),0,0
	  lfd       f27, 0x90(r1)
	  psq_l     f26,0x88(r1),0,0
	  lfd       f26, 0x80(r1)
	  psq_l     f25,0x78(r1),0,0
	  lfd       f25, 0x70(r1)
	  psq_l     f24,0x68(r1),0,0
	  lfd       f24, 0x60(r1)
	  psq_l     f23,0x58(r1),0,0
	  lfd       f23, 0x50(r1)
	  lmw       r26, 0x38(r1)
	  lwz       r0, 0xE4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void ebi::title::TTitleMgr::boid3ToAssemble(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BFC28
 * Size:	00001C
 */
void ebi::title::TTitleMgr::isControllerOK(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0xF74(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x14
	  li        r3, 0x1
	  blr

	.loc_0x14:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803BFC44
 * Size:	00001C
 */
void ebi::title::TTitleMgr::isPressStart(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0xF7C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x14
	  li        r3, 0x1
	  blr

	.loc_0x14:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void ebi::title::TTitleMgr::isAnyKey(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BFC60
 * Size:	000124
 */
void ebi::title::TTitleMgr::startState((ebi::title::TTitleMgr::enumState))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x4
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0xF58(r3)
	  beq-      .loc_0x44
	  bge-      .loc_0x34
	  cmpwi     r4, 0x2
	  beq-      .loc_0xC8
	  bge-      .loc_0xF4
	  b         .loc_0x110

	.loc_0x34:
	  cmpwi     r4, 0x6
	  beq-      .loc_0x9C
	  bge-      .loc_0x110
	  b         .loc_0x70

	.loc_0x44:
	  lfs       f1, 0x4A88(r31)
	  addi      r3, r31, 0x154
	  bl        0x24E54
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x4A88(r31)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FE174
	  stw       r3, 0xF60(r31)
	  stw       r3, 0xF64(r31)
	  b         .loc_0x110

	.loc_0x70:
	  lfs       f1, 0x4AB0(r31)
	  addi      r3, r31, 0x154
	  bl        0x24EB8
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x4AB0(r31)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FE1A0
	  stw       r3, 0xF60(r31)
	  stw       r3, 0xF64(r31)
	  b         .loc_0x110

	.loc_0x9C:
	  lfs       f1, 0x4AD8(r31)
	  addi      r3, r31, 0x154
	  bl        0x24F1C
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x4AD8(r31)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FE1CC
	  stw       r3, 0xF60(r31)
	  stw       r3, 0xF64(r31)
	  b         .loc_0x110

	.loc_0xC8:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x4B00(r31)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FE1EC
	  stw       r3, 0xF60(r31)
	  stw       r3, 0xF64(r31)
	  addi      r3, r31, 0x30
	  lfs       f1, 0x4A60(r31)
	  bl        0x1198
	  b         .loc_0x110

	.loc_0xF4:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x4B28(r31)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FE218
	  stw       r3, 0xF60(r31)
	  stw       r3, 0xF64(r31)

	.loc_0x110:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803BFD84
 * Size:	000458
 */
void ebi::title::TTitleMgr::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r0, 0xF58(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x438
	  lwz       r3, 0xF68(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  subi      r0, r3, 0x1
	  stw       r0, 0xF68(r30)

	.loc_0x38:
	  lwz       r3, 0xF74(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  subi      r0, r3, 0x1
	  stw       r0, 0xF74(r30)

	.loc_0x4C:
	  lwz       r3, 0xF7C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  subi      r0, r3, 0x1
	  stw       r0, 0xF7C(r30)

	.loc_0x60:
	  addi      r3, r30, 0x154
	  bl        0x25434
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x78
	  li        r0, 0
	  b         .loc_0xC4

	.loc_0x78:
	  lwz       r3, 0xCF0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C
	  li        r0, 0
	  b         .loc_0xC4

	.loc_0x9C:
	  lwz       r3, 0xF50(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC0
	  li        r0, 0
	  b         .loc_0xC4

	.loc_0xC0:
	  li        r0, 0x1

	.loc_0xC4:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0xD4
	  li        r0, 0x1
	  stb       r0, 0xF71(r30)

	.loc_0xD4:
	  lbz       r0, 0xF71(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x15C
	  lwz       r3, 0x401C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x15C
	  lwz       r3, 0x1C(r3)
	  rlwinm.   r0,r3,0,25,25
	  beq-      .loc_0x108
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x498
	  b         .loc_0x11C

	.loc_0x108:
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0x11C
	  mr        r3, r30
	  li        r4, 0x1
	  bl        -0x4B0

	.loc_0x11C:
	  lwz       r3, 0x401C(r30)
	  lwz       r3, 0x1C(r3)
	  rlwinm.   r0,r3,0,21,21
	  beq-      .loc_0x14C
	  lis       r3, 0x8051
	  addi      r3, r3, 0x41FC
	  lwz       r0, 0x1C8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x15C
	  mr        r3, r30
	  bl        -0x67C
	  b         .loc_0x15C

	.loc_0x14C:
	  rlwinm.   r0,r3,0,20,20
	  beq-      .loc_0x15C
	  mr        r3, r30
	  bl        -0x830

	.loc_0x15C:
	  lwz       r0, 0xF68(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x438
	  lbz       r0, 0xF70(r30)
	  li        r31, 0
	  cmplwi    r0, 0
	  bne-      .loc_0x238
	  addi      r3, r30, 0x154
	  bl        0x2531C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x190
	  li        r0, 0
	  b         .loc_0x1DC

	.loc_0x190:
	  lwz       r3, 0xCF0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B4
	  li        r0, 0
	  b         .loc_0x1DC

	.loc_0x1B4:
	  lwz       r3, 0xF50(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1D8
	  li        r0, 0
	  b         .loc_0x1DC

	.loc_0x1D8:
	  li        r0, 0x1

	.loc_0x1DC:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x1EC
	  li        r0, 0
	  b         .loc_0x220

	.loc_0x1EC:
	  li        r0, 0x2
	  stw       r0, 0xF58(r30)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x4B00(r30)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FE43C
	  stw       r3, 0xF60(r30)
	  stw       r3, 0xF64(r30)
	  addi      r3, r30, 0x30
	  lfs       f1, 0x4A60(r30)
	  bl        0xF48
	  li        r0, 0x1

	.loc_0x220:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x3F4
	  li        r0, 0x1
	  li        r31, 0x1
	  stb       r0, 0xF70(r30)
	  b         .loc_0x3F4

	.loc_0x238:
	  bl        -0x2F6A1C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, 0x14B8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, 0x14A0(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, 0x14C8(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x284
	  mr        r3, r30
	  bl        -0x948
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3F4
	  li        r31, 0x1
	  b         .loc_0x3F4

	.loc_0x284:
	  lfs       f0, 0x14CC(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2D4
	  lis       r3, 0x8051
	  addi      r3, r3, 0x41FC
	  lwz       r0, 0x1C8(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x2BC
	  mr        r3, r30
	  bl        -0x980
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3F4
	  li        r31, 0x1
	  b         .loc_0x3F4

	.loc_0x2BC:
	  mr        r3, r30
	  bl        -0x7F8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3F4
	  li        r31, 0x1
	  b         .loc_0x3F4

	.loc_0x2D4:
	  lfs       f0, 0x14D0(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x340
	  lwz       r0, 0xF58(r30)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x2F4
	  li        r4, 0
	  b         .loc_0x330

	.loc_0x2F4:
	  li        r0, 0x6
	  addi      r3, r30, 0x154
	  stw       r0, 0xF58(r30)
	  lfs       f1, 0x4AD8(r30)
	  bl        0x24B98
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x4AD8(r30)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FE550
	  stw       r3, 0xF60(r30)
	  li        r0, 0
	  li        r4, 0x1
	  stw       r3, 0xF64(r30)
	  stb       r0, 0xF70(r30)

	.loc_0x330:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x3F4
	  li        r31, 0x1
	  b         .loc_0x3F4

	.loc_0x340:
	  addi      r3, r30, 0x154
	  bl        0x25154
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x358
	  li        r0, 0
	  b         .loc_0x3A4

	.loc_0x358:
	  lwz       r3, 0xCF0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x37C
	  li        r0, 0
	  b         .loc_0x3A4

	.loc_0x37C:
	  lwz       r3, 0xF50(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3A0
	  li        r0, 0
	  b         .loc_0x3A4

	.loc_0x3A0:
	  li        r0, 0x1

	.loc_0x3A4:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x3B4
	  li        r0, 0
	  b         .loc_0x3E8

	.loc_0x3B4:
	  li        r0, 0x2
	  stw       r0, 0xF58(r30)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x4B00(r30)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FE604
	  stw       r3, 0xF60(r30)
	  stw       r3, 0xF64(r30)
	  addi      r3, r30, 0x30
	  lfs       f1, 0x4A60(r30)
	  bl        0xD80
	  li        r0, 0x1

	.loc_0x3E8:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x3F4
	  li        r31, 0x1

	.loc_0x3F4:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x41C
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x1440(r2)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FE644
	  stw       r3, 0xF68(r30)
	  stw       r3, 0xF6C(r30)
	  b         .loc_0x438

	.loc_0x41C:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x1438(r2)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FE664
	  stw       r3, 0xF68(r30)
	  stw       r3, 0xF6C(r30)

	.loc_0x438:
	  mr        r3, r30
	  bl        .loc_0x458
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x458:
	*/
}

/*
 * --INFO--
 * Address:	803C01DC
 * Size:	00034C
 */
void ebi::title::TTitleMgr::updateState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lwz       r0, 0xF58(r3)
	  cmplwi    r0, 0x6
	  bgt-      .loc_0x290
	  lis       r3, 0x804E
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x7834
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  b         .loc_0x338
	  lwz       r3, 0xF60(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  subi      r0, r3, 0x1
	  stw       r0, 0xF60(r31)

	.loc_0x50:
	  lwz       r0, 0xF60(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x290
	  li        r0, 0x5
	  addi      r3, r31, 0x154
	  stw       r0, 0xF58(r31)
	  lfs       f1, 0x4AB0(r31)
	  bl        0x24948
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x4AB0(r31)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FE710
	  stw       r3, 0xF60(r31)
	  stw       r3, 0xF64(r31)
	  b         .loc_0x290
	  lwz       r3, 0xF60(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xA4
	  subi      r0, r3, 0x1
	  stw       r0, 0xF60(r31)

	.loc_0xA4:
	  lwz       r0, 0xF60(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x290
	  li        r0, 0x6
	  addi      r3, r31, 0x154
	  stw       r0, 0xF58(r31)
	  lfs       f1, 0x4AD8(r31)
	  bl        0x24984
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x4AD8(r31)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FE764
	  stw       r3, 0xF60(r31)
	  stw       r3, 0xF64(r31)
	  b         .loc_0x290
	  lwz       r3, 0xF60(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xF8
	  subi      r0, r3, 0x1
	  stw       r0, 0xF60(r31)

	.loc_0xF8:
	  lwz       r0, 0xF60(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x290
	  addi      r3, r31, 0x154
	  bl        0x2470C
	  li        r0, 0x1
	  stw       r0, 0xF58(r31)
	  b         .loc_0x290
	  lwz       r3, 0xF60(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x12C
	  subi      r0, r3, 0x1
	  stw       r0, 0xF60(r31)

	.loc_0x12C:
	  lwz       r4, 0xF64(r31)
	  lis       r3, 0x4330
	  stw       r3, 0x28(r1)
	  lfs       f4, 0x48F8(r31)
	  cmplwi    r4, 0
	  stw       r4, 0x2C(r1)
	  lfs       f1, 0x4920(r31)
	  lfd       f3, 0x1498(r2)
	  lfd       f0, 0x28(r1)
	  fsubs     f5, f1, f4
	  lfs       f2, 0x13A0(r2)
	  fsubs     f0, f0, f3
	  fdivs     f6, f5, f0
	  beq-      .loc_0x190
	  lwz       r0, 0xF60(r31)
	  stw       r3, 0x30(r1)
	  stw       r0, 0x34(r1)
	  lfd       f0, 0x30(r1)
	  stw       r4, 0x3C(r1)
	  fsubs     f1, f0, f3
	  stw       r3, 0x38(r1)
	  lfd       f0, 0x38(r1)
	  fsubs     f0, f0, f3
	  fdivs     f0, f1, f0
	  b         .loc_0x194

	.loc_0x190:
	  lfs       f0, 0x1398(r2)

	.loc_0x194:
	  fsubs     f0, f2, f0
	  lfs       f1, 0x4948(r31)
	  addi      r3, r31, 0x154
	  addi      r4, r1, 0x14
	  stfs      f1, 0x18(r1)
	  fmadds    f0, f5, f0, f4
	  stfs      f0, 0x14(r1)
	  fadds     f0, f0, f6
	  lfs       f1, 0x4970(r31)
	  stfs      f0, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  bl        0x24914
	  lwz       r0, 0xF60(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x290
	  li        r0, 0x1
	  stw       r0, 0xF58(r31)
	  b         .loc_0x290
	  lwz       r3, 0xF60(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x1F0
	  subi      r0, r3, 0x1
	  stw       r0, 0xF60(r31)

	.loc_0x1F0:
	  lwz       r3, 0xCF0(r31)
	  bl        0x2747C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x210
	  lwz       r3, 0xF50(r31)
	  bl        0x28708
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x22C

	.loc_0x210:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x1440(r2)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x2FE8B0
	  stw       r3, 0xF60(r31)
	  stw       r3, 0xF64(r31)

	.loc_0x22C:
	  lwz       r0, 0xF60(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x248
	  lwz       r3, 0xCF0(r31)
	  bl        0x273CC
	  lwz       r3, 0xF50(r31)
	  bl        0x28660

	.loc_0x248:
	  lwz       r3, 0xF50(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x290
	  lwz       r3, 0xCF0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x290
	  addi      r3, r31, 0x154
	  bl        0x24590
	  li        r0, 0x1
	  stw       r0, 0xF58(r31)

	.loc_0x290:
	  addi      r3, r31, 0x4270
	  lwz       r12, 0x4270(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0xF0
	  bl        0x136C
	  addi      r3, r1, 0x8
	  addi      r4, r31, 0xF0
	  bl        0x150C
	  lfs       f1, 0xC(r1)
	  addi      r3, r31, 0x4078
	  lfs       f2, 0x10(r1)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x41EC(r31)
	  stfs      f1, 0x41F0(r31)
	  stfs      f2, 0x41F4(r31)
	  bl        0x1A0C
	  lis       r4, 0x8051
	  addi      r3, r31, 0x41BC
	  subi      r4, r4, 0xDD0
	  bl        -0x2D61F4
	  addi      r3, r31, 0xF0
	  bl        0x1438
	  addi      r3, r31, 0x154
	  bl        0x23FF0
	  lwz       r3, 0xCF0(r31)
	  bl        0x27658
	  lwz       r3, 0xF50(r31)
	  bl        0x28934
	  addi      r3, r31, 0x30
	  bl        0xA44
	  addi      r3, r31, 0xA4
	  bl        0xE64
	  mr        r3, r31
	  bl        .loc_0x34C
	  lwz       r4, 0xCF0(r31)
	  addi      r3, r31, 0x154
	  bl        0x248F4
	  lwz       r4, 0xF50(r31)
	  addi      r3, r31, 0x154
	  bl        0x248E8

	.loc_0x338:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr

	.loc_0x34C:
	*/
}

/*
 * --INFO--
 * Address:	803C0528
 * Size:	00022C
 */
void ebi::title::TTitleMgr::checkEncounter_(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lbz       r0, -0x65CC(r13)
	  mr        r31, r3
	  extsb.    r0, r0
	  bne-      .loc_0x44
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, -0x65D0(r13)
	  stb       r0, -0x65CC(r13)

	.loc_0x44:
	  lwz       r3, -0x65D0(r13)
	  addi      r0, r3, 0x1
	  cmpwi     r0, 0xA
	  stw       r0, -0x65D0(r13)
	  blt-      .loc_0x60
	  li        r0, 0
	  stw       r0, -0x65D0(r13)

	.loc_0x60:
	  lwz       r5, -0x65D0(r13)
	  lis       r3, 0x6666
	  addi      r4, r3, 0x6667
	  mulli     r0, r5, 0x1F4
	  cmpwi     r5, 0x9
	  mulhw     r0, r4, r0
	  srawi     r0, r0, 0x2
	  rlwinm    r3,r0,1,31,31
	  add       r6, r0, r3
	  bne-      .loc_0x90
	  li        r29, 0x1F4
	  b         .loc_0xA8

	.loc_0x90:
	  addi      r0, r5, 0x1
	  mulli     r0, r0, 0x1F4
	  mulhw     r0, r4, r0
	  srawi     r0, r0, 0x2
	  rlwinm    r3,r0,1,31,31
	  add       r29, r0, r3

	.loc_0xA8:
	  mr        r28, r6
	  b         .loc_0x1FC

	.loc_0xB0:
	  mr        r4, r28
	  addi      r3, r31, 0x154
	  bl        0x24CAC
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1F8
	  lwz       r3, 0xCF0(r31)
	  lfs       f31, 0x1428(r2)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x178
	  lwz       r3, 0xCF0(r31)
	  lfs       f0, 0x8(r30)
	  lfs       f2, 0x8(r3)
	  lfs       f1, 0x4(r3)
	  fsubs     f2, f2, f0
	  lfs       f0, 0x4(r30)
	  lfs       f3, 0x1398(r2)
	  fsubs     f1, f1, f0
	  fmuls     f2, f2, f2
	  fmadds    f4, f1, f1, f2
	  fcmpo     cr0, f4, f3
	  ble-      .loc_0x13C
	  ble-      .loc_0x138
	  fsqrte    f0, f4
	  fmuls     f3, f0, f4
	  b         .loc_0x13C

	.loc_0x138:
	  fmr       f3, f4

	.loc_0x13C:
	  lfs       f0, 0x1428(r2)
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x178
	  lfs       f0, 0x1398(r2)
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x16C
	  fmadds    f1, f1, f1, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x170
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x170

	.loc_0x16C:
	  fmr       f1, f0

	.loc_0x170:
	  fmr       f31, f1
	  stw       r3, 0x68(r30)

	.loc_0x178:
	  lwz       r3, 0xF50(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1F8
	  lwz       r3, 0xF50(r31)
	  lfs       f0, 0x8(r30)
	  lfs       f2, 0x8(r3)
	  lfs       f1, 0x4(r3)
	  fsubs     f2, f2, f0
	  lfs       f0, 0x4(r30)
	  lfs       f3, 0x1398(r2)
	  fsubs     f1, f1, f0
	  fmuls     f2, f2, f2
	  fmadds    f4, f1, f1, f2
	  fcmpo     cr0, f4, f3
	  ble-      .loc_0x1D8
	  ble-      .loc_0x1D4
	  fsqrte    f0, f4
	  fmuls     f3, f0, f4
	  b         .loc_0x1D8

	.loc_0x1D4:
	  fmr       f3, f4

	.loc_0x1D8:
	  fcmpo     cr0, f3, f31
	  bge-      .loc_0x1F8
	  lfs       f0, 0x1398(r2)
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x1F4
	  fmadds    f1, f1, f1, f2
	  fcmpo     cr0, f1, f0

	.loc_0x1F4:
	  stw       r3, 0x68(r30)

	.loc_0x1F8:
	  addi      r28, r28, 0x1

	.loc_0x1FC:
	  cmpw      r28, r29
	  blt+      .loc_0xB0
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C0754
 * Size:	000268
 */
void ebi::title::TTitleMgr::draw(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  mr        r31, r3
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  lwz       r0, 0xF58(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x24C
	  lwz       r0, 0xF5C(r31)
	  cmpwi     r0, 0x3
	  bne-      .loc_0xF8
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x24(r3)
	  addi      r30, r3, 0x190
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0xFF
	  mr        r3, r30
	  stb       r0, 0x2C(r1)
	  addi      r4, r1, 0x18
	  addi      r5, r1, 0x1C
	  addi      r6, r1, 0x20
	  stb       r0, 0x2D(r1)
	  addi      r7, r1, 0x24
	  stb       r0, 0x2E(r1)
	  stb       r0, 0x2F(r1)
	  lwz       r0, 0x2C(r1)
	  stw       r0, 0x24(r1)
	  stw       r0, 0x20(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x18(r1)
	  bl        -0x38A158
	  bl        0x62A3C
	  lhz       r29, 0x6(r3)
	  bl        0x62A34
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lfs       f3, 0x1398(r2)
	  mr        r3, r30
	  stw       r4, 0x54(r1)
	  addi      r4, r1, 0x40
	  lfd       f2, 0x1498(r2)
	  stw       r0, 0x50(r1)
	  lfd       f0, 0x50(r1)
	  stw       r29, 0x5C(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x58(r1)
	  lfd       f0, 0x58(r1)
	  fadds     f1, f3, f1
	  stfs      f3, 0x40(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0x44(r1)
	  fadds     f0, f3, f0
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  bl        -0x38A070
	  b         .loc_0x1BC

	.loc_0xF8:
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x24(r3)
	  addi      r29, r3, 0x190
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r8, 0
	  li        r0, 0xFF
	  stb       r8, 0x28(r1)
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  addi      r5, r1, 0xC
	  stb       r8, 0x29(r1)
	  addi      r6, r1, 0x10
	  addi      r7, r1, 0x14
	  stb       r8, 0x2A(r1)
	  stb       r0, 0x2B(r1)
	  lwz       r0, 0x28(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x38A220
	  bl        0x62974
	  lhz       r30, 0x6(r3)
	  bl        0x6296C
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lfs       f3, 0x1398(r2)
	  mr        r3, r29
	  stw       r4, 0x5C(r1)
	  addi      r4, r1, 0x30
	  lfd       f2, 0x1498(r2)
	  stw       r0, 0x58(r1)
	  lfd       f0, 0x58(r1)
	  stw       r30, 0x54(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x50(r1)
	  lfd       f0, 0x50(r1)
	  fadds     f1, f3, f1
	  stfs      f3, 0x30(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0x34(r1)
	  fadds     f0, f3, f0
	  stfs      f1, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  bl        -0x38A138

	.loc_0x1BC:
	  lwz       r3, -0x6514(r13)
	  li        r4, 0
	  lwz       r3, 0x24(r3)
	  bl        0x64CD4
	  mr        r29, r3
	  bl        0x64B20
	  mr        r3, r29
	  bl        0x64874
	  addi      r3, r31, 0x4078
	  bl        0x5A410
	  addi      r3, r31, 0x4270
	  addi      r4, r31, 0x41BC
	  bl        0x1848
	  addi      r3, r31, 0x4788
	  addi      r4, r31, 0x4078
	  bl        0x2A858
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  bl        -0x362D4C
	  lis       r3, 0x8051
	  li        r0, 0x3
	  subi      r30, r3, 0xDD0
	  stw       r0, 0x50(r30)
	  lwz       r3, 0x48CC(r31)
	  bl        -0x35A8B4
	  li        r0, 0x4
	  stw       r0, 0x50(r30)
	  lwz       r3, 0x48D0(r31)
	  bl        -0x35A8C4
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  bl        -0x3625C8
	  lwz       r3, 0x48CC(r31)
	  bl        -0x35AF04
	  lwz       r3, 0x48D0(r31)
	  bl        -0x35AF0C

	.loc_0x24C:
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void ebi::title::TTitleMgr::showInfo((long, long, long, long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803C09BC
 * Size:	00007C
 */
void ebi::title::TTitleMgr::readTitleParam((JKRArchive*, char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x430(r1)
	  mflr      r0
	  stw       r0, 0x434(r1)
	  stw       r31, 0x42C(r1)
	  mr        r31, r3
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  mr        r4, r5
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  li        r5, -0x1
	  bl        0x54EFC
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x14(r1)
	  bne-      .loc_0x5C
	  li        r0, 0
	  stw       r0, 0x41C(r1)

	.loc_0x5C:
	  addi      r3, r31, 0x48D4
	  addi      r4, r1, 0x8
	  bl        0x52DD4

	.loc_0x68:
	  lwz       r0, 0x434(r1)
	  lwz       r31, 0x42C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x430
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C0A38
 * Size:	000060
 */
void ebi::title::Pikmin::TBoidParamMgr::__dt(void)
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
	  addi      r0, r5, 0x786C
	  stw       r0, 0x0(r30)
	  bl        0x50B20
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x39C9C4

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
 * Address:	803C0A98
 * Size:	000024
 */
void ebi::title::TTitleCameraMgr::read((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x198
	  stw       r0, 0x14(r1)
	  bl        0x52D4C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C0ABC
 * Size:	000004
 */
void Camera::doUpdate()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C0AC0
 * Size:	000008
 */
void ebi::title::TObjBase::getCreatureType(void)
{
	/*
	.loc_0x0:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C0AC8
 * Size:	000028
 */
void __sinit_ebiP2Title_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804E
	  stw       r0, -0x65E0(r13)
	  stfsu     f0, 0x7828(r3)
	  stfs      f0, -0x65DC(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C0AF0
 * Size:	000008
 */
void @24 @ebi::title::TTitleMgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x26CC
	*/
}
