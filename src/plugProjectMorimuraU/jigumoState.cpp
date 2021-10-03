

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
 * Address:	80365FF4
 * Size:	000204
 */
void Game::Jigumo::FSM::init( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0xD
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2357A8
  li        r3, 0x10
  bl        -0x342170
  mr.       r4, r3
  beq-      .loc_0x38
  li        r4, 0
  bl        .loc_0x204
  mr        r4, r3

.loc_0x38:
  mr        r3, r31
  bl        -0x235728
  li        r3, 0x14
  bl        -0x342194
  mr.       r4, r3
  beq-      .loc_0x5C
  li        r4, 0x1
  bl        0x34C
  mr        r4, r3

.loc_0x5C:
  mr        r3, r31
  bl        -0x23574C
  li        r3, 0x10
  bl        -0x3421B8
  mr.       r4, r3
  beq-      .loc_0x80
  li        r4, 0x2
  bl        0x7C0
  mr        r4, r3

.loc_0x80:
  mr        r3, r31
  bl        -0x235770
  li        r3, 0x10
  bl        -0x3421DC
  mr.       r4, r3
  beq-      .loc_0xA4
  li        r4, 0x3
  bl        0xA70
  mr        r4, r3

.loc_0xA4:
  mr        r3, r31
  bl        -0x235794
  li        r3, 0x14
  bl        -0x342200
  mr.       r4, r3
  beq-      .loc_0xC8
  li        r4, 0x4
  bl        0xBA4
  mr        r4, r3

.loc_0xC8:
  mr        r3, r31
  bl        -0x2357B8
  li        r3, 0x14
  bl        -0x342224
  mr.       r4, r3
  beq-      .loc_0xEC
  li        r4, 0x5
  bl        0x1154
  mr        r4, r3

.loc_0xEC:
  mr        r3, r31
  bl        -0x2357DC
  li        r3, 0x10
  bl        -0x342248
  mr.       r4, r3
  beq-      .loc_0x110
  li        r4, 0x6
  bl        0x13B8
  mr        r4, r3

.loc_0x110:
  mr        r3, r31
  bl        -0x235800
  li        r3, 0x10
  bl        -0x34226C
  mr.       r4, r3
  beq-      .loc_0x134
  li        r4, 0x7
  bl        0x15B0
  mr        r4, r3

.loc_0x134:
  mr        r3, r31
  bl        -0x235824
  li        r3, 0x10
  bl        -0x342290
  mr.       r4, r3
  beq-      .loc_0x158
  li        r4, 0x8
  bl        0x17C4
  mr        r4, r3

.loc_0x158:
  mr        r3, r31
  bl        -0x235848
  li        r3, 0x10
  bl        -0x3422B4
  mr.       r4, r3
  beq-      .loc_0x17C
  li        r4, 0x9
  bl        0x19A4
  mr        r4, r3

.loc_0x17C:
  mr        r3, r31
  bl        -0x23586C
  li        r3, 0x14
  bl        -0x3422D8
  mr.       r4, r3
  beq-      .loc_0x1A0
  li        r4, 0xA
  bl        0x1B34
  mr        r4, r3

.loc_0x1A0:
  mr        r3, r31
  bl        -0x235890
  li        r3, 0x14
  bl        -0x3422FC
  mr.       r4, r3
  beq-      .loc_0x1C4
  li        r4, 0xB
  bl        0x21E8
  mr        r4, r3

.loc_0x1C4:
  mr        r3, r31
  bl        -0x2358B4
  li        r3, 0x10
  bl        -0x342320
  mr.       r4, r3
  beq-      .loc_0x1E8
  li        r4, 0xC
  bl        0x24B4
  mr        r4, r3

.loc_0x1E8:
  mr        r3, r31
  bl        -0x2358D8
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x204:
*/
}

/*
 * --INFO--
 * Address:	803661F8
 * Size:	00003C
 */
void Game::Jigumo::StateWait::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2AF4
  addi      r5, r5, 0x2AD0
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x510
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80366234
 * Size:	000060
 */
