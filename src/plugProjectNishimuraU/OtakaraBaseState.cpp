

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
 * Address:	802B37A8
 * Size:	0004D4
 */
void Game::OtakaraBase::FSM::init( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  subi      r30, r4, 0x5D40
  li        r4, 0xE
  bl        -0x182F68
  li        r3, 0x10
  bl        -0x28F930
  mr.       r4, r3
  beq-      .loc_0x70
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r7, 0
  subi      r6, r5, 0x10E0
  subi      r5, r2, 0x2118
  stw       r7, 0x4(r4)
  subi      r0, r3, 0x1104
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x70:
  mr        r3, r31
  bl        -0x182F14
  li        r3, 0x10
  bl        -0x28F980
  mr.       r4, r3
  beq-      .loc_0xC4
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x1
  li        r7, 0
  subi      r6, r5, 0x10E0
  stw       r0, 0x4(r4)
  subi      r5, r2, 0x2110
  subi      r0, r3, 0x1128
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0xC4:
  mr        r3, r31
  bl        -0x182F68
  li        r3, 0x10
  bl        -0x28F9D4
  mr.       r4, r3
  beq-      .loc_0x118
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x2
  li        r7, 0
  subi      r6, r5, 0x10E0
  stw       r0, 0x4(r4)
  subi      r5, r2, 0x2108
  subi      r0, r3, 0x114C
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x118:
  mr        r3, r31
  bl        -0x182FBC
  li        r3, 0x10
  bl        -0x28FA28
  mr.       r4, r3
  beq-      .loc_0x16C
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x3
  li        r7, 0
  subi      r6, r5, 0x10E0
  stw       r0, 0x4(r4)
  subi      r5, r2, 0x2100
  subi      r0, r3, 0x1170
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x16C:
  mr        r3, r31
  bl        -0x183010
  li        r3, 0x10
  bl        -0x28FA7C
  mr.       r4, r3
  beq-      .loc_0x1C0
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x4
  li        r7, 0
  subi      r6, r5, 0x10E0
  stw       r0, 0x4(r4)
  subi      r5, r2, 0x20F8
  subi      r0, r3, 0x1194
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x1C0:
  mr        r3, r31
  bl        -0x183064
  li        r3, 0x10
  bl        -0x28FAD0
  mr.       r4, r3
  beq-      .loc_0x214
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x5
  li        r7, 0
  subi      r6, r5, 0x10E0
  stw       r0, 0x4(r4)
  subi      r5, r2, 0x20F0
  subi      r0, r3, 0x11B8
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x214:
  mr        r3, r31
  bl        -0x1830B8
  li        r3, 0x10
  bl        -0x28FB24
  mr.       r4, r3
  beq-      .loc_0x268
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x6
  li        r7, 0
  subi      r6, r5, 0x10E0
  stw       r0, 0x4(r4)
  addi      r5, r30, 0x18
  subi      r0, r3, 0x11DC
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x268:
  mr        r3, r31
  bl        -0x18310C
  li        r3, 0x10
  bl        -0x28FB78
  mr.       r4, r3
  beq-      .loc_0x2BC
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x7
  li        r7, 0
  subi      r6, r5, 0x10E0
  stw       r0, 0x4(r4)
  addi      r5, r30, 0x24
  subi      r0, r3, 0x1200
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x2BC:
  mr        r3, r31
  bl        -0x183160
  li        r3, 0x10
  bl        -0x28FBCC
  mr.       r4, r3
  beq-      .loc_0x310
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x8
  li        r7, 0
  subi      r6, r5, 0x10E0
  stw       r0, 0x4(r4)
  addi      r5, r30, 0x30
  subi      r0, r3, 0x1224
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x310:
  mr        r3, r31
  bl        -0x1831B4
  li        r3, 0x10
  bl        -0x28FC20
  mr.       r4, r3
  beq-      .loc_0x364
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x9
  li        r7, 0
  subi      r6, r5, 0x10E0
  stw       r0, 0x4(r4)
  addi      r5, r30, 0x3C
  subi      r0, r3, 0x1248
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x364:
  mr        r3, r31
  bl        -0x183208
  li        r3, 0x10
  bl        -0x28FC74
  mr.       r4, r3
  beq-      .loc_0x3B8
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0xA
  li        r7, 0
  subi      r6, r5, 0x10E0
  stw       r0, 0x4(r4)
  addi      r5, r30, 0x48
  subi      r0, r3, 0x126C
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x3B8:
  mr        r3, r31
  bl        -0x18325C
  li        r3, 0x10
  bl        -0x28FCC8
  mr.       r4, r3
  beq-      .loc_0x40C
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0xB
  li        r7, 0
  subi      r6, r5, 0x10E0
  stw       r0, 0x4(r4)
  addi      r5, r30, 0x54
  subi      r0, r3, 0x1290
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x40C:
  mr        r3, r31
  bl        -0x1832B0
  li        r3, 0x10
  bl        -0x28FD1C
  mr.       r4, r3
  beq-      .loc_0x460
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0xC
  li        r7, 0
  subi      r6, r5, 0x10E0
  stw       r0, 0x4(r4)
  addi      r5, r30, 0x60
  subi      r0, r3, 0x12B4
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x460:
  mr        r3, r31
  bl        -0x183304
  li        r3, 0x10
  bl        -0x28FD70
  mr.       r4, r3
  beq-      .loc_0x4B4
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0xD
  li        r7, 0
  subi      r6, r5, 0x10E0
  stw       r0, 0x4(r4)
  addi      r5, r30, 0x6C
  subi      r0, r3, 0x12D8
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x4B4:
  mr        r3, r31
  bl        -0x183358
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
 * Address:	802B3C7C
 * Size:	00005C
 */
void Game::OtakaraBase::StateDead::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  stfs      f0, 0x1D4(r4)
  stfs      f0, 0x1D8(r4)
  stfs      f0, 0x1DC(r4)
  bl        -0x1AE584
  lwz       r0, 0x1E0(r31)
  mr        r3, r31
  li        r4, 0xA
  li        r5, 0
  rlwinm    r0,r0,0,26,24
  stw       r0, 0x1E0(r31)
  bl        -0x1AECBC
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B3CD8
 * Size:	000044
 */
void Game::OtakaraBase::StateDead::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x188(r4)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x34
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x34
  mr        r3, r4
  li        r4, 0
  bl        -0x178C18

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B3D1C
 * Size:	000004
 */
void Game::OtakaraBase::StateDead::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802B3D20
 * Size:	00007C
 */
void Game::OtakaraBase::StateFlick::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x14(r1)
  li        r0, -0x1
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  stw       r0, 0x2C0(r4)
  stfs      f0, 0x2C4(r4)
  stfs      f0, 0x2CC(r4)
  stfs      f0, 0x1D4(r4)
  stfs      f0, 0x1D8(r4)
  stfs      f0, 0x1DC(r4)
  bl        -0x1B238C
  mr        r3, r31
  li        r4, 0x3
  li        r5, 0
  bl        -0x1AED64
  li        r0, 0x1
  mr        r3, r31
  stb       r0, 0x2D0(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x308(r12)
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
 * Address:	802B3D9C
 * Size:	000004
 */
void Game::OtakaraBase::Obj::startChargeEffect(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802B3DA0
 * Size:	000290
 */
void Game::OtakaraBase::StateFlick::exec( (Game::EnemyBase *))
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
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  mr        r30, r3
  lwz       r3, 0xC0(r4)
  lfs       f1, 0x2C4(r4)
  mr        r31, r4
  lfs       f0, 0x844(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x48
  mr        r3, r31
  bl        -0x1AEB44

.loc_0x48:
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x2C4(r31)
  lfs       f0, 0x54(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x2C4(r31)
  lbz       r0, 0x2D0(r31)
  cmplwi    r0, 0
  beq-      .loc_0x94
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xF4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  li        r4, 0x50F2
  li        r5, 0
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x94:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x268
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x2
  bne-      .loc_0xDC
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f4, -0x20E4(r2)
  li        r4, 0
  lfs       f1, 0x53C(r5)
  lfs       f2, 0x4C4(r5)
  lfs       f3, 0x4EC(r5)
  bl        -0x1A0D50
  lfs       f0, -0x20E8(r2)
  stfs      f0, 0x20C(r31)
  b         .loc_0x268

.loc_0xDC:
  cmplwi    r0, 0x3
  bne-      .loc_0x120
  lfs       f0, -0x20E8(r2)
  li        r0, 0
  mr        r3, r31
  stfs      f0, 0x2C8(r31)
  stb       r0, 0x2D0(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x310(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x268

.loc_0x120:
  cmplwi    r0, 0x3E8
  bne-      .loc_0x268
  lfs       f1, 0x200(r31)
  lfs       f0, -0x20E8(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x160
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x268

.loc_0x160:
  mr        r3, r31
  li        r4, 0
  bl        0x2D18
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x248
  mr        r4, r31
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r31)
  lfs       f31, 0x2D4(r31)
  lwz       r12, 0x8(r12)
  lfs       f30, 0x2DC(r31)
  mtctr     r12
  bctrl     
  lfs       f4, 0x14(r1)
  lis       r3, 0x8051
  lfs       f0, 0x1C(r1)
  subi      r3, r3, 0x2E20
  lfs       f3, 0x18(r1)
  fsubs     f1, f31, f4
  fsubs     f2, f30, f0
  stfs      f4, 0x8(r1)
  stfs      f3, 0xC(r1)
  stfs      f0, 0x10(r1)
  bl        -0x27EE54
  bl        0x15DC70
  lwz       r12, 0x0(r31)
  fmr       f31, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f31
  bl        0x15DC78
  fabs      f1, f1
  lfs       f0, -0x20E0(r2)
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x224
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x3
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x268

.loc_0x224:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x268

.loc_0x248:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x268:
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r0, 0x54(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802B4030
 * Size:	000004
 */
void Game::OtakaraBase::Obj::createDisChargeEffect(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802B4034
 * Size:	000004
 */
void Game::OtakaraBase::Obj::finishChargeEffect(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802B4038
 * Size:	000024
 */
void Game::OtakaraBase::StateFlick::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  bl        -0x1B26CC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B405C
 * Size:	000050
 */
void Game::OtakaraBase::StateWait::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x20E8(r2)
  mr        r3, r4
  stw       r0, 0x14(r1)
  li        r0, -0x1
  li        r5, 0
  stw       r0, 0x2C0(r4)
  li        r0, 0
  li        r4, 0
  stfs      f0, 0x2CC(r3)
  stfs      f0, 0x1D4(r3)
  stfs      f0, 0x1D8(r3)
  stfs      f0, 0x1DC(r3)
  stw       r0, 0x230(r3)
  bl        -0x1AF094
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B40AC
 * Size:	0001CC
 */
void Game::OtakaraBase::StateWait::exec( (Game::EnemyBase *))
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
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  mr        r31, r4
  mr        r30, r3
  li        r4, 0
  mr        r3, r31
  bl        0x2B40
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x120
  mr        r4, r31
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r31)
  lfs       f31, 0x2D4(r31)
  lwz       r12, 0x8(r12)
  lfs       f30, 0x2DC(r31)
  mtctr     r12
  bctrl     
  lfs       f4, 0x14(r1)
  lis       r3, 0x8051
  lfs       f0, 0x1C(r1)
  subi      r3, r3, 0x2E20
  lfs       f3, 0x18(r1)
  fsubs     f1, f31, f4
  fsubs     f2, f30, f0
  stfs      f4, 0x8(r1)
  stfs      f3, 0xC(r1)
  stfs      f0, 0x10(r1)
  bl        -0x27F02C
  bl        0x15DA98
  lwz       r12, 0x0(r31)
  fmr       f31, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f31
  bl        0x15DAA0
  fabs      f1, f1
  lfs       f0, -0x20E0(r2)
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x110
  li        r0, 0x3
  mr        r3, r31
  stw       r0, 0x2C0(r31)
  bl        -0x1AEEE4
  mr        r3, r31
  bl        0x2F78
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x120
  li        r0, 0x5
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x2C0(r31)
  mr        r3, r31
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x1AEF14
  b         .loc_0x120

.loc_0x110:
  li        r0, 0x4
  mr        r3, r31
  stw       r0, 0x2C0(r31)
  bl        -0x1AEF28

.loc_0x120:
  mr        r3, r31
  li        r4, 0
  bl        -0x19FB7C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x144
  li        r0, 0x1
  mr        r3, r31
  stw       r0, 0x2C0(r31)
  bl        -0x1AEF4C

.loc_0x144:
  lfs       f1, 0x200(r31)
  lfs       f0, -0x20E8(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x168
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x2C0(r31)
  bl        -0x1AEF70

.loc_0x168:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x1A4
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x1A4
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r6, 0
  lwz       r5, 0x2C0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x1A4:
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r0, 0x54(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802B4278
 * Size:	000004
 */
void Game::OtakaraBase::StateWait::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802B427C
 * Size:	000048
 */
void Game::OtakaraBase::StateMove::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, -0x1
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  stw       r0, 0x2C0(r4)
  bl        -0x1B28D0
  mr        r3, r31
  li        r4, 0x1
  li        r5, 0
  bl        -0x1AF2A8
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B42C4
 * Size:	000244
 */
void Game::OtakaraBase::StateMove::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stfd      f31, 0x40(r1)
  psq_st    f31,0x48(r1),0,0
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  mr        r31, r4
  mr        r30, r3
  li        r4, 0
  mr        r3, r31
  bl        0x2930
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x150
  lfs       f1, 0x2D8(r31)
  mr        r4, r31
  lfs       f2, 0x2DC(r31)
  addi      r3, r1, 0x14
  lfs       f0, 0x2D4(r31)
  stfs      f0, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f2, 0x28(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f5, 0x14(r1)
  lis       r3, 0x8051
  lfs       f3, 0x1C(r1)
  subi      r3, r3, 0x2E20
  lfs       f1, 0x20(r1)
  lfs       f0, 0x28(r1)
  lfs       f4, 0x18(r1)
  fsubs     f1, f1, f5
  fsubs     f2, f0, f3
  stfs      f5, 0x8(r1)
  stfs      f4, 0xC(r1)
  stfs      f3, 0x10(r1)
  bl        -0x27F254
  bl        0x15D870
  lwz       r12, 0x0(r31)
  fmr       f31, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f31
  bl        0x15D878
  fabs      f1, f1
  lfs       f0, -0x20E0(r2)
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x12C
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  addi      r4, r1, 0x20
  lfs       f1, 0x2E4(r5)
  lfs       f2, 0x30C(r5)
  lfs       f3, 0x334(r5)
  bl        -0x19EDDC
  mr        r3, r31
  bl        0x2D44
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x170
  li        r0, 0x5
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x2C0(r31)
  mr        r3, r31
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x1AF148
  b         .loc_0x170

.loc_0x12C:
  li        r0, 0x4
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x2C0(r31)
  mr        r3, r31
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x1AF16C
  b         .loc_0x170

.loc_0x150:
  li        r0, 0x2
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x2C0(r31)
  mr        r3, r31
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x1AF190

.loc_0x170:
  mr        r3, r31
  li        r4, 0
  bl        -0x19FDE4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1A4
  li        r0, 0x1
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x2C0(r31)
  mr        r3, r31
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x1AF1C4

.loc_0x1A4:
  lfs       f1, 0x200(r31)
  lfs       f0, -0x20E8(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x1D4
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x2C0(r31)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x1AF1F4

.loc_0x1D4:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x31C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x224
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x224
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r6, 0
  lwz       r5, 0x2C0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x224:
  psq_l     f31,0x48(r1),0,0
  lwz       r0, 0x54(r1)
  lfd       f31, 0x40(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802B4508
 * Size:	000024
 */
void Game::OtakaraBase::StateMove::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  bl        -0x1B2B9C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B452C
 * Size:	000058
 */
void Game::OtakaraBase::StateTurn::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x14(r1)
  li        r0, -0x1
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  stw       r0, 0x2C0(r4)
  stfs      f0, 0x1D4(r4)
  stfs      f0, 0x1D8(r4)
  stfs      f0, 0x1DC(r4)
  bl        -0x1B2B90
  mr        r3, r31
  li        r4, 0x2
  li        r5, 0
  bl        -0x1AF568
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B4584
 * Size:	000264
 */
void Game::OtakaraBase::StateTurn::exec( (Game::EnemyBase *))
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
  stfd      f29, 0x30(r1)
  psq_st    f29,0x38(r1),0,0
  stfd      f28, 0x20(r1)
  psq_st    f28,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r31, r4
  mr        r30, r3
  li        r4, 0
  mr        r3, r31
  bl        0x2658
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x184
  mr        r4, r31
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x8
  lfs       f31, 0x2D4(r31)
  lwz       r12, 0x8(r12)
  lfs       f28, 0x2DC(r31)
  lfs       f29, 0x334(r5)
  lfs       f30, 0x30C(r5)
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r1)
  lis       r3, 0x8051
  lfs       f0, 0x10(r1)
  subi      r3, r3, 0x2E20
  fsubs     f1, f31, f1
  fsubs     f2, f28, f0
  bl        -0x27F510
  bl        0x15D5B4
  lwz       r12, 0x0(r31)
  fmr       f31, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f31
  bl        0x15D5BC
  fmr       f31, f1
  lfs       f0, -0x20D8(r2)
  lfs       f1, -0x20DC(r2)
  fmuls     f0, f0, f29
  fmuls     f29, f31, f30
  fmuls     f1, f1, f0
  fabs      f0, f29
  frsp      f0, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x100
  lfs       f0, -0x20E8(r2)
  fcmpo     cr0, f29, f0
  ble-      .loc_0xFC
  fmr       f29, f1
  b         .loc_0x100

.loc_0xFC:
  fneg      f29, f1

.loc_0x100:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f29, f1
  bl        0x15D534
  fabs      f3, f31
  stfs      f1, 0x1FC(r31)
  lfs       f0, -0x20E0(r2)
  lfs       f2, 0x1FC(r31)
  frsp      f1, f3
  stfs      f2, 0x1A8(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x194
  li        r0, 0x3
  mr        r3, r31
  stw       r0, 0x2C0(r31)
  bl        -0x1AF430
  mr        r3, r31
  bl        0x2A2C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x194
  li        r0, 0x5
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x2C0(r31)
  mr        r3, r31
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x1AF460
  b         .loc_0x194

.loc_0x184:
  li        r0, 0x2
  mr        r3, r31
  stw       r0, 0x2C0(r31)
  bl        -0x1AF474

.loc_0x194:
  mr        r3, r31
  li        r4, 0
  bl        -0x1A00C8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1B8
  li        r0, 0x1
  mr        r3, r31
  stw       r0, 0x2C0(r31)
  bl        -0x1AF498

.loc_0x1B8:
  lfs       f1, 0x200(r31)
  lfs       f0, -0x20E8(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x1DC
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x2C0(r31)
  bl        -0x1AF4BC

.loc_0x1DC:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x31C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x22C
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x22C
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r6, 0
  lwz       r5, 0x2C0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x22C:
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  psq_l     f29,0x38(r1),0,0
  lfd       f29, 0x30(r1)
  psq_l     f28,0x28(r1),0,0
  lfd       f28, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r0, 0x64(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	802B47E8
 * Size:	000024
 */
void Game::OtakaraBase::StateTurn::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  bl        -0x1B2E7C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B480C
 * Size:	000050
 */
void Game::OtakaraBase::StateTake::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x14(r1)
  li        r0, -0x1
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  stw       r0, 0x2C0(r4)
  stfs      f0, 0x2CC(r4)
  bl        -0x1B2E68
  mr        r3, r31
  li        r4, 0x4
  li        r5, 0
  bl        -0x1AF840
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B485C
 * Size:	000154
 */
void Game::OtakaraBase::StateTake::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  addi      r4, r1, 0x8
  stw       r30, 0x18(r1)
  mr        r30, r3
  mr        r3, r31
  lfs       f1, 0x2D8(r31)
  lfs       f2, 0x2DC(r31)
  lfs       f0, 0x2D4(r31)
  stfs      f0, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f2, 0x10(r1)
  lwz       r5, 0xC0(r31)
  lfs       f1, 0x2E4(r5)
  lfs       f2, 0x30C(r5)
  lfs       f3, 0x334(r5)
  bl        -0x19F2CC
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x13C
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x2
  bne-      .loc_0x78
  mr        r3, r31
  bl        0x2944
  b         .loc_0x13C

.loc_0x78:
  cmplwi    r0, 0x3E8
  bne-      .loc_0x13C
  lwz       r0, 0x2E0(r31)
  cmplwi    r0, 0
  beq-      .loc_0x11C
  mr        r3, r31
  bl        0x2C68
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC0
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0xA
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x13C

.loc_0xC0:
  mr        r3, r31
  li        r4, 0
  bl        -0x1A02CC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xF8
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x9
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x13C

.loc_0xF8:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x7
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x13C

.loc_0x11C:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0xA
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x13C:
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
 * Address:	802B49B0
 * Size:	000024
 */
void Game::OtakaraBase::StateTake::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  bl        -0x1B3044
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B49D4
 * Size:	000048
 */
void Game::OtakaraBase::StateItemWait::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x20E8(r2)
  mr        r3, r4
  stw       r0, 0x14(r1)
  li        r0, -0x1
  li        r5, 0
  stw       r0, 0x2C0(r4)
  li        r4, 0x5
  stfs      f0, 0x2CC(r3)
  stfs      f0, 0x1D4(r3)
  stfs      f0, 0x1D8(r3)
  stfs      f0, 0x1DC(r3)
  bl        -0x1AFA04
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B4A1C
 * Size:	0001D8
 */
void Game::OtakaraBase::StateItemWait::exec( (Game::EnemyBase *))
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
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  mr        r30, r4
  mr        r31, r3
  li        r4, 0x1
  mr        r3, r30
  bl        0x21D0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xF0
  mr        r4, r30
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r30)
  lfs       f31, 0x2D4(r30)
  lwz       r12, 0x8(r12)
  lfs       f30, 0x2DC(r30)
  mtctr     r12
  bctrl     
  lfs       f4, 0x14(r1)
  lis       r3, 0x8051
  lfs       f0, 0x1C(r1)
  subi      r3, r3, 0x2E20
  lfs       f3, 0x18(r1)
  fsubs     f1, f31, f4
  fsubs     f2, f30, f0
  stfs      f4, 0x8(r1)
  stfs      f3, 0xC(r1)
  stfs      f0, 0x10(r1)
  bl        -0x27F99C
  bl        0x15D128
  lwz       r12, 0x0(r30)
  fmr       f31, f1
  mr        r3, r30
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f31
  bl        0x15D130
  fabs      f1, f1
  lfs       f0, -0x20E0(r2)
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0xE0
  li        r0, 0x7
  mr        r3, r30
  stw       r0, 0x2C0(r30)
  bl        -0x1AF854
  b         .loc_0xF0

.loc_0xE0:
  li        r0, 0x8
  mr        r3, r30
  stw       r0, 0x2C0(r30)
  bl        -0x1AF868

.loc_0xF0:
  mr        r3, r30
  li        r4, 0
  bl        -0x1A04BC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x114
  li        r0, 0x9
  mr        r3, r30
  stw       r0, 0x2C0(r30)
  bl        -0x1AF88C

.loc_0x114:
  mr        r3, r30
  bl        0x2A20
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x138
  li        r0, 0xA
  mr        r3, r30
  stw       r0, 0x2C0(r30)
  bl        -0x1AF8AC
  b         .loc_0x174

.loc_0x138:
  lwz       r3, -0x6C18(r13)
  cmplwi    r3, 0
  beq-      .loc_0x174
  lwz       r0, 0x44(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x174
  lfs       f1, 0x200(r30)
  lfs       f0, -0x20E8(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x174
  li        r0, 0xA
  mr        r3, r30
  stw       r0, 0x2C0(r30)
  bl        -0x1AF8EC

.loc_0x174:
  lwz       r3, 0x188(r30)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x1B0
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x1B0
  mr        r3, r31
  mr        r4, r30
  lwz       r12, 0x0(r31)
  li        r6, 0
  lwz       r5, 0x2C0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x1B0:
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r0, 0x54(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802B4BF4
 * Size:	000004
 */
void Game::OtakaraBase::StateItemWait::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802B4BF8
 * Size:	000048
 */
void Game::OtakaraBase::StateItemMove::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, -0x1
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  stw       r0, 0x2C0(r4)
  bl        -0x1B324C
  mr        r3, r31
  li        r4, 0x6
  li        r5, 0
  bl        -0x1AFC24
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B4C40
 * Size:	000260
 */
void Game::OtakaraBase::StateItemMove::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stfd      f31, 0x40(r1)
  psq_st    f31,0x48(r1),0,0
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  mr        r31, r4
  mr        r30, r3
  li        r4, 0x1
  mr        r3, r31
  bl        0x1FB4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x120
  lfs       f1, 0x2D8(r31)
  mr        r4, r31
  lfs       f2, 0x2DC(r31)
  addi      r3, r1, 0x14
  lfs       f0, 0x2D4(r31)
  stfs      f0, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f2, 0x28(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f5, 0x14(r1)
  lis       r3, 0x8051
  lfs       f3, 0x1C(r1)
  subi      r3, r3, 0x2E20
  lfs       f1, 0x20(r1)
  lfs       f0, 0x28(r1)
  lfs       f4, 0x18(r1)
  fsubs     f1, f1, f5
  fsubs     f2, f0, f3
  stfs      f5, 0x8(r1)
  stfs      f4, 0xC(r1)
  stfs      f3, 0x10(r1)
  bl        -0x27FBD0
  bl        0x15CEF4
  lwz       r12, 0x0(r31)
  fmr       f31, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f31
  bl        0x15CEFC
  fabs      f1, f1
  lfs       f0, -0x20E0(r2)
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0xFC
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  addi      r4, r1, 0x20
  lfs       f1, 0x2E4(r5)
  lfs       f2, 0x30C(r5)
  lfs       f3, 0x334(r5)
  bl        -0x19F758
  b         .loc_0x140

.loc_0xFC:
  li        r0, 0x8
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x2C0(r31)
  mr        r3, r31
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x1AFAB8
  b         .loc_0x140

.loc_0x120:
  li        r0, 0x6
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x2C0(r31)
  mr        r3, r31
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x1AFADC

.loc_0x140:
  mr        r3, r31
  li        r4, 0
  bl        -0x1A0730
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x174
  li        r0, 0x9
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x2C0(r31)
  mr        r3, r31
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x1AFB10

.loc_0x174:
  mr        r3, r31
  bl        0x279C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1A8
  li        r0, 0xA
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x2C0(r31)
  mr        r3, r31
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x1AFB40
  b         .loc_0x1F0

.loc_0x1A8:
  lwz       r3, -0x6C18(r13)
  cmplwi    r3, 0
  beq-      .loc_0x1F0
  lwz       r0, 0x44(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x1F0
  lfs       f1, 0x200(r31)
  lfs       f0, -0x20E8(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x1F0
  li        r0, 0xA
  mr        r3, r31
  stw       r0, 0x2C0(r31)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x1AFB8C

.loc_0x1F0:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x31C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x240
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x240
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r6, 0
  lwz       r5, 0x2C0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x240:
  psq_l     f31,0x48(r1),0,0
  lwz       r0, 0x54(r1)
  lfd       f31, 0x40(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802B4EA0
 * Size:	000024
 */
void Game::OtakaraBase::StateItemMove::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  bl        -0x1B3534
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B4EC4
 * Size:	000058
 */
void Game::OtakaraBase::StateItemTurn::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x14(r1)
  li        r0, -0x1
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  stw       r0, 0x2C0(r4)
  stfs      f0, 0x1D4(r4)
  stfs      f0, 0x1D8(r4)
  stfs      f0, 0x1DC(r4)
  bl        -0x1B3528
  mr        r3, r31
  li        r4, 0x7
  li        r5, 0
  bl        -0x1AFF00
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B4F1C
 * Size:	000270
 */
void Game::OtakaraBase::StateItemTurn::exec( (Game::EnemyBase *))
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
  stfd      f29, 0x30(r1)
  psq_st    f29,0x38(r1),0,0
  stfd      f28, 0x20(r1)
  psq_st    f28,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r31, r4
  mr        r30, r3
  li        r4, 0x1
  mr        r3, r31
  bl        0x1CC0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x154
  mr        r4, r31
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x8
  lfs       f31, 0x2D4(r31)
  lwz       r12, 0x8(r12)
  lfs       f28, 0x2DC(r31)
  lfs       f29, 0x334(r5)
  lfs       f30, 0x30C(r5)
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r1)
  lis       r3, 0x8051
  lfs       f0, 0x10(r1)
  subi      r3, r3, 0x2E20
  fsubs     f1, f31, f1
  fsubs     f2, f28, f0
  bl        -0x27FEA8
  bl        0x15CC1C
  lwz       r12, 0x0(r31)
  fmr       f31, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f31
  bl        0x15CC24
  fmr       f31, f1
  lfs       f0, -0x20D8(r2)
  lfs       f1, -0x20DC(r2)
  fmuls     f0, f0, f29
  fmuls     f29, f31, f30
  fmuls     f1, f1, f0
  fabs      f0, f29
  frsp      f0, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x100
  lfs       f0, -0x20E8(r2)
  fcmpo     cr0, f29, f0
  ble-      .loc_0xFC
  fmr       f29, f1
  b         .loc_0x100

.loc_0xFC:
  fneg      f29, f1

.loc_0x100:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f29, f1
  bl        0x15CB9C
  fabs      f3, f31
  stfs      f1, 0x1FC(r31)
  lfs       f0, -0x20E0(r2)
  lfs       f2, 0x1FC(r31)
  frsp      f1, f3
  stfs      f2, 0x1A8(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x164
  li        r0, 0x7
  mr        r3, r31
  stw       r0, 0x2C0(r31)
  bl        -0x1AFDC8
  b         .loc_0x164

.loc_0x154:
  li        r0, 0x6
  mr        r3, r31
  stw       r0, 0x2C0(r31)
  bl        -0x1AFDDC

.loc_0x164:
  mr        r3, r31
  li        r4, 0
  bl        -0x1A0A30
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x188
  li        r0, 0x9
  mr        r3, r31
  stw       r0, 0x2C0(r31)
  bl        -0x1AFE00

.loc_0x188:
  mr        r3, r31
  bl        0x24AC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1AC
  li        r0, 0xA
  mr        r3, r31
  stw       r0, 0x2C0(r31)
  bl        -0x1AFE20
  b         .loc_0x1E8

.loc_0x1AC:
  lwz       r3, -0x6C18(r13)
  cmplwi    r3, 0
  beq-      .loc_0x1E8
  lwz       r0, 0x44(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x1E8
  lfs       f1, 0x200(r31)
  lfs       f0, -0x20E8(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x1E8
  li        r0, 0xA
  mr        r3, r31
  stw       r0, 0x2C0(r31)
  bl        -0x1AFE60

.loc_0x1E8:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x31C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x238
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x238
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r6, 0
  lwz       r5, 0x2C0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x238:
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  psq_l     f29,0x38(r1),0,0
  lfd       f29, 0x30(r1)
  psq_l     f28,0x28(r1),0,0
  lfd       f28, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r0, 0x64(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	802B518C
 * Size:	000024
 */
void Game::OtakaraBase::StateItemTurn::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  bl        -0x1B3820
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B51B0
 * Size:	00007C
 */
void Game::OtakaraBase::StateItemFlick::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x14(r1)
  li        r0, -0x1
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  stw       r0, 0x2C0(r4)
  stfs      f0, 0x2C4(r4)
  stfs      f0, 0x2CC(r4)
  stfs      f0, 0x1D4(r4)
  stfs      f0, 0x1D8(r4)
  stfs      f0, 0x1DC(r4)
  bl        -0x1B381C
  mr        r3, r31
  li        r4, 0x8
  li        r5, 0
  bl        -0x1B01F4
  li        r0, 0x1
  mr        r3, r31
  stb       r0, 0x2D0(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x308(r12)
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
 * Address:	802B522C
 * Size:	000254
 */
void Game::OtakaraBase::StateItemFlick::exec( (Game::EnemyBase *))
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
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  mr        r30, r3
  lwz       r3, 0xC0(r4)
  lfs       f1, 0x2C4(r4)
  mr        r31, r4
  lfs       f0, 0x86C(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x48
  mr        r3, r31
  bl        -0x1AFFD0

.loc_0x48:
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x2C4(r31)
  lfs       f0, 0x54(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x2C4(r31)
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x22C
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x2
  bne-      .loc_0xA4
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f4, -0x20E4(r2)
  li        r4, 0
  lfs       f1, 0x53C(r5)
  lfs       f2, 0x4C4(r5)
  lfs       f3, 0x4EC(r5)
  bl        -0x1A21A4
  lfs       f0, -0x20E8(r2)
  stfs      f0, 0x20C(r31)
  b         .loc_0x22C

.loc_0xA4:
  cmplwi    r0, 0x3
  bne-      .loc_0xE8
  lfs       f0, -0x20E8(r2)
  li        r0, 0
  mr        r3, r31
  stfs      f0, 0x2C8(r31)
  stb       r0, 0x2D0(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x310(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x22C

.loc_0xE8:
  cmplwi    r0, 0x3E8
  bne-      .loc_0x22C
  mr        r3, r31
  bl        0x2234
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x124
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0xA
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x22C

.loc_0x124:
  mr        r3, r31
  li        r4, 0x1
  bl        0x18C8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x20C
  mr        r4, r31
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r31)
  lfs       f31, 0x2D4(r31)
  lwz       r12, 0x8(r12)
  lfs       f30, 0x2DC(r31)
  mtctr     r12
  bctrl     
  lfs       f4, 0x14(r1)
  lis       r3, 0x8051
  lfs       f0, 0x1C(r1)
  subi      r3, r3, 0x2E20
  lfs       f3, 0x18(r1)
  fsubs     f1, f31, f4
  fsubs     f2, f30, f0
  stfs      f4, 0x8(r1)
  stfs      f3, 0xC(r1)
  stfs      f0, 0x10(r1)
  bl        -0x2802A4
  bl        0x15C820
  lwz       r12, 0x0(r31)
  fmr       f31, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f31
  bl        0x15C828
  fabs      f1, f1
  lfs       f0, -0x20E0(r2)
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x1E8
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x7
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x22C

.loc_0x1E8:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x8
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x22C

.loc_0x20C:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x6
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x22C:
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r0, 0x54(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802B5480
 * Size:	000024
 */
void Game::OtakaraBase::StateItemFlick::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  bl        -0x1B3B14
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B54A4
 * Size:	00005C
 */
void Game::OtakaraBase::StateItemDrop::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x14(r1)
  li        r0, -0x1
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  stw       r0, 0x2C0(r4)
  stfs      f0, 0x2CC(r4)
  stfs      f0, 0x1D4(r4)
  stfs      f0, 0x1D8(r4)
  stfs      f0, 0x1DC(r4)
  bl        -0x1B3B0C
  mr        r3, r31
  li        r4, 0x9
  li        r5, 0
  bl        -0x1B04E4
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B5500
 * Size:	0001F8
 */
void Game::OtakaraBase::StateItemDrop::exec( (Game::EnemyBase *))
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
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  lwz       r5, 0x188(r4)
  mr        r30, r3
  mr        r31, r4
  lbz       r0, 0x24(r5)
  cmplwi    r0, 0
  beq-      .loc_0x1D0
  lwz       r0, 0x1C(r5)
  cmplwi    r0, 0x2
  bne-      .loc_0x58
  mr        r3, r31
  li        r4, 0x1
  bl        0x1F0C
  b         .loc_0x1D0

.loc_0x58:
  cmplwi    r0, 0x3E8
  bne-      .loc_0x1D0
  lfs       f1, 0x200(r31)
  lfs       f0, -0x20E8(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x90
  lwz       r12, 0x0(r3)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1D0

.loc_0x90:
  mr        r3, r31
  li        r4, 0
  bl        -0x1A0F40
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC8
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1D0

.loc_0xC8:
  mr        r3, r31
  li        r4, 0
  bl        0x1650
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1B0
  mr        r4, r31
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r31)
  lfs       f31, 0x2D4(r31)
  lwz       r12, 0x8(r12)
  lfs       f30, 0x2DC(r31)
  mtctr     r12
  bctrl     
  lfs       f4, 0x14(r1)
  lis       r3, 0x8051
  lfs       f0, 0x1C(r1)
  subi      r3, r3, 0x2E20
  lfs       f3, 0x18(r1)
  fsubs     f1, f31, f4
  fsubs     f2, f30, f0
  stfs      f4, 0x8(r1)
  stfs      f3, 0xC(r1)
  stfs      f0, 0x10(r1)
  bl        -0x28051C
  bl        0x15C5A8
  lwz       r12, 0x0(r31)
  fmr       f31, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f31
  bl        0x15C5B0
  fabs      f1, f1
  lfs       f0, -0x20E0(r2)
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x18C
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x3
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1D0

.loc_0x18C:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1D0

.loc_0x1B0:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x1D0:
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r0, 0x54(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802B56F8
 * Size:	00002C
 */
void Game::OtakaraBase::StateItemDrop::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x20E8(r2)
  mr        r3, r4
  stw       r0, 0x14(r1)
  stfs      f0, 0x2E8(r4)
  bl        -0x1B3D94
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B5724
 * Size:	000048
 */
void Game::OtakaraBase::StateBombWait::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x20E8(r2)
  mr        r3, r4
  stw       r0, 0x14(r1)
  li        r0, -0x1
  li        r5, 0
  stw       r0, 0x2C0(r4)
  li        r4, 0x5
  stfs      f0, 0x2E8(r3)
  stfs      f0, 0x1D4(r3)
  stfs      f0, 0x1D8(r3)
  stfs      f0, 0x1DC(r3)
  bl        -0x1B0754
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B576C
 * Size:	0001C0
 */
void Game::OtakaraBase::StateBombWait::exec( (Game::EnemyBase *))
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
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  lwz       r0, 0x230(r4)
  mr        r30, r3
  mr        r31, r4
  cmplwi    r0, 0
  bne-      .loc_0x48
  mr        r3, r31
  li        r4, 0
  bl        -0x17A6BC
  b         .loc_0x198

.loc_0x48:
  mr        r3, r31
  bl        0x227C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x60
  mr        r3, r31
  bl        -0x1B0528

.loc_0x60:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x198
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x198
  mr        r3, r31
  bl        0x233C
  cmplwi    r3, 0
  beq-      .loc_0x178
  mr        r4, r3
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r31)
  lfs       f31, 0x20(r1)
  lwz       r12, 0x8(r12)
  lfs       f30, 0x28(r1)
  mtctr     r12
  bctrl     
  lfs       f4, 0x14(r1)
  lis       r3, 0x8051
  lfs       f0, 0x1C(r1)
  subi      r3, r3, 0x2E20
  lfs       f3, 0x18(r1)
  fsubs     f1, f31, f4
  fsubs     f2, f30, f0
  stfs      f4, 0x8(r1)
  stfs      f3, 0xC(r1)
  stfs      f0, 0x10(r1)
  bl        -0x280750
  bl        0x15C374
  lwz       r12, 0x0(r31)
  fmr       f31, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f31
  bl        0x15C37C
  fabs      f1, f1
  lfs       f0, -0x20E0(r2)
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x154
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0xC
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x198

.loc_0x154:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0xD
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x198

.loc_0x178:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0xB
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x198:
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  lwz       r31, 0x3C(r1)
  lwz       r0, 0x64(r1)
  lwz       r30, 0x38(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	802B592C
 * Size:	000004
 */
void Game::OtakaraBase::StateBombWait::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802B5930
 * Size:	000048
 */
void Game::OtakaraBase::StateBombMove::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, -0x1
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  stw       r0, 0x2C0(r4)
  bl        -0x1B3F84
  mr        r3, r31
  li        r4, 0x6
  li        r5, 0
  bl        -0x1B095C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B5978
 * Size:	0001E8
 */
void Game::OtakaraBase::StateBombMove::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stfd      f31, 0x40(r1)
  psq_st    f31,0x48(r1),0,0
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  lwz       r0, 0x230(r4)
  mr        r30, r3
  mr        r31, r4
  cmplwi    r0, 0
  bne-      .loc_0x40
  mr        r3, r31
  li        r4, 0
  bl        -0x17A8C0
  b         .loc_0x1C8

.loc_0x40:
  mr        r3, r31
  bl        0x20E0
  mr        r3, r31
  bl        0x2164
  cmplwi    r3, 0
  beq-      .loc_0x158
  mr        r4, r3
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x20(r1)
  mr        r4, r31
  lfs       f1, 0x24(r1)
  addi      r3, r1, 0x14
  lfs       f0, 0x28(r1)
  stfs      f2, 0x2C(r1)
  stfs      f1, 0x30(r1)
  stfs      f0, 0x34(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f5, 0x14(r1)
  lis       r3, 0x8051
  lfs       f3, 0x1C(r1)
  subi      r3, r3, 0x2E20
  lfs       f1, 0x2C(r1)
  lfs       f0, 0x34(r1)
  lfs       f4, 0x18(r1)
  fsubs     f1, f1, f5
  fsubs     f2, f0, f3
  stfs      f5, 0x8(r1)
  stfs      f4, 0xC(r1)
  stfs      f3, 0x10(r1)
  bl        -0x280940
  bl        0x15C184
  lwz       r12, 0x0(r31)
  fmr       f31, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f31
  bl        0x15C18C
  fabs      f1, f1
  lfs       f0, -0x20E0(r2)
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x134
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  addi      r4, r1, 0x2C
  lfs       f1, 0x2E4(r5)
  lfs       f2, 0x30C(r5)
  lfs       f3, 0x334(r5)
  bl        -0x1A04C8
  b         .loc_0x178

.loc_0x134:
  li        r0, 0xD
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x2C0(r31)
  mr        r3, r31
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x1B0828
  b         .loc_0x178

.loc_0x158:
  li        r0, 0xB
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x2C0(r31)
  mr        r3, r31
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x1B084C

.loc_0x178:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x31C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x1C8
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x1C8
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r6, 0
  lwz       r5, 0x2C0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x1C8:
  psq_l     f31,0x48(r1),0,0
  lwz       r0, 0x54(r1)
  lfd       f31, 0x40(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802B5B60
 * Size:	000024
 */
void Game::OtakaraBase::StateBombMove::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  bl        -0x1B41F4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B5B84
 * Size:	000058
 */
void Game::OtakaraBase::StateBombTurn::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x20E8(r2)
  stw       r0, 0x14(r1)
  li        r0, -0x1
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  stw       r0, 0x2C0(r4)
  stfs      f0, 0x1D4(r4)
  stfs      f0, 0x1D8(r4)
  stfs      f0, 0x1DC(r4)
  bl        -0x1B41E8
  mr        r3, r31
  li        r4, 0x7
  li        r5, 0
  bl        -0x1B0BC0
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B5BDC
 * Size:	000224
 */
void Game::OtakaraBase::StateBombTurn::exec( (Game::EnemyBase *))
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
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  lwz       r0, 0x230(r4)
  mr        r30, r3
  mr        r31, r4
  cmplwi    r0, 0
  bne-      .loc_0x58
  mr        r3, r31
  li        r4, 0
  bl        -0x17AB3C
  b         .loc_0x1EC

.loc_0x58:
  mr        r3, r31
  bl        0x1E64
  mr        r3, r31
  bl        0x1EE8
  cmplwi    r3, 0
  beq-      .loc_0x18C
  mr        r4, r3
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x8
  lfs       f31, 0x14(r1)
  lwz       r12, 0x8(r12)
  lfs       f28, 0x1C(r1)
  lfs       f29, 0x334(r5)
  lfs       f30, 0x30C(r5)
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r1)
  lis       r3, 0x8051
  lfs       f0, 0x10(r1)
  subi      r3, r3, 0x2E20
  fsubs     f1, f31, f1
  fsubs     f2, f28, f0
  bl        -0x280BA0
  bl        0x15BF24
  lwz       r12, 0x0(r31)
  fmr       f31, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f31
  bl        0x15BF2C
  fmr       f31, f1
  lfs       f0, -0x20D8(r2)
  lfs       f1, -0x20DC(r2)
  fmuls     f0, f0, f29
  fmuls     f29, f31, f30
  fmuls     f1, f1, f0
  fabs      f0, f29
  frsp      f0, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x138
  lfs       f0, -0x20E8(r2)
  fcmpo     cr0, f29, f0
  ble-      .loc_0x134
  fmr       f29, f1
  b         .loc_0x138

.loc_0x134:
  fneg      f29, f1

.loc_0x138:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f29, f1
  bl        0x15BEA4
  fabs      f3, f31
  stfs      f1, 0x1FC(r31)
  lfs       f0, -0x20E0(r2)
  lfs       f2, 0x1FC(r31)
  frsp      f1, f3
  stfs      f2, 0x1A8(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x19C
  li        r0, 0xC
  mr        r3, r31
  stw       r0, 0x2C0(r31)
  bl        -0x1B0AC0
  b         .loc_0x19C

.loc_0x18C:
  li        r0, 0xB
  mr        r3, r31
  stw       r0, 0x2C0(r31)
  bl        -0x1B0AD4

.loc_0x19C:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x31C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x1EC
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x1EC
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r6, 0
  lwz       r5, 0x2C0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x1EC:
  psq_l     f31,0x68(r1),0,0
  lfd       f31, 0x60(r1)
  psq_l     f30,0x58(r1),0,0
  lfd       f30, 0x50(r1)
  psq_l     f29,0x48(r1),0,0
  lfd       f29, 0x40(r1)
  psq_l     f28,0x38(r1),0,0
  lfd       f28, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r0, 0x74(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	802B5E00
 * Size:	000024
 */
void Game::OtakaraBase::StateBombTurn::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  bl        -0x1B4494
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
