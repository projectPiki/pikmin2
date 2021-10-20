

/*
 * --INFO--
 * Address:	801D8ABC
 * Size:	000294
 */
void Game::ItemPikihead::FSM::init(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x7
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x2A40
  li        r3, 0x18
  bl        -0x1B4C38
  mr.       r4, r3
  beq-      .loc_0x68
  lis       r3, 0x804C
  lis       r6, 0x804C
  subi      r0, r3, 0x7040
  lis       r5, 0x804C
  stw       r0, 0x0(r4)
  li        r7, 0
  lis       r3, 0x804C
  subi      r6, r6, 0x7074
  stw       r7, 0x4(r4)
  subi      r5, r5, 0x70A8
  subi      r0, r3, 0x70DC
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0x0(r4)
  stw       r0, 0x0(r4)

.loc_0x68:
  mr        r3, r31
  bl        0x3C58
  li        r3, 0x18
  bl        -0x1B4C8C
  mr.       r4, r3
  beq-      .loc_0xC0
  lis       r3, 0x804C
  lis       r6, 0x804C
  subi      r0, r3, 0x7040
  lis       r5, 0x804C
  stw       r0, 0x0(r4)
  li        r0, 0x1
  lis       r3, 0x804C
  li        r7, 0
  stw       r0, 0x4(r4)
  subi      r6, r6, 0x7074
  subi      r5, r5, 0x70A8
  subi      r0, r3, 0x7110
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0x0(r4)
  stw       r0, 0x0(r4)

.loc_0xC0:
  mr        r3, r31
  bl        0x3C00
  li        r3, 0x14
  bl        -0x1B4CE4
  mr.       r4, r3
  beq-      .loc_0x118
  lis       r3, 0x804C
  lis       r6, 0x804C
  subi      r0, r3, 0x7040
  lis       r5, 0x804C
  stw       r0, 0x0(r4)
  li        r0, 0x2
  lis       r3, 0x804C
  li        r7, 0
  stw       r0, 0x4(r4)
  subi      r6, r6, 0x7074
  subi      r5, r5, 0x70A8
  subi      r0, r3, 0x71AC
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0x0(r4)
  stw       r0, 0x0(r4)

.loc_0x118:
  mr        r3, r31
  bl        0x3BA8
  li        r3, 0x18
  bl        -0x1B4D3C
  mr.       r4, r3
  beq-      .loc_0x170
  lis       r3, 0x804C
  lis       r6, 0x804C
  subi      r0, r3, 0x7040
  lis       r5, 0x804C
  stw       r0, 0x0(r4)
  li        r0, 0x3
  lis       r3, 0x804C
  li        r7, 0
  stw       r0, 0x4(r4)
  subi      r6, r6, 0x7074
  subi      r5, r5, 0x70A8
  subi      r0, r3, 0x7144
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0x0(r4)
  stw       r0, 0x0(r4)

.loc_0x170:
  mr        r3, r31
  bl        0x3B50
  li        r3, 0x10
  bl        -0x1B4D94
  mr.       r4, r3
  beq-      .loc_0x1C8
  lis       r3, 0x804C
  lis       r6, 0x804C
  subi      r0, r3, 0x7040
  lis       r5, 0x804C
  stw       r0, 0x0(r4)
  li        r0, 0x4
  lis       r3, 0x804C
  li        r7, 0
  stw       r0, 0x4(r4)
  subi      r6, r6, 0x7074
  subi      r5, r5, 0x70A8
  subi      r0, r3, 0x7178
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0x0(r4)
  stw       r0, 0x0(r4)

.loc_0x1C8:
  mr        r3, r31
  bl        0x3AF8
  li        r3, 0x10
  bl        -0x1B4DEC
  mr.       r4, r3
  beq-      .loc_0x220
  lis       r3, 0x804C
  lis       r6, 0x804C
  subi      r0, r3, 0x7040
  lis       r5, 0x804C
  stw       r0, 0x0(r4)
  li        r0, 0x5
  lis       r3, 0x804C
  li        r7, 0
  stw       r0, 0x4(r4)
  subi      r6, r6, 0x7074
  subi      r5, r5, 0x70A8
  subi      r0, r3, 0x71E0
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0x0(r4)
  stw       r0, 0x0(r4)

.loc_0x220:
  mr        r3, r31
  bl        0x3AA0
  li        r3, 0x18
  bl        -0x1B4E44
  mr.       r4, r3
  beq-      .loc_0x278
  lis       r3, 0x804C
  lis       r6, 0x804C
  subi      r0, r3, 0x7040
  lis       r5, 0x804C
  stw       r0, 0x0(r4)
  li        r0, 0x6
  lis       r3, 0x804C
  li        r7, 0
  stw       r0, 0x4(r4)
  subi      r6, r6, 0x7074
  subi      r5, r5, 0x70A8
  subi      r0, r3, 0x7214
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0x0(r4)
  stw       r0, 0x0(r4)

.loc_0x278:
  mr        r3, r31
  bl        0x3A48
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801D8D50
 * Size:	000098
 */
void Game::ItemPikihead::FallState::init(Game::ItemPikihead::Item *, Game::StateArg *)
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
  bl        -0x10F7CC
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lfd       f1, -0x4BA0(r2)
  stw       r0, 0x8(r1)
  lfs       f3, -0x4BB0(r2)
  lfd       f0, 0x8(r1)
  lfs       f2, -0x4BA8(r2)
  fsubs     f4, f0, f1
  lfs       f0, -0x4BAC(r2)
  lfs       f1, -0x4BA4(r2)
  fdivs     f3, f4, f3
  fnmsubs   f0, f2, f3, f0
  stfs      f0, 0x14(r30)
  lfs       f0, 0x14(r30)
  fmuls     f0, f1, f0
  stfs      f0, 0x10(r30)
  lwz       r3, 0x1E0(r31)
  lwz       r4, 0x4(r3)
  bl        0x1E00C4
  addi      r3, r31, 0x1A8
  li        r4, 0x4
  li        r5, 0
  bl        0x24FEBC
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
 * Address:	801D8DE8
 * Size:	000038
 */
void Game::ItemPikihead::FallState::exec(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  stw       r0, 0x14(r1)
  lwz       r5, -0x6514(r13)
  lfs       f2, 0x10(r3)
  mr        r3, r4
  lfs       f1, 0x54(r5)
  lfs       f3, 0x14(r6)
  bl        -0x9D668
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801D8E20
 * Size:	000024
 */
void Game::ItemPikihead::FallState::cleanup(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x1E0(r4)
  bl        0x1E00B0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801D8E44
 * Size:	000028
 */
void Game::ItemPikihead::FallState::onPlatCollision(Game::ItemPikihead::Item *, Game::PlatEvent &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  li        r4, 0
  stw       r0, 0x14(r1)
  bl        -0x9DD68
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801D8E6C
 * Size:	0002F0
 */
void Game::ItemPikihead::FallState::onBounce(Game::ItemPikihead::Item *, Sys::Triangle *)
{
/*
.loc_0x0:
  stwu      r1, -0x100(r1)
  mflr      r0
  stw       r0, 0x104(r1)
  stw       r31, 0xFC(r1)
  mr        r31, r4
  stw       r30, 0xF8(r1)
  mr        r30, r3
  mr        r3, r31
  stw       r29, 0xF4(r1)
  mr        r29, r5
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2D4
  mr        r4, r31
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x20(r1)
  cmplwi    r29, 0
  lfs       f1, 0x24(r1)
  lfs       f0, 0x28(r1)
  stfs      f2, 0x5C(r1)
  stfs      f1, 0x60(r1)
  stfs      f0, 0x64(r1)
  beq-      .loc_0x98
  addi      r3, r29, 0x5C
  bl        0x243564
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x98
  mr        r3, r31
  li        r4, 0
  bl        -0x9DE0C
  b         .loc_0x2D4

.loc_0x98:
  lfs       f3, 0x5C(r1)
  addi      r3, r1, 0x7C
  lfs       f2, 0x60(r1)
  addi      r4, r1, 0x4C
  lfs       f1, 0x64(r1)
  lfs       f0, -0x4B98(r2)
  stfs      f3, 0x4C(r1)
  stfs      f2, 0x50(r1)
  stfs      f1, 0x54(r1)
  stfs      f0, 0x58(r1)
  bl        0x55474
  addi      r3, r1, 0x9C
  addi      r4, r1, 0x7C
  bl        0x554A8
  addi      r3, r1, 0x9C
  bl        0x5551C
  b         .loc_0x194

.loc_0xDC:
  addi      r3, r1, 0x9C
  bl        0x555F8
  lhz       r0, 0x128(r3)
  cmplwi    r0, 0x40A
  beq-      .loc_0x100
  cmplwi    r0, 0x40C
  beq-      .loc_0x100
  cmplwi    r0, 0x405
  bne-      .loc_0x18C

.loc_0x100:
  mr        r4, r3
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x18(r1)
  lfs       f0, 0x60(r1)
  lfs       f3, 0x14(r1)
  fsubs     f4, f1, f0
  lfs       f2, 0x5C(r1)
  lfs       f1, 0x1C(r1)
  lfs       f0, 0x64(r1)
  fsubs     f3, f3, f2
  fmuls     f4, f4, f4
  fsubs     f2, f1, f0
  lfs       f0, -0x4B94(r2)
  fmadds    f1, f3, f3, f4
  fmuls     f2, f2, f2
  fadds     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x168
  ble-      .loc_0x16C
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x16C

.loc_0x168:
  fmr       f1, f0

.loc_0x16C:
  lfs       f0, -0x4B98(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x18C
  mr        r3, r31
  li        r4, 0
  bl        -0x9DF00
  b         .loc_0x2D4

.loc_0x18C:
  addi      r3, r1, 0x9C
  bl        0x55504

.loc_0x194:
  addi      r3, r1, 0x9C
  bl        0x55530
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0xDC
  lfs       f3, 0x5C(r1)
  mr        r3, r31
  lfs       f2, 0x60(r1)
  addi      r5, r1, 0x3C
  lfs       f1, 0x64(r1)
  li        r4, 0
  lfs       f0, -0x4BAC(r2)
  stfs      f3, 0x3C(r1)
  stfs      f2, 0x40(r1)
  stfs      f1, 0x44(r1)
  stfs      f0, 0x48(r1)
  bl        -0x9D500
  cmplwi    r3, 0
  beq-      .loc_0x294
  lwz       r3, 0x5C(r1)
  lis       r5, 0x804B
  lwz       r4, 0x60(r1)
  subi      r10, r5, 0x5808
  lwz       r0, 0x64(r1)
  lis       r6, 0x804E
  stw       r3, 0x8(r1)
  lis       r3, 0x804B
  subi      r5, r3, 0x5814
  lfs       f0, -0x4B90(r2)
  li        r7, 0
  stw       r4, 0xC(r1)
  lfs       f3, 0x8(r1)
  lis       r4, 0x804F
  stw       r0, 0x10(r1)
  lis       r3, 0x804B
  lfs       f2, 0xC(r1)
  li        r9, 0x159
  lfs       f1, 0x10(r1)
  li        r8, 0x15A
  stw       r10, 0x2C(r1)
  addi      r10, r6, 0x6A64
  subi      r6, r4, 0x7A18
  subi      r0, r3, 0x5D24
  stw       r10, 0x2C(r1)
  addi      r3, r1, 0x2C
  addi      r4, r1, 0x68
  stw       r5, 0x68(r1)
  sth       r9, 0x30(r1)
  sth       r8, 0x32(r1)
  stw       r7, 0x34(r1)
  stw       r7, 0x38(r1)
  stw       r6, 0x2C(r1)
  stfs      f3, 0x6C(r1)
  stfs      f2, 0x70(r1)
  stfs      f1, 0x74(r1)
  stw       r0, 0x68(r1)
  stfs      f0, 0x78(r1)
  bl        0x1EF7F8
  mr        r3, r31
  li        r4, 0x380B
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2B4

.loc_0x294:
  addi      r3, r1, 0x5C
  bl        0x1DE6A8
  mr        r3, r31
  li        r4, 0x2817
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     

.loc_0x2B4:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x2D4:
  lwz       r0, 0x104(r1)
  lwz       r31, 0xFC(r1)
  lwz       r30, 0xF8(r1)
  lwz       r29, 0xF4(r1)
  mtlr      r0
  addi      r1, r1, 0x100
  blr
*/
}


/*
 * --INFO--
 * Address:	801D915C
 * Size:	000030
 */
void Game::FSMState<Game::ItemPikihead::Item>::transit(Game::ItemPikihead::Item *, int, Game::StateArg *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x8(r3)
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
 * Address:	801D918C
 * Size:	00008C
 */
void Game::ItemPikihead::BuryState::init(Game::ItemPikihead::Item *, Game::StateArg *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  cmplwi    r4, 0
  mr        r5, r4
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  beq-      .loc_0x24
  addi      r5, r5, 0x178

.loc_0x24:
  addi      r3, r4, 0x1A8
  li        r4, 0x3
  bl        0x24FAD0
  li        r0, 0
  stb       r0, 0x10(r31)
  bl        -0x10FC24
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lwz       r3, -0x6D0C(r13)
  stw       r0, 0x8(r1)
  lfd       f1, -0x4BA0(r2)
  lfd       f0, 0x8(r1)
  lfs       f2, -0x4BB0(r2)
  fsubs     f3, f0, f1
  lwz       r3, 0x6C(r3)
  lfs       f1, -0x4B8C(r2)
  lfs       f0, 0xBD8(r3)
  fdivs     f2, f3, f2
  fmadds    f0, f1, f2, f0
  stfs      f0, 0x14(r31)
  lwz       r31, 0x1C(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}


/*
 * --INFO--
 * Address:	801D9218
 * Size:	000068
 */
void Game::ItemPikihead::BuryState::exec(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r0, 0x10(r3)
  cmplwi    r0, 0
  beq-      .loc_0x58
  lwz       r5, -0x6514(r13)
  lfs       f2, 0x14(r3)
  lfs       f1, 0x54(r5)
  lfs       f0, -0x4B94(r2)
  fsubs     f1, f2, f1
  stfs      f1, 0x14(r3)
  lfs       f1, 0x14(r3)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x58
  lwz       r12, 0x0(r3)
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x58:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801D9280
 * Size:	000004
 */
void Game::ItemPikihead::BuryState::cleanup(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801D9284
 * Size:	00000C
 */
void Game::ItemPikihead::BuryState::onKeyEvent(Game::ItemPikihead::Item *, const SysShape::KeyEvent &)
{
/*
.loc_0x0:
  li        r0, 0x1
  stb       r0, 0x10(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	801D9290
 * Size:	00008C
 */
void Game::ItemPikihead::TaneState::init(Game::ItemPikihead::Item *, Game::StateArg *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  cmplwi    r4, 0
  mr        r5, r4
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  beq-      .loc_0x24
  addi      r5, r5, 0x178

.loc_0x24:
  addi      r3, r4, 0x1A8
  li        r4, 0x5
  bl        0x24F9CC
  li        r0, 0
  stb       r0, 0x10(r31)
  bl        -0x10FD28
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lwz       r3, -0x6D0C(r13)
  stw       r0, 0x8(r1)
  lfd       f1, -0x4BA0(r2)
  lfd       f0, 0x8(r1)
  lfs       f2, -0x4BB0(r2)
  fsubs     f3, f0, f1
  lwz       r3, 0x6C(r3)
  lfs       f1, -0x4B8C(r2)
  lfs       f0, 0xC00(r3)
  fdivs     f2, f3, f2
  fmadds    f0, f1, f2, f0
  stfs      f0, 0x14(r31)
  lwz       r31, 0x1C(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}


/*
 * --INFO--
 * Address:	801D931C
 * Size:	000068
 */
void Game::ItemPikihead::TaneState::exec(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r0, 0x10(r3)
  cmplwi    r0, 0
  beq-      .loc_0x58
  lwz       r5, -0x6514(r13)
  lfs       f2, 0x14(r3)
  lfs       f1, 0x54(r5)
  lfs       f0, -0x4B94(r2)
  fsubs     f1, f2, f1
  stfs      f1, 0x14(r3)
  lfs       f1, 0x14(r3)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x58
  lwz       r12, 0x0(r3)
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x58:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801D9384
 * Size:	000004
 */
void Game::ItemPikihead::TaneState::cleanup(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801D9388
 * Size:	00000C
 */
void Game::ItemPikihead::TaneState::onKeyEvent(Game::ItemPikihead::Item *, const SysShape::KeyEvent &)
{
/*
.loc_0x0:
  li        r0, 0x1
  stb       r0, 0x10(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	801D9394
 * Size:	000058
 */
void Game::ItemPikihead::HatugaState::init(Game::ItemPikihead::Item *, Game::StateArg *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  mr        r5, r31
  beq-      .loc_0x20
  addi      r5, r5, 0x178

.loc_0x20:
  addi      r3, r31, 0x1A8
  li        r4, 0x1
  bl        0x24F8CC
  mr        r3, r31
  li        r4, 0x2818
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C0(r12)
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
 * Address:	801D93EC
 * Size:	000004
 */
void Game::ItemPikihead::HatugaState::exec(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801D93F0
 * Size:	000004
 */
void Game::ItemPikihead::HatugaState::cleanup(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801D93F4
 * Size:	000034
 */
void Game::ItemPikihead::HatugaState::onKeyEvent(Game::ItemPikihead::Item *, const SysShape::KeyEvent &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0x2
  li        r6, 0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
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
 * Address:	801D9428
 * Size:	0000EC
 */
void Game::ItemPikihead::WaitState::init(Game::ItemPikihead::Item *, Game::StateArg *)
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
  lwz       r3, 0x1E0(r4)
  lwz       r4, 0x4(r3)
  bl        0x1DFAB8
  cmplwi    r31, 0
  mr        r5, r31
  beq-      .loc_0x38
  addi      r5, r31, 0x178

.loc_0x38:
  addi      r3, r31, 0x1A8
  li        r4, 0
  bl        0x24F820
  lhz       r0, 0x1F6(r31)
  cmplwi    r0, 0x2
  bne-      .loc_0x94
  bl        -0x10FED8
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lwz       r3, -0x6D0C(r13)
  stw       r0, 0x8(r1)
  lfd       f1, -0x4BA0(r2)
  lfd       f0, 0x8(r1)
  lfs       f2, -0x4BB0(r2)
  fsubs     f3, f0, f1
  lwz       r3, 0x6C(r3)
  lfs       f1, -0x4B8C(r2)
  lfs       f0, 0xC50(r3)
  fdivs     f2, f3, f2
  fmadds    f0, f1, f2, f0
  stfs      f0, 0x10(r30)
  b         .loc_0xD4

.loc_0x94:
  bl        -0x10FF1C
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lwz       r3, -0x6D0C(r13)
  stw       r0, 0x8(r1)
  lfd       f1, -0x4BA0(r2)
  lfd       f0, 0x8(r1)
  lfs       f2, -0x4BB0(r2)
  fsubs     f3, f0, f1
  lwz       r3, 0x6C(r3)
  lfs       f1, -0x4B8C(r2)
  lfs       f0, 0xC28(r3)
  fdivs     f2, f3, f2
  fmadds    f0, f1, f2, f0
  stfs      f0, 0x10(r30)

.loc_0xD4:
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
 * Address:	801D9514
 * Size:	00009C
 */
void Game::ItemPikihead::WaitState::exec(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r5, -0x64AC(r13)
  cmplwi    r5, 0
  beq-      .loc_0x24
  lwz       r0, 0x18(r5)
  cmpwi     r0, 0
  bne-      .loc_0x38

.loc_0x24:
  lwz       r5, -0x6514(r13)
  lfs       f1, 0x10(r3)
  lfs       f0, 0x54(r5)
  fsubs     f0, f1, f0
  stfs      f0, 0x10(r3)

.loc_0x38:
  lfs       f1, 0x10(r3)
  lfs       f0, -0x4B94(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x8C
  lhz       r0, 0x1F6(r4)
  cmplwi    r0, 0x2
  bne-      .loc_0x74
  lwz       r12, 0x0(r3)
  li        r5, 0x6
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x8C

.loc_0x74:
  lwz       r12, 0x0(r3)
  li        r5, 0x5
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x8C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801D95B0
 * Size:	000024
 */
void Game::ItemPikihead::WaitState::cleanup(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x1E0(r4)
  bl        0x1DF9A8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801D95D4
 * Size:	000038
 */
void Game::ItemPikihead::WaitState::onKeyEvent(Game::ItemPikihead::Item *, const SysShape::KeyEvent &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  mr        r5, r4
  stw       r0, 0x14(r1)
  beq-      .loc_0x1C
  addi      r5, r5, 0x178

.loc_0x1C:
  addi      r3, r4, 0x1A8
  li        r4, 0
  bl        0x24F690
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801D960C
 * Size:	00004C
 */
void Game::ItemPikihead::GrowState::init(Game::ItemPikihead::Item *, Game::StateArg *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  mr        r5, r31
  beq-      .loc_0x20
  addi      r5, r5, 0x178

.loc_0x20:
  addi      r3, r31, 0x1A8
  li        r4, 0x6
  bl        0x24F654
  lwz       r3, 0x1E0(r31)
  lwz       r4, 0x4(r3)
  bl        0x1DF94C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801D9658
 * Size:	000004
 */
void Game::ItemPikihead::GrowState::exec(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801D965C
 * Size:	000004
 */
void Game::ItemPikihead::GrowState::cleanup(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801D9660
 * Size:	0000CC
 */
void Game::ItemPikihead::GrowState::onKeyEvent(Game::ItemPikihead::Item *, const SysShape::KeyEvent &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x1C(r5)
  stw       r31, 0xC(r1)
  mr        r31, r4
  cmplwi    r0, 0x2
  bne-      .loc_0xA0
  lhz       r4, 0x1F6(r31)
  lis       r3, 0x5555
  addi      r0, r3, 0x5556
  addi      r4, r4, 0x1
  mulhw     r3, r0, r4
  rlwinm    r0,r3,1,31,31
  add       r0, r3, r0
  mulli     r0, r0, 0x3
  sub       r0, r4, r0
  sth       r0, 0x1F6(r31)
  lwz       r3, 0x1E0(r31)
  lwz       r3, 0x4(r3)
  bl        0x1DE51C
  lhz       r0, 0x1F6(r31)
  cmplwi    r0, 0x1
  bne-      .loc_0x7C
  mr        r3, r31
  li        r4, 0x281A
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xB8

.loc_0x7C:
  cmplwi    r0, 0x2
  bne-      .loc_0xB8
  mr        r3, r31
  li        r4, 0x281B
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xB8

.loc_0xA0:
  lwz       r12, 0x0(r3)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xB8:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801D972C
 * Size:	0000AC
 */
void Game::ItemPikihead::SioreState::init(Game::ItemPikihead::Item *, Game::StateArg *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr.       r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r3
  mr        r5, r31
  beq-      .loc_0x28
  addi      r5, r5, 0x178

.loc_0x28:
  addi      r3, r31, 0x1A8
  li        r4, 0x2
  bl        0x24F52C
  li        r0, 0
  stb       r0, 0x14(r30)
  bl        -0x1101C8
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  mr        r3, r31
  lwz       r5, -0x6D0C(r13)
  li        r4, 0x281C
  stw       r0, 0x8(r1)
  lfd       f1, -0x4BA0(r2)
  lfd       f0, 0x8(r1)
  lfs       f2, -0x4BB0(r2)
  fsubs     f3, f0, f1
  lwz       r5, 0x6C(r5)
  lfs       f1, -0x4B8C(r2)
  lfs       f0, 0xC78(r5)
  fdivs     f2, f3, f2
  fmadds    f0, f1, f2, f0
  stfs      f0, 0x10(r30)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
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
 * Address:	801D97D8
 * Size:	000068
 */
void Game::ItemPikihead::SioreState::exec(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r0, 0x14(r3)
  cmplwi    r0, 0
  beq-      .loc_0x58
  lwz       r5, -0x6514(r13)
  lfs       f2, 0x10(r3)
  lfs       f1, 0x54(r5)
  lfs       f0, -0x4B94(r2)
  fsubs     f1, f2, f1
  stfs      f1, 0x10(r3)
  lfs       f1, 0x10(r3)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x58
  lwz       r12, 0x0(r3)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x58:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801D9840
 * Size:	000004
 */
void Game::ItemPikihead::SioreState::cleanup(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801D9844
 * Size:	000014
 */
void Game::ItemPikihead::SioreState::onKeyEvent(Game::ItemPikihead::Item *, const SysShape::KeyEvent &)
{
/*
.loc_0x0:
  li        r5, 0
  li        r0, 0x1
  sth       r5, 0x1F6(r4)
  stb       r0, 0x14(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	801D9858
 * Size:	0001D0
 */
void Game::ItemPikihead::Item::Item()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r4, 0x407
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  stw       r29, 0x14(r1)
  bl        -0xD890
  lis       r3, 0x804C
  li        r0, 0
  subi      r4, r3, 0x7438
  li        r3, 0x1C
  stw       r4, 0x0(r30)
  addi      r4, r4, 0x1B0
  stw       r4, 0x178(r30)
  stw       r0, 0x1D8(r30)
  stw       r0, 0x1DC(r30)
  bl        -0x1B59FC
  cmplwi    r3, 0
  beq-      .loc_0x80
  lis       r4, 0x804C
  lis       r5, 0x804C
  subi      r0, r4, 0x7450
  lis       r4, 0x804C
  stw       r0, 0x0(r3)
  li        r6, -0x1
  subi      r5, r5, 0x7468
  subi      r0, r4, 0x7020
  stw       r6, 0x18(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0x0(r3)

.loc_0x80:
  stw       r3, 0x1D8(r30)
  mr        r4, r30
  lwz       r3, 0x1D8(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x804C
  li        r3, 0x64
  subi      r4, r4, 0x76D8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x1B0
  stw       r0, 0x178(r30)
  bl        -0x1B5A68
  mr.       r31, r3
  beq-      .loc_0x18C
  li        r0, -0x1
  lis       r5, 0x804B
  stw       r0, 0x0(r31)
  li        r29, 0
  lis       r7, 0x804A
  lis       r3, 0x804E
  stw       r29, 0x4(r31)
  addi      r6, r3, 0x698C
  subi      r0, r7, 0x1D84
  lis       r3, 0x804E
  stw       r29, 0x8(r31)
  addi      r11, r3, 0x6940
  lis       r3, 0x804C
  lis       r4, 0x8014
  stw       r29, 0xC(r31)
  subi      r8, r3, 0x74B4
  subi      r9, r5, 0x5808
  lis       r3, 0x8014
  stw       r29, 0x10(r31)
  subi      r5, r3, 0x4
  addi      r7, r6, 0x14
  li        r12, 0x2B2
  stw       r9, 0x14(r31)
  addi      r10, r11, 0x14
  li        r9, 0x15E
  addi      r4, r4, 0x5C
  stw       r0, 0x18(r31)
  addi      r0, r8, 0x14
  addi      r3, r31, 0x28
  stw       r6, 0x14(r31)
  li        r6, 0x1C
  stw       r7, 0x18(r31)
  li        r7, 0x1
  stw       r29, 0x1C(r31)
  sth       r12, 0x20(r31)
  stb       r29, 0x22(r31)
  stw       r11, 0x14(r31)
  stw       r10, 0x18(r31)
  stw       r29, 0x24(r31)
  sth       r9, 0x20(r31)
  stw       r8, 0x14(r31)
  stw       r0, 0x18(r31)
  bl        -0x118184
  lis       r3, 0x8014
  lis       r5, 0x8014
  addi      r4, r3, 0x5C
  li        r6, 0x1C
  addi      r3, r31, 0x44
  subi      r5, r5, 0x4
  li        r7, 0x1
  bl        -0x1181A4

.loc_0x18C:
  stw       r31, 0x1E0(r30)
  addi      r6, r30, 0x1C4
  lfs       f0, -0x4B88(r2)
  li        r5, 0
  li        r7, 0
  stfs      f0, 0x1D4(r30)
  lwz       r3, 0x114(r30)
  lwz       r4, 0x174(r30)
  bl        -0xA5954
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
 * Address:	801D9A28
 * Size:	00009C
 */
void efx::TPkGlow1::~TPkGlow1()
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
  lis       r3, 0x804C
  subi      r3, r3, 0x74B4
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x6940
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x149DF8

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x1B59F0

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
 * Address:	801D9AC4
 * Size:	00021C
 */
void Game::ItemPikihead::Item::onInit(Game::CreatureInitArg *)
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
  mr        r4, r30
  lwz       r3, -0x6B90(r13)
  bl        0x1958
  stw       r3, 0x174(r30)
  addi      r3, r30, 0x1A8
  li        r4, 0
  li        r5, 0
  lwz       r6, -0x6B90(r13)
  lwz       r0, 0x20(r6)
  stw       r0, 0x1B8(r30)
  bl        0x24F180
  lwz       r3, 0x114(r30)
  lwz       r4, 0x174(r30)
  bl        -0xA404C
  mr        r3, r30
  li        r4, 0
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  cmplwi    r31, 0
  beq-      .loc_0xBC
  lwz       r0, 0x4(r31)
  sth       r0, 0x1F4(r30)
  lwz       r0, 0x4(r31)
  cmpwi     r0, -0x1
  bne-      .loc_0x90
  li        r0, 0
  sth       r0, 0x1F4(r30)

.loc_0x90:
  lfs       f0, 0x8(r31)
  stfs      f0, 0x190(r30)
  lfs       f0, 0xC(r31)
  stfs      f0, 0x194(r30)
  lfs       f0, 0x10(r31)
  stfs      f0, 0x198(r30)
  lwz       r0, 0x18(r31)
  sth       r0, 0x1F6(r30)
  lfs       f0, 0x1C(r31)
  stfs      f0, 0x1E4(r30)
  b         .loc_0x10C

.loc_0xBC:
  bl        -0x1105E0
  xoris     r0, r3, 0x8000
  lis       r3, 0x4330
  stw       r0, 0xC(r1)
  li        r0, 0
  lfd       f3, -0x4BA0(r2)
  stw       r3, 0x8(r1)
  lfs       f2, -0x4BB0(r2)
  lfd       f0, 0x8(r1)
  lfs       f1, -0x4B84(r2)
  fsubs     f3, f0, f3
  lfs       f0, -0x4B80(r2)
  fdivs     f2, f3, f2
  fmuls     f1, f1, f2
  fctiwz    f1, f1
  stfd      f1, 0x10(r1)
  lwz       r3, 0x14(r1)
  sth       r3, 0x1F4(r30)
  sth       r0, 0x1F6(r30)
  stfs      f0, 0x1E4(r30)

.loc_0x10C:
  lwz       r3, 0x1E0(r30)
  bl        0x1DF28C
  lhz       r0, 0x1F4(r30)
  lis       r3, 0x8048
  lwz       r7, 0x1E0(r30)
  addi      r4, r3, 0x81C
  addi      r6, r30, 0x19C
  addi      r5, r30, 0x1E8
  stw       r0, 0x0(r7)
  addi      r0, r30, 0x138
  lwz       r3, 0x1E0(r30)
  stw       r6, 0x8(r3)
  lwz       r3, 0x1E0(r30)
  stw       r5, 0x4(r3)
  lwz       r3, 0x1E0(r30)
  stw       r0, 0x10(r3)
  lwz       r3, 0x174(r30)
  bl        0x2653D0
  bl        0x24FC88
  lwz       r4, 0x1E0(r30)
  cmplwi    r31, 0
  stw       r3, 0xC(r4)
  beq-      .loc_0x198
  lbz       r0, 0x14(r31)
  cmplwi    r0, 0
  beq-      .loc_0x198
  lwz       r3, 0x1D8(r30)
  mr        r4, r30
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1B8

.loc_0x198:
  lwz       r3, 0x1D8(r30)
  mr        r4, r30
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x1B8:
  mr        r3, r30
  li        r4, 0x1
  lwz       r12, 0x0(r30)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  cmplwi    r31, 0
  beq-      .loc_0x1F4
  lwz       r0, 0x4(r31)
  cmpwi     r0, -0x1
  beq-      .loc_0x1F4
  lis       r3, 0x8051
  lhz       r4, 0x1F4(r30)
  addi      r3, r3, 0x260C
  bl        -0x8B18

.loc_0x1F4:
  mr        r3, r30
  li        r4, 0x9
  li        r5, 0
  bl        0x448C0
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
 * Address:	801D9CE0
 * Size:	000034
 */
void Game::StateMachine<Game::ItemPikihead::Item>::start(Game::ItemPikihead::Item *, int, Game::StateArg *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r0, 0x1DC(r4)
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
 * Address:	801D9D14
 * Size:	000094
 */
void Game::ItemPikihead::Item::onKill(Game::CreatureKillArg *)
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
  bl        0x448C4
  lwz       r3, 0x1DC(r30)
  cmplwi    r3, 0
  beq-      .loc_0x40
  lwz       r12, 0x0(r3)
  mr        r4, r30
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x40:
  lwz       r3, -0x6B90(r13)
  mr        r4, r30
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  cmplwi    r31, 0
  beq-      .loc_0x6C
  lwz       r0, 0x4(r31)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0x7C

.loc_0x6C:
  lis       r3, 0x8051
  lhz       r4, 0x1F4(r30)
  addi      r3, r3, 0x260C
  bl        -0x8B70

.loc_0x7C:
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
 * Address:	801D9DA8
 * Size:	000024
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::kill(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x4C
  stw       r0, 0x14(r1)
  bl        0x1820
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801D9DCC
 * Size:	000004
 */
void Game::FSMState<Game::ItemPikihead::Item>::cleanup(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801D9DD0
 * Size:	00002C
 */
void Game::ItemPikihead::Item::needSave()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x2A28
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r3,r0,1,31,31
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801D9DFC
 * Size:	00005C
 */
void Game::ItemPikihead::Item::cacheSave(Stream &)
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
  lhz       r4, 0x1F6(r3)
  mr        r3, r31
  lhz       r0, 0x1F4(r30)
  rlwinm    r4,r4,4,0,27
  add       r0, r4, r0
  rlwinm    r4,r0,0,24,31
  bl        0x23B840
  mr        r4, r31
  addi      r3, r30, 0x19C
  bl        0x237BAC
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
 * Address:	801D9E58
 * Size:	0000A4
 */
void Game::ItemPikihead::Item::cacheLoad(Stream &)
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
  mr        r3, r31
  bl        0x23A624
  rlwinm    r4,r3,0,28,31
  rlwinm    r0,r3,28,28,31
  sth       r4, 0x1F4(r30)
  mr        r4, r30
  li        r5, 0x2
  li        r6, 0
  sth       r0, 0x1F6(r30)
  lhz       r0, 0x1F4(r30)
  lwz       r3, 0x1E0(r30)
  stw       r0, 0x0(r3)
  lwz       r3, 0x1D8(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  addi      r3, r30, 0x19C
  bl        0x237AD0
  mr        r3, r30
  addi      r4, r30, 0x19C
  li        r5, 0
  bl        -0x9ED28
  lis       r3, 0x8051
  lhz       r4, 0x1F4(r30)
  addi      r3, r3, 0x260C
  bl        -0x8D44
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
 * Address:	801D9EFC
 * Size:	000200
 */
void Game::ItemPikihead::Item::makeTrMatrix()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x28F4
  cmpwi     r3, 0
  bne-      .loc_0x1E4
  lfs       f7, 0x190(r31)
  lfs       f3, 0x194(r31)
  fmuls     f0, f7, f7
  lfs       f4, 0x198(r31)
  fmuls     f2, f3, f3
  lfs       f1, -0x4B94(r2)
  fmuls     f5, f4, f4
  fadds     f0, f0, f2
  fadds     f0, f5, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x68
  fmadds    f0, f7, f7, f2
  fadds     f0, f5, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x6C
  fsqrte    f1, f0
  fmuls     f0, f1, f0
  b         .loc_0x6C

.loc_0x68:
  fmr       f0, f1

.loc_0x6C:
  lfs       f1, -0x4B94(r2)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x1E4
  fmuls     f0, f3, f3
  fmuls     f2, f4, f4
  fmadds    f0, f7, f7, f0
  fadds     f2, f2, f0
  fcmpo     cr0, f2, f1
  ble-      .loc_0xA0
  ble-      .loc_0xA4
  fsqrte    f0, f2
  fmuls     f2, f0, f2
  b         .loc_0xA4

.loc_0xA0:
  fmr       f2, f1

.loc_0xA4:
  lfs       f0, -0x4B94(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0xC4
  lfs       f0, -0x4B7C(r2)
  fdivs     f0, f0, f2
  fmuls     f7, f7, f0
  fmuls     f3, f3, f0
  fmuls     f4, f4, f0

.loc_0xC4:
  lfs       f0, -0x4B80(r2)
  lfs       f6, -0x4B94(r2)
  fmuls     f4, f4, f0
  lfs       f5, -0x4B7C(r2)
  fmuls     f3, f3, f0
  fmuls     f2, f7, f0
  fmuls     f7, f4, f6
  fmuls     f1, f3, f6
  fnmsubs   f0, f2, f5, f7
  fmsubs    f9, f3, f5, f7
  fmsubs    f1, f2, f6, f1
  fmuls     f5, f0, f0
  fmuls     f7, f1, f1
  fmadds    f5, f9, f9, f5
  fadds     f7, f7, f5
  fcmpo     cr0, f7, f6
  ble-      .loc_0x118
  ble-      .loc_0x11C
  fsqrte    f5, f7
  fmuls     f7, f5, f7
  b         .loc_0x11C

.loc_0x118:
  fmr       f7, f6

.loc_0x11C:
  lfs       f5, -0x4B94(r2)
  fcmpo     cr0, f7, f5
  ble-      .loc_0x13C
  lfs       f5, -0x4B7C(r2)
  fdivs     f5, f5, f7
  fmuls     f9, f9, f5
  fmuls     f0, f0, f5
  fmuls     f1, f1, f5

.loc_0x13C:
  fmuls     f7, f9, f4
  lfs       f5, -0x4B94(r2)
  fmuls     f8, f1, f3
  fmuls     f6, f0, f2
  fmsubs    f10, f1, f2, f7
  fmsubs    f8, f0, f4, f8
  fmsubs    f11, f9, f3, f6
  fmuls     f6, f10, f10
  fmuls     f7, f11, f11
  fmadds    f6, f8, f8, f6
  fadds     f6, f7, f6
  fcmpo     cr0, f6, f5
  ble-      .loc_0x180
  ble-      .loc_0x184
  fsqrte    f5, f6
  fmuls     f6, f5, f6
  b         .loc_0x184

.loc_0x180:
  fmr       f6, f5

.loc_0x184:
  lfs       f5, -0x4B94(r2)
  fcmpo     cr0, f6, f5
  ble-      .loc_0x1A4
  lfs       f5, -0x4B7C(r2)
  fdivs     f5, f5, f6
  fmuls     f8, f8, f5
  fmuls     f10, f10, f5
  fmuls     f11, f11, f5

.loc_0x1A4:
  stfs      f9, 0x138(r31)
  stfs      f0, 0x148(r31)
  stfs      f1, 0x158(r31)
  stfs      f2, 0x13C(r31)
  stfs      f3, 0x14C(r31)
  stfs      f4, 0x15C(r31)
  stfs      f8, 0x140(r31)
  stfs      f10, 0x150(r31)
  stfs      f11, 0x160(r31)
  lfs       f0, 0x19C(r31)
  stfs      f0, 0x144(r31)
  lfs       f0, 0x1A0(r31)
  stfs      f0, 0x154(r31)
  lfs       f0, 0x1A4(r31)
  stfs      f0, 0x164(r31)
  b         .loc_0x1EC

.loc_0x1E4:
  mr        r3, r31
  bl        -0xDC60

.loc_0x1EC:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801DA0FC
 * Size:	000140
 */
void Game::ItemPikihead::Item::doAI()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r4, r30
  lwz       r3, 0x1D8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x1E4(r30)
  lfs       f1, -0x4B94(r2)
  fcmpo     cr0, f2, f1
  ble-      .loc_0x128
  lwz       r3, -0x6514(r13)
  lfs       f0, 0x54(r3)
  fsubs     f0, f2, f0
  stfs      f0, 0x1E4(r30)
  lfs       f0, 0x1E4(r30)
  fcmpo     cr0, f0, f1
  cror      2, 0, 0x2
  bne-      .loc_0x128
  li        r0, 0x1
  lwz       r3, -0x6D0C(r13)
  stw       r0, -0x6D08(r13)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  mr.       r31, r3
  stw       r0, -0x6D08(r13)
  beq-      .loc_0x10C
  li        r4, 0
  bl        -0x9F1C4
  lhz       r4, 0x1F4(r30)
  mr        r3, r31
  bl        -0x8FBD8
  lhz       r4, 0x1F6(r30)
  mr        r3, r31
  bl        -0x8FA34
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x2C4(r31)
  addi      r4, r30, 0x19C
  li        r5, 0
  bl        -0x9F014
  lwz       r3, 0x28C(r31)
  mr        r4, r31
  li        r5, 0x11
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  li        r4, 0
  bl        -0x9F0F8
  mr        r3, r30
  li        r4, 0
  lwz       r12, 0x0(r30)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x128

.loc_0x10C:
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x828
  li        r4, 0x25B
  addi      r5, r5, 0x83C
  crclr     6, 0x6
  bl        -0x1AFBE0

.loc_0x128:
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
 * Address:	801DA23C
 * Size:	00014C
 */
void Game::ItemPikihead::Item::changeMaterial()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  lwz       r3, 0x174(r3)
  lwz       r3, 0x8(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x60(r3)
  lwz       r6, 0x0(r3)
  cmplwi    r6, 0
  beq-      .loc_0x8C
  lhz       r4, 0x1F4(r30)
  lis       r3, 0x8051
  addi      r0, r3, 0x228C
  addi      r5, r1, 0x8
  rlwinm    r3,r4,2,0,29
  li        r4, 0
  add       r9, r0, r3
  lbz       r3, 0x1(r9)
  lbz       r7, 0x2(r9)
  lbz       r8, 0x3(r9)
  lbz       r0, 0x0(r9)
  sth       r3, 0xA(r1)
  sth       r0, 0x8(r1)
  sth       r7, 0xC(r1)
  sth       r8, 0xE(r1)
  lwz       r3, 0x2C(r6)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     

.loc_0x8C:
  lwz       r3, 0x174(r30)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r31, 0
  b         .loc_0x110

.loc_0xAC:
  lwz       r3, 0xC0(r5)
  rlwinm    r0,r31,6,10,25
  rlwinm    r28,r31,0,16,31
  add       r29, r3, r0
  lwz       r3, 0x28(r29)
  lwz       r0, 0x20(r3)
  cmplwi    r0, 0
  beq-      .loc_0x10C
  mr        r3, r29
  bl        -0x17A4F8
  lwz       r3, 0x174(r30)
  rlwinm    r0,r28,2,0,29
  lis       r4, 0x100
  lwz       r3, 0x8(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x60(r3)
  lwzx      r3, r3, r0
  lwz       r3, 0x2C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr        r3, r29
  bl        -0x17A4CC

.loc_0x10C:
  addi      r31, r31, 0x1

.loc_0x110:
  lwz       r4, 0x174(r30)
  rlwinm    r3,r31,0,16,31
  lwz       r5, 0x8(r4)
  lwz       r4, 0x4(r5)
  lhz       r0, 0x5C(r4)
  cmplw     r3, r0
  blt+      .loc_0xAC
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
 * Address:	801DA388
 * Size:	000044
 */
void Game::ItemPikihead::Item::onKeyEvent(const SysShape::KeyEvent &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  mr        r5, r4
  stw       r0, 0x14(r1)
  lwz       r3, 0x1DC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  mr        r4, r6
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801DA3CC
 * Size:	000004
 */
void Game::ItemPikihead::State::onKeyEvent(Game::ItemPikihead::Item *, const SysShape::KeyEvent &)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801DA3D0
 * Size:	000024
 */
void Game::ItemPikihead::Item::updateBoundSphere()
{
/*
.loc_0x0:
  lfs       f1, 0x19C(r3)
  lfs       f0, -0x4B78(r2)
  stfs      f1, 0x1C4(r3)
  lfs       f1, 0x1A0(r3)
  stfs      f1, 0x1C8(r3)
  lfs       f1, 0x1A4(r3)
  stfs      f1, 0x1CC(r3)
  stfs      f0, 0x1D0(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	801DA3F4
 * Size:	000024
 */
void Game::ItemPikihead::Item::getLODSphere(Sys::Sphere &)
{
/*
.loc_0x0:
  lfs       f1, 0x19C(r3)
  lfs       f0, -0x4B74(r2)
  stfs      f1, 0x0(r4)
  lfs       f1, 0x1A0(r3)
  stfs      f1, 0x4(r4)
  lfs       f1, 0x1A4(r3)
  stfs      f1, 0x8(r4)
  stfs      f0, 0xC(r4)
  blr
*/
}


/*
 * --INFO--
 * Address:	801DA418
 * Size:	000004
 */
void Game::ItemPikihead::Item::onSetPosition()
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801DA41C
 * Size:	000074
 */
void Game::ItemPikihead::Item::doSimulation(float)
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
  fmr       f31, f1
  bl        0x23C8
  cmpwi     r3, 0
  bne-      .loc_0x58
  lwz       r4, -0x6C10(r13)
  mr        r3, r31
  lfs       f0, 0x194(r31)
  fmr       f1, f31
  lfs       f2, 0x28(r4)
  fnmsubs   f0, f31, f2, f0
  stfs      f0, 0x194(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1CC(r12)
  mtctr     r12
  bctrl     

.loc_0x58:
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
 * Address:	801DA490
 * Size:	00002C
 */
void Game::ItemPikihead::Item::canPullout()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x2368
  subfic    r0, r3, 0x2
  cntlzw    r0, r0
  rlwinm    r3,r0,27,24,31
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801DA4BC
 * Size:	0001AC
 */
void Game::ItemPikihead::Item::interactFue(Game::InteractFue &)
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
  mr        r28, r4
  bl        0x2324
  subfic    r0, r3, 0x2
  cntlzw    r0, r0
  rlwinm.   r0,r0,27,24,31
  beq-      .loc_0x188
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x188
  lwz       r30, 0x4(r28)
  mr        r3, r30
  bl        -0x99074
  li        r4, 0x3
  bl        0xBAB0
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x78
  li        r3, 0
  b         .loc_0x18C

.loc_0x78:
  lwz       r3, -0x6C18(r13)
  lwz       r0, 0x44(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0xA0
  lhz       r3, 0x1F4(r31)
  lhz       r0, 0x2DC(r30)
  cmplw     r3, r0
  bne-      .loc_0xA0
  li        r3, 0
  b         .loc_0x18C

.loc_0xA0:
  li        r0, 0x1
  lwz       r3, -0x6D0C(r13)
  stw       r0, -0x6D08(r13)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  mr.       r29, r3
  stw       r0, -0x6D08(r13)
  beq-      .loc_0x188
  lwz       r3, 0x4(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x104
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x828
  li        r4, 0x2BD
  addi      r5, r5, 0x84C
  crclr     6, 0x6
  bl        -0x1AFF7C

.loc_0x104:
  mr        r3, r29
  li        r4, 0
  bl        -0x9F600
  lhz       r4, 0x1F4(r31)
  mr        r3, r29
  bl        -0x90014
  lhz       r4, 0x1F6(r31)
  mr        r3, r29
  bl        -0x8FE70
  stw       r30, 0x2C4(r29)
  mr        r3, r29
  addi      r4, r31, 0x19C
  li        r5, 0
  bl        -0x9F44C
  lwz       r3, 0x28C(r29)
  mr        r4, r29
  li        r5, 0x11
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  li        r4, 0
  bl        -0x9F530
  mr        r3, r31
  li        r4, 0
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0x18C

.loc_0x188:
  li        r3, 0

.loc_0x18C:
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
 * Address:	801DA668
 * Size:	0000D4
 */
void Game::ItemPikihead::Mgr::Mgr()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  extsh.    r0, r4
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  beq-      .loc_0x28
  addi      r0, r30, 0x80
  stw       r0, 0x4(r30)

.loc_0x28:
  mr        r3, r30
  li        r4, 0
  li        r5, 0x1
  bl        -0xD92C
  addi      r31, r30, 0x30
  mr        r3, r31
  bl        0x236CE8
  lis       r3, 0x804B
  lis       r4, 0x804C
  subi      r0, r3, 0x5324
  lis       r3, 0x804C
  stw       r0, 0x0(r31)
  subi      r0, r4, 0x7704
  subi      r4, r3, 0x77C4
  li        r5, 0
  stw       r0, 0x0(r31)
  addi      r0, r4, 0x74
  addi      r3, r30, 0x4C
  stb       r5, 0x18(r31)
  stw       r4, 0x0(r30)
  stw       r0, 0x30(r30)
  bl        0x1F64
  lis       r3, 0x804C
  lis       r4, 0x8048
  subi      r5, r3, 0x798C
  mr        r3, r30
  stw       r5, 0x0(r30)
  addi      r5, r5, 0x74
  addi      r0, r4, 0x858
  li        r4, 0x1
  stw       r5, 0x30(r30)
  stw       r0, 0x8(r30)
  bl        -0xD944
  lis       r4, 0x8048
  mr        r3, r30
  addi      r0, r4, 0x864
  stw       r0, 0x28(r30)
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
 * Address:	801DA73C
 * Size:	000100
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::~FixedSizeItemMgr()
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
  beq-      .loc_0xE4
  lis       r3, 0x804C
  addic.    r0, r30, 0x4C
  subi      r3, r3, 0x77C4
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x74
  stw       r0, 0x30(r30)
  beq-      .loc_0xA0
  lis       r3, 0x804C
  addic.    r0, r30, 0x4C
  subi      r3, r3, 0x7850
  stw       r3, 0x4C(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x68(r30)
  beq-      .loc_0xA0
  lis       r3, 0x804C
  addic.    r0, r30, 0x4C
  subi      r3, r3, 0x78CC
  stw       r3, 0x4C(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x68(r30)
  beq-      .loc_0xA0
  lis       r3, 0x804C
  addic.    r0, r30, 0x4C
  subi      r0, r3, 0x7704
  stw       r0, 0x4C(r30)
  beq-      .loc_0xA0
  lis       r4, 0x804B
  addi      r3, r30, 0x4C
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x4C(r30)
  bl        0x236DB0

.loc_0xA0:
  addic.    r0, r30, 0x30
  beq-      .loc_0xD4
  lis       r3, 0x804C
  addic.    r0, r30, 0x30
  subi      r0, r3, 0x7704
  stw       r0, 0x30(r30)
  beq-      .loc_0xD4
  lis       r4, 0x804B
  addi      r3, r30, 0x30
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x30(r30)
  bl        0x236D7C

.loc_0xD4:
  extsh.    r0, r31
  ble-      .loc_0xE4
  mr        r3, r30
  bl        -0x1B6768

.loc_0xE4:
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
 * Address:	801DA83C
 * Size:	0000A0
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::~MonoObjectMgr()
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
  lis       r4, 0x804C
  subi      r4, r4, 0x7850
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x2C
  stw       r0, 0x1C(r30)
  beq-      .loc_0x74
  lis       r4, 0x804C
  subi      r4, r4, 0x78CC
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x2C
  stw       r0, 0x1C(r30)
  beq-      .loc_0x74
  lis       r4, 0x804C
  subi      r0, r4, 0x7704
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x236CDC

.loc_0x74:
  extsh.    r0, r31
  ble-      .loc_0x84
  mr        r3, r30
  bl        -0x1B6808

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
 * Address:	801DA8DC
 * Size:	000070
 */
void Container<Game::ItemPikihead::Item>::~Container()
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
  lis       r4, 0x804C
  subi      r0, r4, 0x7704
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x236C6C

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x1B6878

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
 * Address:	801DA94C
 * Size:	0000AC
 */
void Game::ItemPikihead::Mgr::onLoadResources()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  addi      r31, r4, 0x800
  subi      r4, r2, 0x4B70
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        -0xDAA0
  mr        r3, r29
  addi      r4, r31, 0x80
  li        r5, 0
  lis       r6, 0x2
  bl        -0xDA38
  lwz       r3, 0x1C(r29)
  lis       r4, 0x4
  lwz       r3, 0x0(r3)
  bl        -0x1570C0
  mr        r3, r29
  addi      r4, r31, 0x90
  bl        -0xD7D8
  mr        r0, r3
  mr        r3, r29
  mr        r30, r0
  addi      r5, r31, 0x9C
  mr        r4, r30
  bl        -0xD9C0
  mr        r3, r29
  mr        r4, r30
  bl        -0xD778
  mr        r3, r29
  li        r4, 0x64
  lis       r5, 0x8
  bl        0x2078
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
 * Address:	801DA9F8
 * Size:	000378
 */
void Game::ItemPikihead::Mgr::doSimpleDraw(Viewport *)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  lis       r6, 0x8051
  lis       r5, 0x804B
  stw       r0, 0x74(r1)
  stmw      r23, 0x4C(r1)
  mr        r25, r3
  mr        r26, r4
  subi      r30, r6, 0xDD0
  addi      r31, r5, 0x5A4
  li        r28, 0
  li        r29, 0

.loc_0x30:
  lwz       r4, -0x6D0C(r13)
  addi      r3, r29, 0x58
  li        r0, 0
  lwzx      r5, r4, r3
  lwz       r4, 0x28(r5)
  lwz       r3, 0xA0(r5)
  lwz       r4, 0x0(r4)
  lwz       r27, 0x58(r4)
  stw       r3, 0x10C(r30)
  lwz       r3, 0xA4(r5)
  stw       r3, 0x110(r30)
  lwz       r3, 0xAC(r5)
  stw       r3, 0x114(r30)
  stw       r0, -0x7690(r13)
  b         .loc_0x34C

.loc_0x6C:
  mr        r3, r27
  lwz       r12, 0x0(r27)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x8(r27)
  bl        -0x179C3C
  cmplwi    r25, 0
  mr        r3, r25
  beq-      .loc_0x98
  addi      r3, r25, 0x30

.loc_0x98:
  li        r0, 0
  stw       r31, 0x8(r1)
  cmplwi    r0, 0
  stw       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0xCC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x328

.loc_0xCC:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x138

.loc_0xE4:
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
  bne-      .loc_0x328
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x138:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0xE4
  b         .loc_0x328

.loc_0x158:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0xD8(r3)
  mr        r24, r3
  lhz       r3, 0x1F6(r3)
  rlwinm.   r0,r0,0,29,29
  bne-      .loc_0x1C0
  lis       r4, 0x8048
  lwz       r3, 0x174(r24)
  addi      r4, r4, 0x81C
  bl        0x264460
  bl        0x24ED18
  lfs       f1, 0xC(r3)
  lfs       f0, -0x4B68(r2)
  stfs      f1, 0x1E8(r24)
  lfs       f1, 0x1C(r3)
  stfs      f1, 0x1EC(r24)
  lfs       f1, 0x2C(r3)
  stfs      f1, 0x1F0(r24)
  lfs       f1, 0x1EC(r24)
  fadds     f0, f1, f0
  stfs      f0, 0x1EC(r24)
  b         .loc_0x26C

.loc_0x1C0:
  lhz       r0, 0x1F4(r24)
  cmplwi    r0, 0x4
  beq-      .loc_0x1D4
  cmplwi    r0, 0x3
  bne-      .loc_0x1E0

.loc_0x1D4:
  cmpwi     r3, 0x1
  blt-      .loc_0x1E0
  addi      r3, r3, 0x2

.loc_0x1E0:
  cmpw      r3, r28
  bne-      .loc_0x26C
  lis       r4, 0x8048
  lwz       r3, 0x174(r24)
  addi      r4, r4, 0x81C
  bl        0x2643F8
  bl        0x24ECB0
  mr        r23, r3
  lfs       f0, -0x4B68(r2)
  lfs       f1, 0xC(r23)
  mr        r3, r26
  li        r4, 0x1
  stfs      f1, 0x1E8(r24)
  lfs       f1, 0x1C(r23)
  stfs      f1, 0x1EC(r24)
  lfs       f1, 0x2C(r23)
  stfs      f1, 0x1F0(r24)
  lfs       f1, 0x1EC(r24)
  fadds     f0, f1, f0
  stfs      f0, 0x1EC(r24)
  bl        0x24A534
  mr        r4, r23
  addi      r5, r1, 0x18
  bl        -0xF0934
  addi      r3, r1, 0x18
  li        r4, 0
  bl        -0xF16C8
  addi      r3, r1, 0x18
  li        r4, 0
  bl        -0xF1684
  lwz       r3, 0x8(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x26C:
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x298
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x328

.loc_0x298:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x30C

.loc_0x2B8:
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
  bne-      .loc_0x328
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x30C:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x2B8

.loc_0x328:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0x158
  lwz       r27, 0x4(r27)

.loc_0x34C:
  cmplwi    r27, 0
  bne+      .loc_0x6C
  addi      r28, r28, 0x1
  addi      r29, r29, 0x4
  cmpwi     r28, 0x5
  blt+      .loc_0x30
  lmw       r23, 0x4C(r1)
  lwz       r0, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}


/*
 * --INFO--
 * Address:	801DAD70
 * Size:	00006C
 */
void Game::ItemPikihead::Mgr::onCreateModel(SysShape::Model *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  lis       r4, 0x100
  lwz       r3, 0x8(r31)
  bl        -0x1746B4
  lwz       r3, 0x8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x8(r31)
  bl        -0x174498
  lwz       r3, 0x8(r31)
  bl        -0x1745D0
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801DADDC
 * Size:	0000A0
 */
void Game::ItemPikihead::Mgr::birth()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, -0x6D08(r13)
  cmpwi     r0, 0x1
  beq-      .loc_0x78
  bge-      .loc_0x30
  cmpwi     r0, 0
  bge-      .loc_0x3C
  b         .loc_0x78

.loc_0x30:
  cmpwi     r0, 0x3
  bge-      .loc_0x78
  b         .loc_0x5C

.loc_0x3C:
  lwz       r3, -0x6D0C(r13)
  lwz       r0, 0x6C(r31)
  lwz       r3, 0x20(r3)
  add       r0, r3, r0
  cmpwi     r0, 0x64
  blt-      .loc_0x78
  li        r3, 0
  b         .loc_0x8C

.loc_0x5C:
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x828
  li        r4, 0x342
  addi      r5, r5, 0x8B0
  crclr     6, 0x6
  bl        -0x1B0810

.loc_0x78:
  addi      r3, r31, 0x4C
  lwz       r12, 0x4C(r31)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     

.loc_0x8C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801DAE7C
 * Size:	000060
 */
void Game::ItemPikihead::Mgr::generatorBirth(Vector3<float> &, Vector3<float> &, Game::GenItemParm *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  li        r4, 0
  mr        r31, r3
  bl        -0x9FEE4
  mr        r3, r31
  mr        r4, r30
  li        r5, 0
  bl        -0x9FD14
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
 * Address:	801DAEDC
 * Size:	000118
 */
void Game::ItemPikihead::Mgr::~Mgr()
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
  beq-      .loc_0xFC
  lis       r3, 0x804C
  subi      r3, r3, 0x798C
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x74
  stw       r0, 0x30(r30)
  beq-      .loc_0xEC
  lis       r3, 0x804C
  addic.    r0, r30, 0x4C
  subi      r3, r3, 0x77C4
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x74
  stw       r0, 0x30(r30)
  beq-      .loc_0xB8
  lis       r3, 0x804C
  addic.    r0, r30, 0x4C
  subi      r3, r3, 0x7850
  stw       r3, 0x4C(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x68(r30)
  beq-      .loc_0xB8
  lis       r3, 0x804C
  addic.    r0, r30, 0x4C
  subi      r3, r3, 0x78CC
  stw       r3, 0x4C(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x68(r30)
  beq-      .loc_0xB8
  lis       r3, 0x804C
  addic.    r0, r30, 0x4C
  subi      r0, r3, 0x7704
  stw       r0, 0x4C(r30)
  beq-      .loc_0xB8
  lis       r4, 0x804B
  addi      r3, r30, 0x4C
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x4C(r30)
  bl        0x2365F8

.loc_0xB8:
  addic.    r0, r30, 0x30
  beq-      .loc_0xEC
  lis       r3, 0x804C
  addic.    r0, r30, 0x30
  subi      r0, r3, 0x7704
  stw       r0, 0x30(r30)
  beq-      .loc_0xEC
  lis       r4, 0x804B
  addi      r3, r30, 0x30
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x30(r30)
  bl        0x2365C4

.loc_0xEC:
  extsh.    r0, r31
  ble-      .loc_0xFC
  mr        r3, r30
  bl        -0x1B6F20

.loc_0xFC:
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
 * Address:	801DAFF4
 * Size:	00000C
 */
void Game::ItemPikihead::Mgr::generatorGetID()
{
/*
.loc_0x0:
  lis       r3, 0x706B
  addi      r3, r3, 0x6864
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB000
 * Size:	000088
 */
void ObjectMgr<Game::ItemPikihead::Item>::~ObjectMgr()
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
  lis       r4, 0x804C
  subi      r4, r4, 0x78CC
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x2C
  stw       r0, 0x1C(r30)
  beq-      .loc_0x5C
  lis       r4, 0x804C
  subi      r0, r4, 0x7704
  stw       r0, 0x0(r30)
  beq-      .loc_0x5C
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x236530

.loc_0x5C:
  extsh.    r0, r31
  ble-      .loc_0x6C
  mr        r3, r30
  bl        -0x1B6FB4

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
 * Address:	801DB088
 * Size:	00002C
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::birth()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x4C(r3)
  lwz       r12, 0x7C(r12)
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
 * Address:	801DB0B4
 * Size:	00000C
 */
void Game::ItemPikihead::Item::getCreatureName()
{
/*
.loc_0x0:
  lis       r3, 0x8048
  addi      r3, r3, 0x8C4
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB0C0
 * Size:	000034
 */
void Game::FSMItem<Game::ItemPikihead::Item, Game::ItemPikihead::FSM, Game::ItemPikihead::State>::doAI()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, 0x1D8(r3)
  lwz       r12, 0x0(r3)
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
 * Address:	801DB0F4
 * Size:	000004
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::onCreateModel(SysShape::Model *)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB0F8
 * Size:	00002C
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::doAnimation()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x4C(r3)
  lwz       r12, 0x64(r12)
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
 * Address:	801DB124
 * Size:	00002C
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::doEntry()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x4C(r3)
  lwz       r12, 0x68(r12)
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
 * Address:	801DB150
 * Size:	00002C
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::doSetView(int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x4C(r3)
  lwz       r12, 0x6C(r12)
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
 * Address:	801DB17C
 * Size:	00002C
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::doViewCalc()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x4C(r3)
  lwz       r12, 0x70(r12)
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
 * Address:	801DB1A8
 * Size:	00002C
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::doSimulation(float)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x4C(r3)
  lwz       r12, 0x74(r12)
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
 * Address:	801DB1D4
 * Size:	00002C
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::doDirectDraw(Graphics &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x4C(r3)
  lwz       r12, 0x78(r12)
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
 * Address:	801DB200
 * Size:	0001E8
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::initDependency()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  addi      r3, r3, 0x4C
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r4, r4, 0x5A4
  cmplwi    r0, 0
  stw       r4, 0x8(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x4C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1B8

.loc_0x4C:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xB8

.loc_0x64:
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
  bne-      .loc_0x1B8
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xB8:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x64
  b         .loc_0x1B8

.loc_0xD8:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1BC(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x128
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1B8

.loc_0x128:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x19C

.loc_0x148:
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
  bne-      .loc_0x1B8
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x19C:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x148

.loc_0x1B8:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xD8
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB3E8
 * Size:	00002C
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::getNext(void *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x4C(r3)
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
 * Address:	801DB414
 * Size:	00002C
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::getStart()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x4C(r3)
  lwz       r12, 0x18(r12)
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
 * Address:	801DB440
 * Size:	000030
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::createModel(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r4
  stw       r0, 0x14(r1)
  lwz       r3, 0x7C(r3)
  lwz       r4, 0x188(r4)
  lwz       r5, 0x184(r5)
  bl        0x24F9A0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB470
 * Size:	000044
 */
void Game::FSMItem<Game::ItemPikihead::Item, Game::ItemPikihead::FSM, Game::ItemPikihead::State>::onKeyEvent(const SysShape::KeyEvent &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  mr        r5, r4
  stw       r0, 0x14(r1)
  lwz       r3, 0x1DC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  mr        r4, r6
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB4B4
 * Size:	000004
 */
void Game::ItemState<Game::ItemPikihead::Item>::onDamage(Game::ItemPikihead::Item *, float)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB4B8
 * Size:	000004
 */
void Game::ItemState<Game::ItemPikihead::Item>::onKeyEvent(Game::ItemPikihead::Item *, const SysShape::KeyEvent &)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB4BC
 * Size:	000004
 */
void Game::ItemState<Game::ItemPikihead::Item>::onBounce(Game::ItemPikihead::Item *, Sys::Triangle *)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB4C0
 * Size:	000004
 */
void Game::ItemState<Game::ItemPikihead::Item>::onPlatCollision(Game::ItemPikihead::Item *, Game::PlatEvent &)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB4C4
 * Size:	000004
 */
void Game::ItemState<Game::ItemPikihead::Item>::onCollision(Game::ItemPikihead::Item *, Game::CollEvent &)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB4C8
 * Size:	000004
 */
void Game::FSMState<Game::ItemPikihead::Item>::init(Game::ItemPikihead::Item *, Game::StateArg *)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB4CC
 * Size:	000004
 */
void Game::FSMState<Game::ItemPikihead::Item>::exec(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB4D0
 * Size:	000004
 */
void Game::FSMState<Game::ItemPikihead::Item>::resume(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB4D4
 * Size:	000004
 */
void Game::FSMState<Game::ItemPikihead::Item>::restart(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB4D8
 * Size:	000004
 */
void Game::StateMachine<Game::ItemPikihead::Item>::init(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB4DC
 * Size:	000038
 */
void Game::StateMachine<Game::ItemPikihead::Item>::exec(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x1DC(r4)
  cmplwi    r3, 0
  beq-      .loc_0x28
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x28:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB514
 * Size:	000064
 */
void Game::StateMachine<Game::ItemPikihead::Item>::create(int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r4, 0xC(r3)
  stw       r0, 0x8(r3)
  lwz       r0, 0xC(r3)
  rlwinm    r3,r0,2,0,29
  bl        -0x1B7590
  stw       r3, 0x4(r31)
  lwz       r0, 0xC(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x1B75A0
  stw       r3, 0x10(r31)
  lwz       r0, 0xC(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x1B75B0
  stw       r3, 0x14(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB578
 * Size:	000060
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::birth()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x4AC
  cmpwi     r3, -0x1
  beq-      .loc_0x48
  lwz       r6, 0x28(r31)
  li        r0, 0
  lwz       r4, 0x2C(r31)
  mulli     r5, r3, 0x1F8
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
 * Address:	801DB5D8
 * Size:	000054
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::kill(Game::ItemPikihead::Item *)
{
/*
.loc_0x0:
  lwz       r0, 0x24(r3)
  li        r6, 0
  li        r5, 0
  mtctr     r0
  cmpwi     r0, 0
  blelr-    

.loc_0x18:
  lwz       r0, 0x28(r3)
  add       r0, r0, r5
  cmplw     r0, r4
  bne-      .loc_0x44
  lwz       r4, 0x2C(r3)
  li        r0, 0x1
  stbx      r0, r4, r6
  lwz       r4, 0x20(r3)
  subi      r0, r4, 0x1
  stw       r0, 0x20(r3)
  blr       

.loc_0x44:
  addi      r5, r5, 0x1F8
  addi      r6, r6, 0x1
  bdnz+     .loc_0x18
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB62C
 * Size:	000040
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::getNext(void *)
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
 * Address:	801DB66C
 * Size:	000030
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::getStart()
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
 * Address:	801DB69C
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::getEnd()
{
/*
.loc_0x0:
  lwz       r3, 0x24(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB6A4
 * Size:	000010
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::getAt(int)
{
/*
.loc_0x0:
  mulli     r0, r4, 0x1F8
  lwz       r3, 0x28(r3)
  add       r3, r3, r0
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB6B4
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::getTo()
{
/*
.loc_0x0:
  lwz       r3, 0x24(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	801DB6BC
 * Size:	000080
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::doAnimation()
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
  addi      r31, r31, 0x1F8
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
 * Address:	801DB73C
 * Size:	000080
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::doEntry()
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
  addi      r31, r31, 0x1F8
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
 * Address:	801DB7BC
 * Size:	000090
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::doSetView(int)
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
  addi      r31, r31, 0x1F8
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
 * Address:	801DB84C
 * Size:	000080
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::doViewCalc()
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
  addi      r31, r31, 0x1F8
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
 * Address:	801DB8CC
 * Size:	000090
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::doSimulation(float)
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
  addi      r31, r31, 0x1F8
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
 * Address:	801DB95C
 * Size:	000090
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::doDirectDraw(Graphics &)
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
  addi      r31, r31, 0x1F8
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
 * Address:	801DB9EC
 * Size:	000018
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::resetMgr()
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
 * Address:	801DBA04
 * Size:	000030
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::clearMgr()
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
 * Address:	801DBA34
 * Size:	000004
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::onAlloc()
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801DBA38
 * Size:	00003C
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::getEmptyIndex()
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
 * Address:	801DBA74
 * Size:	000010
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::get(void *)
{
/*
.loc_0x0:
  mulli     r0, r4, 0x1F8
  lwz       r3, 0x28(r3)
  add       r3, r3, r0
  blr
*/
}


/*
 * --INFO--
 * Address:	801DBA84
 * Size:	0001E4
 */
void ObjectMgr<Game::ItemPikihead::Item>::doAnimation()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r4, r4, 0x5A4
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
 * Address:	801DBC68
 * Size:	0001E4
 */
void ObjectMgr<Game::ItemPikihead::Item>::doEntry()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r4, r4, 0x5A4
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
 * Address:	801DBE4C
 * Size:	0001F4
 */
void ObjectMgr<Game::ItemPikihead::Item>::doSetView(int)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r5, r5, 0x5A4
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
 * Address:	801DC040
 * Size:	0001E4
 */
void ObjectMgr<Game::ItemPikihead::Item>::doViewCalc()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r4, r4, 0x5A4
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
 * Address:	801DC224
 * Size:	0001F4
 */
void ObjectMgr<Game::ItemPikihead::Item>::doSimulation(float)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r4, r4, 0x5A4
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
 * Address:	801DC418
 * Size:	0001F4
 */
void ObjectMgr<Game::ItemPikihead::Item>::doDirectDraw(Graphics &)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804B
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r5, r5, 0x5A4
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
 * Address:	801DC60C
 * Size:	00002C
 */
void Container<Game::ItemPikihead::Item>::getObject(void *)
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
 * Address:	801DC638
 * Size:	000008
 */
void Container<Game::ItemPikihead::Item>::getAt(int)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}


/*
 * --INFO--
 * Address:	801DC640
 * Size:	000008
 */
void Container<Game::ItemPikihead::Item>::getTo()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}


/*
 * --INFO--
 * Address:	801DC648
 * Size:	00009C
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::MonoObjectMgr()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x234D34
  lis       r4, 0x804B
  lis       r3, 0x804C
  subi      r0, r4, 0x5324
  lis       r6, 0x804B
  stw       r0, 0x0(r31)
  subi      r0, r3, 0x7704
  lis       r4, 0x804C
  lis       r3, 0x804C
  stw       r0, 0x0(r31)
  li        r8, 0
  subi      r7, r4, 0x78CC
  subi      r5, r3, 0x7850
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
 * Address:	801DC6E4
 * Size:	00009C
 */
void Game::StateMachine<Game::ItemPikihead::Item>::transit(Game::ItemPikihead::Item *, int, Game::StateArg *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  rlwinm    r0,r5,2,0,29
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  mr        r29, r6
  lwz       r30, 0x1DC(r4)
  lwz       r3, 0x14(r3)
  cmplwi    r30, 0
  lwzx      r31, r3, r0
  beq-      .loc_0x50
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x4(r30)
  stw       r0, 0x18(r27)

.loc_0x50:
  lwz       r0, 0xC(r27)
  cmpw      r31, r0
  blt-      .loc_0x60

.loc_0x5C:
  b         .loc_0x5C

.loc_0x60:
  lwz       r3, 0x4(r27)
  rlwinm    r0,r31,2,0,29
  mr        r4, r28
  mr        r5, r29
  lwzx      r3, r3, r0
  stw       r3, 0x1DC(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}


/*
 * --INFO--
 * Address:	801DC780
 * Size:	000084
 */
void Game::StateMachine<Game::ItemPikihead::Item>::registerState(Game::FSMState<Game::ItemPikihead::Item> *)
{
/*
.loc_0x0:
  lwz       r6, 0x8(r3)
  lwz       r0, 0xC(r3)
  cmpw      r6, r0
  bgelr-    
  lwz       r5, 0x4(r3)
  rlwinm    r0,r6,2,0,29
  stwx      r4, r5, r0
  lwz       r5, 0x4(r4)
  cmpwi     r5, 0
  blt-      .loc_0x34
  lwz       r0, 0xC(r3)
  cmpw      r5, r0
  blt-      .loc_0x3C

.loc_0x34:
  li        r0, 0
  b         .loc_0x40

.loc_0x3C:
  li        r0, 0x1

.loc_0x40:
  rlwinm.   r0,r0,0,24,31
  beqlr-    
  stw       r3, 0x8(r4)
  lwz       r0, 0x8(r3)
  lwz       r6, 0x4(r4)
  lwz       r5, 0x10(r3)
  rlwinm    r0,r0,2,0,29
  stwx      r6, r5, r0
  lwz       r0, 0x4(r4)
  lwz       r5, 0x8(r3)
  lwz       r4, 0x14(r3)
  rlwinm    r0,r0,2,0,29
  stwx      r5, r4, r0
  lwz       r4, 0x8(r3)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	801DC804
 * Size:	00001C
 */
void Game::FSMItem<Game::ItemPikihead::Item, Game::ItemPikihead::FSM, Game::ItemPikihead::State>::getStateID()
{
/*
.loc_0x0:
  lwz       r3, 0x1DC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x14
  lwz       r3, 0x4(r3)
  blr       

.loc_0x14:
  li        r3, -0x1
  blr
*/
}


/*
 * --INFO--
 * Address:	801DC820
 * Size:	000044
 */
void Game::FSMItem<Game::ItemPikihead::Item, Game::ItemPikihead::FSM, Game::ItemPikihead::State>::platCallback(Game::PlatEvent &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  mr        r5, r4
  stw       r0, 0x14(r1)
  lwz       r3, 0x1DC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  mr        r4, r6
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801DC864
 * Size:	000044
 */
void Game::FSMItem<Game::ItemPikihead::Item, Game::ItemPikihead::FSM, Game::ItemPikihead::State>::collisionCallback(Game::CollEvent &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  mr        r5, r4
  stw       r0, 0x14(r1)
  lwz       r3, 0x1DC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  mr        r4, r6
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801DC8A8
 * Size:	000044
 */
void Game::FSMItem<Game::ItemPikihead::Item, Game::ItemPikihead::FSM, Game::ItemPikihead::State>::bounceCallback(Sys::Triangle *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  mr        r5, r4
  stw       r0, 0x14(r1)
  lwz       r3, 0x1DC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  mr        r4, r6
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801DC8EC
 * Size:	00002C
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::getEnd()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x4C(r3)
  lwz       r12, 0x1C(r12)
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
 * Address:	801DC918
 * Size:	00002C
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::get(void *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x4C(r3)
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
 * Address:	801DC944
 * Size:	0000E0
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::killAll()
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  mr        r27, r3
  subi      r31, r4, 0x5D30
  li        r29, 0
  b         .loc_0xC0

.loc_0x24:
  addi      r3, r27, 0x4C
  mr        r4, r29
  lwz       r12, 0x4C(r27)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stw       r31, 0x8(r1)
  mr        r28, r3
  stw       r0, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x70
  mr        r3, r28
  addi      r4, r1, 0x8
  bl        -0xA18C0

.loc_0x70:
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0xF8(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0xBC
  lwz       r30, -0x6E44(r13)
  cmplwi    r30, 0
  beq-      .loc_0xBC
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0xF8(r12)
  mtctr     r12
  bctrl     
  mr        r0, r3
  mr        r3, r30
  mr        r4, r0
  bl        -0x1B5DD8

.loc_0xBC:
  addi      r29, r29, 0x1

.loc_0xC0:
  lwz       r0, 0x70(r27)
  cmpw      r29, r0
  blt+      .loc_0x24
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}


/*
 * --INFO--
 * Address:	801DCA24
 * Size:	00002C
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::createModelCallback(SysShape::Model *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA0(r12)
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
 * Address:	801DCA50
 * Size:	0000E4
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::createMgr(int, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  mr        r30, r5
  stw       r29, 0x24(r1)
  mr        r29, r4
  stw       r28, 0x20(r1)
  mr        r28, r3
  addi      r3, r28, 0x4C
  bl        0x11C
  mr        r3, r28
  bl        .loc_0xE4
  li        r3, 0x1C
  bl        -0x1B8BE8
  mr.       r31, r3
  beq-      .loc_0xC0
  li        r3, 0x14
  bl        -0x1B8BF8
  mr.       r9, r3
  beq-      .loc_0xA0
  lis       r3, 0x804C
  lis       r4, 0x804B
  subi      r7, r3, 0x7008
  lis       r3, 0x804C
  lwz       r6, 0x0(r7)
  addi      r4, r4, 0x16BC
  lwz       r5, 0x4(r7)
  subi      r0, r3, 0x6FFC
  lwz       r3, 0x8(r7)
  stw       r6, 0x8(r1)
  stw       r4, 0x0(r9)
  stw       r0, 0x0(r9)
  stw       r28, 0x4(r9)
  stw       r6, 0x8(r9)
  stw       r5, 0xC(r9)
  stw       r5, 0xC(r1)
  stw       r3, 0x10(r1)
  stw       r3, 0x10(r9)

.loc_0xA0:
  lwz       r4, 0x18(r28)
  mr        r3, r31
  lwz       r5, 0x1C(r28)
  mr        r6, r29
  mr        r7, r30
  li        r8, 0x2
  bl        0x24DFF8
  mr        r31, r3

.loc_0xC0:
  stw       r31, 0x7C(r28)
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0xE4:
*/
}


/*
 * --INFO--
 * Address:	801DCB34
 * Size:	000064
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::onAlloc()
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
  addi      r3, r30, 0x4C
  mr        r4, r31
  lwz       r12, 0x4C(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  stw       r31, 0x184(r3)
  addi      r31, r31, 0x1

.loc_0x40:
  lwz       r0, 0x70(r30)
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
 * Address:	801DCB98
 * Size:	000188
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::alloc(int)
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
  stw       r29, 0x14(r1)
  mr        r29, r31
  mulli     r3, r29, 0x1F8
  stw       r28, 0x10(r1)
  addi      r3, r3, 0x10
  bl        -0x1B8C1C
  lis       r4, 0x801E
  mr        r7, r29
  subi      r4, r4, 0x67A8
  li        r5, 0
  li        r6, 0x1F8
  bl        -0x11B1F0
  stw       r3, 0x28(r30)
  li        r0, 0
  mr        r3, r29
  stw       r31, 0x24(r30)
  stw       r0, 0x20(r30)
  bl        -0x1B8C4C
  cmpwi     r31, 0
  stw       r3, 0x2C(r30)
  li        r11, 0
  ble-      .loc_0x120
  cmpwi     r31, 0x8
  subi      r3, r31, 0x8
  ble-      .loc_0xFC
  addi      r0, r3, 0x7
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r3, 0
  ble-      .loc_0xFC

.loc_0x94:
  lwz       r3, 0x2C(r30)
  li        r10, 0x1
  addi      r8, r11, 0x1
  addi      r7, r11, 0x2
  stbx      r10, r3, r11
  addi      r6, r11, 0x3
  addi      r5, r11, 0x4
  addi      r4, r11, 0x5
  lwz       r9, 0x2C(r30)
  addi      r3, r11, 0x6
  addi      r0, r11, 0x7
  addi      r11, r11, 0x8
  stbx      r10, r9, r8
  lwz       r8, 0x2C(r30)
  stbx      r10, r8, r7
  lwz       r7, 0x2C(r30)
  stbx      r10, r7, r6
  lwz       r6, 0x2C(r30)
  stbx      r10, r6, r5
  lwz       r5, 0x2C(r30)
  stbx      r10, r5, r4
  lwz       r4, 0x2C(r30)
  stbx      r10, r4, r3
  lwz       r3, 0x2C(r30)
  stbx      r10, r3, r0
  bdnz+     .loc_0x94

.loc_0xFC:
  sub       r0, r31, r11
  li        r4, 0x1
  mtctr     r0
  cmpw      r11, r31
  bge-      .loc_0x120

.loc_0x110:
  lwz       r3, 0x2C(r30)
  stbx      r4, r3, r11
  addi      r11, r11, 0x1
  bdnz+     .loc_0x110

.loc_0x120:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  li        r28, 0
  li        r29, 0
  b         .loc_0x160

.loc_0x140:
  lwz       r0, 0x28(r30)
  add       r3, r0, r29
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r29, r29, 0x1F8
  addi      r28, r28, 0x1

.loc_0x160:
  cmpw      r28, r31
  blt+      .loc_0x140
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
 * Address:	801DCD20
 * Size:	000030
 */
void Delegate1<Game::FixedSizeItemMgr<Game::ItemPikihead::Item>, SysShape::Model *>::invoke(SysShape::Model *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r3
  stw       r0, 0x14(r1)
  addi      r12, r5, 0x8
  lwz       r3, 0x4(r3)
  bl        -0x11B214
  nop       
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801DCD50
 * Size:	000028
 */
void __sinit_itemPikihead_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804C
  stw       r0, -0x6B98(r13)
  stfsu     f0, -0x7998(r3)
  stfs      f0, -0x6B94(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	801DCD78
 * Size:	000008
 */
void Game::FSMItem<Game::ItemPikihead::Item, Game::ItemPikihead::FSM, Game::ItemPikihead::State>::@376@onKeyEvent(const SysShape::KeyEvent &)
{
/*
.loc_0x0:
  subi      r3, r3, 0x178
  b         -0x190C
*/
}


/*
 * --INFO--
 * Address:	801DCD80
 * Size:	000008
 */
void efx::TPkGlow1::@4@__dt()
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x335C
*/
}


/*
 * --INFO--
 * Address:	801DCD88
 * Size:	000008
 */
void Game::ItemPikihead::Item::@376@onKeyEvent(const SysShape::KeyEvent &)
{
/*
.loc_0x0:
  subi      r3, r3, 0x178
  b         -0x2A04
*/
}


/*
 * --INFO--
 * Address:	801DCD90
 * Size:	000008
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::@48@__dt()
{
/*
.loc_0x0:
  subi      r3, r3, 0x30
  b         -0x2658
*/
}


/*
 * --INFO--
 * Address:	801DCD98
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::@28@resetMgr()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x13B0
*/
}


/*
 * --INFO--
 * Address:	801DCDA0
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::@28@doDirectDraw(Graphics &)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1448
*/
}


/*
 * --INFO--
 * Address:	801DCDA8
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::@28@doSimulation(float)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x14E0
*/
}


/*
 * --INFO--
 * Address:	801DCDB0
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::@28@doViewCalc()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1568
*/
}


/*
 * --INFO--
 * Address:	801DCDB8
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::@28@doSetView(int)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1600
*/
}


/*
 * --INFO--
 * Address:	801DCDC0
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::@28@doEntry()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1688
*/
}


/*
 * --INFO--
 * Address:	801DCDC8
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemPikihead::Item>::@28@doAnimation()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1710
*/
}


/*
 * --INFO--
 * Address:	801DCDD0
 * Size:	000008
 */
void ObjectMgr<Game::ItemPikihead::Item>::@28@doDirectDraw(Graphics &)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x9BC
*/
}


/*
 * --INFO--
 * Address:	801DCDD8
 * Size:	000008
 */
void ObjectMgr<Game::ItemPikihead::Item>::@28@doSimulation(float)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0xBB8
*/
}


/*
 * --INFO--
 * Address:	801DCDE0
 * Size:	000008
 */
void ObjectMgr<Game::ItemPikihead::Item>::@28@doViewCalc()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0xDA4
*/
}


/*
 * --INFO--
 * Address:	801DCDE8
 * Size:	000008
 */
void ObjectMgr<Game::ItemPikihead::Item>::@28@doSetView(int)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0xFA0
*/
}


/*
 * --INFO--
 * Address:	801DCDF0
 * Size:	000008
 */
void ObjectMgr<Game::ItemPikihead::Item>::@28@doEntry()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x118C
*/
}


/*
 * --INFO--
 * Address:	801DCDF8
 * Size:	000008
 */
void ObjectMgr<Game::ItemPikihead::Item>::@28@doAnimation()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1378
*/
}


/*
 * --INFO--
 * Address:	801DCE00
 * Size:	000008
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::@48@getEnd()
{
/*
.loc_0x0:
  subi      r3, r3, 0x30
  b         -0x518
*/
}


/*
 * --INFO--
 * Address:	801DCE08
 * Size:	000008
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::@48@getStart()
{
/*
.loc_0x0:
  subi      r3, r3, 0x30
  b         -0x19F8
*/
}


/*
 * --INFO--
 * Address:	801DCE10
 * Size:	000008
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::@48@getNext(void *)
{
/*
.loc_0x0:
  subi      r3, r3, 0x30
  b         -0x1A2C
*/
}


/*
 * --INFO--
 * Address:	801DCE18
 * Size:	000008
 */
void Game::FixedSizeItemMgr<Game::ItemPikihead::Item>::@48@get(void *)
{
/*
.loc_0x0:
  subi      r3, r3, 0x30
  b         -0x504
*/
}


/*
 * --INFO--
 * Address:	801DCE20
 * Size:	000008
 */
void Game::ItemPikihead::Mgr::@48@__dt()
{
/*
.loc_0x0:
  subi      r3, r3, 0x30
  b         -0x1F48
*/
}
