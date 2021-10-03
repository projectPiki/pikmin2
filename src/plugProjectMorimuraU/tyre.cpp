

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803AC2F0
 * Size:	000038
 */
void Game::Tyre::frontTyreCallBack( (J3DJoint *, int))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r4, 0
  stw       r0, 0x14(r1)
  bne-      .loc_0x24
  lwz       r3, -0x6610(r13)
  cmplwi    r3, 0
  beq-      .loc_0x24
  bl        0x1210

.loc_0x24:
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803AC328
 * Size:	000038
 */
void Game::Tyre::rearTyreCallBack( (J3DJoint *, int))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r4, 0
  stw       r0, 0x14(r1)
  bne-      .loc_0x24
  lwz       r3, -0x6610(r13)
  cmplwi    r3, 0
  beq-      .loc_0x24
  bl        0x1470

.loc_0x24:
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803AC360
 * Size:	000020
 */
void Game::Tyre::Obj::setParameters(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x2A9794
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803AC380
 * Size:	000020
 */
void birth__Q34Game4Tyre3ObjFR10Vector3<float>f(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x2A998C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803AC3A0
 * Size:	00018C
 */
void Game::Tyre::Obj::onInit( (Game::CreatureInitArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x8049
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  addi      r30, r5, 0x5820
  stw       r29, 0x14(r1)
  bl        -0x2AA96C
  lwz       r0, 0x1E0(r31)
  mr        r3, r31
  rlwinm    r0,r0,0,25,23
  stw       r0, 0x1E0(r31)
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,29,27
  stw       r0, 0x1E0(r31)
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,24,22
  stw       r0, 0x1E0(r31)
  bl        -0x2AA9E8
  mr        r3, r31
  bl        -0x2A4C7C
  lwz       r0, 0x1E0(r31)
  mr        r4, r31
  li        r5, 0x1
  li        r6, 0
  rlwinm    r0,r0,0,26,24
  stw       r0, 0x1E0(r31)
  lwz       r3, 0x304(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stw       r0, -0x6610(r13)
  lwz       r0, 0x174(r31)
  cmplwi    r0, 0
  bne-      .loc_0xB0
  addi      r3, r30, 0xC
  addi      r5, r30, 0x18
  li        r4, 0x60
  crclr     6, 0x6
  bl        -0x381E0C

.loc_0xB0:
  lwz       r3, 0x174(r31)
  addi      r4, r30, 0x24
  lwz       r5, 0x8(r3)
  lwz       r29, 0x4(r5)
  bl        0x92B54
  sth       r3, 0x310(r31)
  addi      r4, r30, 0x30
  lwz       r3, 0x174(r31)
  bl        0x92B44
  sth       r3, 0x312(r31)
  lis       r4, 0x803B
  lis       r3, 0x803B
  lfs       f1, 0x1258(r2)
  lhz       r0, 0x310(r31)
  subi      r5, r4, 0x3D10
  lwz       r4, 0x28(r29)
  subi      r6, r3, 0x3CD8
  rlwinm    r3,r0,2,0,29
  li        r0, 0
  lwzx      r3, r4, r3
  mr        r4, r31
  stw       r5, 0x4(r3)
  lhz       r3, 0x312(r31)
  lwz       r5, 0x28(r29)
  rlwinm    r3,r3,2,0,29
  lwzx      r3, r5, r3
  stw       r6, 0x4(r3)
  lfs       f0, 0x1FC(r31)
  stfs      f0, 0x314(r31)
  stfs      f1, 0x2CC(r31)
  stfs      f1, 0x2C0(r31)
  stfs      f1, 0x2C4(r31)
  lfs       f0, 0x190(r31)
  stfs      f0, 0x2C8(r31)
  stw       r0, 0x318(r31)
  stfs      f1, 0x31C(r31)
  lwz       r3, -0x6980(r13)
  bl        -0x16A64C
  lwz       r3, 0x338(r31)
  bl        -0xAA7C0
  li        r0, 0
  stb       r0, 0x321(r31)
  lfs       f0, 0x18C(r31)
  stfs      f0, 0x324(r31)
  lfs       f0, 0x190(r31)
  stfs      f0, 0x328(r31)
  lfs       f0, 0x194(r31)
  stfs      f0, 0x32C(r31)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	803AC52C
 * Size:	0003C0
 */
void Game::Tyre::Obj::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  extsh.    r0, r4
  stmw      r26, 0x8(r1)
  mr        r31, r3
  beq-      .loc_0x3C
  addi      r0, r31, 0x344
  lis       r3, 0x804B
  stw       r0, 0x17C(r31)
  subi      r3, r3, 0x5988
  li        r0, 0
  stw       r3, 0x344(r31)
  stw       r0, 0x348(r31)
  stw       r0, 0x34C(r31)

.loc_0x3C:
  mr        r3, r31
  li        r4, 0
  bl        -0x2AB1D0
  lis       r4, 0x804E
  addi      r9, r31, 0x344
  addi      r5, r4, 0x6448
  lis       r3, 0x8012
  stw       r5, 0x0(r31)
  addi      r0, r5, 0x1B0
  addi      r10, r5, 0x2FC
  subi      r4, r3, 0xCB8
  stw       r0, 0x178(r31)
  li        r8, 0
  li        r0, 0x1
  addi      r3, r31, 0x2EC
  lwz       r7, 0x17C(r31)
  li        r5, 0
  li        r6, 0xC
  stw       r10, 0x0(r7)
  li        r7, 0x2
  lwz       r10, 0x17C(r31)
  sub       r9, r9, r10
  stw       r9, 0xC(r10)
  stw       r8, 0x2BC(r31)
  stb       r8, 0x2D0(r31)
  stb       r0, 0x2D1(r31)
  stb       r8, 0x2D2(r31)
  bl        -0x2EAD98
  li        r4, 0
  lfs       f1, 0x125C(r2)
  stw       r4, 0x304(r31)
  li        r0, 0x1
  lfs       f0, 0x1258(r2)
  li        r3, 0x2C
  stfs      f1, 0x308(r31)
  stfs      f0, 0x30C(r31)
  stb       r0, 0x320(r31)
  stb       r4, 0x321(r31)
  stb       r4, 0x322(r31)
  stw       r4, 0x330(r31)
  stw       r4, 0x334(r31)
  stw       r4, 0x338(r31)
  stw       r4, 0x33C(r31)
  stw       r4, 0x340(r31)
  bl        -0x388774
  mr.       r28, r3
  beq-      .loc_0x138
  bl        -0x284CB0
  lis       r3, 0x804E
  lis       r4, 0x804B
  addi      r0, r3, 0x62B0
  lis       r3, 0x804F
  stw       r0, 0x0(r28)
  subi      r4, r4, 0x4678
  subi      r3, r3, 0x4200
  li        r0, 0
  stw       r4, 0x10(r28)
  stw       r3, 0x10(r28)
  stb       r0, 0x28(r28)
  stw       r0, 0x1C(r28)
  stw       r0, 0x14(r28)
  stb       r0, 0x28(r28)
  stw       r0, 0x20(r28)

.loc_0x138:
  stw       r28, 0x184(r31)
  li        r3, 0x1C
  bl        -0x3887C8
  mr.       r4, r3
  beq-      .loc_0x16C
  lis       r5, 0x804B
  lis       r3, 0x804E
  subi      r0, r5, 0x680
  li        r5, -0x1
  stw       r0, 0x0(r4)
  addi      r0, r3, 0x628C
  stw       r5, 0x18(r4)
  stw       r0, 0x0(r4)

.loc_0x16C:
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0x2F8(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x18
  bl        -0x38880C
  cmplwi    r3, 0
  beq-      .loc_0x210
  lis       r4, 0x804B
  lis       r5, 0x804A
  subi      r0, r4, 0x5808
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r5, 0x1D84
  addi      r5, r4, 0x698C
  lis       r4, 0x804E
  stw       r0, 0x4(r3)
  addi      r9, r4, 0x68F4
  lis       r4, 0x804E
  addi      r0, r5, 0x14
  stw       r5, 0x0(r3)
  addi      r4, r4, 0x63FC
  li        r11, 0
  li        r10, 0x2B2
  stw       r0, 0x4(r3)
  addi      r8, r9, 0x14
  addi      r7, r31, 0x18C
  addi      r6, r31, 0x1FC
  stw       r11, 0x8(r3)
  li        r5, 0x2A0
  addi      r0, r4, 0x14
  sth       r10, 0xC(r3)
  stb       r11, 0xE(r3)
  stw       r9, 0x0(r3)
  stw       r8, 0x4(r3)
  stw       r7, 0x10(r3)
  stw       r6, 0x14(r3)
  sth       r5, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)

.loc_0x210:
  stw       r3, 0x330(r31)
  li        r3, 0x18
  bl        -0x3888A0
  cmplwi    r3, 0
  beq-      .loc_0x2A4
  lis       r4, 0x804B
  lis       r5, 0x804A
  subi      r0, r4, 0x5808
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r5, 0x1D84
  addi      r5, r4, 0x698C
  lis       r4, 0x804E
  stw       r0, 0x4(r3)
  addi      r9, r4, 0x68F4
  lis       r4, 0x804E
  addi      r0, r5, 0x14
  stw       r5, 0x0(r3)
  addi      r4, r4, 0x63FC
  li        r11, 0
  li        r10, 0x2B2
  stw       r0, 0x4(r3)
  addi      r8, r9, 0x14
  addi      r7, r31, 0x18C
  addi      r6, r31, 0x1FC
  stw       r11, 0x8(r3)
  li        r5, 0x2A0
  addi      r0, r4, 0x14
  sth       r10, 0xC(r3)
  stb       r11, 0xE(r3)
  stw       r9, 0x0(r3)
  stw       r8, 0x4(r3)
  stw       r7, 0x10(r3)
  stw       r6, 0x14(r3)
  sth       r5, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)

.loc_0x2A4:
  stw       r3, 0x334(r31)
  li        r3, 0x2C
  bl        -0x388934
  cmplwi    r3, 0
  beq-      .loc_0x384
  lis       r5, 0x804B
  lis       r4, 0x804F
  subi      r28, r5, 0x5808
  lis       r6, 0x804A
  stw       r28, 0x0(r3)
  subi      r0, r4, 0x7B3C
  lis       r5, 0x804E
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  addi      r30, r5, 0x698C
  addi      r10, r4, 0x6940
  lis       r4, 0x804F
  stw       r28, 0x4(r3)
  subi      r29, r6, 0x1D84
  subi      r7, r4, 0x7ADC
  lis       r4, 0x804F
  stw       r29, 0x8(r3)
  subi      r4, r4, 0x7B28
  addi      r27, r30, 0x14
  li        r12, 0
  stw       r30, 0x4(r3)
  li        r11, 0x2B2
  addi      r26, r10, 0x14
  addi      r9, r31, 0x324
  stw       r27, 0x8(r3)
  li        r8, 0x57
  addi      r6, r7, 0x14
  li        r5, 0x58
  stw       r12, 0xC(r3)
  addi      r0, r4, 0x14
  sth       r11, 0x10(r3)
  stb       r12, 0x12(r3)
  stw       r10, 0x4(r3)
  stw       r26, 0x8(r3)
  stw       r9, 0x14(r3)
  sth       r8, 0x10(r3)
  stw       r7, 0x4(r3)
  stw       r6, 0x8(r3)
  stw       r28, 0x18(r3)
  stw       r29, 0x1C(r3)
  stw       r30, 0x18(r3)
  stw       r27, 0x1C(r3)
  stw       r12, 0x20(r3)
  sth       r11, 0x24(r3)
  stb       r12, 0x26(r3)
  stw       r10, 0x18(r3)
  stw       r26, 0x1C(r3)
  stw       r9, 0x28(r3)
  sth       r5, 0x24(r3)
  stw       r4, 0x18(r3)
  stw       r0, 0x1C(r3)

.loc_0x384:
  stw       r3, 0x33C(r31)
  li        r3, 0x1C
  bl        -0x388A14
  mr.       r0, r3
  beq-      .loc_0x3A4
  mr        r4, r31
  bl        -0xAAC80
  mr        r0, r3

.loc_0x3A4:
  stw       r0, 0x338(r31)
  mr        r3, r31
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	803AC8EC
 * Size:	00004C
 */
void Game::Tyre::Obj::setFSM( (Game::Tyre::FSM *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r4, 0x304(r3)
  mr        r4, r31
  lwz       r3, 0x304(r3)
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
 * Address:	803AC938
 * Size:	00004C
 */
void Game::Tyre::Obj::doUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2A5558
  mr        r3, r31
  bl        -0x2A561C
  lwz       r3, 0x304(r31)
  mr        r4, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
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
 * Address:	803AC984
 * Size:	0000B8
 */
void Game::Tyre::Obj::doAnimationCullingOff(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0xC0(r3)
  lbz       r0, 0x832(r3)
  cmplwi    r0, 0
  beq-      .loc_0x28
  stw       r31, -0x6610(r13)

.loc_0x28:
  lwz       r0, 0x318(r31)
  cmpwi     r0, 0
  ble-      .loc_0x60
  lwz       r0, 0x1E0(r31)
  rlwinm.   r0,r0,0,22,22
  bne-      .loc_0x60
  lfs       f1, 0x190(r31)
  lfs       f0, 0x31C(r31)
  fadds     f0, f1, f0
  stfs      f0, 0x190(r31)
  lwz       r3, 0x318(r31)
  subi      r0, r3, 0x1
  stw       r0, 0x318(r31)
  b         .loc_0x74

.loc_0x60:
  lwz       r3, 0x1E0(r31)
  li        r0, 0
  rlwinm    r3,r3,0,30,28
  stw       r3, 0x1E0(r31)
  stw       r0, 0x318(r31)

.loc_0x74:
  mr        r3, r31
  bl        -0x2A997C
  li        r0, 0
  stw       r0, -0x6610(r13)
  lbz       r0, 0x2D2(r31)
  cmplwi    r0, 0
  beq-      .loc_0xA4
  lfs       f0, 0x308(r31)
  lwz       r3, 0x338(r31)
  stfs      f0, 0x0(r3)
  lwz       r3, 0x338(r31)
  bl        -0xAAC90

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
 * Address:	803ACA3C
 * Size:	000004
 */
void Game::Tyre::Obj::doDirectDraw( (Graphics &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803ACA40
 * Size:	000020
 */
void Game::Tyre::Obj::doDebugDraw( (Graphics &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x2A6BE0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803ACA60
 * Size:	000020
 */
void Game::Tyre::Obj::doSimulation( (float))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x2A8014
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803ACA80
 * Size:	000080
 */
void Game::Tyre::Obj::doGetLifeGaugeParam( (Game::LifeGaugeParam &))
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
  bl        -0x2A6BAC
  lwz       r3, 0x174(r30)
  lhz       r0, 0x312(r30)
  lwz       r3, 0x8(r3)
  mulli     r0, r0, 0x30
  lfs       f1, 0x0(r31)
  lwz       r3, 0x84(r3)
  lfs       f2, 0x1260(r2)
  lwz       r3, 0xC(r3)
  add       r3, r3, r0
  lfs       f0, 0xC(r3)
  fadds     f0, f1, f0
  fmuls     f0, f2, f0
  stfs      f0, 0x0(r31)
  lfs       f1, 0x8(r31)
  lfs       f0, 0x2C(r3)
  fadds     f0, f1, f0
  fmuls     f0, f2, f0
  stfs      f0, 0x8(r31)
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
 * Address:	803ACB00
 * Size:	00012C
 */
void Game::Tyre::Obj::doStartStoneState(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2A9C20
  lfs       f0, 0x1258(r2)
  lis       r3, 0x7479
  addi      r4, r3, 0x7231
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  stfs      f0, 0x1C8(r31)
  stfs      f0, 0x1CC(r31)
  stfs      f0, 0x1D0(r31)
  stfs      f0, 0x30C(r31)
  stfs      f0, 0x11C(r31)
  stfs      f0, 0x120(r31)
  stfs      f0, 0x124(r31)
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,30,28
  stw       r0, 0x1E0(r31)
  lwz       r3, 0x114(r31)
  bl        -0x276D18
  lis       r4, 0x7374
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x66898
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7232
  bl        -0x276D38
  lis       r4, 0x7374
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x66878
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7233
  bl        -0x276D58
  lis       r4, 0x7374
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x66858
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7234
  bl        -0x276D78
  lis       r4, 0x7374
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x66838
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7235
  bl        -0x276D98
  lis       r4, 0x7374
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x66818
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7236
  bl        -0x276DB8
  lis       r4, 0x7374
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x667F8
  mr        r3, r31
  bl        0x18E0
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803ACC2C
 * Size:	000124
 */
void Game::Tyre::Obj::doFinishStoneState(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2A9D38
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7231
  bl        -0x276E0C
  lis       r4, 0x5F5F
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x667A4
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7232
  bl        -0x276E2C
  lis       r4, 0x5F5F
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x66784
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7233
  bl        -0x276E4C
  lis       r4, 0x5F5F
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x66764
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7234
  bl        -0x276E6C
  lis       r4, 0x5F5F
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x66744
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7235
  bl        -0x276E8C
  lis       r4, 0x5F5F
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x66724
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7236
  bl        -0x276EAC
  lis       r4, 0x5F5F
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x66704
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f1, 0x1264(r2)
  li        r4, 0
  lfs       f2, 0x4C4(r5)
  lfs       f3, 0x1258(r2)
  lfs       f4, 0x1268(r2)
  bl        -0x299C04
  mr        r3, r31
  bl        -0x2A5934
  cmpwi     r3, 0
  bne-      .loc_0x110
  mr        r3, r31
  bl        0x1758

.loc_0x110:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803ACD50
 * Size:	000538
 */
void Game::Tyre::Obj::collisionCallback( (Game::CollEvent &))
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
  stw       r31, 0xBC(r1)
  stw       r30, 0xB8(r1)
  stw       r29, 0xB4(r1)
  mr        r29, r4
  mr        r30, r3
  lwz       r3, 0x0(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x5C
  lfs       f0, 0x1258(r2)
  stfs      f0, 0x11C(r30)
  stfs      f0, 0x120(r30)
  stfs      f0, 0x124(r30)

.loc_0x5C:
  mr        r3, r30
  mr        r4, r29
  bl        -0x2A67A4
  mr        r3, r30
  bl        0x714
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x50C
  lwz       r0, 0x1E0(r30)
  lwz       r31, 0x0(r29)
  rlwinm.   r0,r0,0,22,22
  bne-      .loc_0x50C
  cmplwi    r31, 0
  beq-      .loc_0x50C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xC8
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x130

.loc_0xC8:
  lwz       r0, 0xC8(r31)
  cmplwi    r0, 0
  bne-      .loc_0xE4
  mr        r3, r31
  bl        -0x20D8B4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x130

.loc_0xE4:
  lwz       r5, 0xC0(r30)
  lis       r4, 0x804B
  lis       r3, 0x804B
  li        r0, 0
  lfs       f0, 0x604(r5)
  subi      r4, r4, 0x5D00
  subi      r5, r3, 0x4CE0
  mr        r3, r31
  stw       r4, 0x58(r1)
  addi      r4, r1, 0x58
  stw       r30, 0x5C(r1)
  stw       r5, 0x58(r1)
  stfs      f0, 0x60(r1)
  stw       r0, 0x64(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x50C

.loc_0x130:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1D0
  lwz       r3, 0x0(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x63
  beq-      .loc_0x1D0
  lis       r3, 0x804B
  lis       r5, 0x804B
  subi      r0, r3, 0x5D00
  lis       r3, 0x8051
  stw       r0, 0x84(r1)
  addi      r4, r3, 0x41E4
  addi      r5, r5, 0x4974
  lfs       f3, 0x126C(r2)
  lfs       f2, 0x0(r4)
  lis       r3, 0x804B
  lfs       f1, 0x4(r4)
  addi      r0, r3, 0x492C
  stw       r5, 0x84(r1)
  mr        r3, r31
  lfs       f0, 0x8(r4)
  addi      r4, r1, 0x84
  stw       r30, 0x88(r1)
  stfs      f3, 0x8C(r1)
  stfs      f2, 0x90(r1)
  stfs      f1, 0x94(r1)
  stfs      f0, 0x98(r1)
  stw       r0, 0x84(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x1D0:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x80(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x248
  lwz       r3, 0x1E0(r30)
  lis       r0, 0x4330
  stw       r0, 0xA0(r1)
  li        r0, 0x1
  ori       r3, r3, 0x4
  lfd       f1, 0x1278(r2)
  stw       r3, 0x1E0(r30)
  lwz       r3, 0xC0(r30)
  lbz       r3, 0x833(r3)
  stw       r3, 0x318(r30)
  lwz       r3, 0x318(r30)
  lwz       r4, 0x35C(r31)
  xoris     r3, r3, 0x8000
  lwz       r5, 0xC0(r30)
  stw       r3, 0xA4(r1)
  lfs       f2, 0xC0(r4)
  lfd       f0, 0xA0(r1)
  lfs       f3, 0x848(r5)
  fsubs     f0, f0, f1
  fdivs     f0, f2, f0
  fmuls     f0, f3, f0
  stfs      f0, 0x31C(r30)
  stb       r0, 0x322(r30)

.loc_0x248:
  mr        r4, r31
  addi      r3, r1, 0x68
  bl        -0x20D344
  li        r0, 0
  lis       r3, 0x804B
  subi      r4, r3, 0x437C
  addi      r3, r1, 0x68
  cmplwi    r0, 0
  stw       r4, 0x48(r1)
  stw       r0, 0x54(r1)
  stw       r0, 0x4C(r1)
  stw       r3, 0x50(r1)
  bne-      .loc_0x294
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4C(r1)
  b         .loc_0x4E0

.loc_0x294:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4C(r1)
  b         .loc_0x300

.loc_0x2AC:
  lwz       r3, 0x50(r1)
  lwz       r4, 0x4C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x54(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x4E0
  lwz       r3, 0x50(r1)
  lwz       r4, 0x4C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4C(r1)

.loc_0x300:
  lwz       r12, 0x48(r1)
  addi      r3, r1, 0x48
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x2AC
  b         .loc_0x4E0

.loc_0x320:
  lwz       r3, 0x50(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r31, r3
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x424
  mr        r4, r30
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lfs       f31, 0x14(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r30
  lfs       f0, 0x8(r1)
  lwz       r12, 0x0(r30)
  addi      r3, r1, 0x2C
  fsubs     f30, f0, f31
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r31)
  lfs       f31, 0x34(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x28(r1)
  lfs       f0, 0x1270(r2)
  fsubs     f1, f1, f31
  fmuls     f1, f1, f1
  fmadds    f1, f30, f30, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x424
  lwz       r5, 0xC0(r30)
  lis       r4, 0x804B
  lis       r3, 0x804B
  li        r0, 0
  lfs       f0, 0x604(r5)
  subi      r4, r4, 0x5D00
  subi      r5, r3, 0x4CE0
  mr        r3, r31
  stw       r4, 0x38(r1)
  addi      r4, r1, 0x38
  stw       r30, 0x3C(r1)
  stw       r5, 0x38(r1)
  stfs      f0, 0x40(r1)
  stw       r0, 0x44(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x424:
  lwz       r0, 0x54(r1)
  cmplwi    r0, 0
  bne-      .loc_0x450
  lwz       r3, 0x50(r1)
  lwz       r4, 0x4C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4C(r1)
  b         .loc_0x4E0

.loc_0x450:
  lwz       r3, 0x50(r1)
  lwz       r4, 0x4C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4C(r1)
  b         .loc_0x4C4

.loc_0x470:
  lwz       r3, 0x50(r1)
  lwz       r4, 0x4C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x54(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x4E0
  lwz       r3, 0x50(r1)
  lwz       r4, 0x4C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4C(r1)

.loc_0x4C4:
  lwz       r12, 0x48(r1)
  addi      r3, r1, 0x48
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x470

.loc_0x4E0:
  lwz       r3, 0x50(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x4C(r1)
  cmplw     r4, r3
  bne+      .loc_0x320
  addi      r3, r1, 0x68
  li        r4, -0x1
  bl        -0x20D4F4

.loc_0x50C:
  psq_l     f31,0xD8(r1),0,0
  lfd       f31, 0xD0(r1)
  psq_l     f30,0xC8(r1),0,0
  lfd       f30, 0xC0(r1)
  lwz       r31, 0xBC(r1)
  lwz       r30, 0xB8(r1)
  lwz       r0, 0xE4(r1)
  lwz       r29, 0xB4(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr
*/
}

/*
 * --INFO--
 * Address:	803AD288
 * Size:	0000A0
 */
void Game::Tyre::Obj::damageCallBack( (Game::Creature *, float, CollPart *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x18(r1)
  fmr       f31, f1
  stw       r31, 0x14(r1)
  mr        r31, r5
  stw       r30, 0x10(r1)
  mr        r30, r4
  stw       r29, 0xC(r1)
  mr        r29, r3
  lwz       r0, 0x1E0(r3)
  rlwinm.   r0,r0,0,22,22
  bne-      .loc_0x44
  bl        0x210
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x7C

.loc_0x44:
  lwz       r0, 0x1E0(r29)
  rlwinm.   r0,r0,0,22,22
  bne-      .loc_0x5C
  lbz       r0, 0x321(r29)
  cmplwi    r0, 0
  bne-      .loc_0x64

.loc_0x5C:
  li        r3, 0
  b         .loc_0x80

.loc_0x64:
  fmr       f1, f31
  mr        r3, r29
  mr        r4, r30
  mr        r5, r31
  bl        -0x2A7290
  b         .loc_0x80

.loc_0x7C:
  li        r3, 0

.loc_0x80:
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
 * Address:	803AD328
 * Size:	00003C
 */
void Game::Tyre::Obj::hipdropCallBack( (Game::Creature *, float, CollPart *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  beq-      .loc_0x28
  mr        r3, r4
  lwz       r12, 0x0(r4)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     

.loc_0x28:
  lwz       r0, 0x14(r1)
  li        r3, 0
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803AD364
 * Size:	000058
 */
void Game::Tyre::Obj::earthquakeCallBack( (Game::Creature *, float))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2A5F84
  cmpwi     r3, 0
  bne-      .loc_0x40
  lwz       r3, 0x304(r31)
  mr        r4, r31
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x40:
  lwz       r0, 0x14(r1)
  li        r3, 0
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803AD3BC
 * Size:	000034
 */
void Game::Tyre::Obj::inWaterCallback( (Game::WaterBox *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2A953C
  mr        r3, r31
  bl        0x111C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803AD3F0
 * Size:	000044
 */
void Game::Tyre::Obj::outWaterCallback(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2A96D8
  mr        r3, r31
  bl        -0x2A6018
  cmpwi     r3, 0
  bne-      .loc_0x30
  mr        r3, r31
  bl        0x1074

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
 * Address:	803AD434
 * Size:	000050
 */
void Game::Tyre::Obj::getShadowParam( (Game::ShadowParam &))
{
/*
.loc_0x0:
  lfs       f0, 0x18C(r3)
  lfs       f5, 0x1280(r2)
  stfs      f0, 0x0(r4)
  lfs       f3, 0x1258(r2)
  lfs       f0, 0x190(r3)
  lfs       f2, 0x1264(r2)
  stfs      f0, 0x4(r4)
  lfs       f1, 0x1284(r2)
  lfs       f4, 0x194(r3)
  lfs       f0, 0x1288(r2)
  stfs      f4, 0x8(r4)
  lfs       f4, 0x190(r3)
  fadds     f4, f5, f4
  stfs      f4, 0x4(r4)
  stfs      f3, 0xC(r4)
  stfs      f2, 0x10(r4)
  stfs      f3, 0x14(r4)
  stfs      f1, 0x18(r4)
  stfs      f0, 0x1C(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	803AD484
 * Size:	00004C
 */
void Game::Tyre::Obj::needShadow(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2A6088
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x28
  li        r3, 0x1
  b         .loc_0x38

.loc_0x28:
  mr        r3, r31
  bl        -0x2A60BC
  cmpwi     r3, 0x1
  li        r3, 0x1

.loc_0x38:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803AD4D0
 * Size:	000050
 */
void Game::Tyre::Obj::isFreeze(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2A60F0
  cmpwi     r3, 0x2
  beq-      .loc_0x30
  mr        r3, r31
  bl        -0x2A6100
  cmpwi     r3, 0x3
  bne-      .loc_0x38

.loc_0x30:
  li        r3, 0x1
  b         .loc_0x3C

.loc_0x38:
  li        r3, 0

.loc_0x3C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803AD520
 * Size:	000298
 */
void Game::Tyre::Obj::frontRollMtxCalc(void)
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
  stw       r31, 0x6C(r1)
  stw       r30, 0x68(r1)
  mr        r31, r3
  lhz       r0, 0x310(r3)
  lwz       r3, 0x174(r3)
  mulli     r0, r0, 0x3C
  lwz       r3, 0x10(r3)
  add       r3, r3, r0
  bl        0x7C344
  lfs       f0, 0x1258(r2)
  mr        r30, r3
  stfs      f0, 0x20(r1)
  stfs      f0, 0x24(r1)
  stfs      f0, 0x28(r1)
  lbz       r0, 0x2D0(r31)
  cmplwi    r0, 0
  beq-      .loc_0x9C
  lwz       r0, 0x2D4(r31)
  lis       r4, 0x8051
  lwz       r5, 0x2D8(r31)
  subi      r4, r4, 0xC2C
  stw       r0, 0x8(r1)
  lwz       r0, 0x2DC(r31)
  stw       r5, 0xC(r1)
  lfs       f0, 0x8(r1)
  stw       r0, 0x10(r1)
  lfs       f1, 0xC(r1)
  stfs      f0, 0xC(r30)
  lfs       f0, 0x10(r1)
  stfs      f1, 0x1C(r30)
  stfs      f0, 0x2C(r30)
  bl        -0x2C32EC

.loc_0x9C:
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x1258(r2)
  lfs       f1, 0x834(r3)
  fcmpu     cr0, f0, f1
  beq-      .loc_0xC0
  stfs      f0, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  b         .loc_0x1B4

.loc_0xC0:
  lfs       f31, 0x844(r3)
  lfs       f30, 0x840(r3)
  lfs       f1, 0x1FC(r31)
  lfs       f2, 0x314(r31)
  bl        0x6460C
  fcmpo     cr0, f1, f30
  ble-      .loc_0x104
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x2CC(r31)
  lfs       f2, 0x838(r3)
  fmadds    f0, f1, f2, f0
  stfs      f0, 0x2CC(r31)
  lfs       f0, 0x2CC(r31)
  fcmpo     cr0, f0, f31
  ble-      .loc_0x190
  stfs      f31, 0x2CC(r31)
  b         .loc_0x190

.loc_0x104:
  fneg      f0, f30
  fcmpo     cr0, f1, f0
  bge-      .loc_0x13C
  lwz       r3, 0xC0(r31)
  fneg      f3, f31
  lfs       f0, 0x2CC(r31)
  lfs       f2, 0x838(r3)
  fmadds    f0, f1, f2, f0
  stfs      f0, 0x2CC(r31)
  lfs       f0, 0x2CC(r31)
  fcmpo     cr0, f0, f3
  bge-      .loc_0x190
  stfs      f3, 0x2CC(r31)
  b         .loc_0x190

.loc_0x13C:
  lfs       f2, 0x2CC(r31)
  lfs       f1, 0x1258(r2)
  fcmpo     cr0, f2, f1
  ble-      .loc_0x170
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x83C(r3)
  fsubs     f0, f2, f0
  stfs      f0, 0x2CC(r31)
  lfs       f0, 0x2CC(r31)
  fcmpo     cr0, f0, f1
  bge-      .loc_0x190
  stfs      f1, 0x2CC(r31)
  b         .loc_0x190

.loc_0x170:
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x83C(r3)
  fadds     f0, f2, f0
  stfs      f0, 0x2CC(r31)
  lfs       f0, 0x2CC(r31)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x190
  stfs      f1, 0x2CC(r31)

.loc_0x190:
  lfs       f1, 0x2CC(r31)
  addi      r3, r1, 0x2C
  lfs       f0, 0x1258(r2)
  addi      r4, r1, 0x20
  stfs      f1, 0x18(r1)
  addi      r5, r1, 0x14
  stfs      f0, 0x14(r1)
  stfs      f0, 0x1C(r1)
  bl        0x7B1B8

.loc_0x1B4:
  lwz       r3, 0x174(r31)
  addi      r4, r2, 0x128C
  bl        0x91908
  bl        0x7C1C0
  lfs       f2, 0x2C(r3)
  addi      r4, r2, 0x1294
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  stfs      f0, 0x2EC(r31)
  stfs      f1, 0x2F0(r31)
  stfs      f2, 0x2F4(r31)
  lwz       r3, 0x174(r31)
  bl        0x918E0
  bl        0x7C198
  lfs       f2, 0x2C(r3)
  mr        r5, r30
  lfs       f1, 0x1C(r3)
  addi      r4, r1, 0x2C
  lfs       f0, 0xC(r3)
  mr        r3, r30
  stfs      f0, 0x2F8(r31)
  stfs      f1, 0x2FC(r31)
  stfs      f2, 0x300(r31)
  bl        -0x2C3430
  lis       r3, 0x8051
  addi      r4, r1, 0x2C
  subi      r3, r3, 0xC2C
  mr        r5, r3
  bl        -0x2C3444
  lfs       f1, 0x2C0(r31)
  addi      r3, r1, 0x2C
  lfs       f0, 0x1258(r2)
  addi      r4, r1, 0x20
  stfs      f1, 0x14(r1)
  addi      r5, r1, 0x14
  stfs      f0, 0x18(r1)
  stfs      f0, 0x1C(r1)
  bl        0x7B120
  mr        r3, r30
  mr        r5, r30
  addi      r4, r1, 0x2C
  bl        -0x2C3478
  lis       r3, 0x8051
  addi      r4, r1, 0x2C
  subi      r3, r3, 0xC2C
  mr        r5, r3
  bl        -0x2C348C
  psq_l     f31,0x88(r1),0,0
  lfd       f31, 0x80(r1)
  psq_l     f30,0x78(r1),0,0
  lfd       f30, 0x70(r1)
  lwz       r31, 0x6C(r1)
  lwz       r0, 0x94(r1)
  lwz       r30, 0x68(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	803AD7B8
 * Size:	00038C
 */
void Game::Tyre::Obj::rearRollMtxCalc(void)
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
  stw       r31, 0xBC(r1)
  stw       r30, 0xB8(r1)
  mr        r30, r3
  lhz       r0, 0x312(r3)
  lwz       r3, 0x174(r3)
  mulli     r0, r0, 0x3C
  lwz       r3, 0x10(r3)
  add       r3, r3, r0
  bl        0x7C0AC
  mr        r31, r3
  lfs       f0, 0x129C(r2)
  lfs       f2, 0x1C(r31)
  addi      r4, r1, 0x58
  lfs       f3, 0x2C(r31)
  lfs       f1, 0xC(r31)
  fadds     f0, f2, f0
  lwz       r3, -0x6CF8(r13)
  stfs      f2, 0x5C(r1)
  stfs      f1, 0x58(r1)
  stfs      f3, 0x60(r1)
  stfs      f0, 0x5C(r1)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  fmr       f31, f1
  lwz       r12, 0x0(r30)
  lwz       r12, 0xCC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC8
  lfs       f1, 0x1288(r2)
  lfs       f2, 0x2C8(r30)
  lfs       f0, 0x190(r30)
  fadds     f1, f1, f2
  fcmpo     cr0, f1, f0
  bge-      .loc_0xD8
  lfs       f0, 0x1280(r2)
  fadds     f0, f2, f0
  stfs      f0, 0x2C8(r30)
  b         .loc_0xD8

.loc_0xC8:
  lfs       f1, 0x2C8(r30)
  lfs       f0, 0x12A0(r2)
  fsubs     f0, f1, f0
  stfs      f0, 0x2C8(r30)

.loc_0xD8:
  lfs       f30, 0x1280(r2)
  mr        r3, r30
  bl        -0x2A64A4
  cmpwi     r3, 0x1
  beq-      .loc_0xF0
  lfs       f30, 0x1258(r2)

.loc_0xF0:
  fadds     f0, f31, f30
  lfs       f1, 0x2C8(r30)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x2C4
  stfs      f31, 0x2C8(r30)
  lfs       f0, 0x12A4(r2)
  lfs       f3, 0x2C(r31)
  lfs       f2, 0x1C(r31)
  fadds     f0, f31, f0
  lfs       f1, 0xC(r31)
  stfs      f2, 0x50(r1)
  stfs      f1, 0x4C(r1)
  stfs      f3, 0x54(r1)
  stfs      f31, 0x50(r1)
  lfs       f1, 0x190(r30)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x158
  lbz       r0, 0x320(r30)
  cmplwi    r0, 0
  beq-      .loc_0x158
  mr        r3, r30
  addi      r4, r1, 0x4C
  bl        0xC40
  li        r0, 0
  stb       r0, 0x320(r30)

.loc_0x158:
  lwz       r0, 0xC8(r30)
  cmplwi    r0, 0
  beq-      .loc_0x2C4
  lfs       f0, 0x4C(r1)
  stfs      f0, 0x324(r30)
  lfs       f0, 0x50(r1)
  stfs      f0, 0x328(r30)
  lfs       f0, 0x54(r1)
  stfs      f0, 0x32C(r30)
  lwz       r0, 0x340(r30)
  cmplwi    r0, 0
  bne-      .loc_0x26C
  lfs       f0, 0x324(r30)
  lwz       r3, -0x6CF8(r13)
  stfs      f0, 0x3C(r1)
  lfs       f0, 0x12A8(r2)
  cmplwi    r3, 0
  lfs       f1, 0x328(r30)
  stfs      f1, 0x40(r1)
  lfs       f1, 0x32C(r30)
  stfs      f1, 0x44(r1)
  stfs      f0, 0x48(r1)
  beq-      .loc_0x1C0
  addi      r4, r1, 0x3C
  bl        -0x24A048
  stw       r3, 0x340(r30)

.loc_0x1C0:
  lwz       r0, 0x340(r30)
  cmplwi    r0, 0
  beq-      .loc_0x2C4
  mr        r3, r30
  lfs       f31, 0x1F8(r30)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x324(r30)
  lis       r5, 0x804B
  lwz       r7, 0x328(r30)
  lis       r4, 0x804B
  lwz       r6, 0x32C(r30)
  subi      r5, r5, 0x5814
  stw       r0, 0x8(r1)
  subi      r0, r4, 0x5820
  addi      r4, r1, 0x64
  stw       r7, 0xC(r1)
  lfs       f2, 0x8(r1)
  stw       r6, 0x10(r1)
  lfs       f1, 0xC(r1)
  stw       r5, 0x64(r1)
  lfs       f0, 0x10(r1)
  stfs      f2, 0x68(r1)
  stfs      f1, 0x6C(r1)
  stfs      f0, 0x70(r1)
  stw       r0, 0x64(r1)
  stw       r3, 0x74(r1)
  stfs      f31, 0x78(r1)
  lwz       r3, 0x33C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x340(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x0(r3)
  stfs      f0, 0x328(r30)
  b         .loc_0x2C4

.loc_0x26C:
  lfs       f0, 0x324(r30)
  lwz       r3, -0x6CF8(r13)
  stfs      f0, 0x2C(r1)
  lfs       f0, 0x12A8(r2)
  cmplwi    r3, 0
  lfs       f1, 0x328(r30)
  stfs      f1, 0x30(r1)
  lfs       f1, 0x32C(r30)
  stfs      f1, 0x34(r1)
  stfs      f0, 0x38(r1)
  beq-      .loc_0x2A4
  addi      r4, r1, 0x2C
  bl        -0x24A12C
  stw       r3, 0x340(r30)

.loc_0x2A4:
  lwz       r0, 0x340(r30)
  cmplwi    r0, 0
  bne-      .loc_0x2C4
  lwz       r3, 0x33C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x2C4:
  lfs       f2, 0x2C8(r30)
  lfs       f1, 0x190(r30)
  lfs       f0, 0x12A4(r2)
  fsubs     f2, f2, f1
  fcmpo     cr0, f2, f0
  ble-      .loc_0x2E0
  fmr       f2, f0

.loc_0x2E0:
  lfs       f0, 0x12A4(r2)
  fneg      f0, f0
  fcmpo     cr0, f2, f0
  bge-      .loc_0x2F4
  fmr       f2, f0

.loc_0x2F4:
  lfs       f0, 0x1C(r31)
  lis       r3, 0x8051
  subi      r4, r3, 0xC2C
  fadds     f0, f0, f2
  mr        r3, r31
  stfs      f0, 0x1C(r31)
  bl        -0x2C37F8
  lfs       f1, 0x1258(r2)
  addi      r3, r1, 0x7C
  addi      r4, r1, 0x20
  addi      r5, r1, 0x14
  stfs      f1, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f1, 0x28(r1)
  lfs       f0, 0x2C0(r30)
  stfs      f0, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f1, 0x1C(r1)
  bl        0x7AD94
  mr        r3, r31
  mr        r5, r31
  addi      r4, r1, 0x7C
  bl        -0x2C3804
  lis       r3, 0x8051
  addi      r4, r1, 0x7C
  subi      r3, r3, 0xC2C
  mr        r5, r3
  bl        -0x2C3818
  psq_l     f31,0xD8(r1),0,0
  lfd       f31, 0xD0(r1)
  psq_l     f30,0xC8(r1),0,0
  lfd       f30, 0xC0(r1)
  lwz       r31, 0xBC(r1)
  lwz       r0, 0xE4(r1)
  lwz       r30, 0xB8(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr
*/
}

/*
 * --INFO--
 * Address:	803ADB44
 * Size:	000008
 */
void Game::Tyre::Obj::getEnemyTypeID(void)
{
/*
.loc_0x0:
  li        r3, 0x62
  blr
*/
}

/*
 * --INFO--
 * Address:	803ADB4C
 * Size:	000088
 */
void Game::Tyre::Obj::moveStart(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0x1
  stw       r31, 0xC(r1)
  mr        r31, r3
  stb       r0, 0x321(r3)
  bl        -0x2A6774
  cmpwi     r3, 0x2
  beq-      .loc_0x38
  mr        r3, r31
  bl        -0x2A6784
  cmpwi     r3, 0x3
  bne-      .loc_0x40

.loc_0x38:
  li        r0, 0x1
  b         .loc_0x44

.loc_0x40:
  li        r0, 0

.loc_0x44:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x6C
  lwz       r3, 0x304(r31)
  mr        r4, r31
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x6C:
  mr        r3, r31
  bl        -0x2A6450
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803ADBD4
 * Size:	0000E8
 */
void Game::Tyre::Obj::collisionStOn(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x7479
  stw       r0, 0x14(r1)
  addi      r4, r4, 0x7231
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x114(r3)
  bl        -0x277DB0
  lis       r4, 0x7374
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x65800
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7232
  bl        -0x277DD0
  lis       r4, 0x7374
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x657E0
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7233
  bl        -0x277DF0
  lis       r4, 0x7374
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x657C0
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7234
  bl        -0x277E10
  lis       r4, 0x7374
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x657A0
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7235
  bl        -0x277E30
  lis       r4, 0x7374
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x65780
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7236
  bl        -0x277E50
  lis       r4, 0x7374
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x65760
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803ADCBC
 * Size:	000108
 */
void Game::Tyre::Obj::collisionStOff(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x7479
  stw       r0, 0x14(r1)
  addi      r4, r4, 0x7231
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x114(r3)
  bl        -0x277E98
  lis       r4, 0x5F5F
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x65718
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7232
  bl        -0x277EB8
  lis       r4, 0x5F5F
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x656F8
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7233
  bl        -0x277ED8
  lis       r4, 0x5F5F
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x656D8
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7234
  bl        -0x277EF8
  lis       r4, 0x5F5F
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x656B8
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7235
  bl        -0x277F18
  lis       r4, 0x5F5F
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x65698
  lis       r4, 0x7479
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x7236
  bl        -0x277F38
  lis       r4, 0x5F5F
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0x65678
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f1, 0x1264(r2)
  li        r4, 0
  lfs       f2, 0x4C4(r5)
  lfs       f3, 0x1258(r2)
  lfs       f4, 0x1268(r2)
  bl        -0x29AC90
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803ADDC4
 * Size:	0005CC
 */
void Game::Tyre::Obj::flick(void)
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
  stw       r31, 0x7C(r1)
  stw       r30, 0x78(r1)
  mr        r31, r3
  lwz       r3, -0x6960(r13)
  addi      r5, r31, 0x18C
  li        r4, 0xF
  li        r6, 0x2
  bl        -0x15BBD0
  lwz       r3, -0x6958(r13)
  addi      r5, r31, 0x18C
  li        r4, 0xD
  li        r6, 0x2
  bl        -0x15A6A0
  li        r0, 0
  lwz       r3, -0x6D0C(r13)
  lis       r4, 0x804B
  stw       r0, 0x74(r1)
  subi      r4, r4, 0x4364
  cmplwi    r0, 0
  stw       r4, 0x68(r1)
  stw       r0, 0x6C(r1)
  stw       r3, 0x70(r1)
  bne-      .loc_0xA0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x6C(r1)
  b         .loc_0x2C8

.loc_0xA0:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x6C(r1)
  b         .loc_0x10C

.loc_0xB8:
  lwz       r3, 0x70(r1)
  lwz       r4, 0x6C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x74(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2C8
  lwz       r3, 0x70(r1)
  lwz       r4, 0x6C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x6C(r1)

.loc_0x10C:
  lwz       r12, 0x68(r1)
  addi      r3, r1, 0x68
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0xB8
  b         .loc_0x2C8

.loc_0x12C:
  lwz       r3, 0x70(r1)
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
  beq-      .loc_0x20C
  lwz       r0, 0xC8(r30)
  cmplwi    r0, 0
  beq-      .loc_0x20C
  mr        r4, r30
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r30)
  lfs       f29, 0x194(r31)
  lwz       r12, 0x8(r12)
  lfs       f30, 0x18C(r31)
  mtctr     r12
  bctrl     
  mr        r4, r30
  addi      r3, r1, 0x2C
  lwz       r12, 0x0(r30)
  lfs       f31, 0x28(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  fsubs     f1, f31, f29
  lfs       f2, 0x2C(r1)
  lfs       f0, 0x1270(r2)
  fsubs     f2, f2, f30
  fmuls     f1, f1, f1
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x20C
  lwz       r5, 0xC0(r31)
  lis       r4, 0x804B
  lis       r3, 0x804B
  li        r0, 0
  lfs       f0, 0x604(r5)
  subi      r4, r4, 0x5D00
  subi      r5, r3, 0x4CE0
  mr        r3, r30
  stw       r4, 0x58(r1)
  addi      r4, r1, 0x58
  stw       r31, 0x5C(r1)
  stw       r5, 0x58(r1)
  stfs      f0, 0x60(r1)
  stw       r0, 0x64(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x20C:
  lwz       r0, 0x74(r1)
  cmplwi    r0, 0
  bne-      .loc_0x238
  lwz       r3, 0x70(r1)
  lwz       r4, 0x6C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x6C(r1)
  b         .loc_0x2C8

.loc_0x238:
  lwz       r3, 0x70(r1)
  lwz       r4, 0x6C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x6C(r1)
  b         .loc_0x2AC

.loc_0x258:
  lwz       r3, 0x70(r1)
  lwz       r4, 0x6C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x74(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2C8
  lwz       r3, 0x70(r1)
  lwz       r4, 0x6C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x6C(r1)

.loc_0x2AC:
  lwz       r12, 0x68(r1)
  addi      r3, r1, 0x68
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x258

.loc_0x2C8:
  lwz       r3, 0x70(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x6C(r1)
  cmplw     r4, r3
  bne+      .loc_0x12C
  li        r0, 0
  lwz       r3, -0x6D20(r13)
  lis       r4, 0x804B
  stw       r0, 0x54(r1)
  subi      r4, r4, 0x434C
  cmplwi    r0, 0
  stw       r4, 0x48(r1)
  stw       r0, 0x4C(r1)
  stw       r3, 0x50(r1)
  bne-      .loc_0x328
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4C(r1)
  b         .loc_0x3B0

.loc_0x328:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4C(r1)
  b         .loc_0x394

.loc_0x340:
  lwz       r3, 0x50(r1)
  lwz       r4, 0x4C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x54(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x3B0
  lwz       r3, 0x50(r1)
  lwz       r4, 0x4C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4C(r1)

.loc_0x394:
  lwz       r12, 0x48(r1)
  addi      r3, r1, 0x48
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x340

.loc_0x3B0:
  lfs       f31, 0x1270(r2)
  b         .loc_0x52C

.loc_0x3B8:
  lwz       r3, 0x50(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r30)
  mr        r4, r30
  lfs       f28, 0x194(r31)
  lwz       r12, 0x8(r12)
  lfs       f30, 0x18C(r31)
  mtctr     r12
  bctrl     
  mr        r4, r30
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r30)
  lfs       f29, 0x10(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  fsubs     f0, f29, f28
  lfs       f1, 0x14(r1)
  fsubs     f1, f1, f30
  fmuls     f0, f0, f0
  fmadds    f0, f1, f1, f0
  fcmpo     cr0, f0, f31
  bge-      .loc_0x470
  lwz       r5, 0xC0(r31)
  lis       r4, 0x804B
  lis       r3, 0x804B
  li        r0, 0
  lfs       f0, 0x604(r5)
  subi      r4, r4, 0x5D00
  subi      r5, r3, 0x4CE0
  mr        r3, r30
  stw       r4, 0x38(r1)
  addi      r4, r1, 0x38
  stw       r31, 0x3C(r1)
  stw       r5, 0x38(r1)
  stfs      f0, 0x40(r1)
  stw       r0, 0x44(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x470:
  lwz       r0, 0x54(r1)
  cmplwi    r0, 0
  bne-      .loc_0x49C
  lwz       r3, 0x50(r1)
  lwz       r4, 0x4C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4C(r1)
  b         .loc_0x52C

.loc_0x49C:
  lwz       r3, 0x50(r1)
  lwz       r4, 0x4C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4C(r1)
  b         .loc_0x510

.loc_0x4BC:
  lwz       r3, 0x50(r1)
  lwz       r4, 0x4C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x54(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x52C
  lwz       r3, 0x50(r1)
  lwz       r4, 0x4C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4C(r1)

.loc_0x510:
  lwz       r12, 0x48(r1)
  addi      r3, r1, 0x48
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x4BC

.loc_0x52C:
  lwz       r3, 0x50(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x4C(r1)
  cmplw     r4, r3
  bne+      .loc_0x3B8
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f4, 0x1268(r2)
  li        r4, 0
  lfs       f29, 0x4C4(r5)
  lfs       f30, 0x4EC(r5)
  fmr       f2, f29
  lfs       f28, 0x53C(r5)
  fmr       f3, f30
  lfs       f1, 0x514(r5)
  bl        -0x29AE64
  fmr       f1, f28
  lfs       f4, 0x1268(r2)
  fmr       f2, f29
  mr        r3, r31
  fmr       f3, f30
  li        r4, 0
  bl        -0x29B238
  psq_l     f31,0xB8(r1),0,0
  lfd       f31, 0xB0(r1)
  psq_l     f30,0xA8(r1),0,0
  lfd       f30, 0xA0(r1)
  psq_l     f29,0x98(r1),0,0
  lfd       f29, 0x90(r1)
  psq_l     f28,0x88(r1),0,0
  lfd       f28, 0x80(r1)
  lwz       r31, 0x7C(r1)
  lwz       r0, 0xC4(r1)
  lwz       r30, 0x78(r1)
  mtlr      r0
  addi      r1, r1, 0xC0
  blr
*/
}

/*
 * --INFO--
 * Address:	803AE390
 * Size:	000100
 */
void Game::Tyre::Obj::deadEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r3
  lhz       r0, 0x312(r3)
  lwz       r3, 0x174(r3)
  mulli     r0, r0, 0x3C
  lwz       r3, 0x10(r3)
  add       r3, r3, r0
  bl        0x7B4E8
  lis       r4, 0x804B
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  subi      r4, r4, 0x5808
  lfs       f0, 0xC(r3)
  lis       r3, 0x804E
  addi      r0, r3, 0x6A50
  li        r5, 0
  stw       r4, 0x18(r1)
  lis       r4, 0x804B
  lis       r3, 0x804E
  li        r8, 0x29D
  subi      r4, r4, 0x5814
  li        r7, 0x29E
  li        r6, 0x29F
  stw       r0, 0x18(r1)
  addi      r0, r3, 0x63E8
  addi      r3, r1, 0x18
  stw       r4, 0x8(r1)
  addi      r4, r1, 0x8
  stfs      f0, 0xC(r1)
  stfs      f1, 0x10(r1)
  stfs      f2, 0x14(r1)
  sth       r8, 0x1C(r1)
  sth       r7, 0x1E(r1)
  sth       r6, 0x20(r1)
  stw       r5, 0x24(r1)
  stw       r5, 0x28(r1)
  stw       r5, 0x2C(r1)
  stw       r0, 0x18(r1)
  bl        0xC88
  lhz       r0, 0x310(r31)
  lwz       r3, 0x174(r31)
  mulli     r0, r0, 0x3C
  lwz       r3, 0x10(r3)
  add       r3, r3, r0
  bl        0x7B454
  lfs       f2, 0x2C(r3)
  addi      r4, r1, 0x8
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  addi      r3, r1, 0x18
  stfs      f0, 0xC(r1)
  stfs      f1, 0x10(r1)
  stfs      f2, 0x14(r1)
  bl        0xC4C
  li        r0, 0
  stb       r0, 0x2D2(r31)
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	803AE490
 * Size:	000064
 */
void Game::Tyre::Obj::createSmokeEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x280(r3)
  cmplwi    r0, 0
  bne-      .loc_0x50
  lwz       r3, 0x330(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x334(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x50:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803AE4F4
 * Size:	000050
 */
void Game::Tyre::Obj::fadeSmokeEffect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x330(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x334(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
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
 * Address:	803AE544
 * Size:	0001E8
 */
void landEffect__Q34Game4Tyre3ObjFR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x94(r1)
  stw       r31, 0x8C(r1)
  mr        r31, r4
  li        r4, 0x5976
  stw       r30, 0x88(r1)
  stw       r29, 0x84(r1)
  mr        r29, r3
  lwz       r3, 0x28C(r3)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x280(r29)
  li        r30, 0
  cmplwi    r0, 0
  beq-      .loc_0x50
  li        r30, 0x1

.loc_0x50:
  cmplwi    r0, 0
  bne-      .loc_0xA0
  lfs       f0, 0x0(r31)
  li        r0, 0
  lwz       r3, -0x6CF8(r13)
  stfs      f0, 0x28(r1)
  lfs       f0, 0x12A8(r2)
  cmplwi    r3, 0
  lfs       f1, 0x4(r31)
  stfs      f1, 0x2C(r1)
  lfs       f1, 0x8(r31)
  stfs      f1, 0x30(r1)
  stfs      f0, 0x34(r1)
  beq-      .loc_0x94
  addi      r4, r1, 0x28
  bl        -0x24ACA8
  mr        r0, r3

.loc_0x94:
  cmplwi    r0, 0
  beq-      .loc_0xA0
  li        r30, 0x1

.loc_0xA0:
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0x15C
  lis       r3, 0x804B
  lfs       f2, 0x1FC(r29)
  subi      r0, r3, 0x5814
  lis       r5, 0x804B
  stw       r0, 0x38(r1)
  lis       r4, 0x804E
  lis       r6, 0x804E
  lis       r3, 0x804F
  lfs       f1, 0x0(r31)
  subi      r12, r5, 0x5808
  addi      r11, r4, 0x6A28
  lfs       f0, 0x12AC(r2)
  stfs      f1, 0x3C(r1)
  addi      r30, r6, 0x1B50
  subi      r0, r3, 0x5F20
  li        r10, 0x211
  lfs       f1, 0x4(r31)
  li        r9, 0x212
  li        r8, 0x213
  li        r7, 0x214
  stfs      f1, 0x40(r1)
  li        r6, 0x215
  li        r5, 0
  addi      r3, r1, 0x50
  lfs       f1, 0x8(r31)
  addi      r4, r1, 0x38
  stw       r12, 0x50(r1)
  stw       r11, 0x50(r1)
  stfs      f1, 0x44(r1)
  stw       r30, 0x38(r1)
  stfs      f2, 0x48(r1)
  stfs      f0, 0x4C(r1)
  sth       r10, 0x54(r1)
  sth       r9, 0x56(r1)
  sth       r8, 0x58(r1)
  sth       r7, 0x5A(r1)
  sth       r6, 0x5C(r1)
  stw       r5, 0x60(r1)
  stw       r5, 0x64(r1)
  stw       r5, 0x68(r1)
  stw       r5, 0x6C(r1)
  stw       r5, 0x70(r1)
  stw       r0, 0x50(r1)
  bl        0x3D654
  b         .loc_0x1CC

.loc_0x15C:
  lis       r3, 0x804B
  li        r6, 0
  subi      r0, r3, 0x5808
  lis       r3, 0x804E
  stw       r0, 0x18(r1)
  addi      r0, r3, 0x6A64
  lis       r4, 0x804E
  lis       r3, 0x804B
  stw       r0, 0x18(r1)
  addi      r5, r4, 0x63D4
  subi      r0, r3, 0x5814
  li        r3, 0x29A
  li        r7, 0x29B
  sth       r3, 0x1C(r1)
  addi      r3, r1, 0x18
  addi      r4, r1, 0x8
  sth       r7, 0x1E(r1)
  stw       r6, 0x20(r1)
  stw       r6, 0x24(r1)
  stw       r5, 0x18(r1)
  stw       r0, 0x8(r1)
  lfs       f0, 0x0(r31)
  stfs      f0, 0xC(r1)
  lfs       f0, 0x4(r31)
  stfs      f0, 0x10(r1)
  lfs       f0, 0x8(r31)
  stfs      f0, 0x14(r1)
  bl        0x908

.loc_0x1CC:
  lwz       r0, 0x94(r1)
  lwz       r31, 0x8C(r1)
  lwz       r30, 0x88(r1)
  lwz       r29, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	803AE72C
 * Size:	00002C
 */
void Game::Tyre::Obj::scaleUpShadow(void)
{
/*
.loc_0x0:
  lwz       r4, -0x6514(r13)
  lfs       f2, 0x308(r3)
  lfs       f1, 0x54(r4)
  lfs       f0, 0x1264(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x308(r3)
  lfs       f1, 0x308(r3)
  fcmpo     cr0, f1, f0
  blelr-    
  stfs      f0, 0x308(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803AE758
 * Size:	00009C
 */
void efx::TKageTyresmoke::__dt(void)
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
  lis       r3, 0x804E
  addi      r3, r3, 0x63FC
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x68F4
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
  bl        -0x31EB28

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x38A720

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
 * Address:	803AE7F4
 * Size:	000004
 */
void Game::Tyre::Obj::setInitialSetting( (Game::EnemyInitialParamBase *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803AE7F8
 * Size:	000008
 */
void Game::Tyre::Obj::isUnderground(void)
{
/*
.loc_0x0:
  lbz       r3, 0x2D1(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803AE800
 * Size:	000008
 */
void bombCallBack__Q34Game4Tyre3ObjFPQ24Game8CreatureR10Vector3<float>f(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	803AE808
 * Size:	000028
 */
void __sinit_tyre_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804E
  stw       r0, -0x6618(r13)
  stfsu     f0, 0x63C8(r3)
  stfs      f0, -0x6614(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803AE830
 * Size:	000014
 */
void @836@12@Game::EnemyBase::viewOnPelletKilled(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x344
  b         -0x2A7F24
*/
}

/*
 * --INFO--
 * Address:	803AE844
 * Size:	000014
 */
void @836@12@Game::EnemyBase::viewStartCarryMotion(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x344
  b         -0x2A81AC
*/
}

/*
 * --INFO--
 * Address:	803AE858
 * Size:	000014
 */
void @836@12@Game::EnemyBase::viewStartPreCarryMotion(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x344
  b         -0x2A81A0
*/
}

/*
 * --INFO--
 * Address:	803AE86C
 * Size:	000014
 */
void @836@12@Game::EnemyBase::view_finish_carrymotion(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x344
  b         -0x2A7E04
*/
}

/*
 * --INFO--
 * Address:	803AE880
 * Size:	000014
 */
void @836@12@Game::EnemyBase::view_start_carrymotion(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x344
  b         -0x2A7E44
*/
}

/*
 * --INFO--
 * Address:	803AE894
 * Size:	000014
 */
void @836@12@Game::EnemyBase::viewGetShape(void)
{
/*
.loc_0x0:
  li        r11, 0xC
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x344
  b         -0x2A8204
*/
}

/*
 * --INFO--
 * Address:	803AE8A8
 * Size:	000008
 */
void @4@efx::TKageTyresmoke::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x154
*/
}
