

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
 * Address:	80362618
 * Size:	000150
 */
void Game::Miulin::FSM::init( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x8
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x231DCC
  li        r3, 0x10
  bl        -0x33E794
  mr.       r4, r3
  beq-      .loc_0x38
  li        r4, 0
  bl        .loc_0x150
  mr        r4, r3

.loc_0x38:
  mr        r3, r31
  bl        -0x231D4C
  li        r3, 0x18
  bl        -0x33E7B8
  mr.       r4, r3
  beq-      .loc_0x5C
  li        r4, 0x1
  bl        0x2DC
  mr        r4, r3

.loc_0x5C:
  mr        r3, r31
  bl        -0x231D70
  li        r3, 0x10
  bl        -0x33E7DC
  mr.       r4, r3
  beq-      .loc_0x80
  li        r4, 0x2
  bl        0x7C4
  mr        r4, r3

.loc_0x80:
  mr        r3, r31
  bl        -0x231D94
  li        r3, 0x14
  bl        -0x33E800
  mr.       r4, r3
  beq-      .loc_0xA4
  li        r4, 0x3
  bl        0x87C
  mr        r4, r3

.loc_0xA4:
  mr        r3, r31
  bl        -0x231DB8
  li        r3, 0x10
  bl        -0x33E824
  mr.       r4, r3
  beq-      .loc_0xC8
  li        r4, 0x4
  bl        0x111C
  mr        r4, r3

.loc_0xC8:
  mr        r3, r31
  bl        -0x231DDC
  li        r3, 0x10
  bl        -0x33E848
  mr.       r4, r3
  beq-      .loc_0xEC
  li        r4, 0x5
  bl        0x1238
  mr        r4, r3

.loc_0xEC:
  mr        r3, r31
  bl        -0x231E00
  li        r3, 0x10
  bl        -0x33E86C
  mr.       r4, r3
  beq-      .loc_0x110
  li        r4, 0x6
  bl        0x14BC
  mr        r4, r3

.loc_0x110:
  mr        r3, r31
  bl        -0x231E24
  li        r3, 0x10
  bl        -0x33E890
  mr.       r4, r3
  beq-      .loc_0x134
  li        r4, 0x7
  bl        0x16B0
  mr        r4, r3

.loc_0x134:
  mr        r3, r31
  bl        -0x231E48
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x150:
*/
}

/*
 * --INFO--
 * Address:	80362768
 * Size:	00003C
 */
void Game::Miulin::StateWait::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2468
  addi      r5, r5, 0x2444
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x420
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803627A4
 * Size:	00008C
 */
void Game::Miulin::StateWait::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0x7
  mr        r3, r31
  bl        -0x25D7C0
  mr        r3, r31
  bl        -0x25B4EC
  lfs       f0, 0x428(r2)
  mr        r3, r31
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  stfs      f0, 0x1C8(r31)
  stfs      f0, 0x1CC(r31)
  stfs      f0, 0x1D0(r31)
  bl        -0x260E74
  mr        r3, r31
  bl        -0x25B07C
  li        r0, 0
  lfs       f1, -0x63C8(r2)
  stb       r0, 0x2E4(r31)
  mr        r3, r31
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,21,19
  stw       r0, 0x1E0(r31)
  bl        -0x25B488
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80362830
 * Size:	000118
 */
