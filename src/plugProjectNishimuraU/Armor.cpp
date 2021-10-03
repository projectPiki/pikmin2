

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
 * Address:	8027D69C
 * Size:	000140
 */
void Game::Armor::Obj::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  extsh.    r0, r4
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  beq-      .loc_0x40
  addi      r0, r31, 0x2E4
  lis       r3, 0x804B
  stw       r0, 0x17C(r31)
  subi      r3, r3, 0x5988
  li        r0, 0
  stw       r3, 0x2E4(r31)
  stw       r0, 0x2E8(r31)
  stw       r0, 0x2EC(r31)

.loc_0x40:
  mr        r3, r31
  li        r4, 0
  bl        -0x17C344
  lis       r3, 0x804D
  addi      r0, r31, 0x2E4
  subi      r5, r3, 0x7A84
  addi      r3, r31, 0x2CC
  stw       r5, 0x0(r31)
  addi      r4, r5, 0x1B0
  addi      r5, r5, 0x2FC
  stw       r4, 0x178(r31)
  lwz       r4, 0x17C(r31)
  stw       r5, 0x0(r4)
  lwz       r4, 0x17C(r31)
  sub       r0, r0, r4
  stw       r0, 0xC(r4)
  bl        -0x1451D4
  li        r3, 0x2C
  bl        -0x259880
  mr.       r30, r3
  beq-      .loc_0xD4
  bl        -0x155DBC
  lis       r3, 0x804D
  lis       r4, 0x804B
  subi      r0, r3, 0x6570
  lis       r3, 0x804F
  stw       r0, 0x0(r30)
  subi      r4, r4, 0x4678
  subi      r3, r3, 0x4200
  li        r0, 0
  stw       r4, 0x10(r30)
  stw       r3, 0x10(r30)
  stb       r0, 0x28(r30)
  stw       r0, 0x1C(r30)
  stw       r0, 0x14(r30)
  stb       r0, 0x28(r30)
  stw       r0, 0x20(r30)

.loc_0xD4:
  stw       r30, 0x184(r31)
  li        r3, 0x1C
  bl        -0x2598D4
  mr.       r4, r3
  beq-      .loc_0x108
  lis       r5, 0x804B
  lis       r3, 0x804D
  subi      r0, r5, 0x680
  li        r5, -0x1
  stw       r0, 0x0(r4)
  subi      r0, r3, 0x6594
  stw       r5, 0x18(r4)
  stw       r0, 0x0(r4)

.loc_0x108:
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0x2F8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  bl        0x1970
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
 * Address:	8027D7DC
 * Size:	000004
 */
