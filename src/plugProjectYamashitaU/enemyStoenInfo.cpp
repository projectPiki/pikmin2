

/*
 * --INFO--
 * Address:	80128108
 * Size:	000164
 */
void Game::EnemyStone::Info::setup( (Stream &))
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
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  stw       r29, 0x34(r1)
  stw       r28, 0x30(r1)
  mr        r29, r4
  mr        r28, r3
  mr        r3, r29
  bl        0x2EC35C
  stb       r3, 0x0(r28)
  lbz       r31, 0x0(r28)
  mulli     r3, r31, 0x38
  addi      r3, r3, 0x10
  bl        -0x1041A8
  lis       r4, 0x8013
  mr        r7, r31
  subi      r4, r4, 0x7D94
  li        r5, 0
  li        r6, 0x38
  bl        -0x6677C
  stw       r3, 0x4(r28)
  li        r30, 0
  lfs       f30, -0x63A8(r2)
  lfs       f31, -0x63A4(r2)
  b         .loc_0x124

.loc_0x7C:
  mr        r3, r29
  li        r4, 0
  li        r5, 0
  bl        0x2ECF44
  rlwinm    r0,r30,0,24,31
  lwz       r4, 0x4(r28)
  mulli     r31, r0, 0x38
  stwx      r3, r4, r31
  mr        r3, r29
  bl        0x2EC8E8
  lwz       r5, 0x4(r28)
  addi      r0, r31, 0x4
  mr        r4, r29
  stwx      r3, r5, r0
  addi      r3, r1, 0x20
  bl        0x2E97D0
  mr        r4, r29
  addi      r3, r1, 0x14
  bl        0x2E97C4
  lfs       f2, 0x14(r1)
  mr        r4, r29
  lfs       f1, 0x18(r1)
  addi      r3, r1, 0x8
  lfs       f0, 0x1C(r1)
  fmuls     f2, f31, f2
  fmuls     f1, f31, f1
  fmuls     f0, f31, f0
  fmuls     f2, f30, f2
  fmuls     f1, f30, f1
  fmuls     f0, f30, f0
  stfs      f2, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  bl        0x2E9788
  lwz       r0, 0x4(r28)
  addi      r3, r31, 0x8
  addi      r4, r1, 0x8
  addi      r5, r1, 0x14
  add       r3, r0, r3
  addi      r6, r1, 0x20
  bl        0x3000B4
  addi      r30, r30, 0x1

.loc_0x124:
  lbz       r0, 0x0(r28)
  rlwinm    r3,r30,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x7C
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  lwz       r0, 0x64(r1)
  lwz       r28, 0x30(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	8012826C
 * Size:	000014
 */
void Game::EnemyStone::ObjInfo::__ct(void)
{
/*
.loc_0x0:
  li        r4, 0
  li        r0, -0x1
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)
  blr
*/
}
