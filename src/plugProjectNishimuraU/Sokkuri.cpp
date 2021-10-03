

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
 * Address:	802F1264
 * Size:	000130
 */
void Game::Sokkuri::Obj::__ct(void)
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
  addi      r0, r31, 0x2DC
  lis       r3, 0x804B
  stw       r0, 0x17C(r31)
  subi      r3, r3, 0x5988
  li        r0, 0
  stw       r3, 0x2DC(r31)
  stw       r0, 0x2E0(r31)
  stw       r0, 0x2E4(r31)

.loc_0x40:
  mr        r3, r31
  li        r4, 0
  bl        -0x1EFF0C
  lis       r3, 0x804D
  addi      r0, r31, 0x2DC
  addi      r5, r3, 0x4F7C
  li        r3, 0x2C
  stw       r5, 0x0(r31)
  addi      r4, r5, 0x1B0
  addi      r5, r5, 0x2FC
  stw       r4, 0x178(r31)
  lwz       r4, 0x17C(r31)
  stw       r5, 0x0(r4)
  lwz       r4, 0x17C(r31)
  sub       r0, r0, r4
  stw       r0, 0xC(r4)
  bl        -0x2CD440
  mr.       r30, r3
  beq-      .loc_0xCC
  bl        -0x1C997C
  lis       r3, 0x804D
  lis       r4, 0x804B
  addi      r0, r3, 0x4E50
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

.loc_0xCC:
  stw       r30, 0x184(r31)
  li        r3, 0x1C
  bl        -0x2CD494
  mr.       r4, r3
  beq-      .loc_0x100
  lis       r5, 0x804B
  lis       r3, 0x804D
  subi      r0, r5, 0x680
  li        r5, -0x1
  stw       r0, 0x0(r4)
  addi      r0, r3, 0x4E28
  stw       r5, 0x18(r4)
  stw       r0, 0x0(r4)

.loc_0x100:
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0x2F8(r12)
  mtctr     r12
  bctrl     
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
 * Address:	802F1394
 * Size:	000004
 */
