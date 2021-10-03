

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char*, ...)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8019FF38
 * Size:	0000D0
 */
void PikiAI::ActFree::__ct((Game::Piki*))
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
      mr        r30, r5
      beq-      .loc_0x38
      addi      r0, r31, 0x20
      lis       r3, 0x804B
      stw       r0, 0xC(r31)
      subi      r0, r3, 0x5994
      stw       r0, 0x20(r31)

    .loc_0x38:
      mr        r3, r31
      mr        r4, r30
      bl        -0x9560
      lis       r3, 0x804B
      addi      r0, r31, 0x20
      addi      r4, r3, 0x4E34
      li        r3, 0x20
      stw       r4, 0x0(r31)
      addi      r5, r4, 0x40
      lwz       r4, 0xC(r31)
      stw       r5, 0x0(r4)
      lwz       r4, 0xC(r31)
      sub       r0, r0, r4
      stw       r0, 0x4(r4)
      bl        -0x17C104
      mr.       r0, r3
      beq-      .loc_0x88
      mr        r4, r30
      bl        -0x3618
      mr        r0, r3

    .loc_0x88:
      stw       r0, 0x14(r31)
      li        r3, 0x24
      bl        -0x17C124
      mr.       r0, r3
      beq-      .loc_0xA8
      mr        r4, r30
      bl        0x9131C
      mr        r0, r3

    .loc_0xA8:
      stw       r0, 0x18(r31)
      subi      r0, r2, 0x5308
      mr        r3, r31
      stw       r0, 0x8(r31)
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
 * Address:	801A0008
 * Size:	000190
 */
