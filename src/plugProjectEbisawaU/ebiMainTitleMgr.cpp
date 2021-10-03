

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
 * Address:	803EA170
 * Size:	0003B4
 */
void ebi::TMainTitleMgr::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804F
      li        r8, 0
      stw       r0, 0x24(r1)
      subi      r0, r4, 0x7818
      lis       r5, 0x804F
      li        r7, 0x6
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lis       r3, 0x804F
      stw       r30, 0x18(r1)
      mr        r6, r31
      mr        r30, r6
      stw       r29, 0x14(r1)
      stw       r0, 0x0(r31)
      subi      r0, r3, 0x7370
      lis       r3, 0x803F
      stw       r0, 0x0(r6)
      subi      r0, r5, 0x70D0
      subi      r4, r3, 0x4E9C
      addi      r3, r30, 0x4C
      stw       r8, 0x4(r6)
      li        r5, 0
      stw       r8, 0x8(r6)
      li        r6, 0xC
      stw       r0, 0x0(r30)
      stw       r8, 0x14(r30)
      stw       r8, 0x18(r30)
      stb       r8, 0x40(r30)
      stw       r8, 0x44(r30)
      stw       r8, 0x48(r30)
      bl        -0x3289B4
      lis       r4, 0x803F
      addi      r3, r30, 0x94
      subi      r4, r4, 0x4E9C
      li        r5, 0
      li        r6, 0xC
      li        r7, 0x6
      bl        -0x3289D0
      li        r0, 0
      lis       r3, 0x803E
      lis       r5, 0x803D
      stw       r0, 0xDC(r30)
      subi      r4, r3, 0x659C
      addi      r3, r30, 0xA74
      subi      r5, r5, 0x6C
      li        r6, 0x3C
      li        r7, 0xC
      bl        -0x3289F8
      lis       r3, 0x803E
      lis       r5, 0x803D
      subi      r4, r3, 0x659C
      li        r6, 0x3C
      addi      r3, r30, 0xD44
      subi      r5, r5, 0x6C
      li        r7, 0x6
      bl        -0x328A18
      lis       r3, 0x803E
      lis       r5, 0x803D
      subi      r4, r3, 0x659C
      li        r6, 0x3C
      addi      r3, r30, 0xEAC
      subi      r5, r5, 0x6C
      li        r7, 0x6
      bl        -0x328A38
      lis       r3, 0x803E
      lis       r5, 0x803D
      subi      r4, r3, 0x659C
      li        r6, 0x3C
      addi      r3, r30, 0x1014
      subi      r5, r5, 0x6C
      li        r7, 0x6
      bl        -0x328A58
      lis       r3, 0x803E
      lis       r5, 0x803D
      subi      r4, r3, 0x659C
      li        r6, 0x3C
      addi      r3, r30, 0x117C
      subi      r5, r5, 0x6C
      li        r7, 0x6
      bl        -0x328A78
      addi      r29, r30, 0x12E4
      mr        r3, r29
      bl        0x270D0
      lis       r3, 0x804D
      lis       r6, 0x804D
      addi      r0, r3, 0x7B0C
      lis       r5, 0x804F
      stw       r0, 0x0(r29)
      li        r0, 0
      lis       r4, 0x804F
      lis       r3, 0x804E
      stw       r0, 0x18(r29)
      addi      r0, r6, 0x7F2C
      subi      r7, r5, 0x77D0
      li        r6, 0x1
      stw       r0, 0x0(r29)
      subi      r5, r4, 0x75F4
      addi      r0, r3, 0x798C
      addi      r3, r29, 0x20
      stw       r7, 0x0(r29)
      li        r4, 0
      stb       r6, 0x1C(r29)
      stw       r5, 0x0(r29)
      stw       r0, 0x20(r29)
      bl        -0x382CA0
      addi      r29, r30, 0x1320
      mr        r3, r29
      bl        0x2706C
      lis       r3, 0x804D
      lis       r6, 0x804D
      addi      r0, r3, 0x7B0C
      lis       r5, 0x804F
      stw       r0, 0x0(r29)
      li        r0, 0
      lis       r4, 0x804F
      lis       r3, 0x804E
      stw       r0, 0x18(r29)
      addi      r0, r6, 0x7F2C
      subi      r7, r5, 0x77D0
      li        r6, 0x1
      stw       r0, 0x0(r29)
      subi      r5, r4, 0x75F4
      addi      r0, r3, 0x798C
      addi      r3, r29, 0x20
      stw       r7, 0x0(r29)
      li        r4, 0
      stb       r6, 0x1C(r29)
      stw       r5, 0x0(r29)
      stw       r0, 0x20(r29)
      bl        -0x382D04
      addi      r30, r30, 0x135C
      mr        r3, r30
      bl        0x27008
      lis       r3, 0x804D
      li        r10, 0
      addi      r0, r3, 0x7B0C
      lis       r4, 0x804D
      stw       r0, 0x0(r30)
      addi      r0, r4, 0x7F2C
      lis       r4, 0x803E
      lis       r3, 0x804F
      stw       r10, 0x18(r30)
      lis       r9, 0x804F
      lis       r8, 0x804F
      lis       r7, 0x804F
      stw       r0, 0x0(r30)
      subi      r0, r3, 0x77D0
      lis       r3, 0x803D
      lis       r6, 0x804F
      stw       r0, 0x0(r30)
      li        r0, 0x1
      subi      r5, r3, 0x6C
      subi      r3, r8, 0x7818
      stb       r0, 0x1C(r30)
      subi      r0, r9, 0x77F4
      subi      r8, r7, 0x7370
      subi      r4, r4, 0x659C
      stw       r0, 0x0(r30)
      subi      r0, r6, 0x7320
      li        r6, 0x3C
      li        r7, 0x4
      stw       r3, 0x137C(r31)
      addi      r3, r31, 0x13AC
      stw       r8, 0x137C(r31)
      stw       r10, 0x1380(r31)
      stw       r10, 0x1384(r31)
      stw       r0, 0x137C(r31)
      stw       r10, 0x1388(r31)
      stw       r10, 0x1390(r31)
      stw       r10, 0x13A4(r31)
      stw       r10, 0x13A8(r31)
      bl        -0x328BE8
      lis       r3, 0x803E
      lis       r5, 0x803D
      subi      r4, r3, 0x659C
      li        r6, 0x3C
      addi      r3, r31, 0x149C
      subi      r5, r5, 0x6C
      li        r7, 0x4
      bl        -0x328C08
      lis       r3, 0x803F
      lis       r5, 0x803D
      subi      r4, r3, 0x4F0C
      li        r6, 0x20
      addi      r3, r31, 0x158C
      subi      r5, r5, 0xFC
      li        r7, 0x4
      bl        -0x328C28
      lis       r4, 0x804F
      lis       r3, 0x804F
      subi      r7, r4, 0x7818
      lis       r4, 0x804F
      stw       r7, 0x160C(r31)
      subi      r6, r3, 0x7370
      lis       r3, 0x804F
      li        r5, 0
      stw       r6, 0x160C(r31)
      subi      r4, r4, 0x60EC
      subi      r3, r3, 0x6138
      li        r0, 0xFF
      stw       r5, 0x1610(r31)
      stw       r5, 0x1614(r31)
      stw       r4, 0x160C(r31)
      stw       r5, 0x1618(r31)
      stw       r5, 0x161C(r31)
      stw       r5, 0x1620(r31)
      stw       r5, 0x161C(r31)
      stw       r5, 0x1620(r31)
      stw       r7, 0x1624(r31)
      stw       r6, 0x1624(r31)
      stw       r5, 0x1628(r31)
      stw       r5, 0x162C(r31)
      stw       r3, 0x1624(r31)
      stw       r5, 0x1630(r31)
      stb       r5, 0x1634(r31)
      stb       r5, 0x1635(r31)
      stb       r5, 0x1636(r31)
      stb       r0, 0x1637(r31)
      stb       r0, 0x1638(r31)
      stw       r5, 0x163C(r31)
      stw       r5, 0x1640(r31)
      stw       r5, 0x1644(r31)
      stw       r5, 0x165C(r31)
      stw       r5, 0x1660(r31)
      bl        -0x2BD84
      lwz       r3, -0x65D8(r13)
      bl        -0x2BCD0
      lwz       r0, 0x24(r1)
      mr        r3, r31
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
 * Address:	........
 * Size:	0000A0
 */
