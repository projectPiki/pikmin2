

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
 * Address:	8026BE8C
 * Size:	000138
 */
void Game::Hiba::Obj::__ct(void)
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
  addi      r0, r31, 0x2CC
  lis       r3, 0x804B
  stw       r0, 0x17C(r31)
  subi      r3, r3, 0x5988
  li        r0, 0
  stw       r3, 0x2CC(r31)
  stw       r0, 0x2D0(r31)
  stw       r0, 0x2D4(r31)

.loc_0x40:
  mr        r3, r31
  li        r4, 0
  bl        -0x16AB34
  lis       r3, 0x804C
  addi      r0, r31, 0x2CC
  addi      r5, r3, 0x54D4
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
  bl        -0x248068
  mr.       r30, r3
  beq-      .loc_0xCC
  bl        -0x1445A4
  lis       r3, 0x804C
  lis       r4, 0x804B
  addi      r0, r3, 0x52C0
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
  bl        -0x2480BC
  mr.       r4, r3
  beq-      .loc_0x100
  lis       r5, 0x804B
  lis       r3, 0x804C
  subi      r0, r5, 0x680
  li        r5, -0x1
  stw       r0, 0x0(r4)
  addi      r0, r3, 0x5298
  stw       r5, 0x18(r4)
  stw       r0, 0x0(r4)

.loc_0x100:
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0x2F8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  bl        0x528
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
 * Address:	8026BFC4
 * Size:	000004
 */
