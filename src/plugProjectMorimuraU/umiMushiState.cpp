

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
 * Address:	80380A2C
 * Size:	000198
 */
void Game::UmiMushi::FSM::init( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0xA
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2501E0
  li        r3, 0x14
  bl        -0x35CBA8
  mr.       r4, r3
  beq-      .loc_0x38
  li        r4, 0
  bl        .loc_0x198
  mr        r4, r3

.loc_0x38:
  mr        r3, r31
  bl        -0x250160
  li        r3, 0x18
  bl        -0x35CBCC
  mr.       r4, r3
  beq-      .loc_0x5C
  li        r4, 0x1
  bl        0x3E8
  mr        r4, r3

.loc_0x5C:
  mr        r3, r31
  bl        -0x250184
  li        r3, 0x10
  bl        -0x35CBF0
  mr.       r4, r3
  beq-      .loc_0x80
  li        r4, 0x2
  bl        0x720
  mr        r4, r3

.loc_0x80:
  mr        r3, r31
  bl        -0x2501A8
  li        r3, 0x10
  bl        -0x35CC14
  mr.       r4, r3
  beq-      .loc_0xA4
  li        r4, 0x3
  bl        0x8F0
  mr        r4, r3

.loc_0xA4:
  mr        r3, r31
  bl        -0x2501CC
  li        r3, 0x10
  bl        -0x35CC38
  mr.       r4, r3
  beq-      .loc_0xC8
  li        r4, 0x4
  bl        0xBDC
  mr        r4, r3

.loc_0xC8:
  mr        r3, r31
  bl        -0x2501F0
  li        r3, 0x10
  bl        -0x35CC5C
  mr.       r4, r3
  beq-      .loc_0xEC
  li        r4, 0x5
  bl        0xE20
  mr        r4, r3

.loc_0xEC:
  mr        r3, r31
  bl        -0x250214
  li        r3, 0x14
  bl        -0x35CC80
  mr.       r4, r3
  beq-      .loc_0x110
  li        r4, 0x6
  bl        0x1128
  mr        r4, r3

.loc_0x110:
  mr        r3, r31
  bl        -0x250238
  li        r3, 0x10
  bl        -0x35CCA4
  mr.       r4, r3
  beq-      .loc_0x134
  li        r4, 0x7
  bl        0x1778
  mr        r4, r3

.loc_0x134:
  mr        r3, r31
  bl        -0x25025C
  li        r3, 0x10
  bl        -0x35CCC8
  mr.       r4, r3
  beq-      .loc_0x158
  li        r4, 0x8
  bl        0x1888
  mr        r4, r3

.loc_0x158:
  mr        r3, r31
  bl        -0x250280
  li        r3, 0x10
  bl        -0x35CCEC
  mr.       r4, r3
  beq-      .loc_0x17C
  li        r4, 0x9
  bl        0x19E0
  mr        r4, r3

.loc_0x17C:
  mr        r3, r31
  bl        -0x2502A4
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x198:
*/
}

/*
 * --INFO--
 * Address:	80380BC4
 * Size:	00003C
 */
void Game::UmiMushi::StateWait::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x44F4
  addi      r5, r5, 0x44D0
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x968
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80380C00
 * Size:	000054
 */
void Game::UmiMushi::StateWait::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0x6
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r3, r31
  bl        -0x27BC24
  li        r3, -0x1
  li        r0, 0
  stw       r3, 0x2C8(r31)
  stw       r0, 0x10(r30)
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
 * Address:	80380C54
 * Size:	000214
 */
void Game::UmiMushi::StateWait::exec( (Game::EnemyBase *))
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
  bl        -0x279974
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x54
  lwz       r3, 0x10(r30)
  addi      r0, r3, 0x1
  stw       r0, 0x10(r30)
  lwz       r3, 0xC0(r31)
  lwz       r4, 0x10(r30)
  lwz       r0, 0x9FC(r3)
  cmpw      r4, r0
  ble-      .loc_0x54
  mr        r3, r31
  bl        -0x27BA04

