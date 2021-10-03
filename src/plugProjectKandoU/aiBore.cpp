

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
 * Address:	802312F4
 * Size:	000098
 */
void PikiAI::ActBore::__ct((Game::Piki*))
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
      bl        -0x9A8F8
      lis       r3, 0x804C
      li        r0, 0
      addi      r4, r3, 0x1300
      li        r3, 0x24
      stw       r4, 0x0(r30)
      stb       r0, 0x18(r30)
      bl        -0x20D488
      mr.       r0, r3
      beq-      .loc_0x54
      mr        r5, r31
      li        r4, 0x1
      bl        0x560
      mr        r0, r3

    .loc_0x54:
      stw       r0, 0x1C(r30)
      li        r3, 0x24
      bl        -0x20D4AC
      mr.       r0, r3
      beq-      .loc_0x78
      mr        r5, r31
      li        r4, 0x1
      bl        0xC54
      mr        r0, r3

    .loc_0x78:
      stw       r0, 0x20(r30)
      mr        r3, r30
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
 * Address:	8023138C
 * Size:	000080
 */
void PikiAI::ActBore::init((PikiAI::ActionArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      bl        -0x167E00
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      mr        r3, r31
      lfd       f3, -0x3FE0(r2)
      stw       r0, 0x8(r1)
      lfs       f2, -0x3FF0(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, -0x3FEC(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x3FE8(r2)
      fdivs     f2, f3, f2
      fmuls     f1, f1, f2
      fctiwz    f1, f1
      stfd      f1, 0x10(r1)
      lwz       r0, 0x14(r1)
      stb       r0, 0xC(r31)
      stfs      f0, 0x14(r31)
      bl        .loc_0x80
      li        r0, 0
      stb       r0, 0x18(r31)
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0x80:
    */
}

/*
 * --INFO--
 * Address:	8023140C
 * Size:	000180
 */
void PikiAI::ActBore::startCurrAction(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      mr        r31, r3
      lis       r3, 0x8048
      stw       r30, 0x48(r1)
      stw       r29, 0x44(r1)
      addi      r29, r3, 0x3930
      lbz       r0, 0xC(r31)
      cmplwi    r0, 0x2
      blt-      .loc_0x44
      addi      r3, r29, 0x20
      addi      r5, r29, 0x2C
      li        r4, 0x27
      crclr     6, 0x6
      bl        -0x206E0C

    .loc_0x44:
      lfs       f1, 0x14(r31)
      lfs       f0, -0x3FEC(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x5C
      li        r0, 0x1
      stb       r0, 0xC(r31)

    .loc_0x5C:
      lbz       r0, 0xC(r31)
      cmpwi     r0, 0x1
      beq-      .loc_0x9C
      bge-      .loc_0x130
      cmpwi     r0, 0
      bge-      .loc_0x78
      b         .loc_0x130

    .loc_0x78:
      rlwinm    r0,r0,2,22,29
      li        r4, 0
      add       r3, r31, r0
      lwz       r3, 0x1C(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      b         .loc_0x130

    .loc_0x9C:
      lis       r3, 0x804B
      lwz       r11, 0x0(r29)
      addi      r0, r3, 0x530
      lwz       r10, 0x4(r29)
      lwz       r9, 0x8(r29)
      lis       r3, 0x804C
      lwz       r8, 0xC(r29)
      li        r12, -0x1
      lwz       r7, 0x10(r29)
      addi      r30, r3, 0x12F4
      stw       r0, 0x8(r1)
      addi      r3, r1, 0x10
      lwz       r6, 0x14(r29)
      li        r4, 0x4
      lwz       r5, 0x18(r29)
      lwz       r0, 0x1C(r29)
      stw       r30, 0x8(r1)
      stw       r12, 0xC(r1)
      stw       r11, 0x10(r1)
      stw       r10, 0x14(r1)
      stw       r9, 0x18(r1)
      stw       r8, 0x1C(r1)
      stw       r7, 0x20(r1)
      stw       r6, 0x24(r1)
      stw       r5, 0x28(r1)
      stw       r0, 0x2C(r1)
      bl        -0x39C48
      stw       r3, 0xC(r1)
      addi      r4, r1, 0x8
      lbz       r0, 0xC(r31)
      rlwinm    r0,r0,2,0,29
      add       r3, r31, r0
      lwz       r3, 0x1C(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x130:
      bl        -0x167F9C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x34(r1)
      lfd       f3, -0x3FE0(r2)
      stw       r0, 0x30(r1)
      lfs       f1, -0x3FF0(r2)
      lfd       f2, 0x30(r1)
      lfs       f0, -0x3FD8(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmadds    f0, f0, f1, f0
      stfs      f0, 0x10(r31)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      lwz       r29, 0x44(r1)
      lwz       r0, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	8023158C
 * Size:	00007C
 */
void PikiAI::ActBore::finish(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r0, 0xC(r3)
      cmplwi    r0, 0x2
      blt-      .loc_0x3C
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x3950
      li        r4, 0x46
      addi      r5, r5, 0x395C
      crclr     6, 0x6
      bl        -0x206F84

    .loc_0x3C:
      lbz       r0, 0xC(r31)
      rlwinm    r0,r0,2,0,29
      add       r3, r31, r0
      lwz       r3, 0x1C(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x18(r31)
      ori       r0, r0, 0x1
      stb       r0, 0x18(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80231608
 * Size:	000294
 */
void PikiAI::ActBore::exec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      lfs       f0, -0x3FEC(r2)
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      mr        r30, r3
      lis       r3, 0x8048
      stw       r29, 0x44(r1)
      addi      r31, r3, 0x3930
      lfs       f1, 0x14(r30)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x44
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x14(r30)

    .loc_0x44:
      lbz       r0, 0xC(r30)
      cmplwi    r0, 0x2
      blt-      .loc_0x64
      addi      r3, r31, 0x20
      addi      r5, r31, 0x2C
      li        r4, 0x51
      crclr     6, 0x6
      bl        -0x207028

    .loc_0x64:
      lbz       r0, 0xC(r30)
      rlwinm    r0,r0,2,0,29
      add       r3, r30, r0
      lwz       r3, 0x1C(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0
      beq-      .loc_0x94
      cmpwi     r3, 0x2
      bne-      .loc_0x22C

    .loc_0x94:
      lbz       r0, 0x18(r30)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0xA8
      li        r3, 0
      b         .loc_0x278

    .loc_0xA8:
      bl        -0x168110
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x34(r1)
      lfd       f3, -0x3FE0(r2)
      stw       r0, 0x30(r1)
      lfs       f1, -0x3FF0(r2)
      lfd       f2, 0x30(r1)
      lfs       f0, -0x3FEC(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r0, 0x3C(r1)
      stb       r0, 0xC(r30)
      lbz       r0, 0xC(r30)
      cmplwi    r0, 0x2
      blt-      .loc_0x108
      addi      r3, r31, 0x20
      addi      r5, r31, 0x2C
      li        r4, 0x27
      crclr     6, 0x6
      bl        -0x2070CC

    .loc_0x108:
      lfs       f1, 0x14(r30)
      lfs       f0, -0x3FEC(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x120
      li        r0, 0x1
      stb       r0, 0xC(r30)

    .loc_0x120:
      lbz       r0, 0xC(r30)
      cmpwi     r0, 0x1
      beq-      .loc_0x160
      bge-      .loc_0x1F4
      cmpwi     r0, 0
      bge-      .loc_0x13C
      b         .loc_0x1F4

    .loc_0x13C:
      rlwinm    r0,r0,2,22,29
      li        r4, 0
      add       r3, r30, r0
      lwz       r3, 0x1C(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1F4

    .loc_0x160:
      lis       r3, 0x804B
      lwz       r11, 0x0(r31)
      addi      r0, r3, 0x530
      lwz       r10, 0x4(r31)
      lwz       r9, 0x8(r31)
      lis       r3, 0x804C
      lwz       r8, 0xC(r31)
      li        r12, -0x1
      lwz       r7, 0x10(r31)
      addi      r29, r3, 0x12F4
      stw       r0, 0x8(r1)
      addi      r3, r1, 0x10
      lwz       r6, 0x14(r31)
      li        r4, 0x4
      lwz       r5, 0x18(r31)
      lwz       r0, 0x1C(r31)
      stw       r29, 0x8(r1)
      stw       r12, 0xC(r1)
      stw       r11, 0x10(r1)
      stw       r10, 0x14(r1)
      stw       r9, 0x18(r1)
      stw       r8, 0x1C(r1)
      stw       r7, 0x20(r1)
      stw       r6, 0x24(r1)
      stw       r5, 0x28(r1)
      stw       r0, 0x2C(r1)
      bl        -0x39F08
      stw       r3, 0xC(r1)
      addi      r4, r1, 0x8
      lbz       r0, 0xC(r30)
      rlwinm    r0,r0,2,0,29
      add       r3, r30, r0
      lwz       r3, 0x1C(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x1F4:
      bl        -0x16825C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x3C(r1)
      lfd       f3, -0x3FE0(r2)
      stw       r0, 0x38(r1)
      lfs       f1, -0x3FF0(r2)
      lfd       f2, 0x38(r1)
      lfs       f0, -0x3FD8(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmadds    f0, f0, f1, f0
      stfs      f0, 0x10(r30)
      b         .loc_0x274

    .loc_0x22C:
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x10(r30)
      lfs       f1, 0x54(r3)
      lfs       f0, -0x3FE8(r2)
      fsubs     f1, f2, f1
      stfs      f1, 0x10(r30)
      lfs       f1, 0x10(r30)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x274
      lbz       r0, 0xC(r30)
      rlwinm    r0,r0,2,0,29
      add       r3, r30, r0
      lwz       r3, 0x1C(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl

    .loc_0x274:
      li        r3, 0x1

    .loc_0x278:
      lwz       r0, 0x54(r1)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      lwz       r29, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	8023189C
 * Size:	000004
 */
void PikiAI::ActBore::cleanup(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802318A0
 * Size:	00009C
 */
void PikiAI::ActRest::__ct((Game::Piki*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      extsh.    r0, r4
      stw       r31, 0xC(r1)
      mr        r31, r3
      beq-      .loc_0x30
      addi      r0, r31, 0x1C
      lis       r3, 0x804B
      stw       r0, 0xC(r31)
      subi      r0, r3, 0x5994
      stw       r0, 0x1C(r31)

    .loc_0x30:
      mr        r3, r31
      mr        r4, r5
      bl        -0x9AEC0
      lis       r4, 0x804C
      lis       r3, 0x804C
      addi      r6, r4, 0x12A8
      addi      r4, r31, 0x1C
      stw       r6, 0x0(r31)
      addi      r5, r3, 0x1258
      addi      r8, r6, 0x40
      li        r0, 0
      lwz       r7, 0xC(r31)
      addi      r6, r5, 0x44
      mr        r3, r31
      stw       r8, 0x0(r7)
      stw       r5, 0x0(r31)
      lwz       r5, 0xC(r31)
      stw       r6, 0x0(r5)
      lwz       r5, 0xC(r31)
      sub       r4, r4, r5
      stw       r4, 0x4(r5)
      stb       r0, 0x18(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8023193C
 * Size:	00001C
 */
void PikiAI::ActRest::finish(void)
{
    /*
    .loc_0x0:
      lbz       r0, 0x18(r3)
      lfs       f0, -0x3FD4(r2)
      ori       r0, r0, 0x4
      stb       r0, 0x18(r3)
      lwz       r3, 0x4(r3)
      stfs      f0, 0x234(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80231958
 * Size:	000080
 */
void PikiAI::ActRest::init((PikiAI::ActionArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      li        r0, 0
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stb       r0, 0x10(r3)
      bl        .loc_0x80
      bl        -0x1683D8
      xoris     r0, r3, 0x8000
      lis       r3, 0x4330
      stw       r0, 0xC(r1)
      li        r0, 0
      lfd       f1, -0x3FE0(r2)
      stw       r3, 0x8(r1)
      lfs       f3, -0x3FF0(r2)
      lfd       f0, 0x8(r1)
      lfs       f2, -0x3FCC(r2)
      fsubs     f4, f0, f1
      lfs       f1, -0x3FD0(r2)
      lfs       f0, -0x3FC8(r2)
      fdivs     f3, f4, f3
      fmadds    f1, f2, f3, f1
      stfs      f1, 0x14(r31)
      stb       r0, 0x18(r31)
      lwz       r3, 0x4(r31)
      stfs      f0, 0x234(r3)
      lwz       r31, 0x1C(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0x80:
    */
}

/*
 * --INFO--
 * Address:	802319D8
 * Size:	0000B8
 */
void PikiAI::ActRest::sitDown(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r0, 0x10(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0x6C
      bge-      .loc_0xA4
      cmpwi     r0, 0
      bge-      .loc_0x30
      b         .loc_0xA4

    .loc_0x30:
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0x40
      lwz       r6, 0xC(r31)

    .loc_0x40:
      lwz       r3, 0x4(r31)
      li        r4, 0x38
      li        r5, 0x38
      li        r7, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      stb       r0, 0x10(r31)
      b         .loc_0xA4

    .loc_0x6C:
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0x7C
      lwz       r6, 0xC(r31)

    .loc_0x7C:
      lwz       r3, 0x4(r31)
      li        r4, 0x39
      li        r5, 0x39
      li        r7, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      li        r0, 0x3
      stb       r0, 0x10(r31)

    .loc_0xA4:
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
 * Size:	00007C
 */
void PikiAI::ActRest::standUp(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80231A90
 * Size:	000330
 */
void PikiAI::ActRest::exec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lbz       r0, 0x18(r3)
      rlwinm.   r0,r0,0,30,30
      beq-      .loc_0x28
      li        r3, 0
      b         .loc_0x31C

    .loc_0x28:
      lwz       r3, 0x4(r31)
      lfs       f0, -0x3FE8(r2)
      stfs      f0, 0x1E4(r3)
      stfs      f0, 0x1E8(r3)
      stfs      f0, 0x1EC(r3)
      lwz       r3, 0x4(r31)
      lfs       f1, 0x234(r3)
      fcmpu     cr0, f0, f1
      bne-      .loc_0x54
      lfs       f0, -0x3FC8(r2)
      stfs      f0, 0x234(r3)

    .loc_0x54:
      lwz       r3, 0x4(r31)
      lwz       r4, 0x1B8(r3)
      cmplwi    r4, 0
      beq-      .loc_0x6C
      lha       r0, 0x20(r4)
      b         .loc_0x70

    .loc_0x6C:
      li        r0, -0x1

    .loc_0x70:
      cmpwi     r0, 0x39
      beq-      .loc_0x88
      cmpwi     r0, 0x38
      beq-      .loc_0x88
      li        r3, 0x2
      b         .loc_0x31C

    .loc_0x88:
      lbz       r4, 0x18(r31)
      rlwinm.   r0,r4,0,29,29
      beq-      .loc_0x180
      rlwinm.   r0,r4,0,31,31
      bne-      .loc_0x100
      lbz       r0, 0x10(r31)
      cmplwi    r0, 0x1
      blt-      .loc_0xF8
      cmpwi     r0, 0x2
      beq-      .loc_0xF0
      bge-      .loc_0xC0
      cmpwi     r0, 0x1
      bge-      .loc_0xCC
      b         .loc_0xF0

    .loc_0xC0:
      cmpwi     r0, 0x4
      bge-      .loc_0xF0
      b         .loc_0xE0

    .loc_0xCC:
      bl        -0xF4A9C
      lbz       r0, 0x18(r31)
      ori       r0, r0, 0x1
      stb       r0, 0x18(r31)
      b         .loc_0xF0

    .loc_0xE0:
      bl        -0xF4AB0
      lbz       r0, 0x18(r31)
      ori       r0, r0, 0x1
      stb       r0, 0x18(r31)

    .loc_0xF0:
      li        r3, 0x1
      b         .loc_0x31C

    .loc_0xF8:
      li        r3, 0
      b         .loc_0x31C

    .loc_0x100:
      lbz       r0, 0x1C4(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x178
      rlwinm    r0,r4,0,24,30
      stb       r0, 0x18(r31)
      lbz       r0, 0x10(r31)
      cmplwi    r0, 0x3
      bne-      .loc_0x178
      li        r0, 0x1
      cmplwi    r31, 0
      stb       r0, 0x10(r31)
      mr        r6, r31
      beq-      .loc_0x138
      lwz       r6, 0xC(r31)

    .loc_0x138:
      lwz       r3, 0x4(r31)
      li        r4, 0x38
      li        r5, 0x38
      li        r7, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x4(r31)
      li        r4, 0
      addi      r3, r3, 0x1AC
      bl        0x1F720C
      lwz       r3, 0x4(r31)
      li        r4, 0
      addi      r3, r3, 0x1C8
      bl        0x1F71FC

    .loc_0x178:
      li        r3, 0x1
      b         .loc_0x31C

    .loc_0x180:
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x14(r31)
      lfs       f0, 0x54(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0x14(r31)
      lbz       r0, 0x18(r31)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0x318
      lfs       f1, 0x14(r31)
      lfs       f0, -0x3FE8(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x318
      lbz       r0, 0x10(r31)
      cmplwi    r0, 0x1
      bgt-      .loc_0x284
      bl        -0x1686AC
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, -0x3FE0(r2)
      stw       r0, 0x8(r1)
      lfs       f1, -0x3FF0(r2)
      lfd       f2, 0x8(r1)
      lfs       f0, -0x3FC4(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x284
      lbz       r0, 0x10(r31)
      cmpwi     r0, 0x1
      beq-      .loc_0x248
      bge-      .loc_0x2E0
      cmpwi     r0, 0
      bge-      .loc_0x20C
      b         .loc_0x2E0

    .loc_0x20C:
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0x21C
      lwz       r6, 0xC(r31)

    .loc_0x21C:
      lwz       r3, 0x4(r31)
      li        r4, 0x38
      li        r5, 0x38
      li        r7, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      stb       r0, 0x10(r31)
      b         .loc_0x2E0

    .loc_0x248:
      cmplwi    r31, 0
      mr        r6, r31
      beq-      .loc_0x258
      lwz       r6, 0xC(r31)

    .loc_0x258:
      lwz       r3, 0x4(r31)
      li        r4, 0x39
      li        r5, 0x39
      li        r7, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      li        r0, 0x3
      stb       r0, 0x10(r31)
      b         .loc_0x2E0

    .loc_0x284:
      lbz       r0, 0x10(r31)
      cmplwi    r0, 0x1
      blt-      .loc_0x2E0
      cmpwi     r0, 0x2
      beq-      .loc_0x2E0
      bge-      .loc_0x2A8
      cmpwi     r0, 0x1
      bge-      .loc_0x2B4
      b         .loc_0x2E0

    .loc_0x2A8:
      cmpwi     r0, 0x4
      bge-      .loc_0x2E0
      b         .loc_0x2CC

    .loc_0x2B4:
      lwz       r3, 0x4(r31)
      bl        -0xF4C88
      lbz       r0, 0x18(r31)
      ori       r0, r0, 0x1
      stb       r0, 0x18(r31)
      b         .loc_0x2E0

    .loc_0x2CC:
      lwz       r3, 0x4(r31)
      bl        -0xF4CA0
      lbz       r0, 0x18(r31)
      ori       r0, r0, 0x1
      stb       r0, 0x18(r31)

    .loc_0x2E0:
      bl        -0x1687D0
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, -0x3FE0(r2)
      stw       r0, 0x8(r1)
      lfs       f2, -0x3FF0(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, -0x3FEC(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x3FC0(r2)
      fdivs     f2, f3, f2
      fmadds    f0, f1, f2, f0
      stfs      f0, 0x14(r31)

    .loc_0x318:
      li        r3, 0x1

    .loc_0x31C:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80231DC0
 * Size:	000004
 */
void PikiAI::ActRest::cleanup(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80231DC4
 * Size:	0001F4
 */
void PikiAI::ActRest::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      lwz       r0, 0x1C(r4)
      lis       r4, 0x8048
      stw       r31, 0x1C(r1)
      mr        r31, r3
      cmpwi     r0, 0xC8
      stw       r30, 0x18(r1)
      addi      r30, r4, 0x3930
      stw       r29, 0x14(r1)
      beq-      .loc_0x4C
      bge-      .loc_0x40
      cmpwi     r0, 0x1
      beq-      .loc_0x1D8
      b         .loc_0x1D8

    .loc_0x40:
      cmpwi     r0, 0x3E8
      beq-      .loc_0x124
      b         .loc_0x1D8

    .loc_0x4C:
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x6C
      addi      r3, r30, 0x38
      addi      r5, r30, 0x2C
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x2077EC

    .loc_0x6C:
      lwz       r29, -0x6780(r13)
      cmplwi    r29, 0
      bne-      .loc_0x8C
      addi      r3, r30, 0x38
      addi      r5, r30, 0x2C
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x20780C

    .loc_0x8C:
      lwz       r0, 0x4(r29)
      cmplwi    r0, 0
      bne-      .loc_0xAC
      addi      r3, r30, 0x44
      addi      r5, r30, 0x2C
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x20782C

    .loc_0xAC:
      lwz       r3, 0x4(r29)
      lwz       r29, 0x4(r3)
      cmplwi    r29, 0
      bne-      .loc_0xD0
      addi      r3, r30, 0x44
      addi      r5, r30, 0x50
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x207850

    .loc_0xD0:
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xF0
      b         .loc_0xF4

    .loc_0xF0:
      li        r29, 0

    .loc_0xF4:
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1D8
      lwz       r3, 0x4(r31)
      li        r4, 0x283E
      li        r5, 0x1
      bl        -0xE9614
      b         .loc_0x1D8

    .loc_0x124:
      lbz       r3, 0x18(r31)
      rlwinm.   r0,r3,0,31,31
      beq-      .loc_0x1D8
      lbz       r0, 0x10(r31)
      cmpwi     r0, 0x2
      beq-      .loc_0x1D8
      bge-      .loc_0x14C
      cmpwi     r0, 0x1
      bge-      .loc_0x158
      b         .loc_0x1D8

    .loc_0x14C:
      cmpwi     r0, 0x4
      bge-      .loc_0x1D8
      b         .loc_0x178

    .loc_0x158:
      rlwinm    r3,r3,0,24,30
      li        r0, 0
      stb       r3, 0x18(r31)
      stb       r0, 0x10(r31)
      lbz       r0, 0x18(r31)
      ori       r0, r0, 0x2
      stb       r0, 0x18(r31)
      b         .loc_0x1D8

    .loc_0x178:
      rlwinm    r0,r3,0,24,30
      cmplwi    r31, 0
      stb       r0, 0x18(r31)
      li        r0, 0x1
      mr        r6, r31
      stb       r0, 0x10(r31)
      beq-      .loc_0x198
      lwz       r6, 0xC(r31)

    .loc_0x198:
      lwz       r3, 0x4(r31)
      li        r4, 0x38
      li        r5, 0x38
      li        r7, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x4(r31)
      li        r4, 0
      addi      r3, r3, 0x1AC
      bl        0x1F6E78
      lwz       r3, 0x4(r31)
      li        r4, 0
      addi      r3, r3, 0x1C8
      bl        0x1F6E68

    .loc_0x1D8:
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
 * Address:	80231FB8
 * Size:	0000BC
 */
void PikiAI::ActOneshot::__ct((Game::Piki*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      extsh.    r0, r4
      stw       r31, 0xC(r1)
      mr        r31, r3
      beq-      .loc_0x30
      addi      r0, r31, 0x1C
      lis       r3, 0x804B
      stw       r0, 0xC(r31)
      subi      r0, r3, 0x5994
      stw       r0, 0x1C(r31)

    .loc_0x30:
      mr        r3, r31
      mr        r4, r5
      bl        -0x9B5D8
      lis       r4, 0x804C
      lis       r3, 0x804C
      addi      r5, r4, 0x12A8
      lis       r4, 0x804B
      stw       r5, 0x0(r31)
      addi      r8, r3, 0x1208
      lis       r3, 0x804C
      addi      r0, r5, 0x40
      lwz       r5, 0xC(r31)
      addi      r9, r8, 0x44
      addi      r7, r31, 0x1C
      addi      r6, r4, 0x530
      stw       r0, 0x0(r5)
      addi      r5, r3, 0x12F4
      li        r4, -0x1
      li        r0, 0
      stw       r8, 0x0(r31)
      mr        r3, r31
      lwz       r8, 0xC(r31)
      stw       r9, 0x0(r8)
      lwz       r8, 0xC(r31)
      sub       r7, r7, r8
      stw       r7, 0x4(r8)
      stw       r6, 0x10(r31)
      stw       r5, 0x10(r31)
      stw       r4, 0x14(r31)
      stb       r0, 0x18(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80232074
 * Size:	000094
 */
void PikiAI::ActOneshot::init((PikiAI::ActionArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      bne-      .loc_0x3C
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x3950
      li        r4, 0x10B
      addi      r5, r5, 0x395C
      crclr     6, 0x6
      bl        -0x207A6C

    .loc_0x3C:
      lwz       r0, 0x4(r31)
      cmplwi    r30, 0
      mr        r6, r30
      stw       r0, 0x14(r30)
      beq-      .loc_0x54
      lwz       r6, 0xC(r30)

    .loc_0x54:
      lwz       r3, 0x4(r30)
      li        r7, 0
      lwz       r4, 0x14(r30)
      lwz       r12, 0x0(r3)
      mr        r5, r4
      lwz       r12, 0x208(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0x18(r30)
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
 * Address:	80232108
 * Size:	000048
 */
void PikiAI::ActOneshot::finish(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x3FD4(r2)
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x4(r3)
      stfs      f0, 0x234(r3)
      lwz       r3, 0x4(r31)
      bl        -0xF506C
      lbz       r0, 0x18(r31)
      ori       r0, r0, 0x2
      stb       r0, 0x18(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80232150
 * Size:	000070
 */
void PikiAI::ActOneshot::exec(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0x4(r3)
      lfs       f0, -0x3FE8(r2)
      stfs      f0, 0x1E4(r4)
      stfs      f0, 0x1E8(r4)
      stfs      f0, 0x1EC(r4)
      lbz       r4, 0x18(r3)
      rlwinm.   r0,r4,0,30,30
      beq-      .loc_0x28
      li        r3, 0
      blr

    .loc_0x28:
      rlwinm.   r0,r4,0,31,31
      beq-      .loc_0x38
      li        r3, 0
      blr

    .loc_0x38:
      lwz       r4, 0x4(r3)
      lwz       r4, 0x1B8(r4)
      cmplwi    r4, 0
      beq-      .loc_0x50
      lha       r4, 0x20(r4)
      b         .loc_0x54

    .loc_0x50:
      li        r4, -0x1

    .loc_0x54:
      lwz       r0, 0x14(r3)
      cmpw      r0, r4
      beq-      .loc_0x68
      li        r3, 0x2
      blr

    .loc_0x68:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	802321C0
 * Size:	000004
 */
void PikiAI::ActOneshot::cleanup(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802321C4
 * Size:	000150
 */
void PikiAI::ActOneshot::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x8048
      stw       r0, 0x24(r1)
      lwz       r0, 0x1C(r4)
      stw       r31, 0x1C(r1)
      addi      r31, r5, 0x3930
      cmplwi    r0, 0x3E8
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r3
      bne-      .loc_0x3C
      lbz       r0, 0x18(r29)
      ori       r0, r0, 0x1
      stb       r0, 0x18(r29)

    .loc_0x3C:
      lwz       r0, 0x1C(r4)
      cmplwi    r0, 0xC8
      bne-      .loc_0x134
      lwz       r0, 0x14(r29)
      cmpwi     r0, 0
      beq-      .loc_0x58
      b         .loc_0x134

    .loc_0x58:
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x78
      addi      r3, r31, 0x38
      addi      r5, r31, 0x2C
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x207BF8

    .loc_0x78:
      lwz       r30, -0x6780(r13)
      cmplwi    r30, 0
      bne-      .loc_0x98
      addi      r3, r31, 0x38
      addi      r5, r31, 0x2C
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x207C18

    .loc_0x98:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0xB8
      addi      r3, r31, 0x44
      addi      r5, r31, 0x2C
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x207C38

    .loc_0xB8:
      lwz       r3, 0x4(r30)
      lwz       r30, 0x4(r3)
      cmplwi    r30, 0
      bne-      .loc_0xDC
      addi      r3, r31, 0x44
      addi      r5, r31, 0x50
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x207C5C

    .loc_0xDC:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xFC
      b         .loc_0x100

    .loc_0xFC:
      li        r30, 0

    .loc_0x100:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x134
      lwz       r3, 0x4(r29)
      li        r4, 0x2834
      li        r5, 0x5A
      li        r6, 0
      lwz       r3, 0x250(r3)
      bl        0x23028C

    .loc_0x134:
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
 * Address:	80232314
 * Size:	000014
 */
void @28 @4 @PikiAI::ActRest::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      li        r11, 0x4
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x1C
      b         -0x560
    */
}

/*
 * --INFO--
 * Address:	80232328
 * Size:	000014
 */
void @28 @4 @PikiAI::ActOneshot::onKeyEvent((SysShape::KeyEvent const&))
{
    /*
    .loc_0x0:
      li        r11, 0x4
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x1C
      b         -0x174
    */
}
