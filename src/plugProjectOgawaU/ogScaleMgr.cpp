

/*
 * --INFO--
 * Address:	80328E04
 * Size:	000044
 */
void og::Screen::ScaleMgr::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x4F8(r2)
  stw       r0, 0x14(r1)
  li        r0, 0
  fmr       f2, f1
  stw       r31, 0xC(r1)
  fmr       f3, f1
  mr        r31, r3
  stw       r0, 0x0(r3)
  bl        0x138
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
 * Address:	80328E48
 * Size:	000048
 */
void og::Screen::ScaleMgr::up(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x4F4(r2)
  stw       r0, 0x14(r1)
  li        r0, 0x1
  lfs       f2, -0x4F0(r2)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lfs       f3, -0x4EC(r2)
  stw       r0, 0x0(r3)
  bl        0xF4
  lfs       f0, -0x4E8(r2)
  stfs      f0, 0x18(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80328E90
 * Size:	000048
 */
void og::Screen::ScaleMgr::down(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x4E4(r2)
  stw       r0, 0x14(r1)
  li        r0, 0x2
  lfs       f2, -0x4E0(r2)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lfs       f3, -0x4EC(r2)
  stw       r0, 0x0(r3)
  bl        0xAC
  lfs       f0, -0x4E8(r2)
  stfs      f0, 0x18(r31)
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
 * Size:	0000A0
 */
void og::Screen::ScaleMgr::up( (float))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80328ED8
 * Size:	000064
 */
void og::Screen::ScaleMgr::up( (float, float, float, float))
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
  fmr       f31, f4
  bl        0x6C
  lfs       f0, -0x4DC(r2)
  stfs      f31, 0x18(r31)
  fcmpo     cr0, f31, f0
  bge-      .loc_0x40
  li        r0, 0x1
  stw       r0, 0x0(r31)
  b         .loc_0x48

.loc_0x40:
  li        r0, 0x3
  stw       r0, 0x0(r31)

.loc_0x48:
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
 * Address:	80328F3C
 * Size:	000028
 */
void og::Screen::ScaleMgr::down( (float, float, float))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0x2
  stw       r0, 0x0(r3)
  bl        .loc_0x28
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x28:
*/
}

/*
 * --INFO--
 * Address:	80328F64
 * Size:	000020
 */
void og::Screen::ScaleMgr::setParam( (float, float, float))
{
/*
.loc_0x0:
  lfs       f4, -0x4E8(r2)
  lfs       f0, -0x4F8(r2)
  stfs      f4, 0x4(r3)
  stfs      f0, 0x8(r3)
  stfs      f1, 0xC(r3)
  stfs      f2, 0x10(r3)
  stfs      f3, 0x14(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80328F84
 * Size:	00020C
 */
void og::Screen::ScaleMgr::calc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  lwz       r0, 0x0(r3)
  cmpwi     r0, 0x2
  beq-      .loc_0xFC
  bge-      .loc_0x24
  cmpwi     r0, 0
  beq-      .loc_0x30
  bge-      .loc_0x3C
  b         .loc_0x1F8

.loc_0x24:
  cmpwi     r0, 0x4
  bge-      .loc_0x1F8
  b         .loc_0x1BC

.loc_0x30:
  lfs       f0, -0x4F8(r2)
  stfs      f0, 0x8(r3)
  b         .loc_0x200

.loc_0x3C:
  lwz       r4, -0x6514(r13)
  lfs       f1, 0x4(r3)
  lfs       f0, 0x54(r4)
  fadds     f0, f1, f0
  stfs      f0, 0x4(r3)
  lfs       f2, 0x4(r3)
  lfs       f4, 0x14(r3)
  fcmpo     cr0, f2, f4
  ble-      .loc_0x7C
  li        r0, 0
  lfs       f1, -0x4F8(r2)
  stw       r0, 0x0(r3)
  lfs       f0, -0x4E8(r2)
  stfs      f1, 0x8(r3)
  stfs      f0, 0x4(r3)
  b         .loc_0x200

.loc_0x7C:
  lfs       f1, 0x10(r3)
  lfs       f0, -0x4E8(r2)
  fmuls     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xBC
  lfs       f0, -0x4D8(r2)
  lis       r4, 0x8050
  addi      r4, r4, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f1, f0
  b         .loc_0xE0

.loc_0xBC:
  lfs       f0, -0x4D4(r2)
  lis       r4, 0x8050
  addi      r4, r4, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r4, r0

.loc_0xE0:
  lfs       f3, 0xC(r3)
  fsubs     f2, f4, f2
  lfs       f0, -0x4F8(r2)
  fmadds    f1, f3, f1, f3
  fmadds    f0, f2, f1, f0
  stfs      f0, 0x8(r3)
  b         .loc_0x200

.loc_0xFC:
  lwz       r4, -0x6514(r13)
  lfs       f1, 0x4(r3)
  lfs       f0, 0x54(r4)
  fadds     f0, f1, f0
  stfs      f0, 0x4(r3)
  lfs       f2, 0x4(r3)
  lfs       f4, 0x14(r3)
  fcmpo     cr0, f2, f4
  ble-      .loc_0x13C
  li        r0, 0
  lfs       f1, -0x4F8(r2)
  stw       r0, 0x0(r3)
  lfs       f0, -0x4E8(r2)
  stfs      f1, 0x8(r3)
  stfs      f0, 0x4(r3)
  b         .loc_0x200

.loc_0x13C:
  lfs       f1, 0x10(r3)
  lfs       f0, -0x4E8(r2)
  fmuls     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x17C
  lfs       f0, -0x4D8(r2)
  lis       r4, 0x8050
  addi      r4, r4, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f1, f0
  b         .loc_0x1A0

.loc_0x17C:
  lfs       f0, -0x4D4(r2)
  lis       r4, 0x8050
  addi      r4, r4, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r4, r0

.loc_0x1A0:
  lfs       f3, 0xC(r3)
  fsubs     f2, f4, f2
  lfs       f0, -0x4F8(r2)
  fmadds    f1, f3, f1, f3
  fnmsubs   f0, f2, f1, f0
  stfs      f0, 0x8(r3)
  b         .loc_0x200

.loc_0x1BC:
  lfs       f1, -0x4F8(r2)
  lfs       f0, -0x4E8(r2)
  stfs      f1, 0x8(r3)
  lwz       r4, -0x6514(r13)
  lfs       f2, 0x18(r3)
  lfs       f1, 0x54(r4)
  fsubs     f1, f2, f1
  stfs      f1, 0x18(r3)
  lfs       f1, 0x18(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x200
  li        r0, 0x1
  stw       r0, 0x0(r3)
  stfs      f0, 0x18(r3)
  b         .loc_0x200

.loc_0x1F8:
  lfs       f0, -0x4F8(r2)
  stfs      f0, 0x8(r3)

.loc_0x200:
  lfs       f1, 0x8(r3)
  addi      r1, r1, 0x20
  blr
*/
}
