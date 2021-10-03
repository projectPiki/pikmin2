

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
 * Address:	80290724
 * Size:	000328
 */
void Game::SnakeCrow::FSM::init( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x9
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x15FED8
  li        r3, 0x10
  bl        -0x26C8A0
  mr.       r4, r3
  beq-      .loc_0x64
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r7, 0
  subi      r6, r5, 0x4BF4
  subi      r5, r2, 0x2968
  stw       r7, 0x4(r4)
  subi      r0, r3, 0x4C18
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x64:
  mr        r3, r31
  bl        -0x15FE84
  li        r3, 0x10
  bl        -0x26C8F0
  mr.       r4, r3
  beq-      .loc_0xB8
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x1
  li        r7, 0
  subi      r6, r5, 0x4BF4
  stw       r0, 0x4(r4)
  subi      r5, r2, 0x2960
  subi      r0, r3, 0x4C3C
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0xB8:
  mr        r3, r31
  bl        -0x15FED8
  li        r3, 0x10
  bl        -0x26C944
  mr.       r4, r3
  beq-      .loc_0x10C
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x2
  li        r7, 0
  subi      r6, r5, 0x4BF4
  stw       r0, 0x4(r4)
  subi      r5, r2, 0x2958
  subi      r0, r3, 0x4C60
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x10C:
  mr        r3, r31
  bl        -0x15FF2C
  li        r3, 0x10
  bl        -0x26C998
  mr.       r4, r3
  beq-      .loc_0x160
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x3
  li        r7, 0
  subi      r6, r5, 0x4BF4
  stw       r0, 0x4(r4)
  subi      r5, r2, 0x2950
  subi      r0, r3, 0x4C84
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x160:
  mr        r3, r31
  bl        -0x15FF80
  li        r3, 0x10
  bl        -0x26C9EC
  mr.       r4, r3
  beq-      .loc_0x1B8
  lis       r3, 0x804B
  lis       r6, 0x804D
  subi      r0, r3, 0x65C
  lis       r5, 0x8049
  stw       r0, 0x0(r4)
  li        r0, 0x4
  lis       r3, 0x804D
  li        r7, 0
  stw       r0, 0x4(r4)
  subi      r6, r6, 0x4BF4
  subi      r5, r5, 0x7C28
  subi      r0, r3, 0x4CA8
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x1B8:
  mr        r3, r31
  bl        -0x15FFD8
  li        r3, 0x10
  bl        -0x26CA44
  mr.       r4, r3
  beq-      .loc_0x20C
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x5
  li        r7, 0
  subi      r6, r5, 0x4BF4
  stw       r0, 0x4(r4)
  subi      r5, r2, 0x2948
  subi      r0, r3, 0x4CE0
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x20C:
  mr        r3, r31
  bl        -0x16002C
  li        r3, 0x10
  bl        -0x26CA98
  mr.       r4, r3
  beq-      .loc_0x260
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x6
  li        r7, 0
  subi      r6, r5, 0x4BF4
  stw       r0, 0x4(r4)
  subi      r5, r2, 0x2940
  subi      r0, r3, 0x4D04
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x260:
  mr        r3, r31
  bl        -0x160080
  li        r3, 0x10
  bl        -0x26CAEC
  mr.       r4, r3
  beq-      .loc_0x2B4
  lis       r3, 0x804B
  lis       r5, 0x804D
  subi      r0, r3, 0x65C
  lis       r3, 0x804D
  stw       r0, 0x0(r4)
  li        r0, 0x7
  li        r7, 0
  subi      r6, r5, 0x4BF4
  stw       r0, 0x4(r4)
  subi      r5, r2, 0x2938
  subi      r0, r3, 0x4D28
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x2B4:
  mr        r3, r31
  bl        -0x1600D4
  li        r3, 0x10
  bl        -0x26CB40
  mr.       r4, r3
  beq-      .loc_0x30C
  lis       r3, 0x804B
  lis       r6, 0x804D
  subi      r0, r3, 0x65C
  lis       r5, 0x8049
  stw       r0, 0x0(r4)
  li        r0, 0x8
  lis       r3, 0x804D
  li        r7, 0
  stw       r0, 0x4(r4)
  subi      r6, r6, 0x4BF4
  subi      r5, r5, 0x7C1C
  subi      r0, r3, 0x4D4C
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x30C:
  mr        r3, r31
  bl        -0x16012C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80290A4C
 * Size:	0000C4
 */
void Game::SnakeCrow::StateDead::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r4
  mr        r3, r31
  bl        -0x18B344
  lwz       r0, 0x1E0(r31)
  mr        r3, r31
  lfs       f0, -0x2934(r2)
  rlwinm    r0,r0,0,26,24
  stw       r0, 0x1E0(r31)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x18F10C
  mr        r3, r31
  li        r4, 0
  li        r5, 0
  bl        -0x18BA94
  mr        r3, r31
  bl        0x4EF0
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  addi      r5, r1, 0x14
  lfs       f1, 0xC(r1)
  li        r4, 0
  lfs       f0, 0x10(r1)
  li        r6, 0x2
  stfs      f2, 0x14(r1)
  lwz       r3, -0x6960(r13)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  bl        -0x3E8A8
  lwz       r3, -0x6958(r13)
  addi      r5, r1, 0x14
  li        r4, 0xD
  li        r6, 0x2
  bl        -0x3D378
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80290B10
 * Size:	000170
 */
void Game::SnakeCrow::StateDead::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r4
  lwz       r3, 0x188(r4)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x15C
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x2
  bne-      .loc_0x40
  lfs       f1, -0x2930(r2)
  mr        r3, r31
  bl        0x4F10
  b         .loc_0x15C

.loc_0x40:
  cmplwi    r0, 0x3
  bne-      .loc_0xD0
  mr        r3, r31
  bl        0x4524
  mr        r3, r31
  bl        0x4E60
  mr        r3, r31
  bl        0x4DF4
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x264(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x14(r1)
  addi      r5, r1, 0x2C
  lfs       f1, 0x18(r1)
  li        r4, 0
  lfs       f0, 0x1C(r1)
  li        r6, 0x2
  stfs      f2, 0x2C(r1)
  lwz       r3, -0x6960(r13)
  stfs      f1, 0x30(r1)
  stfs      f0, 0x34(r1)
  bl        -0x3E988
  lwz       r3, -0x6958(r13)
  addi      r5, r1, 0x2C
  li        r4, 0xB
  li        r6, 0x2
  bl        -0x3D458
  b         .loc_0x15C

.loc_0xD0:
  cmplwi    r0, 0x4
  bne-      .loc_0xE8
  lfs       f1, -0x292C(r2)
  mr        r3, r31
  bl        0x4E68
  b         .loc_0x15C

.loc_0xE8:
  cmplwi    r0, 0x5
  bne-      .loc_0x148
  lwz       r12, 0x0(r4)
  addi      r3, r1, 0x8
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  addi      r5, r1, 0x20
  lfs       f1, 0xC(r1)
  li        r4, 0x8
  lfs       f0, 0x10(r1)
  li        r6, 0x2
  stfs      f2, 0x20(r1)
  lwz       r3, -0x6960(r13)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  bl        -0x3EA00
  lwz       r3, -0x6958(r13)
  addi      r5, r1, 0x20
  li        r4, 0xD
  li        r6, 0x2
  bl        -0x3D4D0
  b         .loc_0x15C

.loc_0x148:
  cmplwi    r0, 0x3E8
  bne-      .loc_0x15C
  mr        r3, r31
  li        r4, 0
  bl        -0x155B78

.loc_0x15C:
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80290C80
 * Size:	000004
 */
void Game::SnakeCrow::StateDead::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80290C84
 * Size:	000124
 */
void Game::SnakeCrow::StateStay::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lfs       f0, -0x2934(r2)
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r4
  mr        r3, r31
  stfs      f0, 0x2C4(r4)
  bl        0x43B8
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  mr        r3, r31
  lfs       f1, 0xC(r1)
  addi      r4, r1, 0x14
  lfs       f0, 0x10(r1)
  stfs      f2, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x70(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  li        r4, 0
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x1E0(r31)
  li        r0, 0x1
  lfs       f0, -0x2934(r2)
  mr        r3, r31
  ori       r5, r4, 0x1
  li        r4, 0x1
  stw       r5, 0x1E0(r31)
  li        r5, 0
  stb       r0, 0x2C0(r31)
  lwz       r0, 0x1E0(r31)
  oris      r0, r0, 0x40
  stw       r0, 0x1E0(r31)
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,17,15
  stw       r0, 0x1E0(r31)
  lwz       r0, 0x1E0(r31)
  oris      r0, r0, 0x4000
  stw       r0, 0x1E0(r31)
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,21,19
  stw       r0, 0x1E0(r31)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x18BD64
  mr        r3, r31
  bl        -0x189A90
  lwz       r0, 0x280(r31)
  cmplwi    r0, 0
  beq-      .loc_0x110
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x254(r12)
  mtctr     r12
  bctrl     

.loc_0x110:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80290DA8
 * Size:	000618
 */
void Game::SnakeCrow::StateStay::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  stw       r0, 0xA4(r1)
  stfd      f31, 0x90(r1)
  psq_st    f31,0x98(r1),0,0
  stfd      f30, 0x80(r1)
  psq_st    f30,0x88(r1),0,0
  stfd      f29, 0x70(r1)
  psq_st    f29,0x78(r1),0,0
  stfd      f28, 0x60(r1)
  psq_st    f28,0x68(r1),0,0
  stmw      r27, 0x4C(r1)
  mr        r28, r3
  lwz       r3, 0xC0(r4)
  lfs       f1, 0x2C4(r4)
  mr        r31, r4
  lfs       f0, 0x86C(r3)
  li        r30, 0
  fcmpo     cr0, f1, f0
  ble-      .loc_0x52C
  lfs       f0, 0x35C(r3)
  lis       r3, 0x804B
  li        r0, 0
  lfs       f31, 0x198(r31)
  lfs       f30, 0x19C(r31)
  cmplwi    r0, 0
  lfs       f29, 0x1A0(r31)
  subi      r4, r3, 0x4364
  lwz       r3, -0x6D0C(r13)
  fmuls     f28, f0, f0
  stw       r4, 0x30(r1)
  li        r29, 0x1
  stw       r0, 0x3C(r1)
  stw       r0, 0x34(r1)
  stw       r3, 0x38(r1)
  bne-      .loc_0xA8
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0x2B4

.loc_0xA8:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0x114

.loc_0xC0:
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
  bne-      .loc_0x2B4
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)

.loc_0x114:
  lwz       r12, 0x30(r1)
  addi      r3, r1, 0x30
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0xC0
  b         .loc_0x2B4

.loc_0x134:
  lwz       r3, 0x38(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r27, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1F0
  mr        r3, r27
  lwz       r12, 0x0(r27)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1F0
  mr        r3, r27
  bl        -0xF19A4
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1F0
  mr        r4, r27
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r27)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x18(r1)
  lfs       f1, 0x14(r1)
  fsubs     f2, f30, f0
  lfs       f0, 0x1C(r1)
  fsubs     f3, f31, f1
  fsubs     f1, f29, f0
  fmuls     f0, f2, f2
  fmadds    f0, f3, f3, f0
  fmadds    f1, f1, f1, f0
  fcmpo     cr0, f1, f28
  bge-      .loc_0x1E0
  mr        r30, r27
  li        r29, 0
  b         .loc_0x1F0

.loc_0x1E0:
  lfs       f0, -0x2928(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1F0
  li        r29, 0

.loc_0x1F0:
  cmplwi    r30, 0
  bne-      .loc_0x2D4
  lwz       r0, 0x3C(r1)
  cmplwi    r0, 0
  bne-      .loc_0x224
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0x2B4

.loc_0x224:
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)
  b         .loc_0x298

.loc_0x244:
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
  bne-      .loc_0x2B4
  lwz       r3, 0x38(r1)
  lwz       r4, 0x34(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x34(r1)

.loc_0x298:
  lwz       r12, 0x30(r1)
  addi      r3, r1, 0x30
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x244

.loc_0x2B4:
  lwz       r3, 0x38(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x34(r1)
  cmplw     r4, r3
  bne+      .loc_0x134

.loc_0x2D4:
  cmplwi    r30, 0
  bne-      .loc_0x51C
  li        r0, 0
  lwz       r3, -0x6D20(r13)
  lis       r4, 0x804B
  stw       r0, 0x2C(r1)
  subi      r4, r4, 0x434C
  cmplwi    r0, 0
  stw       r4, 0x20(r1)
  stw       r0, 0x24(r1)
  stw       r3, 0x28(r1)
  bne-      .loc_0x31C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)
  b         .loc_0x4FC

.loc_0x31C:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)
  b         .loc_0x388

.loc_0x334:
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x4FC
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)

.loc_0x388:
  lwz       r12, 0x20(r1)
  addi      r3, r1, 0x20
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x334
  b         .loc_0x4FC

.loc_0x3A8:
  lwz       r3, 0x28(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r27, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x438
  mr        r4, r27
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r27)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0xC(r1)
  lfs       f1, 0x8(r1)
  fsubs     f2, f30, f0
  lfs       f0, 0x10(r1)
  fsubs     f3, f31, f1
  fsubs     f1, f29, f0
  fmuls     f0, f2, f2
  fmadds    f0, f3, f3, f0
  fmadds    f1, f1, f1, f0
  fcmpo     cr0, f1, f28
  bge-      .loc_0x428
  mr        r30, r27
  li        r29, 0
  b         .loc_0x438

.loc_0x428:
  lfs       f0, -0x2928(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x438
  li        r29, 0

.loc_0x438:
  cmplwi    r30, 0
  bne-      .loc_0x51C
  lwz       r0, 0x2C(r1)
  cmplwi    r0, 0
  bne-      .loc_0x46C
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)
  b         .loc_0x4FC

.loc_0x46C:
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)
  b         .loc_0x4E0

