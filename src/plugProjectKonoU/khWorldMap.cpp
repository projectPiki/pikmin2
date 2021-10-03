

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void kh::Screen::khUtilFadePaneWM::create( (P2DScreen::Mgr *, unsigned long long, unsigned char))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803F1B04
 * Size:	00009C
 */
void kh::Screen::khUtilFadePane::__dt(void)
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
  lis       r3, 0x804F
  addic.    r0, r30, 0x1C
  subi      r0, r3, 0x4E28
  stw       r0, 0x0(r30)
  beq-      .loc_0x40
  lis       r3, 0x804F
  subi      r0, r3, 0x5AB0
  stw       r0, 0x1C(r30)

.loc_0x40:
  cmplwi    r30, 0
  beq-      .loc_0x70
  lis       r3, 0x804D
  addi      r0, r3, 0x7F2C
  stw       r0, 0x0(r30)
  beq-      .loc_0x70
  lis       r4, 0x804D
  mr        r3, r30
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        0x1FA18

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x3CDACC

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
 * Address:	........
 * Size:	0000B8
 */
void kh::Screen::khUtilFadePaneWM::create( (P2DScreen::Mgr *, J2DPane *, unsigned char))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803F1BA0
 * Size:	000058
 */
void kh::Screen::khUtilFadePaneWM::fadeout_finish(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, 0x34(r3)
  cmplwi    r0, 0
  beq-      .loc_0x3C
  lwz       r3, 0x30(r31)
  bl        0x4EA4
  lwz       r3, 0x30(r31)
  bl        0x58E8
  li        r0, 0
  stw       r0, 0x28(r31)
  b         .loc_0x44

.loc_0x3C:
  li        r0, 0x2
  stw       r0, 0x28(r31)

.loc_0x44:
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
 * Size:	000060
 */
void kh::Screen::khUtilColorAnmWM::__ct( (P2DScreen::Mgr *, unsigned long long, int, int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803F1BF8
 * Size:	000080
 */
void kh::Screen::khUtilColorAnm::__dt(void)
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
  beq-      .loc_0x64
  lis       r4, 0x804F
  subi      r0, r4, 0x4E48
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r4, 0x804D
  addi      r0, r4, 0x7F2C
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r5, 0x804D
  li        r4, 0
  addi      r0, r5, 0x7B0C
  stw       r0, 0x0(r30)
  bl        0x1F940

.loc_0x54:
  extsh.    r0, r31
  ble-      .loc_0x64
  mr        r3, r30
  bl        -0x3CDBA4

.loc_0x64:
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
 * Size:	00010C
 */
void kh::Screen::khUtilColorAnmWM::my_init( (J2DPicture **, og::Screen::CallBack_CounterRV **))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void kh::Screen::khUtilColorAnmWM::effect_on( (unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void kh::Screen::khUtilColorAnmWM::effect_off(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803F1C78
 * Size:	00007C
 */
void kh::Screen::khUtilColorAnmWM::do_update(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  addi      r4, r1, 0x8
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lwz       r0, 0x20(r3)
  stw       r0, 0x8(r1)
  lwz       r3, 0x18(r3)
  stw       r0, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x34(r31)
  cmplwi    r0, 0
  beq-      .loc_0x68
  lwz       r0, 0x30(r31)
  cmpwi     r0, 0
  bne-      .loc_0x68
  lwz       r3, 0x58(r31)
  lfs       f1, 0x1B90(r2)
  bl        -0xE64D8
  lwz       r3, 0x5C(r31)
  lfs       f1, 0x1B90(r2)
  bl        -0xE64E4

.loc_0x68:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	803F1CF4
 * Size:	0001E8
 */
void kh::Screen::WorldMap::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x3D4D3C
  lis       r4, 0x804F
  lis       r3, 0x804F
  subi      r0, r4, 0x5B20
  li        r6, 0
  stw       r0, 0x0(r31)
  subi      r0, r3, 0x5B4C
  lfs       f2, 0x1B94(r2)
  stw       r0, 0x0(r31)
  lfs       f1, 0x1B90(r2)
  stw       r6, 0x18(r31)
  lfs       f0, 0x1B98(r2)
  stw       r6, 0x20(r31)
  stw       r6, 0x1C(r31)
  stw       r6, 0x24(r31)
  stw       r6, 0x28(r31)
  stb       r6, 0x2D(r31)
  stb       r6, 0x2C(r31)
  stb       r6, 0x2E(r31)
  stw       r6, 0x30(r31)
  stw       r6, 0x38(r31)
  stw       r6, 0x34(r31)
  stw       r6, 0x3C(r31)
  stw       r6, 0x44(r31)
  stw       r6, 0x40(r31)
  stw       r6, 0x48(r31)
  stw       r6, 0x4C(r31)
  stw       r6, 0x50(r31)
  stw       r6, 0x54(r31)
  stw       r6, 0x60(r31)
  stw       r6, 0x5C(r31)
  stw       r6, 0x58(r31)
  stfs      f2, 0x8C(r31)
  stfs      f2, 0x88(r31)
  stfs      f2, 0x84(r31)
  stfs      f2, 0x80(r31)
  stfs      f2, 0x7C(r31)
  stfs      f2, 0x78(r31)
  stfs      f2, 0x74(r31)
  stfs      f2, 0x70(r31)
  stfs      f2, 0x6C(r31)
  stfs      f2, 0x68(r31)
  stfs      f2, 0x94(r31)
  stfs      f2, 0x90(r31)
  stfs      f1, 0x98(r31)
  stfs      f2, 0x9C(r31)
  stfs      f2, 0xA0(r31)
  stfs      f2, 0xA4(r31)
  stfs      f2, 0xA8(r31)
  stfs      f2, 0xAC(r31)
  stfs      f0, 0xB0(r31)
  lfs       f0, 0xAC(r31)
  stfs      f0, 0xB4(r31)
  lfs       f0, 0xB0(r31)
  stfs      f0, 0xB8(r31)
  stfs      f2, 0xBC(r31)
  stw       r6, 0xC0(r31)
  stw       r6, 0xC4(r31)
  stw       r6, 0xC8(r31)
  stw       r6, 0xCC(r31)
  stfs      f2, 0xD0(r31)
  stfs      f2, 0xD4(r31)
  stfs      f2, 0xD8(r31)
  stfs      f1, 0xDC(r31)
  stfs      f2, 0xE0(r31)
  stfs      f2, 0xE4(r31)
  stfs      f2, 0xE8(r31)
  stfs      f2, 0xEC(r31)
  li        r5, 0xD
  li        r4, 0x1
  li        r0, 0x4
  stw       r6, 0xF0(r31)
  mr        r3, r31
  stw       r6, 0xF4(r31)
  stw       r6, 0xF8(r31)
  stw       r6, 0xFC(r31)
  stw       r6, 0x108(r31)
  stw       r6, 0x104(r31)
  stw       r6, 0x100(r31)
  stw       r6, 0x130(r31)
  stw       r6, 0x12C(r31)
  stw       r6, 0x11C(r31)
  stw       r6, 0x10C(r31)
  stw       r6, 0x144(r31)
  stw       r6, 0x134(r31)
  stw       r6, 0x120(r31)
  stw       r6, 0x110(r31)
  stw       r6, 0x148(r31)
  stw       r6, 0x138(r31)
  stw       r6, 0x124(r31)
  stw       r6, 0x114(r31)
  stw       r6, 0x14C(r31)
  stw       r6, 0x13C(r31)
  stw       r6, 0x128(r31)
  stw       r6, 0x118(r31)
  stw       r6, 0x150(r31)
  stw       r6, 0x140(r31)
  stw       r6, 0x154(r31)
  stw       r6, 0x158(r31)
  stw       r6, 0x15C(r31)
  stw       r6, 0x160(r31)
  stw       r6, 0x164(r31)
  stw       r6, 0x168(r31)
  stw       r6, 0x16C(r31)
  stw       r6, 0x170(r31)
  stw       r5, 0x174(r31)
  stw       r4, 0x178(r31)
  stw       r0, 0x17C(r31)
  stb       r4, 0x180(r31)
  stb       r6, 0x182(r31)
  stb       r6, 0x181(r31)
  stb       r6, 0x183(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803F1EDC
 * Size:	000060
 */
void Game::WorldMap::Base::__dt(void)
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
  subi      r0, r5, 0x5B20
  stw       r0, 0x0(r30)
  bl        -0x3D4ED8
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x3CDE68

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
 * Address:	803F1F3C
 * Size:	0000CC
 */
void kh::Screen::WorldMap::init( (Game::WorldMap::InitArg &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  li        r30, 0
  lwz       r0, 0x0(r4)
  stw       r0, 0x18(r3)
  lwz       r0, 0x4(r4)
  stw       r0, 0x1C(r3)
  lwz       r0, 0x8(r4)
  stw       r0, 0x20(r3)
  lwz       r0, 0xC(r4)
  stw       r0, 0x24(r3)
  lwz       r0, 0x10(r4)
  stw       r0, 0x28(r3)
  lbz       r0, 0x14(r4)
  stb       r0, 0x2C(r3)
  lbz       r0, 0x15(r4)
  stb       r0, 0x2D(r3)
  lbz       r0, 0x16(r4)
  stb       r0, 0x2E(r3)

.loc_0x5C:
  lwz       r3, -0x6B70(r13)
  mr        r4, r30
  bl        -0x208B20
  lbz       r0, 0x181(r31)
  rlwinm    r3,r3,0,24,31
  mr        r4, r30
  add       r0, r0, r3
  stb       r0, 0x181(r31)
  lwz       r3, -0x6B70(r13)
  bl        -0x208ABC
  rlwinm    r3,r3,0,24,31
  lbz       r0, 0x182(r31)
  slw       r3, r3, r30
  addi      r30, r30, 0x1
  or        r0, r0, r3
  cmpwi     r30, 0x4
  stb       r0, 0x182(r31)
  blt+      .loc_0x5C
  lbz       r3, 0x182(r31)
  rlwinm    r0,r3,4,0,27
  or        r0, r3, r0
  stb       r0, 0x182(r31)
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
 * Address:	803F2008
 * Size:	001790
 */
void kh::Screen::WorldMap::loadResource(void)
{
/*
.loc_0x0:
  stwu      r1, -0x260(r1)
  mflr      r0
  stw       r0, 0x264(r1)
  stmw      r19, 0x22C(r1)
  mr        r31, r3
  lis       r3, 0x8049
  addi      r30, r3, 0x7C70
  lwz       r29, -0x77D4(r13)
  lwz       r3, 0x18(r31)
  bl        -0x3CEA88
  li        r0, 0x10
  addi      r5, r1, 0xDC
  addi      r4, r30, 0x38
  li        r20, 0
  mtctr     r0

.loc_0x3C:
  lwz       r3, 0x4(r4)
  lwzu      r0, 0x8(r4)
  stw       r3, 0x4(r5)
  stwu      r0, 0x8(r5)
  bdnz+     .loc_0x3C
  addi      r3, r1, 0xE0
  addi      r4, r30, 0x2B8
  bl        -0xDA114
  addi      r3, r1, 0xB0
  addi      r4, r1, 0xE0
  bl        0x5A56C
  lwz       r3, -0x63D8(r13)
  addi      r4, r1, 0xB0
  bl        0x5A69C
  cmplwi    r3, 0
  beq-      .loc_0x84
  lwz       r20, 0x34(r3)
  b         .loc_0x98

.loc_0x84:
  addi      r3, r30, 0
  li        r4, 0x116
  addi      r5, r2, 0x1B9C
  crclr     6, 0x6
  bl        -0x3C7A5C

.loc_0x98:
  cmplwi    r20, 0
  bne-      .loc_0xB4
  addi      r3, r30, 0
  addi      r5, r30, 0x30
  li        r4, 0x117
  crclr     6, 0x6
  bl        -0x3C7A78

.loc_0xB4:
  li        r3, 0x148
  bl        -0x3CE21C
  mr.       r0, r3
  beq-      .loc_0xCC
  bl        0x42CE0
  mr        r0, r3

.loc_0xCC:
  stw       r0, 0x30(r31)
  mr        r6, r20
  addi      r4, r30, 0x2C8
  lis       r5, 0x104
  lwz       r3, 0x30(r31)
  bl        -0x3B2AC4
  mr        r4, r20
  addi      r3, r30, 0x2E0
  bl        -0x3CF0DC
  mr        r19, r3
  bl        -0x3AA7E0
  stw       r3, 0x34(r31)
  mr        r3, r19
  bl        -0x3AA7EC
  stw       r3, 0x38(r31)
  lwz       r3, 0x30(r31)
  lwz       r4, 0x34(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  li        r23, 0
  lis       r22, 0x616E
  lis       r21, 0x6768
  lis       r19, 0x50

.loc_0x130:
  mr        r5, r23
  addi      r4, r22, 0x6430
  li        r3, 0x506C
  bl        0x192B0
  mr        r5, r3
  lwz       r3, 0x30(r31)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x38(r31)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  mr        r5, r23
  addi      r4, r21, 0x7430
  addi      r3, r19, 0x6C69
  bl        0x19270
  mr        r5, r3
  lwz       r3, 0x30(r31)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x38(r31)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  addi      r23, r23, 0x1
  cmpwi     r23, 0x4
  blt+      .loc_0x130
  mr        r4, r20
  addi      r3, r30, 0x2F8
  bl        -0x3CF1B4
  bl        -0x3AA8B4
  stw       r3, 0x3C(r31)
  lwz       r3, 0x30(r31)
  lwz       r4, 0x3C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  mr        r4, r20
  addi      r3, r30, 0x310
  bl        -0x3CF1E0
  bl        -0x3AA8E0
  stw       r3, 0x40(r31)
  lwz       r3, 0x30(r31)
  lwz       r4, 0x40(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x6C(r12)
  mtctr     r12
  bctrl     
  mr        r4, r20
  addi      r3, r30, 0x328
  bl        -0x3CF20C
  bl        -0x3AA90C
  stw       r3, 0x44(r31)
  lwz       r3, 0x30(r31)
  lwz       r4, 0x44(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x6C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6B70(r13)
  addi      r19, r1, 0x70
  lwz       r7, 0x134(r30)
  lbz       r0, 0x2F(r3)
  lwz       r6, 0x138(r30)
  rlwinm.   r0,r0,0,31,31
  lwz       r5, 0x13C(r30)
  lwz       r4, 0x140(r30)
  lwz       r3, 0x144(r30)
  lwz       r0, 0x148(r30)
  stw       r7, 0x70(r1)
  stw       r6, 0x74(r1)
  stw       r5, 0x78(r1)
  stw       r4, 0x7C(r1)
  stw       r3, 0x80(r1)
  stw       r0, 0x84(r1)
  beq-      .loc_0x288
  addi      r19, r1, 0x7C

.loc_0x288:
  li        r3, 0x138
  bl        -0x3CE3F0
  mr.       r0, r3
  beq-      .loc_0x2A0
  bl        0x42820
  mr        r0, r3

.loc_0x2A0:
  stw       r0, 0x48(r31)
  mr        r6, r20
  lwz       r4, 0x0(r19)
  lis       r5, 0x4
  lwz       r3, 0x48(r31)
  bl        -0x3B2C98
  lwz       r3, 0x4(r19)
  mr        r4, r20
  bl        -0x3CF2B0
  bl        -0x3AA9B0
  stw       r3, 0x4C(r31)
  lwz       r3, 0x48(r31)
  lwz       r4, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x8(r19)
  mr        r4, r20
  bl        -0x3CF2DC
  bl        -0x3AA9DC
  stw       r3, 0x50(r31)
  lwz       r3, 0x48(r31)
  lwz       r4, 0x50(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x68(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6B70(r13)
  li        r4, 0x1
  bl        -0x20B248
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x334
  lwz       r3, 0xF4(r31)
  addi      r0, r3, 0x1
  stw       r0, 0xF4(r31)
  b         .loc_0x35C

.loc_0x334:
  lwz       r3, 0x48(r31)
  lis       r4, 0x4E52
  addi      r6, r4, 0x4544
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)

.loc_0x35C:
  lwz       r3, -0x6B70(r13)
  li        r4, 0x2
  bl        -0x20B294
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x380
  lwz       r3, 0xF4(r31)
  addi      r0, r3, 0x1
  stw       r0, 0xF4(r31)
  b         .loc_0x3AC

.loc_0x380:
  lwz       r3, 0x48(r31)
  lis       r5, 0x4C4C
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x4F57
  addi      r5, r4, 0x5945
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)

.loc_0x3AC:
  lwz       r3, -0x6B70(r13)
  li        r4, 0
  bl        -0x20B2E4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x3D0
  lwz       r3, 0xF4(r31)
  addi      r0, r3, 0x1
  stw       r0, 0xF4(r31)
  b         .loc_0x3F8

.loc_0x3D0:
  lwz       r3, 0x48(r31)
  lis       r4, 0x424C
  addi      r6, r4, 0x5545
  li        r5, 0x4E
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)

.loc_0x3F8:
  lwz       r19, 0xF4(r31)
  mulli     r3, r19, 0x34
  addi      r3, r3, 0x10
  bl        -0x3CE460
  lis       r4, 0x803F
  lis       r5, 0x803F
  addi      r4, r4, 0x7A04
  mr        r7, r19
  addi      r5, r5, 0x3798
  li        r6, 0x34
  bl        -0x330A38
  stw       r3, 0xF0(r31)
  li        r19, 0
  li        r4, 0x1
  lwz       r3, -0x6B70(r13)
  bl        -0x20B364
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x470
  lwz       r3, 0x48(r31)
  lis       r4, 0x4E52
  addi      r6, r4, 0x4544
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mulli     r0, r19, 0x34
  lwz       r4, 0xF0(r31)
  li        r19, 0x1
  stwx      r3, r4, r0

.loc_0x470:
  lwz       r3, -0x6B70(r13)
  li        r4, 0x2
  bl        -0x20B3A8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4B8
  lwz       r3, 0x48(r31)
  lis       r5, 0x4C4C
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x4F57
  addi      r5, r4, 0x5945
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mulli     r0, r19, 0x34
  lwz       r4, 0xF0(r31)
  addi      r19, r19, 0x1
  stwx      r3, r4, r0

.loc_0x4B8:
  lwz       r3, -0x6B70(r13)
  li        r4, 0
  bl        -0x20B3F0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4F8
  lwz       r3, 0x48(r31)
  lis       r4, 0x424C
  addi      r6, r4, 0x5545
  li        r5, 0x4E
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mulli     r0, r19, 0x34
  lwz       r4, 0xF0(r31)
  stwx      r3, r4, r0

.loc_0x4F8:
  lis       r3, 0x1
  li        r7, 0x1
  subi      r5, r3, 0x1
  li        r6, 0x34
  b         .loc_0x52C

.loc_0x50C:
  divw      r4, r5, r0
  addi      r0, r6, 0x30
  lwz       r3, 0xF0(r31)
  addis     r5, r5, 0x1
  addi      r7, r7, 0x1
  addi      r6, r6, 0x34
  sthx      r4, r3, r0
  subi      r5, r5, 0x1

.loc_0x52C:
  lwz       r0, 0xF4(r31)
  cmpw      r7, r0
  blt+      .loc_0x50C
  lwz       r6, 0x1A4(r30)
  li        r3, 0x148
  lwz       r5, 0x1A8(r30)
  lwz       r4, 0x1AC(r30)
  lwz       r0, 0x1B0(r30)
  stw       r6, 0x60(r1)
  stw       r5, 0x64(r1)
  stw       r4, 0x68(r1)
  stw       r0, 0x6C(r1)
  bl        -0x3CE6C0
  mr.       r0, r3
  beq-      .loc_0x570
  bl        0x4283C
  mr        r0, r3

.loc_0x570:
  stw       r0, 0x54(r31)
  mr        r6, r20
  lwz       r4, 0x60(r1)
  lis       r5, 0x4
  lwz       r3, 0x54(r31)
  bl        -0x3B2F68
  lwz       r3, 0x64(r1)
  mr        r4, r20
  bl        -0x3CF580
  bl        -0x3AAC80
  stw       r3, 0x58(r31)
  mr        r4, r20
  lwz       r3, 0x68(r1)
  bl        -0x3CF594
  bl        -0x3AAC94
  stw       r3, 0x5C(r31)
  mr        r4, r20
  lwz       r3, 0x6C(r1)
  bl        -0x3CF5A8
  bl        -0x3AACA8
  stw       r3, 0x60(r31)
  lwz       r3, 0x54(r31)
  lwz       r4, 0x58(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x6C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x54(r31)
  lwz       r4, 0x5C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x6C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x54(r31)
  lwz       r4, 0x60(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x6C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x54(r31)
  bl        -0xE8818
  addi      r0, r31, 0x24
  lis       r3, 0x6179
  stw       r0, 0x8(r1)
  li        r0, 0x3
  addi      r6, r3, 0x5F72
  addi      r8, r3, 0x5F6C
  stw       r0, 0xC(r1)
  addi      r10, r3, 0x5F63
  li        r5, 0x5064
  li        r7, 0x5064
  stw       r20, 0x10(r1)
  li        r9, 0x5064
  lwz       r3, 0x54(r31)
  bl        -0xE502C
  lwz       r3, -0x6B70(r13)
  lbz       r0, 0x2F(r3)
  lwz       r21, 0xE8(r3)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x6EC
  lwz       r3, 0x54(r31)
  lis       r5, 0x616C
  lis       r4, 0x4E66
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x5F66
  addi      r5, r4, 0x696E
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x6D70
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x5F66
  lwz       r3, 0x54(r31)
  addi      r5, r4, 0x636F
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  lis       r4, 0x6D70
  stb       r0, 0xB0(r3)
  lis       r3, 0x50
  mr        r7, r21
  addi      r6, r4, 0x3030
  stw       r20, 0x8(r1)
  addi      r5, r3, 0x636F
  li        r8, 0xA
  li        r9, 0
  lwz       r3, 0x54(r31)
  li        r10, 0x1
  bl        -0xE5F64
  stw       r3, 0x100(r31)
  b         .loc_0x774

.loc_0x6EC:
  lwz       r3, 0x54(r31)
  lis       r5, 0x616C
  lis       r4, 0x4E66
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x5F66
  addi      r5, r4, 0x696E
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  lis       r5, 0x6D70
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x5F66
  lwz       r3, 0x54(r31)
  addi      r5, r4, 0x636F
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r4, 0x6B6F
  stb       r0, 0xB0(r3)
  lis       r3, 0x50
  mr        r7, r21
  addi      r6, r4, 0x3031
  stw       r20, 0x8(r1)
  addi      r5, r3, 0x706F
  li        r8, 0x5
  li        r9, 0
  lwz       r3, 0x54(r31)
  li        r10, 0
  bl        -0xE5FF0
  stw       r3, 0x100(r31)

.loc_0x774:
  stw       r20, 0x8(r1)
  lis       r5, 0x635F
  lis       r4, 0x50
  addi      r7, r31, 0x12C
  lwz       r3, 0x54(r31)
  addi      r6, r5, 0x3031
  addi      r5, r4, 0x675F
  li        r8, 0x2
  li        r9, 0
  li        r10, 0x1
  bl        -0xE619C
  stw       r3, 0x104(r31)
  lis       r4, 0x705F
  lis       r3, 0x50
  addi      r7, r31, 0x130
  stw       r20, 0x8(r1)
  addi      r6, r4, 0x3031
  addi      r5, r3, 0x675F
  li        r8, 0x2
  lwz       r3, 0x54(r31)
  li        r9, 0
  li        r10, 0x1
  bl        -0xE61CC
  stw       r3, 0x108(r31)
  lis       r4, 0x635F
  lis       r3, 0x50
  addi      r7, r31, 0x134
  stw       r20, 0x8(r1)
  addi      r6, r4, 0x3031
  addi      r5, r3, 0x305F
  li        r8, 0x2
  lwz       r3, 0x54(r31)
  li        r9, 0
  li        r10, 0x1
  bl        -0xE61FC
  stw       r3, 0x10C(r31)
  lis       r4, 0x705F
  lis       r3, 0x50
  addi      r7, r31, 0x144
  stw       r20, 0x8(r1)
  addi      r6, r4, 0x3031
  addi      r5, r3, 0x305F
  li        r8, 0x2
  lwz       r3, 0x54(r31)
  li        r9, 0
  li        r10, 0x1
  bl        -0xE622C
  stw       r3, 0x11C(r31)
  lis       r4, 0x635F
  lis       r3, 0x50
  addi      r7, r31, 0x138
  stw       r20, 0x8(r1)
  addi      r6, r4, 0x3031
  addi      r5, r3, 0x315F
  li        r8, 0x2
  lwz       r3, 0x54(r31)
  li        r9, 0
  li        r10, 0x1
  bl        -0xE625C
  stw       r3, 0x110(r31)
  lis       r4, 0x705F
  lis       r3, 0x50
  addi      r7, r31, 0x148
  stw       r20, 0x8(r1)
  addi      r6, r4, 0x3031
  addi      r5, r3, 0x315F
  li        r8, 0x2
  lwz       r3, 0x54(r31)
  li        r9, 0
  li        r10, 0x1
  bl        -0xE628C
  stw       r3, 0x120(r31)
  lis       r4, 0x635F
  lis       r3, 0x50
  addi      r7, r31, 0x13C
  stw       r20, 0x8(r1)
  addi      r6, r4, 0x3031
  addi      r5, r3, 0x325F
  li        r8, 0x2
  lwz       r3, 0x54(r31)
  li        r9, 0
  li        r10, 0x1
  bl        -0xE62BC
  stw       r3, 0x114(r31)
  lis       r4, 0x705F
  lis       r3, 0x50
  addi      r7, r31, 0x14C
  stw       r20, 0x8(r1)
  addi      r6, r4, 0x3031
  addi      r5, r3, 0x325F
  li        r8, 0x2
  lwz       r3, 0x54(r31)
  li        r9, 0
  li        r10, 0x1
  bl        -0xE62EC
  stw       r3, 0x124(r31)
  lis       r4, 0x635F
  lis       r3, 0x50
  addi      r7, r31, 0x140
  stw       r20, 0x8(r1)
  addi      r6, r4, 0x3031
  addi      r5, r3, 0x335F
  li        r8, 0x2
  lwz       r3, 0x54(r31)
  li        r9, 0
  li        r10, 0x1
  bl        -0xE631C
  stw       r3, 0x118(r31)
  lis       r4, 0x705F
  lis       r3, 0x50
  addi      r7, r31, 0x150
  stw       r20, 0x8(r1)
  addi      r6, r4, 0x3031
  addi      r5, r3, 0x335F
  li        r8, 0x2
  lwz       r3, 0x54(r31)
  li        r9, 0
  li        r10, 0x1
  bl        -0xE634C
  stw       r3, 0x128(r31)
  lis       r5, 0x6577
  lis       r4, 0x54
  lwz       r3, 0x54(r31)
  addi      r6, r5, 0x5F6C
  addi      r5, r4, 0x5F6E
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x6577
  stb       r0, 0xB0(r3)
  lis       r4, 0x54
  addi      r6, r5, 0x5F72
  lwz       r3, 0x54(r31)
  addi      r5, r4, 0x5F6E
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r4, 0x6C77
  stb       r0, 0xB0(r3)
  addi      r6, r4, 0x696E
  li        r5, 0x4E
  lwz       r3, 0x54(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r4, 0x7277
  stb       r0, 0xB0(r3)
  addi      r6, r4, 0x696E
  li        r5, 0x4E
  lwz       r3, 0x54(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)
  li        r3, 0x38
  bl        -0x3CEB64
  mr.       r4, r3
  beq-      .loc_0xA2C
  lis       r5, 0x756D
  li        r4, 0
  addi      r6, r5, 0x6D79
  li        r5, 0x64
  li        r7, 0x3
  li        r8, 0x64
  bl        0x19444
  mr        r4, r3

.loc_0xA2C:
  li        r11, 0xFF
  li        r10, 0x60
  li        r9, 0x50
  li        r8, 0
  stb       r11, 0x48(r1)
  li        r6, 0xA0
  li        r5, 0x20
  li        r0, 0x1
  stw       r4, 0x16C(r31)
  li        r3, 0x1C
  lwz       r4, 0x16C(r31)
  stb       r10, 0x49(r1)
  lwz       r12, 0x1C(r4)
  stb       r9, 0x4A(r1)
  stb       r8, 0x4B(r1)
  lwz       r4, 0x48(r1)
  stb       r11, 0x40(r1)
  stw       r4, 0x4C(r1)
  lbz       r7, 0x4C(r1)
  lbz       r4, 0x4D(r1)
  stb       r7, 0x0(r12)
  lbz       r7, 0x4E(r1)
  stb       r4, 0x1(r12)
  lbz       r4, 0x4F(r1)
  stb       r7, 0x2(r12)
  stb       r4, 0x3(r12)
  lwz       r4, 0x16C(r31)
  stb       r6, 0x41(r1)
  lwz       r6, 0x1C(r4)
  stb       r5, 0x42(r1)
  stb       r11, 0x43(r1)
  lwz       r4, 0x40(r1)
  stb       r11, 0x38(r1)
  stw       r4, 0x44(r1)
  lbz       r5, 0x44(r1)
  lbz       r4, 0x45(r1)
  stb       r5, 0x4(r6)
  lbz       r5, 0x46(r1)
  stb       r4, 0x5(r6)
  lbz       r4, 0x47(r1)
  stb       r5, 0x6(r6)
  stb       r4, 0x7(r6)
  lwz       r4, 0x16C(r31)
  stb       r10, 0x39(r1)
  lwz       r6, 0x1C(r4)
  stb       r9, 0x3A(r1)
  stb       r8, 0x3B(r1)
  lwz       r4, 0x38(r1)
  stw       r4, 0x3C(r1)
  lbz       r5, 0x3C(r1)
  lbz       r4, 0x3D(r1)
  stb       r5, 0x8(r6)
  lbz       r5, 0x3E(r1)
  stb       r4, 0x9(r6)
  lbz       r4, 0x3F(r1)
  stb       r5, 0xA(r6)
  stb       r4, 0xB(r6)
  lwz       r4, 0x16C(r31)
  stb       r0, 0x34(r4)
  bl        -0x3CEC7C
  mr.       r0, r3
  beq-      .loc_0xB2C
  bl        -0xC9D28
  mr        r0, r3

.loc_0xB2C:
  stw       r0, 0x64(r31)
  li        r3, 0x10
  bl        -0x3CEC98
  cmplwi    r3, 0
  beq-      .loc_0xB60
  lfs       f1, 0x1B94(r2)
  lfs       f0, 0x1BA4(r2)
  stfs      f1, 0x0(r3)
  lfs       f1, 0x1BA8(r2)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x1BAC(r2)
  stfs      f1, 0x8(r3)
  stfs      f0, 0xC(r3)

.loc_0xB60:
  stw       r3, 0x170(r31)
  lis       r3, 0x6C62
  addi      r6, r3, 0x746E
  li        r5, 0x4E
  lwz       r3, 0x54(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        0x18B64
  lwz       r3, 0x54(r31)
  lis       r4, 0x7262
  addi      r6, r4, 0x746E
  li        r5, 0x4E
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        0x18B40
  li        r0, 0
  addi      r3, r30, 0x344
  stw       r0, 0x8(r1)
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0
  li        r8, 0x1
  li        r9, 0
  li        r10, 0
  bl        -0x3D3A54
  mr.       r19, r3
  bne-      .loc_0xBF4
  addi      r3, r30, 0
  addi      r5, r30, 0x30
  li        r4, 0x1CE
  crclr     6, 0x6
  bl        -0x3C85B8

.loc_0xBF4:
  li        r3, 0x14
  bl        -0x3CED5C
  mr.       r4, r3
  beq-      .loc_0xC14
  lwz       r5, -0x77D4(r13)
  mr        r4, r19
  bl        -0x35A744
  mr        r4, r3

.loc_0xC14:
  lwz       r3, -0x65F8(r13)
  bl        -0x396E8
  li        r3, 0x28
  bl        -0x3CED84
  cmplwi    r3, 0
  beq-      .loc_0xCBC
  lis       r5, 0x804C
  lis       r4, 0x804C
  addi      r0, r5, 0x14F0
  lis       r6, 0x804A
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x14D8
  lis       r5, 0x804E
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  li        r19, 0
  addi      r12, r5, 0x7420
  addi      r9, r4, 0x7390
  stb       r19, 0x4(r3)
  lis       r4, 0x804E
  addi      r5, r4, 0x74A0
  subi      r0, r6, 0x1D84
  stb       r19, 0x5(r3)
  addi      r11, r12, 0x18
  li        r10, 0x2
  addi      r8, r9, 0x18
  stw       r0, 0x8(r3)
  addi      r7, r31, 0xD0
  addi      r6, r31, 0xD8
  addi      r4, r5, 0x18
  stw       r12, 0x0(r3)
  li        r0, 0x1
  stw       r11, 0x8(r3)
  sth       r10, 0xC(r3)
  stw       r19, 0x10(r3)
  stw       r9, 0x0(r3)
  stw       r8, 0x8(r3)
  stw       r7, 0x14(r3)
  stw       r6, 0x18(r3)
  stw       r5, 0x0(r3)
  stw       r4, 0x8(r3)
  stb       r0, 0x4(r3)

.loc_0xCBC:
  stw       r3, 0xC4(r31)
  li        r3, 0x1C
  bl        -0x3CEE28
  cmplwi    r3, 0
  beq-      .loc_0xD60
  lis       r5, 0x804C
  lis       r4, 0x804C
  addi      r0, r5, 0x14F0
  lis       r6, 0x804A
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x14D8
  lis       r5, 0x804E
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  li        r19, 0
  addi      r12, r5, 0x7420
  addi      r9, r4, 0x7390
  stb       r19, 0x4(r3)
  lis       r4, 0x804F
  subi      r5, r4, 0x5B88
  subi      r0, r6, 0x1D84
  stb       r19, 0x5(r3)
  addi      r11, r12, 0x18
  li        r10, 0x3
  addi      r8, r9, 0x18
  stw       r0, 0x8(r3)
  addi      r7, r31, 0xD0
  addi      r6, r31, 0xD8
  addi      r4, r5, 0x18
  stw       r12, 0x0(r3)
  li        r0, 0x1
  stw       r11, 0x8(r3)
  sth       r10, 0xC(r3)
  stw       r19, 0x10(r3)
  stw       r9, 0x0(r3)
  stw       r8, 0x8(r3)
  stw       r7, 0x14(r3)
  stw       r6, 0x18(r3)
  stw       r5, 0x0(r3)
  stw       r4, 0x8(r3)
  stb       r0, 0x4(r3)

.loc_0xD60:
  stw       r3, 0xC0(r31)
  li        r4, 0x3
  lwz       r3, 0xC4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC0(r31)
  li        r4, 0x2
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC4(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC0(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r20, 0
  li        r19, 0
  b         .loc_0xDE4

.loc_0xDD0:
  lwz       r0, 0xF0(r31)
  add       r3, r0, r19
  bl        0x4C68
  addi      r19, r19, 0x34
  addi      r20, r20, 0x1

.loc_0xDE4:
  lwz       r0, 0xF4(r31)
  cmpw      r20, r0
  blt+      .loc_0xDD0
  li        r3, 0x18
  bl        -0x3CEF58
  cmplwi    r3, 0
  beq-      .loc_0xE88
  lis       r5, 0x804C
  lis       r4, 0x804C
  addi      r0, r5, 0x14F0
  lis       r6, 0x804A
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x14D8
  lis       r5, 0x804E
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  li        r12, 0
  addi      r11, r5, 0x7420
  addi      r8, r4, 0x73CC
  stb       r12, 0x4(r3)
  lis       r4, 0x804F
  subi      r5, r4, 0x5BC4
  subi      r0, r6, 0x1D84
  stb       r12, 0x5(r3)
  addi      r10, r11, 0x18
  li        r9, 0x4
  addi      r7, r8, 0x18
  stw       r0, 0x8(r3)
  addi      r6, r31, 0xE0
  addi      r4, r5, 0x18
  li        r0, 0x1
  stw       r11, 0x0(r3)
  stw       r10, 0x8(r3)
  sth       r9, 0xC(r3)
  stw       r12, 0x10(r3)
  stw       r8, 0x0(r3)
  stw       r7, 0x8(r3)
  stw       r6, 0x14(r3)
  stw       r5, 0x0(r3)
  stw       r4, 0x8(r3)
  stb       r0, 0x4(r3)

.loc_0xE88:
  stw       r3, 0xC8(r31)
  li        r3, 0x18
  bl        -0x3CEFF4
  cmplwi    r3, 0
  beq-      .loc_0xF24
  lis       r5, 0x804C
  lis       r4, 0x804C
  addi      r0, r5, 0x14F0
  lis       r6, 0x804A
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x14D8
  lis       r5, 0x804E
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  li        r12, 0
  addi      r11, r5, 0x7420
  addi      r8, r4, 0x73CC
  stb       r12, 0x4(r3)
  lis       r4, 0x804F
  subi      r5, r4, 0x5C00
  subi      r0, r6, 0x1D84
  stb       r12, 0x5(r3)
  addi      r10, r11, 0x18
  li        r9, 0x7
  addi      r7, r8, 0x18
  stw       r0, 0x8(r3)
  addi      r6, r31, 0xE8
  addi      r4, r5, 0x18
  li        r0, 0x1
  stw       r11, 0x0(r3)
  stw       r10, 0x8(r3)
  sth       r9, 0xC(r3)
  stw       r12, 0x10(r3)
  stw       r8, 0x0(r3)
  stw       r7, 0x8(r3)
  stw       r6, 0x14(r3)
  stw       r5, 0x0(r3)
  stw       r4, 0x8(r3)
  stb       r0, 0x4(r3)

.loc_0xF24:
  stw       r3, 0xCC(r31)
  li        r4, 0x2
  lwz       r3, 0xC8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xCC(r31)
  li        r4, 0x2
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC8(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xCC(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x54(r31)
  lis       r4, 0x6176
  addi      r6, r4, 0x6530
  li        r5, 0x4E63
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r19, 0x54(r31)
  lwz       r20, 0x10(r3)
  cmplwi    r19, 0
  lwz       r21, 0x14(r3)
  bne-      .loc_0xFC4
  li        r22, 0
  b         .loc_0x1030

.loc_0xFC4:
  li        r3, 0x38
  bl        -0x3CF12C
  mr.       r22, r3
  beq-      .loc_0xFF4
  li        r4, 0x10
  bl        0x18BA8
  lis       r3, 0x804F
  li        r0, 0
  subi      r3, r3, 0x5AD4
  stw       r3, 0x0(r22)
  stw       r0, 0x30(r22)
  stb       r0, 0x34(r22)

.loc_0xFF4:
  cmplwi    r22, 0
  bne-      .loc_0x1010
  addi      r3, r30, 0
  addi      r5, r30, 0x30
  li        r4, 0x3C
  crclr     6, 0x6
  bl        -0x3C89D4

.loc_0x1010:
  mr        r3, r19
  mr        r6, r21
  mr        r5, r20
  mr        r7, r22
  bl        0x41AFC
  mr        r4, r3
  mr        r3, r22
  bl        0x18CE4

.loc_0x1030:
  stw       r22, 0x154(r31)
  lis       r3, 0x6176
  addi      r6, r3, 0x6531
  li        r5, 0x4E63
  lwz       r3, 0x54(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x154(r31)
  bl        0x18CB4
  lwz       r3, 0x54(r31)
  lis       r4, 0x6176
  addi      r6, r4, 0x6532
  li        r5, 0x4E63
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x154(r31)
  bl        0x18C88
  lwz       r3, 0x54(r31)
  lis       r4, 0x6176
  addi      r6, r4, 0x6533
  li        r5, 0x4E63
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x154(r31)
  bl        0x18C5C
  lwz       r3, 0x54(r31)
  lis       r5, 0x6E61
  lis       r4, 0x50
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x6D65
  addi      r5, r4, 0x635F
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x154(r31)
  bl        0x18C2C
  lwz       r3, 0x54(r31)
  lis       r4, 0x7261
  addi      r6, r4, 0x6E64
  li        r5, 0x4E67
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x154(r31)
  bl        0x18C00
  lwz       r3, 0x154(r31)
  li        r4, 0
  stw       r31, 0x30(r3)
  lwz       r3, 0x154(r31)
  bl        0x18CE4
  lwz       r3, 0x154(r31)
  bl        0x18CBC
  li        r0, 0x19
  addi      r5, r1, 0x15C
  addi      r4, r30, 0x1B4
  mtctr     r0

.loc_0x1140:
  lwz       r3, 0x4(r4)
  lwzu      r0, 0x8(r4)
  stw       r3, 0x4(r5)
  stwu      r0, 0x8(r5)
  bdnz+     .loc_0x1140
  lwz       r11, 0x280(r30)
  lis       r4, 0x804E
  lwz       r10, 0x284(r30)
  lis       r3, 0x804E
  lwz       r9, 0x288(r30)
  addi      r4, r4, 0x7420
  lwz       r8, 0x28C(r30)
  addi      r3, r3, 0x7610
  lwz       r7, 0x290(r30)
  mr        r23, r31
  lwz       r6, 0x294(r30)
  addi      r24, r1, 0x160
  lwz       r5, 0x298(r30)
  addi      r22, r1, 0x88
  lwz       r25, 0x29C(r30)
  addi      r21, r4, 0x18
  lwz       r12, 0x2A0(r30)
  addi      r20, r3, 0x18
  lwz       r0, 0x2A4(r30)
  li        r19, 0
  stw       r11, 0x88(r1)
  lwz       r11, 0x104(r31)
  stw       r10, 0x8C(r1)
  lwz       r10, 0x108(r31)
  stw       r9, 0x90(r1)
  lwz       r9, 0x10C(r31)
  stw       r8, 0x94(r1)
  lwz       r8, 0x11C(r31)
  stw       r7, 0x98(r1)
  lwz       r7, 0x110(r31)
  stw       r6, 0x9C(r1)
  lwz       r6, 0x120(r31)
  stw       r5, 0xA0(r1)
  lwz       r5, 0x114(r31)
  stw       r25, 0xA4(r1)
  lwz       r4, 0x124(r31)
  stw       r12, 0xA8(r1)
  lwz       r3, 0x118(r31)
  stw       r0, 0xAC(r1)
  lwz       r0, 0x128(r31)
  stw       r11, 0x88(r1)
  stw       r10, 0x8C(r1)
  stw       r9, 0x90(r1)
  stw       r8, 0x94(r1)
  stw       r7, 0x98(r1)
  stw       r6, 0x9C(r1)
  stw       r5, 0xA0(r1)
  stw       r4, 0xA4(r1)
  stw       r3, 0xA8(r1)
  stw       r0, 0xAC(r1)

.loc_0x121C:
  li        r3, 0x60
  bl        -0x3CF384
  mr.       r28, r3
  beq-      .loc_0x1274
  lwz       r4, 0x54(r31)
  li        r7, 0x3
  lwz       r5, 0x0(r24)
  li        r8, 0x64
  lwz       r6, 0x4(r24)
  bl        0x18C28
  lis       r3, 0x804F
  li        r0, 0
  subi      r3, r3, 0x5AF4
  stw       r3, 0x0(r28)
  stw       r0, 0x38(r28)
  stw       r0, 0x48(r28)
  stw       r0, 0x3C(r28)
  stw       r0, 0x4C(r28)
  stw       r0, 0x40(r28)
  stw       r0, 0x50(r28)
  stw       r0, 0x44(r28)
  stw       r0, 0x54(r28)

.loc_0x1274:
  li        r4, 0xFF
  li        r3, 0xA0
  li        r0, 0x40
  stb       r4, 0x30(r1)
  li        r9, 0x60
  li        r7, 0
  stw       r28, 0x158(r23)
  li        r6, 0xAD
  li        r5, 0xB6
  lwz       r8, 0x158(r23)
  stb       r3, 0x31(r1)
  lwz       r11, 0x1C(r8)
  stb       r0, 0x32(r1)
  stb       r4, 0x33(r1)
  lwz       r8, 0x30(r1)
  stb       r4, 0x28(r1)
  stw       r8, 0x34(r1)
  lbz       r10, 0x34(r1)
  lbz       r8, 0x35(r1)
  stb       r10, 0x0(r11)
  lbz       r10, 0x36(r1)
  stb       r8, 0x1(r11)
  lbz       r8, 0x37(r1)
  stb       r10, 0x2(r11)
  stb       r8, 0x3(r11)
  lwz       r8, 0x158(r23)
  stb       r4, 0x29(r1)
  lwz       r10, 0x1C(r8)
  stb       r9, 0x2A(r1)
  stb       r4, 0x2B(r1)
  lwz       r8, 0x28(r1)
  stb       r4, 0x20(r1)
  stw       r8, 0x2C(r1)
  lbz       r9, 0x2C(r1)
  lbz       r8, 0x2D(r1)
  stb       r9, 0x4(r10)
  lbz       r9, 0x2E(r1)
  stb       r8, 0x5(r10)
  lbz       r8, 0x2F(r1)
  stb       r9, 0x6(r10)
  stb       r8, 0x7(r10)
  lwz       r8, 0x158(r23)
  stb       r3, 0x21(r1)
  lwz       r8, 0x1C(r8)
  stb       r0, 0x22(r1)
  stb       r4, 0x23(r1)
  lwz       r0, 0x20(r1)
  stb       r7, 0x18(r1)
  stw       r0, 0x24(r1)
  lbz       r3, 0x24(r1)
  lbz       r0, 0x25(r1)
  stb       r3, 0x8(r8)
  lbz       r3, 0x26(r1)
  stb       r0, 0x9(r8)
  lbz       r0, 0x27(r1)
  stb       r3, 0xA(r8)
  stb       r0, 0xB(r8)
  stb       r6, 0x19(r1)
  lwz       r6, 0x158(r23)
  stb       r5, 0x1A(r1)
  stb       r4, 0x1B(r1)
  lwz       r0, 0x18(r1)
  stw       r0, 0x1C(r1)
  lbz       r3, 0x1C(r1)
  lbz       r0, 0x1D(r1)
  stb       r3, 0x24(r6)
  lbz       r3, 0x1E(r1)
  stb       r0, 0x25(r6)
  lbz       r0, 0x1F(r1)
  stb       r3, 0x26(r6)
  stb       r0, 0x27(r6)
  lwz       r3, 0x54(r31)
  lwz       r5, 0x2A8(r30)
  lwz       r12, 0x0(r3)
  lwz       r6, 0x2AC(r30)
  lwz       r4, 0x2B0(r30)
  lwz       r0, 0x2B4(r30)
  lwz       r12, 0x3C(r12)
  stw       r5, 0x50(r1)
  lwz       r5, 0x8(r24)
  stw       r6, 0x54(r1)
  lwz       r6, 0xC(r24)
  stw       r4, 0x58(r1)
  stw       r0, 0x5C(r1)
  mtctr     r12
  bctrl     
  stw       r3, 0x50(r1)
  lwz       r3, 0x54(r31)
  lwz       r5, 0x10(r24)
  lwz       r12, 0x0(r3)
  lwz       r6, 0x14(r24)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x54(r1)
  lwz       r3, 0x54(r31)
  lwz       r5, 0x18(r24)
  lwz       r12, 0x0(r3)
  lwz       r6, 0x1C(r24)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x58(r1)
  lwz       r3, 0x54(r31)
  lwz       r5, 0x20(r24)
  lwz       r12, 0x0(r3)
  lwz       r6, 0x24(r24)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r27, 0x158(r23)
  addi      r26, r1, 0x50
  stw       r3, 0x5C(r1)
  li        r28, 0
  mr        r25, r27

.loc_0x1440:
  lwz       r0, 0x0(r26)
  li        r3, 0x18
  stw       r0, 0x38(r25)
  bl        -0x3CF5B0
  cmplwi    r3, 0
  beq-      .loc_0x14BC
  lis       r5, 0x804C
  lis       r4, 0x804C
  addi      r0, r5, 0x14F0
  lis       r6, 0x804A
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x14D8
  lis       r5, 0x804E
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  li        r8, 0
  subi      r7, r6, 0x1D84
  addi      r6, r5, 0x7420
  stb       r8, 0x4(r3)
  li        r5, 0x8
  addi      r0, r4, 0x7610
  lfs       f0, 0x1B90(r2)
  stb       r8, 0x5(r3)
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r21, 0x8(r3)
  sth       r5, 0xC(r3)
  stw       r8, 0x10(r3)
  stw       r0, 0x0(r3)
  stw       r20, 0x8(r3)
  stfs      f0, 0x14(r3)

.loc_0x14BC:
  stw       r3, 0x48(r25)
  li        r4, 0x4
  lwz       r3, 0x48(r25)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r25, r25, 0x4
  cmpwi     r28, 0x4
  addi      r26, r26, 0x4
  blt+      .loc_0x1440
  lwz       r3, 0x0(r22)
  addi      r19, r19, 0x1
  lwz       r0, 0x4(r22)
  cmpwi     r19, 0x5
  stw       r3, 0x58(r27)
  addi      r24, r24, 0x28
  addi      r23, r23, 0x4
  addi      r22, r22, 0x8
  stw       r0, 0x5C(r27)
  blt+      .loc_0x121C
  mr        r3, r29
  bl        -0x3CFF7C
  lbz       r4, 0x181(r31)
  li        r3, 0x1
  subic.    r5, r4, 0x1
  addi      r0, r5, 0x1
  mtctr     r0
  blt-      .loc_0x1560

.loc_0x1534:
  lbz       r4, 0x182(r31)
  slw       r0, r3, r5
  and.      r0, r4, r0
  bne-      .loc_0x1558
  rlwinm    r0,r5,2,0,29
  addi      r3, r30, 0x10
  lfsx      f0, r3, r0
  stfs      f0, 0x90(r31)
  b         .loc_0x1560

.loc_0x1558:
  subi      r5, r5, 0x1
  bdnz+     .loc_0x1534

.loc_0x1560:
  lwz       r3, 0x48(r31)
  lis       r5, 0x434B
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x4554
  addi      r5, r4, 0x524F
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x1BB0(r2)
  lfs       f0, 0x1B94(r2)
  stfs      f1, 0xD4(r3)
  stfs      f0, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x48(r31)
  lis       r4, 0x4E52
  addi      r6, r4, 0x4544
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x1BB0(r2)
  lfs       f0, 0x1B94(r2)
  stfs      f1, 0xD4(r3)
  stfs      f0, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x48(r31)
  lis       r5, 0x4C4C
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x4F57
  addi      r5, r4, 0x5945
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x1BB0(r2)
  lfs       f0, 0x1B94(r2)
  stfs      f1, 0xD4(r3)
  stfs      f0, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x48(r31)
  lis       r4, 0x424C
  addi      r6, r4, 0x5545
  li        r5, 0x4E
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x1BB0(r2)
  lfs       f0, 0x1B94(r2)
  stfs      f1, 0xD4(r3)
  stfs      f0, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  li        r21, 0
  lis       r20, 0x6169
  li        r19, 0

.loc_0x1674:
  mr        r5, r21
  addi      r4, r20, 0x7430
  li        r3, 0x4E77
  bl        0x17D6C
  mr        r5, r3
  lwz       r3, 0x30(r31)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  addi      r21, r21, 0x1
  stb       r19, 0xB0(r3)
  cmpwi     r21, 0x4
  blt+      .loc_0x1674
  li        r19, 0

.loc_0x16B4:
  lbz       r0, 0x181(r31)
  cmpw      r19, r0
  bge-      .loc_0x16D4
  li        r0, 0x1
  lbz       r3, 0x182(r31)
  slw       r0, r0, r19
  and.      r0, r3, r0
  beq-      .loc_0x1710

.loc_0x16D4:
  lis       r4, 0x696E
  lis       r3, 0x4E
  mr        r5, r19
  addi      r4, r4, 0x7430
  addi      r3, r3, 0x706F
  bl        0x17D04
  mr        r5, r3
  lwz       r3, 0x30(r31)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)

.loc_0x1710:
  addi      r19, r19, 0x1
  cmpwi     r19, 0x4
  blt+      .loc_0x16B4
  li        r22, 0
  lis       r21, 0x6768
  lis       r20, 0x50
  li        r19, 0
  b         .loc_0x1764

.loc_0x1730:
  mr        r5, r22
  addi      r4, r21, 0x7430
  addi      r3, r20, 0x6C69
  bl        0x17CB0
  mr        r5, r3
  lwz       r3, 0x30(r31)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stb       r19, 0xB0(r3)
  addi      r22, r22, 0x1

.loc_0x1764:
  lbz       r0, 0x181(r31)
  cmpw      r22, r0
  blt+      .loc_0x1730
  lwz       r3, -0x6560(r13)
  lwz       r4, 0x20(r31)
  bl        0x88F8
  lmw       r19, 0x22C(r1)
  lwz       r0, 0x264(r1)
  mtlr      r0
  addi      r1, r1, 0x260
  blr
*/
}

/*
 * --INFO--
 * Address:	803F3798
 * Size:	00003C
 */
void kh::Screen::WorldMap::OnyonDynamics::__dt(void)
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
  bl        -0x3CF704

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
 * Address:	803F37D4
 * Size:	001C20
 */
void kh::Screen::WorldMap::update( (Game::WorldMap::UpdateArg &))
{
/*
.loc_0x0:
  stwu      r1, -0x170(r1)
  mflr      r0
  stw       r0, 0x174(r1)
  stfd      f31, 0x160(r1)
  psq_st    f31,0x168(r1),0,0
  stfd      f30, 0x150(r1)
  psq_st    f30,0x158(r1),0,0
  stmw      r25, 0x134(r1)
  mr        r31, r3
  mr        r26, r4
  lis       r5, 0x8049
  lwz       r3, 0x1C(r3)
  lwz       r4, 0xF8(r31)
  addi      r30, r5, 0x7C70
  bl        -0x245860
  stw       r3, 0x0(r26)
  lfs       f0, 0x68(r31)
  lwz       r3, 0x34(r31)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x70(r31)
  lwz       r3, 0x3C(r31)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x74(r31)
  lwz       r3, 0x40(r31)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x78(r31)
  lwz       r3, 0x44(r31)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x7C(r31)
  lwz       r3, 0x4C(r31)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x80(r31)
  lwz       r3, 0x50(r31)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x84(r31)
  lwz       r3, 0x58(r31)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x88(r31)
  lwz       r3, 0x5C(r31)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x8C(r31)
  lwz       r3, 0x60(r31)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x30(r31)
  bl        -0x3B2D58
  lwz       r3, 0x48(r31)
  bl        -0x3B2D60
  lwz       r3, 0x54(r31)
  bl        -0x3B2D68
  lfs       f0, 0x6C(r31)
  li        r25, 0
  lwz       r3, 0x38(r31)
  lis       r29, 0x616E
  lis       r28, 0x6768
  lis       r27, 0x50
  stfs      f0, 0x8(r3)

.loc_0xE0:
  mr        r5, r25
  addi      r4, r29, 0x6430
  li        r3, 0x506C
  bl        0x17B34
  mr        r5, r3
  lwz       r3, 0x30(r31)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3BA2E4
  mr        r5, r25
  addi      r4, r28, 0x7430
  addi      r3, r27, 0x6C69
  bl        0x17B04
  mr        r5, r3
  lwz       r3, 0x30(r31)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3BA314
  addi      r25, r25, 0x1
  cmpwi     r25, 0x4
  blt+      .loc_0xE0
  lfs       f1, 0x70(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1B90(r2)
  stw       r0, 0x120(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1BE0(r2)
  stfs      f0, 0x70(r31)
  lwz       r3, 0x3C(r31)
  lfs       f2, 0x70(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0x124(r1)
  lfd       f0, 0x120(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x198
  lfs       f0, 0x1B94(r2)
  stfs      f0, 0x70(r31)

.loc_0x198:
  lfs       f1, 0x74(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1B90(r2)
  stw       r0, 0x120(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1BE0(r2)
  stfs      f0, 0x74(r31)
  lwz       r3, 0x40(r31)
  lfs       f2, 0x74(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0x124(r1)
  lfd       f0, 0x120(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x1E4
  lfs       f0, 0x1B94(r2)
  stfs      f0, 0x74(r31)

.loc_0x1E4:
  lfs       f1, 0x78(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1B90(r2)
  stw       r0, 0x120(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1BE0(r2)
  stfs      f0, 0x78(r31)
  lwz       r3, 0x44(r31)
  lfs       f2, 0x78(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0x124(r1)
  lfd       f0, 0x120(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x230
  lfs       f0, 0x1B94(r2)
  stfs      f0, 0x78(r31)

.loc_0x230:
  lfs       f1, 0x7C(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1B90(r2)
  stw       r0, 0x120(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1BE0(r2)
  stfs      f0, 0x7C(r31)
  lwz       r3, 0x4C(r31)
  lfs       f2, 0x7C(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0x124(r1)
  lfd       f0, 0x120(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x27C
  lfs       f0, 0x1B94(r2)
  stfs      f0, 0x7C(r31)

.loc_0x27C:
  lfs       f1, 0x80(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1B90(r2)
  stw       r0, 0x120(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1BE0(r2)
  stfs      f0, 0x80(r31)
  lwz       r3, 0x50(r31)
  lfs       f2, 0x80(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0x124(r1)
  lfd       f0, 0x120(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x2C8
  lfs       f0, 0x1B94(r2)
  stfs      f0, 0x80(r31)

.loc_0x2C8:
  lfs       f1, 0x84(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1BB4(r2)
  stw       r0, 0x120(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1BE0(r2)
  stfs      f0, 0x84(r31)
  lwz       r3, 0x58(r31)
  lfs       f2, 0x84(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0x124(r1)
  lfd       f0, 0x120(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x314
  lfs       f0, 0x1B94(r2)
  stfs      f0, 0x84(r31)

.loc_0x314:
  lfs       f1, 0x88(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1BB4(r2)
  stw       r0, 0x120(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1BE0(r2)
  stfs      f0, 0x88(r31)
  lwz       r3, 0x5C(r31)
  lfs       f2, 0x88(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0x124(r1)
  lfd       f0, 0x120(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x360
  lfs       f0, 0x1B94(r2)
  stfs      f0, 0x88(r31)

.loc_0x360:
  lfs       f1, 0x8C(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1BB4(r2)
  stw       r0, 0x120(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1BE0(r2)
  stfs      f0, 0x8C(r31)
  lwz       r3, 0x60(r31)
  lfs       f2, 0x8C(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0x124(r1)
  lfd       f0, 0x120(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x3AC
  lfs       f0, 0x1B94(r2)
  stfs      f0, 0x8C(r31)

.loc_0x3AC:
  lfs       f1, 0x6C(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1B90(r2)
  stw       r0, 0x120(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1BE0(r2)
  stfs      f0, 0x6C(r31)
  lwz       r3, 0x38(r31)
  lfs       f2, 0x6C(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0x124(r1)
  lfd       f0, 0x120(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x3F8
  lfs       f0, 0x1B94(r2)
  stfs      f0, 0x6C(r31)

.loc_0x3F8:
  lwz       r3, 0x30(r31)
  lis       r5, 0x6874
  lis       r4, 0x6C
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3031
  addi      r5, r4, 0x6967
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        0x17E08
  lwz       r3, 0x30(r31)
  lis       r5, 0x6874
  lis       r4, 0x6C
  fmr       f30, f1
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3031
  addi      r5, r4, 0x6967
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        0x17CF0
  stfs      f1, 0xE0(r31)
  lis       r3, 0x7374
  addi      r6, r3, 0x6172
  li        r5, 0
  stfs      f30, 0xE4(r31)
  lwz       r3, 0x30(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        0x17DB0
  lwz       r3, 0x30(r31)
  lis       r4, 0x7374
  fmr       f30, f1
  addi      r6, r4, 0x6172
  lwz       r12, 0x0(r3)
  li        r5, 0
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        0x17C9C
  stfs      f1, 0xE8(r31)
  addi      r0, r1, 0x100
  stfs      f30, 0xEC(r31)
  lfd       f7, 0x370(r30)
  lfd       f6, 0x378(r30)
  lfd       f5, 0x380(r30)
  lfd       f4, 0x388(r30)
  lfd       f3, 0x390(r30)
  lfd       f2, 0x398(r30)
  lfd       f1, 0x3A0(r30)
  lfd       f0, 0x3A8(r30)
  stfd      f7, 0x100(r1)
  stfd      f6, 0x108(r1)
  stfd      f5, 0x110(r1)
  stfd      f4, 0x118(r1)
  stfd      f3, 0xE0(r1)
  stfd      f2, 0xE8(r1)
  stfd      f1, 0xF0(r1)
  stfd      f0, 0xF8(r1)
  lwz       r3, 0x30(r31)
  lwz       r4, 0xF8(r31)
  lwz       r12, 0x0(r3)
  rlwinm    r4,r4,3,0,28
  add       r6, r0, r4
  lwz       r12, 0x3C(r12)
  lwz       r5, 0x0(r6)
  lwz       r6, 0x4(r6)
  mtctr     r12
  bctrl     
  mr        r5, r3
  lwz       r3, 0x30(r31)
  lwz       r4, 0xF8(r31)
  addi      r0, r1, 0xE0
  lwz       r12, 0x0(r3)
  mr        r29, r5
  rlwinm    r4,r4,3,0,28
  lwz       r12, 0x3C(r12)
  add       r6, r0, r4
  lwz       r5, 0x0(r6)
  lwz       r6, 0x4(r6)
  mtctr     r12
  bctrl     
  mr        r0, r3
  lwz       r3, 0x48(r31)
  lis       r5, 0x434B
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  mr        r28, r0
  addi      r6, r5, 0x4554
  addi      r5, r4, 0x524F
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x9C(r31)
  mr        r27, r3
  stfs      f0, 0xA4(r31)
  lfs       f0, 0xA0(r31)
  stfs      f0, 0xA8(r31)
  lwz       r0, 0x174(r31)
  cmplwi    r0, 0xE
  bgt-      .loc_0x198C
  lis       r4, 0x804F
  rlwinm    r0,r0,2,0,29
  subi      r4, r4, 0x5C60
  lwzx      r0, r4, r0
  mtctr     r0
  bctr      
  lfs       f1, 0x68(r31)
  lfs       f0, 0x1BB8(r2)
  fadds     f0, f1, f0
  stfs      f0, 0x68(r31)
  lfs       f1, 0x68(r31)
  lfs       f0, 0x90(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x898
  mr        r3, r31
  bl        0x2994
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x898
  li        r27, 0x1

.loc_0x5E4:
  addi      r0, r27, 0x4
  li        r3, 0x1
  lbz       r4, 0x182(r31)
  slw       r0, r3, r0
  and.      r0, r4, r0
  beq-      .loc_0x824
  lis       r4, 0x696E
  lis       r3, 0x4E
  mr        r5, r27
  addi      r4, r4, 0x7430
  addi      r3, r3, 0x706F
  bl        0x17610
  mr        r5, r3
  lwz       r3, 0x30(r31)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        0x17BF4
  fmr       f30, f1
  lis       r4, 0x696E
  lis       r3, 0x4E
  mr        r5, r27
  addi      r4, r4, 0x7430
  addi      r3, r3, 0x706F
  bl        0x175D4
  mr        r5, r3
  lwz       r3, 0x30(r31)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        0x17ACC
  stfs      f1, 0x48(r1)
  lis       r3, 0x804C
  lbz       r11, 0x181(r31)
  addi      r0, r3, 0x14F0
  stfs      f30, 0x4C(r1)
  lis       r5, 0x804C
  lwz       r4, 0x48(r1)
  lis       r9, 0x8051
  lwz       r6, 0x4C(r1)
  lis       r3, 0x804C
  li        r10, 0
  stw       r4, 0x18(r1)
  lis       r4, 0x804E
  addi      r12, r3, 0x1514
  stw       r6, 0x1C(r1)
  lis       r6, 0x804E
  lfs       f1, 0x18(r1)
  lis       r3, 0x804E
  lfs       f0, 0x1C(r1)
  li        r8, 0x5
  li        r7, 0x6
  stw       r0, 0xC8(r1)
  addi      r0, r5, 0x14D8
  rlwinm    r11,r11,2,0,29
  addi      r5, r9, 0x4058
  stw       r0, 0xC8(r1)
  add       r5, r5, r11
  addi      r9, r4, 0x7470
  lfs       f2, 0x28(r5)
  subi      r11, r6, 0x65D0
  stw       r12, 0xC0(r1)
  addi      r6, r3, 0x7530
  li        r5, 0x1
  li        r0, 0x2
  stb       r10, 0xCC(r1)
  addi      r3, r1, 0xC8
  addi      r4, r1, 0xB8
  stb       r10, 0xCD(r1)
  stw       r9, 0xC8(r1)
  stfs      f1, 0xB8(r1)
  stfs      f0, 0xBC(r1)
  stw       r11, 0xC0(r1)
  stfs      f2, 0xC4(r1)
  sth       r8, 0xD0(r1)
  sth       r7, 0xD2(r1)
  stw       r10, 0xD4(r1)
  stw       r10, 0xD8(r1)
  stw       r6, 0xC8(r1)
  stb       r5, 0xCC(r1)
  stb       r0, 0xCD(r1)
  bl        -0x39590
  cmpwi     r27, 0x3
  bne-      .loc_0x7E8
  lwz       r5, 0xE8(r31)
  lis       r3, 0x804C
  lwz       r6, 0xEC(r31)
  addi      r0, r3, 0x14F0
  lis       r3, 0x804C
  li        r9, 0
  stw       r0, 0x98(r1)
  addi      r0, r3, 0x14D8
  lis       r3, 0x804C
  lis       r4, 0x804E
  stw       r5, 0x10(r1)
  addi      r11, r3, 0x1514
  lfs       f0, 0x1B90(r2)
  lis       r5, 0x804E
  stw       r6, 0x14(r1)
  lis       r3, 0x804E
  lfs       f2, 0x10(r1)
  li        r7, 0x8
  lfs       f1, 0x14(r1)
  addi      r8, r4, 0x7488
  stw       r0, 0x98(r1)
  subi      r10, r5, 0x65D0
  addi      r6, r3, 0x7548
  li        r5, 0x1
  stw       r11, 0xB0(r1)
  li        r0, 0x2
  addi      r3, r1, 0x98
  addi      r4, r1, 0xA8
  stb       r9, 0x9C(r1)
  stb       r9, 0x9D(r1)
  stw       r8, 0x98(r1)
  stfs      f2, 0xA8(r1)
  stfs      f1, 0xAC(r1)
  stw       r10, 0xB0(r1)
  stfs      f0, 0xB4(r1)
  sth       r7, 0xA0(r1)
  stw       r9, 0xA4(r1)
  stw       r6, 0x98(r1)
  stb       r5, 0x9C(r1)
  stb       r0, 0x9D(r1)
  bl        -0x39718

.loc_0x7E8:
  lis       r4, 0x696E
  lis       r3, 0x4E
  mr        r5, r27
  addi      r4, r4, 0x7430
  addi      r3, r3, 0x706F
  bl        0x17424
  mr        r5, r3
  lwz       r3, 0x30(r31)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stb       r0, 0xB0(r3)

.loc_0x824:
  addi      r27, r27, 0x1
  cmpwi     r27, 0x4
  blt+      .loc_0x5E4
  li        r3, 0xC
  addi      r0, r1, 0x100
  stw       r3, 0x174(r31)
  lbz       r3, 0x181(r31)
  subi      r3, r3, 0x1
  stw       r3, 0xF8(r31)
  lwz       r3, 0x30(r31)
  lwz       r4, 0xF8(r31)
  lwz       r12, 0x0(r3)
  rlwinm    r4,r4,3,0,28
  lwz       r12, 0x3C(r12)
  add       r6, r0, r4
  lwz       r5, 0x0(r6)
  lwz       r6, 0x4(r6)
  mtctr     r12
  bctrl     
  mr        r29, r3
  bl        0x7B0A8
  li        r4, 0x2
  bl        0x79874
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1812
  li        r5, 0
  bl        -0xBBA30
  lwz       r3, 0x154(r31)
  bl        0x17D88

.loc_0x898:
  mr        r3, r31
  mr        r4, r29
  bl        0x2158
  mr        r3, r31
  bl        0x2058
  b         .loc_0x198C
  mr        r3, r31
  mr        r4, r29
  li        r5, 0x1
  bl        0x1910
  fmr       f30, f1
  mr        r3, r31
  mr        r4, r29
  bl        0x1C30
  lis       r3, 0x8051
  addi      r3, r3, 0x4058
  lfs       f0, 0xC(r3)
  fcmpo     cr0, f30, f0
  bge-      .loc_0x900
  li        r3, 0
  li        r0, 0x2
  stw       r3, 0xFC(r31)
  stw       r0, 0x174(r31)
  bl        0x7B028
  li        r4, 0x5
  bl        0x797F4

.loc_0x900:
  mr        r3, r31
  bl        0x1FFC
  mr        r3, r31
  bl        0x22E0
  b         .loc_0x198C
  mr        r3, r31
  mr        r4, r29
  bl        0x20DC
  mr        r3, r31
  bl        0x1FDC
  mr        r3, r31
  bl        0x22C0
  b         .loc_0x198C
  lwz       r3, 0xFC(r31)
  addi      r0, r3, 0x1
  stw       r0, 0xFC(r31)
  lwz       r0, 0x178(r31)
  cmpwi     r0, 0x1
  bne-      .loc_0x95C
  lfs       f1, 0x1BA4(r2)
  bl        0x1D674
  fmr       f30, f1
  b         .loc_0x968

.loc_0x95C:
  lfs       f1, 0x1BBC(r2)
  bl        0x1D664
  fmr       f30, f1

.loc_0x968:
  lwz       r0, 0x178(r31)
  cmpwi     r0, 0x1
  bne-      .loc_0x980
  lfs       f1, 0x1BA4(r2)
  bl        0x1D5E4
  b         .loc_0x988

.loc_0x980:
  lfs       f1, 0x1BBC(r2)
  bl        0x1D5D8

.loc_0x988:
  lfs       f4, 0xAC(r31)
  lis       r3, 0x8051
  lfs       f2, 0x1BC0(r2)
  stfs      f4, 0x40(r1)
  lfs       f3, 0xB0(r31)
  fmuls     f0, f3, f1
  stfs      f3, 0x44(r1)
  fmuls     f3, f3, f30
  fmsubs    f0, f4, f30, f0
  fmadds    f1, f4, f1, f3
  stfs      f0, 0xAC(r31)
  stfs      f1, 0xB0(r31)
  lfs       f0, 0xAC(r31)
  lfs       f1, 0xB0(r31)
  fmuls     f3, f0, f0
  lfs       f0, 0x48DC(r3)
  fmuls     f1, f1, f1
  fmuls     f0, f2, f0
  fadds     f4, f3, f1
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  beq-      .loc_0xA2C
  lfs       f0, 0x1B94(r2)
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  bne-      .loc_0x9F4
  b         .loc_0xA14

.loc_0x9F4:
  fsqrte    f3, f4
  lfs       f2, 0x1BB4(r2)
  lfs       f0, 0x1BC4(r2)
  frsp      f3, f3
  fmuls     f1, f3, f3
  fmuls     f2, f2, f3
  fnmsubs   f0, f4, f1, f0
  fmuls     f4, f2, f0

.loc_0xA14:
  lfs       f0, 0xAC(r31)
  fmuls     f0, f0, f4
  stfs      f0, 0xAC(r31)
  lfs       f0, 0xB0(r31)
  fmuls     f0, f0, f4
  stfs      f0, 0xB0(r31)

.loc_0xA2C:
  lfs       f1, 0x1B94(r2)
  mr        r3, r31
  addi      r4, r1, 0x40
  bl        0x26E8
  lis       r3, 0x8051
  lfs       f2, 0xAC(r31)
  addi      r4, r3, 0x4058
  lfs       f0, 0x9C(r31)
  lfs       f1, 0x0(r4)
  mr        r3, r28
  lfs       f3, 0x4(r4)
  fmuls     f1, f2, f1
  fmadds    f0, f3, f1, f0
  stfs      f0, 0x9C(r31)
  lfs       f1, 0xB0(r31)
  lfs       f0, 0x0(r4)
  lfs       f2, 0x4(r4)
  fmuls     f1, f1, f0
  lfs       f0, 0xA0(r31)
  fmadds    f0, f2, f1, f0
  stfs      f0, 0xA0(r31)
  bl        0x177A4
  lfs       f0, 0xA0(r31)
  mr        r3, r28
  fsubs     f31, f1, f0
  bl        0x176A8
  lfs       f0, 0x9C(r31)
  lwz       r0, 0x17C(r31)
  fsubs     f4, f1, f0
  rlwinm.   r0,r0,0,28,28
  fmuls     f2, f4, f4
  fadds     f0, f31, f2
  fadds     f6, f31, f0
  bne-      .loc_0xB7C
  lis       r3, 0x8051
  lfs       f1, 0x1BC0(r2)
  lfs       f0, 0x48DC(r3)
  fmadds    f5, f31, f31, f2
  fmuls     f0, f1, f0
  fcmpo     cr0, f5, f0
  cror      2, 0, 0x2
  beq-      .loc_0xB10
  lfs       f0, 0x1B94(r2)
  fcmpo     cr0, f5, f0
  cror      2, 0, 0x2
  bne-      .loc_0xAE8
  b         .loc_0xB08

.loc_0xAE8:
  fsqrte    f3, f5
  lfs       f2, 0x1BB4(r2)
  lfs       f0, 0x1BC4(r2)
  frsp      f3, f3
  fmuls     f1, f3, f3
  fmuls     f2, f2, f3
  fnmsubs   f0, f5, f1, f0
  fmuls     f5, f2, f0

.loc_0xB08:
  fmuls     f4, f4, f5
  fmuls     f31, f31, f5

.loc_0xB10:
  lfs       f0, 0xB0(r31)
  lfs       f2, 0xAC(r31)
  fmuls     f1, f31, f0
  lfs       f0, 0x1BA8(r2)
  fmadds    f1, f4, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0xB6C
  lwz       r3, 0x17C(r31)
  rlwinm.   r0,r3,0,31,31
  bne-      .loc_0xB48
  lwz       r0, 0x17C(r31)
  ori       r0, r0, 0x3
  stw       r0, 0x17C(r31)
  b         .loc_0xBBC

.loc_0xB48:
  rlwinm.   r0,r3,0,30,30
  bne-      .loc_0xBBC
  lwz       r0, 0x17C(r31)
  ori       r0, r0, 0x8
  stw       r0, 0x17C(r31)
  lwz       r0, 0x17C(r31)
  rlwinm    r0,r0,0,0,29
  stw       r0, 0x17C(r31)
  b         .loc_0xBBC

.loc_0xB6C:
  lwz       r0, 0x17C(r31)
  rlwinm    r0,r0,0,31,29
  stw       r0, 0x17C(r31)
  b         .loc_0xBBC

.loc_0xB7C:
  lis       r3, 0x8051
  addi      r3, r3, 0x4058
  lfs       f0, 0x14(r3)
  fcmpo     cr0, f6, f0
  ble-      .loc_0xBBC
  li        r0, 0x4
  li        r3, -0x2A
  stw       r0, 0x174(r31)
  li        r0, 0
  lwz       r4, 0x17C(r31)
  and       r3, r4, r3
  stw       r3, 0x17C(r31)
  lwz       r3, 0x17C(r31)
  ori       r3, r3, 0x10
  stw       r3, 0x17C(r31)
  stw       r0, 0xFC(r31)

.loc_0xBBC:
  lwz       r0, 0xFC(r31)
  cmpwi     r0, 0x3C
  ble-      .loc_0xC08
  lis       r3, 0x8051
  addi      r3, r3, 0x4058
  lfs       f0, 0x14(r3)
  fcmpo     cr0, f6, f0
  ble-      .loc_0xC08
  li        r0, 0x4
  li        r3, -0x2A
  stw       r0, 0x174(r31)
  li        r0, 0
  lwz       r4, 0x17C(r31)
  and       r3, r4, r3
  stw       r3, 0x17C(r31)
  lwz       r3, 0x17C(r31)
  ori       r3, r3, 0x10
  stw       r3, 0x17C(r31)
  stw       r0, 0xFC(r31)

.loc_0xC08:
  lwz       r3, 0x20(r31)
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,22,22
  beq-      .loc_0xC34
  li        r3, 0x5
  li        r0, 0
  stw       r3, 0x174(r31)
  lwz       r3, 0x17C(r31)
  rlwinm    r3,r3,0,0,29
  stw       r3, 0x17C(r31)
  stw       r0, 0xFC(r31)

.loc_0xC34:
  mr        r3, r31
  mr        r4, r29
  bl        0x18C0
  mr        r3, r31
  bl        0x1CBC
  b         .loc_0x198C
  mr        r3, r31
  mr        r4, r28
  li        r5, 0x1
  bl        0x1574
  fmr       f30, f1
  mr        r3, r31
  mr        r4, r29
  bl        0x1894
  lis       r3, 0x8051
  addi      r3, r3, 0x4058
  lfs       f0, 0x18(r3)
  fcmpo     cr0, f30, f0
  bge-      .loc_0xC9C
  li        r3, 0
  li        r0, 0x3
  stw       r3, 0xFC(r31)
  stw       r0, 0x174(r31)
  bl        0x7AC8C
  li        r4, 0x3
  bl        0x79458

.loc_0xC9C:
  lwz       r3, 0x20(r31)
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,22,22
  beq-      .loc_0xCC8
  li        r3, 0x5
  li        r0, 0
  stw       r3, 0x174(r31)
  lwz       r3, 0x17C(r31)
  rlwinm    r3,r3,0,0,29
  stw       r3, 0x17C(r31)
  stw       r0, 0xFC(r31)

.loc_0xCC8:
  mr        r3, r31
  bl        0x1C34
  b         .loc_0x198C
  mr        r3, r31
  mr        r4, r28
  li        r5, 0x1
  bl        0x14EC
  fmr       f30, f1
  mr        r3, r31
  mr        r4, r28
  bl        0x180C
  lis       r3, 0x8051
  addi      r3, r3, 0x4058
  lfs       f0, 0x14(r3)
  fcmpo     cr0, f30, f0
  bge-      .loc_0xD24
  li        r3, 0
  li        r0, 0x1
  stw       r3, 0xFC(r31)
  mr        r3, r31
  stw       r0, 0x4(r26)
  bl        0x21C0
  b         .loc_0x198C

.loc_0xD24:
  lbz       r4, 0x79(r3)
  lbz       r3, 0x183(r31)
  subfic    r0, r4, 0xFF
  cmpw      r3, r0
  bge-      .loc_0xD44
  srawi     r0, r4, 0x1
  add       r0, r3, r0
  stb       r0, 0x183(r31)

.loc_0xD44:
  lwz       r3, 0x20(r31)
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,22,22
  beq-      .loc_0xD74
  li        r0, 0x5
  li        r3, -0x14
  stw       r0, 0x174(r31)
  li        r0, 0
  lwz       r4, 0x17C(r31)
  and       r3, r4, r3
  stw       r3, 0x17C(r31)
  stw       r0, 0xFC(r31)

.loc_0xD74:
  mr        r3, r31
  bl        0x1B88
  b         .loc_0x198C
  mr        r3, r31
  bl        0x2260
  cmpwi     r3, 0
  blt-      .loc_0xDA8
  lbz       r0, 0x181(r31)
  cmpw      r3, r0
  bge-      .loc_0xDA8
  lwz       r0, 0xF8(r31)
  cmpw      r3, r0
  bne-      .loc_0xE3C

.loc_0xDA8:
  mr        r3, r29
  bl        0x17478
  lfs       f0, 0xA0(r31)
  mr        r3, r29
  fsubs     f30, f1, f0
  bl        0x1737C
  lfs       f0, 0x9C(r31)
  lis       r3, 0x8051
  addi      r3, r3, 0x4058
  fmuls     f2, f30, f30
  fsubs     f1, f1, f0
  lfs       f0, 0xC(r3)
  fmadds    f1, f1, f1, f2
  fcmpo     cr0, f1, f0
  bge-      .loc_0xE08
  mr        r3, r31
  mr        r4, r29
  bl        0x1C0C
  li        r0, 0x2
  stw       r0, 0x174(r31)
  bl        0x7AB24
  li        r4, 0x5
  bl        0x792F0
  b         .loc_0xEB8

.loc_0xE08:
  mr        r3, r31
  mr        r4, r29
  li        r5, 0x1
  bl        0x13B8
  mr        r3, r31
  mr        r4, r29
  bl        0x16DC
  li        r0, 0x1
  stw       r0, 0x174(r31)
  bl        0x7AAF0
  li        r4, 0x2
  bl        0x792BC
  b         .loc_0xEB8

.loc_0xE3C:
  stw       r3, 0xF8(r31)
  addi      r0, r1, 0x100
  lwz       r3, 0x30(r31)
  lwz       r4, 0xF8(r31)
  lwz       r12, 0x0(r3)
  rlwinm    r4,r4,3,0,28
  lwz       r12, 0x3C(r12)
  add       r6, r0, r4
  lwz       r5, 0x0(r6)
  lwz       r6, 0x4(r6)
  mtctr     r12
  bctrl     
  mr        r26, r3
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1802
  li        r5, 0
  bl        -0xBC020
  bl        0x7AA9C
  li        r4, 0x2
  bl        0x79268
  lwz       r3, 0x154(r31)
  bl        0x1778C
  mr        r3, r31
  mr        r4, r26
  li        r5, 0x1
  bl        0x132C
  mr        r3, r31
  mr        r4, r26
  bl        0x1650
  li        r0, 0x1
  stw       r0, 0x174(r31)

.loc_0xEB8:
  mr        r3, r31
  bl        0x1A44
  b         .loc_0x198C
  mr        r3, r31
  mr        r4, r29
  li        r5, 0x1
  bl        0x12FC
  fmr       f30, f1
  mr        r3, r31
  mr        r4, r29
  bl        0x161C
  lis       r3, 0x8051
  addi      r3, r3, 0x4058
  lfs       f0, 0xC(r3)
  fcmpo     cr0, f30, f0
  bge-      .loc_0xF04
  mr        r3, r31
  mr        r4, r29
  bl        0x1AF8

.loc_0xF04:
  mr        r3, r31
  bl        0x19F8
  lwz       r0, 0x17C(r31)
  lis       r3, 0x8051
  addi      r3, r3, 0x4058
  ori       r0, r0, 0x10
  stw       r0, 0x17C(r31)
  lbz       r4, 0x183(r31)
  lbz       r0, 0x79(r3)
  add       r0, r4, r0
  stb       r0, 0x183(r31)
  lbz       r0, 0x79(r3)
  lbz       r3, 0x183(r31)
  subfic    r0, r0, 0xFF
  cmpw      r3, r0
  blt-      .loc_0x198C
  li        r0, 0x4
  mr        r3, r31
  stw       r0, 0x4(r26)
  bl        0x1F8C
  b         .loc_0x198C
  mr        r3, r31
  mr        r4, r29
  li        r5, 0x1
  bl        0x1268
  fmr       f30, f1
  mr        r3, r31
  mr        r4, r29
  bl        0x1588
  lis       r3, 0x8051
  addi      r3, r3, 0x4058
  lfs       f0, 0xC(r3)
  fcmpo     cr0, f30, f0
  bge-      .loc_0xF98
  mr        r3, r31
  mr        r4, r29
  bl        0x1A64

.loc_0xF98:
  mr        r3, r31
  bl        0x1964
  lwz       r0, 0x17C(r31)
  lis       r3, 0x8051
  addi      r3, r3, 0x4058
  ori       r0, r0, 0x10
  stw       r0, 0x17C(r31)
  lbz       r4, 0x183(r31)
  lbz       r0, 0x79(r3)
  add       r0, r4, r0
  stb       r0, 0x183(r31)
  lbz       r0, 0x79(r3)
  lbz       r3, 0x183(r31)
  subfic    r0, r0, 0xFF
  cmpw      r3, r0
  blt-      .loc_0x198C
  li        r0, 0x3
  mr        r3, r31
  stw       r0, 0x4(r26)
  bl        0x1EF8
  b         .loc_0x198C
  mr        r3, r31
  mr        r4, r29
  bl        0x1508
  mr        r3, r31
  bl        0x1994
  lwz       r3, -0x6560(r13)
  bl        0x8928
  cmpwi     r3, 0x1
  beq-      .loc_0x1044
  bge-      .loc_0x106C
  cmpwi     r3, 0
  bge-      .loc_0x1020
  b         .loc_0x106C

.loc_0x1020:
  bl        0x7A8FC
  li        r4, 0x7
  bl        0x790C8
  li        r0, 0x5
  stw       r0, 0x174(r31)
  lwz       r0, 0x17C(r31)
  rlwinm    r0,r0,0,28,26
  stw       r0, 0x17C(r31)
  b         .loc_0x106C

.loc_0x1044:
  bl        0x7A8D8
  li        r4, 0x7
  bl        0x790A4
  lwz       r4, 0x17C(r31)
  li        r0, 0x5
  mr        r3, r31
  rlwinm    r4,r4,0,28,26
  stw       r4, 0x17C(r31)
  stw       r0, 0x4(r26)
  bl        0x1E74

.loc_0x106C:
  lbz       r4, 0x183(r31)
  cmplwi    r4, 0xB4
  bge-      .loc_0x198C
  lis       r3, 0x8051
  addi      r3, r3, 0x4058
  lbz       r0, 0x79(r3)
  add       r0, r4, r0
  stb       r0, 0x183(r31)
  b         .loc_0x198C
  mr        r3, r31
  mr        r4, r29
  bl        0x1464
  mr        r3, r31
  bl        0x18F0
  lwz       r3, -0x6560(r13)
  bl        0x89A8
  cmpwi     r3, 0x1
  beq-      .loc_0x10C4
  bge-      .loc_0x1110
  cmpwi     r3, 0
  bge-      .loc_0x10E8
  b         .loc_0x1110

.loc_0x10C4:
  bl        0x7A858
  li        r4, 0x7
  bl        0x79024
  li        r0, 0x5
  stw       r0, 0x174(r31)
  lwz       r0, 0x17C(r31)
  rlwinm    r0,r0,0,28,26
  stw       r0, 0x17C(r31)
  b         .loc_0x1110

.loc_0x10E8:
  bl        0x7A834
  li        r4, 0x2
  bl        0x79000
  li        r3, 0xE
  li        r0, 0
  stw       r3, 0x174(r31)
  lwz       r3, 0x17C(r31)
  rlwinm    r3,r3,0,28,26
  stw       r3, 0x17C(r31)
  stw       r0, 0xFC(r31)

.loc_0x1110:
  lbz       r4, 0x183(r31)
  cmplwi    r4, 0xB4
  bge-      .loc_0x198C
  lis       r3, 0x8051
  addi      r3, r3, 0x4058
  lbz       r0, 0x79(r3)
  add       r0, r4, r0
  stb       r0, 0x183(r31)
  b         .loc_0x198C
  lfs       f0, 0xB0(r31)
  lfs       f1, 0xAC(r31)
  fneg      f2, f0
  bl        0x1CEC8
  lwz       r0, 0x178(r31)
  fmr       f30, f1
  cmpwi     r0, 0x1
  bne-      .loc_0x116C
  lfs       f0, 0x1B94(r2)
  fcmpo     cr0, f30, f0
  ble-      .loc_0x116C
  lfs       f0, 0x1BC8(r2)
  fsubs     f30, f30, f0
  b         .loc_0x1188

.loc_0x116C:
  cmpwi     r0, 0x2
  bne-      .loc_0x1188
  lfs       f0, 0x1B94(r2)
  fcmpo     cr0, f30, f0
  bge-      .loc_0x1188
  lfs       f0, 0x1BC8(r2)
  fadds     f30, f30, f0

.loc_0x1188:
  cmpwi     r0, 0x1
  bne-      .loc_0x1198
  lfs       f0, 0x1BA4(r2)
  b         .loc_0x119C

.loc_0x1198:
  lfs       f0, 0x1BBC(r2)

.loc_0x119C:
  fadds     f30, f30, f0
  fmr       f1, f30
  bl        0x1CDB8
  stfs      f1, 0xAC(r31)
  fmr       f1, f30
  bl        0x1CE14
  fneg      f0, f1
  lis       r3, 0x8051
  lfs       f1, 0x1BC0(r2)
  stfs      f0, 0xB0(r31)
  lfs       f0, 0xAC(r31)
  lfs       f2, 0xB0(r31)
  fmuls     f3, f0, f0
  lfs       f0, 0x48DC(r3)
  fmuls     f2, f2, f2
  fmuls     f0, f1, f0
  fadds     f4, f3, f2
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  beq-      .loc_0x1238
  lfs       f0, 0x1B94(r2)
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  bne-      .loc_0x1200
  b         .loc_0x1220

.loc_0x1200:
  fsqrte    f3, f4
  lfs       f2, 0x1BB4(r2)
  lfs       f0, 0x1BC4(r2)
  frsp      f3, f3
  fmuls     f1, f3, f3
  fmuls     f2, f2, f3
  fnmsubs   f0, f4, f1, f0
  fmuls     f4, f2, f0

.loc_0x1220:
  lfs       f0, 0xAC(r31)
  fmuls     f0, f0, f4
  stfs      f0, 0xAC(r31)
  lfs       f0, 0xB0(r31)
  fmuls     f0, f0, f4
  stfs      f0, 0xB0(r31)

.loc_0x1238:
  lis       r3, 0x8051
  lfsu      f0, 0x4058(r3)
  lfs       f2, 0xAC(r31)
  lfs       f1, 0x9C(r31)
  fmuls     f3, f2, f0
  lfs       f5, 0x4(r3)
  lfs       f2, 0x1B98(r2)
  lfs       f4, 0x1B94(r2)
  fmadds    f1, f5, f3, f1
  lfs       f0, 0x1BCC(r2)
  stfs      f1, 0x9C(r31)
  lfs       f3, 0xB0(r31)
  lfs       f1, 0x0(r3)
  lfs       f5, 0x4(r3)
  fmuls     f3, f3, f1
  lfs       f1, 0xA0(r31)
  fmadds    f1, f5, f3, f1
  stfs      f1, 0xA0(r31)
  lfs       f1, 0xB0(r31)
  lfs       f3, 0xAC(r31)
  fmuls     f1, f2, f1
  fmadds    f1, f4, f3, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x1598
  lwz       r3, 0x17C(r31)
  rlwinm.   r0,r3,0,31,31
  bne-      .loc_0x12B4
  lwz       r0, 0x17C(r31)
  ori       r0, r0, 0x3
  stw       r0, 0x17C(r31)
  b         .loc_0x15A4

.loc_0x12B4:
  rlwinm.   r0,r3,0,30,30
  bne-      .loc_0x15A4
  li        r0, 0x1
  mr        r3, r31
  stw       r0, 0x174(r31)
  bl        0x1CA0
  lwz       r0, 0x17C(r31)
  rlwinm    r0,r0,0,0,29
  stw       r0, 0x17C(r31)
  lbz       r0, 0x2C(r31)
  cmplwi    r0, 0
  beq-      .loc_0x1400
  lwz       r3, 0x54(r31)
  lis       r5, 0x6577
  lis       r4, 0x54
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x5F6C
  addi      r5, r4, 0x5F6E
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  lis       r4, 0x6C77
  stb       r0, 0xB0(r3)
  mr        r25, r3
  addi      r6, r4, 0x696E
  li        r5, 0x4E
  lwz       r3, 0x54(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stb       r0, 0xB0(r3)
  lbz       r0, 0x2E(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1400
  mr        r3, r25
  bl        0x16ED8
  lis       r4, 0x8051
  mr        r3, r25
  addi      r4, r4, 0x4058
  lfs       f0, 0x54(r4)
  fadds     f30, f0, f1
  bl        0x16DD4
  lis       r3, 0x8051
  li        r7, 0
  addi      r3, r3, 0x4058
  stfs      f30, 0x34(r1)
  lfs       f0, 0x50(r3)
  lis       r3, 0x804C
  addi      r0, r3, 0x14F0
  lwz       r3, 0x34(r1)
  fadds     f0, f0, f1
  lis       r6, 0x804C
  stw       r3, 0x3C(r1)
  lis       r4, 0x804E
  lis       r5, 0x804C
  lis       r3, 0x804E
  stfs      f0, 0x30(r1)
  addi      r9, r5, 0x1514
  lfs       f0, 0x3C(r1)
  li        r5, 0x7
  lwz       r10, 0x30(r1)
  addi      r8, r6, 0x14D8
  stw       r0, 0x7C(r1)
  addi      r6, r4, 0x7488
  addi      r0, r3, 0x3DC4
  addi      r3, r1, 0x7C
  stw       r10, 0x38(r1)
  addi      r4, r1, 0x8C
  stw       r8, 0x7C(r1)
  lfs       f1, 0x38(r1)
  stw       r6, 0x7C(r1)
  stw       r9, 0x94(r1)
  stfs      f1, 0x8C(r1)
  stfs      f0, 0x90(r1)
  stb       r7, 0x80(r1)
  stb       r7, 0x81(r1)
  sth       r5, 0x84(r1)
  stw       r7, 0x88(r1)
  stw       r0, 0x7C(r1)
  bl        -0x3B3A0

.loc_0x1400:
  lbz       r0, 0x2D(r31)
  cmplwi    r0, 0
  beq-      .loc_0x1528
  lwz       r3, 0x54(r31)
  lis       r5, 0x6577
  lis       r4, 0x54
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x5F72
  addi      r5, r4, 0x5F6E
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  lis       r4, 0x7277
  stb       r0, 0xB0(r3)
  mr        r25, r3
  addi      r6, r4, 0x696E
  li        r5, 0x4E
  lwz       r3, 0x54(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stb       r0, 0xB0(r3)
  lbz       r0, 0x2E(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1528
  mr        r3, r25
  bl        0x16DB0
  lis       r4, 0x8051
  mr        r3, r25
  addi      r4, r4, 0x4058
  lfs       f0, 0x5C(r4)
  fadds     f30, f0, f1
  bl        0x16CAC
  lis       r3, 0x8051
  li        r7, 0
  addi      r3, r3, 0x4058
  stfs      f30, 0x24(r1)
  lfs       f0, 0x58(r3)
  lis       r3, 0x804C
  addi      r0, r3, 0x14F0
  lwz       r3, 0x24(r1)
  fadds     f0, f0, f1
  lis       r6, 0x804C
  stw       r3, 0x2C(r1)
  lis       r4, 0x804E
  lis       r5, 0x804C
  lis       r3, 0x804E
  stfs      f0, 0x20(r1)
  addi      r9, r5, 0x1514
  lfs       f0, 0x2C(r1)
  li        r5, 0x7
  lwz       r10, 0x20(r1)
  addi      r8, r6, 0x14D8
  stw       r0, 0x60(r1)
  addi      r6, r4, 0x7488
  addi      r0, r3, 0x3DC4
  addi      r3, r1, 0x60
  stw       r10, 0x28(r1)
  addi      r4, r1, 0x70
  stw       r8, 0x60(r1)
  lfs       f1, 0x28(r1)
  stw       r6, 0x60(r1)
  stw       r9, 0x78(r1)
  stfs      f1, 0x70(r1)
  stfs      f0, 0x74(r1)
  stb       r7, 0x64(r1)
  stb       r7, 0x65(r1)
  sth       r5, 0x68(r1)
  stw       r7, 0x6C(r1)
  stw       r0, 0x60(r1)
  bl        -0x3B4C8

.loc_0x1528:
  lbz       r0, 0x2C(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1540
  lbz       r0, 0x2D(r31)
  cmplwi    r0, 0
  beq-      .loc_0x15A4

.loc_0x1540:
  lwz       r4, 0x16C(r31)
  li        r0, 0
  lwz       r5, 0x1C(r4)
  lbz       r3, 0x0(r5)
  stb       r3, 0x20(r4)
  lbz       r3, 0x1(r5)
  stb       r3, 0x21(r4)
  lbz       r3, 0x2(r5)
  stb       r3, 0x22(r4)
  lbz       r3, 0x3(r5)
  stb       r3, 0x23(r4)
  stw       r0, 0x30(r4)
  lbz       r0, 0x2E(r31)
  cmplwi    r0, 0
  bne-      .loc_0x15A4
  lwz       r3, 0x64(r31)
  bl        -0xCBF0C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x187F
  li        r5, 0
  bl        -0xBC734
  b         .loc_0x15A4

.loc_0x1598:
  lwz       r0, 0x17C(r31)
  rlwinm    r0,r0,0,31,29
  stw       r0, 0x17C(r31)

.loc_0x15A4:
  mr        r3, r31
  mr        r4, r29
  bl        0xF50
  mr        r3, r31
  bl        0x134C
  b         .loc_0x198C
  lfs       f1, 0x1BB0(r2)
  lfs       f0, 0x1B94(r2)
  stfs      f1, 0xD4(r27)
  stfs      f0, 0xD8(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f31, 0x1BB0(r2)
  li        r25, 0
  lfs       f30, 0x1B94(r2)
  li        r26, 0
  b         .loc_0x1618

.loc_0x15F0:
  lwz       r3, 0xF0(r31)
  lwzx      r3, r3, r26
  stfs      f31, 0xD4(r3)
  stfs      f30, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r26, r26, 0x34
  addi      r25, r25, 0x1

.loc_0x1618:
  lwz       r0, 0xF4(r31)
  cmpw      r25, r0
  blt+      .loc_0x15F0
  lwz       r3, 0xFC(r31)
  addi      r0, r3, 0x1
  cmpwi     r0, 0x5
  stw       r0, 0xFC(r31)
  ble-      .loc_0x198C
  lwz       r0, 0x28(r31)
  stw       r0, 0xF8(r31)
  lwz       r0, 0xF8(r31)
  cmpwi     r0, 0
  bge-      .loc_0x1654
  li        r0, 0
  stw       r0, 0xF8(r31)

.loc_0x1654:
  lwz       r3, 0x30(r31)
  addi      r0, r1, 0xE0
  lwz       r4, 0xF8(r31)
  lwz       r12, 0x0(r3)
  rlwinm    r4,r4,3,0,28
  lwz       r12, 0x3C(r12)
  add       r6, r0, r4
  lwz       r5, 0x0(r6)
  lwz       r6, 0x4(r6)
  mtctr     r12
  bctrl     
  mr        r26, r3
  lwz       r3, 0x30(r31)
  lwz       r4, 0xF8(r31)
  addi      r0, r1, 0x100
  lwz       r12, 0x0(r3)
  rlwinm    r4,r4,3,0,28
  lwz       r12, 0x3C(r12)
  add       r6, r0, r4
  lwz       r5, 0x0(r6)
  lwz       r6, 0x4(r6)
  mtctr     r12
  bctrl     
  lwz       r4, 0x154(r31)
  li        r0, 0x1
  mr        r3, r26
  stb       r0, 0x34(r4)
  bl        0x16B64
  fmr       f30, f1
  mr        r3, r26
  bl        0x16A6C
  stfs      f1, 0x9C(r31)
  mr        r3, r27
  lfs       f0, 0x1BD0(r2)
  stfs      f30, 0xA0(r31)
  stfs      f0, 0xBC(r31)
  lfs       f1, 0xA0(r31)
  lfs       f0, 0x9C(r31)
  stfs      f0, 0xD4(r27)
  stfs      f1, 0xD8(r27)
  lwz       r12, 0x0(r27)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0xAC(r31)
  lis       r3, 0x8051
  lfs       f0, 0xB0(r31)
  subi      r3, r3, 0x2E20
  fneg      f1, f1
  fneg      f2, f0
  bl        -0x3BFDE8
  lfs       f0, 0x1BD4(r2)
  mr        r3, r27
  fmuls     f0, f1, f0
  stfs      f0, 0xC0(r27)
  lwz       r12, 0x0(r27)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0xBC(r31)
  mr        r3, r27
  stfs      f0, 0xCC(r27)
  stfs      f0, 0xD0(r27)
  lwz       r12, 0x0(r27)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  lfs       f30, 0x1BD4(r2)
  subi      r26, r3, 0x2E20
  li        r25, 0
  li        r27, 0
  b         .loc_0x183C

.loc_0x1778:
  lwz       r0, 0xF0(r31)
  addi      r3, r27, 0x4
  lfs       f0, 0x9C(r31)
  addi      r4, r27, 0x14
  add       r3, r0, r3
  stfs      f0, 0x0(r3)
  lfs       f0, 0xA0(r31)
  stfs      f0, 0x4(r3)
  lwz       r0, 0xF0(r31)
  lfs       f0, 0xAC(r31)
  add       r4, r0, r4
  stfs      f0, 0x0(r4)
  lfs       f0, 0xB0(r31)
  stfs      f0, 0x4(r4)
  lwz       r3, 0xF0(r31)
  lfs       f1, 0xA0(r31)
  lwzx      r3, r3, r27
  lfs       f0, 0x9C(r31)
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0xAC(r31)
  mr        r3, r26
  lfs       f0, 0xB0(r31)
  fneg      f1, f1
  fneg      f2, f0
  bl        -0x3BFEB8
  lwz       r3, 0xF0(r31)
  fmuls     f0, f1, f30
  lwzx      r3, r3, r27
  stfs      f0, 0xC0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xF0(r31)
  lfs       f0, 0xBC(r31)
  lwzx      r3, r3, r27
  stfs      f0, 0xCC(r3)
  stfs      f0, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r27, r27, 0x34
  addi      r25, r25, 0x1

.loc_0x183C:
  lwz       r0, 0xF4(r31)
  cmpw      r25, r0
  blt+      .loc_0x1778
  li        r3, 0
  li        r0, 0xA
  stw       r3, 0xFC(r31)
  stw       r0, 0x174(r31)
  bl        0x7A0C4
  li        r4, 0x1
  bl        0x78890
  b         .loc_0x198C
  mr        r3, r31
  mr        r4, r29
  li        r5, 0x1
  bl        0x958
  fmr       f30, f1
  mr        r3, r31
  mr        r4, r29
  bl        0xC78
  lis       r3, 0x8051
  addi      r3, r3, 0x4058
  lfs       f0, 0xC(r3)
  fcmpo     cr0, f30, f0
  bge-      .loc_0x18B8
  li        r3, 0
  li        r0, 0x2
  stw       r3, 0xFC(r31)
  stw       r0, 0x174(r31)
  bl        0x7A070
  li        r4, 0x5
  bl        0x7883C

.loc_0x18B8:
  mr        r3, r31
  bl        0x1044
  b         .loc_0x198C
  lfs       f1, 0x1BB0(r2)
  lfs       f0, 0x1B94(r2)
  stfs      f1, 0xD4(r27)
  stfs      f0, 0xD8(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f30, 0x1BB0(r2)
  li        r25, 0
  lfs       f31, 0x1B94(r2)
  li        r26, 0
  b         .loc_0x1920

.loc_0x18F8:
  lwz       r3, 0xF0(r31)
  lwzx      r3, r3, r26
  stfs      f30, 0xD4(r3)
  stfs      f31, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r26, r26, 0x34
  addi      r25, r25, 0x1

.loc_0x1920:
  lwz       r0, 0xF4(r31)
  cmpw      r25, r0
  blt+      .loc_0x18F8
  lis       r3, 0x8051
  lfs       f3, 0x98(r31)
  addi      r3, r3, 0x4058
  lfs       f2, 0x1B90(r2)
  lfs       f1, 0x48(r3)
  lfs       f0, 0x1BD8(r2)
  fadds     f1, f3, f1
  stfs      f1, 0x98(r31)
  lfs       f4, 0x98(r31)
  lfs       f3, 0x90(r31)
  fmuls     f1, f4, f4
  fmuls     f1, f4, f1
  fmuls     f1, f4, f1
  fsubs     f1, f2, f1
  fmuls     f1, f3, f1
  stfs      f1, 0x68(r31)
  lfs       f2, 0x90(r31)
  lfs       f1, 0x68(r31)
  fsubs     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x198C
  stfs      f2, 0x68(r31)
  li        r0, 0xB
  stw       r0, 0x174(r31)

.loc_0x198C:
  lwz       r0, 0x17C(r31)
  rlwinm.   r0,r0,0,27,27
  bne-      .loc_0x19D0
  lbz       r5, 0x183(r31)
  cmplwi    r5, 0
  beq-      .loc_0x19D0
  lis       r3, 0x8051
  addi      r4, r3, 0x4058
  lbz       r0, 0x79(r4)
  sub       r0, r5, r0
  stb       r0, 0x183(r31)
  lbz       r3, 0x183(r31)
  lbz       r0, 0x79(r4)
  cmplw     r3, r0
  bge-      .loc_0x19D0
  li        r0, 0
  stb       r0, 0x183(r31)

.loc_0x19D0:
  lwz       r0, 0x174(r31)
  cmpwi     r0, 0xD
  beq-      .loc_0x1A8C
  cmpwi     r0, 0xB
  beq-      .loc_0x1A8C
  cmpwi     r0, 0
  beq-      .loc_0x1A8C
  li        r25, 0
  b         .loc_0x1A80

.loc_0x19F4:
  lwz       r0, 0xF8(r31)
  cmpw      r0, r25
  bne-      .loc_0x1A40
  lis       r4, 0x6768
  lis       r3, 0x50
  mr        r5, r25
  addi      r4, r4, 0x7430
  addi      r3, r3, 0x6C69
  bl        0x1620C
  mr        r5, r3
  lwz       r3, 0x30(r31)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stb       r0, 0xB0(r3)
  b         .loc_0x1A7C

.loc_0x1A40:
  lis       r4, 0x6768
  lis       r3, 0x50
  mr        r5, r25
  addi      r4, r4, 0x7430
  addi      r3, r3, 0x6C69
  bl        0x161CC
  mr        r5, r3
  lwz       r3, 0x30(r31)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)

.loc_0x1A7C:
  addi      r25, r25, 0x1

.loc_0x1A80:
  lbz       r0, 0x181(r31)
  cmpw      r25, r0
  blt+      .loc_0x19F4

.loc_0x1A8C:
  lwz       r0, 0x174(r31)
  cmpwi     r0, 0xD
  beq-      .loc_0x1AB0
  cmpwi     r0, 0xB
  beq-      .loc_0x1AB0
  bl        0x79E7C
  lfs       f1, 0x9C(r31)
  lfs       f2, 0xA0(r31)
  bl        0x781B4

.loc_0x1AB0:
  lwz       r3, 0x54(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x16C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x64(r31)
  bl        -0xCC32C
  li        r25, 0
  addi      r26, r1, 0x50

.loc_0x1AE8:
  lwz       r3, 0x54(r31)
  lfd       f1, 0x3B0(r30)
  lfd       f0, 0x3B8(r30)
  lwz       r12, 0x0(r3)
  stfd      f1, 0x50(r1)
  lwz       r12, 0x3C(r12)
  stfd      f0, 0x58(r1)
  lwz       r5, 0x0(r26)
  lwz       r6, 0x4(r26)
  mtctr     r12
  bctrl     
  lwz       r4, 0x16C(r31)
  mr        r27, r3
  lwz       r12, 0x0(r3)
  lwz       r0, 0x20(r4)
  lwz       r12, 0x24(r12)
  stw       r0, 0xC(r1)
  lbz       r4, 0xF(r1)
  mtctr     r12
  bctrl     
  li        r0, 0
  mr        r3, r27
  stb       r0, 0xF(r1)
  addi      r4, r1, 0x8
  lwz       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  lwz       r12, 0x0(r27)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  addi      r25, r25, 0x1
  addi      r26, r26, 0x8
  cmpwi     r25, 0x2
  blt+      .loc_0x1AE8
  lwz       r3, 0x170(r31)
  bl        -0xF3488
  lfs       f0, 0x1BDC(r2)
  lis       r4, 0x6C62
  lwz       r3, 0x54(r31)
  addi      r6, r4, 0x746E
  fmuls     f0, f0, f1
  li        r5, 0x4E
  lwz       r12, 0x0(r3)
  fctiwz    f0, f0
  lwz       r12, 0x3C(r12)
  stfd      f0, 0x120(r1)
  lwz       r25, 0x124(r1)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r4, r25
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x54(r31)
  lis       r4, 0x7262
  addi      r6, r4, 0x746E
  li        r5, 0x4E
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r4, r25
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6560(r13)
  bl        0x6C60
  psq_l     f31,0x168(r1),0,0
  lfd       f31, 0x160(r1)
  psq_l     f30,0x158(r1),0,0
  lfd       f30, 0x150(r1)
  lmw       r25, 0x134(r1)
  lwz       r0, 0x174(r1)
  mtlr      r0
  addi      r1, r1, 0x170
  blr
*/
}

/*
 * --INFO--
 * Address:	803F53F4
 * Size:	000198
 */
void kh::Screen::WorldMap::draw1st( (Graphics &))
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
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r4)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0
  bl        -0x30BB50
  lwz       r3, 0x30(r30)
  lis       r5, 0x616E
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x6433
  addi      r5, r4, 0x6772
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  lis       r5, 0x616E
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x6432
  lwz       r3, 0x30(r30)
  addi      r5, r4, 0x6772
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  lis       r5, 0x6E64
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E67
  addi      r6, r5, 0x3030
  lwz       r3, 0x30(r30)
  addi      r5, r4, 0x7261
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  lis       r5, 0x616E
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x6430
  lwz       r3, 0x30(r30)
  addi      r5, r4, 0x6772
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  lis       r5, 0x616E
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x6431
  lwz       r3, 0x30(r30)
  addi      r5, r4, 0x6772
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  lis       r4, 0x6F69
  stb       r0, 0xB0(r3)
  addi      r6, r4, 0x6E74
  li        r5, 0x4E70
  lwz       r3, 0x30(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  lis       r4, 0x6861
  stb       r0, 0xB0(r3)
  addi      r6, r4, 0x7061
  li        r5, 0x4E
  lwz       r3, 0x30(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  mr        r4, r31
  stb       r0, 0xB0(r3)
  addi      r5, r31, 0x190
  lwz       r3, 0x30(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
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
 * Address:	803F558C
 * Size:	000064
 */
void kh::Screen::WorldMap::draw2nd( (Graphics &))
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
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r4)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x48(r30)
  mr        r4, r31
  addi      r5, r31, 0x190
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
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
 * Address:	803F55F0
 * Size:	0002A0
 */
void kh::Screen::WorldMap::draw3rd( (Graphics &))
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r4
  stw       r30, 0x48(r1)
  mr        r30, r3
  addi      r3, r31, 0x190
  stw       r29, 0x44(r1)
  lwz       r12, 0x190(r4)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0
  bl        -0x30BD50
  lwz       r3, 0x30(r30)
  lis       r5, 0x616E
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x6433
  addi      r5, r4, 0x6772
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x616E
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x6432
  lwz       r3, 0x30(r30)
  addi      r5, r4, 0x6772
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x6E64
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E67
  addi      r6, r5, 0x3030
  lwz       r3, 0x30(r30)
  addi      r5, r4, 0x7261
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x616E
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x6430
  lwz       r3, 0x30(r30)
  addi      r5, r4, 0x6772
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x616E
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x6431
  lwz       r3, 0x30(r30)
  addi      r5, r4, 0x6772
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r4, 0x6F69
  stb       r0, 0xB0(r3)
  addi      r6, r4, 0x6E74
  li        r5, 0x4E70
  lwz       r3, 0x30(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r4, 0x6861
  stb       r0, 0xB0(r3)
  addi      r6, r4, 0x7061
  li        r5, 0x4E
  lwz       r3, 0x30(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  mr        r4, r31
  stb       r0, 0xB0(r3)
  addi      r5, r31, 0x190
  lwz       r3, 0x30(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x17C(r30)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x254
  lbz       r0, 0x183(r30)
  cmplwi    r0, 0
  beq-      .loc_0x254
  addi      r3, r31, 0xBC
  lwz       r12, 0xBC(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x183(r30)
  li        r8, 0
  stb       r8, 0x18(r1)
  addi      r3, r31, 0xBC
  addi      r4, r1, 0x8
  addi      r5, r1, 0xC
  stb       r8, 0x19(r1)
  addi      r6, r1, 0x10
  addi      r7, r1, 0x14
  stb       r8, 0x1A(r1)
  stb       r0, 0x1B(r1)
  lwz       r0, 0x18(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0x10(r1)
  stw       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        -0x3BF154
  bl        0x2DA40
  lhz       r29, 0x6(r3)
  bl        0x2DA38
  lhz       r4, 0x4(r3)
  lis       r0, 0x4330
  lfs       f3, 0x1B94(r2)
  addi      r3, r31, 0xBC
  stw       r4, 0x34(r1)
  addi      r4, r1, 0x1C
  lfd       f2, 0x1BE8(r2)
  stw       r0, 0x30(r1)
  lfd       f0, 0x30(r1)
  stw       r29, 0x3C(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x38(r1)
  lfd       f0, 0x38(r1)
  fadds     f1, f3, f1
  stfs      f3, 0x1C(r1)
  fsubs     f0, f0, f2
  stfs      f3, 0x20(r1)
  fadds     f0, f3, f0
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  bl        -0x3BF06C

.loc_0x254:
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x54(r30)
  mr        r4, r31
  addi      r5, r31, 0x190
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  lwz       r29, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	803F5890
 * Size:	000110
 */
void kh::Screen::WorldMap::draw4th( (Graphics &))
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r3
  stw       r30, 0x48(r1)
  mr        r30, r4
  lwz       r0, 0x17C(r3)
  rlwinm.   r0,r0,0,26,26
  bne-      .loc_0xEC
  lbz       r0, 0x183(r31)
  cmplwi    r0, 0
  beq-      .loc_0xEC
  addi      r3, r30, 0xBC
  lwz       r12, 0xBC(r30)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x183(r31)
  li        r8, 0
  stb       r8, 0x18(r1)
  addi      r3, r30, 0xBC
  addi      r4, r1, 0x8
  addi      r5, r1, 0xC
  stb       r8, 0x19(r1)
  addi      r6, r1, 0x10
  addi      r7, r1, 0x14
  stb       r8, 0x1A(r1)
  stb       r0, 0x1B(r1)
  lwz       r0, 0x18(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0x10(r1)
  stw       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        -0x3BF28C
  bl        0x2D908
  lhz       r31, 0x6(r3)
  bl        0x2D900
  lhz       r4, 0x4(r3)
  lis       r0, 0x4330
  lfs       f3, 0x1B94(r2)
  addi      r3, r30, 0xBC
  stw       r4, 0x34(r1)
  addi      r4, r1, 0x1C
  lfd       f2, 0x1BE8(r2)
  stw       r0, 0x30(r1)
  lfd       f0, 0x30(r1)
  stw       r31, 0x3C(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x38(r1)
  lfd       f0, 0x38(r1)
  fadds     f1, f3, f1
  stfs      f3, 0x1C(r1)
  fsubs     f0, f0, f2
  stfs      f3, 0x20(r1)
  fadds     f0, f3, f0
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  bl        -0x3BF1A4

.loc_0xEC:
  lwz       r3, -0x6560(r13)
  mr        r4, r30
  bl        0x66CC
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	803F59A0
 * Size:	000330
 */
void kh::Screen::WorldMap::rocketMove( (J2DPane *, bool))
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stfd      f31, 0x60(r1)
  psq_st    f31,0x68(r1),0,0
  stfd      f30, 0x50(r1)
  psq_st    f30,0x58(r1),0,0
  stfd      f29, 0x40(r1)
  psq_st    f29,0x48(r1),0,0
  stfd      f28, 0x30(r1)
  psq_st    f28,0x38(r1),0,0
  stfd      f27, 0x20(r1)
  psq_st    f27,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r31, r3
  mr        r29, r4
  lwz       r4, 0xFC(r3)
  mr        r30, r5
  mr        r3, r29
  addi      r0, r4, 0x1
  stw       r0, 0xFC(r31)
  lfs       f0, 0xAC(r31)
  stfs      f0, 0x8(r1)
  lfs       f0, 0xB0(r31)
  stfs      f0, 0xC(r1)
  bl        0x15FEC
  lfs       f0, 0xA0(r31)
  mr        r3, r29
  fsubs     f30, f1, f0
  bl        0x15EF0
  lwz       r5, 0xFC(r31)
  lis       r3, 0x8051
  addi      r4, r3, 0x4058
  lfs       f0, 0x9C(r31)
  subi      r3, r5, 0x56
  li        r0, 0x5
  divwu     r3, r3, r0
  fsubs     f31, f1, f0
  fmuls     f0, f30, f30
  cmpwi     r5, 0x5A
  lfs       f28, 0x8(r4)
  lfs       f27, 0x4C(r4)
  fmadds    f4, f31, f31, f0
  lfs       f0, 0x1BF0(r2)
  fmr       f29, f4
  ble-      .loc_0x104
  rlwinm.   r0,r3,29,3,31
  mtctr     r0
  beq-      .loc_0xF8

.loc_0xCC:
  fmuls     f28, f28, f0
  fmuls     f28, f28, f0
  fmuls     f28, f28, f0
  fmuls     f28, f28, f0
  fmuls     f28, f28, f0
  fmuls     f28, f28, f0
  fmuls     f28, f28, f0
  fmuls     f28, f28, f0
  bdnz+     .loc_0xCC
  andi.     r3, r3, 0x7
  beq-      .loc_0x104

.loc_0xF8:
  mtctr     r3

.loc_0xFC:
  fmuls     f28, f28, f0
  bdnz+     .loc_0xFC

.loc_0x104:
  lis       r3, 0x8051
  lfs       f1, 0x1BC0(r2)
  lfs       f0, 0x48DC(r3)
  fmuls     f0, f1, f0
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  beq-      .loc_0x15C
  lfs       f0, 0x1B94(r2)
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  bne-      .loc_0x134
  b         .loc_0x154

.loc_0x134:
  fsqrte    f3, f4
  lfs       f2, 0x1BB4(r2)
  lfs       f0, 0x1BC4(r2)
  frsp      f3, f3
  fmuls     f1, f3, f3
  fmuls     f2, f2, f3
  fnmsubs   f0, f4, f1, f0
  fmuls     f4, f2, f0

.loc_0x154:
  fmuls     f31, f31, f4
  fmuls     f30, f30, f4

.loc_0x15C:
  lfs       f0, 0xB0(r31)
  lfs       f1, 0xAC(r31)
  fneg      f2, f0
  bl        0x1BCD4
  fmr       f0, f1
  fmr       f1, f31
  fneg      f2, f30
  fmr       f30, f0
  bl        0x1BCC0
  fmr       f3, f1
  lfs       f0, 0xB8(r31)
  lfs       f1, 0xB4(r31)
  fneg      f2, f0
  fmr       f31, f3
  bl        0x1BCA8
  lfs       f0, 0x1B94(r2)
  fcmpo     cr0, f30, f0
  bge-      .loc_0x1AC
  lfs       f0, 0x1BC8(r2)
  fadds     f30, f30, f0

.loc_0x1AC:
  lfs       f0, 0x1B94(r2)
  fcmpo     cr0, f31, f0
  bge-      .loc_0x1C0
  lfs       f0, 0x1BC8(r2)
  fadds     f31, f31, f0

.loc_0x1C0:
  fcmpo     cr0, f30, f31
  bge-      .loc_0x1E4
  fsubs     f2, f31, f30
  lfs       f0, 0x1BF4(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x1FC
  lfs       f0, 0x1BC8(r2)
  fadds     f30, f30, f0
  b         .loc_0x1FC

.loc_0x1E4:
  fsubs     f2, f30, f31
  lfs       f0, 0x1BF4(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x1FC
  lfs       f0, 0x1BC8(r2)
  fadds     f31, f31, f0

.loc_0x1FC:
  lfs       f0, 0x1B90(r2)
  fsubs     f0, f0, f28
  fmuls     f0, f31, f0
  fmadds    f0, f30, f28, f0
  fmadds    f31, f1, f27, f0
  fsubs     f28, f31, f30
  fmr       f1, f28
  bl        0x1BBE0
  fneg      f27, f1
  fmr       f1, f28
  bl        0x1BB6C
  lfs       f0, 0x1BBC(r2)
  stfs      f1, 0xB4(r31)
  fcmpo     cr0, f28, f0
  stfs      f27, 0xB8(r31)
  bge-      .loc_0x248
  lfs       f0, 0x1BA4(r2)
  fsubs     f31, f30, f0
  b         .loc_0x258

.loc_0x248:
  lfs       f0, 0x1BA4(r2)
  fcmpo     cr0, f28, f0
  ble-      .loc_0x258
  fadds     f31, f0, f30

.loc_0x258:
  fmr       f1, f31
  bl        0x1BB9C
  fneg      f27, f1
  fmr       f1, f31
  bl        0x1BB28
  stfs      f1, 0xAC(r31)
  mr        r3, r31
  lfs       f1, 0x1BF8(r2)
  addi      r4, r1, 0x8
  stfs      f27, 0xB0(r31)
  bl        0xCD4
  rlwinm.   r0,r30,0,24,31
  fmr       f4, f29
  bne-      .loc_0x29C
  lis       r3, 0x8051
  lfs       f4, 0x4058(r3)
  b         .loc_0x2B0

.loc_0x29C:
  lis       r3, 0x8051
  lfs       f0, 0x4058(r3)
  fcmpo     cr0, f29, f0
  ble-      .loc_0x2B0
  fmr       f4, f0

.loc_0x2B0:
  lfs       f1, 0xAC(r31)
  lis       r3, 0x8051
  addi      r3, r3, 0x4058
  lfs       f0, 0x9C(r31)
  fmuls     f2, f1, f4
  lfs       f3, 0x4(r3)
  fmr       f1, f29
  fmadds    f0, f3, f2, f0
  stfs      f0, 0x9C(r31)
  lfs       f0, 0xB0(r31)
  lfs       f3, 0x4(r3)
  fmuls     f2, f0, f4
  lfs       f0, 0xA0(r31)
  fmadds    f0, f3, f2, f0
  stfs      f0, 0xA0(r31)
  psq_l     f31,0x68(r1),0,0
  lfd       f31, 0x60(r1)
  psq_l     f30,0x58(r1),0,0
  lfd       f30, 0x50(r1)
  psq_l     f29,0x48(r1),0,0
  lfd       f29, 0x40(r1)
  psq_l     f28,0x38(r1),0,0
  lfd       f28, 0x30(r1)
  psq_l     f27,0x28(r1),0,0
  lfd       f27, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r0, 0x74(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	803F5CD0
 * Size:	000404
 */
void kh::Screen::WorldMap::rocketUpdate( (J2DPane *))
{
/*
.loc_0x0:
  stwu      r1, -0x100(r1)
  mflr      r0
  stw       r0, 0x104(r1)
  stfd      f31, 0xF0(r1)
  psq_st    f31,0xF8(r1),0,0
  stfd      f30, 0xE0(r1)
  psq_st    f30,0xE8(r1),0,0
  stfd      f29, 0xD0(r1)
  psq_st    f29,0xD8(r1),0,0
  stw       r31, 0xCC(r1)
  stw       r30, 0xC8(r1)
  stw       r29, 0xC4(r1)
  mr        r31, r3
  lis       r6, 0x434B
  lwz       r3, 0x48(r3)
  lis       r5, 0x4E
  mr        r29, r4
  addi      r6, r6, 0x4554
  lwz       r12, 0x0(r3)
  addi      r5, r5, 0x524F
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0xA0(r31)
  mr        r30, r3
  lfs       f0, 0x9C(r31)
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0xAC(r31)
  lis       r3, 0x8051
  lfs       f0, 0xB0(r31)
  subi      r3, r3, 0x2E20
  fneg      f1, f1
  fneg      f2, f0
  bl        -0x3C0C60
  lfs       f0, 0x1BD4(r2)
  mr        r3, r30
  fmuls     f0, f1, f0
  stfs      f0, 0xC0(r30)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  lwz       r5, 0x18(r29)
  addi      r3, r3, 0x4058
  lwz       r6, 0x1C(r29)
  lfs       f29, 0x8(r3)
  mr        r3, r31
  bl        0x84C
  lfs       f2, 0x1B90(r2)
  lis       r3, 0x8051
  lfs       f0, 0xBC(r31)
  addi      r4, r3, 0x4058
  fsubs     f2, f2, f29
  mr        r3, r30
  fmuls     f1, f2, f1
  fmadds    f0, f0, f29, f1
  stfs      f0, 0xBC(r31)
  lbz       r0, 0x181(r31)
  lfs       f0, 0xBC(r31)
  rlwinm    r0,r0,2,0,29
  add       r4, r4, r0
  lfs       f1, 0x1C(r4)
  fmuls     f29, f1, f0
  stfs      f29, 0xCC(r30)
  stfs      f29, 0xD0(r30)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x48(r31)
  lis       r5, 0x636B
  lis       r4, 0x50
  lfs       f31, 0x9C(r31)
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x6574
  lfs       f1, 0xA4(r31)
  addi      r5, r4, 0x726F
  lfs       f30, 0xA0(r31)
  lfs       f0, 0xA8(r31)
  fsubs     f31, f31, f1
  lwz       r12, 0x3C(r12)
  fsubs     f30, f30, f0
  mtctr     r12
  bctrl     
  mr        r30, r3
  addi      r3, r1, 0x3C
  mr        r4, r30
  li        r5, 0
  bl        -0x3BCEB0
  lwz       r5, 0x3C(r1)
  mr        r4, r30
  lwz       r6, 0x40(r1)
  addi      r3, r1, 0x30
  lwz       r0, 0x44(r1)
  stw       r5, 0x94(r1)
  li        r5, 0x1
  stw       r6, 0x98(r1)
  stw       r0, 0x9C(r1)
  bl        -0x3BCED8
  lwz       r5, 0x30(r1)
  mr        r4, r30
  lwz       r6, 0x34(r1)
  addi      r3, r1, 0x24
  lwz       r0, 0x38(r1)
  stw       r5, 0x88(r1)
  li        r5, 0x2
  stw       r6, 0x8C(r1)
  stw       r0, 0x90(r1)
  bl        -0x3BCF00
  lwz       r5, 0x24(r1)
  mr        r4, r30
  lwz       r6, 0x28(r1)
  addi      r3, r1, 0x18
  lwz       r0, 0x2C(r1)
  stw       r5, 0x7C(r1)
  li        r5, 0x3
  stw       r6, 0x80(r1)
  stw       r0, 0x84(r1)
  bl        -0x3BCF28
  lwz       r4, 0x18(r1)
  lis       r3, 0x8051
  lwz       r0, 0x1C(r1)
  addi      r6, r3, 0x4058
  stw       r4, 0x70(r1)
  lis       r3, 0x804A
  subi      r9, r3, 0x7FD0
  lis       r3, 0x804A
  stw       r0, 0x74(r1)
  subi      r7, r3, 0x7FC4
  lfs       f3, 0x70(r1)
  lis       r5, 0x804C
  lfs       f2, 0x7C(r1)
  lis       r4, 0x804F
  lfs       f1, 0x74(r1)
  lis       r3, 0x804C
  lfs       f0, 0x80(r1)
  fadds     f2, f3, f2
  lfs       f6, 0x1BB4(r2)
  addi      r5, r5, 0x1514
  fadds     f1, f1, f0
  lfs       f3, 0x94(r1)
  lfs       f0, 0x88(r1)
  fmuls     f5, f6, f2
  lfs       f8, 0x1C(r6)
  fadds     f3, f3, f0
  lfs       f0, 0x1B90(r2)
  fmuls     f4, f6, f1
  lfs       f2, 0x98(r1)
  lfs       f1, 0x8C(r1)
  fmuls     f7, f6, f3
  fsubs     f3, f0, f8
  lwz       r12, 0x20(r1)
  fadds     f0, f2, f1
  lwz       r0, 0x0(r9)
  fmuls     f1, f5, f8
  lwz       r8, 0x4(r9)
  lwz       r11, 0x8(r9)
  fmuls     f6, f6, f0
  fmuls     f0, f4, f8
  lwz       r6, 0x0(r7)
  fmadds    f1, f7, f3, f1
  lwz       r10, 0x4(r7)
  lwz       r9, 0x8(r7)
  fmadds    f0, f6, f3, f0
  fadds     f1, f31, f1
  stw       r0, 0x64(r1)
  subi      r4, r4, 0x5C0C
  addi      r0, r3, 0x14F0
  fadds     f0, f30, f0
  stfs      f1, 0xD0(r31)
  stfs      f0, 0xD4(r31)
  lfs       f0, 0xAC(r31)
  lfs       f1, 0xB0(r31)
  fneg      f0, f0
  stw       r8, 0x68(r1)
  fneg      f1, f1
  stw       r6, 0x58(r1)
  stfs      f0, 0xD8(r31)
  stfs      f1, 0xDC(r31)
  lwz       r8, 0xD8(r31)
  lwz       r7, 0xDC(r31)
  lwz       r6, 0xD0(r31)
  lwz       r3, 0xD4(r31)
  stw       r8, 0x10(r1)
  stw       r7, 0x14(r1)
  lfs       f1, 0x10(r1)
  stw       r6, 0x8(r1)
  lfs       f0, 0x14(r1)
  stw       r3, 0xC(r1)
  lfs       f3, 0x8(r1)
  stw       r10, 0x5C(r1)
  lfs       f2, 0xC(r1)
  stw       r5, 0xA8(r1)
  stw       r12, 0x78(r1)
  stw       r11, 0x6C(r1)
  stfs      f7, 0x64(r1)
  stfs      f6, 0x68(r1)
  stw       r9, 0x60(r1)
  stfs      f5, 0x58(r1)
  stfs      f4, 0x5C(r1)
  stfs      f3, 0xA0(r1)
  stfs      f2, 0xA4(r1)
  stw       r4, 0xA8(r1)
  stfs      f1, 0xAC(r1)
  stfs      f0, 0xB0(r1)
  stfs      f29, 0xB4(r1)
  stw       r0, 0x48(r1)
  lis       r3, 0x804C
  li        r8, 0
  addi      r0, r3, 0x14D8
  lis       r3, 0x804E
  stw       r0, 0x48(r1)
  addi      r5, r3, 0x7488
  lis       r4, 0x804E
  li        r7, 0x1
  stb       r8, 0x4C(r1)
  lis       r3, 0x804F
  addi      r6, r4, 0x7518
  li        r0, 0x3
  stw       r5, 0x48(r1)
  subi      r5, r3, 0x5C24
  addi      r3, r1, 0x48
  addi      r4, r1, 0xA0
  stb       r8, 0x4D(r1)
  stw       r6, 0x48(r1)
  stb       r7, 0x4C(r1)
  sth       r7, 0x50(r1)
  stw       r8, 0x54(r1)
  stw       r5, 0x48(r1)
  stb       r7, 0x4C(r1)
  stb       r0, 0x4D(r1)
  bl        -0x3B614
  fmr       f1, f29
  lwz       r3, 0xC4(r31)
  bl        -0x3B464
  fmr       f1, f29
  lwz       r3, 0xC0(r31)
  bl        -0x3B4E4
  psq_l     f31,0xF8(r1),0,0
  lfd       f31, 0xF0(r1)
  psq_l     f30,0xE8(r1),0,0
  lfd       f30, 0xE0(r1)
  psq_l     f29,0xD8(r1),0,0
  lfd       f29, 0xD0(r1)
  lwz       r31, 0xCC(r1)
  lwz       r30, 0xC8(r1)
  lwz       r0, 0x104(r1)
  lwz       r29, 0xC4(r1)
  mtlr      r0
  addi      r1, r1, 0x100
  blr
*/
}

/*
 * --INFO--
 * Address:	803F60D4
 * Size:	000090
 */
void kh::Screen::WorldMap::onyonMove(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  li        r31, 0
  stw       r30, 0x28(r1)
  li        r30, 0
  stw       r29, 0x24(r1)
  mr        r29, r3
  lfs       f0, 0x9C(r3)
  stfs      f0, 0x10(r1)
  lfs       f0, 0xA0(r3)
  stfs      f0, 0x14(r1)
  b         .loc_0x68

.loc_0x38:
  lwz       r0, 0xF0(r29)
  mr        r5, r29
  addi      r3, r1, 0x8
  addi      r6, r1, 0x10
  add       r4, r0, r31
  bl        0x1A20
  lfs       f1, 0x8(r1)
  addi      r31, r31, 0x34
  lfs       f0, 0xC(r1)
  addi      r30, r30, 0x1
  stfs      f1, 0x10(r1)
  stfs      f0, 0x14(r1)

.loc_0x68:
  lwz       r0, 0xF4(r29)
  cmpw      r30, r0
  blt+      .loc_0x38
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
 * Address:	803F6164
 * Size:	000068
 */
void kh::Screen::WorldMap::onyonUpdate(void)
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
  b         .loc_0x40

.loc_0x28:
  lwz       r0, 0xF0(r29)
  mr        r4, r29
  add       r3, r0, r31
  bl        0x1E00
  addi      r31, r31, 0x34
  addi      r30, r30, 0x1

.loc_0x40:
  lwz       r0, 0xF4(r29)
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
 * Address:	803F61CC
 * Size:	0001F4
 */
void kh::Screen::WorldMap::postureControl( (J2DPane *))
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
  stfd      f29, 0x20(r1)
  psq_st    f29,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r30, r4
  lfs       f0, 0xB0(r3)
  lfs       f1, 0xAC(r3)
  fneg      f2, f0
  bl        0x1B5CC
  fmr       f0, f1
  lfs       f1, 0x1B94(r2)
  lfs       f2, 0x1B90(r2)
  fmr       f31, f0
  bl        0x1B5B8
  fmr       f3, f1
  lfs       f0, 0xB8(r29)
  lfs       f1, 0xB4(r29)
  fneg      f2, f0
  fmr       f29, f3
  bl        0x1B5A0
  lfs       f0, 0x1B94(r2)
  fcmpo     cr0, f31, f0
  bge-      .loc_0x88
  lfs       f0, 0x1BC8(r2)
  fadds     f31, f31, f0

.loc_0x88:
  lfs       f0, 0x1B94(r2)
  fcmpo     cr0, f29, f0
  bge-      .loc_0x9C
  lfs       f0, 0x1BC8(r2)
  fadds     f29, f29, f0

.loc_0x9C:
  fcmpo     cr0, f31, f29
  bge-      .loc_0xC0
  fsubs     f2, f29, f31
  lfs       f0, 0x1BF4(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0xD8
  lfs       f0, 0x1BC8(r2)
  fadds     f31, f31, f0
  b         .loc_0xD8

.loc_0xC0:
  fsubs     f2, f31, f29
  lfs       f0, 0x1BF4(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0xD8
  lfs       f0, 0x1BC8(r2)
  fadds     f29, f29, f0

.loc_0xD8:
  lis       r3, 0x8051
  lfs       f2, 0x1B90(r2)
  addi      r3, r3, 0x4058
  lfs       f3, 0x1BF0(r2)
  lfs       f4, 0x8(r3)
  lfs       f0, 0x1BFC(r2)
  fsubs     f2, f2, f4
  fmuls     f2, f29, f2
  fmadds    f2, f31, f4, f2
  fmadds    f29, f3, f1, f2
  fsubs     f1, f29, f31
  fcmpo     cr0, f1, f0
  bge-      .loc_0x118
  lfs       f0, 0x1C00(r2)
  fsubs     f29, f31, f0
  b         .loc_0x128

.loc_0x118:
  lfs       f0, 0x1C00(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x128
  fadds     f29, f0, f31

.loc_0x128:
  fmr       f1, f29
  bl        0x1B4A0
  fneg      f30, f1
  fmr       f1, f29
  bl        0x1B42C
  fsubs     f31, f29, f31
  stfs      f1, 0xAC(r29)
  stfs      f30, 0xB0(r29)
  fmr       f1, f31
  bl        0x1B480
  fneg      f30, f1
  fmr       f1, f31
  bl        0x1B40C
  stfs      f1, 0xB4(r29)
  lis       r3, 0x8051
  addi      r31, r3, 0x4058
  mr        r3, r30
  stfs      f30, 0xB8(r29)
  lfs       f30, 0x10(r31)
  bl        0x155CC
  lfs       f2, 0x1B90(r2)
  mr        r3, r30
  lfs       f0, 0x9C(r29)
  fsubs     f2, f2, f30
  fmuls     f1, f2, f1
  fmadds    f0, f0, f30, f1
  stfs      f0, 0x9C(r29)
  lfs       f30, 0x10(r31)
  bl        0x15694
  lfs       f2, 0x1B90(r2)
  mr        r3, r29
  lfs       f0, 0xA0(r29)
  mr        r4, r30
  fsubs     f2, f2, f30
  fmuls     f1, f2, f1
  fmadds    f0, f0, f30, f1
  stfs      f0, 0xA0(r29)
  bl        -0x6B8
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  psq_l     f29,0x28(r1),0,0
  lfd       f29, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r0, 0x54(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	803F63C0
 * Size:	000230
 */
void kh::Screen::WorldMap::changeState(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  li        r31, 0
  stw       r30, 0x48(r1)
  mr        r30, r3
  lwz       r4, 0x20(r3)
  lwz       r3, 0x1C(r4)
  rlwinm.   r0,r3,0,19,19
  beq-      .loc_0xDC
  lwz       r3, -0x6560(r13)
  lwz       r3, 0x18(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x804B
  li        r8, 0
  addi      r9, r3, 0x1148
  li        r0, 0xB4
  stb       r0, 0x38(r1)
  lis       r7, 0x804E
  lis       r4, 0x305F
  lis       r3, 0x34
  addi      r5, r3, 0x3731
  lis       r3, 0x315F
  addi      r6, r4, 0x3030
  stw       r9, 0x18(r1)
  subi      r7, r7, 0x61F8
  addi      r0, r3, 0x3030
  stw       r8, 0x1C(r1)
  addi      r4, r1, 0x18
  lwz       r3, -0x6560(r13)
  stw       r7, 0x18(r1)
  stw       r8, 0x20(r1)
  stw       r6, 0x2C(r1)
  stw       r5, 0x28(r1)
  stw       r0, 0x34(r1)
  stw       r5, 0x30(r1)
  stb       r8, 0x39(r1)
  stb       r8, 0x38(r1)
  bl        0x6BF0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x214
  li        r0, 0x8
  stw       r0, 0x174(r30)
  bl        0x78C74
  li        r4, 0x6
  bl        0x77440
  lwz       r0, 0x17C(r30)
  li        r31, 0x1
  ori       r0, r0, 0x30
  stw       r0, 0x17C(r30)
  b         .loc_0x214

.loc_0xDC:
  rlwinm.   r0,r3,0,23,23
  beq-      .loc_0x168
  lwz       r3, -0x6560(r13)
  lwz       r3, 0x18(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x804B
  li        r5, 0
  addi      r4, r3, 0x1148
  li        r0, 0xB4
  stb       r0, 0x14(r1)
  lis       r3, 0x804E
  subi      r0, r3, 0x60C8
  lwz       r3, -0x6560(r13)
  stw       r4, 0x8(r1)
  addi      r4, r1, 0x8
  stw       r5, 0xC(r1)
  stw       r0, 0x8(r1)
  stw       r5, 0x10(r1)
  stb       r5, 0x14(r1)
  bl        0x6C88
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x214
  li        r0, 0x9
  stw       r0, 0x174(r30)
  bl        0x78BE8
  li        r4, 0x6
  bl        0x773B4
  lwz       r0, 0x17C(r30)
  li        r31, 0x1
  ori       r0, r0, 0x30
  stw       r0, 0x17C(r30)
  b         .loc_0x214

.loc_0x168:
  rlwinm.   r0,r3,0,25,25
  beq-      .loc_0x190
  lwz       r3, -0x67A8(r13)
  li        r4, 0x181F
  li        r5, 0
  bl        -0xBDF0C
  li        r0, 0x7
  li        r31, 0x1
  stw       r0, 0x174(r30)
  b         .loc_0x214

.loc_0x190:
  rlwinm.   r0,r3,0,26,26
  beq-      .loc_0x1B8
  lwz       r3, -0x67A8(r13)
  li        r4, 0x181F
  li        r5, 0
  bl        -0xBDF34
  li        r0, 0x6
  li        r31, 0x1
  stw       r0, 0x174(r30)
  b         .loc_0x214

.loc_0x1B8:
  lfs       f1, 0x50(r4)
  lfs       f0, 0x1BA4(r2)
  fcmpo     cr0, f1, f0
  bgt-      .loc_0x1D4
  lwz       r0, 0x18(r4)
  rlwinm.   r0,r0,0,28,31
  beq-      .loc_0x20C

.loc_0x1D4:
  lbz       r3, 0x180(r30)
  cmplwi    r3, 0
  bne-      .loc_0x200
  lis       r3, 0x8051
  li        r0, 0x5
  addi      r3, r3, 0x4058
  li        r31, 0x1
  lbz       r3, 0x78(r3)
  stb       r3, 0x180(r30)
  stw       r0, 0x174(r30)
  b         .loc_0x214

.loc_0x200:
  subi      r0, r3, 0x1
  stb       r0, 0x180(r30)
  b         .loc_0x214

.loc_0x20C:
  li        r0, 0
  stb       r0, 0x180(r30)

.loc_0x214:
  lwz       r0, 0x54(r1)
  mr        r3, r31
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	803F65F0
 * Size:	0000C0
 */
void kh::Screen::WorldMap::tag2num( (unsigned long long))
{
/*
.loc_0x0:
  lis       r3, 0x1
  li        r0, 0xFF
  li        r4, 0
  stwu      r1, -0x10(r1)
  and       r10, r6, r0
  subi      r3, r3, 0x100
  and       r8, r5, r4
  lis       r0, 0xFF
  and       r4, r6, r3
  neg       r5, r10
  and       r3, r6, r0
  lis       r0, 0x4330
  or        r7, r5, r10
  rlwinm    r6,r4,24,0,31
  rlwimi    r6,r8,24,0,7
  rlwinm    r5,r3,16,0,31
  neg       r4, r6
  srawi     r9, r7, 0x1F
  or        r3, r4, r6
  rlwimi    r5,r8,16,0,15
  neg       r4, r5
  subi      r6, r6, 0x30
  srawi     r7, r3, 0x1F
  subi      r3, r5, 0x30
  or        r4, r4, r5
  stw       r0, 0x8(r1)
  srawi     r0, r4, 0x1F
  subi      r8, r10, 0x30
  and       r3, r3, r0
  and       r6, r6, r7
  mulli     r0, r6, 0xA
  and       r5, r8, r9
  lfd       f2, 0x1BE0(r2)
  lfs       f3, 0x1BD0(r2)
  mulli     r3, r3, 0x64
  lfs       f0, 0x1B94(r2)
  add       r0, r0, r5
  add       r0, r3, r0
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f1, 0x8(r1)
  fsubs     f1, f1, f2
  fmuls     f1, f3, f1
  fcmpu     cr0, f0, f1
  bne-      .loc_0xB8
  lfs       f1, 0x1C04(r2)

.loc_0xB8:
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803F66B0
 * Size:	00008C
 */
void kh::Screen::WorldMap::finish(void)
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
  lwz       r3, 0xC0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC4(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  li        r30, 0
  li        r31, 0
  b         .loc_0x64

.loc_0x50:
  lwz       r0, 0xF0(r29)
  add       r3, r0, r31
  bl        0x19BC
  addi      r31, r31, 0x34
  addi      r30, r30, 0x1

.loc_0x64:
  lwz       r0, 0xF4(r29)
  cmpw      r30, r0
  blt+      .loc_0x50
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
 * Address:	803F673C
 * Size:	00007C
 */
void kh::Screen::WorldMap::newMapOpen(void)
{
/*
.loc_0x0:
  li        r0, 0x3
  li        r7, 0x1
  li        r4, 0x1
  mtctr     r0

.loc_0x10:
  lbz       r5, 0x182(r3)
  slw       r6, r4, r7
  and.      r0, r5, r6
  beq-      .loc_0x6C
  lis       r4, 0x8049
  andc      r6, r5, r6
  addi      r0, r4, 0x7C80
  rlwinm    r7,r7,2,0,29
  add       r5, r0, r7
  lis       r4, 0x8049
  addi      r0, r4, 0x7C90
  stb       r6, 0x182(r3)
  add       r4, r0, r7
  lfs       f1, -0x4(r5)
  lfs       f0, -0x4(r4)
  li        r0, 0
  stfs      f1, 0x94(r3)
  stfs      f0, 0x90(r3)
  lfs       f0, 0x94(r3)
  stfs      f0, 0x68(r3)
  stw       r0, 0x174(r3)
  li        r3, 0x1
  blr       

.loc_0x6C:
  addi      r7, r7, 0x1
  bdnz+     .loc_0x10
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	803F67B8
 * Size:	00013C
 */
void kh::Screen::WorldMap::getTarget(void)
{
/*
.loc_0x0:
  lwz       r4, 0xF8(r3)
  li        r0, -0x1
  cmpwi     r4, 0x2
  beq-      .loc_0xB4
  bge-      .loc_0x24
  cmpwi     r4, 0
  beq-      .loc_0x30
  bge-      .loc_0x68
  b         .loc_0x134

.loc_0x24:
  cmpwi     r4, 0x4
  bge-      .loc_0x134
  b         .loc_0x100

.loc_0x30:
  lwz       r4, 0x20(r3)
  lis       r3, 0x200
  addi      r3, r3, 0x2
  lwz       r4, 0x18(r4)
  and.      r3, r4, r3
  beq-      .loc_0x50
  li        r0, 0x1
  b         .loc_0x134

.loc_0x50:
  lis       r3, 0x800
  addi      r3, r3, 0x8
  and.      r3, r4, r3
  beq-      .loc_0x134
  li        r0, 0x2
  b         .loc_0x134

.loc_0x68:
  lwz       r5, 0x20(r3)
  lis       r4, 0x100
  addi      r4, r4, 0x1
  lwz       r5, 0x18(r5)
  and.      r4, r5, r4
  beq-      .loc_0x88
  li        r0, 0
  b         .loc_0x134

.loc_0x88:
  lis       r4, 0x800
  addi      r4, r4, 0x8
  and.      r4, r5, r4
  beq-      .loc_0x134
  lbz       r4, 0x181(r3)
  subi      r3, r4, 0x3
  subfic    r0, r4, 0x3
  nor       r0, r3, r0
  srawi     r3, r0, 0x1F
  addi      r0, r3, 0x3
  b         .loc_0x134

.loc_0xB4:
  lwz       r5, 0x20(r3)
  lis       r4, 0x200
  addi      r4, r4, 0x2
  lwz       r5, 0x18(r5)
  and.      r4, r5, r4
  beq-      .loc_0xE8
  lbz       r0, 0x181(r3)
  li        r3, 0x3
  cmplwi    r0, 0x3
  bne-      .loc_0xE0
  li        r3, 0x1

.loc_0xE0:
  mr        r0, r3
  b         .loc_0x134

.loc_0xE8:
  lis       r3, 0x400
  addi      r3, r3, 0x4
  and.      r3, r5, r3
  beq-      .loc_0x134
  li        r0, 0
  b         .loc_0x134

.loc_0x100:
  lwz       r4, 0x20(r3)
  lis       r3, 0x100
  addi      r3, r3, 0x1
  lwz       r4, 0x18(r4)
  and.      r3, r4, r3
  beq-      .loc_0x120
  li        r0, 0x2
  b         .loc_0x134

.loc_0x120:
  lis       r3, 0x400
  addi      r3, r3, 0x4
  and.      r3, r4, r3
  beq-      .loc_0x134
  li        r0, 0x1

.loc_0x134:
  mr        r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	803F68F4
 * Size:	000174
 */
void getRotDir__Q32kh6Screen8WorldMapFRCQ29JGeometry8TVec2<float>f(void)
{
/*
.loc_0x0:
  lfs       f3, 0x0(r4)
  lfs       f2, 0x1B94(r2)
  fcmpo     cr0, f3, f2
  cror      2, 0x1, 0x2
  bne-      .loc_0x5C
  lfs       f0, 0xAC(r3)
  fcmpo     cr0, f0, f2
  cror      2, 0x1, 0x2
  bne-      .loc_0x5C
  lfs       f3, 0x4(r4)
  fneg      f0, f1
  lfs       f2, 0xB0(r3)
  fsubs     f2, f3, f2
  fcmpo     cr0, f2, f0
  bge-      .loc_0x44
  li        r0, 0x1
  b         .loc_0x164

.loc_0x44:
  fcmpo     cr0, f2, f1
  ble-      .loc_0x54
  li        r0, 0x2
  b         .loc_0x164

.loc_0x54:
  li        r0, 0
  b         .loc_0x164

.loc_0x5C:
  lfs       f2, 0x1B94(r2)
  fcmpo     cr0, f3, f2
  bge-      .loc_0xAC
  lfs       f0, 0xAC(r3)
  fcmpo     cr0, f0, f2
  bge-      .loc_0xAC
  lfs       f3, 0x4(r4)
  fneg      f0, f1
  lfs       f2, 0xB0(r3)
  fsubs     f2, f3, f2
  fcmpo     cr0, f2, f0
  bge-      .loc_0x94
  li        r0, 0x2
  b         .loc_0x164

.loc_0x94:
  fcmpo     cr0, f2, f1
  ble-      .loc_0xA4
  li        r0, 0x1
  b         .loc_0x164

.loc_0xA4:
  li        r0, 0
  b         .loc_0x164

.loc_0xAC:
  lfs       f0, 0x1B94(r2)
  fcmpo     cr0, f3, f0
  bge-      .loc_0x114
  lfs       f4, 0xAC(r3)
  fcmpo     cr0, f4, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x114
  lfs       f5, 0x4(r4)
  fcmpo     cr0, f5, f0
  ble-      .loc_0xEC
  fsubs     f2, f3, f4
  fneg      f0, f1
  fcmpo     cr0, f2, f0
  bge-      .loc_0xEC
  li        r0, 0x2
  b         .loc_0x164

.loc_0xEC:
  lfs       f0, 0x1B94(r2)
  fcmpo     cr0, f5, f0
  bge-      .loc_0x10C
  fsubs     f0, f3, f4
  fcmpo     cr0, f0, f1
  ble-      .loc_0x10C
  li        r0, 0x1
  b         .loc_0x164

.loc_0x10C:
  li        r0, 0
  b         .loc_0x164

.loc_0x114:
  lfs       f2, 0x4(r4)
  lfs       f0, 0x1B94(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x13C
  lfs       f0, 0xAC(r3)
  fsubs     f0, f3, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x13C
  li        r0, 0x1
  b         .loc_0x164

.loc_0x13C:
  lfs       f0, 0x1B94(r2)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x160
  lfs       f0, 0xAC(r3)
  fsubs     f0, f3, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x160
  li        r0, 0x2
  b         .loc_0x164

.loc_0x160:
  li        r0, 0

.loc_0x164:
  cmpwi     r0, 0
  beqlr-    
  stw       r0, 0x178(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803F6A68
 * Size:	000A4C
 */
void kh::Screen::WorldMap::changeInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x220(r1)
  mflr      r0
  stw       r0, 0x224(r1)
  stfd      f31, 0x210(r1)
  psq_st    f31,0x218(r1),0,0
  stfd      f30, 0x200(r1)
  psq_st    f30,0x208(r1),0,0
  stfd      f29, 0x1F0(r1)
  psq_st    f29,0x1F8(r1),0,0
  stfd      f28, 0x1E0(r1)
  psq_st    f28,0x1E8(r1),0,0
  stfd      f27, 0x1D0(r1)
  psq_st    f27,0x1D8(r1),0,0
  stfd      f26, 0x1C0(r1)
  psq_st    f26,0x1C8(r1),0,0
  stfd      f25, 0x1B0(r1)
  psq_st    f25,0x1B8(r1),0,0
  stfd      f24, 0x1A0(r1)
  psq_st    f24,0x1A8(r1),0,0
  stfd      f23, 0x190(r1)
  psq_st    f23,0x198(r1),0,0
  stfd      f22, 0x180(r1)
  psq_st    f22,0x188(r1),0,0
  stmw      r19, 0x14C(r1)
  lis       r4, 0x8049
  lis       r5, 0x6E61
  addi      r22, r4, 0x7C70
  lis       r4, 0x50
  lfd       f26, 0x3F8(r22)
  mr        r31, r3
  lfd       f27, 0x400(r22)
  addi      r0, r1, 0x120
  lfd       f28, 0x408(r22)
  addi      r10, r1, 0x100
  lfd       f29, 0x410(r22)
  addi      r9, r1, 0xE0
  lfd       f30, 0x418(r22)
  addi      r8, r1, 0xC0
  lfd       f31, 0x420(r22)
  addi      r7, r1, 0xA0
  lfd       f13, 0x428(r22)
  addi      r6, r5, 0x6D65
  lfd       f12, 0x430(r22)
  addi      r5, r4, 0x635F
  lfd       f11, 0x438(r22)
  lfd       f10, 0x440(r22)
  lfd       f9, 0x448(r22)
  lfd       f8, 0x450(r22)
  lfd       f7, 0x458(r22)
  lfd       f6, 0x460(r22)
  lfd       f5, 0x468(r22)
  lfd       f4, 0x470(r22)
  lfd       f22, 0x3D8(r22)
  lfd       f23, 0x3E0(r22)
  lfd       f24, 0x3E8(r22)
  lfd       f25, 0x3F0(r22)
  lwz       r12, 0x478(r22)
  lwz       r11, 0x47C(r22)
  lwz       r4, 0x480(r22)
  lwz       r3, 0x484(r22)
  stw       r12, 0x4C(r1)
  lfd       f3, 0x528(r22)
  stw       r11, 0x50(r1)
  lfd       f2, 0x530(r22)
  stw       r4, 0x54(r1)
  lfd       f1, 0x538(r22)
  stw       r3, 0x58(r1)
  lfd       f0, 0x540(r22)
  stfd      f26, 0x100(r1)
  stfd      f27, 0x108(r1)
  stfd      f28, 0x110(r1)
  stfd      f29, 0x118(r1)
  stfd      f30, 0xE0(r1)
  stfd      f31, 0xE8(r1)
  stfd      f13, 0xF0(r1)
  stfd      f12, 0xF8(r1)
  stfd      f11, 0xC0(r1)
  stfd      f10, 0xC8(r1)
  stfd      f9, 0xD0(r1)
  stfd      f8, 0xD8(r1)
  stfd      f7, 0xA0(r1)
  stfd      f6, 0xA8(r1)
  stfd      f5, 0xB0(r1)
  stfd      f4, 0xB8(r1)
  lwz       r3, 0x54(r31)
  lwz       r4, 0xF8(r31)
  lwz       r12, 0x0(r3)
  rlwinm    r4,r4,3,0,28
  stfd      f22, 0x120(r1)
  lwz       r12, 0x3C(r12)
  add       r20, r0, r4
  stfd      f23, 0x128(r1)
  stfd      f24, 0x130(r1)
  stfd      f25, 0x138(r1)
  lwz       r19, 0x0(r20)
  stw       r10, 0x4C(r1)
  lwz       r20, 0x4(r20)
  stw       r9, 0x50(r1)
  stw       r8, 0x54(r1)
  stw       r7, 0x58(r1)
  stfd      f3, 0x80(r1)
  stfd      f2, 0x88(r1)
  stfd      f1, 0x90(r1)
  stfd      f0, 0x98(r1)
  mtctr     r12
  bctrl     
  stw       r20, 0x1C(r3)
  stw       r19, 0x18(r3)
  lwz       r3, -0x6B70(r13)
  lwz       r4, 0xF8(r31)
  bl        -0x20E9C0
  stw       r3, 0x12C(r31)
  lwz       r3, -0x6B70(r13)
  lwz       r4, 0xF8(r31)
  bl        -0x20E954
  stw       r3, 0x130(r31)
  li        r19, 0
  lwz       r20, 0x158(r31)
  stb       r19, 0x34(r20)
  mr        r21, r20

.loc_0x1E0:
  lwz       r3, 0x48(r21)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r19, r19, 0x1
  addi      r21, r21, 0x4
  cmpwi     r19, 0x4
  blt+      .loc_0x1E0
  lwz       r3, 0x58(r20)
  li        r4, 0
  bl        -0xEB49C
  lwz       r3, 0x5C(r20)
  li        r4, 0
  bl        -0xEB4A8
  lwz       r0, 0x12C(r31)
  lwz       r19, 0x130(r31)
  cmplw     r0, r19
  bne-      .loc_0x320
  lwz       r20, 0x158(r31)
  li        r23, 0
  li        r0, 0x1
  lwz       r4, 0x1C(r20)
  lbz       r3, 0x0(r4)
  stb       r3, 0x20(r20)
  lbz       r3, 0x1(r4)
  stb       r3, 0x21(r20)
  lbz       r3, 0x2(r4)
  stb       r3, 0x22(r20)
  lbz       r3, 0x3(r4)
  stb       r3, 0x23(r20)
  stw       r23, 0x30(r20)
  stb       r0, 0x34(r20)

.loc_0x264:
  rlwinm    r3,r23,1,31,31
  rlwinm    r0,r23,0,31,31
  xor       r0, r0, r3
  sub.      r0, r0, r3
  beq-      .loc_0x280
  cmplwi    r19, 0xA
  blt-      .loc_0x2E0

.loc_0x280:
  lwz       r3, 0x38(r20)
  bl        0x14D0C
  fmr       f31, f1
  lwz       r3, 0x38(r20)
  bl        0x14C14
  stfs      f1, 0x20(r1)
  lis       r3, 0x804C
  addi      r0, r3, 0x1514
  addi      r4, r1, 0x34
  stfs      f31, 0x24(r1)
  lwz       r5, 0x20(r1)
  lwz       r3, 0x24(r1)
  stw       r5, 0x18(r1)
  stw       r3, 0x1C(r1)
  lfs       f1, 0x18(r1)
  lfs       f0, 0x1C(r1)
  stw       r0, 0x3C(r1)
  stfs      f1, 0x34(r1)
  stfs      f0, 0x38(r1)
  lwz       r3, 0x48(r20)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x2E0:
  addi      r23, r23, 0x1
  addi      r20, r20, 0x4
  cmpwi     r23, 0x4
  blt+      .loc_0x264
  lwz       r3, 0x54(r31)
  lis       r5, 0x5F66
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x6C30
  addi      r5, r4, 0x6772
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stb       r0, 0xB0(r3)
  b         .loc_0x398

.loc_0x320:
  lwz       r20, 0x158(r31)
  li        r19, 0
  stb       r19, 0x34(r20)
  mr        r21, r20

.loc_0x330:
  lwz       r3, 0x48(r21)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r19, r19, 0x1
  addi      r21, r21, 0x4
  cmpwi     r19, 0x4
  blt+      .loc_0x330
  lwz       r3, 0x58(r20)
  li        r4, 0
  bl        -0xEB5EC
  lwz       r3, 0x5C(r20)
  li        r4, 0
  bl        -0xEB5F8
  lwz       r3, 0x54(r31)
  lis       r5, 0x5F66
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x6C30
  addi      r5, r4, 0x6772
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)

.loc_0x398:
  lwz       r3, -0x6B70(r13)
  lbz       r0, 0x2F(r3)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0x3B8
  lwz       r3, 0x130(r31)
  lwz       r0, 0x12C(r31)
  cmplw     r3, r0
  bne-      .loc_0x414

.loc_0x3B8:
  lwz       r3, 0x108(r31)
  bl        -0xEB664
  li        r0, 0x1
  lis       r4, 0x5F73
  stb       r0, 0xB0(r3)
  addi      r6, r4, 0x7261
  li        r5, 0x5067
  lwz       r3, 0x54(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stb       r0, 0xB0(r3)
  lwz       r3, 0x104(r31)
  bl        -0xEB69C
  lwz       r12, 0x0(r3)
  lfs       f1, 0x1B94(r2)
  lwz       r12, 0x10(r12)
  fmr       f2, f1
  mtctr     r12
  bctrl     
  b         .loc_0x48C

.loc_0x414:
  lwz       r3, 0x108(r31)
  bl        -0xEB6C0
  li        r0, 0
  lis       r4, 0x5F73
  stb       r0, 0xB0(r3)
  addi      r6, r4, 0x7261
  li        r5, 0x5067
  lwz       r3, 0x54(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r4, 0x8051
  stb       r0, 0xB0(r3)
  addi      r3, r4, 0x4058
  lwz       r0, 0x12C(r31)
  lfs       f22, 0x64(r3)
  cmplwi    r0, 0xA
  blt-      .loc_0x46C
  lfs       f0, 0x1C08(r2)
  fadds     f22, f22, f0

.loc_0x46C:
  lwz       r3, 0x104(r31)
  bl        -0xEB718
  lwz       r12, 0x0(r3)
  fmr       f1, f22
  lfs       f2, 0x1B94(r2)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x48C:
  lfd       f3, 0x548(r22)
  lis       r5, 0x8051
  lfd       f2, 0x550(r22)
  lis       r4, 0x6461
  lfd       f1, 0x558(r22)
  lis       r3, 0x6E
  lfd       f0, 0x560(r22)
  mr        r30, r31
  stfd      f3, 0x60(r1)
  addi      r29, r1, 0x60
  addi      r28, r1, 0x80
  addi      r25, r5, 0x4058
  stfd      f2, 0x68(r1)
  addi      r22, r1, 0x4C
  addi      r24, r4, 0x7461
  addi      r23, r3, 0x6F5F
  stfd      f1, 0x70(r1)
  li        r27, 0
  li        r26, 0
  stfd      f0, 0x78(r1)

.loc_0x4DC:
  lwz       r20, 0x15C(r30)
  li        r19, 0
  stb       r19, 0x34(r20)
  mr        r21, r20

.loc_0x4EC:
  lwz       r3, 0x48(r21)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r19, r19, 0x1
  addi      r21, r21, 0x4
  cmpwi     r19, 0x4
  blt+      .loc_0x4EC
  lwz       r3, 0x58(r20)
  li        r4, 0
  bl        -0xEB7A8
  lwz       r3, 0x5C(r20)
  li        r4, 0
  bl        -0xEB7B4
  lwz       r0, 0xF8(r31)
  rlwinm    r0,r0,2,0,29
  lwzx      r0, r22, r0
  add       r3, r0, r26
  lwz       r0, 0x0(r3)
  lwz       r3, 0x4(r3)
  xor       r0, r0, r23
  xor       r3, r3, r24
  or.       r0, r3, r0
  bne-      .loc_0x58C
  lis       r3, 0x6176
  mr        r5, r27
  addi      r4, r3, 0x6530
  li        r3, 0x4E63
  bl        0x1442C
  mr        r5, r3
  lwz       r3, 0x54(r31)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)
  b         .loc_0x9CC

.loc_0x58C:
  lis       r3, 0x6176
  mr        r5, r27
  addi      r4, r3, 0x6530
  li        r3, 0x4E63
  bl        0x143F0
  mr        r5, r3
  lwz       r3, 0x54(r31)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stb       r0, 0xB0(r3)
  lwz       r3, 0x1C(r31)
  lwz       r4, 0xF8(r31)
  bl        -0x249088
  mr        r4, r27
  bl        -0x249400
  mr        r4, r3
  addi      r3, r1, 0x40
  bl        0x1C260
  lwz       r3, 0x10C(r30)
  bl        -0xEB890
  li        r0, 0x1
  li        r4, 0
  stb       r0, 0xB0(r3)
  lwz       r3, 0x10C(r30)
  bl        -0xEB87C
  lwz       r3, 0x10C(r30)
  bl        -0xEB8AC
  lwz       r12, 0x0(r3)
  lfs       f1, 0x1B94(r2)
  lwz       r12, 0x10(r12)
  fmr       f2, f1
  mtctr     r12
  bctrl     
  lwz       r3, 0x11C(r30)
  bl        -0xEB8CC
  li        r0, 0x1
  li        r4, 0
  stb       r0, 0xB0(r3)
  lwz       r3, 0x11C(r30)
  bl        -0xEB8B8
  lwz       r3, 0x54(r31)
  lwz       r5, 0x0(r29)
  lwz       r12, 0x0(r3)
  lwz       r6, 0x4(r29)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  addi      r5, r1, 0x40
  stb       r0, 0xB0(r3)
  lwz       r3, -0x6B70(r13)
  lwz       r4, 0xF8(r31)
  bl        -0x20E6BC
  stw       r3, 0x134(r30)
  addi      r5, r1, 0x40
  lwz       r3, -0x6B70(r13)
  lwz       r4, 0xF8(r31)
  bl        -0x20E618
  stw       r3, 0x144(r30)
  addi      r5, r1, 0x40
  lwz       r3, -0x6B70(r13)
  lwz       r4, 0xF8(r31)
  bl        -0x20E934
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x7BC
  lwz       r3, -0x6B70(r13)
  lbz       r0, 0x2F(r3)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x6CC
  lwz       r3, 0x10C(r30)
  li        r4, 0x1
  bl        -0xEB938
  lwz       r3, 0x11C(r30)
  li        r4, 0x1
  bl        -0xEB944
  b         .loc_0x748

.loc_0x6CC:
  lwz       r3, 0x10C(r30)
  bl        -0xEB978
  li        r0, 0
  stb       r0, 0xB0(r3)
  lwz       r3, 0x11C(r30)
  bl        -0xEB988
  li        r0, 0
  lwz       r5, 0x0(r29)
  stb       r0, 0xB0(r3)
  lwz       r6, 0x4(r29)
  lwz       r3, 0x54(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)
  lwz       r0, 0x134(r30)
  lfs       f22, 0x68(r25)
  cmplwi    r0, 0xA
  blt-      .loc_0x728
  lfs       f0, 0x1C0C(r2)
  fadds     f22, f22, f0

.loc_0x728:
  lwz       r3, 0x10C(r30)
  bl        -0xEB9D4
  lwz       r12, 0x0(r3)
  fmr       f1, f22
  lfs       f2, 0x1B94(r2)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x748:
  lis       r4, 0x655F
  lis       r3, 0x5063
  mr        r5, r27
  addi      r4, r4, 0x3030
  addi      r3, r3, 0x6176
  bl        0x14230
  mr        r5, r3
  lwz       r3, 0x54(r31)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r5, 0x395F
  lis       r4, 0x38
  addi      r0, r5, 0x3031
  lwz       r5, 0x0(r28)
  stw       r0, 0x1C(r3)
  addi      r0, r4, 0x3431
  lwz       r6, 0x4(r28)
  stw       r0, 0x18(r3)
  lwz       r3, 0x54(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)
  b         .loc_0x9CC

.loc_0x7BC:
  lwz       r3, -0x6B70(r13)
  lbz       r0, 0x2F(r3)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0x844
  lwz       r0, 0x144(r30)
  lwz       r3, 0x134(r30)
  cmplw     r0, r3
  beq-      .loc_0x844
  cmplwi    r3, 0xA
  lfs       f22, 0x68(r25)
  blt-      .loc_0x7F0
  lfs       f0, 0x1C0C(r2)
  fadds     f22, f22, f0

.loc_0x7F0:
  lwz       r3, 0x10C(r30)
  bl        -0xEBA9C
  lwz       r12, 0x0(r3)
  fmr       f1, f22
  lfs       f2, 0x1B94(r2)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x11C(r30)
  bl        -0xEBABC
  li        r0, 0
  lwz       r5, 0x0(r29)
  stb       r0, 0xB0(r3)
  lwz       r6, 0x4(r29)
  lwz       r3, 0x54(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)

.loc_0x844:
  lwz       r0, 0xF8(r31)
  lis       r4, 0x655F
  lis       r3, 0x5063
  addi      r6, r1, 0x4C
  rlwinm    r0,r0,2,0,29
  mr        r5, r27
  lwzx      r0, r6, r0
  addi      r4, r4, 0x3030
  addi      r3, r3, 0x6176
  add       r20, r0, r26
  lwz       r19, 0x0(r20)
  lwz       r20, 0x4(r20)
  bl        0x14118
  mr        r5, r3
  lwz       r3, 0x54(r31)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r20, 0x1C(r3)
  stw       r19, 0x18(r3)
  lwz       r3, 0x134(r30)
  lwz       r0, 0x144(r30)
  cmplw     r3, r0
  bne-      .loc_0x9A8
  lwz       r3, 0x11C(r30)
  li        r4, 0
  bl        -0xEBB34
  lwz       r19, 0x15C(r30)
  li        r21, 0
  lwz       r20, 0x134(r30)
  li        r0, 0x1
  lwz       r4, 0x1C(r19)
  lbz       r3, 0x0(r4)
  stb       r3, 0x20(r19)
  lbz       r3, 0x1(r4)
  stb       r3, 0x21(r19)
  lbz       r3, 0x2(r4)
  stb       r3, 0x22(r19)
  lbz       r3, 0x3(r4)
  stb       r3, 0x23(r19)
  stw       r21, 0x30(r19)
  stb       r0, 0x34(r19)

.loc_0x8F4:
  rlwinm    r3,r21,1,31,31
  rlwinm    r0,r21,0,31,31
  xor       r0, r0, r3
  sub.      r0, r0, r3
  beq-      .loc_0x910
  cmplwi    r20, 0xA
  blt-      .loc_0x970

.loc_0x910:
  lwz       r3, 0x38(r19)
  bl        0x1467C
  fmr       f31, f1
  lwz       r3, 0x38(r19)
  bl        0x14584
  stfs      f1, 0x10(r1)
  lis       r3, 0x804C
  addi      r0, r3, 0x1514
  addi      r4, r1, 0x28
  stfs      f31, 0x14(r1)
  lwz       r5, 0x10(r1)
  lwz       r3, 0x14(r1)
  stw       r5, 0x8(r1)
  stw       r3, 0xC(r1)
  lfs       f1, 0x8(r1)
  lfs       f0, 0xC(r1)
  stw       r0, 0x30(r1)
  stfs      f1, 0x28(r1)
  stfs      f0, 0x2C(r1)
  lwz       r3, 0x48(r19)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x970:
  addi      r21, r21, 0x1
  addi      r19, r19, 0x4
  cmpwi     r21, 0x4
  blt+      .loc_0x8F4
  lwz       r3, 0x54(r31)
  lwz       r5, 0x0(r28)
  lwz       r12, 0x0(r3)
  lwz       r6, 0x4(r28)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stb       r0, 0xB0(r3)
  b         .loc_0x9CC

.loc_0x9A8:
  lwz       r3, 0x54(r31)
  lwz       r5, 0x0(r28)
  lwz       r12, 0x0(r3)
  lwz       r6, 0x4(r28)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)

.loc_0x9CC:
  addi      r27, r27, 0x1
  addi      r26, r26, 0x8
  cmpwi     r27, 0x4
  addi      r29, r29, 0x8
  addi      r28, r28, 0x8
  addi      r30, r30, 0x4
  blt+      .loc_0x4DC
  psq_l     f31,0x218(r1),0,0
  lfd       f31, 0x210(r1)
  psq_l     f30,0x208(r1),0,0
  lfd       f30, 0x200(r1)
  psq_l     f29,0x1F8(r1),0,0
  lfd       f29, 0x1F0(r1)
  psq_l     f28,0x1E8(r1),0,0
  lfd       f28, 0x1E0(r1)
  psq_l     f27,0x1D8(r1),0,0
  lfd       f27, 0x1D0(r1)
  psq_l     f26,0x1C8(r1),0,0
  lfd       f26, 0x1C0(r1)
  psq_l     f25,0x1B8(r1),0,0
  lfd       f25, 0x1B0(r1)
  psq_l     f24,0x1A8(r1),0,0
  lfd       f24, 0x1A0(r1)
  psq_l     f23,0x198(r1),0,0
  lfd       f23, 0x190(r1)
  psq_l     f22,0x188(r1),0,0
  lfd       f22, 0x180(r1)
  lmw       r19, 0x14C(r1)
  lwz       r0, 0x224(r1)
  mtlr      r0
  addi      r1, r1, 0x220
  blr
*/
}

/*
 * --INFO--
 * Address:	803F74B4
 * Size:	000550
 */
void kh::Screen::WorldMap::effectFirstTime(void)
{
/*
.loc_0x0:
  stwu      r1, -0x1B0(r1)
  mflr      r0
  stw       r0, 0x1B4(r1)
  stfd      f31, 0x1A0(r1)
  psq_st    f31,0x1A8(r1),0,0
  stfd      f30, 0x190(r1)
  psq_st    f30,0x198(r1),0,0
  stfd      f29, 0x180(r1)
  psq_st    f29,0x188(r1),0,0
  stfd      f28, 0x170(r1)
  psq_st    f28,0x178(r1),0,0
  stfd      f27, 0x160(r1)
  psq_st    f27,0x168(r1),0,0
  stmw      r15, 0x11C(r1)
  mr        r29, r3
  lis       r3, 0x8049
  lwz       r0, 0x17C(r29)
  addi      r7, r3, 0x7C70
  rlwinm.   r0,r0,0,29,29
  beq-      .loc_0x514
  lfd       f29, 0x588(r7)
  addi      r6, r1, 0xE0
  lfd       f28, 0x590(r7)
  addi      r5, r1, 0xC0
  lfd       f13, 0x598(r7)
  addi      r4, r1, 0xA0
  lfd       f12, 0x5A0(r7)
  addi      r0, r1, 0x80
  lfd       f11, 0x5A8(r7)
  li        r22, 0
  lfd       f10, 0x5B0(r7)
  li        r31, 0
  lfd       f9, 0x5B8(r7)
  li        r30, 0
  lfd       f8, 0x5C0(r7)
  li        r17, 0
  lfd       f7, 0x5C8(r7)
  lfd       f6, 0x5D0(r7)
  lfd       f5, 0x5D8(r7)
  lfd       f4, 0x5E0(r7)
  lfd       f3, 0x5E8(r7)
  lfd       f2, 0x5F0(r7)
  lfd       f1, 0x5F8(r7)
  lfd       f0, 0x600(r7)
  lwz       r3, 0x608(r7)
  lwz       r9, 0x60C(r7)
  lwz       r8, 0x610(r7)
  stw       r3, 0x70(r1)
  lwz       r7, 0x614(r7)
  stw       r9, 0x74(r1)
  lwz       r3, -0x6B70(r13)
  stw       r8, 0x78(r1)
  stw       r7, 0x7C(r1)
  stfd      f29, 0xE0(r1)
  stfd      f28, 0xE8(r1)
  stfd      f13, 0xF0(r1)
  stfd      f12, 0xF8(r1)
  stfd      f11, 0xC0(r1)
  stfd      f10, 0xC8(r1)
  stfd      f9, 0xD0(r1)
  stfd      f8, 0xD8(r1)
  stfd      f7, 0xA0(r1)
  stfd      f6, 0xA8(r1)
  stfd      f5, 0xB0(r1)
  stfd      f4, 0xB8(r1)
  stfd      f3, 0x80(r1)
  stfd      f2, 0x88(r1)
  stfd      f1, 0x90(r1)
  stfd      f0, 0x98(r1)
  stw       r6, 0x70(r1)
  lwz       r15, 0xE8(r3)
  stw       r5, 0x74(r1)
  stw       r4, 0x78(r1)
  stw       r0, 0x7C(r1)
  bl        -0x20DAE8
  cmpw      r15, r3
  beq-      .loc_0x144
  lwz       r3, 0x100(r29)
  lfs       f1, 0x1B90(r2)
  bl        -0xEBDF8
  li        r22, 0x1

.loc_0x144:
  lwz       r3, -0x6B70(r13)
  lwz       r4, 0xF8(r29)
  bl        -0x20DC40
  mr        r15, r3
  lwz       r3, -0x6B70(r13)
  lwz       r4, 0xF8(r29)
  bl        -0x20F3B0
  cmpw      r3, r15
  beq-      .loc_0x1A0
  lwz       r3, 0x104(r29)
  lfs       f1, 0x1B90(r2)
  bl        -0xEBE2C
  lwz       r3, -0x6B70(r13)
  li        r31, 0x1
  lwz       r4, 0xF8(r29)
  bl        -0x20F358
  mr        r15, r3
  lwz       r3, -0x6B70(r13)
  lwz       r4, 0xF8(r29)
  bl        -0x20F3E4
  cmpw      r3, r15
  bne-      .loc_0x1A0
  li        r30, 0x1

.loc_0x1A0:
  lis       r4, 0x6461
  lis       r3, 0x6E
  mr        r24, r29
  addi      r26, r1, 0x70
  addi      r27, r4, 0x7461
  addi      r28, r3, 0x6F5F
  li        r23, 0
  li        r25, 0

.loc_0x1C0:
  lwz       r4, 0xF8(r29)
  rlwinm    r0,r4,2,0,29
  lwzx      r0, r26, r0
  add       r3, r0, r25
  lwz       r0, 0x0(r3)
  lwz       r3, 0x4(r3)
  xor       r0, r0, r28
  xor       r3, r3, r27
  or.       r0, r3, r0
  beq-      .loc_0x454
  lwz       r3, 0x1C(r29)
  bl        -0x2496F4
  mr        r4, r23
  bl        -0x249A6C
  mr        r4, r3
  addi      r3, r1, 0x64
  bl        0x1BBF4
  lwz       r3, -0x6B70(r13)
  addi      r5, r1, 0x64
  lwz       r4, 0xF8(r29)
  bl        -0x20DBC8
  rlwinm    r15,r3,0,24,31
  lwz       r3, -0x6B70(r13)
  lwz       r4, 0xF8(r29)
  addi      r5, r1, 0x64
  bl        -0x20EF10
  rlwinm    r0,r3,0,24,31
  cmplw     r0, r15
  beq-      .loc_0x3E8
  lis       r4, 0x655F
  lis       r3, 0x5063
  mr        r5, r23
  addi      r4, r4, 0x3030
  addi      r3, r3, 0x6176
  bl        0x13CF8
  mr        r5, r3
  lwz       r3, 0x54(r29)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r1, 0x24
  li        r5, 0
  bl        -0x3BE790
  lwz       r7, 0x24(r1)
  lis       r4, 0x655F
  lwz       r6, 0x28(r1)
  lis       r3, 0x5063
  lwz       r0, 0x2C(r1)
  mr        r5, r23
  stw       r7, 0x58(r1)
  addi      r4, r4, 0x3030
  addi      r3, r3, 0x6176
  stw       r6, 0x5C(r1)
  stw       r0, 0x60(r1)
  bl        0x13C9C
  mr        r5, r3
  lwz       r3, 0x54(r29)
  mr        r6, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r1, 0x18
  li        r5, 0x3
  bl        -0x3BE7EC
  lwz       r0, 0x1C(r1)
  lis       r7, 0x804C
  lwz       r8, 0x18(r1)
  lis       r6, 0x804C
  stw       r0, 0x50(r1)
  lis       r5, 0x804C
  lwz       r0, 0x20(r1)
  lis       r4, 0x804E
  lfs       f1, 0x5C(r1)
  lis       r3, 0x804E
  lfs       f0, 0x50(r1)
  addi      r18, r7, 0x1514
  stw       r8, 0x4C(r1)
  addi      r19, r6, 0x14F0
  fadds     f0, f1, f0
  lfs       f1, 0x1BB4(r2)
  stw       r0, 0x54(r1)
  addi      r20, r5, 0x14D8
  lfs       f28, 0x1C10(r2)
  addi      r21, r4, 0x7488
  fmuls     f27, f1, f0
  lfs       f29, 0x58(r1)
  lfd       f30, 0x1BE0(r2)
  addi      r15, r3, 0x3DC4
  lfs       f31, 0x4C(r1)
  li        r16, 0
  lis       r17, 0x4330

.loc_0x340:
  xoris     r0, r16, 0x8000
  li        r5, 0
  stw       r0, 0x10C(r1)
  subfic    r0, r16, 0x4
  xoris     r6, r0, 0x8000
  li        r0, 0x7
  stw       r17, 0x108(r1)
  addi      r3, r1, 0x30
  addi      r4, r1, 0x40
  lfd       f0, 0x108(r1)
  stw       r6, 0x104(r1)
  fsubs     f0, f0, f30
  stw       r17, 0x100(r1)
  lfd       f1, 0x100(r1)
  fmuls     f0, f31, f0
  stfs      f27, 0xC(r1)
  fsubs     f1, f1, f30
  stw       r19, 0x30(r1)
  lwz       r6, 0xC(r1)
  fmadds    f0, f29, f1, f0
  stw       r20, 0x30(r1)
  stw       r6, 0x14(r1)
  fmuls     f1, f28, f0
  stw       r21, 0x30(r1)
  lfs       f0, 0x14(r1)
  stfs      f1, 0x8(r1)
  lwz       r6, 0x8(r1)
  stw       r18, 0x48(r1)
  stw       r6, 0x10(r1)
  lfs       f1, 0x10(r1)
  stfs      f0, 0x44(r1)
  stfs      f1, 0x40(r1)
  stb       r5, 0x34(r1)
  stb       r5, 0x35(r1)
  sth       r0, 0x38(r1)
  stw       r5, 0x3C(r1)
  stw       r15, 0x30(r1)
  bl        -0x3E058
  addi      r16, r16, 0x1
  cmpwi     r16, 0x5
  blt+      .loc_0x340
  li        r17, 0x1

.loc_0x3E8:
  lwz       r3, -0x6B70(r13)
  addi      r5, r1, 0x64
  lwz       r4, 0xF8(r29)
  bl        -0x20DE6C
  mr        r16, r3
  lwz       r3, -0x6B70(r13)
  lwz       r4, 0xF8(r29)
  addi      r5, r1, 0x64
  bl        -0x20EEA4
  cmpw      r3, r16
  beq-      .loc_0x454
  lwz       r3, 0x10C(r24)
  lfs       f1, 0x1B90(r2)
  bl        -0xEC0D8
  lwz       r3, -0x6B70(r13)
  addi      r5, r1, 0x64
  lwz       r4, 0xF8(r29)
  li        r31, 0x1
  bl        -0x20EE14
  mr        r16, r3
  lwz       r3, -0x6B70(r13)
  lwz       r4, 0xF8(r29)
  addi      r5, r1, 0x64
  bl        -0x20EEE0
  cmpw      r3, r16
  bne-      .loc_0x454
  li        r30, 0x1

.loc_0x454:
  addi      r23, r23, 0x1
  addi      r24, r24, 0x4
  cmpwi     r23, 0x4
  addi      r25, r25, 0x8
  blt+      .loc_0x1C0
  rlwinm.   r0,r17,0,24,31
  li        r4, -0x1
  beq-      .loc_0x484
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0x484
  li        r4, 0x1843
  b         .loc_0x4F0

.loc_0x484:
  rlwinm.   r0,r17,0,24,31
  beq-      .loc_0x49C
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x49C
  li        r4, 0x1842
  b         .loc_0x4F0

.loc_0x49C:
  rlwinm.   r0,r17,0,24,31
  beq-      .loc_0x4B4
  rlwinm.   r0,r22,0,24,31
  beq-      .loc_0x4B4
  li        r4, 0x1841
  b         .loc_0x4F0

.loc_0x4B4:
  rlwinm.   r0,r17,0,24,31
  beq-      .loc_0x4C4
  li        r4, 0x1840
  b         .loc_0x4F0

.loc_0x4C4:
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0x4D4
  li        r4, 0x183F
  b         .loc_0x4F0

.loc_0x4D4:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x4E4
  li        r4, 0x183E
  b         .loc_0x4F0

.loc_0x4E4:
  rlwinm.   r0,r22,0,24,31
  beq-      .loc_0x4F0
  li        r4, 0x183D

.loc_0x4F0:
  addis     r0, r4, 0x1
  cmplwi    r0, 0xFFFF
  beq-      .loc_0x508
  lwz       r3, -0x67A8(r13)
  li        r5, 0
  bl        -0xBF388

.loc_0x508:
  lwz       r0, 0x17C(r29)
  rlwinm    r0,r0,0,30,28
  stw       r0, 0x17C(r29)

.loc_0x514:
  psq_l     f31,0x1A8(r1),0,0
  lfd       f31, 0x1A0(r1)
  psq_l     f30,0x198(r1),0,0
  lfd       f30, 0x190(r1)
  psq_l     f29,0x188(r1),0,0
  lfd       f29, 0x180(r1)
  psq_l     f28,0x178(r1),0,0
  lfd       f28, 0x170(r1)
  psq_l     f27,0x168(r1),0,0
  lfd       f27, 0x160(r1)
  lmw       r15, 0x11C(r1)
  lwz       r0, 0x1B4(r1)
  mtlr      r0
  addi      r1, r1, 0x1B0
  blr
*/
}

/*
 * --INFO--
 * Address:	803F7A04
 * Size:	000044
 */
void kh::Screen::WorldMap::OnyonDynamics::__ct(void)
{
/*
.loc_0x0:
  li        r0, 0
  lfs       f2, 0x1BB0(r2)
  sth       r0, 0x30(r3)
  lfs       f1, 0x1B94(r2)
  stw       r0, 0x0(r3)
  lfs       f0, 0x1B98(r2)
  stfs      f2, 0x4(r3)
  stfs      f1, 0x8(r3)
  stfs      f2, 0x20(r3)
  stfs      f1, 0x24(r3)
  stfs      f1, 0x28(r3)
  stfs      f0, 0x2C(r3)
  stfs      f1, 0x10(r3)
  stfs      f1, 0xC(r3)
  stfs      f1, 0x14(r3)
  stfs      f0, 0x18(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803F7A48
 * Size:	0000F8
 */
void kh::Screen::WorldMap::OnyonDynamics::initPtcl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x28
  bl        -0x3D3BBC
  cmplwi    r3, 0
  beq-      .loc_0xB0
  lis       r5, 0x804C
  lis       r4, 0x804C
  addi      r0, r5, 0x14F0
  lis       r6, 0x804A
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x14D8
  lis       r5, 0x804E
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  li        r12, 0
  addi      r11, r5, 0x7420
  addi      r9, r4, 0x7390
  stb       r12, 0x4(r3)
  lis       r4, 0x804E
  addi      r5, r4, 0x74DC
  subi      r0, r6, 0x1D84
  stb       r12, 0x5(r3)
  addi      r10, r11, 0x18
  addi      r8, r9, 0x18
  addi      r7, r31, 0x20
  stw       r0, 0x8(r3)
  addi      r6, r31, 0x28
  addi      r4, r5, 0x18
  li        r0, 0x1
  stw       r11, 0x0(r3)
  stw       r10, 0x8(r3)
  sth       r12, 0xC(r3)
  stw       r12, 0x10(r3)
  stw       r9, 0x0(r3)
  stw       r8, 0x8(r3)
  stw       r7, 0x14(r3)
  stw       r6, 0x18(r3)
  stw       r5, 0x0(r3)
  stw       r4, 0x8(r3)
  stb       r0, 0x4(r3)

.loc_0xB0:
  stw       r3, 0x1C(r31)
  li        r4, 0x3
  lwz       r3, 0x1C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x1C(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803F7B40
 * Size:	000458
 */
void move__Q42kh6Screen8WorldMap13OnyonDynamicsFPQ32kh6Screen8WorldMapRCQ29JGeometry8TVec2<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stfd      f30, 0x40(r1)
  psq_st    f30,0x48(r1),0,0
  stmw      r27, 0x2C(r1)
  lis       r7, 0x804A
  mr        r31, r5
  subi      r5, r7, 0x7CD8
  mr        r29, r3
  lfd       f3, 0x0(r5)
  addi      r0, r1, 0x8
  lfd       f2, 0x8(r5)
  mr        r27, r6
  lfd       f1, 0x10(r5)
  mr        r30, r4
  lfd       f0, 0x18(r5)
  stfd      f3, 0x8(r1)
  stfd      f2, 0x10(r1)
  stfd      f1, 0x18(r1)
  stfd      f0, 0x20(r1)
  lwz       r3, 0x30(r31)
  lwz       r4, 0xF8(r31)
  lwz       r12, 0x0(r3)
  rlwinm    r4,r4,3,0,28
  add       r6, r0, r4
  lwz       r12, 0x3C(r12)
  lwz       r5, 0x0(r6)
  lwz       r6, 0x4(r6)
  mtctr     r12
  bctrl     
  lfs       f1, 0x4(r27)
  lfs       f0, 0x8(r30)
  lfs       f2, 0x0(r27)
  fsubs     f30, f1, f0
  lfs       f1, 0x4(r30)
  lfs       f0, 0x1B94(r2)
  fsubs     f31, f2, f1
  fmuls     f1, f30, f30
  fmadds    f1, f31, f31, f1
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0xBC
  fmr       f0, f1
  b         .loc_0xE0

.loc_0xBC:
  fsqrte    f4, f1
  lfs       f3, 0x1BB4(r2)
  lfs       f0, 0x1BC4(r2)
  frsp      f4, f4
  fmuls     f2, f4, f4
  fmuls     f3, f3, f4
  fnmsubs   f0, f1, f2, f0
  fmuls     f0, f3, f0
  fmuls     f0, f1, f0

.loc_0xE0:
  lha       r28, 0x30(r30)
  lfs       f2, 0x1B90(r2)
  addi      r0, r28, 0x1F4
  fcmpo     cr0, f0, f2
  sth       r0, 0x30(r30)
  bge-      .loc_0x178
  lfs       f3, 0x9C(r31)
  lis       r3, 0x8051
  lfs       f2, 0x4(r30)
  addi      r3, r3, 0x4058
  lfs       f4, 0x3C(r3)
  fsubs     f3, f3, f2
  lfs       f2, 0xC(r30)
  fmadds    f2, f4, f3, f2
  stfs      f2, 0xC(r30)
  lfs       f3, 0xA0(r31)
  lfs       f2, 0x8(r30)
  lfs       f4, 0x3C(r3)
  fsubs     f3, f3, f2
  lfs       f2, 0x10(r30)
  fmadds    f2, f4, f3, f2
  stfs      f2, 0x10(r30)
  lfs       f3, 0x40(r3)
  lfs       f2, 0xC(r30)
  fmuls     f2, f2, f3
  stfs      f2, 0xC(r30)
  lfs       f2, 0x10(r30)
  fmuls     f2, f2, f3
  stfs      f2, 0x10(r30)
  lfs       f3, 0x4(r30)
  lfs       f2, 0xC(r30)
  fadds     f2, f3, f2
  stfs      f2, 0x4(r30)
  lfs       f3, 0x8(r30)
  lfs       f2, 0x10(r30)
  fadds     f2, f3, f2
  stfs      f2, 0x8(r30)
  b         .loc_0x210

.loc_0x178:
  lfs       f3, 0x0(r27)
  lis       r3, 0x8051
  lfs       f2, 0x4(r30)
  addi      r4, r3, 0x4058
  lis       r3, 0x8050
  lfs       f6, 0x3C(r4)
  fsubs     f4, f3, f2
  lfs       f2, 0xC(r30)
  lfs       f3, 0x4(r27)
  addi      r3, r3, 0x71A0
  lfs       f5, 0x1C00(r2)
  fmadds    f2, f6, f4, f2
  stfs      f2, 0xC(r30)
  lfs       f2, 0x8(r30)
  lfs       f4, 0x3C(r4)
  fsubs     f3, f3, f2
  lfs       f2, 0x10(r30)
  fmadds    f2, f4, f3, f2
  stfs      f2, 0x10(r30)
  lha       r0, 0x30(r30)
  lfs       f3, 0x40(r4)
  rlwinm    r0,r0,30,18,28
  lfs       f2, 0xC(r30)
  lfsx      f4, r3, r0
  fmadds    f3, f5, f4, f3
  fmuls     f2, f2, f3
  stfs      f2, 0xC(r30)
  lfs       f2, 0x10(r30)
  fmuls     f2, f2, f3
  stfs      f2, 0x10(r30)
  lfs       f3, 0x4(r30)
  lfs       f2, 0xC(r30)
  fadds     f2, f3, f2
  stfs      f2, 0x4(r30)
  lfs       f3, 0x8(r30)
  lfs       f2, 0x10(r30)
  fadds     f2, f3, f2
  stfs      f2, 0x8(r30)

.loc_0x210:
  lfs       f2, 0x1C14(r2)
  fcmpo     cr0, f0, f2
  bge-      .loc_0x2D4
  lfs       f0, 0x18(r30)
  lfs       f1, 0x14(r30)
  fneg      f2, f0
  bl        0x19A74
  lis       r3, 0x8051
  lfs       f0, 0x1BBC(r2)
  addi      r3, r3, 0x4058
  lfs       f2, 0x44(r3)
  fmuls     f31, f1, f2
  fsubs     f2, f31, f1
  fcmpo     cr0, f2, f0
  bge-      .loc_0x258
  lfs       f0, 0x1BA4(r2)
  fsubs     f31, f1, f0
  b         .loc_0x268

.loc_0x258:
  lfs       f0, 0x1BA4(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x268
  fadds     f31, f0, f1

.loc_0x268:
  fmr       f1, f31
  bl        0x199EC
  fneg      f30, f1
  fmr       f1, f31
  bl        0x19978
  stfs      f1, 0x14(r30)
  cmpwi     r28, -0x4000
  stfs      f30, 0x18(r30)
  bge-      .loc_0x2AC
  lha       r0, 0x30(r30)
  cmpwi     r0, -0x4000
  ble-      .loc_0x2AC
  lwz       r3, 0x0(r30)
  bl        -0x3BECFC
  lwz       r4, 0x0(r30)
  bl        -0x3C0720
  b         .loc_0x418

.loc_0x2AC:
  cmpwi     r28, 0x4000
  bge-      .loc_0x418
  lha       r0, 0x30(r30)
  cmpwi     r0, 0x4000
  ble-      .loc_0x418
  lwz       r3, 0x0(r30)
  bl        -0x3BED24
  lwz       r4, 0x0(r30)
  bl        -0x3C0690
  b         .loc_0x418

.loc_0x2D4:
  lis       r3, 0x8051
  lfs       f2, 0x1BC0(r2)
  lfs       f0, 0x48DC(r3)
  fmuls     f0, f2, f0
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  beq-      .loc_0x32C
  lfs       f0, 0x1B94(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x304
  b         .loc_0x324

.loc_0x304:
  fsqrte    f4, f1
  lfs       f3, 0x1BB4(r2)
  lfs       f0, 0x1BC4(r2)
  frsp      f4, f4
  fmuls     f2, f4, f4
  fmuls     f3, f3, f4
  fnmsubs   f0, f1, f2, f0
  fmuls     f1, f3, f0

.loc_0x324:
  fmuls     f31, f31, f1
  fmuls     f30, f30, f1

.loc_0x32C:
  lfs       f0, 0x18(r30)
  lfs       f1, 0x14(r30)
  fneg      f2, f0
  bl        0x19964
  fmr       f0, f1
  fmr       f1, f31
  fneg      f2, f30
  fmr       f30, f0
  bl        0x19950
  lfs       f0, 0x1B94(r2)
  fcmpo     cr0, f30, f0
  bge-      .loc_0x364
  lfs       f0, 0x1BC8(r2)
  fadds     f30, f30, f0

.loc_0x364:
  lfs       f0, 0x1B94(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x378
  lfs       f0, 0x1BC8(r2)
  fadds     f1, f1, f0

.loc_0x378:
  fcmpo     cr0, f30, f1
  bge-      .loc_0x39C
  fsubs     f2, f1, f30
  lfs       f0, 0x1BF4(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x3B4
  lfs       f0, 0x1BC8(r2)
  fadds     f30, f30, f0
  b         .loc_0x3B4

.loc_0x39C:
  fsubs     f2, f30, f1
  lfs       f0, 0x1BF4(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x3B4
  lfs       f0, 0x1BC8(r2)
  fadds     f1, f1, f0

.loc_0x3B4:
  lis       r3, 0x8051
  lfs       f2, 0x1B90(r2)
  addi      r3, r3, 0x4058
  lfs       f0, 0x1BBC(r2)
  lfs       f3, 0x44(r3)
  fsubs     f2, f2, f3
  fmuls     f1, f1, f2
  fmadds    f31, f30, f3, f1
  fsubs     f1, f31, f30
  fcmpo     cr0, f1, f0
  bge-      .loc_0x3EC
  lfs       f0, 0x1BA4(r2)
  fsubs     f31, f30, f0
  b         .loc_0x3FC

.loc_0x3EC:
  lfs       f0, 0x1BA4(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x3FC
  fadds     f31, f0, f30

.loc_0x3FC:
  fmr       f1, f31
  bl        0x19858
  fneg      f30, f1
  fmr       f1, f31
  bl        0x197E4
  stfs      f1, 0x14(r30)
  stfs      f30, 0x18(r30)

.loc_0x418:
  mr        r3, r30
  mr        r4, r31
  bl        .loc_0x458
  lfs       f0, 0x4(r30)
  stfs      f0, 0x0(r29)
  lfs       f0, 0x8(r30)
  stfs      f0, 0x4(r29)
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  lmw       r27, 0x2C(r1)
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr       

.loc_0x458:
*/
}

/*
 * --INFO--
 * Address:	803F7F98
 * Size:	00012C
 */
void kh::Screen::WorldMap::OnyonDynamics::update( (kh::Screen::WorldMap *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x10(r1)
  psq_st    f31,0x18(r1),0,0
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x48(r4)
  lis       r5, 0x434B
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x4554
  addi      r5, r4, 0x524F
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lha       r0, 0x30(r31)
  lis       r4, 0x8050
  lfs       f31, 0xCC(r3)
  addi      r4, r4, 0x71A0
  rlwinm    r0,r0,30,18,28
  lfs       f1, 0x1C18(r2)
  lfsx      f0, r4, r0
  lwz       r3, 0x0(r31)
  fmuls     f1, f1, f0
  lfs       f0, 0x4(r31)
  lfs       f2, 0x8(r31)
  fmadds    f0, f31, f1, f0
  stfs      f0, 0xD4(r3)
  stfs      f2, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x14(r31)
  lis       r3, 0x8051
  lfs       f0, 0x18(r31)
  subi      r3, r3, 0x2E20
  fneg      f1, f1
  fneg      f2, f0
  bl        -0x3C2F30
  lfs       f0, 0x1BD4(r2)
  lwz       r3, 0x0(r31)
  fmuls     f0, f1, f0
  stfs      f0, 0xC0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x0(r31)
  stfs      f31, 0xCC(r3)
  stfs      f31, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x0(r31)
  fmr       f1, f31
  lfs       f2, 0x1B94(r2)
  lfs       f4, 0x9C(r3)
  lfs       f3, 0x8C(r3)
  lfs       f0, 0x1B90(r2)
  stfs      f3, 0x20(r31)
  stfs      f4, 0x24(r31)
  stfs      f2, 0x28(r31)
  stfs      f0, 0x2C(r31)
  lwz       r3, 0x1C(r31)
  bl        -0x3D52C
  psq_l     f31,0x18(r1),0,0
  lwz       r0, 0x24(r1)
  lfd       f31, 0x10(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	803F80C4
 * Size:	000030
 */
void kh::Screen::WorldMap::OnyonDynamics::kill(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x1C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
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
 * Address:	803F80F4
 * Size:	00000C
 */
void efx2d::WorldMap::ArgDirScale::getName(void)
{
/*
.loc_0x0:
  lis       r3, 0x804A
  subi      r3, r3, 0x7CB8
  blr
*/
}

/*
 * --INFO--
 * Address:	803F8100
 * Size:	00009C
 */
void efx2d::WorldMap::T2DShstar1::__dt(void)
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
  lis       r3, 0x804F
  subi      r3, r3, 0x5C00
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x73CC
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x8
  addi      r5, r4, 0x7420
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x18
  stw       r0, 0x8(r30)
  bl        -0x3684D0

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x3D40C8

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
 * Address:	803F819C
 * Size:	00009C
 */
void efx2d::WorldMap::T2DMapFlare::__dt(void)
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
  lis       r3, 0x804F
  subi      r3, r3, 0x5BC4
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x73CC
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x8
  addi      r5, r4, 0x7420
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x18
  stw       r0, 0x8(r30)
  bl        -0x36856C

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x3D4164

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
 * Address:	803F8238
 * Size:	00009C
 */
void efx2d::WorldMap::T2DRocketGlow::__dt(void)
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
  lis       r3, 0x804F
  subi      r3, r3, 0x5B88
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x7390
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x8
  addi      r5, r4, 0x7420
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x18
  stw       r0, 0x8(r30)
  bl        -0x368608

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x3D4200

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
 * Address:	803F82D4
 * Size:	000070
 */
void kh::Screen::WorldMap::__dt(void)
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
  lis       r4, 0x804F
  subi      r0, r4, 0x5B4C
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804F
  li        r4, 0
  subi      r0, r5, 0x5B20
  stw       r0, 0x0(r30)
  bl        -0x3DB2E0

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x3D4270

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
 * Address:	803F8344
 * Size:	000004
 */
void Game::WorldMap::Base::draw( (Graphics &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803F8348
 * Size:	000090
 */
void kh::Screen::khUtilColorAnmWM::__dt(void)
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
  subi      r0, r4, 0x5AF4
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804F
  subi      r0, r4, 0x4E48
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804D
  addi      r0, r4, 0x7F2C
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r5, 0x804D
  li        r4, 0
  addi      r0, r5, 0x7B0C
  stw       r0, 0x0(r30)
  bl        0x191E0

.loc_0x64:
  extsh.    r0, r31
  ble-      .loc_0x74
  mr        r3, r30
  bl        -0x3D4304

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
 * Address:	803F83D8
 * Size:	0000AC
 */
void kh::Screen::khUtilFadePaneWM::__dt(void)
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
  beq-      .loc_0x90
  lis       r3, 0x804F
  subi      r0, r3, 0x5AD4
  stw       r0, 0x0(r30)
  beq-      .loc_0x80
  lis       r3, 0x804F
  addic.    r0, r30, 0x1C
  subi      r0, r3, 0x4E28
  stw       r0, 0x0(r30)
  beq-      .loc_0x50
  lis       r3, 0x804F
  subi      r0, r3, 0x5AB0
  stw       r0, 0x1C(r30)

.loc_0x50:
  cmplwi    r30, 0
  beq-      .loc_0x80
  lis       r3, 0x804D
  addi      r0, r3, 0x7F2C
  stw       r0, 0x0(r30)
  beq-      .loc_0x80
  lis       r4, 0x804D
  mr        r3, r30
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        0x19134

.loc_0x80:
  extsh.    r0, r31
  ble-      .loc_0x90
  mr        r3, r30
  bl        -0x3D43B0

.loc_0x90:
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
 * Address:	803F8484
 * Size:	000004
 */
void kh::Screen::khUtilFadePane::fadein_finish(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803F8488
 * Size:	000048
 */
void kh::Screen::khUtilFadePane::khPaneNode::__dt(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804F
  extsh.    r0, r4
  subi      r0, r5, 0x5AB0
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        -0x3D4400

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
 * Address:	803F84D0
 * Size:	0001A8
 */
void __sinit_khWorldMap_cpp(void)
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
  stfd      f29, 0x20(r1)
  psq_st    f29,0x28(r1),0,0
  stfd      f28, 0x10(r1)
  psq_st    f28,0x18(r1),0,0
  stw       r31, 0xC(r1)
  lis       r4, 0x8051
  lis       r3, 0x8040
  addi      r4, r4, 0x4058
  li        r5, 0
  addi      r31, r4, 0x50
  li        r6, 0x8
  subi      r4, r3, 0x7988
  li        r7, 0x2
  mr        r3, r31
  bl        -0x336CE8
  lis       r3, 0x8051
  lfs       f1, 0x1B94(r2)
  addi      r8, r3, 0x4058
  li        r9, -0x1
  lfs       f11, 0x1C34(r2)
  li        r0, 0x8
  lfs       f31, 0x1C28(r2)
  li        r7, 0xFF
  stw       r9, 0x6C(r8)
  li        r6, 0x40
  lfs       f5, 0x1BA8(r2)
  li        r5, 0x80
  stw       r9, 0x70(r8)
  li        r4, 0x20
  lfs       f0, 0x1C14(r2)
  li        r3, 0x8C
  stw       r9, 0x74(r8)
  lfs       f28, 0x1C1C(r2)
  lfs       f29, 0x1C20(r2)
  lfs       f30, 0x1C24(r2)
  lfs       f13, 0x1C2C(r2)
  lfs       f12, 0x1C30(r2)
  lfs       f10, 0x1B90(r2)
  lfs       f9, 0x1C38(r2)
  lfs       f8, 0x1C3C(r2)
  lfs       f7, 0x1BB4(r2)
  lfs       f6, 0x1C00(r2)
  lfs       f4, 0x1BCC(r2)
  lfs       f3, 0x1C40(r2)
  lfs       f2, 0x1C44(r2)
  stfs      f28, 0x0(r8)
  stfs      f29, 0x4(r8)
  stfs      f30, 0x8(r8)
  stfs      f31, 0xC(r8)
  stfs      f13, 0x10(r8)
  stfs      f31, 0x14(r8)
  stfs      f12, 0x18(r8)
  stfs      f11, 0x1C(r8)
  stfs      f10, 0x20(r8)
  stfs      f9, 0x24(r8)
  stfs      f11, 0x28(r8)
  stfs      f11, 0x2C(r8)
  stfs      f8, 0x30(r8)
  stfs      f11, 0x34(r8)
  stfs      f7, 0x38(r8)
  stfs      f6, 0x3C(r8)
  stfs      f5, 0x40(r8)
  stfs      f4, 0x44(r8)
  stfs      f3, 0x48(r8)
  stfs      f2, 0x4C(r8)
  stfs      f1, 0x0(r31)
  stfs      f1, 0x54(r8)
  stfs      f1, 0x58(r8)
  stfs      f1, 0x5C(r8)
  stfs      f5, 0x60(r8)
  stfs      f0, 0x64(r8)
  stfs      f0, 0x68(r8)
  stb       r7, 0x6C(r8)
  stb       r7, 0x6D(r8)
  stb       r6, 0x6E(r8)
  stb       r7, 0x6F(r8)
  stb       r7, 0x70(r8)
  stb       r5, 0x71(r8)
  stb       r4, 0x72(r8)
  stb       r7, 0x73(r8)
  stb       r7, 0x74(r8)
  stb       r7, 0x75(r8)
  stb       r5, 0x76(r8)
  stb       r3, 0x77(r8)
  stb       r0, 0x78(r8)
  stb       r0, 0x79(r8)
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  psq_l     f29,0x28(r1),0,0
  lfd       f29, 0x20(r1)
  psq_l     f28,0x18(r1),0,0
  lfd       f28, 0x10(r1)
  lwz       r0, 0x54(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	803F8678
 * Size:	000004
 */
void __ct__Q29JGeometry8TVec2<float>Fv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803F867C
 * Size:	000008
 */
void @8@efx2d::WorldMap::T2DRocketGlow::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0x448
*/
}

/*
 * --INFO--
 * Address:	803F8684
 * Size:	000008
 */
void @8@efx2d::WorldMap::T2DMapFlare::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0x4EC
*/
}

/*
 * --INFO--
 * Address:	803F868C
 * Size:	000008
 */
void @8@efx2d::WorldMap::T2DShstar1::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0x590
*/
}
