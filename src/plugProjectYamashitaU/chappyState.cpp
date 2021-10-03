

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
 * Address:	80116648
 * Size:	000150
 */
void Game::ChappyBase::FSM::init( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x8
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x1A204
  li        r3, 0x10
  bl        -0xF27C4
  mr.       r4, r3
  beq-      .loc_0x38
  li        r4, 0x1
  bl        0x4C4
  mr        r4, r3

.loc_0x38:
  mr        r3, r31
  bl        0x1A284
  li        r3, 0x14
  bl        -0xF27E8
  mr.       r4, r3
  beq-      .loc_0x5C
  li        r4, 0
  bl        0x59C
  mr        r4, r3

.loc_0x5C:
  mr        r3, r31
  bl        0x1A260
  li        r3, 0x14
  bl        -0xF280C
  mr.       r4, r3
  beq-      .loc_0x80
  li        r4, 0x3
  bl        0xE58
  mr        r4, r3

.loc_0x80:
  mr        r3, r31
  bl        0x1A23C
  li        r3, 0x10
  bl        -0xF2830
  mr.       r4, r3
  beq-      .loc_0xA4
  li        r4, 0x4
  bl        0x1724
  mr        r4, r3

.loc_0xA4:
  mr        r3, r31
  bl        0x1A218
  li        r3, 0x10
  bl        -0xF2854
  mr.       r4, r3
  beq-      .loc_0xC8
  li        r4, 0x2
  bl        0x1DF0
  mr        r4, r3

.loc_0xC8:
  mr        r3, r31
  bl        0x1A1F4
  li        r3, 0x14
  bl        -0xF2878
  mr.       r4, r3
  beq-      .loc_0xEC
  li        r4, 0x5
  bl        0x2128
  mr        r4, r3

.loc_0xEC:
  mr        r3, r31
  bl        0x1A1D0
  li        r3, 0x14
  bl        -0xF289C
  mr.       r4, r3
  beq-      .loc_0x110
  li        r4, 0x6
  bl        0x2968
  mr        r4, r3

.loc_0x110:
  mr        r3, r31
  bl        0x1A1AC
  li        r3, 0x14
  bl        -0xF28C0
  mr.       r4, r3
  beq-      .loc_0x134
  li        r4, 0x7
  bl        .loc_0x150
  mr        r4, r3

.loc_0x134:
  mr        r3, r31
  bl        0x1A188
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
 * Address:	........
 * Size:	00003C
 */
void Game::ChappyBase::State::getNearestTarget( (Game::EnemyBase *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Game::ChappyBase::StateCautionBase::__ct( (int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000194
 */
void Game::ChappyBase::StateCautionBase::cautionProc( (Game::EnemyBase *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80116798
 * Size:	00003C
 */
void Game::ChappyBase::StateSleep::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804B
  subi      r0, r5, 0x65C
  lis       r5, 0x804B
  stw       r0, 0x0(r3)
  li        r7, 0
  subi      r6, r6, 0x3E60
  subi      r5, r5, 0x3EA8
  stw       r4, 0x4(r3)
  subi      r0, r2, 0x68B8
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801167D4
 * Size:	0000BC
 */
void Game::ChappyBase::StateSleep::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  beq-      .loc_0x48
  lbz       r0, 0x0(r5)
  cmplwi    r0, 0
  beq-      .loc_0x48
  mr        r3, r31
  li        r4, 0x4
  li        r5, 0
  bl        -0x11804
  lfs       f1, -0x68B0(r2)
  mr        r3, r31
  bl        -0x115EC
  b         .loc_0x58

.loc_0x48:
  mr        r3, r31
  li        r4, 0x6
  li        r5, 0
  bl        -0x11824

.loc_0x58:
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x230(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x54
  bne-      .loc_0x88
  mr        r3, r31
  bl        -0xF0D8
  b         .loc_0x94

.loc_0x88:
  lwz       r0, 0x1E0(r31)
  ori       r0, r0, 0x400
  stw       r0, 0x1E0(r31)

.loc_0x94:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x318(r12)
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
 * Address:	80116890
 * Size:	0001B0
 */
void Game::ChappyBase::StateSleep::exec( (Game::EnemyBase *))
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
  bl        -0xF568
  cmpwi     r3, 0x6
  bne-      .loc_0x8C
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x164
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x164
  lwz       r0, 0x1E0(r31)
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0x78
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x164

.loc_0x78:
  mr        r3, r31
  li        r4, 0x4
  li        r5, 0
  bl        -0x11910
  b         .loc_0x164

.loc_0x8C:
  mr        r3, r31
  bl        -0xF620
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xC8
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x2FC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC8
  mr        r3, r30
  mr        r4, r31
  li        r5, 0
  bl        0x184

.loc_0xC8:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x164
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0
  bne-      .loc_0xFC
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x324(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x164

.loc_0xFC:
  cmplwi    r0, 0x3
  bne-      .loc_0x11C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x328(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x164

.loc_0x11C:
  cmplwi    r0, 0x4
  bne-      .loc_0x13C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x330(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x164

.loc_0x13C:
  cmplwi    r0, 0x3E8
  bne-      .loc_0x164
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r6, 0
  lwz       r5, 0x10(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x164:
  lfs       f1, 0x200(r31)
  lfs       f0, -0x68C0(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x198
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x198:
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
 * Address:	80116A40
 * Size:	000098
 */
void Game::ChappyBase::StateSleep::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x68AC(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x300(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x54
  bne-      .loc_0x54
  mr        r3, r31
  bl        -0xF2F8
  b         .loc_0x5C

.loc_0x54:
  mr        r3, r31
  bl        -0xF32C

.loc_0x5C:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x314(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x328(r12)
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
 * Address:	80116AD8
 * Size:	000064
 */
void Game::ChappyBase::StateSleep::setNextState( (Game::EnemyBase *, int))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lfs       f1, -0x68A8(r2)
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x300(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  bl        -0x11878
  stw       r31, 0x10(r29)
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
 * Address:	80116B3C
 * Size:	000054
 */
void Game::ChappyBase::StateDead::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r8, 0x804B
  subi      r0, r5, 0x65C
  lis       r7, 0x804B
  stw       r0, 0x0(r3)
  lis       r6, 0x8048
  lis       r5, 0x804B
  li        r0, 0
  stw       r4, 0x4(r3)
  subi      r8, r8, 0x3E60
  subi      r7, r7, 0x3E84
  subi      r6, r6, 0x5158
  stw       r0, 0x8(r3)
  subi      r4, r5, 0x3ECC
  subi      r0, r2, 0x68A4
  stw       r8, 0x0(r3)
  stw       r7, 0x0(r3)
  stw       r6, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80116B90
 * Size:	000040
 */
void Game::ChappyBase::StateDead::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0x1
  mr        r3, r31
  bl        -0x11BAC
  mr        r3, r31
  bl        -0x11498
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80116BD0
 * Size:	000064
 */
void Game::ChappyBase::StateDead::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x188(r4)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x54
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x2
  bne-      .loc_0x40
  mr        r3, r4
  lwz       r12, 0x0(r4)
  lwz       r12, 0x30C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x54

.loc_0x40:
  cmplwi    r0, 0x3E8
  bne-      .loc_0x54
  mr        r3, r4
  li        r4, 0
  bl        0x244D0

.loc_0x54:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80116C34
 * Size:	000004
 */
void Game::ChappyBase::StateDead::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void Game::ChappyBase::StateTurnBase::__ct( (int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001E0
 */
void turnToTarget__Q34Game10ChappyBase13StateTurnBaseFPQ24Game9EnemyBaseR10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80116C38
 * Size:	000060
 */
void Game::ChappyBase::StateTurn::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r9, 0x804B
  subi      r0, r5, 0x65C
  lis       r8, 0x804B
  stw       r0, 0x0(r3)
  lis       r7, 0x8048
  lis       r6, 0x804B
  lis       r5, 0x804B
  stw       r4, 0x4(r3)
  li        r4, 0
  subi      r0, r9, 0x3E60
  subi      r8, r8, 0x3E84
  stw       r4, 0x8(r3)
  subi      r7, r7, 0x5158
  subi      r6, r6, 0x3EF0
  subi      r4, r5, 0x3F14
  stw       r0, 0x0(r3)
  subi      r0, r2, 0x6880
  stw       r8, 0x0(r3)
  stw       r7, 0xC(r3)
  stw       r6, 0x0(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80116C98
 * Size:	000058
 */
void Game::ChappyBase::StateTurn::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  bl        -0x152E4
  mr        r3, r31
  lfs       f1, -0x6878(r2)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x300(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  li        r4, 0x7
  li        r5, 0
  bl        -0x11CD4
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80116CF0
 * Size:	0007F0
 */
void Game::ChappyBase::StateTurn::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x190(r1)
  mflr      r0
  stw       r0, 0x194(r1)
  stfd      f31, 0x180(r1)
  psq_st    f31,0x188(r1),0,0
  stfd      f30, 0x170(r1)
  psq_st    f30,0x178(r1),0,0
  stfd      f29, 0x160(r1)
  psq_st    f29,0x168(r1),0,0
  stfd      f28, 0x150(r1)
  psq_st    f28,0x158(r1),0,0
  stfd      f27, 0x140(r1)
  psq_st    f27,0x148(r1),0,0
  stfd      f26, 0x130(r1)
  psq_st    f26,0x138(r1),0,0
  stfd      f25, 0x120(r1)
  psq_st    f25,0x128(r1),0,0
  stfd      f24, 0x110(r1)
  psq_st    f24,0x118(r1),0,0
  stw       r31, 0x10C(r1)
  stw       r30, 0x108(r1)
  stw       r29, 0x104(r1)
  stw       r28, 0x100(r1)
  mr        r31, r4
  mr        r30, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x2A
  beq-      .loc_0x84
  b         .loc_0xF4

.loc_0x84:
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  lfs       f24, 0x870(r5)
  fmr       f1, f24
  bl        -0x22C8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xAC
  li        r3, 0x1
  b         .loc_0xD0

.loc_0xAC:
  fmr       f1, f24
  mr        r3, r31
  li        r4, 0
  bl        -0x2674
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xCC
  li        r3, 0x1
  b         .loc_0xD0

.loc_0xCC:
  li        r3, 0

.loc_0xD0:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x160
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x200(r31)
  lfs       f0, 0x17C(r3)
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r3,r0,1,31,31
  b         .loc_0x160

.loc_0xF4:
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  lfs       f24, 0x3AC(r5)
  fmr       f1, f24
  bl        -0x2338
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x11C
  li        r3, 0x1
  b         .loc_0x140

.loc_0x11C:
  fmr       f1, f24
  mr        r3, r31
  li        r4, 0
  bl        -0x26E4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x13C
  li        r3, 0x1
  b         .loc_0x140

.loc_0x13C:
  li        r3, 0

.loc_0x140:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x160
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x200(r31)
  lfs       f0, 0x17C(r3)
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r3,r0,1,31,31

.loc_0x160:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x170
  lfs       f0, -0x68C0(r2)
  stfs      f0, 0x2CC(r31)

.loc_0x170:
  lwz       r3, 0xC0(r31)
  lfs       f2, 0x2CC(r31)
  lfs       f0, 0x62C(r3)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x1A4
  lwz       r3, -0x6514(r13)
  lfs       f0, -0x68BC(r2)
  lfs       f1, 0x54(r3)
  fadds     f1, f2, f1
  stfs      f1, 0x2CC(r31)
  stfs      f0, 0x2DC(r31)
  stfs      f0, 0x2E0(r31)
  b         .loc_0x1B8

.loc_0x1A4:
  lfs       f0, 0x424(r3)
  stfs      f0, 0x2DC(r31)
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x49C(r3)
  stfs      f0, 0x2E0(r31)

.loc_0x1B8:
  mr        r3, r31
  bl        -0xFBAC
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x720
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f1, 0x2E0(r31)
  li        r4, 0
  lfs       f2, 0x44C(r5)
  li        r5, 0
  li        r6, 0
  bl        -0x3E84
  cmplwi    r3, 0
  beq-      .loc_0x6D8
  stw       r3, 0x230(r31)
  addi      r3, r1, 0xC8
  lwz       r4, 0x230(r31)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f2, 0xC8(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0xD4
  lfs       f1, 0xCC(r1)
  lfs       f0, 0xD0(r1)
  lwz       r12, 0x8(r12)
  stfs      f2, 0xB0(r1)
  stfs      f1, 0xB4(r1)
  stfs      f0, 0xB8(r1)
  mtctr     r12
  bctrl     
  lfs       f5, 0xD4(r1)
  lis       r3, 0x8051
  lfs       f3, 0xDC(r1)
  subi      r3, r3, 0x2E20
  lfs       f1, 0xB0(r1)
  lfs       f0, 0xB8(r1)
  lfs       f4, 0xD8(r1)
  fsubs     f1, f1, f5
  fsubs     f2, f0, f3
  stfs      f5, 0xBC(r1)
  stfs      f4, 0xC0(r1)
  stfs      f3, 0xC4(r1)
  bl        -0xE1E54
  bl        0x2FAC70
  lwz       r12, 0x0(r31)
  fmr       f24, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f24
  bl        0x2FAC78
  mr        r4, r31
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x0(r31)
  fmr       f31, f1
  addi      r3, r1, 0x2C
  lfs       f28, 0x58C(r5)
  lwz       r12, 0x8(r12)
  li        r28, 0
  lfs       f30, 0x564(r5)
  lwz       r29, 0x230(r31)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r29)
  lfs       f29, 0x2C(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f0, 0x20(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x44
  fsubs     f25, f0, f29
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x38
  lwz       r12, 0x0(r29)
  lfs       f29, 0x48(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f0, 0x3C(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x5C
  fsubs     f24, f0, f29
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x50
  lwz       r12, 0x0(r29)
  lfs       f29, 0x64(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  fmuls     f1, f24, f24
  lfs       f2, 0x58(r1)
  fmuls     f0, f30, f30
  fsubs     f2, f2, f29
  fmadds    f1, f25, f25, f1
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x3A4
  lfs       f0, -0x688C(r2)
  fabs      f2, f31
  lfs       f1, -0x6890(r2)
  fmuls     f0, f0, f28
  frsp      f2, f2
  fmuls     f0, f1, f0
  fcmpo     cr0, f2, f0
  cror      2, 0, 0x2
  bne-      .loc_0x3A4
  li        r28, 0x1

.loc_0x3A4:
  rlwinm.   r0,r28,0,24,31
  beq-      .loc_0x3D8
  mr        r3, r31
  bl        -0x11E00
  mr        r3, r31
  lfs       f1, -0x68A8(r2)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x300(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x4
  stw       r0, 0x10(r30)
  b         .loc_0x6E8

.loc_0x3D8:
  mr        r4, r31
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x74
  lfs       f30, 0x2DC(r31)
  lwz       r12, 0x8(r12)
  lfs       f24, 0x3FC(r5)
  lfs       f25, 0x3D4(r5)
  lfs       f26, 0x3AC(r5)
  lwz       r28, 0x230(r31)
  mtctr     r12
  bctrl     
  mr        r4, r28
  addi      r3, r1, 0x68
  lwz       r12, 0x0(r28)
  lfs       f29, 0x74(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f0, 0x68(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x8C
  fsubs     f27, f0, f29
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r28
  addi      r3, r1, 0x80
  lwz       r12, 0x0(r28)
  lfs       f29, 0x90(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f0, 0x84(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0xA4
  fsubs     f28, f0, f29
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r28
  addi      r3, r1, 0x98
  lwz       r12, 0x0(r28)
  lfs       f29, 0xAC(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0xA0(r1)
  fmuls     f26, f26, f26
  fmuls     f25, f25, f25
  li        r3, 0x1
  fsubs     f0, f0, f29
  li        r4, 0
  fmuls     f0, f0, f0
  fmadds    f0, f27, f27, f0
  fcmpo     cr0, f0, f26
  ble-      .loc_0x4F0
  fcmpo     cr0, f0, f25
  mr        r0, r4
  ble-      .loc_0x4E4
  fabs      f0, f28
  frsp      f0, f0
  fcmpo     cr0, f0, f24
  bge-      .loc_0x4E4
  mr        r0, r3

.loc_0x4E4:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x4F0
  li        r4, 0x1

.loc_0x4F0:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x528
  lfs       f0, -0x688C(r2)
  fabs      f2, f31
  lfs       f1, -0x6890(r2)
  fmuls     f0, f0, f30
  frsp      f2, f2
  fmuls     f0, f1, f0
  fcmpo     cr0, f2, f0
  cror      2, 0, 0x2
  mfcr      r0
  rlwinm.   r0,r0,3,31,31
  beq-      .loc_0x528
  li        r3, 0

.loc_0x528:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x544
  li        r0, 0x5
  mr        r3, r31
  stw       r0, 0x10(r30)
  bl        -0x11F8C
  b         .loc_0x6E8

.loc_0x544:
  lwz       r4, 0x230(r31)
  addi      r3, r1, 0xE0
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f26, 0xE0(r1)
  li        r4, 0
  lfs       f27, 0xE8(r1)
  lfs       f1, 0x820(r5)
  bl        -0x2474
  cmpwi     r3, 0xA
  ble-      .loc_0x584
  li        r3, 0xA

.loc_0x584:
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xF4(r1)
  mr        r4, r31
  lwz       r5, 0xC0(r31)
  addi      r3, r1, 0x14
  stw       r0, 0xF0(r1)
  lfd       f1, -0x6888(r2)
  lfd       f0, 0xF0(r1)
  lfs       f2, -0x6898(r2)
  fsubs     f0, f0, f1
  lwz       r12, 0x0(r31)
  lfs       f1, -0x6894(r2)
  lfs       f3, -0x689C(r2)
  fmuls     f2, f2, f0
  lfs       f0, 0x334(r5)
  lwz       r12, 0x8(r12)
  lfs       f31, 0x58C(r5)
  fdivs     f1, f2, f1
  lfs       f24, 0x30C(r5)
  fsubs     f1, f3, f1
  fmuls     f25, f1, f0
  mtctr     r12
  bctrl     
  lfs       f4, 0x14(r1)
  lis       r3, 0x8051
  lfs       f0, 0x1C(r1)
  subi      r3, r3, 0x2E20
  lfs       f3, 0x18(r1)
  fsubs     f1, f26, f4
  fsubs     f2, f27, f0
  stfs      f4, 0x8(r1)
  stfs      f3, 0xC(r1)
  stfs      f0, 0x10(r1)
  bl        -0xE21F4
  bl        0x2FA8D0
  lwz       r12, 0x0(r31)
  fmr       f26, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f26
  bl        0x2FA8D8
  fmr       f30, f1
  lfs       f0, -0x688C(r2)
  lfs       f1, -0x6890(r2)
  fmuls     f0, f0, f25
  fmuls     f24, f30, f24
  fmuls     f1, f1, f0
  fabs      f0, f24
  frsp      f0, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x678
  lfs       f0, -0x68C0(r2)
  fcmpo     cr0, f24, f0
  ble-      .loc_0x674
  fmr       f24, f1
  b         .loc_0x678

.loc_0x674:
  fneg      f24, f1

.loc_0x678:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f24, f1
  bl        0x2FA850
  lfs       f0, -0x688C(r2)
  fabs      f2, f30
  stfs      f1, 0x1FC(r31)
  fmuls     f0, f0, f31
  lfs       f1, -0x6890(r2)
  lfs       f3, 0x1FC(r31)
  frsp      f2, f2
  fmuls     f0, f1, f0
  stfs      f3, 0x1A8(r31)
  fcmpo     cr0, f2, f0
  cror      2, 0, 0x2
  bne-      .loc_0x6E8
  li        r0, 0x3
  mr        r3, r31
  stw       r0, 0x10(r30)
  bl        -0x12120
  b         .loc_0x6E8

.loc_0x6D8:
  li        r0, 0x5
  mr        r3, r31
  stw       r0, 0x10(r30)
  bl        -0x12134

.loc_0x6E8:
  mr        r3, r31
  li        r4, 0x1
  bl        -0x2D88
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x75C
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x75C

.loc_0x720:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x75C
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x75C
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r6, 0
  lwz       r5, 0x10(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x75C:
  lfs       f1, 0x200(r31)
  lfs       f0, -0x68C0(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x790
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x790:
  psq_l     f31,0x188(r1),0,0
  lfd       f31, 0x180(r1)
  psq_l     f30,0x178(r1),0,0
  lfd       f30, 0x170(r1)
  psq_l     f29,0x168(r1),0,0
  lfd       f29, 0x160(r1)
  psq_l     f28,0x158(r1),0,0
  lfd       f28, 0x150(r1)
  psq_l     f27,0x148(r1),0,0
  lfd       f27, 0x140(r1)
  psq_l     f26,0x138(r1),0,0
  lfd       f26, 0x130(r1)
  psq_l     f25,0x128(r1),0,0
  lfd       f25, 0x120(r1)
  psq_l     f24,0x118(r1),0,0
  lfd       f24, 0x110(r1)
  lwz       r31, 0x10C(r1)
  lwz       r30, 0x108(r1)
  lwz       r29, 0x104(r1)
  lwz       r0, 0x194(r1)
  lwz       r28, 0x100(r1)
  mtlr      r0
  addi      r1, r1, 0x190
  blr
*/
}

/*
 * --INFO--
 * Address:	801174E0
 * Size:	000038
 */
void Game::ChappyBase::StateTurn::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  bl        -0x15B7C
  mr        r3, r31
  bl        -0x10164
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80117518
 * Size:	000054
 */
void Game::ChappyBase::StateWalk::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r8, 0x804B
  subi      r0, r5, 0x65C
  lis       r7, 0x804B
  stw       r0, 0x0(r3)
  lis       r6, 0x8048
  lis       r5, 0x804B
  li        r0, 0
  stw       r4, 0x4(r3)
  subi      r8, r8, 0x3E60
  subi      r7, r7, 0x3E84
  subi      r6, r6, 0x5158
  stw       r0, 0x8(r3)
  subi      r4, r5, 0x3F38
  subi      r0, r2, 0x6874
  stw       r8, 0x0(r3)
  stw       r7, 0x0(r3)
  stw       r6, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8011756C
 * Size:	000058
 */
void Game::ChappyBase::StateWalk::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  bl        -0x15BB8
  mr        r3, r31
  lfs       f1, -0x6878(r2)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x300(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  li        r4, 0x3
  li        r5, 0
  bl        -0x125A8
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
 * Size:	000074
 */
void Game::ChappyBase::StateWalk::setNextState( (Game::EnemyBase *, int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801175C4
 * Size:	0007FC
 */
void Game::ChappyBase::StateWalk::exec( (Game::EnemyBase *))
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
  stfd      f29, 0x140(r1)
  psq_st    f29,0x148(r1),0,0
  stfd      f28, 0x130(r1)
  psq_st    f28,0x138(r1),0,0
  stfd      f27, 0x120(r1)
  psq_st    f27,0x128(r1),0,0
  stfd      f26, 0x110(r1)
  psq_st    f26,0x118(r1),0,0
  stfd      f25, 0x100(r1)
  psq_st    f25,0x108(r1),0,0
  stfd      f24, 0xF0(r1)
  psq_st    f24,0xF8(r1),0,0
  stw       r31, 0xEC(r1)
  stw       r30, 0xE8(r1)
  stw       r29, 0xE4(r1)
  stw       r28, 0xE0(r1)
  mr        r31, r4
  mr        r30, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x2A
  beq-      .loc_0x84
  b         .loc_0xF4

.loc_0x84:
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  lfs       f24, 0x870(r5)
  fmr       f1, f24
  bl        -0x2B9C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xAC
  li        r3, 0x1
  b         .loc_0xD0

.loc_0xAC:
  fmr       f1, f24
  mr        r3, r31
  li        r4, 0
  bl        -0x2F48
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xCC
  li        r3, 0x1
  b         .loc_0xD0

.loc_0xCC:
  li        r3, 0

.loc_0xD0:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x160
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x200(r31)
  lfs       f0, 0x17C(r3)
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r3,r0,1,31,31
  b         .loc_0x160

.loc_0xF4:
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  lfs       f24, 0x3AC(r5)
  fmr       f1, f24
  bl        -0x2C0C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x11C
  li        r3, 0x1
  b         .loc_0x140

.loc_0x11C:
  fmr       f1, f24
  mr        r3, r31
  li        r4, 0
  bl        -0x2FB8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x13C
  li        r3, 0x1
  b         .loc_0x140

.loc_0x13C:
  li        r3, 0

.loc_0x140:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x160
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x200(r31)
  lfs       f0, 0x17C(r3)
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r3,r0,1,31,31

.loc_0x160:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x170
  lfs       f0, -0x68C0(r2)
  stfs      f0, 0x2CC(r31)

.loc_0x170:
  lwz       r3, 0xC0(r31)
  lfs       f2, 0x2CC(r31)
  lfs       f0, 0x62C(r3)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x1A4
  lwz       r3, -0x6514(r13)
  lfs       f0, -0x68BC(r2)
  lfs       f1, 0x54(r3)
  fadds     f1, f2, f1
  stfs      f1, 0x2CC(r31)
  stfs      f0, 0x2DC(r31)
  stfs      f0, 0x2E0(r31)
  b         .loc_0x1B8

.loc_0x1A4:
  lfs       f0, 0x424(r3)
  stfs      f0, 0x2DC(r31)
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x49C(r3)
  stfs      f0, 0x2E0(r31)

.loc_0x1B8:
  mr        r3, r31
  bl        -0x10480
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x72C
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f1, 0x2E0(r31)
  li        r4, 0
  lfs       f2, 0x44C(r5)
  li        r5, 0
  li        r6, 0
  bl        -0x4758
  cmplwi    r3, 0
  beq-      .loc_0x624
  stw       r3, 0x230(r31)
  addi      r3, r1, 0xBC
  lwz       r4, 0x230(r31)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f2, 0xBC(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0xC8
  lfs       f1, 0xC0(r1)
  lfs       f0, 0xC4(r1)
  lwz       r12, 0x8(r12)
  stfs      f2, 0xA4(r1)
  stfs      f1, 0xA8(r1)
  stfs      f0, 0xAC(r1)
  mtctr     r12
  bctrl     
  lfs       f5, 0xC8(r1)
  lis       r3, 0x8051
  lfs       f3, 0xD0(r1)
  subi      r3, r3, 0x2E20
  lfs       f1, 0xA4(r1)
  lfs       f0, 0xAC(r1)
  lfs       f4, 0xCC(r1)
  fsubs     f1, f1, f5
  fsubs     f2, f0, f3
  stfs      f5, 0xB0(r1)
  stfs      f4, 0xB4(r1)
  stfs      f3, 0xB8(r1)
  bl        -0xE2728
  bl        0x2FA39C
  lwz       r12, 0x0(r31)
  fmr       f24, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f24
  bl        0x2FA3A4
  mr        r4, r31
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x0(r31)
  fmr       f31, f1
  addi      r3, r1, 0x14
  lfs       f28, 0x58C(r5)
  lwz       r12, 0x8(r12)
  li        r28, 0
  lfs       f30, 0x564(r5)
  lwz       r29, 0x230(r31)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r29)
  lfs       f29, 0x14(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f0, 0x8(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x2C
  fsubs     f25, f0, f29
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r29)
  lfs       f29, 0x30(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f0, 0x24(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x44
  fsubs     f24, f0, f29
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x38
  lwz       r12, 0x0(r29)
  lfs       f29, 0x4C(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  fmuls     f1, f24, f24
  lfs       f2, 0x40(r1)
  fmuls     f0, f30, f30
  fsubs     f2, f2, f29
  fmadds    f1, f25, f25, f1
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x3A4
  lfs       f0, -0x688C(r2)
  fabs      f2, f31
  lfs       f1, -0x6890(r2)
  fmuls     f0, f0, f28
  frsp      f2, f2
  fmuls     f0, f1, f0
  fcmpo     cr0, f2, f0
  cror      2, 0, 0x2
  bne-      .loc_0x3A4
  li        r28, 0x1

.loc_0x3A4:
  rlwinm.   r0,r28,0,24,31
  beq-      .loc_0x3F4
  li        r0, 0x4
  mr        r3, r31
  stw       r0, 0x10(r30)
  bl        -0x126DC
  lfs       f0, -0x68C0(r2)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  lwz       r0, 0x10(r30)
  cmpwi     r0, 0x4
  bne-      .loc_0x634
  mr        r3, r31
  lfs       f1, -0x68A8(r2)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x300(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x634

.loc_0x3F4:
  mr        r4, r31
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x68
  lfs       f30, 0x2DC(r31)
  lwz       r12, 0x8(r12)
  lfs       f24, 0x3FC(r5)
  lfs       f25, 0x3D4(r5)
  lfs       f26, 0x3AC(r5)
  lwz       r28, 0x230(r31)
  mtctr     r12
  bctrl     
  mr        r4, r28
  addi      r3, r1, 0x5C
  lwz       r12, 0x0(r28)
  lfs       f29, 0x68(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f0, 0x5C(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x80
  fsubs     f27, f0, f29
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r28
  addi      r3, r1, 0x74
  lwz       r12, 0x0(r28)
  lfs       f29, 0x84(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f0, 0x78(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x98
  fsubs     f28, f0, f29
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r28
  addi      r3, r1, 0x8C
  lwz       r12, 0x0(r28)
  lfs       f29, 0xA0(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x94(r1)
  fmuls     f26, f26, f26
  fmuls     f25, f25, f25
  li        r3, 0x1
  fsubs     f0, f0, f29
  li        r4, 0
  fmuls     f0, f0, f0
  fmadds    f0, f27, f27, f0
  fcmpo     cr0, f0, f26
  ble-      .loc_0x50C
  fcmpo     cr0, f0, f25
  mr        r0, r4
  ble-      .loc_0x500
  fabs      f0, f28
  frsp      f0, f0
  fcmpo     cr0, f0, f24
  bge-      .loc_0x500
  mr        r0, r3

.loc_0x500:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x50C
  li        r4, 0x1

.loc_0x50C:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x544
  lfs       f0, -0x688C(r2)
  fabs      f2, f31
  lfs       f1, -0x6890(r2)
  fmuls     f0, f0, f30
  frsp      f2, f2
  fmuls     f0, f1, f0
  fcmpo     cr0, f2, f0
  cror      2, 0, 0x2
  mfcr      r0
  rlwinm.   r0,r0,3,31,31
  beq-      .loc_0x544
  li        r3, 0

.loc_0x544:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x594
  li        r0, 0x5
  mr        r3, r31
  stw       r0, 0x10(r30)
  bl        -0x1287C
  lfs       f0, -0x68C0(r2)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  lwz       r0, 0x10(r30)
  cmpwi     r0, 0x4
  bne-      .loc_0x634
  mr        r3, r31
  lfs       f1, -0x68A8(r2)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x300(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x634

.loc_0x594:
  lwz       r5, 0xC0(r31)
  fabs      f2, f31
  lfs       f0, -0x688C(r2)
  lfs       f3, 0x424(r5)
  lfs       f1, -0x6890(r2)
  frsp      f2, f2
  fmuls     f0, f0, f3
  fmuls     f0, f1, f0
  fcmpo     cr0, f2, f0
  cror      2, 0, 0x2
  bne-      .loc_0x5DC
  lwz       r4, 0x230(r31)
  mr        r3, r31
  lfs       f1, 0x2E4(r5)
  lfs       f2, 0x30C(r5)
  lfs       f3, 0x334(r5)
  bl        -0x2798
  b         .loc_0x634

.loc_0x5DC:
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x10(r30)
  bl        -0x1290C
  lfs       f0, -0x68C0(r2)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  lwz       r0, 0x10(r30)
  cmpwi     r0, 0x4
  bne-      .loc_0x634
  mr        r3, r31
  lfs       f1, -0x68A8(r2)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x300(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x634

.loc_0x624:
  li        r0, 0x5
  mr        r3, r31
  stw       r0, 0x10(r30)
  bl        -0x12954

.loc_0x634:
  mr        r4, r31
  addi      r3, r1, 0x50
  lwz       r12, 0x0(r31)
  lfs       f24, 0x198(r31)
  lwz       r12, 0x8(r12)
  lfs       f25, 0x19C(r31)
  lfs       f26, 0x1A0(r31)
  mtctr     r12
  bctrl     
  lfs       f0, 0x54(r1)
  lfs       f2, 0x50(r1)
  fsubs     f3, f0, f25
  lfs       f1, 0x58(r1)
  fsubs     f2, f2, f24
  lfs       f0, -0x68C0(r2)
  fsubs     f1, f1, f26
  fmuls     f3, f3, f3
  fmuls     f4, f1, f1
  fmadds    f1, f2, f2, f3
  fadds     f1, f4, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x69C
  ble-      .loc_0x6A0
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x6A0

.loc_0x69C:
  fmr       f1, f0

.loc_0x6A0:
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x35C(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x6F4
  li        r0, 0x5
  mr        r3, r31
  stw       r0, 0x10(r30)
  bl        -0x129E0
  lfs       f0, -0x68C0(r2)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  lwz       r0, 0x10(r30)
  cmpwi     r0, 0x4
  bne-      .loc_0x6F4
  mr        r3, r31
  lfs       f1, -0x68A8(r2)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x300(r12)
  mtctr     r12
  bctrl     

.loc_0x6F4:
  mr        r3, r31
  li        r4, 0x1
  bl        -0x3668
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x768
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x768

.loc_0x72C:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x768
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x768
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r6, 0
  lwz       r5, 0x10(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x768:
  lfs       f1, 0x200(r31)
  lfs       f0, -0x68C0(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x79C
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x79C:
  psq_l     f31,0x168(r1),0,0
  lfd       f31, 0x160(r1)
  psq_l     f30,0x158(r1),0,0
  lfd       f30, 0x150(r1)
  psq_l     f29,0x148(r1),0,0
  lfd       f29, 0x140(r1)
  psq_l     f28,0x138(r1),0,0
  lfd       f28, 0x130(r1)
  psq_l     f27,0x128(r1),0,0
  lfd       f27, 0x120(r1)
  psq_l     f26,0x118(r1),0,0
  lfd       f26, 0x110(r1)
  psq_l     f25,0x108(r1),0,0
  lfd       f25, 0x100(r1)
  psq_l     f24,0xF8(r1),0,0
  lfd       f24, 0xF0(r1)
  lwz       r31, 0xEC(r1)
  lwz       r30, 0xE8(r1)
  lwz       r29, 0xE4(r1)
  lwz       r0, 0x174(r1)
  lwz       r28, 0xE0(r1)
  mtlr      r0
  addi      r1, r1, 0x170
  blr
*/
}

/*
 * --INFO--
 * Address:	80117DC0
 * Size:	000048
 */
void Game::ChappyBase::StateWalk::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  bl        -0x1645C
  mr        r3, r31
  bl        -0x10A44
  lfs       f0, -0x68C0(r2)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80117E08
 * Size:	000054
 */
void Game::ChappyBase::StateAttack::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r8, 0x804B
  subi      r0, r5, 0x65C
  lis       r7, 0x804B
  stw       r0, 0x0(r3)
  lis       r6, 0x8048
  lis       r5, 0x804B
  li        r0, 0
  stw       r4, 0x4(r3)
  subi      r8, r8, 0x3E60
  subi      r7, r7, 0x3E84
  subi      r6, r6, 0x5158
  stw       r0, 0x8(r3)
  subi      r4, r5, 0x3F5C
  subi      r0, r2, 0x686C
  stw       r8, 0x0(r3)
  stw       r7, 0x0(r3)
  stw       r6, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80117E5C
 * Size:	000048
 */
void Game::ChappyBase::StateAttack::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  bl        -0x164A8
  mr        r3, r31
  li        r4, 0
  li        r5, 0
  bl        -0x12E80
  mr        r3, r31
  bl        -0x10AF0
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80117EA4
 * Size:	00033C
 */
void Game::ChappyBase::StateAttack::exec( (Game::EnemyBase *))
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
  mr        r31, r4
  mr        r30, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x2A
  beq-      .loc_0x48
  b         .loc_0xB8

.loc_0x48:
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  lfs       f31, 0x870(r5)
  fmr       f1, f31
  bl        -0x3440
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x70
  li        r3, 0x1
  b         .loc_0x94

.loc_0x70:
  fmr       f1, f31
  mr        r3, r31
  li        r4, 0
  bl        -0x37EC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x90
  li        r3, 0x1
  b         .loc_0x94

.loc_0x90:
  li        r3, 0

.loc_0x94:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x124
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x200(r31)
  lfs       f0, 0x17C(r3)
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r3,r0,1,31,31
  b         .loc_0x124

.loc_0xB8:
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  lfs       f31, 0x3AC(r5)
  fmr       f1, f31
  bl        -0x34B0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xE0
  li        r3, 0x1
  b         .loc_0x104

.loc_0xE0:
  fmr       f1, f31
  mr        r3, r31
  li        r4, 0
  bl        -0x385C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x100
  li        r3, 0x1
  b         .loc_0x104

.loc_0x100:
  li        r3, 0

.loc_0x104:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x124
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x200(r31)
  lfs       f0, 0x17C(r3)
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r3,r0,1,31,31

.loc_0x124:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x134
  lfs       f0, -0x68C0(r2)
  stfs      f0, 0x2CC(r31)

.loc_0x134:
  lwz       r3, 0xC0(r31)
  lfs       f2, 0x2CC(r31)
  lfs       f0, 0x62C(r3)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x168
  lwz       r3, -0x6514(r13)
  lfs       f0, -0x68BC(r2)
  lfs       f1, 0x54(r3)
  fadds     f1, f2, f1
  stfs      f1, 0x2CC(r31)
  stfs      f0, 0x2DC(r31)
  stfs      f0, 0x2E0(r31)
  b         .loc_0x17C

.loc_0x168:
  lfs       f0, 0x424(r3)
  stfs      f0, 0x2DC(r31)
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x49C(r3)
  stfs      f0, 0x2E0(r31)

.loc_0x17C:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x2E4
  mr        r3, r31
  bl        -0x10CEC
  cmpwi     r3, 0x8
  beq-      .loc_0x26C
  bge-      .loc_0x2D8
  cmpwi     r3, 0
  beq-      .loc_0x1AC
  b         .loc_0x2D8

.loc_0x1AC:
  lwz       r3, 0x188(r31)
  lwz       r0, 0x1C(r3)
  cmpwi     r0, 0x4
  beq-      .loc_0x25C
  bge-      .loc_0x1D0
  cmpwi     r0, 0x2
  beq-      .loc_0x1DC
  bge-      .loc_0x244
  b         .loc_0x2E4

.loc_0x1D0:
  cmpwi     r0, 0x3E8
  beq-      .loc_0x25C
  b         .loc_0x2E4

.loc_0x1DC:
  lwz       r6, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  li        r5, 0
  lfs       f1, 0x5B4(r6)
  lfs       f2, 0x5DC(r6)
  lfs       f3, 0x604(r6)
  bl        -0x3E3C
  mr        r29, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x310(r12)
  mtctr     r12
  bctrl     
  add.      r29, r29, r3
  bne-      .loc_0x22C
  mr        r3, r31
  li        r4, 0x8
  li        r5, 0
  bl        -0x130C8

.loc_0x22C:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x304(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2E4

.loc_0x244:
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  lfs       f1, 0x848(r5)
  bl        -0x4274
  b         .loc_0x2E4

.loc_0x25C:
  mr        r3, r30
  mr        r4, r31
  bl        .loc_0x33C
  b         .loc_0x2E4

.loc_0x26C:
  lwz       r3, 0x188(r31)
  lwz       r0, 0x1C(r3)
  cmpwi     r0, 0x3
  beq-      .loc_0x2B0
  bge-      .loc_0x28C
  cmpwi     r0, 0x2
  bge-      .loc_0x298
  b         .loc_0x2E4

.loc_0x28C:
  cmpwi     r0, 0x3E8
  beq-      .loc_0x2C8
  b         .loc_0x2E4

.loc_0x298:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2E4

.loc_0x2B0:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x330(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2E4

.loc_0x2C8:
  mr        r3, r30
  mr        r4, r31
  bl        .loc_0x33C
  b         .loc_0x2E4

.loc_0x2D8:
  mr        r3, r30
  mr        r4, r31
  bl        .loc_0x33C

.loc_0x2E4:
  lfs       f1, 0x200(r31)
  lfs       f0, -0x68C0(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x318
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x318:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x33C:
*/
}

/*
 * --INFO--
 * Address:	801181E0
 * Size:	0002F0
 */
void Game::ChappyBase::StateAttack::transitState( (Game::EnemyBase *))
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
  stw       r31, 0x8C(r1)
  stw       r30, 0x88(r1)
  stw       r29, 0x84(r1)
  stw       r28, 0x80(r1)
  mr        r29, r4
  mr        r28, r3
  lwz       r5, 0xC0(r4)
  mr        r3, r29
  lfs       f1, 0x2E0(r4)
  li        r4, 0
  lfs       f2, 0x44C(r5)
  li        r5, 0
  li        r6, 0
  bl        -0x5200
  cmplwi    r3, 0
  beq-      .loc_0x280
  stw       r3, 0x230(r29)
  addi      r3, r1, 0x68
  lwz       r4, 0x230(r29)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  lfs       f2, 0x68(r1)
  lwz       r12, 0x0(r29)
  addi      r3, r1, 0x74
  lfs       f1, 0x6C(r1)
  lfs       f0, 0x70(r1)
  lwz       r12, 0x8(r12)
  stfs      f2, 0x50(r1)
  stfs      f1, 0x54(r1)
  stfs      f0, 0x58(r1)
  mtctr     r12
  bctrl     
  lfs       f5, 0x74(r1)
  lis       r3, 0x8051
  lfs       f3, 0x7C(r1)
  subi      r3, r3, 0x2E20
  lfs       f1, 0x50(r1)
  lfs       f0, 0x58(r1)
  lfs       f4, 0x78(r1)
  fsubs     f1, f1, f5
  fsubs     f2, f0, f3
  stfs      f5, 0x5C(r1)
  stfs      f4, 0x60(r1)
  stfs      f3, 0x64(r1)
  bl        -0xE31D0
  bl        0x2F98F4
  lwz       r12, 0x0(r29)
  fmr       f26, f1
  mr        r3, r29
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f26
  bl        0x2F98FC
  mr        r4, r29
  lwz       r5, 0xC0(r29)
  lwz       r12, 0x0(r29)
  fmr       f30, f1
  addi      r3, r1, 0x14
  lfs       f28, 0x58C(r5)
  lwz       r12, 0x8(r12)
  li        r30, 0
  lfs       f29, 0x564(r5)
  lwz       r31, 0x230(r29)
  mtctr     r12
  bctrl     
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lfs       f31, 0x14(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  lfs       f0, 0x8(r1)
  lwz       r12, 0x0(r29)
  addi      r3, r1, 0x2C
  fsubs     f26, f0, f31
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r31)
  lfs       f31, 0x30(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  lfs       f0, 0x24(r1)
  lwz       r12, 0x0(r29)
  addi      r3, r1, 0x44
  fsubs     f27, f0, f31
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  addi      r3, r1, 0x38
  lwz       r12, 0x0(r31)
  lfs       f31, 0x4C(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  fmuls     f1, f27, f27
  lfs       f2, 0x40(r1)
  fmuls     f0, f29, f29
  fsubs     f2, f2, f31
  fmadds    f1, f26, f26, f1
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x230
  lfs       f0, -0x688C(r2)
  fabs      f2, f30
  lfs       f1, -0x6890(r2)
  fmuls     f0, f0, f28
  frsp      f2, f2
  fmuls     f0, f1, f0
  fcmpo     cr0, f2, f0
  cror      2, 0, 0x2
  bne-      .loc_0x230
  li        r30, 0x1

.loc_0x230:
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0x25C
  mr        r3, r28
  mr        r4, r29
  lwz       r12, 0x0(r28)
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2A0

.loc_0x25C:
  mr        r3, r28
  mr        r4, r29
  lwz       r12, 0x0(r28)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2A0

.loc_0x280:
  mr        r3, r28
  mr        r4, r29
  lwz       r12, 0x0(r28)
  li        r5, 0x5
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x2A0:
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
  lwz       r31, 0x8C(r1)
  lwz       r30, 0x88(r1)
  lwz       r29, 0x84(r1)
  lwz       r0, 0xF4(r1)
  lwz       r28, 0x80(r1)
  mtlr      r0
  addi      r1, r1, 0xF0
  blr
*/
}

/*
 * --INFO--
 * Address:	801184D0
 * Size:	000024
 */
void Game::ChappyBase::StateAttack::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  bl        -0x16B64
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801184F4
 * Size:	000004
 */
void Game::ChappyBase::StateAttack::doDirectDraw( (Game::EnemyBase *, Graphics &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801184F8
 * Size:	000054
 */
void Game::ChappyBase::StateFlick::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r8, 0x804B
  subi      r0, r5, 0x65C
  lis       r7, 0x804B
  stw       r0, 0x0(r3)
  lis       r6, 0x8048
  lis       r5, 0x804B
  li        r0, 0
  stw       r4, 0x4(r3)
  subi      r8, r8, 0x3E60
  subi      r7, r7, 0x3E84
  subi      r6, r6, 0x5158
  stw       r0, 0x8(r3)
  subi      r4, r5, 0x3F80
  subi      r0, r2, 0x6864
  stw       r8, 0x0(r3)
  stw       r7, 0x0(r3)
  stw       r6, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8011854C
 * Size:	000078
 */
void Game::ChappyBase::StateFlick::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  bl        -0x16B98
  mr        r3, r31
  li        r4, 0x2
  li        r5, 0
  bl        -0x13570
  mr        r3, r31
  lfs       f1, -0x6878(r2)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x300(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r31)
  mr        r3, r31
  rlwinm    r0,r0,0,27,25
  stw       r0, 0x1E0(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x32C(r12)
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
 * Address:	801185C4
 * Size:	00023C
 */
void Game::ChappyBase::StateFlick::exec( (Game::EnemyBase *))
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
  mr        r30, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x2A
  beq-      .loc_0x44
  b         .loc_0xB4

.loc_0x44:
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  lfs       f31, 0x870(r5)
  fmr       f1, f31
  bl        -0x3B5C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x6C
  li        r3, 0x1
  b         .loc_0x90

.loc_0x6C:
  fmr       f1, f31
  mr        r3, r31
  li        r4, 0
  bl        -0x3F08
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x8C
  li        r3, 0x1
  b         .loc_0x90

.loc_0x8C:
  li        r3, 0

.loc_0x90:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x120
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x200(r31)
  lfs       f0, 0x17C(r3)
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r3,r0,1,31,31
  b         .loc_0x120

.loc_0xB4:
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  lfs       f31, 0x3AC(r5)
  fmr       f1, f31
  bl        -0x3BCC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xDC
  li        r3, 0x1
  b         .loc_0x100

.loc_0xDC:
  fmr       f1, f31
  mr        r3, r31
  li        r4, 0
  bl        -0x3F78
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xFC
  li        r3, 0x1
  b         .loc_0x100

.loc_0xFC:
  li        r3, 0

.loc_0x100:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x120
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x200(r31)
  lfs       f0, 0x17C(r3)
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r3,r0,1,31,31

.loc_0x120:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x130
  lfs       f0, -0x68C0(r2)
  stfs      f0, 0x2CC(r31)

.loc_0x130:
  lwz       r3, 0xC0(r31)
  lfs       f2, 0x2CC(r31)
  lfs       f0, 0x62C(r3)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x164
  lwz       r3, -0x6514(r13)
  lfs       f0, -0x68BC(r2)
  lfs       f1, 0x54(r3)
  fadds     f1, f2, f1
  stfs      f1, 0x2CC(r31)
  stfs      f0, 0x2DC(r31)
  stfs      f0, 0x2E0(r31)
  b         .loc_0x178

.loc_0x164:
  lfs       f0, 0x424(r3)
  stfs      f0, 0x2DC(r31)
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x49C(r3)
  stfs      f0, 0x2E0(r31)

.loc_0x178:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x1E8
  lwz       r0, 0x1C(r3)
  cmpwi     r0, 0x3E8
  beq-      .loc_0x1C4
  bge-      .loc_0x1E8
  cmpwi     r0, 0x2
  beq-      .loc_0x1A4
  b         .loc_0x1E8

.loc_0x1A4:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x308(r12)
  mtctr     r12
  bctrl     
  lfs       f0, -0x68C0(r2)
  stfs      f0, 0x20C(r31)
  b         .loc_0x1E8

.loc_0x1C4:
  mr        r3, r30
  lwz       r5, 0x8(r30)
  lwz       r12, 0x0(r30)
  mr        r4, r31
  lwz       r5, 0x18(r5)
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x1E8:
  lfs       f1, 0x200(r31)
  lfs       f0, -0x68C0(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x21C
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x21C:
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
 * Address:	80118800
 * Size:	000054
 */
void Game::ChappyBase::StateFlick::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  bl        -0x16E9C
  mr        r3, r31
  lfs       f1, -0x68AC(r2)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x300(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r31)
  ori       r0, r0, 0x20
  stw       r0, 0x1E0(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80118854
 * Size:	000064
 */
void Game::ChappyBase::StateTurnToHome::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r9, 0x804B
  subi      r0, r5, 0x65C
  lis       r8, 0x804B
  stw       r0, 0x0(r3)
  lis       r7, 0x8048
  lis       r6, 0x804B
  lis       r5, 0x804B
  stw       r4, 0x4(r3)
  li        r10, 0
  lis       r4, 0x8048
  subi      r0, r9, 0x3E60
  stw       r10, 0x8(r3)
  subi      r8, r8, 0x3E84
  subi      r7, r7, 0x5158
  subi      r6, r6, 0x3EF0
  stw       r0, 0x0(r3)
  subi      r5, r5, 0x3FA4
  subi      r0, r4, 0x5144
  stw       r8, 0x0(r3)
  stw       r7, 0xC(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801188B8
 * Size:	000150
 */
void Game::ChappyBase::StateTurnToHome::init( (Game::EnemyBase *, Game::StateArg *))
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
  lfs       f0, -0x68C0(r2)
  mr        r31, r4
  mr        r30, r3
  addi      r3, r1, 0x8
  stfs      f0, 0x1D4(r4)
  stfs      f0, 0x1D8(r4)
  stfs      f0, 0x1DC(r4)
  lwz       r12, 0x0(r4)
  lfs       f31, 0x198(r4)
  lwz       r12, 0x8(r12)
  lfs       f30, 0x19C(r4)
  lfs       f29, 0x1A0(r4)
  mtctr     r12
  bctrl     
  lfs       f0, 0xC(r1)
  lfs       f2, 0x8(r1)
  fsubs     f3, f0, f30
  lfs       f1, 0x10(r1)
  fsubs     f2, f2, f31
  lfs       f0, -0x68C0(r2)
  fsubs     f1, f1, f29
  fmuls     f3, f3, f3
  fmuls     f4, f1, f1
  fmadds    f1, f2, f2, f3
  fadds     f1, f4, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0xA8
  ble-      .loc_0xAC
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0xAC

.loc_0xA8:
  fmr       f1, f0

.loc_0xAC:
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x384(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xE0
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x7
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x120

.loc_0xE0:
  lwz       r0, 0x1E0(r31)
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0x110
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x120

.loc_0x110:
  mr        r3, r31
  li        r4, 0x6
  li        r5, 0
  bl        -0x139D0

.loc_0x120:
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  psq_l     f29,0x28(r1),0,0
  lfd       f29, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r0, 0x54(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	80118A08
 * Size:	0006AC
 */
void Game::ChappyBase::StateTurnToHome::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x110(r1)
  mflr      r0
  stw       r0, 0x114(r1)
  stfd      f31, 0x100(r1)
  psq_st    f31,0x108(r1),0,0
  stfd      f30, 0xF0(r1)
  psq_st    f30,0xF8(r1),0,0
  stfd      f29, 0xE0(r1)
  psq_st    f29,0xE8(r1),0,0
  stfd      f28, 0xD0(r1)
  psq_st    f28,0xD8(r1),0,0
  stfd      f27, 0xC0(r1)
  psq_st    f27,0xC8(r1),0,0
  stfd      f26, 0xB0(r1)
  psq_st    f26,0xB8(r1),0,0
  stw       r31, 0xAC(r1)
  stw       r30, 0xA8(r1)
  stw       r29, 0xA4(r1)
  stw       r28, 0xA0(r1)
  mr        r31, r4
  mr        r30, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x2A
  beq-      .loc_0x74
  b         .loc_0xE4

.loc_0x74:
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  lfs       f28, 0x870(r5)
  fmr       f1, f28
  bl        -0x3FD0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x9C
  li        r3, 0x1
  b         .loc_0xC0

.loc_0x9C:
  fmr       f1, f28
  mr        r3, r31
  li        r4, 0
  bl        -0x437C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xBC
  li        r3, 0x1
  b         .loc_0xC0

.loc_0xBC:
  li        r3, 0

.loc_0xC0:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x150
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x200(r31)
  lfs       f0, 0x17C(r3)
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r3,r0,1,31,31
  b         .loc_0x150

.loc_0xE4:
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  lfs       f28, 0x3AC(r5)
  fmr       f1, f28
  bl        -0x4040
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x10C
  li        r3, 0x1
  b         .loc_0x130

.loc_0x10C:
  fmr       f1, f28
  mr        r3, r31
  li        r4, 0
  bl        -0x43EC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x12C
  li        r3, 0x1
  b         .loc_0x130

.loc_0x12C:
  li        r3, 0

.loc_0x130:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x150
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x200(r31)
  lfs       f0, 0x17C(r3)
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r3,r0,1,31,31

.loc_0x150:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x160
  lfs       f0, -0x68C0(r2)
  stfs      f0, 0x2CC(r31)

.loc_0x160:
  lwz       r3, 0xC0(r31)
  lfs       f2, 0x2CC(r31)
  lfs       f0, 0x62C(r3)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x194
  lwz       r3, -0x6514(r13)
  lfs       f0, -0x68BC(r2)
  lfs       f1, 0x54(r3)
  fadds     f1, f2, f1
  stfs      f1, 0x2CC(r31)
  stfs      f0, 0x2DC(r31)
  stfs      f0, 0x2E0(r31)
  b         .loc_0x1A8

.loc_0x194:
  lfs       f0, 0x424(r3)
  stfs      f0, 0x2DC(r31)
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x49C(r3)
  stfs      f0, 0x2E0(r31)

.loc_0x1A8:
  mr        r3, r31
  bl        -0x1186C
  cmpwi     r3, 0x6
  bne-      .loc_0x218
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x628
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x628
  lwz       r0, 0x1E0(r31)
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0x204
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x628

.loc_0x204:
  mr        r3, r31
  li        r4, 0x7
  li        r5, 0
  bl        -0x13C14
  b         .loc_0x628

.loc_0x218:
  mr        r3, r31
  li        r4, 0x1
  bl        -0x45D0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x240
  mr        r3, r31
  bl        -0x13998
  li        r0, 0x2
  stw       r0, 0x10(r30)
  b         .loc_0x628

.loc_0x240:
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f26, 0x198(r31)
  li        r4, 0
  lfs       f27, 0x1A0(r31)
  lfs       f1, 0x820(r5)
  bl        -0x3E70
  cmpwi     r3, 0xA
  ble-      .loc_0x268
  li        r3, 0xA

.loc_0x268:
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x9C(r1)
  mr        r4, r31
  lwz       r5, 0xC0(r31)
  addi      r3, r1, 0x8C
  stw       r0, 0x98(r1)
  lfd       f1, -0x6888(r2)
  lfd       f0, 0x98(r1)
  lfs       f2, -0x6898(r2)
  fsubs     f0, f0, f1
  lwz       r12, 0x0(r31)
  lfs       f1, -0x6894(r2)
  lfs       f3, -0x689C(r2)
  fmuls     f2, f2, f0
  lfs       f0, 0x334(r5)
  lwz       r12, 0x8(r12)
  lfs       f30, 0x58C(r5)
  fdivs     f1, f2, f1
  lfs       f29, 0x30C(r5)
  fsubs     f1, f3, f1
  fmuls     f31, f1, f0
  mtctr     r12
  bctrl     
  lfs       f4, 0x8C(r1)
  lis       r3, 0x8051
  lfs       f0, 0x94(r1)
  subi      r3, r3, 0x2E20
  lfs       f3, 0x90(r1)
  fsubs     f1, f26, f4
  fsubs     f2, f27, f0
  stfs      f4, 0x80(r1)
  stfs      f3, 0x84(r1)
  stfs      f0, 0x88(r1)
  bl        -0xE3BF0
  bl        0x2F8ED4
  lwz       r12, 0x0(r31)
  fmr       f26, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f26
  bl        0x2F8EDC
  fmr       f28, f1
  lfs       f0, -0x688C(r2)
  lfs       f1, -0x6890(r2)
  fmuls     f0, f0, f31
  fmuls     f29, f28, f29
  fmuls     f1, f1, f0
  fabs      f0, f29
  frsp      f0, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x35C
  lfs       f0, -0x68C0(r2)
  fcmpo     cr0, f29, f0
  ble-      .loc_0x358
  fmr       f29, f1
  b         .loc_0x35C

.loc_0x358:
  fneg      f29, f1

.loc_0x35C:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f29, f1
  bl        0x2F8E54
  lfs       f0, -0x688C(r2)
  fabs      f2, f28
  stfs      f1, 0x1FC(r31)
  fmuls     f0, f0, f30
  lfs       f1, -0x6890(r2)
  lfs       f3, 0x1FC(r31)
  frsp      f2, f2
  fmuls     f0, f1, f0
  stfs      f3, 0x1A8(r31)
  fcmpo     cr0, f2, f0
  cror      2, 0, 0x2
  bne-      .loc_0x3BC
  mr        r3, r31
  bl        -0x13B14
  li        r0, 0x6
  stw       r0, 0x10(r30)
  b         .loc_0x5E8

.loc_0x3BC:
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f1, 0x2E0(r31)
  li        r4, 0
  lfs       f2, 0x44C(r5)
  li        r5, 0
  li        r6, 0
  bl        -0x5D90
  cmplwi    r3, 0
  beq-      .loc_0x5CC
  stw       r3, 0x230(r31)
  addi      r3, r1, 0x68
  lwz       r29, 0x230(r31)
  lwz       r5, 0xC0(r31)
  mr        r4, r29
  lwz       r12, 0x0(r29)
  lfs       f30, 0x58C(r5)
  lwz       r12, 0x8(r12)
  lfs       f31, 0x564(r5)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f2, 0x68(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x74
  lfs       f1, 0x6C(r1)
  lfs       f0, 0x70(r1)
  lwz       r12, 0x8(r12)
  stfs      f2, 0x50(r1)
  stfs      f1, 0x54(r1)
  stfs      f0, 0x58(r1)
  mtctr     r12
  bctrl     
  lfs       f5, 0x74(r1)
  lis       r3, 0x8051
  lfs       f3, 0x7C(r1)
  subi      r3, r3, 0x2E20
  lfs       f1, 0x50(r1)
  lfs       f0, 0x58(r1)
  lfs       f4, 0x78(r1)
  fsubs     f1, f1, f5
  fsubs     f2, f0, f3
  stfs      f5, 0x5C(r1)
  stfs      f4, 0x60(r1)
  stfs      f3, 0x64(r1)
  bl        -0xE3D70
  bl        0x2F8D54
  lwz       r12, 0x0(r31)
  fmr       f26, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f26
  bl        0x2F8D5C
  mr        r4, r31
  fmr       f28, f1
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x14
  li        r28, 0
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r29)
  lfs       f29, 0x14(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f0, 0x8(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x2C
  fsubs     f26, f0, f29
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r29)
  lfs       f29, 0x30(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f0, 0x24(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x44
  fsubs     f27, f0, f29
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x38
  lwz       r12, 0x0(r29)
  lfs       f29, 0x4C(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  fmuls     f1, f27, f27
  lfs       f2, 0x40(r1)
  fmuls     f0, f31, f31
  fsubs     f2, f2, f29
  fmadds    f1, f26, f26, f1
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x598
  lfs       f0, -0x688C(r2)
  fabs      f2, f28
  lfs       f1, -0x6890(r2)
  fmuls     f0, f0, f30
  frsp      f2, f2
  fmuls     f0, f1, f0
  fcmpo     cr0, f2, f0
  cror      2, 0, 0x2
  bne-      .loc_0x598
  li        r28, 0x1

.loc_0x598:
  rlwinm.   r0,r28,0,24,31
  beq-      .loc_0x5E8
  mr        r3, r31
  bl        -0x13D0C
  mr        r3, r31
  lfs       f1, -0x68A8(r2)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x300(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x4
  stw       r0, 0x10(r30)
  b         .loc_0x5E8

.loc_0x5CC:
  lwz       r0, 0x1E0(r31)
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0x5E8
  mr        r3, r31
  bl        -0x13D44
  li        r0, 0
  stw       r0, 0x10(r30)

.loc_0x5E8:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x628
  lwz       r0, 0x1C(r3)
  cmpwi     r0, 0x3E8
  beq-      .loc_0x608
  b         .loc_0x628

.loc_0x608:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r6, 0
  lwz       r5, 0x10(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x628:
  lfs       f1, 0x200(r31)
  lfs       f0, -0x68C0(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x65C
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x65C:
  psq_l     f31,0x108(r1),0,0
  lfd       f31, 0x100(r1)
  psq_l     f30,0xF8(r1),0,0
  lfd       f30, 0xF0(r1)
  psq_l     f29,0xE8(r1),0,0
  lfd       f29, 0xE0(r1)
  psq_l     f28,0xD8(r1),0,0
  lfd       f28, 0xD0(r1)
  psq_l     f27,0xC8(r1),0,0
  lfd       f27, 0xC0(r1)
  psq_l     f26,0xB8(r1),0,0
  lfd       f26, 0xB0(r1)
  lwz       r31, 0xAC(r1)
  lwz       r30, 0xA8(r1)
  lwz       r29, 0xA4(r1)
  lwz       r0, 0x114(r1)
  lwz       r28, 0xA0(r1)
  mtlr      r0
  addi      r1, r1, 0x110
  blr
*/
}

/*
 * --INFO--
 * Address:	801190B4
 * Size:	000004
 */
void Game::ChappyBase::StateTurnToHome::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801190B8
 * Size:	000054
 */
void Game::ChappyBase::StateGoHome::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r8, 0x804B
  subi      r0, r5, 0x65C
  lis       r7, 0x804B
  stw       r0, 0x0(r3)
  lis       r6, 0x8048
  lis       r5, 0x804B
  li        r0, 0
  stw       r4, 0x4(r3)
  subi      r8, r8, 0x3E60
  subi      r7, r7, 0x3E84
  subi      r6, r6, 0x5158
  stw       r0, 0x8(r3)
  subi      r4, r5, 0x3FC8
  subi      r0, r2, 0x685C
  stw       r8, 0x0(r3)
  stw       r7, 0x0(r3)
  stw       r6, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8011910C
 * Size:	00002C
 */
void Game::ChappyBase::StateGoHome::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  li        r4, 0x3
  stw       r0, 0x14(r1)
  li        r5, 0
  bl        -0x14120
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80119138
 * Size:	0005C4
 */
void Game::ChappyBase::StateGoHome::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x110(r1)
  mflr      r0
  stw       r0, 0x114(r1)
  stfd      f31, 0x100(r1)
  psq_st    f31,0x108(r1),0,0
  stfd      f30, 0xF0(r1)
  psq_st    f30,0xF8(r1),0,0
  stfd      f29, 0xE0(r1)
  psq_st    f29,0xE8(r1),0,0
  stfd      f28, 0xD0(r1)
  psq_st    f28,0xD8(r1),0,0
  stfd      f27, 0xC0(r1)
  psq_st    f27,0xC8(r1),0,0
  stfd      f26, 0xB0(r1)
  psq_st    f26,0xB8(r1),0,0
  stw       r31, 0xAC(r1)
  stw       r30, 0xA8(r1)
  stw       r29, 0xA4(r1)
  stw       r28, 0xA0(r1)
  mr        r31, r4
  mr        r30, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x2A
  beq-      .loc_0x74
  b         .loc_0xE4

.loc_0x74:
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  lfs       f28, 0x870(r5)
  fmr       f1, f28
  bl        -0x4700
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x9C
  li        r3, 0x1
  b         .loc_0xC0

.loc_0x9C:
  fmr       f1, f28
  mr        r3, r31
  li        r4, 0
  bl        -0x4AAC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xBC
  li        r3, 0x1
  b         .loc_0xC0

.loc_0xBC:
  li        r3, 0

.loc_0xC0:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x150
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x200(r31)
  lfs       f0, 0x17C(r3)
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r3,r0,1,31,31
  b         .loc_0x150

.loc_0xE4:
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  lfs       f28, 0x3AC(r5)
  fmr       f1, f28
  bl        -0x4770
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x10C
  li        r3, 0x1
  b         .loc_0x130

.loc_0x10C:
  fmr       f1, f28
  mr        r3, r31
  li        r4, 0
  bl        -0x4B1C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x12C
  li        r3, 0x1
  b         .loc_0x130

.loc_0x12C:
  li        r3, 0

.loc_0x130:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x150
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x200(r31)
  lfs       f0, 0x17C(r3)
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r3,r0,1,31,31

.loc_0x150:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x160
  lfs       f0, -0x68C0(r2)
  stfs      f0, 0x2CC(r31)

.loc_0x160:
  lwz       r3, 0xC0(r31)
  lfs       f2, 0x2CC(r31)
  lfs       f0, 0x62C(r3)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x194
  lwz       r3, -0x6514(r13)
  lfs       f0, -0x68BC(r2)
  lfs       f1, 0x54(r3)
  fadds     f1, f2, f1
  stfs      f1, 0x2CC(r31)
  stfs      f0, 0x2DC(r31)
  stfs      f0, 0x2E0(r31)
  b         .loc_0x1A8

.loc_0x194:
  lfs       f0, 0x424(r3)
  stfs      f0, 0x2DC(r31)
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x49C(r3)
  stfs      f0, 0x2E0(r31)

.loc_0x1A8:
  mr        r3, r31
  li        r4, 0x1
  bl        -0x4C90
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1E0
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x540

.loc_0x1E0:
  lfs       f1, 0x19C(r31)
  mr        r3, r31
  lfs       f2, 0x1A0(r31)
  addi      r4, r1, 0x8C
  lfs       f0, 0x198(r31)
  stfs      f0, 0x8C(r1)
  stfs      f1, 0x90(r1)
  stfs      f2, 0x94(r1)
  lwz       r5, 0xC0(r31)
  lfs       f1, 0x2E4(r5)
  lfs       f2, 0x30C(r5)
  lfs       f3, 0x334(r5)
  bl        -0x3D6C
  mr        r4, r31
  addi      r3, r1, 0x80
  lwz       r12, 0x0(r31)
  lfs       f26, 0x198(r31)
  lwz       r12, 0x8(r12)
  lfs       f27, 0x19C(r31)
  lfs       f28, 0x1A0(r31)
  mtctr     r12
  bctrl     
  lfs       f0, 0x84(r1)
  lfs       f2, 0x80(r1)
  fsubs     f3, f0, f27
  lfs       f1, 0x88(r1)
  fsubs     f2, f2, f26
  lfs       f0, -0x68C0(r2)
  fsubs     f1, f1, f28
  fmuls     f3, f3, f3
  fmuls     f4, f1, f1
  fmadds    f1, f2, f2, f3
  fadds     f1, f4, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x27C
  ble-      .loc_0x280
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x280

.loc_0x27C:
  fmr       f1, f0

.loc_0x280:
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x384(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x2B0
  mr        r3, r31
  bl        -0x1412C
  lfs       f0, -0x68C0(r2)
  li        r0, 0x7
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  stw       r0, 0x10(r30)

.loc_0x2B0:
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f1, 0x2E0(r31)
  li        r4, 0
  lfs       f2, 0x44C(r5)
  li        r5, 0
  li        r6, 0
  bl        -0x63B4
  cmplwi    r3, 0
  beq-      .loc_0x4E4
  stw       r3, 0x230(r31)
  addi      r3, r1, 0x68
  lwz       r29, 0x230(r31)
  lwz       r5, 0xC0(r31)
  mr        r4, r29
  lwz       r12, 0x0(r29)
  lfs       f30, 0x58C(r5)
  lwz       r12, 0x8(r12)
  lfs       f31, 0x564(r5)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f2, 0x68(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x74
  lfs       f1, 0x6C(r1)
  lfs       f0, 0x70(r1)
  lwz       r12, 0x8(r12)
  stfs      f2, 0x50(r1)
  stfs      f1, 0x54(r1)
  stfs      f0, 0x58(r1)
  mtctr     r12
  bctrl     
  lfs       f5, 0x74(r1)
  lis       r3, 0x8051
  lfs       f3, 0x7C(r1)
  subi      r3, r3, 0x2E20
  lfs       f1, 0x50(r1)
  lfs       f0, 0x58(r1)
  lfs       f4, 0x78(r1)
  fsubs     f1, f1, f5
  fsubs     f2, f0, f3
  stfs      f5, 0x5C(r1)
  stfs      f4, 0x60(r1)
  stfs      f3, 0x64(r1)
  bl        -0xE4394
  bl        0x2F8730
  lwz       r12, 0x0(r31)
  fmr       f26, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f26
  bl        0x2F8738
  mr        r4, r31
  fmr       f28, f1
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x14
  li        r28, 0
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r29)
  lfs       f29, 0x14(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f0, 0x8(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x2C
  fsubs     f26, f0, f29
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r29)
  lfs       f29, 0x30(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f0, 0x24(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x44
  fsubs     f27, f0, f29
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x38
  lwz       r12, 0x0(r29)
  lfs       f29, 0x4C(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  fmuls     f1, f27, f27
  lfs       f2, 0x40(r1)
  fmuls     f0, f31, f31
  fsubs     f2, f2, f29
  fmadds    f1, f26, f26, f1
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x48C
  lfs       f0, -0x688C(r2)
  fabs      f2, f28
  lfs       f1, -0x6890(r2)
  fmuls     f0, f0, f30
  frsp      f2, f2
  fmuls     f0, f1, f0
  fcmpo     cr0, f2, f0
  cror      2, 0, 0x2
  bne-      .loc_0x48C
  li        r28, 0x1

.loc_0x48C:
  rlwinm.   r0,r28,0,24,31
  beq-      .loc_0x4D0
  mr        r3, r31
  bl        -0x14330
  lfs       f0, -0x68C0(r2)
  mr        r3, r31
  lfs       f1, -0x68A8(r2)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x300(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x4
  stw       r0, 0x10(r30)
  b         .loc_0x500

.loc_0x4D0:
  mr        r3, r31
  bl        -0x1436C
  li        r0, 0x3
  stw       r0, 0x10(r30)
  b         .loc_0x500

.loc_0x4E4:
  lwz       r0, 0x1E0(r31)
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0x500
  mr        r3, r31
  bl        -0x1438C
  li        r0, 0
  stw       r0, 0x10(r30)

.loc_0x500:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x540
  lwz       r0, 0x1C(r3)
  cmpwi     r0, 0x3E8
  beq-      .loc_0x520
  b         .loc_0x540

.loc_0x520:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r6, 0
  lwz       r5, 0x10(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x540:
  lfs       f1, 0x200(r31)
  lfs       f0, -0x68C0(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x574
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x574:
  psq_l     f31,0x108(r1),0,0
  lfd       f31, 0x100(r1)
  psq_l     f30,0xF8(r1),0,0
  lfd       f30, 0xF0(r1)
  psq_l     f29,0xE8(r1),0,0
  lfd       f29, 0xE0(r1)
  psq_l     f28,0xD8(r1),0,0
  lfd       f28, 0xD0(r1)
  psq_l     f27,0xC8(r1),0,0
  lfd       f27, 0xC0(r1)
  psq_l     f26,0xB8(r1),0,0
  lfd       f26, 0xB0(r1)
  lwz       r31, 0xAC(r1)
  lwz       r30, 0xA8(r1)
  lwz       r29, 0xA4(r1)
  lwz       r0, 0x114(r1)
  lwz       r28, 0xA0(r1)
  mtlr      r0
  addi      r1, r1, 0x110
  blr
*/
}

/*
 * --INFO--
 * Address:	801196FC
 * Size:	000014
 */
void Game::ChappyBase::StateGoHome::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  lfs       f0, -0x68C0(r2)
  stfs      f0, 0x1D4(r4)
  stfs      f0, 0x1D8(r4)
  stfs      f0, 0x1DC(r4)
  blr
*/
}