void Game::Jigumo::StateWait::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0xF
  mr        r3, r31
  bl        -0x261250
  lfs       f0, 0x198(r31)
  li        r3, 0
  li        r0, -0x1
  stfs      f0, 0x18C(r31)
  lfs       f0, 0x19C(r31)
  stfs      f0, 0x190(r31)
  lfs       f0, 0x1A0(r31)
  stfs      f0, 0x194(r31)
  stw       r3, 0x230(r31)
  stw       r0, 0x2D4(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80366294
 * Size:	000100
 */
void Game::Jigumo::StateWait::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  mr        r30, r4
  stw       r29, 0x24(r1)
  mr        r29, r3
  lwz       r0, 0x2D4(r4)
  cmpwi     r0, 0
  bge-      .loc_0xA8
  lwz       r4, 0xC0(r30)
  mr        r3, r30
  lfs       f1, 0x424(r4)
  lfs       f2, 0x3D4(r4)
  bl        0x57C4
  mr.       r31, r3
  beq-      .loc_0x90
  stw       r31, 0x230(r30)
  mr        r3, r30
  bl        -0x261044
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0xC(r1)
  li        r0, 0xA
  lfs       f2, 0x10(r1)
  lfs       f0, 0x8(r1)
  stfs      f0, 0x2C8(r30)
  stfs      f1, 0x2CC(r30)
  stfs      f2, 0x2D0(r30)
  stw       r0, 0x2D4(r30)
  b         .loc_0xA8

.loc_0x90:
  mr        r3, r30
  bl        -0x261088
  li        r3, 0x1
  li        r0, 0x2
  stb       r3, 0x2E8(r30)
  stw       r0, 0x2D4(r30)

.loc_0xA8:
  lwz       r3, 0x188(r30)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0xE4
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0xE4
  mr        r3, r29
  mr        r4, r30
  lwz       r12, 0x0(r29)
  li        r6, 0
  lwz       r5, 0x2D4(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xE4:
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
 * Address:	80366394
 * Size:	00003C
 */
void Game::Jigumo::StateAppear::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2AF4
  addi      r5, r5, 0x2AAC
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x518
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803663D0
 * Size:	000138
 */
void Game::Jigumo::StateAppear::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r3, r31
  bl        -0x2613F4
  mr        r3, r31
  bl        -0x25F120
  mr        r3, r31
  bl        -0x25EC8C
  mr        r3, r31
  li        r4, 0
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  li        r4, 0
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x520(r2)
  lis       r3, 0x626F
  li        r0, 0
  stfs      f0, 0x20C(r31)
  addi      r4, r3, 0x6479
  lwz       r3, 0x1E0(r31)
  oris      r3, r3, 0x40
  stw       r3, 0x1E0(r31)
  lfs       f0, 0x198(r31)
  stfs      f0, 0x18C(r31)
  lfs       f0, 0x19C(r31)
  stfs      f0, 0x190(r31)
  lfs       f0, 0x1A0(r31)
  stfs      f0, 0x194(r31)
  stb       r0, 0x2E8(r31)
  lwz       r3, 0x114(r31)
  bl        -0x230638
  lis       r4, 0x5F5F
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0xACF78
  lis       r4, 0x6865
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x6164
  bl        -0x230658
  lis       r4, 0x5F5F
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0xACF58
  li        r0, 0
  lfs       f0, 0x524(r2)
  stb       r0, 0x384(r31)
  lfs       f2, 0x200(r31)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x118
  lfs       f1, 0x528(r2)
  lfs       f0, 0x520(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x200(r31)
  stfs      f0, 0x208(r31)
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,31,29
  stw       r0, 0x1E0(r31)

.loc_0x118:
  li        r0, 0
  stw       r0, 0x10(r30)
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
 * Address:	80366508
 * Size:	000324
 */
void Game::Jigumo::StateAppear::exec( (Game::EnemyBase *))
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
  mr        r30, r3
  mr        r31, r4
  lwz       r3, 0x10(r3)
  addi      r0, r3, 0x1
  stw       r0, 0x10(r30)
  lwz       r3, 0xC0(r4)
  lwz       r4, 0x10(r30)
  lwz       r0, 0x8E4(r3)
  cmpw      r4, r0
  ble-      .loc_0x304
  mr        r3, r31
  bl        -0x25F218
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x21C
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  lfs       f31, 0x35C(r5)
  fmr       f1, f31
  bl        -0x251AB0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x7C
  li        r0, 0x1
  b         .loc_0xA0

.loc_0x7C:
  fmr       f1, f31
  mr        r3, r31
  li        r4, 0
  bl        -0x251E5C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x9C
  li        r0, 0x1
  b         .loc_0xA0

.loc_0x9C:
  li        r0, 0

.loc_0xA0:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x304
  mr        r3, r31
  bl        -0x25F3B0
  mr        r4, r31
  addi      r3, r1, 0x44
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x44(r1)
  addi      r5, r1, 0x5C
  lfs       f1, 0x48(r1)
  li        r4, 0x8
  lfs       f0, 0x4C(r1)
  li        r6, 0x2
  stfs      f2, 0x5C(r1)
  lwz       r3, -0x6958(r13)
  stfs      f1, 0x60(r1)
  stfs      f0, 0x64(r1)
  bl        -0x112E78
  fmr       f2, f31
  lfs       f1, 0x52C(r2)
  mr        r3, r31
  bl        0x548C
  cmplwi    r3, 0
  stw       r3, 0x230(r31)
  beq-      .loc_0x304
  mr        r4, r3
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
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
  bl        -0x331588
  bl        0xAB53C
  lwz       r12, 0x0(r31)
  fmr       f31, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f31
  bl        0xAB544
  lfs       f0, 0x524(r2)
  lfs       f2, 0x530(r2)
  fmuls     f31, f1, f0
  fabs      f0, f31
  frsp      f0, f0
  fcmpo     cr0, f0, f2
  ble-      .loc_0x1E8
  lfs       f0, 0x520(r2)
  fcmpo     cr0, f31, f0
  ble-      .loc_0x1E4
  fmr       f31, f2
  b         .loc_0x1E8

.loc_0x1E4:
  fneg      f31, f2

.loc_0x1E8:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f31, f1
  bl        0xAB4C8
  stfs      f1, 0x1FC(r31)
  lfs       f0, 0x1FC(r31)
  stfs      f0, 0x1A8(r31)
  lfs       f0, 0x1FC(r31)
  stfs      f0, 0x2EC(r31)
  b         .loc_0x304

.loc_0x21C:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x304
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x2
  bne-      .loc_0x2B0
  lwz       r0, 0x280(r31)
  cmplwi    r0, 0
  beq-      .loc_0x25C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x250(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2A4

.loc_0x25C:
  mr        r4, r31
  addi      r3, r1, 0x38
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x38(r1)
  mr        r3, r31
  lfs       f2, 0x3C(r1)
  addi      r4, r1, 0x50
  lfs       f0, 0x40(r1)
  stfs      f1, 0x50(r1)
  lfs       f1, 0x534(r2)
  stfs      f2, 0x54(r1)
  stfs      f0, 0x58(r1)
  lfs       f0, 0x1F8(r31)
  fmuls     f1, f1, f0
  bl        -0x262E68

.loc_0x2A4:
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,10,8
  stw       r0, 0x1E0(r31)

.loc_0x2B0:
  lwz       r3, 0x188(r31)
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x304
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  li        r4, 0x1
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r31)
  ori       r0, r0, 0x800
  stw       r0, 0x1E0(r31)

.loc_0x304:
  psq_l     f31,0x78(r1),0,0
  lwz       r0, 0x84(r1)
  lfd       f31, 0x70(r1)
  lwz       r31, 0x6C(r1)
  lwz       r30, 0x68(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	8036682C
 * Size:	00003C
 */
void Game::Jigumo::StateHide::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2AF4
  addi      r5, r5, 0x2A88
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x538
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80366868
 * Size:	000128
 */
void Game::Jigumo::StateHide::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  lbz       r0, 0x2E8(r4)
  cmplwi    r0, 0
  beq-      .loc_0x34
  mr        r3, r31
  li        r4, 0x7
  li        r5, 0
  bl        -0x261890
  b         .loc_0x44

.loc_0x34:
  mr        r3, r31
  li        r4, 0x8
  li        r5, 0
  bl        -0x2618A4

.loc_0x44:
  lfs       f1, 0x18C(r31)
  mr        r3, r31
  lfs       f0, 0x520(r2)
  stfs      f1, 0x2BC(r31)
  lfs       f1, 0x190(r31)
  stfs      f1, 0x2C0(r31)
  lfs       f1, 0x194(r31)
  stfs      f1, 0x2C4(r31)
  stfs      f0, 0x1C8(r31)
  stfs      f0, 0x1CC(r31)
  stfs      f0, 0x1D0(r31)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x25F168
  mr        r3, r31
  li        r4, 0
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x626F
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x6479
  bl        -0x230AC8
  lis       r4, 0x5F5F
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0xACAE8
  lis       r4, 0x6865
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x6164
  bl        -0x230AE8
  lis       r4, 0x5F5F
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0xACAC8
  li        r0, 0
  lfs       f4, 0x540(r2)
  stb       r0, 0x384(r31)
  mr        r3, r31
  li        r4, 0
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,21,19
  stw       r0, 0x1E0(r31)
  lwz       r5, 0xC0(r31)
  lfs       f1, 0x53C(r5)
  lfs       f2, 0x4C4(r5)
  lfs       f3, 0x4EC(r5)
  bl        -0x253854
  mr        r3, r31
  bl        -0x264FFC
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80366990
 * Size:	000170
 */
void Game::Jigumo::StateHide::exec( (Game::EnemyBase *))
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
  lbz       r0, 0x2E8(r4)
  cmplwi    r0, 0
  bne-      .loc_0x40
  mr        r3, r31
  bl        -0x261750
  lfs       f0, 0x544(r2)
  mr        r3, r31
  fmuls     f1, f0, f1
  bl        0x4F7C

.loc_0x40:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x158
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x158
  lwz       r0, 0x1E0(r31)
  mr        r3, r31
  ori       r0, r0, 0x40
  stw       r0, 0x1E0(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x254(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x280(r31)
  cmplwi    r0, 0
  beq-      .loc_0x104
  lis       r3, 0x804B
  lis       r4, 0x804E
  subi      r0, r3, 0x5808
  lis       r3, 0x804D
  stw       r0, 0x24(r1)
  addi      r0, r4, 0x6A78
  li        r6, 0xC1
  li        r5, 0
  stw       r0, 0x24(r1)
  addi      r0, r3, 0x4F68
  mr        r4, r31
  addi      r3, r1, 0x8
  sth       r6, 0x28(r1)
  stw       r5, 0x2C(r1)
  stw       r0, 0x24(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  lis       r3, 0x804B
  lfs       f1, 0xC(r1)
  subi      r0, r3, 0x5814
  lfs       f0, 0x10(r1)
  addi      r3, r1, 0x24
  stw       r0, 0x14(r1)
  addi      r4, r1, 0x14
  stfs      f2, 0x18(r1)
  stfs      f1, 0x1C(r1)
  stfs      f0, 0x20(r1)
  bl        0x484F4

.loc_0x104:
  lfs       f1, 0x548(r2)
  lfs       f0, 0x1FC(r31)
  fadds     f1, f1, f0
  bl        0xAB130
  stfs      f1, 0x2EC(r31)
  mr        r3, r30
  lfs       f0, 0x520(r2)
  mr        r4, r31
  lfs       f1, 0x198(r31)
  li        r5, 0x1
  li        r6, 0
  stfs      f1, 0x2C8(r31)
  lfs       f1, 0x19C(r31)
  stfs      f1, 0x2CC(r31)
  lfs       f1, 0x1A0(r31)
  stfs      f1, 0x2D0(r31)
  stfs      f0, 0x344(r31)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x158:
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
 * Address:	80366B00
 * Size:	00003C
 */
void Game::Jigumo::StateDead::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2AF4
  addi      r5, r5, 0x2A64
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x54C
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80366B3C
 * Size:	00005C
 */
void Game::Jigumo::StateDead::init( (Game::EnemyBase *, Game::StateArg *))
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
  mr        r3, r31
  bl        -0x261B58
  lfs       f0, 0x520(r2)
  mr        r3, r31
  stfs      f0, 0x1C8(r31)
  stfs      f0, 0x1CC(r31)
  stfs      f0, 0x1D0(r31)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  bl        -0x261460
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80366B98
 * Size:	0000C0
 */
void Game::Jigumo::StateDead::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r4
  lwz       r3, 0x188(r4)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0xAC
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x2
  bne-      .loc_0x90
  mr        r3, r31
  bl        0x51BC
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
  bl        -0x1149D4
  lwz       r3, -0x6958(r13)
  addi      r5, r1, 0x14
  li        r4, 0x8
  li        r6, 0x2
  bl        -0x1134A4

.loc_0x90:
  lwz       r3, 0x188(r31)
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0xAC
  mr        r3, r31
  li        r4, 0
  bl        -0x22BB50

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
 * Address:	80366C58
 * Size:	00003C
 */
void Game::Jigumo::StateAttack::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2AF4
  addi      r5, r5, 0x2A40
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x554
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80366C94
 * Size:	0000BC
 */
void Game::Jigumo::StateAttack::init( (Game::EnemyBase *, Game::StateArg *))
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
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r3, r31
  bl        -0x261CB8
  lwz       r0, 0x1E0(r31)
  lis       r3, 0x626F
  li        r6, 0x5
  li        r5, 0
  rlwinm    r4,r0,0,26,24
  li        r0, 0x1
  stw       r4, 0x1E0(r31)
  addi      r4, r3, 0x6479
  stw       r6, 0x2D4(r31)
  stb       r5, 0x2E8(r31)
  stb       r5, 0x10(r30)
  stb       r0, 0x11(r30)
  lwz       r3, 0x114(r31)
  bl        -0x230EB0
  lis       r4, 0x7374
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0xAC700
  lis       r4, 0x6865
  lwz       r3, 0x114(r31)
  addi      r4, r4, 0x6164
  bl        -0x230ED0
  lis       r4, 0x5F74
  addi      r3, r3, 0x3C
  addi      r4, r4, 0x5F5F
  bl        0xAC6E0
  li        r0, 0x1
  mr        r3, r31
  stb       r0, 0x384(r31)
  bl        -0x265368
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
 * Address:	80366D50
 * Size:	000488
 */
void Game::Jigumo::StateAttack::exec( (Game::EnemyBase *))
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
  stw       r29, 0x94(r1)
  mr        r30, r3
  mr        r31, r4
  lbz       r0, 0x11(r3)
  cmplwi    r0, 0
  beq-      .loc_0x1A4
  lwz       r4, 0xC0(r31)
  mr        r3, r31
  lfs       f1, 0x49C(r4)
  lfs       f2, 0x44C(r4)
  bl        0x4CF0
  mr.       r29, r3
  beq-      .loc_0x1A4
  mr        r4, r29
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x0(r29)
  addi      r3, r1, 0x20
  lfs       f30, 0x334(r5)
  lwz       r12, 0x8(r12)
  lfs       f31, 0x30C(r5)
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
  bl        -0x331D2C
  bl        0xAAD98
  lwz       r12, 0x0(r31)
  fmr       f29, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f29
  bl        0xAADA0
  fmuls     f31, f1, f31
  lfs       f0, 0x55C(r2)
  lfs       f1, 0x548(r2)
  fmuls     f0, f0, f30
  fabs      f2, f31
  fmuls     f1, f1, f0
  frsp      f0, f2
  fcmpo     cr0, f0, f1
  ble-      .loc_0x14C
  lfs       f0, 0x520(r2)
  fcmpo     cr0, f31, f0
  ble-      .loc_0x148
  fmr       f31, f1
  b         .loc_0x14C

.loc_0x148:
  fneg      f31, f1

.loc_0x14C:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f31, f1
  bl        0xAAD1C
  stfs      f1, 0x1FC(r31)
  mr        r4, r29
  addi      r3, r1, 0x68
  lfs       f0, 0x1FC(r31)
  stfs      f0, 0x1A8(r31)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x6C(r1)
  lfs       f2, 0x70(r1)
  lfs       f0, 0x68(r1)
  stfs      f0, 0x2C8(r31)
  stfs      f1, 0x2CC(r31)
  stfs      f2, 0x2D0(r31)

.loc_0x1A4:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x2DC
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x2
  bne-      .loc_0x25C
  li        r0, 0x1
  mr        r3, r31
  stb       r0, 0x10(r30)
  bl        -0x25F788
  mr        r3, r31
  li        r4, 0x1
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  li        r4, 0x1
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  mr        r3, r31
  stb       r0, 0x11(r30)
  bl        0x4BE0
  lwz       r0, 0x280(r31)
  cmplwi    r0, 0
  beq-      .loc_0x23C
  lwz       r3, 0x28C(r31)
  li        r4, 0x58D2
  li        r5, 0
  lwz       r12, 0x28(r3)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2DC

.loc_0x23C:
  lwz       r3, 0x28C(r31)
  li        r4, 0x58D1
  li        r5, 0
  lwz       r12, 0x28(r3)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2DC

.loc_0x25C:
  cmplwi    r0, 0x3E8
  bne-      .loc_0x2DC
  li        r0, 0
  lfs       f0, 0x520(r2)
  stb       r0, 0x10(r30)
  lfs       f1, 0x548(r2)
  stfs      f0, 0x1C8(r31)
  stfs      f0, 0x1CC(r31)
  stfs      f0, 0x1D0(r31)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  lfs       f0, 0x1FC(r31)
  fadds     f1, f1, f0
  bl        0xAABEC
  stfs      f1, 0x2EC(r31)
  mr        r3, r30
  lfs       f0, 0x520(r2)
  mr        r4, r31
  lfs       f1, 0x198(r31)
  li        r6, 0
  stfs      f1, 0x2C8(r31)
  lfs       f1, 0x19C(r31)
  stfs      f1, 0x2CC(r31)
  lfs       f1, 0x1A0(r31)
  stfs      f1, 0x2D0(r31)
  stfs      f0, 0x344(r31)
  lwz       r12, 0x0(r30)
  lwz       r5, 0x2D4(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x2DC:
  lbz       r0, 0x10(r30)
  cmplwi    r0, 0
  beq-      .loc_0x44C
  lwz       r6, 0xC0(r31)
  mr        r3, r31
  li        r4, 0
  li        r5, 0
  lfs       f1, 0x5B4(r6)
  lfs       f2, 0x5DC(r6)
  lfs       f3, 0x604(r6)
  bl        -0x252DF4
  mr        r3, r31
  bl        0x3754
  lis       r4, 0x804B
  lis       r3, 0x804E
  subi      r5, r4, 0x43A0
  stw       r31, 0x78(r1)
  addi      r0, r3, 0x2A34
  mr        r4, r31
  stw       r5, 0x74(r1)
  addi      r3, r1, 0x38
  stw       r0, 0x74(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x3C(r1)
  mr        r4, r31
  lfs       f0, 0x560(r2)
  addi      r3, r1, 0x44
  fsubs     f0, f1, f0
  stfs      f0, 0x7C(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x48(r1)
  mr        r3, r31
  lfs       f0, 0x564(r2)
  addi      r4, r1, 0x74
  fadds     f0, f0, f1
  stfs      f0, 0x80(r1)
  bl        -0x2535A0
  cmpwi     r3, 0
  ble-      .loc_0x3C0
  li        r0, 0x7
  li        r4, 0x1
  stw       r0, 0x2D4(r31)
  li        r0, 0
  mr        r3, r31
  stb       r4, 0x2E8(r31)
  stb       r0, 0x10(r30)
  bl        0x4C00
  lfs       f0, 0x520(r2)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)

.loc_0x3C0:
  mr        r4, r31
  addi      r3, r1, 0x5C
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  addi      r3, r1, 0x50
  lwz       r12, 0x0(r31)
  lfs       f29, 0x5C(r1)
  lwz       r12, 0x198(r12)
  lfs       f30, 0x60(r1)
  lfs       f31, 0x64(r1)
  mtctr     r12
  bctrl     
  lfs       f0, 0x54(r1)
  lfs       f2, 0x50(r1)
  fsubs     f3, f30, f0
  lfs       f1, 0x58(r1)
  fsubs     f4, f29, f2
  lfs       f0, 0x568(r2)
  fsubs     f2, f31, f1
  fmuls     f1, f3, f3
  fmadds    f1, f4, f4, f1
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x44C
  li        r0, 0
  mr        r3, r31
  stb       r0, 0x10(r30)
  bl        0x4B74
  lfs       f0, 0x520(r2)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)

.loc_0x44C:
  mr        r3, r31
  bl        0x4880
  psq_l     f31,0xC8(r1),0,0
  lfd       f31, 0xC0(r1)
  psq_l     f30,0xB8(r1),0,0
  lfd       f30, 0xB0(r1)
  psq_l     f29,0xA8(r1),0,0
  lfd       f29, 0xA0(r1)
  lwz       r31, 0x9C(r1)
  lwz       r30, 0x98(r1)
  lwz       r0, 0xD4(r1)
  lwz       r29, 0x94(r1)
  mtlr      r0
  addi      r1, r1, 0xD0
  blr
*/
}

/*
 * --INFO--
 * Address:	803671D8
 * Size:	00001C
 */
void Game::Jigumo::Obj::getGoalPos(void)
{
/*
.loc_0x0:
  lfs       f0, 0x2C8(r4)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x2CC(r4)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x2D0(r4)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803671F4
 * Size:	000038
 */
void Game::Jigumo::StateAttack::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  bl        0x4AF0
  mr        r3, r31
  bl        -0x265898
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8036722C
 * Size:	00003C
 */
void Game::Jigumo::StateMiss::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2AF4
  addi      r5, r5, 0x2A10
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x56C
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80367268
 * Size:	00004C
 */
void Game::Jigumo::StateMiss::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r4
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r3, r6
  lfs       f0, 0x1FC(r4)
  li        r4, 0x10
  stfs      f0, 0x2EC(r6)
  bl        -0x262290
  li        r0, 0
  stb       r0, 0x10(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803672B4
 * Size:	000200
 */
void Game::Jigumo::StateMiss::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stfd      f31, 0x60(r1)
  psq_st    f31,0x68(r1),0,0
  stfd      f30, 0x50(r1)
  psq_st    f30,0x58(r1),0,0
  stfd      f29, 0x40(r1)
  psq_st    f29,0x48(r1),0,0
  stfd      f28, 0x30(r1)
  psq_st    f28,0x38(r1),0,0
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  mr        r31, r4
  mr        r30, r3
  lwz       r5, 0xC0(r4)
  lbz       r0, 0x8FC(r5)
  cmplwi    r0, 0
  beq-      .loc_0x194
  lwz       r12, 0x0(r4)
  addi      r3, r1, 0x14
  lwz       r12, 0x198(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x8
  lfs       f31, 0x14(r1)
  lwz       r12, 0x8(r12)
  lfs       f28, 0x1C(r1)
  lfs       f29, 0x334(r5)
  lfs       f30, 0x30C(r5)
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r1)
  lis       r3, 0x8051
  lfs       f0, 0x10(r1)
  subi      r3, r3, 0x2E20
  fsubs     f1, f31, f1
  fsubs     f2, f28, f0
  bl        -0x332250
  bl        0xAA874
  lwz       r12, 0x0(r31)
  fmr       f31, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f31
  bl        0xAA87C
  fmr       f31, f1
  lfs       f0, 0x55C(r2)
  lfs       f1, 0x548(r2)
  fmuls     f0, f0, f29
  fmuls     f29, f31, f30
  fmuls     f1, f1, f0
  fabs      f0, f29
  frsp      f0, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x110
  lfs       f0, 0x520(r2)
  fcmpo     cr0, f29, f0
  ble-      .loc_0x10C
  fmr       f29, f1
  b         .loc_0x110

.loc_0x10C:
  fneg      f29, f1

.loc_0x110:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f29, f1
  bl        0xAA7F4
  fabs      f3, f31
  stfs      f1, 0x1FC(r31)
  lfs       f0, 0x544(r2)
  lfs       f2, 0x1FC(r31)
  frsp      f1, f3
  stfs      f2, 0x1A8(r31)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x154
  mr        r3, r31
  bl        -0x262164

.loc_0x154:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x1C8
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x1C8
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x6
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1C8

.loc_0x194:
  lwz       r5, 0x188(r31)
  lbz       r0, 0x24(r5)
  cmplwi    r0, 0
  beq-      .loc_0x1C8
  lwz       r0, 0x1C(r5)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x1C8
  lwz       r12, 0x0(r3)
  li        r5, 0x6
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x1C8:
  psq_l     f31,0x68(r1),0,0
  lfd       f31, 0x60(r1)
  psq_l     f30,0x58(r1),0,0
  lfd       f30, 0x50(r1)
  psq_l     f29,0x48(r1),0,0
  lfd       f29, 0x40(r1)
  psq_l     f28,0x38(r1),0,0
  lfd       f28, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r0, 0x74(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	803674B4
 * Size:	00003C
 */
void Game::Jigumo::StateReturn::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2AF4
  addi      r5, r5, 0x29EC
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x574
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803674F0
 * Size:	000040
 */
void Game::Jigumo::StateReturn::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0xA
  mr        r3, r31
  bl        -0x26250C
  mr        r3, r31
  bl        0x4624
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80367530
 * Size:	000174
 */
void Game::Jigumo::StateReturn::exec( (Game::EnemyBase *))
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
  bl        0x3260
  lfs       f1, 0x200(r31)
  lfs       f0, 0x520(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x5C
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x3
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x15C

.loc_0x5C:
  mr        r3, r31
  li        r4, 0
  bl        -0x252F3C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x9C
  li        r0, 0x6
  mr        r3, r30
  stw       r0, 0x2D4(r31)
  mr        r4, r31
  li        r5, 0x8
  li        r6, 0
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xCC

.loc_0x9C:
  mr        r3, r31
  bl        0x31AC
  lfs       f2, 0x57C(r2)
  lfs       f0, 0x1F8(r31)
  fmuls     f0, f2, f0
  fmuls     f0, f0, f0
  fcmpo     cr0, f1, f0
  bge-      .loc_0xCC
  li        r0, 0
  mr        r3, r31
  stb       r0, 0x385(r31)
  bl        -0x262358

.loc_0xCC:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x15C
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x15C
  lfs       f0, 0x520(r2)
  stfs      f0, 0x1C8(r31)
  stfs      f0, 0x1CC(r31)
  stfs      f0, 0x1D0(r31)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  lwz       r0, 0x1F4(r31)
  cmpwi     r0, 0
  ble-      .loc_0x13C
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x8
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x2
  stw       r0, 0x2D4(r31)
  b         .loc_0x15C

.loc_0x13C:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x15C:
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
 * Address:	803676A4
 * Size:	00002C
 */
void Game::Jigumo::StateReturn::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  li        r0, 0x1
  stb       r0, 0x385(r4)
  bl        0x4640
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803676D0
 * Size:	00003C
 */
void Game::Jigumo::StateCarry::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2AF4
  addi      r5, r5, 0x29C8
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x580
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8036770C
 * Size:	000040
 */
void Game::Jigumo::StateCarry::init( (Game::EnemyBase *, Game::StateArg *))
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
  bl        -0x262728
  mr        r3, r31
  bl        0x4408
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8036774C
 * Size:	000190
 */
void Game::Jigumo::StateCarry::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stfd      f30, 0x10(r1)
  psq_st    f30,0x18(r1),0,0
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r31, r4
  mr        r30, r3
  mr        r3, r31
  bl        0x3034
  lfs       f1, 0x200(r31)
  lfs       f0, 0x520(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x6C
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x3
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x168

.loc_0x6C:
  mr        r3, r31
  li        r4, 0
  bl        -0x253168
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xAC
  li        r0, 0x7
  mr        r3, r30
  stw       r0, 0x2D4(r31)
  mr        r4, r31
  li        r5, 0x8
  li        r6, 0
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x168

.loc_0xAC:
  mr        r3, r31
  bl        0x2F80
  lfs       f3, 0x564(r2)
  fmr       f31, f1
  lfs       f2, 0x1F8(r31)
  lfs       f1, 0x57C(r2)
  lfs       f0, 0x588(r2)
  fmadds    f30, f3, f2, f1
  fmuls     f30, f30, f30
  fmuls     f0, f0, f30
  fcmpo     cr0, f31, f0
  bge-      .loc_0xEC
  mr        r3, r31
  bl        -0x26258C
  li        r0, 0
  stb       r0, 0x385(r31)

.loc_0xEC:
  fcmpo     cr0, f31, f30
  bge-      .loc_0x168
  lfs       f0, 0x520(r2)
  stfs      f0, 0x1C8(r31)
  stfs      f0, 0x1CC(r31)
  stfs      f0, 0x1D0(r31)
  stfs      f0, 0x1D4(r31)
  stfs      f0, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  lwz       r0, 0x1F4(r31)
  cmpwi     r0, 0x1
  ble-      .loc_0x148
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x8
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x9
  stw       r0, 0x2D4(r31)
  b         .loc_0x168

.loc_0x148:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x9
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x168:
  psq_l     f31,0x28(r1),0,0
  lfd       f31, 0x20(r1)
  psq_l     f30,0x18(r1),0,0
  lfd       f30, 0x10(r1)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x34(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803678DC
 * Size:	00002C
 */
void Game::Jigumo::StateCarry::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  li        r0, 0x1
  stb       r0, 0x385(r4)
  bl        0x4408
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80367908
 * Size:	00003C
 */
void Game::Jigumo::StateFlick::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2AF4
  addi      r5, r5, 0x29A4
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x58C
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80367944
 * Size:	0000CC
 */
void Game::Jigumo::StateFlick::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lfs       f0, 0x520(r2)
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r4
  stfs      f0, 0x1D4(r4)
  stfs      f0, 0x1D8(r4)
  stfs      f0, 0x1DC(r4)
  stfs      f0, 0x1C8(r4)
  stfs      f0, 0x1CC(r4)
  stfs      f0, 0x1D0(r4)
  lbz       r0, 0x2E8(r4)
  cmplwi    r0, 0
  beq-      .loc_0x50
  mr        r3, r31
  li        r4, 0x6
  li        r5, 0
  bl        -0x262988
  b         .loc_0x60

.loc_0x50:
  mr        r3, r31
  li        r4, 0x9
  li        r5, 0
  bl        -0x26299C

.loc_0x60:
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
  bl        -0x1157A8
  lwz       r3, -0x6958(r13)
  addi      r5, r1, 0x14
  li        r4, 0x8
  li        r6, 0x2
  bl        -0x114278
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80367A10
 * Size:	0000FC
 */
void Game::Jigumo::StateFlick::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stfd      f30, 0x20(r1)
  psq_st    f30,0x28(r1),0,0
  stfd      f29, 0x10(r1)
  psq_st    f29,0x18(r1),0,0
  stw       r31, 0xC(r1)
  mr        r31, r4
  lwz       r5, 0x188(r4)
  lbz       r0, 0x24(r5)
  cmplwi    r0, 0
  beq-      .loc_0xD0
  lwz       r0, 0x1C(r5)
  cmplwi    r0, 0x2
  bne-      .loc_0x9C
  lwz       r5, 0xC0(r31)
  mr        r3, r31
  lfs       f4, 0x540(r2)
  li        r4, 0
  lfs       f30, 0x4C4(r5)
  lfs       f29, 0x4EC(r5)
  fmr       f2, f30
  lfs       f31, 0x53C(r5)
  fmr       f3, f29
  lfs       f1, 0x514(r5)
  bl        -0x2545AC
  fmr       f1, f31
  lfs       f4, 0x540(r2)
  fmr       f2, f30
  mr        r3, r31
  fmr       f3, f29
  li        r4, 0
  bl        -0x254980
  lfs       f0, 0x520(r2)
  stfs      f0, 0x20C(r31)
  b         .loc_0xD0

.loc_0x9C:
  cmplwi    r0, 0x3
  bne-      .loc_0xB0
  mr        r3, r31
  bl        0x42D0
  b         .loc_0xD0

.loc_0xB0:
  cmplwi    r0, 0x3E8
  bne-      .loc_0xD0
  lwz       r12, 0x0(r3)
  li        r6, 0
  lwz       r5, 0x2D4(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xD0:
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  psq_l     f29,0x18(r1),0,0
  lfd       f29, 0x10(r1)
  lwz       r0, 0x44(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80367B0C
 * Size:	00003C
 */
void Game::Jigumo::StateEat::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2AF4
  addi      r5, r5, 0x2980
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x594
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80367B48
 * Size:	000058
 */
void Game::Jigumo::StateEat::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0x5
  lfs       f0, 0x18C(r31)
  mr        r3, r31
  stfs      f0, 0x2BC(r31)
  lfs       f0, 0x190(r31)
  stfs      f0, 0x2C0(r31)
  lfs       f0, 0x194(r31)
  stfs      f0, 0x2C4(r31)
  bl        -0x262B7C
  mr        r3, r31
  bl        -0x26040C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80367BA0
 * Size:	000120
 */
void Game::Jigumo::StateEat::exec( (Game::EnemyBase *))
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
  bl        -0x262954
  lfs       f0, 0x598(r2)
  mr        r3, r31
  fmuls     f1, f0, f1
  bl        0x3D78
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x108
  lwz       r0, 0x1C(r3)
  cmpwi     r0, 0x8
  beq-      .loc_0x98
  bge-      .loc_0x68
  cmpwi     r0, 0x7
  bge-      .loc_0x8C
  cmpwi     r0, 0x2
  bge-      .loc_0x74
  b         .loc_0x108

.loc_0x68:
  cmpwi     r0, 0x3E8
  beq-      .loc_0xB4
  b         .loc_0x108

.loc_0x74:
  lwz       r0, 0x280(r31)
  cmplwi    r0, 0
  beq-      .loc_0x108
  mr        r3, r31
  bl        0x418C
  b         .loc_0x108

.loc_0x8C:
  li        r0, 0x1
  stb       r0, 0x2E9(r31)
  b         .loc_0x108

.loc_0x98:
  lfs       f1, 0x59C(r2)
  mr        r3, r31
  li        r4, 0
  bl        -0x253DC0
  li        r0, 0
  stb       r0, 0x2E9(r31)
  b         .loc_0x108

.loc_0xB4:
  lfs       f1, 0x520(r2)
  lfs       f0, 0x200(r31)
  fcmpu     cr0, f1, f0
  bne-      .loc_0xE8
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x3
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x108

.loc_0xE8:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x108:
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
 * Address:	80367CC0
 * Size:	00003C
 */
void Game::Jigumo::StateSearch::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2AF4
  addi      r5, r5, 0x295C
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x5A0
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80367CFC
 * Size:	000088
 */
void Game::Jigumo::StateSearch::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0xD
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r3, r31
  bl        -0x262D20
  mr        r3, r31
  li        r4, 0
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  li        r4, 0
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  li        r3, 0
  li        r0, -0x1
  stw       r3, 0x230(r31)
  stb       r3, 0x2E9(r31)
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
 * Address:	80367D84
 * Size:	000614
 */
void Game::Jigumo::StateSearch::exec( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x130(r1)
  mflr      r0
  stw       r0, 0x134(r1)
  stfd      f31, 0x120(r1)
  psq_st    f31,0x128(r1),0,0
  stfd      f30, 0x110(r1)
  psq_st    f30,0x118(r1),0,0
  stfd      f29, 0x100(r1)
  psq_st    f29,0x108(r1),0,0
  stw       r31, 0xFC(r1)
  stw       r30, 0xF8(r1)
  stw       r29, 0xF4(r1)
  stw       r28, 0xF0(r1)
  mr        r31, r4
  mr        r30, r3
  mr        r3, r31
  bl        -0x260A7C
  lwz       r4, 0xC0(r31)
  mr        r29, r3
  mr        r3, r31
  lfs       f1, 0x49C(r4)
  lfs       f2, 0x44C(r4)
  bl        0x3CB8
  mr.       r28, r3
  stw       r28, 0x230(r31)
  beq-      .loc_0x298
  mr        r4, r28
  addi      r3, r1, 0xB0
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f2, 0xB0(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0xBC
  lfs       f1, 0xB4(r1)
  lfs       f0, 0xB8(r1)
  lwz       r12, 0x8(r12)
  stfs      f2, 0x98(r1)
  stfs      f1, 0x9C(r1)
  stfs      f0, 0xA0(r1)
  mtctr     r12
  bctrl     
  lfs       f5, 0xBC(r1)
  lis       r3, 0x8051
  lfs       f3, 0xC4(r1)
  subi      r3, r3, 0x2E20
  lfs       f1, 0x98(r1)
  lfs       f0, 0xA0(r1)
  lfs       f4, 0xC0(r1)
  fsubs     f1, f1, f5
  fsubs     f2, f0, f3
  stfs      f5, 0xA4(r1)
  stfs      f4, 0xA8(r1)
  stfs      f3, 0xAC(r1)
  bl        -0x332D5C
  bl        0xA9D68
  lwz       r12, 0x0(r31)
  fmr       f30, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f30
  bl        0xA9D70
  fabs      f1, f1
  lfs       f0, 0x5A8(r2)
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x164
  mr        r3, r31
  bl        -0x262C08
  li        r0, -0x1
  mr        r4, r28
  stw       r0, 0x10(r30)
  addi      r3, r1, 0xE0
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0xE4(r1)
  lfs       f2, 0xE8(r1)
  lfs       f0, 0xE0(r1)
  stfs      f0, 0x2C8(r31)
  stfs      f1, 0x2CC(r31)
  stfs      f2, 0x2D0(r31)
  b         .loc_0x4E4

.loc_0x164:
  cmpwi     r29, 0xF
  bne-      .loc_0x180
  mr        r3, r31
  bl        -0x262C54
  li        r0, 0xD
  stw       r0, 0x10(r30)
  b         .loc_0x4E4

.loc_0x180:
  mr        r4, r28
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x0(r28)
  addi      r3, r1, 0x50
  lfs       f30, 0x334(r5)
  lwz       r12, 0x8(r12)
  lfs       f31, 0x30C(r5)
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
  bl        -0x332E80
  bl        0xA9C44
  lwz       r12, 0x0(r31)
  fmr       f29, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f29
  bl        0xA9C4C
  fmuls     f31, f1, f31
  lfs       f0, 0x55C(r2)
  lfs       f1, 0x548(r2)
  fmuls     f0, f0, f30
  fabs      f2, f31
  fmuls     f1, f1, f0
  frsp      f0, f2
  fcmpo     cr0, f0, f1
  ble-      .loc_0x26C
  lfs       f0, 0x520(r2)
  fcmpo     cr0, f31, f0
  ble-      .loc_0x268
  fmr       f31, f1
  b         .loc_0x26C

.loc_0x268:
  fneg      f31, f1

.loc_0x26C:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f31, f1
  bl        0xA9BC8
  stfs      f1, 0x1FC(r31)
  lfs       f0, 0x1FC(r31)
  stfs      f0, 0x1A8(r31)
  b         .loc_0x4E4

.loc_0x298:
  lwz       r4, 0xC0(r31)
  mr        r3, r31
  lfs       f1, 0x424(r4)
  lfs       f2, 0x3D4(r4)
  bl        0x3A68
  mr.       r28, r3
  beq-      .loc_0x4C4
  mr        r4, r28
  addi      r3, r1, 0x80
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f2, 0x80(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x8C
  lfs       f1, 0x84(r1)
  lfs       f0, 0x88(r1)
  lwz       r12, 0x8(r12)
  stfs      f2, 0x68(r1)
  stfs      f1, 0x6C(r1)
  stfs      f0, 0x70(r1)
  mtctr     r12
  bctrl     
  lfs       f5, 0x8C(r1)
  lis       r3, 0x8051
  lfs       f3, 0x94(r1)
  subi      r3, r3, 0x2E20
  lfs       f1, 0x68(r1)
  lfs       f0, 0x70(r1)
  lfs       f4, 0x90(r1)
  fsubs     f1, f1, f5
  fsubs     f2, f0, f3
  stfs      f5, 0x74(r1)
  stfs      f4, 0x78(r1)
  stfs      f3, 0x7C(r1)
  bl        -0x332FA8
  bl        0xA9B1C
  lwz       r12, 0x0(r31)
  fmr       f29, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f29
  bl        0xA9B24
  fabs      f1, f1
  lfs       f0, 0x598(r2)
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x388
  cmpwi     r29, 0xD
  bne-      .loc_0x4E4
  li        r0, 0xF
  mr        r3, r31
  stw       r0, 0x10(r30)
  bl        -0x262E64
  b         .loc_0x4E4

.loc_0x388:
  mr        r3, r31
  bl        -0x260DC8
  cmpwi     r3, 0xF
  bne-      .loc_0x3AC
  li        r0, 0xD
  mr        r3, r31
  stw       r0, 0x10(r30)
  bl        -0x262E88
  b         .loc_0x4E4

.loc_0x3AC:
  mr        r4, r28
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x0(r28)
  addi      r3, r1, 0x20
  lfs       f31, 0x334(r5)
  lwz       r12, 0x8(r12)
  lfs       f30, 0x30C(r5)
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
  bl        -0x3330AC
  bl        0xA9A18
  lwz       r12, 0x0(r31)
  fmr       f29, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f29
  bl        0xA9A20
  fmuls     f30, f1, f30
  lfs       f0, 0x55C(r2)
  lfs       f1, 0x548(r2)
  fmuls     f0, f0, f31
  fabs      f2, f30
  fmuls     f1, f1, f0
  frsp      f0, f2
  fcmpo     cr0, f0, f1
  ble-      .loc_0x498
  lfs       f0, 0x520(r2)
  fcmpo     cr0, f30, f0
  ble-      .loc_0x494
  fmr       f30, f1
  b         .loc_0x498

.loc_0x494:
  fneg      f30, f1

.loc_0x498:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f30, f1
  bl        0xA999C
  stfs      f1, 0x1FC(r31)
  lfs       f0, 0x1FC(r31)
  stfs      f0, 0x1A8(r31)
  b         .loc_0x4E4

.loc_0x4C4:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x4E4:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x5DC
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x3E8
  bne-      .loc_0x5DC
  lwz       r4, 0x10(r30)
  cmpwi     r4, 0
  bge-      .loc_0x5D0
  mr        r4, r31
  addi      r3, r1, 0xD4
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  addi      r3, r1, 0xC8
  lwz       r12, 0x0(r31)
  lfs       f29, 0xD4(r1)
  lwz       r12, 0x198(r12)
  lfs       f30, 0xD8(r1)
  lfs       f31, 0xDC(r1)
  mtctr     r12
  bctrl     
  lfs       f0, 0xCC(r1)
  lfs       f1, 0xC8(r1)
  fsubs     f0, f30, f0
  lwz       r3, 0xC0(r31)
  lfs       f3, 0xD0(r1)
  fsubs     f4, f29, f1
  lfs       f2, 0x5B4(r3)
  fmuls     f0, f0, f0
  lfs       f1, 0x1F8(r31)
  fsubs     f3, f31, f3
  fmuls     f1, f2, f1
  fmadds    f0, f4, f4, f0
  fmuls     f1, f1, f1
  fmadds    f0, f3, f3, f0
  fcmpo     cr0, f0, f1
  bge-      .loc_0x5AC
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0xB
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x5DC

.loc_0x5AC:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x5DC

.loc_0x5D0:
  mr        r3, r31
  li        r5, 0
  bl        -0x263358

.loc_0x5DC:
  psq_l     f31,0x128(r1),0,0
  lfd       f31, 0x120(r1)
  psq_l     f30,0x118(r1),0,0
  lfd       f30, 0x110(r1)
  psq_l     f29,0x108(r1),0,0
  lfd       f29, 0x100(r1)
  lwz       r31, 0xFC(r1)
  lwz       r30, 0xF8(r1)
  lwz       r29, 0xF4(r1)
  lwz       r0, 0x134(r1)
  lwz       r28, 0xF0(r1)
  mtlr      r0
  addi      r1, r1, 0x130
  blr
*/
}

/*
 * --INFO--
 * Address:	80368398
 * Size:	00003C
 */
void Game::Jigumo::StateSAttack::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2AF4
  addi      r5, r5, 0x2938
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x5AC
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803683D4
 * Size:	000058
 */
void Game::Jigumo::StateSAttack::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0xB
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r3, r31
  bl        -0x2633F8
  li        r0, 0
  mr        r3, r31
  stb       r0, 0x10(r30)
  stb       r0, 0x11(r30)
  bl        -0x266A44
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
 * Address:	8036842C
 * Size:	000238
 */
void Game::Jigumo::StateSAttack::exec( (Game::EnemyBase *))
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
  bl        -0x2631E0
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x924(r3)
  fcmpu     cr0, f0, f1
  bne-      .loc_0x6C
  li        r0, 0x1
  mr        r3, r31
  stb       r0, 0x11(r30)
  li        r4, 0x1
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  li        r4, 0x1
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     

.loc_0x6C:
  lbz       r0, 0x11(r30)
  cmplwi    r0, 0
  beq-      .loc_0xBC
  mr        r3, r31
  li        r4, 0
  bl        -0x254978
  cmpwi     r3, 0
  beq-      .loc_0x94
  li        r0, 0x1
  stb       r0, 0x10(r30)

.loc_0x94:
  lfs       f1, 0x5B4(r2)
  mr        r3, r31
  lwz       r6, 0xC0(r31)
  li        r4, 0
  lfs       f0, 0x1F8(r31)
  li        r5, 0
  lfs       f2, 0x5DC(r6)
  fmuls     f1, f1, f0
  lfs       f3, 0x604(r6)
  bl        -0x254284

.loc_0xBC:
  lwz       r3, 0x188(r31)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x220
  lwz       r0, 0x1C(r3)
  cmpwi     r0, 0x9
  beq-      .loc_0x1D8
  bge-      .loc_0xF4
  cmpwi     r0, 0x3
  beq-      .loc_0x158
  bge-      .loc_0x1C0
  cmpwi     r0, 0x2
  bge-      .loc_0x10C
  b         .loc_0x220

.loc_0xF4:
  cmpwi     r0, 0x3E8
  beq-      .loc_0x200
  bge-      .loc_0x220
  cmpwi     r0, 0xB
  bge-      .loc_0x220
  b         .loc_0x1E4

.loc_0x10C:
  lwz       r0, 0x280(r31)
  cmplwi    r0, 0
  beq-      .loc_0x138
  lwz       r3, 0x28C(r31)
  li        r4, 0x58D2
  li        r5, 0
  lwz       r12, 0x28(r3)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x220

.loc_0x138:
  lwz       r3, 0x28C(r31)
  li        r4, 0x58D1
  li        r5, 0
  lwz       r12, 0x28(r3)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x220

.loc_0x158:
  li        r0, 0
  mr        r3, r31
  stb       r0, 0x11(r30)
  li        r4, 0
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  li        r4, 0
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x10(r30)
  cmplwi    r0, 0
  bne-      .loc_0x220
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0xC
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x220

.loc_0x1C0:
  lwz       r0, 0x280(r31)
  cmplwi    r0, 0
  beq-      .loc_0x220
  mr        r3, r31
  bl        0x37B4
  b         .loc_0x220

.loc_0x1D8:
  li        r0, 0x1
  stb       r0, 0x2E9(r31)
  b         .loc_0x220

.loc_0x1E4:
  lfs       f1, 0x59C(r2)
  mr        r3, r31
  li        r4, 0
  bl        -0x254798
  li        r0, 0
  stb       r0, 0x2E9(r31)
  b         .loc_0x220

.loc_0x200:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0xA
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x220:
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
 * Address:	80368664
 * Size:	000024
 */
void Game::Jigumo::StateSAttack::cleanup( (Game::EnemyBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  bl        -0x266CF8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80368688
 * Size:	00003C
 */
void Game::Jigumo::StateSMiss::__ct( (int))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r6, 0x804E
  subi      r0, r5, 0x65C
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x2AF4
  addi      r5, r5, 0x2914
  stw       r4, 0x4(r3)
  addi      r0, r2, 0x5B8
  stw       r7, 0x8(r3)
  stw       r6, 0x0(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803686C4
 * Size:	00002C
 */
void Game::Jigumo::StateSMiss::init( (Game::EnemyBase *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  li        r4, 0xC
  stw       r0, 0x14(r1)
  li        r5, 0
  bl        -0x2636D8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803686F0
 * Size:	000050
 */
void Game::Jigumo::StateSMiss::exec( (Game::EnemyBase *))
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
  li        r5, 0xA
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
 * Address:	80368740
 * Size:	0000F0
 */
void Game::Jigumo::ConditionHeightCheckPiki::satisfy( (Game::Piki *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  mr        r29, r4
  stw       r28, 0x20(r1)
  mr        r28, r3
  mr        r3, r29
  bl        -0x1C91F4
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xCC
  mr        r3, r29
  lwz       r30, 0x4(r28)
  lwz       r12, 0x0(r29)
  li        r31, 0
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x78
  lwz       r0, 0xF4(r29)
  cmplw     r0, r30
  beq-      .loc_0x78
  mr        r3, r29
  bl        -0x1C9220
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x78
  li        r31, 0x1

.loc_0x78:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0xCC
  mr        r4, r29
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0xC(r1)
  lfs       f0, 0xC(r28)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xB0
  li        r3, 0
  b         .loc_0xD0

.loc_0xB0:
  lfs       f0, 0x8(r28)
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r0,r0,1,31,31
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  b         .loc_0xD0

.loc_0xCC:
  li        r3, 0

.loc_0xD0:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80368830
 * Size:	000028
 */
void __sinit_jigumoState_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804E
  stw       r0, -0x6728(r13)
  stfsu     f0, 0x2908(r3)
  stfs      f0, -0x6724(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}
