

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
 * Address:	802E1834
 * Size:	000480
 */
void Game::Kabuto::FSM::init((Game::EnemyBase*))
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
      subi      r30, r4, 0x33A0
      li        r4, 0xD
      bl        -0x1B0FF4
      li        r3, 0x10
      bl        -0x2BD9BC
      mr.       r4, r3
      beq-      .loc_0x70
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r7, 0
      addi      r6, r5, 0x3AE4
      subi      r5, r2, 0x1608
      stw       r7, 0x4(r4)
      addi      r0, r3, 0x3AC0
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x70:
      mr        r3, r31
      bl        -0x1B0FA0
      li        r3, 0x10
      bl        -0x2BDA0C
      mr.       r4, r3
      beq-      .loc_0xC4
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x1
      li        r7, 0
      addi      r6, r5, 0x3AE4
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x1600
      addi      r0, r3, 0x3A9C
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0xC4:
      mr        r3, r31
      bl        -0x1B0FF4
      li        r3, 0x10
      bl        -0x2BDA60
      mr.       r4, r3
      beq-      .loc_0x118
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x2
      li        r7, 0
      addi      r6, r5, 0x3AE4
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x15F8
      addi      r0, r3, 0x3A78
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x118:
      mr        r3, r31
      bl        -0x1B1048
      li        r3, 0x10
      bl        -0x2BDAB4
      mr.       r4, r3
      beq-      .loc_0x16C
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x3
      li        r7, 0
      addi      r6, r5, 0x3AE4
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x15F0
      addi      r0, r3, 0x3A54
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x16C:
      mr        r3, r31
      bl        -0x1B109C
      li        r3, 0x10
      bl        -0x2BDB08
      mr.       r4, r3
      beq-      .loc_0x1C0
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x4
      li        r7, 0
      addi      r6, r5, 0x3AE4
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x15E8
      addi      r0, r3, 0x3A30
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x1C0:
      mr        r3, r31
      bl        -0x1B10F0
      li        r3, 0x10
      bl        -0x2BDB5C
      mr.       r4, r3
      beq-      .loc_0x214
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x5
      li        r7, 0
      addi      r6, r5, 0x3AE4
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x15E0
      addi      r0, r3, 0x3A0C
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x214:
      mr        r3, r31
      bl        -0x1B1144
      li        r3, 0x10
      bl        -0x2BDBB0
      mr.       r4, r3
      beq-      .loc_0x268
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x6
      li        r7, 0
      addi      r6, r5, 0x3AE4
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x15D8
      addi      r0, r3, 0x39E8
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x268:
      mr        r3, r31
      bl        -0x1B1198
      li        r3, 0x10
      bl        -0x2BDC04
      mr.       r4, r3
      beq-      .loc_0x2BC
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x7
      li        r7, 0
      addi      r6, r5, 0x3AE4
      stw       r0, 0x4(r4)
      addi      r5, r30, 0x10
      addi      r0, r3, 0x39C4
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x2BC:
      mr        r3, r31
      bl        -0x1B11EC
      li        r3, 0x10
      bl        -0x2BDC58
      mr.       r4, r3
      beq-      .loc_0x310
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x8
      li        r7, 0
      addi      r6, r5, 0x3AE4
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x15D0
      addi      r0, r3, 0x398C
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x310:
      mr        r3, r31
      bl        -0x1B1240
      li        r3, 0x10
      bl        -0x2BDCAC
      mr.       r4, r3
      beq-      .loc_0x364
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0x9
      li        r7, 0
      addi      r6, r5, 0x3AE4
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x15C8
      addi      r0, r3, 0x3954
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x364:
      mr        r3, r31
      bl        -0x1B1294
      li        r3, 0x10
      bl        -0x2BDD00
      mr.       r4, r3
      beq-      .loc_0x3B8
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0xA
      li        r7, 0
      addi      r6, r5, 0x3AE4
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x15C0
      addi      r0, r3, 0x3930
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x3B8:
      mr        r3, r31
      bl        -0x1B12E8
      li        r3, 0x10
      bl        -0x2BDD54
      mr.       r4, r3
      beq-      .loc_0x40C
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0xB
      li        r7, 0
      addi      r6, r5, 0x3AE4
      stw       r0, 0x4(r4)
      addi      r5, r30, 0x1C
      addi      r0, r3, 0x390C
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x40C:
      mr        r3, r31
      bl        -0x1B133C
      li        r3, 0x10
      bl        -0x2BDDA8
      mr.       r4, r3
      beq-      .loc_0x460
      lis       r3, 0x804B
      lis       r5, 0x804D
      subi      r0, r3, 0x65C
      lis       r3, 0x804D
      stw       r0, 0x0(r4)
      li        r0, 0xC
      li        r7, 0
      addi      r6, r5, 0x3AE4
      stw       r0, 0x4(r4)
      addi      r5, r30, 0x28
      addi      r0, r3, 0x38E8
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x460:
      mr        r3, r31
      bl        -0x1B1390
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
 * Address:	802E1CB4
 * Size:	0000A0
 */
