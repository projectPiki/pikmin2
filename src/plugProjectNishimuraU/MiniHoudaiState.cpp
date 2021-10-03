

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802E7F4C
 * Size:	0003D8
 */
void Game::MiniHoudai::FSM::init((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x8049
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      subi      r30, r4, 0x3290
      li        r4, 0xB
      bl        -0x1B770C
      li        r3, 0x10
      bl        -0x2C40D4
      mr.       r4, r3
      beq-      .loc_0x70
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r7, 0
      addi      r6, r5, 0x46E0
      subi      r5, r2, 0x1450
      stw       r7, 0x4(r4)
      addi      r0, r3, 0x46BC
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x70:
      mr        r3, r31
      bl        -0x1B76B8
      li        r3, 0x10
      bl        -0x2C4124
      mr.       r4, r3
      beq-      .loc_0xC4
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x1
      li        r7, 0
      addi      r6, r5, 0x46E0
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x1448
      addi      r0, r3, 0x4698
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0xC4:
      mr        r3, r31
      bl        -0x1B770C
      li        r3, 0x10
      bl        -0x2C4178
      mr.       r4, r3
      beq-      .loc_0x118
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x2
      li        r7, 0
      addi      r6, r5, 0x46E0
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x1440
      addi      r0, r3, 0x4674
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x118:
      mr        r3, r31
      bl        -0x1B7760
      li        r3, 0x10
      bl        -0x2C41CC
      mr.       r4, r3
      beq-      .loc_0x16C
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x3
      li        r7, 0
      addi      r6, r5, 0x46E0
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x1438
      addi      r0, r3, 0x4650
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x16C:
      mr        r3, r31
      bl        -0x1B77B4
      li        r3, 0x10
      bl        -0x2C4220
      mr.       r4, r3
      beq-      .loc_0x1C0
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x4
      li        r7, 0
      addi      r6, r5, 0x46E0
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x1430
      addi      r0, r3, 0x462C
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x1C0:
      mr        r3, r31
      bl        -0x1B7808
      li        r3, 0x10
      bl        -0x2C4274
      mr.       r4, r3
      beq-      .loc_0x214
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x5
      li        r7, 0
      addi      r6, r5, 0x46E0
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x1428
      addi      r0, r3, 0x4608
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x214:
      mr        r3, r31
      bl        -0x1B785C
      li        r3, 0x10
      bl        -0x2C42C8
      mr.       r4, r3
      beq-      .loc_0x268
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x6
      li        r7, 0
      addi      r6, r5, 0x46E0
      stw       r0, 0x4(r4)
      addi      r5, r30, 0x20
      addi      r0, r3, 0x45E4
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x268:
      mr        r3, r31
      bl        -0x1B78B0
      li        r3, 0x10
      bl        -0x2C431C
      mr.       r4, r3
      beq-      .loc_0x2BC
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x7
      li        r7, 0
      addi      r6, r5, 0x46E0
      stw       r0, 0x4(r4)
      addi      r5, r30, 0x2C
      addi      r0, r3, 0x45C0
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x2BC:
      mr        r3, r31
      bl        -0x1B7904
      li        r3, 0x10
      bl        -0x2C4370
      mr.       r4, r3
      beq-      .loc_0x310
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x8
      li        r7, 0
      addi      r6, r5, 0x46E0
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x1420
      addi      r0, r3, 0x459C
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x310:
      mr        r3, r31
      bl        -0x1B7958
      li        r3, 0x10
      bl        -0x2C43C4
      mr.       r4, r3
      beq-      .loc_0x364
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x9
      li        r7, 0
      addi      r6, r5, 0x46E0
      stw       r0, 0x4(r4)
      addi      r5, r30, 0x38
      addi      r0, r3, 0x4578
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x364:
      mr        r3, r31
      bl        -0x1B79AC
      li        r3, 0x10
      bl        -0x2C4418
      mr.       r4, r3
      beq-      .loc_0x3B8
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0xA
      li        r7, 0
      addi      r6, r5, 0x46E0
      stw       r0, 0x4(r4)
      addi      r5, r30, 0x44
      addi      r0, r3, 0x4554
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x3B8:
      mr        r3, r31
      bl        -0x1B7A00
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
 * Address:	802E8324
 * Size:	000058
 */
void Game::MiniHoudai::StateDead::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r3, r31
      bl        -0x1E2C1C
      lfs       f0, -0x1418(r2)
      mr        r3, r31
      li        r4, 0x5
      li        r5, 0
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      bl        -0x1E3358
      mr        r3, r31
      bl        0x5478
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E837C
 * Size:	00010C
 */
void Game::MiniHoudai::StateDead::exec((Game::EnemyBase*))
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
      beq-      .loc_0xF8
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x2
      bne-      .loc_0xCC
      mr        r3, r31
      bl        0x5460
      lfs       f1, -0x1414(r2)
      mr        r3, r31
      bl        0x5398
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xF4(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      li        r4, 0x596B
      li        r5, 0
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      addi      r5, r1, 0x14
      lfs       f1, 0xC(r1)
      li        r4, 0x1C
      lfs       f0, 0x10(r1)
      li        r6, 0x2
      stfs      f2, 0x14(r1)
      lwz       r3, -0x6960(r13)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      bl        -0x961F0
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x14
      li        r4, 0xB
      li        r6, 0x2
      bl        -0x94CC0
      b         .loc_0xF8

    .loc_0xCC:
      cmplwi    r0, 0x3
      bne-      .loc_0xE4
      lfs       f1, -0x1410(r2)
      mr        r3, r31
      bl        0x52FC
      b         .loc_0xF8

    .loc_0xE4:
      cmplwi    r0, 0x3E8
      bne-      .loc_0xF8
      mr        r3, r31
      li        r4, 0
      bl        -0x1AD380

    .loc_0xF8:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	802E8488
 * Size:	000004
 */
void Game::MiniHoudai::StateDead::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802E848C
 * Size:	000058
 */
void Game::MiniHoudai::StateRebirth::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, -0x1
      mr        r3, r4
      stw       r0, 0x14(r1)
      li        r0, 0
      lfs       f0, -0x1418(r2)
      stw       r5, 0x2D4(r4)
      li        r4, 0x7
      li        r5, 0
      lwz       r6, 0x1E0(r3)
      rlwinm    r6,r6,0,11,9
      stw       r6, 0x1E0(r3)
      stw       r0, 0x230(r3)
      stfs      f0, 0x1D4(r3)
      stfs      f0, 0x1D8(r3)
      stfs      f0, 0x1DC(r3)
      bl        -0x1E34CC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E84E4
 * Size:	0003A8
 */
void Game::MiniHoudai::StateRebirth::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      stw       r0, 0x84(r1)
      stfd      f31, 0x70(r1)
      psq_st    f31,0x78(r1),0,0
      stfd      f30, 0x60(r1)
      psq_st    f30,0x68(r1),0,0
      stw       r31, 0x5C(r1)
      stw       r30, 0x58(r1)
      lwz       r5, 0x188(r4)
      mr        r30, r3
      mr        r31, r4
      lbz       r0, 0x24(r5)
      cmplwi    r0, 0
      beq-      .loc_0x380
      lwz       r0, 0x1C(r5)
      cmplwi    r0, 0x2
      bne-      .loc_0xC0
      lwz       r5, 0xC0(r31)
      mr        r3, r31
      lfs       f4, -0x140C(r2)
      li        r4, 0
      lfs       f1, 0x53C(r5)
      lfs       f2, 0x4C4(r5)
      lfs       f3, 0x4EC(r5)
      bl        -0x1D542C
      lwz       r5, 0xC0(r31)
      mr        r3, r31
      lfs       f4, -0x140C(r2)
      li        r4, 0
      lfs       f1, 0x514(r5)
      lfs       f2, 0x4C4(r5)
      lfs       f3, 0x4EC(r5)
      bl        -0x1D5094
      lwz       r5, 0xC0(r31)
      mr        r3, r31
      lfs       f4, -0x140C(r2)
      li        r4, 0
      lfs       f1, 0x514(r5)
      lfs       f2, 0x4C4(r5)
      lfs       f3, 0x4EC(r5)
      bl        -0x1D4DF8
      lfs       f0, -0x1418(r2)
      stfs      f0, 0x20C(r31)
      lwz       r0, 0x1E0(r31)
      oris      r0, r0, 0x20
      stw       r0, 0x1E0(r31)
      b         .loc_0x380

    .loc_0xC0:
      cmplwi    r0, 0x3
      bne-      .loc_0xE4
      lwz       r0, 0x1E0(r31)
      mr        r3, r31
      lfs       f1, -0x1410(r2)
      rlwinm    r0,r0,0,11,9
      stw       r0, 0x1E0(r31)
      bl        0x5194
      b         .loc_0x380

    .loc_0xE4:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x380
      lfs       f1, 0x200(r31)
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x11C
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x380

    .loc_0x11C:
      mr        r3, r31
      li        r4, 0
      bl        -0x1D3FB0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x154
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x380

    .loc_0x154:
      mr        r3, r31
      bl        0x48B0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x188
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x3
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x380

    .loc_0x188:
      mr        r3, r31
      bl        0x462C
      cmplwi    r3, 0
      beq-      .loc_0x2B0
      mr        r4, r3
      addi      r3, r1, 0x38
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      lfs       f2, 0x38(r1)
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x44
      lfs       f1, 0x3C(r1)
      lfs       f0, 0x40(r1)
      lwz       r12, 0x8(r12)
      stfs      f2, 0x20(r1)
      stfs      f1, 0x24(r1)
      stfs      f0, 0x28(r1)
      mtctr     r12
      bctrl
      lfs       f5, 0x44(r1)
      lis       r3, 0x8051
      lfs       f3, 0x4C(r1)
      subi      r3, r3, 0x2E20
      lfs       f1, 0x20(r1)
      lfs       f0, 0x28(r1)
      lfs       f4, 0x48(r1)
      fsubs     f1, f1, f5
      fsubs     f2, f0, f3
      stfs      f5, 0x2C(r1)
      stfs      f4, 0x30(r1)
      stfs      f3, 0x34(r1)
      bl        -0x2B35EC
      bl        0x1294D8
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x1294E0
      lwz       r3, 0xC0(r31)
      fabs      f2, f1
      lfs       f0, -0x1404(r2)
      lfs       f3, 0x58C(r3)
      lfs       f1, -0x1408(r2)
      frsp      f2, f2
      fmuls     f0, f0, f3
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      bne-      .loc_0x28C
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x8
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x380

    .loc_0x28C:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x5
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x380

    .loc_0x2B0:
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r31)
      lfs       f31, 0x2E4(r31)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x2EC(r31)
      mtctr     r12
      bctrl
      lfs       f4, 0x14(r1)
      lis       r3, 0x8051
      lfs       f0, 0x1C(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x18(r1)
      fsubs     f1, f31, f4
      fsubs     f2, f30, f0
      stfs      f4, 0x8(r1)
      stfs      f3, 0xC(r1)
      stfs      f0, 0x10(r1)
      bl        -0x2B36D4
      bl        0x1293F0
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x1293F8
      fabs      f1, f1
      lfs       f0, -0x1400(r2)
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x360
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0xA
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x380

    .loc_0x360:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x7
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x380:
      psq_l     f31,0x78(r1),0,0
      lfd       f31, 0x70(r1)
      psq_l     f30,0x68(r1),0,0
      lfd       f30, 0x60(r1)
      lwz       r31, 0x5C(r1)
      lwz       r0, 0x84(r1)
      lwz       r30, 0x58(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	802E888C
 * Size:	000010
 */
void Game::MiniHoudai::StateRebirth::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      lwz       r0, 0x1E0(r4)
      rlwinm    r0,r0,0,11,9
      stw       r0, 0x1E0(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	802E889C
 * Size:	00004C
 */
void Game::MiniHoudai::StateLost::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, -0x1
      mr        r3, r4
      stw       r0, 0x14(r1)
      li        r0, 0
      lfs       f0, -0x1418(r2)
      stw       r5, 0x2D4(r4)
      li        r4, 0x1
      li        r5, 0
      stw       r0, 0x230(r3)
      stfs      f0, 0x1D4(r3)
      stfs      f0, 0x1D8(r3)
      stfs      f0, 0x1DC(r3)
      bl        -0x1E38D0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E88E8
 * Size:	00050C
 */
void Game::MiniHoudai::StateLost::exec((Game::EnemyBase*))
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
      lwz       r5, 0x188(r4)
      mr        r30, r3
      mr        r31, r4
      lbz       r0, 0x24(r5)
      cmplwi    r0, 0
      beq-      .loc_0x4DC
      lwz       r0, 0x1C(r5)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x4DC
      lfs       f1, 0x200(r31)
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x80
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x4DC

    .loc_0x80:
      mr        r3, r31
      li        r4, 0
      bl        -0x1D4318
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB8
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x4DC

    .loc_0xB8:
      mr        r4, r31
      addi      r3, r1, 0x80
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f29, 0x1A0(r31)
      lfs       f0, 0x88(r1)
      lwz       r3, 0xC0(r31)
      fsubs     f2, f0, f29
      lfs       f30, 0x198(r31)
      lfs       f1, 0x80(r1)
      lfs       f0, 0x35C(r3)
      fsubs     f3, f1, f30
      fmuls     f1, f2, f2
      fmuls     f0, f0, f0
      fmadds    f31, f3, f3, f1
      fcmpo     cr0, f31, f0
      ble-      .loc_0x1D0
      mr        r4, r31
      addi      r3, r1, 0x74
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f4, 0x74(r1)
      lis       r3, 0x8051
      lfs       f0, 0x7C(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x78(r1)
      fsubs     f1, f30, f4
      fsubs     f2, f29, f0
      stfs      f4, 0x68(r1)
      stfs      f3, 0x6C(r1)
      stfs      f0, 0x70(r1)
      bl        -0x2B3924
      bl        0x1291A0
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x1291A8
      fabs      f1, f1
      lfs       f0, -0x1400(r2)
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x1AC
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x9
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x4DC

    .loc_0x1AC:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x6
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x4DC

    .loc_0x1D0:
      mr        r3, r31
      bl        0x4430
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x204
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x3
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x4DC

    .loc_0x204:
      mr        r3, r31
      bl        0x41AC
      cmplwi    r3, 0
      beq-      .loc_0x32C
      mr        r4, r3
      addi      r3, r1, 0x50
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
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
      bl        -0x2B3A6C
      bl        0x129058
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x129060
      lwz       r3, 0xC0(r31)
      fabs      f2, f1
      lfs       f0, -0x1404(r2)
      lfs       f3, 0x58C(r3)
      lfs       f1, -0x1408(r2)
      frsp      f2, f2
      fmuls     f0, f0, f3
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      bne-      .loc_0x308
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x8
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x4DC

    .loc_0x308:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x5
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x4DC

    .loc_0x32C:
      lwz       r3, 0xC0(r31)
      lfs       f0, 0x384(r3)
      fmuls     f0, f0, f0
      fcmpo     cr0, f31, f0
      bge-      .loc_0x414
      mr        r4, r31
      addi      r3, r1, 0x2C
      lwz       r12, 0x0(r31)
      lfs       f29, 0x2E4(r31)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x2EC(r31)
      mtctr     r12
      bctrl
      lfs       f4, 0x2C(r1)
      lis       r3, 0x8051
      lfs       f0, 0x34(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x30(r1)
      fsubs     f1, f29, f4
      fsubs     f2, f30, f0
      stfs      f4, 0x20(r1)
      stfs      f3, 0x24(r1)
      stfs      f0, 0x28(r1)
      bl        -0x2B3B68
      bl        0x128F5C
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x128F64
      fabs      f1, f1
      lfs       f0, -0x1400(r2)
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x3F0
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0xA
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x4DC

    .loc_0x3F0:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x7
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x4DC

    .loc_0x414:
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f4, 0x14(r1)
      lis       r3, 0x8051
      lfs       f0, 0x1C(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x18(r1)
      fsubs     f1, f30, f4
      fsubs     f2, f29, f0
      stfs      f4, 0x8(r1)
      stfs      f3, 0xC(r1)
      stfs      f0, 0x10(r1)
      bl        -0x2B3C34
      bl        0x128E90
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x128E98
      fabs      f1, f1
      lfs       f0, -0x1400(r2)
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x4BC
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x9
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x4DC

    .loc_0x4BC:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x6
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x4DC:
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
 * Address:	802E8DF4
 * Size:	000004
 */
void Game::MiniHoudai::StateLost::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802E8DF8
 * Size:	000060
 */
void Game::MiniHoudai::StateAttack::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x1418(r2)
      stw       r0, 0x14(r1)
      li        r0, -0x1
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r3, r31
      stw       r0, 0x2D4(r4)
      stfs      f0, 0x2CC(r4)
      stfs      f0, 0x2C8(r4)
      stfs      f0, 0x1D4(r4)
      stfs      f0, 0x1D8(r4)
      stfs      f0, 0x1DC(r4)
      bl        -0x1E7464
      mr        r3, r31
      li        r4, 0x3
      li        r5, 0
      bl        -0x1E3E3C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E8E58
 * Size:	0006CC
 */
void Game::MiniHoudai::StateAttack::exec((Game::EnemyBase*))
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
      mr        r31, r4
      mr        r30, r3
      mr        r3, r31
      bl        -0x1E1B58
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB0
      mr        r3, r31
      bl        0x4504
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x84
      mr        r3, r31
      bl        0x44D0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB0
      lfs       f1, 0x2CC(r31)
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xB0
      stfs      f0, 0x2CC(r31)
      mr        r3, r31
      bl        -0x1E1CD0
      b         .loc_0xB0

    .loc_0x84:
      mr        r3, r31
      bl        0x44A0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB0
      lfs       f1, 0x2CC(r31)
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xB0
      stfs      f0, 0x2CC(r31)
      mr        r3, r31
      bl        -0x1E1D00

    .loc_0xB0:
      mr        r3, r31
      bl        0x4450
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xC8
      mr        r3, r31
      bl        0x44D0

    .loc_0xC8:
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x2CC(r31)
      lfs       f1, 0x54(r3)
      lfs       f0, -0x1418(r2)
      fadds     f1, f2, f1
      stfs      f1, 0x2CC(r31)
      lfs       f1, 0x200(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x114
      mr        r3, r31
      bl        -0x1E1C14
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x108
      mr        r3, r31
      bl        -0x1E1D58

    .loc_0x108:
      mr        r3, r31
      bl        -0x1E3CC4
      b         .loc_0x148

    .loc_0x114:
      mr        r3, r31
      li        r4, 0
      bl        -0x1D491C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x148
      mr        r3, r31
      bl        -0x1E1C4C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x140
      mr        r3, r31
      bl        -0x1E1D90

    .loc_0x140:
      mr        r3, r31
      bl        -0x1E3CFC

    .loc_0x148:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x69C
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x2
      bne-      .loc_0x188
      lfs       f0, -0x1418(r2)
      mr        r3, r31
      stfs      f0, 0x2CC(r31)
      bl        -0x1E1CE8
      mr        r3, r31
      bl        0x4344
      mr        r3, r31
      bl        0x47A0
      b         .loc_0x69C

    .loc_0x188:
      cmplwi    r0, 0x3
      bne-      .loc_0x1A4
      mr        r3, r31
      bl        0x4680
      mr        r3, r31
      bl        0x47B8
      b         .loc_0x69C

    .loc_0x1A4:
      cmplwi    r0, 0x4
      bne-      .loc_0x1DC
      mr        r3, r31
      bl        -0x1E1D08
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1D0
      lfs       f1, 0x200(r31)
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      beq-      .loc_0x69C

    .loc_0x1D0:
      mr        r3, r31
      bl        0x439C
      b         .loc_0x69C

    .loc_0x1DC:
      cmplwi    r0, 0x5
      bne-      .loc_0x200
      lfs       f0, -0x1418(r2)
      mr        r3, r31
      stfs      f0, 0x2CC(r31)
      bl        -0x1E1D68
      mr        r3, r31
      bl        0x42E8
      b         .loc_0x69C

    .loc_0x200:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x69C
      lfs       f1, 0x200(r31)
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x240
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x69C

    .loc_0x240:
      mr        r3, r31
      li        r4, 0
      bl        -0x1D4A48
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x278
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x69C

    .loc_0x278:
      mr        r4, r31
      addi      r3, r1, 0x80
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f29, 0x1A0(r31)
      lfs       f0, 0x88(r1)
      lwz       r3, 0xC0(r31)
      fsubs     f2, f0, f29
      lfs       f30, 0x198(r31)
      lfs       f1, 0x80(r1)
      lfs       f0, 0x35C(r3)
      fsubs     f3, f1, f30
      fmuls     f1, f2, f2
      fmuls     f0, f0, f0
      fmadds    f31, f3, f3, f1
      fcmpo     cr0, f31, f0
      ble-      .loc_0x390
      mr        r4, r31
      addi      r3, r1, 0x74
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f4, 0x74(r1)
      lis       r3, 0x8051
      lfs       f0, 0x7C(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x78(r1)
      fsubs     f1, f30, f4
      fsubs     f2, f29, f0
      stfs      f4, 0x68(r1)
      stfs      f3, 0x6C(r1)
      stfs      f0, 0x70(r1)
      bl        -0x2B4054
      bl        0x128A70
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x128A78
      fabs      f1, f1
      lfs       f0, -0x1400(r2)
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x36C
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x9
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x69C

    .loc_0x36C:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x6
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x69C

    .loc_0x390:
      mr        r3, r31
      bl        0x3D00
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x3C4
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x3
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x69C

    .loc_0x3C4:
      mr        r3, r31
      bl        0x3A7C
      cmplwi    r3, 0
      beq-      .loc_0x4EC
      mr        r4, r3
      addi      r3, r1, 0x50
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
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
      bl        -0x2B419C
      bl        0x128928
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x128930
      lwz       r3, 0xC0(r31)
      fabs      f2, f1
      lfs       f0, -0x1404(r2)
      lfs       f3, 0x58C(r3)
      lfs       f1, -0x1408(r2)
      frsp      f2, f2
      fmuls     f0, f0, f3
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      bne-      .loc_0x4C8
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x8
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x69C

    .loc_0x4C8:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x5
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x69C

    .loc_0x4EC:
      lwz       r3, 0xC0(r31)
      lfs       f0, 0x384(r3)
      fmuls     f0, f0, f0
      fcmpo     cr0, f31, f0
      bge-      .loc_0x5D4
      mr        r4, r31
      addi      r3, r1, 0x2C
      lwz       r12, 0x0(r31)
      lfs       f29, 0x2E4(r31)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x2EC(r31)
      mtctr     r12
      bctrl
      lfs       f4, 0x2C(r1)
      lis       r3, 0x8051
      lfs       f0, 0x34(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x30(r1)
      fsubs     f1, f29, f4
      fsubs     f2, f30, f0
      stfs      f4, 0x20(r1)
      stfs      f3, 0x24(r1)
      stfs      f0, 0x28(r1)
      bl        -0x2B4298
      bl        0x12882C
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x128834
      fabs      f1, f1
      lfs       f0, -0x1400(r2)
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x5B0
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0xA
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x69C

    .loc_0x5B0:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x7
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x69C

    .loc_0x5D4:
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f4, 0x14(r1)
      lis       r3, 0x8051
      lfs       f0, 0x1C(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x18(r1)
      fsubs     f1, f30, f4
      fsubs     f2, f29, f0
      stfs      f4, 0x8(r1)
      stfs      f3, 0xC(r1)
      stfs      f0, 0x10(r1)
      bl        -0x2B4364
      bl        0x128760
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x128768
      fabs      f1, f1
      lfs       f0, -0x1400(r2)
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x67C
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x9
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x69C

    .loc_0x67C:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x6
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x69C:
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
 * Address:	802E9524
 * Size:	000024
 */
void Game::MiniHoudai::StateAttack::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      bl        -0x1E7BB8
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E9548
 * Size:	000068
 */
void Game::MiniHoudai::StateFlick::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x1418(r2)
      stw       r0, 0x14(r1)
      li        r0, -0x1
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r3, r31
      stw       r0, 0x2D4(r4)
      stfs      f0, 0x2C8(r4)
      stfs      f0, 0x1D4(r4)
      stfs      f0, 0x1D8(r4)
      stfs      f0, 0x1DC(r4)
      bl        -0x1E7BB0
      mr        r3, r31
      li        r4, 0x4
      li        r5, 0
      bl        -0x1E4588
      lfs       f1, -0x13FC(r2)
      mr        r3, r31
      bl        -0x1E2208
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E95B0
 * Size:	000544
 */
void Game::MiniHoudai::StateFlick::exec((Game::EnemyBase*))
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
      lwz       r5, 0x188(r4)
      mr        r30, r3
      mr        r31, r4
      lbz       r0, 0x24(r5)
      cmplwi    r0, 0
      beq-      .loc_0x514
      lwz       r0, 0x1C(r5)
      cmplwi    r0, 0x2
      bne-      .loc_0xBC
      lwz       r5, 0xC0(r31)
      mr        r3, r31
      lfs       f4, -0x140C(r2)
      li        r4, 0
      lfs       f1, 0x53C(r5)
      lfs       f2, 0x4C4(r5)
      lfs       f3, 0x4EC(r5)
      bl        -0x1D6500
      lwz       r5, 0xC0(r31)
      mr        r3, r31
      lfs       f4, -0x140C(r2)
      li        r4, 0
      lfs       f1, 0x514(r5)
      lfs       f2, 0x4C4(r5)
      lfs       f3, 0x4EC(r5)
      bl        -0x1D6168
      lwz       r5, 0xC0(r31)
      mr        r3, r31
      lfs       f4, -0x140C(r2)
      li        r4, 0
      lfs       f1, 0x514(r5)
      lfs       f2, 0x4C4(r5)
      lfs       f3, 0x4EC(r5)
      bl        -0x1D5ECC
      lfs       f0, -0x1418(r2)
      stfs      f0, 0x20C(r31)
      b         .loc_0x514

    .loc_0xBC:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x514
      lfs       f1, 0x200(r31)
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0xF4
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x514

    .loc_0xF4:
      lwz       r12, 0x0(r4)
      addi      r3, r1, 0x80
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f29, 0x1A0(r31)
      lfs       f0, 0x88(r1)
      lwz       r3, 0xC0(r31)
      fsubs     f2, f0, f29
      lfs       f30, 0x198(r31)
      lfs       f1, 0x80(r1)
      lfs       f0, 0x35C(r3)
      fsubs     f3, f1, f30
      fmuls     f1, f2, f2
      fmuls     f0, f0, f0
      fmadds    f31, f3, f3, f1
      fcmpo     cr0, f31, f0
      ble-      .loc_0x208
      mr        r4, r31
      addi      r3, r1, 0x74
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f4, 0x74(r1)
      lis       r3, 0x8051
      lfs       f0, 0x7C(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x78(r1)
      fsubs     f1, f30, f4
      fsubs     f2, f29, f0
      stfs      f4, 0x68(r1)
      stfs      f3, 0x6C(r1)
      stfs      f0, 0x70(r1)
      bl        -0x2B4624
      bl        0x1284A0
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x1284A8
      fabs      f1, f1
      lfs       f0, -0x1400(r2)
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x1E4
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x9
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x514

    .loc_0x1E4:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x6
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x514

    .loc_0x208:
      mr        r3, r31
      bl        0x3730
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x23C
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x3
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x514

    .loc_0x23C:
      mr        r3, r31
      bl        0x34AC
      cmplwi    r3, 0
      beq-      .loc_0x364
      mr        r4, r3
      addi      r3, r1, 0x50
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
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
      bl        -0x2B476C
      bl        0x128358
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x128360
      lwz       r3, 0xC0(r31)
      fabs      f2, f1
      lfs       f0, -0x1404(r2)
      lfs       f3, 0x58C(r3)
      lfs       f1, -0x1408(r2)
      frsp      f2, f2
      fmuls     f0, f0, f3
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      bne-      .loc_0x340
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x8
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x514

    .loc_0x340:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x5
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x514

    .loc_0x364:
      lwz       r3, 0xC0(r31)
      lfs       f0, 0x384(r3)
      fmuls     f0, f0, f0
      fcmpo     cr0, f31, f0
      bge-      .loc_0x44C
      mr        r4, r31
      addi      r3, r1, 0x2C
      lwz       r12, 0x0(r31)
      lfs       f29, 0x2E4(r31)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x2EC(r31)
      mtctr     r12
      bctrl
      lfs       f4, 0x2C(r1)
      lis       r3, 0x8051
      lfs       f0, 0x34(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x30(r1)
      fsubs     f1, f29, f4
      fsubs     f2, f30, f0
      stfs      f4, 0x20(r1)
      stfs      f3, 0x24(r1)
      stfs      f0, 0x28(r1)
      bl        -0x2B4868
      bl        0x12825C
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x128264
      fabs      f1, f1
      lfs       f0, -0x1400(r2)
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x428
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0xA
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x514

    .loc_0x428:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x7
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x514

    .loc_0x44C:
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f4, 0x14(r1)
      lis       r3, 0x8051
      lfs       f0, 0x1C(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x18(r1)
      fsubs     f1, f30, f4
      fsubs     f2, f29, f0
      stfs      f4, 0x8(r1)
      stfs      f3, 0xC(r1)
      stfs      f0, 0x10(r1)
      bl        -0x2B4934
      bl        0x128190
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x128198
      fabs      f1, f1
      lfs       f0, -0x1400(r2)
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x4F4
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x9
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x514

    .loc_0x4F4:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x6
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x514:
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
 * Address:	802E9AF4
 * Size:	00003C
 */
void Game::MiniHoudai::StateFlick::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r3, r31
      bl        -0x1E8190
      lfs       f1, -0x13F8(r2)
      mr        r3, r31
      bl        -0x1E2788
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E9B30
 * Size:	00005C
 */
void Game::MiniHoudai::StateTurn::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x1418(r2)
      stw       r0, 0x14(r1)
      li        r0, -0x1
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r3, r31
      stfs      f0, 0x2D0(r4)
      stw       r0, 0x2D4(r4)
      stfs      f0, 0x1D4(r4)
      stfs      f0, 0x1D8(r4)
      stfs      f0, 0x1DC(r4)
      bl        -0x1E8198
      mr        r3, r31
      li        r4, 0x2
      li        r5, 0
      bl        -0x1E4B70
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E9B8C
 * Size:	0006AC
 */
void Game::MiniHoudai::StateTurn::exec((Game::EnemyBase*))
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
      lfs       f0, -0x1418(r2)
      mr        r31, r4
      lfs       f1, 0x200(r4)
      mr        r30, r3
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x88
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E496C
      b         .loc_0x614

    .loc_0x88:
      mr        r3, r31
      li        r4, 0
      bl        -0x1D55C4
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB0
      li        r0, 0x4
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E4994
      b         .loc_0x614

    .loc_0xB0:
      mr        r3, r31
      bl        0x32AC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xD4
      li        r0, 0x3
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E49B8
      b         .loc_0x614

    .loc_0xD4:
      mr        r3, r31
      bl        0x3038
      mr.       r29, r3
      beq-      .loc_0x38C
      lfs       f0, -0x1418(r2)
      mr        r4, r29
      addi      r3, r1, 0x38
      stfs      f0, 0x2C8(r31)
      lwz       r12, 0x0(r29)
      lwz       r5, 0xC0(r31)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x334(r5)
      lfs       f29, 0x30C(r5)
      mtctr     r12
      bctrl
      mr        r4, r31
      addi      r3, r1, 0x44
      lwz       r12, 0x0(r31)
      lfs       f24, 0x38(r1)
      lwz       r12, 0x8(r12)
      lfs       f25, 0x40(r1)
      mtctr     r12
      bctrl
      lfs       f1, 0x44(r1)
      lis       r3, 0x8051
      lfs       f0, 0x4C(r1)
      subi      r3, r3, 0x2E20
      fsubs     f1, f24, f1
      fsubs     f2, f25, f0
      bl        -0x2B4BCC
      bl        0x127EF8
      lwz       r12, 0x0(r31)
      fmr       f24, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f24
      bl        0x127F00
      fmr       f31, f1
      lfs       f0, -0x1404(r2)
      lfs       f1, -0x1408(r2)
      fmuls     f0, f0, f30
      fmuls     f24, f31, f29
      fmuls     f1, f1, f0
      fabs      f0, f24
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x1B4
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f24, f0
      ble-      .loc_0x1B0
      fmr       f24, f1
      b         .loc_0x1B4

    .loc_0x1B0:
      fneg      f24, f1

    .loc_0x1B4:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f24, f1
      bl        0x127E78
      stfs      f1, 0x1FC(r31)
      mr        r3, r31
      lfs       f0, 0x1FC(r31)
      stfs      f0, 0x1A8(r31)
      bl        0x2BEC
      mr        r4, r31
      lwz       r5, 0xC0(r31)
      lwz       r12, 0x0(r31)
      fmr       f29, f1
      addi      r3, r1, 0x5C
      lfs       f24, 0x3FC(r5)
      lwz       r12, 0x8(r12)
      lfs       f25, 0x3D4(r5)
      lfs       f26, 0x3AC(r5)
      mtctr     r12
      bctrl
      mr        r4, r29
      addi      r3, r1, 0x50
      lwz       r12, 0x0(r29)
      lfs       f30, 0x5C(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      lfs       f0, 0x50(r1)
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x74
      fsubs     f27, f0, f30
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r29
      addi      r3, r1, 0x68
      lwz       r12, 0x0(r29)
      lfs       f30, 0x78(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      lfs       f0, 0x6C(r1)
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x8C
      fsubs     f28, f0, f30
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r29
      addi      r3, r1, 0x80
      lwz       r12, 0x0(r29)
      lfs       f30, 0x94(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x88(r1)
      fmuls     f26, f26, f26
      fmuls     f25, f25, f25
      li        r3, 0x1
      fsubs     f0, f0, f30
      li        r4, 0
      fmuls     f0, f0, f0
      fmadds    f0, f27, f27, f0
      fcmpo     cr0, f0, f26
      ble-      .loc_0x2F8
      fcmpo     cr0, f0, f25
      mr        r0, r4
      ble-      .loc_0x2EC
      fabs      f0, f28
      frsp      f0, f0
      fcmpo     cr0, f0, f24
      bge-      .loc_0x2EC
      mr        r0, r3

    .loc_0x2EC:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x2F8
      li        r4, 0x1

    .loc_0x2F8:
      rlwinm.   r0,r4,0,24,31
      bne-      .loc_0x330
      lfs       f0, -0x1404(r2)
      fabs      f2, f31
      lfs       f1, -0x1408(r2)
      fmuls     f0, f0, f29
      frsp      f2, f2
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      mfcr      r0
      rlwinm.   r0,r0,3,31,31
      beq-      .loc_0x330
      li        r3, 0

    .loc_0x330:
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x34C
      li        r0, 0x2
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E4C30
      b         .loc_0x614

    .loc_0x34C:
      lwz       r3, 0xC0(r31)
      fabs      f2, f31
      lfs       f0, -0x1404(r2)
      lfs       f3, 0x58C(r3)
      lfs       f1, -0x1408(r2)
      frsp      f2, f2
      fmuls     f0, f0, f3
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      bne-      .loc_0x614
      li        r0, 0x8
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E4C70
      b         .loc_0x614

    .loc_0x38C:
      mr        r4, r31
      addi      r3, r1, 0x98
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f27, 0x1A0(r31)
      lfs       f0, 0xA0(r1)
      lwz       r5, 0xC0(r31)
      fsubs     f2, f0, f27
      lfs       f26, 0x198(r31)
      lfs       f1, 0x98(r1)
      lfs       f0, 0x384(r5)
      fsubs     f3, f1, f26
      fmuls     f1, f2, f2
      fmuls     f0, f0, f0
      fmadds    f1, f3, f3, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x4FC
      mr        r4, r31
      addi      r3, r1, 0x2C
      lwz       r12, 0x0(r31)
      lfs       f26, 0x2E4(r31)
      lwz       r12, 0x8(r12)
      lfs       f27, 0x2EC(r31)
      lfs       f25, 0x334(r5)
      lfs       f24, 0x30C(r5)
      mtctr     r12
      bctrl
      lfs       f4, 0x2C(r1)
      lis       r3, 0x8051
      lfs       f0, 0x34(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x30(r1)
      fsubs     f1, f26, f4
      fsubs     f2, f27, f0
      stfs      f4, 0x20(r1)
      stfs      f3, 0x24(r1)
      stfs      f0, 0x28(r1)
      bl        -0x2B4EAC
      bl        0x127C18
      lwz       r12, 0x0(r31)
      fmr       f26, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f26
      bl        0x127C20
      fmr       f31, f1
      lfs       f0, -0x1404(r2)
      lfs       f1, -0x1408(r2)
      fmuls     f0, f0, f25
      fmuls     f24, f31, f24
      fmuls     f1, f1, f0
      fabs      f0, f24
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x494
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f24, f0
      ble-      .loc_0x490
      fmr       f24, f1
      b         .loc_0x494

    .loc_0x490:
      fneg      f24, f1

    .loc_0x494:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f24, f1
      bl        0x127B98
      fabs      f3, f31
      stfs      f1, 0x1FC(r31)
      lfs       f0, -0x1400(r2)
      lfs       f2, 0x1FC(r31)
      frsp      f1, f3
      stfs      f2, 0x1A8(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x4E8
      li        r0, 0xA
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E4DCC
      b         .loc_0x614

    .loc_0x4E8:
      li        r0, 0x7
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E4DE0
      b         .loc_0x614

    .loc_0x4FC:
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r31)
      lfs       f25, 0x334(r5)
      lwz       r12, 0x8(r12)
      lfs       f24, 0x30C(r5)
      mtctr     r12
      bctrl
      lfs       f4, 0x14(r1)
      lis       r3, 0x8051
      lfs       f0, 0x1C(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x18(r1)
      fsubs     f1, f26, f4
      fsubs     f2, f27, f0
      stfs      f4, 0x8(r1)
      stfs      f3, 0xC(r1)
      stfs      f0, 0x10(r1)
      bl        -0x2B4FC8
      bl        0x127AFC
      lwz       r12, 0x0(r31)
      fmr       f26, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f26
      bl        0x127B04
      fmr       f31, f1
      lfs       f0, -0x1404(r2)
      lfs       f1, -0x1408(r2)
      fmuls     f0, f0, f25
      fmuls     f24, f31, f24
      fmuls     f1, f1, f0
      fabs      f0, f24
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x5B0
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f24, f0
      ble-      .loc_0x5AC
      fmr       f24, f1
      b         .loc_0x5B0

    .loc_0x5AC:
      fneg      f24, f1

    .loc_0x5B0:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f24, f1
      bl        0x127A7C
      fabs      f3, f31
      stfs      f1, 0x1FC(r31)
      lfs       f0, -0x1400(r2)
      lfs       f2, 0x1FC(r31)
      frsp      f1, f3
      stfs      f2, 0x1A8(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x604
      li        r0, 0x9
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E4EE8
      b         .loc_0x614

    .loc_0x604:
      li        r0, 0x6
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E4EFC

    .loc_0x614:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x650
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x650
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r6, 0
      lwz       r5, 0x2D4(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x650:
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
 * Address:	802EA238
 * Size:	000024
 */
void Game::MiniHoudai::StateTurn::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      bl        -0x1E88CC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802EA25C
 * Size:	000044
 */
void Game::MiniHoudai::StateTurnHome::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x1418(r2)
      mr        r3, r4
      stw       r0, 0x14(r1)
      li        r0, -0x1
      li        r5, 0
      stw       r0, 0x2D4(r4)
      li        r4, 0x2
      stfs      f0, 0x1D4(r3)
      stfs      f0, 0x1D8(r3)
      stfs      f0, 0x1DC(r3)
      bl        -0x1E5288
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802EA2A0
 * Size:	000368
 */
void Game::MiniHoudai::StateTurnHome::exec((Game::EnemyBase*))
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
      stw       r30, 0x48(r1)
      lfs       f0, -0x1418(r2)
      mr        r31, r4
      lfs       f1, 0x200(r4)
      mr        r30, r3
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x64
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E505C
      b         .loc_0x2F4

    .loc_0x64:
      mr        r3, r31
      li        r4, 0
      bl        -0x1D5CB4
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x8C
      li        r0, 0x4
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E5084
      b         .loc_0x2F4

    .loc_0x8C:
      mr        r3, r31
      bl        0x2BBC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB0
      li        r0, 0x3
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E50A8
      b         .loc_0x2F4

    .loc_0xB0:
      mr        r4, r31
      addi      r3, r1, 0x38
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f31, 0x198(r31)
      mr        r3, r31
      lfs       f28, 0x1A0(r31)
      bl        0x2928
      cmplwi    r3, 0
      beq-      .loc_0x1EC
      mr        r4, r31
      lwz       r5, 0xC0(r31)
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x2C
      lfs       f29, 0x334(r5)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x30C(r5)
      mtctr     r12
      bctrl
      lfs       f4, 0x2C(r1)
      lis       r3, 0x8051
      lfs       f0, 0x34(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x30(r1)
      fsubs     f1, f31, f4
      fsubs     f2, f28, f0
      stfs      f4, 0x20(r1)
      stfs      f3, 0x24(r1)
      stfs      f0, 0x28(r1)
      bl        -0x2B52C4
      bl        0x127800
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x127808
      fmr       f31, f1
      lfs       f0, -0x1404(r2)
      lfs       f1, -0x1408(r2)
      fmuls     f0, f0, f29
      fmuls     f29, f31, f30
      fmuls     f1, f1, f0
      fabs      f0, f29
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x198
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f29, f0
      ble-      .loc_0x194
      fmr       f29, f1
      b         .loc_0x198

    .loc_0x194:
      fneg      f29, f1

    .loc_0x198:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f29, f1
      bl        0x127780
      fabs      f3, f31
      stfs      f1, 0x1FC(r31)
      lfs       f0, -0x1400(r2)
      lfs       f2, 0x1FC(r31)
      frsp      f1, f3
      stfs      f2, 0x1A8(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x2F4
      li        r0, 0x9
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E51E4
      b         .loc_0x2F4

    .loc_0x1EC:
      mr        r4, r31
      lwz       r5, 0xC0(r31)
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x14
      lfs       f30, 0x334(r5)
      lwz       r12, 0x8(r12)
      lfs       f29, 0x30C(r5)
      mtctr     r12
      bctrl
      lfs       f4, 0x14(r1)
      lis       r3, 0x8051
      lfs       f0, 0x1C(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x18(r1)
      fsubs     f1, f31, f4
      fsubs     f2, f28, f0
      stfs      f4, 0x8(r1)
      stfs      f3, 0xC(r1)
      stfs      f0, 0x10(r1)
      bl        -0x2B53D0
      bl        0x1276F4
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x1276FC
      fmr       f31, f1
      lfs       f0, -0x1404(r2)
      lfs       f1, -0x1408(r2)
      fmuls     f0, f0, f30
      fmuls     f29, f31, f29
      fmuls     f1, f1, f0
      fabs      f0, f29
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x2A4
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f29, f0
      ble-      .loc_0x2A0
      fmr       f29, f1
      b         .loc_0x2A4

    .loc_0x2A0:
      fneg      f29, f1

    .loc_0x2A4:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f29, f1
      bl        0x127674
      fabs      f3, f31
      stfs      f1, 0x1FC(r31)
      lfs       f0, -0x1400(r2)
      lfs       f2, 0x1FC(r31)
      frsp      f1, f3
      stfs      f2, 0x1A8(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x2F4
      li        r0, 0x9
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E52F0

    .loc_0x2F4:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x330
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x330
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r6, 0
      lwz       r5, 0x2D4(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x330:
      psq_l     f31,0x88(r1),0,0
      lfd       f31, 0x80(r1)
      psq_l     f30,0x78(r1),0,0
      lfd       f30, 0x70(r1)
      psq_l     f29,0x68(r1),0,0
      lfd       f29, 0x60(r1)
      psq_l     f28,0x58(r1),0,0
      lfd       f28, 0x50(r1)
      lwz       r31, 0x4C(r1)
      lwz       r0, 0x94(r1)
      lwz       r30, 0x48(r1)
      mtlr      r0
      addi      r1, r1, 0x90
      blr
    */
}

/*
 * --INFO--
 * Address:	802EA608
 * Size:	000004
 */
void Game::MiniHoudai::StateTurnHome::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802EA60C
 * Size:	000044
 */
void Game::MiniHoudai::StateTurnPath::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x1418(r2)
      mr        r3, r4
      stw       r0, 0x14(r1)
      li        r0, -0x1
      li        r5, 0
      stw       r0, 0x2D4(r4)
      li        r4, 0x2
      stfs      f0, 0x1D4(r3)
      stfs      f0, 0x1D8(r3)
      stfs      f0, 0x1DC(r3)
      bl        -0x1E5638
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802EA650
 * Size:	000390
 */
void Game::MiniHoudai::StateTurnPath::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      stw       r0, 0x84(r1)
      stfd      f31, 0x70(r1)
      psq_st    f31,0x78(r1),0,0
      stfd      f30, 0x60(r1)
      psq_st    f30,0x68(r1),0,0
      stfd      f29, 0x50(r1)
      psq_st    f29,0x58(r1),0,0
      stfd      f28, 0x40(r1)
      psq_st    f28,0x48(r1),0,0
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      mr        r31, r4
      mr        r30, r3
      mr        r3, r31
      bl        0x27A0
      lfs       f1, 0x200(r31)
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x6C
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E5414
      b         .loc_0x31C

    .loc_0x6C:
      mr        r3, r31
      li        r4, 0x1
      bl        -0x1D606C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x94
      li        r0, 0x4
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E543C
      b         .loc_0x31C

    .loc_0x94:
      mr        r3, r31
      bl        0x2804
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB8
      li        r0, 0x3
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E5460
      b         .loc_0x31C

    .loc_0xB8:
      mr        r3, r31
      bl        0x2590
      cmplwi    r3, 0
      beq-      .loc_0x20C
      mr        r4, r3
      lwz       r5, 0xC0(r31)
      lwz       r12, 0x0(r3)
      addi      r3, r1, 0x20
      lfs       f29, 0x334(r5)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x30C(r5)
      mtctr     r12
      bctrl
      mr        r4, r31
      addi      r3, r1, 0x2C
      lwz       r12, 0x0(r31)
      lfs       f31, 0x20(r1)
      lwz       r12, 0x8(r12)
      lfs       f28, 0x28(r1)
      mtctr     r12
      bctrl
      lfs       f1, 0x2C(r1)
      lis       r3, 0x8051
      lfs       f0, 0x34(r1)
      subi      r3, r3, 0x2E20
      fsubs     f1, f31, f1
      fsubs     f2, f28, f0
      bl        -0x2B566C
      bl        0x127458
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x127460
      fmr       f31, f1
      lfs       f0, -0x1404(r2)
      lfs       f1, -0x1408(r2)
      fmuls     f0, f0, f29
      fmuls     f29, f31, f30
      fmuls     f1, f1, f0
      fabs      f0, f29
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x190
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f29, f0
      ble-      .loc_0x18C
      fmr       f29, f1
      b         .loc_0x190

    .loc_0x18C:
      fneg      f29, f1

    .loc_0x190:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f29, f1
      bl        0x1273D8
      stfs      f1, 0x1FC(r31)
      fabs      f2, f31
      lfs       f0, -0x1404(r2)
      lfs       f3, 0x1FC(r31)
      lfs       f1, -0x1408(r2)
      frsp      f2, f2
      stfs      f3, 0x1A8(r31)
      lwz       r3, 0xC0(r31)
      lfs       f3, 0x58C(r3)
      fmuls     f0, f0, f3
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      bne-      .loc_0x1F8
      li        r0, 0x8
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E55A0
      b         .loc_0x31C

    .loc_0x1F8:
      li        r0, 0x5
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E55B4
      b         .loc_0x31C

    .loc_0x20C:
      mr        r4, r31
      lwz       r5, 0xC0(r31)
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x14
      lfs       f28, 0x2E4(r31)
      lwz       r12, 0x8(r12)
      lfs       f31, 0x2EC(r31)
      lfs       f30, 0x334(r5)
      lfs       f29, 0x30C(r5)
      mtctr     r12
      bctrl
      lfs       f4, 0x14(r1)
      lis       r3, 0x8051
      lfs       f0, 0x1C(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x18(r1)
      fsubs     f1, f28, f4
      fsubs     f2, f31, f0
      stfs      f4, 0x8(r1)
      stfs      f3, 0xC(r1)
      stfs      f0, 0x10(r1)
      bl        -0x2B57A8
      bl        0x12731C
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x127324
      fmr       f31, f1
      lfs       f0, -0x1404(r2)
      lfs       f1, -0x1408(r2)
      fmuls     f0, f0, f30
      fmuls     f29, f31, f29
      fmuls     f1, f1, f0
      fabs      f0, f29
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x2CC
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f29, f0
      ble-      .loc_0x2C8
      fmr       f29, f1
      b         .loc_0x2CC

    .loc_0x2C8:
      fneg      f29, f1

    .loc_0x2CC:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f29, f1
      bl        0x12729C
      fabs      f3, f31
      stfs      f1, 0x1FC(r31)
      lfs       f0, -0x1400(r2)
      lfs       f2, 0x1FC(r31)
      frsp      f1, f3
      stfs      f2, 0x1A8(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x31C
      li        r0, 0xA
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E56C8

    .loc_0x31C:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x358
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x358
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r6, 0
      lwz       r5, 0x2D4(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x358:
      psq_l     f31,0x78(r1),0,0
      lfd       f31, 0x70(r1)
      psq_l     f30,0x68(r1),0,0
      lfd       f30, 0x60(r1)
      psq_l     f29,0x58(r1),0,0
      lfd       f29, 0x50(r1)
      psq_l     f28,0x48(r1),0,0
      lfd       f28, 0x40(r1)
      lwz       r31, 0x3C(r1)
      lwz       r0, 0x84(r1)
      lwz       r30, 0x38(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	802EA9E0
 * Size:	000004
 */
void Game::MiniHoudai::StateTurnPath::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802EA9E4
 * Size:	000050
 */
void Game::MiniHoudai::StateWalk::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x1418(r2)
      stw       r0, 0x14(r1)
      li        r0, -0x1
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r3, r31
      stfs      f0, 0x2D0(r4)
      stw       r0, 0x2D4(r4)
      bl        -0x1E9040
      mr        r3, r31
      li        r4, 0
      li        r5, 0
      bl        -0x1E5A18
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802EAA34
 * Size:	0007CC
 */
void Game::MiniHoudai::StateWalk::exec((Game::EnemyBase*))
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
      mr        r31, r4
      lwz       r4, 0xC0(r4)
      mr        r30, r3
      lfs       f30, 0x30C(r4)
      mr        r3, r31
      lfs       f29, 0x334(r4)
      bl        -0x1E37A4
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x84
      lfs       f30, -0x13F4(r2)
      lfs       f29, -0x1414(r2)

    .loc_0x84:
      lfs       f1, 0x200(r31)
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0xAC
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E5838
      b         .loc_0x644

    .loc_0xAC:
      mr        r3, r31
      li        r4, 0
      bl        -0x1D6490
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xD4
      li        r0, 0x4
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E5860
      b         .loc_0x644

    .loc_0xD4:
      mr        r4, r31
      addi      r3, r1, 0xA4
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f26, 0x1A0(r31)
      lfs       f0, 0xAC(r1)
      lwz       r3, 0xC0(r31)
      fsubs     f2, f0, f26
      lfs       f25, 0x198(r31)
      lfs       f1, 0xA4(r1)
      lfs       f0, 0x35C(r3)
      fsubs     f3, f1, f25
      fmuls     f1, f2, f2
      fmuls     f0, f0, f0
      fmadds    f24, f3, f3, f1
      fcmpo     cr0, f24, f0
      ble-      .loc_0x134
      li        r0, 0x2
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E58C0
      b         .loc_0x644

    .loc_0x134:
      mr        r3, r31
      bl        0x2380
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x158
      li        r0, 0x3
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E58E4
      b         .loc_0x644

    .loc_0x158:
      mr        r3, r31
      bl        0x210C
      mr.       r29, r3
      beq-      .loc_0x404
      lfs       f0, -0x1418(r2)
      mr        r4, r29
      addi      r3, r1, 0x38
      stfs      f0, 0x2C8(r31)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      addi      r3, r1, 0x44
      lwz       r12, 0x0(r31)
      lfs       f24, 0x38(r1)
      lwz       r12, 0x8(r12)
      lfs       f25, 0x40(r1)
      mtctr     r12
      bctrl
      lfs       f1, 0x44(r1)
      lis       r3, 0x8051
      lfs       f0, 0x4C(r1)
      subi      r3, r3, 0x2E20
      fsubs     f1, f24, f1
      fsubs     f2, f25, f0
      bl        -0x2B5AEC
      bl        0x126FD8
      lwz       r12, 0x0(r31)
      fmr       f24, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f24
      bl        0x126FE0
      fmr       f31, f1
      lfs       f0, -0x1404(r2)
      lfs       f1, -0x1408(r2)
      fmuls     f0, f0, f29
      fmuls     f24, f31, f30
      fmuls     f1, f1, f0
      fabs      f0, f24
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x22C
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f24, f0
      ble-      .loc_0x228
      fmr       f24, f1
      b         .loc_0x22C

    .loc_0x228:
      fneg      f24, f1

    .loc_0x22C:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f24, f1
      bl        0x126F58
      stfs      f1, 0x1FC(r31)
      mr        r3, r31
      lfs       f0, 0x1FC(r31)
      stfs      f0, 0x1A8(r31)
      bl        0x1CCC
      mr        r4, r31
      lwz       r5, 0xC0(r31)
      lwz       r12, 0x0(r31)
      fmr       f30, f1
      addi      r3, r1, 0x68
      lfs       f24, 0x3FC(r5)
      lwz       r12, 0x8(r12)
      lfs       f25, 0x3D4(r5)
      lfs       f26, 0x3AC(r5)
      mtctr     r12
      bctrl
      mr        r4, r29
      addi      r3, r1, 0x5C
      lwz       r12, 0x0(r29)
      lfs       f29, 0x68(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      lfs       f0, 0x5C(r1)
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x80
      fsubs     f27, f0, f29
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r29
      addi      r3, r1, 0x74
      lwz       r12, 0x0(r29)
      lfs       f29, 0x84(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      lfs       f0, 0x78(r1)
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x98
      fsubs     f28, f0, f29
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r29
      addi      r3, r1, 0x8C
      lwz       r12, 0x0(r29)
      lfs       f29, 0xA0(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x94(r1)
      fmuls     f26, f26, f26
      fmuls     f25, f25, f25
      li        r3, 0x1
      fsubs     f0, f0, f29
      li        r4, 0
      fmuls     f0, f0, f0
      fmadds    f0, f27, f27, f0
      fcmpo     cr0, f0, f26
      ble-      .loc_0x370
      fcmpo     cr0, f0, f25
      mr        r0, r4
      ble-      .loc_0x364
      fabs      f0, f28
      frsp      f0, f0
      fcmpo     cr0, f0, f24
      bge-      .loc_0x364
      mr        r0, r3

    .loc_0x364:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x370
      li        r4, 0x1

    .loc_0x370:
      rlwinm.   r0,r4,0,24,31
      bne-      .loc_0x3A8
      lfs       f0, -0x1404(r2)
      fabs      f2, f31
      lfs       f1, -0x1408(r2)
      fmuls     f0, f0, f30
      frsp      f2, f2
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      mfcr      r0
      rlwinm.   r0,r0,3,31,31
      beq-      .loc_0x3A8
      li        r3, 0

    .loc_0x3A8:
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x3C4
      li        r0, 0x2
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E5B50
      b         .loc_0x644

    .loc_0x3C4:
      lwz       r3, 0xC0(r31)
      fabs      f2, f31
      lfs       f0, -0x1404(r2)
      lfs       f3, 0x58C(r3)
      lfs       f1, -0x1408(r2)
      frsp      f2, f2
      fmuls     f0, f0, f3
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      beq-      .loc_0x644
      li        r0, 0x5
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E5B90
      b         .loc_0x644

    .loc_0x404:
      lwz       r3, 0xC0(r31)
      lfs       f0, 0x384(r3)
      fmuls     f0, f0, f0
      fcmpo     cr0, f24, f0
      bge-      .loc_0x534
      mr        r4, r31
      addi      r3, r1, 0x2C
      lwz       r12, 0x0(r31)
      lfs       f24, 0x2E4(r31)
      lwz       r12, 0x8(r12)
      lfs       f25, 0x2EC(r31)
      mtctr     r12
      bctrl
      lfs       f4, 0x2C(r1)
      lis       r3, 0x8051
      lfs       f0, 0x34(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x30(r1)
      fsubs     f1, f24, f4
      fsubs     f2, f25, f0
      stfs      f4, 0x20(r1)
      stfs      f3, 0x24(r1)
      stfs      f0, 0x28(r1)
      bl        -0x2B5D8C
      bl        0x126D38
      lwz       r12, 0x0(r31)
      fmr       f24, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f24
      bl        0x126D40
      fmr       f31, f1
      lfs       f0, -0x1404(r2)
      lfs       f1, -0x1408(r2)
      fmuls     f0, f0, f29
      fmuls     f24, f31, f30
      fmuls     f1, f1, f0
      fabs      f0, f24
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x4CC
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f24, f0
      ble-      .loc_0x4C8
      fmr       f24, f1
      b         .loc_0x4CC

    .loc_0x4C8:
      fneg      f24, f1

    .loc_0x4CC:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f24, f1
      bl        0x126CB8
      fabs      f3, f31
      stfs      f1, 0x1FC(r31)
      lfs       f0, -0x1400(r2)
      lfs       f2, 0x1FC(r31)
      frsp      f1, f3
      stfs      f2, 0x1A8(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x520
      li        r0, 0xA
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E5CAC
      b         .loc_0x644

    .loc_0x520:
      li        r0, 0x7
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E5CC0
      b         .loc_0x644

    .loc_0x534:
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f4, 0x14(r1)
      lis       r3, 0x8051
      lfs       f0, 0x1C(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x18(r1)
      fsubs     f1, f25, f4
      fsubs     f2, f26, f0
      stfs      f4, 0x8(r1)
      stfs      f3, 0xC(r1)
      stfs      f0, 0x10(r1)
      bl        -0x2B5EA0
      bl        0x126C24
      lwz       r12, 0x0(r31)
      fmr       f24, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f24
      bl        0x126C2C
      fmr       f31, f1
      lfs       f0, -0x1404(r2)
      lfs       f1, -0x1408(r2)
      fmuls     f0, f0, f29
      fmuls     f24, f31, f30
      fmuls     f1, f1, f0
      fabs      f0, f24
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x5E0
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f24, f0
      ble-      .loc_0x5DC
      fmr       f24, f1
      b         .loc_0x5E0

    .loc_0x5DC:
      fneg      f24, f1

    .loc_0x5E0:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f24, f1
      bl        0x126BA4
      fabs      f3, f31
      stfs      f1, 0x1FC(r31)
      lfs       f0, -0x1400(r2)
      lfs       f2, 0x1FC(r31)
      frsp      f1, f3
      stfs      f2, 0x1A8(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x634
      li        r0, 0x9
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E5DC0
      b         .loc_0x644

    .loc_0x634:
      li        r0, 0x6
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E5DD4

    .loc_0x644:
      mr        r3, r31
      bl        -0x1E3D7C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x668
      lfs       f0, -0x1418(r2)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      b         .loc_0x704

    .loc_0x668:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x258(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x4E
      bne-      .loc_0x6F4
      mr        r3, r31
      lwz       r4, 0xC0(r31)
      lwz       r12, 0x0(r31)
      lfs       f24, 0x2E4(r4)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      bl        -0x21B8B8
      mr        r3, r31
      lfs       f2, 0x1D4(r31)
      lwz       r12, 0x0(r31)
      frsp      f25, f1
      lfs       f29, 0x1D8(r31)
      lfs       f0, 0x1DC(r31)
      lwz       r12, 0x64(r12)
      stfs      f2, 0x50(r1)
      stfs      f29, 0x54(r1)
      stfs      f0, 0x58(r1)
      mtctr     r12
      bctrl
      bl        -0x21BE54
      fmuls     f0, f24, f25
      frsp      f1, f1
      stfs      f0, 0x1D4(r31)
      fmuls     f0, f24, f1
      stfs      f29, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      b         .loc_0x704

    .loc_0x6F4:
      lfs       f0, -0x1418(r2)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)

    .loc_0x704:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x770
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0
      bne-      .loc_0x730
      mr        r3, r31
      li        r4, 0x1
      bl        0x2470
      b         .loc_0x770

    .loc_0x730:
      cmplwi    r0, 0x2
      bne-      .loc_0x748
      mr        r3, r31
      li        r4, 0
      bl        0x2458
      b         .loc_0x770

    .loc_0x748:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x770
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r6, 0
      lwz       r5, 0x2D4(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x770:
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
 * Address:	802EB200
 * Size:	000008
 */
void Game::MiniHoudai::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x4E
      blr
    */
}

/*
 * --INFO--
 * Address:	802EB208
 * Size:	000024
 */
void Game::MiniHoudai::StateWalk::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      bl        -0x1E989C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802EB22C
 * Size:	000034
 */
void Game::MiniHoudai::StateWalkHome::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      li        r4, 0
      stw       r0, 0x14(r1)
      li        r0, -0x1
      li        r5, 0
      stw       r0, 0x2D4(r3)
      bl        -0x1E6248
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802EB260
 * Size:	000578
 */
void Game::MiniHoudai::StateWalkHome::exec((Game::EnemyBase*))
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
      stfd      f28, 0x90(r1)
      psq_st    f28,0x98(r1),0,0
      stfd      f27, 0x80(r1)
      psq_st    f27,0x88(r1),0,0
      stw       r31, 0x7C(r1)
      stw       r30, 0x78(r1)
      mr        r31, r4
      lwz       r4, 0xC0(r4)
      mr        r30, r3
      lfs       f30, 0x30C(r4)
      mr        r3, r31
      lfs       f29, 0x334(r4)
      bl        -0x1E3FB4
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x68
      lfs       f30, -0x13F4(r2)
      lfs       f29, -0x1414(r2)

    .loc_0x68:
      lfs       f1, 0x200(r31)
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x90
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E6048
      b         .loc_0x3F4

    .loc_0x90:
      mr        r3, r31
      li        r4, 0
      bl        -0x1D6CA0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB8
      li        r0, 0x4
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E6070
      b         .loc_0x3F4

    .loc_0xB8:
      mr        r4, r31
      addi      r3, r1, 0x68
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f27, 0x1A0(r31)
      mr        r4, r31
      lfs       f0, 0x70(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      fsubs     f1, f0, f27
      lfs       f28, 0x198(r31)
      lfs       f0, 0x68(r1)
      lwz       r12, 0x8(r12)
      fsubs     f2, f0, f28
      fmuls     f0, f1, f1
      fmadds    f31, f2, f2, f0
      mtctr     r12
      bctrl
      lfs       f1, 0x8(r1)
      lis       r3, 0x8051
      lfs       f0, 0x10(r1)
      subi      r3, r3, 0x2E20
      fsubs     f1, f28, f1
      fsubs     f2, f27, f0
      bl        -0x2B6278
      bl        0x12684C
      lwz       r12, 0x0(r31)
      fmr       f28, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f28
      bl        0x126854
      fmr       f28, f1
      lfs       f0, -0x1404(r2)
      lfs       f1, -0x1408(r2)
      fmuls     f0, f0, f29
      fmuls     f29, f28, f30
      fmuls     f1, f1, f0
      fabs      f0, f29
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x18C
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f29, f0
      ble-      .loc_0x188
      fmr       f29, f1
      b         .loc_0x18C

    .loc_0x188:
      fneg      f29, f1

    .loc_0x18C:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f29, f1
      bl        0x1267CC
      stfs      f1, 0x1FC(r31)
      lfs       f0, 0x1FC(r31)
      stfs      f0, 0x1A8(r31)
      lwz       r3, 0xC0(r31)
      lfs       f0, 0x384(r3)
      fmuls     f0, f0, f0
      fcmpo     cr0, f31, f0
      bge-      .loc_0x3A8
      mr        r3, r31
      bl        0x1AC0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1EC
      li        r0, 0x3
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E61A4
      b         .loc_0x3F4

    .loc_0x1EC:
      mr        r3, r31
      bl        0x184C
      cmplwi    r3, 0
      beq-      .loc_0x2F4
      mr        r4, r3
      addi      r3, r1, 0x50
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
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
      bl        -0x2B63CC
      bl        0x1266F8
      lwz       r12, 0x0(r31)
      fmr       f28, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f28
      bl        0x126700
      lwz       r3, 0xC0(r31)
      fabs      f2, f1
      lfs       f0, -0x1404(r2)
      lfs       f3, 0x58C(r3)
      lfs       f1, -0x1408(r2)
      frsp      f2, f2
      fmuls     f0, f0, f3
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      bne-      .loc_0x2E0
      li        r0, 0x8
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E6298
      b         .loc_0x3F4

    .loc_0x2E0:
      li        r0, 0x5
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E62AC
      b         .loc_0x3F4

    .loc_0x2F4:
      mr        r4, r31
      addi      r3, r1, 0x2C
      lwz       r12, 0x0(r31)
      lfs       f27, 0x2E4(r31)
      lwz       r12, 0x8(r12)
      lfs       f28, 0x2EC(r31)
      mtctr     r12
      bctrl
      lfs       f4, 0x2C(r1)
      lis       r3, 0x8051
      lfs       f0, 0x34(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x30(r1)
      fsubs     f1, f27, f4
      fsubs     f2, f28, f0
      stfs      f4, 0x20(r1)
      stfs      f3, 0x24(r1)
      stfs      f0, 0x28(r1)
      bl        -0x2B6494
      bl        0x126630
      lwz       r12, 0x0(r31)
      fmr       f28, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f28
      bl        0x126638
      fabs      f1, f1
      lfs       f0, -0x1400(r2)
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x394
      li        r0, 0xA
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E634C
      b         .loc_0x3F4

    .loc_0x394:
      li        r0, 0x7
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E6360
      b         .loc_0x3F4

    .loc_0x3A8:
      mr        r3, r31
      bl        0x18E0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x3CC
      li        r0, 0x3
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E6384
      b         .loc_0x3F4

    .loc_0x3CC:
      fabs      f1, f28
      lfs       f0, -0x1400(r2)
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      beq-      .loc_0x3F4
      li        r0, 0x6
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E63B0

    .loc_0x3F4:
      mr        r3, r31
      bl        -0x1E4358
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x418
      lfs       f0, -0x1418(r2)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      b         .loc_0x4B4

    .loc_0x418:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x258(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x4E
      bne-      .loc_0x4A4
      mr        r3, r31
      lwz       r4, 0xC0(r31)
      lwz       r12, 0x0(r31)
      lfs       f28, 0x2E4(r4)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      bl        -0x21BE94
      mr        r3, r31
      lfs       f2, 0x1D4(r31)
      lwz       r12, 0x0(r31)
      frsp      f30, f1
      lfs       f29, 0x1D8(r31)
      lfs       f0, 0x1DC(r31)
      lwz       r12, 0x64(r12)
      stfs      f2, 0x14(r1)
      stfs      f29, 0x18(r1)
      stfs      f0, 0x1C(r1)
      mtctr     r12
      bctrl
      bl        -0x21C430
      fmuls     f0, f28, f30
      frsp      f1, f1
      stfs      f0, 0x1D4(r31)
      fmuls     f0, f28, f1
      stfs      f29, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      b         .loc_0x4B4

    .loc_0x4A4:
      lfs       f0, -0x1418(r2)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)

    .loc_0x4B4:
      lwz       r3, -0x6514(r13)
      lfs       f2, -0x1414(r2)
      lfs       f1, 0x54(r3)
      lfs       f0, 0x2D0(r31)
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x2D0(r31)
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x538
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0
      bne-      .loc_0x4F8
      mr        r3, r31
      li        r4, 0x1
      bl        0x1E7C
      b         .loc_0x538

    .loc_0x4F8:
      cmplwi    r0, 0x2
      bne-      .loc_0x510
      mr        r3, r31
      li        r4, 0
      bl        0x1E64
      b         .loc_0x538

    .loc_0x510:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x538
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r6, 0
      lwz       r5, 0x2D4(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x538:
      psq_l     f31,0xC8(r1),0,0
      lfd       f31, 0xC0(r1)
      psq_l     f30,0xB8(r1),0,0
      lfd       f30, 0xB0(r1)
      psq_l     f29,0xA8(r1),0,0
      lfd       f29, 0xA0(r1)
      psq_l     f28,0x98(r1),0,0
      lfd       f28, 0x90(r1)
      psq_l     f27,0x88(r1),0,0
      lfd       f27, 0x80(r1)
      lwz       r31, 0x7C(r1)
      lwz       r0, 0xD4(r1)
      lwz       r30, 0x78(r1)
      mtlr      r0
      addi      r1, r1, 0xD0
      blr
    */
}

/*
 * --INFO--
 * Address:	802EB7D8
 * Size:	000004
 */
void Game::MiniHoudai::StateWalkHome::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802EB7DC
 * Size:	000034
 */
void Game::MiniHoudai::StateWalkPath::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      li        r4, 0
      stw       r0, 0x14(r1)
      li        r0, -0x1
      li        r5, 0
      stw       r0, 0x2D4(r3)
      bl        -0x1E67F8
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802EB810
 * Size:	0004A4
 */
void Game::MiniHoudai::StateWalkPath::exec((Game::EnemyBase*))
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
      stw       r30, 0x48(r1)
      mr        r31, r4
      mr        r30, r3
      mr        r3, r31
      bl        0x15E0
      lwz       r4, 0xC0(r31)
      mr        r3, r31
      lfs       f31, 0x30C(r4)
      lfs       f30, 0x334(r4)
      bl        -0x1E4564
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x68
      lfs       f31, -0x13F4(r2)
      lfs       f30, -0x1414(r2)

    .loc_0x68:
      lfs       f1, 0x200(r31)
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x90
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E65F8
      b         .loc_0x328

    .loc_0x90:
      mr        r3, r31
      li        r4, 0x1
      bl        -0x1D7250
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB8
      li        r0, 0x4
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E6620
      b         .loc_0x328

    .loc_0xB8:
      mr        r3, r31
      bl        0x1620
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xDC
      li        r0, 0x3
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E6644
      b         .loc_0x328

    .loc_0xDC:
      mr        r3, r31
      bl        0x13AC
      cmplwi    r3, 0
      beq-      .loc_0x224
      mr        r4, r3
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      addi      r3, r1, 0x2C
      lwz       r12, 0x0(r31)
      lfs       f29, 0x20(r1)
      lwz       r12, 0x8(r12)
      lfs       f28, 0x28(r1)
      mtctr     r12
      bctrl
      lfs       f1, 0x2C(r1)
      lis       r3, 0x8051
      lfs       f0, 0x34(r1)
      subi      r3, r3, 0x2E20
      fsubs     f1, f29, f1
      fsubs     f2, f28, f0
      bl        -0x2B6844
      bl        0x126280
      lwz       r12, 0x0(r31)
      fmr       f29, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f29
      bl        0x126288
      fmr       f29, f1
      lfs       f0, -0x1404(r2)
      lfs       f1, -0x1408(r2)
      fmuls     f0, f0, f30
      fmuls     f30, f29, f31
      fmuls     f1, f1, f0
      fabs      f0, f30
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x1A8
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f30, f0
      ble-      .loc_0x1A4
      fmr       f30, f1
      b         .loc_0x1A8

    .loc_0x1A4:
      fneg      f30, f1

    .loc_0x1A8:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f30, f1
      bl        0x126200
      stfs      f1, 0x1FC(r31)
      fabs      f2, f29
      lfs       f0, -0x1404(r2)
      lfs       f3, 0x1FC(r31)
      lfs       f1, -0x1408(r2)
      frsp      f2, f2
      stfs      f3, 0x1A8(r31)
      lwz       r3, 0xC0(r31)
      lfs       f3, 0x58C(r3)
      fmuls     f0, f0, f3
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      bne-      .loc_0x210
      li        r0, 0x8
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E6778
      b         .loc_0x328

    .loc_0x210:
      li        r0, 0x5
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E678C
      b         .loc_0x328

    .loc_0x224:
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r31)
      lfs       f28, 0x2E4(r31)
      lwz       r12, 0x8(r12)
      lfs       f29, 0x2EC(r31)
      mtctr     r12
      bctrl
      lfs       f4, 0x14(r1)
      lis       r3, 0x8051
      lfs       f0, 0x1C(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x18(r1)
      fsubs     f1, f28, f4
      fsubs     f2, f29, f0
      stfs      f4, 0x8(r1)
      stfs      f3, 0xC(r1)
      stfs      f0, 0x10(r1)
      bl        -0x2B6974
      bl        0x126150
      lwz       r12, 0x0(r31)
      fmr       f29, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f29
      bl        0x126158
      fmr       f29, f1
      lfs       f0, -0x1404(r2)
      lfs       f1, -0x1408(r2)
      fmuls     f0, f0, f30
      fmuls     f30, f29, f31
      fmuls     f1, f1, f0
      fabs      f0, f30
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x2D8
      lfs       f0, -0x1418(r2)
      fcmpo     cr0, f30, f0
      ble-      .loc_0x2D4
      fmr       f30, f1
      b         .loc_0x2D8

    .loc_0x2D4:
      fneg      f30, f1

    .loc_0x2D8:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f30, f1
      bl        0x1260D0
      fabs      f3, f29
      stfs      f1, 0x1FC(r31)
      lfs       f0, -0x1400(r2)
      lfs       f2, 0x1FC(r31)
      frsp      f1, f3
      stfs      f2, 0x1A8(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      beq-      .loc_0x328
      li        r0, 0x7
      mr        r3, r31
      stw       r0, 0x2D4(r31)
      bl        -0x1E6894

    .loc_0x328:
      mr        r3, r31
      bl        -0x1E483C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x34C
      lfs       f0, -0x1418(r2)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      b         .loc_0x3E8

    .loc_0x34C:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x258(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x4E
      bne-      .loc_0x3D8
      mr        r3, r31
      lwz       r4, 0xC0(r31)
      lwz       r12, 0x0(r31)
      lfs       f29, 0x2E4(r4)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      bl        -0x21C378
      mr        r3, r31
      lfs       f2, 0x1D4(r31)
      lwz       r12, 0x0(r31)
      frsp      f31, f1
      lfs       f30, 0x1D8(r31)
      lfs       f0, 0x1DC(r31)
      lwz       r12, 0x64(r12)
      stfs      f2, 0x38(r1)
      stfs      f30, 0x3C(r1)
      stfs      f0, 0x40(r1)
      mtctr     r12
      bctrl
      bl        -0x21C914
      fmuls     f0, f29, f31
      frsp      f1, f1
      stfs      f0, 0x1D4(r31)
      fmuls     f0, f29, f1
      stfs      f30, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      b         .loc_0x3E8

    .loc_0x3D8:
      lfs       f0, -0x1418(r2)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)

    .loc_0x3E8:
      lwz       r3, -0x6514(r13)
      lfs       f2, -0x13F0(r2)
      lfs       f1, 0x54(r3)
      lfs       f0, 0x2D0(r31)
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x2D0(r31)
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x46C
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0
      bne-      .loc_0x42C
      mr        r3, r31
      li        r4, 0x1
      bl        0x1998
      b         .loc_0x46C

    .loc_0x42C:
      cmplwi    r0, 0x2
      bne-      .loc_0x444
      mr        r3, r31
      li        r4, 0
      bl        0x1980
      b         .loc_0x46C

    .loc_0x444:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x46C
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r6, 0
      lwz       r5, 0x2D4(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x46C:
      psq_l     f31,0x88(r1),0,0
      lfd       f31, 0x80(r1)
      psq_l     f30,0x78(r1),0,0
      lfd       f30, 0x70(r1)
      psq_l     f29,0x68(r1),0,0
      lfd       f29, 0x60(r1)
      psq_l     f28,0x58(r1),0,0
      lfd       f28, 0x50(r1)
      lwz       r31, 0x4C(r1)
      lwz       r0, 0x94(r1)
      lwz       r30, 0x48(r1)
      mtlr      r0
      addi      r1, r1, 0x90
      blr
    */
}

/*
 * --INFO--
 * Address:	802EBCB4
 * Size:	000004
 */
void Game::MiniHoudai::StateWalkPath::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802EBCB8
 * Size:	000028
 */
void __sinit_MiniHoudaiState_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804D
      stw       r0, -0x6898(r13)
      stfsu     f0, 0x4548(r3)
      stfs      f0, -0x6894(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
