

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
 * Address:	802B5E98
 * Size:	000050
 */
void Game::OtakaraBase::Mgr::__ct( (int, unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x187218
  lis       r3, 0x804D
  lis       r4, 0x8049
  subi      r5, r3, 0x1070
  mr        r3, r31
  stw       r5, 0x0(r31)
  addi      r5, r5, 0x38
  subi      r0, r4, 0x5CB4
  stw       r5, 0x4(r31)
  stw       r0, 0x18(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802B5EE8
 * Size:	0000BC
 */
void Game::OtakaraBase::Mgr::loadModelData(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x34(r1)
  subi      r7, r4, 0x5C9C
  stw       r31, 0x2C(r1)
  addi      r31, r1, 0x8
  stw       r30, 0x28(r1)
  li        r30, 0
  stw       r29, 0x24(r1)
  mr        r29, r3
  lwz       r6, 0x0(r7)
  lwz       r5, 0x4(r7)
  lwz       r4, 0x8(r7)
  lwz       r3, 0xC(r7)
  lwz       r0, 0x10(r7)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r4, 0x10(r1)
  stw       r3, 0x14(r1)
  stw       r0, 0x18(r1)

.loc_0x54:
  lwz       r3, -0x6E20(r13)
  lwz       r4, 0x0(r31)
  bl        -0x1A82A0
  cmplwi    r3, 0
  beq-      .loc_0x88
  lwz       r12, 0x0(r3)
  lwz       r12, 0x74(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x88
  stw       r3, 0x1C(r29)
  b         .loc_0xA0

.loc_0x88:
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x5
  blt+      .loc_0x54
  mr        r3, r29
  bl        -0x185E78

.loc_0xA0:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802B5FA4
 * Size:	0000B0
 */
void Game::OtakaraBase::Mgr::loadAnimData(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x34(r1)
  subi      r7, r4, 0x5C88
  stw       r31, 0x2C(r1)
  addi      r31, r1, 0x8
  stw       r30, 0x28(r1)
  li        r30, 0
  stw       r29, 0x24(r1)
  mr        r29, r3
  lwz       r6, 0x0(r7)
  lwz       r5, 0x4(r7)
  lwz       r4, 0x8(r7)
  lwz       r3, 0xC(r7)
  lwz       r0, 0x10(r7)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r4, 0x10(r1)
  stw       r3, 0x14(r1)
  stw       r0, 0x18(r1)

.loc_0x54:
  lwz       r3, -0x6E20(r13)
  lwz       r4, 0x0(r31)
  bl        -0x1A835C
  cmplwi    r3, 0
  beq-      .loc_0x7C
  lwz       r0, 0x20(r3)
  cmplwi    r0, 0
  beq-      .loc_0x7C
  stw       r0, 0x20(r29)
  b         .loc_0x94

.loc_0x7C:
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x5
  blt+      .loc_0x54
  mr        r3, r29
  bl        -0x185E68

.loc_0x94:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6054
 * Size:	000138
 */
void Game::OtakaraBase::Mgr::createModel(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  subi      r31, r4, 0x5CC8
  stw       r30, 0x48(r1)
  stw       r29, 0x44(r1)
  stw       r28, 0x40(r1)
  mr        r28, r3
  li        r3, 0x14
  bl        -0x2921DC
  mr.       r30, r3
  beq-      .loc_0x4C
  lwz       r4, 0x1C(r28)
  lis       r5, 0x8
  lbz       r6, 0x24(r28)
  bl        0x188140
  mr        r30, r3

.loc_0x4C:
  cmplwi    r30, 0
  bne-      .loc_0x68
  addi      r3, r31, 0x54
  addi      r5, r31, 0x68
  li        r4, 0x88
  crclr     6, 0x6
  bl        -0x28BA78

.loc_0x68:
  li        r29, 0
  b         .loc_0xAC

.loc_0x70:
  lwz       r3, 0x64(r4)
  mr        r4, r29
  bl        -0x2872B0
  addi      r4, r31, 0x74
  bl        -0x1EBA14
  cmpwi     r3, 0
  bne-      .loc_0xA8
  lwz       r4, 0x8(r30)
  rlwinm    r3,r29,6,10,25
  addi      r0, r3, 0x2C
  lwz       r3, 0xC0(r4)
  lis       r4, 0x402
  lwzx      r3, r3, r0
  bl        -0x255E20

.loc_0xA8:
  addi      r29, r29, 0x1

.loc_0xAC:
  lwz       r4, 0x1C(r28)
  rlwinm    r0,r29,0,16,31
  lhz       r3, 0x5C(r4)
  cmplw     r0, r3
  blt+      .loc_0x70
  addi      r3, r1, 0x8
  bl        -0x1CBE78
  lis       r4, 0x8051
  addi      r3, r1, 0x8
  subi      r4, r4, 0xDD0
  bl        -0x1CBE5C
  lwz       r31, 0x8(r30)
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  bl        -0x24F838
  mr        r3, r31
  bl        -0x24F970
  lwz       r0, 0x54(r1)
  mr        r3, r30
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  lwz       r29, 0x44(r1)
  lwz       r28, 0x40(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802B618C
 * Size:	0000B0
 */
void Game::OtakaraBase::Mgr::__dt(void)
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
  beq-      .loc_0x94
  lis       r3, 0x804D
  subi      r3, r3, 0x1070
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x84
  lis       r3, 0x804B
  subi      r3, r3, 0x760
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x84
  lis       r3, 0x804B
  addic.    r0, r30, 0x4
  subi      r3, r3, 0x5304
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x84
  lis       r4, 0x804B
  addi      r3, r30, 0x4
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x4(r30)
  bl        0x15B37C

.loc_0x84:
  extsh.    r0, r31
  ble-      .loc_0x94
  mr        r3, r30
  bl        -0x292168

.loc_0x94:
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
 * Address:	802B623C
 * Size:	000008
 */
void Game::OtakaraBase::Mgr::getEnemyTypeID(void)
{
/*
.loc_0x0:
  li        r3, 0x3B
  blr
*/
}

/*
 * --INFO--
 * Address:	802B6244
 * Size:	000008
 */
void @4@Game::OtakaraBase::Mgr::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0xBC
*/
}
