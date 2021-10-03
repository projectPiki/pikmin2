

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
 * Address:	801B4A80
 * Size:	000100
 */
void Game::GameSystem::__ct((Game::BaseGameSection*))
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
      mr        r29, r30
      stw       r28, 0x10(r1)
      bl        0x25C8E8
      lis       r4, 0x804B
      lis       r3, 0x804B
      subi      r0, r4, 0x5324
      lis       r5, 0x804B
      stw       r0, 0x0(r30)
      addi      r0, r3, 0x1CB0
      lis       r4, 0x804B
      lis       r3, 0x804B
      stw       r0, 0x0(r30)
      li        r0, 0
      addi      r6, r4, 0x1C34
      addi      r4, r3, 0x1BB4
      stb       r0, 0x18(r30)
      subi      r0, r5, 0x4A10
      addi      r28, r29, 0x20
      addi      r5, r6, 0x2C
      stw       r0, 0x1C(r30)
      addi      r0, r4, 0x2C
      mr        r3, r28
      stw       r6, 0x0(r30)
      stw       r5, 0x1C(r30)
      stw       r4, 0x0(r29)
      stw       r0, 0x1C(r29)
      bl        0x25C888
      lis       r4, 0x804B
      lis       r3, 0x804B
      addi      r4, r4, 0x1BA4
      li        r0, 0
      stw       r4, 0x0(r28)
      addi      r4, r3, 0x5B68
      addi      r3, r4, 0x2C
      stw       r4, 0x0(r30)
      stw       r3, 0x1C(r30)
      stb       r0, 0x3C(r30)
      stw       r31, 0x58(r30)
      stw       r0, 0x44(r30)
      stw       r0, 0x54(r30)
      bl        -0x7AB38
      bl        0x796B8
      li        r0, 0
      stb       r0, 0x3C(r30)
      bl        0x1568
      li        r0, 0
      mr        r3, r30
      stb       r0, 0x4D(r30)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801B4B80
 * Size:	0000E8
 */
