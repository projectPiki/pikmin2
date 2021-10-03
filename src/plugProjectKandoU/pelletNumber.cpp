

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
 * Address:	801F90D4
 * Size:	000004
 */
void Game::PelletNumber::Object::do_onInit( (Game::CreatureInitArg *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F90D8
 * Size:	0000C0
 */
void Game::PelletNumber::Object::constructor(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x928BC
  li        r3, 0x14
  bl        -0x1D5250
  cmplwi    r3, 0
  beq-      .loc_0x9C
  lis       r4, 0x804B
  lis       r5, 0x804A
  subi      r0, r4, 0x5808
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r5, 0x1D84
  addi      r5, r4, 0x698C
  lis       r4, 0x804E
  stw       r0, 0x4(r3)
  addi      r7, r4, 0x6940
  lis       r4, 0x804E
  addi      r0, r5, 0x14
  stw       r5, 0x0(r3)
  addi      r4, r4, 0x70C0
  li        r9, 0
  li        r8, 0x2B2
  stw       r0, 0x4(r3)
  addi      r6, r7, 0x14
  addi      r5, r31, 0x3AC
  addi      r0, r4, 0x14
  stw       r9, 0x8(r3)
  sth       r8, 0xC(r3)
  stb       r9, 0xE(r3)
  stw       r7, 0x0(r3)
  stw       r6, 0x4(r3)
  stw       r5, 0x10(r3)
  sth       r8, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)

.loc_0x9C:
  stw       r3, 0x458(r31)
  mr        r4, r31
  lwz       r3, -0x6980(r13)
  bl        0x489A0
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F9198
 * Size:	00006C
 */
void createKiraEffect__Q34Game12PelletNumber6ObjectFR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804B
  stw       r0, 0x24(r1)
  subi      r0, r5, 0x5814
  lis       r5, 0x804C
  lhz       r6, 0x43C(r3)
  stw       r0, 0x8(r1)
  subi      r0, r5, 0x2770
  lfs       f0, 0x0(r4)
  stfs      f0, 0xC(r1)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x10(r1)
  lfs       f0, 0x8(r4)
  addi      r4, r1, 0x8
  stfs      f0, 0x14(r1)
  stw       r0, 0x8(r1)
  stw       r6, 0x18(r1)
  lwz       r3, 0x458(r3)
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
 * Address:	801F9204
 * Size:	000108
 */
void Game::PelletNumber::Object::changeMaterial(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  mr        r27, r3
  lhz       r0, 0x43E(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0x3C
  bge-      .loc_0x30
  cmpwi     r0, 0
  bge-      .loc_0x64
  b         .loc_0x74

.loc_0x30:
  cmpwi     r0, 0x3
  bge-      .loc_0x74
  b         .loc_0x50

.loc_0x3C:
  li        r31, 0xFB
  li        r30, 0x11
  li        r29, 0
  li        r28, 0xFF
  b         .loc_0x74

.loc_0x50:
  li        r31, 0xFF
  li        r30, 0xDC
  mr        r28, r31
  li        r29, 0x34
  b         .loc_0x74

.loc_0x64:
  li        r29, 0xFF
  li        r31, 0
  mr        r28, r29
  li        r30, 0x33

.loc_0x74:
  lwz       r3, 0x174(r27)
  subi      r4, r2, 0x4680
  lwz       r3, 0x8(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x64(r3)
  bl        -0x1CA508
  lwz       r4, 0x174(r27)
  rlwinm    r0,r3,2,14,29
  addi      r5, r1, 0x8
  lwz       r3, 0x8(r4)
  li        r4, 0
  lwz       r3, 0x4(r3)
  lwz       r3, 0x60(r3)
  lwzx      r3, r3, r0
  sth       r31, 0x8(r1)
  sth       r30, 0xA(r1)
  sth       r29, 0xC(r1)
  sth       r28, 0xE(r1)
  lwz       r3, 0x2C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x174(r27)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x174(r27)
  lwz       r3, 0x8(r3)
  bl        -0x192688
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801F930C
 * Size:	0000B0
 */
void Game::PelletNumber::Mgr::__ct(void)
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
  addi      r0, r30, 0xA0
  stw       r0, 0x4(r30)

.loc_0x28:
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        -0x8D980
  addi      r31, r30, 0x54
  mr        r3, r31
  bl        0x218044
  lis       r3, 0x804B
  lis       r4, 0x804C
  subi      r0, r3, 0x5324
  lis       r3, 0x804C
  stw       r0, 0x0(r31)
  subi      r0, r4, 0x279C
  subi      r4, r3, 0x2868
  li        r5, 0
  stw       r0, 0x0(r31)
  addi      r0, r4, 0x98
  addi      r3, r30, 0x70
  stb       r5, 0x18(r31)
  stw       r4, 0x0(r30)
  stw       r0, 0x54(r30)
  bl        0x1DC8
  lis       r4, 0x804C
  mr        r3, r30
  subi      r4, r4, 0x2A3C
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x98
  stw       r0, 0x54(r30)
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
 * Address:	801F93BC
 * Size:	00019C
 */
void __dt__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>Fv(void)
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
  beq-      .loc_0x180
  lis       r3, 0x804C
  addic.    r0, r30, 0x70
  subi      r3, r3, 0x2868
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x98
  stw       r0, 0x54(r30)
  beq-      .loc_0xA0
  lis       r3, 0x804C
  addic.    r0, r30, 0x70
  subi      r3, r3, 0x28F4
  stw       r3, 0x70(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x8C(r30)
  beq-      .loc_0xA0
  lis       r3, 0x804C
  addic.    r0, r30, 0x70
  subi      r3, r3, 0x2970
  stw       r3, 0x70(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x8C(r30)
  beq-      .loc_0xA0
  lis       r3, 0x804C
  addic.    r0, r30, 0x70
  subi      r0, r3, 0x279C
  stw       r0, 0x70(r30)
  beq-      .loc_0xA0
  lis       r4, 0x804B
  addi      r3, r30, 0x70
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x70(r30)
  bl        0x218130

.loc_0xA0:
  addic.    r0, r30, 0x54
  beq-      .loc_0xD4
  lis       r3, 0x804C
  addic.    r0, r30, 0x54
  subi      r0, r3, 0x279C
  stw       r0, 0x54(r30)
  beq-      .loc_0xD4
  lis       r4, 0x804B
  addi      r3, r30, 0x54
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x54(r30)
  bl        0x2180FC

.loc_0xD4:
  cmplwi    r30, 0
  beq-      .loc_0x170
  lis       r3, 0x804B
  addic.    r0, r30, 0x18
  addi      r0, r3, 0x1CDC
  stw       r0, 0x0(r30)
  beq-      .loc_0x170
  lis       r3, 0x804B
  addic.    r0, r30, 0x18
  addi      r3, r3, 0x1EB4
  stw       r3, 0x18(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x34(r30)
  beq-      .loc_0x170
  lis       r3, 0x804B
  addic.    r0, r30, 0x18
  addi      r3, r3, 0x1E28
  stw       r3, 0x18(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x34(r30)
  beq-      .loc_0x170
  lis       r3, 0x804B
  addic.    r0, r30, 0x18
  addi      r3, r3, 0x1DAC
  stw       r3, 0x18(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x34(r30)
  beq-      .loc_0x170
  lis       r3, 0x804B
  addic.    r0, r30, 0x18
  addi      r0, r3, 0x1D80
  stw       r0, 0x18(r30)
  beq-      .loc_0x170
  lis       r4, 0x804B
  addi      r3, r30, 0x18
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x18(r30)
  bl        0x218060

.loc_0x170:
  extsh.    r0, r31
  ble-      .loc_0x180
  mr        r3, r30
  bl        -0x1D5484

.loc_0x180:
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
 * Address:	801F9558
 * Size:	0000A0
 */
void MonoObjectMgr<Game::PelletNumber::Object>::~MonoObjectMgr()
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
  subi      r4, r4, 0x28F4
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x2C
  stw       r0, 0x1C(r30)
  beq-      .loc_0x74
  lis       r4, 0x804C
  subi      r4, r4, 0x2970
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x2C
  stw       r0, 0x1C(r30)
  beq-      .loc_0x74
  lis       r4, 0x804C
  subi      r0, r4, 0x279C
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x217FC0

.loc_0x74:
  extsh.    r0, r31
  ble-      .loc_0x84
  mr        r3, r30
  bl        -0x1D5524

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
 * Address:	801F95F8
 * Size:	000070
 */
void Container<Game::PelletNumber::Object>::~Container()
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
  subi      r0, r4, 0x279C
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x217F50

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x1D5594

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
 * Address:	........
 * Size:	0000E0
 */
void Game::BasePelletMgr::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F9668
 * Size:	0000F4
 */
void Game::PelletNumber::Mgr::setupResources(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8048
  li        r5, 0
  stw       r0, 0x14(r1)
  addi      r4, r4, 0x1AE0
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, -0x6514(r13)
  bl        0x229CD0
  mr        r3, r31
  li        r4, 0x30
  bl        0x1CEC
  mr        r3, r31
  li        r4, 0
  bl        -0x8D8EC
  mr        r3, r31
  li        r4, 0x1
  bl        -0x8D8F8
  mr        r3, r31
  li        r4, 0x2
  bl        -0x8D904
  mr        r3, r31
  li        r4, 0x3
  bl        -0x8D910
  lis       r4, 0x8048
  mr        r3, r31
  addi      r4, r4, 0x1AF0
  bl        -0x8D60C
  lwz       r3, 0xC(r31)
  lis       r4, 0x4
  lwz       r3, 0x0(r3)
  bl        -0x175E10
  lwz       r3, 0xC(r31)
  lis       r4, 0x4
  lwz       r3, 0x4(r3)
  bl        -0x175E20
  lwz       r3, 0xC(r31)
  lis       r4, 0x4
  lwz       r3, 0x8(r3)
  bl        -0x175E30
  lwz       r3, 0xC(r31)
  lis       r4, 0x4
  lwz       r3, 0xC(r3)
  bl        -0x175E40
  mr        r3, r31
  li        r4, 0x40
  lis       r5, 0x8
  bl        -0x8D13C
  addi      r3, r31, 0x18
  li        r4, 0x80
  bl        0x1890
  lis       r4, 0x8048
  lwz       r3, -0x6514(r13)
  addi      r4, r4, 0x1AE0
  bl        0x229C20
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F975C
 * Size:	00007C
 */
void Game::PelletNumber::Mgr::onCreateModel( (SysShape::Model *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0
  lwz       r3, 0x8(r31)
  bl        -0x193010
  lis       r4, 0x100
  lwz       r3, 0x8(r31)
  addi      r4, r4, 0x200
  bl        -0x1930B0
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
  bl        -0x192E94
  lwz       r3, 0x8(r31)
  bl        -0x192FCC
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F97D8
 * Size:	00003C
 */
void Game::PelletNumber::Mgr::generatorNewPelletParm(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0xC
  stw       r0, 0x14(r1)
  bl        -0x1D5944
  cmplwi    r3, 0
  beq-      .loc_0x2C
  li        r4, 0
  li        r0, 0x1
  stw       r4, 0x4(r3)
  stw       r0, 0x8(r3)

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F9814
 * Size:	0000D8
 */
void generatorBirth__Q34Game12PelletNumber3MgrFR10Vector3<float>R10Vector3<float>PQ24Game13GenPelletParm(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stfd      f31, 0x70(r1)
  psq_st    f31,0x78(r1),0,0
  stw       r31, 0x6C(r1)
  stw       r30, 0x68(r1)
  stw       r29, 0x64(r1)
  mr        r29, r4
  mr        r30, r5
  lwz       r4, 0x8(r6)
  addi      r3, r1, 0x38
  lwz       r5, 0x4(r6)
  bl        -0x92CD4
  lwz       r3, -0x6CE0(r13)
  addi      r4, r1, 0x38
  bl        -0x8C394
  mr.       r31, r3
  beq-      .loc_0xB0
  lwz       r3, -0x6CF8(r13)
  cmplwi    r3, 0
  beq-      .loc_0x84
  lwz       r12, 0x4(r3)
  mr        r4, r29
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  fmr       f31, f1
  mr        r3, r31
  bl        -0x92EB4
  lfs       f0, -0x4678(r2)
  fmadds    f0, f0, f1, f31
  stfs      f0, 0x4(r29)

.loc_0x84:
  mr        r3, r31
  mr        r4, r29
  li        r5, 0
  bl        -0xBE6FC
  mr        r4, r29
  mr        r5, r30
  addi      r3, r1, 0x8
  bl        0x22EFD4
  mr        r3, r31
  addi      r4, r1, 0x8
  bl        -0x913F4

.loc_0xB0:
  mr        r3, r31
  psq_l     f31,0x78(r1),0,0
  lwz       r0, 0x84(r1)
  lfd       f31, 0x70(r1)
  lwz       r31, 0x6C(r1)
  lwz       r30, 0x68(r1)
  lwz       r29, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	801F98EC
 * Size:	000054
 */
void Game::PelletNumber::Mgr::generatorWrite( (Stream &, Game::GenPelletParm *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r4
  mr        r3, r30
  lwz       r0, 0x4(r5)
  rlwinm    r4,r0,0,24,31
  bl        0x21BD5C
  lwz       r0, 0x8(r31)
  mr        r3, r30
  rlwinm    r4,r0,0,24,31
  bl        0x21BD4C
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
 * Address:	801F9940
 * Size:	0000C4
 */
void Game::PelletNumber::Mgr::generatorRead( (Stream &, Game::GenPelletParm *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r4
  mr        r3, r30
  bl        0x21AB3C
  rlwinm    r0,r3,0,24,31
  mr        r3, r30
  stw       r0, 0x4(r31)
  bl        0x21AB2C
  rlwinm    r0,r3,0,24,31
  stw       r0, 0x8(r31)
  lwz       r6, 0x8(r31)
  cmplwi    r6, 0x14
  bgt-      .loc_0x90
  lis       r3, 0x804C
  rlwinm    r0,r6,2,0,29
  subi      r3, r3, 0x2A90
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  li        r0, 0
  stw       r0, 0x0(r31)
  b         .loc_0xAC
  li        r0, 0x1
  stw       r0, 0x0(r31)
  b         .loc_0xAC
  li        r0, 0x2
  stw       r0, 0x0(r31)
  b         .loc_0xAC
  li        r0, 0x3
  stw       r0, 0x0(r31)
  b         .loc_0xAC

.loc_0x90:
  lis       r3, 0x8048
  lis       r4, 0x8048
  addi      r5, r4, 0x1B18
  addi      r3, r3, 0x1B04
  li        r4, 0x102
  crclr     6, 0x6
  bl        -0x1CF3A8

.loc_0xAC:
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
 * Address:	801F9A04
 * Size:	0001B4
 */
void Game::PelletNumber::Mgr::__dt(void)
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
  beq-      .loc_0x198
  lis       r3, 0x804C
  subi      r3, r3, 0x2A3C
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x98
  stw       r0, 0x54(r30)
  beq-      .loc_0x188
  lis       r3, 0x804C
  addic.    r0, r30, 0x70
  subi      r3, r3, 0x2868
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x98
  stw       r0, 0x54(r30)
  beq-      .loc_0xB8
  lis       r3, 0x804C
  addic.    r0, r30, 0x70
  subi      r3, r3, 0x28F4
  stw       r3, 0x70(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x8C(r30)
  beq-      .loc_0xB8
  lis       r3, 0x804C
  addic.    r0, r30, 0x70
  subi      r3, r3, 0x2970
  stw       r3, 0x70(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x8C(r30)
  beq-      .loc_0xB8
  lis       r3, 0x804C
  addic.    r0, r30, 0x70
  subi      r0, r3, 0x279C
  stw       r0, 0x70(r30)
  beq-      .loc_0xB8
  lis       r4, 0x804B
  addi      r3, r30, 0x70
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x70(r30)
  bl        0x217AD0

.loc_0xB8:
  addic.    r0, r30, 0x54
  beq-      .loc_0xEC
  lis       r3, 0x804C
  addic.    r0, r30, 0x54
  subi      r0, r3, 0x279C
  stw       r0, 0x54(r30)
  beq-      .loc_0xEC
  lis       r4, 0x804B
  addi      r3, r30, 0x54
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x54(r30)
  bl        0x217A9C

.loc_0xEC:
  cmplwi    r30, 0
  beq-      .loc_0x188
  lis       r3, 0x804B
  addic.    r0, r30, 0x18
  addi      r0, r3, 0x1CDC
  stw       r0, 0x0(r30)
  beq-      .loc_0x188
  lis       r3, 0x804B
  addic.    r0, r30, 0x18
  addi      r3, r3, 0x1EB4
  stw       r3, 0x18(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x34(r30)
  beq-      .loc_0x188
  lis       r3, 0x804B
  addic.    r0, r30, 0x18
  addi      r3, r3, 0x1E28
  stw       r3, 0x18(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x34(r30)
  beq-      .loc_0x188
  lis       r3, 0x804B
  addic.    r0, r30, 0x18
  addi      r3, r3, 0x1DAC
  stw       r3, 0x18(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x34(r30)
  beq-      .loc_0x188
  lis       r3, 0x804B
  addic.    r0, r30, 0x18
  addi      r0, r3, 0x1D80
  stw       r0, 0x18(r30)
  beq-      .loc_0x188
  lis       r4, 0x804B
  addi      r3, r30, 0x18
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x18(r30)
  bl        0x217A00

.loc_0x188:
  extsh.    r0, r31
  ble-      .loc_0x198
  mr        r3, r30
  bl        -0x1D5AE4

.loc_0x198:
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
 * Address:	801F9BB8
 * Size:	000008
 */
void Game::PelletNumber::Mgr::getMgrName(void)
{
/*
.loc_0x0:
  subi      r3, r2, 0x4674
  blr
*/
}

/*
 * --INFO--
 * Address:	801F9BC0
 * Size:	000008
 */
void Game::PelletNumber::Mgr::getMgrID(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801F9BC8
 * Size:	00000C
 */
void Game::PelletNumber::Mgr::generatorLocalVersion(void)
{
/*
.loc_0x0:
  lis       r3, 0x3030
  addi      r3, r3, 0x3030
  blr
*/
}

/*
 * --INFO--
 * Address:	801F9BD4
 * Size:	000088
 */
void ObjectMgr<Game::PelletNumber::Object>::~ObjectMgr()
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
  subi      r4, r4, 0x2970
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x2C
  stw       r0, 0x1C(r30)
  beq-      .loc_0x5C
  lis       r4, 0x804C
  subi      r0, r4, 0x279C
  stw       r0, 0x0(r30)
  beq-      .loc_0x5C
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x21795C

.loc_0x5C:
  extsh.    r0, r31
  ble-      .loc_0x6C
  mr        r3, r30
  bl        -0x1D5B88

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
 * Address:	801F9C5C
 * Size:	00000C
 */
void efx::ArgPelType::getName(void)
{
/*
.loc_0x0:
  lis       r3, 0x8048
  addi      r3, r3, 0x1B34
  blr
*/
}

/*
 * --INFO--
 * Address:	801F9C68
 * Size:	000008
 */
void Game::PelletNumber::Object::getKind(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801F9C70
 * Size:	00009C
 */
void resetMgrAndResources__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  li        r8, 0
  li        r9, 0
  mr        r7, r8
  mr        r6, r8
  mr        r5, r8
  mr        r4, r8
  b         .loc_0x68

.loc_0x40:
  lwz       r3, 0xC(r31)
  stwx      r7, r3, r8
  lwz       r3, 0x10(r31)
  stwx      r6, r3, r8
  lwz       r3, 0x14(r31)
  stwx      r5, r3, r8
  addi      r8, r8, 0x4
  lwz       r3, 0x4C(r31)
  stbx      r4, r3, r9
  addi      r9, r9, 0x1

.loc_0x68:
  lwz       r0, 0x50(r31)
  cmpw      r9, r0
  blt+      .loc_0x40
  lwz       r0, 0x48(r31)
  cmplwi    r0, 0
  beq-      .loc_0x88
  li        r0, 0
  stw       r0, 0x48(r31)

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
 * Address:	801F9D0C
 * Size:	000004
 */
void onCreateModel__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>FPQ28SysShape5Model(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F9D10
 * Size:	00002C
 */
void birth__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x70(r3)
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
 * Address:	801F9D3C
 * Size:	00002C
 */
void doAnimation__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x70(r3)
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
 * Address:	801F9D68
 * Size:	00002C
 */
void doEntry__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x70(r3)
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
 * Address:	801F9D94
 * Size:	00002C
 */
void doSetView__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>Fi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x70(r3)
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
 * Address:	801F9DC0
 * Size:	00002C
 */
void doViewCalc__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x70(r3)
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
 * Address:	801F9DEC
 * Size:	00002C
 */
void doSimulation__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>Ff(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x70(r3)
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
 * Address:	801F9E18
 * Size:	00002C
 */
void doDirectDraw__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>FR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x70(r3)
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
 * Address:	801F9E44
 * Size:	000024
 */
void kill__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>FPQ24Game6Pellet(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x70
  stw       r0, 0x14(r1)
  bl        0xCC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F9E68
 * Size:	00002C
 */
void getNext__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>FPv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x70(r3)
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
 * Address:	801F9E94
 * Size:	00002C
 */
void getStart__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x70(r3)
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
 * Address:	801F9EC0
 * Size:	000060
 */
void MonoObjectMgr<Game::PelletNumber::Object>::birth()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x494
  cmpwi     r3, -0x1
  beq-      .loc_0x48
  lwz       r6, 0x28(r31)
  li        r0, 0
  lwz       r4, 0x2C(r31)
  mulli     r5, r3, 0x45C
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
 * Address:	801F9F20
 * Size:	000054
 */
void MonoObjectMgr<Game::PelletNumber::Object>::kill(Game::PelletNumber::Object *)
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
  addi      r5, r5, 0x45C
  addi      r6, r6, 0x1
  bdnz+     .loc_0x18
  blr
*/
}

/*
 * --INFO--
 * Address:	801F9F74
 * Size:	000040
 */
void MonoObjectMgr<Game::PelletNumber::Object>::getNext(void *)
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
 * Address:	801F9FB4
 * Size:	000030
 */
void MonoObjectMgr<Game::PelletNumber::Object>::getStart()
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
 * Address:	801F9FE4
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletNumber::Object>::getEnd()
{
/*
.loc_0x0:
  lwz       r3, 0x24(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801F9FEC
 * Size:	000010
 */
void MonoObjectMgr<Game::PelletNumber::Object>::getAt(int)
{
/*
.loc_0x0:
  mulli     r0, r4, 0x45C
  lwz       r3, 0x28(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	801F9FFC
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletNumber::Object>::getTo()
{
/*
.loc_0x0:
  lwz       r3, 0x24(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801FA004
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletNumber::Object>::doAnimation()
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
  addi      r31, r31, 0x45C
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
 * Address:	801FA084
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletNumber::Object>::doEntry()
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
  addi      r31, r31, 0x45C
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
 * Address:	801FA104
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletNumber::Object>::doSetView(int)
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
  addi      r31, r31, 0x45C
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
 * Address:	801FA194
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletNumber::Object>::doViewCalc()
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
  addi      r31, r31, 0x45C
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
 * Address:	801FA214
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletNumber::Object>::doSimulation(float)
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
  addi      r31, r31, 0x45C
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
 * Address:	801FA2A4
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletNumber::Object>::doDirectDraw(Graphics &)
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
  addi      r31, r31, 0x45C
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
 * Address:	801FA334
 * Size:	000030
 */
void MonoObjectMgr<Game::PelletNumber::Object>::clearMgr()
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
 * Address:	801FA364
 * Size:	000004
 */
void MonoObjectMgr<Game::PelletNumber::Object>::onAlloc()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801FA368
 * Size:	00003C
 */
void MonoObjectMgr<Game::PelletNumber::Object>::getEmptyIndex()
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
 * Address:	801FA3A4
 * Size:	000010
 */
void MonoObjectMgr<Game::PelletNumber::Object>::get(void *)
{
/*
.loc_0x0:
  mulli     r0, r4, 0x45C
  lwz       r3, 0x28(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	801FA3B4
 * Size:	00002C
 */
void Container<Game::PelletNumber::Object>::getObject(void *)
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
 * Address:	801FA3E0
 * Size:	000008
 */
void Container<Game::PelletNumber::Object>::getAt(int)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801FA3E8
 * Size:	000008
 */
void Container<Game::PelletNumber::Object>::getTo()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801FA3F0
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletNumber::Object>::doDirectDraw(Graphics &)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804C
  stw       r0, 0x24(r1)
  li        r0, 0
  subi      r5, r5, 0x2548
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
 * Address:	801FA5E4
 * Size:	00004C
 */
void Iterator<Game::PelletNumber::Object>::isDone()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x4(r31)
  sub       r0, r3, r0
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801FA630
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletNumber::Object>::doSimulation(float)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804C
  stw       r0, 0x24(r1)
  li        r0, 0
  subi      r4, r4, 0x2548
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
 * Address:	801FA824
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletNumber::Object>::doViewCalc()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804C
  stw       r0, 0x24(r1)
  li        r0, 0
  subi      r4, r4, 0x2548
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
 * Address:	801FAA08
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletNumber::Object>::doSetView(int)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804C
  stw       r0, 0x24(r1)
  li        r0, 0
  subi      r5, r5, 0x2548
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
 * Address:	801FABFC
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletNumber::Object>::doEntry()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804C
  stw       r0, 0x24(r1)
  li        r0, 0
  subi      r4, r4, 0x2548
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
 * Address:	801FADE0
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletNumber::Object>::doAnimation()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804C
  stw       r0, 0x24(r1)
  li        r0, 0
  subi      r4, r4, 0x2548
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
 * Address:	801FAFC4
 * Size:	00018C
 */
void MonoObjectMgr<CollPart>::alloc(int)
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
  mulli     r3, r29, 0x64
  stw       r28, 0x10(r1)
  addi      r3, r3, 0x10
  bl        -0x1D7048
  lis       r4, 0x8013
  lis       r5, 0x8014
  addi      r4, r4, 0x6CD8
  mr        r7, r29
  subi      r5, r5, 0x7B98
  li        r6, 0x64
  bl        -0x139620
  stw       r3, 0x28(r30)
  li        r0, 0
  mr        r3, r29
  stw       r31, 0x24(r30)
  stw       r0, 0x20(r30)
  bl        -0x1D707C
  cmpwi     r31, 0
  stw       r3, 0x2C(r30)
  li        r11, 0
  ble-      .loc_0x124
  cmpwi     r31, 0x8
  subi      r3, r31, 0x8
  ble-      .loc_0x100
  addi      r0, r3, 0x7
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r3, 0
  ble-      .loc_0x100

.loc_0x98:
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
  bdnz+     .loc_0x98

.loc_0x100:
  sub       r0, r31, r11
  li        r4, 0x1
  mtctr     r0
  cmpw      r11, r31
  bge-      .loc_0x124

.loc_0x114:
  lwz       r3, 0x2C(r30)
  stbx      r4, r3, r11
  addi      r11, r11, 0x1
  bdnz+     .loc_0x114

.loc_0x124:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  li        r28, 0
  li        r29, 0
  b         .loc_0x164

.loc_0x144:
  lwz       r0, 0x28(r30)
  add       r3, r0, r29
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  addi      r29, r29, 0x64
  addi      r28, r28, 0x1

.loc_0x164:
  cmpw      r28, r31
  blt+      .loc_0x144
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
 * Address:	801FB150
 * Size:	00009C
 */
void MonoObjectMgr<Game::PelletNumber::Object>::MonoObjectMgr()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x21622C
  lis       r4, 0x804B
  lis       r3, 0x804C
  subi      r0, r4, 0x5324
  lis       r6, 0x804B
  stw       r0, 0x0(r31)
  subi      r0, r3, 0x279C
  lis       r4, 0x804C
  lis       r3, 0x804C
  stw       r0, 0x0(r31)
  li        r8, 0
  subi      r7, r4, 0x2970
  subi      r5, r3, 0x28F4
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
 * Address:	801FB1EC
 * Size:	000020
 */
void getFlag__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>FPQ24Game6Pellet(void)
{
/*
.loc_0x0:
  cmplwi    r4, 0
  beq-      .loc_0x18
  lwz       r3, 0x9C(r3)
  lwz       r0, 0x440(r4)
  lbzx      r3, r3, r0
  blr       

.loc_0x18:
  li        r3, -0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	801FB20C
 * Size:	00001C
 */
void setFromTeki__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>FPQ24Game6Pellet(void)
{
/*
.loc_0x0:
  cmplwi    r4, 0
  beqlr-    
  lwz       r3, 0x9C(r3)
  li        r5, 0x65
  lwz       r0, 0x440(r4)
  stbx      r5, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	801FB228
 * Size:	00001C
 */
void setRevival__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>FPQ24Game6Pellet(void)
{
/*
.loc_0x0:
  cmplwi    r4, 0
  beqlr-    
  lwz       r3, 0x9C(r3)
  li        r5, 0x64
  lwz       r0, 0x440(r4)
  stbx      r5, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	801FB244
 * Size:	00001C
 */
void setComeAlive__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>FPQ24Game6Pellet(void)
{
/*
.loc_0x0:
  cmplwi    r4, 0
  beqlr-    
  lwz       r3, 0x9C(r3)
  li        r5, 0
  lwz       r0, 0x440(r4)
  stbx      r5, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	801FB260
 * Size:	000010
 */
void setComeAlive__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>Fi(void)
{
/*
.loc_0x0:
  lwz       r3, 0x9C(r3)
  li        r0, 0
  stbx      r0, r3, r4
  blr
*/
}

/*
 * --INFO--
 * Address:	801FB270
 * Size:	00002C
 */
void getEnd__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x70(r3)
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
 * Address:	801FB29C
 * Size:	00002C
 */
void get__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>FPv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x70(r3)
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
 * Address:	801FB2C8
 * Size:	00002C
 */
void getObjectPtr__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>FPv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC4(r12)
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
 * Address:	801FB2F4
 * Size:	000090
 */
void birthFromTeki__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>FPQ24Game12PelletConfig(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  b         .loc_0x64

.loc_0x28:
  lwz       r3, 0x9C(r29)
  lbzx      r0, r3, r31
  cmplwi    r0, 0x65
  bne-      .loc_0x60
  addi      r3, r29, 0x70
  mr        r4, r31
  lwz       r12, 0x70(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x35C(r3)
  cmplw     r0, r30
  bne-      .loc_0x60
  b         .loc_0x74

.loc_0x60:
  addi      r31, r31, 0x1

.loc_0x64:
  lwz       r0, 0x94(r29)
  cmpw      r31, r0
  blt+      .loc_0x28
  li        r3, 0

.loc_0x74:
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
 * Address:	801FB384
 * Size:	000080
 */
void alloc__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>Fi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  addi      r3, r30, 0x70
  bl        0x2C0
  mr        r3, r30
  bl        0x254
  li        r31, 0
  b         .loc_0x5C

.loc_0x30:
  addi      r3, r30, 0x70
  mr        r4, r31
  lwz       r12, 0x70(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x1

.loc_0x5C:
  lwz       r0, 0x94(r30)
  cmpw      r31, r0
  blt+      .loc_0x30
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
 * Address:	801FB404
 * Size:	000038
 */
void Iterator<Game::PelletNumber::Object>::operator* ()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, 0x8(r3)
  lwz       r4, 0x4(r4)
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
 * Address:	801FB43C
 * Size:	0000E4
 */
void Iterator<Game::PelletNumber::Object>::next()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0xC(r3)
  cmplwi    r0, 0
  bne-      .loc_0x40
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)
  b         .loc_0xD0

.loc_0x40:
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)
  b         .loc_0xB4

.loc_0x60:
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0xC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xD0
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)

.loc_0xB4:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x60

.loc_0xD0:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801FB520
 * Size:	0000DC
 */
void Iterator<Game::PelletNumber::Object>::first()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0xC(r3)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  lwz       r3, 0x8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)
  b         .loc_0xC8

.loc_0x3C:
  lwz       r3, 0x8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)
  b         .loc_0xAC

.loc_0x58:
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0xC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xC8
  lwz       r3, 0x8(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r31)

.loc_0xAC:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x58

.loc_0xC8:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801FB5FC
 * Size:	000064
 */
void onAlloc__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>Fv(void)
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
  addi      r3, r30, 0x70
  mr        r4, r31
  lwz       r12, 0x70(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  stw       r31, 0x440(r3)
  addi      r31, r31, 0x1

.loc_0x40:
  lwz       r0, 0x94(r30)
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
 * Address:	801FB660
 * Size:	000188
 */
void MonoObjectMgr<Game::PelletNumber::Object>::alloc(int)
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
  mulli     r3, r29, 0x45C
  stw       r28, 0x10(r1)
  addi      r3, r3, 0x10
  bl        -0x1D76E4
  lis       r4, 0x8020
  mr        r7, r29
  subi      r4, r4, 0x4818
  li        r5, 0
  li        r6, 0x45C
  bl        -0x139CB8
  stw       r3, 0x28(r30)
  li        r0, 0
  mr        r3, r29
  stw       r31, 0x24(r30)
  stw       r0, 0x20(r30)
  bl        -0x1D7714
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
  addi      r29, r29, 0x45C
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
 * Address:	801FB7E8
 * Size:	00004C
 */
void Game::PelletNumber::Object::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x9517C
  lis       r4, 0x804C
  mr        r3, r31
  subi      r5, r4, 0x2764
  stw       r5, 0x0(r31)
  addi      r4, r5, 0x1B4
  addi      r0, r5, 0x1C0
  stw       r4, 0x314(r31)
  stw       r0, 0x318(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801FB834
 * Size:	000008
 */
void @84@__dt__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>Fv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x54
  b         -0x247C
*/
}

/*
 * --INFO--
 * Address:	801FB83C
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletNumber::Object>::@28@resetMgr()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x8B628
*/
}

/*
 * --INFO--
 * Address:	801FB844
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletNumber::Object>::@28@doDirectDraw(Graphics &)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x15A4
*/
}

/*
 * --INFO--
 * Address:	801FB84C
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletNumber::Object>::@28@doSimulation(float)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x163C
*/
}

/*
 * --INFO--
 * Address:	801FB854
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletNumber::Object>::@28@doViewCalc()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x16C4
*/
}

/*
 * --INFO--
 * Address:	801FB85C
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletNumber::Object>::@28@doSetView(int)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x175C
*/
}

/*
 * --INFO--
 * Address:	801FB864
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletNumber::Object>::@28@doEntry()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x17E4
*/
}

/*
 * --INFO--
 * Address:	801FB86C
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletNumber::Object>::@28@doAnimation()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x186C
*/
}

/*
 * --INFO--
 * Address:	801FB874
 * Size:	000008
 */
void ObjectMgr<Game::PelletNumber::Object>::@28@doDirectDraw(Graphics &)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1488
*/
}

/*
 * --INFO--
 * Address:	801FB87C
 * Size:	000008
 */
void ObjectMgr<Game::PelletNumber::Object>::@28@doSimulation(float)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1250
*/
}

/*
 * --INFO--
 * Address:	801FB884
 * Size:	000008
 */
void ObjectMgr<Game::PelletNumber::Object>::@28@doViewCalc()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x1064
*/
}

/*
 * --INFO--
 * Address:	801FB88C
 * Size:	000008
 */
void ObjectMgr<Game::PelletNumber::Object>::@28@doSetView(int)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0xE88
*/
}

/*
 * --INFO--
 * Address:	801FB894
 * Size:	000008
 */
void ObjectMgr<Game::PelletNumber::Object>::@28@doEntry()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0xC9C
*/
}

/*
 * --INFO--
 * Address:	801FB89C
 * Size:	000008
 */
void ObjectMgr<Game::PelletNumber::Object>::@28@doAnimation()
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0xAC0
*/
}

/*
 * --INFO--
 * Address:	801FB8A4
 * Size:	000008
 */
void @84@getEnd__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>Fv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x54
  b         -0x638
*/
}

/*
 * --INFO--
 * Address:	801FB8AC
 * Size:	000008
 */
void @84@getStart__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>Fv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x54
  b         -0x1A1C
*/
}

/*
 * --INFO--
 * Address:	801FB8B4
 * Size:	000008
 */
void @84@getNext__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>FPv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x54
  b         -0x1A50
*/
}

/*
 * --INFO--
 * Address:	801FB8BC
 * Size:	000008
 */
void @84@get__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object>FPv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x54
  b         -0x624
*/
}

/*
 * --INFO--
 * Address:	801FB8C4
 * Size:	000008
 */
void @84@Game::PelletNumber::Mgr::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x54
  b         -0x1EC4
*/
}
