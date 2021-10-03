

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
 * Address:	8035CCE8
 * Size:	000038
 */
void Game::KingChappy::lFootCallBack((J3DJoint*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0
      stw       r0, 0x14(r1)
      bne-      .loc_0x24
      lwz       r3, -0x6730(r13)
      cmplwi    r3, 0
      beq-      .loc_0x24
      bl        0x4690

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
 * Address:	8035CD20
 * Size:	000038
 */
void Game::KingChappy::rFootCallBack((J3DJoint*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0
      stw       r0, 0x14(r1)
      bne-      .loc_0x24
      lwz       r3, -0x6730(r13)
      cmplwi    r3, 0
      beq-      .loc_0x24
      bl        0x469C

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
 * Address:	8035CD58
 * Size:	0000A4
 */
void Game::KingChappy::Obj::setParameters(void)
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
      bl        -0x25A19C
      lbz       r0, 0x394(r31)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      lwz       r3, 0xC0(r31)
      lbz       r0, 0xBCC(r3)
      cmplwi    r0, 0
      beq-      .loc_0x88

    .loc_0x3C:
      li        r0, 0x1
      stb       r0, 0x394(r31)
      lwz       r3, 0xC0(r31)
      lfs       f31, 0xA4C(r3)
      stfs      f31, 0x1F8(r31)
      fmr       f1, f31
      stfs      f31, 0x168(r31)
      stfs      f31, 0x16C(r31)
      stfs      f31, 0x170(r31)
      lwz       r3, 0x114(r31)
      lwz       r3, 0x0(r3)
      bl        -0x224FB4
      lwz       r3, 0xC0(r31)
      lfs       f0, 0x308(r2)
      lfs       f1, 0x21C(r3)
      fmuls     f1, f31, f1
      stfs      f1, 0x27C(r31)
      lwz       r3, 0xC0(r31)
      stfs      f0, 0x1A4(r3)

    .loc_0x88:
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
 * Address:	8035CDFC
 * Size:	000020
 */
void birth__Q34Game10KingChappy3ObjFR10Vector3<float> f(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x25A408
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035CE1C
 * Size:	000448
 */
void Game::KingChappy::Obj::onInit((Game::CreatureInitArg*))
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
      lis       r5, 0x8049
      mr        r30, r3
      addi      r31, r5, 0x15D0
      bl        -0x25B3F4
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x254(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x174(r30)
      addi      r4, r2, 0x30C
      bl        0xE2178
      stw       r3, 0x2D0(r30)
      lwz       r0, 0x2D0(r30)
      cmplwi    r0, 0
      bne-      .loc_0x78
      addi      r3, r31, 0x18
      addi      r5, r31, 0x28
      li        r4, 0x5A
      crclr     6, 0x6
      bl        -0x332850

    .loc_0x78:
      lwz       r3, 0x174(r30)
      addi      r4, r2, 0x314
      bl        0xE2148
      stw       r3, 0x2D4(r30)
      lwz       r0, 0x2D4(r30)
      cmplwi    r0, 0
      bne-      .loc_0xA8
      addi      r3, r31, 0x18
      addi      r5, r31, 0x28
      li        r4, 0x5D
      crclr     6, 0x6
      bl        -0x332880

    .loc_0xA8:
      lwz       r3, 0x174(r30)
      addi      r4, r2, 0x31C
      bl        0xE2118
      stw       r3, 0x2D8(r30)
      lwz       r0, 0x2D8(r30)
      cmplwi    r0, 0
      bne-      .loc_0xD8
      addi      r3, r31, 0x18
      addi      r5, r31, 0x28
      li        r4, 0x60
      crclr     6, 0x6
      bl        -0x3328B0

    .loc_0xD8:
      lwz       r3, 0x174(r30)
      addi      r4, r2, 0x324
      bl        0xE20E8
      stw       r3, 0x2DC(r30)
      lwz       r0, 0x2DC(r30)
      cmplwi    r0, 0
      bne-      .loc_0x108
      addi      r3, r31, 0x18
      addi      r5, r31, 0x28
      li        r4, 0x63
      crclr     6, 0x6
      bl        -0x3328E0

    .loc_0x108:
      lwz       r3, 0x174(r30)
      addi      r4, r2, 0x30C
      bl        0xE20B8
      stw       r3, 0x2E0(r30)
      lwz       r0, 0x2E0(r30)
      cmplwi    r0, 0
      bne-      .loc_0x138
      addi      r3, r31, 0x18
      addi      r5, r31, 0x28
      li        r4, 0x66
      crclr     6, 0x6
      bl        -0x332910

    .loc_0x138:
      lwz       r3, 0x34C(r30)
      mr        r4, r30
      li        r5, 0x9
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x18C(r30)
      li        r3, 0x1
      lfs       f0, 0x32C(r2)
      li        r0, 0
      stfs      f1, 0x198(r30)
      lfs       f1, 0x190(r30)
      stfs      f1, 0x19C(r30)
      lfs       f1, 0x194(r30)
      stfs      f1, 0x1A0(r30)
      lfs       f1, 0x198(r30)
      stfs      f1, 0x2BC(r30)
      lfs       f1, 0x19C(r30)
      stfs      f1, 0x2C0(r30)
      lfs       f1, 0x1A0(r30)
      stfs      f1, 0x2C4(r30)
      stfs      f0, 0x19C(r30)
      stb       r3, 0x2EC(r30)
      stw       r0, 0x2F0(r30)
      lfs       f0, 0x198(r30)
      stfs      f0, 0x2F4(r30)
      lfs       f0, 0x19C(r30)
      stfs      f0, 0x2F8(r30)
      lfs       f0, 0x1A0(r30)
      stfs      f0, 0x2FC(r30)
      stw       r0, 0x30C(r30)
      stb       r0, 0x338(r30)
      lwz       r0, 0x174(r30)
      cmplwi    r0, 0
      bne-      .loc_0x1E0
      addi      r3, r31, 0x18
      addi      r5, r31, 0x28
      li        r4, 0x79
      crclr     6, 0x6
      bl        -0x3329B8

    .loc_0x1E0:
      lwz       r3, 0x174(r30)
      addi      r4, r2, 0x330
      lwz       r5, 0x8(r3)
      lwz       r28, 0x4(r5)
      bl        0xE1FA8
      sth       r3, 0x310(r30)
      lhz       r0, 0x310(r30)
      lwz       r3, 0x28(r28)
      rlwinm    r0,r0,2,0,29
      lwzx      r29, r3, r0
      cmplwi    r29, 0
      bne-      .loc_0x224
      addi      r3, r31, 0x18
      addi      r5, r31, 0x28
      li        r4, 0x7F
      crclr     6, 0x6
      bl        -0x3329FC

    .loc_0x224:
      lis       r3, 0x8036
      addi      r4, r2, 0x338
      subi      r0, r3, 0x3318
      stw       r0, 0x4(r29)
      lwz       r3, 0x174(r30)
      bl        0xE1F60
      sth       r3, 0x324(r30)
      lhz       r0, 0x324(r30)
      lwz       r3, 0x28(r28)
      rlwinm    r0,r0,2,0,29
      lwzx      r28, r3, r0
      cmplwi    r28, 0
      bne-      .loc_0x26C
      addi      r3, r31, 0x18
      addi      r5, r31, 0x28
      li        r4, 0x84
      crclr     6, 0x6
      bl        -0x332A44

    .loc_0x26C:
      lis       r3, 0x8036
      lfs       f0, 0x32C(r2)
      subi      r0, r3, 0x32E0
      stw       r0, 0x4(r28)
      stfs      f0, 0x320(r30)
      stfs      f0, 0x334(r30)
      lwz       r3, 0x2E0(r30)
      bl        0xCC7FC
      lwz       r4, 0x350(r30)
      stw       r3, 0x10(r4)
      lwz       r3, 0x2E0(r30)
      bl        0xCC7EC
      lwz       r5, 0x360(r30)
      addi      r4, r2, 0x340
      stw       r3, 0x10(r5)
      lwz       r3, 0x174(r30)
      bl        0xE1F1C
      bl        0xCC7D4
      lwz       r5, 0x364(r30)
      addi      r4, r2, 0x324
      stw       r3, 0x10(r5)
      lwz       r3, 0x174(r30)
      bl        0xE1F04
      bl        0xCC7BC
      lwz       r5, 0x368(r30)
      addi      r4, r2, 0x30C
      stw       r3, 0x10(r5)
      lwz       r3, 0x174(r30)
      bl        0xE1EEC
      bl        0xCC7A4
      lwz       r5, 0x36C(r30)
      addi      r4, r2, 0x340
      stw       r3, 0x10(r5)
      lwz       r3, 0x174(r30)
      bl        0xE1ED4
      bl        0xCC78C
      mr        r4, r3
      lwz       r3, 0x370(r30)
      bl        0x53480
      lwz       r28, 0x28C(r30)
      li        r29, 0
      mr        r3, r28
      lwz       r12, 0x28(r28)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x5
      beq-      .loc_0x364
      mr        r3, r28
      lwz       r12, 0x28(r28)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x364
      mr        r3, r28
      lwz       r12, 0x28(r28)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x7
      bne-      .loc_0x368

    .loc_0x364:
      li        r29, 0x1

    .loc_0x368:
      rlwinm.   r0,r29,0,24,31
      bne-      .loc_0x384
      addi      r3, r31, 0x34
      addi      r5, r31, 0x28
      li        r4, 0x454
      crclr     6, 0x6
      bl        -0x332B5C

    .loc_0x384:
      mr        r3, r28
      li        r4, 0
      bl        0x102848
      li        r0, 0
      stb       r0, 0x394(r30)
      lwz       r3, 0xC0(r30)
      lwz       r4, -0x6C18(r13)
      lbz       r0, 0xBCC(r3)
      lwz       r3, 0x58(r4)
      cmplwi    r0, 0
      bne-      .loc_0x3D4
      cmplwi    r3, 0
      beq-      .loc_0x420
      lwz       r12, 0x0(r3)
      lwz       r12, 0x78(r12)
      mtctr     r12
      bctrl
      subis     r0, r3, 0x665F
      cmplwi    r0, 0x3033
      bne-      .loc_0x420

    .loc_0x3D4:
      li        r0, 0x1
      stb       r0, 0x394(r30)
      lwz       r3, 0xC0(r30)
      lfs       f0, 0xA74(r3)
      stfs      f0, 0x200(r30)
      lwz       r3, 0xC0(r30)
      lfs       f31, 0xA4C(r3)
      stfs      f31, 0x1F8(r30)
      fmr       f1, f31
      stfs      f31, 0x168(r30)
      stfs      f31, 0x16C(r30)
      stfs      f31, 0x170(r30)
      lwz       r3, 0x114(r30)
      lwz       r3, 0x0(r3)
      bl        -0x22541C
      lwz       r3, 0xC0(r30)
      lfs       f0, 0x21C(r3)
      fmuls     f0, f31, f0
      stfs      f0, 0x27C(r30)

    .loc_0x420:
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
 * Address:	8035D264
 * Size:	0005AC
 */
void Game::KingChappy::Obj::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      extsh.    r0, r4
      stmw      r26, 0x8(r1)
      mr        r31, r3
      beq-      .loc_0x3C
      addi      r0, r31, 0x398
      lis       r3, 0x804B
      stw       r0, 0x17C(r31)
      subi      r3, r3, 0x5988
      li        r0, 0
      stw       r3, 0x398(r31)
      stw       r0, 0x39C(r31)
      stw       r0, 0x3A0(r31)

    .loc_0x3C:
      mr        r3, r31
      li        r4, 0
      bl        -0x25BF08
      lis       r3, 0x804E
      addi      r0, r31, 0x398
      addi      r5, r3, 0x201C
      addi      r3, r31, 0x2C8
      stw       r5, 0x0(r31)
      addi      r4, r5, 0x1B0
      addi      r5, r5, 0x2FC
      stw       r4, 0x178(r31)
      lwz       r4, 0x17C(r31)
      stw       r5, 0x0(r4)
      lwz       r4, 0x17C(r31)
      sub       r0, r0, r4
      stw       r0, 0xC(r4)
      bl        -0x224D98
      li        r4, 0
      li        r0, 0x1
      stw       r4, 0x2D0(r31)
      addi      r3, r31, 0x344
      stw       r4, 0x2D4(r31)
      stw       r4, 0x2D8(r31)
      stw       r4, 0x2DC(r31)
      stb       r4, 0x2E4(r31)
      stb       r0, 0x2EC(r31)
      stw       r4, 0x2F0(r31)
      stw       r4, 0x30C(r31)
      sth       r4, 0x310(r31)
      sth       r4, 0x324(r31)
      stw       r4, 0x340(r31)
      bl        -0x232FC8
      li        r0, 0
      li        r3, 0x7C
      stw       r0, 0x34C(r31)
      stw       r0, 0x350(r31)
      stw       r0, 0x354(r31)
      stw       r0, 0x358(r31)
      stw       r0, 0x35C(r31)
      stw       r0, 0x360(r31)
      stw       r0, 0x364(r31)
      stw       r0, 0x368(r31)
      stw       r0, 0x36C(r31)
      stw       r0, 0x370(r31)
      stw       r0, 0x374(r31)
      stw       r0, 0x378(r31)
      stb       r0, 0x394(r31)
      bl        -0x3394B8
      mr.       r28, r3
      beq-      .loc_0x144
      bl        -0x22F280
      lis       r3, 0x804E
      lis       r4, 0x804B
      addi      r0, r3, 0x1FF4
      lis       r3, 0x804F
      stw       r0, 0x0(r28)
      subi      r4, r4, 0x4678
      subi      r3, r3, 0x4200
      li        r0, 0
      stw       r4, 0x60(r28)
      stw       r3, 0x60(r28)
      stb       r0, 0x78(r28)
      stw       r0, 0x6C(r28)
      stw       r0, 0x64(r28)
      stb       r0, 0x78(r28)
      stw       r0, 0x70(r28)

    .loc_0x144:
      stw       r28, 0x184(r31)
      li        r3, 0x1C
      bl        -0x33950C
      mr.       r4, r3
      beq-      .loc_0x178
      lis       r5, 0x804B
      lis       r3, 0x804E
      subi      r0, r5, 0x680
      li        r5, -0x1
      stw       r0, 0x0(r4)
      addi      r0, r3, 0x1C10
      stw       r5, 0x18(r4)
      stw       r0, 0x0(r4)

    .loc_0x178:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      lwz       r12, 0x2F8(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      li        r3, 0x54
      stw       r0, -0x6730(r13)
      bl        -0x339558
      mr.       r0, r3
      beq-      .loc_0x1B0
      li        r4, 0
      bl        0xAF0
      mr        r0, r3

    .loc_0x1B0:
      stw       r0, 0x350(r31)
      li        r3, 0x4C
      bl        -0x339578
      mr.       r28, r3
      beq-      .loc_0x1E8
      addi      r4, r31, 0x18C
      addi      r5, r31, 0x1FC
      li        r6, 0x221
      li        r7, 0x222
      li        r8, 0x223
      bl        0x53688
      lis       r3, 0x804E
      addi      r0, r3, 0x1FD8
      stw       r0, 0x0(r28)

    .loc_0x1E8:
      stw       r28, 0x354(r31)
      li        r3, 0x4C
      bl        -0x3395B0
      mr.       r28, r3
      beq-      .loc_0x220
      addi      r4, r31, 0x18C
      addi      r5, r31, 0x1FC
      li        r6, 0x224
      li        r7, 0x225
      li        r8, 0x226
      bl        0x53650
      lis       r3, 0x804E
      addi      r0, r3, 0x1FBC
      stw       r0, 0x0(r28)

    .loc_0x220:
      stw       r28, 0x358(r31)
      li        r3, 0x2C
      bl        -0x3395E8
      mr.       r28, r3
      beq-      .loc_0x250
      addi      r4, r31, 0x18C
      li        r5, 0x217
      li        r6, 0x218
      bl        0x52D9C
      lis       r3, 0x804E
      addi      r0, r3, 0x1FA0
      stw       r0, 0x0(r28)

    .loc_0x250:
      stw       r28, 0x35C(r31)
      li        r3, 0x14
      bl        -0x339618
      cmplwi    r3, 0
      beq-      .loc_0x2D8
      lis       r4, 0x804B
      lis       r5, 0x804A
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r5, 0x1D84
      addi      r5, r4, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r7, r4, 0x685C
      lis       r4, 0x804E
      addi      r0, r5, 0x14
      stw       r5, 0x0(r3)
      addi      r4, r4, 0x1F54
      li        r9, 0
      li        r8, 0x2B2
      stw       r0, 0x4(r3)
      addi      r6, r7, 0x14
      li        r5, 0x219
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

    .loc_0x2D8:
      stw       r3, 0x360(r31)
      li        r3, 0x14
      bl        -0x3396A0
      cmplwi    r3, 0
      beq-      .loc_0x360
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
      addi      r4, r4, 0x1F08
      li        r9, 0
      li        r8, 0x2B2
      stw       r0, 0x4(r3)
      addi      r6, r7, 0x14
      li        r5, 0x22A
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

    .loc_0x360:
      stw       r3, 0x364(r31)
      li        r3, 0x54
      bl        -0x339728
      mr.       r0, r3
      beq-      .loc_0x380
      li        r4, 0
      bl        0x748
      mr        r0, r3

    .loc_0x380:
      stw       r0, 0x368(r31)
      li        r3, 0x54
      bl        -0x339748
      mr.       r0, r3
      beq-      .loc_0x3A0
      li        r4, 0
      bl        .loc_0x5AC
      mr        r0, r3

    .loc_0x3A0:
      stw       r0, 0x36C(r31)
      li        r3, 0x2C
      bl        -0x339768
      mr.       r28, r3
      beq-      .loc_0x3D0
      li        r4, 0
      li        r5, 0x21E
      li        r6, 0x21F
      bl        0x52E78
      lis       r3, 0x804E
      addi      r0, r3, 0x1EEC
      stw       r0, 0x0(r28)

    .loc_0x3D0:
      stw       r28, 0x370(r31)
      li        r3, 0x2C
      bl        -0x339798
      cmplwi    r3, 0
      beq-      .loc_0x4B0
      lis       r5, 0x804B
      lis       r4, 0x804F
      subi      r30, r5, 0x5808
      lis       r6, 0x804A
      stw       r30, 0x0(r3)
      subi      r0, r4, 0x7B3C
      lis       r5, 0x804E
      lis       r4, 0x804E
      stw       r0, 0x0(r3)
      addi      r28, r5, 0x698C
      addi      r10, r4, 0x6940
      lis       r4, 0x804F
      stw       r30, 0x4(r3)
      subi      r29, r6, 0x1D84
      subi      r7, r4, 0x7ADC
      lis       r4, 0x804F
      stw       r29, 0x8(r3)
      subi      r4, r4, 0x7B28
      addi      r27, r28, 0x14
      li        r12, 0
      stw       r28, 0x4(r3)
      li        r11, 0x2B2
      addi      r26, r10, 0x14
      addi      r9, r31, 0x37C
      stw       r27, 0x8(r3)
      li        r8, 0x57
      addi      r6, r7, 0x14
      li        r5, 0x58
      stw       r12, 0xC(r3)
      addi      r0, r4, 0x14
      sth       r11, 0x10(r3)
      stb       r12, 0x12(r3)
      stw       r10, 0x4(r3)
      stw       r26, 0x8(r3)
      stw       r9, 0x14(r3)
      sth       r8, 0x10(r3)
      stw       r7, 0x4(r3)
      stw       r6, 0x8(r3)
      stw       r30, 0x18(r3)
      stw       r29, 0x1C(r3)
      stw       r28, 0x18(r3)
      stw       r27, 0x1C(r3)
      stw       r12, 0x20(r3)
      sth       r11, 0x24(r3)
      stb       r12, 0x26(r3)
      stw       r10, 0x18(r3)
      stw       r26, 0x1C(r3)
      stw       r9, 0x28(r3)
      sth       r5, 0x24(r3)
      stw       r4, 0x18(r3)
      stw       r0, 0x1C(r3)

    .loc_0x4B0:
      stw       r3, 0x374(r31)
      li        r3, 0x2C
      bl        -0x339878
      cmplwi    r3, 0
      beq-      .loc_0x590
      lis       r5, 0x804B
      lis       r4, 0x804F
      subi      r28, r5, 0x5808
      lis       r6, 0x804A
      stw       r28, 0x0(r3)
      subi      r0, r4, 0x7B3C
      lis       r5, 0x804E
      lis       r4, 0x804E
      stw       r0, 0x0(r3)
      addi      r30, r5, 0x698C
      addi      r10, r4, 0x6940
      lis       r4, 0x804F
      stw       r28, 0x4(r3)
      subi      r29, r6, 0x1D84
      subi      r7, r4, 0x7ADC
      lis       r4, 0x804F
      stw       r29, 0x8(r3)
      subi      r4, r4, 0x7B28
      addi      r26, r30, 0x14
      li        r12, 0
      stw       r30, 0x4(r3)
      li        r11, 0x2B2
      addi      r27, r10, 0x14
      addi      r9, r31, 0x388
      stw       r26, 0x8(r3)
      li        r8, 0x57
      addi      r6, r7, 0x14
      li        r5, 0x58
      stw       r12, 0xC(r3)
      addi      r0, r4, 0x14
      sth       r11, 0x10(r3)
      stb       r12, 0x12(r3)
      stw       r10, 0x4(r3)
      stw       r27, 0x8(r3)
      stw       r9, 0x14(r3)
      sth       r8, 0x10(r3)
      stw       r7, 0x4(r3)
      stw       r6, 0x8(r3)
      stw       r28, 0x18(r3)
      stw       r29, 0x1C(r3)
      stw       r30, 0x18(r3)
      stw       r26, 0x1C(r3)
      stw       r12, 0x20(r3)
      sth       r11, 0x24(r3)
      stb       r12, 0x26(r3)
      stw       r10, 0x18(r3)
      stw       r27, 0x1C(r3)
      stw       r9, 0x28(r3)
      sth       r5, 0x24(r3)
      stw       r4, 0x18(r3)
      stw       r0, 0x1C(r3)

    .loc_0x590:
      stw       r3, 0x378(r31)
      mr        r3, r31
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0x5AC:
    */
}

/*
 * --INFO--
 * Address:	8035D810
 * Size:	0001D8
 */
void efx::TKchDeadYodare::__ct((float (*)[4]))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r7, 0x804A
      lis       r6, 0x804F
      stw       r0, 0x24(r1)
      lis       r5, 0x804B
      li        r10, 0x220
      addi      r7, r7, 0x3358
      stmw      r26, 0x8(r1)
      mr        r30, r3
      subi      r26, r5, 0x5808
      lis       r3, 0x804A
      subi      r27, r3, 0x1D84
      lis       r5, 0x804E
      addi      r5, r5, 0x698C
      lis       r3, 0x804E
      addi      r12, r3, 0x68A8
      li        r28, 0
      lis       r3, 0x804F
      addi      r0, r5, 0x14
      subi      r9, r3, 0x5FAC
      addi      r11, r12, 0x14
      addi      r8, r9, 0x14
      subi      r6, r6, 0x5F60
      stw       r26, 0x0(r30)
      lis       r3, 0x804E
      addi      r29, r30, 0x18
      stw       r27, 0x4(r30)
      stw       r5, 0x0(r30)
      addi      r5, r3, 0x6A8C
      addi      r31, r5, 0x14
      li        r3, 0x22C
      stw       r0, 0x4(r30)
      li        r0, 0x2B2
      stw       r28, 0x8(r30)
      sth       r0, 0xC(r30)
      li        r0, 0xA
      stb       r28, 0xE(r30)
      stw       r12, 0x0(r30)
      stw       r11, 0x4(r30)
      stw       r4, 0x10(r30)
      sth       r10, 0xC(r30)
      stw       r9, 0x0(r30)
      stw       r8, 0x4(r30)
      stw       r7, 0x14(r30)
      stw       r6, 0x14(r30)
      stw       r26, 0x18(r30)
      stw       r27, 0x1C(r30)
      stw       r5, 0x18(r30)
      stw       r31, 0x1C(r30)
      stw       r28, 0x20(r30)
      sth       r3, 0x24(r30)
      stw       r28, 0x2C(r30)
      stw       r0, 0x30(r30)
      lwz       r26, 0x30(r30)
      mulli     r3, r26, 0xC
      addi      r3, r3, 0x10
      bl        -0x339948
      lis       r4, 0x8012
      mr        r7, r26
      subi      r4, r4, 0xCB8
      li        r5, 0
      li        r6, 0xC
      bl        -0x29BF1C
      lis       r4, 0x804E
      stw       r3, 0x10(r29)
      addi      r4, r4, 0x1EAC
      lis       r3, 0x804B
      stw       r4, 0x0(r29)
      addi      r0, r4, 0x14
      addi      r28, r30, 0x34
      lis       r4, 0x804A
      stw       r0, 0x4(r29)
      subi      r5, r3, 0x5808
      lis       r3, 0x804E
      subi      r0, r4, 0x1D84
      stw       r5, 0x34(r30)
      addi      r5, r3, 0x6A8C
      li        r4, 0
      li        r3, 0x22D
      stw       r0, 0x38(r30)
      li        r0, 0xA
      mr        r27, r28
      stw       r5, 0x34(r30)
      stw       r31, 0x38(r30)
      stw       r4, 0x3C(r30)
      sth       r3, 0x40(r30)
      stw       r4, 0x48(r30)
      stw       r0, 0x4C(r30)
      lwz       r26, 0x4C(r30)
      mulli     r3, r26, 0xC
      addi      r3, r3, 0x10
      bl        -0x3399D4
      lis       r4, 0x8012
      mr        r7, r26
      subi      r4, r4, 0xCB8
      li        r5, 0
      li        r6, 0xC
      bl        -0x29BFA8
      stw       r3, 0x10(r27)
      lis       r3, 0x804E
      addi      r4, r3, 0x1E6C
      lis       r3, 0x804E
      stw       r4, 0x0(r28)
      addi      r0, r4, 0x14
      addi      r4, r3, 0x1E20
      lfs       f0, 0x32C(r2)
      stw       r0, 0x4(r28)
      addi      r0, r4, 0x14
      mr        r3, r30
      stfs      f0, 0x50(r30)
      stw       r4, 0x0(r30)
      stw       r0, 0x4(r30)
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8035D9E8
 * Size:	000148
 */
void efx::TKchYodareBaseChaseMtx::__dt(void)
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
      beq-      .loc_0x12C
      lis       r3, 0x804F
      addic.    r0, r30, 0x14
      subi      r3, r3, 0x5FAC
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0xDC
      lis       r3, 0x804F
      addic.    r4, r30, 0x34
      subi      r0, r3, 0x5F60
      stw       r0, 0x14(r30)
      beq-      .loc_0x8C
      lis       r3, 0x804E
      cmplwi    r4, 0
      addi      r3, r3, 0x1E6C
      stw       r3, 0x34(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x38(r30)
      beq-      .loc_0x8C
      lis       r4, 0x804E
      addi      r3, r30, 0x38
      addi      r5, r4, 0x6A8C
      li        r4, 0
      stw       r5, 0x34(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x38(r30)
      bl        -0x2CDDD4

    .loc_0x8C:
      addic.    r0, r30, 0x18
      beq-      .loc_0xD0
      lis       r3, 0x804E
      cmplwi    r0, 0
      addi      r3, r3, 0x1EAC
      stw       r3, 0x18(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x1C(r30)
      beq-      .loc_0xD0
      lis       r4, 0x804E
      addi      r3, r30, 0x1C
      addi      r5, r4, 0x6A8C
      li        r4, 0
      stw       r5, 0x18(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x1C(r30)
      bl        -0x2CDE18

    .loc_0xD0:
      addi      r3, r30, 0x14
      li        r4, 0
      bl        -0x2C9A98

    .loc_0xDC:
      cmplwi    r30, 0
      beq-      .loc_0x11C
      lis       r3, 0x804E
      addi      r3, r3, 0x68A8
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x11C
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x2CDE64

    .loc_0x11C:
      extsh.    r0, r31
      ble-      .loc_0x12C
      mr        r3, r30
      bl        -0x339A5C

    .loc_0x12C:
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
 * Address:	8035DB30
 * Size:	0000EC
 */
void efx::TParticleCallBack_KchYodare::__dt(void)
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
      beq-      .loc_0xD0
      lis       r3, 0x804F
      addic.    r0, r30, 0x20
      subi      r0, r3, 0x5F60
      stw       r0, 0x0(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addic.    r0, r30, 0x20
      addi      r3, r3, 0x1E6C
      stw       r3, 0x20(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x24(r30)
      beq-      .loc_0x70
      lis       r4, 0x804E
      addi      r3, r30, 0x24
      addi      r5, r4, 0x6A8C
      li        r4, 0
      stw       r5, 0x20(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x24(r30)
      bl        -0x2CDF00

    .loc_0x70:
      addic.    r0, r30, 0x4
      beq-      .loc_0xB4
      lis       r3, 0x804E
      addic.    r0, r30, 0x4
      addi      r3, r3, 0x1EAC
      stw       r3, 0x4(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x8(r30)
      beq-      .loc_0xB4
      lis       r4, 0x804E
      addi      r3, r30, 0x8
      addi      r5, r4, 0x6A8C
      li        r4, 0
      stw       r5, 0x4(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x8(r30)
      bl        -0x2CDF44

    .loc_0xB4:
      mr        r3, r30
      li        r4, 0
      bl        -0x2C9BC4
      extsh.    r0, r31
      ble-      .loc_0xD0
      mr        r3, r30
      bl        -0x339B48

    .loc_0xD0:
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
 * Address:	8035DC1C
 * Size:	000084
 */
void efx::TKchYodareHitWat::__dt(void)
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
      beq-      .loc_0x68
      lis       r3, 0x804E
      addi      r3, r3, 0x1E6C
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x58
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x6A8C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x2CDFD4

    .loc_0x58:
      extsh.    r0, r31
      ble-      .loc_0x68
      mr        r3, r30
      bl        -0x339BCC

    .loc_0x68:
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
 * Address:	8035DCA0
 * Size:	000084
 */
void efx::TKchYodareHitGr::__dt(void)
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
      beq-      .loc_0x68
      lis       r3, 0x804E
      addi      r3, r3, 0x1EAC
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x58
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x6A8C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x2CE058

    .loc_0x58:
      extsh.    r0, r31
      ble-      .loc_0x68
      mr        r3, r30
      bl        -0x339C50

    .loc_0x68:
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
 * Address:	8035DD24
 * Size:	0001D8
 */
void efx::TKchAttackYodare::__ct((float (*)[4]))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r7, 0x804A
      lis       r6, 0x804F
      stw       r0, 0x24(r1)
      lis       r5, 0x804B
      li        r10, 0x216
      addi      r7, r7, 0x3358
      stmw      r26, 0x8(r1)
      mr        r30, r3
      subi      r26, r5, 0x5808
      lis       r3, 0x804A
      subi      r27, r3, 0x1D84
      lis       r5, 0x804E
      addi      r5, r5, 0x698C
      lis       r3, 0x804E
      addi      r12, r3, 0x68A8
      li        r28, 0
      lis       r3, 0x804F
      addi      r0, r5, 0x14
      subi      r9, r3, 0x5FAC
      addi      r11, r12, 0x14
      addi      r8, r9, 0x14
      subi      r6, r6, 0x5F60
      stw       r26, 0x0(r30)
      lis       r3, 0x804E
      addi      r29, r30, 0x18
      stw       r27, 0x4(r30)
      stw       r5, 0x0(r30)
      addi      r5, r3, 0x6A8C
      addi      r31, r5, 0x14
      li        r3, 0x22C
      stw       r0, 0x4(r30)
      li        r0, 0x2B2
      stw       r28, 0x8(r30)
      sth       r0, 0xC(r30)
      li        r0, 0xA
      stb       r28, 0xE(r30)
      stw       r12, 0x0(r30)
      stw       r11, 0x4(r30)
      stw       r4, 0x10(r30)
      sth       r10, 0xC(r30)
      stw       r9, 0x0(r30)
      stw       r8, 0x4(r30)
      stw       r7, 0x14(r30)
      stw       r6, 0x14(r30)
      stw       r26, 0x18(r30)
      stw       r27, 0x1C(r30)
      stw       r5, 0x18(r30)
      stw       r31, 0x1C(r30)
      stw       r28, 0x20(r30)
      sth       r3, 0x24(r30)
      stw       r28, 0x2C(r30)
      stw       r0, 0x30(r30)
      lwz       r26, 0x30(r30)
      mulli     r3, r26, 0xC
      addi      r3, r3, 0x10
      bl        -0x339E5C
      lis       r4, 0x8012
      mr        r7, r26
      subi      r4, r4, 0xCB8
      li        r5, 0
      li        r6, 0xC
      bl        -0x29C430
      lis       r4, 0x804E
      stw       r3, 0x10(r29)
      addi      r4, r4, 0x1EAC
      lis       r3, 0x804B
      stw       r4, 0x0(r29)
      addi      r0, r4, 0x14
      addi      r28, r30, 0x34
      lis       r4, 0x804A
      stw       r0, 0x4(r29)
      subi      r5, r3, 0x5808
      lis       r3, 0x804E
      subi      r0, r4, 0x1D84
      stw       r5, 0x34(r30)
      addi      r5, r3, 0x6A8C
      li        r4, 0
      li        r3, 0x22D
      stw       r0, 0x38(r30)
      li        r0, 0xA
      mr        r27, r28
      stw       r5, 0x34(r30)
      stw       r31, 0x38(r30)
      stw       r4, 0x3C(r30)
      sth       r3, 0x40(r30)
      stw       r4, 0x48(r30)
      stw       r0, 0x4C(r30)
      lwz       r26, 0x4C(r30)
      mulli     r3, r26, 0xC
      addi      r3, r3, 0x10
      bl        -0x339EE8
      lis       r4, 0x8012
      mr        r7, r26
      subi      r4, r4, 0xCB8
      li        r5, 0
      li        r6, 0xC
      bl        -0x29C4BC
      stw       r3, 0x10(r27)
      lis       r3, 0x804E
      addi      r4, r3, 0x1E6C
      lis       r3, 0x804E
      stw       r4, 0x0(r28)
      addi      r0, r4, 0x14
      addi      r4, r3, 0x1DD4
      lfs       f0, 0x32C(r2)
      stw       r0, 0x4(r28)
      addi      r0, r4, 0x14
      mr        r3, r30
      stfs      f0, 0x50(r30)
      stw       r4, 0x0(r30)
      stw       r0, 0x4(r30)
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8035DEFC
 * Size:	0001D8
 */
void efx::TKchYodare::__ct((float (*)[4]))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r7, 0x804A
      lis       r6, 0x804F
      stw       r0, 0x24(r1)
      lis       r5, 0x804B
      li        r10, 0x22B
      addi      r7, r7, 0x3358
      stmw      r26, 0x8(r1)
      mr        r30, r3
      subi      r26, r5, 0x5808
      lis       r3, 0x804A
      subi      r27, r3, 0x1D84
      lis       r5, 0x804E
      addi      r5, r5, 0x698C
      lis       r3, 0x804E
      addi      r12, r3, 0x68A8
      li        r28, 0
      lis       r3, 0x804F
      addi      r0, r5, 0x14
      subi      r9, r3, 0x5FAC
      addi      r11, r12, 0x14
      addi      r8, r9, 0x14
      subi      r6, r6, 0x5F60
      stw       r26, 0x0(r30)
      lis       r3, 0x804E
      addi      r29, r30, 0x18
      stw       r27, 0x4(r30)
      stw       r5, 0x0(r30)
      addi      r5, r3, 0x6A8C
      addi      r31, r5, 0x14
      li        r3, 0x22C
      stw       r0, 0x4(r30)
      li        r0, 0x2B2
      stw       r28, 0x8(r30)
      sth       r0, 0xC(r30)
      li        r0, 0xA
      stb       r28, 0xE(r30)
      stw       r12, 0x0(r30)
      stw       r11, 0x4(r30)
      stw       r4, 0x10(r30)
      sth       r10, 0xC(r30)
      stw       r9, 0x0(r30)
      stw       r8, 0x4(r30)
      stw       r7, 0x14(r30)
      stw       r6, 0x14(r30)
      stw       r26, 0x18(r30)
      stw       r27, 0x1C(r30)
      stw       r5, 0x18(r30)
      stw       r31, 0x1C(r30)
      stw       r28, 0x20(r30)
      sth       r3, 0x24(r30)
      stw       r28, 0x2C(r30)
      stw       r0, 0x30(r30)
      lwz       r26, 0x30(r30)
      mulli     r3, r26, 0xC
      addi      r3, r3, 0x10
      bl        -0x33A034
      lis       r4, 0x8012
      mr        r7, r26
      subi      r4, r4, 0xCB8
      li        r5, 0
      li        r6, 0xC
      bl        -0x29C608
      lis       r4, 0x804E
      stw       r3, 0x10(r29)
      addi      r4, r4, 0x1EAC
      lis       r3, 0x804B
      stw       r4, 0x0(r29)
      addi      r0, r4, 0x14
      addi      r28, r30, 0x34
      lis       r4, 0x804A
      stw       r0, 0x4(r29)
      subi      r5, r3, 0x5808
      lis       r3, 0x804E
      subi      r0, r4, 0x1D84
      stw       r5, 0x34(r30)
      addi      r5, r3, 0x6A8C
      li        r4, 0
      li        r3, 0x22D
      stw       r0, 0x38(r30)
      li        r0, 0xA
      mr        r27, r28
      stw       r5, 0x34(r30)
      stw       r31, 0x38(r30)
      stw       r4, 0x3C(r30)
      sth       r3, 0x40(r30)
      stw       r4, 0x48(r30)
      stw       r0, 0x4C(r30)
      lwz       r26, 0x4C(r30)
      mulli     r3, r26, 0xC
      addi      r3, r3, 0x10
      bl        -0x33A0C0
      lis       r4, 0x8012
      mr        r7, r26
      subi      r4, r4, 0xCB8
      li        r5, 0
      li        r6, 0xC
      bl        -0x29C694
      stw       r3, 0x10(r27)
      lis       r3, 0x804E
      addi      r4, r3, 0x1E6C
      lis       r3, 0x804E
      stw       r4, 0x0(r28)
      addi      r0, r4, 0x14
      addi      r4, r3, 0x1D88
      lfs       f0, 0x32C(r2)
      stw       r0, 0x4(r28)
      addi      r0, r4, 0x14
      mr        r3, r30
      stfs      f0, 0x50(r30)
      stw       r4, 0x0(r30)
      stw       r0, 0x4(r30)
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8035E0D4
 * Size:	00004C
 */
void Game::KingChappy::Obj::setFSM((Game::KingChappy::FSM*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r4, 0x34C(r3)
      mr        r4, r31
      lwz       r3, 0x34C(r3)
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
 * Address:	8035E120
 * Size:	0001A0
 */
void Game::KingChappy::Obj::doUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      mr        r31, r3
      lwz       r0, 0x340(r3)
      cmplwi    r0, 0
      bne-      .loc_0x80
      lfs       f1, 0x18C(r31)
      lfs       f0, 0x348(r2)
      stfs      f1, 0x8(r1)
      lwz       r3, -0x6CF8(r13)
      lfs       f1, 0x190(r31)
      stfs      f1, 0xC(r1)
      lfs       f1, 0x194(r31)
      stfs      f1, 0x10(r1)
      stfs      f0, 0x14(r1)
      lwz       r0, 0x10(r3)
      cmplwi    r0, 0
      bne-      .loc_0x6C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x15E8
      li        r4, 0xEB
      addi      r5, r5, 0x15F8
      crclr     6, 0x6
      bl        -0x333B48

    .loc_0x6C:
      lwz       r3, -0x6CF8(r13)
      addi      r4, r1, 0x8
      lwz       r3, 0x10(r3)
      bl        -0x1AE718
      stw       r3, 0x340(r31)

    .loc_0x80:
      lfs       f1, 0x18C(r31)
      lfs       f0, 0x32C(r2)
      stfs      f1, 0x300(r31)
      lfs       f3, 0x34C(r2)
      lfs       f1, 0x190(r31)
      stfs      f1, 0x304(r31)
      lfs       f1, 0x194(r31)
      stfs      f1, 0x308(r31)
      lfs       f1, 0x1FC(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xD8
      lfs       f0, 0x350(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f2, f0
      b         .loc_0xFC

    .loc_0xD8:
      lfs       f0, 0x354(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r3, r0

    .loc_0xFC:
      lfs       f1, 0x300(r31)
      lfs       f0, 0x32C(r2)
      fnmsubs   f1, f3, f2, f1
      stfs      f1, 0x300(r31)
      lfs       f1, 0x1FC(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x11C
      fneg      f1, f1

    .loc_0x11C:
      lfs       f0, 0x354(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      lfs       f2, 0x34C(r2)
      fmuls     f1, f1, f0
      lfs       f0, 0x308(r31)
      fctiwz    f1, f1
      stfd      f1, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r3, r0
      lfs       f1, 0x4(r3)
      fnmsubs   f0, f2, f1, f0
      stfs      f0, 0x308(r31)
      lfs       f0, 0x1F8(r31)
      stfs      f0, 0x168(r31)
      stfs      f0, 0x16C(r31)
      stfs      f0, 0x170(r31)
      lwz       r3, 0x114(r31)
      lfs       f1, 0x1F8(r31)
      lwz       r3, 0x0(r3)
      bl        -0x226484
      lwz       r3, 0x34C(r31)
      mr        r4, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	8035E2C0
 * Size:	000004
 */
void Game::KingChappy::Obj::doDirectDraw((Graphics&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8035E2C4
 * Size:	000020
 */
void Game::KingChappy::Obj::doDebugDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x258464
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035E2E4
 * Size:	0000B8
 */
void Game::KingChappy::Obj::doAnimationUpdateAnimator(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r3
      lwz       r31, 0x184(r3)
      lbz       r0, 0x58(r31)
      cmplwi    r0, 0
      beq-      .loc_0x9C
      lwz       r5, -0x6514(r13)
      lis       r4, 0x804B
      lis       r3, 0x804B
      lfs       f0, -0x63C8(r2)
      lfs       f2, 0x54(r5)
      subi      r4, r4, 0x526C
      subi      r0, r3, 0x7E8
      lfs       f1, 0x308(r2)
      stw       r4, 0x8(r1)
      fmuls     f2, f0, f2
      mr        r3, r31
      addi      r4, r1, 0x8
      stw       r0, 0x8(r1)
      fmr       f3, f2
      lfs       f0, 0x54(r5)
      fmuls     f1, f1, f0
      bl        -0x230120
      addi      r3, r31, 0x10
      lwz       r31, 0x174(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x8(r31)
      lwz       r4, 0x4(r4)
      lwz       r4, 0x28(r4)
      lwz       r4, 0x0(r4)
      stw       r3, 0x54(r4)
      b         .loc_0xA0

    .loc_0x9C:
      bl        -0x25B388

    .loc_0xA0:
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
 * Address:	8035E39C
 * Size:	000034
 */
void Game::KingChappy::Obj::onKill((Game::CreatureKillArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x25C4C8
      mr        r3, r31
      bl        0x3270
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035E3D0
 * Size:	000588
 */
void Game::KingChappy::Obj::doAnimationCullingOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x90(r1)
      mflr      r0
      stw       r0, 0x94(r1)
      stfd      f31, 0x80(r1)
      psq_st    f31,0x88(r1),0,0
      stmw      r27, 0x6C(r1)
      mr        r31, r3
      lwz       r4, 0xC0(r3)
      lbz       r0, 0xBCA(r4)
      cmplwi    r0, 0
      beq-      .loc_0x58
      bl        -0x257008
      cmpwi     r3, 0
      beq-      .loc_0x54
      lfs       f1, 0x32C(r2)
      lfs       f0, 0x320(r31)
      fcmpu     cr0, f1, f0
      bne-      .loc_0x54
      lfs       f0, 0x334(r31)
      fcmpu     cr0, f1, f0
      beq-      .loc_0x58

    .loc_0x54:
      stw       r31, -0x6730(r13)

    .loc_0x58:
      lwz       r3, 0xC0(r31)
      lbz       r0, 0xBC8(r3)
      cmplwi    r0, 0
      beq-      .loc_0x90
      li        r0, 0
      mr        r4, r31
      stb       r0, 0xBC8(r3)
      li        r5, 0x8
      li        r6, 0
      lwz       r3, 0x34C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x90:
      lwz       r4, 0x188(r31)
      li        r0, 0
      mr        r3, r31
      stb       r0, 0x24(r4)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1D8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x17C(r31)
      lwz       r0, 0x4(r3)
      cmplwi    r0, 0
      beq-      .loc_0x138
      addi      r4, r31, 0x138
      bl        -0x1F86F4
      lfs       f1, 0x168(r31)
      addi      r3, r1, 0x38
      lfs       f2, 0x16C(r31)
      lfs       f3, 0x170(r31)
      bl        -0x273CD4
      addi      r3, r31, 0x138
      addi      r4, r1, 0x38
      mr        r5, r3
      bl        -0x2741B8
      lfs       f0, 0x144(r31)
      mr        r3, r31
      addi      r4, r1, 0x2C
      stfs      f0, 0x2C(r1)
      lfs       f0, 0x154(r31)
      stfs      f0, 0x30(r1)
      lfs       f0, 0x164(r31)
      stfs      f0, 0x34(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x70(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      addi      r4, r1, 0x2C
      lwz       r12, 0x0(r31)
      lwz       r12, 0x74(r12)
      mtctr     r12
      bctrl
      b         .loc_0x14C

    .loc_0x138:
      addi      r3, r31, 0x138
      addi      r4, r31, 0x168
      addi      r5, r31, 0x1A4
      addi      r6, r31, 0x18C
      bl        0xC9DC0

    .loc_0x14C:
      lwz       r4, 0x174(r31)
      addi      r3, r31, 0x138
      lwz       r4, 0x8(r4)
      addi      r4, r4, 0x24
      bl        -0x274260
      lwz       r3, 0x174(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      li        r27, 0
      li        r28, 0
      b         .loc_0x484

    .loc_0x184:
      mr        r4, r27
      addi      r3, r31, 0x2C8
      bl        -0x225DE4
      lwz       r29, 0x64(r3)
      cmplwi    r29, 0
      beq-      .loc_0x47C
      lwz       r4, 0x174(r31)
      lwz       r3, 0x33C(r31)
      lwz       r4, 0x8(r4)
      lhzx      r0, r3, r28
      lwz       r3, 0x84(r4)
      mulli     r0, r0, 0x30
      lfs       f1, 0x32C(r2)
      lwz       r3, 0xC(r3)
      add       r30, r3, r0
      lfs       f3, 0x20(r30)
      lfs       f2, 0x10(r30)
      lfs       f0, 0x0(r30)
      stfs      f0, 0x20(r1)
      stfs      f2, 0x24(r1)
      stfs      f3, 0x28(r1)
      lfs       f2, 0x14(r30)
      lfs       f3, 0x4(r30)
      lfs       f4, 0x24(r30)
      fmuls     f6, f2, f2
      fmuls     f0, f3, f3
      fmuls     f7, f4, f4
      stfs      f3, 0x14(r1)
      fadds     f0, f0, f6
      stfs      f2, 0x18(r1)
      stfs      f4, 0x1C(r1)
      fadds     f0, f7, f0
      lfs       f5, 0x28(r30)
      lfs       f4, 0x18(r30)
      lfs       f2, 0x8(r30)
      fcmpo     cr0, f0, f1
      stfs      f2, 0x8(r1)
      stfs      f4, 0xC(r1)
      stfs      f5, 0x10(r1)
      ble-      .loc_0x240
      fmadds    f0, f3, f3, f6
      fadds     f4, f7, f0
      fcmpo     cr0, f4, f1
      ble-      .loc_0x244
      fsqrte    f0, f4
      fmuls     f4, f0, f4
      b         .loc_0x244

    .loc_0x240:
      fmr       f4, f1

    .loc_0x244:
      lfs       f0, 0x32C(r2)
      fcmpo     cr0, f4, f0
      ble-      .loc_0x280
      lfs       f0, 0x358(r2)
      lfs       f2, 0x14(r1)
      fdivs     f3, f0, f4
      lfs       f1, 0x18(r1)
      lfs       f0, 0x1C(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      b         .loc_0x284

    .loc_0x280:
      fmr       f4, f0

    .loc_0x284:
      lfs       f0, 0x358(r2)
      fmr       f31, f4
      fcmpo     cr0, f4, f0
      ble-      .loc_0x298
      fmr       f31, f0

    .loc_0x298:
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x2E8
      lbz       r0, 0x338(r31)
      cmplwi    r0, 0
      beq-      .loc_0x47C
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x258(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x24
      bne-      .loc_0x47C
      li        r0, 0x1
      stb       r0, 0x2BD(r29)
      b         .loc_0x47C

    .loc_0x2E8:
      addi      r3, r1, 0x14
      addi      r4, r1, 0x8
      addi      r5, r1, 0x20
      bl        -0x273740
      lfs       f2, 0x20(r1)
      lfs       f1, 0x24(r1)
      fmuls     f0, f2, f2
      lfs       f3, 0x28(r1)
      fmuls     f4, f1, f1
      lfs       f1, 0x32C(r2)
      fmuls     f3, f3, f3
      fadds     f0, f0, f4
      fadds     f0, f3, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x340
      fmadds    f0, f2, f2, f4
      fadds     f3, f3, f0
      fcmpo     cr0, f3, f1
      ble-      .loc_0x344
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0x344

    .loc_0x340:
      fmr       f3, f1

    .loc_0x344:
      lfs       f0, 0x32C(r2)
      fcmpo     cr0, f3, f0
      ble-      .loc_0x37C
      lfs       f0, 0x358(r2)
      lfs       f2, 0x20(r1)
      fdivs     f3, f0, f3
      lfs       f1, 0x24(r1)
      lfs       f0, 0x28(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x20(r1)
      stfs      f1, 0x24(r1)
      stfs      f0, 0x28(r1)

    .loc_0x37C:
      addi      r3, r1, 0x20
      addi      r4, r1, 0x14
      addi      r5, r1, 0x8
      bl        -0x2737D4
      lfs       f2, 0x8(r1)
      lfs       f1, 0xC(r1)
      fmuls     f0, f2, f2
      lfs       f3, 0x10(r1)
      fmuls     f4, f1, f1
      lfs       f1, 0x32C(r2)
      fmuls     f3, f3, f3
      fadds     f0, f0, f4
      fadds     f0, f3, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x3D4
      fmadds    f0, f2, f2, f4
      fadds     f3, f3, f0
      fcmpo     cr0, f3, f1
      ble-      .loc_0x3D8
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0x3D8

    .loc_0x3D4:
      fmr       f3, f1

    .loc_0x3D8:
      lfs       f0, 0x32C(r2)
      fcmpo     cr0, f3, f0
      ble-      .loc_0x410
      lfs       f0, 0x358(r2)
      lfs       f2, 0x8(r1)
      fdivs     f3, f0, f3
      lfs       f1, 0xC(r1)
      lfs       f0, 0x10(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x8(r1)
      stfs      f1, 0xC(r1)
      stfs      f0, 0x10(r1)

    .loc_0x410:
      lfs       f0, 0x20(r1)
      fmuls     f0, f0, f31
      stfs      f0, 0x0(r30)
      lfs       f0, 0x24(r1)
      fmuls     f0, f0, f31
      stfs      f0, 0x10(r30)
      lfs       f0, 0x28(r1)
      fmuls     f0, f0, f31
      stfs      f0, 0x20(r30)
      lfs       f0, 0x14(r1)
      fmuls     f0, f0, f31
      stfs      f0, 0x4(r30)
      lfs       f0, 0x18(r1)
      fmuls     f0, f0, f31
      stfs      f0, 0x14(r30)
      lfs       f0, 0x1C(r1)
      fmuls     f0, f0, f31
      stfs      f0, 0x24(r30)
      lfs       f0, 0x8(r1)
      fmuls     f0, f0, f31
      stfs      f0, 0x8(r30)
      lfs       f0, 0xC(r1)
      fmuls     f0, f0, f31
      stfs      f0, 0x18(r30)
      lfs       f0, 0x10(r1)
      fmuls     f0, f0, f31
      stfs      f0, 0x28(r30)

    .loc_0x47C:
      addi      r28, r28, 0x2
      addi      r27, r27, 0x1

    .loc_0x484:
      lwz       r0, 0x2C8(r31)
      cmpw      r27, r0
      blt+      .loc_0x184
      lwz       r3, 0x114(r31)
      bl        -0x228DC8
      lwz       r29, 0x28C(r31)
      li        r30, 0
      mr        r3, r29
      lwz       r12, 0x28(r29)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x5
      beq-      .loc_0x4F4
      mr        r3, r29
      lwz       r12, 0x28(r29)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x4F4
      mr        r3, r29
      lwz       r12, 0x28(r29)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x7
      bne-      .loc_0x4F8

    .loc_0x4F4:
      li        r30, 0x1

    .loc_0x4F8:
      rlwinm.   r0,r30,0,24,31
      bne-      .loc_0x51C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x1604
      li        r4, 0x454
      addi      r5, r5, 0x15F8
      crclr     6, 0x6
      bl        -0x3342A8

    .loc_0x51C:
      cmplwi    r29, 0
      beq-      .loc_0x564
      lwz       r0, 0xF0(r31)
      cmplwi    r0, 0
      beq-      .loc_0x54C
      mr        r3, r29
      li        r4, 0x1
      lwz       r12, 0x28(r29)
      lwz       r12, 0xD8(r12)
      mtctr     r12
      bctrl
      b         .loc_0x564

    .loc_0x54C:
      mr        r3, r29
      li        r4, 0x1
      lwz       r12, 0x28(r29)
      lwz       r12, 0xD8(r12)
      mtctr     r12
      bctrl

    .loc_0x564:
      li        r0, 0
      stw       r0, -0x6730(r13)
      psq_l     f31,0x88(r1),0,0
      lfd       f31, 0x80(r1)
      lmw       r27, 0x6C(r1)
      lwz       r0, 0x94(r1)
      mtlr      r0
      addi      r1, r1, 0x90
      blr
    */
}

/*
 * --INFO--
 * Address:	8035E958
 * Size:	000040
 */
void Game::KingChappy::Obj::doSimulation((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r4, 0x2F0(r3)
      subi      r0, r4, 0x1
      stw       r0, 0x2F0(r3)
      lwz       r0, 0x2F0(r3)
      cmpwi     r0, 0
      bge-      .loc_0x2C
      li        r0, 0
      stw       r0, 0x2F0(r3)

    .loc_0x2C:
      bl        -0x259F2C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035E998
 * Size:	000098
 */
void Game::KingChappy::Obj::getShadowParam((Game::ShadowParam&))
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
      lwz       r3, 0x2D4(r3)
      bl        0xCAEE8
      lfs       f0, 0xC(r3)
      lfs       f4, 0x35C(r2)
      stfs      f0, 0x0(r31)
      lfs       f3, 0x32C(r2)
      lfs       f1, 0x1C(r3)
      lfs       f0, 0x358(r2)
      stfs      f1, 0x4(r31)
      lfs       f2, 0x360(r2)
      lfs       f5, 0x2C(r3)
      lfs       f1, 0x364(r2)
      stfs      f5, 0x8(r31)
      lfs       f5, 0x4(r31)
      fsubs     f4, f5, f4
      stfs      f4, 0x4(r31)
      stfs      f3, 0xC(r31)
      stfs      f0, 0x10(r31)
      stfs      f3, 0x14(r31)
      lfs       f0, 0x1F8(r30)
      fmuls     f0, f2, f0
      stfs      f0, 0x18(r31)
      lfs       f0, 0x1F8(r30)
      fmuls     f0, f1, f0
      stfs      f0, 0x1C(r31)
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
 * Address:	8035EA30
 * Size:	000158
 */
void Game::KingChappy::Obj::damageCallBack((Game::Creature*, float, CollPart*))
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
      lwz       r0, 0x1E0(r3)
      fmr       f31, f1
      mr        r30, r3
      mr        r31, r4
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0x4C
      lfs       f0, 0x368(r2)
      lfs       f2, 0x358(r2)
      fmuls     f1, f0, f31
      bl        -0x258A44
      li        r3, 0x1
      b         .loc_0x138

    .loc_0x4C:
      cmplwi    r5, 0
      beq-      .loc_0x98
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x134
      mr        r3, r31
      bl        -0x1BF530
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x134
      fmr       f1, f31
      lfs       f2, 0x358(r2)
      mr        r3, r30
      bl        -0x258A90
      li        r3, 0x1
      b         .loc_0x138

    .loc_0x98:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x134
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x36C(r2)
      lfs       f0, 0x190(r30)
      lfs       f2, 0xC(r1)
      fadds     f0, f1, f0
      lfs       f3, 0x8(r1)
      lfs       f4, 0x10(r1)
      fcmpo     cr0, f2, f0
      bge-      .loc_0x12C
      lfs       f0, 0x194(r30)
      lfs       f1, 0x18C(r30)
      fsubs     f2, f4, f0
      lfs       f0, 0x370(r2)
      fsubs     f3, f3, f1
      fmuls     f1, f2, f2
      fmadds    f1, f3, f3, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x134
      lfs       f0, 0x374(r2)
      mr        r3, r30
      lfs       f2, 0x358(r2)
      fmuls     f1, f0, f31
      bl        -0x258B24
      li        r3, 0x1
      b         .loc_0x138

    .loc_0x12C:
      li        r3, 0
      b         .loc_0x138

    .loc_0x134:
      li        r3, 0

    .loc_0x138:
      psq_l     f31,0x28(r1),0,0
      lwz       r0, 0x34(r1)
      lfd       f31, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8035EB88
 * Size:	000030
 */
void Game::KingChappy::Obj::collisionCallback((Game::CollEvent&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r3, 0x6B75
      stw       r0, 0x14(r1)
      lwz       r5, 0x8(r4)
      addi      r4, r3, 0x7469
      addi      r3, r5, 0x30
      bl        0xB4890
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035EBB8
 * Size:	000030
 */
void Game::KingChappy::Obj::wallCallback((Game::MoveInfo const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x78
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r4, 0x2F0(r3)
      stw       r0, 0x230(r3)
      bl        0xC24
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035EBE8
 * Size:	000028
 */
void bombCallBack__Q34Game10KingChappy3ObjFPQ24Game8CreatureR10Vector3<float>
f(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, 0x378(r2)
      stw       r0, 0x14(r1)
      fmuls     f1, f0, f1
      bl        -0x258634
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035EC10
 * Size:	00004C
 */
void Game::KingChappy::Obj::inWaterCallback((Game::WaterBox*))
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
      bl        -0x257838
      cmpwi     r3, 0x9
      beq-      .loc_0x34
      mr        r3, r30
      mr        r4, r31
      bl        -0x25ADAC

    .loc_0x34:
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
 * Address:	8035EC5C
 * Size:	000028
 */
void Game::KingChappy::Obj::startCarcassMotion(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0xD
      li        r5, 0
      stw       r0, 0x14(r1)
      bl        -0x259C6C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035EC84
 * Size:	000064
 */
void Game::KingChappy::Obj::initWalkSmokeEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x2
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r3, r31, 0x344
      bl        -0x23493C
      lwz       r5, 0x174(r31)
      addi      r3, r31, 0x344
      lfs       f1, 0x37C(r2)
      li        r4, 0
      addi      r6, r2, 0x338
      bl        -0x2346D8
      lwz       r5, 0x174(r31)
      addi      r3, r31, 0x344
      lfs       f1, 0x37C(r2)
      li        r4, 0x1
      addi      r6, r2, 0x330
      bl        -0x2346F0
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035ECE8
 * Size:	000008
 */
void Game::KingChappy::Obj::getWalkSmokeEffectMgr(void)
{
    /*
    .loc_0x0:
      addi      r3, r3, 0x344
      blr
    */
}

/*
 * --INFO--
 * Address:	8035ECF0
 * Size:	000074
 */
void Game::KingChappy::Obj::doStartStoneState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x25BE10
      lis       r4, 0x6261
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x636B
      bl        -0x228ED0
      lis       r4, 0x7374
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0xB46E0
      lis       r4, 0x6B65
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x7475
      bl        -0x228EF0
      lis       r4, 0x7374
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0xB46C0
      mr        r3, r31
      bl        0x28DC
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035ED64
 * Size:	0000A0
 */
void Game::KingChappy::Obj::doFinishStoneState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x25BE70
      lis       r4, 0x6261
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x636B
      bl        -0x228F44
      lis       r4, 0x5F74
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0xB466C
      lis       r4, 0x6B65
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x7475
      bl        -0x228F64
      lis       r4, 0x5F74
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0xB464C
      lwz       r5, 0xC0(r31)
      mr        r3, r31
      lfs       f4, 0x380(r2)
      li        r4, 0
      lfs       f1, 0x53C(r5)
      lfs       f2, 0x4C4(r5)
      lfs       f3, 0x4EC(r5)
      bl        -0x24BCBC
      lfs       f0, 0x32C(r2)
      mr        r3, r31
      li        r4, 0
      stfs      f0, 0x20C(r31)
      bl        0x296C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035EE04
 * Size:	00013C
 */
void Game::KingChappy::Obj::doStartMovie(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r3, 0x350(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x354(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x358(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x35C(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x360(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x364(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x368(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x36C(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x370(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x374(r30)
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x18
      lwz       r12, 0x18(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x378(r30)
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x18
      lwz       r12, 0x18(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
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
 * Address:	8035EF40
 * Size:	00005C
 */
void efx::TKchYodareBaseChaseMtx::startDemoDrawOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r0, 0xE(r3)
      addi      r3, r31, 0x18
      ori       r0, r0, 0x1
      stb       r0, 0xE(r31)
      lwz       r12, 0x18(r31)
      lwz       r12, 0x34(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x34
      lwz       r12, 0x34(r31)
      lwz       r12, 0x34(r12)
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
 * Address:	8035EF9C
 * Size:	00013C
 */
void Game::KingChappy::Obj::doEndMovie(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r3, 0x350(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x354(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x358(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x35C(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x360(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x364(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x368(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x36C(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x370(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x374(r30)
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x18
      lwz       r12, 0x18(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x378(r30)
      addi      r3, r31, 0x4
      lwz       r12, 0x4(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x18
      lwz       r12, 0x18(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
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
 * Address:	8035F0D8
 * Size:	00005C
 */
void efx::TKchYodareBaseChaseMtx::endDemoDrawOn(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r0, 0xE(r3)
      addi      r3, r31, 0x18
      rlwinm    r0,r0,0,24,30
      stb       r0, 0xE(r31)
      lwz       r12, 0x18(r31)
      lwz       r12, 0x38(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x34
      lwz       r12, 0x34(r31)
      lwz       r12, 0x38(r12)
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
 * Address:	8035F134
 * Size:	000134
 */
void Game::KingChappy::Obj::initMouthSlots(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stfd      f31, 0x50(r1)
      psq_st    f31,0x58(r1),0,0
      stfd      f30, 0x40(r1)
      psq_st    f30,0x48(r1),0,0
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      stw       r29, 0x34(r1)
      stw       r28, 0x30(r1)
      lis       r4, 0x8049
      mr        r28, r3
      addi      r31, r4, 0x161C
      li        r4, 0x9
      lwz       r12, 0x0(r31)
      addi      r3, r28, 0x2C8
      lwz       r11, 0x4(r31)
      lwz       r10, 0x8(r31)
      lwz       r9, 0xC(r31)
      lwz       r8, 0x10(r31)
      lwz       r7, 0x14(r31)
      lwz       r6, 0x18(r31)
      lwz       r5, 0x1C(r31)
      lwz       r0, 0x20(r31)
      stw       r12, 0x8(r1)
      stw       r11, 0xC(r1)
      stw       r10, 0x10(r1)
      stw       r9, 0x14(r1)
      stw       r8, 0x18(r1)
      stw       r7, 0x1C(r1)
      stw       r6, 0x20(r1)
      stw       r5, 0x24(r1)
      stw       r0, 0x28(r1)
      bl        -0x226C64
      li        r3, 0x12
      bl        -0x33B218
      stw       r3, 0x33C(r28)
      addi      r31, r1, 0x8
      lfs       f30, 0x3CC(r2)
      li        r29, 0
      li        r30, 0
      b         .loc_0xF8

    .loc_0xAC:
      lwz       r5, 0x174(r28)
      mr        r4, r29
      lwz       r6, 0x0(r31)
      addi      r3, r28, 0x2C8
      bl        -0x226B60
      lfs       f0, 0x1F8(r28)
      mr        r4, r29
      addi      r3, r28, 0x2C8
      fmuls     f31, f30, f0
      bl        -0x226A8C
      stfs      f31, 0x1C(r3)
      lwz       r4, 0x0(r31)
      lwz       r3, 0x174(r28)
      bl        0xDFDA0
      lwz       r4, 0x33C(r28)
      addi      r31, r31, 0x4
      addi      r29, r29, 0x1
      sthx      r3, r4, r30
      addi      r30, r30, 0x2

    .loc_0xF8:
      lwz       r0, 0x2C8(r28)
      cmpw      r29, r0
      blt+      .loc_0xAC
      psq_l     f31,0x58(r1),0,0
      lfd       f31, 0x50(r1)
      psq_l     f30,0x48(r1),0,0
      lfd       f30, 0x40(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r29, 0x34(r1)
      lwz       r0, 0x64(r1)
      lwz       r28, 0x30(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	8035F268
 * Size:	0001A4
 */
void Game::KingChappy::Obj::eatBomb(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stmw      r24, 0x20(r1)
      mr        r24, r3
      li        r30, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x25C(r12)
      mtctr     r12
      bctrl
      mr        r0, r3
      lwz       r3, -0x6E20(r13)
      mr        r29, r0
      li        r4, 0x24
      bl        -0x2515FC
      mr.       r28, r3
      beq-      .loc_0x18C
      li        r27, 0
      b         .loc_0x170

    .loc_0x4C:
      mr        r3, r28
      mr        r4, r27
      lwz       r12, 0x0(r28)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      mr        r31, r3
      bl        -0x14178
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x16C
      mr        r3, r31
      bl        -0x1BFD58
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x16C
      li        r26, 0
      b         .loc_0x160

    .loc_0x8C:
      mr        r3, r29
      mr        r4, r26
      bl        -0x226B84
      lwz       r0, 0x64(r3)
      mr        r25, r3
      cmplwi    r0, 0
      bne-      .loc_0x15C
      addi      r4, r1, 0x14
      bl        -0x226E4C
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x18(r1)
      lfs       f0, 0xC(r1)
      lfs       f3, 0x14(r1)
      fsubs     f4, f1, f0
      lfs       f2, 0x8(r1)
      lfs       f1, 0x1C(r1)
      lfs       f0, 0x10(r1)
      fsubs     f3, f3, f2
      fmuls     f4, f4, f4
      fsubs     f2, f1, f0
      lfs       f0, 0x32C(r2)
      fmadds    f1, f3, f3, f4
      fmuls     f2, f2, f2
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x118
      ble-      .loc_0x11C
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x11C

    .loc_0x118:
      fmr       f1, f0

    .loc_0x11C:
      lfs       f0, 0x1C(r25)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x15C
      mr        r3, r31
      mr        r4, r24
      mr        r5, r25
      bl        -0x1C0334
      lwz       r3, 0x2D4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        -0x2580D8
      addi      r30, r30, 0x1
      b         .loc_0x16C

    .loc_0x15C:
      addi      r26, r26, 0x1

    .loc_0x160:
      lwz       r0, 0x0(r29)
      cmpw      r26, r0
      blt+      .loc_0x8C

    .loc_0x16C:
      addi      r27, r27, 0x1

    .loc_0x170:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x8C(r12)
      mtctr     r12
      bctrl
      cmpw      r27, r3
      blt+      .loc_0x4C

    .loc_0x18C:
      mr        r3, r30
      lmw       r24, 0x20(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	8035F40C
 * Size:	000008
 */
void Game::KingChappy::Obj::getMouthSlots(void)
{
    /*
    .loc_0x0:
      addi      r3, r3, 0x2C8
      blr
    */
}

/*
 * --INFO--
 * Address:	8035F414
 * Size:	0002C8
 */
void Game::KingChappy::Obj::getPikminInMouth((bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      li        r31, 0
      stw       r30, 0x48(r1)
      mr        r30, r4
      stw       r29, 0x44(r1)
      mr        r29, r3
      mr        r4, r29
      addi      r3, r1, 0x24
      stw       r28, 0x40(r1)
      bl        -0x1BF7E8
      li        r0, 0
      lis       r3, 0x804B
      subi      r4, r3, 0x437C
      addi      r3, r1, 0x24
      cmplwi    r0, 0
      stw       r4, 0x14(r1)
      stw       r0, 0x20(r1)
      stw       r0, 0x18(r1)
      stw       r3, 0x1C(r1)
      bne-      .loc_0x74
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x278

    .loc_0x74:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0xE0

    .loc_0x8C:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x278
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0xE0:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x8C
      b         .loc_0x278

    .loc_0x100:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r28, r3
      bl        -0x1BFFA4
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1BC
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x1B8
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x188
      lis       r4, 0x804B
      lis       r3, 0x804B
      subi      r4, r4, 0x5D00
      li        r0, 0
      stw       r4, 0x8(r1)
      addi      r5, r3, 0x4D98
      mr        r3, r28
      addi      r4, r1, 0x8
      stw       r29, 0xC(r1)
      stw       r5, 0x8(r1)
      stw       r0, 0x10(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1BC

    .loc_0x188:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1BC
      mr        r3, r28
      li        r4, 0
      bl        -0x2244D0
      addi      r31, r31, 0x1
      b         .loc_0x1BC

    .loc_0x1B8:
      addi      r31, r31, 0x1

    .loc_0x1BC:
      lwz       r0, 0x20(r1)
      cmplwi    r0, 0
      bne-      .loc_0x1E8
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x278

    .loc_0x1E8:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)
      b         .loc_0x25C

    .loc_0x208:
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x20(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x278
      lwz       r3, 0x1C(r1)
      lwz       r4, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r1)

    .loc_0x25C:
      lwz       r12, 0x14(r1)
      addi      r3, r1, 0x14
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x208

    .loc_0x278:
      lwz       r3, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x18(r1)
      cmplw     r4, r3
      bne+      .loc_0x100
      addi      r3, r1, 0x24
      li        r4, -0x1
      bl        -0x1BF950
      lwz       r0, 0x54(r1)
      mr        r3, r31
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      lwz       r29, 0x44(r1)
      lwz       r28, 0x40(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	8035F6DC
 * Size:	00011C
 */
void getTonguePosVel__Q34Game10KingChappy3ObjFR10Vector3<float>
R10Vector3<float>(void)
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
      lwz       r3, 0x2D8(r3)
      bl        0xCA19C
      lfs       f0, 0xC(r3)
      stfs      f0, 0x0(r30)
      lfs       f0, 0x1C(r3)
      stfs      f0, 0x4(r30)
      lfs       f0, 0x2C(r3)
      stfs      f0, 0x8(r30)
      lwz       r3, 0x2DC(r29)
      bl        0xCA17C
      lfs       f1, 0x0(r30)
      lfs       f0, 0xC(r3)
      lfs       f3, 0x4(r30)
      lfs       f2, 0x1C(r3)
      fsubs     f0, f1, f0
      lfs       f5, 0x8(r30)
      lfs       f4, 0x2C(r3)
      fsubs     f2, f3, f2
      lfs       f1, 0x32C(r2)
      stfs      f0, 0x0(r31)
      fsubs     f0, f5, f4
      stfs      f2, 0x4(r31)
      stfs      f0, 0x8(r31)
      lfs       f3, 0x0(r31)
      lfs       f2, 0x4(r31)
      lfs       f4, 0x8(r31)
      fmuls     f0, f3, f3
      fmuls     f2, f2, f2
      fmuls     f4, f4, f4
      fadds     f0, f0, f2
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0xC4
      fmadds    f0, f3, f3, f2
      fadds     f2, f4, f0
      fcmpo     cr0, f2, f1
      ble-      .loc_0xC8
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0xC8

    .loc_0xC4:
      fmr       f2, f1

    .loc_0xC8:
      lfs       f0, 0x32C(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x100
      lfs       f1, 0x358(r2)
      lfs       f0, 0x0(r31)
      fdivs     f1, f1, f2
      fmuls     f0, f0, f1
      stfs      f0, 0x0(r31)
      lfs       f0, 0x4(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0x4(r31)
      lfs       f0, 0x8(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0x8(r31)

    .loc_0x100:
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
 * Address:	8035F7F8
 * Size:	0001F0
 */
void Game::KingChappy::Obj::setNextGoal(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stfd      f31, 0x50(r1)
      psq_st    f31,0x58(r1),0,0
      stw       r31, 0x4C(r1)
      mr        r31, r3
      lfs       f1, 0x194(r3)
      lfs       f0, 0x1A0(r3)
      lwz       r4, 0xC0(r3)
      fsubs     f1, f1, f0
      lfs       f0, 0x18C(r3)
      lfs       f3, 0x198(r3)
      lfs       f31, 0x35C(r4)
      fsubs     f2, f0, f3
      fmuls     f1, f1, f1
      fmuls     f0, f31, f31
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x70
      stfs      f3, 0x2BC(r31)
      li        r4, 0x1
      lfs       f0, 0x19C(r31)
      stfs      f0, 0x2C0(r31)
      lfs       f0, 0x1A0(r31)
      stfs      f0, 0x2C4(r31)
      bl        0x183C
      b         .loc_0x1D4

    .loc_0x70:
      lwz       r4, 0x230(r31)
      cmplwi    r4, 0
      beq-      .loc_0xAC
      lwz       r12, 0x0(r4)
      addi      r3, r1, 0x8
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x8(r1)
      stfs      f0, 0x2BC(r31)
      lfs       f0, 0xC(r1)
      stfs      f0, 0x2C0(r31)
      lfs       f0, 0x10(r1)
      stfs      f0, 0x2C4(r31)
      b         .loc_0x1D4

    .loc_0xAC:
      bl        -0x296304
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x1C(r1)
      lfs       f0, 0x198(r31)
      stw       r0, 0x18(r1)
      lfd       f3, 0x3E0(r2)
      lfd       f1, 0x18(r1)
      lfs       f2, 0x3D0(r2)
      fsubs     f3, f1, f3
      stfs      f0, 0x2BC(r31)
      lfs       f1, 0x3D4(r2)
      lfs       f0, 0x19C(r31)
      fdivs     f2, f3, f2
      stfs      f0, 0x2C0(r31)
      lfs       f0, 0x1A0(r31)
      stfs      f0, 0x2C4(r31)
      fadds     f0, f1, f2
      fmuls     f31, f31, f0
      bl        -0x296350
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x24(r1)
      lfd       f3, 0x3E0(r2)
      stw       r0, 0x20(r1)
      lfs       f2, 0x3D0(r2)
      lfd       f0, 0x20(r1)
      lfs       f1, 0x3D8(r2)
      fsubs     f3, f0, f3
      lfs       f0, 0x32C(r2)
      fdivs     f2, f3, f2
      fmuls     f3, f1, f2
      fcmpo     cr0, f3, f0
      bge-      .loc_0x160
      lfs       f0, 0x350(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f2, f0
      b         .loc_0x184

    .loc_0x160:
      lfs       f0, 0x354(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r3, r0

    .loc_0x184:
      lfs       f1, 0x2BC(r31)
      lfs       f0, 0x32C(r2)
      fmadds    f1, f31, f2, f1
      fcmpo     cr0, f3, f0
      stfs      f1, 0x2BC(r31)
      bge-      .loc_0x1A0
      fneg      f3, f3

    .loc_0x1A0:
      lfs       f1, 0x354(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      lfs       f0, 0x2C4(r31)
      fmuls     f1, f3, f1
      fctiwz    f1, f1
      stfd      f1, 0x38(r1)
      lwz       r0, 0x3C(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r3, r0
      lfs       f1, 0x4(r3)
      fmadds    f0, f31, f1, f0
      stfs      f0, 0x2C4(r31)

    .loc_0x1D4:
      psq_l     f31,0x58(r1),0,0
      lwz       r0, 0x64(r1)
      lfd       f31, 0x50(r1)
      lwz       r31, 0x4C(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	8035F9E8
 * Size:	000500
 */
void Game::KingChappy::Obj::searchTarget(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x100(r1)
      mflr      r0
      stw       r0, 0x104(r1)
      stfd      f31, 0xF0(r1)
      psq_st    f31,0xF8(r1),0,0
      stfd      f30, 0xE0(r1)
      psq_st    f30,0xE8(r1),0,0
      stfd      f29, 0xD0(r1)
      psq_st    f29,0xD8(r1),0,0
      stfd      f28, 0xC0(r1)
      psq_st    f28,0xC8(r1),0,0
      stfd      f27, 0xB0(r1)
      psq_st    f27,0xB8(r1),0,0
      stfd      f26, 0xA0(r1)
      psq_st    f26,0xA8(r1),0,0
      stfd      f25, 0x90(r1)
      psq_st    f25,0x98(r1),0,0
      stw       r31, 0x8C(r1)
      stw       r30, 0x88(r1)
      stw       r29, 0x84(r1)
      mr        r31, r3
      li        r0, 0
      stw       r0, 0x230(r3)
      lwz       r0, 0x2F0(r3)
      cmpwi     r0, 0
      bgt-      .loc_0x4AC
      lwz       r4, 0xC0(r31)
      lbz       r0, 0xBC9(r4)
      cmplwi    r0, 0
      bne-      .loc_0x4AC
      lfs       f1, 0x198(r31)
      lfs       f0, 0x2BC(r31)
      fcmpu     cr0, f1, f0
      bne-      .loc_0xAC
      lfs       f1, 0x1A0(r31)
      lfs       f0, 0x2C4(r31)
      fcmpu     cr0, f1, f0
      bne-      .loc_0xAC
      lfs       f1, 0x3E8(r2)
      bl        .loc_0x500
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xAC
      b         .loc_0x4AC

    .loc_0xAC:
      lwz       r6, 0xC0(r31)
      mr        r3, r31
      lfs       f3, 0x3F0(r2)
      addi      r4, r1, 0x8
      lfs       f1, 0x44C(r6)
      li        r5, 0
      lfs       f2, 0x49C(r6)
      fmuls     f0, f1, f1
      lfs       f4, 0x3EC(r2)
      stfs      f1, 0x8(r1)
      fmuls     f1, f3, f2
      stfs      f0, 0x8(r1)
      fmuls     f31, f4, f1
      lwz       r6, 0xC0(r31)
      lfs       f1, 0x49C(r6)
      lfs       f2, 0x44C(r6)
      bl        -0x24D3E0
      stw       r3, 0x230(r31)
      lis       r3, 0x804B
      li        r0, 0
      lfs       f0, 0x3F4(r2)
      lwz       r5, 0xC0(r31)
      cmplwi    r0, 0
      lfs       f1, 0x190(r31)
      subi      r4, r3, 0x4364
      lfs       f2, 0x8E4(r5)
      lwz       r3, -0x6D0C(r13)
      fsubs     f28, f1, f0
      fmuls     f30, f2, f2
      stw       r4, 0x6C(r1)
      fadds     f29, f0, f1
      stw       r0, 0x78(r1)
      stw       r0, 0x70(r1)
      stw       r3, 0x74(r1)
      bne-      .loc_0x150
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x70(r1)
      b         .loc_0x454

    .loc_0x150:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x70(r1)
      b         .loc_0x1BC

    .loc_0x168:
      lwz       r3, 0x74(r1)
      lwz       r4, 0x70(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x78(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x454
      lwz       r3, 0x74(r1)
      lwz       r4, 0x70(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x70(r1)

    .loc_0x1BC:
      lwz       r12, 0x6C(r1)
      addi      r3, r1, 0x6C
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x168
      b         .loc_0x454

    .loc_0x1DC:
      lwz       r3, 0x74(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r29, r3
      li        r30, 0
      lwz       r12, 0x1C0(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x240
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x240
      mr        r3, r29
      bl        -0x1C0690
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x240
      li        r30, 0x1

    .loc_0x240:
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x398
      mr        r4, r29
      addi      r3, r1, 0x60
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x64(r1)
      fcmpo     cr0, f0, f28
      blt-      .loc_0x398
      fcmpo     cr0, f0, f29
      bgt-      .loc_0x398
      mr        r4, r29
      addi      r3, r1, 0x24
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      lfs       f2, 0x24(r1)
      lwz       r12, 0x0(r31)
      addi      r3, r1, 0x30
      lfs       f1, 0x28(r1)
      lfs       f0, 0x2C(r1)
      lwz       r12, 0x8(r12)
      stfs      f2, 0xC(r1)
      stfs      f1, 0x10(r1)
      stfs      f0, 0x14(r1)
      mtctr     r12
      bctrl
      lfs       f5, 0x30(r1)
      lis       r3, 0x8051
      lfs       f3, 0x38(r1)
      subi      r3, r3, 0x2E20
      lfs       f1, 0xC(r1)
      lfs       f0, 0x14(r1)
      lfs       f4, 0x34(r1)
      fsubs     f1, f1, f5
      fsubs     f2, f0, f3
      stfs      f5, 0x18(r1)
      stfs      f4, 0x1C(r1)
      stfs      f3, 0x20(r1)
      bl        -0x32ABCC
      bl        0xB1EF8
      lwz       r12, 0x0(r31)
      fmr       f25, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f25
      bl        0xB1F00
      fabs      f0, f1
      frsp      f0, f0
      fcmpo     cr0, f0, f31
      cror      2, 0, 0x2
      bne-      .loc_0x398
      mr        r4, r29
      addi      r3, r1, 0x48
      lwz       r12, 0x0(r29)
      lfs       f25, 0x194(r31)
      lwz       r12, 0x8(r12)
      lfs       f26, 0x18C(r31)
      mtctr     r12
      bctrl
      mr        r4, r29
      addi      r3, r1, 0x54
      lwz       r12, 0x0(r29)
      lfs       f27, 0x50(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      fsubs     f1, f27, f25
      lfs       f2, 0x54(r1)
      lfs       f0, 0x8(r1)
      fsubs     f2, f2, f26
      fmuls     f1, f1, f1
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x398
      fcmpo     cr0, f1, f30
      ble-      .loc_0x398
      stw       r29, 0x230(r31)
      stfs      f1, 0x8(r1)

    .loc_0x398:
      lwz       r0, 0x78(r1)
      cmplwi    r0, 0
      bne-      .loc_0x3C4
      lwz       r3, 0x74(r1)
      lwz       r4, 0x70(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x70(r1)
      b         .loc_0x454

    .loc_0x3C4:
      lwz       r3, 0x74(r1)
      lwz       r4, 0x70(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x70(r1)
      b         .loc_0x438

    .loc_0x3E4:
      lwz       r3, 0x74(r1)
      lwz       r4, 0x70(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x78(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x454
      lwz       r3, 0x74(r1)
      lwz       r4, 0x70(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x70(r1)

    .loc_0x438:
      lwz       r12, 0x6C(r1)
      addi      r3, r1, 0x6C
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x3E4

    .loc_0x454:
      lwz       r3, 0x74(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x70(r1)
      cmplw     r4, r3
      bne+      .loc_0x1DC
      lwz       r4, 0x230(r31)
      cmplwi    r4, 0
      beq-      .loc_0x4AC
      lwz       r12, 0x0(r4)
      addi      r3, r1, 0x3C
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x3C(r1)
      stfs      f0, 0x2BC(r31)
      lfs       f0, 0x40(r1)
      stfs      f0, 0x2C0(r31)
      lfs       f0, 0x44(r1)
      stfs      f0, 0x2C4(r31)

    .loc_0x4AC:
      psq_l     f31,0xF8(r1),0,0
      lfd       f31, 0xF0(r1)
      psq_l     f30,0xE8(r1),0,0
      lfd       f30, 0xE0(r1)
      psq_l     f29,0xD8(r1),0,0
      lfd       f29, 0xD0(r1)
      psq_l     f28,0xC8(r1),0,0
      lfd       f28, 0xC0(r1)
      psq_l     f27,0xB8(r1),0,0
      lfd       f27, 0xB0(r1)
      psq_l     f26,0xA8(r1),0,0
      lfd       f26, 0xA0(r1)
      psq_l     f25,0x98(r1),0,0
      lfd       f25, 0x90(r1)
      lwz       r31, 0x8C(r1)
      lwz       r30, 0x88(r1)
      lwz       r0, 0x104(r1)
      lwz       r29, 0x84(r1)
      mtlr      r0
      addi      r1, r1, 0x100
      blr

    .loc_0x500:
    */
}

/*
 * --INFO--
 * Address:	8035FEE8
 * Size:	000040
 */
void Game::KingChappy::Obj::isOutOfTerritory((float))
{
    /*
    .loc_0x0:
      lfs       f2, 0x1A0(r3)
      lfs       f0, 0x194(r3)
      lwz       r4, 0xC0(r3)
      fsubs     f4, f2, f0
      lfs       f2, 0x198(r3)
      lfs       f3, 0x35C(r4)
      lfs       f0, 0x18C(r3)
      fmuls     f3, f1, f3
      fsubs     f2, f2, f0
      fmuls     f1, f4, f4
      fmuls     f0, f3, f3
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      mfcr      r0
      rlwinm    r3,r0,2,31,31
      blr
    */
}

/*
 * --INFO--
 * Address:	8035FF28
 * Size:	0000DC
 */
void Game::KingChappy::Obj::forceTransit((int))
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
      bl        -0x258B50
      cmpwi     r31, 0xA
      beq-      .loc_0x38
      bge-      .loc_0xB8
      cmpwi     r31, 0x4
      beq-      .loc_0x6C
      b         .loc_0xB8

    .loc_0x38:
      cmpwi     r3, 0x9
      bne-      .loc_0x64
      lwz       r3, 0x34C(r30)
      mr        r4, r30
      mr        r5, r31
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      b         .loc_0xC0

    .loc_0x64:
      li        r3, 0
      b         .loc_0xC4

    .loc_0x6C:
      cmpwi     r3, 0
      bne-      .loc_0xB0
      lfs       f1, 0x20C(r30)
      lfs       f0, 0x32C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xB0
      li        r0, 0x1
      mr        r4, r30
      stb       r0, 0x2E4(r30)
      mr        r5, r31
      li        r6, 0
      lwz       r3, 0x34C(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      b         .loc_0xC0

    .loc_0xB0:
      li        r3, 0
      b         .loc_0xC4

    .loc_0xB8:
      li        r3, 0
      b         .loc_0xC4

    .loc_0xC0:
      li        r3, 0x1

    .loc_0xC4:
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
 * Address:	80360004
 * Size:	000030
 */
void Game::KingChappy::Obj::requestTransit((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r6, r3
      mr        r5, r4
      stw       r0, 0x14(r1)
      mr        r4, r6
      lwz       r3, 0x180(r3)
      bl        -0x3660
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80360034
 * Size:	00012C
 */
void Game::KingChappy::Obj::walkFunc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stfd      f31, 0x30(r1)
      psq_st    f31,0x38(r1),0,0
      stfd      f30, 0x20(r1)
      psq_st    f30,0x28(r1),0,0
      stfd      f29, 0x10(r1)
      psq_st    f29,0x18(r1),0,0
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r0, 0x394(r3)
      lwz       r3, 0xC0(r3)
      cmplwi    r0, 0
      lfs       f31, 0x2E4(r3)
      lfs       f30, 0x334(r3)
      lfs       f29, 0x30C(r3)
      beq-      .loc_0x54
      lfs       f31, 0xA9C(r3)
      lfs       f30, 0xAEC(r3)
      lfs       f29, 0xAC4(r3)

    .loc_0x54:
      mr        r3, r31
      bl        -0x6A4
      fmr       f1, f31
      mr        r3, r31
      fmr       f2, f29
      addi      r4, r31, 0x2BC
      fmr       f3, f30
      bl        -0x24AAC8
      lwz       r3, 0x30C(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x30C(r31)
      lwz       r0, 0x30C(r31)
      cmpwi     r0, 0x78
      ble-      .loc_0x100
      lfs       f1, 0x194(r31)
      lfs       f0, 0x2FC(r31)
      lfs       f2, 0x18C(r31)
      fsubs     f3, f1, f0
      lfs       f1, 0x2F4(r31)
      lfs       f0, 0x3F8(r2)
      fsubs     f2, f2, f1
      fmuls     f1, f3, f3
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0xE0
      li        r3, 0x78
      li        r0, 0
      stw       r3, 0x2F0(r31)
      stw       r0, 0x230(r31)
      lfs       f0, 0x198(r31)
      stfs      f0, 0x2BC(r31)
      lfs       f0, 0x19C(r31)
      stfs      f0, 0x2C0(r31)
      lfs       f0, 0x1A0(r31)
      stfs      f0, 0x2C4(r31)

    .loc_0xE0:
      lfs       f0, 0x18C(r31)
      li        r0, 0
      stfs      f0, 0x2F4(r31)
      lfs       f0, 0x190(r31)
      stfs      f0, 0x2F8(r31)
      lfs       f0, 0x194(r31)
      stfs      f0, 0x2FC(r31)
      stw       r0, 0x30C(r31)

    .loc_0x100:
      psq_l     f31,0x38(r1),0,0
      lfd       f31, 0x30(r1)
      psq_l     f30,0x28(r1),0,0
      lfd       f30, 0x20(r1)
      psq_l     f29,0x18(r1),0,0
      lfd       f29, 0x10(r1)
      lwz       r0, 0x44(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80360160
 * Size:	0001AC
 */
void Game::KingChappy::Obj::turnFunc((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x90(r1)
      mflr      r0
      stw       r0, 0x94(r1)
      stfd      f31, 0x80(r1)
      psq_st    f31,0x88(r1),0,0
      stfd      f30, 0x70(r1)
      psq_st    f30,0x78(r1),0,0
      stfd      f29, 0x60(r1)
      psq_st    f29,0x68(r1),0,0
      stfd      f28, 0x50(r1)
      psq_st    f28,0x58(r1),0,0
      stfd      f27, 0x40(r1)
      psq_st    f27,0x48(r1),0,0
      stw       r31, 0x3C(r1)
      mr        r31, r3
      fmr       f27, f1
      lwz       r4, 0x230(r3)
      lfs       f30, 0x2BC(r3)
      cmplwi    r4, 0
      lfs       f31, 0x2C4(r3)
      beq-      .loc_0x70
      lwz       r12, 0x0(r4)
      addi      r3, r1, 0x20
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f30, 0x20(r1)
      lfs       f31, 0x28(r1)

    .loc_0x70:
      lbz       r0, 0x394(r31)
      lwz       r3, 0xC0(r31)
      cmplwi    r0, 0
      lfs       f29, 0x334(r3)
      lfs       f28, 0x30C(r3)
      beq-      .loc_0x90
      lfs       f29, 0xAEC(r3)
      lfs       f28, 0xAC4(r3)

    .loc_0x90:
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f4, 0x14(r1)
      lis       r3, 0x8051
      lfs       f0, 0x1C(r1)
      subi      r3, r3, 0x2E20
      lfs       f3, 0x18(r1)
      fsubs     f1, f30, f4
      fsubs     f2, f31, f0
      stfs      f4, 0x8(r1)
      stfs      f3, 0xC(r1)
      stfs      f0, 0x10(r1)
      bl        -0x32B128
      bl        0xB199C
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0xB19A4
      fmuls     f4, f29, f27
      lfs       f0, 0x3F0(r2)
      fmuls     f3, f28, f27
      lfs       f2, 0x3EC(r2)
      fmr       f30, f1
      fmuls     f0, f0, f4
      fmuls     f31, f30, f3
      fmuls     f1, f2, f0
      fabs      f0, f31
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x144
      lfs       f0, 0x32C(r2)
      fcmpo     cr0, f31, f0
      ble-      .loc_0x140
      fmr       f31, f1
      b         .loc_0x144

    .loc_0x140:
      fneg      f31, f1

    .loc_0x144:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f31, f1
      bl        0xB1914
      stfs      f1, 0x1FC(r31)
      fmr       f1, f30
      lfs       f0, 0x1FC(r31)
      stfs      f0, 0x1A8(r31)
      psq_l     f31,0x88(r1),0,0
      lfd       f31, 0x80(r1)
      psq_l     f30,0x78(r1),0,0
      lfd       f30, 0x70(r1)
      psq_l     f29,0x68(r1),0,0
      lfd       f29, 0x60(r1)
      psq_l     f28,0x58(r1),0,0
      lfd       f28, 0x50(r1)
      psq_l     f27,0x48(r1),0,0
      lfd       f27, 0x40(r1)
      lwz       r0, 0x94(r1)
      lwz       r31, 0x3C(r1)
      mtlr      r0
      addi      r1, r1, 0x90
      blr
    */
}

/*
 * --INFO--
 * Address:	8036030C
 * Size:	000034
 */
void Game::KingChappy::Obj::isReachToGoal((float))
{
    /*
    .loc_0x0:
      fmuls     f0, f1, f1
      lfs       f2, 0x194(r3)
      lfs       f1, 0x2C4(r3)
      lfs       f3, 0x18C(r3)
      fsubs     f2, f2, f1
      lfs       f1, 0x2BC(r3)
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
 * Address:	........
 * Size:	0000D8
 */
void Game::KingChappy::Obj::isUseTurn(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80360340
 * Size:	000844
 */
void Game::KingChappy::Obj::checkAttack((bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x240(r1)
      mflr      r0
      stw       r0, 0x244(r1)
      stfd      f31, 0x230(r1)
      psq_st    f31,0x238(r1),0,0
      stfd      f30, 0x220(r1)
      psq_st    f30,0x228(r1),0,0
      stfd      f29, 0x210(r1)
      psq_st    f29,0x218(r1),0,0
      stfd      f28, 0x200(r1)
      psq_st    f28,0x208(r1),0,0
      stfd      f27, 0x1F0(r1)
      psq_st    f27,0x1F8(r1),0,0
      stfd      f26, 0x1E0(r1)
      psq_st    f26,0x1E8(r1),0,0
      stfd      f25, 0x1D0(r1)
      psq_st    f25,0x1D8(r1),0,0
      stfd      f24, 0x1C0(r1)
      psq_st    f24,0x1C8(r1),0,0
      stfd      f23, 0x1B0(r1)
      psq_st    f23,0x1B8(r1),0,0
      stfd      f22, 0x1A0(r1)
      psq_st    f22,0x1A8(r1),0,0
      stmw      r26, 0x188(r1)
      mr        r30, r3
      mr        r31, r4
      bl        -0x258FB4
      cmpwi     r3, 0x2
      beq-      .loc_0x7E0
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0xB0
      lwz       r28, 0x184(r30)
      cmplwi    r28, 0
      bne-      .loc_0xA4
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x15E8
      li        r4, 0x44A
      addi      r5, r5, 0x15F8
      crclr     6, 0x6
      bl        -0x335DA0

    .loc_0xA4:
      lbz       r0, 0x58(r28)
      cmplwi    r0, 0
      bne-      .loc_0x7E0

    .loc_0xB0:
      lbz       r0, 0x394(r30)
      cmplwi    r0, 0
      beq-      .loc_0xCC
      lwz       r3, 0xC0(r30)
      lfs       f27, 0xB3C(r3)
      lfs       f26, 0xB14(r3)
      b         .loc_0xD8

    .loc_0xCC:
      lwz       r3, 0xC0(r30)
      lfs       f27, 0x564(r3)
      lfs       f26, 0x58C(r3)

    .loc_0xD8:
      lwz       r3, 0x230(r30)
      cmplwi    r3, 0
      beq-      .loc_0x538
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x538
      lwz       r29, 0x230(r30)
      addi      r3, r1, 0x110
      lwz       r5, 0xC0(r30)
      mr        r4, r29
      lwz       r12, 0x0(r29)
      lfs       f28, 0x424(r5)
      lwz       r12, 0x8(r12)
      lfs       f29, 0x3FC(r5)
      lfs       f30, 0x3D4(r5)
      lfs       f31, 0x3AC(r5)
      mtctr     r12
      bctrl
      mr        r4, r30
      lfs       f2, 0x110(r1)
      lwz       r12, 0x0(r30)
      addi      r3, r1, 0x11C
      lfs       f1, 0x114(r1)
      lfs       f0, 0x118(r1)
      lwz       r12, 0x8(r12)
      stfs      f2, 0xF8(r1)
      stfs      f1, 0xFC(r1)
      stfs      f0, 0x100(r1)
      mtctr     r12
      bctrl
      lfs       f5, 0x11C(r1)
      lis       r3, 0x8051
      lfs       f3, 0x124(r1)
      subi      r3, r3, 0x2E20
      lfs       f1, 0xF8(r1)
      lfs       f0, 0x100(r1)
      lfs       f4, 0x120(r1)
      fsubs     f1, f1, f5
      fsubs     f2, f0, f3
      stfs      f5, 0x104(r1)
      stfs      f4, 0x108(r1)
      stfs      f3, 0x10C(r1)
      bl        -0x32B3C4
      bl        0xB1700
      lwz       r12, 0x0(r30)
      fmr       f22, f1
      mr        r3, r30
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f22
      bl        0xB1708
      mr        r4, r30
      fmr       f24, f1
      lwz       r12, 0x0(r30)
      addi      r3, r1, 0x134
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r29
      addi      r3, r1, 0x128
      lwz       r12, 0x0(r29)
      lfs       f25, 0x134(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      lfs       f0, 0x128(r1)
      lwz       r12, 0x0(r30)
      addi      r3, r1, 0x14C
      fsubs     f22, f0, f25
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r29
      addi      r3, r1, 0x140
      lwz       r12, 0x0(r29)
      lfs       f25, 0x150(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      lfs       f0, 0x144(r1)
      lwz       r12, 0x0(r30)
      addi      r3, r1, 0x164
      fsubs     f23, f0, f25
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r29
      addi      r3, r1, 0x158
      lwz       r12, 0x0(r29)
      lfs       f25, 0x16C(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x160(r1)
      fmuls     f1, f31, f31
      fmuls     f2, f30, f30
      li        r3, 0x1
      fsubs     f0, f0, f25
      li        r4, 0
      fmuls     f0, f0, f0
      fmadds    f0, f22, f22, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x2BC
      fcmpo     cr0, f0, f2
      mr        r0, r4
      ble-      .loc_0x2B0
      fabs      f0, f23
      frsp      f0, f0
      fcmpo     cr0, f0, f29
      bge-      .loc_0x2B0
      mr        r0, r3

    .loc_0x2B0:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x2BC
      li        r4, 0x1

    .loc_0x2BC:
      rlwinm.   r0,r4,0,24,31
      bne-      .loc_0x2F4
      lfs       f0, 0x3F0(r2)
      fabs      f2, f24
      lfs       f1, 0x3EC(r2)
      fmuls     f0, f0, f28
      frsp      f2, f2
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      mfcr      r0
      rlwinm.   r0,r0,3,31,31
      beq-      .loc_0x2F4
      li        r3, 0

    .loc_0x2F4:
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x308
      li        r0, 0
      stw       r0, 0x230(r30)
      b         .loc_0x538

    .loc_0x308:
      lwz       r29, 0x230(r30)
      addi      r3, r1, 0xE0
      mr        r4, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      lfs       f2, 0xE0(r1)
      lwz       r12, 0x0(r30)
      addi      r3, r1, 0xEC
      lfs       f1, 0xE4(r1)
      lfs       f0, 0xE8(r1)
      lwz       r12, 0x8(r12)
      stfs      f2, 0xC8(r1)
      stfs      f1, 0xCC(r1)
      stfs      f0, 0xD0(r1)
      mtctr     r12
      bctrl
      lfs       f5, 0xEC(r1)
      lis       r3, 0x8051
      lfs       f3, 0xF4(r1)
      subi      r3, r3, 0x2E20
      lfs       f1, 0xC8(r1)
      lfs       f0, 0xD0(r1)
      lfs       f4, 0xF0(r1)
      fsubs     f1, f1, f5
      fsubs     f2, f0, f3
      stfs      f5, 0xD4(r1)
      stfs      f4, 0xD8(r1)
      stfs      f3, 0xDC(r1)
      bl        -0x32B5BC
      bl        0xB1508
      lwz       r12, 0x0(r30)
      fmr       f22, f1
      mr        r3, r30
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f22
      bl        0xB1510
      mr        r4, r30
      fmr       f29, f1
      lwz       r12, 0x0(r30)
      addi      r3, r1, 0x8C
      li        r28, 0
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r29
      addi      r3, r1, 0x80
      lwz       r12, 0x0(r29)
      lfs       f28, 0x8C(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      lfs       f0, 0x80(r1)
      lwz       r12, 0x0(r30)
      addi      r3, r1, 0xA4
      fsubs     f23, f0, f28
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r29
      addi      r3, r1, 0x98
      lwz       r12, 0x0(r29)
      lfs       f28, 0xA8(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      lfs       f0, 0x9C(r1)
      lwz       r12, 0x0(r30)
      addi      r3, r1, 0xBC
      fsubs     f22, f0, f28
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r29
      addi      r3, r1, 0xB0
      lwz       r12, 0x0(r29)
      lfs       f28, 0xC4(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      fmuls     f1, f22, f22
      lfs       f2, 0xB8(r1)
      fmuls     f0, f27, f27
      fsubs     f2, f2, f28
      fmadds    f1, f23, f23, f1
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x4AC
      lfs       f0, 0x3F0(r2)
      fabs      f2, f29
      lfs       f1, 0x3EC(r2)
      fmuls     f0, f0, f26
      frsp      f2, f2
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      bne-      .loc_0x4AC
      li        r28, 0x1

    .loc_0x4AC:
      rlwinm.   r0,r28,0,24,31
      beq-      .loc_0x538
      lwz       r4, 0x230(r30)
      addi      r3, r1, 0x17C
      lwz       r5, 0xC0(r30)
      lwz       r12, 0x0(r4)
      lfs       f22, 0x8E4(r5)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x194(r30)
      fmuls     f0, f22, f22
      lfs       f1, 0x184(r1)
      lfs       f3, 0x18C(r30)
      fsubs     f2, f2, f1
      lfs       f1, 0x17C(r1)
      fsubs     f3, f3, f1
      fmuls     f1, f2, f2
      fmadds    f1, f3, f3, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x530
      stb       r31, 0x2E4(r30)
      mr        r4, r30
      li        r5, 0x1
      li        r6, 0
      lwz       r3, 0x34C(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stw       r0, 0x230(r30)
      b         .loc_0x538

    .loc_0x530:
      li        r0, 0
      stw       r0, 0x230(r30)

    .loc_0x538:
      lwz       r3, 0xC0(r30)
      lbz       r0, 0xBCB(r3)
      cmplwi    r0, 0
      beq-      .loc_0x7E0
      lbz       r0, 0xD8(r30)
      rlwinm.   r0,r0,0,29,29
      bne-      .loc_0x558
      b         .loc_0x7E0

    .loc_0x558:
      lwz       r3, -0x6E20(r13)
      li        r4, 0x24
      bl        -0x252BFC
      mr.       r27, r3
      beq-      .loc_0x7E0
      lfs       f0, 0x3F0(r2)
      fmuls     f28, f27, f27
      lfs       f1, 0x3EC(r2)
      li        r26, 0
      fmuls     f0, f0, f26
      fmuls     f29, f1, f0
      b         .loc_0x7C4

    .loc_0x588:
      mr        r3, r27
      mr        r4, r26
      lwz       r12, 0x0(r27)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      mr.       r28, r3
      beq-      .loc_0x7C0
      bl        -0x15790
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x7C0
      mr        r4, r28
      addi      r3, r1, 0x68
      lwz       r12, 0x0(r28)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      lfs       f2, 0x68(r1)
      lwz       r12, 0x0(r30)
      addi      r3, r1, 0x74
      lfs       f1, 0x6C(r1)
      lfs       f0, 0x70(r1)
      lwz       r12, 0x8(r12)
      stfs      f2, 0x50(r1)
      stfs      f1, 0x54(r1)
      stfs      f0, 0x58(r1)
      mtctr     r12
      bctrl
      lfs       f5, 0x74(r1)
      lis       r3, 0x8051
      lfs       f3, 0x7C(r1)
      subi      r3, r3, 0x2E20
      lfs       f1, 0x50(r1)
      lfs       f0, 0x58(r1)
      lfs       f4, 0x78(r1)
      fsubs     f1, f1, f5
      fsubs     f2, f0, f3
      stfs      f5, 0x5C(r1)
      stfs      f4, 0x60(r1)
      stfs      f3, 0x64(r1)
      bl        -0x32B864
      bl        0xB1260
      lwz       r12, 0x0(r30)
      fmr       f22, f1
      mr        r3, r30
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f22
      bl        0xB1268
      mr        r4, r30
      fmr       f27, f1
      lwz       r12, 0x0(r30)
      addi      r3, r1, 0x14
      li        r29, 0
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r28
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r28)
      lfs       f26, 0x14(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      lfs       f0, 0x8(r1)
      lwz       r12, 0x0(r30)
      addi      r3, r1, 0x2C
      fsubs     f23, f0, f26
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r28
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r28)
      lfs       f26, 0x30(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      lfs       f0, 0x24(r1)
      lwz       r12, 0x0(r30)
      addi      r3, r1, 0x44
      fsubs     f22, f0, f26
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r28
      addi      r3, r1, 0x38
      lwz       r12, 0x0(r28)
      lfs       f26, 0x4C(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      fmuls     f0, f22, f22
      lfs       f1, 0x40(r1)
      fsubs     f1, f1, f26
      fmadds    f0, f23, f23, f0
      fmadds    f0, f1, f1, f0
      fcmpo     cr0, f0, f28
      bge-      .loc_0x740
      fabs      f0, f27
      frsp      f0, f0
      fcmpo     cr0, f0, f29
      cror      2, 0, 0x2
      bne-      .loc_0x740
      li        r29, 0x1

    .loc_0x740:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0x7C0
      mr        r4, r28
      lwz       r5, 0xC0(r30)
      lwz       r12, 0x0(r28)
      addi      r3, r1, 0x170
      lfs       f22, 0x8E4(r5)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x194(r30)
      fmuls     f0, f22, f22
      lfs       f1, 0x178(r1)
      lfs       f3, 0x18C(r30)
      fsubs     f2, f2, f1
      lfs       f1, 0x170(r1)
      fsubs     f3, f3, f1
      fmuls     f1, f2, f2
      fmadds    f1, f3, f3, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x7C0
      stb       r31, 0x2E4(r30)
      mr        r4, r30
      li        r5, 0x1
      li        r6, 0
      lwz       r3, 0x34C(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stw       r0, 0x230(r30)

    .loc_0x7C0:
      addi      r26, r26, 0x1

    .loc_0x7C4:
      mr        r3, r27
      lwz       r12, 0x0(r27)
      lwz       r12, 0x8C(r12)
      mtctr     r12
      bctrl
      cmpw      r26, r3
      blt+      .loc_0x588

    .loc_0x7E0:
      psq_l     f31,0x238(r1),0,0
      lfd       f31, 0x230(r1)
      psq_l     f30,0x228(r1),0,0
      lfd       f30, 0x220(r1)
      psq_l     f29,0x218(r1),0,0
      lfd       f29, 0x210(r1)
      psq_l     f28,0x208(r1),0,0
      lfd       f28, 0x200(r1)
      psq_l     f27,0x1F8(r1),0,0
      lfd       f27, 0x1F0(r1)
      psq_l     f26,0x1E8(r1),0,0
      lfd       f26, 0x1E0(r1)
      psq_l     f25,0x1D8(r1),0,0
      lfd       f25, 0x1D0(r1)
      psq_l     f24,0x1C8(r1),0,0
      lfd       f24, 0x1C0(r1)
      psq_l     f23,0x1B8(r1),0,0
      lfd       f23, 0x1B0(r1)
      psq_l     f22,0x1A8(r1),0,0
      lfd       f22, 0x1A0(r1)
      lmw       r26, 0x188(r1)
      lwz       r0, 0x244(r1)
      mtlr      r0
      addi      r1, r1, 0x240
      blr
    */
}

/*
 * --INFO--
 * Address:	80360B84
 * Size:	00042C
 */
void Game::KingChappy::Obj::checkFlick((bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0xC0(r1)
      mflr      r0
      stw       r0, 0xC4(r1)
      stfd      f31, 0xB0(r1)
      psq_st    f31,0xB8(r1),0,0
      stfd      f30, 0xA0(r1)
      psq_st    f30,0xA8(r1),0,0
      stfd      f29, 0x90(r1)
      psq_st    f29,0x98(r1),0,0
      stfd      f28, 0x80(r1)
      psq_st    f28,0x88(r1),0,0
      stw       r31, 0x7C(r1)
      stw       r30, 0x78(r1)
      stw       r29, 0x74(r1)
      mr        r30, r3
      mr        r31, r4
      bl        -0x2597D0
      cmpwi     r3, 0x2
      beq-      .loc_0x3F0
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x64
      lwz       r3, 0x184(r30)
      lbz       r0, 0x58(r3)
      cmplwi    r0, 0
      bne-      .loc_0x3F0

    .loc_0x64:
      li        r0, 0
      lwz       r3, -0x6D20(r13)
      lis       r4, 0x804B
      stw       r0, 0x5C(r1)
      subi      r4, r4, 0x434C
      cmplwi    r0, 0
      stw       r4, 0x50(r1)
      stw       r0, 0x54(r1)
      stw       r3, 0x58(r1)
      bne-      .loc_0xA4
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x54(r1)
      b         .loc_0x300

    .loc_0xA4:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x54(r1)
      b         .loc_0x110

    .loc_0xBC:
      lwz       r3, 0x58(r1)
      lwz       r4, 0x54(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x5C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x300
      lwz       r3, 0x58(r1)
      lwz       r4, 0x54(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x54(r1)

    .loc_0x110:
      lwz       r12, 0x50(r1)
      addi      r3, r1, 0x50
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0xBC
      b         .loc_0x300

    .loc_0x130:
      lwz       r3, 0x58(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r29, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x244
      mr        r4, r29
      lwz       r5, 0xC0(r30)
      lwz       r12, 0x0(r29)
      addi      r3, r1, 0x14
      lfs       f28, 0x8E4(r5)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r30)
      lfs       f31, 0x14(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r29
      lfs       f0, 0x8(r1)
      lwz       r12, 0x0(r29)
      addi      r3, r1, 0x2C
      fsubs     f29, f0, f31
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r30)
      lfs       f31, 0x30(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r29
      lfs       f0, 0x24(r1)
      lwz       r12, 0x0(r29)
      addi      r3, r1, 0x44
      fsubs     f30, f0, f31
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r30
      addi      r3, r1, 0x38
      lwz       r12, 0x0(r30)
      lfs       f31, 0x4C(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      fmuls     f1, f30, f30
      lfs       f2, 0x40(r1)
      fmuls     f0, f28, f28
      fsubs     f2, f2, f31
      fmadds    f1, f29, f29, f1
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x244
      lfs       f1, 0x20C(r30)
      lfs       f0, 0x368(r2)
      fadds     f0, f1, f0
      stfs      f0, 0x20C(r30)

    .loc_0x244:
      lwz       r0, 0x5C(r1)
      cmplwi    r0, 0
      bne-      .loc_0x270
      lwz       r3, 0x58(r1)
      lwz       r4, 0x54(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x54(r1)
      b         .loc_0x300

    .loc_0x270:
      lwz       r3, 0x58(r1)
      lwz       r4, 0x54(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x54(r1)
      b         .loc_0x2E4

    .loc_0x290:
      lwz       r3, 0x58(r1)
      lwz       r4, 0x54(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x5C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x300
      lwz       r3, 0x58(r1)
      lwz       r4, 0x54(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x54(r1)

    .loc_0x2E4:
      lwz       r12, 0x50(r1)
      addi      r3, r1, 0x50
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x290

    .loc_0x300:
      lwz       r3, 0x58(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x54(r1)
      cmplw     r4, r3
      bne+      .loc_0x130
      mr        r3, r30
      li        r4, 0
      bl        -0x24C854
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x3F0
      stb       r31, 0x2E4(r30)
      lfs       f1, 0x3FC(r2)
      lwz       r29, 0xC0(r30)
      lfs       f2, 0x200(r30)
      lfs       f0, 0x104(r29)
      fmuls     f0, f1, f0
      fcmpo     cr0, f2, f0
      bge-      .loc_0x3D0
      bl        -0x297938
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x64(r1)
      lfd       f3, 0x3E0(r2)
      stw       r0, 0x60(r1)
      lfs       f1, 0x3D0(r2)
      lfd       f2, 0x60(r1)
      lfs       f0, 0x9FC(r29)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x3AC
      lwz       r3, 0x34C(r30)
      mr        r4, r30
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      b         .loc_0x3F0

    .loc_0x3AC:
      lwz       r3, 0x34C(r30)
      mr        r4, r30
      li        r5, 0x3
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      b         .loc_0x3F0

    .loc_0x3D0:
      lwz       r3, 0x34C(r30)
      mr        r4, r30
      li        r5, 0x3
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x3F0:
      psq_l     f31,0xB8(r1),0,0
      lfd       f31, 0xB0(r1)
      psq_l     f30,0xA8(r1),0,0
      lfd       f30, 0xA0(r1)
      psq_l     f29,0x98(r1),0,0
      lfd       f29, 0x90(r1)
      psq_l     f28,0x88(r1),0,0
      lfd       f28, 0x80(r1)
      lwz       r31, 0x7C(r1)
      lwz       r30, 0x78(r1)
      lwz       r0, 0xC4(r1)
      lwz       r29, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0xC0
      blr
    */
}

/*
 * --INFO--
 * Address:	80360FB0
 * Size:	0000EC
 */
void Game::KingChappy::Obj::checkDead((bool))
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
      bl        -0x259BD8
      cmpwi     r3, 0x2
      beq-      .loc_0xD4
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x40
      lwz       r3, 0x184(r30)
      lbz       r0, 0x58(r3)
      cmplwi    r0, 0
      bne-      .loc_0xD4

    .loc_0x40:
      lfs       f1, 0x200(r30)
      lfs       f0, 0x32C(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0xD4
      stb       r31, 0x2E4(r30)
      lwz       r31, 0xC0(r30)
      bl        -0x297A6C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, 0x3E0(r2)
      stw       r0, 0x8(r1)
      lfs       f1, 0x3D0(r2)
      lfd       f2, 0x8(r1)
      lfs       f0, 0x9D4(r31)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0xB4
      lwz       r3, 0x34C(r30)
      mr        r4, r30
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      b         .loc_0xD4

    .loc_0xB4:
      lwz       r3, 0x34C(r30)
      mr        r4, r30
      li        r5, 0x2
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0xD4:
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
 * Address:	8036109C
 * Size:	000128
 */
void Game::KingChappy::Obj::checkTurn((bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stfd      f31, 0x30(r1)
      psq_st    f31,0x38(r1),0,0
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      mr        r30, r3
      mr        r31, r4
      bl        -0x259CCC
      cmpwi     r3, 0x2
      beq-      .loc_0x108
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x48
      lwz       r3, 0x184(r30)
      lbz       r0, 0x58(r3)
      cmplwi    r0, 0
      bne-      .loc_0x108

    .loc_0x48:
      mr        r4, r30
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f5, 0x14(r1)
      lis       r3, 0x8051
      lfs       f3, 0x1C(r1)
      subi      r3, r3, 0x2E20
      lfs       f1, 0x2BC(r30)
      lfs       f0, 0x2C4(r30)
      lfs       f4, 0x18(r1)
      fsubs     f1, f1, f5
      fsubs     f2, f0, f3
      stfs      f5, 0x8(r1)
      stfs      f4, 0xC(r1)
      stfs      f3, 0x10(r1)
      bl        -0x32C024
      bl        0xB0AA0
      lwz       r12, 0x0(r30)
      fmr       f31, f1
      mr        r3, r30
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0xB0AA8
      lwz       r3, 0xC0(r30)
      fabs      f3, f1
      lfs       f1, 0x3F0(r2)
      lfs       f0, 0x81C(r3)
      lfs       f2, 0x3EC(r2)
      frsp      f3, f3
      fmuls     f0, f1, f0
      fmuls     f0, f2, f0
      fcmpo     cr0, f3, f0
      ble-      .loc_0x108
      stb       r31, 0x2E4(r30)
      mr        r4, r30
      li        r5, 0x6
      li        r6, 0
      lwz       r3, 0x34C(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x108:
      psq_l     f31,0x38(r1),0,0
      lwz       r0, 0x44(r1)
      lfd       f31, 0x30(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	803611C4
 * Size:	00013C
 */
void Game::KingChappy::Obj::startMotionSelf((int, SysShape::MotionListener*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stfd      f31, 0x30(r1)
      psq_st    f31,0x38(r1),0,0
      stmw      r27, 0x1C(r1)
      mr.       r28, r5
      mr        r31, r3
      mr        r27, r4
      bne-      .loc_0x38
      cmplwi    r31, 0
      beq-      .loc_0x34
      addi      r3, r3, 0x178

    .loc_0x34:
      mr        r28, r3

    .loc_0x38:
      lbz       r0, 0x2E4(r31)
      li        r30, 0
      lwz       r3, 0x184(r31)
      cmplwi    r0, 0
      beq-      .loc_0x100
      lbz       r0, 0x58(r3)
      cmplwi    r0, 0
      bne-      .loc_0x100
      lwz       r12, 0x0(r3)
      li        r4, 0
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r3)
      mr        r29, r3
      cmplwi    r4, 0
      beq-      .loc_0xA4
      lwz       r3, 0x18(r4)
      lis       r0, 0x4330
      stw       r0, 0x8(r1)
      lha       r0, 0x6(r3)
      lfd       f1, 0x3E0(r2)
      xoris     r0, r0, 0x8000
      stw       r0, 0xC(r1)
      lfd       f0, 0x8(r1)
      fsubs     f1, f0, f1
      b         .loc_0xA8

    .loc_0xA4:
      lfs       f1, 0x32C(r2)

    .loc_0xA8:
      lfs       f0, 0x358(r2)
      lfs       f31, 0x8(r29)
      fsubs     f0, f1, f0
      fcmpo     cr0, f0, f31
      ble-      .loc_0x100
      cmplwi    r4, 0
      beq-      .loc_0xCC
      lha       r4, 0x20(r4)
      b         .loc_0xD0

    .loc_0xCC:
      li        r4, -0x1

    .loc_0xD0:
      cmpw      r27, r4
      beq-      .loc_0x100
      lfs       f1, 0x400(r2)
      mr        r3, r31
      mr        r5, r27
      subi      r6, r13, 0x6DC0
      li        r7, 0
      bl        -0x25C4F8
      fmr       f1, f31
      mr        r3, r29
      bl        0xC7B04
      li        r30, 0x1

    .loc_0x100:
      rlwinm.   r0,r30,0,24,31
      bne-      .loc_0x118
      mr        r3, r31
      mr        r4, r27
      mr        r5, r28
      bl        -0x25C2D4

    .loc_0x118:
      li        r0, 0
      stb       r0, 0x2E4(r31)
      psq_l     f31,0x38(r1),0,0
      lfd       f31, 0x30(r1)
      lmw       r27, 0x1C(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80361300
 * Size:	000098
 */
void Game::KingChappy::Obj::endBlendAnimation(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      li        r4, 0x1
      lwz       r3, 0x184(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r3)
      cmplwi    r4, 0
      beq-      .loc_0x4C
      lha       r31, 0x20(r4)
      b         .loc_0x50

    .loc_0x4C:
      li        r31, -0x1

    .loc_0x50:
      lfs       f31, 0x8(r3)
      mr        r3, r30
      bl        -0x25C3B0
      mr        r3, r30
      mr        r4, r31
      li        r5, 0
      bl        -0x25C364
      fmr       f1, f31
      mr        r3, r30
      bl        -0x25C14C
      psq_l     f31,0x18(r1),0,0
      lwz       r0, 0x24(r1)
      lfd       f31, 0x10(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80361398
 * Size:	000044
 */
void Game::KingChappy::Obj::leftFootMtxCalc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r5, r3, 0x314
      addi      r6, r3, 0x320
      stw       r0, 0x14(r1)
      lwz       r4, 0x174(r3)
      lhz       r0, 0x310(r3)
      lwz       r4, 0x8(r4)
      mulli     r0, r0, 0x30
      lwz       r4, 0x84(r4)
      lwz       r4, 0xC(r4)
      add       r4, r4, r0
      bl        0x58
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803613DC
 * Size:	000044
 */
void Game::KingChappy::Obj::rightFootMtxCalc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r5, r3, 0x328
      addi      r6, r3, 0x334
      stw       r0, 0x14(r1)
      lwz       r4, 0x174(r3)
      lhz       r0, 0x324(r3)
      lwz       r4, 0x8(r4)
      mulli     r0, r0, 0x30
      lwz       r4, 0x84(r4)
      lwz       r4, 0xC(r4)
      add       r4, r4, r0
      bl        .loc_0x44
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x44:
    */
}

/*
 * --INFO--
 * Address:	80361420
 * Size:	000190
 */
void footMtxCalc__Q34Game10KingChappy3ObjFPA4_fP10Vector3<float> Pf(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r6
      stw       r30, 0x18(r1)
      mr        r30, r5
      stw       r29, 0x14(r1)
      mr        r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      lwz       r3, 0xC0(r3)
      lfs       f1, 0x190(r28)
      lfs       f0, 0xBD0(r3)
      lfs       f2, 0x1C(r4)
      fadds     f0, f1, f0
      fcmpo     cr0, f2, f0
      ble-      .loc_0xD4
      lfs       f2, 0x0(r31)
      lfs       f0, 0x378(r2)
      lfs       f1, 0x358(r2)
      fadds     f0, f2, f0
      stfs      f0, 0x0(r31)
      lfs       f2, 0x0(r31)
      fcmpo     cr0, f2, f1
      fsubs     f3, f1, f2
      bge-      .loc_0xB4
      lfs       f0, 0x0(r30)
      lfs       f1, 0xC(r29)
      fmuls     f0, f0, f3
      fmadds    f0, f2, f1, f0
      stfs      f0, 0xC(r29)
      lfs       f0, 0x4(r30)
      lfs       f2, 0x0(r31)
      fmuls     f0, f0, f3
      lfs       f1, 0x1C(r29)
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x1C(r29)
      lfs       f0, 0x8(r30)
      lfs       f2, 0x0(r31)
      fmuls     f0, f0, f3
      lfs       f1, 0x2C(r29)
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x2C(r29)
      b         .loc_0x170

    .loc_0xB4:
      lfs       f3, 0x2C(r29)
      lfs       f2, 0x1C(r29)
      lfs       f0, 0xC(r29)
      stfs      f0, 0x0(r30)
      stfs      f2, 0x4(r30)
      stfs      f3, 0x8(r30)
      stfs      f1, 0x0(r31)
      b         .loc_0x170

    .loc_0xD4:
      lfs       f2, 0x0(r31)
      lfs       f1, 0x404(r2)
      lfs       f0, 0x368(r2)
      fmuls     f1, f2, f1
      stfs      f1, 0x0(r31)
      lfs       f1, 0x0(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x12C
      lfs       f0, 0x32C(r2)
      fcmpu     cr0, f0, f1
      beq-      .loc_0x124
      lwz       r3, -0x6960(r13)
      li        r4, 0x6
      li        r6, 0x2
      bl        -0x10F2F0
      lwz       r3, -0x6958(r13)
      mr        r5, r30
      li        r4, 0xB
      li        r6, 0x2
      bl        -0x10DDC0

    .loc_0x124:
      lfs       f0, 0x32C(r2)
      stfs      f0, 0x0(r31)

    .loc_0x12C:
      lfs       f1, 0x358(r2)
      lfs       f2, 0x0(r31)
      lfs       f0, 0xC(r29)
      fsubs     f3, f1, f2
      lfs       f1, 0x0(r30)
      fmuls     f0, f0, f3
      fmadds    f0, f2, f1, f0
      stfs      f0, 0xC(r29)
      lfs       f0, 0x190(r28)
      stfs      f0, 0x4(r30)
      stfs      f0, 0x1C(r29)
      lfs       f0, 0x2C(r29)
      lfs       f2, 0x0(r31)
      fmuls     f0, f0, f3
      lfs       f1, 0x8(r30)
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x2C(r29)

    .loc_0x170:
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
 * Address:	803615B0
 * Size:	000078
 */
void Game::KingChappy::Obj::resetFootPos(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0x174(r3)
      lhz       r0, 0x310(r3)
      lwz       r4, 0x8(r4)
      mulli     r0, r0, 0x30
      lfs       f1, 0x32C(r2)
      lwz       r4, 0x84(r4)
      lwz       r4, 0xC(r4)
      add       r4, r4, r0
      lfs       f3, 0x2C(r4)
      lfs       f2, 0x1C(r4)
      lfs       f0, 0xC(r4)
      stfs      f0, 0x314(r3)
      stfs      f2, 0x318(r3)
      stfs      f3, 0x31C(r3)
      stfs      f1, 0x320(r3)
      lwz       r4, 0x174(r3)
      lhz       r0, 0x324(r3)
      lwz       r4, 0x8(r4)
      mulli     r0, r0, 0x30
      lwz       r4, 0x84(r4)
      lwz       r4, 0xC(r4)
      add       r4, r4, r0
      lfs       f3, 0x2C(r4)
      lfs       f2, 0x1C(r4)
      lfs       f0, 0xC(r4)
      stfs      f0, 0x328(r3)
      stfs      f2, 0x32C(r3)
      stfs      f3, 0x330(r3)
      stfs      f1, 0x334(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80361628
 * Size:	0000DC
 */
void Game::KingChappy::Obj::fadeAllEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x350(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x358(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x354(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x35C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x360(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x364(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x368(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x36C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x370(r31)
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
 * Address:	80361704
 * Size:	000054
 */
void efx::TKchYodareBaseChaseMtx::fade(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x4E1E8
      addi      r3, r31, 0x18
      lwz       r12, 0x18(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x34
      lwz       r12, 0x34(r31)
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
 * Address:	80361758
 * Size:	000474
 */
void Game::KingChappy::Obj::createEffect((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0xB0(r1)
      mflr      r0
      lis       r6, 0x804B
      lis       r5, 0x804E
      stw       r0, 0xB4(r1)
      subi      r8, r6, 0x5814
      addi      r0, r5, 0x1D7C
      lfs       f0, 0x380(r2)
      stw       r31, 0xAC(r1)
      cmplwi    r4, 0x8
      mr        r31, r3
      stw       r8, 0x2C(r1)
      lfs       f1, 0x18C(r3)
      stfs      f1, 0x30(r1)
      lfs       f1, 0x190(r3)
      stfs      f1, 0x34(r1)
      lfs       f1, 0x194(r3)
      stfs      f1, 0x38(r1)
      lwz       r7, 0x18C(r3)
      lwz       r6, 0x190(r3)
      lwz       r5, 0x194(r3)
      stw       r7, 0x20(r1)
      stw       r6, 0x24(r1)
      lfs       f3, 0x20(r1)
      stw       r5, 0x28(r1)
      lfs       f2, 0x24(r1)
      stw       r8, 0x88(r1)
      lfs       f1, 0x28(r1)
      stfs      f3, 0x8C(r1)
      stfs      f2, 0x90(r1)
      stfs      f1, 0x94(r1)
      stw       r0, 0x88(r1)
      stfs      f0, 0x98(r1)
      bgt-      .loc_0x460
      lis       r3, 0x804E
      rlwinm    r0,r4,2,0,29
      addi      r3, r3, 0x1D34
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      lwz       r3, 0x340(r31)
      cmplwi    r3, 0
      beq-      .loc_0xC4
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x0(r3)
      stfs      f0, 0x98(r1)

    .loc_0xC4:
      lwz       r3, 0x350(r31)
      addi      r4, r1, 0x88
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x350(r31)
      lfs       f1, 0x1F8(r31)
      bl        0x8AB7C
      b         .loc_0x460
      lwz       r0, 0x280(r31)
      cmplwi    r0, 0
      beq-      .loc_0x120
      lwz       r3, 0x358(r31)
      addi      r4, r1, 0x2C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x358(r31)
      lfs       f1, 0x1F8(r31)
      bl        0x8A610
      b         .loc_0x460

    .loc_0x120:
      lwz       r3, 0x354(r31)
      addi      r4, r1, 0x2C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x354(r31)
      lfs       f1, 0x1F8(r31)
      bl        0x8A5A8
      b         .loc_0x460
      lwz       r3, 0x35C(r31)
      addi      r4, r1, 0x2C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x35C(r31)
      lfs       f1, 0x1F8(r31)
      bl        0x8A600
      b         .loc_0x460
      lwz       r3, 0x360(r31)
      addi      r4, r1, 0x2C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x360(r31)
      lfs       f1, 0x1F8(r31)
      bl        0x8A604
      b         .loc_0x460
      lfs       f3, 0x1F8(r31)
      lis       r3, 0x804B
      stw       r7, 0x14(r1)
      subi      r0, r3, 0x5D24
      stw       r6, 0x18(r1)
      lfs       f2, 0x14(r1)
      stw       r5, 0x1C(r1)
      lfs       f1, 0x18(r1)
      stw       r8, 0x74(r1)
      lfs       f0, 0x1C(r1)
      stfs      f2, 0x78(r1)
      stfs      f1, 0x7C(r1)
      stfs      f0, 0x80(r1)
      stw       r0, 0x74(r1)
      stfs      f3, 0x84(r1)
      lwz       r3, 0x2E0(r31)
      bl        0xC7F70
      lis       r4, 0x804B
      li        r6, 0
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x54(r1)
      addi      r0, r4, 0x6A3C
      lis       r5, 0x804E
      lis       r4, 0x804F
      stw       r0, 0x54(r1)
      addi      r0, r5, 0x69D8
      li        r9, 0x21A
      li        r8, 0x21B
      stw       r0, 0x54(r1)
      subi      r0, r4, 0x5F34
      li        r7, 0x21C
      li        r5, 0x21D
      stw       r3, 0x70(r1)
      addi      r3, r1, 0x54
      addi      r4, r1, 0x74
      sth       r9, 0x58(r1)
      sth       r8, 0x5A(r1)
      sth       r7, 0x5C(r1)
      sth       r5, 0x5E(r1)
      stw       r6, 0x60(r1)
      stw       r6, 0x64(r1)
      stw       r6, 0x68(r1)
      stw       r6, 0x6C(r1)
      stw       r0, 0x54(r1)
      bl        0x8A560
      lwz       r3, 0x2E0(r31)
      bl        0xC7EF4
      stw       r3, 0x70(r1)
      b         .loc_0x460
      lwz       r3, 0x364(r31)
      addi      r4, r1, 0x2C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x364(r31)
      lfs       f1, 0x1F8(r31)
      bl        0x8A644
      b         .loc_0x460
      lwz       r3, 0x340(r31)
      cmplwi    r3, 0
      beq-      .loc_0x2AC
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x0(r3)
      stfs      f0, 0x98(r1)

    .loc_0x2AC:
      lwz       r3, 0x368(r31)
      addi      r4, r1, 0x88
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x368(r31)
      lfs       f1, 0x1F8(r31)
      bl        0x8A994
      b         .loc_0x460
      lwz       r3, 0x340(r31)
      cmplwi    r3, 0
      beq-      .loc_0x2F8
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x0(r3)
      stfs      f0, 0x98(r1)

    .loc_0x2F8:
      lwz       r3, 0x36C(r31)
      addi      r4, r1, 0x88
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x36C(r31)
      lfs       f1, 0x1F8(r31)
      bl        0x8A948
      lwz       r3, 0x370(r31)
      addi      r4, r1, 0x2C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x370(r31)
      lfs       f1, 0x1F8(r31)
      bl        0x8A670
      b         .loc_0x460
      lwz       r0, 0x280(r31)
      cmplwi    r0, 0
      beq-      .loc_0x460
      lwz       r3, 0x174(r31)
      addi      r4, r2, 0x408
      bl        0xDD534
      bl        0xC7DEC
      lfs       f2, 0x2C(r3)
      lfs       f1, 0x1C(r3)
      lfs       f0, 0xC(r3)
      stfs      f0, 0x37C(r31)
      stfs      f1, 0x380(r31)
      stfs      f2, 0x384(r31)
      lwz       r3, 0x280(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x0(r3)
      lis       r4, 0x804B
      lis       r3, 0x804B
      lfs       f0, 0x358(r2)
      stfs      f1, 0x380(r31)
      subi      r5, r4, 0x5814
      subi      r3, r3, 0x5820
      li        r0, 0x1B
      lwz       r8, 0x37C(r31)
      addi      r4, r1, 0x3C
      lwz       r7, 0x380(r31)
      lwz       r6, 0x384(r31)
      stw       r8, 0x8(r1)
      stw       r7, 0xC(r1)
      lfs       f3, 0x8(r1)
      stw       r6, 0x10(r1)
      lfs       f2, 0xC(r1)
      stw       r5, 0x3C(r1)
      lfs       f1, 0x10(r1)
      stfs      f3, 0x40(r1)
      stfs      f2, 0x44(r1)
      stfs      f1, 0x48(r1)
      stw       r3, 0x3C(r1)
      stw       r0, 0x4C(r1)
      stfs      f0, 0x50(r1)
      lwz       r3, 0x374(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x174(r31)
      addi      r4, r2, 0x410
      bl        0xDD480
      bl        0xC7D38
      lfs       f2, 0x2C(r3)
      lfs       f1, 0x1C(r3)
      lfs       f0, 0xC(r3)
      stfs      f0, 0x388(r31)
      stfs      f1, 0x38C(r31)
      stfs      f2, 0x390(r31)
      lwz       r3, 0x280(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x0(r3)
      addi      r4, r1, 0x3C
      stfs      f0, 0x38C(r31)
      lwz       r3, 0x378(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x460:
      lwz       r0, 0xB4(r1)
      lwz       r31, 0xAC(r1)
      mtlr      r0
      addi      r1, r1, 0xB0
      blr
    */
}

/*
 * --INFO--
 * Address:	80361BCC
 * Size:	000140
 */
void Game::KingChappy::Obj::fadeEffect((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0x8
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bgt-      .loc_0x12C
      lis       r3, 0x804E
      rlwinm    r0,r4,2,0,29
      addi      r3, r3, 0x1D58
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      lwz       r3, 0x350(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      b         .loc_0x12C
      lwz       r3, 0x358(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x354(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      b         .loc_0x12C
      lwz       r3, 0x35C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      b         .loc_0x12C
      lwz       r3, 0x360(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      b         .loc_0x12C
      lwz       r3, 0x364(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      b         .loc_0x12C
      lwz       r3, 0x368(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      b         .loc_0x12C
      lwz       r3, 0x36C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x370(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      b         .loc_0x12C
      lwz       r3, 0x374(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x378(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl

    .loc_0x12C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80361D0C
 * Size:	0000C8
 */
void Game::KingChappy::Obj::createBounceEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      lwz       r0, 0x280(r3)
      cmplwi    r0, 0
      beq-      .loc_0x28
      lfs       f1, 0x418(r2)
      addi      r4, r3, 0x18C
      bl        -0x25E334
      b         .loc_0xB8

    .loc_0x28:
      lwz       r8, 0x18C(r3)
      lis       r4, 0x804B
      lwz       r6, 0x190(r3)
      subi      r0, r4, 0x5808
      lwz       r7, 0x194(r3)
      lis       r5, 0x804B
      lfs       f3, 0x1F8(r3)
      lis       r4, 0x804E
      stw       r8, 0x8(r1)
      subi      r9, r5, 0x5814
      lis       r8, 0x804B
      lis       r3, 0x804F
      stw       r6, 0xC(r1)
      li        r6, 0x227
      lfs       f2, 0x8(r1)
      li        r5, 0
      stw       r7, 0x10(r1)
      addi      r7, r4, 0x6A78
      lfs       f1, 0xC(r1)
      subi      r8, r8, 0x5D24
      stw       r0, 0x14(r1)
      subi      r0, r3, 0x5F48
      lfs       f0, 0x10(r1)
      addi      r3, r1, 0x14
      stw       r9, 0x20(r1)
      addi      r4, r1, 0x20
      stw       r7, 0x14(r1)
      stfs      f2, 0x24(r1)
      stfs      f1, 0x28(r1)
      stfs      f0, 0x2C(r1)
      stw       r8, 0x20(r1)
      stfs      f3, 0x30(r1)
      sth       r6, 0x18(r1)
      stw       r5, 0x1C(r1)
      stw       r0, 0x14(r1)
      bl        0x8A274

    .loc_0xB8:
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80361DD4
 * Size:	00000C
 */
void efx::ArgKchYodare::getName(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8049
      addi      r3, r3, 0x165C
      blr
    */
}

/*
 * --INFO--
 * Address:	80361DE0
 * Size:	000160
 */
void efx::TKchYodare::__dt(void)
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
      beq-      .loc_0x144
      lis       r3, 0x804E
      addi      r3, r3, 0x1D88
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x134
      lis       r3, 0x804F
      addic.    r0, r30, 0x14
      subi      r3, r3, 0x5FAC
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0xF4
      lis       r3, 0x804F
      addic.    r4, r30, 0x34
      subi      r0, r3, 0x5F60
      stw       r0, 0x14(r30)
      beq-      .loc_0xA4
      lis       r3, 0x804E
      cmplwi    r4, 0
      addi      r3, r3, 0x1E6C
      stw       r3, 0x34(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x38(r30)
      beq-      .loc_0xA4
      lis       r4, 0x804E
      addi      r3, r30, 0x38
      addi      r5, r4, 0x6A8C
      li        r4, 0
      stw       r5, 0x34(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x38(r30)
      bl        -0x2D21E4

    .loc_0xA4:
      addic.    r0, r30, 0x18
      beq-      .loc_0xE8
      lis       r3, 0x804E
      cmplwi    r0, 0
      addi      r3, r3, 0x1EAC
      stw       r3, 0x18(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x1C(r30)
      beq-      .loc_0xE8
      lis       r4, 0x804E
      addi      r3, r30, 0x1C
      addi      r5, r4, 0x6A8C
      li        r4, 0
      stw       r5, 0x18(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x1C(r30)
      bl        -0x2D2228

    .loc_0xE8:
      addi      r3, r30, 0x14
      li        r4, 0
      bl        -0x2CDEA8

    .loc_0xF4:
      cmplwi    r30, 0
      beq-      .loc_0x134
      lis       r3, 0x804E
      addi      r3, r3, 0x68A8
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x134
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x2D2274

    .loc_0x134:
      extsh.    r0, r31
      ble-      .loc_0x144
      mr        r3, r30
      bl        -0x33DE6C

    .loc_0x144:
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
 * Address:	80361F40
 * Size:	000054
 */
void efx::TKchYodareBaseChaseMtx::forceKill(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x4D970
      addi      r3, r31, 0x18
      lwz       r12, 0x18(r31)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x34
      lwz       r12, 0x34(r31)
      lwz       r12, 0xC(r12)
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
 * Address:	80361F94
 * Size:	000160
 */
void efx::TKchAttackYodare::__dt(void)
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
      beq-      .loc_0x144
      lis       r3, 0x804E
      addi      r3, r3, 0x1DD4
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x134
      lis       r3, 0x804F
      addic.    r0, r30, 0x14
      subi      r3, r3, 0x5FAC
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0xF4
      lis       r3, 0x804F
      addic.    r4, r30, 0x34
      subi      r0, r3, 0x5F60
      stw       r0, 0x14(r30)
      beq-      .loc_0xA4
      lis       r3, 0x804E
      cmplwi    r4, 0
      addi      r3, r3, 0x1E6C
      stw       r3, 0x34(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x38(r30)
      beq-      .loc_0xA4
      lis       r4, 0x804E
      addi      r3, r30, 0x38
      addi      r5, r4, 0x6A8C
      li        r4, 0
      stw       r5, 0x34(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x38(r30)
      bl        -0x2D2398

    .loc_0xA4:
      addic.    r0, r30, 0x18
      beq-      .loc_0xE8
      lis       r3, 0x804E
      cmplwi    r0, 0
      addi      r3, r3, 0x1EAC
      stw       r3, 0x18(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x1C(r30)
      beq-      .loc_0xE8
      lis       r4, 0x804E
      addi      r3, r30, 0x1C
      addi      r5, r4, 0x6A8C
      li        r4, 0
      stw       r5, 0x18(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x1C(r30)
      bl        -0x2D23DC

    .loc_0xE8:
      addi      r3, r30, 0x14
      li        r4, 0
      bl        -0x2CE05C

    .loc_0xF4:
      cmplwi    r30, 0
      beq-      .loc_0x134
      lis       r3, 0x804E
      addi      r3, r3, 0x68A8
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x134
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x2D2428

    .loc_0x134:
      extsh.    r0, r31
      ble-      .loc_0x144
      mr        r3, r30
      bl        -0x33E020

    .loc_0x144:
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
 * Address:	803620F4
 * Size:	000160
 */
void efx::TKchDeadYodare::__dt(void)
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
      beq-      .loc_0x144
      lis       r3, 0x804E
      addi      r3, r3, 0x1E20
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x134
      lis       r3, 0x804F
      addic.    r0, r30, 0x14
      subi      r3, r3, 0x5FAC
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0xF4
      lis       r3, 0x804F
      addic.    r4, r30, 0x34
      subi      r0, r3, 0x5F60
      stw       r0, 0x14(r30)
      beq-      .loc_0xA4
      lis       r3, 0x804E
      cmplwi    r4, 0
      addi      r3, r3, 0x1E6C
      stw       r3, 0x34(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x38(r30)
      beq-      .loc_0xA4
      lis       r4, 0x804E
      addi      r3, r30, 0x38
      addi      r5, r4, 0x6A8C
      li        r4, 0
      stw       r5, 0x34(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x38(r30)
      bl        -0x2D24F8

    .loc_0xA4:
      addic.    r0, r30, 0x18
      beq-      .loc_0xE8
      lis       r3, 0x804E
      cmplwi    r0, 0
      addi      r3, r3, 0x1EAC
      stw       r3, 0x18(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x1C(r30)
      beq-      .loc_0xE8
      lis       r4, 0x804E
      addi      r3, r30, 0x1C
      addi      r5, r4, 0x6A8C
      li        r4, 0
      stw       r5, 0x18(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x1C(r30)
      bl        -0x2D253C

    .loc_0xE8:
      addi      r3, r30, 0x14
      li        r4, 0
      bl        -0x2CE1BC

    .loc_0xF4:
      cmplwi    r30, 0
      beq-      .loc_0x134
      lis       r3, 0x804E
      addi      r3, r3, 0x68A8
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x134
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x2D2588

    .loc_0x134:
      extsh.    r0, r31
      ble-      .loc_0x144
      mr        r3, r30
      bl        -0x33E180

    .loc_0x144:
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
 * Address:	80362254
 * Size:	00009C
 */
void efx::TKchSmokeHana::__dt(void)
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
      addi      r3, r3, 0x1F08
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
      bl        -0x2D2624

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x33E21C

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
 * Address:	803622F0
 * Size:	00009C
 */
void efx::TKchCryInd::__dt(void)
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
      addi      r3, r3, 0x1F54
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x685C
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
      bl        -0x2D26C0

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x33E2B8

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
 * Address:	8036238C
 * Size:	00006C
 */
void Game::KingChappy::ProperAnimator::__dt(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x54
      lis       r3, 0x804E
      addi      r0, r3, 0x1FF4
      stw       r0, 0x0(r31)
      beq-      .loc_0x44
      lis       r3, 0x804B
      subi      r0, r3, 0x7DC
      stw       r0, 0x0(r31)
      beq-      .loc_0x44
      lis       r3, 0x804B
      subi      r0, r3, 0x23A8
      stw       r0, 0x0(r31)

    .loc_0x44:
      extsh.    r0, r4
      ble-      .loc_0x54
      mr        r3, r31
      bl        -0x33E328

    .loc_0x54:
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
 * Address:	803623F8
 * Size:	000004
 */
void Game::KingChappy::Obj::setInitialSetting((Game::EnemyInitialParamBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	803623FC
 * Size:	000004
 */
void applyImpulse__Q34Game10KingChappy3ObjFR10Vector3<float>
R10Vector3<float>(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80362400
 * Size:	00003C
 */
void Game::KingChappy::Obj::createEfxHamon(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x25B020
      cmpwi     r3, 0x9
      beq-      .loc_0x28
      mr        r3, r31
      bl        -0x260B20

    .loc_0x28:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036243C
 * Size:	000054
 */
void Game::KingChappy::Obj::updateEfxHamon(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x25B05C
      cmpwi     r3, 0x9
      bne-      .loc_0x38
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x254(r12)
      mtctr     r12
      bctrl
      b         .loc_0x40

    .loc_0x38:
      mr        r3, r31
      bl        -0x260BA4

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
 * Address:	80362490
 * Size:	000020
 */
void Game::KingChappy::Obj::isUnderground(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0x1E0(r3)
      li        r3, 0
      rlwinm.   r0,r4,0,21,21
      bne-      .loc_0x18
      rlwinm.   r0,r4,0,13,13
      beqlr-

    .loc_0x18:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	803624B0
 * Size:	000014
 */
void Game::KingChappy::Obj::getCellRadius(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0xC0(r3)
      lfs       f1, 0x1F8(r3)
      lfs       f0, 0x1CC(r4)
      fmuls     f1, f1, f0
      blr
    */
}

/*
 * --INFO--
 * Address:	803624C4
 * Size:	000014
 */
void Game::KingChappy::Obj::getBodyRadius(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0xC0(r3)
      lfs       f1, 0x1F8(r3)
      lfs       f0, 0x1F4(r4)
      fmuls     f1, f1, f0
      blr
    */
}

/*
 * --INFO--
 * Address:	803624D8
 * Size:	000030
 */
void Game::KingChappy::Obj::pressCallBack((Game::Creature*, float, CollPart*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x278(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      li        r3, 0
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80362508
 * Size:	000028
 */
void Game::KingChappy::Obj::eatWhitePikminCallBack((Game::Creature*, float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r5, 0xC0(r3)
      lfs       f1, 0xA24(r5)
      bl        -0x25B04C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80362530
 * Size:	000008
 */
void Game::KingChappy::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x35
      blr
    */
}

/*
 * --INFO--
 * Address:	80362538
 * Size:	000008
 */
void Game::KingChappy::Obj::getDownSmokeScale(void)
{
    /*
    .loc_0x0:
      lfs       f1, 0x41C(r2)
      blr
    */
}

/*
 * --INFO--
 * Address:	80362540
 * Size:	000028
 */
void __sinit_kingChappy_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804E
      stw       r0, -0x6738(r13)
      stfsu     f0, 0x1D28(r3)
      stfs      f0, -0x6734(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80362568
 * Size:	000014
 */
void @920 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x398
      b         -0x25BC5C
    */
}

/*
 * --INFO--
 * Address:	8036257C
 * Size:	000014
 */
void @920 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x398
      b         -0x25BEE4
    */
}

/*
 * --INFO--
 * Address:	80362590
 * Size:	000014
 */
void @920 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x398
      b         -0x25BED8
    */
}

/*
 * --INFO--
 * Address:	803625A4
 * Size:	000014
 */
void @920 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x398
      b         -0x25BB3C
    */
}

/*
 * --INFO--
 * Address:	803625B8
 * Size:	000014
 */
void @920 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x398
      b         -0x25BB7C
    */
}

/*
 * --INFO--
 * Address:	803625CC
 * Size:	000014
 */
void @920 @12 @Game::EnemyBase::viewGetShape(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x398
      b         -0x25BF3C
    */
}

/*
 * --INFO--
 * Address:	803625E0
 * Size:	000008
 */
void @4 @efx::TKchCryInd::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x2F4
    */
}

/*
 * --INFO--
 * Address:	803625E8
 * Size:	000008
 */
void @4 @efx::TKchSmokeHana::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x398
    */
}

/*
 * --INFO--
 * Address:	803625F0
 * Size:	000008
 */
void @4 @efx::TKchYodareHitGr::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x4954
    */
}

/*
 * --INFO--
 * Address:	803625F8
 * Size:	000008
 */
void @4 @efx::TKchYodareHitWat::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x49E0
    */
}

/*
 * --INFO--
 * Address:	80362600
 * Size:	000008
 */
void @4 @efx::TKchDeadYodare::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x510
    */
}

/*
 * --INFO--
 * Address:	80362608
 * Size:	000008
 */
void @4 @efx::TKchAttackYodare::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x678
    */
}

/*
 * --INFO--
 * Address:	80362610
 * Size:	000008
 */
void @4 @efx::TKchYodare::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x834
    */
}