void Game::GameSystem::__dt(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      stw       r30, 0x8(r1)
      mr        r30, r4
      beq-      .loc_0xCC
      lis       r3, 0x804B
      addi      r3, r3, 0x5B68
      stw       r3, 0x0(r31)
      addi      r0, r3, 0x2C
      stw       r0, 0x1C(r31)
      bl        0x1610
      cmplwi    r31, 0
      beq-      .loc_0xBC
      lis       r3, 0x804B
      addic.    r0, r31, 0x20
      addi      r3, r3, 0x1BB4
      stw       r3, 0x0(r31)
      addi      r0, r3, 0x2C
      stw       r0, 0x1C(r31)
      beq-      .loc_0x74
      lis       r4, 0x804B
      addi      r3, r31, 0x20
      addi      r0, r4, 0x1BA4
      li        r4, 0
      stw       r0, 0x20(r31)
      bl        0x25C998

    .loc_0x74:
      cmplwi    r31, 0
      beq-      .loc_0xBC
      lis       r3, 0x804B
      addi      r3, r3, 0x1C34
      stw       r3, 0x0(r31)
      addi      r0, r3, 0x2C
      stw       r0, 0x1C(r31)
      beq-      .loc_0xBC
      lis       r3, 0x804B
      addi      r0, r3, 0x1CB0
      stw       r0, 0x0(r31)
      beq-      .loc_0xBC
      lis       r4, 0x804B
      mr        r3, r31
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x0(r31)
      bl        0x25C950

    .loc_0xBC:
      extsh.    r0, r30
      ble-      .loc_0xCC
      mr        r3, r31
      bl        -0x190B94

    .loc_0xCC:
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
 * Address:	801B4C68
 * Size:	0000F0
 */
void Game::GameSystem::init(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr        r31, r3
      stb       r0, 0x4D(r3)
      lis       r3, 0x8048
      subi      r4, r3, 0x430
      stb       r0, 0x3C(r31)
      stw       r0, 0x50(r31)
      lwz       r3, -0x6514(r13)
      bl        0x26E6C0
      li        r3, 0x30
      bl        -0x190E00
      mr.       r0, r3
      beq-      .loc_0x54
      li        r4, 0x200
      bl        -0xCD78
      mr        r0, r3

    .loc_0x54:
      lis       r3, 0x8048
      stw       r0, -0x6C70(r13)
      subi      r4, r3, 0x430
      lwz       r3, -0x6514(r13)
      bl        0x26E698
      li        r3, 0x5C
      bl        -0x190E30
      mr.       r0, r3
      beq-      .loc_0x80
      bl        0x15D0
      mr        r0, r3

    .loc_0x80:
      stw       r0, -0x6C10(r13)
      bl        -0x150F8
      bl        0x1C0C8
      li        r0, 0
      li        r3, 0x244
      stb       r0, 0x4A(r31)
      stb       r0, 0x49(r31)
      stb       r0, 0x4B(r31)
      stb       r0, 0x4C(r31)
      bl        -0x190E68
      mr.       r0, r3
      beq-      .loc_0xB8
      bl        -0x8E118
      mr        r0, r3

    .loc_0xB8:
      stw       r0, 0x40(r31)
      lis       r3, 0x8048
      subi      r4, r3, 0x424
      lwz       r3, 0x40(r31)
      bl        -0x8D930
      lwz       r3, 0x40(r31)
      lwz       r0, 0x240(r3)
      ori       r0, r0, 0x1
      stw       r0, 0x240(r3)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801B4D58
 * Size:	000020
 */
void Game::GameSystem::calcFrameDist((int))
{
    /*
    .loc_0x0:
      lwz       r5, 0x50(r3)
      lis       r0, 0x4000
      sub       r0, r0, r4
      cmpw      r5, r4
      add       r3, r0, r5
      bltlr-
      sub       r3, r5, r4
      blr
    */
}

/*
 * --INFO--
 * Address:	801B4D78
 * Size:	0000DC
 */
void Game::GameSystem::startFrame(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r3, 0x4B(r3)
      cmplwi    r3, 0
      beq-      .loc_0x28
      subi      r0, r3, 0x1
      stb       r0, 0x4B(r31)

    .loc_0x28:
      lwz       r3, 0x50(r31)
      lis       r0, 0x4000
      addi      r3, r3, 0x1
      stw       r3, 0x50(r31)
      lwz       r3, 0x50(r31)
      cmpw      r3, r0
      ble-      .loc_0x4C
      li        r0, 0
      stw       r0, 0x50(r31)

    .loc_0x4C:
      lwz       r3, -0x6D38(r13)
      bl        -0x5E084
      lwz       r3, -0x6CB0(r13)
      bl        -0x1E63C
      mr        r3, r31
      bl        0x1F0
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xC8
      lbz       r0, 0x4A(r31)
      cmplwi    r0, 0
      bne-      .loc_0xC8
      lbz       r0, 0x3C(r31)
      rlwinm.   r0,r0,0,28,28
      bne-      .loc_0xC8
      mr        r3, r31
      bl        0x1C0
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xC8
      lwz       r3, -0x64AC(r13)
      cmplwi    r3, 0
      beq-      .loc_0xAC
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0
      bne-      .loc_0xC8

    .loc_0xAC:
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x40(r3)
      lwz       r0, 0x218(r3)
      cmpwi     r0, 0
      beq-      .loc_0xC8
      lwz       r3, 0x40(r31)
      bl        -0x8DB18

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
 * Address:	801B4E54
 * Size:	000018
 */
void Game::GameSystem::endFrame(void)
{
    /*
    .loc_0x0:
      lbz       r4, 0x4B(r3)
      cmplwi    r4, 0
      beqlr-
      subi      r0, r4, 0x1
      stb       r0, 0x4B(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801B4E6C
 * Size:	000038
 */
void Game::GameSystem::startFadeout((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x58(r3)
      cmplwi    r3, 0
      beq-      .loc_0x28
      lwz       r12, 0x0(r3)
      lwz       r12, 0xBC(r12)
      mtctr     r12
      bctrl

    .loc_0x28:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801B4EA4
 * Size:	000038
 */
void Game::GameSystem::startFadein((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x58(r3)
      cmplwi    r3, 0
      beq-      .loc_0x28
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC0(r12)
      mtctr     r12
      bctrl

    .loc_0x28:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801B4EDC
 * Size:	000038
 */
void Game::GameSystem::startFadeoutin((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x58(r3)
      cmplwi    r3, 0
      beq-      .loc_0x28
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC4(r12)
      mtctr     r12
      bctrl

    .loc_0x28:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801B4F14
 * Size:	000038
 */
void Game::GameSystem::startFadeblack(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x58(r3)
      cmplwi    r3, 0
      beq-      .loc_0x28
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC8(r12)
      mtctr     r12
      bctrl

    .loc_0x28:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801B4F4C
 * Size:	000038
 */
void Game::GameSystem::startFadewhite(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x58(r3)
      cmplwi    r3, 0
      beq-      .loc_0x28
      lwz       r12, 0x0(r3)
      lwz       r12, 0xCC(r12)
      mtctr     r12
      bctrl

    .loc_0x28:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801B4F84
 * Size:	000008
 */
void Game::GameSystem::setMoviePause((bool, char*))
{
    /*
    .loc_0x0:
      stb       r4, 0x4D(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801B4F8C
 * Size:	000008
 */
void Game::GameSystem::setFrozen((bool, char*))
{
    /*
    .loc_0x0:
      stb       r4, 0x4A(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801B4F94
 * Size:	00002C
 */
void Game::GameSystem::setPause((bool, char*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      mr        r0, r5
      mr        r5, r6
      mr        r6, r0
      bl        0x44
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801B4FC0
 * Size:	000008
 */
void Game::GameSystem::paused_soft(void)
{
    /*
    .loc_0x0:
      lbz       r3, 0x4C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801B4FC8
 * Size:	000028
 */
void Game::GameSystem::paused(void)
{
    /*
    .loc_0x0:
      lbz       r0, 0x4B(r3)
      cmplwi    r0, 0
      bne-      .loc_0x20
      lbz       r0, 0x4C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x20
      li        r3, 0x1
      blr

    .loc_0x20:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	801B4FF0
 * Size:	000050
 */
void Game::GameSystem::startPause((bool, int, char*))
{
    /*
    .loc_0x0:
      rlwinm.   r0,r4,0,24,31
      beq-      .loc_0x3C
      lbz       r0, 0x4B(r3)
      cmplwi    r0, 0
      bne-      .loc_0x28
      lbz       r0, 0x4C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x28
      li        r0, 0x1
      b         .loc_0x2C

    .loc_0x28:
      li        r0, 0

    .loc_0x2C:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x3C
      li        r3, 0x1
      blr

    .loc_0x3C:
      stb       r5, 0x4B(r3)
      lbz       r0, 0x4C(r3)
      stb       r4, 0x4C(r3)
      mr        r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	801B5040
 * Size:	00002C
 */
void Game::GameSystem::setDrawBuffer((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x58(r3)
      cmplwi    r3, 0
      beq-      .loc_0x1C
      bl        -0x63BFC

    .loc_0x1C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801B506C
 * Size:	00000C
 */
void Game::GameSystem::getLightMgr(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x58(r3)
      lwz       r3, 0x128(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801B5078
 * Size:	000274
 */
void Game::GameSystem::doAnimation(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r4, r4, 0x1B5C
      stw       r31, 0x1C(r1)
      mr        r31, r3
      cmplwi    r0, 0
      stw       r30, 0x18(r1)
      stw       r0, 0x14(r1)
      stw       r4, 0x8(r1)
      stw       r0, 0xC(r1)
      stw       r31, 0x10(r1)
      bne-      .loc_0x54
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x23C

    .loc_0x54:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0xC0

    .loc_0x6C:
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
      bne-      .loc_0x23C
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0xC0:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x6C
      b         .loc_0x23C

    .loc_0xE0:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x4B(r31)
      mr        r30, r3
      cmplwi    r0, 0
      bne-      .loc_0x118
      lbz       r0, 0x4C(r31)
      cmplwi    r0, 0
      beq-      .loc_0x118
      li        r0, 0x1
      b         .loc_0x11C

    .loc_0x118:
      li        r0, 0

    .loc_0x11C:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x144
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x180
      b         .loc_0x16C

    .loc_0x144:
      lbz       r0, 0x4A(r31)
      cmplwi    r0, 0
      beq-      .loc_0x16C
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x180

    .loc_0x16C:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x180:
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x1AC
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x23C

    .loc_0x1AC:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x220

    .loc_0x1CC:
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
      bne-      .loc_0x23C
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x220:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x1CC

    .loc_0x23C:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0xE0
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
 * Address:	801B52EC
 * Size:	0001E4
 */
void Game::GameSystem::doEntry(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r4, r4, 0x1B5C
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
      lwz       r12, 0xC(r12)
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
 * Address:	801B54D0
 * Size:	0001F4
 */
void Game::GameSystem::doSetView((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x804B
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r5, r5, 0x1B5C
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
      lwz       r12, 0x10(r12)
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
 * Address:	801B56C4
 * Size:	000404
 */
void Game::GameSystem::doViewCalc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      lbz       r0, -0x7BF0(r13)
      cmplwi    r0, 0x1
      bgt-      .loc_0x1EC
      li        r0, 0
      lis       r4, 0x804B
      addi      r4, r4, 0x1B5C
      stw       r0, 0x24(r1)
      cmplwi    r0, 0
      stw       r4, 0x18(r1)
      stw       r0, 0x1C(r1)
      stw       r3, 0x20(r1)
      bne-      .loc_0x5C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)
      b         .loc_0x1C8

    .loc_0x5C:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)
      b         .loc_0xC8

    .loc_0x74:
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1C8
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)

    .loc_0xC8:
      lwz       r12, 0x18(r1)
      addi      r3, r1, 0x18
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x74
      b         .loc_0x1C8

    .loc_0xE8:
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x24(r1)
      cmplwi    r0, 0
      bne-      .loc_0x138
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)
      b         .loc_0x1C8

    .loc_0x138:
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)
      b         .loc_0x1AC

    .loc_0x158:
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1C8
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)

    .loc_0x1AC:
      lwz       r12, 0x18(r1)
      addi      r3, r1, 0x18
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x158

    .loc_0x1C8:
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x1C(r1)
      cmplw     r4, r3
      bne+      .loc_0xE8
      b         .loc_0x3EC

    .loc_0x1EC:
      li        r0, 0
      lbz       r5, -0x7980(r13)
      lis       r4, 0x804B
      stw       r0, 0x14(r1)
      addi      r4, r4, 0x1B5C
      cntlzw    r5, r5
      cmplwi    r0, 0
      stw       r4, 0x8(r1)
      rlwinm    r30,r5,27,5,31
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x234
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x2BC

    .loc_0x234:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x2A0

    .loc_0x24C:
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
      bne-      .loc_0x2BC
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x2A0:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x24C

    .loc_0x2BC:
      rlwinm    r31,r30,0,24,31
      b         .loc_0x3CC

    .loc_0x2C4:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      cmplwi    r31, 0
      mr        r30, r3
      bne-      .loc_0x2FC
      lwz       r12, 0x0(r3)
      lwz       r12, 0x34(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x1
      beq-      .loc_0x310

    .loc_0x2FC:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x310:
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x33C
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x3CC

    .loc_0x33C:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x3B0

    .loc_0x35C:
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
      bne-      .loc_0x3CC
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x3B0:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x35C

    .loc_0x3CC:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0x2C4

    .loc_0x3EC:
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
 * Address:	801B5AC8
 * Size:	000284
 */
void Game::GameSystem::doSimulation((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x34(r1)
      li        r0, 0
      addi      r4, r4, 0x1B5C
      stfd      f31, 0x28(r1)
      fmr       f31, f1
      cmplwi    r0, 0
      stw       r31, 0x24(r1)
      mr        r31, r3
      stw       r30, 0x20(r1)
      stw       r4, 0x8(r1)
      stw       r0, 0x14(r1)
      stw       r0, 0xC(r1)
      stw       r31, 0x10(r1)
      bne-      .loc_0x5C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x248

    .loc_0x5C:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0xC8

    .loc_0x74:
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
      bne-      .loc_0x248
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0xC8:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x74
      b         .loc_0x248

    .loc_0xE8:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x4B(r31)
      mr        r30, r3
      cmplwi    r0, 0
      bne-      .loc_0x120
      lbz       r0, 0x4C(r31)
      cmplwi    r0, 0
      beq-      .loc_0x120
      li        r0, 0x1
      b         .loc_0x124

    .loc_0x120:
      li        r0, 0

    .loc_0x124:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x14C
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x18C
      b         .loc_0x174

    .loc_0x14C:
      lbz       r0, 0x4A(r31)
      cmplwi    r0, 0
      beq-      .loc_0x174
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x18C

    .loc_0x174:
      mr        r3, r30
      fmr       f1, f31
      lwz       r12, 0x0(r30)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl

    .loc_0x18C:
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x1B8
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x248

    .loc_0x1B8:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x22C

    .loc_0x1D8:
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
      bne-      .loc_0x248
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x22C:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x1D8

    .loc_0x248:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0xE8
      lwz       r0, 0x34(r1)
      lfd       f31, 0x28(r1)
      lwz       r31, 0x24(r1)
      lwz       r30, 0x20(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	801B5D4C
 * Size:	0001F4
 */
void Game::GameSystem::doSimpleDraw((Viewport*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x804B
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r5, r5, 0x1B5C
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
      lwz       r12, 0x20(r12)
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
 * Address:	801B5F40
 * Size:	000004
 */
void Game::GameSystem::doDirectDraw((Graphics&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801B5F44
 * Size:	000004
 */
void Game::GameSystem::directDraw((Graphics&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801B5F48
 * Size:	00006C
 */
void Game::GameSystem::addObjectMgr((GenericObjectMgr*))
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
      li        r3, 0x1C
      bl        -0x1920C8
      mr.       r31, r3
      beq-      .loc_0x40
      bl        0x25B418
      lis       r3, 0x804B
      addi      r0, r3, 0x1BA4
      stw       r0, 0x0(r31)

    .loc_0x40:
      stw       r30, 0x18(r31)
      mr        r4, r31
      addi      r3, r29, 0x20
      bl        0x25B474
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
 * Address:	801B5FB4
 * Size:	000020
 */
void Game::GameSystem::detachObjectMgr((GenericObjectMgr*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        0x24C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void Game::GameSystem::detachAllMgr(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B5FD4
 * Size:	000024
 */
void addObjectMgr_reuse__Q24Game10GameSystemFP31TObjectNode<GenericObjectMgr>(
    void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r3, r3, 0x20
      stw       r0, 0x14(r1)
      bl        0x25B424
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801B5FF8
 * Size:	000058
 */
void Game::GameSystem::detachObjectMgr_reuse((GenericObjectMgr*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      lwz       r31, 0x30(r3)
      b         .loc_0x38

    .loc_0x18:
      lwz       r0, 0x18(r31)
      cmplw     r0, r4
      bne-      .loc_0x34
      mr        r3, r31
      bl        0x25B5B0
      mr        r3, r31
      b         .loc_0x44

    .loc_0x34:
      lwz       r31, 0x4(r31)

    .loc_0x38:
      cmplwi    r31, 0
      bne+      .loc_0x18
      li        r3, 0

    .loc_0x44:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void Game::OptimiseController::__ct(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B6050
 * Size:	000068
 */
void Game::OptimiseController::__dt(void)
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
      beq-      .loc_0x4C
      lis       r4, 0x804B
      li        r0, 0
      addi      r5, r4, 0x5B5C
      li        r4, 0
      stw       r5, 0x0(r30)
      stw       r0, -0x6C14(r13)
      bl        -0x199054
      extsh.    r0, r31
      ble-      .loc_0x4C
      mr        r3, r30
      bl        -0x191FE4

    .loc_0x4C:
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
 * Address:	801B60B8
 * Size:	00010C
 */
void Game::OptimiseController::globalInstance(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r3, 0x8048
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      subi      r30, r3, 0x448
      lwz       r0, -0x6C14(r13)
      cmplwi    r0, 0
      bne-      .loc_0xF4
      li        r3, 0x60
      bl        -0x192240
      mr.       r4, r3
      beq-      .loc_0xF0
      addi      r0, r4, 0x5C
      mr        r31, r4
      stw       r0, 0x18(r4)
      bl        -0x199130
      li        r0, 0
      lis       r3, 0x804B
      stw       r0, 0x1C(r31)
      addi      r4, r30, 0x3C
      cmplwi    r31, 0
      addi      r0, r3, 0x5B5C
      stw       r4, 0x20(r31)
      mr        r4, r31
      stw       r0, 0x0(r31)
      beq-      .loc_0x74
      addi      r4, r31, 0x18

    .loc_0x74:
      lis       r5, 0x6330
      addi      r3, r31, 0x24
      addi      r6, r30, 0x48
      addi      r5, r5, 0x3030
      bl        0x25D51C
      lis       r4, 0x804B
      li        r3, 0x1
      addi      r4, r4, 0x80
      li        r0, 0
      stw       r4, 0x24(r31)
      cmplwi    r31, 0
      mr        r4, r31
      stb       r3, 0x3C(r31)
      stb       r0, 0x3E(r31)
      stb       r3, 0x3F(r31)
      beq-      .loc_0xB8
      addi      r4, r31, 0x18

    .loc_0xB8:
      lis       r5, 0x6330
      addi      r3, r31, 0x40
      addi      r6, r30, 0x54
      addi      r5, r5, 0x3031
      bl        0x25D4D8
      lis       r4, 0x804B
      li        r3, 0
      addi      r4, r4, 0x80
      li        r0, 0x1
      stw       r4, 0x40(r31)
      mr        r4, r31
      stb       r3, 0x58(r31)
      stb       r3, 0x5A(r31)
      stb       r0, 0x5B(r31)

    .loc_0xF0:
      stw       r4, -0x6C14(r13)

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
 * Address:	801B61C4
 * Size:	000048
 */
void Game::OptimiseController::deleteInstance(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, -0x6C14(r13)
      cmplwi    r3, 0
      bne-      .loc_0x30
      beq-      .loc_0x30
      lwz       r12, 0x0(r3)
      li        r4, 0x1
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x30:
      li        r0, 0
      stw       r0, -0x6C14(r13)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801B620C
 * Size:	000044
 */
void NodeObjectMgr<GenericObjectMgr>::delNode(GenericObjectMgr*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x30(r3)
      b         .loc_0x2C

    .loc_0x14:
      lwz       r0, 0x18(r3)
      cmplw     r0, r4
      bne-      .loc_0x28
      bl        0x25B3A4
      b         .loc_0x34

    .loc_0x28:
      lwz       r3, 0x4(r3)

    .loc_0x2C:
      cmplwi    r3, 0
      bne+      .loc_0x14

    .loc_0x34:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801B6250
 * Size:	000028
 */
void __sinit_gameSystem_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804B
      stw       r0, -0x6C20(r13)
      stfsu     f0, 0x5B50(r3)
      stfs      f0, -0x6C1C(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801B6278
 * Size:	000008
 */
void @28 @Game::GameSystem::doSimpleDraw((Viewport*))
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x530
    */
}

/*
 * --INFO--
 * Address:	801B6280
 * Size:	000008
 */
void @28 @Game::GameSystem::doDirectDraw((Graphics&))
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x344
    */
}

/*
 * --INFO--
 * Address:	801B6288
 * Size:	000008
 */
void @28 @Game::GameSystem::doSimulation((float))
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x7C4
    */
}

/*
 * --INFO--
 * Address:	801B6290
 * Size:	000008
 */
void @28 @Game::GameSystem::doViewCalc(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0xBD0
    */
}

/*
 * --INFO--
 * Address:	801B6298
 * Size:	000008
 */
void @28 @Game::GameSystem::doSetView((int))
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0xDCC
    */
}

/*
 * --INFO--
 * Address:	801B62A0
 * Size:	000008
 */
void @28 @Game::GameSystem::doEntry(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0xFB8
    */
}

/*
 * --INFO--
 * Address:	801B62A8
 * Size:	000008
 */
void @28 @Game::GameSystem::doAnimation(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x1234
    */
}