void Game::Miulin::StateWait::exec( (Game::EnemyBase *))
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
  bl        0x2BE4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x100
  lfs       f1, 0x200(r31)
  lfs       f0, 0x428(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x64
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x7
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xEC

.loc_0x64:
  mr        r3, r31
  bl        0x2100
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x98
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xEC

.loc_0x98:
  mr        r3, r31
  bl        0x31D8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xCC
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x5
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xEC

.loc_0xCC:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xEC:
  mr        r3, r31
  bl        -0x25B18C
  lwz       r0, 0x1E0(r31)
  ori       r0, r0, 0x800
  stw       r0, 0x1E0(r31)

.loc_0x100:
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
 * Address:	80362948
 * Size:	00003C
 */
void Game::Miulin::StateWalk::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2468
  addi      r5, r5, 0x2420
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x42C
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80362984
 * Size:	00016C
 */
void Game::Miulin::StateWalk::init( (Game::EnemyBase *, Game::StateArg *))
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
  mr        r31, r4
  lfs       f1, -0x63C8(r2)
  mr        r30, r3
  mr        r3, r31
  bl        -0x25B628
  li        r0, -0x1
  mr        r3, r31
  stw       r0, 0x2C8(r31)
  li        r4, 0x5
  li        r5, 0
  bl        -0x25D9CC
  li        r3, 0
  stw       r3, 0x14(r30)
  lwz       r0, 0x230(r31)
  cmplwi    r0, 0
  beq-      .loc_0x144
  stw       r3, 0x10(r30)
  addi      r3, r1, 0x20
  lwz       r4, 0x230(r31)
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
  bl        -0x32D944
  bl        0xAF180
  lwz       r12, 0x0(r31)
  fmr       f31, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f31
  bl        0xAF188
  lwz       r3, 0xC0(r31)
  fabs      f3, f1
  lfs       f1, 0x43C(r2)
  lfs       f0, 0x8BC(r3)
  lfs       f2, 0x438(r2)
  frsp      f3, f3
  fmuls     f0, f1, f0
  lfs       f1, 0x434(r2)
  fmuls     f0, f2, f0
  fmuls     f0, f1, f0
  fcmpo     cr0, f3, f0
  ble-      .loc_0x144
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x5
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x144:
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
 * Address:	80362AF0
 * Size:	000364
 */
void Game::Miulin::StateWalk::exec( (Game::EnemyBase *))
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
  mr        r31, r4
  mr        r30, r3
  lwz       r0, 0x2C8(r4)
  cmpwi     r0, 0
  bge-      .loc_0x238
  lwz       r4, 0x14(r30)
  mr        r3, r31
  addi      r0, r4, 0x1
  stw       r0, 0x14(r30)
  bl        0x29D4
  lbz       r0, 0x2E4(r31)
  cmplwi    r0, 0
  beq-      .loc_0x64
  lfs       f1, 0x440(r2)
  mr        r3, r31
  bl        0x2C2C

.loc_0x64:
  lbz       r0, 0x2E4(r31)
  cmplwi    r0, 0
  bne-      .loc_0xB8
  mr        r3, r31
  bl        0x280C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x94
  lwz       r3, 0xC0(r31)
  lwz       r4, 0x10(r30)
  lwz       r0, 0x81C(r3)
  cmpw      r4, r0
  ble-      .loc_0xB8

.loc_0x94:
  mr        r3, r31
  bl        0x2958
  mr        r3, r31
  bl        -0x25D8F0
  li        r3, 0x5
  li        r0, 0
  stw       r3, 0x2C8(r31)
  stw       r0, 0x10(r30)
  b         .loc_0x238

.loc_0xB8:
  lfs       f1, 0x444(r2)
  mr        r3, r31
  bl        0x2D48
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x110
  lbz       r0, 0x2E4(r31)
  cmplwi    r0, 0
  beq-      .loc_0xEC
  mr        r3, r31
  bl        -0x25D92C
  li        r0, 0
  stw       r0, 0x2C8(r31)
  b         .loc_0x238

.loc_0xEC:
  mr        r3, r31
  bl        0x2EC4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x238
  mr        r3, r31
  bl        -0x25D950
  li        r0, 0x5
  stw       r0, 0x2C8(r31)
  b         .loc_0x238

.loc_0x110:
  lwz       r0, 0x14(r30)
  cmpwi     r0, 0x1E
  ble-      .loc_0x238
  lwz       r4, 0x230(r31)
  cmplwi    r4, 0
  beq-      .loc_0x150
  li        r0, 0
  addi      r3, r1, 0x2C
  stw       r0, 0x10(r30)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f31, 0x2C(r1)
  lfs       f30, 0x34(r1)
  b         .loc_0x18C

.loc_0x150:
  mr        r3, r31
  bl        0x2288
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x180
  mr        r4, r31
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r31)
  lwz       r12, 0x198(r12)
  mtctr     r12
  bctrl     
  lfs       f31, 0x20(r1)
  lfs       f30, 0x28(r1)

