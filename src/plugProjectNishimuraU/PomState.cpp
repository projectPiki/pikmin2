

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
 * Address:	80255CA4
 * Size:	000224
 */
void Game::Pom::FSM::init((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x6
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x125458
      li        r3, 0x10
      bl        -0x231E20
      mr.       r4, r3
      beq-      .loc_0x64
      lis       r3, 0x804B
      lis       r5, 0x804C
      subi      r0, r3, 0x65C
      lis       r3, 0x804C
      stw       r0, 0x0(r4)
      li        r7, 0
      addi      r6, r5, 0x2140
      subi      r5, r2, 0x3970
      stw       r7, 0x4(r4)
      addi      r0, r3, 0x211C
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x64:
      mr        r3, r31
      bl        -0x125404
      li        r3, 0x10
      bl        -0x231E70
      mr.       r4, r3
      beq-      .loc_0xB8
      lis       r3, 0x804B
      lis       r5, 0x804C
      subi      r0, r3, 0x65C
      lis       r3, 0x804C
      stw       r0, 0x0(r4)
      li        r0, 0x1
      li        r7, 0
      addi      r6, r5, 0x2140
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x3968
      addi      r0, r3, 0x20F8
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0xB8:
      mr        r3, r31
      bl        -0x125458
      li        r3, 0x10
      bl        -0x231EC4
      mr.       r4, r3
      beq-      .loc_0x10C
      lis       r3, 0x804B
      lis       r5, 0x804C
      subi      r0, r3, 0x65C
      lis       r3, 0x804C
      stw       r0, 0x0(r4)
      li        r0, 0x2
      li        r7, 0
      addi      r6, r5, 0x2140
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x3960
      addi      r0, r3, 0x20D4
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x10C:
      mr        r3, r31
      bl        -0x1254AC
      li        r3, 0x10
      bl        -0x231F18
      mr.       r4, r3
      beq-      .loc_0x160
      lis       r3, 0x804B
      lis       r5, 0x804C
      subi      r0, r3, 0x65C
      lis       r3, 0x804C
      stw       r0, 0x0(r4)
      li        r0, 0x3
      li        r7, 0
      addi      r6, r5, 0x2140
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x3958
      addi      r0, r3, 0x20B0
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x160:
      mr        r3, r31
      bl        -0x125500
      li        r3, 0x10
      bl        -0x231F6C
      mr.       r4, r3
      beq-      .loc_0x1B4
      lis       r3, 0x804B
      lis       r5, 0x804C
      subi      r0, r3, 0x65C
      lis       r3, 0x804C
      stw       r0, 0x0(r4)
      li        r0, 0x4
      li        r7, 0
      addi      r6, r5, 0x2140
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x3950
      addi      r0, r3, 0x208C
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x1B4:
      mr        r3, r31
      bl        -0x125554
      li        r3, 0x10
      bl        -0x231FC0
      mr.       r4, r3
      beq-      .loc_0x208
      lis       r3, 0x804B
      lis       r5, 0x804C
      subi      r0, r3, 0x65C
      lis       r3, 0x804C
      stw       r0, 0x0(r4)
      li        r0, 0x5
      li        r7, 0
      addi      r6, r5, 0x2140
      stw       r0, 0x4(r4)
      subi      r5, r2, 0x3948
      addi      r0, r3, 0x2068
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0xC(r4)
      stw       r0, 0x0(r4)

    .loc_0x208:
      mr        r3, r31
      bl        -0x1255A8
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80255EC8
 * Size:	00002C
 */
void Game::Pom::StateWait::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      li        r4, 0
      stw       r0, 0x14(r1)
      li        r5, 0
      bl        -0x150EDC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80255EF4
 * Size:	00005C
 */
void Game::Pom::StateWait::exec((Game::EnemyBase*))
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
      bl        -0x6C4
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x2
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
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
 * Address:	80255F50
 * Size:	000004
 */
void Game::Pom::StateWait::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80255F54
 * Size:	000060
 */
void Game::Pom::StateDead::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x3940(r2)
      li        r5, 0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r3, r31
      stb       r0, 0x2C0(r4)
      li        r4, 0x1
      stb       r0, 0x2C1(r31)
      stfs      f0, 0x2E4(r31)
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,26,24
      stw       r0, 0x1E0(r31)
      bl        -0x150F90
      mr        r3, r31
      bl        -0x398
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80255FB4
 * Size:	000044
 */
void Game::Pom::StateDead::exec((Game::EnemyBase*))
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
      bl        -0x11AEF4

    .loc_0x34:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80255FF8
 * Size:	000004
 */
void Game::Pom::StateDead::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80255FFC
 * Size:	000040
 */
void Game::Pom::StateOpen::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      lfs       f0, -0x3940(r2)
      stw       r0, 0x14(r1)
      li        r0, 0
      li        r5, 0
      stb       r0, 0x2C0(r4)
      li        r4, 0x2
      stb       r0, 0x2C1(r3)
      stfs      f0, 0x2E4(r3)
      bl        -0x151024
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8025603C
 * Size:	0000A0
 */
void Game::Pom::StateOpen::exec((Game::EnemyBase*))
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
      bl        -0x80C
      lbz       r0, 0x2C0(r31)
      cmplwi    r0, 0
      beq-      .loc_0x60
      lwz       r0, 0x1E0(r31)
      rlwinm.   r0,r0,0,27,27
      beq-      .loc_0x88
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x5
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x88

    .loc_0x60:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x88
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x2
      bne-      .loc_0x88
      li        r0, 0x1
      stb       r0, 0x2C0(r31)
      stb       r0, 0x2C1(r31)

    .loc_0x88:
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
 * Address:	802560DC
 * Size:	000004
 */
void Game::Pom::StateOpen::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802560E0
 * Size:	000040
 */
void Game::Pom::StateClose::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      lfs       f0, -0x3940(r2)
      stw       r0, 0x14(r1)
      li        r0, 0
      li        r5, 0
      stb       r0, 0x2C0(r4)
      li        r4, 0x3
      stb       r0, 0x2C1(r3)
      stfs      f0, 0x2E4(r3)
      bl        -0x151108
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80256120
 * Size:	000078
 */
void Game::Pom::StateClose::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r5, 0x188(r4)
      lbz       r0, 0x24(r5)
      cmplwi    r0, 0
      beq-      .loc_0x68
      lwz       r0, 0x1C(r5)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x68
      lwz       r0, 0x1F4(r4)
      cmpwi     r0, 0
      beq-      .loc_0x50
      lwz       r12, 0x0(r3)
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x68

    .loc_0x50:
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x68:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80256198
 * Size:	000004
 */
void Game::Pom::StateClose::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8025619C
 * Size:	00004C
 */
void Game::Pom::StateShot::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      lfs       f0, -0x3940(r2)
      stw       r0, 0x14(r1)
      li        r0, 0
      li        r5, 0
      stb       r0, 0x2C0(r4)
      li        r4, 0x4
      stb       r0, 0x2C1(r3)
      stfs      f0, 0x2E4(r3)
      lwz       r0, 0x1E0(r3)
      rlwinm    r0,r0,0,26,24
      stw       r0, 0x1E0(r3)
      bl        -0x1511D0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802561E8
 * Size:	000094
 */
void Game::Pom::StateShot::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r6, r4
      stw       r0, 0x14(r1)
      lwz       r5, 0x188(r4)
      lbz       r0, 0x24(r5)
      cmplwi    r0, 0
      beq-      .loc_0x84
      lwz       r0, 0x1C(r5)
      cmplwi    r0, 0x2
      bne-      .loc_0x38
      mr        r3, r6
      bl        -0xE74
      b         .loc_0x84

    .loc_0x38:
      cmplwi    r0, 0x3E8
      bne-      .loc_0x84
      lwz       r5, 0x2C4(r6)
      lwz       r0, 0x2C8(r6)
      cmpw      r5, r0
      bge-      .loc_0x6C
      lwz       r12, 0x0(r3)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x84

    .loc_0x6C:
      lwz       r12, 0x0(r3)
      li        r5, 0x1
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x84:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8025627C
 * Size:	000010
 */
void Game::Pom::StateShot::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      lwz       r0, 0x1E0(r4)
      ori       r0, r0, 0x40
      stw       r0, 0x1E0(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	8025628C
 * Size:	00003C
 */
void Game::Pom::StateSwing::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x3940(r2)
      mr        r3, r4
      stw       r0, 0x14(r1)
      li        r0, 0
      li        r5, 0
      stb       r0, 0x2C0(r4)
      li        r4, 0x5
      stfs      f0, 0x2E4(r3)
      bl        -0x1512B0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802562C8
 * Size:	0000F8
 */
void Game::Pom::StateSwing::exec((Game::EnemyBase*))
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
      bl        -0xA98
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x2E4(r31)
      lfs       f0, 0x54(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x2E4(r31)
      lwz       r3, 0xC0(r31)
      lfs       f1, 0x2E4(r31)
      lfs       f0, 0x894(r3)
      fcmpo     cr0, f1, f0
      bgt-      .loc_0x5C
      lwz       r3, 0x2C4(r31)
      lwz       r0, 0x2C8(r31)
      cmpw      r3, r0
      blt-      .loc_0x80

    .loc_0x5C:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x3
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xE0

    .loc_0x80:
      lbz       r0, 0x2C0(r31)
      cmplwi    r0, 0
      beq-      .loc_0xBC
      lwz       r0, 0x1E0(r31)
      rlwinm.   r0,r0,0,27,27
      beq-      .loc_0xE0
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x5
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xE0

    .loc_0xBC:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0xE0
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0xE0
      li        r0, 0x1
      stb       r0, 0x2C0(r31)

    .loc_0xE0:
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
 * Address:	802563C0
 * Size:	000004
 */
void Game::Pom::StateSwing::cleanup((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      blr
    */
}
