

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
 * Address:	80436ED0
 * Size:	000070
 */
void Game::MoviePlayer::setPauseAndDraw((Game::MovieConfig*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      lhz       r0, 0xBE(r4)
      lwz       r3, -0x6D0C(r13)
      rlwinm    r4,r0,0,31,31
      bl        -0x2D7F70
      lhz       r0, 0xBE(r31)
      lwz       r3, -0x6D20(r13)
      rlwinm    r4,r0,29,31,31
      bl        -0x2DBB48
      lhz       r0, 0xBE(r31)
      lwz       r3, -0x6CE0(r13)
      rlwinm    r4,r0,30,31,31
      bl        -0x2CD53C
      lwz       r3, -0x6E20(r13)
      cmplwi    r3, 0
      beq-      .loc_0x5C
      lhz       r0, 0xBE(r31)
      rlwinm    r4,r0,31,31,31
      bl        -0x32924C

    .loc_0x5C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80436F40
 * Size:	000498
 */
void Game::MoviePlayer::clearPauseAndDraw(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      li        r4, 0x1
      stw       r0, 0x54(r1)
      lwz       r3, -0x6D0C(r13)
      bl        -0x2D7FD4
      lwz       r3, -0x6D20(r13)
      li        r4, 0x1
      bl        -0x2DBBA8
      lwz       r3, -0x6CE0(r13)
      li        r4, 0x1
      bl        -0x2CD598
      lwz       r3, -0x6E20(r13)
      cmplwi    r3, 0
      beq-      .loc_0x44
      li        r4, 0x1
      bl        -0x3292A4

    .loc_0x44:
      li        r0, 0
      lwz       r3, -0x6D0C(r13)
      lis       r4, 0x804B
      stw       r0, 0x44(r1)
      subi      r4, r4, 0x4364
      cmplwi    r0, 0
      stw       r4, 0x38(r1)
      stw       r0, 0x3C(r1)
      stw       r3, 0x40(r1)
      bne-      .loc_0x84
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x1E8

    .loc_0x84:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0xF0

    .loc_0x9C:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1E8
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)

    .loc_0xF0:
      lwz       r12, 0x38(r1)
      addi      r3, r1, 0x38
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x9C
      b         .loc_0x1E8

    .loc_0x110:
      lwz       r3, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      li        r4, 0
      bl        -0x2FB57C
      lwz       r0, 0x44(r1)
      cmplwi    r0, 0
      bne-      .loc_0x158
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x1E8

    .loc_0x158:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)
      b         .loc_0x1CC

    .loc_0x178:
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x44(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1E8
      lwz       r3, 0x40(r1)
      lwz       r4, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r1)

    .loc_0x1CC:
      lwz       r12, 0x38(r1)
      addi      r3, r1, 0x38
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x178

    .loc_0x1E8:
      lwz       r3, 0x40(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x3C(r1)
      cmplw     r4, r3
      bne+      .loc_0x110
      lwz       r3, -0x6E20(r13)
      cmplwi    r3, 0
      beq-      .loc_0x26C
      beq-      .loc_0x21C
      addi      r3, r3, 0x4

    .loc_0x21C:
      li        r0, 0
      stw       r3, 0x30(r1)
      addi      r3, r1, 0x28
      stw       r0, 0x34(r1)
      stw       r0, 0x28(r1)
      stw       r0, 0x2C(r1)
      bl        -0x328CE4
      b         .loc_0x260

    .loc_0x23C:
      lwz       r12, 0x0(r3)
      lwz       r4, 0x2C(r1)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      li        r4, 0
      bl        -0x2FB6A8
      addi      r3, r1, 0x28
      bl        -0x3292AC

    .loc_0x260:
      lwz       r3, 0x28(r1)
      cmplwi    r3, 0
      bne+      .loc_0x23C

    .loc_0x26C:
      lwz       r3, -0x6CD0(r13)
      cmplwi    r3, 0
      beq-      .loc_0x440
      beq-      .loc_0x280
      addi      r3, r3, 0x30

    .loc_0x280:
      li        r0, 0
      lis       r4, 0x804B
      addi      r4, r4, 0x548
      stw       r0, 0x24(r1)
      cmplwi    r0, 0
      stw       r4, 0x18(r1)
      stw       r0, 0x1C(r1)
      stw       r3, 0x20(r1)
      bne-      .loc_0x2BC
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)
      b         .loc_0x420

    .loc_0x2BC:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)
      b         .loc_0x328

    .loc_0x2D4:
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
      bne-      .loc_0x420
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)

    .loc_0x328:
      lwz       r12, 0x18(r1)
      addi      r3, r1, 0x18
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x2D4
      b         .loc_0x420

    .loc_0x348:
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      li        r4, 0
      bl        -0x2FB7B4
      lwz       r0, 0x24(r1)
      cmplwi    r0, 0
      bne-      .loc_0x390
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)
      b         .loc_0x420

    .loc_0x390:
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)
      b         .loc_0x404

    .loc_0x3B0:
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
      bne-      .loc_0x420
      lwz       r3, 0x20(r1)
      lwz       r4, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x1C(r1)

    .loc_0x404:
      lwz       r12, 0x18(r1)
      addi      r3, r1, 0x18
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x3B0

    .loc_0x420:
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x1C(r1)
      cmplw     r4, r3
      bne+      .loc_0x348

    .loc_0x440:
      lwz       r0, -0x6CE0(r13)
      cmplwi    r0, 0
      beq-      .loc_0x488
      addi      r3, r1, 0x8
      bl        -0x2CAA28
      addi      r3, r1, 0x8
      bl        -0x2CAA18
      b         .loc_0x478

    .loc_0x460:
      addi      r3, r1, 0x8
      bl        -0x2CA9D8
      li        r4, 0
      bl        -0x2FB8C0
      addi      r3, r1, 0x8
      bl        -0x2CA980

    .loc_0x478:
      addi      r3, r1, 0x8
      bl        -0x2CA8C8
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x460

    .loc_0x488:
      lwz       r0, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	804373D8
 * Size:	000028
 */
void __sinit_moviePlayerPauseAndDraw_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804F
      stw       r0, -0x6440(r13)
      stfsu     f0, -0x37F0(r3)
      stfs      f0, -0x643C(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