.loc_0x54:
  lfs       f1, 0x200(r31)
  lfs       f0, 0x970(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x78
  mr        r3, r31
  bl        -0x27BA20
  li        r0, 0x8
  stw       r0, 0x2C8(r31)

.loc_0x78:
  lwz       r3, 0xC0(r31)
  lbz       r0, 0xA11(r3)
  cmplwi    r0, 0
  bne-      .loc_0xA4
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x1FC
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x1FC

.loc_0xA4:
  lwz       r5, 0x2C8(r31)
  cmpwi     r5, 0
  bge-      .loc_0x1E0
  mr        r3, r31
  li        r4, 0
  bl        -0x26C6B4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xF0
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x5
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x3
  stw       r0, 0x2C8(r31)
  b         .loc_0x1FC

.loc_0xF0:
  mr        r3, r31
  bl        0x4F40
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x124
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1FC

.loc_0x124:
  mr        r3, r31
  bl        0x532C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x158
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x6
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1FC

.loc_0x158:
  lwz       r0, 0x2D8(r31)
  cmplwi    r0, 0
  beq-      .loc_0x1BC
  mr        r3, r31
  bl        0x552C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x198
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1FC

.loc_0x198:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x3
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1FC

.loc_0x1BC:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1FC

.loc_0x1E0:
  lwz       r12, 0x0(r30)
  mr        r3, r30
  mr        r4, r31
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x1FC:
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
 * Address:	80380E68
 * Size:	00003C
 */
void Game::UmiMushi::StateWalk::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x44F4
  addi      r5, r5, 0x44AC
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x974
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80380EA4
 * Size:	000060
 */
void Game::UmiMushi::StateWalk::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0x4
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r3, r31
  bl        -0x27BEC8
  li        r0, -0x1
  mr        r3, r31
  stw       r0, 0x2C8(r31)
  bl        0x4D98
  li        r0, 0
  stw       r0, 0x14(r30)
  stw       r0, 0x10(r30)
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
 * Address:	80380F04
 * Size:	0002C0
 */
void Game::UmiMushi::StateWalk::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lfs       f1, 0x97C(r2)
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r3
  mr        r3, r31
  bl        0x3CBC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x68
  lfs       f1, 0x980(r2)
  mr        r3, r31
  bl        0x5560
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x50
  mr        r3, r31
  bl        0x404C
  b         .loc_0x68

.loc_0x50:
  mr        r3, r31
  bl        0x4F78
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x68
  mr        r3, r31
  bl        0x4030

.loc_0x68:
  lfs       f1, 0x200(r31)
  lfs       f0, 0x970(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0xA0
  mr        r3, r31
  bl        -0x27BCE4
  lfs       f0, 0x970(r2)
  li        r0, 0x8
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  stw       r0, 0x2C8(r31)
  b         .loc_0x248

.loc_0xA0:
  lwz       r0, 0x2C8(r31)
  cmpwi     r0, 0
  bge-      .loc_0x248
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x47
  bne-      .loc_0xD4
  mr        r3, r31
  bl        0x3C70
  b         .loc_0x190

.loc_0xD4:
  lwz       r0, 0x14(r30)
  cmpwi     r0, 0
  ble-      .loc_0x13C
  lfs       f0, 0x970(r2)
  lis       r0, 0x4330
  stw       r0, 0x8(r1)
  lfd       f2, 0x988(r2)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  lwz       r3, 0x14(r30)
  addi      r0, r3, 0x1
  stw       r0, 0x14(r30)
  lwz       r0, 0x14(r30)
  lwz       r3, 0xC0(r31)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfs       f0, 0x9AC(r3)
  lfd       f1, 0x8(r1)
  fsubs     f1, f1, f2
  fcmpo     cr0, f1, f0
  ble-      .loc_0x190
  li        r0, 0
  stw       r0, 0x14(r30)
  stw       r0, 0x10(r30)
  b         .loc_0x190

.loc_0x13C:
  lwz       r4, 0x10(r30)
  mr        r3, r31
  addi      r0, r4, 0x1
  stw       r0, 0x10(r30)
  bl        0x3BF0
  lwz       r4, 0x10(r30)
  lis       r0, 0x4330
  lwz       r3, 0xC0(r31)
  xoris     r4, r4, 0x8000
  stw       r0, 0x8(r1)
  lfd       f2, 0x988(r2)
  stw       r4, 0xC(r1)
  lfs       f0, 0x9D4(r3)
  lfd       f1, 0x8(r1)
  fsubs     f1, f1, f2
  fcmpo     cr0, f1, f0
  ble-      .loc_0x190
  li        r3, 0
  li        r0, 0x1
  stw       r3, 0x10(r30)
  stw       r0, 0x14(r30)

.loc_0x190:
  mr        r3, r31
  li        r4, 0
  bl        -0x26CA44
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1C8
  mr        r3, r31
  bl        -0x27BE0C
  lfs       f0, 0x970(r2)
  li        r0, 0x5
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  stw       r0, 0x2C8(r31)
  b         .loc_0x248

.loc_0x1C8:
  mr        r3, r31
  bl        0x4FD8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1FC
  mr        r3, r31
  bl        -0x27BE40
  lfs       f0, 0x970(r2)
  li        r0, 0x6
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  stw       r0, 0x2C8(r31)
  b         .loc_0x248

.loc_0x1FC:
  mr        r3, r31
  bl        0x4B84
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x248
  lfs       f0, 0x970(r2)
  mr        r3, r30
  mr        r4, r31
  li        r5, 0x2
  stfs      f0, 0x1D4(r31)
  li        r6, 0
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  stfs      f0, 0x1C8(r31)
  stfs      f0, 0x1CC(r31)
  stfs      f0, 0x1D0(r31)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x248:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x2A8
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x2A8
  lfs       f0, 0x970(r2)
  mr        r3, r30
  mr        r4, r31
  li        r6, 0
  stfs      f0, 0x1C8(r31)
  stfs      f0, 0x1CC(r31)
  stfs      f0, 0x1D0(r31)
  lwz       r12, 0x0(r30)
  lwz       r5, 0x2C8(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x2C8(r31)
  cmpwi     r0, 0x5
  bne-      .loc_0x2A8
  li        r0, 0x1
  stw       r0, 0x2C8(r31)

.loc_0x2A8:
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
 * Address:	803811C4
 * Size:	00003C
 */
void Game::UmiMushi::StateFind::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x44F4
  addi      r5, r5, 0x4488
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x990
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80381200
 * Size:	00008C
 */
void Game::UmiMushi::StateFind::init( (Game::EnemyBase *, Game::StateArg *))
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
  lwz       r0, 0x2D8(r4)
  cmplwi    r0, 0
  beq-      .loc_0x44
  mr        r3, r31
  bl        -0x27F860
  mr        r3, r31
  bl        0x5880
  li        r0, -0x1
  stw       r0, 0x2C8(r31)
  b         .loc_0x74

.loc_0x44:
  mr        r3, r31
  bl        -0x27F8CC
  mr        r3, r31
  bl        0x5928
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x9
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x74:
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
 * Address:	8038128C
 * Size:	00012C
 */
void Game::UmiMushi::StateFind::exec( (Game::EnemyBase *))
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
  bl        0x3E3C
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x114
  mr        r3, r31
  bl        -0x279F7C
  lwz       r3, 0x188(r31)
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x114
  mr        r3, r31
  bl        0x5944
  lfs       f1, 0x200(r31)
  lfs       f0, 0x970(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x8C
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x8
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x114

.loc_0x8C:
  mr        r3, r31
  bl        0x4FCC
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
  b         .loc_0x114

.loc_0xC0:
  mr        r3, r31
  bl        0x4D58
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xF4
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x6
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x114

.loc_0xF4:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x3
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x114:
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
 * Address:	803813B8
 * Size:	00003C
 */
void Game::UmiMushi::StateSearch::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x44F4
  addi      r5, r5, 0x4464
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x998
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803813F4
 * Size:	000040
 */
void Game::UmiMushi::StateSearch::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0x6
  mr        r3, r31
  bl        -0x27C410
  li        r0, -0x1
  stw       r0, 0x2C8(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80381434
 * Size:	000294
 */
void Game::UmiMushi::StateSearch::exec( (Game::EnemyBase *))
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
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  mr        r31, r4
  lfs       f0, 0x970(r2)
  lfs       f1, 0x200(r4)
  mr        r30, r3
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x70
  mr        r3, r31
  bl        -0x27C1E4
  lfs       f0, 0x970(r2)
  li        r0, 0x8
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  stw       r0, 0x2C8(r31)
  b         .loc_0x200

.loc_0x70:
  lwz       r0, 0x2C8(r31)
  cmpwi     r0, 0
  bge-      .loc_0x200
  mr        r3, r31
  li        r29, 0x1
  bl        0x5040
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x11C
  mr        r3, r31
  lwz       r4, 0xC0(r31)
  lwz       r12, 0x0(r31)
  lfs       f30, 0x894(r4)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  bl        -0x2B1CC4
  mr        r3, r31
  lfs       f2, 0x1D4(r31)
  lwz       r12, 0x0(r31)
  frsp      f29, f1
  lfs       f31, 0x1D8(r31)
  lfs       f0, 0x1DC(r31)
  lwz       r12, 0x64(r12)
  stfs      f2, 0x8(r1)
  stfs      f31, 0xC(r1)
  stfs      f0, 0x10(r1)
  mtctr     r12
  bctrl     
  bl        -0x2B2260
  fmuls     f0, f30, f29
  li        r4, 0x513C
  frsp      f1, f1
  li        r5, 0
  stfs      f0, 0x1D4(r31)
  fmuls     f0, f30, f1
  stfs      f31, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  lwz       r3, 0x28C(r31)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x128

.loc_0x11C:
  mr        r3, r31
  bl        0x50D0
  mr        r29, r3

.loc_0x128:
  mr        r3, r31
  li        r4, 0
  bl        -0x26CF0C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x160
  mr        r3, r31
  bl        -0x27C2D4
  lfs       f0, 0x970(r2)
  li        r0, 0x5
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  stw       r0, 0x2C8(r31)
  b         .loc_0x200

.loc_0x160:
  mr        r3, r31
  bl        0x46F0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x194
  mr        r3, r31
  bl        -0x27C308
  lfs       f0, 0x970(r2)
  li        r0, 0x2
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  stw       r0, 0x2C8(r31)
  b         .loc_0x200

.loc_0x194:
  mr        r3, r31
  bl        0x4ADC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1C8
  mr        r3, r31
  bl        -0x27C33C
  lfs       f0, 0x970(r2)
  li        r0, 0x6
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  stw       r0, 0x2C8(r31)
  b         .loc_0x200

.loc_0x1C8:
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0x200
  mr        r3, r31
  bl        0x4CE0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x200
  mr        r3, r31
  bl        -0x27C378
  lfs       f0, 0x970(r2)
  li        r0, 0x4
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  stw       r0, 0x2C8(r31)

.loc_0x200:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x260
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x260
  lfs       f0, 0x970(r2)
  mr        r3, r30
  mr        r4, r31
  li        r6, 0
  stfs      f0, 0x1C8(r31)
  stfs      f0, 0x1CC(r31)
  stfs      f0, 0x1D0(r31)
  lwz       r12, 0x0(r30)
  lwz       r5, 0x2C8(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x2C8(r31)
  cmpwi     r0, 0x5
  bne-      .loc_0x260
  li        r0, 0x3
  stw       r0, 0x2C8(r31)

.loc_0x260:
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  psq_l     f29,0x38(r1),0,0
  lfd       f29, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r0, 0x64(r1)
  lwz       r29, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	803816C8
 * Size:	00003C
 */
void Game::UmiMushi::StateTurn::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x44F4
  addi      r5, r5, 0x4440
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x9A0
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80381704
 * Size:	000040
 */
void Game::UmiMushi::StateTurn::init( (Game::EnemyBase *, Game::StateArg *))
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
  bl        -0x27C720
  li        r0, -0x1
  stw       r0, 0x2C8(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80381744
 * Size:	0001EC
 */
void Game::UmiMushi::StateTurn::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, 0x970(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  lfs       f1, 0x200(r4)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x44
  mr        r3, r31
  bl        -0x27C4D8
  li        r0, 0x8
  stw       r0, 0x2C8(r31)
  b         .loc_0x160

.loc_0x44:
  lwz       r0, 0x2C8(r31)
  cmpwi     r0, 0
  bge-      .loc_0xFC
  mr        r3, r31
  li        r4, 0
  bl        -0x26D144
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x78
  mr        r3, r31
  bl        -0x27C50C
  li        r0, 0x5
  stw       r0, 0x2C8(r31)
  b         .loc_0x160

.loc_0x78:
  mr        r3, r31
  bl        0x44C8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x9C
  mr        r3, r31
  bl        -0x27C530
  li        r0, 0x2
  stw       r0, 0x2C8(r31)
  b         .loc_0x160

.loc_0x9C:
  mr        r3, r31
  bl        0x42D4
  lwz       r3, 0xC0(r31)
  lfs       f2, 0x9AC(r2)
  lfs       f0, 0x86C(r3)
  lfs       f3, 0x9A8(r2)
  fmuls     f0, f2, f0
  fmuls     f0, f3, f0
  fcmpo     cr0, f1, f0
  bge-      .loc_0x160
  mr        r3, r31
  bl        0x489C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xE8
  mr        r3, r31
  bl        -0x27C57C
  li        r0, 0x6
  stw       r0, 0x2C8(r31)
  b         .loc_0x160

.loc_0xE8:
  mr        r3, r31
  bl        -0x27C590
  li        r0, 0x3
  stw       r0, 0x2C8(r31)
  b         .loc_0x160

.loc_0xFC:
  cmpwi     r0, 0x2
  beq-      .loc_0x13C
  cmpwi     r0, 0x5
  beq-      .loc_0x13C
  mr        r3, r31
  bl        0x4264
  lwz       r3, 0xC0(r31)
  lbz       r0, 0xA12(r3)
  cmplwi    r0, 0
  beq-      .loc_0x13C
  mr        r3, r31
  bl        0x441C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x13C
  li        r0, 0x2
  stw       r0, 0x2C8(r31)

.loc_0x13C:
  lwz       r0, 0x2C8(r31)
  cmpwi     r0, 0x6
  bne-      .loc_0x160
  lwz       r3, -0x6D20(r13)
  bl        -0x226C70
  cmplwi    r3, 0
  bne-      .loc_0x160
  li        r0, 0x4
  stw       r0, 0x2C8(r31)

.loc_0x160:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x1D4
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x1D4
  lwz       r0, 0x2C8(r31)
  cmpwi     r0, 0
  bge-      .loc_0x1A0
  lis       r3, 0x8049
  li        r4, 0x196
  addi      r3, r3, 0x36A0
  li        r5, 0
  crclr     6, 0x6
  bl        -0x3572A0

.loc_0x1A0:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r6, 0
  lwz       r5, 0x2C8(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x2C8(r31)
  cmpwi     r0, 0x5
  bne-      .loc_0x1D4
  li        r0, 0x4
  stw       r0, 0x2C8(r31)

.loc_0x1D4:
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
 * Address:	80381930
 * Size:	00003C
 */
void Game::UmiMushi::StateFlick::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x44F4
  addi      r5, r5, 0x441C
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x9B0
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8038196C
 * Size:	000160
 */
void Game::UmiMushi::StateFlick::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  mr        r30, r4
  li        r4, 0x3
  mr        r3, r30
  bl        -0x27C98C
  mr        r3, r30
  bl        0x5514
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x47
  bne-      .loc_0x148
  mr        r4, r30
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  addi      r5, r1, 0x14
  lfs       f1, 0xC(r1)
  li        r4, 0x9
  lfs       f0, 0x10(r1)
  li        r6, 0x2
  stfs      f2, 0x14(r1)
  lwz       r3, -0x6960(r13)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  bl        -0x12F7BC
  lwz       r3, -0x6958(r13)
  addi      r5, r1, 0x14
  li        r4, 0xD
  li        r6, 0x2
  bl        -0x12E28C
  lwz       r30, 0x28C(r30)
  li        r31, 0
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x5
  beq-      .loc_0x100
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x6
  beq-      .loc_0x100
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x7
  bne-      .loc_0x104

.loc_0x100:
  li        r31, 0x1

.loc_0x104:
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0x128
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x36B4
  li        r4, 0x454
  addi      r5, r5, 0x36CC
  crclr     6, 0x6
  bl        -0x357450

.loc_0x128:
  cmplwi    r30, 0
  beq-      .loc_0x148
  mr        r3, r30
  li        r4, 0x4
  lwz       r12, 0x28(r30)
  lwz       r12, 0xD4(r12)
  mtctr     r12
  bctrl     

.loc_0x148:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80381ACC
 * Size:	000190
 */
void Game::UmiMushi::StateFlick::exec( (Game::EnemyBase *))
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
  cmplwi    r0, 0x2
  bne-      .loc_0xCC
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f4, 0x9B8(r2)
  li        r4, 0
  lfs       f30, 0x4C4(r5)
  lfs       f29, 0x4EC(r5)
  lfs       f28, 0x514(r5)
  fmr       f2, f30
  fmr       f3, f29
  lfs       f31, 0x53C(r5)
  fmr       f1, f28
  bl        -0x26E67C
  fmr       f1, f31
  lfs       f4, 0x9B8(r2)
  fmr       f2, f30
  mr        r3, r31
  fmr       f3, f29
  li        r4, 0
  bl        -0x26EA50
  fmr       f1, f28
  lfs       f4, 0x9B8(r2)
  fmr       f2, f30
  mr        r3, r31
  fmr       f3, f29
  li        r4, 0
  bl        -0x26E3F8
  lfs       f0, 0x970(r2)
  stfs      f0, 0x20C(r31)
  b         .loc_0x158

.loc_0xCC:
  cmplwi    r0, 0x3E8
  bne-      .loc_0x158
  lfs       f1, 0x200(r31)
  lfs       f0, 0x970(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x104
  lwz       r12, 0x0(r3)
  li        r5, 0x8
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x158

.loc_0x104:
  mr        r3, r31
  bl        0x40B4
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
  li        r6, 0
  lwz       r5, 0x2C8(r31)
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
 * Address:	80381C5C
 * Size:	00003C
 */
void Game::UmiMushi::StateAttack::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x44F4
  addi      r5, r5, 0x43F8
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x9BC
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80381C98
 * Size:	000118
 */
void Game::UmiMushi::StateAttack::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  mr        r30, r4
  mr        r3, r30
  li        r4, 0
  bl        -0x27CCBC
  li        r3, -0x1
  li        r0, 0
  stw       r3, 0x2C8(r30)
  mr        r3, r30
  stb       r0, 0x10(r31)
  stb       r0, 0x11(r31)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x47
  bne-      .loc_0x100
  lwz       r30, 0x28C(r30)
  li        r31, 0
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x5
  beq-      .loc_0xB8
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x6
  beq-      .loc_0xB8
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x7
  bne-      .loc_0xBC

.loc_0xB8:
  li        r31, 0x1

.loc_0xBC:
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0xE0
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x36B4
  li        r4, 0x454
  addi      r5, r5, 0x36CC
  crclr     6, 0x6
  bl        -0x357734

.loc_0xE0:
  cmplwi    r30, 0
  beq-      .loc_0x100
  mr        r3, r30
  li        r4, 0x3
  lwz       r12, 0x28(r30)
  lwz       r12, 0xD4(r12)
  mtctr     r12
  bctrl     

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
 * Address:	80381DB0
 * Size:	000520
 */
void Game::UmiMushi::StateAttack::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0xB0(r1)
  mflr      r0
  stw       r0, 0xB4(r1)
  stfd      f31, 0xA0(r1)
  psq_st    f31,0xA8(r1),0,0
  stfd      f30, 0x90(r1)
  psq_st    f30,0x98(r1),0,0
  stfd      f29, 0x80(r1)
  psq_st    f29,0x88(r1),0,0
  stfd      f28, 0x70(r1)
  psq_st    f28,0x78(r1),0,0
  stw       r31, 0x6C(r1)
  stw       r30, 0x68(r1)
  stw       r29, 0x64(r1)
  stw       r28, 0x60(r1)
  mr        r28, r3
  mr        r31, r4
  lbz       r0, 0x10(r3)
  cmplwi    r0, 0
  beq-      .loc_0x6C
  mr        r3, r31
  li        r4, 0
  bl        -0x26E2D4
  cmpwi     r3, 0
  ble-      .loc_0x6C
  li        r0, 0x1
  stb       r0, 0x11(r28)

.loc_0x6C:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x4E0
  lwz       r0, 0x1C(r3)
  cmpwi     r0, 0x5
  beq-      .loc_0x12C
  bge-      .loc_0x9C
  cmpwi     r0, 0x3
  beq-      .loc_0xB4
  bge-      .loc_0xC0
  b         .loc_0x4E0

.loc_0x9C:
  cmpwi     r0, 0x3E8
  beq-      .loc_0x490
  bge-      .loc_0x4E0
  cmpwi     r0, 0x7
  bge-      .loc_0x4E0
  b         .loc_0x414

.loc_0xB4:
  li        r0, 0x1
  stb       r0, 0x10(r28)
  b         .loc_0x4E0

.loc_0xC0:
  mr        r3, r31
  bl        0x4EB8
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x47
  bne-      .loc_0x4E0
  mr        r4, r31
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x14(r1)
  addi      r5, r1, 0x4C
  lfs       f1, 0x18(r1)
  li        r4, 0xC
  lfs       f0, 0x1C(r1)
  li        r6, 0x2
  stfs      f2, 0x4C(r1)
  lwz       r3, -0x6958(r13)
  stfs      f1, 0x50(r1)
  stfs      f0, 0x54(r1)
  bl        -0x12E754
  b         .loc_0x4E0

.loc_0x12C:
  lwz       r3, 0xC0(r31)
  lbz       r0, 0xA13(r3)
  cmplwi    r0, 0
  beq-      .loc_0x4E0
  li        r0, 0
  lwz       r3, -0x6D20(r13)
  lis       r4, 0x804B
  stw       r0, 0x48(r1)
  subi      r4, r4, 0x434C
  cmplwi    r0, 0
  stw       r4, 0x3C(r1)
  stw       r0, 0x40(r1)
  stw       r3, 0x44(r1)
  bne-      .loc_0x17C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)
  b         .loc_0x204

.loc_0x17C:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)
  b         .loc_0x1E8

.loc_0x194:
  lwz       r3, 0x44(r1)
  lwz       r4, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x48(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x204
  lwz       r3, 0x44(r1)
  lwz       r4, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)

.loc_0x1E8:
  lwz       r12, 0x3C(r1)
  addi      r3, r1, 0x3C
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x194

.loc_0x204:
  lfs       f31, 0x970(r2)
  b         .loc_0x3F0

.loc_0x20C:
  lwz       r3, 0x44(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  li        r28, 0
  mr        r29, r3
  b         .loc_0x314

.loc_0x22C:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x25C(r12)
  mtctr     r12
  bctrl     
  mr        r4, r28
  bl        -0x24987C
  mr        r30, r3
  addi      r4, r1, 0x30
  bl        -0x249B38
  mr        r4, r29
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x34(r1)
  lfs       f0, 0xC(r1)
  lfs       f3, 0x30(r1)
  fsubs     f4, f1, f0
  lfs       f2, 0x8(r1)
  lfs       f1, 0x38(r1)
  lfs       f0, 0x10(r1)
  fsubs     f2, f3, f2
  fmuls     f3, f4, f4
  fsubs     f1, f1, f0
  fmadds    f0, f2, f2, f3
  fmuls     f1, f1, f1
  fadds     f1, f1, f0
  fcmpo     cr0, f1, f31
  ble-      .loc_0x2B8
  ble-      .loc_0x2BC
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x2BC

.loc_0x2B8:
  fmr       f1, f31

.loc_0x2BC:
  lfs       f0, 0x1C(r30)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x310
  lwz       r5, 0xC0(r31)
  lis       r4, 0x804B
  lis       r3, 0x804B
  li        r0, 0
  lfs       f0, 0x604(r5)
  subi      r4, r4, 0x5D00
  addi      r5, r3, 0x4DE0
  mr        r3, r29
  stw       r4, 0x20(r1)
  addi      r4, r1, 0x20
  stw       r31, 0x24(r1)
  stw       r5, 0x20(r1)
  stfs      f0, 0x28(r1)
  stw       r0, 0x2C(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x310:
  addi      r28, r28, 0x1

.loc_0x314:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x25C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x0(r3)
  cmpw      r28, r0
  blt+      .loc_0x22C
  lwz       r0, 0x48(r1)
  cmplwi    r0, 0
  bne-      .loc_0x360
  lwz       r3, 0x44(r1)
  lwz       r4, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)
  b         .loc_0x3F0

.loc_0x360:
  lwz       r3, 0x44(r1)
  lwz       r4, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)
  b         .loc_0x3D4

.loc_0x380:
  lwz       r3, 0x44(r1)
  lwz       r4, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x48(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x3F0
  lwz       r3, 0x44(r1)
  lwz       r4, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)

.loc_0x3D4:
  lwz       r12, 0x3C(r1)
  addi      r3, r1, 0x3C
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x380

.loc_0x3F0:
  lwz       r3, 0x44(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x40(r1)
  cmplw     r4, r3
  bne+      .loc_0x20C
  b         .loc_0x4E0

.loc_0x414:
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f4, 0x9B8(r2)
  li        r4, 0
  lfs       f30, 0x4C4(r5)
  lfs       f29, 0x4EC(r5)
  lfs       f28, 0x514(r5)
  fmr       f2, f30
  fmr       f3, f29
  lfs       f31, 0x53C(r5)
  fmr       f1, f28
  bl        -0x26ED1C
  fmr       f1, f31
  lfs       f4, 0x9B8(r2)
  fmr       f2, f30
  mr        r3, r31
  fmr       f3, f29
  li        r4, 0
  bl        -0x26F0F0
  fmr       f1, f28
  lfs       f4, 0x9B8(r2)
  fmr       f2, f30
  mr        r3, r31
  fmr       f3, f29
  li        r4, 0
  bl        -0x26EA98
  lfs       f0, 0x970(r2)
  li        r0, 0
  stfs      f0, 0x20C(r31)
  stb       r0, 0x10(r28)
  b         .loc_0x4E0

.loc_0x490:
  lbz       r0, 0x11(r28)
  cmplwi    r0, 0
  beq-      .loc_0x4C0
  mr        r3, r28
  mr        r4, r31
  lwz       r12, 0x0(r28)
  li        r5, 0x7
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x4E0

.loc_0x4C0:
  mr        r3, r28
  mr        r4, r31
  lwz       r12, 0x0(r28)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x4E0:
  psq_l     f31,0xA8(r1),0,0
  lfd       f31, 0xA0(r1)
  psq_l     f30,0x98(r1),0,0
  lfd       f30, 0x90(r1)
  psq_l     f29,0x88(r1),0,0
  lfd       f29, 0x80(r1)
  psq_l     f28,0x78(r1),0,0
  lfd       f28, 0x70(r1)
  lwz       r31, 0x6C(r1)
  lwz       r30, 0x68(r1)
  lwz       r29, 0x64(r1)
  lwz       r0, 0xB4(r1)
  lwz       r28, 0x60(r1)
  mtlr      r0
  addi      r1, r1, 0xB0
  blr
*/
}

/*
 * --INFO--
 * Address:	803822D0
 * Size:	00003C
 */
void Game::UmiMushi::StateEat::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x44F4
  addi      r5, r5, 0x43D4
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x9C4
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8038230C
 * Size:	000040
 */
void Game::UmiMushi::StateEat::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0x2
  mr        r3, r31
  bl        -0x27D328
  mr        r3, r31
  bl        0x4C84
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8038234C
 * Size:	0000B8
 */
void Game::UmiMushi::StateEat::exec( (Game::EnemyBase *))
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
  beq-      .loc_0xA0
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0xA0
  lfs       f1, 0x9C8(r2)
  mr        r3, r31
  li        r4, 0
  bl        -0x26E50C
  lfs       f1, 0x200(r31)
  lfs       f0, 0x970(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x80
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x8
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xA0

.loc_0x80:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xA0:
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
 * Address:	80382404
 * Size:	00003C
 */
void Game::UmiMushi::StateDead::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x44F4
  addi      r5, r5, 0x43B0
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x9CC
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80382440
 * Size:	000088
 */
void Game::UmiMushi::StateDead::init( (Game::EnemyBase *, Game::StateArg *))
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
  bl        -0x27D45C
  lfs       f0, 0x970(r2)
  mr        r3, r31
  stfs      f0, 0x1C8(r31)
  stfs      f0, 0x1CC(r31)
  stfs      f0, 0x1D0(r31)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x27CD64
  mr        r3, r31
  bl        0x46A8
  mr        r3, r31
  bl        0x4B94
  lwz       r3, 0x28C(r31)
  li        r4, 0x593D
  li        r5, 0
  lwz       r12, 0x28(r3)
  lwz       r12, 0x88(r12)
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
 * Address:	803824C8
 * Size:	0000B8
 */
void Game::UmiMushi::StateDead::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  bl        0x2C08
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0xA4
  lwz       r0, 0x1C(r3)
  cmpwi     r0, 0x4
  beq-      .loc_0x8C
  bge-      .loc_0x4C
  cmpwi     r0, 0x2
  beq-      .loc_0x58
  bge-      .loc_0x64
  b         .loc_0xA4

.loc_0x4C:
  cmpwi     r0, 0x3E8
  beq-      .loc_0x98
  b         .loc_0xA4

.loc_0x58:
  mr        r3, r31
  bl        0x4988
  b         .loc_0xA4

.loc_0x64:
  mr        r3, r31
  bl        0x48BC
  lwz       r3, 0x28C(r31)
  li        r4, 0x593E
  li        r5, 0
  lwz       r12, 0x28(r3)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xA4

.loc_0x8C:
  mr        r3, r31
  bl        0x4B40
  b         .loc_0xA4

.loc_0x98:
  mr        r3, r31
  li        r4, 0
  bl        -0x247478

.loc_0xA4:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80382580
 * Size:	00003C
 */
void Game::UmiMushi::StateLost::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x44F4
  addi      r5, r5, 0x438C
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x9D4
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803825BC
 * Size:	000054
 */
void Game::UmiMushi::StateLost::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0x9
  mr        r3, r31
  bl        -0x27D5D8
  lfs       f0, 0x970(r2)
  stfs      f0, 0x1C8(r31)
  stfs      f0, 0x1CC(r31)
  stfs      f0, 0x1D0(r31)
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
 * Address:	80382610
 * Size:	000090
 */
void Game::UmiMushi::StateLost::exec( (Game::EnemyBase *))
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
  bl        0x32C8
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x78
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x78
  lfs       f0, 0x198(r31)
  mr        r3, r30
  mr        r4, r31
  li        r5, 0x1
  stfs      f0, 0x2BC(r31)
  li        r6, 0
  lfs       f0, 0x19C(r31)
  stfs      f0, 0x2C0(r31)
  lfs       f0, 0x1A0(r31)
  stfs      f0, 0x2C4(r31)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x78:
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
 * Address:	803826A0
 * Size:	000028
 */
void __sinit_umiMushiState_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804E
  stw       r0, -0x66C0(r13)
  stfsu     f0, 0x4380(r3)
  stfs      f0, -0x66BC(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}