void Game::Sokkuri::Obj::setInitialSetting( (Game::EnemyInitialParamBase *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802F1398
 * Size:	00008C
 */
void Game::Sokkuri::Obj::onInit( (Game::CreatureInitArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1EF954
  lwz       r3, 0x1E0(r31)
  li        r4, 0x1
  lfs       f0, -0x1240(r2)
  li        r0, -0x1
  rlwinm    r5,r3,0,21,19
  mr        r3, r31
  stw       r5, 0x1E0(r31)
  stb       r4, 0x2C0(r31)
  stfs      f0, 0x2C4(r31)
  stw       r0, 0x2C8(r31)
  bl        0x9E8
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x2
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
 * Address:	802F1424
 * Size:	000034
 */
void Game::Sokkuri::Obj::doUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, 0x2BC(r3)
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
 * Address:	802F1458
 * Size:	000004
 */
void Game::Sokkuri::Obj::doDirectDraw( (Graphics &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802F145C
 * Size:	000020
 */
void Game::Sokkuri::Obj::doDebugDraw( (Graphics &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x1EB5FC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F147C
 * Size:	00004C
 */
void Game::Sokkuri::Obj::setFSM( (Game::Sokkuri::FSM *))
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
 * Address:	802F14C8
 * Size:	000118
 */
void Game::Sokkuri::Obj::getShadowParam( (Game::ShadowParam &))
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
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC8
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0xD0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xC8
  mr        r3, r30
  bl        -0x1EA128
  cmpwi     r3, 0x3
  beq-      .loc_0xC8
  lfs       f0, 0x18C(r30)
  lfs       f2, -0x123C(r2)
  stfs      f0, 0x0(r31)
  lfs       f1, -0x1240(r2)
  lfs       f3, 0x190(r30)
  lfs       f0, -0x1238(r2)
  stfs      f3, 0x4(r31)
  lfs       f3, 0x194(r30)
  stfs      f3, 0x8(r31)
  lfs       f3, 0x4(r31)
  fadds     f2, f3, f2
  stfs      f2, 0x4(r31)
  stfs      f1, 0xC(r31)
  stfs      f0, 0x10(r31)
  stfs      f1, 0x14(r31)
  lwz       r0, 0x1E4(r30)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0xB4
  lfs       f0, -0x1234(r2)
  stfs      f0, 0x18(r31)
  b         .loc_0xBC

.loc_0xB4:
  lfs       f0, -0x1230(r2)
  stfs      f0, 0x18(r31)

.loc_0xBC:
  lfs       f0, -0x122C(r2)
  stfs      f0, 0x1C(r31)
  b         .loc_0x100

.loc_0xC8:
  lfs       f0, 0x18C(r30)
  lfs       f2, -0x1240(r2)
  stfs      f0, 0x0(r31)
  lfs       f1, -0x1238(r2)
  lfs       f3, 0x190(r30)
  lfs       f0, -0x1228(r2)
  stfs      f3, 0x4(r31)
  lfs       f3, 0x194(r30)
  stfs      f3, 0x8(r31)
  stfs      f2, 0xC(r31)
  stfs      f1, 0x10(r31)
  stfs      f2, 0x14(r31)
  stfs      f0, 0x18(r31)
  stfs      f0, 0x1C(r31)

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
 * Address:	802F15E0
 * Size:	000008
 */
void Game::Sokkuri::Obj::isUnderground(void)
{
/*
.loc_0x0:
  lbz       r3, 0x2C0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802F15E8
 * Size:	00009C
 */
void Game::Sokkuri::Obj::pressCallBack( (Game::Creature *, float, CollPart *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x84
  mr        r3, r4
  lwz       r12, 0x0(r4)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x84
  lwz       r0, 0x1E0(r31)
  rlwinm.   r0,r0,0,22,22
  bne-      .loc_0x84
  mr        r3, r31
  bl        -0x1EA23C
  cmpwi     r3, 0
  beq-      .loc_0x84
  cmpwi     r3, 0x1
  beq-      .loc_0x84
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0x88

.loc_0x84:
  li        r3, 0

.loc_0x88:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F1684
 * Size:	00009C
 */
void Game::Sokkuri::Obj::hipdropCallBack( (Game::Creature *, float, CollPart *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x84
  mr        r3, r4
  lwz       r12, 0x0(r4)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x84
  lwz       r0, 0x1E0(r31)
  rlwinm.   r0,r0,0,22,22
  bne-      .loc_0x84
  mr        r3, r31
  bl        -0x1EA2D8
  cmpwi     r3, 0
  beq-      .loc_0x84
  cmpwi     r3, 0x1
  beq-      .loc_0x84
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0x88

.loc_0x84:
  li        r3, 0

.loc_0x88:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F1720
 * Size:	0000FC
 */
void Game::Sokkuri::Obj::wallCallback( (Game::MoveInfo const &))
{
/*
.loc_0x0:
  lfs       f0, 0x5C(r4)
  lfs       f1, 0x60(r4)
  stfs      f0, 0x2D0(r3)
  lfs       f0, 0x64(r4)
  stfs      f1, 0x2D4(r3)
  lfs       f1, -0x1240(r2)
  stfs      f0, 0x2D8(r3)
  stfs      f1, 0x2D4(r3)
  lfs       f3, 0x2D0(r3)
  lfs       f2, 0x2D4(r3)
  fmuls     f0, f3, f3
  lfs       f4, 0x2D8(r3)
  fmuls     f2, f2, f2
  fmuls     f4, f4, f4
  fadds     f0, f0, f2
  fadds     f0, f4, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x64
  fmadds    f0, f3, f3, f2
  fadds     f2, f4, f0
  fcmpo     cr0, f2, f1
  ble-      .loc_0x68
  fsqrte    f0, f2
  fmuls     f2, f0, f2
  b         .loc_0x68

.loc_0x64:
  fmr       f2, f1

.loc_0x68:
  lfs       f0, -0x1240(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0xA0
  lfs       f1, -0x1238(r2)
  lfs       f0, 0x2D0(r3)
  fdivs     f1, f1, f2
  fmuls     f0, f0, f1
  stfs      f0, 0x2D0(r3)
  lfs       f0, 0x2D4(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x2D4(r3)
  lfs       f0, 0x2D8(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x2D8(r3)

.loc_0xA0:
  lfs       f0, 0x2D0(r3)
  lfs       f1, -0x1224(r2)
  fmuls     f0, f0, f1
  stfs      f0, 0x2D0(r3)
  lfs       f0, 0x2D4(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x2D4(r3)
  lfs       f0, 0x2D8(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x2D8(r3)
  lfs       f1, 0x2D0(r3)
  lfs       f0, 0x18C(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x2D0(r3)
  lfs       f1, 0x2D4(r3)
  lfs       f0, 0x190(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x2D4(r3)
  lfs       f1, 0x2D8(r3)
  lfs       f0, 0x194(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x2D8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802F181C
 * Size:	000040
 */
void Game::Sokkuri::Obj::doStartStoneState(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1EE93C
  lwz       r3, 0x1E0(r31)
  li        r0, 0
  ori       r3, r3, 0x800
  stw       r3, 0x1E0(r31)
  stb       r0, 0x2C0(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F185C
 * Size:	000020
 */
void Game::Sokkuri::Obj::doFinishStoneState(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x1EE960
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F187C
 * Size:	000028
 */
void Game::Sokkuri::Obj::startCarcassMotion(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x8
  li        r5, 0
  stw       r0, 0x14(r1)
  bl        -0x1EC88C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F18A4
 * Size:	0000AC
 */
void Game::Sokkuri::Obj::getOffsetForMapCollision(void)
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
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x58
  lis       r3, 0x8051
  lfsu      f0, 0x41E4(r3)
  stfs      f0, 0x0(r30)
  lfs       f0, 0x4(r3)
  stfs      f0, 0x4(r30)
  lfs       f0, 0x8(r3)
  stfs      f0, 0x8(r30)
  b         .loc_0x94

.loc_0x58:
  lis       r4, 0x8049
  lwz       r3, 0x174(r31)
  subi      r4, r4, 0x2E50
  bl        0x14D6DC
  bl        0x137F94
  lfs       f2, 0xC(r3)
  lfs       f0, 0x18C(r31)
  lfs       f3, 0x2C(r3)
  lfs       f1, 0x194(r31)
  fsubs     f2, f2, f0
  lfs       f0, -0x1240(r2)
  fsubs     f3, f3, f1
  stfs      f2, 0x0(r30)
  stfs      f0, 0x4(r30)
  stfs      f3, 0x8(r30)

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
 * Address:	........
 * Size:	000068
 */
void Game::Sokkuri::Obj::getSearchedTarget(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F1950
 * Size:	00007C
 */
void Game::Sokkuri::Obj::isAppear(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r4, -0x6C18(r13)
  cmplwi    r4, 0
  beq-      .loc_0x40
  lwz       r0, 0x44(r4)
  cmpwi     r0, 0x4
  bne-      .loc_0x40
  lwz       r6, 0xC0(r3)
  li        r4, 0
  li        r5, 0
  lfs       f1, 0x424(r6)
  lfs       f2, 0x3D4(r6)
  bl        -0x1DEE24
  b         .loc_0x58

.loc_0x40:
  lwz       r6, 0xC0(r3)
  li        r4, 0
  li        r5, 0
  lfs       f1, 0x424(r6)
  lfs       f2, 0x3D4(r6)
  bl        -0x1DF2B0

.loc_0x58:
  cmplwi    r3, 0
  beq-      .loc_0x68
  li        r3, 0x1
  b         .loc_0x6C

.loc_0x68:
  li        r3, 0

.loc_0x6C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F19CC
 * Size:	0000A8
 */
void Game::Sokkuri::Obj::isDisappear(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lfs       f1, 0x194(r3)
  lfs       f0, 0x1A0(r3)
  lfs       f2, 0x18C(r3)
  fsubs     f3, f1, f0
  lfs       f1, 0x198(r3)
  lwz       r5, 0xC0(r3)
  fsubs     f2, f2, f1
  fmuls     f1, f3, f3
  lfs       f0, 0x384(r5)
  fmuls     f0, f0, f0
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x94
  lwz       r4, -0x6C18(r13)
  cmplwi    r4, 0
  beq-      .loc_0x70
  lwz       r0, 0x44(r4)
  cmpwi     r0, 0x4
  bne-      .loc_0x70
  lfs       f1, 0x424(r5)
  li        r4, 0
  lfs       f2, 0x3D4(r5)
  li        r5, 0
  bl        -0x1DEED0
  b         .loc_0x84

.loc_0x70:
  lfs       f1, 0x424(r5)
  li        r4, 0
  lfs       f2, 0x3D4(r5)
  li        r5, 0
  bl        -0x1DF358

.loc_0x84:
  cmplwi    r3, 0
  bne-      .loc_0x94
  li        r3, 0x1
  b         .loc_0x98

.loc_0x94:
  li        r3, 0

.loc_0x98:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F1A74
 * Size:	0001E0
 */
void Game::Sokkuri::Obj::setNextMoveInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stfd      f31, 0x40(r1)
  psq_st    f31,0x48(r1),0,0
  stw       r31, 0x3C(r1)
  mr        r31, r3
  lwz       r3, 0xC0(r3)
  lfs       f1, 0x81C(r3)
  lfs       f0, 0x844(r3)
  fsubs     f31, f1, f0
  bl        -0x228500
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lfd       f2, -0x1208(r2)
  stw       r0, 0x8(r1)
  lfs       f0, -0x1220(r2)
  lfd       f1, 0x8(r1)
  fsubs     f1, f1, f2
  fmuls     f1, f31, f1
  fdivs     f0, f1, f0
  stfs      f0, 0x2C4(r31)
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x86C(r3)
  lfs       f0, 0x894(r3)
  fsubs     f31, f1, f0
  bl        -0x228540
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x14(r1)
  lwz       r3, 0xC0(r31)
  stw       r0, 0x10(r1)
  lfd       f1, -0x1208(r2)
  lfd       f0, 0x10(r1)
  lfs       f3, -0x1220(r2)
  fsubs     f4, f0, f1
  lfs       f0, 0x894(r3)
  lfs       f1, -0x1218(r2)
  lfs       f2, -0x121C(r2)
  fmuls     f4, f31, f4
  fdivs     f3, f4, f3
  fadds     f0, f3, f0
  fmuls     f0, f1, f0
  fmuls     f31, f2, f0
  bl        -0x228588
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x1C(r1)
  lfd       f3, -0x1208(r2)
  stw       r0, 0x18(r1)
  lfs       f2, -0x1238(r2)
  lfd       f0, 0x18(r1)
  lfs       f1, -0x1220(r2)
  fsubs     f3, f0, f3
  lfs       f0, -0x1214(r2)
  fmuls     f2, f2, f3
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xFC
  lfs       f0, 0x1FC(r31)
  fadds     f31, f31, f0
  b         .loc_0x104

.loc_0xFC:
  lfs       f0, 0x1FC(r31)
  fsubs     f31, f31, f0

.loc_0x104:
  lfs       f0, -0x1240(r2)
  lfs       f3, -0x1224(r2)
  fcmpo     cr0, f31, f0
  bge-      .loc_0x140
  lfs       f0, -0x1210(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f31, f0
  fctiwz    f0, f0
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f2, f0
  b         .loc_0x164

.loc_0x140:
  lfs       f0, -0x120C(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f31, f0
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f2, r3, r0

.loc_0x164:
  lfs       f1, 0x18C(r31)
  fmr       f4, f31
  lfs       f0, -0x1240(r2)
  fmadds    f1, f3, f2, f1
  fcmpo     cr0, f31, f0
  stfs      f1, 0x2D0(r31)
  lfs       f0, 0x190(r31)
  stfs      f0, 0x2D4(r31)
  bge-      .loc_0x18C
  fneg      f4, f31

.loc_0x18C:
  lfs       f0, -0x120C(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  lfs       f2, -0x1224(r2)
  fmuls     f1, f4, f0
  lfs       f0, 0x194(r31)
  fctiwz    f1, f1
  stfd      f1, 0x30(r1)
  lwz       r0, 0x34(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r3, r0
  lfs       f1, 0x4(r3)
  fmadds    f0, f2, f1, f0
  stfs      f0, 0x2D8(r31)
  psq_l     f31,0x48(r1),0,0
  lwz       r0, 0x54(r1)
  lfd       f31, 0x40(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802F1C54
 * Size:	00016C
 */
void Game::Sokkuri::Obj::updateMoveState(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  lfs       f1, 0x194(r3)
  lfs       f0, 0x1A0(r3)
  lfs       f4, 0x198(r31)
  fsubs     f2, f1, f0
  lfs       f1, 0x18C(r31)
  lwz       r3, 0xC0(r3)
  fsubs     f3, f1, f4
  fmuls     f1, f2, f2
  lfs       f0, 0x35C(r3)
  fmuls     f0, f0, f0
  fmadds    f1, f3, f3, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x5C
  stfs      f4, 0x2D0(r31)
  lfs       f0, 0x19C(r31)
  stfs      f0, 0x2D4(r31)
  lfs       f0, 0x1A0(r31)
  stfs      f0, 0x2D8(r31)

.loc_0x5C:
  lwz       r0, 0x280(r31)
  cmplwi    r0, 0
  beq-      .loc_0x10C
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x6C(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0xC(r1)
  mr        r3, r31
  lfs       f0, -0x1200(r2)
  addi      r4, r1, 0x14
  lfs       f3, 0x8(r1)
  lfs       f1, 0x10(r1)
  fadds     f0, f2, f0
  stfs      f2, 0x18(r1)
  stfs      f3, 0x14(r1)
  stfs      f1, 0x1C(r1)
  stfs      f0, 0x18(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x68(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x2CC(r31)
  lfs       f2, 0x934(r3)
  lfs       f0, -0x1240(r2)
  fsubs     f3, f1, f2
  fcmpo     cr0, f3, f0
  ble-      .loc_0xDC
  b         .loc_0xE0

.loc_0xDC:
  fneg      f3, f3

.loc_0xE0:
  lfs       f0, -0x122C(r2)
  fcmpo     cr0, f3, f0
  bge-      .loc_0xF0
  b         .loc_0x104

.loc_0xF0:
  fcmpo     cr0, f1, f2
  bge-      .loc_0x100
  fadds     f2, f1, f0
  b         .loc_0x104

.loc_0x100:
  fsubs     f2, f1, f0

.loc_0x104:
  stfs      f2, 0x2CC(r31)
  b         .loc_0x158

.loc_0x10C:
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x2CC(r31)
  lfs       f2, 0x2E4(r3)
  lfs       f0, -0x1240(r2)
  fsubs     f3, f1, f2
  fcmpo     cr0, f3, f0
  ble-      .loc_0x12C
  b         .loc_0x130

.loc_0x12C:
  fneg      f3, f3

.loc_0x130:
  lfs       f0, -0x11FC(r2)
  fcmpo     cr0, f3, f0
  bge-      .loc_0x140
  b         .loc_0x154

.loc_0x140:
  fcmpo     cr0, f1, f2
  bge-      .loc_0x150
  fadds     f2, f1, f0
  b         .loc_0x154

.loc_0x150:
  fsubs     f2, f1, f0

.loc_0x154:
  stfs      f2, 0x2CC(r31)

.loc_0x158:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802F1DC0
 * Size:	00002C
 */
void Game::Sokkuri::Obj::resetMoveVelocity(void)
{
/*
.loc_0x0:
  lwz       r0, 0x280(r3)
  cmplwi    r0, 0
  beq-      .loc_0x1C
  lwz       r4, 0xC0(r3)
  lfs       f0, 0x934(r4)
  stfs      f0, 0x2CC(r3)
  blr       

.loc_0x1C:
  lwz       r4, 0xC0(r3)
  lfs       f0, 0x2E4(r4)
  stfs      f0, 0x2CC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802F1DEC
 * Size:	000078
 */
void Game::Sokkuri::Obj::setNextWaitInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lwz       r3, 0xC0(r3)
  lfs       f1, 0x8E4(r3)
  lfs       f0, 0x90C(r3)
  fsubs     f31, f1, f0
  bl        -0x228878
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lfd       f2, -0x1208(r2)
  stw       r0, 0x8(r1)
  lfs       f0, -0x1220(r2)
  lfd       f1, 0x8(r1)
  fsubs     f1, f1, f2
  fmuls     f1, f31, f1
  fdivs     f0, f1, f0
  stfs      f0, 0x2C4(r31)
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802F1E64
 * Size:	0000C4
 */
void Game::Sokkuri::Obj::createDownEffect( (float, float))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  mr        r31, r3
  fmr       f31, f2
  lwz       r0, 0x280(r3)
  cmplwi    r0, 0
  beq-      .loc_0x94
  lfs       f0, -0x1240(r2)
  fcmpo     cr0, f31, f0
  ble-      .loc_0xA8
  lfs       f0, 0x18C(r31)
  mr        r3, r0
  stfs      f0, 0x8(r1)
  lfs       f0, 0x190(r31)
  stfs      f0, 0xC(r1)
  lfs       f0, 0x194(r31)
  stfs      f0, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x0(r3)
  lfs       f0, -0x11F8(r2)
  stfs      f2, 0xC(r1)
  lfs       f1, 0x190(r31)
  fsubs     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xA8
  fmr       f1, f31
  mr        r3, r31
  addi      r4, r1, 0x8
  bl        -0x1EE4F8
  b         .loc_0xA8

.loc_0x94:
  lfs       f0, -0x1240(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xA8
  addi      r4, r31, 0x18C
  bl        -0x1EE5C8

.loc_0xA8:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802F1F28
 * Size:	0000C0
 */
void Game::Sokkuri::Obj::createBubbleEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  lwz       r3, 0x280(r3)
  cmplwi    r3, 0
  beq-      .loc_0xAC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x0(r3)
  lfs       f1, 0x190(r31)
  lfs       f0, -0x122C(r2)
  fsubs     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0xAC
  lis       r3, 0x804B
  lis       r5, 0x804B
  subi      r0, r3, 0x5814
  lis       r4, 0x804E
  stw       r0, 0x14(r1)
  lis       r3, 0x804D
  subi      r8, r5, 0x5808
  addi      r7, r4, 0x6A78
  lfs       f0, 0x18C(r31)
  addi      r0, r3, 0x4F68
  li        r6, 0xC1
  li        r5, 0
  stfs      f0, 0x18(r1)
  addi      r3, r1, 0x8
  addi      r4, r1, 0x14
  lfs       f0, 0x190(r31)
  stfs      f0, 0x1C(r1)
  lfs       f0, 0x194(r31)
  stw       r8, 0x8(r1)
  stw       r7, 0x8(r1)
  stfs      f0, 0x20(r1)
  sth       r6, 0xC(r1)
  stw       r5, 0x10(r1)
  stw       r0, 0x8(r1)
  bl        0xBCFB4

.loc_0xAC:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802F1FE8
 * Size:	000048
 */
void Game::Sokkuri::Obj::createEfxHamon(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0xD0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x34
  mr        r3, r31
  bl        -0x1F0714

.loc_0x34:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F2030
 * Size:	000008
 */
void Game::Sokkuri::Obj::getDownSmokeScale(void)
{
/*
.loc_0x0:
  lfs       f1, -0x11F4(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	802F2038
 * Size:	000008
 */
void Game::Sokkuri::Obj::getEnemyTypeID(void)
{
/*
.loc_0x0:
  li        r3, 0x4F
  blr
*/
}
