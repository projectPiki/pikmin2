

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
 * Address:	803A5DB0
 * Size:	00003C
 */
void Game::BlackMan::lHandCallBack((J3DJoint*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0
      stw       r0, 0x14(r1)
      bne-      .loc_0x28
      lwz       r3, -0x6620(r13)
      cmplwi    r3, 0
      beq-      .loc_0x28
      li        r4, 0
      bl        0x40AC

    .loc_0x28:
      lwz       r0, 0x14(r1)
      li        r3, 0x1
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A5DEC
 * Size:	00003C
 */
void Game::BlackMan::rHandCallBack((J3DJoint*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0
      stw       r0, 0x14(r1)
      bne-      .loc_0x28
      lwz       r3, -0x6620(r13)
      cmplwi    r3, 0
      beq-      .loc_0x28
      li        r4, 0x1
      bl        0x4070

    .loc_0x28:
      lwz       r0, 0x14(r1)
      li        r3, 0x1
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A5E28
 * Size:	00003C
 */
void Game::BlackMan::lFootCallBack((J3DJoint*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0
      stw       r0, 0x14(r1)
      bne-      .loc_0x28
      lwz       r3, -0x6620(r13)
      cmplwi    r3, 0
      beq-      .loc_0x28
      li        r4, 0x2
      bl        0x4034

    .loc_0x28:
      lwz       r0, 0x14(r1)
      li        r3, 0x1
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A5E64
 * Size:	00003C
 */
void Game::BlackMan::rFootCallBack((J3DJoint*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0
      stw       r0, 0x14(r1)
      bne-      .loc_0x28
      lwz       r3, -0x6620(r13)
      cmplwi    r3, 0
      beq-      .loc_0x28
      li        r4, 0x3
      bl        0x3FF8

    .loc_0x28:
      lwz       r0, 0x14(r1)
      li        r3, 0x1
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A5EA0
 * Size:	000038
 */
void Game::BlackMan::bodyCallBack((J3DJoint*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0
      stw       r0, 0x14(r1)
      bne-      .loc_0x24
      lwz       r3, -0x6620(r13)
      cmplwi    r3, 0
      beq-      .loc_0x24
      bl        0x4550

    .loc_0x24:
      lwz       r0, 0x14(r1)
      li        r3, 0x1
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A5ED8
 * Size:	0000F0
 */
void Game::BlackMan::Obj::setParameters(void)
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
      bl        -0x2A331C
      lwz       r0, 0x1E0(r31)
      rlwinm.   r0,r0,0,13,13
      beq-      .loc_0x7C
      lwz       r3, -0x6CF8(r13)
      addi      r4, r31, 0x18C
      lwz       r12, 0x4(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x190(r31)
      lwz       r3, 0xC0(r31)
      lfs       f1, 0x190(r31)
      lfs       f0, 0xA50(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x190(r31)
      lwz       r3, 0x364(r31)
      cmplwi    r3, 0
      beq-      .loc_0x7C
      lwz       r12, 0x0(r3)
      addi      r4, r31, 0x18C
      lwz       r12, 0x70(r12)
      mtctr     r12
      bctrl

    .loc_0x7C:
      lwz       r3, 0xC0(r31)
      lfs       f31, 0xA24(r3)
      stfs      f31, 0x1F8(r31)
      fmr       f1, f31
      stfs      f31, 0x168(r31)
      stfs      f31, 0x16C(r31)
      stfs      f31, 0x170(r31)
      lwz       r3, 0x114(r31)
      lwz       r3, 0x0(r3)
      bl        -0x26E16C
      lwz       r3, 0x364(r31)
      cmplwi    r3, 0
      beq-      .loc_0xD4
      stfs      f31, 0x1F8(r3)
      fmr       f1, f31
      stfs      f31, 0x168(r3)
      stfs      f31, 0x16C(r3)
      stfs      f31, 0x170(r3)
      lwz       r3, 0x364(r31)
      lwz       r3, 0x114(r3)
      lwz       r3, 0x0(r3)
      bl        -0x26E19C

    .loc_0xD4:
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
 * Address:	803A5FC8
 * Size:	000020
 */
void birth__Q34Game8BlackMan3ObjFR10Vector3<float> f(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x2A35D4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A5FE8
 * Size:	0006B4
 */
void Game::BlackMan::Obj::onInit((Game::CreatureInitArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      lis       r5, 0x8049
      stw       r0, 0x74(r1)
      stw       r31, 0x6C(r1)
      addi      r31, r5, 0x5670
      stw       r30, 0x68(r1)
      stw       r29, 0x64(r1)
      mr        r29, r3
      stw       r28, 0x60(r1)
      bl        -0x2A45B8
      lwz       r0, 0x1E0(r29)
      rlwinm    r0,r0,0,26,24
      stw       r0, 0x1E0(r29)
      lwz       r0, 0x1E0(r29)
      rlwinm    r0,r0,0,25,23
      stw       r0, 0x1E0(r29)
      lwz       r0, 0x1E0(r29)
      rlwinm    r0,r0,0,24,22
      stw       r0, 0x1E0(r29)
      lwz       r3, 0xC0(r29)
      lbz       r0, 0xA10(r3)
      stw       r0, 0x2E0(r29)
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x58(r3)
      cmplwi    r3, 0
      beq-      .loc_0xCC
      lwz       r12, 0x0(r3)
      lwz       r12, 0x78(r12)
      mtctr     r12
      bctrl
      subis     r0, r3, 0x795F
      cmplwi    r0, 0x3031
      bne-      .loc_0xCC
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0xCC
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x4
      beq-      .loc_0xCC
      lwz       r3, 0x360(r29)
      mr        r4, r29
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      li        r0, 0x2
      stw       r0, 0x2E0(r29)
      b         .loc_0x158

    .loc_0xCC:
      lwz       r3, -0x6E20(r13)
      li        r4, 0x62
      bl        -0x298418
      mr.       r28, r3
      beq-      .loc_0x138
      addi      r3, r1, 0x20
      bl        -0x2774A8
      lfs       f0, 0x18C(r29)
      mr        r3, r28
      addi      r4, r1, 0x20
      stfs      f0, 0x20(r1)
      lfs       f0, 0x190(r29)
      stfs      f0, 0x24(r1)
      lfs       f0, 0x194(r29)
      stfs      f0, 0x28(r1)
      lfs       f0, 0x1FC(r29)
      stfs      f0, 0x2C(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x70(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x364(r29)
      li        r4, 0
      lwz       r3, 0x364(r29)
      bl        -0x26B14C
      lwz       r3, 0x364(r29)
      stw       r29, 0x2BC(r3)

    .loc_0x138:
      lwz       r3, 0x360(r29)
      mr        r4, r29
      li        r5, 0x5
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0x158:
      lwz       r0, 0x358(r29)
      cmplwi    r0, 0
      bne-      .loc_0x178
      addi      r3, r31, 0x18
      addi      r5, r31, 0x28
      li        r4, 0xB2
      crclr     6, 0x6
      bl        -0x37BB1C

    .loc_0x178:
      lwz       r3, 0x358(r29)
      lwz       r4, 0x180(r29)
      lwz       r12, 0x0(r3)
      lwz       r4, 0x44(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      li        r3, -0x1
      li        r0, 0
      stw       r3, 0x2DC(r29)
      lfs       f0, 0x10D8(r2)
      lfs       f1, 0x18C(r29)
      stfs      f1, 0x2F8(r29)
      lfs       f1, 0x190(r29)
      stfs      f1, 0x2FC(r29)
      lfs       f1, 0x194(r29)
      stfs      f1, 0x300(r29)
      lfs       f1, 0x2F8(r29)
      stfs      f1, 0x198(r29)
      lfs       f1, 0x2FC(r29)
      stfs      f1, 0x19C(r29)
      lfs       f1, 0x300(r29)
      stfs      f1, 0x1A0(r29)
      lfs       f1, 0x198(r29)
      stfs      f1, 0x2D0(r29)
      lfs       f1, 0x19C(r29)
      stfs      f1, 0x2D4(r29)
      lfs       f1, 0x1A0(r29)
      stfs      f1, 0x2D8(r29)
      stw       r0, 0x348(r29)
      stb       r0, 0x34C(r29)
      stw       r0, 0x35C(r29)
      stw       r0, 0x2E4(r29)
      stw       r0, 0x2E8(r29)
      stw       r0, 0x334(r29)
      stw       r0, 0x2CC(r29)
      stfs      f0, 0x374(r29)
      stw       r0, -0x6620(r13)
      lwz       r0, 0x174(r29)
      cmplwi    r0, 0
      bne-      .loc_0x230
      addi      r3, r31, 0x18
      addi      r5, r31, 0x28
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x37BBD4

    .loc_0x230:
      lwz       r3, 0x174(r29)
      lwz       r3, 0x8(r3)
      lwz       r30, 0x4(r3)
      cmplwi    r30, 0
      bne-      .loc_0x258
      addi      r3, r31, 0x18
      addi      r5, r31, 0x28
      li        r4, 0xD4
      crclr     6, 0x6
      bl        -0x37BBFC

    .loc_0x258:
      lwz       r3, 0x174(r29)
      addi      r4, r2, 0x10DC
      bl        0x98D6C
      sth       r3, 0x36A(r29)
      addi      r4, r31, 0x34
      lwz       r3, 0x174(r29)
      bl        0x98D5C
      sth       r3, 0x36C(r29)
      addi      r4, r31, 0x40
      lwz       r3, 0x174(r29)
      bl        0x98D4C
      sth       r3, 0x36E(r29)
      addi      r4, r2, 0x10E4
      lwz       r3, 0x174(r29)
      bl        0x98D3C
      sth       r3, 0x370(r29)
      addi      r4, r2, 0x10EC
      lwz       r3, 0x174(r29)
      bl        0x98D2C
      sth       r3, 0x372(r29)
      lwz       r3, 0x364(r29)
      cmplwi    r3, 0
      beq-      .loc_0x428
      lwz       r28, 0x174(r3)
      addi      r4, r2, 0x10F4
      mr        r3, r28
      bl        0x98D0C
      lwz       r12, 0x0(r28)
      rlwinm    r4,r3,0,16,31
      mr        r3, r28
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x2BC(r29)
      lis       r3, 0x803A
      addi      r5, r3, 0x5DB0
      addi      r4, r2, 0x10FC
      lhz       r0, 0x36C(r29)
      lwz       r3, 0x28(r30)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      stw       r5, 0x4(r3)
      lwz       r3, 0x364(r29)
      lwz       r28, 0x174(r3)
      mr        r3, r28
      bl        0x98CC0
      lwz       r12, 0x0(r28)
      rlwinm    r4,r3,0,16,31
      mr        r3, r28
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x2C0(r29)
      lis       r3, 0x803A
      addi      r5, r3, 0x5DEC
      addi      r4, r2, 0x1104
      lhz       r0, 0x36E(r29)
      lwz       r3, 0x28(r30)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      stw       r5, 0x4(r3)
      lwz       r3, 0x364(r29)
      lwz       r28, 0x174(r3)
      mr        r3, r28
      bl        0x98C74
      lwz       r12, 0x0(r28)
      rlwinm    r4,r3,0,16,31
      mr        r3, r28
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x2C4(r29)
      lis       r3, 0x803A
      addi      r5, r3, 0x5E28
      addi      r4, r2, 0x110C
      lhz       r0, 0x370(r29)
      lwz       r3, 0x28(r30)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      stw       r5, 0x4(r3)
      lwz       r3, 0x364(r29)
      lwz       r28, 0x174(r3)
      mr        r3, r28
      bl        0x98C28
      lwz       r12, 0x0(r28)
      rlwinm    r4,r3,0,16,31
      mr        r3, r28
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x2C8(r29)
      lis       r3, 0x803A
      addi      r4, r3, 0x5E64
      lhz       r0, 0x372(r29)
      lwz       r3, 0x28(r30)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      stw       r4, 0x4(r3)
      lwz       r3, 0x174(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x364(r29)
      lwz       r3, 0x174(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lhz       r0, 0x36A(r29)
      lis       r4, 0x803A
      lwz       r3, 0x28(r30)
      addi      r4, r4, 0x5EA0
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      stw       r4, 0x4(r3)

    .loc_0x428:
      lwz       r3, 0x174(r29)
      addi      r4, r2, 0x1114
      bl        0x98B9C
      sth       r3, 0x368(r29)
      lwz       r0, 0x364(r29)
      cmplwi    r0, 0
      beq-      .loc_0x470
      lwz       r3, 0xC0(r29)
      addi      r4, r29, 0x18C
      lfs       f1, 0x190(r29)
      lfs       f0, 0xA50(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x190(r29)
      lwz       r3, 0x364(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x70(r12)
      mtctr     r12
      bctrl

    .loc_0x470:
      lfs       f1, 0x18C(r29)
      li        r0, 0
      lfs       f0, 0x111C(r2)
      addi      r4, r1, 0x8
      stfs      f1, 0x8(r1)
      lwz       r3, -0x6CF8(r13)
      lfs       f1, 0x190(r29)
      stfs      f1, 0xC(r1)
      lfs       f1, 0x194(r29)
      stfs      f1, 0x10(r1)
      stw       r0, 0x14(r1)
      stb       r0, 0x18(r1)
      stfs      f0, 0x1C(r1)
      lwz       r3, 0x8(r3)
      bl        -0x2334CC
      lha       r0, 0x36(r3)
      mr        r3, r29
      sth       r0, 0x344(r29)
      sth       r0, 0x342(r29)
      sth       r0, 0x340(r29)
      lfs       f0, 0x18C(r29)
      stfs      f0, 0x2F8(r29)
      lfs       f0, 0x190(r29)
      stfs      f0, 0x2FC(r29)
      lfs       f0, 0x194(r29)
      stfs      f0, 0x300(r29)
      lfs       f0, 0x2F8(r29)
      stfs      f0, 0x198(r29)
      lfs       f0, 0x2FC(r29)
      stfs      f0, 0x19C(r29)
      lfs       f0, 0x300(r29)
      stfs      f0, 0x1A0(r29)
      lfs       f0, 0x198(r29)
      stfs      f0, 0x2D0(r29)
      lfs       f0, 0x19C(r29)
      stfs      f0, 0x2D4(r29)
      lfs       f0, 0x1A0(r29)
      stfs      f0, 0x2D8(r29)
      bl        0x4C8C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x568
      lwz       r30, 0x28C(r29)
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x548
      addi      r3, r31, 0x4C
      addi      r5, r31, 0x28
      li        r4, 0x45A
      crclr     6, 0x6
      bl        -0x37BEEC

    .loc_0x548:
      cmplwi    r30, 0
      beq-      .loc_0x598
      mr        r3, r30
      li        r4, 0
      bl        0xB94B0
      li        r0, 0x1
      stb       r0, 0xFF(r30)
      b         .loc_0x598

    .loc_0x568:
      lwz       r0, 0x364(r29)
      cmplwi    r0, 0
      beq-      .loc_0x598
      addi      r3, r29, 0x250
      bl        -0x238CD8
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x598
      lwz       r0, -0x6A50(r13)
      cmplwi    r0, 0
      beq-      .loc_0x598
      mr        r3, r29
      bl        -0x187F88

    .loc_0x598:
      li        r0, 0xB5
      li        r3, 0xC0
      stb       r0, 0x384(r29)
      li        r0, 0xAE
      li        r8, 0xFF
      li        r7, 0x20
      stb       r3, 0x385(r29)
      li        r6, 0x16
      li        r5, 0x30
      li        r4, 0x3F
      stb       r0, 0x386(r29)
      li        r3, 0x57
      li        r0, 0
      stb       r8, 0x387(r29)
      stb       r8, 0x388(r29)
      stb       r7, 0x389(r29)
      stb       r6, 0x38A(r29)
      stb       r8, 0x38B(r29)
      stb       r5, 0x38C(r29)
      stb       r4, 0x38D(r29)
      stb       r3, 0x38E(r29)
      stb       r0, 0x38F(r29)
      lbz       r0, 0x384(r29)
      stb       r0, 0x380(r29)
      lbz       r0, 0x385(r29)
      stb       r0, 0x381(r29)
      lbz       r0, 0x386(r29)
      stb       r0, 0x382(r29)
      lbz       r0, 0x387(r29)
      stb       r0, 0x383(r29)
      lwz       r3, 0x174(r29)
      lwz       r3, 0x8(r3)
      lwz       r30, 0x4(r3)
      cmplwi    r30, 0
      bne-      .loc_0x638
      addi      r3, r31, 0x18
      addi      r5, r31, 0x28
      li        r4, 0x126
      crclr     6, 0x6
      bl        -0x37BFDC

    .loc_0x638:
      lwz       r3, 0x64(r30)
      addi      r4, r31, 0x64
      bl        -0x3778A4
      lwz       r4, 0x60(r30)
      rlwinm    r0,r3,2,14,29
      lwzx      r0, r4, r0
      stw       r0, 0x37C(r29)
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0x674
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x4
      bne-      .loc_0x674
      lfs       f0, 0x10D8(r2)
      stfs      f0, 0x33C(r29)

    .loc_0x674:
      lhz       r0, 0x36A(r29)
      lwz       r3, 0x174(r29)
      mulli     r0, r0, 0x3C
      lwz       r3, 0x10(r3)
      add       r3, r3, r0
      bl        0x83230
      lwz       r4, 0x39C(r29)
      stw       r3, 0x10(r4)
      lwz       r0, 0x74(r1)
      lwz       r31, 0x6C(r1)
      lwz       r30, 0x68(r1)
      lwz       r29, 0x64(r1)
      lwz       r28, 0x60(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	803A669C
 * Size:	000560
 */
void Game::BlackMan::Obj::__ct(void)
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
      addi      r0, r31, 0x3AC
      lis       r3, 0x804B
      stw       r0, 0x17C(r31)
      subi      r3, r3, 0x5988
      li        r0, 0
      stw       r3, 0x3AC(r31)
      stw       r0, 0x3B0(r31)
      stw       r0, 0x3B4(r31)

    .loc_0x40:
      mr        r3, r31
      li        r4, 0
      bl        -0x2A5344
      lis       r4, 0x804E
      addi      r9, r31, 0x3AC
      addi      r5, r4, 0x5EA8
      lis       r3, 0x8012
      stw       r5, 0x0(r31)
      addi      r0, r5, 0x1B0
      addi      r10, r5, 0x2FC
      subi      r4, r3, 0xCB8
      stw       r0, 0x178(r31)
      li        r8, -0x1
      li        r0, 0
      addi      r3, r31, 0x310
      lwz       r7, 0x17C(r31)
      li        r5, 0
      li        r6, 0xC
      stw       r10, 0x0(r7)
      li        r7, 0x2
      lwz       r10, 0x17C(r31)
      sub       r9, r9, r10
      stw       r9, 0xC(r10)
      stw       r8, 0x2DC(r31)
      stw       r0, 0x2E4(r31)
      stw       r0, 0x2E8(r31)
      stw       r0, 0x2EC(r31)
      stw       r0, 0x2F0(r31)
      stw       r0, 0x2F4(r31)
      bl        -0x2E4F14
      li        r4, 0
      lfs       f0, 0x111C(r2)
      stw       r4, 0x334(r31)
      li        r0, -0x1
      addi      r3, r31, 0x350
      stb       r4, 0x338(r31)
      stfs      f0, 0x33C(r31)
      sth       r0, 0x340(r31)
      sth       r0, 0x342(r31)
      sth       r0, 0x344(r31)
      stw       r4, 0x348(r31)
      stb       r4, 0x34C(r31)
      bl        -0x27C430
      li        r0, 0
      lfs       f0, 0x1120(r2)
      stw       r0, 0x358(r31)
      li        r3, 0x2C
      stw       r0, 0x35C(r31)
      stw       r0, 0x360(r31)
      stw       r0, 0x364(r31)
      stfs      f0, 0x378(r31)
      stw       r0, 0x37C(r31)
      stw       r0, 0x390(r31)
      stw       r0, 0x394(r31)
      stw       r0, 0x398(r31)
      stw       r0, 0x39C(r31)
      stb       r0, 0x3A8(r31)
      stb       r0, 0x3A9(r31)
      stb       r0, 0x3AA(r31)
      stb       r0, 0x3AB(r31)
      bl        -0x382928
      mr.       r30, r3
      beq-      .loc_0x17C
      bl        -0x27EE64
      lis       r3, 0x804E
      lis       r4, 0x804B
      addi      r0, r3, 0x5BE8
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

    .loc_0x17C:
      stw       r30, 0x184(r31)
      li        r3, 0xC
      bl        -0x38297C
      mr.       r30, r3
      beq-      .loc_0x1A0
      bl        0x8DB28
      lis       r3, 0x804F
      subi      r0, r3, 0x3B74
      stw       r0, 0x0(r30)

    .loc_0x1A0:
      stw       r30, 0x358(r31)
      li        r3, 0x1C
      bl        -0x3829A0
      mr.       r4, r3
      beq-      .loc_0x1D4
      lis       r5, 0x804B
      lis       r3, 0x804E
      subi      r0, r5, 0x680
      li        r5, -0x1
      stw       r0, 0x0(r4)
      addi      r0, r3, 0x5BC4
      stw       r5, 0x18(r4)
      stw       r0, 0x0(r4)

    .loc_0x1D4:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      lwz       r12, 0x2F8(r12)
      mtctr     r12
      bctrl
      li        r3, 0x18
      bl        -0x3829E4
      cmplwi    r3, 0
      beq-      .loc_0x278
      lis       r4, 0x804B
      lis       r5, 0x804A
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r5, 0x1D84
      addi      r5, r4, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r9, r4, 0x68F4
      lis       r4, 0x804E
      addi      r0, r5, 0x14
      stw       r5, 0x0(r3)
      addi      r4, r4, 0x5E5C
      li        r11, 0
      li        r10, 0x2B2
      stw       r0, 0x4(r3)
      addi      r8, r9, 0x14
      addi      r7, r31, 0x304
      addi      r6, r31, 0x1FC
      stw       r11, 0x8(r3)
      li        r5, 0x299
      addi      r0, r4, 0x14
      sth       r10, 0xC(r3)
      stb       r11, 0xE(r3)
      stw       r9, 0x0(r3)
      stw       r8, 0x4(r3)
      stw       r7, 0x10(r3)
      stw       r6, 0x14(r3)
      sth       r5, 0xC(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)

    .loc_0x278:
      stw       r3, 0x390(r31)
      li        r3, 0x18
      bl        -0x382A78
      cmplwi    r3, 0
      beq-      .loc_0x30C
      lis       r4, 0x804B
      lis       r5, 0x804A
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r5, 0x1D84
      addi      r5, r4, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r9, r4, 0x68F4
      lis       r4, 0x804E
      addi      r0, r5, 0x14
      stw       r5, 0x0(r3)
      addi      r4, r4, 0x5E10
      li        r11, 0
      li        r10, 0x2B2
      stw       r0, 0x4(r3)
      addi      r8, r9, 0x14
      addi      r7, r31, 0x304
      addi      r6, r31, 0x1FC
      stw       r11, 0x8(r3)
      li        r5, 0x29C
      addi      r0, r4, 0x14
      sth       r10, 0xC(r3)
      stb       r11, 0xE(r3)
      stw       r9, 0x0(r3)
      stw       r8, 0x4(r3)
      stw       r7, 0x10(r3)
      stw       r6, 0x14(r3)
      sth       r5, 0xC(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)

    .loc_0x30C:
      stw       r3, 0x394(r31)
      li        r3, 0x14
      bl        -0x382B0C
      cmplwi    r3, 0
      beq-      .loc_0x394
      lis       r4, 0x804B
      lis       r5, 0x804A
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r5, 0x1D84
      addi      r5, r4, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r7, r4, 0x68A8
      lis       r4, 0x804E
      addi      r0, r5, 0x14
      stw       r5, 0x0(r3)
      addi      r4, r4, 0x5DC4
      li        r9, 0
      li        r8, 0x2B2
      stw       r0, 0x4(r3)
      addi      r6, r7, 0x14
      li        r5, 0x297
      addi      r0, r4, 0x14
      stw       r9, 0x8(r3)
      sth       r8, 0xC(r3)
      stb       r9, 0xE(r3)
      stw       r7, 0x0(r3)
      stw       r6, 0x4(r3)
      stw       r9, 0x10(r3)
      sth       r5, 0xC(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)

    .loc_0x394:
      stw       r3, 0x39C(r31)
      li        r3, 0x18
      bl        -0x382B94
      cmplwi    r3, 0
      beq-      .loc_0x428
      lis       r4, 0x804B
      lis       r5, 0x804A
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r5, 0x1D84
      addi      r5, r4, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r9, r4, 0x68F4
      lis       r4, 0x804E
      addi      r0, r5, 0x14
      stw       r5, 0x0(r3)
      addi      r4, r4, 0x5D78
      li        r11, 0
      li        r10, 0x2B2
      stw       r0, 0x4(r3)
      addi      r8, r9, 0x14
      addi      r7, r31, 0x328
      addi      r6, r31, 0x1FC
      stw       r11, 0x8(r3)
      li        r5, 0x2A1
      addi      r0, r4, 0x14
      sth       r10, 0xC(r3)
      stb       r11, 0xE(r3)
      stw       r9, 0x0(r3)
      stw       r8, 0x4(r3)
      stw       r7, 0x10(r3)
      stw       r6, 0x14(r3)
      sth       r5, 0xC(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)

    .loc_0x428:
      stw       r3, 0x398(r31)
      li        r3, 0x14
      bl        -0x382C28
      cmplwi    r3, 0
      beq-      .loc_0x4B4
      lis       r4, 0x804B
      lis       r5, 0x804A
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r5, 0x1D84
      addi      r5, r4, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r8, r4, 0x6940
      lis       r4, 0x804E
      addi      r0, r5, 0x14
      stw       r5, 0x0(r3)
      addi      r4, r4, 0x5D2C
      li        r10, 0
      li        r9, 0x2B2
      stw       r0, 0x4(r3)
      addi      r7, r8, 0x14
      addi      r6, r31, 0x310
      li        r5, 0x2AE
      stw       r10, 0x8(r3)
      addi      r0, r4, 0x14
      sth       r9, 0xC(r3)
      stb       r10, 0xE(r3)
      stw       r8, 0x0(r3)
      stw       r7, 0x4(r3)
      stw       r6, 0x10(r3)
      sth       r5, 0xC(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)

    .loc_0x4B4:
      stw       r3, 0x3A0(r31)
      li        r3, 0x14
      bl        -0x382CB4
      cmplwi    r3, 0
      beq-      .loc_0x540
      lis       r4, 0x804B
      lis       r5, 0x804A
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r5, 0x1D84
      addi      r5, r4, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r8, r4, 0x6940
      lis       r4, 0x804E
      addi      r0, r5, 0x14
      stw       r5, 0x0(r3)
      addi      r4, r4, 0x5D2C
      li        r10, 0
      li        r9, 0x2B2
      stw       r0, 0x4(r3)
      addi      r7, r8, 0x14
      addi      r6, r31, 0x31C
      li        r5, 0x2AE
      stw       r10, 0x8(r3)
      addi      r0, r4, 0x14
      sth       r9, 0xC(r3)
      stb       r10, 0xE(r3)
      stw       r8, 0x0(r3)
      stw       r7, 0x4(r3)
      stw       r6, 0x10(r3)
      sth       r5, 0xC(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)

    .loc_0x540:
      stw       r3, 0x3A4(r31)
      mr        r3, r31
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
 * Address:	803A6BFC
 * Size:	00004C
 */
void Game::BlackMan::Obj::setFSM((Game::BlackMan::FSM*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r4, 0x360(r3)
      mr        r4, r31
      lwz       r3, 0x360(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stw       r0, 0x2B4(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A6C48
 * Size:	0006C4
 */
void Game::BlackMan::Obj::doUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x110(r1)
      mflr      r0
      stw       r0, 0x114(r1)
      stfd      f31, 0x100(r1)
      psq_st    f31,0x108(r1),0,0
      stfd      f30, 0xF0(r1)
      psq_st    f30,0xF8(r1),0,0
      stfd      f29, 0xE0(r1)
      psq_st    f29,0xE8(r1),0,0
      stfd      f28, 0xD0(r1)
      psq_st    f28,0xD8(r1),0,0
      stw       r31, 0xCC(r1)
      stw       r30, 0xC8(r1)
      stw       r29, 0xC4(r1)
      lis       r4, 0x8049
      mr        r30, r3
      addi      r31, r4, 0x5670
      bl        -0x29F898
      mr        r3, r30
      bl        -0x29F95C
      mr        r3, r30
      bl        -0x29F99C
      lwz       r3, 0x360(r30)
      mr        r4, r30
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x378(r30)
      lfs       f1, 0x1120(r2)
      fcmpo     cr0, f2, f1
      bge-      .loc_0x200
      lwz       r3, 0xC0(r30)
      lfs       f0, 0xA3C(r3)
      fadds     f0, f2, f0
      stfs      f0, 0x378(r30)
      lfs       f0, 0x378(r30)
      fcmpo     cr0, f0, f1
      ble-      .loc_0xA0
      stfs      f1, 0x378(r30)

    .loc_0xA0:
      lfs       f1, 0x1120(r2)
      lis       r3, 0x6B6F
      lfs       f0, 0x378(r30)
      addi      r4, r3, 0x7369
      lwz       r3, 0x114(r30)
      fsubs     f31, f1, f0
      bl        -0x270EBC
      lis       r4, 0x7374
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0x6C724
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xE4
      mr        r3, r30
      bl        -0x29F92C
      cmpwi     r3, 0x1
      bne-      .loc_0x104

    .loc_0xE4:
      lfs       f1, 0x1124(r2)
      lfs       f0, 0x378(r30)
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x60(r1)
      lwz       r0, 0x64(r1)
      stb       r0, 0x38F(r30)
      b         .loc_0x200

    .loc_0x104:
      lbz       r0, 0x38F(r30)
      lis       r3, 0x4330
      stw       r3, 0x60(r1)
      lfd       f3, 0x1130(r2)
      stw       r0, 0x64(r1)
      lfd       f0, 0x60(r1)
      stw       r3, 0x78(r1)
      fsubs     f0, f0, f3
      stw       r3, 0x70(r1)
      fmuls     f0, f0, f31
      stw       r3, 0x90(r1)
      stw       r3, 0x88(r1)
      fctiwz    f0, f0
      stw       r3, 0xA8(r1)
      stfd      f0, 0x68(r1)
      lwz       r0, 0x6C(r1)
      stw       r3, 0xA0(r1)
      stb       r0, 0x38F(r30)
      lbz       r0, 0x384(r30)
      lbz       r3, 0x380(r30)
      stw       r0, 0x7C(r1)
      lfs       f0, 0x378(r30)
      lfd       f1, 0x78(r1)
      stw       r3, 0x74(r1)
      fsubs     f1, f1, f3
      lfd       f2, 0x70(r1)
      fsubs     f2, f2, f3
      fmuls     f0, f1, f0
      fmadds    f0, f2, f31, f0
      fctiwz    f0, f0
      stfd      f0, 0x80(r1)
      lwz       r0, 0x84(r1)
      stb       r0, 0x380(r30)
      lbz       r0, 0x385(r30)
      lbz       r3, 0x381(r30)
      stw       r0, 0x94(r1)
      lfs       f0, 0x378(r30)
      lfd       f1, 0x90(r1)
      stw       r3, 0x8C(r1)
      fsubs     f1, f1, f3
      lfd       f2, 0x88(r1)
      fsubs     f2, f2, f3
      fmuls     f0, f1, f0
      fmadds    f0, f2, f31, f0
      fctiwz    f0, f0
      stfd      f0, 0x98(r1)
      lwz       r0, 0x9C(r1)
      stb       r0, 0x381(r30)
      lbz       r0, 0x386(r30)
      lbz       r3, 0x382(r30)
      stw       r0, 0xAC(r1)
      lfs       f0, 0x378(r30)
      lfd       f1, 0xA8(r1)
      stw       r3, 0xA4(r1)
      fsubs     f1, f1, f3
      lfd       f2, 0xA0(r1)
      fsubs     f2, f2, f3
      fmuls     f0, f1, f0
      fmadds    f0, f2, f31, f0
      fctiwz    f0, f0
      stfd      f0, 0xB0(r1)
      lwz       r0, 0xB4(r1)
      stb       r0, 0x382(r30)

    .loc_0x200:
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x33C(r30)
      lfs       f0, 0x54(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0x33C(r30)
      lwz       r0, 0x1E0(r30)
      rlwinm.   r0,r0,0,13,13
      beq-      .loc_0x65C
      mr        r3, r30
      bl        -0x29FA78
      cmpwi     r3, 0x5
      bne-      .loc_0x65C
      lwz       r3, 0xC0(r30)
      lwz       r0, 0x364(r30)
      lfs       f0, 0xA4C(r3)
      cmplwi    r0, 0
      fneg      f1, f0
      beq-      .loc_0x254
      lfs       f0, 0x33C(r30)
      fcmpo     cr0, f0, f1
      bge-      .loc_0x290

    .loc_0x254:
      mr        r3, r30
      bl        -0x29F70C
      lwz       r3, 0x174(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x28C(r30)
      li        r4, 0x597B
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      b         .loc_0x3C4

    .loc_0x290:
      lbz       r0, 0x3A9(r30)
      lfs       f28, 0xA58(r3)
      cmplwi    r0, 0
      bne-      .loc_0x3C4
      fcmpo     cr0, f0, f28
      bge-      .loc_0x3C4
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0x2D0
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x4
      bne-      .loc_0x2D0
      li        r0, 0x1
      stb       r0, 0x3A9(r30)
      lwz       r3, 0x364(r30)
      stb       r0, 0x2D2(r3)

    .loc_0x2D0:
      lwz       r3, -0x6D20(r13)
      bl        -0x24C2FC
      lbz       r0, 0x3A9(r30)
      mr        r29, r3
      cmplwi    r0, 0
      bne-      .loc_0x3B4
      cmplwi    r29, 0
      beq-      .loc_0x3B4
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x3B4
      mr        r4, r29
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r29)
      lfs       f29, 0x194(r30)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x18C(r30)
      mtctr     r12
      bctrl
      mr        r4, r29
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r29)
      lfs       f31, 0x1C(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      fsubs     f0, f31, f29
      lfs       f1, 0x20(r1)
      mr        r3, r30
      fsubs     f1, f1, f30
      fmuls     f0, f0, f0
      fmadds    f29, f1, f1, f0
      bl        0x41D8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x388
      lwz       r3, 0xC0(r30)
      lfs       f0, 0xA54(r3)
      fmuls     f0, f0, f0
      fcmpo     cr0, f29, f0
      bge-      .loc_0x39C
      li        r0, 0x1
      stb       r0, 0x3A9(r30)
      b         .loc_0x39C

    .loc_0x388:
      lfs       f0, 0x1128(r2)
      fcmpo     cr0, f29, f0
      ble-      .loc_0x39C
      li        r0, 0x1
      stb       r0, 0x3A9(r30)

    .loc_0x39C:
      lbz       r0, 0x3A9(r30)
      cmplwi    r0, 0
      beq-      .loc_0x3B4
      lwz       r3, 0x364(r30)
      li        r0, 0x1
      stb       r0, 0x2D2(r3)

    .loc_0x3B4:
      lbz       r0, 0x3A9(r30)
      cmplwi    r0, 0
      bne-      .loc_0x3C4
      stfs      f28, 0x33C(r30)

    .loc_0x3C4:
      lwz       r3, 0x364(r30)
      cmplwi    r3, 0
      beq-      .loc_0x65C
      lwz       r0, 0x1E0(r3)
      rlwinm.   r0,r0,0,13,13
      beq-      .loc_0x65C
      lfs       f1, 0x33C(r30)
      lfs       f0, 0x10D8(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x65C
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0x610
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x4
      beq-      .loc_0x610
      lwz       r3, 0x58(r3)
      cmplwi    r3, 0
      beq-      .loc_0x610
      lwz       r12, 0x0(r3)
      lwz       r12, 0x78(r12)
      mtctr     r12
      bctrl
      subis     r0, r3, 0x795F
      cmplwi    r0, 0x3034
      bne-      .loc_0x610
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x44C
      addi      r3, r31, 0x70
      addi      r5, r31, 0x28
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x37CA50

    .loc_0x44C:
      lwz       r29, -0x6780(r13)
      cmplwi    r29, 0
      bne-      .loc_0x46C
      addi      r3, r31, 0x70
      addi      r5, r31, 0x28
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x37CA70

    .loc_0x46C:
      lwz       r0, 0x4(r29)
      cmplwi    r0, 0
      bne-      .loc_0x48C
      addi      r3, r31, 0x7C
      addi      r5, r31, 0x28
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x37CA90

    .loc_0x48C:
      lwz       r3, 0x4(r29)
      lwz       r29, 0x4(r3)
      cmplwi    r29, 0
      bne-      .loc_0x4B0
      addi      r3, r31, 0x70
      addi      r5, r31, 0x28
      li        r4, 0x1E5
      crclr     6, 0x6
      bl        -0x37CAB4

    .loc_0x4B0:
      addi      r3, r29, 0x10
      li        r4, 0
      bl        -0x73264
      mr.       r29, r3
      bne-      .loc_0x4D8
      addi      r3, r31, 0x70
      addi      r5, r31, 0x28
      li        r4, 0x1E7
      crclr     6, 0x6
      bl        -0x37CADC

    .loc_0x4D8:
      cmplwi    r29, 0
      bne-      .loc_0x4F4
      addi      r3, r31, 0x18
      addi      r5, r31, 0x28
      li        r4, 0x1E9
      crclr     6, 0x6
      bl        -0x37CAF8

    .loc_0x4F4:
      mr        r3, r29
      li        r4, 0x5
      lwz       r12, 0x10(r29)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      bl        0x4024
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x610
      lwz       r3, -0x6B70(r13)
      li        r4, 0x32
      bl        -0x1BFD8C
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x610
      lwz       r0, -0x64AC(r13)
      cmplwi    r0, 0
      beq-      .loc_0x610
      lfs       f0, 0x10D8(r2)
      li        r0, 0
      addi      r5, r31, 0x88
      stw       r0, 0x30(r1)
      mr        r4, r30
      addi      r3, r1, 0x8
      stw       r5, 0x2C(r1)
      stw       r0, 0x38(r1)
      stfs      f0, 0x44(r1)
      stfs      f0, 0x48(r1)
      stfs      f0, 0x4C(r1)
      stfs      f0, 0x50(r1)
      stw       r0, 0x54(r1)
      stw       r0, 0x3C(r1)
      stw       r0, 0x34(r1)
      stw       r0, 0x58(r1)
      stw       r0, 0x40(r1)
      stw       r0, 0x5C(r1)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6CF8(r13)
      addi      r4, r30, 0x18C
      lfs       f29, 0x8(r1)
      lwz       r12, 0x4(r3)
      lfs       f30, 0x10(r1)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      stfs      f29, 0x44(r1)
      mr        r3, r30
      stfs      f1, 0x48(r1)
      stfs      f30, 0x4C(r1)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x50(r1)
      addi      r4, r1, 0x2C
      lwz       r3, -0x64AC(r13)
      stw       r30, 0x194(r3)
      lwz       r3, -0x64AC(r13)
      bl        0x857A0
      lwz       r3, 0x364(r30)
      li        r4, 0
      bl        -0x26B7EC
      lwz       r3, -0x6B70(r13)
      li        r4, 0x32
      bl        -0x1BFEA4
      li        r0, 0x1
      stb       r0, 0x3AB(r30)
      stb       r0, 0x3AA(r30)

    .loc_0x610:
      lbz       r0, 0x3AB(r30)
      cmplwi    r0, 0
      bne-      .loc_0x63C
      lwz       r3, 0x364(r30)
      li        r4, 0x597B
      li        r5, 0
      lwz       r3, 0x28C(r3)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl

    .loc_0x63C:
      lwz       r3, 0x364(r30)
      bl        -0x29FAF4
      lwz       r3, 0x364(r30)
      lwz       r3, 0x174(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl

    .loc_0x65C:
      lbz       r0, 0x3A9(r30)
      cmplwi    r0, 0
      beq-      .loc_0x688
      lfs       f1, 0x33C(r30)
      lfs       f0, 0x112C(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x688
      lwz       r3, 0x364(r30)
      cmplwi    r3, 0
      beq-      .loc_0x688
      bl        0x7460

    .loc_0x688:
      psq_l     f31,0x108(r1),0,0
      lfd       f31, 0x100(r1)
      psq_l     f30,0xF8(r1),0,0
      lfd       f30, 0xF0(r1)
      psq_l     f29,0xE8(r1),0,0
      lfd       f29, 0xE0(r1)
      psq_l     f28,0xD8(r1),0,0
      lfd       f28, 0xD0(r1)
      lwz       r31, 0xCC(r1)
      lwz       r30, 0xC8(r1)
      lwz       r0, 0x114(r1)
      lwz       r29, 0xC4(r1)
      mtlr      r0
      addi      r1, r1, 0x110
      blr
    */
}

/*
 * --INFO--
 * Address:	803A730C
 * Size:	000004
 */
void Game::BlackMan::Obj::doDirectDraw((Graphics&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	803A7310
 * Size:	000020
 */
void Game::BlackMan::Obj::doDebugDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x2A14B0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A7330
 * Size:	000174
 */
void Game::BlackMan::Obj::doSimulation((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stfd      f31, 0x40(r1)
      psq_st    f31,0x48(r1),0,0
      stfd      f30, 0x30(r1)
      psq_st    f30,0x38(r1),0,0
      stfd      f29, 0x20(r1)
      psq_st    f29,0x28(r1),0,0
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r3
      lwz       r3, 0x364(r3)
      cmplwi    r3, 0
      beq-      .loc_0x54
      lfs       f0, 0x18C(r30)
      stfs      f0, 0x2E0(r3)
      lfs       f0, 0x190(r30)
      stfs      f0, 0x2E4(r3)
      lfs       f0, 0x194(r30)
      stfs      f0, 0x2E8(r3)

    .loc_0x54:
      lwz       r3, 0x2E8(r30)
      subi      r0, r3, 0x1
      stw       r0, 0x2E8(r30)
      lwz       r0, 0x2E8(r30)
      cmpwi     r0, 0
      bge-      .loc_0x74
      li        r0, 0
      stw       r0, 0x2E8(r30)

    .loc_0x74:
      mr        r3, r30
      bl        -0x2A2950
      mr        r3, r30
      bl        -0x29FFBC
      lwz       r4, 0x364(r30)
      mr        r31, r3
      cmplwi    r4, 0
      beq-      .loc_0x144
      lwz       r12, 0x0(r4)
      addi      r3, r1, 0x8
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      cmpwi     r31, 0x5
      lfs       f31, 0x8(r1)
      lfs       f30, 0xC(r1)
      lfs       f29, 0x10(r1)
      bne-      .loc_0xE4
      mr        r3, r30
      bl        -0x2A00F0
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xE4
      lfs       f0, 0x1138(r2)
      fadds     f1, f0, f31
      fadds     f0, f0, f29
      stfs      f1, 0x18C(r30)
      stfs      f0, 0x194(r30)
      b         .loc_0xF0

    .loc_0xE4:
      stfs      f31, 0x18C(r30)
      stfs      f30, 0x190(r30)
      stfs      f29, 0x194(r30)

    .loc_0xF0:
      cmpwi     r31, 0x3
      beq-      .loc_0x144
      cmpwi     r31, 0x7
      beq-      .loc_0x144
      cmpwi     r31, 0x6
      beq-      .loc_0x144
      cmpwi     r31, 0x5
      beq-      .loc_0x144
      lwz       r3, 0x364(r30)
      addi      r4, r30, 0x1C8
      lwz       r12, 0x0(r3)
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x364(r30)
      lfs       f0, 0x1D4(r30)
      stfs      f0, 0x1D4(r3)
      lfs       f0, 0x1D8(r30)
      stfs      f0, 0x1D8(r3)
      lfs       f0, 0x1DC(r30)
      stfs      f0, 0x1DC(r3)

    .loc_0x144:
      psq_l     f31,0x48(r1),0,0
      lfd       f31, 0x40(r1)
      psq_l     f30,0x38(r1),0,0
      lfd       f30, 0x30(r1)
      psq_l     f29,0x28(r1),0,0
      lfd       f29, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r0, 0x54(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	803A74A4
 * Size:	000238
 */
void Game::BlackMan::Obj::doAnimationCullingOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      li        r0, 0xFF
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      stb       r0, 0x8(r1)
      stb       r0, 0x9(r1)
      stb       r0, 0xA(r1)
      stb       r0, 0xB(r1)
      lwz       r0, 0x2F0(r3)
      cmpwi     r0, 0
      beq-      .loc_0x5C
      lwz       r0, 0x364(r31)
      cmplwi    r0, 0
      beq-      .loc_0x5C
      lbz       r0, 0x380(r31)
      stb       r0, 0x8(r1)
      lbz       r0, 0x381(r31)
      stb       r0, 0x9(r1)
      lbz       r0, 0x382(r31)
      stb       r0, 0xA(r1)

    .loc_0x5C:
      lwz       r3, 0x390(r31)
      addi      r4, r1, 0x8
      bl        0x4411C
      lwz       r3, 0x394(r31)
      addi      r4, r1, 0x8
      bl        0x44140
      lwz       r3, 0x39C(r31)
      addi      r4, r1, 0x8
      bl        0x44164
      lhz       r0, 0x36A(r31)
      lwz       r3, 0x174(r31)
      mulli     r0, r0, 0x3C
      lwz       r3, 0x10(r3)
      add       r3, r3, r0
      bl        0x82368
      lfs       f2, 0x2C(r3)
      lfs       f1, 0x1C(r3)
      lfs       f0, 0xC(r3)
      stfs      f0, 0x304(r31)
      stfs      f1, 0x308(r31)
      stfs      f2, 0x30C(r31)
      lhz       r0, 0x36C(r31)
      lwz       r3, 0x174(r31)
      mulli     r0, r0, 0x3C
      lwz       r3, 0x10(r3)
      add       r3, r3, r0
      bl        0x82338
      lfs       f2, 0x2C(r3)
      lfs       f1, 0x1C(r3)
      lfs       f0, 0xC(r3)
      stfs      f0, 0x310(r31)
      stfs      f1, 0x314(r31)
      stfs      f2, 0x318(r31)
      lhz       r0, 0x36E(r31)
      lwz       r3, 0x174(r31)
      mulli     r0, r0, 0x3C
      lwz       r3, 0x10(r3)
      add       r3, r3, r0
      bl        0x82308
      lfs       f2, 0x2C(r3)
      lfs       f1, 0x1C(r3)
      lfs       f0, 0xC(r3)
      stfs      f0, 0x31C(r31)
      stfs      f1, 0x320(r31)
      stfs      f2, 0x324(r31)
      lwz       r0, 0x364(r31)
      cmplwi    r0, 0
      beq-      .loc_0x15C
      mr        r3, r31
      bl        -0x2A01D0
      cmpwi     r3, 0x5
      beq-      .loc_0x140
      lwz       r3, 0xC0(r31)
      lbz       r0, 0xA14(r3)
      cmplwi    r0, 0
      beq-      .loc_0x140
      stw       r31, -0x6620(r13)

    .loc_0x140:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xD0(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x364(r31)
      stb       r3, 0x2D1(r4)

    .loc_0x15C:
      mr        r3, r31
      bl        -0x2A4584
      lwz       r3, -0x6C18(r13)
      li        r0, 0
      stw       r0, -0x6620(r13)
      cmplwi    r3, 0
      beq-      .loc_0x184
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x4
      beq-      .loc_0x220

    .loc_0x184:
      lwz       r30, 0x28C(r31)
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x1C0
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x56BC
      li        r4, 0x45A
      addi      r5, r5, 0x5698
      crclr     6, 0x6
      bl        -0x37D020

    .loc_0x1C0:
      cmplwi    r30, 0
      beq-      .loc_0x220
      lwz       r0, 0xF0(r31)
      cmplwi    r0, 0
      bne-      .loc_0x1EC
      lwz       r3, 0x364(r31)
      cmplwi    r3, 0
      beq-      .loc_0x208
      lwz       r0, 0xF0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x208

    .loc_0x1EC:
      mr        r3, r30
      li        r4, 0x1
      lwz       r12, 0x28(r30)
      lwz       r12, 0xD8(r12)
      mtctr     r12
      bctrl
      b         .loc_0x220

    .loc_0x208:
      mr        r3, r30
      li        r4, 0x1
      lwz       r12, 0x28(r30)
      lwz       r12, 0xD8(r12)
      mtctr     r12
      bctrl

    .loc_0x220:
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
 * Address:	803A76DC
 * Size:	00003C
 */
void Game::BlackMan::Obj::onKill((Game::CreatureKillArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x2A5808
      mr        r3, r31
      bl        0x2744
      mr        r3, r31
      bl        0x3A2C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A7718
 * Size:	0000DC
 */
void Game::BlackMan::Obj::doStartStoneState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x2A4838
      mr        r3, r31
      bl        -0x2A0340
      cmpwi     r3, 0x5
      beq-      .loc_0x44
      lfs       f0, 0x10D8(r2)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      stfs      f0, 0x1C8(r31)
      stfs      f0, 0x1CC(r31)
      stfs      f0, 0x1D0(r31)

    .loc_0x44:
      lwz       r3, 0x364(r31)
      cmplwi    r3, 0
      beq-      .loc_0x58
      lfs       f0, 0x10D8(r2)
      stfs      f0, 0x30C(r3)

    .loc_0x58:
      lis       r4, 0x6B6F
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x7369
      bl        -0x271938
      lis       r4, 0x7374
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0x6BC78
      lis       r4, 0x6D75
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x6E65
      bl        -0x271958
      lis       r4, 0x7374
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0x6BC58
      lis       r4, 0x6865
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x6164
      bl        -0x271978
      lis       r4, 0x7374
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0x6BC38
      mr        r3, r31
      bl        0x38B0
      mr        r3, r31
      bl        0x3950
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A77F4
 * Size:	0000BC
 */
void Game::BlackMan::Obj::doFinishStoneState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x2A4900
      mr        r3, r31
      bl        -0x2A041C
      cmpwi     r3, 0x2
      beq-      .loc_0x98
      mr        r3, r31
      bl        -0x2A042C
      cmpwi     r3, 0x3
      beq-      .loc_0x98
      lis       r4, 0x6B6F
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x7369
      bl        -0x2719F4
      lis       r4, 0x5F5F
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0x6BBBC
      lis       r4, 0x6D75
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x6E65
      bl        -0x271A14
      lis       r4, 0x5F5F
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0x6BB9C
      lis       r4, 0x6865
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x6164
      bl        -0x271A34
      lis       r4, 0x5F5F
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0x6BB7C

    .loc_0x98:
      mr        r3, r31
      bl        0x327C
      mr        r3, r31
      bl        0x37EC
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A78B0
 * Size:	000058
 */
void Game::BlackMan::Obj::isUnderground(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x2A04D0
      subi      r0, r3, 0x2
      cmplwi    r0, 0x1
      ble-      .loc_0x38
      cmpwi     r3, 0x8
      beq-      .loc_0x38
      lwz       r0, 0x1E0(r31)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0x40

    .loc_0x38:
      li        r3, 0
      b         .loc_0x44

    .loc_0x40:
      li        r3, 0x1

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
 * Address:	803A7908
 * Size:	0000A4
 */
void Game::BlackMan::Obj::doGetLifeGaugeParam((Game::LifeGaugeParam&))
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
      bl        -0x2A1A34
      lwz       r0, 0x364(r30)
      cmplwi    r0, 0
      beq-      .loc_0x38
      lwz       r0, 0x2E0(r30)
      cmpwi     r0, 0x2
      bne-      .loc_0x40

    .loc_0x38:
      li        r0, 0
      b         .loc_0x44

    .loc_0x40:
      li        r0, 0x1

    .loc_0x44:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x8C
      lwz       r3, 0x174(r30)
      lhz       r0, 0x368(r30)
      lwz       r4, 0x8(r3)
      lwz       r3, 0xC0(r30)
      mulli     r0, r0, 0x30
      lwz       r4, 0x84(r4)
      lfs       f1, 0x190(r30)
      lwz       r4, 0xC(r4)
      lfs       f0, 0x12C(r3)
      add       r3, r4, r0
      lfs       f2, 0x2C(r3)
      fadds     f1, f1, f0
      lfs       f0, 0xC(r3)
      stfs      f0, 0x0(r31)
      stfs      f1, 0x4(r31)
      stfs      f2, 0x8(r31)

    .loc_0x8C:
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
 * Address:	803A79AC
 * Size:	0001B8
 */
void Game::BlackMan::Obj::collisionCallback((Game::CollEvent&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      stw       r29, 0x34(r1)
      mr        r29, r4
      stw       r28, 0x30(r1)
      mr        r28, r3
      lwz       r30, 0x0(r4)
      bl        -0x2A05E0
      mr        r31, r3
      cmpwi     r31, 0x3
      beq-      .loc_0x138
      cmpwi     r31, 0x2
      beq-      .loc_0x138
      lwz       r0, 0x1E0(r28)
      rlwinm.   r0,r0,0,22,22
      bne-      .loc_0x138
      cmplwi    r30, 0
      beq-      .loc_0x138
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x138
      mr        r4, r30
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x2B8(r30)
      mr        r4, r30
      cmpwi     r0, 0x3
      beq-      .loc_0x108
      lwz       r5, 0xC0(r28)
      lis       r4, 0x804B
      lis       r3, 0x804B
      lfs       f1, 0x10D8(r2)
      lfs       f2, 0x4C4(r5)
      subi      r4, r4, 0x5D00
      lfs       f0, 0x113C(r2)
      addi      r0, r3, 0x4E04
      stw       r4, 0x14(r1)
      mr        r3, r30
      addi      r4, r1, 0x14
      stw       r28, 0x18(r1)
      stw       r0, 0x14(r1)
      stfs      f2, 0x1C(r1)
      stfs      f1, 0x20(r1)
      stfs      f0, 0x24(r1)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x28C(r28)
      li        r4, 0x5977
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      b         .loc_0x138

    .loc_0x108:
      cmpwi     r31, 0
      beq-      .loc_0x118
      cmpwi     r31, 0x8
      bne-      .loc_0x138

    .loc_0x118:
      lwz       r3, 0x364(r28)
      cmplwi    r3, 0
      beq-      .loc_0x138
      lwz       r12, 0x0(r3)
      lfs       f1, 0x10D8(r2)
      lwz       r12, 0x28C(r12)
      mtctr     r12
      bctrl

    .loc_0x138:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x180
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x258(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x62
      bne-      .loc_0x180
      lfs       f0, 0x10D8(r2)
      stfs      f0, 0x11C(r28)
      stfs      f0, 0x120(r28)
      stfs      f0, 0x124(r28)

    .loc_0x180:
      lwz       r0, 0x2E0(r28)
      cmpwi     r0, 0x2
      beq-      .loc_0x198
      mr        r3, r28
      mr        r4, r29
      bl        -0x2A1530

    .loc_0x198:
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r29, 0x34(r1)
      lwz       r28, 0x30(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	803A7B64
 * Size:	00016C
 */
void Game::BlackMan::Obj::damageCallBack((Game::Creature*, float, CollPart*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stfd      f31, 0x20(r1)
      psq_st    f31,0x28(r1),0,0
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      fmr       f31, f1
      mr        r28, r3
      mr        r29, r4
      mr        r30, r5
      bl        -0x2A07A4
      mr        r31, r3
      cmpwi     r31, 0x8
      bne-      .loc_0xB8
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB8
      lbz       r0, 0x2B8(r29)
      cmpwi     r0, 0x3
      bne-      .loc_0xB8
      lwz       r0, 0xC8(r29)
      cmplwi    r0, 0
      bne-      .loc_0xB8
      li        r0, 0
      mr        r4, r28
      stw       r0, 0x2CC(r28)
      li        r5, 0x2
      li        r6, 0
      lwz       r3, 0x360(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      fmr       f1, f31
      mr        r3, r28
      mr        r4, r29
      mr        r5, r30
      bl        -0x2A1BA8
      b         .loc_0x144

    .loc_0xB8:
      subi      r0, r31, 0x2
      cmplwi    r0, 0x1
      ble-      .loc_0xD0
      lwz       r0, 0x1E0(r28)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0x140

    .loc_0xD0:
      lwz       r0, 0x1E0(r28)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0xE4
      li        r3, 0
      b         .loc_0x144

    .loc_0xE4:
      lwz       r0, 0x364(r28)
      cmplwi    r0, 0
      beq-      .loc_0x128
      lfs       f1, 0x10D8(r2)
      mr        r3, r28
      mr        r4, r29
      li        r5, 0
      bl        -0x2A1BF8
      lwz       r3, 0x364(r28)
      fmr       f1, f31
      mr        r4, r29
      mr        r5, r30
      lwz       r12, 0x0(r3)
      lwz       r12, 0x278(r12)
      mtctr     r12
      bctrl
      b         .loc_0x144

    .loc_0x128:
      fmr       f1, f31
      mr        r3, r28
      mr        r4, r29
      mr        r5, r30
      bl        -0x2A1C30
      b         .loc_0x144

    .loc_0x140:
      li        r3, 0

    .loc_0x144:
      psq_l     f31,0x28(r1),0,0
      lwz       r0, 0x34(r1)
      lfd       f31, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803A7CD0
 * Size:	000134
 */
void Game::BlackMan::Obj::hipdropCallBack((Game::Creature*, float, CollPart*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stfd      f31, 0x20(r1)
      psq_st    f31,0x28(r1),0,0
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      fmr       f31, f1
      mr        r29, r3
      mr        r30, r4
      mr        r31, r5
      bl        -0x2A090C
      cmpwi     r3, 0x8
      bne-      .loc_0x7C
      li        r0, 0
      mr        r4, r29
      stw       r0, 0x2CC(r29)
      li        r5, 0x2
      li        r6, 0
      lwz       r3, 0x360(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      fmr       f1, f31
      mr        r3, r29
      mr        r4, r30
      mr        r5, r31
      bl        -0x2A1C80
      b         .loc_0x110

    .loc_0x7C:
      subi      r0, r3, 0x2
      cmplwi    r0, 0x1
      ble-      .loc_0x94
      lwz       r0, 0x1E0(r29)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0x10C

    .loc_0x94:
      lwz       r3, 0x364(r29)
      cmplwi    r3, 0
      beq-      .loc_0xF4
      lwz       r0, 0x1E0(r29)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0xB0
      lfs       f31, 0x1140(r2)

    .loc_0xB0:
      lfs       f1, 0x200(r3)
      lfs       f0, 0x1120(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xC4
      lfs       f31, 0x10D8(r2)

    .loc_0xC4:
      fmr       f1, f31
      lfs       f2, 0x1120(r2)
      bl        -0x2A1D70
      lwz       r0, 0x1E0(r29)
      mr        r3, r29
      lfs       f1, 0x10D8(r2)
      oris      r0, r0, 0x8
      lfs       f2, 0x1120(r2)
      stw       r0, 0x1E0(r29)
      bl        -0x2A1D8C
      li        r3, 0
      b         .loc_0x110

    .loc_0xF4:
      fmr       f1, f31
      mr        r3, r29
      mr        r4, r30
      mr        r5, r31
      bl        -0x2A1D10
      b         .loc_0x110

    .loc_0x10C:
      li        r3, 0

    .loc_0x110:
      psq_l     f31,0x28(r1),0,0
      lwz       r0, 0x34(r1)
      lfd       f31, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803A7E04
 * Size:	0000DC
 */
void Game::BlackMan::Obj::earthquakeCallBack((Game::Creature*, float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x18(r1)
      fmr       f31, f1
      stw       r31, 0x14(r1)
      mr        r31, r4
      stw       r30, 0x10(r1)
      mr        r30, r3
      lwz       r0, 0x364(r3)
      cmplwi    r0, 0
      beq-      .loc_0x58
      mr        r3, r0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x28C(r12)
      mtctr     r12
      bctrl
      fmr       f1, f31
      mr        r3, r30
      mr        r4, r31
      bl        -0x2A1A90
      b         .loc_0xC0

    .loc_0x58:
      lwz       r4, 0xC0(r30)
      lbz       r0, 0xA12(r4)
      cmplwi    r0, 0
      beq-      .loc_0xB0
      bl        -0x2A0A78
      cmpwi     r3, 0
      beq-      .loc_0x84
      mr        r3, r30
      bl        -0x2A0A88
      cmpwi     r3, 0x8
      bne-      .loc_0xB0

    .loc_0x84:
      li        r0, 0
      mr        r4, r30
      stw       r0, 0x2CC(r30)
      li        r5, 0x2
      li        r6, 0
      stw       r0, 0x2F4(r30)
      lwz       r3, 0x360(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0xB0:
      fmr       f1, f31
      mr        r3, r30
      mr        r4, r31
      bl        -0x2A1AFC

    .loc_0xC0:
      lwz       r0, 0x24(r1)
      lfd       f31, 0x18(r1)
      lwz       r31, 0x14(r1)
      lwz       r30, 0x10(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803A7EE0
 * Size:	000068
 */
void Game::BlackMan::Obj::doEntry(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0xC0(r3)
      lbz       r0, 0xA17(r3)
      cmplwi    r0, 0
      beq-      .loc_0x34
      lwz       r3, -0x6C18(r13)
      li        r4, 0x8
      bl        -0x1F2ECC
      b         .loc_0x40

    .loc_0x34:
      lwz       r3, -0x6C18(r13)
      li        r4, 0x4
      bl        -0x1F2EDC

    .loc_0x40:
      mr        r3, r31
      bl        -0x2A48D8
      lwz       r3, -0x6C18(r13)
      li        r4, 0
      bl        -0x1F2EF0
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A7F48
 * Size:	00031C
 */
void Game::BlackMan::Obj::changeMaterial(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      addi      r4, r1, 0x10
      stw       r31, 0x5C(r1)
      stw       r30, 0x58(r1)
      stw       r29, 0x54(r1)
      mr        r29, r3
      stw       r28, 0x50(r1)
      lwz       r5, -0x6514(r13)
      lwz       r3, 0x24(r5)
      lwz       r3, 0x25C(r3)
      lwz       r3, 0x44(r3)
      addi      r3, r3, 0xB4
      bl        -0x2BD110
      lfs       f5, 0x40(r1)
      addi      r5, r1, 0xC
      lfs       f4, 0x44(r1)
      li        r4, 0
      lfs       f1, 0x10D8(r2)
      lfs       f3, 0x48(r1)
      lfs       f2, 0x4C(r1)
      lfs       f0, 0x1120(r2)
      stfs      f5, 0x30(r1)
      stfs      f4, 0x34(r1)
      stfs      f3, 0x38(r1)
      stfs      f2, 0x3C(r1)
      stfs      f1, 0x40(r1)
      stfs      f1, 0x44(r1)
      stfs      f1, 0x48(r1)
      stfs      f0, 0x4C(r1)
      lwz       r3, 0x174(r29)
      lbz       r0, 0x380(r29)
      lwz       r30, 0x8(r3)
      lwz       r31, 0x4(r30)
      stb       r0, 0xC(r1)
      lbz       r0, 0x381(r29)
      stb       r0, 0xD(r1)
      lbz       r0, 0x382(r29)
      stb       r0, 0xE(r1)
      lbz       r0, 0x383(r29)
      stb       r0, 0xF(r1)
      lwz       r3, 0x37C(r29)
      lwz       r3, 0x2C(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x70(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x38C(r29)
      addi      r5, r1, 0x8
      li        r4, 0x3
      stb       r0, 0x8(r1)
      lbz       r0, 0x38D(r29)
      stb       r0, 0x9(r1)
      lbz       r0, 0x38E(r29)
      stb       r0, 0xA(r1)
      lbz       r0, 0x38F(r29)
      stb       r0, 0xB(r1)
      lwz       r3, 0x37C(r29)
      lwz       r3, 0x2C(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x70(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x358(r29)
      lfs       f1, 0x1144(r2)
      bl        0x8C4E8
      lwz       r3, 0x60(r31)
      li        r4, 0
      lwz       r3, 0x0(r3)
      lwz       r3, 0x28(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x50(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x10(r1)
      lis       r4, 0x8051
      lfs       f1, 0x10D8(r2)
      subi      r28, r4, 0xDD0
      stfs      f0, 0x24(r3)
      li        r29, 0
      lfs       f0, 0x1120(r2)
      lfs       f2, 0x14(r1)
      stfs      f2, 0x28(r3)
      lfs       f2, 0x18(r1)
      stfs      f2, 0x2C(r3)
      lfs       f2, 0x1C(r1)
      stfs      f2, 0x30(r3)
      lfs       f2, 0x20(r1)
      stfs      f2, 0x34(r3)
      lfs       f2, 0x24(r1)
      stfs      f2, 0x38(r3)
      lfs       f2, 0x28(r1)
      stfs      f2, 0x3C(r3)
      lfs       f2, 0x2C(r1)
      stfs      f2, 0x40(r3)
      lfs       f2, 0x30(r1)
      stfs      f2, 0x44(r3)
      lfs       f2, 0x34(r1)
      stfs      f2, 0x48(r3)
      lfs       f2, 0x38(r1)
      stfs      f2, 0x4C(r3)
      lfs       f2, 0x3C(r1)
      stfs      f2, 0x50(r3)
      stfs      f1, 0x5C(r3)
      stfs      f1, 0x58(r3)
      stfs      f1, 0x54(r3)
      stfs      f0, 0x60(r3)
      lwz       r3, -0x6C18(r13)
      lwz       r5, 0x6C(r31)
      lwz       r4, 0x54(r3)
      lwz       r3, 0x4(r5)
      lwz       r4, 0x20(r4)
      lbz       r0, 0x0(r4)
      stb       r0, 0x0(r3)
      lbz       r0, 0x1(r4)
      stb       r0, 0x1(r3)
      lhz       r0, 0x2(r4)
      sth       r0, 0x2(r3)
      lhz       r0, 0x4(r4)
      sth       r0, 0x4(r3)
      lbz       r0, 0x6(r4)
      stb       r0, 0x6(r3)
      lbz       r0, 0x7(r4)
      stb       r0, 0x7(r3)
      lbz       r0, 0x8(r4)
      stb       r0, 0x8(r3)
      lbz       r0, 0x9(r4)
      stb       r0, 0x9(r3)
      lhz       r0, 0xA(r4)
      sth       r0, 0xA(r3)
      lwz       r0, 0xC(r4)
      stw       r0, 0xC(r3)
      lbz       r0, 0x10(r4)
      stb       r0, 0x10(r3)
      lbz       r0, 0x11(r4)
      stb       r0, 0x11(r3)
      lbz       r0, 0x12(r4)
      stb       r0, 0x12(r3)
      lbz       r0, 0x13(r4)
      stb       r0, 0x13(r3)
      lbz       r0, 0x14(r4)
      stb       r0, 0x14(r3)
      lbz       r0, 0x15(r4)
      stb       r0, 0x15(r3)
      lbz       r0, 0x16(r4)
      stb       r0, 0x16(r3)
      lbz       r0, 0x17(r4)
      stb       r0, 0x17(r3)
      lbz       r0, 0x18(r4)
      stb       r0, 0x18(r3)
      lbz       r0, 0x19(r4)
      stb       r0, 0x19(r3)
      lha       r0, 0x1A(r4)
      sth       r0, 0x1A(r3)
      lwz       r0, 0x1C(r4)
      stw       r0, 0x1C(r3)
      lwz       r3, 0x4(r5)
      lwz       r0, 0x1C(r3)
      add       r0, r4, r0
      sub       r0, r0, r3
      stw       r0, 0x1C(r3)
      lwz       r3, 0x4(r5)
      lwz       r0, 0xC(r3)
      add       r0, r4, r0
      sub       r0, r0, r3
      stw       r0, 0xC(r3)
      b         .loc_0x2EC

    .loc_0x2B4:
      lwz       r4, 0xC0(r30)
      rlwinm    r3,r29,6,10,25
      rlwinm    r0,r29,2,14,29
      add       r4, r4, r3
      stw       r4, 0x3C(r28)
      lwz       r3, 0x60(r31)
      lwz       r4, 0x2C(r4)
      lwzx      r3, r3, r0
      lwz       r4, 0x34(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      addi      r29, r29, 0x1

    .loc_0x2EC:
      lhz       r0, 0x5C(r31)
      rlwinm    r3,r29,0,16,31
      cmplw     r3, r0
      blt+      .loc_0x2B4
      lwz       r0, 0x64(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      lwz       r29, 0x54(r1)
      lwz       r28, 0x50(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	803A8264
 * Size:	000050
 */
void Game::BlackMan::Obj::getShadowParam((Game::ShadowParam&))
{
    /*
    .loc_0x0:
      lfs       f0, 0x304(r3)
      lfs       f5, 0x1148(r2)
      stfs      f0, 0x0(r4)
      lfs       f3, 0x10D8(r2)
      lfs       f0, 0x308(r3)
      lfs       f2, 0x1120(r2)
      stfs      f0, 0x4(r4)
      lfs       f1, 0x114C(r2)
      lfs       f4, 0x30C(r3)
      lfs       f0, 0x1144(r2)
      stfs      f4, 0x8(r4)
      lfs       f4, 0x190(r3)
      fadds     f4, f5, f4
      stfs      f4, 0x4(r4)
      stfs      f3, 0xC(r4)
      stfs      f2, 0x10(r4)
      stfs      f3, 0x14(r4)
      stfs      f1, 0x18(r4)
      stfs      f0, 0x1C(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	803A82B4
 * Size:	000064
 */
void Game::BlackMan::Obj::initWalkSmokeEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x2
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r3, r31, 0x350
      bl        -0x27DF6C
      lwz       r5, 0x174(r31)
      addi      r3, r31, 0x350
      lfs       f1, 0x111C(r2)
      li        r4, 0
      addi      r6, r2, 0x10EC
      bl        -0x27DD08
      lwz       r5, 0x174(r31)
      addi      r3, r31, 0x350
      lfs       f1, 0x111C(r2)
      li        r4, 0x1
      addi      r6, r2, 0x10E4
      bl        -0x27DD20
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A8318
 * Size:	00001C
 */
void Game::BlackMan::Obj::getWalkSmokeEffectMgr(void)
{
    /*
    .loc_0x0:
      lwz       r0, 0x364(r3)
      cmplwi    r0, 0
      beq-      .loc_0x14
      li        r3, 0
      blr

    .loc_0x14:
      addi      r3, r3, 0x350
      blr
    */
}

/*
 * --INFO--
 * Address:	803A8334
 * Size:	000848
 */
void Game::BlackMan::Obj::walkFunc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      stw       r0, 0x84(r1)
      stfd      f31, 0x70(r1)
      psq_st    f31,0x78(r1),0,0
      stfd      f30, 0x60(r1)
      psq_st    f30,0x68(r1),0,0
      stfd      f29, 0x50(r1)
      psq_st    f29,0x58(r1),0,0
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      mr        r31, r3
      lwz       r3, 0x364(r3)
      cmplwi    r3, 0
      beq-      .loc_0x48
      lwz       r0, 0x1E0(r3)
      rlwinm.   r0,r0,0,22,22
      bne-      .loc_0x818

    .loc_0x48:
      mr        r3, r31
      bl        0x231C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x84
      lwz       r3, 0x360(r31)
      mr        r4, r31
      li        r5, 0x3
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stw       r0, 0x2CC(r31)
      b         .loc_0x818

    .loc_0x84:
      lwz       r0, 0x364(r31)
      cmplwi    r0, 0
      beq-      .loc_0x9C
      lwz       r0, 0x2E0(r31)
      cmpwi     r0, 0x2
      bne-      .loc_0xA4

    .loc_0x9C:
      li        r0, 0
      b         .loc_0xA8

    .loc_0xA4:
      li        r0, 0x1

    .loc_0xA8:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0xD4
      lfs       f1, 0x200(r31)
      lfs       f0, 0x1150(r2)
      fadds     f0, f1, f0
      stfs      f0, 0x200(r31)
      lfs       f0, 0x200(r31)
      lfs       f1, 0x204(r31)
      fcmpo     cr0, f0, f1
      ble-      .loc_0xD4
      stfs      f1, 0x200(r31)

    .loc_0xD4:
      lwz       r3, 0xC0(r31)
      lha       r4, 0xA1A(r3)
      lfs       f31, 0x2E4(r3)
      extsh.    r0, r4
      lfs       f30, 0x334(r3)
      lfs       f29, 0x30C(r3)
      blt-      .loc_0xF8
      stw       r4, 0x2F0(r31)
      b         .loc_0x104

    .loc_0xF8:
      lwz       r3, 0x2EC(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x2EC(r31)

    .loc_0x104:
      lwz       r0, 0x2F0(r31)
      cmpwi     r0, 0
      bne-      .loc_0x140
      lwz       r3, 0xC0(r31)
      lwz       r4, 0x2EC(r31)
      lwz       r0, 0x95C(r3)
      cmpw      r4, r0
      ble-      .loc_0x150
      li        r3, 0x1
      li        r0, 0
      stw       r3, 0x2F0(r31)
      lfs       f0, 0x10D8(r2)
      stw       r0, 0x2EC(r31)
      stfs      f0, 0x378(r31)
      b         .loc_0x150

    .loc_0x140:
      lwz       r3, 0xC0(r31)
      lfs       f31, 0x8BC(r3)
      lfs       f30, 0x90C(r3)
      lfs       f29, 0x8E4(r3)

    .loc_0x150:
      lwz       r0, 0x2E0(r31)
      cmpwi     r0, 0x2
      bne-      .loc_0x344
      lwz       r3, -0x6D20(r13)
      bl        -0x24D874
      lwz       r4, 0xC0(r31)
      cmplwi    r3, 0
      lfs       f29, 0x844(r4)
      beq-      .loc_0x2F0
      mr        r4, r3
      addi      r3, r1, 0x2C
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x194(r31)
      li        r30, 0
      lfs       f0, 0x34(r1)
      lwz       r3, 0x188(r31)
      fsubs     f2, f1, f0
      lfs       f1, 0x18C(r31)
      lfs       f0, 0x2C(r1)
      lbz       r0, 0x24(r3)
      fsubs     f1, f1, f0
      fmuls     f0, f2, f2
      cmplwi    r0, 0
      fmadds    f1, f1, f1, f0
      beq-      .loc_0x1D0
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x1D0
      li        r30, 0x1

    .loc_0x1D0:
      lfs       f0, 0x1154(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x218
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x2F4(r31)
      bl        -0x2A11D4
      cmpwi     r3, 0x9
      beq-      .loc_0x1FC
      mr        r3, r31
      bl        -0x2A328C

    .loc_0x1FC:
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x2F0
      mr        r3, r31
      li        r4, 0x9
      li        r5, 0
      bl        -0x2A3540
      b         .loc_0x2F0

    .loc_0x218:
      lfs       f0, 0x1158(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x260
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x2F4(r31)
      bl        -0x2A121C
      cmpwi     r3, 0xB
      beq-      .loc_0x244
      mr        r3, r31
      bl        -0x2A32D4

    .loc_0x244:
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x2F0
      mr        r3, r31
      li        r4, 0xB
      li        r5, 0
      bl        -0x2A3588
      b         .loc_0x2F0

    .loc_0x260:
      lwz       r3, 0x2F4(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x2F4(r31)
      lwz       r3, 0xC0(r31)
      lwz       r4, 0x2F4(r31)
      lwz       r0, 0x9D4(r3)
      cmpw      r4, r0
      bgt-      .loc_0x290
      mr        r3, r31
      bl        -0x2A1270
      cmpwi     r3, 0x8
      beq-      .loc_0x298

    .loc_0x290:
      mr        r3, r31
      bl        -0x2A3328

    .loc_0x298:
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x2F0
      lwz       r3, 0xC0(r31)
      lwz       r4, 0x2F4(r31)
      lwz       r0, 0x9D4(r3)
      cmpw      r4, r0
      ble-      .loc_0x2E0
      li        r0, 0
      mr        r4, r31
      stw       r0, 0x2F4(r31)
      li        r5, 0x8
      li        r6, 0
      lwz       r3, 0x360(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      b         .loc_0x2F0

    .loc_0x2E0:
      mr        r3, r31
      li        r4, 0x8
      li        r5, 0
      bl        -0x2A361C

    .loc_0x2F0:
      mr        r3, r31
      bl        -0x2A12E0
      cmpwi     r3, 0x9
      bne-      .loc_0x304
      lfs       f29, 0x10D8(r2)

    .loc_0x304:
      mr        r3, r31
      bl        -0x2A12F4
      cmpwi     r3, 0xB
      bne-      .loc_0x31C
      lwz       r3, 0xC0(r31)
      lfs       f29, 0x934(r3)

    .loc_0x31C:
      lfs       f1, 0x374(r31)
      lfs       f2, 0x115C(r2)
      fsubs     f0, f29, f1
      fmadds    f0, f2, f0, f1
      stfs      f0, 0x374(r31)
      lwz       r3, 0xC0(r31)
      lfs       f31, 0x374(r31)
      lfs       f30, 0x894(r3)
      lfs       f29, 0x86C(r3)
      b         .loc_0x424

    .loc_0x344:
      lwz       r3, -0x6CD0(r13)
      cmplwi    r3, 0
      beq-      .loc_0x424
      lwz       r4, 0xAC(r3)
      cmplwi    r4, 0
      beq-      .loc_0x424
      lwz       r12, 0x0(r4)
      addi      r3, r1, 0x20
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x194(r31)
      li        r30, 0
      lfs       f0, 0x28(r1)
      lwz       r3, 0x188(r31)
      fsubs     f2, f1, f0
      lfs       f1, 0x18C(r31)
      lfs       f0, 0x20(r1)
      lbz       r0, 0x24(r3)
      fsubs     f1, f1, f0
      fmuls     f0, f2, f2
      cmplwi    r0, 0
      fmadds    f1, f1, f1, f0
      beq-      .loc_0x3B4
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x3B4
      li        r30, 0x1

    .loc_0x3B4:
      lfs       f0, 0x1128(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x3F4
      mr        r3, r31
      bl        -0x2A13B0
      cmpwi     r3, 0x6
      bne-      .loc_0x3D8
      mr        r3, r31
      bl        -0x2A3468

    .loc_0x3D8:
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x424
      mr        r3, r31
      li        r4, 0xC
      li        r5, 0
      bl        -0x2A371C
      b         .loc_0x424

    .loc_0x3F4:
      mr        r3, r31
      bl        -0x2A13E4
      cmpwi     r3, 0xC
      bne-      .loc_0x40C
      mr        r3, r31
      bl        -0x2A349C

    .loc_0x40C:
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x424
      mr        r3, r31
      li        r4, 0x6
      li        r5, 0
      bl        -0x2A3750

    .loc_0x424:
      lwz       r0, 0x364(r31)
      cmplwi    r0, 0
      beq-      .loc_0x490
      lwz       r3, 0xC0(r31)
      lwz       r0, 0x2E0(r31)
      lbz       r3, 0xA10(r3)
      cmpw      r3, r0
      beq-      .loc_0x490
      stw       r3, 0x2E0(r31)
      lwz       r0, 0x2E0(r31)
      cmpwi     r0, 0x4
      bne-      .loc_0x480
      lfs       f0, 0x10D8(r2)
      mr        r3, r31
      li        r4, 0
      stfs      f0, 0x1C8(r31)
      stfs      f0, 0x1CC(r31)
      stfs      f0, 0x1D0(r31)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      bl        0x14B8
      b         .loc_0x490

    .loc_0x480:
      li        r0, 0
      mr        r3, r31
      stb       r0, 0x34C(r31)
      bl        0x167C

    .loc_0x490:
      lwz       r0, 0x2E0(r31)
      cmpwi     r0, 0x4
      bne-      .loc_0x4BC
      mr        r3, r31
      bl        0x137C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x818
      lwz       r3, 0xC0(r31)
      lfs       f31, 0x81C(r3)
      b         .loc_0x4BC
      b         .loc_0x818

    .loc_0x4BC:
      lfs       f1, 0x2D0(r31)
      lfs       f0, 0x18C(r31)
      lfs       f2, 0x1160(r2)
      fsubs     f0, f1, f0
      fabs      f0, f0
      frsp      f0, f0
      fcmpo     cr0, f0, f2
      bge-      .loc_0x4F8
      lfs       f1, 0x2D8(r31)
      lfs       f0, 0x194(r31)
      fsubs     f0, f1, f0
      fabs      f0, f0
      frsp      f0, f0
      fcmpo     cr0, f0, f2
      blt-      .loc_0x500

    .loc_0x4F8:
      li        r0, 0
      stw       r0, 0x2E4(r31)

    .loc_0x500:
      lwz       r3, 0x364(r31)
      cmplwi    r3, 0
      beq-      .loc_0x514
      lfs       f0, 0x1FC(r31)
      stfs      f0, 0x314(r3)

    .loc_0x514:
      fmr       f1, f31
      lfs       f31, 0x1FC(r31)
      fmr       f2, f29
      mr        r3, r31
      fmr       f3, f30
      addi      r4, r31, 0x2D0
      bl        -0x293284
      lwz       r3, 0x364(r31)
      cmplwi    r3, 0
      beq-      .loc_0x59C
      lfs       f1, 0x194(r31)
      lfs       f0, 0x2E8(r3)
      lfs       f2, 0x18C(r31)
      fsubs     f3, f1, f0
      lfs       f1, 0x2E0(r3)
      lfs       f0, 0x10D8(r2)
      fsubs     f1, f2, f1
      fmuls     f2, f3, f3
      fmadds    f1, f1, f1, f2
      fcmpo     cr0, f1, f0
      ble-      .loc_0x578
      ble-      .loc_0x57C
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x57C

    .loc_0x578:
      fmr       f1, f0

    .loc_0x57C:
      lfs       f0, 0x1164(r2)
      fdivs     f0, f1, f0
      stfs      f0, 0x30C(r3)
      lwz       r3, 0x364(r31)
      lfs       f0, 0x1FC(r31)
      stfs      f0, 0x1FC(r3)
      lfs       f0, 0x1FC(r3)
      stfs      f0, 0x1A8(r3)

    .loc_0x59C:
      lwz       r0, 0x2E8(r31)
      cmpwi     r0, 0
      bne-      .loc_0x61C
      lwz       r3, 0x334(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x334(r31)
      lwz       r0, 0x334(r31)
      cmpwi     r0, 0x3C
      ble-      .loc_0x61C
      lfs       f1, 0x194(r31)
      lfs       f0, 0x300(r31)
      lfs       f2, 0x18C(r31)
      fsubs     f3, f1, f0
      lfs       f1, 0x2F8(r31)
      lfs       f0, 0x1160(r2)
      fsubs     f2, f2, f1
      fmuls     f1, f3, f3
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x5FC
      li        r0, 0x78
      mr        r3, r31
      stw       r0, 0x2E8(r31)
      bl        0x284

    .loc_0x5FC:
      lfs       f0, 0x18C(r31)
      li        r0, 0
      stfs      f0, 0x2F8(r31)
      lfs       f0, 0x190(r31)
      stfs      f0, 0x2FC(r31)
      lfs       f0, 0x194(r31)
      stfs      f0, 0x300(r31)
      stw       r0, 0x334(r31)

    .loc_0x61C:
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r31)
      li        r30, 0
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f5, 0x14(r1)
      lis       r3, 0x8051
      lfs       f3, 0x1C(r1)
      subi      r3, r3, 0x2E20
      lfs       f1, 0x2D0(r31)
      lfs       f0, 0x2D8(r31)
      lfs       f4, 0x18(r1)
      fsubs     f1, f1, f5
      fsubs     f2, f0, f3
      stfs      f5, 0x8(r1)
      stfs      f4, 0xC(r1)
      stfs      f3, 0x10(r1)
      bl        -0x373894
      bl        0x69230
      lwz       r12, 0x0(r31)
      fmr       f29, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f29
      bl        0x69238
      lfs       f0, 0x1168(r2)
      fcmpo     cr0, f1, f0
      mfcr      r3
      lis       r0, 0x4330
      rlwinm    r3,r3,2,31,31
      stw       r0, 0x38(r1)
      xoris     r0, r3, 0x8000
      lfd       f2, 0x1188(r2)
      stw       r0, 0x3C(r1)
      lfd       f0, 0x1170(r2)
      lfd       f1, 0x38(r1)
      fsub      f1, f1, f2
      fabs      f1, f1
      fcmpu     cr0, f1, f0
      beq-      .loc_0x6D4
      li        r30, 0x1

    .loc_0x6D4:
      rlwinm.   r0,r30,0,24,31
      bne-      .loc_0x6FC
      lfs       f1, 0x1FC(r31)
      lfs       f0, 0x1178(r2)
      fsubs     f1, f31, f1
      fabs      f1, f1
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x6FC
      li        r30, 0x1

    .loc_0x6FC:
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x720
      lfs       f0, 0x1C8(r31)
      lfs       f1, 0x117C(r2)
      fmuls     f0, f0, f1
      stfs      f0, 0x1C8(r31)
      lfs       f0, 0x1D0(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0x1D0(r31)

    .loc_0x720:
      lwz       r0, 0x364(r31)
      cmplwi    r0, 0
      beq-      .loc_0x818
      lwz       r0, 0x2F0(r31)
      cmpwi     r0, 0
      bne-      .loc_0x798
      lwz       r3, 0x28C(r31)
      li        r4, 0x5174
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x364(r31)
      li        r4, 0x516E
      li        r5, 0
      lwz       r3, 0x28C(r3)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x364(r31)
      li        r4, 0x5189
      li        r5, 0
      lwz       r3, 0x28C(r3)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      b         .loc_0x818

    .loc_0x798:
      lwz       r3, 0x28C(r31)
      li        r4, 0x5174
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0x7D8
      lwz       r12, 0x10(r3)
      li        r4, 0
      lfs       f1, 0x1180(r2)
      li        r5, 0
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0x7D8:
      lwz       r3, 0x364(r31)
      li        r4, 0x516E
      li        r5, 0
      lwz       r3, 0x28C(r3)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x364(r31)
      li        r4, 0x5189
      li        r5, 0
      lwz       r3, 0x28C(r3)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl

    .loc_0x818:
      psq_l     f31,0x78(r1),0,0
      lfd       f31, 0x70(r1)
      psq_l     f30,0x68(r1),0,0
      lfd       f30, 0x60(r1)
      psq_l     f29,0x58(r1),0,0
      lfd       f29, 0x50(r1)
      lwz       r31, 0x4C(r1)
      lwz       r0, 0x84(r1)
      lwz       r30, 0x48(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	803A8B7C
 * Size:	000034
 */
void Game::BlackMan::Obj::isReachToGoal((float))
{
    /*
    .loc_0x0:
      fmuls     f0, f1, f1
      lfs       f2, 0x194(r3)
      lfs       f1, 0x2D8(r3)
      lfs       f3, 0x18C(r3)
      fsubs     f2, f2, f1
      lfs       f1, 0x2D0(r3)
      fsubs     f3, f3, f1
      fmuls     f1, f2, f2
      fmadds    f1, f3, f3, f1
      fcmpo     cr0, f1, f0
      mfcr      r0
      rlwinm    r3,r0,1,31,31
      blr
    */
}

/*
 * --INFO--
 * Address:	803A8BB0
 * Size:	000ED0
 */
void Game::BlackMan::Obj::findNextRoutePoint(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x1E0(r1)
      mflr      r0
      stw       r0, 0x1E4(r1)
      stfd      f31, 0x1D0(r1)
      psq_st    f31,0x1D8(r1),0,0
      stfd      f30, 0x1C0(r1)
      psq_st    f30,0x1C8(r1),0,0
      stfd      f29, 0x1B0(r1)
      psq_st    f29,0x1B8(r1),0,0
      stfd      f28, 0x1A0(r1)
      psq_st    f28,0x1A8(r1),0,0
      stfd      f27, 0x190(r1)
      psq_st    f27,0x198(r1),0,0
      stfd      f26, 0x180(r1)
      psq_st    f26,0x188(r1),0,0
      stmw      r22, 0x158(r1)
      mr        r31, r3
      lbz       r0, 0x34C(r3)
      cmplwi    r0, 0
      bne-      .loc_0x5C
      lwz       r0, 0x2E0(r31)
      cmpwi     r0, 0x4
      bne-      .loc_0x68

    .loc_0x5C:
      mr        r3, r31
      bl        .loc_0xED0
      b         .loc_0xE8C

    .loc_0x68:
      lwz       r0, 0x2E8(r31)
      lwz       r3, -0x6CF8(r13)
      cmpwi     r0, 0
      lwz       r30, 0x8(r3)
      ble-      .loc_0x340
      lha       r0, 0x342(r31)
      lha       r3, 0x340(r31)
      cmpw      r0, r3
      bne-      .loc_0xB4
      lha       r0, 0x344(r31)
      cmpw      r3, r0
      bne-      .loc_0xB4
      lfs       f0, 0x198(r31)
      stfs      f0, 0x2D0(r31)
      lfs       f0, 0x19C(r31)
      stfs      f0, 0x2D4(r31)
      lfs       f0, 0x1A0(r31)
      stfs      f0, 0x2D8(r31)
      b         .loc_0xE8C

    .loc_0xB4:
      li        r5, 0
      li        r0, -0x1
      stw       r5, 0x2E8(r31)
      mr        r3, r30
      addi      r4, r1, 0x118
      stw       r5, 0x134(r1)
      stw       r5, 0x130(r1)
      stb       r5, 0x124(r1)
      sth       r0, 0x12C(r1)
      stw       r5, 0x128(r1)
      lfs       f0, 0x18C(r31)
      stfs      f0, 0x118(r1)
      lfs       f0, 0x190(r31)
      stfs      f0, 0x11C(r1)
      lfs       f0, 0x194(r31)
      stfs      f0, 0x120(r1)
      bl        -0x235938
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x340
      lwz       r4, 0x130(r1)
      lha       r24, 0x340(r31)
      lbz       r0, 0x34(r4)
      lha       r25, 0x342(r31)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0x1C0
      mr        r3, r30
      lha       r4, 0x36(r4)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lha       r0, 0x38(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0x164
      lwz       r3, 0x134(r1)
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0x164
      lha       r0, 0x340(r31)
      sth       r0, 0x342(r31)
      lwz       r3, 0x134(r1)
      lha       r0, 0x36(r3)
      sth       r0, 0x340(r31)
      b         .loc_0x218

    .loc_0x164:
      lwz       r4, 0x130(r1)
      mr        r3, r30
      lha       r0, 0x36(r4)
      sth       r0, 0x340(r31)
      lwz       r12, 0x0(r30)
      lwz       r4, 0x134(r1)
      lwz       r12, 0x2C(r12)
      lha       r4, 0x36(r4)
      mtctr     r12
      bctrl
      lha       r0, 0x38(r3)
      cmpwi     r0, 0x1
      ble-      .loc_0x1B4
      lwz       r3, 0x134(r1)
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0x1B4
      lha       r0, 0x36(r3)
      sth       r0, 0x342(r31)
      b         .loc_0x218

    .loc_0x1B4:
      lha       r0, 0x340(r31)
      sth       r0, 0x342(r31)
      b         .loc_0x218

    .loc_0x1C0:
      lwz       r4, 0x134(r1)
      mr        r3, r30
      lha       r0, 0x36(r4)
      sth       r0, 0x340(r31)
      lwz       r12, 0x0(r30)
      lwz       r4, 0x130(r1)
      lwz       r12, 0x2C(r12)
      lha       r4, 0x36(r4)
      mtctr     r12
      bctrl
      lha       r0, 0x38(r3)
      cmpwi     r0, 0x1
      ble-      .loc_0x210
      lwz       r3, 0x130(r1)
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0x210
      lha       r0, 0x36(r3)
      sth       r0, 0x342(r31)
      b         .loc_0x218

    .loc_0x210:
      lha       r0, 0x340(r31)
      sth       r0, 0x342(r31)

    .loc_0x218:
      lha       r3, 0x340(r31)
      cmpw      r3, r24
      bne-      .loc_0x308
      lha       r0, 0x342(r31)
      cmpw      r0, r25
      bne-      .loc_0x308
      lfs       f1, 0x18C(r31)
      lfs       f0, 0x10D8(r2)
      stfs      f1, 0x2D0(r31)
      lfs       f3, 0x1160(r2)
      lfs       f1, 0x190(r31)
      stfs      f1, 0x2D4(r31)
      lfs       f1, 0x194(r31)
      stfs      f1, 0x2D8(r31)
      lfs       f1, 0x1FC(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x288
      lfs       f0, 0x1190(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x138(r1)
      lwz       r0, 0x13C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f2, f0
      b         .loc_0x2AC

    .loc_0x288:
      lfs       f0, 0x1194(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x140(r1)
      lwz       r0, 0x144(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r3, r0

    .loc_0x2AC:
      lfs       f1, 0x2D0(r31)
      lfs       f0, 0x10D8(r2)
      fnmsubs   f1, f3, f2, f1
      stfs      f1, 0x2D0(r31)
      lfs       f1, 0x1FC(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x2CC
      fneg      f1, f1

    .loc_0x2CC:
      lfs       f0, 0x1194(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      lfs       f2, 0x1160(r2)
      fmuls     f1, f1, f0
      lfs       f0, 0x2D8(r31)
      fctiwz    f1, f1
      stfd      f1, 0x148(r1)
      lwz       r0, 0x14C(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r3, r0
      lfs       f1, 0x4(r3)
      fnmsubs   f0, f2, f1, f0
      stfs      f0, 0x2D8(r31)
      b         .loc_0xE8C

    .loc_0x308:
      sth       r3, 0x342(r31)
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lha       r4, 0x340(r31)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x50(r3)
      lfs       f2, 0x54(r3)
      lfs       f0, 0x4C(r3)
      stfs      f0, 0x2D0(r31)
      stfs      f1, 0x2D4(r31)
      stfs      f2, 0x2D8(r31)
      b         .loc_0xE8C

    .loc_0x340:
      mr        r3, r30
      lha       r4, 0x340(r31)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr.       r25, r3
      bne-      .loc_0x37C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5688
      li        r4, 0x615
      addi      r5, r5, 0x5698
      crclr     6, 0x6
      bl        -0x37E8E8

    .loc_0x37C:
      mr        r4, r25
      addi      r3, r1, 0xFC
      li        r29, 0
      li        r5, 0x1
      bl        -0x236A1C
      addi      r3, r1, 0xFC
      bl        -0x236A10
      addi      r24, r1, 0x108
      mr        r22, r24
      b         .loc_0x420

    .loc_0x3A4:
      addi      r3, r1, 0xFC
      bl        -0x236994
      mr        r0, r3
      mr        r3, r30
      lwz       r12, 0x0(r30)
      mr        r23, r0
      mr        r4, r23
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x4C(r3)
      cmplwi    r3, 0
      lfs       f1, 0x50(r3)
      lfs       f0, 0x54(r3)
      stfs      f2, 0xB0(r1)
      stfs      f1, 0xB4(r1)
      stfs      f0, 0xB8(r1)
      beq-      .loc_0x418
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0x418
      lha       r4, 0x5C(r3)
      lha       r0, 0x38(r3)
      add       r0, r4, r0
      cmpwi     r0, 0x1
      ble-      .loc_0x418
      sth       r23, 0x0(r22)
      addi      r22, r22, 0x2
      addi      r29, r29, 0x1

    .loc_0x418:
      addi      r3, r1, 0xFC
      bl        -0x236A70

    .loc_0x420:
      addi      r3, r1, 0xFC
      bl        -0x236A4C
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x3A4
      cmpwi     r29, 0
      bne-      .loc_0x4C0
      mr        r4, r25
      addi      r3, r1, 0xF0
      li        r5, 0x1
      bl        -0x236AD4
      addi      r3, r1, 0xF0
      bl        -0x236AC8
      rlwinm    r0,r29,1,0,30
      addi      r22, r1, 0x108
      add       r22, r22, r0
      b         .loc_0x4B0

    .loc_0x460:
      addi      r3, r1, 0xF0
      bl        -0x236A50
      mr        r0, r3
      mr        r3, r30
      lwz       r12, 0x0(r30)
      mr        r23, r0
      mr        r4, r23
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0x4A8
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0x4A8
      sth       r23, 0x0(r22)
      addi      r22, r22, 0x2
      addi      r29, r29, 0x1

    .loc_0x4A8:
      addi      r3, r1, 0xF0
      bl        -0x236B00

    .loc_0x4B0:
      addi      r3, r1, 0xF0
      bl        -0x236ADC
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x460

    .loc_0x4C0:
      cmpwi     r29, 0
      beq-      .loc_0xE54
      lwz       r3, 0xC0(r31)
      li        r28, -0x1
      lwz       r0, 0x2E0(r31)
      li        r27, 0
      lfs       f0, 0x44C(r3)
      cmpwi     r0, 0x2
      fmuls     f31, f0, f0
      beq-      .loc_0x954
      bge-      .loc_0x4FC
      cmpwi     r0, 0
      beq-      .loc_0x508
      bge-      .loc_0x558
      b         .loc_0xDDC

    .loc_0x4FC:
      cmpwi     r0, 0x4
      bge-      .loc_0xDDC
      b         .loc_0xB2C

    .loc_0x508:
      bl        -0x2DFB18
      lis       r4, 0x4330
      xoris     r0, r3, 0x8000
      stw       r0, 0x14C(r1)
      xoris     r0, r29, 0x8000
      lfd       f2, 0x1188(r2)
      stw       r4, 0x148(r1)
      lfs       f0, 0x1198(r2)
      lfd       f1, 0x148(r1)
      stw       r0, 0x144(r1)
      fsubs     f1, f1, f2
      stw       r4, 0x140(r1)
      fdivs     f1, f1, f0
      lfd       f0, 0x140(r1)
      fsubs     f0, f0, f2
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x138(r1)
      lwz       r26, 0x13C(r1)
      b         .loc_0xDDC

    .loc_0x558:
      lis       r3, 0x804B
      li        r23, 0
      subi      r25, r3, 0x4364
      b         .loc_0x8C4

    .loc_0x568:
      lwz       r0, -0x6D0C(r13)
      li        r3, 0
      stw       r25, 0xE0(r1)
      lha       r4, 0x0(r24)
      stw       r3, 0xEC(r1)
      stw       r3, 0xE4(r1)
      stw       r0, 0xE8(r1)
      lha       r0, 0x342(r31)
      cmpw      r0, r4
      bne-      .loc_0x5B0
      lbz       r0, 0x338(r31)
      cmplwi    r0, 0
      bne-      .loc_0x8BC
      lwz       r3, 0xC0(r31)
      lbz       r0, 0xA15(r3)
      cmplwi    r0, 0
      beq-      .loc_0x8BC
      li        r27, 0x1

    .loc_0x5B0:
      lwz       r12, 0x0(r30)
      mr        r3, r30
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0xEC(r1)
      mr        r26, r3
      cmplwi    r0, 0
      bne-      .loc_0x5F0
      lwz       r3, 0xE8(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xE4(r1)
      b         .loc_0x7F8

    .loc_0x5F0:
      lwz       r3, 0xE8(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xE4(r1)
      b         .loc_0x660

    .loc_0x60C:
      lwz       r3, 0xE8(r1)
      lwz       r4, 0xE4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xEC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x7F8
      lwz       r3, 0xE8(r1)
      lwz       r4, 0xE4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xE4(r1)

    .loc_0x660:
      lwz       r12, 0xE0(r1)
      addi      r3, r1, 0xE0
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x60C
      b         .loc_0x7F8

    .loc_0x680:
      lwz       r3, 0xE8(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r22, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x73C
      mr        r3, r22
      bl        -0x209CF0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x73C
      mr        r4, r22
      lfs       f30, 0x4C(r26)
      lwz       r12, 0x0(r22)
      addi      r3, r1, 0x98
      lfs       f0, 0x50(r26)
      lfs       f29, 0x54(r26)
      lwz       r12, 0x8(r12)
      stfs      f30, 0x80(r1)
      stfs      f0, 0x84(r1)
      stfs      f29, 0x88(r1)
      stfs      f30, 0x8C(r1)
      stfs      f0, 0x90(r1)
      stfs      f29, 0x94(r1)
      mtctr     r12
      bctrl
      mr        r4, r22
      addi      r3, r1, 0xA4
      lwz       r12, 0x0(r22)
      lfs       f28, 0xA0(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      fsubs     f0, f28, f29
      lfs       f1, 0xA4(r1)
      fsubs     f1, f1, f30
      fmuls     f0, f0, f0
      fmadds    f0, f1, f1, f0
      fcmpo     cr0, f0, f31
      bge-      .loc_0x73C
      fmr       f31, f0
      mr        r28, r23

    .loc_0x73C:
      lwz       r0, 0xEC(r1)
      cmplwi    r0, 0
      bne-      .loc_0x768
      lwz       r3, 0xE8(r1)
      lwz       r4, 0xE4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xE4(r1)
      b         .loc_0x7F8

    .loc_0x768:
      lwz       r3, 0xE8(r1)
      lwz       r4, 0xE4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xE4(r1)
      b         .loc_0x7DC

    .loc_0x788:
      lwz       r3, 0xE8(r1)
      lwz       r4, 0xE4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xEC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x7F8
      lwz       r3, 0xE8(r1)
      lwz       r4, 0xE4(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xE4(r1)

    .loc_0x7DC:
      lwz       r12, 0xE0(r1)
      addi      r3, r1, 0xE0
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x788

    .loc_0x7F8:
      lwz       r3, 0xE8(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xE4(r1)
      cmplw     r4, r3
      bne+      .loc_0x680
      lwz       r3, -0x6D20(r13)
      bl        -0x24E7AC
      mr.       r22, r3
      beq-      .loc_0x8BC
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x8BC
      mr        r4, r22
      lfs       f30, 0x4C(r26)
      lwz       r12, 0x0(r22)
      addi      r3, r1, 0x68
      lfs       f0, 0x50(r26)
      lfs       f29, 0x54(r26)
      lwz       r12, 0x8(r12)
      stfs      f30, 0x50(r1)
      stfs      f0, 0x54(r1)
      stfs      f29, 0x58(r1)
      stfs      f30, 0x5C(r1)
      stfs      f0, 0x60(r1)
      stfs      f29, 0x64(r1)
      mtctr     r12
      bctrl
      mr        r4, r22
      addi      r3, r1, 0x74
      lwz       r12, 0x0(r22)
      lfs       f28, 0x70(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      fsubs     f0, f28, f29
      lfs       f1, 0x74(r1)
      fsubs     f1, f1, f30
      fmuls     f0, f0, f0
      fmadds    f0, f1, f1, f0
      fcmpo     cr0, f0, f31
      bge-      .loc_0x8BC
      fmr       f31, f0
      mr        r28, r23

    .loc_0x8BC:
      addi      r24, r24, 0x2
      addi      r23, r23, 0x1

    .loc_0x8C4:
      cmpw      r23, r29
      blt+      .loc_0x568
      cmpwi     r28, 0
      bge-      .loc_0x94C
      lfd       f30, 0x1188(r2)
      xoris     r24, r29, 0x8000
      lfs       f29, 0x1198(r2)
      addi      r23, r1, 0x108
      li        r22, 0
      lis       r25, 0x4330

    .loc_0x8EC:
      bl        -0x2DFEFC
      xoris     r0, r3, 0x8000
      stw       r25, 0x148(r1)
      lha       r3, 0x342(r31)
      stw       r0, 0x14C(r1)
      lfd       f0, 0x148(r1)
      stw       r24, 0x144(r1)
      fsubs     f0, f0, f30
      stw       r25, 0x140(r1)
      fdivs     f1, f0, f29
      lfd       f0, 0x140(r1)
      fsubs     f0, f0, f30
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x138(r1)
      lwz       r26, 0x13C(r1)
      rlwinm    r0,r26,1,0,30
      lhax      r0, r23, r0
      cmpw      r3, r0
      bne-      .loc_0xDDC
      addi      r22, r22, 0x1
      cmpwi     r22, 0x64
      blt+      .loc_0x8EC
      b         .loc_0xDDC

    .loc_0x94C:
      mr        r26, r28
      b         .loc_0xDDC

    .loc_0x954:
      lfs       f26, 0x119C(r2)
      li        r22, 0
      b         .loc_0xA4C

    .loc_0x960:
      lha       r4, 0x0(r24)
      lha       r0, 0x342(r31)
      cmpw      r0, r4
      beq-      .loc_0xA44
      lwz       r12, 0x0(r30)
      mr        r3, r30
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr        r23, r3
      lwz       r3, -0x6D20(r13)
      bl        -0x24E91C
      mr.       r25, r3
      beq-      .loc_0xA44
      mr        r4, r25
      lfs       f29, 0x4C(r23)
      lwz       r12, 0x0(r25)
      addi      r3, r1, 0x2C
      lfs       f31, 0x50(r23)
      lfs       f30, 0x54(r23)
      lwz       r12, 0x8(r12)
      stfs      f29, 0x8(r1)
      stfs      f31, 0xC(r1)
      stfs      f30, 0x10(r1)
      stfs      f29, 0x14(r1)
      stfs      f31, 0x18(r1)
      stfs      f30, 0x1C(r1)
      stfs      f29, 0x20(r1)
      stfs      f31, 0x24(r1)
      stfs      f30, 0x28(r1)
      mtctr     r12
      bctrl
      mr        r4, r25
      addi      r3, r1, 0x38
      lwz       r12, 0x0(r25)
      lfs       f27, 0x34(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r25
      addi      r3, r1, 0x44
      lwz       r12, 0x0(r25)
      lfs       f28, 0x3C(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      fsubs     f0, f28, f31
      lfs       f2, 0x44(r1)
      fsubs     f1, f27, f30
      fsubs     f2, f2, f29
      fmuls     f0, f0, f0
      fmadds    f0, f2, f2, f0
      fmadds    f0, f1, f1, f0
      fcmpo     cr0, f0, f26
      bge-      .loc_0xA44
      fmr       f26, f0
      mr        r28, r22

    .loc_0xA44:
      addi      r24, r24, 0x2
      addi      r22, r22, 0x1

    .loc_0xA4C:
      cmpw      r22, r29
      blt+      .loc_0x960
      cmpwi     r28, 0
      blt-      .loc_0xA64
      cmpwi     r29, 0x2
      bgt-      .loc_0xAB4

    .loc_0xA64:
      bl        -0x2E0074
      lis       r4, 0x4330
      xoris     r0, r3, 0x8000
      stw       r0, 0x14C(r1)
      xoris     r0, r29, 0x8000
      lfd       f2, 0x1188(r2)
      stw       r4, 0x148(r1)
      lfs       f0, 0x1198(r2)
      lfd       f1, 0x148(r1)
      stw       r0, 0x144(r1)
      fsubs     f1, f1, f2
      stw       r4, 0x140(r1)
      fdivs     f1, f1, f0
      lfd       f0, 0x140(r1)
      fsubs     f0, f0, f2
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x138(r1)
      lwz       r26, 0x13C(r1)
      b         .loc_0xDDC

    .loc_0xAB4:
      lfd       f30, 0x1188(r2)
      xoris     r23, r29, 0x8000
      lfs       f31, 0x1198(r2)
      li        r22, 0
      lis       r24, 0x4330

    .loc_0xAC8:
      bl        -0x2E00D8
      xoris     r0, r3, 0x8000
      stw       r24, 0x148(r1)
      stw       r0, 0x14C(r1)
      lfd       f0, 0x148(r1)
      stw       r23, 0x144(r1)
      fsubs     f0, f0, f30
      stw       r24, 0x140(r1)
      fdivs     f1, f0, f31
      lfd       f0, 0x140(r1)
      fsubs     f0, f0, f30
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x138(r1)
      lwz       r26, 0x13C(r1)
      cmpw      r26, r28
      bne-      .loc_0xB1C
      addi      r22, r22, 0x1
      li        r26, -0x1
      cmpwi     r22, 0xA
      blt+      .loc_0xAC8

    .loc_0xB1C:
      cmpwi     r26, 0
      bge-      .loc_0xDDC
      mr        r26, r28
      b         .loc_0xDDC

    .loc_0xB2C:
      lfs       f31, 0x10D8(r2)
      li        r22, 0
      b         .loc_0xD78

    .loc_0xB38:
      lha       r23, 0x0(r24)
      lha       r0, 0x342(r31)
      cmpw      r0, r23
      beq-      .loc_0xD70
      mr        r3, r30
      lha       r4, 0x340(r31)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lfs       f27, 0x4C(r3)
      lfs       f28, 0x54(r3)
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lha       r4, 0x342(r31)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x4C(r3)
      lfs       f3, 0x54(r3)
      fsubs     f2, f27, f0
      lfs       f1, 0x10D8(r2)
      fsubs     f3, f28, f3
      fmuls     f4, f1, f1
      stfs      f1, 0xD8(r1)
      fmuls     f0, f2, f2
      fmuls     f5, f3, f3
      stfs      f2, 0xD4(r1)
      fadds     f0, f0, f4
      stfs      f3, 0xDC(r1)
      fadds     f0, f5, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0xBD8
      fmadds    f0, f2, f2, f4
      fadds     f3, f5, f0
      fcmpo     cr0, f3, f1
      ble-      .loc_0xBDC
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0xBDC

    .loc_0xBD8:
      fmr       f3, f1

    .loc_0xBDC:
      lfs       f0, 0x10D8(r2)
      fcmpo     cr0, f3, f0
      ble-      .loc_0xC14
      lfs       f0, 0x1120(r2)
      lfs       f2, 0xD4(r1)
      fdivs     f3, f0, f3
      lfs       f1, 0xD8(r1)
      lfs       f0, 0xDC(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0xD4(r1)
      stfs      f1, 0xD8(r1)
      stfs      f0, 0xDC(r1)

    .loc_0xC14:
      lfs       f1, 0x10D8(r2)
      addi      r3, r1, 0xC8
      lfs       f0, 0x1120(r2)
      addi      r4, r1, 0xD4
      stfs      f1, 0xC8(r1)
      addi      r5, r1, 0xBC
      stfs      f0, 0xCC(r1)
      stfs      f1, 0xD0(r1)
      bl        -0x2BE860
      lfs       f2, 0xBC(r1)
      lfs       f1, 0xC0(r1)
      fmuls     f0, f2, f2
      lfs       f3, 0xC4(r1)
      fmuls     f4, f1, f1
      lfs       f1, 0x10D8(r2)
      fmuls     f3, f3, f3
      fadds     f0, f0, f4
      fadds     f0, f3, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0xC80
      fmadds    f0, f2, f2, f4
      fadds     f3, f3, f0
      fcmpo     cr0, f3, f1
      ble-      .loc_0xC84
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0xC84

    .loc_0xC80:
      fmr       f3, f1

    .loc_0xC84:
      lfs       f0, 0x10D8(r2)
      fcmpo     cr0, f3, f0
      ble-      .loc_0xCBC
      lfs       f0, 0x1120(r2)
      lfs       f2, 0xBC(r1)
      fdivs     f3, f0, f3
      lfs       f1, 0xC0(r1)
      lfs       f0, 0xC4(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0xBC(r1)
      stfs      f1, 0xC0(r1)
      stfs      f0, 0xC4(r1)

    .loc_0xCBC:
      mr        r3, r30
      mr        r4, r23
      lwz       r12, 0x0(r30)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x50(r3)
      lfs       f0, 0x190(r31)
      lfs       f3, 0x4C(r3)
      fsubs     f4, f1, f0
      lfs       f2, 0x18C(r31)
      lfs       f1, 0x54(r3)
      lfs       f0, 0x194(r31)
      fsubs     f3, f3, f2
      fmuls     f2, f4, f4
      fsubs     f5, f1, f0
      lfs       f0, 0x10D8(r2)
      fmadds    f1, f3, f3, f2
      fmuls     f2, f5, f5
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0xD24
      ble-      .loc_0xD28
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0xD28

    .loc_0xD24:
      fmr       f1, f0

    .loc_0xD28:
      lfs       f0, 0x10D8(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xD48
      lfs       f0, 0x1120(r2)
      fdivs     f0, f0, f1
      fmuls     f3, f3, f0
      fmuls     f4, f4, f0
      fmuls     f5, f5, f0

    .loc_0xD48:
      lfs       f0, 0xC0(r1)
      lfs       f1, 0xBC(r1)
      fmuls     f0, f0, f4
      lfs       f2, 0xC4(r1)
      fmadds    f0, f1, f3, f0
      fmadds    f0, f2, f5, f0
      fcmpo     cr0, f0, f31
      ble-      .loc_0xD70
      fmr       f31, f0
      mr        r28, r22

    .loc_0xD70:
      addi      r24, r24, 0x2
      addi      r22, r22, 0x1

    .loc_0xD78:
      cmpw      r22, r29
      blt+      .loc_0xB38
      cmpwi     r28, 0
      bge-      .loc_0xDD8
      bl        -0x2E0398
      lis       r4, 0x4330
      xoris     r0, r3, 0x8000
      stw       r0, 0x14C(r1)
      xoris     r0, r29, 0x8000
      lfd       f2, 0x1188(r2)
      stw       r4, 0x148(r1)
      lfs       f0, 0x1198(r2)
      lfd       f1, 0x148(r1)
      stw       r0, 0x144(r1)
      fsubs     f1, f1, f2
      stw       r4, 0x140(r1)
      fdivs     f1, f1, f0
      lfd       f0, 0x140(r1)
      fsubs     f0, f0, f2
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x138(r1)
      lwz       r26, 0x13C(r1)
      b         .loc_0xDDC

    .loc_0xDD8:
      mr        r26, r28

    .loc_0xDDC:
      cmpw      r26, r29
      blt-      .loc_0xDE8
      subi      r26, r29, 0x1

    .loc_0xDE8:
      mr        r3, r30
      rlwinm    r0,r26,1,0,30
      lwz       r12, 0x0(r30)
      addi      r4, r1, 0x108
      lhax      r22, r4, r0
      lwz       r12, 0x2C(r12)
      mr        r4, r22
      mtctr     r12
      bctrl
      rlwinm.   r0,r27,0,24,31
      bne-      .loc_0xE28
      cmpwi     r29, 0x1
      beq-      .loc_0xE28
      lha       r0, 0x342(r31)
      cmpw      r22, r0
      beq-      .loc_0xE54

    .loc_0xE28:
      lha       r0, 0x342(r31)
      cmpw      r0, r22
      bne-      .loc_0xE40
      li        r0, 0x1
      stb       r0, 0x338(r31)
      b         .loc_0xE48

    .loc_0xE40:
      li        r0, 0
      stb       r0, 0x338(r31)

    .loc_0xE48:
      lha       r0, 0x340(r31)
      sth       r0, 0x342(r31)
      sth       r22, 0x340(r31)

    .loc_0xE54:
      mr        r3, r30
      lha       r4, 0x340(r31)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0xE8C
      lfs       f1, 0x50(r3)
      lfs       f2, 0x54(r3)
      lfs       f0, 0x4C(r3)
      stfs      f0, 0x2D0(r31)
      stfs      f1, 0x2D4(r31)
      stfs      f2, 0x2D8(r31)

    .loc_0xE8C:
      psq_l     f31,0x1D8(r1),0,0
      lfd       f31, 0x1D0(r1)
      psq_l     f30,0x1C8(r1),0,0
      lfd       f30, 0x1C0(r1)
      psq_l     f29,0x1B8(r1),0,0
      lfd       f29, 0x1B0(r1)
      psq_l     f28,0x1A8(r1),0,0
      lfd       f28, 0x1A0(r1)
      psq_l     f27,0x198(r1),0,0
      lfd       f27, 0x190(r1)
      psq_l     f26,0x188(r1),0,0
      lfd       f26, 0x180(r1)
      lmw       r22, 0x158(r1)
      lwz       r0, 0x1E4(r1)
      mtlr      r0
      addi      r1, r1, 0x1E0
      blr

    .loc_0xED0:
    */
}

/*
 * --INFO--
 * Address:	803A9A80
 * Size:	0000D0
 */
void Game::BlackMan::Obj::findNextTraceRoutePoint(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0x35C(r3)
      cmplwi    r0, 0
      beq-      .loc_0xBC
      mr        r4, r0
      b         .loc_0x98

    .loc_0x28:
      lha       r0, 0x20(r4)
      lha       r3, 0x340(r31)
      cmpw      r0, r3
      bne-      .loc_0x94
      sth       r3, 0x342(r31)
      lwz       r3, 0xC(r4)
      cmplwi    r3, 0
      beq-      .loc_0x54
      lha       r0, 0x20(r3)
      sth       r0, 0x340(r31)
      b         .loc_0x5C

    .loc_0x54:
      lha       r0, 0x344(r31)
      sth       r0, 0x340(r31)

    .loc_0x5C:
      lwz       r3, -0x6CF8(r13)
      lha       r4, 0x340(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x50(r3)
      lfs       f2, 0x54(r3)
      lfs       f0, 0x4C(r3)
      stfs      f0, 0x2D0(r31)
      stfs      f1, 0x2D4(r31)
      stfs      f2, 0x2D8(r31)
      b         .loc_0xBC

    .loc_0x94:
      lwz       r4, 0xC(r4)

    .loc_0x98:
      cmplwi    r4, 0
      bne+      .loc_0x28
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5688
      li        r4, 0x72E
      addi      r5, r5, 0x5708
      crclr     6, 0x6
      bl        -0x37F4F8

    .loc_0xBC:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A9B50
 * Size:	000114
 */
void Game::BlackMan::Obj::isEndPathFinder(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lis       r3, 0x8049
      lbz       r0, 0x34C(r30)
      addi      r31, r3, 0x5670
      cmplwi    r0, 0
      beq-      .loc_0x34
      li        r3, 0x1
      b         .loc_0xFC

    .loc_0x34:
      lwz       r0, -0x6C80(r13)
      cmplwi    r0, 0
      bne-      .loc_0x54
      addi      r3, r31, 0x18
      addi      r5, r31, 0x28
      li        r4, 0x73A
      crclr     6, 0x6
      bl        -0x37F560

    .loc_0x54:
      lwz       r3, -0x6C80(r13)
      lwz       r4, 0x348(r30)
      bl        -0x2060DC
      cmpwi     r3, 0x2
      beq-      .loc_0xA8
      bge-      .loc_0x7C
      cmpwi     r3, 0
      beq-      .loc_0x88
      bge-      .loc_0xB8
      b         .loc_0xF8

    .loc_0x7C:
      cmpwi     r3, 0x4
      bge-      .loc_0xF8
      b         .loc_0xD4

    .loc_0x88:
      lwz       r3, -0x6C80(r13)
      addi      r5, r30, 0x35C
      lwz       r4, 0x348(r30)
      bl        -0x206244
      li        r0, 0x1
      li        r3, 0x1
      stb       r0, 0x34C(r30)
      b         .loc_0xFC

    .loc_0xA8:
      li        r0, 0
      li        r3, 0
      stb       r0, 0x34C(r30)
      b         .loc_0xFC

    .loc_0xB8:
      li        r0, 0
      mr        r3, r30
      stb       r0, 0x34C(r30)
      li        r4, 0x1
      bl        .loc_0x114
      li        r3, 0
      b         .loc_0xFC

    .loc_0xD4:
      addi      r3, r31, 0x18
      addi      r5, r31, 0xB0
      li        r4, 0x74E
      crclr     6, 0x6
      bl        -0x37F5F4
      li        r0, 0
      li        r3, 0
      stb       r0, 0x34C(r30)
      b         .loc_0xFC

    .loc_0xF8:
      li        r3, 0

    .loc_0xFC:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x114:
    */
}

/*
 * --INFO--
 * Address:	803A9C64
 * Size:	0001D8
 */
void Game::BlackMan::Obj::setPathFinder((bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stmw      r27, 0x3C(r1)
      mr        r29, r3
      mr        r30, r4
      bl        .loc_0x1D8
      li        r4, 0
      li        r0, -0x1
      stw       r4, 0x2C(r1)
      lwz       r3, -0x6CF8(r13)
      stw       r4, 0x28(r1)
      stb       r4, 0x1C(r1)
      sth       r0, 0x24(r1)
      stw       r4, 0x20(r1)
      lfs       f0, 0x18C(r29)
      stfs      f0, 0x10(r1)
      lfs       f0, 0x190(r29)
      stfs      f0, 0x14(r1)
      lfs       f0, 0x194(r29)
      stfs      f0, 0x18(r1)
      lwz       r31, 0x8(r3)
      cmplwi    r31, 0
      bne-      .loc_0x7C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5688
      li        r4, 0x765
      addi      r5, r5, 0x5698
      crclr     6, 0x6
      bl        -0x37F69C

    .loc_0x7C:
      mr        r3, r31
      addi      r4, r1, 0x10
      bl        -0x23697C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1A8
      lwz       r3, 0x28(r1)
      lwz       r4, 0x2C(r1)
      lfs       f3, 0x1A0(r29)
      lfs       f1, 0x54(r4)
      lfs       f0, 0x54(r3)
      fsubs     f4, f1, f3
      lfs       f2, 0x4C(r4)
      fsubs     f3, f0, f3
      lfs       f6, 0x198(r29)
      lfs       f1, 0x4C(r3)
      fsubs     f5, f2, f6
      fmuls     f0, f4, f4
      lha       r0, 0x36(r3)
      fsubs     f2, f1, f6
      lha       r3, 0x36(r4)
      fmuls     f1, f3, f3
      fmadds    f0, f5, f5, f0
      mr        r28, r0
      mr        r27, r3
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0xF0
      mr        r27, r0
      mr        r28, r3

    .loc_0xF0:
      mr        r3, r31
      mr        r4, r28
      lwz       r12, 0x0(r31)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x118
      mr        r28, r27

    .loc_0x118:
      lha       r4, 0x340(r29)
      rlwinm    r3,r30,0,24,31
      neg       r0, r3
      sth       r4, 0x342(r29)
      or        r0, r0, r3
      srawi     r3, r0, 0x1F
      sth       r28, 0x340(r29)
      addi      r30, r3, 0xC3
      lwz       r4, 0x348(r29)
      cmplwi    r4, 0
      beq-      .loc_0x14C
      lwz       r3, -0x6C80(r13)
      bl        -0x20634C

    .loc_0x14C:
      lha       r5, 0x344(r29)
      addi      r4, r1, 0x8
      lha       r0, 0x340(r29)
      lwz       r3, -0x6C80(r13)
      sth       r0, 0x8(r1)
      sth       r5, 0xA(r1)
      stb       r30, 0xC(r1)
      bl        -0x206578
      stw       r3, 0x348(r29)
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lha       r4, 0x340(r29)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x50(r3)
      lfs       f2, 0x54(r3)
      lfs       f0, 0x4C(r3)
      li        r3, 0x1
      stfs      f0, 0x2D0(r29)
      stfs      f1, 0x2D4(r29)
      stfs      f2, 0x2D8(r29)
      b         .loc_0x1C4

    .loc_0x1A8:
      lis       r3, 0x8049
      li        r4, 0x78E
      addi      r3, r3, 0x5688
      li        r5, 0
      crclr     6, 0x6
      bl        -0x37F7E0
      li        r3, 0

    .loc_0x1C4:
      lmw       r27, 0x3C(r1)
      lwz       r0, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr

    .loc_0x1D8:
    */
}

/*
 * --INFO--
 * Address:	803A9E3C
 * Size:	000044
 */
void Game::BlackMan::Obj::releasePathFinder(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stb       r0, 0x34C(r3)
      lwz       r0, -0x6C80(r13)
      cmplwi    r0, 0
      beq-      .loc_0x34
      lwz       r4, 0x348(r3)
      cmplwi    r4, 0
      beq-      .loc_0x34
      mr        r3, r0
      bl        -0x20640C

    .loc_0x34:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803A9E80
 * Size:	000590
 */
void Game::BlackMan::Obj::jointMtxCalc((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x180(r1)
      mflr      r0
      stw       r0, 0x184(r1)
      stfd      f31, 0x170(r1)
      psq_st    f31,0x178(r1),0,0
      stfd      f30, 0x160(r1)
      psq_st    f30,0x168(r1),0,0
      stfd      f29, 0x150(r1)
      psq_st    f29,0x158(r1),0,0
      stfd      f28, 0x140(r1)
      psq_st    f28,0x148(r1),0,0
      stfd      f27, 0x130(r1)
      psq_st    f27,0x138(r1),0,0
      stfd      f26, 0x120(r1)
      psq_st    f26,0x128(r1),0,0
      stfd      f25, 0x110(r1)
      psq_st    f25,0x118(r1),0,0
      stfd      f24, 0x100(r1)
      psq_st    f24,0x108(r1),0,0
      stfd      f23, 0xF0(r1)
      psq_st    f23,0xF8(r1),0,0
      stfd      f22, 0xE0(r1)
      psq_st    f22,0xE8(r1),0,0
      stfd      f21, 0xD0(r1)
      psq_st    f21,0xD8(r1),0,0
      stfd      f20, 0xC0(r1)
      psq_st    f20,0xC8(r1),0,0
      stmw      r17, 0x84(r1)
      lis       r5, 0x8049
      mr        r26, r3
      mr        r27, r4
      addi      r29, r5, 0x5670
      bl        -0x2A2B0C
      cmpwi     r27, 0x2
      bge-      .loc_0xBC
      cmpwi     r3, 0x6
      beq-      .loc_0x9C
      cmpwi     r3, 0x7
      bne-      .loc_0xBC

    .loc_0x9C:
      lwz       r0, 0x1E0(r26)
      rlwinm.   r0,r0,0,22,22
      bne-      .loc_0x51C
      lwz       r3, 0x364(r26)
      lwz       r0, 0x1E0(r3)
      rlwinm.   r0,r0,0,22,22
      bne-      .loc_0xBC
      b         .loc_0x51C

    .loc_0xBC:
      lwz       r17, 0x364(r26)
      cmplwi    r17, 0
      beq-      .loc_0x51C
      cmpwi     r27, 0x4
      bge-      .loc_0x51C
      lwz       r3, 0xC8(r29)
      rlwinm    r28,r27,2,0,29
      lwz       r18, 0xCC(r29)
      addi      r4, r1, 0x48
      lwz       r19, 0xD0(r29)
      lwz       r20, 0xD4(r29)
      lwz       r21, 0xD8(r29)
      lwz       r22, 0xDC(r29)
      lwz       r23, 0xE0(r29)
      lwz       r24, 0xE4(r29)
      lwz       r25, 0xE8(r29)
      lwz       r31, 0xEC(r29)
      lwz       r30, 0xF0(r29)
      lwz       r12, 0xF4(r29)
      lwz       r11, 0xF8(r29)
      lwz       r10, 0xFC(r29)
      lwz       r9, 0x100(r29)
      lwz       r8, 0x104(r29)
      lwz       r7, 0x120(r29)
      lwz       r6, 0x124(r29)
      lwz       r5, 0x128(r29)
      lwz       r0, 0x12C(r29)
      stw       r3, 0x48(r1)
      lwz       r3, 0x174(r17)
      stw       r18, 0x4C(r1)
      stw       r19, 0x50(r1)
      stw       r20, 0x54(r1)
      stw       r21, 0x38(r1)
      lwzx      r4, r4, r28
      stw       r22, 0x3C(r1)
      stw       r23, 0x40(r1)
      stw       r24, 0x44(r1)
      stw       r25, 0x28(r1)
      stw       r31, 0x2C(r1)
      stw       r30, 0x30(r1)
      stw       r12, 0x34(r1)
      stw       r11, 0x18(r1)
      stw       r10, 0x1C(r1)
      stw       r9, 0x20(r1)
      stw       r8, 0x24(r1)
      stw       r7, 0x8(r1)
      stw       r6, 0xC(r1)
      stw       r5, 0x10(r1)
      stw       r0, 0x14(r1)
      bl        0x94FE4
      bl        0x7F89C
      addi      r4, r1, 0x38
      mr        r29, r3
      lwz       r3, 0x174(r26)
      lwzx      r4, r4, r28
      bl        0x94FCC
      bl        0x7F884
      lwz       r0, 0x2F0(r26)
      lfs       f7, 0x11F0(r2)
      cmpwi     r0, 0x1
      bge-      .loc_0x1B4
      lfs       f7, 0x10D8(r2)

    .loc_0x1B4:
      cmpwi     r27, 0x2
      bge-      .loc_0x1C0
      lfs       f7, 0x10D8(r2)

    .loc_0x1C0:
      rlwinm    r4,r27,1,31,31
      rlwinm    r0,r27,0,31,31
      xor       r0, r0, r4
      sub.      r0, r0, r4
      beq-      .loc_0x1D8
      fneg      f7, f7

    .loc_0x1D8:
      lfs       f3, 0x4(r29)
      lis       r4, 0x8051
      lfs       f2, 0xC(r29)
      subi      r4, r4, 0xC2C
      lfs       f1, 0x14(r29)
      lfs       f0, 0x1C(r29)
      fmadds    f2, f3, f7, f2
      lfs       f5, 0x0(r29)
      fmadds    f0, f1, f7, f0
      lfs       f4, 0x10D8(r2)
      lfs       f1, 0x10(r29)
      fmadds    f5, f5, f4, f2
      lfs       f3, 0x24(r29)
      fmadds    f6, f1, f4, f0
      lfs       f2, 0x2C(r29)
      lfs       f1, 0x1C(r3)
      fmadds    f2, f3, f7, f2
      lfs       f0, 0xC(r3)
      fsubs     f30, f6, f1
      lfs       f3, 0x20(r29)
      lfs       f1, 0x2C(r3)
      fsubs     f31, f5, f0
      fmadds    f0, f3, f4, f2
      stfs      f5, 0xC(r3)
      stfs      f6, 0x1C(r3)
      fsubs     f29, f0, f1
      stfs      f0, 0x2C(r3)
      bl        -0x2BFDF8
      addi      r4, r1, 0x28
      lwz       r3, 0x174(r26)
      lwzx      r4, r4, r28
      bl        0x94F10
      bl        0x7F7C8
      addi      r4, r1, 0x18
      mr        r30, r3
      lwz       r3, 0x174(r26)
      lwzx      r4, r4, r28
      bl        0x94EF8
      bl        0x7F7B0
      lwz       r4, 0xC0(r26)
      cmpwi     r27, 0x2
      mr        r31, r3
      lfs       f0, 0xA30(r4)
      lfs       f1, 0xA34(r4)
      fmuls     f28, f31, f0
      fmuls     f27, f30, f0
      fmuls     f26, f29, f0
      bge-      .loc_0x29C
      lfs       f1, 0x1140(r2)

    .loc_0x29C:
      lfs       f22, 0x10D8(r2)
      cmpwi     r27, 0x2
      fmuls     f25, f31, f1
      fmr       f21, f22
      fmr       f20, f22
      fmuls     f24, f30, f1
      fmuls     f23, f29, f1
      bge-      .loc_0x468
      lbz       r0, 0xA18(r4)
      cmplwi    r0, 0
      beq-      .loc_0x468
      lwz       r3, 0x364(r26)
      lfs       f1, 0x2CC(r3)
      fcmpo     cr0, f1, f22
      bge-      .loc_0x304
      lfs       f0, 0x1190(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x58(r1)
      lwz       r0, 0x5C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f0, f0
      b         .loc_0x328

    .loc_0x304:
      lfs       f0, 0x1194(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x60(r1)
      lwz       r0, 0x64(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0

    .loc_0x328:
      fabs      f0, f0
      lwz       r4, 0xC0(r26)
      lwz       r3, 0x364(r26)
      lfs       f2, 0xA40(r4)
      frsp      f1, f0
      lfs       f3, 0x2CC(r3)
      lfs       f0, 0x10D8(r2)
      fcmpo     cr0, f3, f0
      fmuls     f23, f2, f1
      bge-      .loc_0x37C
      lfs       f0, 0x1190(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x68(r1)
      lwz       r0, 0x6C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f0, f0
      b         .loc_0x3A0

    .loc_0x37C:
      lfs       f0, 0x1194(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x70(r1)
      lwz       r0, 0x74(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0

    .loc_0x3A0:
      fabs      f0, f0
      lwz       r4, 0xC0(r26)
      mr        r3, r26
      lfs       f1, 0xA44(r4)
      frsp      f0, f0
      fmuls     f24, f1, f0
      bl        -0x2A2E44
      lwz       r4, 0x364(r26)
      lfs       f0, 0x10D8(r2)
      lfs       f1, 0x2CC(r4)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x3F0
      cmpwi     r27, 0
      bne-      .loc_0x414
      lfs       f1, 0x0(r29)
      fmr       f21, f24
      lfs       f0, 0x20(r29)
      fmuls     f22, f1, f23
      fmuls     f20, f0, f23
      b         .loc_0x414

    .loc_0x3F0:
      cmpwi     r27, 0x1
      bne-      .loc_0x414
      lfs       f1, 0x0(r29)
      fmr       f21, f24
      lfs       f0, 0x20(r29)
      fneg      f1, f1
      fneg      f0, f0
      fmuls     f22, f1, f23
      fmuls     f20, f0, f23

    .loc_0x414:
      lwz       r3, 0xC0(r26)
      lbz       r0, 0xA11(r3)
      cmplwi    r0, 0
      bne-      .loc_0x430
      fmr       f25, f22
      fmr       f23, f20
      b         .loc_0x468

    .loc_0x430:
      mulli     r0, r27, 0xC
      lfs       f5, 0xC(r29)
      lfs       f3, 0x1C(r29)
      lfs       f1, 0x2C(r29)
      add       r3, r4, r0
      lfs       f4, 0x2EC(r3)
      lfs       f2, 0x2F0(r3)
      lfs       f0, 0x2F4(r3)
      fsubs     f4, f5, f4
      fsubs     f2, f3, f2
      fsubs     f0, f1, f0
      fadds     f25, f22, f4
      fadds     f24, f21, f2
      fadds     f23, f20, f0

    .loc_0x468:
      lfs       f0, 0xC(r30)
      addi      r3, r1, 0x8
      lwzx      r4, r3, r28
      fadds     f0, f0, f28
      stfs      f0, 0xC(r30)
      lfs       f0, 0x1C(r30)
      fadds     f0, f0, f27
      stfs      f0, 0x1C(r30)
      lfs       f0, 0x2C(r30)
      fadds     f0, f0, f26
      stfs      f0, 0x2C(r30)
      lfs       f0, 0xC(r31)
      fadds     f0, f0, f25
      stfs      f0, 0xC(r31)
      lfs       f0, 0x1C(r31)
      fadds     f0, f0, f24
      stfs      f0, 0x1C(r31)
      lfs       f0, 0x2C(r31)
      fadds     f0, f0, f23
      stfs      f0, 0x2C(r31)
      lwz       r3, 0x174(r26)
      bl        0x94CA8
      bl        0x7F560
      lwz       r4, 0xC0(r26)
      cmpwi     r27, 0x2
      lfs       f0, 0xA38(r4)
      fmuls     f1, f31, f0
      fmuls     f2, f30, f0
      fmuls     f3, f29, f0
      bge-      .loc_0x4F8
      fmuls     f25, f25, f0
      fmuls     f24, f24, f0
      fmuls     f23, f23, f0
      fmr       f1, f25
      fmr       f2, f24
      fmr       f3, f23

    .loc_0x4F8:
      lfs       f0, 0xC(r3)
      fadds     f0, f0, f1
      stfs      f0, 0xC(r3)
      lfs       f0, 0x1C(r3)
      fadds     f0, f0, f2
      stfs      f0, 0x1C(r3)
      lfs       f0, 0x2C(r3)
      fadds     f0, f0, f3
      stfs      f0, 0x2C(r3)

    .loc_0x51C:
      psq_l     f31,0x178(r1),0,0
      lfd       f31, 0x170(r1)
      psq_l     f30,0x168(r1),0,0
      lfd       f30, 0x160(r1)
      psq_l     f29,0x158(r1),0,0
      lfd       f29, 0x150(r1)
      psq_l     f28,0x148(r1),0,0
      lfd       f28, 0x140(r1)
      psq_l     f27,0x138(r1),0,0
      lfd       f27, 0x130(r1)
      psq_l     f26,0x128(r1),0,0
      lfd       f26, 0x120(r1)
      psq_l     f25,0x118(r1),0,0
      lfd       f25, 0x110(r1)
      psq_l     f24,0x108(r1),0,0
      lfd       f24, 0x100(r1)
      psq_l     f23,0xF8(r1),0,0
      lfd       f23, 0xF0(r1)
      psq_l     f22,0xE8(r1),0,0
      lfd       f22, 0xE0(r1)
      psq_l     f21,0xD8(r1),0,0
      lfd       f21, 0xD0(r1)
      psq_l     f20,0xC8(r1),0,0
      lfd       f20, 0xC0(r1)
      lmw       r17, 0x84(r1)
      lwz       r0, 0x184(r1)
      mtlr      r0
      addi      r1, r1, 0x180
      blr
    */
}

/*
 * --INFO--
 * Address:	803AA410
 * Size:	00028C
 */
void Game::BlackMan::Obj::bodyMtxCalc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      stw       r0, 0x84(r1)
      stw       r31, 0x7C(r1)
      stw       r30, 0x78(r1)
      mr        r30, r3
      lwz       r3, 0xC0(r3)
      lbz       r0, 0xA18(r3)
      cmplwi    r0, 0
      beq-      .loc_0x274
      lhz       r0, 0x36A(r30)
      lwz       r3, 0x174(r30)
      mulli     r0, r0, 0x3C
      lwz       r3, 0x10(r3)
      add       r3, r3, r0
      bl        0x7F454
      lwz       r5, 0x364(r30)
      mr        r31, r3
      lwz       r4, 0x11F4(r2)
      lfs       f1, 0x2CC(r5)
      lfs       f0, 0x10D8(r2)
      lwz       r0, 0x11F8(r2)
      fcmpo     cr0, f1, f0
      stw       r4, 0x8(r1)
      stw       r0, 0xC(r1)
      ble-      .loc_0x84
      lwz       r3, 0x174(r5)
      bl        0x94B68
      bl        0x7F420
      lfs       f4, 0xC(r3)
      lfs       f5, 0x1C(r3)
      lfs       f0, 0x2C(r3)
      b         .loc_0xA0

    .loc_0x84:
      lwz       r3, 0x174(r5)
      mr        r4, r0
      bl        0x94B48
      bl        0x7F400
      lfs       f4, 0xC(r3)
      lfs       f5, 0x1C(r3)
      lfs       f0, 0x2C(r3)

    .loc_0xA0:
      lfs       f1, 0x190(r30)
      lfs       f3, 0x18C(r30)
      fsubs     f5, f5, f1
      lfs       f2, 0x194(r30)
      fsubs     f4, f4, f3
      lfs       f1, 0x10D8(r2)
      fsubs     f0, f0, f2
      fmuls     f2, f5, f5
      fmuls     f3, f0, f0
      fmadds    f2, f4, f4, f2
      fadds     f2, f3, f2
      fcmpo     cr0, f2, f1
      ble-      .loc_0xE4
      ble-      .loc_0xE8
      fsqrte    f1, f2
      fmuls     f2, f1, f2
      b         .loc_0xE8

    .loc_0xE4:
      fmr       f2, f1

    .loc_0xE8:
      lfs       f1, 0x10D8(r2)
      fcmpo     cr0, f2, f1
      ble-      .loc_0x104
      lfs       f1, 0x1120(r2)
      fdivs     f1, f1, f2
      fmuls     f4, f4, f1
      fmuls     f0, f0, f1

    .loc_0x104:
      lwz       r3, 0x364(r30)
      lfs       f1, 0x10D8(r2)
      lfs       f2, 0x2CC(r3)
      fcmpo     cr0, f2, f1
      bge-      .loc_0x144
      lfs       f1, 0x1190(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f1, f2, f1
      fctiwz    f1, f1
      stfd      f1, 0x58(r1)
      lwz       r0, 0x5C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f1, r3, r0
      fneg      f1, f1
      b         .loc_0x168

    .loc_0x144:
      lfs       f1, 0x1194(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f1, f2, f1
      fctiwz    f1, f1
      stfd      f1, 0x60(r1)
      lwz       r0, 0x64(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f1, r3, r0

    .loc_0x168:
      lwz       r4, 0xC0(r30)
      fabs      f3, f1
      lfs       f1, 0xC(r31)
      lis       r3, 0x8051
      lfs       f2, 0xA28(r4)
      subi      r4, r3, 0xC2C
      frsp      f3, f3
      fmuls     f2, f2, f4
      mr        r3, r31
      fmadds    f1, f3, f2, f1
      stfs      f1, 0xC(r31)
      lwz       r5, 0xC0(r30)
      lfs       f1, 0x2C(r31)
      lfs       f2, 0xA28(r5)
      fmuls     f0, f2, f0
      fmadds    f0, f3, f0, f1
      stfs      f0, 0x2C(r31)
      bl        -0x2C02F0
      lfs       f1, 0x10D8(r2)
      stfs      f1, 0x1C(r1)
      stfs      f1, 0x20(r1)
      stfs      f1, 0x24(r1)
      lwz       r4, 0x364(r30)
      lwz       r3, 0xC0(r30)
      lfs       f2, 0x2CC(r4)
      lfs       f0, 0xA2C(r3)
      fcmpo     cr0, f2, f1
      fneg      f1, f0
      bge-      .loc_0x208
      lfs       f0, 0x1190(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x68(r1)
      lwz       r0, 0x6C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f0, f0
      b         .loc_0x22C

    .loc_0x208:
      lfs       f0, 0x1194(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x70(r1)
      lwz       r0, 0x74(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0

    .loc_0x22C:
      fmuls     f1, f1, f0
      lfs       f0, 0x10D8(r2)
      addi      r3, r1, 0x28
      addi      r4, r1, 0x1C
      stfs      f0, 0x10(r1)
      addi      r5, r1, 0x10
      stfs      f1, 0x14(r1)
      stfs      f0, 0x18(r1)
      bl        0x7E22C
      mr        r3, r31
      mr        r5, r31
      addi      r4, r1, 0x28
      bl        -0x2C036C
      lis       r3, 0x8051
      addi      r4, r1, 0x28
      subi      r3, r3, 0xC2C
      mr        r5, r3
      bl        -0x2C0380

    .loc_0x274:
      lwz       r0, 0x84(r1)
      lwz       r31, 0x7C(r1)
      lwz       r30, 0x78(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	803AA69C
 * Size:	000040
 */
void Game::BlackMan::Obj::isTyreFreeze(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x364(r3)
      cmplwi    r3, 0
      beq-      .loc_0x2C
      bl        0x2E1C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x2C
      li        r3, 0x1
      b         .loc_0x30

    .loc_0x2C:
      li        r3, 0

    .loc_0x30:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AA6DC
 * Size:	00009C
 */
void Game::BlackMan::Obj::isTyreDead(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x364(r3)
      cmplwi    r3, 0
      beq-      .loc_0x84
      lfs       f1, 0x200(r3)
      lfs       f0, 0x10D8(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x84
      lwz       r3, 0x184(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x18(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x7C
      lwz       r6, 0x364(r31)
      li        r4, 0
      li        r0, 0x2
      li        r3, 0x1
      lwz       r5, 0x1E0(r6)
      ori       r5, r5, 0x1
      stw       r5, 0x1E0(r6)
      stw       r4, 0x364(r31)
      stw       r0, 0x2E0(r31)
      b         .loc_0x88

    .loc_0x7C:
      mr        r3, r31
      bl        -0x2A54BC

    .loc_0x84:
      li        r3, 0

    .loc_0x88:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AA778
 * Size:	000074
 */
void Game::BlackMan::Obj::isFallEnd(void)
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
      lwz       r0, 0xC8(r3)
      cmplwi    r0, 0
      beq-      .loc_0x2C
      li        r31, 0x1

    .loc_0x2C:
      lwz       r3, 0x364(r30)
      cmplwi    r3, 0
      beq-      .loc_0x58
      bl        0x2D20
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x54
      lwz       r3, 0x364(r30)
      lbz       r0, 0x322(r3)
      cmplwi    r0, 0
      beq-      .loc_0x58

    .loc_0x54:
      li        r31, 0x1

    .loc_0x58:
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
 * Address:	803AA7EC
 * Size:	0001D4
 */
void Game::BlackMan::Obj::moveRestart(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x8049
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      addi      r30, r4, 0x5670
      stw       r29, 0x14(r1)
      lwz       r3, 0x364(r3)
      cmplwi    r3, 0
      beq-      .loc_0x1B8
      bl        0x3330
      lwz       r3, 0x364(r31)
      li        r4, 0
      stb       r4, 0x2D0(r3)
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0x60
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x4
      bne-      .loc_0x60
      stb       r4, 0x3A8(r31)
      b         .loc_0x198

    .loc_0x60:
      mr        r3, r31
      bl        0x92C
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x198
      lbz       r0, 0x3A8(r31)
      cmplwi    r0, 0
      bne-      .loc_0x198
      lbz       r0, 0x3AB(r31)
      cmplwi    r0, 0
      bne-      .loc_0x198
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x58(r3)
      cmplwi    r3, 0
      beq-      .loc_0x198
      lwz       r12, 0x0(r3)
      lwz       r12, 0x78(r12)
      mtctr     r12
      bctrl
      subis     r0, r3, 0x795F
      cmplwi    r0, 0x3034
      bne-      .loc_0x198
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0xD4
      addi      r3, r30, 0x70
      addi      r5, r30, 0x28
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x38027C

    .loc_0xD4:
      lwz       r29, -0x6780(r13)
      cmplwi    r29, 0
      bne-      .loc_0xF4
      addi      r3, r30, 0x70
      addi      r5, r30, 0x28
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x38029C

    .loc_0xF4:
      lwz       r0, 0x4(r29)
      cmplwi    r0, 0
      bne-      .loc_0x114
      addi      r3, r30, 0x7C
      addi      r5, r30, 0x28
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x3802BC

    .loc_0x114:
      lwz       r3, 0x4(r29)
      lwz       r29, 0x4(r3)
      cmplwi    r29, 0
      bne-      .loc_0x138
      addi      r3, r30, 0x70
      addi      r5, r30, 0x28
      li        r4, 0x1E5
      crclr     6, 0x6
      bl        -0x3802E0

    .loc_0x138:
      addi      r3, r29, 0x10
      li        r4, 0x1
      bl        -0x76A90
      mr.       r29, r3
      bne-      .loc_0x160
      addi      r3, r30, 0x70
      addi      r5, r30, 0x28
      li        r4, 0x1E7
      crclr     6, 0x6
      bl        -0x380308

    .loc_0x160:
      cmplwi    r29, 0
      bne-      .loc_0x17C
      addi      r3, r30, 0x18
      addi      r5, r30, 0x28
      li        r4, 0x8AD
      crclr     6, 0x6
      bl        -0x380324

    .loc_0x17C:
      mr        r3, r29
      lwz       r12, 0x10(r29)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      stb       r0, 0x3A8(r31)

    .loc_0x198:
      lwz       r5, 0xC0(r31)
      li        r4, 0
      lwz       r3, 0x364(r31)
      lfs       f1, 0x53C(r5)
      lfs       f2, 0x4C4(r5)
      lfs       f3, 0x4EC(r5)
      lfs       f4, 0x113C(r2)
      bl        -0x297884

    .loc_0x1B8:
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
 * Address:	803AA9C0
 * Size:	000004
 */
void Game::BlackMan::Obj::escape(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	803AA9C4
 * Size:	000008
 */
void Game::BlackMan::Obj::setTimer((float))
{
    /*
    .loc_0x0:
      stfs      f1, 0x33C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803AA9CC
 * Size:	000008
 */
void Game::BlackMan::Obj::getTimer(void)
{
    /*
    .loc_0x0:
      lfs       f1, 0x33C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803AA9D4
 * Size:	0000A0
 */
void Game::BlackMan::Obj::collisionStOn(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x6B6F
      stw       r0, 0x14(r1)
      addi      r4, r4, 0x7369
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x114(r3)
      bl        -0x274BB0
      lis       r4, 0x7374
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0x68A00
      lis       r4, 0x6D75
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x6E65
      bl        -0x274BD0
      lis       r4, 0x7374
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0x689E0
      lis       r4, 0x6865
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x6164
      bl        -0x274BF0
      lis       r4, 0x7374
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0x689C0
      mr        r3, r31
      bl        -0x2A3704
      cmpwi     r3, 0xA
      beq-      .loc_0x8C
      lfs       f0, 0x10D8(r2)
      stfs      f0, 0x378(r31)

    .loc_0x8C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AAA74
 * Size:	000098
 */
void Game::BlackMan::Obj::collisionStOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x6B6F
      stw       r0, 0x14(r1)
      addi      r4, r4, 0x7369
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x114(r3)
      bl        -0x274C50
      lis       r4, 0x5F5F
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0x68960
      lis       r4, 0x6D75
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x6E65
      bl        -0x274C70
      lis       r4, 0x5F5F
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0x68940
      lis       r4, 0x6865
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x6164
      bl        -0x274C90
      lis       r4, 0x5F5F
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0x68920
      lfs       f0, 0x10D8(r2)
      mr        r3, r31
      stfs      f0, 0x378(r31)
      bl        .loc_0x98
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x98:
    */
}

/*
 * --INFO--
 * Address:	803AAB0C
 * Size:	00004C
 */
void Game::BlackMan::Obj::flick(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f4, 0x113C(r2)
      li        r4, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r5, 0xC0(r3)
      lfs       f1, 0x53C(r5)
      lfs       f2, 0x4C4(r5)
      lfs       f3, 0x4EC(r5)
      bl        -0x297A1C
      lfs       f0, 0x10D8(r2)
      stfs      f0, 0x20C(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AAB58
 * Size:	000150
 */
void Game::BlackMan::Obj::recover(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r4, 0x364(r3)
      cmplwi    r4, 0
      beq-      .loc_0x13C
      lwz       r0, 0x1E0(r31)
      rlwinm.   r0,r0,0,22,22
      bne-      .loc_0x8C
      lwz       r0, 0x1E0(r4)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0x8C
      bl        -0x2A5924
      lfs       f0, 0x1150(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x68
      lfs       f0, 0x117C(r2)
      mr        r3, r31
      lfs       f1, -0x63C8(r2)
      fneg      f0, f0
      fmuls     f1, f1, f0
      bl        -0x2A3828
      b         .loc_0x94

    .loc_0x68:
      mr        r3, r31
      bl        -0x2A5958
      lfs       f0, 0x1120(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x94
      lfs       f1, -0x63C8(r2)
      mr        r3, r31
      bl        -0x2A384C
      b         .loc_0x94

    .loc_0x8C:
      mr        r3, r31
      bl        -0x2A384C

    .loc_0x94:
      lwz       r3, 0x364(r31)
      li        r0, 0x1
      lfs       f5, 0x117C(r2)
      stb       r0, 0x2D0(r3)
      lfs       f0, 0x11FC(r2)
      lwz       r4, 0x174(r31)
      lhz       r3, 0x36C(r31)
      lwz       r5, 0x8(r4)
      lhz       r0, 0x36E(r31)
      mulli     r4, r3, 0x30
      lwz       r5, 0x84(r5)
      lwz       r3, 0x364(r31)
      lwz       r5, 0xC(r5)
      mulli     r0, r0, 0x30
      add       r4, r5, r4
      add       r5, r5, r0
      lfs       f2, 0xC(r4)
      lfs       f1, 0xC(r5)
      lfs       f3, 0x1C(r4)
      fadds     f1, f2, f1
      lfs       f2, 0x1C(r5)
      lfs       f4, 0x2C(r4)
      fadds     f2, f3, f2
      lfs       f3, 0x2C(r5)
      fmuls     f1, f5, f1
      fadds     f3, f4, f3
      fmuls     f2, f5, f2
      stfs      f1, 0x2D4(r3)
      fmuls     f1, f5, f3
      stfs      f2, 0x2D8(r3)
      stfs      f1, 0x2DC(r3)
      lwz       r3, 0x364(r31)
      lfs       f1, 0x2D4(r3)
      stfs      f1, 0x328(r31)
      lfs       f1, 0x2D8(r3)
      stfs      f1, 0x32C(r31)
      lfs       f1, 0x2DC(r3)
      stfs      f1, 0x330(r31)
      lwz       r3, 0x364(r31)
      lfs       f1, 0x2CC(r3)
      fmuls     f0, f1, f0
      stfs      f0, 0x2CC(r3)

    .loc_0x13C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AACA8
 * Size:	0000F8
 */
void Game::BlackMan::Obj::recoverFlick(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stfd      f31, 0x40(r1)
      psq_st    f31,0x48(r1),0,0
      stfd      f30, 0x30(r1)
      psq_st    f30,0x38(r1),0,0
      stfd      f29, 0x20(r1)
      psq_st    f29,0x28(r1),0,0
      stfd      f28, 0x10(r1)
      psq_st    f28,0x18(r1),0,0
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x364(r3)
      lwz       r4, 0xC0(r31)
      cmplwi    r3, 0
      lfs       f31, 0x53C(r4)
      lfs       f30, 0x4C4(r4)
      lfs       f29, 0x4EC(r4)
      lfs       f28, 0x514(r4)
      beq-      .loc_0x70
      lfs       f0, 0x1148(r2)
      fmr       f1, f31
      fmr       f3, f29
      lfs       f4, 0x1FC(r31)
      fmuls     f2, f0, f30
      li        r4, 0
      bl        -0x297BF8

    .loc_0x70:
      fmr       f1, f31
      lfs       f4, 0x1FC(r31)
      fmr       f2, f30
      mr        r3, r31
      fmr       f3, f29
      li        r4, 0
      bl        -0x297C14
      fmr       f1, f28
      lfs       f4, 0x1FC(r31)
      fmr       f2, f30
      mr        r3, r31
      fmr       f3, f29
      li        r4, 0
      bl        -0x297878
      fmr       f1, f28
      lfs       f4, 0x1FC(r31)
      fmr       f2, f30
      mr        r3, r31
      fmr       f3, f29
      li        r4, 0
      bl        -0x2975D8
      psq_l     f31,0x48(r1),0,0
      lfd       f31, 0x40(r1)
      psq_l     f30,0x38(r1),0,0
      lfd       f30, 0x30(r1)
      psq_l     f29,0x28(r1),0,0
      lfd       f29, 0x20(r1)
      psq_l     f28,0x18(r1),0,0
      lfd       f28, 0x10(r1)
      lwz       r0, 0x54(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	803AADA0
 * Size:	00002C
 */
void Game::BlackMan::Obj::tyreFlick(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x364(r3)
      cmplwi    r3, 0
      beq-      .loc_0x1C
      bl        0x300C

    .loc_0x1C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AADCC
 * Size:	0000D0
 */
void Game::BlackMan::Obj::deadEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      bl        -0x2A556C
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x264(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x10D8(r2)
      mr        r3, r31
      bl        0xC3614
      lis       r4, 0x804B
      lis       r3, 0x804E
      subi      r0, r4, 0x5808
      lis       r4, 0x804F
      stw       r0, 0x8(r1)
      addi      r5, r3, 0x6A78
      lis       r3, 0x804B
      li        r0, 0x298
      stw       r5, 0x8(r1)
      subi      r7, r4, 0x5EB4
      subi      r6, r3, 0x5814
      li        r4, 0
      sth       r0, 0xC(r1)
      lis       r3, 0x804E
      addi      r5, r3, 0x5D20
      li        r0, 0xFF
      stw       r4, 0x10(r1)
      addi      r3, r1, 0x8
      addi      r4, r1, 0x14
      stw       r7, 0x8(r1)
      stw       r6, 0x14(r1)
      lfs       f0, 0x304(r31)
      stfs      f0, 0x18(r1)
      lfs       f0, 0x308(r31)
      stfs      f0, 0x1C(r1)
      lfs       f0, 0x30C(r31)
      stfs      f0, 0x20(r1)
      stw       r5, 0x14(r1)
      stb       r0, 0x24(r1)
      stb       r0, 0x25(r1)
      stb       r0, 0x26(r1)
      stb       r0, 0x27(r1)
      bl        0x40830
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803AAE9C
 * Size:	000034
 */
void Game::BlackMan::Obj::deadTraceEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x14(r1)
      lwz       r3, 0x39C(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
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
 * Address:	803AAED0
 * Size:	000074
 */
void Game::BlackMan::Obj::tyreUpEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x364(r3)
      cmplwi    r3, 0
      beq-      .loc_0x60
      lwz       r0, 0x1E0(r31)
      rlwinm.   r0,r0,0,22,22
      bne-      .loc_0x38
      lwz       r0, 0x1E0(r3)
      rlwinm.   r0,r0,0,22,22
      bne-      .loc_0x60

    .loc_0x38:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x254(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x398(r31)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x60:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AAF44
 * Size:	000050
 */
void Game::BlackMan::Obj::tyreDownEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x364(r3)
      cmplwi    r3, 0
      beq-      .loc_0x3C
      addi      r4, r31, 0x328
      bl        0x35DC
      lwz       r3, 0x364(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x250(r12)
      mtctr     r12
      bctrl

    .loc_0x3C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AAF94
 * Size:	000094
 */
void Game::BlackMan::Obj::bendEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      lwz       r0, 0x364(r3)
      cmplwi    r0, 0
      beq-      .loc_0x84
      lwz       r3, 0x174(r3)
      addi      r4, r2, 0x1200
      bl        0x94030
      bl        0x7E8E8
      lis       r4, 0x804B
      li        r6, 0
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x8(r1)
      addi      r0, r4, 0x6A64
      lis       r5, 0x804E
      lis       r4, 0x804E
      stw       r0, 0x8(r1)
      addi      r0, r5, 0x6A00
      li        r7, 0x295
      li        r5, 0x296
      stw       r0, 0x8(r1)
      addi      r0, r4, 0x5D0C
      li        r4, 0
      stw       r3, 0x18(r1)
      addi      r3, r1, 0x8
      sth       r7, 0xC(r1)
      sth       r5, 0xE(r1)
      stw       r6, 0x10(r1)
      stw       r6, 0x14(r1)
      stw       r0, 0x8(r1)
      bl        0x4384

    .loc_0x84:
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803AB028
 * Size:	00005C
 */
void Game::BlackMan::Obj::createTraceEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0x364(r3)
      cmplwi    r0, 0
      beq-      .loc_0x34
      lwz       r3, 0x390(r3)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      b         .loc_0x4C

    .loc_0x34:
      lwz       r3, 0x394(r3)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x4C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AB084
 * Size:	000050
 */
void Game::BlackMan::Obj::fadeTraceEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x390(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x394(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
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
 * Address:	803AB0D4
 * Size:	000058
 */
void Game::BlackMan::Obj::createFlickEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x3A0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x3A4(r31)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
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
 * Address:	803AB12C
 * Size:	000050
 */
void Game::BlackMan::Obj::fadeFlickEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x3A0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x3A4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
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
 * Address:	803AB17C
 * Size:	0000C4
 */
void Game::BlackMan::Obj::isFinalFloor(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0x34
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x4
      bne-      .loc_0x34
      li        r3, 0
      b         .loc_0xAC

    .loc_0x34:
      lwz       r30, 0x58(r3)
      cmplwi    r30, 0
      beq-      .loc_0xA8
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x78(r12)
      mtctr     r12
      bctrl
      subis     r0, r3, 0x795F
      cmplwi    r0, 0x3034
      bne-      .loc_0xA8
      lwz       r3, -0x6CF8(r13)
      cmplwi    r3, 0
      beq-      .loc_0xA8
      lwz       r3, 0x28(r3)
      cmplwi    r3, 0
      beq-      .loc_0xA8
      bl        -0x1D3D04
      mr        r31, r3
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x58(r12)
      mtctr     r12
      bctrl
      addi      r0, r3, 0x1
      cmpw      r0, r31
      bne-      .loc_0xA8
      li        r3, 0x1
      b         .loc_0xAC

    .loc_0xA8:
      li        r3, 0

    .loc_0xAC:
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
 * Address:	803AB240
 * Size:	0001C0
 */
void Game::BlackMan::Obj::appearFanfare(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x8049
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      addi      r31, r5, 0x5670
      stw       r30, 0x8(r1)
      lwz       r4, -0x64AC(r13)
      lwz       r0, 0x1F0(r4)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x1A8
      lbz       r0, 0x3AA(r3)
      cmplwi    r0, 0
      beq-      .loc_0x1A8
      li        r0, 0
      stb       r0, 0x3AA(r3)
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x60
      addi      r3, r31, 0x70
      addi      r5, r31, 0x28
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x380C5C

    .loc_0x60:
      lwz       r30, -0x6780(r13)
      cmplwi    r30, 0
      bne-      .loc_0x80
      addi      r3, r31, 0x70
      addi      r5, r31, 0x28
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x380C7C

    .loc_0x80:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0xA0
      addi      r3, r31, 0x7C
      addi      r5, r31, 0x28
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x380C9C

    .loc_0xA0:
      lwz       r3, 0x4(r30)
      lwz       r30, 0x4(r3)
      cmplwi    r30, 0
      bne-      .loc_0xC4
      addi      r3, r31, 0x7C
      addi      r5, r31, 0x130
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x380CC0

    .loc_0xC4:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0xE4
      addi      r3, r31, 0x7C
      addi      r5, r31, 0x28
      li        r4, 0x5A
      crclr     6, 0x6
      bl        -0x380CE0

    .loc_0xE4:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      beq-      .loc_0x1A8
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x110
      addi      r3, r31, 0x70
      addi      r5, r31, 0x28
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x380D0C

    .loc_0x110:
      lwz       r30, -0x6780(r13)
      cmplwi    r30, 0
      bne-      .loc_0x130
      addi      r3, r31, 0x70
      addi      r5, r31, 0x28
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x380D2C

    .loc_0x130:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0x150
      addi      r3, r31, 0x7C
      addi      r5, r31, 0x28
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x380D4C

    .loc_0x150:
      lwz       r3, 0x4(r30)
      lwz       r30, 0x4(r3)
      cmplwi    r30, 0
      bne-      .loc_0x174
      addi      r3, r31, 0x7C
      addi      r5, r31, 0x130
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x380D70

    .loc_0x174:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0x194
      addi      r3, r31, 0x7C
      addi      r5, r31, 0x28
      li        r4, 0x5A
      crclr     6, 0x6
      bl        -0x380D90

    .loc_0x194:
      lwz       r3, 0x4(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x1A8:
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
 * Address:	803AB400
 * Size:	00000C
 */
void efx::ArgPrmColor::getName(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8049
      addi      r3, r3, 0x57C4
      blr
    */
}

/*
 * --INFO--
 * Address:	803AB40C
 * Size:	00009C
 */
void efx::TKageFlick::__dt(void)
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
      beq-      .loc_0x80
      lis       r3, 0x804E
      addi      r3, r3, 0x5D2C
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x6940
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x31B7DC

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x3873D4

    .loc_0x80:
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
 * Address:	803AB4A8
 * Size:	00009C
 */
void efx::TKageTyreup::__dt(void)
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
      beq-      .loc_0x80
      lis       r3, 0x804E
      addi      r3, r3, 0x5D78
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x68F4
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x31B878

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x387470

    .loc_0x80:
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
 * Address:	803AB544
 * Size:	00009C
 */
void efx::TKageDead1::__dt(void)
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
      beq-      .loc_0x80
      lis       r3, 0x804E
      addi      r3, r3, 0x5DC4
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x68A8
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x31B914

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x38750C

    .loc_0x80:
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
 * Address:	803AB5E0
 * Size:	00009C
 */
void efx::TKageRun::__dt(void)
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
      beq-      .loc_0x80
      lis       r3, 0x804E
      addi      r3, r3, 0x5E10
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x68F4
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x31B9B0

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x3875A8

    .loc_0x80:
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
 * Address:	803AB67C
 * Size:	00009C
 */
void efx::TKageMove::__dt(void)
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
      beq-      .loc_0x80
      lis       r3, 0x804E
      addi      r3, r3, 0x5E5C
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x68F4
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x31BA4C

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x387644

    .loc_0x80:
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
 * Address:	803AB718
 * Size:	000004
 */
void Game::BlackMan::Obj::setInitialSetting((Game::EnemyInitialParamBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	803AB71C
 * Size:	000004
 */
void Game::BlackMan::Obj::throwupItemInDeathProcedure(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	803AB720
 * Size:	00002C
 */
void Game::BlackMan::Obj::createEfxHamon(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0x364(r3)
      cmplwi    r0, 0
      bne-      .loc_0x1C
      bl        -0x2A9E34

    .loc_0x1C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AB74C
 * Size:	000040
 */
void Game::BlackMan::Obj::updateEfxHamon(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0x364(r3)
      cmplwi    r0, 0
      beq-      .loc_0x2C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x254(r12)
      mtctr     r12
      bctrl
      b         .loc_0x30

    .loc_0x2C:
      bl        -0x2A9EA4

    .loc_0x30:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803AB78C
 * Size:	000008
 */
void bombCallBack__Q34Game8BlackMan3ObjFPQ24Game8CreatureR10Vector3<float>
f(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	803AB794
 * Size:	000008
 */
void Game::BlackMan::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x63
      blr
    */
}

/*
 * --INFO--
 * Address:	803AB79C
 * Size:	000028
 */
void __sinit_blackMan_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804E
      stw       r0, -0x6628(r13)
      stfsu     f0, 0x5D00(r3)
      stfs      f0, -0x6624(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803AB7C4
 * Size:	000014
 */
void @940 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x3AC
      b         -0x2A4EB8
    */
}

/*
 * --INFO--
 * Address:	803AB7D8
 * Size:	000014
 */
void @940 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x3AC
      b         -0x2A5140
    */
}

/*
 * --INFO--
 * Address:	803AB7EC
 * Size:	000014
 */
void @940 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x3AC
      b         -0x2A5134
    */
}

/*
 * --INFO--
 * Address:	803AB800
 * Size:	000014
 */
void @940 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x3AC
      b         -0x2A4D98
    */
}

/*
 * --INFO--
 * Address:	803AB814
 * Size:	000014
 */
void @940 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x3AC
      b         -0x2A4DD8
    */
}

/*
 * --INFO--
 * Address:	803AB828
 * Size:	000014
 */
void @940 @12 @Game::EnemyBase::viewGetShape(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x3AC
      b         -0x2A5198
    */
}

/*
 * --INFO--
 * Address:	803AB83C
 * Size:	000008
 */
void @4 @efx::TKageMove::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x1C4
    */
}

/*
 * --INFO--
 * Address:	803AB844
 * Size:	000008
 */
void @4 @efx::TKageRun::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x268
    */
}

/*
 * --INFO--
 * Address:	803AB84C
 * Size:	000008
 */
void @4 @efx::TKageDead1::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x30C
    */
}

/*
 * --INFO--
 * Address:	803AB854
 * Size:	000008
 */
void @4 @efx::TKageTyreup::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x3B0
    */
}

/*
 * --INFO--
 * Address:	803AB85C
 * Size:	000008
 */
void @4 @efx::TKageFlick::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x454
    */
}