.loc_0x180:
  lwz       r3, 0x10(r30)
  addi      r0, r3, 0x1
  stw       r0, 0x10(r30)

.loc_0x18C:
  mr        r4, r31
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
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
  bl        -0x32DBB4
  bl        0xAEF10
  lwz       r12, 0x0(r31)
  fmr       f31, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f31
  bl        0xAEF18
  lwz       r3, 0xC0(r31)
  fabs      f3, f1
  lfs       f1, 0x43C(r2)
  lfs       f0, 0x8BC(r3)
  lfs       f2, 0x438(r2)
  frsp      f3, f3
  fmuls     f0, f1, f0
  lfs       f1, 0x434(r2)
  fmuls     f0, f2, f0
  fmuls     f0, f1, f0
  fcmpo     cr0, f3, f0
  ble-      .loc_0x238
  mr        r3, r31
  bl        -0x25DA7C
  li        r0, 0x5
  stw       r0, 0x2C8(r31)

.loc_0x238:
  lfs       f1, 0x200(r31)
  lfs       f0, 0x428(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x260
  li        r0, 0x7
  mr        r3, r31
  stw       r0, 0x2C8(r31)
  bl        -0x25DAA8
  b         .loc_0x2A8

.loc_0x260:
  mr        r3, r31
  li        r4, 0
  bl        -0x24E700
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x288
  li        r0, 0x6
  mr        r3, r31
  stw       r0, 0x2C8(r31)
  bl        -0x25DAD0
  b         .loc_0x2A8

.loc_0x288:
  mr        r3, r31
  bl        0x1C1C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2A8
  li        r0, 0x2
  mr        r3, r31
  stw       r0, 0x2C8(r31)
  bl        -0x25DAF4

.loc_0x2A8:
  mr        r3, r31
  bl        -0x25BA9C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2DC
  lfs       f1, 0x448(r2)
  mr        r3, r31
  lfs       f0, -0x63C8(r2)
  fmuls     f1, f1, f0
  bl        -0x25BA28
  lfs       f0, 0x428(r2)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)