.loc_0x48C:
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x2C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x4FC
  lwz       r3, 0x28(r1)
  lwz       r4, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24(r1)

.loc_0x4E0:
  lwz       r12, 0x20(r1)
  addi      r3, r1, 0x20
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x48C

.loc_0x4FC:
  lwz       r3, 0x28(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x24(r1)
  cmplw     r4, r3
  bne+      .loc_0x3A8

.loc_0x51C:
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0x52C
  mr        r3, r31
  bl        0x4094

.loc_0x52C:
  lwz       r3, -0x6514(r13)
  cmplwi    r30, 0
  lfs       f1, 0x2C4(r31)
  lfs       f0, 0x54(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x2C4(r31)
  beq-      .loc_0x5E4
  stw       r30, 0x230(r31)
  mr        r3, r31
  mr        r4, r30
  bl        0x25FC
  mr        r3, r31
  bl        0x4130
  lwz       r29, 0xC0(r31)
  bl        -0x1C7D6C
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x44(r1)
  lfd       f3, -0x2918(r2)
  stw       r0, 0x40(r1)
  lfs       f2, -0x2924(r2)
  lfd       f0, 0x40(r1)
  lfs       f1, -0x2920(r2)
  fsubs     f3, f0, f3
  lfs       f0, 0x81C(r29)
  fmuls     f2, f2, f3
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x5C4
  mr        r3, r28
  mr        r4, r31
  lwz       r12, 0x0(r28)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x5E4

.loc_0x5C4:
  mr        r3, r28
  mr        r4, r31
  lwz       r12, 0x0(r28)
  li        r5, 0x3
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x5E4:
  psq_l     f31,0x98(r1),0,0
  lfd       f31, 0x90(r1)
  psq_l     f30,0x88(r1),0,0
  lfd       f30, 0x80(r1)
  psq_l     f29,0x78(r1),0,0
  lfd       f29, 0x70(r1)
  psq_l     f28,0x68(r1),0,0
  lfd       f28, 0x60(r1)
  lmw       r27, 0x4C(r1)
  lwz       r0, 0xA4(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	802913C0
 * Size:	000090
 */
void Game::SnakeCrow::StateStay::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  mr        r0, r4
  li        r4, 0x1
  stw       r31, 0xC(r1)
  mr        r31, r0
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x1E0(r31)
  li        r0, 0
  mr        r3, r31
  rlwinm    r4,r4,0,0,30
  stw       r4, 0x1E0(r31)
  stb       r0, 0x2C0(r31)
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,10,8
  stw       r0, 0x1E0(r31)
  lwz       r0, 0x1E0(r31)
  ori       r0, r0, 0x8000
  stw       r0, 0x1E0(r31)
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,2,0
  stw       r0, 0x1E0(r31)
  lwz       r0, 0x1E0(r31)
  ori       r0, r0, 0x800
  stw       r0, 0x1E0(r31)
  bl        0x3B30
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80291450
 * Size:	0000CC
 */
void Game::SnakeCrow::StateAppear1::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lfs       f0, -0x2934(r2)
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r4
  mr        r3, r31
  lwz       r0, 0x1E0(r4)
  oris      r0, r0, 0x20
  stw       r0, 0x1E0(r4)
  lwz       r0, 0x1E0(r4)
  rlwinm    r0,r0,0,26,24
  stw       r0, 0x1E0(r4)
  stfs      f0, 0x1D4(r4)
  stfs      f0, 0x1D8(r4)
  stfs      f0, 0x1DC(r4)
  bl        -0x18FAC4
  mr        r3, r31
  li        r4, 0x1
  li        r5, 0
  bl        -0x18C49C
  mr        r3, r31
  li        r4, 0
  bl        0x4200
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  addi      r5, r1, 0x14
  lfs       f1, 0xC(r1)
  li        r4, 0x6
  lfs       f0, 0x10(r1)
  li        r6, 0x2
  stfs      f2, 0x14(r1)
  lwz       r3, -0x6960(r13)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  bl        -0x3F2B4
  lwz       r3, -0x6958(r13)
  addi      r5, r1, 0x14
  li        r4, 0xF
  li        r6, 0x2
  bl        -0x3DD84
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8029151C
 * Size:	000158
 */
void Game::SnakeCrow::StateAppear1::exec( (Game::EnemyBase *))
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
  lwz       r3, 0x188(r4)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x140
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x2
  bne-      .loc_0x58
  lwz       r0, 0x1E0(r31)
  mr        r3, r31
  rlwinm    r0,r0,0,11,9
  stw       r0, 0x1E0(r31)
  bl        0x3B5C
  mr        r3, r31
  bl        0x3ACC
  b         .loc_0x140

.loc_0x58:
  cmplwi    r0, 0x3E8
  bne-      .loc_0x140
  mr        r3, r31
  bl        0x26B0
  lfs       f1, 0x200(r31)
  lfs       f0, -0x2934(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0xA0
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x140

.loc_0xA0:
  mr        r3, r31
  li        r4, 0x5
  bl        0x2878
  cmplwi    r3, 0
  bne-      .loc_0xC8
  mr        r3, r31
  li        r4, 0x5
  bl        0x2E58
  cmplwi    r3, 0
  beq-      .loc_0x120

.loc_0xC8:
  mr        r3, r31
  bl        0x34E4
  cmpwi     r3, 0
  beq-      .loc_0xFC
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x8
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x140

.loc_0xFC:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x6
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x140

.loc_0x120:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x5
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x140:
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
 * Address:	80291674
 * Size:	000068
 */
void Game::SnakeCrow::StateAppear1::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  lwz       r0, 0x1E0(r4)
  rlwinm    r0,r0,0,11,9
  stw       r0, 0x1E0(r4)
  lwz       r0, 0x1E0(r4)
  ori       r0, r0, 0x40
  stw       r0, 0x1E0(r4)
  bl        0x4264
  lwz       r0, 0x280(r31)
  cmplwi    r0, 0
  beq-      .loc_0x54
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x250(r12)
  mtctr     r12
  bctrl     

.loc_0x54:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802916DC
 * Size:	0000CC
 */
void Game::SnakeCrow::StateAppear2::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lfs       f0, -0x2934(r2)
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r4
  mr        r3, r31
  lwz       r0, 0x1E0(r4)
  oris      r0, r0, 0x20
  stw       r0, 0x1E0(r4)
  lwz       r0, 0x1E0(r4)
  rlwinm    r0,r0,0,26,24
  stw       r0, 0x1E0(r4)
  stfs      f0, 0x1D4(r4)
  stfs      f0, 0x1D8(r4)
  stfs      f0, 0x1DC(r4)
  bl        -0x18FD50
  mr        r3, r31
  li        r4, 0x2
  li        r5, 0
  bl        -0x18C728
  mr        r3, r31
  li        r4, 0x1
  bl        0x3F74
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  addi      r5, r1, 0x14
  lfs       f1, 0xC(r1)
  li        r4, 0x8
  lfs       f0, 0x10(r1)
  li        r6, 0x2
  stfs      f2, 0x14(r1)
  lwz       r3, -0x6960(r13)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  bl        -0x3F540
  lwz       r3, -0x6958(r13)
  addi      r5, r1, 0x14
  li        r4, 0xC
  li        r6, 0x2
  bl        -0x3E010
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802917A8
 * Size:	000234
 */
void Game::SnakeCrow::StateAppear2::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r4
  stw       r30, 0x38(r1)
  mr        r30, r3
  lwz       r3, 0x188(r4)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x21C
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x2
  bne-      .loc_0x50
  lwz       r0, 0x1E0(r31)
  mr        r3, r31
  rlwinm    r0,r0,0,11,9
  stw       r0, 0x1E0(r31)
  bl        0x3848
  b         .loc_0x21C

.loc_0x50:
  cmplwi    r0, 0x3
  bne-      .loc_0x64
  mr        r3, r31
  bl        0x38BC
  b         .loc_0x21C

.loc_0x64:
  cmplwi    r0, 0x4
  bne-      .loc_0xD4
  mr        r3, r31
  li        r4, 0x2
  bl        0x3E90
  mr        r4, r31
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x14(r1)
  addi      r5, r1, 0x2C
  lfs       f1, 0x18(r1)
  li        r4, 0x3
  lfs       f0, 0x1C(r1)
  li        r6, 0x2
  stfs      f2, 0x2C(r1)
  lwz       r3, -0x6960(r13)
  stfs      f1, 0x30(r1)
  stfs      f0, 0x34(r1)
  bl        -0x3F624
  lwz       r3, -0x6958(r13)
  addi      r5, r1, 0x2C
  li        r4, 0xB
  li        r6, 0x2
  bl        -0x3E0F4
  b         .loc_0x21C

.loc_0xD4:
  cmplwi    r0, 0x5
  bne-      .loc_0x134
  lwz       r12, 0x0(r4)
  addi      r3, r1, 0x8
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  addi      r5, r1, 0x20
  lfs       f1, 0xC(r1)
  li        r4, 0x3
  lfs       f0, 0x10(r1)
  li        r6, 0x2
  stfs      f2, 0x20(r1)
  lwz       r3, -0x6960(r13)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  bl        -0x3F684
  lwz       r3, -0x6958(r13)
  addi      r5, r1, 0x20
  li        r4, 0xB
  li        r6, 0x2
  bl        -0x3E154
  b         .loc_0x21C

.loc_0x134:
  cmplwi    r0, 0x3E8
  bne-      .loc_0x21C
  mr        r3, r31
  bl        0x2348
  lfs       f1, 0x200(r31)
  lfs       f0, -0x2934(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x17C
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x21C

.loc_0x17C:
  mr        r3, r31
  li        r4, 0x5
  bl        0x2510
  cmplwi    r3, 0
  bne-      .loc_0x1A4
  mr        r3, r31
  li        r4, 0x5
  bl        0x2AF0
  cmplwi    r3, 0
  beq-      .loc_0x1FC

.loc_0x1A4:
  mr        r3, r31
  bl        0x317C
  cmpwi     r3, 0
  beq-      .loc_0x1D8
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x8
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x21C

.loc_0x1D8:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x6
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x21C

.loc_0x1FC:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x5
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x21C:
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
 * Address:	802919DC
 * Size:	000068
 */
void Game::SnakeCrow::StateAppear2::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  lwz       r0, 0x1E0(r4)
  rlwinm    r0,r0,0,11,9
  stw       r0, 0x1E0(r4)
  lwz       r0, 0x1E0(r4)
  ori       r0, r0, 0x40
  stw       r0, 0x1E0(r4)
  bl        0x3EFC
  lwz       r0, 0x280(r31)
  cmplwi    r0, 0
  beq-      .loc_0x54
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x250(r12)
  mtctr     r12
  bctrl     

.loc_0x54:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80291A44
 * Size:	000140
 */
void Game::SnakeCrow::StateDisappear::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  addi      r3, r1, 0x8
  stw       r31, 0x5C(r1)
  mr        r31, r4
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x804B
  li        r6, 0
  subi      r0, r3, 0x5808
  lfs       f2, 0x8(r1)
  lis       r3, 0x804E
  stw       r0, 0x30(r1)
  addi      r0, r3, 0x6A3C
  lfs       f1, 0xC(r1)
  lis       r3, 0x804E
  stw       r0, 0x30(r1)
  addi      r0, r3, 0x6E30
  lfs       f0, 0x10(r1)
  lis       r4, 0x804B
  lis       r3, 0x804D
  subi      r11, r4, 0x5814
  li        r10, 0xA0
  li        r9, 0xA1
  li        r8, 0xA2
  li        r7, 0xA3
  li        r5, 0x1E
  stw       r0, 0x30(r1)
  subi      r0, r3, 0x4CBC
  addi      r3, r1, 0x30
  addi      r4, r1, 0x14
  stfs      f2, 0x24(r1)
  stfs      f1, 0x28(r1)
  stfs      f0, 0x2C(r1)
  stw       r11, 0x14(r1)
  stfs      f2, 0x18(r1)
  stfs      f1, 0x1C(r1)
  stfs      f0, 0x20(r1)
  sth       r10, 0x34(r1)
  sth       r9, 0x36(r1)
  sth       r8, 0x38(r1)
  sth       r7, 0x3A(r1)
  stw       r6, 0x3C(r1)
  stw       r6, 0x40(r1)
  stw       r6, 0x44(r1)
  stw       r6, 0x48(r1)
  stw       r5, 0x4C(r1)
  stw       r0, 0x30(r1)
  bl        0x121F98
  lwz       r0, 0x1E0(r31)
  mr        r3, r31
  lfs       f0, -0x2934(r2)
  rlwinm    r0,r0,0,26,24
  stw       r0, 0x1E0(r31)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x1901B8
  mr        r3, r31
  li        r4, 0x3
  li        r5, 0
  bl        -0x18CB40
  lwz       r3, -0x6960(r13)
  addi      r5, r1, 0x24
  li        r4, 0x6
  li        r6, 0x2
  bl        -0x3F91C
  lwz       r3, -0x6958(r13)
  addi      r5, r1, 0x24
  li        r4, 0xE
  li        r6, 0x2
  bl        -0x3E3EC
  lwz       r0, 0x64(r1)
  lwz       r31, 0x5C(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	80291B84
 * Size:	000108
 */
void Game::SnakeCrow::StateDisappear::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  lwz       r5, 0x188(r4)
  lbz       r0, 0x24(r5)
  cmplwi    r0, 0
  beq-      .loc_0xF4
  lwz       r0, 0x1C(r5)
  cmplwi    r0, 0x2
  bne-      .loc_0xA4
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f4, -0x2910(r2)
  li        r4, 0
  lfs       f1, 0x514(r5)
  lfs       f2, 0x4C4(r5)
  lfs       f3, 0x4EC(r5)
  bl        -0x17E440
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f4, -0x2910(r2)
  li        r4, 0
  lfs       f1, 0x514(r5)
  lfs       f2, 0x4C4(r5)
  lfs       f3, 0x4EC(r5)
  bl        -0x17E71C
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f4, -0x2910(r2)
  li        r4, 0
  lfs       f1, 0x53C(r5)
  lfs       f2, 0x4C4(r5)
  lfs       f3, 0x4EC(r5)
  bl        -0x17EAF4
  mr        r3, r31
  bl        0x3D48
  mr        r3, r31
  bl        0x3580
  b         .loc_0xF4

.loc_0xA4:
  cmplwi    r0, 0x3
  bne-      .loc_0xD4
  li        r0, 0x1
  lfs       f0, -0x2934(r2)
  stb       r0, 0x2C0(r31)
  mr        r3, r31
  lwz       r0, 0x1E0(r31)
  oris      r0, r0, 0x40
  stw       r0, 0x1E0(r31)
  stfs      f0, 0x20C(r31)
  bl        0x340C
  b         .loc_0xF4

.loc_0xD4:
  cmplwi    r0, 0x3E8
  bne-      .loc_0xF4
  lwz       r12, 0x0(r3)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xF4:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80291C8C
 * Size:	000064
 */
void Game::SnakeCrow::StateDisappear::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x2924(r2)
  stw       r0, 0x14(r1)
  lfs       f2, -0x290C(r2)
  stw       r31, 0xC(r1)
  mr        r31, r4
  lfs       f3, -0x2934(r2)
  mr        r3, r31
  lfs       f4, -0x2910(r2)
  li        r4, 0
  bl        -0x17EB9C
  li        r0, 0
  stb       r0, 0x2C0(r31)
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,10,8
  stw       r0, 0x1E0(r31)
  lwz       r0, 0x1E0(r31)
  ori       r0, r0, 0x40
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
 * Address:	80291CF0
 * Size:	000048
 */
void Game::SnakeCrow::StateWait::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x2934(r2)
  mr        r3, r4
  stw       r0, 0x14(r1)
  li        r0, 0
  li        r5, 0
  stfs      f0, 0x2C4(r4)
  li        r4, 0x9
  stw       r0, 0x230(r3)
  stfs      f0, 0x1D4(r3)
  stfs      f0, 0x1D8(r3)
  stfs      f0, 0x1DC(r3)
  bl        -0x18CD20
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80291D38
 * Size:	0006C0
 */
void Game::SnakeCrow::StateWait::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x140(r1)
  mflr      r0
  stw       r0, 0x144(r1)
  stfd      f31, 0x130(r1)
  psq_st    f31,0x138(r1),0,0
  stfd      f30, 0x120(r1)
  psq_st    f30,0x128(r1),0,0
  stfd      f29, 0x110(r1)
  psq_st    f29,0x118(r1),0,0
  stfd      f28, 0x100(r1)
  psq_st    f28,0x108(r1),0,0
  stfd      f27, 0xF0(r1)
  psq_st    f27,0xF8(r1),0,0
  stfd      f26, 0xE0(r1)
  psq_st    f26,0xE8(r1),0,0
  stfd      f25, 0xD0(r1)
  psq_st    f25,0xD8(r1),0,0
  stfd      f24, 0xC0(r1)
  psq_st    f24,0xC8(r1),0,0
  stw       r31, 0xBC(r1)
  stw       r30, 0xB8(r1)
  stw       r29, 0xB4(r1)
  lwz       r29, 0x230(r4)
  mr        r30, r3
  mr        r31, r4
  cmplwi    r29, 0
  beq-      .loc_0x2F0
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2CC
  mr        r3, r29
  bl        -0xF283C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2CC
  lwz       r0, 0xF4(r29)
  cmplw     r0, r31
  beq-      .loc_0x2CC
  mr        r4, r29
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x0(r29)
  addi      r3, r1, 0x20
  lfs       f28, 0x424(r5)
  lwz       r12, 0x8(r12)
  lfs       f29, 0x3FC(r5)
  lfs       f30, 0x3D4(r5)
  lfs       f31, 0x3AC(r5)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f2, 0x20(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x2C
  lfs       f1, 0x24(r1)
  lfs       f0, 0x28(r1)
  lwz       r12, 0x8(r12)
  stfs      f2, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f0, 0x10(r1)
  mtctr     r12
  bctrl     
  lfs       f5, 0x2C(r1)
  lis       r3, 0x8051
  lfs       f3, 0x34(r1)
  subi      r3, r3, 0x2E20
  lfs       f1, 0x8(r1)
  lfs       f0, 0x10(r1)
  lfs       f4, 0x30(r1)
  fsubs     f1, f1, f5
  fsubs     f2, f0, f3
  stfs      f5, 0x14(r1)
  stfs      f4, 0x18(r1)
  stfs      f3, 0x1C(r1)
  bl        -0x25CD60
  bl        0x17FD64
  lwz       r12, 0x0(r31)
  fmr       f24, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f24
  bl        0x17FD6C
  mr        r4, r31
  fmr       f26, f1
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x74
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x68
  lwz       r12, 0x0(r29)
  lfs       f27, 0x74(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f0, 0x68(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x8C
  fsubs     f24, f0, f27
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x80
  lwz       r12, 0x0(r29)
  lfs       f27, 0x90(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f0, 0x84(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0xA4
  fsubs     f25, f0, f27
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r29
  addi      r3, r1, 0x98
  lwz       r12, 0x0(r29)
  lfs       f27, 0xAC(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0xA0(r1)
  fmuls     f1, f31, f31
  fmuls     f2, f30, f30
  li        r3, 0x1
  fsubs     f0, f0, f27
  li        r4, 0
  fmuls     f0, f0, f0
  fmadds    f0, f24, f24, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x260
  fcmpo     cr0, f0, f2
  mr        r0, r4
  ble-      .loc_0x254
  fabs      f0, f25
  frsp      f0, f0
  fcmpo     cr0, f0, f29
  bge-      .loc_0x254
  mr        r0, r3

.loc_0x254:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x260
  li        r4, 0x1

.loc_0x260:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x298
  lfs       f0, -0x2904(r2)
  fabs      f2, f26
  lfs       f1, -0x2908(r2)
  fmuls     f0, f0, f28
  frsp      f2, f2
  fmuls     f0, f1, f0
  fcmpo     cr0, f2, f0
  cror      2, 0, 0x2
  mfcr      r0
  rlwinm.   r0,r0,3,31,31
  beq-      .loc_0x298
  li        r3, 0

.loc_0x298:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2A8
  li        r3, 0
  b         .loc_0x310

.loc_0x2A8:
  lwz       r7, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  li        r5, 0
  lfs       f1, 0x424(r7)
  li        r6, 0
  lfs       f2, 0x3D4(r7)
  bl        -0x17EFAC
  b         .loc_0x310

.loc_0x2CC:
  lwz       r7, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  li        r5, 0
  lfs       f1, 0x424(r7)
  li        r6, 0
  lfs       f2, 0x3D4(r7)
  bl        -0x17EFD0
  b         .loc_0x310

.loc_0x2F0:
  lwz       r7, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  li        r5, 0
  lfs       f1, 0x424(r7)
  li        r6, 0
  lfs       f2, 0x3D4(r7)
  bl        -0x17EFF4

.loc_0x310:
  cmplwi    r3, 0
  beq-      .loc_0x494
  lfs       f0, -0x2934(r2)
  mr        r4, r3
  addi      r3, r1, 0x50
  stfs      f0, 0x2C4(r31)
  lwz       r12, 0x0(r4)
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x8(r12)
  lfs       f27, 0x334(r5)
  lfs       f26, 0x30C(r5)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f2, 0x50(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x5C
  lfs       f1, 0x54(r1)
  lfs       f0, 0x58(r1)
  lwz       r12, 0x8(r12)
  stfs      f2, 0x38(r1)
  stfs      f1, 0x3C(r1)
  stfs      f0, 0x40(r1)
  mtctr     r12
  bctrl     
  lfs       f5, 0x5C(r1)
  lis       r3, 0x8051
  lfs       f3, 0x64(r1)
  subi      r3, r3, 0x2E20
  lfs       f1, 0x38(r1)
  lfs       f0, 0x40(r1)
  lfs       f4, 0x60(r1)
  fsubs     f1, f1, f5
  fsubs     f2, f0, f3
  stfs      f5, 0x44(r1)
  stfs      f4, 0x48(r1)
  stfs      f3, 0x4C(r1)
  bl        -0x25CFD4
  bl        0x17FAF0
  lwz       r12, 0x0(r31)
  fmr       f24, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f24
  bl        0x17FAF8
  fmr       f28, f1
  lfs       f0, -0x2904(r2)
  lfs       f1, -0x2908(r2)
  fmuls     f0, f0, f27
  fmuls     f24, f28, f26
  fmuls     f1, f1, f0
  fabs      f0, f24
  frsp      f0, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x410
  lfs       f0, -0x2934(r2)
  fcmpo     cr0, f24, f0
  ble-      .loc_0x40C
  fmr       f24, f1
  b         .loc_0x410

.loc_0x40C:
  fneg      f24, f1

.loc_0x410:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f24, f1
  bl        0x17FA70
  fabs      f3, f28
  stfs      f1, 0x1FC(r31)
  lfs       f0, -0x2900(r2)
  lfs       f2, 0x1FC(r31)
  frsp      f1, f3
  stfs      f2, 0x1A8(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x45C
  mr        r3, r31
  bl        0x374C
  b         .loc_0x4A8

.loc_0x45C:
  mr        r3, r31
  bl        0x36E8
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xF4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  li        r4, 0x5033
  li        r5, 0
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x4A8

.loc_0x494:
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x2C4(r31)
  lfs       f0, 0x54(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x2C4(r31)

.loc_0x4A8:
  mr        r3, r31
  bl        -0x18AEE4
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x524
  lfs       f1, 0x200(r31)
  lfs       f0, -0x2934(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  beq-      .loc_0x51C
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x2C4(r31)
  lfs       f0, 0x844(r3)
  fcmpo     cr0, f1, f0
  bgt-      .loc_0x51C
  mr        r3, r31
  li        r4, 0
  bl        -0x17DBC8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x51C
  mr        r3, r31
  li        r4, 0x5
  bl        0x1C08
  cmplwi    r3, 0
  bne-      .loc_0x51C
  mr        r3, r31
  li        r4, 0x5
  bl        0x21E8
  cmplwi    r3, 0
  beq-      .loc_0x524

.loc_0x51C:
  mr        r3, r31
  bl        -0x18CFB8

.loc_0x524:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x664
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x664
  lfs       f1, 0x200(r31)
  lfs       f0, -0x2934(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x578
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x664

.loc_0x578:
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x2C4(r31)
  lfs       f0, 0x844(r3)
  fcmpo     cr0, f1, f0
  bgt-      .loc_0x5A0
  mr        r3, r31
  li        r4, 0
  bl        -0x17DC74
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x5C4

.loc_0x5A0:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x664

.loc_0x5C4:
  mr        r3, r31
  li        r4, 0x5
  bl        0x1B38
  cmplwi    r3, 0
  bne-      .loc_0x5EC
  mr        r3, r31
  li        r4, 0x5
  bl        0x2118
  cmplwi    r3, 0
  beq-      .loc_0x644

.loc_0x5EC:
  mr        r3, r31
  bl        0x27A4
  cmpwi     r3, 0
  beq-      .loc_0x620
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x8
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x664

.loc_0x620:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x6
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x664

.loc_0x644:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x5
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x664:
  psq_l     f31,0x138(r1),0,0
  lfd       f31, 0x130(r1)
  psq_l     f30,0x128(r1),0,0
  lfd       f30, 0x120(r1)
  psq_l     f29,0x118(r1),0,0
  lfd       f29, 0x110(r1)
  psq_l     f28,0x108(r1),0,0
  lfd       f28, 0x100(r1)
  psq_l     f27,0xF8(r1),0,0
  lfd       f27, 0xF0(r1)
  psq_l     f26,0xE8(r1),0,0
  lfd       f26, 0xE0(r1)
  psq_l     f25,0xD8(r1),0,0
  lfd       f25, 0xD0(r1)
  psq_l     f24,0xC8(r1),0,0
  lfd       f24, 0xC0(r1)
  lwz       r31, 0xBC(r1)
  lwz       r30, 0xB8(r1)
  lwz       r0, 0x144(r1)
  lwz       r29, 0xB4(r1)
  mtlr      r0
  addi      r1, r1, 0x140
  blr
*/
}

/*
 * --INFO--
 * Address:	802923F8
 * Size:	000024
 */
void Game::SnakeCrow::StateWait::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  bl        0x34D0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8029241C
 * Size:	00004C
 */
void Game::SnakeCrow::StateAttack::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x2934(r2)
  mr        r3, r4
  stw       r0, 0x14(r1)
  li        r5, 0
  lwz       r0, 0x1E0(r4)
  rlwinm    r0,r0,0,26,24
  stw       r0, 0x1E0(r4)
  stfs      f0, 0x1D4(r4)
  stfs      f0, 0x1D8(r4)
  stfs      f0, 0x1DC(r4)
  lwz       r4, 0x2D4(r4)
  addi      r4, r4, 0x4
  bl        -0x18D450
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80292468
 * Size:	000334
 */
void Game::SnakeCrow::StateAttack::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r4
  stw       r30, 0x38(r1)
  stw       r29, 0x34(r1)
  mr        r29, r3
  mr        r3, r31
  bl        -0x18B18C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x38
  mr        r3, r31
  bl        0x1794

.loc_0x38:
  lfs       f1, 0x200(r31)
  lfs       f0, -0x2934(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x54
  mr        r3, r31
  bl        -0x18D218

.loc_0x54:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x318
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x2
  bne-      .loc_0x7C
  mr        r3, r31
  bl        0x28F0
  b         .loc_0x318

.loc_0x7C:
  cmplwi    r0, 0x3
  bne-      .loc_0x168
  lwz       r30, 0x2D4(r31)
  mr        r3, r31
  mr        r4, r30
  bl        0x1944
  mr.       r29, r3
  beq-      .loc_0xFC
  mr        r3, r31
  bl        0x24F0
  lis       r5, 0x804B
  lis       r4, 0x804B
  subi      r0, r5, 0x5D00
  lfs       f0, -0x2924(r2)
  stw       r0, 0x18(r1)
  addi      r5, r4, 0x4DE0
  lis       r4, 0x804B
  li        r0, 0
  stw       r5, 0x18(r1)
  addi      r5, r4, 0x4DBC
  addi      r4, r1, 0x18
  stw       r3, 0x24(r1)
  mr        r3, r29
  stw       r31, 0x1C(r1)
  stfs      f0, 0x20(r1)
  stw       r5, 0x18(r1)
  stw       r0, 0x28(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x15C

.loc_0xFC:
  mr        r3, r31
  mr        r4, r30
  bl        0x1EC4
  cmplwi    r3, 0
  beq-      .loc_0x154
  lwz       r6, 0xC0(r31)
  lis       r5, 0x804B
  lis       r4, 0x804B
  li        r0, 0
  lfs       f0, 0x604(r6)
  subi      r6, r5, 0x5D00
  addi      r5, r4, 0x4DE0
  addi      r4, r1, 0x8
  stw       r6, 0x8(r1)
  stw       r31, 0xC(r1)
  stw       r5, 0x8(r1)
  stfs      f0, 0x10(r1)
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x154:
  mr        r3, r31
  bl        -0x18D320

.loc_0x15C:
  mr        r3, r31
  bl        0x28BC
  b         .loc_0x318

.loc_0x168:
  cmplwi    r0, 0x4
  bne-      .loc_0x200
  mr        r3, r31
  bl        -0x18B2DC
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1F4
  mr        r3, r31
  bl        0x240C
  cmplwi    r3, 0
  beq-      .loc_0x1F4
  mr        r3, r31
  li        r4, 0x5
  bl        0x183C
  cmplwi    r3, 0
  bne-      .loc_0x1B8
  mr        r3, r31
  li        r4, 0x5
  bl        0x1E1C
  cmplwi    r3, 0
  beq-      .loc_0x1E8

.loc_0x1B8:
  lwz       r4, 0x2D4(r31)
  mr        r3, r31
  li        r5, 0
  addi      r4, r4, 0x4
  bl        -0x18D62C
  mr        r3, r31
  bl        -0x18B3C0
  mr        r3, r31
  bl        -0x18D418
  mr        r3, r31
  bl        0x2784
  b         .loc_0x318

.loc_0x1E8:
  mr        r3, r31
  bl        0x28B8
  b         .loc_0x318

.loc_0x1F4:
  mr        r3, r31
  bl        0x28AC
  b         .loc_0x318

.loc_0x200:
  cmplwi    r0, 0x3E8
  bne-      .loc_0x318
  lfs       f1, 0x200(r31)
  lfs       f0, -0x2934(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x240
  mr        r3, r29
  mr        r4, r31
  lwz       r12, 0x0(r29)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x318

.loc_0x240:
  mr        r3, r31
  bl        0x23B4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x274
  mr        r3, r29
  mr        r4, r31
  lwz       r12, 0x0(r29)
  li        r5, 0x7
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x318

.loc_0x274:
  mr        r3, r31
  li        r4, 0
  bl        -0x17E08C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2AC
  mr        r3, r29
  mr        r4, r31
  lwz       r12, 0x0(r29)
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x318

.loc_0x2AC:
  mr        r3, r31
  li        r4, 0x5
  bl        0x1720
  cmplwi    r3, 0
  bne-      .loc_0x2D4
  mr        r3, r31
  li        r4, 0x5
  bl        0x1D00
  cmplwi    r3, 0
  beq-      .loc_0x2F8

.loc_0x2D4:
  mr        r3, r29
  mr        r4, r31
  lwz       r12, 0x0(r29)
  li        r5, 0x6
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x318

.loc_0x2F8:
  mr        r3, r29
  mr        r4, r31
  lwz       r12, 0x0(r29)
  li        r5, 0x5
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x318:
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8029279C
 * Size:	000010
 */
void Game::SnakeCrow::StateAttack::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  lwz       r0, 0x1E0(r4)
  ori       r0, r0, 0x40
  stw       r0, 0x1E0(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	802927AC
 * Size:	00003C
 */
void Game::SnakeCrow::StateEat::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  lfs       f0, -0x2934(r2)
  stw       r0, 0x14(r1)
  li        r4, 0xA
  li        r5, 0
  stfs      f0, 0x1D4(r3)
  stfs      f0, 0x1D8(r3)
  stfs      f0, 0x1DC(r3)
  bl        -0x18D7D0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802927E8
 * Size:	000178
 */
void Game::SnakeCrow::StateEat::exec( (Game::EnemyBase *))
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
  lwz       r5, 0x188(r4)
  lbz       r0, 0x24(r5)
  cmplwi    r0, 0
  beq-      .loc_0x160
  lwz       r0, 0x1C(r5)
  cmplwi    r0, 0x2
  bne-      .loc_0x50
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  lfs       f1, 0x894(r5)
  bl        -0x17E9AC
  b         .loc_0x160

.loc_0x50:
  cmplwi    r0, 0x3E8
  bne-      .loc_0x160
  lfs       f1, 0x200(r31)
  lfs       f0, -0x2934(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x88
  lwz       r12, 0x0(r3)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x160

.loc_0x88:
  mr        r3, r31
  li        r4, 0
  bl        -0x17E220
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC0
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x160

.loc_0xC0:
  mr        r3, r31
  li        r4, 0x5
  bl        0x158C
  cmplwi    r3, 0
  bne-      .loc_0xE8
  mr        r3, r31
  li        r4, 0x5
  bl        0x1B6C
  cmplwi    r3, 0
  beq-      .loc_0x140

.loc_0xE8:
  mr        r3, r31
  bl        0x21F8
  cmpwi     r3, 0
  beq-      .loc_0x11C
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x8
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x160

.loc_0x11C:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x6
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x160

.loc_0x140:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x5
  li        r6, 0
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
 * Address:	80292960
 * Size:	000004
 */
void Game::SnakeCrow::StateEat::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80292964
 * Size:	000040
 */
void Game::SnakeCrow::StateStruggle::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  lfs       f0, -0x2934(r2)
  stw       r0, 0x14(r1)
  li        r4, 0xB
  li        r5, 0
  stfs      f0, 0x2C4(r3)
  stfs      f0, 0x1D4(r3)
  stfs      f0, 0x1D8(r3)
  stfs      f0, 0x1DC(r3)
  bl        -0x18D98C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802929A4
 * Size:	000158
 */
void Game::SnakeCrow::StateStruggle::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x28FC(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  lfs       f1, 0x2C4(r4)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x34
  mr        r3, r31
  bl        -0x18D734

.loc_0x34:
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x2C4(r31)
  lfs       f0, 0x54(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x2C4(r31)
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x140
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x140
  lfs       f1, 0x200(r31)
  lfs       f0, -0x2934(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x9C
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x140

.loc_0x9C:
  mr        r3, r31
  li        r4, 0
  bl        -0x17E3F0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xD4
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x140

.loc_0xD4:
  mr        r3, r31
  li        r4, 0x5
  bl        0x13BC
  cmplwi    r3, 0
  bne-      .loc_0xFC
  mr        r3, r31
  li        r4, 0x5
  bl        0x199C
  cmplwi    r3, 0
  beq-      .loc_0x120

.loc_0xFC:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x6
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x140

.loc_0x120:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x5
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x140:
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
 * Address:	80292AFC
 * Size:	000004
 */
void Game::SnakeCrow::StateStruggle::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80292B00
 * Size:	000028
 */
void __sinit_SnakeCrowState_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804D
  stw       r0, -0x6928(r13)
  stfsu     f0, -0x4D58(r3)
  stfs      f0, -0x6924(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}
