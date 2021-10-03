

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
 * Address:	801D2D6C
 * Size:	00023C
 */
void Game::ItemHoney::FSM::init((Game::CFSMItem*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x6
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x1DC
      li        r3, 0x10
      bl        -0x1AEEE8
      mr.       r4, r3
      beq-      .loc_0x68
      lis       r3, 0x804B
      lis       r6, 0x804B
      addi      r0, r3, 0x7DF8
      lis       r5, 0x804C
      stw       r0, 0x0(r4)
      li        r7, 0
      lis       r3, 0x804C
      addi      r6, r6, 0x7DC4
      stw       r7, 0x4(r4)
      subi      r5, r5, 0x7B30
      subi      r0, r3, 0x7B70
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x68:
      mr        r3, r31
      bl        -0x120
      li        r3, 0x10
      bl        -0x1AEF3C
      mr.       r4, r3
      beq-      .loc_0xC0
      lis       r3, 0x804B
      lis       r6, 0x804B
      addi      r0, r3, 0x7DF8
      lis       r5, 0x804C
      stw       r0, 0x0(r4)
      li        r0, 0x1
      lis       r3, 0x804C
      li        r7, 0
      stw       r0, 0x4(r4)
      addi      r6, r6, 0x7DC4
      subi      r5, r5, 0x7B30
      subi      r0, r3, 0x7BB0
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0xC0:
      mr        r3, r31
      bl        -0x178
      li        r3, 0x10
      bl        -0x1AEF94
      mr.       r4, r3
      beq-      .loc_0x118
      lis       r3, 0x804B
      lis       r6, 0x804B
      addi      r0, r3, 0x7DF8
      lis       r5, 0x804C
      stw       r0, 0x0(r4)
      li        r0, 0x2
      lis       r3, 0x804C
      li        r7, 0
      stw       r0, 0x4(r4)
      addi      r6, r6, 0x7DC4
      subi      r5, r5, 0x7B30
      subi      r0, r3, 0x7C2C
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x118:
      mr        r3, r31
      bl        -0x1D0
      li        r3, 0x10
      bl        -0x1AEFEC
      mr.       r4, r3
      beq-      .loc_0x170
      lis       r3, 0x804B
      lis       r6, 0x804B
      addi      r0, r3, 0x7DF8
      lis       r5, 0x804C
      stw       r0, 0x0(r4)
      li        r0, 0x3
      lis       r3, 0x804C
      li        r7, 0
      stw       r0, 0x4(r4)
      addi      r6, r6, 0x7DC4
      subi      r5, r5, 0x7B30
      subi      r0, r3, 0x7C6C
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x170:
      mr        r3, r31
      bl        -0x228
      li        r3, 0x14
      bl        -0x1AF044
      mr.       r4, r3
      beq-      .loc_0x1C8
      lis       r3, 0x804B
      lis       r6, 0x804B
      addi      r0, r3, 0x7DF8
      lis       r5, 0x804C
      stw       r0, 0x0(r4)
      li        r0, 0x4
      lis       r3, 0x804C
      li        r7, 0
      stw       r0, 0x4(r4)
      addi      r6, r6, 0x7DC4
      subi      r5, r5, 0x7B30
      subi      r0, r3, 0x7CAC
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x1C8:
      mr        r3, r31
      bl        -0x280
      li        r3, 0x10
      bl        -0x1AF09C
      mr.       r4, r3
      beq-      .loc_0x220
      lis       r3, 0x804B
      lis       r6, 0x804B
      addi      r0, r3, 0x7DF8
      lis       r5, 0x804C
      stw       r0, 0x0(r4)
      li        r0, 0x5
      lis       r3, 0x804C
      li        r7, 0
      stw       r0, 0x4(r4)
      addi      r6, r6, 0x7DC4
      subi      r5, r5, 0x7B30
      subi      r0, r3, 0x7CEC
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x220:
      mr        r3, r31
      bl        -0x2D8
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801D2FA8
 * Size:	000004
 */
void Game::ItemHoney::FallState::init((Game::CFSMItem*, Game::StateArg*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D2FAC
 * Size:	000004
 */
void Game::ItemHoney::FallState::exec((Game::CFSMItem*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D2FB0
 * Size:	000004
 */
void Game::ItemHoney::FallState::cleanup((Game::CFSMItem*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D2FB4
 * Size:	000034
 */
void Game::ItemHoney::FallState::onBounce((Game::CFSMItem*, Sys::Triangle*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0x1
      li        r6, 0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
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
 * Address:	801D2FE8
 * Size:	0001C4
 */
void Game::ItemHoney::BounceState::init((Game::CFSMItem*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      stw       r31, 0x6C(r1)
      mr.       r31, r4
      mr        r5, r31
      beq-      .loc_0x20
      addi      r5, r5, 0x178

    .loc_0x20:
      addi      r3, r31, 0x1A8
      li        r4, 0x3
      bl        0x255C78
      lfs       f0, -0x4CE0(r2)
      mr        r3, r31
      li        r4, 0x3800
      stfs      f0, 0x190(r31)
      stfs      f0, 0x194(r31)
      stfs      f0, 0x198(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1C0(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x1E0(r31)
      lfs       f0, 0x8(r1)
      cmpwi     r0, 0x1
      lfs       f1, 0xC(r1)
      lfs       f2, 0x10(r1)
      beq-      .loc_0xFC
      bge-      .loc_0x94
      cmpwi     r0, 0
      bge-      .loc_0xA0
      b         .loc_0x1B0

    .loc_0x94:
      cmpwi     r0, 0x3
      bge-      .loc_0x1B0
      b         .loc_0x158

    .loc_0xA0:
      lis       r4, 0x804B
      lis       r3, 0x804E
      subi      r0, r4, 0x5808
      lis       r4, 0x804C
      stw       r0, 0x5C(r1)
      addi      r0, r3, 0x6A78
      lis       r3, 0x804B
      li        r7, 0xB5
      stw       r0, 0x5C(r1)
      subi      r5, r4, 0x7BC4
      subi      r0, r3, 0x5814
      li        r6, 0
      sth       r7, 0x60(r1)
      addi      r3, r1, 0x5C
      addi      r4, r1, 0x4C
      stw       r6, 0x64(r1)
      stw       r5, 0x5C(r1)
      stw       r0, 0x4C(r1)
      stfs      f0, 0x50(r1)
      stfs      f1, 0x54(r1)
      stfs      f2, 0x58(r1)
      bl        0x1DBEA8
      b         .loc_0x1B0

    .loc_0xFC:
      lis       r4, 0x804B
      lis       r3, 0x804E
      subi      r0, r4, 0x5808
      lis       r4, 0x804C
      stw       r0, 0x40(r1)
      addi      r0, r3, 0x6A78
      lis       r3, 0x804B
      li        r7, 0xB4
      stw       r0, 0x40(r1)
      subi      r5, r4, 0x7BD8
      subi      r0, r3, 0x5814
      li        r6, 0
      sth       r7, 0x44(r1)
      addi      r3, r1, 0x40
      addi      r4, r1, 0x30
      stw       r6, 0x48(r1)
      stw       r5, 0x40(r1)
      stw       r0, 0x30(r1)
      stfs      f0, 0x34(r1)
      stfs      f1, 0x38(r1)
      stfs      f2, 0x3C(r1)
      bl        0x1DBE4C
      b         .loc_0x1B0

    .loc_0x158:
      lis       r4, 0x804B
      lis       r3, 0x804E
      subi      r0, r4, 0x5808
      lis       r4, 0x804C
      stw       r0, 0x24(r1)
      addi      r0, r3, 0x6A78
      lis       r3, 0x804B
      li        r7, 0xB3
      stw       r0, 0x24(r1)
      subi      r5, r4, 0x7BEC
      subi      r0, r3, 0x5814
      li        r6, 0
      sth       r7, 0x28(r1)
      addi      r3, r1, 0x24
      addi      r4, r1, 0x14
      stw       r6, 0x2C(r1)
      stw       r5, 0x24(r1)
      stw       r0, 0x14(r1)
      stfs      f0, 0x18(r1)
      stfs      f1, 0x1C(r1)
      stfs      f2, 0x20(r1)
      bl        0x1DBDF0

    .loc_0x1B0:
      lwz       r0, 0x74(r1)
      lwz       r31, 0x6C(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	801D31AC
 * Size:	000004
 */
void Game::ItemHoney::BounceState::exec((Game::CFSMItem*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D31B0
 * Size:	000004
 */
void Game::ItemHoney::BounceState::cleanup((Game::CFSMItem*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D31B4
 * Size:	000034
 */
void Game::ItemHoney::BounceState::onKeyEvent((Game::CFSMItem*,
                                               SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0x2
      li        r6, 0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
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
 * Address:	801D31E8
 * Size:	000038
 */
void Game::ItemHoney::WaitState::init((Game::CFSMItem*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0
      mr        r5, r4
      stw       r0, 0x14(r1)
      beq-      .loc_0x1C
      addi      r5, r5, 0x178

    .loc_0x1C:
      addi      r3, r4, 0x1A8
      li        r4, 0x4
      bl        0x255A7C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3220
 * Size:	000004
 */
void Game::ItemHoney::WaitState::exec((Game::CFSMItem*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3224
 * Size:	000004
 */
void Game::ItemHoney::WaitState::cleanup((Game::CFSMItem*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3228
 * Size:	00011C
 */
void Game::ItemHoney::WaitState::collisionCallback((Game::CFSMItem*,
                                                    Game::CollEvent&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r5
      stw       r30, 0x28(r1)
      mr        r30, r4
      stw       r29, 0x24(r1)
      mr        r29, r3
      addi      r3, r1, 0x8
      lwz       r4, 0x0(r5)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x6C(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x8(r1)
      lfs       f2, 0x10(r1)
      fmuls     f1, f0, f0
      lfs       f0, -0x4CDC(r2)
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      blt-      .loc_0x100
      lbz       r0, 0x1E0(r30)
      cmplwi    r0, 0
      bne-      .loc_0xB4
      lwz       r3, 0x0(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x100
      lwz       r3, 0x0(r31)
      lhz       r0, 0x128(r3)
      cmplwi    r0, 0x406
      beq-      .loc_0x100
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x100

    .loc_0xB4:
      lwz       r3, 0x0(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x100
      lwz       r3, 0x0(r31)
      lhz       r0, 0x128(r3)
      cmplwi    r0, 0x406
      beq-      .loc_0x100
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x100:
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
 * Address:	801D3344
 * Size:	000038
 */
void Game::ItemHoney::WaitState::interactAbsorb((Game::CFSMItem*,
                                                 Game::InteractAbsorb&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0x3
      li        r6, 0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
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
 * Address:	801D337C
 * Size:	000038
 */
void Game::ItemHoney::ShrinkState::init((Game::CFSMItem*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0
      mr        r5, r4
      stw       r0, 0x14(r1)
      beq-      .loc_0x1C
      addi      r5, r5, 0x178

    .loc_0x1C:
      addi      r3, r4, 0x1A8
      li        r4, 0x6
      bl        0x2558E8
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801D33B4
 * Size:	000004
 */
void Game::ItemHoney::ShrinkState::exec((Game::CFSMItem*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D33B8
 * Size:	000004
 */
void Game::ItemHoney::ShrinkState::cleanup((Game::CFSMItem*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D33BC
 * Size:	000064
 */
void Game::ItemHoney::ShrinkState::onKeyEvent((Game::CFSMItem*,
                                               SysShape::KeyEvent const&))
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
      mr        r3, r31
      li        r4, 0
      bl        -0x98300
      lwz       r3, -0x6BB0(r13)
      mr        r4, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
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
 * Address:	801D3420
 * Size:	000024
 */
void kill__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item>
FPQ34Game9ItemHoney4Item(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r3, r3, 0x4C
      stw       r0, 0x14(r1)
      bl        0x1238
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3444
 * Size:	00004C
 */
void Game::ItemHoney::TouchState::init((Game::CFSMItem*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0
      mr        r5, r4
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      beq-      .loc_0x24
      addi      r5, r5, 0x178

    .loc_0x24:
      addi      r3, r4, 0x1A8
      li        r4, 0x5
      bl        0x255818
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
 * Address:	801D3490
 * Size:	000004
 */
void Game::ItemHoney::TouchState::exec((Game::CFSMItem*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3494
 * Size:	000004
 */
void Game::ItemHoney::TouchState::cleanup((Game::CFSMItem*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3498
 * Size:	000038
 */
void Game::ItemHoney::TouchState::interactAbsorb((Game::CFSMItem*,
                                                  Game::InteractAbsorb&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0x3
      li        r6, 0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
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
 * Address:	801D34D0
 * Size:	000034
 */
void Game::ItemHoney::TouchState::onKeyEvent((Game::CFSMItem*,
                                              SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0x2
      li        r6, 0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
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
 * Address:	801D3504
 * Size:	000080
 */
void Game::ItemHoney::TouchState::collisionCallback((Game::CFSMItem*,
                                                     Game::CollEvent&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lbz       r0, 0x10(r3)
      lwz       r31, 0x0(r5)
      cmplwi    r0, 0
      bne-      .loc_0x68
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x68
      li        r0, 0x1
      li        r4, 0x80B
      stb       r0, 0x10(r30)
      li        r5, 0
      lwz       r3, 0x26C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0x68:
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
 * Address:	801D3584
 * Size:	000038
 */
void Game::ItemHoney::DemoState::init((Game::CFSMItem*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0
      mr        r5, r4
      stw       r0, 0x14(r1)
      beq-      .loc_0x1C
      addi      r5, r5, 0x178

    .loc_0x1C:
      addi      r3, r4, 0x1A8
      li        r4, 0x5
      bl        0x2556E0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801D35BC
 * Size:	000004
 */
void Game::ItemHoney::DemoState::exec((Game::CFSMItem*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D35C0
 * Size:	000004
 */
void Game::ItemHoney::DemoState::cleanup((Game::CFSMItem*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D35C4
 * Size:	000038
 */
void Game::ItemHoney::DemoState::onKeyEvent((Game::CFSMItem*,
                                             SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0
      mr        r5, r4
      stw       r0, 0x14(r1)
      beq-      .loc_0x1C
      addi      r5, r5, 0x178

    .loc_0x1C:
      addi      r3, r4, 0x1A8
      li        r4, 0x5
      bl        0x2556A0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801D35FC
 * Size:	00003C
 */
void Game::ItemHoney::Item::demoOK(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x6BCC
      cmpwi     r3, 0x2
      li        r0, 0
      beq-      .loc_0x24
      cmpwi     r3, 0x4
      bne-      .loc_0x28

    .loc_0x24:
      li        r0, 0x1

    .loc_0x28:
      mr        r3, r0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3638
 * Size:	000088
 */
void Game::ItemHoney::Item::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x406
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x7668
      lis       r4, 0x804B
      lis       r3, 0x804C
      addi      r5, r4, 0x74C0
      li        r4, 0
      stw       r5, 0x0(r31)
      addi      r0, r5, 0x1B0
      subi      r3, r3, 0x7F1C
      lfs       f0, -0x4CD8(r2)
      stw       r0, 0x178(r31)
      addi      r0, r3, 0x1B0
      addi      r6, r31, 0x1C4
      li        r5, 0
      stw       r4, 0x1D8(r31)
      li        r7, 0
      stw       r4, 0x1DC(r31)
      stw       r3, 0x0(r31)
      stw       r0, 0x178(r31)
      stfs      f0, 0x1D0(r31)
      lwz       r3, 0x114(r31)
      lwz       r4, 0x174(r31)
      bl        -0x9F5F4
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801D36C0
 * Size:	000058
 */
void Game::ItemHoney::Item::createFSM(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r3, 0x1C
      stw       r0, 0x14(r1)
      bl        -0x1AF82C
      cmplwi    r3, 0
      beq-      .loc_0x48
      lis       r4, 0x804B
      lis       r5, 0x804B
      addi      r0, r4, 0x7A50
      lis       r4, 0x804C
      stw       r0, 0x0(r3)
      li        r6, -0x1
      addi      r5, r5, 0x7A38
      subi      r0, r4, 0x7AF0
      stw       r6, 0x18(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0x0(r3)

    .loc_0x48:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3718
 * Size:	000040
 */
void Game::ItemHoney::Item::doAI(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      bl        -0x6D34
      li        r0, 0x1
      mr        r3, r31
      stb       r0, 0x8(r1)
      addi      r4, r1, 0x8
      bl        -0x97B1C
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3758
 * Size:	000158
 */
void Game::ItemHoney::Item::onInit((Game::CreatureInitArg*))
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
      mr        r4, r30
      lwz       r3, -0x6BB0(r13)
      bl        0xE5C
      cmplwi    r31, 0
      stw       r3, 0x174(r30)
      beq-      .loc_0x40
      lbz       r0, 0x4(r31)
      stb       r0, 0x1E0(r30)
      b         .loc_0x88

    .loc_0x40:
      li        r0, 0
      stb       r0, 0x1E0(r30)
      bl        -0x10A200
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, -0x4CC8(r2)
      stw       r0, 0x8(r1)
      lfs       f1, -0x4CD4(r2)
      lfd       f2, 0x8(r1)
      lfs       f0, -0x4CD0(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      stb       r0, 0x1E0(r30)

    .loc_0x88:
      lwz       r6, -0x6BB0(r13)
      addi      r3, r30, 0x1A8
      li        r4, 0
      li        r5, 0
      lwz       r0, 0x20(r6)
      stw       r0, 0x1B8(r30)
      bl        0x255490
      lfs       f0, -0x4CCC(r2)
      stfs      f0, 0x1D4(r30)
      lwz       r3, 0x114(r30)
      lwz       r4, 0x174(r30)
      bl        -0x9DD44
      mr        r3, r30
      li        r4, 0
      lwz       r12, 0x0(r30)
      lwz       r12, 0xB4(r12)
      mtctr     r12
      bctrl
      cmplwi    r31, 0
      beq-      .loc_0x108
      lbz       r0, 0x5(r31)
      cmplwi    r0, 0
      beq-      .loc_0x108
      lwz       r3, 0x1D8(r30)
      mr        r4, r30
      li        r5, 0x5
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      b         .loc_0x128

    .loc_0x108:
      lwz       r3, 0x1D8(r30)
      mr        r4, r30
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0x128:
      mr        r3, r30
      li        r4, 0x1
      lwz       r12, 0x0(r30)
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl
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
 * Address:	801D38B0
 * Size:	000004
 */
void Game::ItemHoney::Item::onSetPosition(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D38B4
 * Size:	000008
 */
void Game::ItemHoney::Item::getMapCollisionRadius(void)
{
    /*
    .loc_0x0:
      lfs       f1, -0x4CC0(r2)
      blr
    */
}

/*
 * --INFO--
 * Address:	801D38BC
 * Size:	000130
 */
void Game::ItemHoney::Item::changeMaterial(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r26, 0x18(r1)
      mr        r27, r3
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x11C
      lbz       r0, 0x1E0(r27)
      cmplwi    r0, 0
      bne-      .loc_0x4C
      li        r31, 0xB6
      li        r30, 0x79
      li        r29, 0
      li        r28, 0xFF
      b         .loc_0x78

    .loc_0x4C:
      cmplwi    r0, 0x1
      bne-      .loc_0x68
      li        r31, 0x82
      li        r30, 0x28
      li        r29, 0x31
      li        r28, 0xFF
      b         .loc_0x78

    .loc_0x68:
      li        r31, 0x1A
      li        r30, 0x7
      li        r29, 0x36
      li        r28, 0xFF

    .loc_0x78:
      lwz       r3, 0x174(r27)
      subi      r4, r2, 0x4CBC
      lwz       r3, 0x8(r3)
      lwz       r3, 0x4(r3)
      lwz       r3, 0x64(r3)
      bl        -0x1A4BC4
      lwz       r4, 0x174(r27)
      rlwinm    r0,r3,2,14,29
      lwz       r3, 0x8(r4)
      lwz       r3, 0x4(r3)
      lwz       r3, 0x60(r3)
      lwzx      r26, r3, r0
      cmplwi    r26, 0
      bne-      .loc_0xCC
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x5BC
      li        r4, 0x1F9
      addi      r5, r5, 0x5CC
      crclr     6, 0x6
      bl        -0x1A9344

    .loc_0xCC:
      sth       r31, 0x8(r1)
      addi      r5, r1, 0x8
      li        r4, 0
      sth       r30, 0xA(r1)
      sth       r29, 0xC(r1)
      sth       r28, 0xE(r1)
      lwz       r3, 0x2C(r26)
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
      bl        -0x16CD68

    .loc_0x11C:
      lmw       r26, 0x18(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	801D39EC
 * Size:	000038
 */
void Game::ItemHoney::Item::updateBoundSphere(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lfs       f0, 0x19C(r3)
      stfs      f0, 0x1C4(r3)
      lfs       f0, 0x1A0(r3)
      stfs      f0, 0x1C8(r3)
      lfs       f0, 0x1A4(r3)
      stfs      f0, 0x1CC(r3)
      bl        -0x7404
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3A24
 * Size:	000094
 */
void Game::ItemHoney::Item::doSimulation((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      mr        r31, r3
      fmr       f31, f1
      lwz       r0, 0xB8(r3)
      cmplwi    r0, 0
      bne-      .loc_0x68
      bl        -0x7014
      cmpwi     r3, 0
      bne-      .loc_0x68
      lwz       r4, -0x6C10(r13)
      mr        r3, r31
      lfs       f0, 0x194(r31)
      fmr       f1, f31
      lfs       f2, 0x28(r4)
      fnmsubs   f0, f31, f2, f0
      stfs      f0, 0x194(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1CC(r12)
      mtctr     r12
      bctrl
      b         .loc_0x78

    .loc_0x68:
      lfs       f0, -0x4CE0(r2)
      stfs      f0, 0x198(r31)
      stfs      f0, 0x194(r31)
      stfs      f0, 0x190(r31)

    .loc_0x78:
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
 * Address:	801D3AB8
 * Size:	000054
 */
void Game::ItemHoney::Item::absorbable(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x7098
      cmplwi    r3, 0
      beq-      .loc_0x3C
      mr        r3, r31
      bl        -0x70A8
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x40

    .loc_0x3C:
      li        r3, 0

    .loc_0x40:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3B0C
 * Size:	000008
 */
void Game::ItemHoney::State::absorbable(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3B14
 * Size:	000060
 */
void Game::ItemHoney::Item::onKeyEvent((SysShape::KeyEvent const&))
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
      bl        -0x70FC
      cmplwi    r3, 0
      beq-      .loc_0x48
      mr        r3, r30
      bl        -0x710C
      lwz       r12, 0x0(r3)
      mr        r4, r30
      mr        r5, r31
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl

    .loc_0x48:
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
 * Address:	801D3B74
 * Size:	000060
 */
void Game::ItemHoney::Item::collisionCallback((Game::CollEvent&))
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
      bl        -0x715C
      cmplwi    r3, 0
      beq-      .loc_0x48
      mr        r3, r30
      bl        -0x716C
      lwz       r12, 0x0(r3)
      mr        r4, r30
      mr        r5, r31
      lwz       r12, 0x34(r12)
      mtctr     r12
      bctrl

    .loc_0x48:
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
 * Address:	801D3BD4
 * Size:	000004
 */
void Game::ItemHoney::State::collisionCallback((Game::CFSMItem*,
                                                Game::CollEvent&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3BD8
 * Size:	000068
 */
void Game::ItemHoney::Item::interactAbsorb((Game::InteractAbsorb&))
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
      bl        -0x71C0
      cmplwi    r3, 0
      beq-      .loc_0x4C
      mr        r3, r30
      bl        -0x71D0
      lwz       r12, 0x0(r3)
      mr        r4, r30
      mr        r5, r31
      lwz       r12, 0x38(r12)
      mtctr     r12
      bctrl
      b         .loc_0x50

    .loc_0x4C:
      li        r3, 0

    .loc_0x50:
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
 * Address:	801D3C40
 * Size:	000008
 */
void Game::ItemHoney::State::interactAbsorb((Game::CFSMItem*,
                                             Game::InteractAbsorb&))
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3C48
 * Size:	000004
 */
void Game::ItemHoney::Item::doDirectDraw((Graphics&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3C4C
 * Size:	00006C
 */
void Game::ItemHoney::Item::makeTrMatrix(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x8048
      mr        r5, r3
      stw       r0, 0x24(r1)
      addi      r3, r4, 0x5DC
      addi      r6, r1, 0x14
      lwz       r4, 0x0(r3)
      lwz       r8, 0x4(r3)
      lwz       r7, 0x8(r3)
      addi      r3, r5, 0x138
      lbz       r0, 0x1E0(r5)
      addi      r5, r5, 0x19C
      stw       r4, 0x14(r1)
      addi      r4, r1, 0x8
      rlwinm    r0,r0,2,0,29
      stw       r8, 0x18(r1)
      stw       r7, 0x1C(r1)
      lfsx      f0, r6, r0
      stfs      f0, 0x8(r1)
      stfs      f0, 0xC(r1)
      stfs      f0, 0x10(r1)
      bl        0x2548BC
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3CB8
 * Size:	00003C
 */
void Game::ItemHoney::Item::onStartCapture(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r4, r3
      li        r5, 0
      stw       r0, 0x14(r1)
      li        r6, 0
      lwz       r3, 0x1D8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
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
 * Address:	801D3CF4
 * Size:	000054
 */
void Game::ItemHoney::Item::onUpdateCapture((Matrixf&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x4CE0(r2)
      stw       r0, 0x14(r1)
      lfs       f1, 0x144(r3)
      stfs      f1, 0x19C(r3)
      lfs       f1, 0x154(r3)
      stfs      f1, 0x1A0(r3)
      lfs       f1, 0x164(r3)
      stfs      f1, 0x1A4(r3)
      stfs      f0, 0x190(r3)
      stfs      f0, 0x194(r3)
      stfs      f0, 0x198(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x218(r12)
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
 * Address:	801D3D48
 * Size:	000028
 */
void Game::ItemHoney::Item::onEndCapture(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r4, r3, 0x19C
      li        r5, 0
      stw       r0, 0x14(r1)
      bl        -0x98BB4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3D70
 * Size:	00002C
 */
void Game::ItemHoney::Item::on_movie_end((bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x4
      addi      r3, r3, 0x1A8
      stw       r0, 0x14(r1)
      li        r5, 0
      bl        0x254F00
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3D9C
 * Size:	00002C
 */
void Game::ItemHoney::Item::isShrinking(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x736C
      subfic    r0, r3, 0x3
      cntlzw    r0, r0
      rlwinm    r3,r0,27,5,31
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801D3DC8
 * Size:	0000D0
 */
void Game::ItemHoney::Mgr::__ct(void)
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
      addi      r0, r30, 0x80
      stw       r0, 0x4(r30)

    .loc_0x28:
      mr        r3, r30
      li        r4, 0
      li        r5, 0x1
      bl        -0x708C
      addi      r31, r30, 0x30
      mr        r3, r31
      bl        0x23D588
      lis       r3, 0x804B
      lis       r4, 0x804C
      subi      r0, r3, 0x5324
      lis       r3, 0x804B
      stw       r0, 0x0(r31)
      subi      r0, r4, 0x7F48
      addi      r4, r3, 0x7FF8
      li        r5, 0
      stw       r0, 0x0(r31)
      addi      r0, r4, 0x74
      addi      r3, r30, 0x4C
      stb       r5, 0x18(r31)
      stw       r4, 0x0(r30)
      stw       r0, 0x30(r30)
      bl        0x18E0
      lis       r4, 0x804B
      mr        r3, r30
      addi      r5, r4, 0x7E30
      li        r4, 0x1
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x74
      stw       r0, 0x30(r30)
      bl        -0x7098
      lis       r3, 0x8048
      subi      r0, r2, 0x4CB4
      addi      r4, r3, 0x5E8
      mr        r3, r30
      stw       r4, 0x28(r30)
      stw       r0, 0x8(r30)
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
 * Address:	801D3E98
 * Size:	000100
 */
void __dt__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> Fv(void)
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
      beq-      .loc_0xE4
      lis       r3, 0x804B
      addic.    r0, r30, 0x4C
      addi      r3, r3, 0x7FF8
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x74
      stw       r0, 0x30(r30)
      beq-      .loc_0xA0
      lis       r3, 0x804B
      addic.    r0, r30, 0x4C
      addi      r3, r3, 0x7F6C
      stw       r3, 0x4C(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x68(r30)
      beq-      .loc_0xA0
      lis       r3, 0x804B
      addic.    r0, r30, 0x4C
      addi      r3, r3, 0x7EF0
      stw       r3, 0x4C(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x68(r30)
      beq-      .loc_0xA0
      lis       r3, 0x804C
      addic.    r0, r30, 0x4C
      subi      r0, r3, 0x7F48
      stw       r0, 0x4C(r30)
      beq-      .loc_0xA0
      lis       r4, 0x804B
      addi      r3, r30, 0x4C
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x4C(r30)
      bl        0x23D654

    .loc_0xA0:
      addic.    r0, r30, 0x30
      beq-      .loc_0xD4
      lis       r3, 0x804C
      addic.    r0, r30, 0x30
      subi      r0, r3, 0x7F48
      stw       r0, 0x30(r30)
      beq-      .loc_0xD4
      lis       r4, 0x804B
      addi      r3, r30, 0x30
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x30(r30)
      bl        0x23D620

    .loc_0xD4:
      extsh.    r0, r31
      ble-      .loc_0xE4
      mr        r3, r30
      bl        -0x1AFEC4

    .loc_0xE4:
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
 * Address:	801D3F98
 * Size:	0000A0
 */
void MonoObjectMgr<Game::ItemHoney::Item>::~MonoObjectMgr()
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
      lis       r4, 0x804B
      addi      r4, r4, 0x7F6C
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x2C
      stw       r0, 0x1C(r30)
      beq-      .loc_0x74
      lis       r4, 0x804B
      addi      r4, r4, 0x7EF0
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x2C
      stw       r0, 0x1C(r30)
      beq-      .loc_0x74
      lis       r4, 0x804C
      subi      r0, r4, 0x7F48
      stw       r0, 0x0(r30)
      beq-      .loc_0x74
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x5324
      stw       r0, 0x0(r30)
      bl        0x23D580

    .loc_0x74:
      extsh.    r0, r31
      ble-      .loc_0x84
      mr        r3, r30
      bl        -0x1AFF64

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
 * Address:	801D4038
 * Size:	000070
 */
void Container<Game::ItemHoney::Item>::~Container()
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
      subi      r0, r4, 0x7F48
      stw       r0, 0x0(r30)
      beq-      .loc_0x44
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x5324
      stw       r0, 0x0(r30)
      bl        0x23D510

    .loc_0x44:
      extsh.    r0, r31
      ble-      .loc_0x54
      mr        r3, r30
      bl        -0x1AFFD4

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
 * Address:	801D40A8
 * Size:	000070
 */
void Game::ItemHoney::Mgr::onCreateModel((SysShape::Model*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      lis       r4, 0x100
      lwz       r3, 0x8(r31)
      addi      r4, r4, 0x200
      bl        -0x16D9F0
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
      bl        -0x16D7D4
      lwz       r3, 0x8(r31)
      bl        -0x16D90C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801D4118
 * Size:	0000CC
 */
void Game::ItemHoney::Mgr::onLoadResources(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x8048
      li        r5, 0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      addi      r31, r4, 0x5B0
      addi      r4, r31, 0
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r3
      lwz       r3, -0x6514(r13)
      bl        0x24F214
      mr        r3, r29
      subi      r4, r2, 0x4CAC
      bl        -0x7280
      mr        r3, r29
      addi      r4, r31, 0x54
      li        r5, 0
      lis       r6, 0x2
      bl        -0x7218
      lwz       r3, 0x1C(r29)
      lis       r4, 0x4
      lwz       r3, 0x0(r3)
      bl        -0x1508A0
      mr        r3, r29
      addi      r4, r31, 0x60
      bl        -0x6FB8
      mr        r0, r3
      mr        r3, r29
      mr        r30, r0
      addi      r5, r31, 0x6C
      mr        r4, r30
      bl        -0x71A0
      mr        r3, r29
      mr        r4, r30
      bl        -0x6F58
      mr        r3, r29
      li        r4, 0x18
      lis       r5, 0x8
      bl        0x1954
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0
      bl        0x24F1A0
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
 * Address:	801D41E4
 * Size:	00002C
 */
void Game::ItemHoney::Mgr::birth(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x4C(r3)
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
 * Address:	801D4210
 * Size:	000060
 */
void generatorBirth__Q34Game9ItemHoney3MgrFR10Vector3<float> R10Vector3<float>
PQ24Game11GenItemParm(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r4
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      li        r4, 0
      mr        r31, r3
      bl        -0x99278
      mr        r3, r31
      mr        r4, r30
      li        r5, 0
      bl        -0x990A8
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
 * Address:	801D4270
 * Size:	000118
 */
void Game::ItemHoney::Mgr::__dt(void)
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
      beq-      .loc_0xFC
      lis       r3, 0x804B
      addi      r3, r3, 0x7E30
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x74
      stw       r0, 0x30(r30)
      beq-      .loc_0xEC
      lis       r3, 0x804B
      addic.    r0, r30, 0x4C
      addi      r3, r3, 0x7FF8
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x74
      stw       r0, 0x30(r30)
      beq-      .loc_0xB8
      lis       r3, 0x804B
      addic.    r0, r30, 0x4C
      addi      r3, r3, 0x7F6C
      stw       r3, 0x4C(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x68(r30)
      beq-      .loc_0xB8
      lis       r3, 0x804B
      addic.    r0, r30, 0x4C
      addi      r3, r3, 0x7EF0
      stw       r3, 0x4C(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x68(r30)
      beq-      .loc_0xB8
      lis       r3, 0x804C
      addic.    r0, r30, 0x4C
      subi      r0, r3, 0x7F48
      stw       r0, 0x4C(r30)
      beq-      .loc_0xB8
      lis       r4, 0x804B
      addi      r3, r30, 0x4C
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x4C(r30)
      bl        0x23D264

    .loc_0xB8:
      addic.    r0, r30, 0x30
      beq-      .loc_0xEC
      lis       r3, 0x804C
      addic.    r0, r30, 0x30
      subi      r0, r3, 0x7F48
      stw       r0, 0x30(r30)
      beq-      .loc_0xEC
      lis       r4, 0x804B
      addi      r3, r30, 0x30
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x30(r30)
      bl        0x23D230

    .loc_0xEC:
      extsh.    r0, r31
      ble-      .loc_0xFC
      mr        r3, r30
      bl        -0x1B02B4

    .loc_0xFC:
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
 * Address:	801D4388
 * Size:	00000C
 */
void Game::ItemHoney::Mgr::generatorGetID(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x6D69
      addi      r3, r3, 0x7475
      blr
    */
}

/*
 * --INFO--
 * Address:	801D4394
 * Size:	000088
 */
void ObjectMgr<Game::ItemHoney::Item>::~ObjectMgr()
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
      lis       r4, 0x804B
      addi      r4, r4, 0x7EF0
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x2C
      stw       r0, 0x1C(r30)
      beq-      .loc_0x5C
      lis       r4, 0x804C
      subi      r0, r4, 0x7F48
      stw       r0, 0x0(r30)
      beq-      .loc_0x5C
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x5324
      stw       r0, 0x0(r30)
      bl        0x23D19C

    .loc_0x5C:
      extsh.    r0, r31
      ble-      .loc_0x6C
      mr        r3, r30
      bl        -0x1B0348

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
 * Address:	801D441C
 * Size:	00002C
 */
void birth__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x4C(r3)
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
 * Address:	801D4448
 * Size:	000008
 */
void Game::ItemHoney::Item::getCreatureName(void)
{
    /*
    .loc_0x0:
      subi      r3, r2, 0x4CB4
      blr
    */
}

/*
 * --INFO--
 * Address:	801D4450
 * Size:	000008
 */
void Game::ItemHoney::TouchState::absorbable(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	801D4458
 * Size:	000008
 */
void Game::ItemHoney::ShrinkState::interactAbsorb((Game::CFSMItem*,
                                                   Game::InteractAbsorb&))
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	801D4460
 * Size:	000008
 */
void Game::ItemHoney::ShrinkState::absorbable(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	801D4468
 * Size:	000008
 */
void Game::ItemHoney::WaitState::absorbable(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	801D4470
 * Size:	000004
 */
void Game::ItemHoney::State::onKeyEvent((Game::CFSMItem*,
                                         SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D4474
 * Size:	000004
 */
void onCreateModel__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item>
FPQ28SysShape5Model(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D4478
 * Size:	00002C
 */
void doAnimation__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x4C(r3)
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
 * Address:	801D44A4
 * Size:	00002C
 */
void doEntry__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x4C(r3)
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
 * Address:	801D44D0
 * Size:	00002C
 */
void doSetView__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> Fi(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x4C(r3)
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
 * Address:	801D44FC
 * Size:	00002C
 */
void doViewCalc__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x4C(r3)
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
 * Address:	801D4528
 * Size:	00002C
 */
void doSimulation__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> Ff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x4C(r3)
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
 * Address:	801D4554
 * Size:	00002C
 */
void doDirectDraw__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item>
FR8Graphics(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x4C(r3)
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
 * Address:	801D4580
 * Size:	00002C
 */
void getNext__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> FPv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x4C(r3)
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
 * Address:	801D45AC
 * Size:	00002C
 */
void getStart__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x4C(r3)
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
 * Address:	801D45D8
 * Size:	000030
 */
void createModel__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item>
FPQ34Game9ItemHoney4Item(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r3, 0x7C(r3)
      lwz       r4, 0x188(r4)
      lwz       r5, 0x184(r5)
      bl        0x256808
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801D4608
 * Size:	000060
 */
void MonoObjectMgr<Game::ItemHoney::Item>::birth()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x4AC
      cmpwi     r3, -0x1
      beq-      .loc_0x48
      lwz       r6, 0x28(r31)
      li        r0, 0
      lwz       r4, 0x2C(r31)
      mulli     r5, r3, 0x1E4
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
 * Address:	801D4668
 * Size:	000054
 */
void MonoObjectMgr<Game::ItemHoney::Item>::kill(Game::ItemHoney::Item*)
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
      addi      r5, r5, 0x1E4
      addi      r6, r6, 0x1
      bdnz+     .loc_0x18
      blr
    */
}

/*
 * --INFO--
 * Address:	801D46BC
 * Size:	000040
 */
void MonoObjectMgr<Game::ItemHoney::Item>::getNext(void*)
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
 * Address:	801D46FC
 * Size:	000030
 */
void MonoObjectMgr<Game::ItemHoney::Item>::getStart()
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
 * Address:	801D472C
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemHoney::Item>::getEnd()
{
    /*
    .loc_0x0:
      lwz       r3, 0x24(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801D4734
 * Size:	000010
 */
void MonoObjectMgr<Game::ItemHoney::Item>::getAt(int)
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x1E4
      lwz       r3, 0x28(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	801D4744
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemHoney::Item>::getTo()
{
    /*
    .loc_0x0:
      lwz       r3, 0x24(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801D474C
 * Size:	000080
 */
void MonoObjectMgr<Game::ItemHoney::Item>::doAnimation()
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
      addi      r31, r31, 0x1E4
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
 * Address:	801D47CC
 * Size:	000080
 */
void MonoObjectMgr<Game::ItemHoney::Item>::doEntry()
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
      addi      r31, r31, 0x1E4
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
 * Address:	801D484C
 * Size:	000090
 */
void MonoObjectMgr<Game::ItemHoney::Item>::doSetView(int)
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
      addi      r31, r31, 0x1E4
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
 * Address:	801D48DC
 * Size:	000080
 */
void MonoObjectMgr<Game::ItemHoney::Item>::doViewCalc()
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
      addi      r31, r31, 0x1E4
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
 * Address:	801D495C
 * Size:	000090
 */
void MonoObjectMgr<Game::ItemHoney::Item>::doSimulation(float)
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
      addi      r31, r31, 0x1E4
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
 * Address:	801D49EC
 * Size:	000090
 */
void MonoObjectMgr<Game::ItemHoney::Item>::doDirectDraw(Graphics&)
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
      addi      r31, r31, 0x1E4
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
 * Address:	801D4A7C
 * Size:	000018
 */
void MonoObjectMgr<Game::ItemHoney::Item>::resetMgr()
{
    /*
    .loc_0x0:
      li        r0, 0
      stw       r0, 0x28(r3)
      stw       r0, 0x24(r3)
      stw       r0, 0x20(r3)
      stw       r0, 0x2C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801D4A94
 * Size:	000030
 */
void MonoObjectMgr<Game::ItemHoney::Item>::clearMgr()
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
 * Address:	801D4AC4
 * Size:	000004
 */
void MonoObjectMgr<Game::ItemHoney::Item>::onAlloc()
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801D4AC8
 * Size:	00003C
 */
void MonoObjectMgr<Game::ItemHoney::Item>::getEmptyIndex()
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
 * Address:	801D4B04
 * Size:	000010
 */
void MonoObjectMgr<Game::ItemHoney::Item>::get(void*)
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x1E4
      lwz       r3, 0x28(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	801D4B14
 * Size:	00002C
 */
void Container<Game::ItemHoney::Item>::getObject(void*)
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
 * Address:	801D4B40
 * Size:	000008
 */
void Container<Game::ItemHoney::Item>::getAt(int)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	801D4B48
 * Size:	000008
 */
void Container<Game::ItemHoney::Item>::getTo()
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	801D4B50
 * Size:	0001F4
 */
void ObjectMgr<Game::ItemHoney::Item>::doDirectDraw(Graphics&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x804C
      stw       r0, 0x24(r1)
      li        r0, 0
      subi      r5, r5, 0x7AC0
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
 * Address:	801D4D44
 * Size:	00004C
 */
void Iterator<Game::ItemHoney::Item>::isDone()
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
 * Address:	801D4D90
 * Size:	0001F4
 */
void ObjectMgr<Game::ItemHoney::Item>::doSimulation(float)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804C
      stw       r0, 0x24(r1)
      li        r0, 0
      subi      r4, r4, 0x7AC0
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
 * Address:	801D4F84
 * Size:	0001E4
 */
void ObjectMgr<Game::ItemHoney::Item>::doViewCalc()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804C
      stw       r0, 0x24(r1)
      li        r0, 0
      subi      r4, r4, 0x7AC0
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
 * Address:	801D5168
 * Size:	0001F4
 */
void ObjectMgr<Game::ItemHoney::Item>::doSetView(int)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x804C
      stw       r0, 0x24(r1)
      li        r0, 0
      subi      r5, r5, 0x7AC0
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
 * Address:	801D535C
 * Size:	0001E4
 */
void ObjectMgr<Game::ItemHoney::Item>::doEntry()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804C
      stw       r0, 0x24(r1)
      li        r0, 0
      subi      r4, r4, 0x7AC0
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
 * Address:	801D5540
 * Size:	0001E4
 */
void ObjectMgr<Game::ItemHoney::Item>::doAnimation()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804C
      stw       r0, 0x24(r1)
      li        r0, 0
      subi      r4, r4, 0x7AC0
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
 * Address:	801D5724
 * Size:	00009C
 */
void MonoObjectMgr<Game::ItemHoney::Item>::MonoObjectMgr()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x23BC58
      lis       r4, 0x804B
      lis       r3, 0x804C
      subi      r0, r4, 0x5324
      lis       r6, 0x804B
      stw       r0, 0x0(r31)
      subi      r0, r3, 0x7F48
      lis       r4, 0x804B
      lis       r3, 0x804B
      stw       r0, 0x0(r31)
      li        r8, 0
      addi      r7, r4, 0x7EF0
      addi      r5, r3, 0x7F6C
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
 * Address:	801D57C0
 * Size:	00002C
 */
void getEnd__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x4C(r3)
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
 * Address:	801D57EC
 * Size:	00002C
 */
void get__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> FPv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x4C(r3)
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
 * Address:	801D5818
 * Size:	0001E8
 */
void initDependency__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804C
      addi      r3, r3, 0x4C
      stw       r0, 0x24(r1)
      li        r0, 0
      subi      r4, r4, 0x7AC0
      cmplwi    r0, 0
      stw       r4, 0x8(r1)
      stw       r0, 0x14(r1)
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x4C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1B8

    .loc_0x4C:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0xB8

    .loc_0x64:
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
      bne-      .loc_0x1B8
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0xB8:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x64
      b         .loc_0x1B8

    .loc_0xD8:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1BC(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x128
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1B8

    .loc_0x128:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x19C

    .loc_0x148:
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
      bne-      .loc_0x1B8
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x19C:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x148

    .loc_0x1B8:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0xD8
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801D5A00
 * Size:	0000E0
 */
void killAll__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x34(r1)
      stmw      r27, 0x1C(r1)
      mr        r27, r3
      subi      r31, r4, 0x5D30
      li        r29, 0
      b         .loc_0xC0

    .loc_0x24:
      addi      r3, r27, 0x4C
      mr        r4, r29
      lwz       r12, 0x4C(r27)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      stw       r31, 0x8(r1)
      mr        r28, r3
      stw       r0, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x70
      mr        r3, r28
      addi      r4, r1, 0x8
      bl        -0x9A97C

    .loc_0x70:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0xF8(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0xBC
      lwz       r30, -0x6E44(r13)
      cmplwi    r30, 0
      beq-      .loc_0xBC
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0xF8(r12)
      mtctr     r12
      bctrl
      mr        r0, r3
      mr        r3, r30
      mr        r4, r0
      bl        -0x1AEE94

    .loc_0xBC:
      addi      r29, r29, 0x1

    .loc_0xC0:
      lwz       r0, 0x70(r27)
      cmpw      r29, r0
      blt+      .loc_0x24
      lmw       r27, 0x1C(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	801D5AE0
 * Size:	00002C
 */
void createModelCallback__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item>
FPQ28SysShape5Model(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA0(r12)
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
 * Address:	801D5B0C
 * Size:	0000E4
 */
void createMgr__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> FiUl(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      mr        r30, r5
      stw       r29, 0x24(r1)
      mr        r29, r4
      stw       r28, 0x20(r1)
      mr        r28, r3
      addi      r3, r28, 0x4C
      bl        0x314
      mr        r3, r28
      bl        0x2A8
      li        r3, 0x1C
      bl        -0x1B1CA4
      mr.       r31, r3
      beq-      .loc_0xC0
      li        r3, 0x14
      bl        -0x1B1CB4
      mr.       r9, r3
      beq-      .loc_0xA0
      lis       r3, 0x804C
      lis       r4, 0x804B
      subi      r7, r3, 0x7AD8
      lis       r3, 0x804C
      lwz       r6, 0x0(r7)
      addi      r4, r4, 0x16BC
      lwz       r5, 0x4(r7)
      subi      r0, r3, 0x7ACC
      lwz       r3, 0x8(r7)
      stw       r6, 0x8(r1)
      stw       r4, 0x0(r9)
      stw       r0, 0x0(r9)
      stw       r28, 0x4(r9)
      stw       r6, 0x8(r9)
      stw       r5, 0xC(r9)
      stw       r5, 0xC(r1)
      stw       r3, 0x10(r1)
      stw       r3, 0x10(r9)

    .loc_0xA0:
      lwz       r4, 0x18(r28)
      mr        r3, r31
      lwz       r5, 0x1C(r28)
      mr        r6, r29
      mr        r7, r30
      li        r8, 0x2
      bl        0x254F3C
      mr        r31, r3

    .loc_0xC0:
      stw       r31, 0x7C(r28)
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
 * Address:	801D5BF0
 * Size:	000038
 */
void Iterator<Game::ItemHoney::Item>::operator*()
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
 * Address:	801D5C28
 * Size:	0000E4
 */
void Iterator<Game::ItemHoney::Item>::next()
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
 * Address:	801D5D0C
 * Size:	0000DC
 */
void Iterator<Game::ItemHoney::Item>::first()
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
 * Address:	801D5DE8
 * Size:	000064
 */
void onAlloc__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> Fv(void)
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
      addi      r3, r30, 0x4C
      mr        r4, r31
      lwz       r12, 0x4C(r30)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      stw       r31, 0x184(r3)
      addi      r31, r31, 0x1

    .loc_0x40:
      lwz       r0, 0x70(r30)
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
 * Address:	801D5E4C
 * Size:	000188
 */
void MonoObjectMgr<Game::ItemHoney::Item>::alloc(int)
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
      mulli     r3, r29, 0x1E4
      stw       r28, 0x10(r1)
      addi      r3, r3, 0x10
      bl        -0x1B1ED0
      lis       r4, 0x801D
      mr        r7, r29
      addi      r4, r4, 0x3638
      li        r5, 0
      li        r6, 0x1E4
      bl        -0x1144A4
      stw       r3, 0x28(r30)
      li        r0, 0
      mr        r3, r29
      stw       r31, 0x24(r30)
      stw       r0, 0x20(r30)
      bl        -0x1B1F00
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
      addi      r29, r29, 0x1E4
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
 * Address:	801D5FD4
 * Size:	000030
 */
void Delegate1<Game::FixedSizeItemMgr<Game::ItemHoney::Item>,
               SysShape::Model*>::invoke(SysShape::Model*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r3
      stw       r0, 0x14(r1)
      addi      r12, r5, 0x8
      lwz       r3, 0x4(r3)
      bl        -0x1144C8
      nop
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801D6004
 * Size:	000008
 */
void @376 @Game::ItemHoney::Item::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x178
      b         -0x24F4
    */
}

/*
 * --INFO--
 * Address:	801D600C
 * Size:	000008
 */
void @48 @__dt__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> Fv(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x30
      b         -0x2178
    */
}

/*
 * --INFO--
 * Address:	801D6014
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemHoney::Item>::@28 @resetMgr()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x159C
    */
}

/*
 * --INFO--
 * Address:	801D601C
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemHoney::Item>::@28 @doDirectDraw(Graphics&)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x1634
    */
}

/*
 * --INFO--
 * Address:	801D6024
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemHoney::Item>::@28 @doSimulation(float)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x16CC
    */
}

/*
 * --INFO--
 * Address:	801D602C
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemHoney::Item>::@28 @doViewCalc()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x1754
    */
}

/*
 * --INFO--
 * Address:	801D6034
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemHoney::Item>::@28 @doSetView(int)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x17EC
    */
}

/*
 * --INFO--
 * Address:	801D603C
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemHoney::Item>::@28 @doEntry()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x1874
    */
}

/*
 * --INFO--
 * Address:	801D6044
 * Size:	000008
 */
void MonoObjectMgr<Game::ItemHoney::Item>::@28 @doAnimation()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x18FC
    */
}

/*
 * --INFO--
 * Address:	801D604C
 * Size:	000008
 */
void ObjectMgr<Game::ItemHoney::Item>::@28 @doDirectDraw(Graphics&)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x1500
    */
}

/*
 * --INFO--
 * Address:	801D6054
 * Size:	000008
 */
void ObjectMgr<Game::ItemHoney::Item>::@28 @doSimulation(float)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x12C8
    */
}

/*
 * --INFO--
 * Address:	801D605C
 * Size:	000008
 */
void ObjectMgr<Game::ItemHoney::Item>::@28 @doViewCalc()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x10DC
    */
}

/*
 * --INFO--
 * Address:	801D6064
 * Size:	000008
 */
void ObjectMgr<Game::ItemHoney::Item>::@28 @doSetView(int)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0xF00
    */
}

/*
 * --INFO--
 * Address:	801D606C
 * Size:	000008
 */
void ObjectMgr<Game::ItemHoney::Item>::@28 @doEntry()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0xD14
    */
}

/*
 * --INFO--
 * Address:	801D6074
 * Size:	000008
 */
void ObjectMgr<Game::ItemHoney::Item>::@28 @doAnimation()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0xB38
    */
}

/*
 * --INFO--
 * Address:	801D607C
 * Size:	000008
 */
void @48 @getEnd__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> Fv(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x30
      b         -0x8C0
    */
}

/*
 * --INFO--
 * Address:	801D6084
 * Size:	000008
 */
void @48 @getStart__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> Fv(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x30
      b         -0x1ADC
    */
}

/*
 * --INFO--
 * Address:	801D608C
 * Size:	000008
 */
void @48 @getNext__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> FPv(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x30
      b         -0x1B10
    */
}

/*
 * --INFO--
 * Address:	801D6094
 * Size:	000008
 */
void @48 @get__Q24Game40FixedSizeItemMgr<Game::ItemHoney::Item> FPv(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x30
      b         -0x8AC
    */
}

/*
 * --INFO--
 * Address:	801D609C
 * Size:	000008
 */
void @48 @Game::ItemHoney::Mgr::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x30
      b         -0x1E30
    */
}
