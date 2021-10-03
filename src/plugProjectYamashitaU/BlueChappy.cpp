

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
 * Address:	8012BBF4
 * Size:	000144
 */
void Game::BlueChappy::Obj::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      extsh.    r0, r4
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      beq-      .loc_0x40
      addi      r0, r31, 0x2E4
      lis       r3, 0x804B
      stw       r0, 0x17C(r31)
      subi      r3, r3, 0x5988
      li        r0, 0
      stw       r3, 0x2E4(r31)
      stw       r0, 0x2E8(r31)
      stw       r0, 0x2EC(r31)

    .loc_0x40:
      mr        r3, r31
      li        r4, 0
      bl        -0x12EC
      lis       r3, 0x804B
      addi      r0, r31, 0x2E4
      subi      r5, r3, 0x1C68
      li        r3, 0x2C
      stw       r5, 0x0(r31)
      addi      r4, r5, 0x1B0
      addi      r5, r5, 0x334
      stw       r4, 0x178(r31)
      lwz       r4, 0x17C(r31)
      stw       r5, 0x0(r4)
      lwz       r4, 0x17C(r31)
      sub       r0, r0, r4
      stw       r0, 0xC(r4)
      bl        -0x107DD0
      mr.       r30, r3
      beq-      .loc_0xCC
      bl        -0x430C
      lis       r3, 0x804B
      lis       r4, 0x804B
      subi      r0, r3, 0x3E18
      lis       r3, 0x804F
      stw       r0, 0x0(r30)
      subi      r4, r4, 0x4678
      subi      r3, r3, 0x4200
      li        r0, 0
      stw       r4, 0x10(r30)
      stw       r3, 0x10(r30)
      stb       r0, 0x28(r30)
      stw       r0, 0x1C(r30)
      stw       r0, 0x14(r30)
      stb       r0, 0x28(r30)
      stw       r0, 0x20(r30)

    .loc_0xCC:
      stw       r30, 0x184(r31)
      li        r3, 0x1C
      bl        -0x107E24
      mr.       r4, r3
      beq-      .loc_0x100
      lis       r5, 0x804B
      lis       r3, 0x804B
      subi      r0, r5, 0x680
      li        r5, -0x1
      stw       r0, 0x0(r4)
      subi      r0, r3, 0x3E3C
      stw       r5, 0x18(r4)
      stw       r0, 0x0(r4)

    .loc_0x100:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      lwz       r12, 0x2F8(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x31C(r12)
      mtctr     r12
      bctrl
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
 * Address:	8012BD38
 * Size:	0002B0
 */
void Game::BlueChappy::Obj::changeMaterial(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r27, r3
      lwz       r3, 0x180(r3)
      lwz       r4, 0x174(r27)
      lwz       r12, 0x0(r3)
      lwz       r28, 0x8(r4)
      lwz       r12, 0xE0(r12)
      lwz       r29, 0x4(r28)
      mtctr     r12
      bctrl
      mr        r30, r3
      lwz       r3, 0x180(r27)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xE4(r12)
      mtctr     r12
      bctrl
      mr        r31, r3
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x174(r27)
      lbz       r0, 0x0(r30)
      lwz       r3, 0x8(r3)
      lwz       r3, 0x4(r3)
      lwz       r4, 0x6C(r3)
      lwz       r3, 0x4(r4)
      stb       r0, 0x0(r3)
      lbz       r0, 0x1(r30)
      stb       r0, 0x1(r3)
      lhz       r0, 0x2(r30)
      sth       r0, 0x2(r3)
      lhz       r0, 0x4(r30)
      sth       r0, 0x4(r3)
      lbz       r0, 0x6(r30)
      stb       r0, 0x6(r3)
      lbz       r0, 0x7(r30)
      stb       r0, 0x7(r3)
      lbz       r0, 0x8(r30)
      stb       r0, 0x8(r3)
      lbz       r0, 0x9(r30)
      stb       r0, 0x9(r3)
      lhz       r0, 0xA(r30)
      sth       r0, 0xA(r3)
      lwz       r0, 0xC(r30)
      stw       r0, 0xC(r3)
      lbz       r0, 0x10(r30)
      stb       r0, 0x10(r3)
      lbz       r0, 0x11(r30)
      stb       r0, 0x11(r3)
      lbz       r0, 0x12(r30)
      stb       r0, 0x12(r3)
      lbz       r0, 0x13(r30)
      stb       r0, 0x13(r3)
      lbz       r0, 0x14(r30)
      stb       r0, 0x14(r3)
      lbz       r0, 0x15(r30)
      stb       r0, 0x15(r3)
      lbz       r0, 0x16(r30)
      stb       r0, 0x16(r3)
      lbz       r0, 0x17(r30)
      stb       r0, 0x17(r3)
      lbz       r0, 0x18(r30)
      stb       r0, 0x18(r3)
      lbz       r0, 0x19(r30)
      stb       r0, 0x19(r3)
      lha       r0, 0x1A(r30)
      sth       r0, 0x1A(r3)
      lwz       r0, 0x1C(r30)
      stw       r0, 0x1C(r3)
      lwz       r3, 0x4(r4)
      lwz       r0, 0x1C(r3)
      add       r0, r30, r0
      sub       r0, r0, r3
      stw       r0, 0x1C(r3)
      lwz       r3, 0x4(r4)
      lwz       r0, 0xC(r3)
      add       r0, r30, r0
      sub       r0, r0, r3
      stw       r0, 0xC(r3)
      lwz       r3, 0x174(r27)
      lbz       r0, 0x0(r31)
      lwz       r3, 0x8(r3)
      lwz       r3, 0x4(r3)
      lwz       r4, 0x6C(r3)
      lwz       r3, 0x4(r4)
      stb       r0, 0x20(r3)
      lbz       r0, 0x1(r31)
      stb       r0, 0x21(r3)
      lhz       r0, 0x2(r31)
      sth       r0, 0x22(r3)
      lhz       r0, 0x4(r31)
      sth       r0, 0x24(r3)
      lbz       r0, 0x6(r31)
      stb       r0, 0x26(r3)
      lbz       r0, 0x7(r31)
      stb       r0, 0x27(r3)
      lbz       r0, 0x8(r31)
      stb       r0, 0x28(r3)
      lbz       r0, 0x9(r31)
      stb       r0, 0x29(r3)
      lhz       r0, 0xA(r31)
      sth       r0, 0x2A(r3)
      lwz       r0, 0xC(r31)
      stw       r0, 0x2C(r3)
      lbz       r0, 0x10(r31)
      stb       r0, 0x30(r3)
      lbz       r0, 0x11(r31)
      stb       r0, 0x31(r3)
      lbz       r0, 0x12(r31)
      stb       r0, 0x32(r3)
      lbz       r0, 0x13(r31)
      stb       r0, 0x33(r3)
      lbz       r0, 0x14(r31)
      stb       r0, 0x34(r3)
      lbz       r0, 0x15(r31)
      stb       r0, 0x35(r3)
      lbz       r0, 0x16(r31)
      stb       r0, 0x36(r3)
      lbz       r0, 0x17(r31)
      lis       r5, 0x8051
      subi      r27, r5, 0xDD0
      li        r30, 0
      stb       r0, 0x37(r3)
      lbz       r0, 0x18(r31)
      stb       r0, 0x38(r3)
      lbz       r0, 0x19(r31)
      stb       r0, 0x39(r3)
      lha       r0, 0x1A(r31)
      sth       r0, 0x3A(r3)
      lwz       r0, 0x1C(r31)
      stw       r0, 0x3C(r3)
      lwz       r5, 0x4(r4)
      lwz       r0, 0x3C(r5)
      addi      r3, r5, 0x20
      add       r0, r31, r0
      sub       r0, r0, r3
      stw       r0, 0x3C(r5)
      lwz       r4, 0x4(r4)
      lwz       r0, 0x2C(r4)
      addi      r3, r4, 0x20
      add       r0, r31, r0
      sub       r0, r0, r3
      stw       r0, 0x2C(r4)
      b         .loc_0x28C

    .loc_0x254:
      lwz       r4, 0xC0(r28)
      rlwinm    r3,r30,6,10,25
      rlwinm    r0,r30,2,14,29
      add       r4, r4, r3
      stw       r4, 0x3C(r27)
      lwz       r3, 0x60(r29)
      lwz       r4, 0x2C(r4)
      lwzx      r3, r3, r0
      lwz       r4, 0x34(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1

    .loc_0x28C:
      lhz       r0, 0x5C(r29)
      rlwinm    r3,r30,0,16,31
      cmplw     r3, r0
      blt+      .loc_0x254
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8012BFE8
 * Size:	000008
 */
void Game::BlueChappy::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x2A
      blr
    */
}