void PikiAI::ActFree::init((PikiAI::ActionArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r5, 0x8048
      stw       r0, 0x34(r1)
      li        r0, 0
      stw       r31, 0x2C(r1)
      mr        r31, r3
      stw       r30, 0x28(r1)
      subi      r30, r5, 0xDA0
      stw       r29, 0x24(r1)
      mr        r29, r4
      lwz       r3, 0x4(r3)
      stw       r0, 0x2C4(r3)
      lwz       r3, 0x4(r31)
      lwz       r3, 0x250(r3)
      bl        0x2C2524
      li        r0, 0
      cmplwi    r29, 0
      sth       r0, 0x10(r31)
      mr        r5, r29
      beq-      .loc_0xAC
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      addi      r3, r30, 0
      bl        -0xD59B8
      cntlzw    r0, r3
      rlwinm.   r0,r0,27,24,31
      bne-      .loc_0x94
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x77
      crclr     6, 0x6
      bl        -0x175A58

    .loc_0x94:
      lbz       r0, 0x4(r29)
      mr        r5, r29
      cmplwi    r0, 0
      beq-      .loc_0xAC
      li        r0, 0x1
      sth       r0, 0x10(r31)

    .loc_0xAC:
      lhz       r0, 0x10(r31)
      cmpwi     r0, 0x1
      beq-      .loc_0xBC
      b         .loc_0x110

    .loc_0xBC:
      lis       r4, 0x804B
      lis       r3, 0x804B
      addi      r0, r4, 0x530
      addi      r4, r1, 0x8
      stw       r0, 0x8(r1)
      addi      r0, r3, 0x4E28
      stw       r0, 0x8(r1)
      lfs       f0, 0x8(r5)
      stfs      f0, 0xC(r1)
      lfs       f0, 0xC(r5)
      stfs      f0, 0x10(r1)
      lfs       f0, 0x10(r5)
      stfs      f0, 0x14(r1)
      lfs       f0, 0x14(r5)
      stfs      f0, 0x18(r1)
      lwz       r3, 0x14(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      b         .loc_0x148

    .loc_0x110:
      lwz       r3, 0x4(r31)
      li        r4, 0x1F
      li        r5, 0x1F
      li        r6, 0
      lwz       r12, 0x0(r3)
      li        r7, 0
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x4(r31)
      lfs       f0, -0x5300(r2)
      stfs      f0, 0x1E4(r3)
      stfs      f0, 0x1E8(r3)
      stfs      f0, 0x1EC(r3)

    .loc_0x148:
      lwz       r3, 0x4(r31)
      li        r4, 0x1
      bl        -0x56120
      lwz       r3, 0x4(r31)
      li        r4, 0x1
      bl        -0x564A0
      lwz       r3, 0x4(r31)
      li        r4, 0x1
      bl        -0x57650
      li        r0, 0
      sth       r0, 0x1C(r31)
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
 * Address:	801A0198
 * Size:	0001D0
 */
void PikiAI::ActFree::exec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      stw       r30, 0x28(r1)
      lhz       r0, 0x10(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0xA0
      bge-      .loc_0x10C
      cmpwi     r0, 0x1
      bge-      .loc_0x34
      b         .loc_0x10C

    .loc_0x34:
      lwz       r3, 0x14(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0
      bne-      .loc_0x1B4
      li        r0, 0
      sth       r0, 0x10(r31)
      bl        -0xD6C50
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x14(r1)
      lfd       f3, -0x52F0(r2)
      stw       r0, 0x10(r1)
      lfs       f1, -0x52FC(r2)
      lfd       f2, 0x10(r1)
      lfs       f0, -0x52F8(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r3, 0x1C(r1)
      addi      r0, r3, 0x96
      sth       r0, 0x1C(r31)
      b         .loc_0x1B4

    .loc_0xA0:
      lwz       r3, 0x18(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      li        r5, 0
      li        r0, 0x1
      stb       r5, 0xD(r1)
      mr        r30, r3
      addi      r4, r1, 0xC
      stb       r5, 0xC(r1)
      stb       r0, 0xD(r1)
      lwz       r3, 0x4(r31)
      bl        0x135DC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xE8
      lwz       r3, 0x18(r31)
      bl        0x91310

    .loc_0xE8:
      cmpwi     r30, 0
      beq-      .loc_0xF8
      cmpwi     r30, 0x2
      bne-      .loc_0x1B4

    .loc_0xF8:
      li        r3, 0
      li        r0, 0x5A
      sth       r3, 0x10(r31)
      sth       r0, 0x1C(r31)
      b         .loc_0x1B4

    .loc_0x10C:
      lwz       r3, 0x4(r31)
      li        r0, 0
      lfs       f0, -0x5300(r2)
      addi      r4, r1, 0x8
      stfs      f0, 0x1E4(r3)
      stfs      f0, 0x1E8(r3)
      stfs      f0, 0x1EC(r3)
      stb       r0, 0x8(r1)
      stb       r0, 0x9(r1)
      lwz       r3, 0x4(r31)
      bl        0x1357C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x148
      li        r3, 0
      b         .loc_0x1B8

    .loc_0x148:
      lhz       r3, 0x1C(r31)
      cmplwi    r3, 0
      beq-      .loc_0x160
      subi      r0, r3, 0x1
      sth       r0, 0x1C(r31)
      b         .loc_0x1B4

    .loc_0x160:
      bl        -0xD6D58
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x1C(r1)
      lfd       f3, -0x52F0(r2)
      stw       r0, 0x18(r1)
      lfs       f1, -0x52FC(r2)
      lfd       f2, 0x18(r1)
      lfs       f0, -0x52F4(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x1B4
      lwz       r3, 0x18(r31)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      li        r0, 0x2
      sth       r0, 0x10(r31)

    .loc_0x1B4:
      li        r3, 0x1

    .loc_0x1B8:
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
 * Address:	801A0368
 * Size:	00004C
 */
void PikiAI::ActFree::cleanup(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x4(r3)
      bl        -0x566C0
      lwz       r3, 0x4(r31)
      li        r4, 0
      bl        -0x57870
      lwz       r3, 0x4(r31)
      lwz       r3, 0x250(r3)
      bl        0x2C21D8
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801A03B4
 * Size:	000004
 */
void PikiAI::ActFree::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801A03B8
 * Size:	0000EC
 */
void PikiAI::ActFree::collisionCallback((Game::Piki*, Game::CollEvent&))
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
      lwz       r3, 0x0(r5)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xD0
      lwz       r31, 0x0(r30)
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xD0
      lwz       r0, 0x278(r31)
      cmplwi    r0, 0
      beq-      .loc_0xD0
      mr        r3, r31
      bl        -0x5B964
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xD0
      lwz       r3, -0x6958(r13)
      li        r4, 0x2
      lhz       r5, 0x2DC(r31)
      bl        0xB34E8
      lwz       r4, 0x0(r30)
      lis       r3, 0x804B
      subi      r0, r3, 0x5D00
      lis       r3, 0x804B
      stw       r0, 0x8(r1)
      addi      r6, r3, 0x49BC
      li        r5, 0
      li        r0, 0x1
      stw       r4, 0xC(r1)
      mr        r3, r29
      addi      r4, r1, 0x8
      stw       r6, 0x8(r1)
      stb       r5, 0x10(r1)
      stb       r0, 0x11(r1)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl

    .loc_0xD0:
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
 * Address:	801A04A4
 * Size:	00000C
 */
void PikiAI::GatherActionArg::getName(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8048
      subi      r3, r3, 0xD70
      blr
    */
}

/*
 * --INFO--
 * Address:	801A04B0
 * Size:	000008
 */
void PikiAI::ActFree::getNextAIType(void)
{
    /*
    .loc_0x0:
      li        r3, 0x2
      blr
    */
}

/*
 * --INFO--
 * Address:	801A04B8
 * Size:	000014
 */
void @32 @4 @PikiAI::ActFree::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      li        r11, 0x4
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x20
      b         -0x114
    */
}