void Game::Kabuto::StateDead::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r3, r31
      bl        -0x1DC5AC
      lwz       r0, 0x1E0(r31)
      mr        r3, r31
      lfs       f0, -0x15B8(r2)
      rlwinm    r0,r0,0,26,24
      stw       r0, 0x1E0(r31)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x258(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x60
      bne-      .loc_0x7C
      mr        r3, r31
      li        r4, 0xA
      li        r5, 0
      bl        -0x1DCD10
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x310(r12)
      mtctr     r12
      bctrl
      b         .loc_0x8C

    .loc_0x7C:
      mr        r3, r31
      li        r4, 0
      li        r5, 0
      bl        -0x1DCD38

    .loc_0x8C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E1D54
 * Size:	000004
 */
void Game::Kabuto::Obj::finishWaitEffect(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802E1D58
 * Size:	000008
 */
void Game::Kabuto::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x4B
      blr
    */
}

/*
 * --INFO--
 * Address:	802E1D60
 * Size:	000044
 */
void Game::Kabuto::StateDead::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x188(r4)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x34
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x34
      mr        r3, r4
      li        r4, 0
      bl        -0x1A6CA0

    .loc_0x34:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E1DA4
 * Size:	000004
 */
void Game::Kabuto::StateDead::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802E1DA8
 * Size:	00006C
 */
void Game::Kabuto::StateWait::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x15B8(r2)
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r3, r31
      stfs      f0, 0x2C8(r4)
      bl        0x2994
      li        r0, -0x1
      lfs       f0, -0x15B8(r2)
      stw       r0, 0x2CC(r31)
      mr        r3, r31
      li        r4, 0x5
      li        r5, 0
      lwz       r0, 0x1E0(r31)
      ori       r0, r0, 0x400
      stw       r0, 0x1E0(r31)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      bl        -0x1DCDF8
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E1E14
 * Size:	00010C
 */
void Game::Kabuto::StateWait::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x15B8(r2)
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      lfs       f1, 0x200(r4)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x4C
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xF4

    .loc_0x4C:
      mr        r3, r31
      li        r4, 0
      bl        -0x1CD810
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x74
      li        r0, 0x4
      mr        r3, r31
      stw       r0, 0x2CC(r31)
      bl        -0x1DCBE0
      b         .loc_0xA4

    .loc_0x74:
      lfs       f1, 0x2C8(r31)
      lfs       f0, -0x15B4(r2)
      fcmpo     cr0, f1, f0
      bgt-      .loc_0x94
      mr        r3, r31
      bl        0x2A58
      cmplwi    r3, 0
      beq-      .loc_0xA4

    .loc_0x94:
      li        r0, 0x2
      mr        r3, r31
      stw       r0, 0x2CC(r31)
      bl        -0x1DCC14

    .loc_0xA4:
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x2C8(r31)
      lfs       f0, 0x54(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x2C8(r31)
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0xF4
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0xF4
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r6, 0
      lwz       r5, 0x2CC(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0xF4:
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
 * Address:	802E1F20
 * Size:	000024
 */
void Game::Kabuto::StateWait::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      bl        -0x1DA7C4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E1F44
 * Size:	000054
 */
void Game::Kabuto::StateTurn::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x15B8(r2)
      mr        r3, r4
      stw       r0, 0x14(r1)
      li        r0, -0x1
      li        r5, 0
      stfs      f0, 0x2C8(r4)
      li        r4, 0x4
      stw       r0, 0x2CC(r3)
      lwz       r0, 0x1E0(r3)
      ori       r0, r0, 0x400
      stw       r0, 0x1E0(r3)
      stfs      f0, 0x1D4(r3)
      stfs      f0, 0x1D8(r3)
      stfs      f0, 0x1DC(r3)
      bl        -0x1DCF80
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E1F98
 * Size:	000340
 */
void Game::Kabuto::StateTurn::exec((Game::EnemyBase*))
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
      lfs       f0, -0x15B8(r2)
      mr        r31, r4
      lfs       f1, 0x200(r4)
      mr        r30, r3
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x6C
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x308

    .loc_0x6C:
      mr        r3, r31
      li        r4, 0
      bl        -0x1CD9B4
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x94
      li        r0, 0x4
      mr        r3, r31
      stw       r0, 0x2CC(r31)
      bl        -0x1DCD84
      b         .loc_0x2CC

    .loc_0x94:
      mr        r3, r31
      bl        0x28C4
      cmplwi    r3, 0
      beq-      .loc_0x1CC
      lfs       f0, -0x15B8(r2)
      mr        r4, r3
      addi      r3, r1, 0x2C
      stfs      f0, 0x2DC(r31)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      lwz       r5, 0xC0(r31)
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x20
      lfs       f29, 0x2C(r1)
      lwz       r12, 0x8(r12)
      lfs       f28, 0x34(r1)
      lfs       f30, 0x334(r5)
      lfs       f31, 0x30C(r5)
      mtctr     r12
      bctrl
      lfs       f4, 0x20(r1)
      lis       r3, 0x8051
      lfs       f0, 0x28(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x24(r1)
      fsubs     f1, f29, f4
      fsubs     f2, f28, f0
      stfs      f4, 0x14(r1)
      stfs      f3, 0x18(r1)
      stfs      f0, 0x1C(r1)
      bl        -0x2ACFA8
      bl        0x12FB1C
      lwz       r12, 0x0(r31)
      fmr       f29, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f29
      bl        0x12FB24
      fmuls     f29, f1, f31
      lfs       f0, -0x15AC(r2)
      lfs       f1, -0x15B0(r2)
      fmuls     f0, f0, f30
      fabs      f2, f29
      fmuls     f1, f1, f0
      frsp      f0, f2
      fcmpo     cr0, f0, f1
      ble-      .loc_0x180
      lfs       f0, -0x15B8(r2)
      fcmpo     cr0, f29, f0
      ble-      .loc_0x17C
      fmr       f29, f1
      b         .loc_0x180

    .loc_0x17C:
      fneg      f29, f1

    .loc_0x180:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f29, f1
      bl        0x12FAA0
      stfs      f1, 0x1FC(r31)
      mr        r3, r31
      lfs       f0, 0x1FC(r31)
      stfs      f0, 0x1A8(r31)
      bl        0x2808
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x2CC
      li        r0, 0x5
      mr        r3, r31
      stw       r0, 0x2CC(r31)
      bl        -0x1DCEBC
      b         .loc_0x2CC

    .loc_0x1CC:
      mr        r4, r31
      lwz       r5, 0xC0(r31)
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x8
      lfs       f28, 0x2D0(r31)
      lwz       r12, 0x8(r12)
      lfs       f31, 0x2D8(r31)
      lfs       f29, 0x334(r5)
      lfs       f30, 0x30C(r5)
      mtctr     r12
      bctrl
      lfs       f1, 0x8(r1)
      lis       r3, 0x8051
      lfs       f0, 0x10(r1)
      subi      r3, r3, 0x2E20
      fsubs     f1, f28, f1
      fsubs     f2, f31, f0
      bl        -0x2AD0A0
      bl        0x12FA24
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x12FA2C
      fmr       f31, f1
      lfs       f0, -0x15AC(r2)
      lfs       f1, -0x15B0(r2)
      fmuls     f0, f0, f29
      fmuls     f29, f31, f30
      fmuls     f1, f1, f0
      fabs      f0, f29
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x27C
      lfs       f0, -0x15B8(r2)
      fcmpo     cr0, f29, f0
      ble-      .loc_0x278
      fmr       f29, f1
      b         .loc_0x27C

    .loc_0x278:
      fneg      f29, f1

    .loc_0x27C:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f29, f1
      bl        0x12F9A4
      fabs      f3, f31
      stfs      f1, 0x1FC(r31)
      lfs       f0, -0x15A8(r2)
      lfs       f2, 0x1FC(r31)
      frsp      f1, f3
      stfs      f2, 0x1A8(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x2CC
      li        r0, 0x3
      mr        r3, r31
      stw       r0, 0x2CC(r31)
      bl        -0x1DCFC0

    .loc_0x2CC:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x308
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x308
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r6, 0
      lwz       r5, 0x2CC(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x308:
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
 * Address:	802E22D8
 * Size:	000024
 */
void Game::Kabuto::StateTurn::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      bl        -0x1DAB7C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E22FC
 * Size:	000050
 */
void Game::Kabuto::StateMove::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x15B8(r2)
      mr        r3, r4
      stw       r0, 0x14(r1)
      li        r5, 0
      li        r0, -0x1
      stfs      f0, 0x2C8(r4)
      li        r4, 0x1
      stb       r5, 0x2E0(r3)
      li        r5, 0
      stw       r0, 0x2CC(r3)
      stfs      f0, 0x1D4(r3)
      stfs      f0, 0x1D8(r3)
      stfs      f0, 0x1DC(r3)
      bl        -0x1DD334
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E234C
 * Size:	00038C
 */
void Game::Kabuto::StateMove::exec((Game::EnemyBase*))
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
      lfs       f0, -0x15B8(r2)
      mr        r31, r4
      lfs       f1, 0x200(r4)
      mr        r30, r3
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x6C
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x354

    .loc_0x6C:
      mr        r3, r31
      li        r4, 0
      bl        -0x1CDD68
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x94
      li        r0, 0x4
      mr        r3, r31
      stw       r0, 0x2CC(r31)
      bl        -0x1DD138
      b         .loc_0x2BC

    .loc_0x94:
      mr        r3, r31
      bl        0x2510
      cmplwi    r3, 0
      beq-      .loc_0xE0
      lfs       f0, -0x15B8(r2)
      li        r0, 0x2
      mr        r3, r31
      stfs      f0, 0x2DC(r31)
      stw       r0, 0x2CC(r31)
      bl        -0x1DD164
      mr        r3, r31
      bl        0x2540
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x2BC
      li        r0, 0x5
      mr        r3, r31
      stw       r0, 0x2CC(r31)
      bl        -0x1DD184
      b         .loc_0x2BC

    .loc_0xE0:
      mr        r4, r31
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x2C8(r31)
      lfs       f0, -0x15A4(r2)
      lfs       f2, 0x20(r1)
      fcmpo     cr0, f1, f0
      lfs       f0, 0x28(r1)
      lfs       f31, 0x2D0(r31)
      lfs       f28, 0x2D8(r31)
      bgt-      .loc_0x134
      fsubs     f1, f0, f28
      lfs       f0, -0x15A0(r2)
      fsubs     f2, f2, f31
      fmuls     f1, f1, f1
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x148

    .loc_0x134:
      li        r0, 0x1
      mr        r3, r31
      stw       r0, 0x2CC(r31)
      bl        -0x1DD1EC
      b         .loc_0x2BC

    .loc_0x148:
      mr        r4, r31
      lwz       r5, 0xC0(r31)
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x8
      lfs       f29, 0x334(r5)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x30C(r5)
      mtctr     r12
      bctrl
      lfs       f1, 0x8(r1)
      lis       r3, 0x8051
      lfs       f0, 0x10(r1)
      subi      r3, r3, 0x2E20
      fsubs     f1, f31, f1
      fsubs     f2, f28, f0
      bl        -0x2AD3C8
      bl        0x12F6FC
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x12F704
      fmr       f31, f1
      lfs       f0, -0x15AC(r2)
      lfs       f1, -0x15B0(r2)
      fmuls     f0, f0, f29
      fmuls     f29, f31, f30
      fmuls     f1, f1, f0
      fabs      f0, f29
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x1F0
      lfs       f0, -0x15B8(r2)
      fcmpo     cr0, f29, f0
      ble-      .loc_0x1EC
      fmr       f29, f1
      b         .loc_0x1F0

    .loc_0x1EC:
      fneg      f29, f1

    .loc_0x1F0:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f29, f1
      bl        0x12F67C
      fabs      f3, f31
      stfs      f1, 0x1FC(r31)
      lfs       f0, -0x15A8(r2)
      lfs       f2, 0x1FC(r31)
      frsp      f1, f3
      stfs      f2, 0x1A8(r31)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x2AC
      lbz       r0, 0x2E0(r31)
      cmplwi    r0, 0
      beq-      .loc_0x2BC
      mr        r3, r31
      lwz       r4, 0xC0(r31)
      lwz       r12, 0x0(r31)
      lfs       f29, 0x2E4(r4)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      bl        -0x212D88
      mr        r3, r31
      lfs       f2, 0x1D4(r31)
      lwz       r12, 0x0(r31)
      frsp      f30, f1
      lfs       f31, 0x1D8(r31)
      lfs       f0, 0x1DC(r31)
      lwz       r12, 0x64(r12)
      stfs      f2, 0x14(r1)
      stfs      f31, 0x18(r1)
      stfs      f0, 0x1C(r1)
      mtctr     r12
      bctrl
      bl        -0x213324
      fmuls     f0, f29, f30
      frsp      f1, f1
      stfs      f0, 0x1D4(r31)
      fmuls     f0, f29, f1
      stfs      f31, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      b         .loc_0x2BC

    .loc_0x2AC:
      li        r0, 0x2
      mr        r3, r31
      stw       r0, 0x2CC(r31)
      bl        -0x1DD364

    .loc_0x2BC:
      mr        r3, r31
      bl        -0x1DB30C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x2F0
      li        r0, 0
      lfs       f0, -0x15B8(r2)
      stb       r0, 0x2E0(r31)
      lwz       r0, 0x1E0(r31)
      ori       r0, r0, 0x400
      stw       r0, 0x1E0(r31)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)

    .loc_0x2F0:
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x2C8(r31)
      lfs       f0, 0x54(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x2C8(r31)
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x354
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0
      bne-      .loc_0x32C
      li        r0, 0x1
      stb       r0, 0x2E0(r31)
      b         .loc_0x354

    .loc_0x32C:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x354
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r6, 0
      lwz       r5, 0x2CC(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x354:
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
 * Address:	802E26D8
 * Size:	000024
 */
void Game::Kabuto::StateMove::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      bl        -0x1DAF7C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E26FC
 * Size:	000068
 */
void Game::Kabuto::StateFlick::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x15B8(r2)
      stw       r0, 0x14(r1)
      li        r0, -0x1
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r3, r31
      stfs      f0, 0x2C8(r4)
      stw       r0, 0x2CC(r4)
      lwz       r0, 0x1E0(r4)
      ori       r0, r0, 0x400
      stw       r0, 0x1E0(r4)
      stfs      f0, 0x1D4(r4)
      stfs      f0, 0x1D8(r4)
      stfs      f0, 0x1DC(r4)
      bl        -0x1E0D70
      mr        r3, r31
      li        r4, 0x2
      li        r5, 0
      bl        -0x1DD748
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E2764
 * Size:	00016C
 */
void Game::Kabuto::StateFlick::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      lwz       r5, 0x188(r4)
      lbz       r0, 0x24(r5)
      cmplwi    r0, 0
      beq-      .loc_0x150
      lwz       r0, 0x1C(r5)
      cmplwi    r0, 0x2
      bne-      .loc_0x100
      lwz       r5, 0xC0(r30)
      mr        r3, r30
      lfs       f4, -0x159C(r2)
      li        r4, 0
      lfs       f1, 0x514(r5)
      lfs       f2, 0x4C4(r5)
      lfs       f3, 0x4EC(r5)
      bl        -0x1CF02C
      mr        r3, r30
      lwz       r31, 0xC0(r30)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f4, f1
      lfs       f1, 0x514(r31)
      lfs       f2, 0x4C4(r31)
      mr        r3, r30
      lfs       f3, 0x4EC(r31)
      li        r4, 0
      bl        -0x1CF31C
      mr        r3, r30
      lwz       r31, 0xC0(r30)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f4, f1
      lfs       f1, 0x53C(r31)
      lfs       f2, 0x4C4(r31)
      mr        r3, r30
      lfs       f3, 0x4EC(r31)
      li        r4, 0
      bl        -0x1CF708
      lfs       f1, -0x15B8(r2)
      stfs      f1, 0x20C(r30)
      lfs       f0, 0x200(r30)
      fcmpo     cr0, f0, f1
      cror      2, 0, 0x2
      bne-      .loc_0x150
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x150

    .loc_0x100:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x150
      lfs       f1, 0x200(r30)
      lfs       f0, -0x15B8(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x138
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x150

    .loc_0x138:
      lwz       r12, 0x0(r3)
      li        r5, 0x5
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x150:
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
 * Address:	802E28D0
 * Size:	000038
 */
void Game::Kabuto::StateFlick::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r3, r31
      bl        -0x1DB17C
      mr        r3, r31
      bl        -0x1E0F74
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E2908
 * Size:	00007C
 */
void Game::Kabuto::StateAttack::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x15B8(r2)
      stw       r0, 0x14(r1)
      li        r0, -0x1
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r3, r31
      stfs      f0, 0x2C8(r4)
      stfs      f0, 0x2DC(r4)
      stw       r0, 0x2CC(r4)
      lwz       r0, 0x1E0(r4)
      ori       r0, r0, 0x400
      stw       r0, 0x1E0(r4)
      bl        -0x1E0F74
      lwz       r0, 0x1E0(r31)
      mr        r3, r31
      lfs       f0, -0x15B8(r2)
      li        r4, 0x3
      rlwinm    r0,r0,0,26,24
      li        r5, 0
      stw       r0, 0x1E0(r31)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      bl        -0x1DD968
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E2984
 * Size:	000128
 */
void Game::Kabuto::StateAttack::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x15B8(r2)
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      lfs       f1, 0x200(r4)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x4C
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x110

    .loc_0x4C:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x110
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x2
      bne-      .loc_0x7C
      mr        r3, r31
      bl        0x2218
      mr        r3, r31
      bl        0x23A8
      b         .loc_0x110

    .loc_0x7C:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x110
      mr        r3, r31
      li        r4, 0
      bl        -0x1CE3B8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xBC
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x110

    .loc_0xBC:
      mr        r3, r31
      bl        0x1EB0
      cmplwi    r3, 0
      beq-      .loc_0xF0
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x2
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x110

    .loc_0xF0:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x1
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x110:
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
 * Address:	802E2AAC
 * Size:	000044
 */
void Game::Kabuto::StateAttack::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r3, r31
      bl        -0x1DB358
      lwz       r0, 0x1E0(r31)
      mr        r3, r31
      ori       r0, r0, 0x40
      stw       r0, 0x1E0(r31)
      bl        -0x1E115C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E2AF0
 * Size:	0000B8
 */
void Game::Kabuto::StateFixStay::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r3, -0x1
      stw       r0, 0x14(r1)
      li        r0, 0x1
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r3, 0x2CC(r4)
      mr        r3, r31
      li        r4, 0
      stb       r0, 0x2E1(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x1E0(r31)
      mr        r3, r31
      li        r4, 0xB
      li        r5, 0
      oris      r0, r0, 0x40
      stw       r0, 0x1E0(r31)
      lwz       r0, 0x1E0(r31)
      ori       r0, r0, 0x1
      stw       r0, 0x1E0(r31)
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,21,19
      stw       r0, 0x1E0(r31)
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,17,15
      stw       r0, 0x1E0(r31)
      lwz       r0, 0x1E0(r31)
      oris      r0, r0, 0x4000
      stw       r0, 0x1E0(r31)
      bl        -0x1DDB70
      mr        r3, r31
      bl        -0x1DB89C
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x310(r12)
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
 * Address:	802E2BA8
 * Size:	0000E4
 */
void Game::Kabuto::StateFixStay::exec((Game::EnemyBase*))
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
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      mr        r31, r4
      mr        r30, r3
      mr        r3, r31
      bl        0x1D1C
      cmplwi    r3, 0
      beq-      .loc_0xBC
      mr        r4, r3
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lfs       f31, 0x14(r1)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x1C(r1)
      mtctr     r12
      bctrl
      lfs       f1, 0x8(r1)
      lis       r3, 0x8051
      lfs       f0, 0x10(r1)
      subi      r3, r3, 0x2E20
      fsubs     f1, f31, f1
      fsubs     f2, f30, f0
      bl        -0x2ADB2C
      stfs      f1, 0x1FC(r31)
      mr        r3, r30
      mr        r4, r31
      li        r5, 0x7
      lfs       f0, 0x1FC(r31)
      li        r6, 0
      stfs      f0, 0x1A8(r31)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0xBC:
      psq_l     f31,0x48(r1),0,0
      lfd       f31, 0x40(r1)
      psq_l     f30,0x38(r1),0,0
      lfd       f30, 0x30(r1)
      lwz       r31, 0x2C(r1)
      lwz       r0, 0x54(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	802E2C8C
 * Size:	000084
 */
void Game::Kabuto::StateFixStay::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x1
      stb       r0, 0x2E1(r31)
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,10,8
      stw       r0, 0x1E0(r31)
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,0,30
      stw       r0, 0x1E0(r31)
      lwz       r0, 0x1E0(r31)
      ori       r0, r0, 0x800
      stw       r0, 0x1E0(r31)
      lwz       r0, 0x1E0(r31)
      ori       r0, r0, 0x8000
      stw       r0, 0x1E0(r31)
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,2,0
      stw       r0, 0x1E0(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802E2D10
 * Size:	00018C
 */
void Game::Kabuto::StateFixAppear::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      mr        r31, r4
      mr        r3, r31
      bl        0x2038
      li        r0, -0x1
      lfs       f0, -0x15B8(r2)
      stw       r0, 0x2CC(r31)
      mr        r3, r31
      stfs      f0, 0x2DC(r31)
      lwz       r0, 0x1E0(r31)
      oris      r0, r0, 0x20
      stw       r0, 0x1E0(r31)
      bl        -0x1E1380
      mr        r3, r31
      li        r4, 0xB
      li        r5, 0
      bl        -0x1DDD58
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lis       r3, 0x804B
      li        r6, 0
      subi      r0, r3, 0x5808
      lis       r3, 0x804E
      stw       r0, 0x24(r1)
      addi      r0, r3, 0x6A3C
      lis       r3, 0x804E
      lfs       f2, 0x8(r1)
      stw       r0, 0x24(r1)
      addi      r0, r3, 0x6E30
      lfs       f1, 0xC(r1)
      lis       r4, 0x804B
      lfs       f0, 0x10(r1)
      lis       r3, 0x804D
      subi      r11, r4, 0x5814
      li        r10, 0xA0
      li        r9, 0xA1
      li        r8, 0xA2
      li        r7, 0xA3
      li        r5, 0x1E
      stw       r0, 0x24(r1)
      addi      r0, r3, 0x39B0
      addi      r3, r1, 0x24
      addi      r4, r1, 0x14
      stw       r11, 0x14(r1)
      stfs      f2, 0x18(r1)
      stfs      f1, 0x1C(r1)
      stfs      f0, 0x20(r1)
      sth       r10, 0x28(r1)
      sth       r9, 0x2A(r1)
      sth       r8, 0x2C(r1)
      sth       r7, 0x2E(r1)
      stw       r6, 0x30(r1)
      stw       r6, 0x34(r1)
      stw       r6, 0x38(r1)
      stw       r6, 0x3C(r1)
      stw       r5, 0x40(r1)
      stw       r0, 0x24(r1)
      bl        0xD0C98
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x310(r12)
      mtctr     r12
      bctrl
      lwz       r5, 0xC0(r31)
      mr        r3, r31
      lfs       f4, -0x159C(r2)
      li        r4, 0
      lfs       f1, 0x514(r5)
      lfs       f2, 0x4C4(r5)
      lfs       f3, 0x4EC(r5)
      bl        -0x1CF6B4
      lwz       r5, 0xC0(r31)
      mr        r3, r31
      lfs       f4, -0x159C(r2)
      li        r4, 0
      lfs       f1, 0x514(r5)
      lfs       f2, 0x4C4(r5)
      lfs       f3, 0x4EC(r5)
      bl        -0x1CF990
      lwz       r5, 0xC0(r31)
      mr        r3, r31
      lfs       f4, -0x159C(r2)
      li        r4, 0
      lfs       f1, 0x53C(r5)
      lfs       f2, 0x4C4(r5)
      lfs       f3, 0x4EC(r5)
      bl        -0x1CFD68
      lwz       r0, 0x54(r1)
      lwz       r31, 0x4C(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	802E2E9C
 * Size:	000244
 */
void Game::Kabuto::StateFixAppear::exec((Game::EnemyBase*))
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
      lwz       r5, 0x188(r4)
      mr        r30, r3
      mr        r31, r4
      lbz       r0, 0x24(r5)
      cmplwi    r0, 0
      beq-      .loc_0x224
      lwz       r0, 0x1C(r5)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x224
      lfs       f1, 0x200(r31)
      lfs       f0, -0x15B8(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x70
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x224

    .loc_0x70:
      mr        r3, r31
      li        r4, 0
      bl        -0x1CE8BC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xA8
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0xC
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x224

    .loc_0xA8:
      mr        r3, r31
      bl        0x1A04
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xDC
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0xB
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x224

    .loc_0xDC:
      mr        r3, r31
      bl        0x1978
      cmplwi    r3, 0
      beq-      .loc_0x204
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
      bl        -0x2ADEF8
      bl        0x12EBCC
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x12EBD4
      lwz       r3, 0xC0(r31)
      fabs      f2, f1
      lfs       f0, -0x15AC(r2)
      lfs       f3, 0x58C(r3)
      lfs       f1, -0x15B0(r2)
      frsp      f2, f2
      fmuls     f0, f0, f3
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      bne-      .loc_0x1E0
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x9
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x224

    .loc_0x1E0:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0xA
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x224

    .loc_0x204:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x8
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x224:
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
 * Address:	802E30E0
 * Size:	000010
 */
void Game::Kabuto::StateFixAppear::cleanup((Game::EnemyBase*))
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
 * Address:	802E30F0
 * Size:	000130
 */
void Game::Kabuto::StateFixHide::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      li        r3, -0x1
      stw       r0, 0x54(r1)
      li        r0, 0x1
      stw       r31, 0x4C(r1)
      mr        r31, r4
      stw       r3, 0x2CC(r4)
      mr        r3, r31
      stb       r0, 0x2E1(r4)
      lwz       r0, 0x1E0(r4)
      oris      r0, r0, 0x40
      stw       r0, 0x1E0(r4)
      lwz       r0, 0x1E0(r4)
      ori       r0, r0, 0x1
      stw       r0, 0x1E0(r4)
      bl        -0x1E17B4
      mr        r3, r31
      li        r4, 0xC
      li        r5, 0
      bl        -0x1DE13C
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lis       r3, 0x804B
      li        r6, 0
      subi      r0, r3, 0x5808
      lis       r3, 0x804E
      stw       r0, 0x24(r1)
      addi      r0, r3, 0x6A3C
      lis       r3, 0x804E
      lfs       f2, 0x8(r1)
      stw       r0, 0x24(r1)
      addi      r0, r3, 0x6E30
      lfs       f1, 0xC(r1)
      lis       r4, 0x804B
      lfs       f0, 0x10(r1)
      lis       r3, 0x804D
      subi      r11, r4, 0x5814
      li        r10, 0xA0
      li        r9, 0xA1
      li        r8, 0xA2
      li        r7, 0xA3
      li        r5, 0x11
      stw       r0, 0x24(r1)
      addi      r0, r3, 0x3978
      addi      r3, r1, 0x24
      addi      r4, r1, 0x14
      stw       r11, 0x14(r1)
      stfs      f2, 0x18(r1)
      stfs      f1, 0x1C(r1)
      stfs      f0, 0x20(r1)
      sth       r10, 0x28(r1)
      sth       r9, 0x2A(r1)
      sth       r8, 0x2C(r1)
      sth       r7, 0x2E(r1)
      stw       r6, 0x30(r1)
      stw       r6, 0x34(r1)
      stw       r6, 0x38(r1)
      stw       r6, 0x3C(r1)
      stw       r5, 0x40(r1)
      stw       r0, 0x24(r1)
      bl        0xD08B4
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x310(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x54(r1)
      lwz       r31, 0x4C(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	802E3220
 * Size:	000090
 */
void Game::Kabuto::StateFixHide::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f4, -0x159C(r2)
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      mr        r3, r31
      lwz       r5, 0xC0(r4)
      li        r4, 0
      lfs       f1, 0x53C(r5)
      lfs       f2, 0x4C4(r5)
      lfs       f3, 0x4EC(r5)
      bl        -0x1D013C
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x78
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x78
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x6
      li        r6, 0
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
 * Address:	802E32B0
 * Size:	000024
 */
void Game::Kabuto::StateFixHide::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      li        r0, 0
      stb       r0, 0x2E1(r4)
      lwz       r0, 0x1E0(r4)
      rlwinm    r0,r0,0,0,30
      stw       r0, 0x1E0(r4)
      lwz       r0, 0x1E0(r4)
      rlwinm    r0,r0,0,10,8
      stw       r0, 0x1E0(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	802E32D4
 * Size:	000054
 */
void Game::Kabuto::StateFixWait::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      li        r0, -0x1
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x7
      stw       r0, 0x2CC(r31)
      mr        r3, r31
      bl        -0x1DE2F8
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x30C(r12)
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
 * Address:	802E3328
 * Size:	000004
 */
void Game::Kabuto::Obj::startWaitEffect(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802E332C
 * Size:	000204
 */
void Game::Kabuto::StateFixWait::exec((Game::EnemyBase*))
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
      lfs       f0, -0x15B8(r2)
      mr        r31, r4
      lfs       f1, 0x200(r4)
      mr        r30, r3
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x54
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1E4

    .loc_0x54:
      mr        r3, r31
      li        r4, 0
      bl        -0x1CED30
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x7C
      li        r0, 0xC
      mr        r3, r31
      stw       r0, 0x2CC(r31)
      bl        -0x1DE100
      b         .loc_0x1A8

    .loc_0x7C:
      mr        r3, r31
      bl        0x15A0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xA0
      li        r0, 0xB
      mr        r3, r31
      stw       r0, 0x2CC(r31)
      bl        -0x1DE124
      b         .loc_0x1A8

    .loc_0xA0:
      mr        r3, r31
      bl        0x1524
      cmplwi    r3, 0
      beq-      .loc_0x1A0
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
      bl        -0x2AE34C
      bl        0x12E778
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x12E780
      lwz       r3, 0xC0(r31)
      fabs      f2, f1
      lfs       f0, -0x15AC(r2)
      lfs       f3, 0x58C(r3)
      lfs       f1, -0x15B0(r2)
      frsp      f2, f2
      fmuls     f0, f0, f3
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      bne-      .loc_0x18C
      li        r0, 0x9
      stw       r0, 0x2CC(r31)
      b         .loc_0x1A8

    .loc_0x18C:
      li        r0, 0xA
      mr        r3, r31
      stw       r0, 0x2CC(r31)
      bl        -0x1DE224
      b         .loc_0x1A8

    .loc_0x1A0:
      li        r0, 0x8
      stw       r0, 0x2CC(r31)

    .loc_0x1A8:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x1E4
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x1E4
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r6, 0
      lwz       r5, 0x2CC(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x1E4:
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
 * Address:	802E3530
 * Size:	000004
 */
void Game::Kabuto::StateFixWait::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802E3534
 * Size:	000068
 */
void Game::Kabuto::StateFixTurn::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      li        r0, -0x1
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x6
      stw       r0, 0x2CC(r31)
      mr        r3, r31
      bl        -0x1DE558
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x30C(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x304(r12)
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
 * Address:	802E359C
 * Size:	000004
 */
void Game::Kabuto::Obj::startRotateEffect(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802E35A0
 * Size:	000290
 */
void Game::Kabuto::StateFixTurn::exec((Game::EnemyBase*))
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
      lfs       f0, -0x15B8(r2)
      mr        r31, r4
      lfs       f1, 0x200(r4)
      mr        r30, r3
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x6C
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x258

    .loc_0x6C:
      mr        r3, r31
      li        r4, 0
      bl        -0x1CEFBC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x94
      li        r0, 0xC
      mr        r3, r31
      stw       r0, 0x2CC(r31)
      bl        -0x1DE38C
      b         .loc_0x21C

    .loc_0x94:
      mr        r3, r31
      bl        0x12BC
      cmplwi    r3, 0
      beq-      .loc_0x20C
      lfs       f0, -0x15B8(r2)
      mr        r4, r3
      addi      r3, r1, 0x14
      stfs      f0, 0x2DC(r31)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
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
      bl        -0x2AE5A0
      bl        0x12E524
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x12E52C
      fmr       f31, f1
      lfs       f0, -0x15AC(r2)
      lfs       f1, -0x15B0(r2)
      fmuls     f0, f0, f29
      fmuls     f29, f31, f30
      fmuls     f1, f1, f0
      fabs      f0, f29
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x174
      lfs       f0, -0x15B8(r2)
      fcmpo     cr0, f29, f0
      ble-      .loc_0x170
      fmr       f29, f1
      b         .loc_0x174

    .loc_0x170:
      fneg      f29, f1

    .loc_0x174:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f29, f1
      bl        0x12E4A4
      stfs      f1, 0x1FC(r31)
      mr        r3, r31
      lfs       f0, 0x1FC(r31)
      stfs      f0, 0x1A8(r31)
      bl        0x120C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1C0
      li        r0, 0xB
      mr        r3, r31
      stw       r0, 0x2CC(r31)
      bl        -0x1DE4B8
      b         .loc_0x21C

    .loc_0x1C0:
      lwz       r3, 0xC0(r31)
      fabs      f2, f31
      lfs       f0, -0x15AC(r2)
      lfs       f3, 0x58C(r3)
      lfs       f1, -0x15B0(r2)
      frsp      f2, f2
      fmuls     f0, f0, f3
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      bne-      .loc_0x200
      li        r0, 0x9
      mr        r3, r31
      stw       r0, 0x2CC(r31)
      bl        -0x1DE4F8
      b         .loc_0x21C

    .loc_0x200:
      li        r0, 0xA
      stw       r0, 0x2CC(r31)
      b         .loc_0x21C

    .loc_0x20C:
      li        r0, 0x8
      mr        r3, r31
      stw       r0, 0x2CC(r31)
      bl        -0x1DE518

    .loc_0x21C:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x258
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x258
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r6, 0
      lwz       r5, 0x2CC(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x258:
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
 * Address:	802E3830
 * Size:	000030
 */
void Game::Kabuto::StateFixTurn::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x308(r12)
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
 * Address:	802E3860
 * Size:	000004
 */
void Game::Kabuto::Obj::finishRotateEffect(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802E3864
 * Size:	000068
 */
void Game::Kabuto::StateFixAttack::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x15B8(r2)
      li        r5, 0
      stw       r0, 0x14(r1)
      li        r0, -0x1
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r3, r31
      stw       r0, 0x2CC(r4)
      li        r4, 0x8
      stfs      f0, 0x2DC(r31)
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,26,24
      stw       r0, 0x1E0(r31)
      bl        -0x1DE89C
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x30C(r12)
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
 * Address:	802E38CC
 * Size:	000260
 */
void Game::Kabuto::StateFixAttack::exec((Game::EnemyBase*))
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
      lfs       f0, -0x15B8(r2)
      mr        r31, r4
      lfs       f1, 0x200(r4)
      mr        r30, r3
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x54
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x240

    .loc_0x54:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x240
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x2
      bne-      .loc_0x84
      mr        r3, r31
      bl        0x12C8
      mr        r3, r31
      bl        0x1458
      b         .loc_0x240

    .loc_0x84:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x240
      mr        r3, r31
      li        r4, 0
      bl        -0x1CF308
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xC4
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0xC
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x240

    .loc_0xC4:
      mr        r3, r31
      bl        0xFB8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xF8
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0xB
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x240

    .loc_0xF8:
      mr        r3, r31
      bl        0xF2C
      cmplwi    r3, 0
      beq-      .loc_0x220
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
      bl        -0x2AE944
      bl        0x12E180
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0x12E188
      lwz       r3, 0xC0(r31)
      fabs      f2, f1
      lfs       f0, -0x15AC(r2)
      lfs       f3, 0x58C(r3)
      lfs       f1, -0x15B0(r2)
      frsp      f2, f2
      fmuls     f0, f0, f3
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      bne-      .loc_0x1FC
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x9
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x240

    .loc_0x1FC:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0xA
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x240

    .loc_0x220:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x8
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x240:
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
 * Address:	802E3B2C
 * Size:	000004
 */
void Game::Kabuto::StateFixAttack::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802E3B30
 * Size:	000054
 */
void Game::Kabuto::StateFixFlick::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      li        r0, -0x1
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x9
      stw       r0, 0x2CC(r31)
      mr        r3, r31
      bl        -0x1DEB54
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x30C(r12)
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
 * Address:	802E3B84
 * Size:	00016C
 */
void Game::Kabuto::StateFixFlick::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      lwz       r5, 0x188(r4)
      lbz       r0, 0x24(r5)
      cmplwi    r0, 0
      beq-      .loc_0x150
      lwz       r0, 0x1C(r5)
      cmplwi    r0, 0x2
      bne-      .loc_0x100
      lwz       r5, 0xC0(r30)
      mr        r3, r30
      lfs       f4, -0x159C(r2)
      li        r4, 0
      lfs       f1, 0x514(r5)
      lfs       f2, 0x4C4(r5)
      lfs       f3, 0x4EC(r5)
      bl        -0x1D044C
      mr        r3, r30
      lwz       r31, 0xC0(r30)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f4, f1
      lfs       f1, 0x514(r31)
      lfs       f2, 0x4C4(r31)
      mr        r3, r30
      lfs       f3, 0x4EC(r31)
      li        r4, 0
      bl        -0x1D073C
      mr        r3, r30
      lwz       r31, 0xC0(r30)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f4, f1
      lfs       f1, 0x53C(r31)
      lfs       f2, 0x4C4(r31)
      mr        r3, r30
      lfs       f3, 0x4EC(r31)
      li        r4, 0
      bl        -0x1D0B28
      lfs       f1, -0x15B8(r2)
      stfs      f1, 0x20C(r30)
      lfs       f0, 0x200(r30)
      fcmpo     cr0, f0, f1
      cror      2, 0, 0x2
      bne-      .loc_0x150
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x150

    .loc_0x100:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x150
      lfs       f1, 0x200(r30)
      lfs       f0, -0x15B8(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x138
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x150

    .loc_0x138:
      lwz       r12, 0x0(r3)
      li        r5, 0xB
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x150:
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
 * Address:	802E3CF0
 * Size:	000004
 */
void Game::Kabuto::StateFixFlick::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      blr
    */
}