void Game::Armor::Obj::setInitialSetting( (Game::EnemyInitialParamBase *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8027D7E0
 * Size:	000098
 */
void Game::Armor::Obj::onInit( (Game::CreatureInitArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x17BD9C
  lwz       r4, 0x1E0(r31)
  li        r0, -0x1
  lfs       f0, -0x2E20(r2)
  mr        r3, r31
  rlwinm    r4,r4,0,21,19
  stw       r4, 0x1E0(r31)
  lwz       r4, 0x1E0(r31)
  rlwinm    r4,r4,0,26,24
  stw       r4, 0x1E0(r31)
  stw       r0, 0x2C4(r31)
  stfs      f0, 0x2C8(r31)
  bl        0xB58
  mr        r3, r31
  bl        0x19B0
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1DC(r12)
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
 * Address:	8027D878
 * Size:	000048
 */
void Game::Armor::Obj::doUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r4, r31
  lwz       r3, 0x2BC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x2CC
  bl        -0x14527C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8027D8C0
 * Size:	000004
 */
void Game::Armor::Obj::doDirectDraw( (Graphics &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8027D8C4
 * Size:	000020
 */
void Game::Armor::Obj::doDebugDraw( (Graphics &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x177A64
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8027D8E4
 * Size:	00004C
 */
void Game::Armor::Obj::setFSM( (Game::Armor::FSM *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r4, 0x2BC(r3)
  mr        r4, r31
  lwz       r3, 0x2BC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stw       r0, 0x2B4(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8027D930
 * Size:	0000EC
 */
void Game::Armor::Obj::getShadowParam( (Game::ShadowParam &))
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
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x1E0(r30)
  li        r3, 0
  rlwinm.   r0,r4,0,21,21
  bne-      .loc_0x48
  rlwinm.   r0,r4,0,13,13
  beq-      .loc_0x4C

.loc_0x48:
  li        r3, 0x1

.loc_0x4C:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x78
  lfs       f1, 0x8(r1)
  lfs       f0, -0x2E1C(r2)
  stfs      f1, 0x0(r31)
  lfs       f1, 0xC(r1)
  stfs      f1, 0x4(r31)
  lfs       f1, 0x10(r1)
  stfs      f1, 0x8(r31)
  stfs      f0, 0x18(r31)
  b         .loc_0xB8

.loc_0x78:
  lfs       f0, 0x8(r1)
  lfs       f1, -0x2E18(r2)
  stfs      f0, 0x0(r31)
  lfs       f0, 0x190(r30)
  fadds     f0, f1, f0
  stfs      f0, 0x4(r31)
  lfs       f0, 0x10(r1)
  stfs      f0, 0x8(r31)
  lwz       r0, 0x1E4(r30)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0xB0
  lfs       f0, -0x2E1C(r2)
  stfs      f0, 0x18(r31)
  b         .loc_0xB8

.loc_0xB0:
  lfs       f0, -0x2E14(r2)
  stfs      f0, 0x18(r31)

.loc_0xB8:
  lfs       f2, -0x2E20(r2)
  lfs       f1, -0x2E10(r2)
  stfs      f2, 0xC(r31)
  lfs       f0, -0x2E14(r2)
  stfs      f1, 0x10(r31)
  stfs      f2, 0x14(r31)
  stfs      f0, 0x1C(r31)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8027DA1C
 * Size:	000094
 */
void Game::Armor::Obj::damageCallBack( (Game::Creature *, float, CollPart *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x10(r1)
  psq_st    f31,0x18(r1),0,0
  stw       r31, 0xC(r1)
  lwz       r0, 0x1E0(r3)
  fmr       f31, f1
  mr        r31, r3
  rlwinm.   r0,r0,0,22,22
  beq-      .loc_0x3C
  lfs       f2, -0x2E10(r2)
  bl        -0x177A20
  li        r3, 0x1
  b         .loc_0x78

.loc_0x3C:
  cmplwi    r5, 0
  beq-      .loc_0x74
  lis       r4, 0x646D
  addi      r3, r5, 0x30
  addi      r4, r4, 0x6731
  bl        0x1959C8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x74
  fmr       f1, f31
  lfs       f2, -0x2E10(r2)
  mr        r3, r31
  bl        -0x177A58
  li        r3, 0x1
  b         .loc_0x78

.loc_0x74:
  li        r3, 0

.loc_0x78:
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
 * Address:	8027DAB0
 * Size:	000068
 */
void Game::Armor::Obj::hipdropCallBack( (Game::Creature *, float, CollPart *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r6, 0xC0(r3)
  lwz       r12, 0x278(r12)
  lfs       f1, 0x67C(r6)
  mtctr     r12
  bctrl     
  lwz       r4, 0x1E0(r31)
  rlwinm.   r0,r4,0,22,22
  bne-      .loc_0x48
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x48
  oris      r0, r4, 0x8
  stw       r0, 0x1E0(r31)

.loc_0x48:
  rlwinm    r0,r3,0,24,31
  lwz       r31, 0xC(r1)
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8027DB18
 * Size:	000260
 */
void Game::Armor::Obj::doStartStoneState(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r3
  stw       r30, 0x48(r1)
  bl        -0x17AC3C
  mr        r4, r31
  addi      r3, r1, 0x2C
  bl        -0xDDEE0
  li        r0, 0
  lis       r3, 0x804B
  subi      r4, r3, 0x437C
  addi      r3, r1, 0x2C
  cmplwi    r0, 0
  stw       r4, 0x8(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x68
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x21C

.loc_0x68:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xD4

.loc_0x80:
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
  bne-      .loc_0x21C
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xD4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x80
  b         .loc_0x21C

.loc_0xF4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3
  bl        -0xDE69C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x160
  lis       r3, 0x804B
  lfs       f1, -0x2E20(r2)
  subi      r0, r3, 0x5D00
  lfs       f0, -0x2E0C(r2)
  lis       r3, 0x804B
  stw       r0, 0x18(r1)
  addi      r0, r3, 0x4E04
  mr        r3, r30
  stw       r31, 0x1C(r1)
  addi      r4, r1, 0x18
  stw       r0, 0x18(r1)
  stfs      f1, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x160:
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x18C
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x21C

.loc_0x18C:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x200

.loc_0x1AC:
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
  bne-      .loc_0x21C
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x200:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x1AC

.loc_0x21C:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xF4
  addi      r3, r1, 0x2C
  li        r4, -0x1
  bl        -0xDDFF8
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
 * Address:	8027DD78
 * Size:	000034
 */
void Game::Armor::Obj::doFinishStoneState(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x17AE84
  lfs       f0, -0x2E20(r2)
  stfs      f0, 0x20C(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8027DDAC
 * Size:	000028
 */
void Game::Armor::Obj::startCarcassMotion(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x9
  li        r5, 0
  stw       r0, 0x14(r1)
  bl        -0x178DBC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8027DDD4
 * Size:	000020
 */
void Game::Armor::Obj::doStartMovie(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x1648
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8027DDF4
 * Size:	000020
 */
void Game::Armor::Obj::doEndMovie(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x15F8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8027DE14
 * Size:	00008C
 */
void Game::Armor::Obj::initMouthSlots(void)
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
  mr        r30, r3
  li        r4, 0x1
  addi      r3, r30, 0x2CC
  bl        -0x1458E4
  lwz       r5, 0x174(r30)
  addi      r3, r30, 0x2CC
  li        r4, 0
  subi      r6, r2, 0x2E08
  bl        -0x1457C0
  lfs       f31, -0x2E14(r2)
  li        r31, 0
  b         .loc_0x60

.loc_0x4C:
  mr        r4, r31
  addi      r3, r30, 0x2CC
  bl        -0x1456F0
  stfs      f31, 0x1C(r3)
  addi      r31, r31, 0x1

.loc_0x60:
  lwz       r0, 0x2CC(r30)
  cmpw      r31, r0
  blt+      .loc_0x4C
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
 * Address:	8027DEA0
 * Size:	000030
 */
void Game::Armor::Obj::lifeIncrement(void)
{
/*
.loc_0x0:
  lfs       f1, -0x2E20(r2)
  stfs      f1, 0x208(r3)
  lwz       r0, 0x1E0(r3)
  rlwinm    r0,r0,0,31,29
  stw       r0, 0x1E0(r3)
  lfs       f0, 0x200(r3)
  fcmpo     cr0, f0, f1
  cror      2, 0, 0x2
  bnelr-    
  lfs       f0, -0x2E10(r2)
  stfs      f0, 0x200(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8027DED0
 * Size:	0003EC
 */
void Game::Armor::Obj::attackPikmin(void)
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
  stw       r31, 0x6C(r1)
  stw       r30, 0x68(r1)
  stw       r29, 0x64(r1)
  stw       r28, 0x60(r1)
  li        r4, 0
  lwz       r0, -0x6D0C(r13)
  lis       r5, 0x804B
  stw       r4, 0x48(r1)
  subi      r5, r5, 0x4364
  cmplwi    r4, 0
  stw       r5, 0x3C(r1)
  mr        r31, r3
  stw       r4, 0x40(r1)
  stw       r0, 0x44(r1)
  bne-      .loc_0x7C
  mr        r3, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)
  b         .loc_0x394

.loc_0x7C:
  mr        r3, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)
  b         .loc_0xEC

.loc_0x98:
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
  bne-      .loc_0x394
  lwz       r3, 0x44(r1)
  lwz       r4, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)

.loc_0xEC:
  lwz       r12, 0x3C(r1)
  addi      r3, r1, 0x3C
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x98
  b         .loc_0x394

.loc_0x10C:
  lwz       r3, 0x44(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r29, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2D8
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2D8
  lwz       r0, 0xF4(r29)
  cmplw     r0, r31
  beq-      .loc_0x2D8
  li        r28, 0
  b         .loc_0x2CC

.loc_0x16C:
  mr        r4, r28
  addi      r3, r31, 0x2CC
  bl        -0x1458CC
  mr        r30, r3
  lwz       r0, 0x64(r3)
  cmplwi    r0, 0
  bne-      .loc_0x2C8
  addi      r4, r1, 0x30
  bl        -0x145B94
  mr        r4, r29
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f31, 0xC(r1)
  lfs       f0, 0x34(r1)
  lfs       f29, 0x8(r1)
  fsubs     f2, f0, f31
  lfs       f1, 0x30(r1)
  lfs       f30, 0x10(r1)
  lfs       f0, 0x38(r1)
  fsubs     f1, f1, f29
  fmuls     f3, f2, f2
  fsubs     f2, f0, f30
  lfs       f0, -0x2E20(r2)
  fmadds    f1, f1, f1, f3
  fmuls     f2, f2, f2
  fadds     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x1F8
  ble-      .loc_0x1FC
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x1FC

.loc_0x1F8:
  fmr       f1, f0

.loc_0x1FC:
  lfs       f0, 0x1C(r30)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x2C8
  lis       r4, 0x804B
  lis       r3, 0x804B
  subi      r0, r4, 0x5D00
  li        r4, 0
  stw       r0, 0x4C(r1)
  addi      r0, r3, 0x4DE0
  lfs       f0, -0x2E10(r2)
  lis       r3, 0x804B
  stw       r0, 0x4C(r1)
  addi      r5, r3, 0x4DBC
  li        r0, 0x1
  mr        r3, r29
  stw       r4, 0x5C(r1)
  addi      r4, r1, 0x4C
  stw       r31, 0x50(r1)
  stfs      f0, 0x54(r1)
  stw       r30, 0x58(r1)
  stw       r5, 0x4C(r1)
  stw       r0, 0x5C(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2C8
  lis       r4, 0x804B
  lis       r3, 0x804E
  subi      r0, r4, 0x5808
  lis       r4, 0x804B
  stw       r0, 0x14(r1)
  addi      r0, r3, 0x6A78
  lis       r3, 0x804D
  subi      r4, r4, 0x5814
  stw       r0, 0x14(r1)
  subi      r0, r3, 0x7A98
  li        r6, 0x1ED
  li        r5, 0
  stw       r4, 0x20(r1)
  addi      r3, r1, 0x14
  addi      r4, r1, 0x20
  stfs      f29, 0x24(r1)
  stfs      f31, 0x28(r1)
  stfs      f30, 0x2C(r1)
  sth       r6, 0x18(r1)
  stw       r5, 0x1C(r1)
  stw       r0, 0x14(r1)
  bl        0x130DF4
  b         .loc_0x2D8

.loc_0x2C8:
  addi      r28, r28, 0x1

.loc_0x2CC:
  lwz       r0, 0x2CC(r31)
  cmpw      r28, r0
  blt+      .loc_0x16C

.loc_0x2D8:
  lwz       r0, 0x48(r1)
  cmplwi    r0, 0
  bne-      .loc_0x304
  lwz       r3, 0x44(r1)
  lwz       r4, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)
  b         .loc_0x394

.loc_0x304:
  lwz       r3, 0x44(r1)
  lwz       r4, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)
  b         .loc_0x378

.loc_0x324:
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
  bne-      .loc_0x394
  lwz       r3, 0x44(r1)
  lwz       r4, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r1)

.loc_0x378:
  lwz       r12, 0x3C(r1)
  addi      r3, r1, 0x3C
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x324

.loc_0x394:
  lwz       r3, 0x44(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x40(r1)
  cmplw     r4, r3
  bne+      .loc_0x10C
  psq_l     f31,0x98(r1),0,0
  lfd       f31, 0x90(r1)
  psq_l     f30,0x88(r1),0,0
  lfd       f30, 0x80(r1)
  psq_l     f29,0x78(r1),0,0
  lfd       f29, 0x70(r1)
  lwz       r31, 0x6C(r1)
  lwz       r30, 0x68(r1)
  lwz       r29, 0x64(r1)
  lwz       r0, 0xA4(r1)
  lwz       r28, 0x60(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	8027E2BC
 * Size:	00008C
 */
void Game::Armor::Obj::getSlotPikiNum(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x25C(r12)
  mtctr     r12
  bctrl     
  lwz       r31, 0x0(r3)
  li        r28, 0
  mr        r29, r3
  b         .loc_0x60

.loc_0x40:
  mr        r3, r29
  mr        r4, r28
  bl        -0x145B8C
  lwz       r0, 0x64(r3)
  cmplwi    r0, 0
  beq-      .loc_0x5C
  addi      r30, r30, 0x1

.loc_0x5C:
  addi      r28, r28, 0x1

.loc_0x60:
  cmpw      r28, r31
  blt+      .loc_0x40
  lwz       r0, 0x24(r1)
  mr        r3, r30
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
 * Address:	8027E348
 * Size:	000008
 */
void Game::Armor::Obj::getMouthSlots(void)
{
/*
.loc_0x0:
  addi      r3, r3, 0x2CC
  blr
*/
}

/*
 * --INFO--
 * Address:	8027E350
 * Size:	00002C
 */
void Game::Armor::Obj::killSlotPiki(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  stw       r0, 0x14(r1)
  lwz       r5, 0xC0(r3)
  lfs       f1, 0x81C(r5)
  bl        -0x16A4E4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8027E37C
 * Size:	000020
 */
void Game::Armor::Obj::resetBridgeSearch(void)
{
/*
.loc_0x0:
  li        r4, 0x1
  li        r0, 0
  stb       r4, 0x2C0(r3)
  lfs       f0, -0x2E20(r2)
  stw       r0, 0x2D8(r3)
  stfs      f0, 0x2DC(r3)
  stfs      f0, 0x2E0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8027E39C
 * Size:	000048
 */
void Game::Armor::Obj::setBridgeSearch(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, 0x2C0(r3)
  cmplwi    r0, 0
  beq-      .loc_0x34
  li        r0, 0
  stb       r0, 0x2C0(r31)
  bl        .loc_0x48
  mr        r3, r31
  bl        0x2D8

.loc_0x34:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x48:
*/
}

/*
 * --INFO--
 * Address:	8027E3E4
 * Size:	0002C0
 */
void Game::Armor::Obj::setNearestBridge(void)
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
  mr        r31, r3
  li        r0, 0
  stw       r0, 0x2D8(r3)
  lfs       f0, -0x2E20(r2)
  stfs      f0, 0x2DC(r3)
  stfs      f0, 0x2E0(r3)
  lwz       r3, -0x6B48(r13)
  cmplwi    r3, 0
  beq-      .loc_0x250
  lwz       r4, 0xC0(r31)
  lfs       f0, 0x35C(r4)
  fmuls     f31, f0, f0
  beq-      .loc_0x54
  addi      r3, r3, 0x30

.loc_0x54:
  li        r0, 0
  lis       r4, 0x804B
  addi      r4, r4, 0x560
  stw       r0, 0x20(r1)
  cmplwi    r0, 0
  stw       r4, 0x14(r1)
  stw       r0, 0x18(r1)
  stw       r3, 0x1C(r1)
  bne-      .loc_0x90
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0x230

.loc_0x90:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0xFC

.loc_0xA8:
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x20(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x230
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)

.loc_0xFC:
  lwz       r12, 0x14(r1)
  addi      r3, r1, 0x14
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0xA8
  b         .loc_0x230

.loc_0x11C:
  lwz       r3, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r0, r3
  addi      r3, r1, 0x8
  mr        r30, r0
  mr        r4, r30
  bl        -0x8F5F0
  lfs       f1, 0x194(r31)
  lfs       f0, 0x10(r1)
  lfs       f2, 0x18C(r31)
  fsubs     f1, f1, f0
  lfs       f0, 0x8(r1)
  fsubs     f2, f2, f0
  fmuls     f0, f1, f1
  fmadds    f0, f2, f2, f0
  fcmpo     cr0, f0, f31
  bge-      .loc_0x174
  stw       r30, 0x2D8(r31)
  fmr       f31, f0

.loc_0x174:
  lwz       r0, 0x20(r1)
  cmplwi    r0, 0
  bne-      .loc_0x1A0
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0x230

.loc_0x1A0:
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0x214

.loc_0x1C0:
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x20(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x230
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)

.loc_0x214:
  lwz       r12, 0x14(r1)
  addi      r3, r1, 0x14
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x1C0

.loc_0x230:
  lwz       r3, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x18(r1)
  cmplw     r4, r3
  bne+      .loc_0x11C

.loc_0x250:
  lwz       r3, 0x2D8(r31)
  cmplwi    r3, 0
  beq-      .loc_0x2A0
  bl        -0x8F610
  lfs       f0, -0x2E1C(r2)
  fsubs     f31, f1, f0
  bl        -0x1B50AC
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x2C(r1)
  lfd       f3, -0x2DF8(r2)
  stw       r0, 0x28(r1)
  lfs       f1, -0x2E00(r2)
  lfd       f2, 0x28(r1)
  lfs       f0, -0x2DFC(r2)
  fsubs     f2, f2, f3
  fmuls     f2, f31, f2
  fdivs     f1, f2, f1
  fnmsubs   f0, f0, f31, f1
  stfs      f0, 0x2DC(r31)

.loc_0x2A0:
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
 * Address:	8027E6A4
 * Size:	000004
 */
void Game::Armor::Obj::setCullingCheck(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8027E6A8
 * Size:	0001B4
 */
void Game::Armor::Obj::checkBreakOrMove(void)
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
  stfd      f27, 0x50(r1)
  psq_st    f27,0x58(r1),0,0
  stfd      f26, 0x40(r1)
  psq_st    f26,0x48(r1),0,0
  stw       r31, 0x3C(r1)
  mr        r31, r3
  lwz       r4, 0x2D8(r3)
  cmplwi    r4, 0
  beq-      .loc_0x16C
  addi      r3, r1, 0x20
  bl        -0x8F6C4
  lfs       f28, 0x20(r1)
  addi      r3, r1, 0x14
  lfs       f29, 0x24(r1)
  lfs       f27, 0x28(r1)
  lwz       r4, 0x2D8(r31)
  bl        -0x8F7E0
  lfs       f2, 0x18(r1)
  lfs       f0, 0x190(r31)
  lfs       f1, 0x14(r1)
  fsubs     f30, f2, f0
  lfs       f0, 0x18C(r31)
  lfs       f2, 0x1C(r1)
  fsubs     f31, f1, f0
  lfs       f0, 0x194(r31)
  fmuls     f1, f29, f30
  fsubs     f29, f2, f0
  lfs       f0, -0x2E20(r2)
  fmadds    f1, f28, f31, f1
  fmadds    f1, f27, f29, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0xB4
  li        r3, 0x6
  b         .loc_0x170

.loc_0xB4:
  lwz       r4, 0x2D8(r31)
  addi      r3, r1, 0x8
  bl        -0x8F688
  lfs       f27, 0x8(r1)
  lfs       f28, 0xC(r1)
  lfs       f26, 0x10(r1)
  lwz       r3, 0x2D8(r31)
  bl        -0x8F748
  fmuls     f3, f28, f30
  lfs       f0, -0x2DFC(r2)
  lfs       f2, -0x2E1C(r2)
  fmuls     f4, f0, f1
  lfs       f0, -0x2E20(r2)
  fmadds    f1, f27, f31, f3
  fadds     f2, f2, f4
  fmadds    f1, f26, f29, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x104
  stfs      f2, 0x2E0(r31)
  b         .loc_0x10C

.loc_0x104:
  fneg      f0, f2
  stfs      f0, 0x2E0(r31)

.loc_0x10C:
  lfs       f0, -0x2E20(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x11C
  b         .loc_0x120

.loc_0x11C:
  fneg      f1, f1

.loc_0x120:
  fcmpo     cr0, f1, f4
  ble-      .loc_0x130
  li        r3, 0x5
  b         .loc_0x170

.loc_0x130:
  lwz       r3, -0x6CF8(r13)
  addi      r4, r31, 0x18C
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  lfs       f0, -0x2DF0(r2)
  lfs       f2, 0x190(r31)
  fadds     f0, f0, f1
  fcmpo     cr0, f2, f0
  ble-      .loc_0x164
  li        r3, 0x7
  b         .loc_0x170

.loc_0x164:
  li        r3, 0x5
  b         .loc_0x170

.loc_0x16C:
  li        r3, 0x6

.loc_0x170:
  psq_l     f31,0x98(r1),0,0
  lfd       f31, 0x90(r1)
  psq_l     f30,0x88(r1),0,0
  lfd       f30, 0x80(r1)
  psq_l     f29,0x78(r1),0,0
  lfd       f29, 0x70(r1)
  psq_l     f28,0x68(r1),0,0
  lfd       f28, 0x60(r1)
  psq_l     f27,0x58(r1),0,0
  lfd       f27, 0x50(r1)
  psq_l     f26,0x48(r1),0,0
  lfd       f26, 0x40(r1)
  lwz       r0, 0xA4(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	8027E85C
 * Size:	000028
 */
void Game::Armor::Obj::isBreakBridge(void)
{
/*
.loc_0x0:
  lwz       r3, 0x2D8(r3)
  cmplwi    r3, 0
  beq-      .loc_0x20
  lwz       r0, 0x218(r3)
  cmpwi     r0, 0
  beq-      .loc_0x20
  li        r3, 0x1
  blr       

.loc_0x20:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8027E884
 * Size:	0002A8
 */
void Game::Armor::Obj::moveBridgeSide(void)
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
  stw       r31, 0x5C(r1)
  mr        r31, r3
  addi      r3, r1, 0x44
  lwz       r4, 0x2D8(r31)
  bl        -0x8F98C
  lfs       f29, 0x44(r1)
  addi      r3, r1, 0x38
  lfs       f28, 0x4C(r1)
  lwz       r4, 0x2D8(r31)
  bl        -0x8F7F8
  lfs       f30, 0x38(r1)
  addi      r3, r1, 0x2C
  lfs       f31, 0x40(r1)
  lwz       r4, 0x2D8(r31)
  bl        -0x8F8B0
  lfs       f1, 0x2E0(r31)
  lfs       f4, 0x34(r1)
  fmuls     f31, f31, f1
  lfs       f0, -0x2DEC(r2)
  fmuls     f30, f30, f1
  lfs       f3, 0x2C(r1)
  fmuls     f4, f4, f0
  lfs       f1, 0x194(r31)
  fadds     f28, f28, f31
  lfs       f2, 0x18C(r31)
  fmuls     f3, f3, f0
  lfs       f0, -0x2DE8(r2)
  fadds     f29, f29, f30
  fadds     f28, f28, f4
  fadds     f29, f29, f3
  fsubs     f1, f1, f28
  fsubs     f2, f2, f29
  fmuls     f1, f1, f1
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x138
  mr        r3, r31
  lwz       r4, 0xC0(r31)
  lwz       r12, 0x0(r31)
  lfs       f1, -0x2DE4(r2)
  lfs       f0, 0x2E4(r4)
  lwz       r12, 0x64(r12)
  fmuls     f30, f1, f0
  mtctr     r12
  bctrl     
  bl        -0x1AF148
  mr        r3, r31
  lfs       f2, 0x1D4(r31)
  lwz       r12, 0x0(r31)
  frsp      f29, f1
  lfs       f31, 0x1D8(r31)
  lfs       f0, 0x1DC(r31)
  lwz       r12, 0x64(r12)
  stfs      f2, 0x20(r1)
  stfs      f31, 0x24(r1)
  stfs      f0, 0x28(r1)
  mtctr     r12
  bctrl     
  bl        -0x1AF6E4
  fmuls     f0, f30, f29
  li        r3, 0x1
  frsp      f1, f1
  stfs      f0, 0x1D4(r31)
  fmuls     f0, f30, f1
  stfs      f31, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  b         .loc_0x274

.loc_0x138:
  mr        r4, r31
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x8
  lfs       f31, 0x334(r5)
  lwz       r12, 0x8(r12)
  lfs       f30, 0x30C(r5)
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r1)
  lis       r3, 0x8051
  lfs       f0, 0x10(r1)
  subi      r3, r3, 0x2E20
  fsubs     f1, f29, f1
  fsubs     f2, f28, f0
  bl        -0x2498F0
  bl        0x1931D4
  lwz       r12, 0x0(r31)
  fmr       f29, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f29
  bl        0x1931DC
  fmuls     f30, f1, f30
  lfs       f0, -0x2DDC(r2)
  lfs       f1, -0x2DE0(r2)
  fmuls     f0, f0, f31
  fabs      f2, f30
  fmuls     f1, f1, f0
  frsp      f0, f2
  fcmpo     cr0, f0, f1
  ble-      .loc_0x1DC
  lfs       f0, -0x2E20(r2)
  fcmpo     cr0, f30, f0
  ble-      .loc_0x1D8
  fmr       f30, f1
  b         .loc_0x1DC

.loc_0x1D8:
  fneg      f30, f1

.loc_0x1DC:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f30, f1
  bl        0x193158
  stfs      f1, 0x1FC(r31)
  mr        r3, r31
  lfs       f0, 0x1FC(r31)
  stfs      f0, 0x1A8(r31)
  lwz       r12, 0x0(r31)
  lwz       r4, 0xC0(r31)
  lwz       r12, 0x64(r12)
  lfs       f30, 0x2E4(r4)
  mtctr     r12
  bctrl     
  bl        -0x1AF288
  mr        r3, r31
  lfs       f2, 0x1D4(r31)
  lwz       r12, 0x0(r31)
  frsp      f29, f1
  lfs       f31, 0x1D8(r31)
  lfs       f0, 0x1DC(r31)
  lwz       r12, 0x64(r12)
  stfs      f2, 0x14(r1)
  stfs      f31, 0x18(r1)
  stfs      f0, 0x1C(r1)
  mtctr     r12
  bctrl     
  bl        -0x1AF824
  fmuls     f0, f30, f29
  li        r3, 0
  frsp      f1, f1
  stfs      f0, 0x1D4(r31)
  fmuls     f0, f30, f1
  stfs      f31, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)

.loc_0x274:
  psq_l     f31,0x98(r1),0,0
  lfd       f31, 0x90(r1)
  psq_l     f30,0x88(r1),0,0
  lfd       f30, 0x80(r1)
  psq_l     f29,0x78(r1),0,0
  lfd       f29, 0x70(r1)
  psq_l     f28,0x68(r1),0,0
  lfd       f28, 0x60(r1)
  lwz       r0, 0xA4(r1)
  lwz       r31, 0x5C(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	8027EB2C
 * Size:	000288
 */
void Game::Armor::Obj::moveBridgeCentre(void)
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  mflr      r0
  stw       r0, 0x94(r1)
  stfd      f31, 0x80(r1)
  psq_st    f31,0x88(r1),0,0
  stfd      f30, 0x70(r1)
  psq_st    f30,0x78(r1),0,0
  stfd      f29, 0x60(r1)
  psq_st    f29,0x68(r1),0,0
  stfd      f28, 0x50(r1)
  psq_st    f28,0x58(r1),0,0
  stw       r31, 0x4C(r1)
  mr        r31, r3
  addi      r3, r1, 0x38
  lwz       r4, 0x2D8(r31)
  bl        -0x8FC34
  lfs       f29, 0x38(r1)
  addi      r3, r1, 0x2C
  lfs       f28, 0x40(r1)
  lwz       r4, 0x2D8(r31)
  bl        -0x8FAA0
  lfs       f1, -0x2DD8(r2)
  lfs       f0, 0x2DC(r31)
  lfs       f5, 0x34(r1)
  fmuls     f3, f1, f0
  lfs       f4, 0x2C(r1)
  lfs       f1, 0x194(r31)
  lfs       f2, 0x18C(r31)
  fmuls     f5, f5, f3
  lfs       f0, -0x2DE8(r2)
  fmuls     f4, f4, f3
  fadds     f28, f28, f5
  fadds     f29, f29, f4
  fsubs     f1, f1, f28
  fsubs     f2, f2, f29
  fmuls     f1, f1, f1
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x118
  mr        r3, r31
  lwz       r4, 0xC0(r31)
  lwz       r12, 0x0(r31)
  lfs       f1, -0x2DE4(r2)
  lfs       f0, 0x2E4(r4)
  lwz       r12, 0x64(r12)
  fmuls     f30, f1, f0
  mtctr     r12
  bctrl     
  bl        -0x1AF3D0
  mr        r3, r31
  lfs       f2, 0x1D4(r31)
  lwz       r12, 0x0(r31)
  frsp      f29, f1
  lfs       f31, 0x1D8(r31)
  lfs       f0, 0x1DC(r31)
  lwz       r12, 0x64(r12)
  stfs      f2, 0x20(r1)
  stfs      f31, 0x24(r1)
  stfs      f0, 0x28(r1)
  mtctr     r12
  bctrl     
  bl        -0x1AF96C
  fmuls     f0, f30, f29
  li        r3, 0x1
  frsp      f1, f1
  stfs      f0, 0x1D4(r31)
  fmuls     f0, f30, f1
  stfs      f31, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  b         .loc_0x254

.loc_0x118:
  mr        r4, r31
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x8
  lfs       f31, 0x334(r5)
  lwz       r12, 0x8(r12)
  lfs       f30, 0x30C(r5)
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r1)
  lis       r3, 0x8051
  lfs       f0, 0x10(r1)
  subi      r3, r3, 0x2E20
  fsubs     f1, f29, f1
  fsubs     f2, f28, f0
  bl        -0x249B78
  bl        0x192F4C
  lwz       r12, 0x0(r31)
  fmr       f29, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f29
  bl        0x192F54
  fmuls     f30, f1, f30
  lfs       f0, -0x2DDC(r2)
  lfs       f1, -0x2DE0(r2)
  fmuls     f0, f0, f31
  fabs      f2, f30
  fmuls     f1, f1, f0
  frsp      f0, f2
  fcmpo     cr0, f0, f1
  ble-      .loc_0x1BC
  lfs       f0, -0x2E20(r2)
  fcmpo     cr0, f30, f0
  ble-      .loc_0x1B8
  fmr       f30, f1
  b         .loc_0x1BC

.loc_0x1B8:
  fneg      f30, f1

.loc_0x1BC:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f30, f1
  bl        0x192ED0
  stfs      f1, 0x1FC(r31)
  mr        r3, r31
  lfs       f0, 0x1FC(r31)
  stfs      f0, 0x1A8(r31)
  lwz       r12, 0x0(r31)
  lwz       r4, 0xC0(r31)
  lwz       r12, 0x64(r12)
  lfs       f30, 0x2E4(r4)
  mtctr     r12
  bctrl     
  bl        -0x1AF510
  mr        r3, r31
  lfs       f2, 0x1D4(r31)
  lwz       r12, 0x0(r31)
  frsp      f29, f1
  lfs       f31, 0x1D8(r31)
  lfs       f0, 0x1DC(r31)
  lwz       r12, 0x64(r12)
  stfs      f2, 0x14(r1)
  stfs      f31, 0x18(r1)
  stfs      f0, 0x1C(r1)
  mtctr     r12
  bctrl     
  bl        -0x1AFAAC
  fmuls     f0, f30, f29
  li        r3, 0
  frsp      f1, f1
  stfs      f0, 0x1D4(r31)
  fmuls     f0, f30, f1
  stfs      f31, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)

.loc_0x254:
  psq_l     f31,0x88(r1),0,0
  lfd       f31, 0x80(r1)
  psq_l     f30,0x78(r1),0,0
  lfd       f30, 0x70(r1)
  psq_l     f29,0x68(r1),0,0
  lfd       f29, 0x60(r1)
  psq_l     f28,0x58(r1),0,0
  lfd       f28, 0x50(r1)
  lwz       r0, 0x94(r1)
  lwz       r31, 0x4C(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	8027EDB4
 * Size:	00031C
 */
void Game::Armor::Obj::moveBridgeTop(void)
{
/*
.loc_0x0:
  stwu      r1, -0xC0(r1)
  mflr      r0
  stw       r0, 0xC4(r1)
  stfd      f31, 0xB0(r1)
  psq_st    f31,0xB8(r1),0,0
  stfd      f30, 0xA0(r1)
  psq_st    f30,0xA8(r1),0,0
  stfd      f29, 0x90(r1)
  psq_st    f29,0x98(r1),0,0
  stfd      f28, 0x80(r1)
  psq_st    f28,0x88(r1),0,0
  stfd      f27, 0x70(r1)
  psq_st    f27,0x78(r1),0,0
  stw       r31, 0x6C(r1)
  stw       r30, 0x68(r1)
  mr        r30, r3
  addi      r3, r1, 0x50
  lwz       r4, 0x2D8(r30)
  lwz       r5, 0x218(r4)
  subi      r31, r5, 0x1
  mr        r5, r31
  bl        -0x8FFBC
  lfs       f31, 0x50(r1)
  addi      r3, r1, 0x44
  lfs       f30, 0x58(r1)
  lwz       r4, 0x2D8(r30)
  bl        -0x8FD40
  lfs       f1, 0x44(r1)
  cmpwi     r31, 0
  lfs       f0, 0x2DC(r30)
  lfs       f2, 0x4C(r1)
  fmuls     f1, f1, f0
  fmuls     f2, f2, f0
  fadds     f31, f31, f1
  fadds     f30, f30, f2
  ble-      .loc_0xBC
  lwz       r4, 0x2D8(r30)
  addi      r3, r1, 0x38
  bl        -0x8FE14
  lfs       f1, 0x38(r1)
  lfs       f0, -0x2DEC(r2)
  lfs       f2, 0x40(r1)
  fmuls     f1, f1, f0
  fmuls     f2, f2, f0
  fadds     f31, f31, f1
  fadds     f30, f30, f2
  b         .loc_0xE4

.loc_0xBC:
  lwz       r4, 0x2D8(r30)
  addi      r3, r1, 0x2C
  bl        -0x8FE40
  lfs       f1, 0x2C(r1)
  lfs       f0, -0x2DD4(r2)
  lfs       f2, 0x34(r1)
  fmuls     f1, f1, f0
  fmuls     f2, f2, f0
  fadds     f31, f31, f1
  fadds     f30, f30, f2

.loc_0xE4:
  mr        r4, r30
  lwz       r5, 0xC0(r30)
  lwz       r12, 0x0(r30)
  addi      r3, r1, 0x8
  lfs       f28, 0x334(r5)
  lwz       r12, 0x8(r12)
  lfs       f29, 0x30C(r5)
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r1)
  lis       r3, 0x8051
  lfs       f0, 0x10(r1)
  subi      r3, r3, 0x2E20
  fsubs     f1, f31, f1
  fsubs     f2, f30, f0
  bl        -0x249DCC
  bl        0x192CF8
  lwz       r12, 0x0(r30)
  fmr       f27, f1
  mr        r3, r30
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f27
  bl        0x192D00
  fmuls     f29, f1, f29
  lfs       f0, -0x2DDC(r2)
  lfs       f1, -0x2DE0(r2)
  fmuls     f0, f0, f28
  fabs      f2, f29
  fmuls     f1, f1, f0
  frsp      f0, f2
  fcmpo     cr0, f0, f1
  ble-      .loc_0x188
  lfs       f0, -0x2E20(r2)
  fcmpo     cr0, f29, f0
  ble-      .loc_0x184
  fmr       f29, f1
  b         .loc_0x188

.loc_0x184:
  fneg      f29, f1

.loc_0x188:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f29, f1
  bl        0x192C7C
  stfs      f1, 0x1FC(r30)
  lfs       f0, -0x2E1C(r2)
  lfs       f1, 0x1FC(r30)
  stfs      f1, 0x1A8(r30)
  lfs       f1, 0x194(r30)
  lfs       f2, 0x18C(r30)
  fsubs     f1, f1, f30
  fsubs     f2, f2, f31
  fmuls     f1, f1, f1
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1EC
  lfs       f0, -0x2E20(r2)
  li        r3, 0x1
  stfs      f0, 0x1D4(r30)
  stfs      f0, 0x1D8(r30)
  stfs      f0, 0x1DC(r30)
  b         .loc_0x2DC

.loc_0x1EC:
  lfs       f0, -0x2DD0(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x26C
  mr        r3, r30
  lwz       r4, 0xC0(r30)
  lwz       r12, 0x0(r30)
  lfs       f28, 0x2E4(r4)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  bl        -0x1AF7AC
  mr        r3, r30
  lfs       f2, 0x1D4(r30)
  lwz       r12, 0x0(r30)
  frsp      f27, f1
  lfs       f30, 0x1D8(r30)
  lfs       f0, 0x1DC(r30)
  lwz       r12, 0x64(r12)
  stfs      f2, 0x20(r1)
  stfs      f30, 0x24(r1)
  stfs      f0, 0x28(r1)
  mtctr     r12
  bctrl     
  bl        -0x1AFD48
  fmuls     f0, f28, f27
  li        r3, 0x1
  frsp      f1, f1
  stfs      f0, 0x1D4(r30)
  fmuls     f0, f28, f1
  stfs      f30, 0x1D8(r30)
  stfs      f0, 0x1DC(r30)
  b         .loc_0x2DC

.loc_0x26C:
  mr        r3, r30
  lwz       r4, 0xC0(r30)
  lwz       r12, 0x0(r30)
  lfs       f28, 0x2E4(r4)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  bl        -0x1AF820
  mr        r3, r30
  lfs       f2, 0x1D4(r30)
  lwz       r12, 0x0(r30)
  frsp      f27, f1
  lfs       f30, 0x1D8(r30)
  lfs       f0, 0x1DC(r30)
  lwz       r12, 0x64(r12)
  stfs      f2, 0x14(r1)
  stfs      f30, 0x18(r1)
  stfs      f0, 0x1C(r1)
  mtctr     r12
  bctrl     
  bl        -0x1AFDBC
  fmuls     f0, f28, f27
  li        r3, 0
  frsp      f1, f1
  stfs      f0, 0x1D4(r30)
  fmuls     f0, f28, f1
  stfs      f30, 0x1D8(r30)
  stfs      f0, 0x1DC(r30)

.loc_0x2DC:
  psq_l     f31,0xB8(r1),0,0
  lfd       f31, 0xB0(r1)
  psq_l     f30,0xA8(r1),0,0
  lfd       f30, 0xA0(r1)
  psq_l     f29,0x98(r1),0,0
  lfd       f29, 0x90(r1)
  psq_l     f28,0x88(r1),0,0
  lfd       f28, 0x80(r1)
  psq_l     f27,0x78(r1),0,0
  lfd       f27, 0x70(r1)
  lwz       r31, 0x6C(r1)
  lwz       r0, 0xC4(r1)
  lwz       r30, 0x68(r1)
  mtlr      r0
  addi      r1, r1, 0xC0
  blr
*/
}

/*
 * --INFO--
 * Address:	8027F0D0
 * Size:	00005C
 */
void Game::Armor::Obj::breakTargetBridge(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  lis       r5, 0x804B
  stw       r0, 0x24(r1)
  subi      r6, r4, 0x5D00
  addi      r0, r5, 0x749C
  addi      r4, r1, 0x8
  lwz       r7, 0xC0(r3)
  lfs       f0, 0x86C(r7)
  stw       r6, 0x8(r1)
  stw       r3, 0xC(r1)
  stw       r0, 0x8(r1)
  stfs      f0, 0x10(r1)
  lwz       r3, 0x2D8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8027F12C
 * Size:	0000B0
 */
void Game::Armor::Obj::createEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x14
  bl        -0x25B2A0
  cmplwi    r3, 0
  beq-      .loc_0x98
  lis       r4, 0x804B
  lis       r5, 0x804A
  subi      r0, r4, 0x5808
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r5, 0x1D84
  addi      r5, r4, 0x698C
  lis       r4, 0x804E
  stw       r0, 0x4(r3)
  addi      r7, r4, 0x68A8
  lis       r4, 0x804D
  addi      r0, r5, 0x14
  stw       r5, 0x0(r3)
  subi      r4, r4, 0x7AE4
  li        r9, 0
  li        r8, 0x2B2
  stw       r0, 0x4(r3)
  addi      r6, r7, 0x14
  li        r5, 0x1EC
  addi      r0, r4, 0x14
  stw       r9, 0x8(r3)
  sth       r8, 0xC(r3)
  stb       r9, 0xE(r3)
  stw       r7, 0x0(r3)
  stw       r6, 0x4(r3)
  stw       r9, 0x10(r3)
  sth       r5, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)

.loc_0x98:
  stw       r3, 0x2D4(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8027F1DC
 * Size:	000040
 */
void Game::Armor::Obj::setupEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  subi      r4, r2, 0x2E08
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x174(r3)
  bl        0x1BFDEC
  bl        0x1AA6A4
  lwz       r4, 0x2D4(r31)
  stw       r3, 0x10(r4)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8027F21C
 * Size:	000034
 */
void Game::Armor::Obj::createAttackEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2D4(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
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
 * Address:	8027F250
 * Size:	00008C
 */
void Game::Armor::Obj::createAppearEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x24(r1)
  addi      r4, r4, 0x7418
  lwz       r3, 0x174(r3)
  bl        0x1BFD7C
  bl        0x1AA634
  lis       r4, 0x804B
  li        r6, 0
  subi      r0, r4, 0x5808
  lis       r4, 0x804E
  stw       r0, 0x8(r1)
  addi      r0, r4, 0x6A64
  lis       r5, 0x804E
  lis       r4, 0x804D
  stw       r0, 0x8(r1)
  addi      r0, r5, 0x6A00
  li        r7, 0x1EA
  li        r5, 0x1EB
  stw       r0, 0x8(r1)
  subi      r0, r4, 0x7AF8
  li        r4, 0
  stw       r3, 0x18(r1)
  addi      r3, r1, 0x8
  sth       r7, 0xC(r1)
  sth       r5, 0xE(r1)
  stw       r6, 0x10(r1)
  stw       r6, 0x14(r1)
  stw       r0, 0x8(r1)
  bl        0x1300D0
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8027F2DC
 * Size:	00008C
 */
void Game::Armor::Obj::createDisAppearEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x24(r1)
  addi      r4, r4, 0x7418
  lwz       r3, 0x174(r3)
  bl        0x1BFCF0
  bl        0x1AA5A8
  lis       r4, 0x804B
  li        r6, 0
  subi      r0, r4, 0x5808
  lis       r4, 0x804E
  stw       r0, 0x8(r1)
  addi      r0, r4, 0x6A64
  lis       r5, 0x804E
  lis       r4, 0x804D
  stw       r0, 0x8(r1)
  addi      r0, r5, 0x6A00
  li        r7, 0x1EE
  li        r5, 0x1EF
  stw       r0, 0x8(r1)
  subi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r3, 0x18(r1)
  addi      r3, r1, 0x8
  sth       r7, 0xC(r1)
  sth       r5, 0xE(r1)
  stw       r6, 0x10(r1)
  stw       r6, 0x14(r1)
  stw       r0, 0x8(r1)
  bl        0x130044
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8027F368
 * Size:	000090
 */
void Game::Armor::Obj::createBridgeEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  subi      r4, r2, 0x2E08
  stw       r0, 0x34(r1)
  lwz       r3, 0x174(r3)
  bl        0x1BFC68
  bl        0x1AA520
  lis       r4, 0x804B
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  subi      r4, r4, 0x5808
  lfs       f0, 0xC(r3)
  lis       r3, 0x804E
  addi      r0, r3, 0x6A78
  lis       r5, 0x804B
  stw       r4, 0x8(r1)
  lis       r3, 0x804D
  subi      r4, r5, 0x5814
  li        r6, 0x25F
  li        r5, 0
  stw       r0, 0x8(r1)
  subi      r0, r3, 0x7B20
  addi      r3, r1, 0x8
  stw       r4, 0x14(r1)
  addi      r4, r1, 0x14
  stfs      f0, 0x18(r1)
  stfs      f1, 0x1C(r1)
  stfs      f2, 0x20(r1)
  sth       r6, 0xC(r1)
  stw       r5, 0x10(r1)
  stw       r0, 0x8(r1)
  bl        0x12FBA0
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8027F3F8
 * Size:	000030
 */
void Game::Armor::Obj::effectDrawOn(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2D4(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
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
 * Address:	8027F428
 * Size:	000030
 */
void Game::Armor::Obj::effectDrawOff(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2D4(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
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
 * Address:	8027F458
 * Size:	00009C
 */
void efx::TYoroiAttack::__dt(void)
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
  lis       r3, 0x804D
  subi      r3, r3, 0x7AE4
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x68A8
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
  bl        -0x1EF828

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x25B420

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
 * Address:	8027F4F4
 * Size:	000008
 */
void Game::Armor::Obj::getDownSmokeScale(void)
{
/*
.loc_0x0:
  lfs       f1, -0x2DCC(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8027F4FC
 * Size:	000008
 */
void Game::Armor::Obj::getEnemyTypeID(void)
{
/*
.loc_0x0:
  li        r3, 0xF
  blr
*/
}

/*
 * --INFO--
 * Address:	8027F504
 * Size:	000008
 */
void @4@efx::TYoroiAttack::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0xB0
*/
}
