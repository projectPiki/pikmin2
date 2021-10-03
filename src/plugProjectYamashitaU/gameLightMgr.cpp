

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void Game::_Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001FC
 */
void Game::calcLightColor(Color4 *, Color4 &, Color4 &, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8011CCE0
 * Size:	000654
 */
void Game::GameLightTimeSetting::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r7, 0x804B
  lis       r6, 0x804B
  stw       r0, 0x14(r1)
  lis       r4, 0x804F
  subi      r8, r6, 0x3B04
  lis       r5, 0x7538
  stw       r31, 0xC(r1)
  subi      r0, r4, 0x4AD8
  mr        r31, r3
  subi      r9, r7, 0x3AF8
  stw       r0, 0x0(r3)
  li        r11, 0
  subi      r10, r2, 0x6748
  addi      r7, r31, 0xC4
  stw       r11, 0x10(r3)
  lis       r3, 0x8048
  subi      r0, r3, 0x4D24
  addi      r4, r31, 0x18
  stw       r11, 0xC(r31)
  addi      r3, r4, 0xC
  addi      r5, r5, 0x3030
  subi      r6, r2, 0x6744
  stw       r11, 0x8(r31)
  stw       r11, 0x4(r31)
  stw       r10, 0x14(r31)
  stw       r9, 0x0(r31)
  stw       r8, 0xC8(r31)
  stw       r7, 0x18(r31)
  stw       r11, 0x1C(r31)
  stw       r0, 0x20(r31)
  bl        0x2F68F8
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x24(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x18
  stw       r3, 0x3C(r31)
  addi      r3, r4, 0x34
  addi      r5, r5, 0x3031
  stw       r6, 0x44(r31)
  subi      r6, r2, 0x6740
  stw       r0, 0x48(r31)
  bl        0x2F68BC
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x4C(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x18
  stw       r3, 0x64(r31)
  addi      r3, r4, 0x5C
  addi      r5, r5, 0x3032
  stw       r6, 0x6C(r31)
  subi      r6, r2, 0x673C
  stw       r0, 0x70(r31)
  bl        0x2F6880
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  addi      r4, r31, 0x18
  stw       r0, 0x74(r31)
  li        r0, 0x7F
  lis       r3, 0x8048
  addi      r5, r5, 0x3033
  stw       r0, 0x8C(r31)
  subi      r6, r3, 0x4D18
  li        r3, 0
  li        r0, 0xFF
  stw       r3, 0x94(r31)
  addi      r3, r4, 0x84
  stw       r0, 0x98(r31)
  bl        0x2F6840
  lis       r3, 0x804B
  lis       r7, 0x804B
  subi      r0, r3, 0x5370
  lis       r6, 0x804B
  stw       r0, 0x9C(r31)
  li        r0, 0xFF
  subi      r10, r7, 0x3B10
  subi      r8, r6, 0x3B04
  stw       r0, 0xB4(r31)
  li        r11, 0
  lis       r5, 0x7538
  li        r9, 0xC8
  stw       r11, 0xBC(r31)
  addi      r7, r31, 0x178
  lis       r3, 0x8048
  addi      r4, r31, 0xCC
  stw       r0, 0xC0(r31)
  subi      r0, r3, 0x4D24
  addi      r3, r4, 0xC
  addi      r5, r5, 0x3030
  stw       r10, 0xC8(r31)
  subi      r6, r2, 0x6744
  stw       r9, 0x3C(r31)
  stw       r9, 0x64(r31)
  stw       r9, 0x8C(r31)
  stw       r8, 0x17C(r31)
  stw       r7, 0xCC(r31)
  stw       r11, 0xD0(r31)
  stw       r0, 0xD4(r31)
  bl        0x2F67C8
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0xD8(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0xCC
  stw       r3, 0xF0(r31)
  addi      r3, r4, 0x34
  addi      r5, r5, 0x3031
  stw       r6, 0xF8(r31)
  subi      r6, r2, 0x6740
  stw       r0, 0xFC(r31)
  bl        0x2F678C
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x100(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0xCC
  stw       r3, 0x118(r31)
  addi      r3, r4, 0x5C
  addi      r5, r5, 0x3032
  stw       r6, 0x120(r31)
  subi      r6, r2, 0x673C
  stw       r0, 0x124(r31)
  bl        0x2F6750
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  addi      r4, r31, 0xCC
  stw       r0, 0x128(r31)
  li        r0, 0x7F
  lis       r3, 0x8048
  addi      r5, r5, 0x3033
  stw       r0, 0x140(r31)
  subi      r6, r3, 0x4D18
  li        r3, 0
  li        r0, 0xFF
  stw       r3, 0x148(r31)
  addi      r3, r4, 0x84
  stw       r0, 0x14C(r31)
  bl        0x2F6710
  lis       r3, 0x804B
  lis       r7, 0x804B
  subi      r0, r3, 0x5370
  lis       r6, 0x804B
  stw       r0, 0x150(r31)
  li        r0, 0xFF
  subi      r10, r7, 0x3B10
  subi      r8, r6, 0x3B04
  stw       r0, 0x168(r31)
  li        r11, 0
  lis       r5, 0x7538
  li        r9, 0xC8
  stw       r11, 0x170(r31)
  addi      r7, r31, 0x22C
  lis       r3, 0x8048
  addi      r4, r31, 0x180
  stw       r0, 0x174(r31)
  subi      r0, r3, 0x4D24
  addi      r3, r4, 0xC
  addi      r5, r5, 0x3030
  stw       r10, 0x17C(r31)
  subi      r6, r2, 0x6744
  stw       r9, 0xF0(r31)
  stw       r9, 0x118(r31)
  stw       r9, 0x140(r31)
  stw       r8, 0x230(r31)
  stw       r7, 0x180(r31)
  stw       r11, 0x184(r31)
  stw       r0, 0x188(r31)
  bl        0x2F6698
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x18C(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x180
  stw       r3, 0x1A4(r31)
  addi      r3, r4, 0x34
  addi      r5, r5, 0x3031
  stw       r6, 0x1AC(r31)
  subi      r6, r2, 0x6740
  stw       r0, 0x1B0(r31)
  bl        0x2F665C
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x1B4(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x180
  stw       r3, 0x1CC(r31)
  addi      r3, r4, 0x5C
  addi      r5, r5, 0x3032
  stw       r6, 0x1D4(r31)
  subi      r6, r2, 0x673C
  stw       r0, 0x1D8(r31)
  bl        0x2F6620
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  addi      r4, r31, 0x180
  stw       r0, 0x1DC(r31)
  li        r0, 0x7F
  lis       r3, 0x8048
  addi      r5, r5, 0x3033
  stw       r0, 0x1F4(r31)
  subi      r6, r3, 0x4D18
  li        r3, 0
  li        r0, 0xFF
  stw       r3, 0x1FC(r31)
  addi      r3, r4, 0x84
  stw       r0, 0x200(r31)
  bl        0x2F65E0
  lis       r3, 0x804B
  lis       r7, 0x804B
  subi      r0, r3, 0x5370
  lis       r6, 0x804B
  stw       r0, 0x204(r31)
  li        r11, 0xFF
  subi      r9, r7, 0x3B1C
  subi      r8, r6, 0x3B04
  stw       r11, 0x21C(r31)
  li        r10, 0
  lis       r3, 0x8048
  lis       r5, 0x7538
  stw       r10, 0x224(r31)
  addi      r7, r31, 0x2E0
  subi      r0, r3, 0x4D24
  addi      r4, r31, 0x234
  stw       r11, 0x228(r31)
  addi      r3, r4, 0xC
  addi      r5, r5, 0x3030
  subi      r6, r2, 0x6744
  stw       r9, 0x230(r31)
  stw       r11, 0x1A4(r31)
  stw       r11, 0x1CC(r31)
  stw       r11, 0x1F4(r31)
  stw       r8, 0x2E4(r31)
  stw       r7, 0x234(r31)
  stw       r10, 0x238(r31)
  stw       r0, 0x23C(r31)
  bl        0x2F656C
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x240(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x234
  stw       r3, 0x258(r31)
  addi      r3, r4, 0x34
  addi      r5, r5, 0x3031
  stw       r6, 0x260(r31)
  subi      r6, r2, 0x6740
  stw       r0, 0x264(r31)
  bl        0x2F6530
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x268(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x234
  stw       r3, 0x280(r31)
  addi      r3, r4, 0x5C
  addi      r5, r5, 0x3032
  stw       r6, 0x288(r31)
  subi      r6, r2, 0x673C
  stw       r0, 0x28C(r31)
  bl        0x2F64F4
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  addi      r4, r31, 0x234
  stw       r0, 0x290(r31)
  li        r0, 0x7F
  lis       r3, 0x8048
  addi      r5, r5, 0x3033
  stw       r0, 0x2A8(r31)
  subi      r6, r3, 0x4D18
  li        r3, 0
  li        r0, 0xFF
  stw       r3, 0x2B0(r31)
  addi      r3, r4, 0x84
  stw       r0, 0x2B4(r31)
  bl        0x2F64B4
  lis       r4, 0x804B
  lis       r3, 0x804B
  subi      r0, r4, 0x5370
  li        r6, 0xFF
  stw       r0, 0x2B8(r31)
  li        r5, 0
  subi      r4, r3, 0x3B28
  li        r0, 0x20
  stw       r6, 0x2D0(r31)
  addi      r3, r31, 0x2E8
  stw       r5, 0x2D8(r31)
  stw       r6, 0x2DC(r31)
  stw       r4, 0x2E4(r31)
  stw       r0, 0x258(r31)
  stw       r0, 0x280(r31)
  stw       r0, 0x2A8(r31)
  bl        .loc_0x654
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x3B34
  li        r6, 0
  stw       r0, 0x4AC(r31)
  addi      r0, r31, 0x4A8
  lis       r3, 0x8048
  addi      r4, r31, 0x3FC
  stw       r0, 0x3FC(r31)
  subi      r0, r3, 0x4D24
  addi      r3, r4, 0xC
  addi      r5, r5, 0x3030
  stw       r6, 0x400(r31)
  subi      r6, r2, 0x6744
  stw       r0, 0x404(r31)
  bl        0x2F6430
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x408(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x3FC
  stw       r3, 0x420(r31)
  addi      r3, r4, 0x34
  addi      r5, r5, 0x3031
  stw       r6, 0x428(r31)
  subi      r6, r2, 0x6740
  stw       r0, 0x42C(r31)
  bl        0x2F63F4
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x430(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x3FC
  stw       r3, 0x448(r31)
  addi      r3, r4, 0x5C
  addi      r5, r5, 0x3032
  stw       r6, 0x450(r31)
  subi      r6, r2, 0x673C
  stw       r0, 0x454(r31)
  bl        0x2F63B8
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  addi      r4, r31, 0x3FC
  stw       r0, 0x458(r31)
  li        r0, 0x7F
  lis       r3, 0x8048
  addi      r5, r5, 0x3033
  stw       r0, 0x470(r31)
  subi      r6, r3, 0x4D18
  li        r3, 0
  li        r0, 0xFF
  stw       r3, 0x478(r31)
  addi      r3, r4, 0x84
  stw       r0, 0x47C(r31)
  bl        0x2F6378
  lis       r3, 0x804B
  li        r6, 0xFF
  subi      r0, r3, 0x5370
  li        r5, 0
  stw       r0, 0x480(r31)
  li        r4, 0x20
  li        r0, 0x80
  mr        r3, r31
  stw       r6, 0x498(r31)
  stw       r5, 0x4A0(r31)
  stw       r6, 0x4A4(r31)
  stw       r4, 0x420(r31)
  stw       r4, 0x448(r31)
  stw       r4, 0x470(r31)
  stw       r0, 0x498(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x654:
*/
}

/*
 * --INFO--
 * Address:	8011D334
 * Size:	0001D4
 */
void Game::GameFogSetting::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x7538
  lis       r4, 0x804B
  stw       r0, 0x14(r1)
  subi      r0, r4, 0x3B40
  addi      r5, r5, 0x3030
  subi      r6, r2, 0x6744
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lis       r3, 0x8048
  stw       r0, 0x110(r30)
  addi      r0, r30, 0xAC
  subi      r31, r3, 0x4D40
  li        r3, 0
  stw       r0, 0x0(r30)
  addi      r0, r31, 0x1C
  mr        r4, r30
  stw       r3, 0x4(r30)
  addi      r3, r30, 0xC
  stw       r0, 0x8(r30)
  bl        0x2F62CC
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r3, 0x7F
  stw       r0, 0xC(r30)
  li        r7, 0
  li        r0, 0xFF
  mr        r4, r30
  stw       r3, 0x24(r30)
  addi      r3, r30, 0x34
  addi      r5, r5, 0x3031
  subi      r6, r2, 0x6740
  stw       r7, 0x2C(r30)
  stw       r0, 0x30(r30)
  bl        0x2F6290
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r3, 0x7F
  stw       r0, 0x34(r30)
  li        r7, 0
  li        r0, 0xFF
  mr        r4, r30
  stw       r3, 0x4C(r30)
  addi      r3, r30, 0x5C
  addi      r5, r5, 0x3032
  subi      r6, r2, 0x673C
  stw       r7, 0x54(r30)
  stw       r0, 0x58(r30)
  bl        0x2F6254
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r3, 0x7F
  stw       r0, 0x5C(r30)
  li        r7, 0
  li        r0, 0xFF
  mr        r4, r30
  stw       r3, 0x74(r30)
  addi      r3, r30, 0x84
  addi      r5, r5, 0x3033
  addi      r6, r31, 0x28
  stw       r7, 0x7C(r30)
  stw       r0, 0x80(r30)
  bl        0x2F6218
  lis       r3, 0x804B
  lis       r5, 0x6630
  subi      r0, r3, 0x5370
  li        r9, 0xFF
  stw       r0, 0x84(r30)
  li        r8, 0
  addi      r7, r30, 0x10C
  addi      r0, r31, 0x34
  stw       r9, 0x9C(r30)
  addi      r3, r30, 0xBC
  addi      r4, r30, 0xB0
  addi      r5, r5, 0x3030
  stw       r8, 0xA4(r30)
  subi      r6, r2, 0x6738
  stw       r9, 0xA8(r30)
  stw       r7, 0xB0(r30)
  stw       r8, 0xB4(r30)
  stw       r0, 0xB8(r30)
  bl        0x2F61CC
  lis       r3, 0x804B
  lis       r5, 0x6630
  subi      r0, r3, 0x5344
  lfs       f0, -0x6730(r2)
  stw       r0, 0xBC(r30)
  addi      r3, r30, 0xE4
  lfs       f1, -0x676C(r2)
  addi      r4, r30, 0xB0
  stfs      f0, 0xD4(r30)
  addi      r5, r5, 0x3031
  lfs       f0, -0x672C(r2)
  subi      r6, r2, 0x6728
  stfs      f1, 0xDC(r30)
  stfs      f0, 0xE0(r30)
  bl        0x2F6190
  lis       r3, 0x804B
  lfs       f1, -0x672C(r2)
  subi      r0, r3, 0x5344
  lfs       f0, -0x676C(r2)
  stw       r0, 0xE4(r30)
  mr        r3, r30
  stfs      f1, 0xFC(r30)
  stfs      f0, 0x104(r30)
  stfs      f1, 0x108(r30)
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
 * Address:	........
 * Size:	0000C0
 */
void Game::GameLightTimeSetting::read( (Stream &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8011D508
 * Size:	000020
 */
void Game::GameShadowSetting::read( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x2F62E0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8011D528
 * Size:	000044
 */
void Game::GameFogSetting::read( (Stream &))
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
  bl        0x2F62B0
  mr        r4, r31
  addi      r3, r30, 0xB0
  bl        0x2F62A4
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
 * Address:	8011D56C
 * Size:	000020
 */
void Game::GameLightSettingBase::read( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x2F627C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001A8
 */
void Game::GameLightSunSetting::__ct( (char *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8011D58C
 * Size:	000060
 */
void Game::GameLightTimeSetting::__dt(void)
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
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x3AF8
  stw       r0, 0x0(r30)
  bl        0x2F3FCC
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0xF9518

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
 * Address:	........
 * Size:	0000E8
 */
void Game::GameLightSunSetting::read( (Stream &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8011D5EC
 * Size:	000738
 */
void Game::GameLightSpotSetting::__ct( (char *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x804F
  li        r9, 0
  stw       r0, 0x14(r1)
  subi      r0, r5, 0x4AD8
  lis       r5, 0x8048
  stw       r31, 0xC(r1)
  mr        r31, r3
  lis       r3, 0x804B
  stw       r30, 0x8(r1)
  subi      r30, r5, 0x4D40
  lis       r5, 0x6630
  subi      r8, r3, 0x3B60
  stw       r0, 0x0(r31)
  addi      r10, r31, 0x18
  addi      r7, r31, 0x4C
  addi      r0, r30, 0x44
  stw       r9, 0x10(r31)
  addi      r3, r10, 0xC
  addi      r5, r5, 0x3030
  addi      r6, r30, 0x50
  stw       r9, 0xC(r31)
  stw       r9, 0x8(r31)
  stw       r9, 0x4(r31)
  stw       r4, 0x14(r31)
  mr        r4, r10
  stw       r8, 0x0(r31)
  stw       r7, 0x18(r31)
  stw       r9, 0x1C(r31)
  stw       r0, 0x20(r31)
  bl        0x2F5FF0
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5344
  lfs       f0, -0x6730(r2)
  stw       r0, 0x24(r31)
  lis       r3, 0x804B
  lfs       f1, -0x676C(r2)
  subi      r9, r3, 0x3B04
  stfs      f0, 0x3C(r31)
  addi      r4, r31, 0x50
  lfs       f0, -0x671C(r2)
  addi      r8, r31, 0xFC
  stfs      f1, 0x44(r31)
  li        r7, 0
  addi      r0, r30, 0x1C
  addi      r3, r4, 0xC
  stfs      f0, 0x48(r31)
  addi      r5, r5, 0x3030
  subi      r6, r2, 0x6744
  stw       r9, 0x100(r31)
  stw       r8, 0x50(r31)
  stw       r7, 0x54(r31)
  stw       r0, 0x58(r31)
  bl        0x2F5F90
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x5C(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x50
  stw       r3, 0x74(r31)
  addi      r3, r4, 0x34
  addi      r5, r5, 0x3031
  stw       r6, 0x7C(r31)
  subi      r6, r2, 0x6740
  stw       r0, 0x80(r31)
  bl        0x2F5F54
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x84(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x50
  stw       r3, 0x9C(r31)
  addi      r3, r4, 0x5C
  addi      r5, r5, 0x3032
  stw       r6, 0xA4(r31)
  subi      r6, r2, 0x673C
  stw       r0, 0xA8(r31)
  bl        0x2F5F18
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0xAC(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x50
  stw       r3, 0xC4(r31)
  addi      r3, r4, 0x84
  addi      r5, r5, 0x3033
  stw       r6, 0xCC(r31)
  addi      r6, r30, 0x28
  stw       r0, 0xD0(r31)
  bl        0x2F5EDC
  lis       r3, 0x804B
  lis       r5, 0x6630
  subi      r0, r3, 0x5370
  li        r6, 0xFF
  stw       r0, 0xD4(r31)
  lis       r3, 0x804B
  li        r9, 0
  addi      r7, r31, 0x138
  stw       r6, 0xEC(r31)
  subi      r8, r3, 0x3B6C
  addi      r4, r31, 0x104
  addi      r0, r30, 0x78
  stw       r9, 0xF4(r31)
  addi      r3, r4, 0xC
  addi      r5, r5, 0x3030
  stw       r6, 0xF8(r31)
  addi      r6, r30, 0x84
  stw       r8, 0x100(r31)
  stw       r7, 0x104(r31)
  stw       r9, 0x108(r31)
  stw       r0, 0x10C(r31)
  bl        0x2F5E84
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5344
  lfs       f0, -0x670C(r2)
  stw       r0, 0x110(r31)
  lis       r3, 0x804B
  lfs       f1, -0x676C(r2)
  li        r10, 0x9B
  stfs      f0, 0x128(r31)
  subi      r9, r3, 0x3B04
  addi      r4, r31, 0x13C
  lfs       f0, -0x6708(r2)
  stfs      f1, 0x130(r31)
  addi      r8, r31, 0x1E8
  li        r7, 0
  addi      r0, r30, 0x1C
  stfs      f0, 0x134(r31)
  addi      r3, r4, 0xC
  addi      r5, r5, 0x3030
  subi      r6, r2, 0x6744
  stw       r10, 0x74(r31)
  stw       r10, 0x9C(r31)
  stw       r10, 0xC4(r31)
  stw       r9, 0x1EC(r31)
  stw       r8, 0x13C(r31)
  stw       r7, 0x140(r31)
  stw       r0, 0x144(r31)
  bl        0x2F5E14
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x148(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x13C
  stw       r3, 0x160(r31)
  addi      r3, r4, 0x34
  addi      r5, r5, 0x3031
  stw       r6, 0x168(r31)
  subi      r6, r2, 0x6740
  stw       r0, 0x16C(r31)
  bl        0x2F5DD8
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x170(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x13C
  stw       r3, 0x188(r31)
  addi      r3, r4, 0x5C
  addi      r5, r5, 0x3032
  stw       r6, 0x190(r31)
  subi      r6, r2, 0x673C
  stw       r0, 0x194(r31)
  bl        0x2F5D9C
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x198(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x13C
  stw       r3, 0x1B0(r31)
  addi      r3, r4, 0x84
  addi      r5, r5, 0x3033
  stw       r6, 0x1B8(r31)
  addi      r6, r30, 0x28
  stw       r0, 0x1BC(r31)
  bl        0x2F5D60
  lis       r3, 0x804B
  lis       r5, 0x6630
  subi      r0, r3, 0x5370
  li        r6, 0xFF
  stw       r0, 0x1C0(r31)
  lis       r3, 0x804B
  li        r9, 0
  addi      r7, r31, 0x224
  stw       r6, 0x1D8(r31)
  subi      r8, r3, 0x3B6C
  addi      r4, r31, 0x1F0
  addi      r0, r30, 0x78
  stw       r9, 0x1E0(r31)
  addi      r3, r4, 0xC
  addi      r5, r5, 0x3030
  stw       r6, 0x1E4(r31)
  addi      r6, r30, 0x84
  stw       r8, 0x1EC(r31)
  stw       r7, 0x1F0(r31)
  stw       r9, 0x1F4(r31)
  stw       r0, 0x1F8(r31)
  bl        0x2F5D08
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5344
  lfs       f0, -0x670C(r2)
  stw       r0, 0x1FC(r31)
  lis       r3, 0x804B
  lfs       f1, -0x676C(r2)
  li        r10, 0x9B
  stfs      f0, 0x214(r31)
  subi      r9, r3, 0x3B04
  addi      r4, r31, 0x228
  lfs       f0, -0x6708(r2)
  stfs      f1, 0x21C(r31)
  addi      r8, r31, 0x2D4
  li        r7, 0
  addi      r0, r30, 0x1C
  stfs      f0, 0x220(r31)
  addi      r3, r4, 0xC
  addi      r5, r5, 0x3030
  subi      r6, r2, 0x6744
  stw       r10, 0x160(r31)
  stw       r10, 0x188(r31)
  stw       r10, 0x1B0(r31)
  stw       r9, 0x2D8(r31)
  stw       r8, 0x228(r31)
  stw       r7, 0x22C(r31)
  stw       r0, 0x230(r31)
  bl        0x2F5C98
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x234(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x228
  stw       r3, 0x24C(r31)
  addi      r3, r4, 0x34
  addi      r5, r5, 0x3031
  stw       r6, 0x254(r31)
  subi      r6, r2, 0x6740
  stw       r0, 0x258(r31)
  bl        0x2F5C5C
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x25C(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x228
  stw       r3, 0x274(r31)
  addi      r3, r4, 0x5C
  addi      r5, r5, 0x3032
  stw       r6, 0x27C(r31)
  subi      r6, r2, 0x673C
  stw       r0, 0x280(r31)
  bl        0x2F5C20
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x284(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x228
  stw       r3, 0x29C(r31)
  addi      r3, r4, 0x84
  addi      r5, r5, 0x3033
  stw       r6, 0x2A4(r31)
  addi      r6, r30, 0x28
  stw       r0, 0x2A8(r31)
  bl        0x2F5BE4
  lis       r3, 0x804B
  lis       r6, 0x804B
  subi      r0, r3, 0x5370
  lis       r5, 0x7538
  stw       r0, 0x2AC(r31)
  li        r11, 0xFF
  subi      r9, r6, 0x3B1C
  lis       r3, 0x804B
  stw       r11, 0x2C4(r31)
  li        r10, 0
  subi      r8, r3, 0x3B04
  addi      r4, r31, 0x2DC
  stw       r10, 0x2CC(r31)
  addi      r7, r31, 0x388
  addi      r0, r30, 0x1C
  addi      r3, r4, 0xC
  stw       r11, 0x2D0(r31)
  addi      r5, r5, 0x3030
  subi      r6, r2, 0x6744
  stw       r9, 0x2D8(r31)
  stw       r11, 0x24C(r31)
  stw       r11, 0x274(r31)
  stw       r11, 0x29C(r31)
  stw       r8, 0x38C(r31)
  stw       r7, 0x2DC(r31)
  stw       r10, 0x2E0(r31)
  stw       r0, 0x2E4(r31)
  bl        0x2F5B74
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x2E8(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x2DC
  stw       r3, 0x300(r31)
  addi      r3, r4, 0x34
  addi      r5, r5, 0x3031
  stw       r6, 0x308(r31)
  subi      r6, r2, 0x6740
  stw       r0, 0x30C(r31)
  bl        0x2F5B38
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x310(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x2DC
  stw       r3, 0x328(r31)
  addi      r3, r4, 0x5C
  addi      r5, r5, 0x3032
  stw       r6, 0x330(r31)
  subi      r6, r2, 0x673C
  stw       r0, 0x334(r31)
  bl        0x2F5AFC
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x338(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x2DC
  stw       r3, 0x350(r31)
  addi      r3, r4, 0x84
  addi      r5, r5, 0x3033
  stw       r6, 0x358(r31)
  addi      r6, r30, 0x28
  stw       r0, 0x35C(r31)
  bl        0x2F5AC0
  lis       r4, 0x804B
  lis       r3, 0x804B
  subi      r0, r4, 0x5370
  li        r6, 0xFF
  stw       r0, 0x360(r31)
  li        r5, 0
  subi      r4, r3, 0x3B28
  li        r0, 0x20
  stw       r6, 0x378(r31)
  addi      r3, r31, 0x390
  stw       r5, 0x380(r31)
  stw       r6, 0x384(r31)
  stw       r4, 0x38C(r31)
  stw       r0, 0x300(r31)
  stw       r0, 0x328(r31)
  stw       r0, 0x350(r31)
  bl        -0x8A8
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x3B34
  li        r6, 0
  stw       r0, 0x554(r31)
  addi      r3, r31, 0x550
  addi      r0, r30, 0x1C
  addi      r4, r31, 0x4A4
  stw       r3, 0x4A4(r31)
  addi      r3, r4, 0xC
  addi      r5, r5, 0x3030
  stw       r6, 0x4A8(r31)
  subi      r6, r2, 0x6744
  stw       r0, 0x4AC(r31)
  bl        0x2F5A40
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x4B0(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x4A4
  stw       r3, 0x4C8(r31)
  addi      r3, r4, 0x34
  addi      r5, r5, 0x3031
  stw       r6, 0x4D0(r31)
  subi      r6, r2, 0x6740
  stw       r0, 0x4D4(r31)
  bl        0x2F5A04
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x4D8(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x4A4
  stw       r3, 0x4F0(r31)
  addi      r3, r4, 0x5C
  addi      r5, r5, 0x3032
  stw       r6, 0x4F8(r31)
  subi      r6, r2, 0x673C
  stw       r0, 0x4FC(r31)
  bl        0x2F59C8
  lis       r3, 0x804B
  lis       r5, 0x7538
  subi      r0, r3, 0x5370
  li        r6, 0
  stw       r0, 0x500(r31)
  li        r3, 0x7F
  li        r0, 0xFF
  addi      r4, r31, 0x4A4
  stw       r3, 0x518(r31)
  addi      r3, r4, 0x84
  addi      r5, r5, 0x3033
  stw       r6, 0x520(r31)
  addi      r6, r30, 0x28
  stw       r0, 0x524(r31)
  bl        0x2F598C
  lis       r3, 0x804B
  li        r6, 0xFF
  subi      r0, r3, 0x5370
  li        r5, 0
  stw       r0, 0x528(r31)
  li        r4, 0x20
  li        r0, 0x80
  mr        r3, r31
  stw       r6, 0x540(r31)
  stw       r5, 0x548(r31)
  stw       r6, 0x54C(r31)
  stw       r4, 0x4C8(r31)
  stw       r4, 0x4F0(r31)
  stw       r4, 0x518(r31)
  stw       r0, 0x540(r31)
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
 * Address:	........
 * Size:	0000CC
 */
void Game::GameLightSpotSetting::read( (Stream &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8011DD24
 * Size:	000044
 */
void Game::GameSpotLightSetting::read( (Stream &))
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
  bl        0x2F5AB4
  mr        r4, r31
  addi      r3, r30, 0xB4
  bl        0x2F5AA8
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
 * Address:	8011DD68
 * Size:	0001E0
 */
void Game::GameLightMgrSetting::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r6, 0x804B
  lis       r5, 0x6630
  stw       r0, 0x24(r1)
  lis       r4, 0x804F
  li        r12, 0
  subi      r11, r2, 0x6704
  stmw      r26, 0x8(r1)
  subi      r28, r4, 0x4AD8
  mr        r30, r3
  subi      r10, r6, 0x3B80
  addi      r29, r30, 0x1C
  addi      r5, r5, 0x3030
  addi      r7, r29, 0x9C
  addi      r4, r29, 0x18
  stw       r28, 0x0(r3)
  lis       r3, 0x8048
  subi      r31, r3, 0x4D40
  stw       r12, 0x10(r30)
  lis       r3, 0x804B
  subi      r8, r3, 0x3B50
  addi      r9, r31, 0x90
  stw       r12, 0xC(r30)
  addi      r0, r31, 0x44
  addi      r3, r4, 0xC
  addi      r6, r31, 0x50
  stw       r12, 0x8(r30)
  stw       r12, 0x4(r30)
  stw       r11, 0x14(r30)
  stw       r10, 0x0(r30)
  stb       r12, 0x18(r30)
  stw       r28, 0x1C(r30)
  stw       r12, 0x2C(r30)
  stw       r12, 0x28(r30)
  stw       r12, 0x24(r30)
  stw       r12, 0x20(r30)
  stw       r9, 0x30(r30)
  stw       r8, 0x1C(r30)
  stw       r7, 0x34(r30)
  stw       r12, 0x38(r30)
  stw       r0, 0x3C(r30)
  bl        0x2F5848
  lis       r3, 0x804B
  lis       r5, 0x6630
  subi      r0, r3, 0x5344
  addi      r4, r29, 0x18
  stw       r0, 0x24(r29)
  addi      r3, r4, 0x34
  lfs       f0, -0x6720(r2)
  addi      r5, r5, 0x3031
  lfs       f1, -0x676C(r2)
  addi      r6, r31, 0x60
  stfs      f0, 0x3C(r29)
  lfs       f0, -0x671C(r2)
  stfs      f1, 0x44(r29)
  stfs      f0, 0x48(r29)
  bl        0x2F580C
  lis       r3, 0x804B
  lis       r5, 0x6630
  subi      r0, r3, 0x5344
  addi      r4, r29, 0x18
  stw       r0, 0x4C(r29)
  addi      r3, r4, 0x5C
  lfs       f0, -0x6718(r2)
  addi      r5, r5, 0x3032
  lfs       f1, -0x676C(r2)
  addi      r6, r31, 0x6C
  stfs      f0, 0x64(r29)
  lfs       f0, -0x6714(r2)
  stfs      f1, 0x6C(r29)
  stfs      f0, 0x70(r29)
  bl        0x2F57D0
  lis       r3, 0x804B
  lis       r4, 0x8012
  subi      r0, r3, 0x5344
  lfs       f0, -0x6710(r2)
  stw       r0, 0x74(r29)
  lis       r3, 0x8012
  subi      r5, r3, 0x2A74
  lfs       f1, -0x676C(r2)
  stfs      f0, 0x8C(r29)
  subi      r4, r4, 0x3320
  lfs       f0, -0x6714(r2)
  addi      r3, r29, 0xA0
  stfs      f1, 0x94(r29)
  li        r6, 0x4B0
  li        r7, 0x5
  stfs      f0, 0x98(r29)
  bl        -0x5C690
  lis       r3, 0x804B
  li        r28, 0
  subi      r27, r3, 0x3BD4
  mr        r26, r28

.loc_0x178:
  lwz       r5, 0x0(r27)
  addi      r0, r26, 0xB4
  addi      r4, r26, 0xA0
  mr        r3, r29
  stwx      r5, r29, r0
  add       r4, r29, r4
  bl        0x2F3510
  addi      r28, r28, 0x1
  addi      r26, r26, 0x4B0
  cmpwi     r28, 0x5
  addi      r27, r27, 0x4
  blt+      .loc_0x178
  addi      r3, r30, 0x182C
  addi      r4, r31, 0xA0
  bl        -0x92C
  addi      r3, r30, 0x1D84
  addi      r4, r31, 0xB0
  bl        -0x938
  mr        r3, r30
  bl        0xF8
  mr        r3, r30
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8011DF48
 * Size:	000060
 */
void Game::GameLightSpotSetting::__dt(void)
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
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x3B60
  stw       r0, 0x0(r30)
  bl        0x2F3610
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0xF9ED4

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
 * Address:	8011DFA8
 * Size:	00007C
 */
void Game::GameLightSunSetting::__dt(void)
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
  beq-      .loc_0x60
  lis       r3, 0x804B
  lis       r4, 0x8012
  subi      r0, r3, 0x3B50
  li        r5, 0x4B0
  stw       r0, 0x0(r30)
  addi      r3, r30, 0xA0
  subi      r4, r4, 0x2A74
  li        r6, 0x5
  bl        -0x5C824
  mr        r3, r30
  li        r4, 0
  bl        0x2F3594
  extsh.    r0, r31
  ble-      .loc_0x60
  mr        r3, r30
  bl        -0xF9F50

.loc_0x60:
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
 * Address:	8011E024
 * Size:	000074
 */
void Game::GameLightMgrSetting::updateNode(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x1C
  bl        0x2F3594
  addi      r3, r31, 0x182C
  bl        0x2F358C
  addi      r3, r31, 0x1D84
  bl        0x2F3584
  lbz       r0, 0x18(r31)
  cmplwi    r0, 0
  bne-      .loc_0x48
  mr        r3, r31
  addi      r4, r31, 0x1C
  bl        0x2F33A4
  b         .loc_0x60

.loc_0x48:
  mr        r3, r31
  addi      r4, r31, 0x182C
  bl        0x2F3394
  mr        r3, r31
  addi      r4, r31, 0x1D84
  bl        0x2F3388

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
 * Address:	8011E098
 * Size:	0002F0
 */
void Game::GameLightMgrSetting::read( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  mr        r29, r4
  stw       r28, 0x20(r1)
  mr        r28, r3
  addi      r3, r1, 0x14
  bl        0x2F51B0
  mr        r4, r29
  addi      r3, r1, 0x14
  bl        0x2F5424
  lis       r4, 0x3030
  addi      r3, r1, 0x14
  addi      r4, r4, 0x3031
  bl        0x2F536C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x7C
  lwz       r7, 0x14(r1)
  mr        r3, r28
  lwz       r6, 0x18(r1)
  mr        r5, r29
  lwz       r0, 0x1C(r1)
  addi      r4, r1, 0x8
  stw       r7, 0x8(r1)
  stw       r6, 0xC(r1)
  stw       r0, 0x10(r1)
  bl        .loc_0x2F0
  b         .loc_0x284

.loc_0x7C:
  mr        r3, r29
  bl        0x2F6384
  stb       r3, 0x18(r28)
  lbz       r0, 0x18(r28)
  cmplwi    r0, 0
  bne-      .loc_0x14C
  mr        r4, r29
  addi      r3, r28, 0x34
  bl        0x2F56C0
  li        r31, 0
  addi      r30, r28, 0x1C

.loc_0xA8:
  addi      r3, r30, 0xB8
  mr        r4, r29
  lwz       r12, 0x168(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x16C
  mr        r4, r29
  lwz       r12, 0x21C(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x220
  mr        r4, r29
  lwz       r12, 0x2D0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x2D4
  mr        r4, r29
  lwz       r12, 0x384(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x388
  mr        r4, r29
  lwz       r12, 0x498(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x49C
  mr        r4, r29
  lwz       r12, 0x54C(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x1
  addi      r30, r30, 0x4B0
  cmpwi     r31, 0x5
  blt+      .loc_0xA8
  b         .loc_0x284

.loc_0x14C:
  mr        r4, r29
  addi      r3, r28, 0x1844
  bl        0x2F5608
  addi      r3, r28, 0x187C
  mr        r4, r29
  lwz       r12, 0x192C(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r28, 0x1968
  mr        r4, r29
  lwz       r12, 0x1A18(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r28, 0x1A54
  mr        r4, r29
  lwz       r12, 0x1B04(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r28, 0x1B08
  mr        r4, r29
  lwz       r12, 0x1BB8(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r28, 0x1BBC
  mr        r4, r29
  lwz       r12, 0x1CCC(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r28, 0x1CD0
  mr        r4, r29
  lwz       r12, 0x1D80(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r28, 0x1D9C
  bl        0x2F556C
  addi      r3, r28, 0x1DD4
  mr        r4, r29
  lwz       r12, 0x1E84(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r28, 0x1EC0
  mr        r4, r29
  lwz       r12, 0x1F70(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r28, 0x1FAC
  mr        r4, r29
  lwz       r12, 0x205C(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r28, 0x2060
  mr        r4, r29
  lwz       r12, 0x2110(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r28, 0x2114
  mr        r4, r29
  lwz       r12, 0x2224(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r28, 0x2228
  mr        r4, r29
  lwz       r12, 0x22D8(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x284:
  addi      r3, r28, 0x1C
  bl        0x2F32B0
  addi      r3, r28, 0x182C
  bl        0x2F32A8
  addi      r3, r28, 0x1D84
  bl        0x2F32A0
  lbz       r0, 0x18(r28)
  cmplwi    r0, 0
  bne-      .loc_0x2B8
  mr        r3, r28
  addi      r4, r28, 0x1C
  bl        0x2F30C0
  b         .loc_0x2D0

.loc_0x2B8:
  mr        r3, r28
  addi      r4, r28, 0x182C
  bl        0x2F30B0
  mr        r3, r28
  addi      r4, r28, 0x1D84
  bl        0x2F30A4

.loc_0x2D0:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x2F0:
*/
}

/*
 * --INFO--
 * Address:	8011E388
 * Size:	0001E0
 */
void Game::GameLightMgrSetting::readOldVersion( (ID32, Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r7, 0x3030
  lwz       r6, 0x8(r4)
  stw       r0, 0x24(r1)
  addi      r0, r7, 0x3030
  cmpw      r6, r0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  stw       r29, 0x14(r1)
  mr        r29, r5
  beq-      .loc_0x38
  b         .loc_0x1A8

.loc_0x38:
  mr        r3, r29
  bl        0x2F60D8
  stb       r3, 0x18(r30)
  lbz       r0, 0x18(r30)
  cmplwi    r0, 0
  bne-      .loc_0x108
  mr        r4, r29
  addi      r3, r30, 0x34
  bl        0x2F5414
  li        r31, 0
  addi      r30, r30, 0x1C

.loc_0x64:
  addi      r3, r30, 0xB8
  mr        r4, r29
  lwz       r12, 0x168(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x16C
  mr        r4, r29
  lwz       r12, 0x21C(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x220
  mr        r4, r29
  lwz       r12, 0x2D0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x2D4
  mr        r4, r29
  lwz       r12, 0x384(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x388
  mr        r4, r29
  lwz       r12, 0x498(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x49C
  mr        r4, r29
  lwz       r12, 0x54C(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x1
  addi      r30, r30, 0x4B0
  cmpwi     r31, 0x5
  blt+      .loc_0x64
  b         .loc_0x1C4

.loc_0x108:
  mr        r4, r29
  addi      r3, r30, 0x1844
  bl        0x2F535C
  addi      r3, r30, 0x187C
  mr        r4, r29
  lwz       r12, 0x192C(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x1968
  mr        r4, r29
  lwz       r12, 0x1A18(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x1A54
  mr        r4, r29
  lwz       r12, 0x1B04(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x1B08
  mr        r4, r29
  lwz       r12, 0x1BB8(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x1BBC
  mr        r4, r29
  lwz       r12, 0x1CCC(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x1CD0
  mr        r4, r29
  lwz       r12, 0x1D80(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1C4

.loc_0x1A8:
  lis       r3, 0x8048
  lis       r4, 0x8048
  subi      r5, r4, 0x4C6C
  subi      r3, r3, 0x4C80
  li        r4, 0x1AB
  crclr     6, 0x6
  bl        -0xF3F08

.loc_0x1C4:
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
 * Address:	........
 * Size:	00006C
 */
void Game::GameLightEventNode::start( (Game::GameLightEventArg &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8011E568
 * Size:	0001F4
 */
void Game::GameLightEventNode::update( (Game::GameLightMgr *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r0, 0x4C(r3)
  cmpwi     r0, 0x2
  beq-      .loc_0xBC
  bge-      .loc_0x40
  cmpwi     r0, 0x1
  bge-      .loc_0x4C
  b         .loc_0x1D4

.loc_0x40:
  cmpwi     r0, 0x4
  bge-      .loc_0x1D4
  b         .loc_0x15C

.loc_0x4C:
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x40(r29)
  lfs       f0, 0x54(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x40(r29)
  lfs       f1, 0x40(r29)
  lfs       f0, 0x28(r29)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x80
  stfs      f0, 0x40(r29)
  lfs       f0, -0x66FC(r2)
  stfs      f0, 0x44(r29)
  b         .loc_0x88

.loc_0x80:
  fdivs     f0, f1, f0
  stfs      f0, 0x44(r29)

.loc_0x88:
  lfs       f1, -0x66FC(r2)
  lfs       f0, 0x44(r29)
  fcmpu     cr0, f1, f0
  bne-      .loc_0xA8
  lfs       f0, -0x676C(r2)
  li        r0, 0x2
  stfs      f0, 0x40(r29)
  stw       r0, 0x4C(r29)

.loc_0xA8:
  mr        r3, r29
  mr        r4, r30
  li        r5, 0x1
  bl        .loc_0x1F4
  b         .loc_0x1D4

.loc_0xBC:
  lwz       r3, -0x6514(r13)
  lfs       f2, 0x40(r29)
  lfs       f1, 0x54(r3)
  lfs       f0, -0x66F8(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x40(r29)
  lfs       f1, 0x40(r29)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xE8
  lfs       f0, -0x676C(r2)
  stfs      f0, 0x40(r29)

.loc_0xE8:
  lfs       f2, -0x66EC(r2)
  lfs       f1, 0x40(r29)
  lfs       f0, -0x66E8(r2)
  fmuls     f1, f2, f1
  fmuls     f1, f1, f0
  bl        0x2F3134
  lfs       f2, -0x66F0(r2)
  lfs       f0, -0x66F4(r2)
  fmadds    f0, f2, f1, f0
  stfs      f0, 0x44(r29)
  lbz       r0, 0x18(r29)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x148
  mr        r3, r29
  mr        r4, r30
  li        r5, 0x1
  bl        .loc_0x1F4
  lfs       f1, 0x44(r29)
  li        r0, 0x3
  lfs       f0, -0x676C(r2)
  stfs      f1, 0x48(r29)
  stfs      f0, 0x40(r29)
  stw       r0, 0x4C(r29)
  b         .loc_0x1D4

.loc_0x148:
  mr        r3, r29
  mr        r4, r30
  li        r5, 0x1
  bl        .loc_0x1F4
  b         .loc_0x1D4

.loc_0x15C:
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x40(r29)
  lfs       f0, 0x54(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x40(r29)
  lfs       f1, 0x40(r29)
  lfs       f0, 0x2C(r29)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x190
  stfs      f0, 0x40(r29)
  lfs       f0, -0x676C(r2)
  stfs      f0, 0x44(r29)
  b         .loc_0x1A8

.loc_0x190:
  fdivs     f0, f1, f0
  lfs       f1, -0x66FC(r2)
  lfs       f2, 0x48(r29)
  fsubs     f0, f1, f0
  fmuls     f0, f2, f0
  stfs      f0, 0x44(r29)

.loc_0x1A8:
  mr        r3, r29
  mr        r4, r30
  li        r5, 0
  bl        .loc_0x1F4
  lfs       f1, -0x676C(r2)
  lfs       f0, 0x44(r29)
  fcmpu     cr0, f1, f0
  bne-      .loc_0x1D4
  li        r0, 0
  li        r31, 0x1
  stw       r0, 0x4C(r29)

.loc_0x1D4:
  lwz       r0, 0x24(r1)
  mr        r3, r31
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x1F4:
*/
}

/*
 * --INFO--
 * Address:	8011E75C
 * Size:	00037C
 */
void Game::GameLightEventNode::updateCommon( (Game::GameLightMgr *, bool))
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
  rlwinm.   r0,r5,0,24,31
  lfs       f31, -0x66E4(r2)
  mr        r30, r3
  mr        r31, r4
  beq-      .loc_0x124
  lbz       r0, 0x18(r30)
  rlwinm.   r0,r0,0,28,28
  beq-      .loc_0xD0
  lwz       r0, 0x38(r30)
  cmplwi    r0, 0
  beq-      .loc_0xD0
  lfs       f1, 0x3C(r30)
  lfs       f0, -0x676C(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xD0
  lwz       r4, 0x233C(r31)
  cmplwi    r4, 0
  beq-      .loc_0xD0
  lwz       r12, 0x0(r4)
  addi      r3, r1, 0xC
  lwz       r12, 0x4C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x38(r30)
  lfs       f0, 0x10(r1)
  lfs       f1, 0x4(r3)
  lfs       f3, 0x0(r3)
  fsubs     f4, f1, f0
  lfs       f0, 0xC(r1)
  lfs       f2, 0x8(r3)
  lfs       f1, 0x14(r1)
  fsubs     f3, f3, f0
  fmuls     f0, f4, f4
  fsubs     f1, f2, f1
  fmadds    f0, f3, f3, f0
  fmadds    f1, f1, f1, f0
  bl        0x2F2FFC
  lfs       f0, 0x3C(r30)
  lfs       f2, -0x66FC(r2)
  fdivs     f1, f1, f0
  lfs       f0, -0x676C(r2)
  fsubs     f31, f2, f1
  fcmpo     cr0, f31, f0
  bge-      .loc_0xD0
  fmr       f31, f0

.loc_0xD0:
  lfs       f1, -0x66E0(r2)
  lfs       f0, 0x44(r30)
  fmuls     f1, f1, f0
  bl        0x2F2F60
  lfs       f2, -0x66FC(r2)
  lfs       f0, -0x676C(r2)
  fsubs     f2, f2, f1
  lfs       f1, -0x6770(r2)
  fcmpo     cr0, f31, f0
  fmuls     f1, f1, f2
  stfs      f1, 0x44(r30)
  cror      2, 0x1, 0x2
  bne-      .loc_0x124
  fcmpo     cr0, f31, f0
  fmr       f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x118
  fmr       f1, f31

.loc_0x118:
  lfs       f0, 0x44(r30)
  fmuls     f0, f0, f1
  stfs      f0, 0x44(r30)

.loc_0x124:
  lbz       r0, 0x19(r30)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x184
  lwz       r5, 0x50(r31)
  mr        r3, r30
  addi      r4, r1, 0x8
  lbz       r0, 0x34(r5)
  stb       r0, 0x8(r1)
  lbz       r0, 0x35(r5)
  stb       r0, 0x9(r1)
  lbz       r0, 0x36(r5)
  stb       r0, 0xA(r1)
  lbz       r0, 0x37(r5)
  stb       r0, 0xB(r1)
  bl        .loc_0x37C
  lwz       r3, 0x50(r31)
  lbz       r6, 0xB(r1)
  lbz       r5, 0xA(r1)
  lbz       r4, 0x9(r1)
  lbz       r0, 0x8(r1)
  stb       r0, 0x34(r3)
  stb       r4, 0x35(r3)
  stb       r5, 0x36(r3)
  stb       r6, 0x37(r3)

.loc_0x184:
  lbz       r0, 0x19(r30)
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0x1E4
  lwz       r5, 0x54(r31)
  mr        r3, r30
  addi      r4, r1, 0x8
  lbz       r0, 0x34(r5)
  stb       r0, 0x8(r1)
  lbz       r0, 0x35(r5)
  stb       r0, 0x9(r1)
  lbz       r0, 0x36(r5)
  stb       r0, 0xA(r1)
  lbz       r0, 0x37(r5)
  stb       r0, 0xB(r1)
  bl        .loc_0x37C
  lwz       r3, 0x54(r31)
  lbz       r6, 0xB(r1)
  lbz       r5, 0xA(r1)
  lbz       r4, 0x9(r1)
  lbz       r0, 0x8(r1)
  stb       r0, 0x34(r3)
  stb       r4, 0x35(r3)
  stb       r5, 0x36(r3)
  stb       r6, 0x37(r3)

.loc_0x1E4:
  lbz       r0, 0x19(r30)
  rlwinm.   r0,r0,0,29,29
  beq-      .loc_0x244
  lwz       r5, 0x58(r31)
  mr        r3, r30
  addi      r4, r1, 0x8
  lbz       r0, 0x34(r5)
  stb       r0, 0x8(r1)
  lbz       r0, 0x35(r5)
  stb       r0, 0x9(r1)
  lbz       r0, 0x36(r5)
  stb       r0, 0xA(r1)
  lbz       r0, 0x37(r5)
  stb       r0, 0xB(r1)
  bl        .loc_0x37C
  lwz       r3, 0x58(r31)
  lbz       r6, 0xB(r1)
  lbz       r5, 0xA(r1)
  lbz       r4, 0x9(r1)
  lbz       r0, 0x8(r1)
  stb       r0, 0x34(r3)
  stb       r4, 0x35(r3)
  stb       r5, 0x36(r3)
  stb       r6, 0x37(r3)

.loc_0x244:
  lbz       r0, 0x19(r30)
  rlwinm.   r0,r0,0,28,28
  beq-      .loc_0x29C
  lbz       r0, 0x30(r31)
  mr        r3, r30
  addi      r4, r1, 0x8
  stb       r0, 0x8(r1)
  lbz       r0, 0x31(r31)
  stb       r0, 0x9(r1)
  lbz       r0, 0x32(r31)
  stb       r0, 0xA(r1)
  lbz       r0, 0x33(r31)
  stb       r0, 0xB(r1)
  bl        .loc_0x37C
  lbz       r0, 0x8(r1)
  stb       r0, 0x30(r31)
  lbz       r0, 0x9(r1)
  stb       r0, 0x31(r31)
  lbz       r0, 0xA(r1)
  stb       r0, 0x32(r31)
  lbz       r0, 0xB(r1)
  stb       r0, 0x33(r31)

.loc_0x29C:
  lbz       r0, 0x19(r30)
  rlwinm.   r0,r0,0,27,27
  beq-      .loc_0x304
  lwz       r3, 0x2344(r31)
  addi      r4, r1, 0x8
  bl        0x3140C0
  mr        r3, r30
  addi      r4, r1, 0x8
  bl        .loc_0x37C
  lwz       r3, 0x2344(r31)
  addi      r4, r1, 0x8
  bl        0x314084
  lwz       r3, 0x2344(r31)
  lfs       f2, 0x30(r30)
  lfs       f1, 0x1C(r3)
  lfs       f3, 0x44(r30)
  bl        0x39E4
  lwz       r3, 0x2344(r31)
  stfs      f1, 0x1C(r3)
  lwz       r3, 0x2344(r31)
  lfs       f2, 0x34(r30)
  lfs       f1, 0x20(r3)
  lfs       f3, 0x44(r30)
  bl        0x39C8
  lwz       r3, 0x2344(r31)
  stfs      f1, 0x20(r3)

.loc_0x304:
  lbz       r0, 0x19(r30)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x35C
  lbz       r0, 0x2348(r31)
  mr        r3, r30
  addi      r4, r1, 0x8
  stb       r0, 0x8(r1)
  lbz       r0, 0x2349(r31)
  stb       r0, 0x9(r1)
  lbz       r0, 0x234A(r31)
  stb       r0, 0xA(r1)
  lbz       r0, 0x234B(r31)
  stb       r0, 0xB(r1)
  bl        .loc_0x37C
  lbz       r0, 0x8(r1)
  stb       r0, 0x2348(r31)
  lbz       r0, 0x9(r1)
  stb       r0, 0x2349(r31)
  lbz       r0, 0xA(r1)
  stb       r0, 0x234A(r31)
  lbz       r0, 0xB(r1)
  stb       r0, 0x234B(r31)

.loc_0x35C:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x37C:
*/
}

/*
 * --INFO--
 * Address:	8011EAD8
 * Size:	000464
 */
void Game::GameLightEventNode::calcColor( (Color4 *))
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  lbz       r0, 0x18(r3)
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0x1C0
  lbz       r0, 0x0(r4)
  lis       r6, 0x4330
  lbz       r5, 0x1(r4)
  stw       r0, 0xC(r1)
  lbz       r0, 0x2(r4)
  stw       r6, 0x8(r1)
  lfd       f4, -0x6768(r2)
  lfd       f0, 0x8(r1)
  stw       r5, 0x14(r1)
  fsubs     f1, f0, f4
  lfs       f2, 0x1C(r3)
  stw       r6, 0x10(r1)
  lfs       f3, 0x20(r3)
  lfd       f0, 0x10(r1)
  fmuls     f5, f2, f1
  lfs       f1, -0x66DC(r2)
  fsubs     f0, f0, f4
  stw       r0, 0x1C(r1)
  lfs       f2, 0x24(r3)
  fcmpo     cr0, f5, f1
  stw       r6, 0x18(r1)
  fmuls     f3, f3, f0
  lfd       f0, 0x18(r1)
  fsubs     f0, f0, f4
  fmuls     f2, f2, f0
  ble-      .loc_0x7C
  b         .loc_0x80

.loc_0x7C:
  fmr       f1, f5

.loc_0x80:
  lfs       f0, -0x676C(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xB0
  lfs       f0, -0x66DC(r2)
  lfs       f1, -0x6770(r2)
  fcmpo     cr0, f5, f0
  ble-      .loc_0xA4
  b         .loc_0xA8

.loc_0xA4:
  fmr       f0, f5

.loc_0xA8:
  fadds     f0, f1, f0
  b         .loc_0xCC

.loc_0xB0:
  lfs       f1, -0x66DC(r2)
  fcmpo     cr0, f5, f1
  ble-      .loc_0xC0
  b         .loc_0xC4

.loc_0xC0:
  fmr       f1, f5

.loc_0xC4:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f1, f0

.loc_0xCC:
  fctiwz    f0, f0
  lfs       f1, -0x66DC(r2)
  fcmpo     cr0, f3, f1
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r5,r0,0,24,31
  ble-      .loc_0xEC
  b         .loc_0xF0

.loc_0xEC:
  fmr       f1, f3

.loc_0xF0:
  lfs       f0, -0x676C(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x120
  lfs       f0, -0x66DC(r2)
  lfs       f1, -0x6770(r2)
  fcmpo     cr0, f3, f0
  ble-      .loc_0x114
  b         .loc_0x118

.loc_0x114:
  fmr       f0, f3

.loc_0x118:
  fadds     f0, f1, f0
  b         .loc_0x13C

.loc_0x120:
  lfs       f1, -0x66DC(r2)
  fcmpo     cr0, f3, f1
  ble-      .loc_0x130
  b         .loc_0x134

.loc_0x130:
  fmr       f1, f3

.loc_0x134:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f1, f0

.loc_0x13C:
  fctiwz    f0, f0
  lfs       f1, -0x66DC(r2)
  fcmpo     cr0, f2, f1
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r6,r0,0,24,31
  ble-      .loc_0x15C
  b         .loc_0x160

.loc_0x15C:
  fmr       f1, f2

.loc_0x160:
  lfs       f0, -0x676C(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x190
  lfs       f0, -0x66DC(r2)
  lfs       f1, -0x6770(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x184
  b         .loc_0x188

.loc_0x184:
  fmr       f0, f2

.loc_0x188:
  fadds     f0, f1, f0
  b         .loc_0x1AC

.loc_0x190:
  lfs       f1, -0x66DC(r2)
  fcmpo     cr0, f2, f1
  ble-      .loc_0x1A0
  b         .loc_0x1A4

.loc_0x1A0:
  fmr       f1, f2

.loc_0x1A4:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f1, f0

.loc_0x1AC:
  fctiwz    f0, f0
  stfd      f0, 0x30(r1)
  lwz       r0, 0x34(r1)
  rlwinm    r7,r0,0,24,31
  b         .loc_0x268

.loc_0x1C0:
  lfs       f1, 0x1C(r3)
  lfs       f0, -0x676C(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x1E0
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f1
  b         .loc_0x1E8

.loc_0x1E0:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f1, f0

.loc_0x1E8:
  fctiwz    f1, f0
  lfs       f2, 0x20(r3)
  lfs       f0, -0x676C(r2)
  stfd      f1, 0x30(r1)
  fcmpo     cr0, f2, f0
  lwz       r0, 0x34(r1)
  rlwinm    r5,r0,0,24,31
  cror      2, 0x1, 0x2
  bne-      .loc_0x218
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0x220

.loc_0x218:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0x220:
  fctiwz    f1, f0
  lfs       f2, 0x24(r3)
  lfs       f0, -0x676C(r2)
  stfd      f1, 0x28(r1)
  fcmpo     cr0, f2, f0
  lwz       r0, 0x2C(r1)
  rlwinm    r6,r0,0,24,31
  cror      2, 0x1, 0x2
  bne-      .loc_0x250
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0x258

.loc_0x250:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0x258:
  fctiwz    f0, f0
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r7,r0,0,24,31

.loc_0x268:
  lbz       r8, 0x0(r4)
  lis       r0, 0x4330
  rlwinm    r5,r5,0,24,31
  stw       r0, 0x30(r1)
  lfd       f5, -0x6768(r2)
  stw       r5, 0x34(r1)
  lfs       f0, 0x44(r3)
  lfd       f1, 0x30(r1)
  stw       r8, 0x2C(r1)
  fsubs     f4, f1, f5
  lfs       f1, -0x676C(r2)
  stw       r0, 0x28(r1)
  lfd       f2, 0x28(r1)
  stw       r8, 0x24(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x20(r1)
  lfd       f2, 0x20(r1)
  fsubs     f3, f4, f3
  fsubs     f2, f2, f5
  fmadds    f2, f0, f3, f2
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x2D0
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x2D8

.loc_0x2D0:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x2D8:
  fctiwz    f1, f1
  lis       r0, 0x4330
  rlwinm    r3,r6,0,24,31
  stw       r0, 0x10(r1)
  lfd       f5, -0x6768(r2)
  stfd      f1, 0x18(r1)
  lfs       f1, -0x676C(r2)
  lwz       r5, 0x1C(r1)
  stw       r3, 0x14(r1)
  stb       r5, 0x0(r4)
  lfd       f2, 0x10(r1)
  lbz       r3, 0x1(r4)
  stw       r0, 0x8(r1)
  fsubs     f4, f2, f5
  stw       r3, 0xC(r1)
  lfd       f2, 0x8(r1)
  stw       r3, 0x3C(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x38(r1)
  lfd       f2, 0x38(r1)
  fsubs     f3, f4, f3
  fsubs     f2, f2, f5
  fmadds    f2, f0, f3, f2
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x34C
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x354

.loc_0x34C:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x354:
  fctiwz    f1, f1
  lis       r0, 0x4330
  rlwinm    r3,r7,0,24,31
  stw       r0, 0x48(r1)
  lfd       f5, -0x6768(r2)
  stfd      f1, 0x40(r1)
  lfs       f1, -0x676C(r2)
  lwz       r5, 0x44(r1)
  stw       r3, 0x4C(r1)
  stb       r5, 0x1(r4)
  lfd       f2, 0x48(r1)
  lbz       r3, 0x2(r4)
  stw       r0, 0x50(r1)
  fsubs     f4, f2, f5
  stw       r3, 0x54(r1)
  lfd       f2, 0x50(r1)
  stw       r3, 0x5C(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x58(r1)
  lfd       f2, 0x58(r1)
  fsubs     f3, f4, f3
  fsubs     f2, f2, f5
  fmadds    f2, f0, f3, f2
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x3C8
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x3D0

.loc_0x3C8:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x3D0:
  fctiwz    f1, f1
  lis       r0, 0x4330
  rlwinm    r3,r4,0,24,31
  stw       r0, 0x68(r1)
  lfd       f5, -0x6768(r2)
  stfd      f1, 0x60(r1)
  lfs       f1, -0x676C(r2)
  lwz       r5, 0x64(r1)
  stw       r3, 0x6C(r1)
  stb       r5, 0x2(r4)
  lfd       f2, 0x68(r1)
  lbz       r3, 0x3(r4)
  stw       r0, 0x70(r1)
  fsubs     f4, f2, f5
  stw       r3, 0x74(r1)
  lfd       f2, 0x70(r1)
  stw       r3, 0x7C(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x78(r1)
  lfd       f2, 0x78(r1)
  fsubs     f3, f4, f3
  fsubs     f2, f2, f5
  fmadds    f2, f0, f3, f2
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x444
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0x44C

.loc_0x444:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0x44C:
  fctiwz    f0, f0
  stfd      f0, 0x80(r1)
  lwz       r0, 0x84(r1)
  stb       r0, 0x3(r4)
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	8011EF3C
 * Size:	000310
 */
void Game::GameLightMgr::__ct( (char *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r5, 0x8048
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  subi      r31, r5, 0x4D40
  stw       r30, 0x28(r1)
  mr        r30, r3
  stw       r29, 0x24(r1)
  bl        0x30CB2C
  lis       r4, 0x804B
  addi      r3, r30, 0x5C
  subi      r0, r4, 0x3BC0
  stw       r0, 0x0(r30)
  bl        -0x120C
  li        r4, 0
  lfs       f0, -0x676C(r2)
  stw       r4, 0x2338(r30)
  li        r0, 0xA0
  addi      r3, r30, 0x235C
  stw       r4, 0x233C(r30)
  stfs      f0, 0x2340(r30)
  stb       r4, 0x2348(r30)
  stb       r4, 0x2349(r30)
  stb       r4, 0x234A(r30)
  stb       r0, 0x234B(r30)
  stb       r4, 0x234C(r30)
  stb       r4, 0x234D(r30)
  bl        0x2F23E4
  addi      r3, r30, 0x2374
  bl        0x2F23DC
  lis       r4, 0x8012
  addi      r3, r30, 0x238C
  subi      r4, r4, 0xCB8
  li        r5, 0
  li        r6, 0xC
  li        r7, 0x2
  bl        -0x5D794
  lis       r4, 0x8051
  lfsu      f0, 0x41E4(r4)
  mr        r3, r30
  stfs      f0, 0x238C(r30)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x2390(r30)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x2394(r30)
  lfs       f0, 0x0(r4)
  stfs      f0, 0x2398(r30)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x239C(r30)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x23A0(r30)
  bl        0x4AC
  li        r3, 0x58
  bl        -0xFB170
  mr.       r0, r3
  beq-      .loc_0x118
  li        r0, 0xFF
  addi      r4, r31, 0xEC
  stb       r0, 0x18(r1)
  addi      r7, r1, 0x1C
  li        r5, 0x1
  li        r6, 0x2
  stb       r0, 0x19(r1)
  stb       r0, 0x1A(r1)
  stb       r0, 0x1B(r1)
  lwz       r0, 0x18(r1)
  stw       r0, 0x1C(r1)
  bl        0x30C420
  mr        r0, r3

.loc_0x118:
  stw       r0, 0x50(r30)
  li        r0, 0
  lfs       f1, -0x676C(r2)
  mr        r3, r30
  lwz       r4, 0x50(r30)
  lfs       f0, -0x66E4(r2)
  stb       r0, 0x49(r4)
  lwz       r4, 0x50(r30)
  stfs      f1, 0x28(r4)
  stfs      f0, 0x2C(r4)
  stfs      f1, 0x30(r4)
  lwz       r4, 0x50(r30)
  bl        0x30CAE0
  li        r3, 0x58
  bl        -0xFB1E8
  mr.       r0, r3
  beq-      .loc_0x198
  li        r8, 0x40
  li        r4, 0x80
  li        r0, 0xFF
  stb       r4, 0x10(r1)
  addi      r4, r31, 0xFC
  addi      r7, r1, 0x14
  stb       r8, 0x11(r1)
  li        r5, 0x2
  li        r6, 0x2
  stb       r8, 0x12(r1)
  stb       r0, 0x13(r1)
  lwz       r0, 0x10(r1)
  stw       r0, 0x14(r1)
  bl        0x30C3A0
  mr        r0, r3

.loc_0x198:
  stw       r0, 0x54(r30)
  li        r0, 0
  lfs       f1, -0x676C(r2)
  mr        r3, r30
  lwz       r4, 0x54(r30)
  lfs       f0, -0x66FC(r2)
  stb       r0, 0x49(r4)
  lwz       r4, 0x54(r30)
  stfs      f1, 0x28(r4)
  stfs      f0, 0x2C(r4)
  stfs      f1, 0x30(r4)
  lwz       r4, 0x54(r30)
  bl        0x30CA60
  li        r3, 0x58
  bl        -0xFB268
  mr.       r0, r3
  beq-      .loc_0x210
  li        r0, 0xFF
  addi      r4, r31, 0x108
  stb       r0, 0x8(r1)
  addi      r7, r1, 0xC
  li        r5, 0x80
  li        r6, 0x4
  stb       r0, 0x9(r1)
  stb       r0, 0xA(r1)
  stb       r0, 0xB(r1)
  lwz       r0, 0x8(r1)
  stw       r0, 0xC(r1)
  bl        0x30C328
  mr        r0, r3

.loc_0x210:
  stw       r0, 0x58(r30)
  mr        r3, r30
  lfs       f0, -0x66D8(r2)
  lwz       r4, 0x58(r30)
  stfs      f0, 0x4C(r4)
  lwz       r4, 0x58(r30)
  bl        0x30CA00
  li        r3, 0x28
  bl        -0xFB2C8
  mr.       r0, r3
  beq-      .loc_0x244
  bl        0x3137D0
  mr        r0, r3

.loc_0x244:
  stw       r0, 0x2344(r30)
  li        r0, 0x2
  mr        r3, r30
  lwz       r4, 0x2344(r30)
  stw       r0, 0x18(r4)
  lwz       r4, 0x2344(r30)
  bl        0x2F2270
  lwz       r3, -0x6980(r13)
  cmplwi    r3, 0
  beq-      .loc_0x274
  addi      r4, r30, 0x2348
  bl        0x1224BC

.loc_0x274:
  mr        r3, r30
  addi      r4, r30, 0x5C
  bl        0x2F2250
  li        r3, 0x330
  bl        -0xFB214
  lis       r4, 0x8012
  lis       r5, 0x8012
  subi      r4, r4, 0xD54
  li        r6, 0x50
  subi      r5, r5, 0xDB4
  li        r7, 0xA
  bl        -0x5D7EC
  stw       r3, 0x2358(r30)
  li        r31, 0
  li        r29, 0
  stw       r31, 0x236C(r30)
  stw       r31, 0x2368(r30)
  stw       r31, 0x2364(r30)
  stw       r31, 0x2360(r30)
  stw       r31, 0x2384(r30)
  stw       r31, 0x2380(r30)
  stw       r31, 0x237C(r30)
  stw       r31, 0x2378(r30)

.loc_0x2D0:
  lwz       r0, 0x2358(r30)
  addi      r3, r30, 0x2374
  add       r4, r0, r31
  bl        0x2F21F0
  addi      r29, r29, 0x1
  addi      r31, r31, 0x50
  cmplwi    r29, 0xA
  blt+      .loc_0x2D0
  lwz       r0, 0x34(r1)
  mr        r3, r30
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
 * Address:	8011F24C
 * Size:	000060
 */
void Game::GameLightEventNode::__dt(void)
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
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x3B90
  stw       r0, 0x0(r30)
  bl        0x2F230C
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0xFB1D8

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
 * Address:	8011F2AC
 * Size:	00009C
 */
void Game::GameLightEventNode::__ct(void)
{
/*
.loc_0x0:
  lis       r5, 0x804F
  li        r6, 0
  subi      r0, r5, 0x4AD8
  lis       r4, 0x804B
  stw       r0, 0x0(r3)
  subi      r5, r2, 0x66D4
  subi      r0, r4, 0x3B90
  lfs       f5, -0x66CC(r2)
  stw       r6, 0x10(r3)
  lfs       f4, -0x6770(r2)
  stw       r6, 0xC(r3)
  lfs       f3, -0x66C8(r2)
  stw       r6, 0x8(r3)
  lfs       f2, -0x676C(r2)
  stw       r6, 0x4(r3)
  lfs       f1, -0x66C4(r2)
  stw       r5, 0x14(r3)
  lfs       f0, -0x66C0(r2)
  stw       r0, 0x0(r3)
  stb       r6, 0x18(r3)
  stb       r6, 0x19(r3)
  stb       r6, 0x18(r3)
  lbz       r0, 0x18(r3)
  ori       r0, r0, 0x3
  stb       r0, 0x18(r3)
  stb       r6, 0x19(r3)
  lbz       r0, 0x19(r3)
  ori       r0, r0, 0x1
  stb       r0, 0x19(r3)
  stfs      f5, 0x1C(r3)
  stfs      f5, 0x20(r3)
  stfs      f5, 0x24(r3)
  stfs      f4, 0x28(r3)
  stfs      f3, 0x2C(r3)
  stfs      f2, 0x30(r3)
  stfs      f1, 0x34(r3)
  stw       r6, 0x38(r3)
  stfs      f0, 0x3C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8011F348
 * Size:	000004
 */
void Vector3<float>::Vector3()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8011F34C
 * Size:	0000DC
 */
void Game::GameLightMgrSetting::__dt(void)
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
  beq-      .loc_0xC0
  lis       r3, 0x804B
  addic.    r0, r30, 0x1D84
  subi      r0, r3, 0x3B80
  stw       r0, 0x0(r30)
  beq-      .loc_0x4C
  lis       r4, 0x804B
  addi      r3, r30, 0x1D84
  subi      r0, r4, 0x3B60
  li        r4, 0
  stw       r0, 0x1D84(r30)
  bl        0x2F21F4

.loc_0x4C:
  addic.    r0, r30, 0x182C
  beq-      .loc_0x6C
  lis       r4, 0x804B
  addi      r3, r30, 0x182C
  subi      r0, r4, 0x3B60
  li        r4, 0
  stw       r0, 0x182C(r30)
  bl        0x2F21D4

.loc_0x6C:
  addic.    r0, r30, 0x1C
  beq-      .loc_0xA4
  lis       r3, 0x804B
  lis       r4, 0x8012
  subi      r0, r3, 0x3B50
  li        r5, 0x4B0
  stw       r0, 0x1C(r30)
  addi      r3, r30, 0xBC
  subi      r4, r4, 0x2A74
  li        r6, 0x5
  bl        -0x5DC1C
  addi      r3, r30, 0x1C
  li        r4, 0
  bl        0x2F219C

.loc_0xA4:
  mr        r3, r30
  li        r4, 0
  bl        0x2F2190
  extsh.    r0, r31
  ble-      .loc_0xC0
  mr        r3, r30
  bl        -0xFB354

.loc_0xC0:
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
 * Address:	8011F428
 * Size:	000090
 */
void LightMgr::~LightMgr()
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
  beq-      .loc_0x74
  lis       r4, 0x804F
  addi      r3, r30, 0x34
  subi      r0, r4, 0x416C
  li        r4, -0x1
  stw       r0, 0x0(r30)
  bl        0x2F212C
  addic.    r0, r30, 0x18
  beq-      .loc_0x58
  lis       r4, 0x804B
  addi      r3, r30, 0x18
  subi      r0, r4, 0x3BA0
  li        r4, 0
  stw       r0, 0x18(r30)
  bl        0x2F210C

.loc_0x58:
  mr        r3, r30
  li        r4, 0
  bl        0x2F2100
  extsh.    r0, r31
  ble-      .loc_0x74
  mr        r3, r30
  bl        -0xFB3E4

.loc_0x74:
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
 * Address:	8011F4B8
 * Size:	00002C
 */
void Game::GameLightMgr::start(void)
{
/*
.loc_0x0:
  li        r0, 0
  lfs       f0, -0x676C(r2)
  stb       r0, 0x234C(r3)
  stb       r0, 0x234D(r3)
  lhz       r0, 0x234C(r3)
  ori       r0, r0, 0x1
  sth       r0, 0x234C(r3)
  stfs      f0, 0x2340(r3)
  stfs      f0, 0x2350(r3)
  stfs      f0, 0x2354(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8011F4E4
 * Size:	0000BC
 */
void Game::GameLightMgr::createEventLight( (Game::GameLightEventArg &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r31, 0x2384(r3)
  cmplwi    r31, 0
  beq-      .loc_0xA0
  lbz       r5, 0x0(r4)
  li        r0, 0x1
  lfs       f0, -0x676C(r2)
  mr        r3, r31
  stb       r5, 0x18(r31)
  lbz       r5, 0x1(r4)
  stb       r5, 0x19(r31)
  lfs       f1, 0x4(r4)
  stfs      f1, 0x1C(r31)
  lfs       f1, 0x8(r4)
  stfs      f1, 0x20(r31)
  lfs       f1, 0xC(r4)
  stfs      f1, 0x24(r31)
  lfs       f1, 0x10(r4)
  stfs      f1, 0x28(r31)
  lfs       f1, 0x14(r4)
  stfs      f1, 0x2C(r31)
  lfs       f1, 0x18(r4)
  stfs      f1, 0x30(r31)
  lfs       f1, 0x1C(r4)
  stfs      f1, 0x34(r31)
  lwz       r5, 0x20(r4)
  stw       r5, 0x38(r31)
  lfs       f1, 0x24(r4)
  stfs      f1, 0x3C(r31)
  stfs      f0, 0x40(r31)
  stw       r0, 0x4C(r31)
  bl        0x2F205C
  mr        r4, r31
  addi      r3, r30, 0x235C
  bl        0x2F1E88

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
 * Address:	8011F5A0
 * Size:	000048
 */
void Game::GameLightMgr::loadParm( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0x1
  stw       r0, 0xC(r4)
  lwz       r0, 0xC(r4)
  cmpwi     r0, 0x1
  bne-      .loc_0x28
  li        r0, 0
  stw       r0, 0x414(r4)

.loc_0x28:
  lwzu      r12, 0x5C(r3)
  lwz       r12, 0x10(r12)
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
 * Address:	........
 * Size:	0000BC
 */
void Game::GameLightMgr::loadParm( (char *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8011F5E8
 * Size:	001AE8
 */
void Game::GameLightMgr::calcSetting( (Game::GameLightTimeSetting *, Game::GameLightTimeSetting *, Game::GameLightTimeSetting *))
{
/*
.loc_0x0:
  stwu      r1, -0x320(r1)
  mflr      r0
  lfs       f6, -0x6770(r2)
  stw       r0, 0x324(r1)
  stw       r31, 0x31C(r1)
  mr        r31, r6
  stw       r30, 0x318(r1)
  mr        r30, r5
  stw       r29, 0x314(r1)
  mr        r29, r4
  stw       r28, 0x310(r1)
  mr        r28, r3
  lwz       r3, 0x2338(r3)
  lfs       f1, 0x214(r3)
  fcmpo     cr0, f1, f6
  bge-      .loc_0xD84
  lfs       f0, -0x66C8(r2)
  lis       r0, 0x4330
  stw       r0, 0x10(r1)
  fmuls     f0, f0, f1
  lfd       f5, -0x6768(r2)
  stw       r0, 0x18(r1)
  lfs       f1, -0x676C(r2)
  stfs      f0, 0x2340(r28)
  lwz       r4, 0x3C(r29)
  lwz       r3, 0x3C(r30)
  rlwinm    r6,r4,0,24,31
  lwz       r5, 0x64(r29)
  rlwinm    r3,r3,0,24,31
  stw       r6, 0x1C(r1)
  lwz       r4, 0x8C(r29)
  rlwinm    r5,r5,0,24,31
  stw       r3, 0x14(r1)
  lfd       f0, 0x18(r1)
  rlwinm    r7,r4,0,24,31
  lfd       f2, 0x10(r1)
  stw       r6, 0x24(r1)
  fsubs     f3, f0, f5
  fsubs     f4, f2, f5
  lwz       r3, 0xB4(r29)
  stw       r0, 0x20(r1)
  lfs       f0, 0x2340(r28)
  rlwinm    r6,r3,0,24,31
  lfd       f2, 0x20(r1)
  fsubs     f3, f4, f3
  lwz       r4, 0x64(r30)
  fsubs     f2, f2, f5
  lwz       r3, 0x8C(r30)
  lwz       r0, 0xB4(r30)
  rlwinm    r4,r4,0,24,31
  fmadds    f2, f0, f3, f2
  rlwinm    r3,r3,0,24,31
  rlwinm    r8,r0,0,24,31
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xE8
  fadds     f1, f6, f2
  b         .loc_0xEC

.loc_0xE8:
  fsubs     f1, f2, f6

.loc_0xEC:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r4, 0x34(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x30(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x30(r1)
  stw       r5, 0x3C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x38(r1)
  lfd       f2, 0x38(r1)
  stw       r5, 0x44(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x40(r1)
  lfd       f2, 0x40(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x28(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x2C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x8(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x158
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x160

.loc_0x158:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x160:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r3, 0x54(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x50(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x50(r1)
  stw       r7, 0x5C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x58(r1)
  lfd       f2, 0x58(r1)
  stw       r7, 0x64(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x60(r1)
  lfd       f2, 0x60(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x48(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x4C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x9(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x1CC
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x1D4

.loc_0x1CC:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x1D4:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r8, 0x74(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x70(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x70(r1)
  stw       r6, 0x7C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x78(r1)
  lfd       f2, 0x78(r1)
  stw       r6, 0x84(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x80(r1)
  lfd       f2, 0x80(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x68(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x6C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0xA(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x240
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0x248

.loc_0x240:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0x248:
  fctiwz    f0, f0
  lis       r0, 0x4330
  lbz       r7, 0xA(r1)
  lbz       r6, 0x9(r1)
  stfd      f0, 0x88(r1)
  lbz       r3, 0x8(r1)
  lwz       r4, 0x8C(r1)
  stw       r0, 0x90(r1)
  lfd       f5, -0x6768(r2)
  stb       r4, 0xB(r1)
  lfs       f1, -0x676C(r2)
  lwz       r5, 0x50(r28)
  stw       r0, 0x98(r1)
  stb       r3, 0x34(r5)
  stb       r6, 0x35(r5)
  stb       r7, 0x36(r5)
  stb       r4, 0x37(r5)
  lwz       r4, 0xF0(r29)
  lwz       r3, 0xF0(r30)
  rlwinm    r6,r4,0,24,31
  stw       r0, 0xA0(r1)
  rlwinm    r3,r3,0,24,31
  lwz       r4, 0x140(r29)
  stw       r3, 0x94(r1)
  lwz       r5, 0x118(r29)
  rlwinm    r7,r4,0,24,31
  stw       r6, 0x9C(r1)
  lfd       f2, 0x90(r1)
  rlwinm    r5,r5,0,24,31
  lfd       f0, 0x98(r1)
  stw       r6, 0xA4(r1)
  fsubs     f4, f2, f5
  fsubs     f3, f0, f5
  lfs       f0, 0x2340(r28)
  lfd       f2, 0xA0(r1)
  lwz       r0, 0x168(r29)
  fsubs     f3, f4, f3
  lwz       r4, 0x118(r30)
  fsubs     f2, f2, f5
  rlwinm    r6,r0,0,24,31
  lwz       r3, 0x140(r30)
  rlwinm    r4,r4,0,24,31
  fmadds    f2, f0, f3, f2
  lwz       r0, 0x168(r30)
  rlwinm    r3,r3,0,24,31
  rlwinm    r8,r0,0,24,31
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x318
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x320

.loc_0x318:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x320:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r4, 0xB4(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0xB0(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0xB0(r1)
  stw       r5, 0xBC(r1)
  fsubs     f4, f2, f5
  stw       r0, 0xB8(r1)
  lfd       f2, 0xB8(r1)
  stw       r5, 0xC4(r1)
  fsubs     f3, f2, f5
  stw       r0, 0xC0(r1)
  lfd       f2, 0xC0(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0xA8(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0xAC(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x8(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x38C
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x394

.loc_0x38C:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x394:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r3, 0xD4(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0xD0(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0xD0(r1)
  stw       r7, 0xDC(r1)
  fsubs     f4, f2, f5
  stw       r0, 0xD8(r1)
  lfd       f2, 0xD8(r1)
  stw       r7, 0xE4(r1)
  fsubs     f3, f2, f5
  stw       r0, 0xE0(r1)
  lfd       f2, 0xE0(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0xC8(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0xCC(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x9(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x400
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x408

.loc_0x400:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x408:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r8, 0xF4(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0xF0(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0xF0(r1)
  stw       r6, 0xFC(r1)
  fsubs     f4, f2, f5
  stw       r0, 0xF8(r1)
  lfd       f2, 0xF8(r1)
  stw       r6, 0x104(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x100(r1)
  lfd       f2, 0x100(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0xE8(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0xEC(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0xA(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x474
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0x47C

.loc_0x474:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0x47C:
  fctiwz    f0, f0
  lis       r0, 0x4330
  lbz       r7, 0xA(r1)
  lbz       r6, 0x9(r1)
  stfd      f0, 0x108(r1)
  lbz       r3, 0x8(r1)
  lwz       r4, 0x10C(r1)
  stw       r0, 0x110(r1)
  lfd       f5, -0x6768(r2)
  stb       r4, 0xB(r1)
  lfs       f1, -0x676C(r2)
  lwz       r5, 0x54(r28)
  stw       r0, 0x118(r1)
  stb       r3, 0x34(r5)
  stb       r6, 0x35(r5)
  stb       r7, 0x36(r5)
  stb       r4, 0x37(r5)
  lwz       r4, 0x1A4(r29)
  lwz       r3, 0x1A4(r30)
  rlwinm    r6,r4,0,24,31
  stw       r0, 0x120(r1)
  rlwinm    r3,r3,0,24,31
  lwz       r4, 0x1F4(r29)
  stw       r3, 0x114(r1)
  lwz       r5, 0x1CC(r29)
  rlwinm    r7,r4,0,24,31
  stw       r6, 0x11C(r1)
  lfd       f2, 0x110(r1)
  rlwinm    r5,r5,0,24,31
  lfd       f0, 0x118(r1)
  stw       r6, 0x124(r1)
  fsubs     f4, f2, f5
  fsubs     f3, f0, f5
  lfs       f0, 0x2340(r28)
  lfd       f2, 0x120(r1)
  lwz       r0, 0x21C(r29)
  fsubs     f3, f4, f3
  lwz       r4, 0x1CC(r30)
  fsubs     f2, f2, f5
  rlwinm    r6,r0,0,24,31
  lwz       r3, 0x1F4(r30)
  rlwinm    r4,r4,0,24,31
  fmadds    f2, f0, f3, f2
  lwz       r0, 0x21C(r30)
  rlwinm    r3,r3,0,24,31
  rlwinm    r8,r0,0,24,31
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x54C
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x554

.loc_0x54C:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x554:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r4, 0x134(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x130(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x130(r1)
  stw       r5, 0x13C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x138(r1)
  lfd       f2, 0x138(r1)
  stw       r5, 0x144(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x140(r1)
  lfd       f2, 0x140(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x128(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x12C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x8(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x5C0
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x5C8

.loc_0x5C0:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x5C8:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r3, 0x154(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x150(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x150(r1)
  stw       r7, 0x15C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x158(r1)
  lfd       f2, 0x158(r1)
  stw       r7, 0x164(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x160(r1)
  lfd       f2, 0x160(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x148(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x14C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x9(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x634
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x63C

.loc_0x634:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x63C:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r8, 0x174(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x170(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x170(r1)
  stw       r6, 0x17C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x178(r1)
  lfd       f2, 0x178(r1)
  stw       r6, 0x184(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x180(r1)
  lfd       f2, 0x180(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x168(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x16C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0xA(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x6A8
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0x6B0

.loc_0x6A8:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0x6B0:
  fctiwz    f0, f0
  lis       r0, 0x4330
  lbz       r7, 0xA(r1)
  lbz       r6, 0x9(r1)
  stfd      f0, 0x188(r1)
  lbz       r3, 0x8(r1)
  lwz       r4, 0x18C(r1)
  stw       r0, 0x190(r1)
  lfd       f5, -0x6768(r2)
  stb       r4, 0xB(r1)
  lfs       f1, -0x676C(r2)
  lwz       r5, 0x58(r28)
  stw       r0, 0x198(r1)
  stb       r3, 0x34(r5)
  stb       r6, 0x35(r5)
  stb       r7, 0x36(r5)
  stb       r4, 0x37(r5)
  lwz       r4, 0x258(r29)
  lwz       r3, 0x258(r30)
  rlwinm    r6,r4,0,24,31
  stw       r0, 0x1A0(r1)
  rlwinm    r3,r3,0,24,31
  lwz       r4, 0x2A8(r29)
  stw       r3, 0x194(r1)
  lwz       r5, 0x280(r29)
  rlwinm    r7,r4,0,24,31
  stw       r6, 0x19C(r1)
  lfd       f2, 0x190(r1)
  rlwinm    r5,r5,0,24,31
  lfd       f0, 0x198(r1)
  stw       r6, 0x1A4(r1)
  fsubs     f4, f2, f5
  fsubs     f3, f0, f5
  lfs       f0, 0x2340(r28)
  lfd       f2, 0x1A0(r1)
  lwz       r0, 0x2D0(r29)
  fsubs     f3, f4, f3
  lwz       r4, 0x280(r30)
  fsubs     f2, f2, f5
  rlwinm    r6,r0,0,24,31
  lwz       r3, 0x2A8(r30)
  rlwinm    r4,r4,0,24,31
  fmadds    f2, f0, f3, f2
  lwz       r0, 0x2D0(r30)
  rlwinm    r3,r3,0,24,31
  rlwinm    r8,r0,0,24,31
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x780
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x788

.loc_0x780:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x788:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r4, 0x1B4(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x1B0(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x1B0(r1)
  stw       r5, 0x1BC(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x1B8(r1)
  lfd       f2, 0x1B8(r1)
  stw       r5, 0x1C4(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x1C0(r1)
  lfd       f2, 0x1C0(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x1A8(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x1AC(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x8(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x7F4
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x7FC

.loc_0x7F4:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x7FC:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r3, 0x1D4(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x1D0(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x1D0(r1)
  stw       r7, 0x1DC(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x1D8(r1)
  lfd       f2, 0x1D8(r1)
  stw       r7, 0x1E4(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x1E0(r1)
  lfd       f2, 0x1E0(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x1C8(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x1CC(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x9(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x868
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x870

.loc_0x868:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x870:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r8, 0x1F4(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x1F0(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x1F0(r1)
  stw       r6, 0x1FC(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x1F8(r1)
  lfd       f2, 0x1F8(r1)
  stw       r6, 0x204(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x200(r1)
  lfd       f2, 0x200(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x1E8(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x1EC(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0xA(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x8DC
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0x8E4

.loc_0x8DC:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0x8E4:
  fctiwz    f0, f0
  lis       r0, 0x4330
  lbz       r3, 0x8(r1)
  stw       r0, 0x210(r1)
  lfd       f5, -0x6768(r2)
  stfd      f0, 0x208(r1)
  lfs       f1, -0x676C(r2)
  lwz       r4, 0x20C(r1)
  stw       r0, 0x218(r1)
  stb       r4, 0xB(r1)
  stb       r3, 0x30(r28)
  lbz       r3, 0x9(r1)
  stw       r0, 0x220(r1)
  stb       r3, 0x31(r28)
  lbz       r0, 0xA(r1)
  stb       r0, 0x32(r28)
  lbz       r0, 0xB(r1)
  stb       r0, 0x33(r28)
  lwz       r3, 0x30C(r29)
  lwz       r0, 0x30C(r30)
  rlwinm    r5,r3,0,24,31
  lwz       r4, 0x334(r29)
  rlwinm    r0,r0,0,24,31
  stw       r5, 0x21C(r1)
  lwz       r3, 0x35C(r29)
  rlwinm    r6,r4,0,24,31
  stw       r0, 0x214(r1)
  lfd       f0, 0x218(r1)
  rlwinm    r7,r3,0,24,31
  lfd       f2, 0x210(r1)
  stw       r5, 0x224(r1)
  fsubs     f3, f0, f5
  fsubs     f4, f2, f5
  lfs       f0, 0x2340(r28)
  lfd       f2, 0x220(r1)
  lwz       r5, 0x384(r29)
  fsubs     f3, f4, f3
  lwz       r4, 0x334(r30)
  fsubs     f2, f2, f5
  lwz       r3, 0x35C(r30)
  lwz       r0, 0x384(r30)
  rlwinm    r5,r5,0,24,31
  fmadds    f2, f0, f3, f2
  rlwinm    r4,r4,0,24,31
  rlwinm    r3,r3,0,24,31
  rlwinm    r8,r0,0,24,31
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x9B4
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x9BC

.loc_0x9B4:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x9BC:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r4, 0x234(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x230(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x230(r1)
  stw       r6, 0x23C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x238(r1)
  lfd       f2, 0x238(r1)
  stw       r6, 0x244(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x240(r1)
  lfd       f2, 0x240(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x228(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x22C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x8(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xA28
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0xA30

.loc_0xA28:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0xA30:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r3, 0x254(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x250(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x250(r1)
  stw       r7, 0x25C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x258(r1)
  lfd       f2, 0x258(r1)
  stw       r7, 0x264(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x260(r1)
  lfd       f2, 0x260(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x248(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x24C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x9(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xA9C
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0xAA4

.loc_0xA9C:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0xAA4:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r8, 0x274(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x270(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x270(r1)
  stw       r5, 0x27C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x278(r1)
  lfd       f2, 0x278(r1)
  stw       r5, 0x284(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x280(r1)
  lfd       f2, 0x280(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x268(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x26C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0xA(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xB10
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0xB18

.loc_0xB10:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0xB18:
  fctiwz    f0, f0
  addi      r4, r1, 0x8
  stfd      f0, 0x288(r1)
  lwz       r0, 0x28C(r1)
  stb       r0, 0xB(r1)
  lwz       r3, 0x2344(r28)
  bl        0x312990
  lfs       f2, 0x3BC(r29)
  lis       r0, 0x4330
  lfs       f0, 0x3BC(r30)
  lfs       f1, 0x2340(r28)
  fsubs     f0, f0, f2
  lwz       r3, 0x2344(r28)
  stw       r0, 0x290(r1)
  lfd       f5, -0x6768(r2)
  fmadds    f0, f1, f0, f2
  stw       r0, 0x298(r1)
  lfs       f1, -0x676C(r2)
  stw       r0, 0x2A0(r1)
  stfs      f0, 0x1C(r3)
  lfs       f3, 0x3E4(r29)
  lfs       f0, 0x3E4(r30)
  lfs       f2, 0x2340(r28)
  fsubs     f0, f0, f3
  lwz       r3, 0x2344(r28)
  fmadds    f0, f2, f0, f3
  stfs      f0, 0x20(r3)
  lwz       r3, 0x420(r29)
  lwz       r0, 0x420(r30)
  rlwinm    r5,r3,0,24,31
  lwz       r4, 0x448(r29)
  rlwinm    r0,r0,0,24,31
  stw       r5, 0x29C(r1)
  lwz       r3, 0x470(r29)
  rlwinm    r6,r4,0,24,31
  stw       r0, 0x294(r1)
  lfd       f0, 0x298(r1)
  rlwinm    r7,r3,0,24,31
  lfd       f2, 0x290(r1)
  stw       r5, 0x2A4(r1)
  fsubs     f3, f0, f5
  fsubs     f4, f2, f5
  lfs       f0, 0x2340(r28)
  lfd       f2, 0x2A0(r1)
  lwz       r5, 0x498(r29)
  fsubs     f3, f4, f3
  lwz       r4, 0x448(r30)
  fsubs     f2, f2, f5
  lwz       r3, 0x470(r30)
  lwz       r0, 0x498(r30)
  rlwinm    r5,r5,0,24,31
  fmadds    f2, f0, f3, f2
  rlwinm    r4,r4,0,24,31
  rlwinm    r3,r3,0,24,31
  rlwinm    r8,r0,0,24,31
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xC0C
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0xC14

.loc_0xC0C:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0xC14:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r4, 0x2B4(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x2B0(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x2B0(r1)
  stw       r6, 0x2BC(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x2B8(r1)
  lfd       f2, 0x2B8(r1)
  stw       r6, 0x2C4(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x2C0(r1)
  lfd       f2, 0x2C0(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x2A8(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x2AC(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x2348(r28)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xC80
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0xC88

.loc_0xC80:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0xC88:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r3, 0x2D4(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x2D0(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x2D0(r1)
  stw       r7, 0x2DC(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x2D8(r1)
  lfd       f2, 0x2D8(r1)
  stw       r7, 0x2E4(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x2E0(r1)
  lfd       f2, 0x2E0(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x2C8(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x2CC(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x2349(r28)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xCF4
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0xCFC

.loc_0xCF4:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0xCFC:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r8, 0x2F4(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x2F0(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x2F0(r1)
  stw       r5, 0x2FC(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x2F8(r1)
  lfd       f2, 0x2F8(r1)
  stw       r5, 0x304(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x300(r1)
  lfd       f2, 0x300(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x2E8(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x2EC(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x234A(r28)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xD68
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0xD70

.loc_0xD68:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0xD70:
  fctiwz    f0, f0
  stfd      f0, 0x308(r1)
  lwz       r0, 0x30C(r1)
  stb       r0, 0x234B(r28)
  b         .loc_0x1AC8

.loc_0xD84:
  fsubs     f0, f1, f6
  lis       r0, 0x4330
  lfs       f1, -0x66C8(r2)
  stw       r0, 0x308(r1)
  fmuls     f0, f1, f0
  lfd       f5, -0x6768(r2)
  stw       r0, 0x300(r1)
  lfs       f1, -0x676C(r2)
  stfs      f0, 0x2340(r28)
  lwz       r4, 0x3C(r30)
  lwz       r3, 0x3C(r31)
  rlwinm    r6,r4,0,24,31
  lwz       r5, 0x64(r30)
  rlwinm    r3,r3,0,24,31
  stw       r6, 0x304(r1)
  lwz       r4, 0x8C(r30)
  rlwinm    r7,r5,0,24,31
  stw       r3, 0x30C(r1)
  lfd       f0, 0x300(r1)
  rlwinm    r8,r4,0,24,31
  lfd       f2, 0x308(r1)
  stw       r6, 0x2FC(r1)
  fsubs     f3, f0, f5
  fsubs     f4, f2, f5
  lwz       r3, 0xB4(r30)
  stw       r0, 0x2F8(r1)
  lfs       f0, 0x2340(r28)
  rlwinm    r6,r3,0,24,31
  lfd       f2, 0x2F8(r1)
  fsubs     f3, f4, f3
  lwz       r4, 0x64(r31)
  fsubs     f2, f2, f5
  lwz       r3, 0x8C(r31)
  lwz       r0, 0xB4(r31)
  rlwinm    r4,r4,0,24,31
  fmadds    f2, f0, f3, f2
  rlwinm    r3,r3,0,24,31
  rlwinm    r5,r0,0,24,31
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xE30
  fadds     f1, f6, f2
  b         .loc_0xE34

.loc_0xE30:
  fsubs     f1, f2, f6

.loc_0xE34:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r4, 0x2EC(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x2E8(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x2E8(r1)
  stw       r7, 0x2E4(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x2E0(r1)
  lfd       f2, 0x2E0(r1)
  stw       r7, 0x2DC(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x2D8(r1)
  lfd       f2, 0x2D8(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x2F0(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x2F4(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x8(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xEA0
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0xEA8

.loc_0xEA0:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0xEA8:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r3, 0x2CC(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x2C8(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x2C8(r1)
  stw       r8, 0x2C4(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x2C0(r1)
  lfd       f2, 0x2C0(r1)
  stw       r8, 0x2BC(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x2B8(r1)
  lfd       f2, 0x2B8(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x2D0(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x2D4(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x9(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xF14
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0xF1C

.loc_0xF14:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0xF1C:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r5, 0x2AC(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x2A8(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x2A8(r1)
  stw       r6, 0x2A4(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x2A0(r1)
  lfd       f2, 0x2A0(r1)
  stw       r6, 0x29C(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x298(r1)
  lfd       f2, 0x298(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x2B0(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x2B4(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0xA(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xF88
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0xF90

.loc_0xF88:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0xF90:
  fctiwz    f0, f0
  lis       r0, 0x4330
  lbz       r7, 0xA(r1)
  lbz       r6, 0x9(r1)
  stfd      f0, 0x290(r1)
  lbz       r3, 0x8(r1)
  lwz       r4, 0x294(r1)
  stw       r0, 0x288(r1)
  lfd       f5, -0x6768(r2)
  stb       r4, 0xB(r1)
  lfs       f1, -0x676C(r2)
  lwz       r5, 0x50(r28)
  stw       r0, 0x280(r1)
  stb       r3, 0x34(r5)
  stb       r6, 0x35(r5)
  stb       r7, 0x36(r5)
  stb       r4, 0x37(r5)
  lwz       r4, 0xF0(r30)
  lwz       r3, 0xF0(r31)
  rlwinm    r6,r4,0,24,31
  stw       r0, 0x278(r1)
  rlwinm    r3,r3,0,24,31
  lwz       r4, 0x140(r30)
  stw       r3, 0x28C(r1)
  lwz       r5, 0x118(r30)
  rlwinm    r7,r4,0,24,31
  stw       r6, 0x284(r1)
  lfd       f2, 0x288(r1)
  rlwinm    r5,r5,0,24,31
  lfd       f0, 0x280(r1)
  stw       r6, 0x27C(r1)
  fsubs     f4, f2, f5
  fsubs     f3, f0, f5
  lfs       f0, 0x2340(r28)
  lfd       f2, 0x278(r1)
  lwz       r0, 0x168(r30)
  fsubs     f3, f4, f3
  lwz       r4, 0x118(r31)
  fsubs     f2, f2, f5
  rlwinm    r6,r0,0,24,31
  lwz       r3, 0x140(r31)
  rlwinm    r4,r4,0,24,31
  fmadds    f2, f0, f3, f2
  lwz       r0, 0x168(r31)
  rlwinm    r3,r3,0,24,31
  rlwinm    r8,r0,0,24,31
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x1060
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x1068

.loc_0x1060:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x1068:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r4, 0x26C(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x268(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x268(r1)
  stw       r5, 0x264(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x260(r1)
  lfd       f2, 0x260(r1)
  stw       r5, 0x25C(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x258(r1)
  lfd       f2, 0x258(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x270(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x274(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x8(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x10D4
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x10DC

.loc_0x10D4:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x10DC:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r3, 0x24C(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x248(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x248(r1)
  stw       r7, 0x244(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x240(r1)
  lfd       f2, 0x240(r1)
  stw       r7, 0x23C(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x238(r1)
  lfd       f2, 0x238(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x250(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x254(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x9(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x1148
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x1150

.loc_0x1148:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x1150:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r8, 0x22C(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x228(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x228(r1)
  stw       r6, 0x224(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x220(r1)
  lfd       f2, 0x220(r1)
  stw       r6, 0x21C(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x218(r1)
  lfd       f2, 0x218(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x230(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x234(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0xA(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x11BC
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0x11C4

.loc_0x11BC:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0x11C4:
  fctiwz    f0, f0
  lis       r0, 0x4330
  lbz       r7, 0xA(r1)
  lbz       r6, 0x9(r1)
  stfd      f0, 0x210(r1)
  lbz       r3, 0x8(r1)
  lwz       r4, 0x214(r1)
  stw       r0, 0x208(r1)
  lfd       f5, -0x6768(r2)
  stb       r4, 0xB(r1)
  lfs       f1, -0x676C(r2)
  lwz       r5, 0x54(r28)
  stw       r0, 0x200(r1)
  stb       r3, 0x34(r5)
  stb       r6, 0x35(r5)
  stb       r7, 0x36(r5)
  stb       r4, 0x37(r5)
  lwz       r4, 0x1A4(r30)
  lwz       r3, 0x1A4(r31)
  rlwinm    r6,r4,0,24,31
  stw       r0, 0x1F8(r1)
  rlwinm    r3,r3,0,24,31
  lwz       r4, 0x1F4(r30)
  stw       r3, 0x20C(r1)
  lwz       r5, 0x1CC(r30)
  rlwinm    r7,r4,0,24,31
  stw       r6, 0x204(r1)
  lfd       f2, 0x208(r1)
  rlwinm    r5,r5,0,24,31
  lfd       f0, 0x200(r1)
  stw       r6, 0x1FC(r1)
  fsubs     f4, f2, f5
  fsubs     f3, f0, f5
  lfs       f0, 0x2340(r28)
  lfd       f2, 0x1F8(r1)
  lwz       r0, 0x21C(r30)
  fsubs     f3, f4, f3
  lwz       r4, 0x1CC(r31)
  fsubs     f2, f2, f5
  rlwinm    r6,r0,0,24,31
  lwz       r3, 0x1F4(r31)
  rlwinm    r4,r4,0,24,31
  fmadds    f2, f0, f3, f2
  lwz       r0, 0x21C(r31)
  rlwinm    r3,r3,0,24,31
  rlwinm    r8,r0,0,24,31
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x1294
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x129C

.loc_0x1294:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x129C:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r4, 0x1EC(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x1E8(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x1E8(r1)
  stw       r5, 0x1E4(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x1E0(r1)
  lfd       f2, 0x1E0(r1)
  stw       r5, 0x1DC(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x1D8(r1)
  lfd       f2, 0x1D8(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x1F0(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x1F4(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x8(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x1308
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x1310

.loc_0x1308:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x1310:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r3, 0x1CC(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x1C8(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x1C8(r1)
  stw       r7, 0x1C4(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x1C0(r1)
  lfd       f2, 0x1C0(r1)
  stw       r7, 0x1BC(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x1B8(r1)
  lfd       f2, 0x1B8(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x1D0(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x1D4(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x9(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x137C
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x1384

.loc_0x137C:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x1384:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r8, 0x1AC(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x1A8(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x1A8(r1)
  stw       r6, 0x1A4(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x1A0(r1)
  lfd       f2, 0x1A0(r1)
  stw       r6, 0x19C(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x198(r1)
  lfd       f2, 0x198(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x1B0(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x1B4(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0xA(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x13F0
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0x13F8

.loc_0x13F0:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0x13F8:
  fctiwz    f0, f0
  lis       r0, 0x4330
  lbz       r7, 0xA(r1)
  lbz       r6, 0x9(r1)
  stfd      f0, 0x190(r1)
  lbz       r3, 0x8(r1)
  lwz       r4, 0x194(r1)
  stw       r0, 0x188(r1)
  lfd       f5, -0x6768(r2)
  stb       r4, 0xB(r1)
  lfs       f1, -0x676C(r2)
  lwz       r5, 0x58(r28)
  stw       r0, 0x180(r1)
  stb       r3, 0x34(r5)
  stb       r6, 0x35(r5)
  stb       r7, 0x36(r5)
  stb       r4, 0x37(r5)
  lwz       r4, 0x258(r30)
  lwz       r3, 0x258(r31)
  rlwinm    r6,r4,0,24,31
  stw       r0, 0x178(r1)
  rlwinm    r3,r3,0,24,31
  lwz       r4, 0x2A8(r30)
  stw       r3, 0x18C(r1)
  lwz       r5, 0x280(r30)
  rlwinm    r7,r4,0,24,31
  stw       r6, 0x184(r1)
  lfd       f2, 0x188(r1)
  rlwinm    r5,r5,0,24,31
  lfd       f0, 0x180(r1)
  stw       r6, 0x17C(r1)
  fsubs     f4, f2, f5
  fsubs     f3, f0, f5
  lfs       f0, 0x2340(r28)
  lfd       f2, 0x178(r1)
  lwz       r0, 0x2D0(r30)
  fsubs     f3, f4, f3
  lwz       r4, 0x280(r31)
  fsubs     f2, f2, f5
  rlwinm    r6,r0,0,24,31
  lwz       r3, 0x2A8(r31)
  rlwinm    r4,r4,0,24,31
  fmadds    f2, f0, f3, f2
  lwz       r0, 0x2D0(r31)
  rlwinm    r3,r3,0,24,31
  rlwinm    r8,r0,0,24,31
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x14C8
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x14D0

.loc_0x14C8:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x14D0:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r4, 0x16C(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x168(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x168(r1)
  stw       r5, 0x164(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x160(r1)
  lfd       f2, 0x160(r1)
  stw       r5, 0x15C(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x158(r1)
  lfd       f2, 0x158(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x170(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x174(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x8(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x153C
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x1544

.loc_0x153C:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x1544:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r3, 0x14C(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x148(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x148(r1)
  stw       r7, 0x144(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x140(r1)
  lfd       f2, 0x140(r1)
  stw       r7, 0x13C(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x138(r1)
  lfd       f2, 0x138(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x150(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x154(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x9(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x15B0
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x15B8

.loc_0x15B0:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x15B8:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r8, 0x12C(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x128(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x128(r1)
  stw       r6, 0x124(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x120(r1)
  lfd       f2, 0x120(r1)
  stw       r6, 0x11C(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x118(r1)
  lfd       f2, 0x118(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x130(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x134(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0xA(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x1624
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0x162C

.loc_0x1624:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0x162C:
  fctiwz    f0, f0
  lis       r0, 0x4330
  lbz       r3, 0x8(r1)
  stw       r0, 0x108(r1)
  lfd       f5, -0x6768(r2)
  stfd      f0, 0x110(r1)
  lfs       f1, -0x676C(r2)
  lwz       r4, 0x114(r1)
  stw       r0, 0x100(r1)
  stb       r4, 0xB(r1)
  stb       r3, 0x30(r28)
  lbz       r3, 0x9(r1)
  stw       r0, 0xF8(r1)
  stb       r3, 0x31(r28)
  lbz       r0, 0xA(r1)
  stb       r0, 0x32(r28)
  lbz       r0, 0xB(r1)
  stb       r0, 0x33(r28)
  lwz       r3, 0x30C(r30)
  lwz       r0, 0x30C(r31)
  rlwinm    r5,r3,0,24,31
  lwz       r4, 0x334(r30)
  rlwinm    r0,r0,0,24,31
  stw       r5, 0x104(r1)
  lwz       r3, 0x35C(r30)
  rlwinm    r6,r4,0,24,31
  stw       r0, 0x10C(r1)
  lfd       f0, 0x100(r1)
  rlwinm    r7,r3,0,24,31
  lfd       f2, 0x108(r1)
  stw       r5, 0xFC(r1)
  fsubs     f3, f0, f5
  fsubs     f4, f2, f5
  lfs       f0, 0x2340(r28)
  lfd       f2, 0xF8(r1)
  lwz       r5, 0x384(r30)
  fsubs     f3, f4, f3
  lwz       r4, 0x334(r31)
  fsubs     f2, f2, f5
  lwz       r3, 0x35C(r31)
  lwz       r0, 0x384(r31)
  rlwinm    r5,r5,0,24,31
  fmadds    f2, f0, f3, f2
  rlwinm    r4,r4,0,24,31
  rlwinm    r3,r3,0,24,31
  rlwinm    r8,r0,0,24,31
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x16FC
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x1704

.loc_0x16FC:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x1704:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r4, 0xEC(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0xE8(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0xE8(r1)
  stw       r6, 0xE4(r1)
  fsubs     f4, f2, f5
  stw       r0, 0xE0(r1)
  lfd       f2, 0xE0(r1)
  stw       r6, 0xDC(r1)
  fsubs     f3, f2, f5
  stw       r0, 0xD8(r1)
  lfd       f2, 0xD8(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0xF0(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0xF4(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x8(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x1770
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x1778

.loc_0x1770:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x1778:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r3, 0xCC(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0xC8(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0xC8(r1)
  stw       r7, 0xC4(r1)
  fsubs     f4, f2, f5
  stw       r0, 0xC0(r1)
  lfd       f2, 0xC0(r1)
  stw       r7, 0xBC(r1)
  fsubs     f3, f2, f5
  stw       r0, 0xB8(r1)
  lfd       f2, 0xB8(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0xD0(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0xD4(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x9(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x17E4
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x17EC

.loc_0x17E4:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x17EC:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r8, 0xAC(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0xA8(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0xA8(r1)
  stw       r5, 0xA4(r1)
  fsubs     f4, f2, f5
  stw       r0, 0xA0(r1)
  lfd       f2, 0xA0(r1)
  stw       r5, 0x9C(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x98(r1)
  lfd       f2, 0x98(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0xB0(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0xB4(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0xA(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x1858
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0x1860

.loc_0x1858:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0x1860:
  fctiwz    f0, f0
  addi      r4, r1, 0x8
  stfd      f0, 0x90(r1)
  lwz       r0, 0x94(r1)
  stb       r0, 0xB(r1)
  lwz       r3, 0x2344(r28)
  bl        0x311C48
  lfs       f2, 0x3BC(r30)
  lis       r0, 0x4330
  lfs       f0, 0x3BC(r31)
  lfs       f1, 0x2340(r28)
  fsubs     f0, f0, f2
  lwz       r3, 0x2344(r28)
  stw       r0, 0x88(r1)
  lfd       f5, -0x6768(r2)
  fmadds    f0, f1, f0, f2
  stw       r0, 0x80(r1)
  lfs       f1, -0x676C(r2)
  stw       r0, 0x78(r1)
  stfs      f0, 0x1C(r3)
  lfs       f3, 0x3E4(r30)
  lfs       f0, 0x3E4(r31)
  lfs       f2, 0x2340(r28)
  fsubs     f0, f0, f3
  lwz       r3, 0x2344(r28)
  fmadds    f0, f2, f0, f3
  stfs      f0, 0x20(r3)
  lwz       r3, 0x420(r30)
  lwz       r0, 0x420(r31)
  rlwinm    r5,r3,0,24,31
  lwz       r4, 0x448(r30)
  rlwinm    r0,r0,0,24,31
  stw       r5, 0x84(r1)
  lwz       r3, 0x470(r30)
  rlwinm    r6,r4,0,24,31
  stw       r0, 0x8C(r1)
  lfd       f0, 0x80(r1)
  rlwinm    r7,r3,0,24,31
  lfd       f2, 0x88(r1)
  stw       r5, 0x7C(r1)
  fsubs     f3, f0, f5
  fsubs     f4, f2, f5
  lfs       f0, 0x2340(r28)
  lfd       f2, 0x78(r1)
  lwz       r5, 0x498(r30)
  fsubs     f3, f4, f3
  lwz       r4, 0x448(r31)
  fsubs     f2, f2, f5
  lwz       r3, 0x470(r31)
  lwz       r0, 0x498(r31)
  rlwinm    r5,r5,0,24,31
  fmadds    f2, f0, f3, f2
  rlwinm    r4,r4,0,24,31
  rlwinm    r3,r3,0,24,31
  rlwinm    r8,r0,0,24,31
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x1954
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x195C

.loc_0x1954:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x195C:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r4, 0x6C(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x68(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x68(r1)
  stw       r6, 0x64(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x60(r1)
  lfd       f2, 0x60(r1)
  stw       r6, 0x5C(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x58(r1)
  lfd       f2, 0x58(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x70(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x74(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x2348(r28)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x19C8
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x19D0

.loc_0x19C8:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x19D0:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r3, 0x4C(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x48(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x48(r1)
  stw       r7, 0x44(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x40(r1)
  lfd       f2, 0x40(r1)
  stw       r7, 0x3C(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x38(r1)
  lfd       f2, 0x38(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x50(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x54(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x2349(r28)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x1A3C
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x1A44

.loc_0x1A3C:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x1A44:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r8, 0x2C(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x28(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x28(r1)
  stw       r5, 0x24(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x20(r1)
  lfd       f2, 0x20(r1)
  stw       r5, 0x1C(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x18(r1)
  lfd       f2, 0x18(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x30(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x34(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x234A(r28)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x1AB0
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0x1AB8

.loc_0x1AB0:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0x1AB8:
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  stb       r0, 0x234B(r28)

.loc_0x1AC8:
  lwz       r0, 0x324(r1)
  lwz       r31, 0x31C(r1)
  lwz       r30, 0x318(r1)
  lwz       r29, 0x314(r1)
  lwz       r28, 0x310(r1)
  mtlr      r0
  addi      r1, r1, 0x320
  blr
*/
}

/*
 * --INFO--
 * Address:	801210D0
 * Size:	0001F0
 */
void Game::GameLightMgr::updateSunType(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r3
  stw       r30, 0x38(r1)
  lwz       r4, 0x2338(r3)
  cmplwi    r4, 0
  beq-      .loc_0x1D8
  lwz       r0, 0x210(r4)
  cmpwi     r0, 0x2
  beq-      .loc_0x7C
  bge-      .loc_0x44
  cmpwi     r0, 0
  beq-      .loc_0x54
  bge-      .loc_0x68
  b         .loc_0x1D8

.loc_0x44:
  cmpwi     r0, 0x4
  beq-      .loc_0x1C8
  bge-      .loc_0x1D8
  b         .loc_0x1B4

.loc_0x54:
  addi      r4, r31, 0x118
  mr        r5, r4
  mr        r6, r4
  bl        -0x1B48
  b         .loc_0x1D8

.loc_0x68:
  addi      r4, r31, 0x118
  addi      r5, r31, 0x5C8
  addi      r6, r31, 0xA78
  bl        -0x1B5C
  b         .loc_0x1D8

.loc_0x7C:
  lfs       f1, 0x20C(r4)
  lfs       f0, -0x66BC(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x19C
  lhz       r0, 0x234C(r31)
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x19C
  li        r7, 0
  lfs       f6, -0x66CC(r2)
  stb       r7, 0x8(r1)
  ori       r6, r7, 0x3
  rlwinm    r0,r6,0,24,31
  lfs       f0, -0x6770(r2)
  stb       r7, 0x9(r1)
  ori       r5, r7, 0x1
  lfs       f5, -0x66C8(r2)
  ori       r3, r0, 0x1
  stb       r7, 0x8(r1)
  rlwinm    r4,r5,0,24,31
  lwz       r30, 0x2384(r31)
  rlwinm    r0,r3,0,24,31
  stb       r6, 0x8(r1)
  ori       r4, r4, 0x1
  lfs       f4, -0x676C(r2)
  cmplwi    r30, 0
  stb       r7, 0x9(r1)
  ori       r0, r0, 0x2
  lfs       f3, -0x66C4(r2)
  stb       r5, 0x9(r1)
  lfs       f2, -0x66C0(r2)
  stb       r3, 0x8(r1)
  lfs       f1, -0x66B8(r2)
  stfs      f0, 0x18(r1)
  lfs       f0, -0x66B4(r2)
  stfs      f6, 0xC(r1)
  stfs      f6, 0x10(r1)
  stfs      f6, 0x14(r1)
  stfs      f5, 0x1C(r1)
  stfs      f4, 0x20(r1)
  stfs      f3, 0x24(r1)
  stw       r7, 0x28(r1)
  stfs      f2, 0x2C(r1)
  stb       r4, 0x9(r1)
  stfs      f1, 0x18(r1)
  stfs      f1, 0x1C(r1)
  stb       r0, 0x8(r1)
  stfs      f0, 0xC(r1)
  stfs      f0, 0x10(r1)
  stfs      f0, 0x14(r1)
  beq-      .loc_0x190
  stb       r0, 0x18(r30)
  li        r0, 0x1
  mr        r3, r30
  stb       r4, 0x19(r30)
  stfs      f0, 0x1C(r30)
  stfs      f0, 0x20(r30)
  stfs      f0, 0x24(r30)
  stfs      f1, 0x28(r30)
  stfs      f1, 0x2C(r30)
  stfs      f4, 0x30(r30)
  stfs      f3, 0x34(r30)
  stw       r7, 0x38(r30)
  stfs      f2, 0x3C(r30)
  stfs      f4, 0x40(r30)
  stw       r0, 0x4C(r30)
  bl        0x2F0380
  mr        r4, r30
  addi      r3, r31, 0x235C
  bl        0x2F01AC

.loc_0x190:
  lhz       r0, 0x234C(r31)
  ori       r0, r0, 0x2
  sth       r0, 0x234C(r31)

.loc_0x19C:
  addi      r4, r31, 0xA78
  mr        r3, r31
  mr        r5, r4
  mr        r6, r4
  bl        -0x1C94
  b         .loc_0x1D8

.loc_0x1B4:
  addi      r4, r31, 0xA78
  addi      r5, r31, 0xF28
  addi      r6, r31, 0x118
  bl        -0x1CA8
  b         .loc_0x1D8

.loc_0x1C8:
  addi      r4, r31, 0x13D8
  mr        r5, r4
  mr        r6, r4
  bl        -0x1CBC

.loc_0x1D8:
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
 * Address:	801212C0
 * Size:	000C00
 */
void Game::GameLightMgr::updateSpotType(void)
{
/*
.loc_0x0:
  stwu      r1, -0x2A0(r1)
  mflr      r0
  li        r4, 0x4
  stw       r0, 0x2A4(r1)
  stw       r31, 0x29C(r1)
  mr        r31, r3
  lwz       r5, -0x6B70(r13)
  addi      r3, r5, 0x48
  bl        0xC4CF0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x54
  lfs       f2, 0x2350(r31)
  lfs       f1, -0x66B0(r2)
  lfs       f0, -0x66FC(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x2350(r31)
  lfs       f1, 0x2350(r31)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x78
  stfs      f0, 0x2350(r31)
  b         .loc_0x78

.loc_0x54:
  lfs       f2, 0x2350(r31)
  lfs       f1, -0x66B0(r2)
  lfs       f0, -0x676C(r2)
  fsubs     f1, f2, f1
  stfs      f1, 0x2350(r31)
  lfs       f1, 0x2350(r31)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x78
  stfs      f0, 0x2350(r31)

.loc_0x78:
  lfs       f1, -0x66E0(r2)
  lfs       f0, 0x2350(r31)
  fmuls     f1, f1, f0
  bl        0x2F0454
  lfs       f0, -0x66FC(r2)
  lis       r0, 0x4330
  lfs       f6, -0x6770(r2)
  fsubs     f0, f0, f1
  stw       r0, 0x10(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x18(r1)
  fmuls     f0, f6, f0
  lfs       f1, -0x676C(r2)
  stw       r0, 0x20(r1)
  stfs      f0, 0x2354(r31)
  lwz       r3, 0x1E54(r31)
  lwz       r0, 0x18FC(r31)
  rlwinm    r5,r3,0,24,31
  lwz       r4, 0x1E7C(r31)
  rlwinm    r0,r0,0,24,31
  stw       r5, 0x1C(r1)
  lwz       r3, 0x1EA4(r31)
  rlwinm    r6,r4,0,24,31
  stw       r0, 0x14(r1)
  lfd       f0, 0x18(r1)
  rlwinm    r7,r3,0,24,31
  lfd       f2, 0x10(r1)
  stw       r5, 0x24(r1)
  fsubs     f3, f0, f5
  fsubs     f4, f2, f5
  lwz       r0, 0x1ECC(r31)
  lfd       f2, 0x20(r1)
  lfs       f0, 0x2354(r31)
  rlwinm    r5,r0,0,24,31
  fsubs     f3, f4, f3
  fsubs     f2, f2, f5
  lwz       r4, 0x1924(r31)
  lwz       r3, 0x194C(r31)
  lwz       r0, 0x1974(r31)
  rlwinm    r4,r4,0,24,31
  fmadds    f2, f0, f3, f2
  rlwinm    r3,r3,0,24,31
  rlwinm    r8,r0,0,24,31
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x138
  fadds     f1, f6, f2
  b         .loc_0x13C

.loc_0x138:
  fsubs     f1, f2, f6

.loc_0x13C:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r4, 0x34(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x30(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x30(r1)
  stw       r6, 0x3C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x38(r1)
  lfd       f2, 0x38(r1)
  stw       r6, 0x44(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x40(r1)
  lfd       f2, 0x40(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x28(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x2C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x8(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x1A8
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x1B0

.loc_0x1A8:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x1B0:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r3, 0x54(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x50(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x50(r1)
  stw       r7, 0x5C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x58(r1)
  lfd       f2, 0x58(r1)
  stw       r7, 0x64(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x60(r1)
  lfd       f2, 0x60(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x48(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x4C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x9(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x21C
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x224

.loc_0x21C:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x224:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r8, 0x74(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x70(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x70(r1)
  stw       r5, 0x7C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x78(r1)
  lfd       f2, 0x78(r1)
  stw       r5, 0x84(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x80(r1)
  lfd       f2, 0x80(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x68(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x6C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0xA(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x290
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0x298

.loc_0x290:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0x298:
  fctiwz    f0, f0
  lbz       r6, 0xA(r1)
  lbz       r5, 0x9(r1)
  lbz       r0, 0x8(r1)
  stfd      f0, 0x88(r1)
  lwz       r3, 0x8C(r1)
  stb       r3, 0xB(r1)
  lwz       r4, 0x50(r31)
  stb       r0, 0x34(r4)
  stb       r5, 0x35(r4)
  stb       r6, 0x36(r4)
  stb       r3, 0x37(r4)
  lfs       f1, 0x1F08(r31)
  lfs       f2, 0x19B0(r31)
  lfs       f3, 0x2354(r31)
  bl        0xE88
  lwz       r3, 0x50(r31)
  lis       r0, 0x4330
  stw       r0, 0x90(r1)
  lfd       f5, -0x6768(r2)
  stfs      f1, 0x44(r3)
  lfs       f1, -0x676C(r2)
  lwz       r4, 0x1F40(r31)
  lwz       r3, 0x19E8(r31)
  rlwinm    r5,r4,0,24,31
  stw       r0, 0x98(r1)
  rlwinm    r3,r3,0,24,31
  lwz       r4, 0x1F68(r31)
  stw       r3, 0x94(r1)
  lwz       r3, 0x1F90(r31)
  rlwinm    r6,r4,0,24,31
  stw       r5, 0x9C(r1)
  lfd       f2, 0x90(r1)
  rlwinm    r7,r3,0,24,31
  lfd       f0, 0x98(r1)
  stw       r5, 0xA4(r1)
  fsubs     f4, f2, f5
  fsubs     f3, f0, f5
  lfs       f0, 0x2354(r31)
  stw       r0, 0xA0(r1)
  lwz       r0, 0x1FB8(r31)
  lfd       f2, 0xA0(r1)
  fsubs     f3, f4, f3
  lwz       r4, 0x1A10(r31)
  rlwinm    r5,r0,0,24,31
  fsubs     f2, f2, f5
  lwz       r3, 0x1A38(r31)
  lwz       r0, 0x1A60(r31)
  rlwinm    r4,r4,0,24,31
  rlwinm    r3,r3,0,24,31
  fmadds    f2, f0, f3, f2
  rlwinm    r8,r0,0,24,31
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x380
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x388

.loc_0x380:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x388:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r4, 0xB4(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0xB0(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0xB0(r1)
  stw       r6, 0xBC(r1)
  fsubs     f4, f2, f5
  stw       r0, 0xB8(r1)
  lfd       f2, 0xB8(r1)
  stw       r6, 0xC4(r1)
  fsubs     f3, f2, f5
  stw       r0, 0xC0(r1)
  lfd       f2, 0xC0(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0xA8(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0xAC(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x8(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x3F4
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x3FC

.loc_0x3F4:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x3FC:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r3, 0xD4(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0xD0(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0xD0(r1)
  stw       r7, 0xDC(r1)
  fsubs     f4, f2, f5
  stw       r0, 0xD8(r1)
  lfd       f2, 0xD8(r1)
  stw       r7, 0xE4(r1)
  fsubs     f3, f2, f5
  stw       r0, 0xE0(r1)
  lfd       f2, 0xE0(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0xC8(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0xCC(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x9(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x468
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x470

.loc_0x468:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x470:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r8, 0xF4(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0xF0(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0xF0(r1)
  stw       r5, 0xFC(r1)
  fsubs     f4, f2, f5
  stw       r0, 0xF8(r1)
  lfd       f2, 0xF8(r1)
  stw       r5, 0x104(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x100(r1)
  lfd       f2, 0x100(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0xE8(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0xEC(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0xA(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x4DC
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0x4E4

.loc_0x4DC:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0x4E4:
  fctiwz    f0, f0
  lis       r0, 0x4330
  lbz       r7, 0xA(r1)
  lbz       r6, 0x9(r1)
  stfd      f0, 0x108(r1)
  lbz       r3, 0x8(r1)
  lwz       r4, 0x10C(r1)
  stw       r0, 0x110(r1)
  lfd       f5, -0x6768(r2)
  stb       r4, 0xB(r1)
  lfs       f1, -0x676C(r2)
  lwz       r5, 0x54(r31)
  stw       r0, 0x118(r1)
  stb       r3, 0x34(r5)
  stb       r6, 0x35(r5)
  stb       r7, 0x36(r5)
  stb       r4, 0x37(r5)
  lwz       r4, 0x202C(r31)
  lwz       r3, 0x1AD4(r31)
  rlwinm    r6,r4,0,24,31
  stw       r0, 0x120(r1)
  rlwinm    r3,r3,0,24,31
  lwz       r4, 0x207C(r31)
  stw       r3, 0x114(r1)
  lwz       r5, 0x2054(r31)
  rlwinm    r7,r4,0,24,31
  stw       r6, 0x11C(r1)
  lfd       f2, 0x110(r1)
  rlwinm    r5,r5,0,24,31
  lfd       f0, 0x118(r1)
  stw       r6, 0x124(r1)
  fsubs     f4, f2, f5
  fsubs     f3, f0, f5
  lfs       f0, 0x2354(r31)
  lfd       f2, 0x120(r1)
  lwz       r0, 0x20A4(r31)
  fsubs     f3, f4, f3
  lwz       r4, 0x1AFC(r31)
  fsubs     f2, f2, f5
  rlwinm    r6,r0,0,24,31
  lwz       r3, 0x1B24(r31)
  rlwinm    r4,r4,0,24,31
  fmadds    f2, f0, f3, f2
  lwz       r0, 0x1B4C(r31)
  rlwinm    r3,r3,0,24,31
  rlwinm    r8,r0,0,24,31
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x5B4
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x5BC

.loc_0x5B4:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x5BC:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r4, 0x134(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x130(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x130(r1)
  stw       r5, 0x13C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x138(r1)
  lfd       f2, 0x138(r1)
  stw       r5, 0x144(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x140(r1)
  lfd       f2, 0x140(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x128(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x12C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x8(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x628
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x630

.loc_0x628:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x630:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r3, 0x154(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x150(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x150(r1)
  stw       r7, 0x15C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x158(r1)
  lfd       f2, 0x158(r1)
  stw       r7, 0x164(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x160(r1)
  lfd       f2, 0x160(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x148(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x14C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x9(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x69C
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x6A4

.loc_0x69C:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x6A4:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r8, 0x174(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x170(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x170(r1)
  stw       r6, 0x17C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x178(r1)
  lfd       f2, 0x178(r1)
  stw       r6, 0x184(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x180(r1)
  lfd       f2, 0x180(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x168(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x16C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0xA(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x710
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0x718

.loc_0x710:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0x718:
  fctiwz    f0, f0
  lis       r0, 0x4330
  lbz       r7, 0xA(r1)
  lbz       r6, 0x9(r1)
  stfd      f0, 0x188(r1)
  lbz       r3, 0x8(r1)
  lwz       r4, 0x18C(r1)
  stw       r0, 0x190(r1)
  lfd       f5, -0x6768(r2)
  stb       r4, 0xB(r1)
  lfs       f1, -0x676C(r2)
  lwz       r5, 0x58(r31)
  stw       r0, 0x198(r1)
  stb       r3, 0x34(r5)
  stb       r6, 0x35(r5)
  stb       r7, 0x36(r5)
  stb       r4, 0x37(r5)
  lwz       r4, 0x20E0(r31)
  lwz       r3, 0x1B88(r31)
  rlwinm    r6,r4,0,24,31
  stw       r0, 0x1A0(r1)
  rlwinm    r3,r3,0,24,31
  lwz       r4, 0x2130(r31)
  stw       r3, 0x194(r1)
  lwz       r5, 0x2108(r31)
  rlwinm    r7,r4,0,24,31
  stw       r6, 0x19C(r1)
  lfd       f2, 0x190(r1)
  rlwinm    r5,r5,0,24,31
  lfd       f0, 0x198(r1)
  stw       r6, 0x1A4(r1)
  fsubs     f4, f2, f5
  fsubs     f3, f0, f5
  lfs       f0, 0x2354(r31)
  lfd       f2, 0x1A0(r1)
  lwz       r0, 0x2158(r31)
  fsubs     f3, f4, f3
  lwz       r4, 0x1BB0(r31)
  fsubs     f2, f2, f5
  rlwinm    r6,r0,0,24,31
  lwz       r3, 0x1BD8(r31)
  rlwinm    r4,r4,0,24,31
  fmadds    f2, f0, f3, f2
  lwz       r0, 0x1C00(r31)
  rlwinm    r3,r3,0,24,31
  rlwinm    r8,r0,0,24,31
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x7E8
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x7F0

.loc_0x7E8:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x7F0:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r4, 0x1B4(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x1B0(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x1B0(r1)
  stw       r5, 0x1BC(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x1B8(r1)
  lfd       f2, 0x1B8(r1)
  stw       r5, 0x1C4(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x1C0(r1)
  lfd       f2, 0x1C0(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x1A8(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x1AC(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x8(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x85C
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x864

.loc_0x85C:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x864:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r3, 0x1D4(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x1D0(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x1D0(r1)
  stw       r7, 0x1DC(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x1D8(r1)
  lfd       f2, 0x1D8(r1)
  stw       r7, 0x1E4(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x1E0(r1)
  lfd       f2, 0x1E0(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x1C8(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x1CC(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x9(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x8D0
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0x8D8

.loc_0x8D0:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0x8D8:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r8, 0x1F4(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x1F0(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x1F0(r1)
  stw       r6, 0x1FC(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x1F8(r1)
  lfd       f2, 0x1F8(r1)
  stw       r6, 0x204(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x200(r1)
  lfd       f2, 0x200(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x1E8(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x1EC(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0xA(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x944
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0x94C

.loc_0x944:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0x94C:
  fctiwz    f0, f0
  lis       r0, 0x4330
  lbz       r3, 0x8(r1)
  stw       r0, 0x210(r1)
  lfd       f5, -0x6768(r2)
  stfd      f0, 0x208(r1)
  lfs       f1, -0x676C(r2)
  lwz       r4, 0x20C(r1)
  stw       r0, 0x218(r1)
  stb       r4, 0xB(r1)
  stb       r3, 0x30(r31)
  lbz       r3, 0x9(r1)
  stw       r0, 0x220(r1)
  stb       r3, 0x31(r31)
  lbz       r0, 0xA(r1)
  stb       r0, 0x32(r31)
  lbz       r0, 0xB(r1)
  stb       r0, 0x33(r31)
  lwz       r3, 0x2194(r31)
  lwz       r0, 0x1C3C(r31)
  rlwinm    r5,r3,0,24,31
  lwz       r4, 0x21BC(r31)
  rlwinm    r0,r0,0,24,31
  stw       r5, 0x21C(r1)
  lwz       r3, 0x21E4(r31)
  rlwinm    r6,r4,0,24,31
  stw       r0, 0x214(r1)
  lfd       f0, 0x218(r1)
  rlwinm    r7,r3,0,24,31
  lfd       f2, 0x210(r1)
  stw       r5, 0x224(r1)
  fsubs     f3, f0, f5
  fsubs     f4, f2, f5
  lfs       f0, 0x2354(r31)
  lfd       f2, 0x220(r1)
  lwz       r5, 0x220C(r31)
  fsubs     f3, f4, f3
  lwz       r4, 0x1C64(r31)
  fsubs     f2, f2, f5
  lwz       r3, 0x1C8C(r31)
  lwz       r0, 0x1CB4(r31)
  rlwinm    r5,r5,0,24,31
  fmadds    f2, f0, f3, f2
  rlwinm    r4,r4,0,24,31
  rlwinm    r3,r3,0,24,31
  rlwinm    r8,r0,0,24,31
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xA1C
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0xA24

.loc_0xA1C:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0xA24:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r4, 0x234(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x230(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x230(r1)
  stw       r6, 0x23C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x238(r1)
  lfd       f2, 0x238(r1)
  stw       r6, 0x244(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x240(r1)
  lfd       f2, 0x240(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x228(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x22C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x8(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xA90
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0xA98

.loc_0xA90:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0xA98:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r3, 0x254(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x250(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x250(r1)
  stw       r7, 0x25C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x258(r1)
  lfd       f2, 0x258(r1)
  stw       r7, 0x264(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x260(r1)
  lfd       f2, 0x260(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x248(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x24C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0x9(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xB04
  lfs       f1, -0x6770(r2)
  fadds     f1, f1, f2
  b         .loc_0xB0C

.loc_0xB04:
  lfs       f1, -0x6770(r2)
  fsubs     f1, f2, f1

.loc_0xB0C:
  lis       r0, 0x4330
  fctiwz    f6, f1
  stw       r8, 0x274(r1)
  lfd       f5, -0x6768(r2)
  stw       r0, 0x270(r1)
  lfs       f1, -0x676C(r2)
  lfd       f2, 0x270(r1)
  stw       r5, 0x27C(r1)
  fsubs     f4, f2, f5
  stw       r0, 0x278(r1)
  lfd       f2, 0x278(r1)
  stw       r5, 0x284(r1)
  fsubs     f3, f2, f5
  stw       r0, 0x280(r1)
  lfd       f2, 0x280(r1)
  fsubs     f3, f4, f3
  stfd      f6, 0x268(r1)
  fsubs     f2, f2, f5
  lwz       r0, 0x26C(r1)
  fmadds    f2, f0, f3, f2
  stb       r0, 0xA(r1)
  fcmpo     cr0, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xB78
  lfs       f0, -0x6770(r2)
  fadds     f0, f0, f2
  b         .loc_0xB80

.loc_0xB78:
  lfs       f0, -0x6770(r2)
  fsubs     f0, f2, f0

.loc_0xB80:
  fctiwz    f0, f0
  addi      r4, r1, 0x8
  stfd      f0, 0x288(r1)
  lwz       r0, 0x28C(r1)
  stb       r0, 0xB(r1)
  lwz       r3, 0x2344(r31)
  bl        0x310C50
  lfs       f1, 0x2244(r31)
  lfs       f2, 0x1CEC(r31)
  lfs       f3, 0x2354(r31)
  bl        0x5B4
  lwz       r3, 0x2344(r31)
  stfs      f1, 0x1C(r3)
  lfs       f1, 0x226C(r31)
  lfs       f2, 0x1D14(r31)
  lfs       f3, 0x2354(r31)
  bl        0x59C
  lwz       r3, 0x2344(r31)
  stfs      f1, 0x20(r3)
  lwz       r0, 0x1D50(r31)
  stb       r0, 0x2348(r31)
  lwz       r0, 0x1D78(r31)
  stb       r0, 0x2349(r31)
  lwz       r0, 0x1DA0(r31)
  stb       r0, 0x234A(r31)
  lwz       r0, 0x1DC8(r31)
  stb       r0, 0x234B(r31)
  lwz       r0, 0x2A4(r1)
  lwz       r31, 0x29C(r1)
  mtlr      r0
  addi      r1, r1, 0x2A0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void Game::GameLightMgr::updateEventLight(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80121EC0
 * Size:	000094
 */
void Game::GameLightMgr::update(void)
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
  lbz       r0, 0x74(r3)
  cmplwi    r0, 0
  bne-      .loc_0x30
  bl        -0xE18
  b         .loc_0x34

.loc_0x30:
  bl        -0xC30

.loc_0x34:
  lwz       r31, 0x236C(r29)
  b         .loc_0x70

.loc_0x3C:
  lwz       r30, 0x4(r31)
  mr        r3, r31
  mr        r4, r29
  bl        -0x39A0
  lwz       r0, 0x4C(r31)
  cmpwi     r0, 0
  bne-      .loc_0x6C
  mr        r3, r31
  bl        0x2EF6B4
  mr        r4, r31
  addi      r3, r29, 0x2374
  bl        0x2EF4E0

.loc_0x6C:
  mr        r31, r30

.loc_0x70:
  cmplwi    r31, 0
  bne+      .loc_0x3C
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
 * Address:	80121F54
 * Size:	000054
 */
void Game::GameLightMgr::set( (Graphics &))
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
  lwz       r4, 0x25C(r4)
  bl        .loc_0x54
  mr        r3, r30
  mr        r4, r31
  bl        0x309C20
  lwz       r3, 0x2344(r30)
  mr        r4, r31
  bl        0x310A70
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x54:
*/
}

/*
 * --INFO--
 * Address:	80121FA8
 * Size:	0002C0
 */
void Game::GameLightMgr::updatePosition( (Viewport *))
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stfd      f31, 0x70(r1)
  psq_st    f31,0x78(r1),0,0
  stfd      f30, 0x60(r1)
  psq_st    f30,0x68(r1),0,0
  stw       r31, 0x5C(r1)
  stw       r30, 0x58(r1)
  stw       r29, 0x54(r1)
  mr        r30, r3
  mr        r31, r4
  lbz       r0, 0x74(r3)
  cmplwi    r0, 0
  bne-      .loc_0x15C
  lwz       r3, 0x50(r30)
  li        r0, 0
  stb       r0, 0x49(r3)
  lwz       r3, 0x54(r30)
  stb       r0, 0x49(r3)
  lfs       f0, 0x104(r30)
  lfs       f31, 0xDC(r30)
  lwz       r3, 0x2338(r30)
  fsubs     f30, f0, f31
  bl        0x52BC
  fmadds    f3, f30, f1, f31
  lfs       f2, -0x66AC(r2)
  lfs       f0, -0x66A8(r2)
  lfs       f1, -0x66E0(r2)
  fsubs     f2, f2, f3
  fmuls     f0, f0, f2
  fmuls     f31, f1, f0
  fmr       f1, f31
  bl        0x2EF76C
  lfs       f0, 0xB4(r30)
  fmuls     f0, f1, f0
  fmr       f1, f31
  stfs      f0, 0x14(r1)
  bl        0x2EF6F0
  lfs       f2, 0xB4(r30)
  lfs       f0, -0x676C(r2)
  fmuls     f1, f1, f2
  lwz       r3, -0x6C18(r13)
  stfs      f0, 0x1C(r1)
  stfs      f1, 0x18(r1)
  lwz       r0, 0x44(r3)
  cmpwi     r0, 0x4
  bne-      .loc_0xE0
  lfs       f1, -0x66A4(r2)
  addi      r3, r1, 0x20
  li        r4, 0x78
  bl        -0x37B60
  addi      r4, r1, 0x14
  addi      r3, r1, 0x20
  mr        r5, r4
  bl        -0x374AC

.loc_0xE0:
  lwz       r3, 0x50(r30)
  lfs       f0, 0x14(r1)
  lfs       f3, -0x66E4(r2)
  stfs      f0, 0x1C(r3)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x20(r3)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x24(r3)
  lwz       r3, 0x58(r30)
  lfs       f0, 0x14(r1)
  stfs      f0, 0x1C(r3)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x20(r3)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x24(r3)
  lfs       f2, 0x14(r1)
  lfs       f1, 0x18(r1)
  lfs       f0, 0x1C(r1)
  fmuls     f2, f2, f3
  fmuls     f1, f1, f3
  fmuls     f0, f0, f3
  stfs      f2, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  lwz       r3, 0x54(r30)
  stfs      f2, 0x1C(r3)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x20(r3)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x24(r3)
  b         .loc_0x294

.loc_0x15C:
  lwz       r3, 0x50(r30)
  li        r0, 0x3
  stb       r0, 0x49(r3)
  lfs       f1, 0x1F08(r30)
  lfs       f2, 0x19B0(r30)
  lfs       f3, 0x2354(r30)
  bl        0x300
  lwz       r3, 0x50(r30)
  li        r0, 0x3
  stfs      f1, 0x44(r3)
  lwz       r3, 0x54(r30)
  stb       r0, 0x49(r3)
  lfs       f1, 0x1FF4(r30)
  lfs       f2, 0x1A9C(r30)
  lfs       f3, 0x2354(r30)
  bl        0x2DC
  lwz       r3, 0x54(r30)
  stfs      f1, 0x44(r3)
  lhz       r29, 0x18(r31)
  cmpwi     r29, 0
  blt-      .loc_0x1B8
  cmpwi     r29, 0x1
  ble-      .loc_0x1D8

.loc_0x1B8:
  lis       r3, 0x8048
  lis       r4, 0x8048
  subi      r5, r4, 0x4BF4
  mr        r6, r29
  subi      r3, r3, 0x4C80
  li        r4, 0x507
  crclr     6, 0x6
  bl        -0xF7B3C

.loc_0x1D8:
  lfs       f1, 0x1E1C(r30)
  lfs       f2, 0x18C4(r30)
  lfs       f3, 0x2354(r30)
  bl        0x290
  mulli     r0, r29, 0xC
  lfs       f3, -0x66C8(r2)
  addi      r3, r1, 0x8
  add       r29, r30, r0
  lfs       f4, 0x238C(r29)
  stfs      f4, 0x14(r1)
  lfs       f0, 0x2390(r29)
  stfs      f0, 0x18(r1)
  fadds     f0, f0, f1
  lfs       f2, 0x2394(r29)
  stfs      f2, 0x1C(r1)
  stfs      f0, 0x18(r1)
  lwz       r4, 0x50(r30)
  stfs      f4, 0x1C(r4)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x20(r4)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x24(r4)
  lwz       r4, 0x58(r30)
  lfs       f0, 0x14(r1)
  stfs      f0, 0x1C(r4)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x20(r4)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x24(r4)
  lfs       f2, 0x18(r1)
  lfs       f0, 0x14(r1)
  fnmsubs   f1, f3, f1, f2
  stfs      f1, 0x18(r1)
  lwz       r4, 0x54(r30)
  stfs      f0, 0x1C(r4)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x20(r4)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x24(r4)
  lwz       r4, 0x44(r31)
  bl        0x2F8878
  lfs       f0, 0x8(r1)
  stfs      f0, 0x238C(r29)
  lfs       f0, 0xC(r1)
  stfs      f0, 0x2390(r29)
  lfs       f0, 0x10(r1)
  stfs      f0, 0x2394(r29)

.loc_0x294:
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  psq_l     f30,0x68(r1),0,0
  lfd       f30, 0x60(r1)
  lwz       r31, 0x5C(r1)
  lwz       r30, 0x58(r1)
  lwz       r0, 0x84(r1)
  lwz       r29, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	80122268
 * Size:	000154
 */
void Game::GameLightMgr::__dt(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r30, 0x18(r1)
  mr.       r30, r3
  stw       r29, 0x14(r1)
  beq-      .loc_0x134
  lis       r4, 0x804B
  addi      r3, r30, 0x2374
  subi      r0, r4, 0x3BC0
  li        r4, -0x1
  stw       r0, 0x0(r30)
  bl        0x2EF2E8
  addi      r3, r30, 0x235C
  li        r4, -0x1
  bl        0x2EF2DC
  addic.    r0, r30, 0x5C
  beq-      .loc_0xD8
  lis       r4, 0x804B
  addic.    r3, r30, 0x1DE0
  subi      r0, r4, 0x3B80
  stw       r0, 0x5C(r30)
  beq-      .loc_0x78
  lis       r4, 0x804B
  subi      r0, r4, 0x3B60
  stw       r0, 0x1DE0(r30)
  li        r4, 0
  bl        0x2EF2AC

.loc_0x78:
  addic.    r3, r30, 0x1888
  beq-      .loc_0x94
  lis       r4, 0x804B
  subi      r0, r4, 0x3B60
  stw       r0, 0x1888(r30)
  li        r4, 0
  bl        0x2EF290

.loc_0x94:
  addic.    r29, r30, 0x78
  beq-      .loc_0xCC
  lis       r3, 0x804B
  lis       r4, 0x8012
  subi      r0, r3, 0x3B50
  li        r5, 0x4B0
  stw       r0, 0x78(r30)
  addi      r3, r30, 0x118
  subi      r4, r4, 0x2A74
  li        r6, 0x5
  bl        -0x60B60
  mr        r3, r29
  li        r4, 0
  bl        0x2EF258

.loc_0xCC:
  addi      r3, r30, 0x5C
  li        r4, 0
  bl        0x2EF24C

.loc_0xD8:
  cmplwi    r30, 0
  beq-      .loc_0x124
  lis       r4, 0x804F
  addi      r3, r30, 0x34
  subi      r0, r4, 0x416C
  li        r4, -0x1
  stw       r0, 0x0(r30)
  bl        0x2EF22C
  addic.    r0, r30, 0x18
  beq-      .loc_0x118
  lis       r4, 0x804B
  addi      r3, r30, 0x18
  subi      r0, r4, 0x3BA0
  li        r4, 0
  stw       r0, 0x18(r30)
  bl        0x2EF20C

.loc_0x118:
  mr        r3, r30
  li        r4, 0
  bl        0x2EF200

.loc_0x124:
  extsh.    r0, r31
  ble-      .loc_0x134
  mr        r3, r30
  bl        -0xFE2E4

.loc_0x134:
  lwz       r0, 0x24(r1)
  mr        r3, r30
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
 * Address:	801223BC
 * Size:	000060
 */
void AmbientLightObj::~AmbientLightObj()
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
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x3BA0
  stw       r0, 0x0(r30)
  bl        0x2EF19C
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0xFE348

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
 * Address:	8012241C
 * Size:	00000C
 */
void Game::complement<float>(float, float, float)
{
/*
.loc_0x0:
  fsubs     f0, f2, f1
  fmadds    f1, f3, f0, f1
  blr
*/
}

/*
 * --INFO--
 * Address:	80122428
 * Size:	000028
 */
void __sinit_gameLightMgr_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804B
  stw       r0, -0x6DE0(r13)
  stfsu     f0, -0x3BE0(r3)
  stfs      f0, -0x6DDC(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}