void ebi::Screen::TPressStart::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EA524
 * Size:	000068
 */
void ebi::TMainTitleMgr::setMode((long))
{
    /*
    .loc_0x0:
      cmpwi     r4, 0x2
      beq-      .loc_0x48
      bge-      .loc_0x1C
      cmpwi     r4, 0
      beq-      .loc_0x28
      bge-      .loc_0x38
      blr

    .loc_0x1C:
      cmpwi     r4, 0x4
      bgelr-
      b         .loc_0x58

    .loc_0x28:
      lwz       r3, -0x65D8(r13)
      li        r0, 0
      stw       r0, 0xF5C(r3)
      blr

    .loc_0x38:
      lwz       r3, -0x65D8(r13)
      li        r0, 0x1
      stw       r0, 0xF5C(r3)
      blr

    .loc_0x48:
      lwz       r3, -0x65D8(r13)
      li        r0, 0x2
      stw       r0, 0xF5C(r3)
      blr

    .loc_0x58:
      lwz       r3, -0x65D8(r13)
      li        r0, 0x3
      stw       r0, 0xF5C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803EA58C
 * Size:	000124
 */
void ebi::TMainTitleMgr::loadResource(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x120(r1)
      mflr      r0
      lis       r4, 0x8049
      li        r5, 0
      stw       r0, 0x124(r1)
      stw       r31, 0x11C(r1)
      addi      r31, r4, 0x7880
      addi      r4, r31, 0x1C
      stw       r30, 0x118(r1)
      stw       r29, 0x114(r1)
      mr        r29, r3
      lwz       r3, -0x6514(r13)
      bl        0x38DA0
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x38
      li        r5, 0
      bl        0x38D90
      addi      r3, r1, 0x8
      addi      r4, r31, 0x54
      bl        -0xD268C
      addi      r3, r1, 0x8
      li        r4, 0x1
      li        r5, 0
      li        r6, 0x1
      bl        -0x3CF4BC
      mr.       r30, r3
      bne-      .loc_0x80
      addi      r3, r31, 0x60
      addi      r5, r31, 0x74
      li        r4, 0x45
      crclr     6, 0x6
      bl        -0x3BFFC8

    .loc_0x80:
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x38
      bl        0x38D50
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      addi      r3, r29, 0x137C
      mr        r4, r30
      lwz       r12, 0x137C(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      addi      r3, r29, 0x160C
      mr        r4, r30
      lwz       r12, 0x160C(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      addi      r3, r29, 0x1624
      mr        r4, r30
      lwz       r12, 0x1624(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x65D8(r13)
      bl        -0x2BBD4
      lwz       r3, -0x65D8(r13)
      bl        -0x2B8DC
      lwz       r3, -0x6514(r13)
      addi      r4, r31, 0x1C
      bl        0x38CD4
      lwz       r0, 0x124(r1)
      lwz       r31, 0x11C(r1)
      lwz       r30, 0x118(r1)
      lwz       r29, 0x114(r1)
      mtlr      r0
      addi      r1, r1, 0x120
      blr
    */
}

/*
 * --INFO--
 * Address:	803EA6B0
 * Size:	00004C
 */
void ebi::TMainTitleMgr::setController((Controller*))
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
      bl        -0xF638
      stw       r31, 0x1388(r30)
      mr        r4, r31
      lwz       r3, -0x65D8(r13)
      bl        -0x2B8F4
      stw       r31, 0x1648(r30)
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
 * Address:	803EA6FC
 * Size:	0000C0
 */
void ebi::TMainTitleMgr::start(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x137C
      lwz       r12, 0x137C(r31)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lis       r3, 0x804F
      lfs       f0, 0x1AB4(r2)
      subi      r0, r3, 0x6064
      lis       r3, 0x804F
      stw       r0, 0x8(r1)
      subi      r0, r3, 0x6070
      addi      r3, r31, 0x160C
      addi      r4, r1, 0x8
      stw       r0, 0x8(r1)
      stfs      f0, 0xC(r1)
      lwz       r12, 0x160C(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x1624
      li        r4, 0
      lwz       r12, 0x1624(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x65D8(r13)
      bl        -0x2B6F0
      li        r0, 0x1
      li        r3, 0
      stw       r0, 0x1650(r31)
      li        r0, -0x1
      stb       r3, 0x1655(r31)
      stw       r0, 0x1658(r31)
      stw       r3, 0x163C(r31)
      lwz       r31, 0x1C(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803EA7BC
 * Size:	0001F0
 */
void ebi::TMainTitleMgr::startMenuSet((long, long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      mr        r30, r3
      stw       r5, 0x1658(r3)
      lwz       r0, 0x1658(r3)
      cmpwi     r0, 0x3
      beq-      .loc_0x6C
      bge-      .loc_0x44
      cmpwi     r0, 0x1
      beq-      .loc_0x5C
      bge-      .loc_0x64
      cmpwi     r0, 0
      bge-      .loc_0x54
      b         .loc_0x84

    .loc_0x44:
      cmpwi     r0, 0x5
      beq-      .loc_0x7C
      bge-      .loc_0x84
      b         .loc_0x74

    .loc_0x54:
      li        r31, 0
      b         .loc_0xA0

    .loc_0x5C:
      li        r31, 0x2
      b         .loc_0xA0

    .loc_0x64:
      li        r31, 0x1
      b         .loc_0xA0

    .loc_0x6C:
      li        r31, 0x3
      b         .loc_0xA0

    .loc_0x74:
      li        r31, 0x4
      b         .loc_0xA0

    .loc_0x7C:
      li        r31, 0x5
      b         .loc_0xA0

    .loc_0x84:
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x78E0
      li        r4, 0xB1
      addi      r5, r5, 0x78F4
      crclr     6, 0x6
      bl        -0x3C0218

    .loc_0xA0:
      lis       r3, 0x8051
      addi      r3, r3, 0x41FC
      lwz       r0, 0x1C8(r3)
      cmpwi     r0, 0
      beq-      .loc_0xE8
      lis       r4, 0x804F
      lis       r3, 0x804F
      subi      r4, r4, 0x6064
      li        r0, 0x1
      stw       r4, 0x1C(r1)
      subi      r5, r3, 0x607C
      mr        r3, r30
      addi      r4, r1, 0x1C
      stw       r5, 0x1C(r1)
      stw       r0, 0x20(r1)
      stw       r31, 0x24(r1)
      bl        -0xF800
      b         .loc_0x130

    .loc_0xE8:
      lwz       r3, -0x6514(r13)
      bl        0x38688
      bl        -0x1B61A0
      rlwinm    r5,r3,0,24,31
      lis       r4, 0x804F
      neg       r0, r5
      lis       r3, 0x804F
      subi      r4, r4, 0x6064
      stw       r31, 0x18(r1)
      or        r5, r0, r5
      subi      r0, r3, 0x607C
      stw       r4, 0x10(r1)
      rlwinm    r5,r5,1,31,31
      mr        r3, r30
      addi      r4, r1, 0x10
      stw       r0, 0x10(r1)
      stw       r5, 0x14(r1)
      bl        -0xF84C

    .loc_0x130:
      addi      r3, r30, 0x137C
      lwz       r12, 0x137C(r30)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lis       r3, 0x804F
      lfs       f0, 0x1AB8(r2)
      subi      r0, r3, 0x6064
      lis       r3, 0x804F
      stw       r0, 0x8(r1)
      subi      r0, r3, 0x6070
      addi      r3, r30, 0x160C
      addi      r4, r1, 0x8
      stw       r0, 0x8(r1)
      stfs      f0, 0xC(r1)
      lwz       r12, 0x160C(r30)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r3, r30, 0x1624
      li        r4, 0
      lwz       r12, 0x1624(r30)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x65D8(r13)
      bl        -0x2B8BC
      lwz       r3, -0x65D8(r13)
      bl        -0x2BF04
      li        r3, 0x3
      li        r0, 0
      stw       r3, 0x1650(r30)
      lfs       f1, 0x1698(r2)
      stb       r0, 0x1655(r30)
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fdivs     f1, f1, f0
      bl        -0x328E34
      stw       r3, 0x1640(r30)
      li        r0, 0x1
      stw       r3, 0x1644(r30)
      stw       r0, 0x163C(r30)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803EA9AC
 * Size:	00000C
 */
void ebi::TMainTitleMgr::forceQuit(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      stw       r0, 0x1650(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803EA9B8
 * Size:	000010
 */
void ebi::TMainTitleMgr::isFinish(void)
{
    /*
    .loc_0x0:
      lwz       r0, 0x1650(r3)
      cntlzw    r0, r0
      rlwinm    r3,r0,27,24,31
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void ebi::TMainTitleMgr::isAnyKey(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EA9C8
 * Size:	000008
 */
void ebi::TMainTitleMgr::getSelectedMenu(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x1658(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803EA9D0
 * Size:	0004B0
 */
void ebi::TMainTitleMgr::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      li        r0, 0
      stw       r31, 0x2C(r1)
      mr        r31, r3
      stw       r30, 0x28(r1)
      stb       r0, 0x1654(r3)
      lwz       r0, 0x1650(r3)
      cmpwi     r0, 0x3
      beq-      .loc_0x278
      bge-      .loc_0x40
      cmpwi     r0, 0x1
      beq-      .loc_0x4C
      bge-      .loc_0x80
      b         .loc_0x420

    .loc_0x40:
      cmpwi     r0, 0x5
      bge-      .loc_0x420
      b         .loc_0x3F8

    .loc_0x4C:
      lwz       r3, -0x65D8(r13)
      bl        -0x2ADDC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x420
      addi      r3, r31, 0x137C
      li        r4, 0
      lwz       r12, 0x137C(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      li        r0, 0x2
      stw       r0, 0x1650(r31)
      b         .loc_0x420

    .loc_0x80:
      lwz       r3, -0x65D8(r13)
      bl        -0x2AE2C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x9C
      li        r0, 0x1
      stb       r0, 0x138C(r31)
      b         .loc_0xA4

    .loc_0x9C:
      li        r0, 0
      stb       r0, 0x138C(r31)

    .loc_0xA4:
      lis       r3, 0x8051
      addi      r30, r3, 0x41FC
      lwz       r0, 0x238(r30)
      cmpwi     r0, 0
      beq-      .loc_0xD4
      lwz       r3, 0x1648(r31)
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0xD4
      lwz       r3, -0x6514(r13)
      li        r4, 0
      bl        0x388D4

    .loc_0xD4:
      addi      r3, r31, 0x137C
      lwz       r12, 0x137C(r31)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x420
      lis       r3, 0x8051
      addi      r3, r3, 0x41FC
      lwz       r0, 0x228(r3)
      cmpwi     r0, 0
      beq-      .loc_0x15C
      li        r0, 0x1
      lfs       f1, 0x1ABC(r2)
      stw       r0, 0x1658(r31)
      stb       r0, 0x1654(r31)
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fdivs     f1, f1, f0
      bl        -0x328FA4
      stw       r3, 0x165C(r31)
      lfs       f1, 0x1ABC(r2)
      stw       r3, 0x1660(r31)
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fdivs     f1, f1, f0
      bl        -0x328FC0
      stw       r3, 0x1640(r31)
      li        r4, 0x2
      li        r0, 0x4
      stw       r3, 0x1644(r31)
      stw       r4, 0x163C(r31)
      stw       r0, 0x1650(r31)
      b         .loc_0x420

    .loc_0x15C:
      lwz       r0, 0x238(r30)
      cmpwi     r0, 0
      beq-      .loc_0x1C0
      li        r0, 0x1
      lfs       f1, 0x1ABC(r2)
      stw       r0, 0x1658(r31)
      stb       r0, 0x1654(r31)
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fdivs     f1, f1, f0
      bl        -0x329008
      stw       r3, 0x165C(r31)
      lfs       f1, 0x1ABC(r2)
      stw       r3, 0x1660(r31)
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fdivs     f1, f1, f0
      bl        -0x329024
      stw       r3, 0x1640(r31)
      li        r4, 0x2
      li        r0, 0x4
      stw       r3, 0x1644(r31)
      stw       r4, 0x163C(r31)
      stw       r0, 0x1650(r31)
      b         .loc_0x420

    .loc_0x1C0:
      lwz       r0, 0x1C8(r3)
      cmpwi     r0, 0
      beq-      .loc_0x214
      lis       r3, 0x804F
      li        r0, 0x1
      subi      r4, r3, 0x6064
      lis       r3, 0x804F
      stw       r4, 0x1C(r1)
      subi      r5, r3, 0x607C
      mr        r3, r31
      addi      r4, r1, 0x1C
      stw       r5, 0x1C(r1)
      stw       r0, 0x20(r1)
      stw       r0, 0x24(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      li        r0, 0x3
      stw       r0, 0x1650(r31)
      b         .loc_0x420

    .loc_0x214:
      lwz       r3, -0x6514(r13)
      bl        0x38348
      bl        -0x1B64E0
      rlwinm    r6,r3,0,24,31
      lis       r4, 0x804F
      neg       r5, r6
      lis       r3, 0x804F
      subi      r4, r4, 0x6064
      li        r0, 0
      or        r5, r5, r6
      stw       r4, 0x10(r1)
      rlwinm    r5,r5,1,31,31
      subi      r3, r3, 0x607C
      stw       r3, 0x10(r1)
      mr        r3, r31
      addi      r4, r1, 0x10
      stw       r5, 0x14(r1)
      stw       r0, 0x18(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      li        r0, 0x3
      stw       r0, 0x1650(r31)
      b         .loc_0x420

    .loc_0x278:
      bl        -0xFB4C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x38C
      lbz       r0, 0x1655(r31)
      cmplwi    r0, 0
      bne-      .loc_0x38C
      li        r3, 0x1
      stb       r3, 0x1655(r31)
      lwz       r0, 0x3C(r31)
      cmpwi     r0, 0x3
      beq-      .loc_0x2F0
      bge-      .loc_0x2C0
      cmpwi     r0, 0x1
      beq-      .loc_0x2DC
      bge-      .loc_0x2E8
      cmpwi     r0, 0
      bge-      .loc_0x2D0
      b         .loc_0x310

    .loc_0x2C0:
      cmpwi     r0, 0x5
      beq-      .loc_0x308
      bge-      .loc_0x310
      b         .loc_0x2FC

    .loc_0x2D0:
      li        r0, 0
      stw       r0, 0x1658(r31)
      b         .loc_0x310

    .loc_0x2DC:
      li        r0, 0x2
      stw       r0, 0x1658(r31)
      b         .loc_0x310

    .loc_0x2E8:
      stw       r3, 0x1658(r31)
      b         .loc_0x310

    .loc_0x2F0:
      li        r0, 0x3
      stw       r0, 0x1658(r31)
      b         .loc_0x310

    .loc_0x2FC:
      li        r0, 0x4
      stw       r0, 0x1658(r31)
      b         .loc_0x310

    .loc_0x308:
      li        r0, 0x5
      stw       r0, 0x1658(r31)

    .loc_0x310:
      lwz       r3, -0x65D8(r13)
      bl        -0x2B844
      lis       r3, 0x804F
      lfs       f0, 0x1ABC(r2)
      subi      r0, r3, 0x6088
      lis       r3, 0x804F
      stw       r0, 0x8(r1)
      subi      r0, r3, 0x6094
      addi      r3, r31, 0x160C
      addi      r4, r1, 0x8
      stw       r0, 0x8(r1)
      stfs      f0, 0xC(r1)
      lwz       r12, 0x160C(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        -0xFC20
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x38C
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x1ABC(r2)
      lfs       f0, 0x54(r3)
      fdivs     f1, f1, f0
      bl        -0x3291F4
      stw       r3, 0x1640(r31)
      li        r4, 0x2
      li        r0, 0x1
      stw       r3, 0x1644(r31)
      stw       r4, 0x163C(r31)
      stb       r0, 0x1654(r31)

    .loc_0x38C:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r30, r3
      mr        r3, r31
      bl        -0xFC74
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x420
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x3E0
      addi      r3, r31, 0x137C
      li        r4, 0
      lwz       r12, 0x137C(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      li        r0, 0x2
      stw       r0, 0x1650(r31)
      b         .loc_0x420

    .loc_0x3E0:
      lwz       r0, 0x1640(r31)
      cmplwi    r0, 0
      bne-      .loc_0x420
      li        r0, 0
      stw       r0, 0x1650(r31)
      b         .loc_0x420

    .loc_0x3F8:
      lwz       r3, 0x165C(r31)
      cmplwi    r3, 0
      beq-      .loc_0x40C
      subi      r0, r3, 0x1
      stw       r0, 0x165C(r31)

    .loc_0x40C:
      lwz       r0, 0x165C(r31)
      cmplwi    r0, 0
      bne-      .loc_0x420
      li        r0, 0
      stw       r0, 0x1650(r31)

    .loc_0x420:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x137C
      lwz       r12, 0x137C(r31)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x160C
      lwz       r12, 0x160C(r31)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x1624
      lwz       r12, 0x1624(r31)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x65D8(r13)
      bl        -0x2B0C0
      lwz       r0, 0x163C(r31)
      cmpwi     r0, 0
      beq-      .loc_0x498
      lwz       r3, 0x1640(r31)
      cmplwi    r3, 0
      beq-      .loc_0x498
      subi      r0, r3, 0x1
      stw       r0, 0x1640(r31)

    .loc_0x498:
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
 * Address:	803EAE80
 * Size:	000274
 */
void ebi::TMainTitleMgr::draw(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stw       r31, 0x5C(r1)
      stw       r30, 0x58(r1)
      mr        r30, r3
      lwz       r0, 0x1650(r3)
      cmpwi     r0, 0
      beq-      .loc_0x25C
      lwz       r3, -0x65D8(r13)
      bl        -0x2A754
      li        r3, 0
      li        r4, 0x7
      li        r5, 0
      bl        -0x301D34
      addi      r3, r30, 0x160C
      lwz       r12, 0x160C(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      addi      r3, r30, 0x137C
      lwz       r12, 0x137C(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      addi      r3, r30, 0x1624
      lwz       r12, 0x1624(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x163C(r30)
      cmpwi     r0, 0
      beq-      .loc_0x25C
      lwz       r3, -0x6514(r13)
      lwz       r3, 0x24(r3)
      addi      r31, r3, 0x190
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x163C(r30)
      lwz       r3, 0x1634(r30)
      cmpwi     r0, 0x2
      stw       r3, 0x18(r1)
      beq-      .loc_0x154
      bge-      .loc_0x1D0
      cmpwi     r0, 0x1
      bge-      .loc_0xDC
      b         .loc_0x1D0

    .loc_0xDC:
      lwz       r4, 0x1644(r30)
      cmplwi    r4, 0
      beq-      .loc_0x11C
      lwz       r3, 0x1640(r30)
      lis       r0, 0x4330
      stw       r0, 0x30(r1)
      lfd       f2, 0x1AC0(r2)
      stw       r3, 0x34(r1)
      lfd       f0, 0x30(r1)
      stw       r4, 0x3C(r1)
      fsubs     f1, f0, f2
      stw       r0, 0x38(r1)
      lfd       f0, 0x38(r1)
      fsubs     f0, f0, f2
      fdivs     f2, f1, f0
      b         .loc_0x120

    .loc_0x11C:
      lfs       f2, 0x1AB8(r2)

    .loc_0x120:
      lbz       r3, 0x1638(r30)
      lis       r0, 0x4330
      stw       r0, 0x40(r1)
      lfd       f1, 0x1AC0(r2)
      stw       r3, 0x44(r1)
      lfd       f0, 0x40(r1)
      fsubs     f0, f0, f1
      fmuls     f0, f0, f2
      fctiwz    f0, f0
      stfd      f0, 0x48(r1)
      lwz       r0, 0x4C(r1)
      stb       r0, 0x1B(r1)
      b         .loc_0x1D0

    .loc_0x154:
      lwz       r4, 0x1644(r30)
      cmplwi    r4, 0
      beq-      .loc_0x194
      lwz       r3, 0x1640(r30)
      lis       r0, 0x4330
      stw       r0, 0x48(r1)
      lfd       f2, 0x1AC0(r2)
      stw       r3, 0x4C(r1)
      lfd       f0, 0x48(r1)
      stw       r4, 0x44(r1)
      fsubs     f1, f0, f2
      stw       r0, 0x40(r1)
      lfd       f0, 0x40(r1)
      fsubs     f0, f0, f2
      fdivs     f1, f1, f0
      b         .loc_0x198

    .loc_0x194:
      lfs       f1, 0x1AB8(r2)

    .loc_0x198:
      lbz       r3, 0x1638(r30)
      lis       r0, 0x4330
      lfs       f0, 0x1ABC(r2)
      stw       r3, 0x3C(r1)
      lfd       f2, 0x1AC0(r2)
      fsubs     f0, f0, f1
      stw       r0, 0x38(r1)
      lfd       f1, 0x38(r1)
      fsubs     f1, f1, f2
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      stb       r0, 0x1B(r1)

    .loc_0x1D0:
      lwz       r0, 0x18(r1)
      mr        r3, r31
      addi      r4, r1, 0x8
      addi      r5, r1, 0xC
      stw       r0, 0x14(r1)
      addi      r6, r1, 0x10
      addi      r7, r1, 0x14
      stw       r0, 0x10(r1)
      stw       r0, 0xC(r1)
      stw       r0, 0x8(r1)
      bl        -0x3B49EC
      bl        0x381A8
      lhz       r30, 0x6(r3)
      bl        0x381A0
      lhz       r4, 0x4(r3)
      lis       r0, 0x4330
      lfs       f3, 0x1AB8(r2)
      mr        r3, r31
      stw       r4, 0x4C(r1)
      addi      r4, r1, 0x1C
      lfd       f2, 0x1AC0(r2)
      stw       r0, 0x48(r1)
      lfd       f0, 0x48(r1)
      stw       r30, 0x44(r1)
      fsubs     f1, f0, f2
      stw       r0, 0x40(r1)
      lfd       f0, 0x40(r1)
      fadds     f1, f3, f1
      stfs      f3, 0x1C(r1)
      fsubs     f0, f0, f2
      stfs      f3, 0x20(r1)
      fadds     f0, f3, f0
      stfs      f1, 0x24(r1)
      stfs      f0, 0x28(r1)
      bl        -0x3B4904

    .loc_0x25C:
      lwz       r0, 0x64(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void ebi::TMainTitleMgr::showInfo(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EB0F4
 * Size:	000070
 */
void ebi::E2DCallBack_CalcAnimation::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x26288
      lis       r3, 0x804D
      lis       r5, 0x804D
      addi      r0, r3, 0x7B0C
      lis       r4, 0x804F
      stw       r0, 0x0(r31)
      li        r0, 0
      lis       r3, 0x804F
      addi      r6, r5, 0x7F2C
      stw       r0, 0x18(r31)
      subi      r5, r4, 0x77D0
      li        r4, 0x1
      subi      r0, r3, 0x77F4
      stw       r6, 0x0(r31)
      mr        r3, r31
      stw       r5, 0x0(r31)
      stb       r4, 0x1C(r31)
      stw       r0, 0x0(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00020C
 */
void ebi::Screen::TTitleMenu::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EB164
 * Size:	000004
 */
void ebi::Screen::TTitleMenu_Object_Icon::__ct(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	803EB168
 * Size:	00000C
 */
void ebi::Screen::ArgClose::getName(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8049
      addi      r3, r3, 0x7900
      blr
    */
}

/*
 * --INFO--
 * Address:	803EB174
 * Size:	000008
 */
void ebi::Screen::ArgOpen::getName(void)
{
    /*
    .loc_0x0:
      addi      r3, r2, 0x1AC8
      blr
    */
}

/*
 * --INFO--
 * Address:	803EB17C
 * Size:	000028
 */
void __sinit_ebiMainTitleMgr_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804F
      stw       r0, -0x6578(r13)
      stfsu     f0, -0x60A0(r3)
      stfs      f0, -0x6574(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
