

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
 * Address:	801D1738
 * Size:	000134
 */
void Game::ItemHole::FSM::init( (Game::CFSMItem *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x3
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x1458
  li        r3, 0x10
  bl        -0x1AD8B4
  mr.       r4, r3
  beq-      .loc_0x68
  lis       r3, 0x804B
  lis       r6, 0x804B
  addi      r0, r3, 0x7DF8
  lis       r5, 0x804B
  stw       r0, 0x0(r4)
  li        r7, 0
  lis       r3, 0x804B
  addi      r6, r6, 0x7DC4
  stw       r7, 0x4(r4)
  addi      r5, r5, 0x7D8C
  addi      r0, r3, 0x7D54
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0x0(r4)
  stw       r0, 0x0(r4)

.loc_0x68:
  mr        r3, r31
  bl        0x1514
  li        r3, 0x14
  bl        -0x1AD908
  mr.       r4, r3
  beq-      .loc_0xC0
  lis       r3, 0x804B
  lis       r6, 0x804B
  addi      r0, r3, 0x7DF8
  lis       r5, 0x804B
  stw       r0, 0x0(r4)
  li        r0, 0x1
  lis       r3, 0x804B
  li        r7, 0
  stw       r0, 0x4(r4)
  addi      r6, r6, 0x7DC4
  addi      r5, r5, 0x7D8C
  addi      r0, r3, 0x7D1C
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0x0(r4)
  stw       r0, 0x0(r4)

.loc_0xC0:
  mr        r3, r31
  bl        0x14BC
  li        r3, 0x10
  bl        -0x1AD960
  mr.       r4, r3
  beq-      .loc_0x118
  lis       r3, 0x804B
  lis       r6, 0x804B
  addi      r0, r3, 0x7DF8
  lis       r5, 0x804B
  stw       r0, 0x0(r4)
  li        r0, 0x2
  lis       r3, 0x804B
  li        r7, 0
  stw       r0, 0x4(r4)
  addi      r6, r6, 0x7DC4
  addi      r5, r5, 0x7D8C
  addi      r0, r3, 0x7CE4
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0x0(r4)
  stw       r0, 0x0(r4)

.loc_0x118:
  mr        r3, r31
  bl        0x1464
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801D186C
 * Size:	00003C
 */
void Game::ItemHole::NormalState::init( (Game::CFSMItem *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  lfs       f0, -0x4D28(r2)
  stw       r0, 0x14(r1)
  li        r4, 0x1
  stfs      f0, 0x1EC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xAC(r12)
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
 * Address:	801D18A8
 * Size:	000004
 */
void Game::ItemHole::NormalState::exec( (Game::CFSMItem *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801D18AC
 * Size:	000004
 */
void Game::ItemHole::NormalState::cleanup( (Game::CFSMItem *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801D18B0
 * Size:	00005C
 */
void Game::ItemHole::AppearState::init( (Game::CFSMItem *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0x1
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lfs       f1, -0x4D24(r2)
  lfs       f0, -0x4D28(r2)
  stfs      f1, 0x1EC(r31)
  stfs      f0, 0x10(r30)
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
 * Address:	801D190C
 * Size:	000118
 */
void Game::ItemHole::AppearState::exec( (Game::CFSMItem *))
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  lwz       r5, -0x6514(r13)
  mr        r30, r3
  lfs       f1, 0x10(r3)
  mr        r31, r4
  lfs       f0, 0x54(r5)
  lfs       f3, -0x4D1C(r2)
  fadds     f2, f1, f0
  lfs       f1, -0x4D20(r2)
  lfs       f0, -0x4D28(r2)
  stfs      f2, 0x10(r3)
  lfs       f2, 0x10(r3)
  fnmsubs   f31, f3, f2, f1
  fcmpo     cr0, f31, f0
  cror      2, 0, 0x2
  bne-      .loc_0xEC
  lis       r3, 0x8051
  lis       r6, 0x804B
  addi      r5, r3, 0x41E4
  fmr       f31, f0
  lfs       f2, 0x0(r5)
  subi      r0, r6, 0x5814
  lfs       f1, 0x4(r5)
  addi      r3, r1, 0x8
  lfs       f0, 0x8(r5)
  stw       r0, 0x14(r1)
  stfs      f2, 0x18(r1)
  stfs      f1, 0x1C(r1)
  stfs      f0, 0x20(r1)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  addi      r4, r1, 0x14
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  stfs      f2, 0x18(r1)
  stfs      f1, 0x1C(r1)
  stfs      f0, 0x20(r1)
  lwz       r3, 0x1E0(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xEC:
  lfs       f0, -0x4D24(r2)
  fmuls     f0, f0, f31
  stfs      f0, 0x1EC(r31)
  psq_l     f31,0x38(r1),0,0
  lwz       r0, 0x44(r1)
  lfd       f31, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	801D1A24
 * Size:	000030
 */
void transit__Q24Game26FSMState<Game::CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg(void)
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
 * Address:	801D1A54
 * Size:	000004
 */
void Game::ItemHole::AppearState::cleanup( (Game::CFSMItem *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801D1A58
 * Size:	00003C
 */
void Game::ItemHole::CloseState::init( (Game::CFSMItem *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  lfs       f0, -0x4D24(r2)
  stw       r0, 0x14(r1)
  li        r4, 0
  stfs      f0, 0x1EC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xAC(r12)
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
 * Address:	801D1A94
 * Size:	000014
 */
void Game::ItemHole::CloseState::exec( (Game::CFSMItem *))
{
/*
.loc_0x0:
  lbz       r3, 0xD8(r4)
  li        r0, -0x35
  and       r0, r3, r0
  stb       r0, 0xD8(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	801D1AA8
 * Size:	000004
 */
void Game::ItemHole::CloseState::cleanup( (Game::CFSMItem *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801D1AAC
 * Size:	00025C
 */
void Game::ItemHole::Item::movieUserCommand( (unsigned long, Game::MoviePlayer *))
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
  cmpwi     r4, 0x64
  mr        r29, r3
  mr        r30, r5
  beq-      .loc_0x3C
  b         .loc_0x230

.loc_0x3C:
  addi      r3, r1, 0x3C
  bl        -0x65184
  addi      r3, r1, 0x3C
  bl        -0x65174
  b         .loc_0x158

.loc_0x50:
  addi      r3, r1, 0x3C
  bl        -0x65134
  lwz       r12, 0x0(r3)
  mr        r31, r3
  lwz       r12, 0x1E4(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x150
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x150
  mr        r4, r31
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x14(r1)
  mr        r4, r29
  lfs       f1, 0x18(r1)
  addi      r3, r1, 0x8
  lfs       f0, 0x1C(r1)
  stfs      f2, 0x30(r1)
  stfs      f1, 0x34(r1)
  stfs      f0, 0x38(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f3, 0x10(r1)
  mr        r3, r31
  lfs       f2, 0x38(r1)
  lfs       f1, 0x8(r1)
  lfs       f0, 0x30(r1)
  fsubs     f30, f3, f2
  fsubs     f31, f1, f0
  bl        -0x6B1E4
  fmuls     f2, f30, f30
  lfs       f0, -0x4D28(r2)
  fmadds    f2, f31, f31, f2
  fcmpo     cr0, f2, f0
  ble-      .loc_0x11C
  ble-      .loc_0x120
  fsqrte    f0, f2
  fmuls     f2, f0, f2
  b         .loc_0x120

.loc_0x11C:
  fmr       f2, f0

.loc_0x120:
  fsubs     f1, f2, f1
  lfs       f0, -0x4D18(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x150
  lfs       f1, 0x34(r1)
  mr        r3, r31
  lfs       f0, -0x4D14(r2)
  addi      r4, r1, 0x30
  li        r5, 0
  fadds     f0, f1, f0
  stfs      f0, 0x34(r1)
  bl        -0x96A50

.loc_0x150:
  addi      r3, r1, 0x3C
  bl        -0x651CC

.loc_0x158:
  addi      r3, r1, 0x3C
  bl        -0x65114
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x50
  lwz       r0, 0x1F0(r30)
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x198
  lwz       r3, 0x1D8(r29)
  mr        r4, r29
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x230

.loc_0x198:
  lfs       f1, -0x4D28(r2)
  lfs       f0, 0x1EC(r29)
  fcmpu     cr0, f1, f0
  beq-      .loc_0x1B8
  lwz       r3, -0x67A8(r13)
  li        r4, 0x181C
  li        r5, 0
  bl        0x1669D0

.loc_0x1B8:
  lis       r3, 0x8051
  lfsu      f2, 0x41E4(r3)
  lis       r5, 0x804B
  addi      r4, r1, 0x20
  lfs       f1, 0x4(r3)
  subi      r0, r5, 0x5814
  lfs       f0, 0x8(r3)
  stw       r0, 0x20(r1)
  stfs      f2, 0x24(r1)
  stfs      f1, 0x28(r1)
  stfs      f0, 0x2C(r1)
  lfs       f0, 0x19C(r29)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x1A0(r29)
  stfs      f0, 0x28(r1)
  lfs       f0, 0x1A4(r29)
  stfs      f0, 0x2C(r1)
  lwz       r3, 0x1E0(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x1D8(r29)
  mr        r4, r29
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x230:
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
 * Address:	801D1D08
 * Size:	000108
 */
void Game::ItemHole::Item::interactGotKey( (Game::InteractGotKey &))
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r3
  bl        -0x52E0
  cmpwi     r3, 0x2
  bne-      .loc_0xF0
  lwz       r3, -0x6C18(r13)
  lbz       r0, 0x3C(r3)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0xF0
  lfs       f0, -0x4D28(r2)
  lis       r3, 0x8048
  li        r0, 0
  mr        r4, r31
  addi      r5, r3, 0x538
  stw       r0, 0x18(r1)
  addi      r3, r1, 0x8
  stw       r5, 0x14(r1)
  stw       r0, 0x20(r1)
  stfs      f0, 0x2C(r1)
  stfs      f0, 0x30(r1)
  stfs      f0, 0x34(r1)
  stfs      f0, 0x38(r1)
  stw       r0, 0x3C(r1)
  stw       r0, 0x24(r1)
  stw       r0, 0x1C(r1)
  stw       r0, 0x40(r1)
  stw       r0, 0x28(r1)
  stw       r0, 0x44(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  mr        r3, r31
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  stfs      f2, 0x2C(r1)
  stfs      f1, 0x30(r1)
  stfs      f0, 0x34(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x38(r1)
  addi      r4, r1, 0x14
  lwz       r5, -0x6C18(r13)
  lwz       r3, -0x64AC(r13)
  lwz       r5, 0x58(r5)
  lwz       r0, 0xCC(r5)
  stw       r0, 0x24(r1)
  lwz       r0, 0xC8(r5)
  stw       r0, 0x20(r1)
  stw       r31, 0x194(r3)
  lwz       r3, -0x64AC(r13)
  bl        0x25ABE4
  li        r3, 0x1
  b         .loc_0xF4

.loc_0xF0:
  li        r3, 0

.loc_0xF4:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	801D1E10
 * Size:	000008
 */
void Game::ItemHole::Item::getFaceDir(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1E8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void Game::ItemHole::Item::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801D1E18
 * Size:	0000C0
 */
void Game::ItemHole::Item::onInit( (Game::CreatureInitArg *))
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
  mr        r4, r30
  lwz       r3, 0x180(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  li        r4, 0x1
  lwz       r12, 0x0(r30)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  cmplwi    r31, 0
  beq-      .loc_0x78
  lwz       r3, 0x1D8(r30)
  mr        r4, r30
  lwz       r5, 0x4(r31)
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x98

.loc_0x78:
  lwz       r3, 0x1D8(r30)
  mr        r4, r30
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x98:
  li        r0, 0
  lfs       f0, -0x4D28(r2)
  stw       r0, 0x1E4(r30)
  stfs      f0, 0x1E8(r30)
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
 * Address:	801D1ED8
 * Size:	000078
 */
void start__Q24Game30StateMachine<Game::CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r6
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r4
  li        r4, 0
  stw       r28, 0x10(r1)
  mr        r28, r3
  mr        r3, r29
  bl        -0x54E0
  mr        r3, r28
  mr        r4, r29
  lwz       r12, 0x0(r28)
  mr        r5, r30
  mr        r6, r31
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
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
 * Address:	801D1F50
 * Size:	000050
 */
void Game::ItemHole::Item::changeMaterial(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  subi      r4, r2, 0x4D10
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x174(r3)
  bl        0x26D078
  lhz       r5, 0x38(r3)
  li        r4, 0
  lwz       r3, 0x174(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
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
 * Address:	801D1FA0
 * Size:	0001DC
 */
void Game::ItemHole::Item::onSetPosition(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stw       r31, 0x6C(r1)
  mr        r31, r3
  stw       r30, 0x68(r1)
  lwz       r0, -0x6CF8(r13)
  cmplwi    r0, 0
  beq-      .loc_0x40
  mr        r3, r0
  addi      r4, r31, 0x19C
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x1A0(r31)

.loc_0x40:
  mr        r3, r31
  li        r4, 0x15
  li        r5, 0
  bl        0x4C598
  lfs       f1, 0x19C(r31)
  li        r3, 0x44
  lfs       f0, -0x4D08(r2)
  stfs      f1, 0x1C4(r31)
  lfs       f1, 0x1A0(r31)
  stfs      f1, 0x1C8(r31)
  lfs       f1, 0x1A4(r31)
  stfs      f1, 0x1CC(r31)
  stfs      f0, 0x1D0(r31)
  bl        -0x1AE170
  mr.       r30, r3
  beq-      .loc_0xA0
  li        r4, 0xAF
  li        r5, 0xB0
  li        r6, 0xB1
  li        r7, 0xB2
  bl        0x1DE178
  lis       r3, 0x804B
  addi      r0, r3, 0x7CC8
  stw       r0, 0x0(r30)

.loc_0xA0:
  stw       r30, 0x1E0(r31)
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C4(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x174(r31)
  addi      r3, r31, 0x138
  lwz       r4, 0x8(r4)
  addi      r4, r4, 0x24
  bl        -0xE7D9C
  lwz       r3, 0x174(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x174(r31)
  lwz       r3, 0x10(r3)
  bl        0x257814
  lis       r4, 0x6675
  mr        r30, r3
  addi      r3, r1, 0x14
  addi      r4, r4, 0x7461
  bl        0x241208
  addi      r3, r1, 0x40
  bl        -0xC7E8
  stw       r31, 0x40(r1)
  addi      r3, r1, 0x44
  addi      r4, r1, 0x14
  li        r5, 0x5
  bl        -0x1109A4
  lwz       r0, 0x1C(r1)
  addi      r4, r1, 0x40
  lwz       r3, -0x6BB8(r13)
  stw       r0, 0x4C(r1)
  lfs       f0, -0x4D04(r2)
  lwz       r0, 0x88(r3)
  lwz       r3, -0x6BE0(r13)
  stw       r0, 0x50(r1)
  stw       r30, 0x54(r1)
  stfs      f0, 0x5C(r1)
  bl        -0xC7C4
  stw       r3, 0x1F0(r31)
  lis       r4, 0x7369
  addi      r3, r1, 0x8
  addi      r4, r4, 0x6465
  bl        0x2411AC
  addi      r3, r1, 0x20
  bl        -0xC844
  stw       r31, 0x20(r1)
  addi      r3, r1, 0x24
  addi      r4, r1, 0x8
  li        r5, 0x5
  bl        -0x110A00
  lwz       r0, 0x10(r1)
  addi      r4, r1, 0x20
  lwz       r3, -0x6BB8(r13)
  stw       r0, 0x2C(r1)
  lfs       f0, -0x4D04(r2)
  lwz       r0, 0x8C(r3)
  lwz       r3, -0x6BE0(r13)
  stw       r0, 0x30(r1)
  stw       r30, 0x34(r1)
  stfs      f0, 0x3C(r1)
  bl        -0xC820
  stw       r3, 0x1F4(r31)
  li        r4, 0x1
  lwz       r3, 0x1F0(r31)
  bl        -0xD580
  lwz       r3, 0x1F4(r31)
  li        r4, 0x1
  bl        -0xD58C
  lwz       r0, 0x74(r1)
  lwz       r31, 0x6C(r1)
  lwz       r30, 0x68(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void efx::TForever4::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801D217C
 * Size:	000314
 */
void Game::ItemHole::Item::initDependency(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r3
  stw       r30, 0x48(r1)
  lwz       r4, -0x6B10(r13)
  cmplwi    r4, 0
  beq-      .loc_0x28
  addi      r4, r4, 0x30

.loc_0x28:
  li        r0, 0
  lis       r3, 0x804B
  addi      r3, r3, 0x560
  stw       r0, 0x3C(r1)
  cmplwi    r0, 0
  stw       r3, 0x30(r1)
  stw       r0, 0x34(r1)
  stw       r4, 0x38(r1)
  bne-      .loc_0x68
  mr        r3, r4
  lwz       r12, 0x0(r4)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0x26C

.loc_0x68:
  mr        r3, r4
  lwz       r12, 0x0(r4)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0xD8

.loc_0x84:
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x26C
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)

.loc_0xD8:
  lwz       r12, 0x30(r1)
  addi      r3, r1, 0x30
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x84
  b         .loc_0x26C

.loc_0xF8:
  lwz       r3, 0x38(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r0, r3
  mr        r30, r0
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1B0
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r30
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x1C(r1)
  lfs       f0, 0x10(r1)
  lfs       f2, 0x14(r1)
  fsubs     f3, f1, f0
  lfs       f1, 0x8(r1)
  lfs       f0, -0x4D28(r2)
  fsubs     f1, f2, f1
  fmuls     f2, f3, f3
  fmadds    f1, f1, f1, f2
  fcmpo     cr0, f1, f0
  ble-      .loc_0x198
  ble-      .loc_0x19C
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x19C

.loc_0x198:
  fmr       f1, f0

.loc_0x19C:
  lfs       f0, -0x4D00(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1B0
  stw       r30, 0x1E4(r31)
  b         .loc_0x2FC

.loc_0x1B0:
  lwz       r0, 0x3C(r1)
  cmplwi    r0, 0
  bne-      .loc_0x1DC
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0x26C

.loc_0x1DC:
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0x250

.loc_0x1FC:
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x26C
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)

.loc_0x250:
  lwz       r12, 0x30(r1)
  addi      r3, r1, 0x30
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x1FC

.loc_0x26C:
  lwz       r3, 0x38(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x34(r1)
  cmplw     r4, r3
  bne+      .loc_0xF8
  mr        r3, r31
  bl        -0x59D0
  cmpwi     r3, 0
  bne-      .loc_0x2F4
  lis       r3, 0x8051
  lfsu      f2, 0x41E4(r3)
  lis       r5, 0x804B
  addi      r4, r1, 0x20
  lfs       f1, 0x4(r3)
  subi      r0, r5, 0x5814
  lfs       f0, 0x8(r3)
  stw       r0, 0x20(r1)
  stfs      f2, 0x24(r1)
  stfs      f1, 0x28(r1)
  stfs      f0, 0x2C(r1)
  lfs       f0, 0x19C(r31)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x1A0(r31)
  stfs      f0, 0x28(r1)
  lfs       f0, 0x1A4(r31)
  stfs      f0, 0x2C(r1)
  lwz       r3, 0x1E0(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x2F4:
  li        r0, 0
  stw       r0, 0x1E4(r31)

.loc_0x2FC:
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
 * Address:	801D2490
 * Size:	000068
 */
void Game::ItemHole::Item::makeTrMatrix(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lfs       f0, -0x4D28(r2)
  mr        r6, r3
  stw       r0, 0x24(r1)
  addi      r4, r1, 0x8
  addi      r5, r1, 0x14
  lfs       f1, 0x1E8(r3)
  addi      r3, r6, 0x138
  stfs      f0, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  lfs       f0, 0x19C(r6)
  stfs      f0, 0x8(r1)
  lfs       f1, 0x1A0(r6)
  stfs      f1, 0xC(r1)
  lfs       f0, 0x1A4(r6)
  stfs      f0, 0x10(r1)
  lfs       f0, 0x1EC(r6)
  fsubs     f0, f1, f0
  stfs      f0, 0xC(r1)
  bl        0x2563A4
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801D24F8
 * Size:	000030
 */
void Game::ItemHole::Item::canRide(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x5AD0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x34(r12)
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
 * Address:	801D2528
 * Size:	000008
 */
void Game::ItemHole::State::canRide(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801D2530
 * Size:	000014
 */
void Game::ItemHole::Item::do_setLODParm( (Game::AILODParm &))
{
/*
.loc_0x0:
  lfs       f1, -0x4CFC(r2)
  lfs       f0, -0x4CF8(r2)
  stfs      f1, 0x0(r4)
  stfs      f0, 0x4(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	801D2544
 * Size:	000008
 */
void Game::ItemHole::Item::sound_culling(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801D254C
 * Size:	0000E4
 */
void Game::ItemHole::Item::doAI(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r5, 0x1
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lbz       r0, 0xD8(r3)
  lwz       r3, 0x1E0(r3)
  rlwinm    r4,r0,0,30,31
  bl        0x1E3E40
  mr        r3, r31
  bl        -0x5B80
  lwz       r3, 0x1E4(r31)
  cmplwi    r3, 0
  beq-      .loc_0xB8
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xD0
  li        r0, 0
  lis       r3, 0x8051
  stw       r0, 0x1E4(r31)
  lis       r5, 0x804B
  subi      r0, r5, 0x5814
  addi      r4, r1, 0x8
  lfsu      f2, 0x41E4(r3)
  stw       r0, 0x8(r1)
  lfs       f1, 0x4(r3)
  lfs       f0, 0x8(r3)
  stfs      f2, 0xC(r1)
  stfs      f1, 0x10(r1)
  stfs      f0, 0x14(r1)
  lfs       f0, 0x19C(r31)
  stfs      f0, 0xC(r1)
  lfs       f0, 0x1A0(r31)
  stfs      f0, 0x10(r1)
  lfs       f0, 0x1A4(r31)
  stfs      f0, 0x14(r1)
  lwz       r3, 0x1E0(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xD0

.loc_0xB8:
  mr        r3, r31
  bl        -0x5BCC
  cmpwi     r3, 0x2
  beq-      .loc_0xD0
  lwz       r3, 0x17C(r31)
  bl        0x29CB88

.loc_0xD0:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801D2630
 * Size:	0000BC
 */
void Game::ItemHole::Item::doDirectDraw( (Graphics &))
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r4
  li        r4, 0
  stw       r30, 0x48(r1)
  mr        r30, r3
  mr        r3, r31
  bl        0x2531C8
  addi      r3, r30, 0x138
  addi      r4, r1, 0x14
  bl        -0xE8394
  lfs       f1, 0x30(r1)
  li        r3, 0x28
  lfs       f0, -0x4CF4(r2)
  li        r4, 0
  fadds     f1, f1, f0
  lfs       f0, 0x20(r1)
  stfs      f0, 0x20(r1)
  stfs      f1, 0x30(r1)
  bl        -0xECBA4
  lfs       f1, -0x4D08(r2)
  mr        r3, r31
  addi      r4, r1, 0x14
  bl        0x253F78
  mr        r3, r31
  li        r4, 0
  bl        0x25317C
  lfs       f2, -0x4D00(r2)
  mr        r3, r30
  lfs       f1, 0x1A0(r30)
  mr        r4, r31
  lfs       f3, 0x1A4(r30)
  addi      r5, r1, 0x8
  lfs       f0, 0x19C(r30)
  fadds     f1, f2, f1
  stfs      f0, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f3, 0x10(r1)
  bl        0x5514
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
 * Address:	801D26EC
 * Size:	000058
 */
void Game::ItemHole::Item::createFSM(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0x1C
  stw       r0, 0x14(r1)
  bl        -0x1AE858
  cmplwi    r3, 0
  beq-      .loc_0x48
  lis       r4, 0x804B
  lis       r5, 0x804B
  addi      r0, r4, 0x7A50
  lis       r4, 0x804B
  stw       r0, 0x0(r3)
  li        r6, -0x1
  addi      r5, r5, 0x7A38
  addi      r0, r4, 0x7E18
  stw       r6, 0x18(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0x0(r3)

.loc_0x48:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801D2744
 * Size:	00007C
 */
void Game::ItemHole::Mgr::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  extsh.    r0, r4
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x24
  addi      r0, r31, 0x90
  stw       r0, 0x4(r31)

.loc_0x24:
  mr        r3, r31
  li        r4, 0
  bl        -0x5350
  lis       r3, 0x804B
  subi      r0, r2, 0x4CF0
  addi      r4, r3, 0x797C
  mr        r3, r31
  stw       r4, 0x0(r31)
  addi      r5, r4, 0x74
  li        r4, 0x1
  stw       r5, 0x30(r31)
  stw       r0, 0x8(r31)
  bl        -0x59CC
  lis       r4, 0x8048
  mr        r3, r31
  addi      r0, r4, 0x548
  stw       r0, 0x28(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801D27C0
 * Size:	000100
 */
void Game::ItemHole::Mgr::onLoadResources(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  addi      r31, r4, 0x520
  subi      r4, r2, 0x4CE8
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        -0x5914
  mr        r3, r29
  addi      r4, r31, 0x48
  li        r5, 0
  lis       r6, 0x2
  bl        -0x58AC
  lwz       r3, 0x1C(r29)
  lis       r4, 0x4
  lwz       r3, 0x0(r3)
  bl        -0x14EF34
  lwz       r3, 0x1C(r29)
  lwz       r3, 0x0(r3)
  bl        -0x14EDE8
  mr        r3, r29
  addi      r4, r31, 0x5C
  bl        -0x5658
  mr        r0, r3
  mr        r3, r29
  mr        r30, r0
  addi      r5, r31, 0x68
  mr        r4, r30
  bl        -0x559C
  stw       r3, 0x88(r29)
  mr        r3, r29
  mr        r4, r30
  addi      r5, r31, 0x7C
  bl        -0x55B0
  stw       r3, 0x8C(r29)
  addi      r3, r1, 0x8
  li        r4, 0x1
  li        r5, 0x2
  li        r6, 0x1
  bl        0x249BF0
  lwz       r3, 0x88(r29)
  addi      r4, r1, 0x8
  bl        -0x9F180
  addi      r3, r1, 0x8
  li        r4, 0x1
  li        r5, 0x1
  li        r6, 0x1
  bl        0x249BD0
  lwz       r3, 0x8C(r29)
  addi      r4, r1, 0x8
  bl        -0x9F1A0
  mr        r3, r29
  mr        r4, r30
  bl        -0x5650
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
 * Address:	801D28C0
 * Size:	0000BC
 */
void Game::ItemHole::Mgr::setup( (Game::BaseItem *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  li        r3, 0x14
  bl        -0x1AEA40
  mr.       r31, r3
  beq-      .loc_0x54
  mr        r3, r29
  li        r4, 0
  bl        -0x57A8
  mr        r4, r3
  mr        r3, r31
  lis       r5, 0x2
  li        r6, 0x2
  bl        0x26B8CC
  mr        r31, r3

.loc_0x54:
  stw       r31, 0x174(r30)
  lwz       r3, 0x174(r30)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x174(r30)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x174(r30)
  lwz       r3, 0x8(r3)
  bl        -0x16C02C
  lwz       r3, 0x174(r30)
  lwz       r3, 0x8(r3)
  bl        -0x16C168
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
 * Address:	801D297C
 * Size:	000054
 */
void generatorBirth__Q34Game8ItemHole3MgrFR10Vector3<float>R10Vector3<float>PQ24Game11GenItemParm(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r4
  bl        -0x5208
  li        r4, 0
  mr        r31, r3
  bl        -0x979D8
  mr        r3, r31
  mr        r4, r30
  li        r5, 0
  bl        -0x97808
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
 * Address:	801D29D0
 * Size:	000134
 */
void Game::ItemHole::Mgr::__dt(void)
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
  beq-      .loc_0x118
  lis       r3, 0x804B
  addi      r3, r3, 0x797C
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x74
  stw       r0, 0x30(r30)
  beq-      .loc_0x108
  lis       r3, 0x804B
  addic.    r0, r30, 0x4C
  addi      r3, r3, 0x7180
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x74
  stw       r0, 0x30(r30)
  beq-      .loc_0xD4
  lis       r4, 0x804B
  addic.    r3, r30, 0x6C
  addi      r4, r4, 0x724C
  stw       r4, 0x4C(r30)
  addi      r0, r4, 0x2C
  stw       r0, 0x68(r30)
  beq-      .loc_0x84
  lis       r4, 0x804B
  addi      r0, r4, 0x723C
  stw       r0, 0x6C(r30)
  li        r4, 0
  bl        0x23EB38

.loc_0x84:
  addic.    r0, r30, 0x4C
  beq-      .loc_0xD4
  lis       r3, 0x804B
  addic.    r0, r30, 0x4C
  addi      r3, r3, 0x72CC
  stw       r3, 0x4C(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x68(r30)
  beq-      .loc_0xD4
  lis       r3, 0x804B
  addic.    r0, r30, 0x4C
  addi      r0, r3, 0x7348
  stw       r0, 0x4C(r30)
  beq-      .loc_0xD4
  lis       r4, 0x804B
  addi      r3, r30, 0x4C
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x4C(r30)
  bl        0x23EAE8

.loc_0xD4:
  addic.    r0, r30, 0x30
  beq-      .loc_0x108
  lis       r3, 0x804B
  addic.    r0, r30, 0x30
  addi      r0, r3, 0x7348
  stw       r0, 0x30(r30)
  beq-      .loc_0x108
  lis       r4, 0x804B
  addi      r3, r30, 0x30
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x30(r30)
  bl        0x23EAB4

.loc_0x108:
  extsh.    r0, r31
  ble-      .loc_0x118
  mr        r3, r30
  bl        -0x1AEA30

.loc_0x118:
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
 * Address:	801D2B04
 * Size:	000074
 */
void Game::ItemHole::Mgr::doNew(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0x1F8
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  bl        -0x1AEC74
  mr.       r31, r3
  beq-      .loc_0x5C
  li        r4, 0x405
  bl        -0x6B40
  lis       r4, 0x804B
  lis       r3, 0x804B
  addi      r5, r4, 0x74C0
  li        r4, 0
  stw       r5, 0x0(r31)
  addi      r0, r5, 0x1B0
  addi      r3, r3, 0x7A68
  stw       r0, 0x178(r31)
  addi      r0, r3, 0x1B0
  stw       r4, 0x1D8(r31)
  stw       r4, 0x1DC(r31)
  stw       r3, 0x0(r31)
  stw       r0, 0x178(r31)

.loc_0x5C:
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
 * Address:	801D2B78
 * Size:	00000C
 */
void Game::ItemHole::Mgr::generatorGetID(void)
{
/*
.loc_0x0:
  lis       r3, 0x686F
  addi      r3, r3, 0x6C65
  blr
*/
}

/*
 * --INFO--
 * Address:	801D2B84
 * Size:	000008
 */
void Game::ItemHole::Item::getCreatureName(void)
{
/*
.loc_0x0:
  subi      r3, r2, 0x4CF0
  blr
*/
}

/*
 * --INFO--
 * Address:	801D2B8C
 * Size:	000004
 */
void Game::CItemState::onDamage( (Game::CFSMItem *, float))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801D2B90
 * Size:	000008
 */
void Game::ItemHole::NormalState::canRide(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	801D2B98
 * Size:	000004
 */
void init__Q24Game26FSMState<Game::CFSMItem>FPQ24Game8CFSMItemPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801D2B9C
 * Size:	000004
 */
void cleanup__Q24Game26FSMState<Game::CFSMItem>FPQ24Game8CFSMItem(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801D2BA0
 * Size:	000004
 */
void resume__Q24Game26FSMState<Game::CFSMItem>FPQ24Game8CFSMItem(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801D2BA4
 * Size:	000004
 */
void restart__Q24Game26FSMState<Game::CFSMItem>FPQ24Game8CFSMItem(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801D2BA8
 * Size:	000064
 */
void create__Q24Game30StateMachine<Game::CFSMItem>Fi(void)
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
  bl        -0x1AEC24
  stw       r3, 0x4(r31)
  lwz       r0, 0xC(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x1AEC34
  stw       r3, 0x10(r31)
  lwz       r0, 0xC(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x1AEC44
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
 * Address:	801D2C0C
 * Size:	0000AC
 */
void transit__Q24Game30StateMachine<Game::CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  rlwinm    r0,r5,2,0,29
  stmw      r27, 0xC(r1)
  mr        r28, r4
  mr        r27, r3
  mr        r29, r6
  lwz       r4, 0x14(r3)
  mr        r3, r28
  lwzx      r30, r4, r0
  bl        -0x6204
  mr.       r31, r3
  beq-      .loc_0x54
  lwz       r12, 0x0(r3)
  mr        r4, r28
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x4(r31)
  stw       r0, 0x18(r27)

.loc_0x54:
  lwz       r0, 0xC(r27)
  cmpw      r30, r0
  blt-      .loc_0x64

.loc_0x60:
  b         .loc_0x60

.loc_0x64:
  lwz       r4, 0x4(r27)
  rlwinm    r0,r30,2,0,29
  mr        r3, r28
  lwzx      r31, r4, r0
  mr        r4, r31
  bl        -0x6258
  mr        r3, r31
  mr        r4, r28
  lwz       r12, 0x0(r31)
  mr        r5, r29
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
 * Address:	801D2CB8
 * Size:	000084
 */
void registerState__Q24Game30StateMachine<Game::CFSMItem>FPQ24Game26FSMState<Game::CFSMItem>(void)
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
 * Address:	801D2D3C
 * Size:	000028
 */
void __sinit_itemHole_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804B
  stw       r0, -0x6BC0(r13)
  stfsu     f0, 0x7970(r3)
  stfs      f0, -0x6BBC(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801D2D64
 * Size:	000008
 */
void @48@Game::ItemHole::Mgr::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x30
  b         -0x398
*/
}
