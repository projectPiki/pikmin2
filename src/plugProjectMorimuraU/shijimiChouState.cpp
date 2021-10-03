

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
 * Address:	80387718
 * Size:	000108
 */
void Game::ShijimiChou::FSM::init((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x6
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x256ECC
      li        r3, 0x14
      bl        -0x363894
      mr.       r4, r3
      beq-      .loc_0x38
      li        r4, 0
      bl        .loc_0x108
      mr        r4, r3

    .loc_0x38:
      mr        r3, r31
      bl        -0x256E4C
      li        r3, 0x14
      bl        -0x3638B8
      mr.       r4, r3
      beq-      .loc_0x5C
      li        r4, 0x1
      bl        0x2F0
      mr        r4, r3

    .loc_0x5C:
      mr        r3, r31
      bl        -0x256E70
      li        r3, 0x14
      bl        -0x3638DC
      mr.       r4, r3
      beq-      .loc_0x80
      li        r4, 0x2
      bl        0x444
      mr        r4, r3

    .loc_0x80:
      mr        r3, r31
      bl        -0x256E94
      li        r3, 0x10
      bl        -0x363900
      mr.       r4, r3
      beq-      .loc_0xA4
      li        r4, 0x3
      bl        0x5C0
      mr        r4, r3

    .loc_0xA4:
      mr        r3, r31
      bl        -0x256EB8
      li        r3, 0x10
      bl        -0x363924
      mr.       r4, r3
      beq-      .loc_0xC8
      li        r4, 0x4
      bl        0x78C
      mr        r4, r3

    .loc_0xC8:
      mr        r3, r31
      bl        -0x256EDC
      li        r3, 0x20
      bl        -0x363948
      mr.       r4, r3
      beq-      .loc_0xEC
      li        r4, 0x5
      bl        0x80C
      mr        r4, r3

    .loc_0xEC:
      mr        r3, r31
      bl        -0x256F00
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x108:
    */
}

/*
 * --INFO--
 * Address:	80387820
 * Size:	00003C
 */
void Game::ShijimiChou::StateWait::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x4B80
      addi      r5, r5, 0x4B5C
      stw       r4, 0x4(r3)
      addi      r0, r2, 0xAB0
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8038785C
 * Size:	0000C0
 */
void Game::ShijimiChou::StateWait::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stfd      f31, 0x20(r1)
      psq_st    f31,0x28(r1),0,0
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r31, r4
      mr        r30, r3
      lwz       r0, 0x1E0(r4)
      mr        r3, r31
      lfs       f0, 0xAB8(r2)
      li        r4, 0x2
      ori       r0, r0, 0x4
      li        r5, 0
      stw       r0, 0x1E0(r31)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      stfs      f0, 0x1C8(r31)
      stfs      f0, 0x1CC(r31)
      stfs      f0, 0x1D0(r31)
      bl        -0x2828B0
      bl        -0x2BE318
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      mr        r3, r31
      lfd       f2, 0xAC0(r2)
      stw       r0, 0x8(r1)
      lfs       f0, 0xABC(r2)
      lfd       f1, 0x8(r1)
      fsubs     f1, f1, f2
      fdivs     f31, f1, f0
      bl        -0x2806C4
      fmuls     f1, f1, f31
      mr        r3, r31
      bl        -0x2826C8
      li        r0, 0
      stw       r0, 0x10(r30)
      psq_l     f31,0x28(r1),0,0
      lwz       r0, 0x34(r1)
      lfd       f31, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8038791C
 * Size:	000140
 */
void Game::ShijimiChou::StateWait::exec((Game::EnemyBase*))
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
      lwz       r5, 0x10(r3)
      addi      r0, r5, 0x1
      stw       r0, 0x10(r3)
      lwz       r0, 0x10(r3)
      cmpwi     r0, 0xA
      ble-      .loc_0x10C
      lwz       r0, 0x2C0(r31)
      cmpwi     r0, 0x3
      bne-      .loc_0xBC
      lwz       r0, 0x2E8(r31)
      cmplw     r0, r31
      beq-      .loc_0x68
      lwz       r12, 0x0(r3)
      li        r5, 0x5
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x128

    .loc_0x68:
      lwz       r3, 0x2C8(r31)
      cmplwi    r3, 0
      beq-      .loc_0x120
      lwz       r4, 0x1E0(r3)
      li        r3, 0
      rlwinm.   r0,r4,0,21,21
      bne-      .loc_0x8C
      rlwinm.   r0,r4,0,13,13
      beq-      .loc_0x90

    .loc_0x8C:
      li        r3, 0x1

    .loc_0x90:
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x120
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x1
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x128

    .loc_0xBC:
      lwz       r0, 0x2E8(r31)
      cmplw     r0, r31
      bne-      .loc_0xE8
      lfs       f1, 0xAC8(r2)
      mr        r3, r31
      lfs       f2, 0xACC(r2)
      li        r4, 0
      li        r5, 0
      bl        -0x274E94
      cmplwi    r3, 0
      beq-      .loc_0x120

    .loc_0xE8:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x1
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x128

    .loc_0x10C:
      lwz       r0, 0x2E8(r31)
      cmplw     r0, r31
      bne-      .loc_0x120
      mr        r3, r31
      bl        0x47DC

    .loc_0x120:
      mr        r3, r31
      bl        0x31F8

    .loc_0x128:
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
 * Address:	80387A5C
 * Size:	00003C
 */
void Game::ShijimiChou::StateFly::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x4B80
      addi      r5, r5, 0x4B38
      stw       r4, 0x4(r3)
      addi      r0, r2, 0xAD0
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80387A98
 * Size:	000054
 */
void Game::ShijimiChou::StateFly::init((Game::EnemyBase*, Game::StateArg*))
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
      bl        0x4130
      li        r3, 0
      stw       r3, 0x2C4(r31)
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,26,24
      stw       r0, 0x1E0(r31)
      stw       r3, 0x10(r30)
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
 * Address:	80387AEC
 * Size:	0000E8
 */
void Game::ShijimiChou::StateFly::exec((Game::EnemyBase*))
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
      mr        r3, r31
      bl        0x30AC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x38
      lwz       r3, 0x2C4(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x2C4(r31)

    .loc_0x38:
      lwz       r3, 0x10(r30)
      cmpwi     r3, 0xA
      bne-      .loc_0x50
      mr        r3, r31
      bl        0x47F4
      b         .loc_0x58

    .loc_0x50:
      addi      r0, r3, 0x1
      stw       r0, 0x10(r30)

    .loc_0x58:
      lwz       r0, 0x2C0(r31)
      lwz       r3, 0xC0(r31)
      cmpwi     r0, 0x2
      lfs       f2, 0x81C(r3)
      bne-      .loc_0x70
      lfs       f2, 0x844(r3)

    .loc_0x70:
      cmpwi     r0, 0x3
      bne-      .loc_0x7C
      lfs       f2, 0xAD4(r2)

    .loc_0x7C:
      lwz       r3, 0x2C4(r31)
      lis       r0, 0x4330
      stw       r0, 0x8(r1)
      xoris     r0, r3, 0x8000
      lfd       f1, 0xAC0(r2)
      stw       r0, 0xC(r1)
      lfd       f0, 0x8(r1)
      fsubs     f0, f0, f1
      fcmpo     cr0, f0, f2
      ble-      .loc_0xC8
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xD0

    .loc_0xC8:
      mr        r3, r31
      bl        0x3080

    .loc_0xD0:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80387BD4
 * Size:	00003C
 */
void Game::ShijimiChou::StateFall::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x4B80
      addi      r5, r5, 0x4B14
      stw       r4, 0x4(r3)
      addi      r0, r2, 0xAD8
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80387C10
 * Size:	0000D0
 */
void Game::ShijimiChou::StateFall::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      stw       r30, 0x28(r1)
      mr        r30, r3
      mr        r3, r31
      bl        -0x28049C
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,30,28
      stw       r0, 0x1E0(r31)
      lwz       r3, 0xC0(r31)
      lbz       r0, 0x94C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x64
      lfs       f1, 0x1D4(r31)
      lfs       f2, 0x1D8(r31)
      lfs       f3, 0x1DC(r31)
      lfs       f0, 0xAE0(r2)
      stfs      f1, 0x14(r1)
      stfs      f0, 0x1D8(r31)
      stfs      f2, 0x18(r1)
      stfs      f3, 0x1C(r1)
      stfs      f3, 0x1DC(r31)

    .loc_0x64:
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x8(r1)
      li        r4, 0x5917
      li        r5, 0
      stfs      f0, 0x2CC(r31)
      lfs       f0, 0xC(r1)
      stfs      f0, 0x2D0(r31)
      lfs       f0, 0x10(r1)
      stfs      f0, 0x2D4(r31)
      lwz       r3, 0x28C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stw       r0, 0x10(r30)
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80387CE0
 * Size:	000094
 */
void Game::ShijimiChou::StateFall::exec((Game::EnemyBase*))
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
      lwz       r3, 0xC0(r4)
      lbz       r0, 0x94C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x34
      mr        r3, r31
      bl        0x4270

    .loc_0x34:
      mr        r3, r31
      bl        0x41E0
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x50
      lwz       r0, 0x10(r30)
      cmpwi     r0, 0x64
      ble-      .loc_0x70

    .loc_0x50:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x3
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x70:
      lwz       r3, 0x10(r30)
      addi      r0, r3, 0x1
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
 * Address:	80387D74
 * Size:	00003C
 */
void Game::ShijimiChou::StateDead::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x4B80
      addi      r5, r5, 0x4AF0
      stw       r4, 0x4(r3)
      addi      r0, r2, 0xAE4
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80387DB0
 * Size:	0000A0
 */
void Game::ShijimiChou::StateDead::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0
      lwz       r12, 0x0(r31)
      mr        r3, r31
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x1E0(r31)
      mr        r3, r31
      lfs       f0, 0xAB8(r2)
      rlwinm    r0,r0,0,30,28
      stw       r0, 0x1E0(r31)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      stfs      f0, 0x1C8(r31)
      stfs      f0, 0x1CC(r31)
      stfs      f0, 0x1D0(r31)
      lwz       r0, 0x1E0(r31)
      ori       r0, r0, 0x80
      stw       r0, 0x1E0(r31)
      bl        -0x2826F4
      mr        r3, r31
      li        r4, 0x1
      li        r5, 0
      bl        -0x282E20
      lfs       f1, 0xAB8(r2)
      mr        r3, r31
      bl        0xE65E4
      mr        r3, r31
      bl        0x4120
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80387E50
 * Size:	000114
 */
void Game::ShijimiChou::StateDead::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      mr        r31, r4
      lwz       r3, 0x188(r4)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x100
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x100
      mr        r3, r31
      bl        0x2AF8
      lfs       f1, 0xAB8(r2)
      mr        r3, r31
      bl        0xE63EC
      mr        r3, r31
      addi      r4, r1, 0x20
      lwz       r12, 0x0(r31)
      lwz       r12, 0x204(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x20(r1)
      lis       r3, 0x804B
      lwz       r6, 0x24(r1)
      subi      r0, r3, 0x5808
      lwz       r5, 0x28(r1)
      lis       r3, 0x804B
      stw       r4, 0x8(r1)
      lis       r4, 0x804E
      subi      r10, r3, 0x5814
      lfs       f0, 0xAEC(r2)
      stw       r6, 0xC(r1)
      lis       r9, 0x804B
      lfs       f3, 0x8(r1)
      lis       r3, 0x804F
      stw       r5, 0x10(r1)
      li        r8, 0xC
      lfs       f2, 0xC(r1)
      li        r6, 0x52
      lfs       f1, 0x10(r1)
      li        r5, 0
      stw       r0, 0x14(r1)
      addi      r7, r4, 0x6A78
      subi      r9, r9, 0x5820
      subi      r0, r3, 0x79A0
      stw       r10, 0x2C(r1)
      addi      r3, r1, 0x14
      addi      r4, r1, 0x2C
      stw       r7, 0x14(r1)
      stfs      f3, 0x30(r1)
      stfs      f2, 0x34(r1)
      stfs      f1, 0x38(r1)
      stw       r9, 0x2C(r1)
      stw       r8, 0x3C(r1)
      stfs      f0, 0x40(r1)
      sth       r6, 0x18(r1)
      stw       r5, 0x1C(r1)
      stw       r0, 0x14(r1)
      bl        0x4016C
      mr        r3, r31
      li        r4, 0
      bl        -0x24CE5C

    .loc_0x100:
      lwz       r0, 0x54(r1)
      lwz       r31, 0x4C(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	80387F64
 * Size:	00003C
 */
void Game::ShijimiChou::StateLeave::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x4B80
      addi      r5, r5, 0x4ACC
      stw       r4, 0x4(r3)
      addi      r0, r2, 0xAF0
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80387FA0
 * Size:	000044
 */
void Game::ShijimiChou::StateLeave::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r3, r31
      bl        -0x28663C
      lwz       r0, 0x1E0(r31)
      mr        r3, r31
      ori       r0, r0, 0x40
      stw       r0, 0x1E0(r31)
      bl        0x3A70
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80387FE4
 * Size:	000024
 */
void Game::ShijimiChou::StateLeave::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      bl        0x38D4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80388008
 * Size:	00003C
 */
void Game::ShijimiChou::StateRest::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x4B80
      addi      r5, r5, 0x4AA8
      stw       r4, 0x4(r3)
      addi      r0, r2, 0xAF8
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80388044
 * Size:	0000BC
 */
void Game::ShijimiChou::StateRest::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      li        r0, 0x1
      stw       r31, 0x1C(r1)
      mr        r31, r4
      stw       r30, 0x18(r1)
      mr        r30, r3
      stb       r0, 0x1C(r3)
      li        r0, 0
      stw       r0, 0x10(r3)
      bl        -0x2BEAD0
      xoris     r0, r3, 0x8000
      lis       r3, 0x4330
      stw       r0, 0xC(r1)
      li        r0, 0
      lfd       f3, 0xAC0(r2)
      stw       r3, 0x8(r1)
      lfs       f2, 0xABC(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, 0xB04(r2)
      fsubs     f3, f0, f3
      lfs       f0, 0xB00(r2)
      fdivs     f2, f3, f2
      fmadds    f0, f1, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r3, 0x14(r1)
      stw       r3, 0x18(r30)
      stb       r0, 0x1D(r30)
      stw       r0, 0x14(r30)
      stb       r0, 0x1E(r30)
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0xA4
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x4
      bne-      .loc_0xA4
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,26,24
      stw       r0, 0x1E0(r31)

    .loc_0xA4:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80388100
 * Size:	00034C
 */
void Game::ShijimiChou::StateRest::exec((Game::EnemyBase*))
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
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      mr        r30, r3
      mr        r31, r4
      lbz       r0, 0x1D(r3)
      cmplwi    r0, 0
      bne-      .loc_0x6C
      lwz       r4, 0x1E0(r31)
      li        r3, 0
      rlwinm.   r0,r4,0,21,21
      bne-      .loc_0x58
      rlwinm.   r0,r4,0,13,13
      beq-      .loc_0x5C

    .loc_0x58:
      li        r3, 0x1

    .loc_0x5C:
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x6C
      mr        r3, r31
      bl        0x2E8C

    .loc_0x6C:
      lwz       r3, 0x10(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x10(r30)
      lbz       r0, 0x1D(r30)
      cmplwi    r0, 0
      beq-      .loc_0x27C
      li        r0, 0
      stw       r0, 0x14(r30)
      lbz       r0, 0x1E(r30)
      cmplwi    r0, 0
      beq-      .loc_0xA0
      mr        r3, r31
      bl        -0x280EBC

    .loc_0xA0:
      lbz       r0, 0x1C(r30)
      cmplwi    r0, 0
      beq-      .loc_0x10C
      li        r0, 0
      stw       r0, 0x10(r30)
      bl        -0x2BEC14
      xoris     r0, r3, 0x8000
      lis       r4, 0x4330
      stw       r0, 0x34(r1)
      li        r0, 0
      lfd       f3, 0xAC0(r2)
      mr        r3, r31
      stw       r4, 0x30(r1)
      lfs       f1, 0xABC(r2)
      lfd       f2, 0x30(r1)
      lfs       f0, 0xB08(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmadds    f0, f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r4, 0x3C(r1)
      stw       r4, 0x18(r30)
      stb       r0, 0x1C(r30)
      stb       r0, 0x1E(r30)
      bl        -0x282F64
      b         .loc_0x14C

    .loc_0x10C:
      mr        r3, r31
      bl        -0x280F10
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x14C
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x14C
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x14C
      li        r0, 0x1
      lfs       f1, 0xAB8(r2)
      stb       r0, 0x1E(r30)
      mr        r3, r31
      bl        -0x283020

    .loc_0x14C:
      mr        r3, r31
      bl        0x357C
      lwz       r3, 0x10(r30)
      lwz       r0, 0x18(r30)
      cmpw      r3, r0
      blt-      .loc_0x314
      bne-      .loc_0x180
      mr        r3, r31
      li        r4, 0x2
      li        r5, 0
      bl        -0x283270
      li        r0, 0
      stb       r0, 0x1E(r30)

    .loc_0x180:
      mr        r3, r31
      bl        0x329C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x314
      mr        r3, r31
      bl        -0x280B00
      li        r3, 0x1
      li        r0, 0
      stb       r3, 0x1C(r30)
      mr        r3, r31
      stb       r0, 0x1D(r30)
      bl        -0x2810A8
      lwz       r4, 0x2C8(r31)
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r31)
      lfs       f31, 0x20(r1)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x24(r1)
      lfs       f29, 0x28(r1)
      mtctr     r12
      bctrl
      lfs       f0, 0x14(r1)
      li        r0, 0
      lfs       f1, 0x18(r1)
      fsubs     f2, f0, f31
      lfs       f0, 0x1C(r1)
      fsubs     f1, f1, f30
      fsubs     f0, f0, f29
      fadds     f31, f31, f2
      fadds     f30, f30, f1
      fadds     f29, f29, f0
      stfs      f31, 0x304(r31)
      stfs      f30, 0x308(r31)
      stfs      f29, 0x30C(r31)
      stw       r0, 0x10(r30)
      bl        -0x2BED84
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x3C(r1)
      mr        r3, r31
      lfd       f3, 0xAC0(r2)
      li        r4, 0x2
      stw       r0, 0x38(r1)
      li        r5, 0
      lfs       f2, 0xABC(r2)
      lfd       f0, 0x38(r1)
      lfs       f1, 0xB10(r2)
      fsubs     f3, f0, f3
      lfs       f0, 0xB0C(r2)
      fdivs     f2, f3, f2
      fmadds    f0, f1, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      stw       r0, 0x18(r30)
      bl        -0x283370
      b         .loc_0x314

    .loc_0x27C:
      lwz       r3, 0x10(r30)
      lwz       r0, 0x18(r30)
      cmpw      r3, r0
      ble-      .loc_0x2BC
      lwz       r4, 0x2C8(r31)
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0xC(r1)
      lfs       f2, 0x10(r1)
      lfs       f0, 0x8(r1)
      stfs      f0, 0x304(r31)
      stfs      f1, 0x308(r31)
      stfs      f2, 0x30C(r31)

    .loc_0x2BC:
      lwz       r3, 0x14(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x14(r30)
      lwz       r0, 0x14(r30)
      cmpwi     r0, 0x14
      ble-      .loc_0x314
      mr        r3, r31
      bl        0x2DD8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x314
      li        r0, 0x1
      lfs       f0, 0xAB8(r2)
      stb       r0, 0x1D(r30)
      mr        r3, r31
      stb       r0, 0x1C(r30)
      stfs      f0, 0x1C8(r31)
      stfs      f0, 0x1CC(r31)
      stfs      f0, 0x1D0(r31)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      bl        -0x280C94

    .loc_0x314:
      mr        r3, r31
      bl        0x2CE4
      psq_l     f31,0x78(r1),0,0
      lfd       f31, 0x70(r1)
      psq_l     f30,0x68(r1),0,0
      lfd       f30, 0x60(r1)
      psq_l     f29,0x58(r1),0,0
      lfd       f29, 0x50(r1)
      lwz       r31, 0x4C(r1)
      lwz       r0, 0x84(r1)
      lwz       r30, 0x48(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}
