

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
 * Address:	8023D41C
 * Size:	00000C
 */
void Game::PelletBirthBuffer::clear(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      stw       r0, -0x69A8(r13)
      blr
    */
}

/*
 * --INFO--
 * Address:	8023D428
 * Size:	0000F0
 */
void Game::PelletBirthBuffer::entry((Game::PelletInitArg&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lbz       r0, -0x7BE0(r13)
      cmplwi    r0, 0
      beq-      .loc_0xE0
      lbz       r0, 0x16(r3)
      cmplwi    r0, 0x3
      beq-      .loc_0x2C
      cmplwi    r0, 0x4
      bne-      .loc_0xE0

    .loc_0x2C:
      lwz       r5, -0x69A8(r13)
      cmpwi     r5, 0x80
      bge-      .loc_0xC4
      addi      r0, r5, 0x1
      lis       r4, 0x8051
      stw       r0, -0x69A8(r13)
      mulli     r5, r5, 0x28
      addi      r4, r4, 0x27B0
      lbz       r0, 0x4(r3)
      add       r4, r4, r5
      stb       r0, 0x4(r4)
      lwz       r0, 0x8(r3)
      stw       r0, 0x8(r4)
      lwz       r0, 0xC(r3)
      stw       r0, 0xC(r4)
      lwz       r0, 0x10(r3)
      stw       r0, 0x10(r4)
      lhz       r0, 0x14(r3)
      sth       r0, 0x14(r4)
      lbz       r0, 0x16(r3)
      stb       r0, 0x16(r4)
      lbz       r0, 0x17(r3)
      stb       r0, 0x17(r4)
      lwz       r0, 0x18(r3)
      stw       r0, 0x18(r4)
      lbz       r0, 0x1C(r3)
      stb       r0, 0x1C(r4)
      lbz       r0, 0x1D(r3)
      stb       r0, 0x1D(r4)
      lbz       r0, 0x1E(r3)
      stb       r0, 0x1E(r4)
      lbz       r0, 0x1F(r3)
      stb       r0, 0x1F(r4)
      lwz       r0, 0x20(r3)
      stw       r0, 0x20(r4)
      lwz       r0, 0x24(r3)
      stw       r0, 0x24(r4)
      b         .loc_0xE0

    .loc_0xC4:
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x3F28
      li        r4, 0x1F
      addi      r5, r5, 0x3F40
      crclr     6, 0x6
      bl        -0x212EC4

    .loc_0xE0:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8023D518
 * Size:	0000A0
 */
void Game::PelletBirthBuffer::birthAll(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      lbz       r0, -0x7BE0(r13)
      cmplwi    r0, 0
      beq-      .loc_0x84
      lis       r3, 0x8051
      li        r30, 0
      addi      r31, r3, 0x27B0
      b         .loc_0x70

    .loc_0x34:
      lwz       r3, -0x6CE0(r13)
      mr        r4, r31
      bl        -0xD0094
      mr.       r29, r3
      beq-      .loc_0x68
      li        r4, 0
      bl        -0x102474
      lwz       r3, 0x454(r29)
      mr        r4, r29
      lwz       r12, 0x0(r3)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl

    .loc_0x68:
      addi      r31, r31, 0x28
      addi      r30, r30, 0x1

    .loc_0x70:
      lwz       r0, -0x69A8(r13)
      cmpw      r30, r0
      blt+      .loc_0x34
      li        r0, 0
      stw       r0, -0x69A8(r13)

    .loc_0x84:
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
 * Address:	8023D5B8
 * Size:	00003C
 */
void __sinit_pelletBirthBuffer_cpp(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r3, 0x8051
      lis       r4, 0x8024
      stw       r0, 0x14(r1)
      addi      r3, r3, 0x27B0
      li        r5, 0
      subi      r4, r4, 0x2A0C
      li        r6, 0x28
      li        r7, 0x80
      bl        -0x17BDA4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8023D5F4
 * Size:	000058
 */
void Game::PelletInitArg::__ct(void)
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r4, 0x804B
      subi      r0, r5, 0x5D0C
      li        r6, 0
      stw       r0, 0x0(r3)
      subi      r0, r4, 0x5D48
      li        r5, 0xFF
      li        r4, 0x1
      stw       r0, 0x0(r3)
      li        r0, -0x1
      stb       r6, 0x1C(r3)
      sth       r6, 0x14(r3)
      stb       r5, 0x16(r3)
      stw       r6, 0x18(r3)
      stb       r6, 0x17(r3)
      stb       r4, 0x4(r3)
      stb       r6, 0x1D(r3)
      stw       r0, 0x24(r3)
      stw       r0, 0x20(r3)
      stb       r6, 0x1E(r3)
      stb       r6, 0x1F(r3)
      blr
    */
}