void Game::Hiba::Obj::setInitialSetting( (Game::EnemyInitialParamBase *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8026BFC8
 * Size:	0000F8
 */
void Game::Hiba::Obj::onInit( (Game::CreatureInitArg *))
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
  bl        -0x16A58C
  lwz       r0, 0x1E0(r31)
  mr        r3, r31
  rlwinm    r0,r0,0,20,18
  stw       r0, 0x1E0(r31)
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,25,23
  stw       r0, 0x1E0(r31)
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,24,22
  stw       r0, 0x1E0(r31)
  bl        -0x164894
  lwz       r0, 0x1E0(r31)
  mr        r3, r31
  oris      r0, r0, 0x40
  stw       r0, 0x1E0(r31)
  bl        -0x16A61C
  lwz       r3, -0x6980(r13)
  mr        r4, r31
  bl        -0x2A3C8
  lfs       f0, -0x3340(r2)
  li        r0, 0x1
  mr        r3, r31
  stfs      f0, 0x2C4(r31)
  stb       r0, 0x2C0(r31)
  bl        0x434
  lwz       r3, 0xC0(r31)
  lfs       f31, 0x81C(r3)
  bl        -0x1A2AB4
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x14(r1)
  mr        r4, r31
  lfd       f2, -0x3338(r2)
  addi      r6, r1, 0x8
  stw       r0, 0x10(r1)
  li        r5, 0x1
  lfs       f0, -0x333C(r2)
  lfd       f1, 0x10(r1)
  fsubs     f1, f1, f2
  fmuls     f1, f31, f1
  fdivs     f0, f1, f0
  stfs      f0, 0x8(r1)
  lwz       r3, 0x2BC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
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
 * Address:	8026C0C0
 * Size:	000034
 */
void Game::Hiba::Obj::doUpdate(void)
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
 * Address:	8026C0F4
 * Size:	000004
 */
void Game::Hiba::Obj::doDirectDraw( (Graphics &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8026C0F8
 * Size:	000020
 */
void Game::Hiba::Obj::doDebugDraw( (Graphics &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x166298
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026C118
 * Size:	00004C
 */
void Game::Hiba::Obj::setFSM( (Game::Hiba::FSM *))
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
 * Address:	8026C164
 * Size:	000038
 */
void Game::Hiba::Obj::getShadowParam( (Game::ShadowParam &))
{
/*
.loc_0x0:
  lfs       f0, 0x18C(r3)
  lfs       f1, -0x3340(r2)
  stfs      f0, 0x0(r4)
  lfs       f0, -0x3330(r2)
  lfs       f2, 0x190(r3)
  stfs      f2, 0x4(r4)
  lfs       f2, 0x194(r3)
  stfs      f2, 0x8(r4)
  stfs      f1, 0xC(r4)
  stfs      f0, 0x10(r4)
  stfs      f1, 0x14(r4)
  stfs      f1, 0x18(r4)
  stfs      f1, 0x1C(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	8026C19C
 * Size:	00007C
 */
void Game::Hiba::Obj::damageCallBack( (Game::Creature *, float, CollPart *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x10(r1)
  psq_st    f31,0x18(r1),0,0
  stw       r31, 0xC(r1)
  fmr       f31, f1
  cmplwi    r4, 0
  mr        r31, r3
  beq-      .loc_0x5C
  mr        r3, r4
  lwz       r12, 0x0(r4)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x5C
  fmr       f1, f31
  lfs       f2, -0x3330(r2)
  mr        r3, r31
  bl        -0x1661C0
  li        r3, 0x1
  b         .loc_0x60

.loc_0x5C:
  li        r3, 0

.loc_0x60:
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
 * Address:	8026C218
 * Size:	000030
 */
void Game::Hiba::Obj::pressCallBack( (Game::Creature *, float, CollPart *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x278(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026C248
 * Size:	000030
 */
void Game::Hiba::Obj::hipdropCallBack( (Game::Creature *, float, CollPart *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x278(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026C278
 * Size:	000034
 */
void bombCallBack__Q34Game4Hiba3ObjFPQ24Game8CreatureR10Vector3<float>f(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x278(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026C2AC
 * Size:	0001D0
 */
void Game::Hiba::Obj::interactFireAttack(void)
{
/*
.loc_0x0:
  stwu      r1, -0xD0(r1)
  mflr      r0
  stw       r0, 0xD4(r1)
  stfd      f31, 0xC0(r1)
  psq_st    f31,0xC8(r1),0,0
  stfd      f30, 0xB0(r1)
  psq_st    f30,0xB8(r1),0,0
  stfd      f29, 0xA0(r1)
  psq_st    f29,0xA8(r1),0,0
  stw       r31, 0x9C(r1)
  stw       r30, 0x98(r1)
  mr        r30, r3
  addi      r3, r1, 0x30
  lwz       r5, 0xC0(r30)
  addi      r4, r1, 0x20
  lfs       f2, 0x190(r30)
  lfs       f0, 0x564(r5)
  lfs       f1, 0x58C(r5)
  lfs       f3, 0x5B4(r5)
  fadds     f31, f2, f0
  lfs       f0, 0x18C(r30)
  fsubs     f30, f2, f1
  fmuls     f29, f3, f3
  stfs      f0, 0x20(r1)
  lfs       f0, 0x190(r30)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x194(r30)
  stfs      f0, 0x28(r1)
  stfs      f3, 0x2C(r1)
  bl        -0x3DF80
  li        r0, 0x1
  addi      r3, r1, 0x50
  stb       r0, 0x4C(r1)
  addi      r4, r1, 0x30
  bl        -0x3DF54
  addi      r3, r1, 0x50
  bl        -0x3DEE0
  b         .loc_0x190

.loc_0x98:
  addi      r3, r1, 0x50
  bl        -0x3DE04
  lwz       r12, 0x0(r3)
  mr        r31, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x188
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xF4
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x188

.loc_0xF4:
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0xC(r1)
  lfs       f2, 0x8(r1)
  fcmpo     cr0, f31, f0
  lfs       f3, 0x10(r1)
  ble-      .loc_0x188
  fcmpo     cr0, f30, f0
  bge-      .loc_0x188
  lfs       f0, 0x194(r30)
  lfs       f1, 0x18C(r30)
  fsubs     f0, f0, f3
  fsubs     f1, f1, f2
  fmuls     f0, f0, f0
  fmadds    f0, f1, f1, f0
  fcmpo     cr0, f0, f29
  bge-      .loc_0x188
  lwz       r6, 0xC0(r30)
  lis       r5, 0x804B
  lis       r4, 0x804B
  mr        r3, r31
  lfs       f0, 0x604(r6)
  subi      r5, r5, 0x5D00
  addi      r0, r4, 0x4878
  addi      r4, r1, 0x14
  stw       r5, 0x14(r1)
  stw       r30, 0x18(r1)
  stw       r0, 0x14(r1)
  stfs      f0, 0x1C(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x188:
  addi      r3, r1, 0x50
  bl        -0x3DF38

.loc_0x190:
  addi      r3, r1, 0x50
  bl        -0x3DF0C
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x98
  psq_l     f31,0xC8(r1),0,0
  lfd       f31, 0xC0(r1)
  psq_l     f30,0xB8(r1),0,0
  lfd       f30, 0xB0(r1)
  psq_l     f29,0xA8(r1),0,0
  lfd       f29, 0xA0(r1)
  lwz       r31, 0x9C(r1)
  lwz       r0, 0xD4(r1)
  lwz       r30, 0x98(r1)
  mtlr      r0
  addi      r1, r1, 0xD0
  blr
*/
}

/*
 * --INFO--
 * Address:	8026C47C
 * Size:	000024
 */
void Game::Hiba::Obj::setupLodParms(void)
{
/*
.loc_0x0:
  lwz       r4, 0xC0(r3)
  li        r0, 0
  lfs       f0, 0x894(r4)
  stfs      f0, 0x264(r3)
  lwz       r4, 0xC0(r3)
  lfs       f0, 0x8BC(r4)
  stfs      f0, 0x268(r3)
  stb       r0, 0x26C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8026C4A0
 * Size:	00002C
 */
void Game::Hiba::Obj::updateEfxLod(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r0, 0xD8(r3)
  lwz       r3, 0x2C8(r3)
  rlwinm    r4,r0,0,30,31
  bl        0x1484F8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026C4CC
 * Size:	000064
 */
void Game::Hiba::Obj::createEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  li        r3, 0x44
  bl        -0x248644
  mr.       r31, r3
  beq-      .loc_0x48
  li        r4, 0xAB
  li        r5, 0xAC
  li        r6, 0xAD
  li        r7, 0xAE
  bl        0x143CA4
  lis       r3, 0x804C
  addi      r0, r3, 0x54B8
  stw       r0, 0x0(r31)

.loc_0x48:
  stw       r31, 0x2C8(r30)
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
 * Address:	8026C530
 * Size:	000058
 */
void Game::Hiba::Obj::startFireEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  stw       r0, 0x24(r1)
  subi      r0, r4, 0x5814
  addi      r4, r1, 0x8
  stw       r0, 0x8(r1)
  lfs       f0, 0x18C(r3)
  stfs      f0, 0xC(r1)
  lfs       f0, 0x190(r3)
  stfs      f0, 0x10(r1)
  lfs       f0, 0x194(r3)
  stfs      f0, 0x14(r1)
  lwz       r3, 0x2C8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
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
 * Address:	8026C588
 * Size:	000030
 */
void Game::Hiba::Obj::finishFireEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2C8(r3)
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
 * Address:	8026C5B8
 * Size:	000044
 */
void Game::Hiba::Obj::generatorKill(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0xC4(r3)
  cmplwi    r3, 0
  beq-      .loc_0x30
  mr        r4, r31
  bl        -0xC18E8
  li        r0, 0
  stw       r0, 0xC4(r31)

.loc_0x30:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026C5FC
 * Size:	000004
 */
void Game::Hiba::Obj::doSimulation( (float))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8026C600
 * Size:	000004
 */
void Game::Hiba::Obj::inWaterCallback( (Game::WaterBox *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8026C604
 * Size:	000004
 */
void Game::Hiba::Obj::outWaterCallback(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8026C608
 * Size:	000008
 */
void Game::Hiba::Obj::isLivingThing(void)
{
/*
.loc_0x0:
  lbz       r3, 0x2C0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8026C610
 * Size:	000004
 */
void Game::Hiba::Obj::lifeRecover(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8026C614
 * Size:	000014
 */
void @716@12@Game::EnemyBase::viewOnPelletKilled(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x2CC
  b         -0x165D08
*/
}

/*
 * --INFO--
 * Address:	8026C628
 * Size:	000014
 */
void @716@12@Game::EnemyBase::viewStartCarryMotion(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x2CC
  b         -0x165F90
*/
}

/*
 * --INFO--
 * Address:	8026C63C
 * Size:	000014
 */
void @716@12@Game::EnemyBase::viewStartPreCarryMotion(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x2CC
  b         -0x165F84
*/
}

/*
 * --INFO--
 * Address:	8026C650
 * Size:	000014
 */
void @716@12@Game::EnemyBase::view_finish_carrymotion(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x2CC
  b         -0x165BE8
*/
}

/*
 * --INFO--
 * Address:	8026C664
 * Size:	000014
 */
void @716@12@Game::EnemyBase::view_start_carrymotion(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x2CC
  b         -0x165C28
*/
}

/*
 * --INFO--
 * Address:	8026C678
 * Size:	000014
 */
void @716@12@Game::EnemyBase::viewGetShape(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x2CC
  b         -0x165FE8
*/
}
