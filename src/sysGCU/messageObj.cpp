

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
 * Address:	80438A34
 * Size:	000074
 */
void P2JME::TControl::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x4306A4
      lis       r3, 0x804F
      li        r0, 0
      subi      r3, r3, 0x3610
      lfs       f0, 0x2548(r2)
      stw       r3, 0x0(r31)
      mr        r3, r31
      stw       r0, 0x3C(r31)
      stw       r0, 0x40(r31)
      stw       r0, 0x44(r31)
      stfs      f0, 0x48(r31)
      stb       r0, 0x4C(r31)
      stb       r0, 0x4D(r31)
      stb       r0, 0x4E(r31)
      stb       r0, 0x4F(r31)
      stb       r0, 0x4C(r31)
      stb       r0, 0x4D(r31)
      stb       r0, 0x4E(r31)
      stb       r0, 0x4F(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80438AA8
 * Size:	000024
 */
void P2JME::TControl::setController((Controller*, Controller*))
{
    /*
    .loc_0x0:
      lwz       r6, 0x3C(r3)
      cmplwi    r6, 0
      beq-      .loc_0x1C
      stw       r4, 0x54(r6)
      li        r3, 0x1
      stw       r5, 0x58(r6)
      blr

    .loc_0x1C:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80438ACC
 * Size:	00006C
 */
void P2JME::TControl::setFont((JUTFont*))
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
      lwz       r0, 0x40(r3)
      cmplwi    r0, 0
      bne-      .loc_0x44
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x5468
      li        r4, 0x4D
      subi      r5, r5, 0x5458
      crclr     6, 0x6
      bl        -0x40E4CC

    .loc_0x44:
      lwz       r3, 0x40(r30)
      mr        r4, r31
      bl        0x434C
      lwz       r0, 0x14(r1)
      li        r3, 0x1
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80438B38
 * Size:	00009C
 */
void P2JME::TControl::setRubyFont((JUTFont*))
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
      lwz       r0, 0x40(r3)
      cmplwi    r0, 0
      bne-      .loc_0x44
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x5468
      li        r4, 0x58
      subi      r5, r5, 0x5458
      crclr     6, 0x6
      bl        -0x40E538

    .loc_0x44:
      cmplwi    r31, 0
      bne-      .loc_0x58
      lwz       r3, -0x6428(r13)
      lwz       r31, 0x1C(r3)
      b         .loc_0x78

    .loc_0x58:
      bne-      .loc_0x78
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x5468
      li        r4, 0x62
      subi      r5, r5, 0x5458
      crclr     6, 0x6
      bl        -0x40E56C

    .loc_0x78:
      lwz       r4, 0x40(r30)
      li        r3, 0x1
      stw       r31, 0x50(r4)
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
 * Address:	80438BD4
 * Size:	000104
 */
void P2JME::TControl::init(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x804A
      li        r5, 0
      stw       r0, 0x14(r1)
      subi      r4, r4, 0x544C
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, -0x6514(r13)
      bl        -0x1589C
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x38(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lis       r4, 0x804A
      lwz       r3, -0x6514(r13)
      subi      r4, r4, 0x544C
      bl        -0x158F4
      lwz       r0, 0x44(r31)
      lis       r3, 0x804A
      lwz       r6, 0x38(r31)
      subi      r4, r3, 0x5438
      li        r5, 0
      stw       r0, 0x4(r6)
      lwz       r0, 0x3C(r31)
      stw       r0, 0x4(r31)
      lwz       r0, 0x40(r31)
      stw       r0, 0x8(r31)
      lwz       r3, -0x6514(r13)
      bl        -0x1592C
      mr        r3, r31
      li        r31, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x34(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xDC
      li        r31, 0x1

    .loc_0xDC:
      lis       r4, 0x804A
      lwz       r3, -0x6514(r13)
      subi      r4, r4, 0x5438
      bl        -0x15958
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
 * Address:	80438CD8
 * Size:	000008
 */
void P2JME::TControl::onInit(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80438CE0
 * Size:	00007C
 */
void P2JME::TControl::createRenderingProcessor(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      li        r3, 0x110
      bl        -0x414E58
      mr.       r31, r3
      beq-      .loc_0x60
      lwz       r0, 0x38(r30)
      cmplwi    r0, 0
      bne-      .loc_0x50
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x542C
      li        r4, 0x79
      subi      r5, r5, 0x5458
      crclr     6, 0x6
      bl        -0x40E6EC

    .loc_0x50:
      lwz       r4, 0x38(r30)
      mr        r3, r31
      bl        0x6A8
      mr        r31, r3

    .loc_0x60:
      stw       r31, 0x40(r30)
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
 * Address:	80438D5C
 * Size:	000080
 */
void P2JME::TControl::createSequenceProcessor(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      li        r3, 0x70
      bl        -0x414ED4
      mr.       r31, r3
      beq-      .loc_0x64
      lwz       r0, 0x38(r30)
      cmplwi    r0, 0
      bne-      .loc_0x50
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x542C
      li        r4, 0x79
      subi      r5, r5, 0x5458
      crclr     6, 0x6
      bl        -0x40E768

    .loc_0x50:
      lwz       r4, 0x38(r30)
      mr        r3, r31
      mr        r5, r30
      bl        -0x1574
      mr        r31, r3

    .loc_0x64:
      stw       r31, 0x3C(r30)
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
 * Address:	80438DDC
 * Size:	000070
 */
void P2JME::TControl::reset(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x4309C0
      lfs       f0, 0x2548(r2)
      li        r0, 0
      stfs      f0, 0x48(r31)
      stb       r0, 0x4C(r31)
      stb       r0, 0x4D(r31)
      stb       r0, 0x4E(r31)
      stb       r0, 0x4F(r31)
      lwz       r3, 0x3C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x74(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x40(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x6C(r12)
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
 * Address:	80438E4C
 * Size:	00008C
 */
void P2JME::TControl::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      bl        -0x4309CC
      lwz       r0, 0x40(r30)
      mr        r31, r3
      cmplwi    r0, 0
      beq-      .loc_0x40
      mr        r3, r0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl

    .loc_0x40:
      lwz       r3, 0x4C(r30)
      rlwinm.   r0,r3,0,31,31
      beq-      .loc_0x60
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0x70
      ori       r0, r3, 0x2
      stw       r0, 0x4C(r30)
      b         .loc_0x70

    .loc_0x60:
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x70
      ori       r0, r3, 0x1
      stw       r0, 0x4C(r30)

    .loc_0x70:
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
 * Address:	80438ED8
 * Size:	000004
 */
void P2JME::TRenderingProcessor::update(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void P2JME::TControl::drawCommon(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80438EDC
 * Size:	000020
 */
void P2JME::TControl::draw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x4309C8
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80438EFC
 * Size:	000080
 */
void P2JME::TControl::draw((float (*)[4], float (*)[4]))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r5
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      lwz       r0, 0x40(r3)
      cmplwi    r0, 0
      bne-      .loc_0x4C
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x5468
      li        r4, 0x101
      subi      r5, r5, 0x5458
      crclr     6, 0x6
      bl        -0x40E904

    .loc_0x4C:
      lwz       r4, 0x40(r29)
      mr        r3, r29
      stw       r30, 0x44(r4)
      lwz       r4, 0x40(r29)
      stw       r31, 0x48(r4)
      bl        -0x430A3C
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
 * Address:	80438F7C
 * Size:	000050
 */
void P2JME::TControl::setLocate((int, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      lis       r6, 0x4330
      xoris     r0, r4, 0x8000
      lfd       f2, 0x2550(r2)
      stw       r0, 0xC(r1)
      xoris     r0, r5, 0x8000
      lwz       r3, 0x40(r3)
      stw       r6, 0x8(r1)
      lfd       f0, 0x8(r1)
      stw       r0, 0x14(r1)
      fsubs     f1, f0, f2
      stw       r6, 0x10(r1)
      lfd       f0, 0x10(r1)
      stfs      f1, 0x90(r3)
      fsubs     f0, f0, f2
      stfs      f1, 0x98(r3)
      stfs      f0, 0x94(r3)
      stfs      f0, 0x9C(r3)
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80438FCC
 * Size:	000054
 */
void P2JME::TControl::setMessageID((char*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      addi      r5, r1, 0x8
      stw       r31, 0x1C(r1)
      mr        r31, r3
      mr        r3, r4
      addi      r4, r1, 0xC
      bl        0x4388
      mr        r3, r31
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r31)
      lwz       r5, 0x8(r1)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80439020
 * Size:	000084
 */
void P2JME::TControl::setMessageID((unsigned long, unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r5
      stw       r29, 0x14(r1)
      mr        r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r3, r28
      mr        r4, r29
      mr        r5, r30
      li        r6, 0
      bl        -0x430910
      mr        r31, r3
      lwz       r3, 0x40(r28)
      mr        r4, r29
      mr        r5, r30
      bl        0x3680
      lwz       r0, 0x24(r1)
      rlwinm    r3,r31,0,24,31
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
 * Address:	804390A4
 * Size:	00007C
 */
void P2JME::TControl::setMessageCode((unsigned short, unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r5
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r3, r29
      mr        r4, r30
      mr        r5, r31
      bl        -0x430A68
      lhz       r0, 0xC(r29)
      mr        r31, r3
      lhz       r4, 0xE(r29)
      lwz       r3, 0x40(r29)
      rlwimi    r4,r0,16,0,15
      bl        0x35E0
      lwz       r0, 0x24(r1)
      rlwinm    r3,r31,0,24,31
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
 * Address:	80439120
 * Size:	000070
 */
void P2JME::TControl::setMessageCode((unsigned long))
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
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      rlwinm    r4,r30,16,16,31
      mr        r3, r29
      rlwinm    r5,r30,0,16,31
      bl        -0x430AE0
      mr        r31, r3
      lwz       r3, 0x40(r29)
      mr        r4, r30
      bl        0x3570
      lwz       r0, 0x24(r1)
      rlwinm    r3,r31,0,24,31
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
 * Address:	80439190
 * Size:	000060
 */
void P2JME::TControl::__dt(void)
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
      beq-      .loc_0x44
      lis       r5, 0x804F
      li        r4, 0
      subi      r0, r5, 0x3610
      stw       r0, 0x0(r30)
      bl        -0x430DD8
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x41511C

    .loc_0x44:
      lwz       r0, 0x14(r1)
      mr        r3, r30
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}