.loc_0x2DC:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x33C
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x33C
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r6, 0
  lwz       r5, 0x2C8(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  bl        -0x25BA70
  lfs       f0, 0x428(r2)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  stfs      f0, 0x1C8(r31)
  stfs      f0, 0x1CC(r31)
  stfs      f0, 0x1D0(r31)

.loc_0x33C:
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
 * Address:	80362E54
 * Size:	000040
 */
void Game::Miulin::StateAttackStart::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r7, 0x804E
  subi      r0, r5, 0x65C
  lis       r6, 0x804E
  stw       r0, 0x0(r3)
  lis       r5, 0x8049
  li        r8, 0
  addi      r7, r7, 0x2468
  stw       r4, 0x4(r3)
  addi      r4, r6, 0x23FC
  addi      r0, r5, 0x1670
  stw       r8, 0x8(r3)
  stw       r7, 0x0(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80362E94
 * Size:	00004C
 */
void Game::Miulin::StateAttackStart::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x63C8(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  bl        -0x25BB20
  mr        r3, r31
  li        r4, 0
  li        r5, 0
  bl        -0x25DEBC
  mr        r3, r31
  bl        -0x2614FC
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80362EE0
 * Size:	000050
 */
void Game::Miulin::StateAttackStart::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r5, 0x188(r4)
  lbz       r0, 0x24(r5)
  cmplwi    r0, 0
  beq-      .loc_0x40
  lwz       r0, 0x1C(r5)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x40
  lwz       r12, 0x0(r3)
  li        r5, 0x3
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x40:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80362F30
 * Size:	000040
 */
void Game::Miulin::StateAttacking::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r7, 0x804E
  subi      r0, r5, 0x65C
  lis       r6, 0x804E
  stw       r0, 0x0(r3)
  lis       r5, 0x8049
  li        r8, 0
  addi      r7, r7, 0x2468
  stw       r4, 0x4(r3)
  addi      r4, r6, 0x23D8
  addi      r0, r5, 0x167C
  stw       r8, 0x8(r3)
  stw       r7, 0x0(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80362F70
 * Size:	000058
 */
void Game::Miulin::StateAttacking::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x63C8(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r3, r31
  bl        -0x25BC04
  mr        r3, r31
  li        r4, 0x1
  li        r5, 0
  bl        -0x25DFA0
  li        r0, 0x1
  stb       r0, 0x10(r30)
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
 * Address:	80362FC8
 * Size:	00082C
 */
void Game::Miulin::StateAttacking::exec( (Game::EnemyBase *))
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
  stw       r31, 0x9C(r1)
  stw       r30, 0x98(r1)
  mr        r30, r3
  mr        r31, r4
  lbz       r0, 0x10(r3)
  cmplwi    r0, 0
  beq-      .loc_0x54
  lfs       f1, 0x44C(r2)
  mr        r3, r31
  bl        0x2764

.loc_0x54:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x7F4
  lwz       r0, 0x1C(r3)
  cmpwi     r0, 0x3
  beq-      .loc_0x764
  bge-      .loc_0x80
  cmpwi     r0, 0x2
  bge-      .loc_0x8C
  b         .loc_0x7F4

.loc_0x80:
  cmpwi     r0, 0x3E8
  beq-      .loc_0x7A0
  b         .loc_0x7F4

.loc_0x8C:
  li        r0, 0
  mr        r4, r31
  stb       r0, 0x10(r30)
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x20(r1)
  mr        r3, r31
  lfs       f1, 0x24(r1)
  lfs       f0, 0x28(r1)
  stfs      f2, 0x70(r1)
  stfs      f1, 0x74(r1)
  stfs      f0, 0x78(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  lfs       f0, 0x428(r2)
  lwz       r3, 0xC0(r31)
  fcmpo     cr0, f2, f0
  lfs       f4, 0x90C(r3)
  bge-      .loc_0xF4
  fneg      f2, f2

.loc_0xF4:
  lfs       f3, 0x450(r2)
  lis       r3, 0x8050
  lfs       f0, 0x428(r2)
  addi      r4, r3, 0x71A0
  fmuls     f2, f2, f3
  fcmpo     cr0, f1, f0
  fctiwz    f0, f2
  stfd      f0, 0x80(r1)
  lwz       r0, 0x84(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f0, 0x4(r3)
  fmuls     f6, f4, f0
  bge-      .loc_0x150
  lfs       f0, 0x454(r2)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x88(r1)
  lwz       r0, 0x8C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f0, f0
  b         .loc_0x168

.loc_0x150:
  fmuls     f0, f1, f3
  fctiwz    f0, f0
  stfd      f0, 0x90(r1)
  lwz       r0, 0x94(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0

.loc_0x168:
  fmuls     f5, f4, f0
  lfs       f4, 0x428(r2)
  lfs       f2, 0x70(r1)
  lis       r4, 0x804B
  lfs       f0, 0x74(r1)
  li        r0, 0
  lfs       f1, 0x78(r1)
  fadds     f3, f2, f5
  fadds     f2, f0, f4
  lfs       f0, 0x458(r2)
  fadds     f1, f1, f6
  stfs      f5, 0x64(r1)
  lwz       r3, -0x6D0C(r13)
  stfs      f4, 0x68(r1)
  cmplwi    r0, 0
  fadds     f31, f0, f2
  stfs      f6, 0x6C(r1)
  fsubs     f30, f2, f0
  subi      r4, r4, 0x4364
  stfs      f3, 0x70(r1)
  stfs      f2, 0x74(r1)
  stfs      f1, 0x78(r1)
  lwz       r5, 0xC0(r31)
  lfs       f0, 0x5B4(r5)
  fmuls     f29, f0, f0
  stw       r4, 0x54(r1)
  stw       r0, 0x60(r1)
  stw       r0, 0x58(r1)
  stw       r3, 0x5C(r1)
  bne-      .loc_0x1F8
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x58(r1)
  b         .loc_0x420

.loc_0x1F8:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x58(r1)
  b         .loc_0x264

.loc_0x210:
  lwz       r3, 0x5C(r1)
  lwz       r4, 0x58(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x60(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x420
  lwz       r3, 0x5C(r1)
  lwz       r4, 0x58(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x58(r1)

.loc_0x264:
  lwz       r12, 0x54(r1)
  addi      r3, r1, 0x54
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x210
  b         .loc_0x420

.loc_0x284:
  lwz       r3, 0x5C(r1)
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
  beq-      .loc_0x364
  lwz       r0, 0xF4(r30)
  cmplw     r0, r31
  beq-      .loc_0x364
  mr        r4, r30
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x18(r1)
  lfs       f2, 0x14(r1)
  fcmpo     cr0, f31, f0
  lfs       f3, 0x1C(r1)
  ble-      .loc_0x364
  fcmpo     cr0, f30, f0
  bge-      .loc_0x364
  lfs       f0, 0x78(r1)
  lfs       f1, 0x70(r1)
  fsubs     f0, f0, f3
  fsubs     f1, f1, f2
  fmuls     f0, f0, f0
  fmadds    f0, f1, f1, f0
  fcmpo     cr0, f0, f29
  bge-      .loc_0x364
  lwz       r0, 0x230(r31)
  cmplw     r0, r30
  bne-      .loc_0x328
  li        r0, 0
  stw       r0, 0x230(r31)

.loc_0x328:
  lis       r3, 0x804B
  lfs       f0, 0x428(r2)
  subi      r0, r3, 0x5D00
  lis       r3, 0x804B
  stw       r0, 0x48(r1)
  addi      r0, r3, 0x48C0
  mr        r3, r30
  addi      r4, r1, 0x48
  stw       r31, 0x4C(r1)
  stw       r0, 0x48(r1)
  stfs      f0, 0x50(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x364:
  lwz       r0, 0x60(r1)
  cmplwi    r0, 0
  bne-      .loc_0x390
  lwz       r3, 0x5C(r1)
  lwz       r4, 0x58(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x58(r1)
  b         .loc_0x420

.loc_0x390:
  lwz       r3, 0x5C(r1)
  lwz       r4, 0x58(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x58(r1)
  b         .loc_0x404

.loc_0x3B0:
  lwz       r3, 0x5C(r1)
  lwz       r4, 0x58(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x60(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x420
  lwz       r3, 0x5C(r1)
  lwz       r4, 0x58(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x58(r1)

.loc_0x404:
  lwz       r12, 0x54(r1)
  addi      r3, r1, 0x54
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x3B0

.loc_0x420:
  lwz       r3, 0x5C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x58(r1)
  cmplw     r4, r3
  bne+      .loc_0x284
  li        r0, 0
  lwz       r3, -0x6D20(r13)
  lis       r4, 0x804B
  stw       r0, 0x44(r1)
  subi      r4, r4, 0x434C
  cmplwi    r0, 0
  stw       r4, 0x38(r1)
  stw       r0, 0x3C(r1)
  stw       r3, 0x40(r1)
  bne-      .loc_0x480
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)
  b         .loc_0x69C

.loc_0x480:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)
  b         .loc_0x4EC

.loc_0x498:
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x44(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x69C
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)

.loc_0x4EC:
  lwz       r12, 0x38(r1)
  addi      r3, r1, 0x38
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x498
  b         .loc_0x69C

.loc_0x50C:
  lwz       r3, 0x40(r1)
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
  beq-      .loc_0x5E0
  mr        r4, r30
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0xC(r1)
  lfs       f2, 0x8(r1)
  fcmpo     cr0, f31, f0
  lfs       f3, 0x10(r1)
  ble-      .loc_0x5E0
  fcmpo     cr0, f30, f0
  bge-      .loc_0x5E0
  lfs       f0, 0x78(r1)
  lfs       f1, 0x70(r1)
  fsubs     f0, f0, f3
  fsubs     f1, f1, f2
  fmuls     f0, f0, f0
  fmadds    f0, f1, f1, f0
  fcmpo     cr0, f0, f29
  bge-      .loc_0x5E0
  lwz       r0, 0x230(r31)
  cmplw     r0, r30
  bne-      .loc_0x5A4
  li        r0, 0
  stw       r0, 0x230(r31)

.loc_0x5A4:
  lis       r3, 0x804B
  lfs       f0, 0x45C(r2)
  subi      r0, r3, 0x5D00
  lis       r3, 0x804B
  stw       r0, 0x2C(r1)
  addi      r0, r3, 0x48C0
  mr        r3, r30
  addi      r4, r1, 0x2C
  stw       r31, 0x30(r1)
  stw       r0, 0x2C(r1)
  stfs      f0, 0x34(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x5E0:
  lwz       r0, 0x44(r1)
  cmplwi    r0, 0
  bne-      .loc_0x60C
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)
  b         .loc_0x69C

.loc_0x60C:
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)
  b         .loc_0x680

.loc_0x62C:
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x44(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x69C
  lwz       r3, 0x40(r1)
  lwz       r4, 0x3C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x3C(r1)

.loc_0x680:
  lwz       r12, 0x38(r1)
  addi      r3, r1, 0x38
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x62C

.loc_0x69C:
  lwz       r3, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x3C(r1)
  cmplw     r4, r3
  bne+      .loc_0x50C
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f4, 0x460(r2)
  li        r4, 0
  lfs       f30, 0x4C4(r5)
  lfs       f31, 0x4EC(r5)
  lfs       f28, 0x514(r5)
  fmr       f2, f30
  fmr       f3, f31
  lfs       f29, 0x53C(r5)
  fmr       f1, f28
  bl        -0x2501DC
  fmr       f1, f29
  lfs       f4, 0x460(r2)
  fmr       f2, f30
  mr        r3, r31
  fmr       f3, f31
  li        r4, 0
  bl        -0x2505B0
  fmr       f1, f28
  lfs       f4, 0x460(r2)
  fmr       f2, f30
  mr        r3, r31
  fmr       f3, f31
  li        r4, 0
  bl        -0x24FF58
  lfs       f2, 0x428(r2)
  mr        r3, r31
  lfs       f1, 0x464(r2)
  addi      r4, r1, 0x64
  stfs      f2, 0x20C(r31)
  lfs       f0, 0x468(r2)
  stfs      f1, 0x64(r1)
  stfs      f2, 0x68(r1)
  stfs      f0, 0x6C(r1)
  bl        0x276C
  lwz       r3, -0x6958(r13)
  addi      r5, r1, 0x70
  li        r4, 0xC
  li        r6, 0x2
  bl        -0x10FFA4
  b         .loc_0x7F4

.loc_0x764:
  lfs       f2, 0x46C(r2)
  mr        r3, r31
  lfs       f1, 0x428(r2)
  addi      r4, r1, 0x64
  lfs       f0, 0x470(r2)
  stfs      f2, 0x64(r1)
  stfs      f1, 0x68(r1)
  stfs      f0, 0x6C(r1)
  bl        0x2730
  lwz       r3, -0x6958(r13)
  addi      r5, r1, 0x70
  li        r4, 0xC
  li        r6, 0x2
  bl        -0x10FFE0
  b         .loc_0x7F4

.loc_0x7A0:
  li        r0, 0x4
  lfs       f0, 0x428(r2)
  stw       r0, 0x2C8(r31)
  lfs       f1, 0x200(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  beq-      .loc_0x7D4
  mr        r3, r31
  bl        0x1210
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x7D4
  li        r0, 0x3
  stw       r0, 0x2C8(r31)

.loc_0x7D4:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r6, 0
  lwz       r5, 0x2C8(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x7F4:
  psq_l     f31,0xD8(r1),0,0
  lfd       f31, 0xD0(r1)
  psq_l     f30,0xC8(r1),0,0
  lfd       f30, 0xC0(r1)
  psq_l     f29,0xB8(r1),0,0
  lfd       f29, 0xB0(r1)
  psq_l     f28,0xA8(r1),0,0
  lfd       f28, 0xA0(r1)
  lwz       r31, 0x9C(r1)
  lwz       r0, 0xE4(r1)
  lwz       r30, 0x98(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr
*/
}

/*
 * --INFO--
 * Address:	803637F4
 * Size:	000040
 */
void Game::Miulin::StateAttackEnd::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r7, 0x804E
  subi      r0, r5, 0x65C
  lis       r6, 0x804E
  stw       r0, 0x0(r3)
  lis       r5, 0x8049
  li        r8, 0
  addi      r7, r7, 0x2468
  stw       r4, 0x4(r3)
  addi      r4, r6, 0x23B4
  addi      r0, r5, 0x1688
  stw       r8, 0x8(r3)
  stw       r7, 0x0(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80363834
 * Size:	000054
 */
void Game::Miulin::StateAttackEnd::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x63C8(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  bl        -0x25C4C0
  mr        r3, r31
  li        r4, 0x2
  li        r5, 0
  bl        -0x25E85C
  li        r0, 0x5
  mr        r3, r31
  stw       r0, 0x2C8(r31)
  bl        -0x261EF4
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80363888
 * Size:	0000AC
 */
void Game::Miulin::StateAttackEnd::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, 0x428(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  lfs       f1, 0x200(r4)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x3C
  li        r0, 0x7
  stw       r0, 0x2C8(r31)
  b         .loc_0x58

.loc_0x3C:
  mr        r3, r31
  li        r4, 0
  bl        -0x24F274
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x58
  li        r0, 0x6
  stw       r0, 0x2C8(r31)

.loc_0x58:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x94
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x94
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r6, 0
  lwz       r5, 0x2C8(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x94:
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
 * Address:	80363934
 * Size:	00003C
 */
void Game::Miulin::StateTurn::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2468
  addi      r5, r5, 0x2390
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x474
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80363970
 * Size:	0000F4
 */
void Game::Miulin::StateTurn::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x10(r1)
  psq_st    f31,0x18(r1),0,0
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r31, r4
  lfs       f1, -0x63C8(r2)
  mr        r30, r3
  mr        r3, r31
  bl        -0x25C60C
  mr        r3, r31
  bl        0x1528
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x48
  mr        r3, r31
  bl        0x1F94

.loc_0x48:
  lwz       r3, 0xC0(r31)
  lbz       r0, 0x2E4(r31)
  lfs       f1, 0x43C(r2)
  lfs       f0, 0x8BC(r3)
  cmplwi    r0, 0
  lfs       f2, 0x438(r2)
  fmuls     f0, f1, f0
  fmuls     f31, f2, f0
  beq-      .loc_0x70
  lfs       f31, 0x47C(r2)

.loc_0x70:
  lfs       f1, 0x440(r2)
  mr        r3, r31
  bl        0x1D94
  fcmpo     cr0, f1, f31
  bge-      .loc_0xA8
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xD4

.loc_0xA8:
  mr        r3, r31
  li        r4, 0x8
  li        r5, 0
  bl        -0x25EA20
  lfs       f0, 0x428(r2)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  stfs      f0, 0x1C8(r31)
  stfs      f0, 0x1CC(r31)
  stfs      f0, 0x1D0(r31)

.loc_0xD4:
  psq_l     f31,0x18(r1),0,0
  lwz       r0, 0x24(r1)
  lfd       f31, 0x10(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80363A64
 * Size:	000178
 */
void Game::Miulin::StateTurn::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, 0x428(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  lfs       f1, 0x200(r4)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x44
  li        r0, 0x7
  mr        r3, r31
  stw       r0, 0x2C8(r31)
  bl        -0x25E800
  b         .loc_0xFC

.loc_0x44:
  mr        r3, r31
  li        r4, 0
  bl        -0x24F458
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x6C
  li        r0, 0x6
  mr        r3, r31
  stw       r0, 0x2C8(r31)
  bl        -0x25E828
  b         .loc_0xFC

.loc_0x6C:
  mr        r3, r31
  bl        0xEC4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x90
  li        r0, 0x2
  mr        r3, r31
  stw       r0, 0x2C8(r31)
  bl        -0x25E84C
  b         .loc_0xFC

.loc_0x90:
  mr        r3, r31
  bl        -0x25C7F8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xB8
  lfs       f1, 0x448(r2)
  mr        r3, r31
  lfs       f0, -0x63C8(r2)
  fmuls     f1, f1, f0
  bl        -0x25C784
  b         .loc_0xC0

.loc_0xB8:
  mr        r3, r31
  bl        0x13AC

.loc_0xC0:
  lfs       f1, 0x440(r2)
  mr        r3, r31
  bl        0x1C50
  lwz       r3, 0xC0(r31)
  lfs       f2, 0x43C(r2)
  lfs       f0, 0x8BC(r3)
  lfs       f3, 0x438(r2)
  fmuls     f0, f2, f0
  fmuls     f0, f3, f0
  fcmpo     cr0, f1, f0
  bge-      .loc_0xFC
  mr        r3, r31
  bl        -0x25E8B4
  li        r0, 0x1
  stw       r0, 0x2C8(r31)

.loc_0xFC:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x160
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x160
  lwz       r0, 0x2C8(r31)
  cmpwi     r0, 0
  bge-      .loc_0x140
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x1694
  li        r4, 0x1F1
  addi      r5, r5, 0x16A4
  crclr     6, 0x6
  bl        -0x339560

.loc_0x140:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r6, 0
  lwz       r5, 0x2C8(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x160:
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
 * Address:	80363BDC
 * Size:	00003C
 */
void Game::Miulin::StateFlick::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2468
  addi      r5, r5, 0x236C
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x480
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80363C18
 * Size:	00004C
 */
void Game::Miulin::StateFlick::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x63C8(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  bl        -0x25C8A4
  mr        r3, r31
  li        r4, 0x4
  li        r5, 0
  bl        -0x25EC40
  mr        r3, r31
  bl        -0x2622D0
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80363C64
 * Size:	000190
 */
void Game::Miulin::StateFlick::exec( (Game::EnemyBase *))
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
  stw       r30, 0x8(r1)
  mr        r31, r4
  mr        r30, r3
  lwz       r5, 0x188(r4)
  lbz       r0, 0x24(r5)
  cmplwi    r0, 0
  beq-      .loc_0x158
  lwz       r0, 0x1C(r5)
  cmplwi    r0, 0x3
  bne-      .loc_0xCC
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f4, 0x460(r2)
  li        r4, 0
  lfs       f30, 0x4C4(r5)
  lfs       f29, 0x4EC(r5)
  lfs       f28, 0x514(r5)
  fmr       f2, f30
  fmr       f3, f29
  lfs       f31, 0x53C(r5)
  fmr       f1, f28
  bl        -0x250814
  fmr       f1, f31
  lfs       f4, 0x460(r2)
  fmr       f2, f30
  mr        r3, r31
  fmr       f3, f29
  li        r4, 0
  bl        -0x250BE8
  fmr       f1, f28
  lfs       f4, 0x460(r2)
  fmr       f2, f30
  mr        r3, r31
  fmr       f3, f29
  li        r4, 0
  bl        -0x250590
  lfs       f0, 0x428(r2)
  stfs      f0, 0x20C(r31)
  b         .loc_0x158

.loc_0xCC:
  cmplwi    r0, 0x3E8
  bne-      .loc_0x158
  lfs       f1, 0x200(r31)
  lfs       f0, 0x428(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x104
  lwz       r12, 0x0(r3)
  li        r5, 0x7
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x158

.loc_0x104:
  mr        r3, r31
  bl        0xC2C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x138
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x158

.loc_0x138:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x5
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x158:
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  psq_l     f29,0x28(r1),0,0
  lfd       f29, 0x20(r1)
  psq_l     f28,0x18(r1),0,0
  lfd       f28, 0x10(r1)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x54(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	80363DF4
 * Size:	00003C
 */
void Game::Miulin::StateDead::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2468
  addi      r5, r5, 0x2348
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x488
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80363E30
 * Size:	000054
 */
void Game::Miulin::StateDead::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x63C8(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  bl        -0x25CABC
  mr        r3, r31
  li        r4, 0x3
  li        r5, 0
  bl        -0x25EE58
  mr        r3, r31
  bl        -0x2624E8
  mr        r3, r31
  bl        -0x25E74C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80363E84
 * Size:	000060
 */
void Game::Miulin::StateDead::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x188(r4)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x50
  lwz       r0, 0x1C(r3)
  cmpwi     r0, 0x3E8
  beq-      .loc_0x44
  bge-      .loc_0x50
  cmpwi     r0, 0x2
  beq-      .loc_0x38
  b         .loc_0x50

.loc_0x38:
  mr        r3, r4
  bl        0x1F94
  b         .loc_0x50

.loc_0x44:
  mr        r3, r4
  li        r4, 0
  bl        -0x228DE0

.loc_0x50:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
