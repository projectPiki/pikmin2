

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
 * Address:	80368EA0
 * Size:	000038
 */
void Game::Jigumo::mouthScaleCallBack((J3DJoint*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0
      stw       r0, 0x14(r1)
      bne-      .loc_0x24
      lwz       r3, -0x6720(r13)
      cmplwi    r3, 0
      beq-      .loc_0x24
      bl        0x3034

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
 * Address:	80368ED8
 * Size:	00016C
 */
void Game::Jigumo::Obj::setParameters(void)
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
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      mr        r30, r3
      bl        -0x266328
      lwz       r3, 0xC0(r30)
      lfs       f31, 0x86C(r3)
      lfs       f30, 0x894(r3)
      fsubs     f30, f30, f31
      bl        -0x29F974
      lis       r0, 0x4330
      xoris     r3, r3, 0x8000
      stw       r3, 0xC(r1)
      lfs       f0, 0x604(r2)
      stw       r0, 0x8(r1)
      lfd       f3, 0x610(r2)
      fdivs     f30, f30, f0
      lfd       f2, 0x8(r1)
      lfs       f1, 0x600(r2)
      stw       r0, 0x18(r1)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      xoris     r0, r0, 0x8000
      stw       r0, 0x1C(r1)
      lfd       f0, 0x18(r1)
      fsubs     f0, f0, f3
      fmadds    f31, f30, f0, f31
      stfs      f31, 0x1F8(r30)
      stfs      f31, 0x168(r30)
      stfs      f31, 0x16C(r30)
      stfs      f31, 0x170(r30)
      lwz       r3, 0x2E4(r30)
      cmplwi    r3, 0
      beq-      .loc_0xD4
      stfs      f31, 0x1F8(r3)
      fmr       f1, f31
      stfs      f31, 0x168(r3)
      stfs      f31, 0x16C(r3)
      stfs      f31, 0x170(r3)
      lwz       r3, 0x2E4(r30)
      lwz       r3, 0x114(r3)
      lwz       r3, 0x0(r3)
      bl        -0x23119C

    .loc_0xD4:
      lfs       f31, 0x608(r2)
      li        r31, 0
      b         .loc_0x110

    .loc_0xE0:
      lwz       r3, 0xC0(r30)
      lfs       f0, 0x1F8(r30)
      lfs       f1, 0x928(r3)
      fmuls     f30, f1, f0
      fcmpo     cr0, f30, f31
      bge-      .loc_0xFC
      fmr       f30, f31

    .loc_0xFC:
      mr        r4, r31
      addi      r3, r30, 0x2D8
      bl        -0x230864
      stfs      f30, 0x1C(r3)
      addi      r31, r31, 0x1

    .loc_0x110:
      lwz       r0, 0x2D8(r30)
      cmpw      r31, r0
      blt+      .loc_0xE0
      lwz       r3, 0xC0(r30)
      lfs       f1, 0x1F8(r30)
      lfs       f0, 0x21C(r3)
      fmuls     f0, f1, f0
      stfs      f0, 0x27C(r30)
      lwz       r3, 0xC0(r30)
      lfs       f1, 0x1F8(r30)
      lfs       f0, 0x1F4(r3)
      fmuls     f0, f1, f0
      stfs      f0, 0x2F0(r30)
      psq_l     f31,0x48(r1),0,0
      lfd       f31, 0x40(r1)
      psq_l     f30,0x38(r1),0,0
      lfd       f30, 0x30(r1)
      lwz       r31, 0x2C(r1)
      lwz       r0, 0x54(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	80369044
 * Size:	00017C
 */
void birth__Q34Game6Jigumo3ObjFR10Vector3<float> f(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      stfd      f31, 0x60(r1)
      psq_st    f31,0x68(r1),0,0
      stfd      f30, 0x50(r1)
      psq_st    f30,0x58(r1),0,0
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      mr        r30, r3
      bl        -0x26666C
      lwz       r3, -0x6E20(r13)
      li        r4, 0x53
      bl        -0x25B3D4
      mr.       r31, r3
      beq-      .loc_0x10C
      addi      r3, r1, 0x8
      bl        -0x23A464
      lfs       f0, 0x18C(r30)
      mr        r3, r30
      stfs      f0, 0x8(r1)
      lfs       f0, 0x190(r30)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x194(r30)
      stfs      f0, 0x10(r1)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x14(r1)
      mr        r3, r31
      addi      r4, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x70(r12)
      mtctr     r12
      bctrl
      mr.       r31, r3
      bne-      .loc_0xB4
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x1D98
      li        r4, 0x56
      addi      r5, r5, 0x1DA4
      crclr     6, 0x6
      bl        -0x33EAB4

    .loc_0xB4:
      mr        r3, r31
      li        r4, 0
      bl        -0x22E138
      li        r0, 0
      mr        r3, r30
      stw       r0, 0x2E4(r30)
      stw       r31, 0x2E4(r30)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x258(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x2E4(r30)
      bl        0x3B50
      lfs       f1, 0x1F8(r30)
      stfs      f1, 0x1F8(r31)
      stfs      f1, 0x168(r31)
      stfs      f1, 0x16C(r31)
      stfs      f1, 0x170(r31)
      lwz       r3, 0x114(r31)
      lwz       r3, 0x0(r3)
      bl        -0x231340

    .loc_0x10C:
      lfs       f31, 0x608(r2)
      li        r31, 0
      b         .loc_0x148

    .loc_0x118:
      lwz       r3, 0xC0(r30)
      lfs       f0, 0x1F8(r30)
      lfs       f1, 0x928(r3)
      fmuls     f30, f1, f0
      fcmpo     cr0, f30, f31
      bge-      .loc_0x134
      fmr       f30, f31

    .loc_0x134:
      mr        r4, r31
      addi      r3, r30, 0x2D8
      bl        -0x230A08
      stfs      f30, 0x1C(r3)
      addi      r31, r31, 0x1

    .loc_0x148:
      lwz       r0, 0x2D8(r30)
      cmpw      r31, r0
      blt+      .loc_0x118
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      lwz       r31, 0x4C(r1)
      lwz       r0, 0x74(r1)
      lwz       r30, 0x48(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	803691C0
 * Size:	000008
 */
void Game::Jigumo::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x3F
      blr
    */
}

/*
 * --INFO--
 * Address:	803691C8
 * Size:	00023C
 */
void Game::Jigumo::Obj::onInit((Game::CreatureInitArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x8049
      li        r6, 0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      addi      r30, r5, 0x1D98
      li        r5, 0x1
      stw       r29, 0x14(r1)
      mr        r29, r4
      mr        r4, r31
      lwz       r3, 0x388(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      mr        r4, r29
      bl        -0x2677C0
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x254(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x1FC(r31)
      li        r4, 0
      lfs       f2, 0x618(r2)
      li        r0, 0x1
      stfs      f0, 0x2EC(r31)
      addi      r3, r31, 0x310
      lfs       f1, 0x61C(r2)
      fmr       f3, f2
      stw       r4, 0x334(r31)
      fmr       f4, f2
      stfs      f2, 0x2F8(r31)
      stfs      f1, 0x2FC(r31)
      stfs      f2, 0x300(r31)
      lfs       f0, 0x2F8(r31)
      stfs      f0, 0x304(r31)
      lfs       f0, 0x2FC(r31)
      stfs      f0, 0x308(r31)
      lfs       f0, 0x300(r31)
      stfs      f0, 0x30C(r31)
      stfs      f2, 0x33C(r31)
      stfs      f2, 0x338(r31)
      stb       r0, 0x340(r31)
      bl        0xA94FC
      lfs       f0, 0x310(r31)
      li        r0, 0
      lfs       f1, 0x618(r2)
      addi      r4, r30, 0x18
      stfs      f0, 0x320(r31)
      lfs       f0, 0x61C(r2)
      lfs       f2, 0x314(r31)
      stfs      f2, 0x324(r31)
      lfs       f2, 0x318(r31)
      stfs      f2, 0x328(r31)
      lfs       f2, 0x31C(r31)
      stfs      f2, 0x32C(r31)
      stfs      f1, 0x330(r31)
      stfs      f1, 0x2BC(r31)
      stfs      f1, 0x2C0(r31)
      stfs      f1, 0x2C4(r31)
      stfs      f1, 0x344(r31)
      stb       r0, 0x2E9(r31)
      stb       r0, 0x384(r31)
      lfs       f1, 0x198(r31)
      stfs      f1, 0x350(r31)
      lfs       f1, 0x19C(r31)
      stfs      f1, 0x354(r31)
      lfs       f1, 0x1A0(r31)
      stfs      f1, 0x358(r31)
      stw       r0, 0x35C(r31)
      lfs       f1, 0x18C(r31)
      stfs      f1, 0x364(r31)
      lfs       f1, 0x190(r31)
      stfs      f1, 0x368(r31)
      lfs       f1, 0x194(r31)
      stfs      f1, 0x36C(r31)
      stfs      f0, 0x2F4(r31)
      stw       r0, 0x34C(r31)
      lwz       r3, 0x174(r31)
      bl        0xD5CCC
      stw       r3, 0x2E0(r31)
      lwz       r0, 0x2E0(r31)
      cmplwi    r0, 0
      bne-      .loc_0x178
      addi      r3, r30, 0
      addi      r5, r30, 0xC
      li        r4, 0x97
      crclr     6, 0x6
      bl        -0x33ECFC

    .loc_0x178:
      lwz       r3, 0x388(r31)
      mr        r4, r31
      li        r5, 0x1
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x174(r31)
      cmplwi    r0, 0
      bne-      .loc_0x1B8
      addi      r3, r30, 0
      addi      r5, r30, 0xC
      li        r4, 0x9E
      crclr     6, 0x6
      bl        -0x33ED3C

    .loc_0x1B8:
      lwz       r3, 0x174(r31)
      addi      r4, r30, 0x24
      lwz       r5, 0x8(r3)
      lwz       r29, 0x4(r5)
      bl        0xD5C24
      sth       r3, 0x360(r31)
      lhz       r0, 0x360(r31)
      cmplwi    r0, 0
      bne-      .loc_0x1F0
      addi      r3, r30, 0
      addi      r5, r30, 0xC
      li        r4, 0xA3
      crclr     6, 0x6
      bl        -0x33ED74

    .loc_0x1F0:
      lhz       r0, 0x360(r31)
      lis       r4, 0x8037
      lwz       r3, 0x28(r29)
      subi      r4, r4, 0x7160
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      stw       r4, 0x4(r3)
      lwz       r3, 0xC0(r31)
      lfs       f1, 0x1F8(r31)
      lfs       f0, 0x1F4(r3)
      fmuls     f0, f1, f0
      stfs      f0, 0x2F0(r31)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80369404
 * Size:	0003E4
 */
void Game::Jigumo::Obj::__ct(void)
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
      addi      r0, r31, 0x38C
      lis       r3, 0x804B
      stw       r0, 0x17C(r31)
      subi      r3, r3, 0x5988
      li        r0, 0
      stw       r3, 0x38C(r31)
      stw       r0, 0x390(r31)
      stw       r0, 0x394(r31)

    .loc_0x40:
      mr        r3, r31
      li        r4, 0
      bl        -0x2680AC
      lis       r3, 0x804E
      addi      r0, r31, 0x38C
      addi      r5, r3, 0x2C58
      addi      r3, r31, 0x2D8
      stw       r5, 0x0(r31)
      addi      r4, r5, 0x1B0
      addi      r5, r5, 0x2FC
      stw       r4, 0x178(r31)
      lwz       r4, 0x17C(r31)
      stw       r5, 0x0(r4)
      lwz       r4, 0x17C(r31)
      sub       r0, r0, r4
      stw       r0, 0xC(r4)
      bl        -0x230F3C
      li        r0, 0
      addi      r3, r31, 0x310
      stw       r0, 0x2E4(r31)
      bl        0xA8F34
      addi      r3, r31, 0x320
      bl        0xA8F2C
      li        r3, 0x1
      li        r0, 0
      stb       r3, 0x385(r31)
      li        r3, 0x2C
      stw       r0, 0x388(r31)
      bl        -0x345610
      mr.       r30, r3
      beq-      .loc_0xFC
      bl        -0x241B4C
      lis       r3, 0x804E
      lis       r4, 0x804B
      addi      r0, r3, 0x2B40
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

    .loc_0xFC:
      stw       r30, 0x184(r31)
      li        r3, 0x1C
      bl        -0x345664
      mr.       r4, r3
      beq-      .loc_0x130
      lis       r5, 0x804B
      lis       r3, 0x804E
      subi      r0, r5, 0x680
      li        r5, -0x1
      stw       r0, 0x0(r4)
      addi      r0, r3, 0x2B18
      stw       r5, 0x18(r4)
      stw       r0, 0x0(r4)

    .loc_0x130:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      lwz       r12, 0x2F8(r12)
      mtctr     r12
      bctrl
      li        r3, 0x2C
      bl        -0x3456A8
      mr.       r30, r3
      beq-      .loc_0x170
      addi      r4, r31, 0x18C
      li        r5, 0xB9
      li        r6, 0xBA
      bl        0x46CDC
      lis       r3, 0x804E
      addi      r0, r3, 0x6F9C
      stw       r0, 0x0(r30)

    .loc_0x170:
      stw       r30, 0x370(r31)
      lwz       r0, 0x370(r31)
      cmplwi    r0, 0
      bne-      .loc_0x19C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x1D98
      li        r4, 0xBC
      addi      r5, r5, 0x1DA4
      crclr     6, 0x6
      bl        -0x33EF5C

    .loc_0x19C:
      li        r3, 0x4C
      bl        -0x345700
      mr.       r30, r3
      beq-      .loc_0x1D0
      addi      r4, r31, 0x364
      addi      r5, r31, 0x1FC
      li        r6, 0xBB
      li        r7, 0xBC
      li        r8, 0xBD
      bl        0x47500
      lis       r3, 0x804E
      addi      r0, r3, 0x6F80
      stw       r0, 0x0(r30)

    .loc_0x1D0:
      stw       r30, 0x374(r31)
      lwz       r0, 0x374(r31)
      cmplwi    r0, 0
      bne-      .loc_0x1FC
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x1D98
      li        r4, 0xBF
      addi      r5, r5, 0x1DA4
      crclr     6, 0x6
      bl        -0x33EFBC

    .loc_0x1FC:
      li        r3, 0x14
      bl        -0x345760
      cmplwi    r3, 0
      beq-      .loc_0x284
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
      addi      r4, r4, 0x6F34
      li        r10, 0
      li        r9, 0x2B2
      stw       r0, 0x4(r3)
      addi      r7, r8, 0x14
      addi      r6, r31, 0x18C
      li        r5, 0xBE
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

    .loc_0x284:
      stw       r3, 0x378(r31)
      lwz       r0, 0x378(r31)
      cmplwi    r0, 0
      bne-      .loc_0x2B0
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x1D98
      li        r4, 0xC2
      addi      r5, r5, 0x1DA4
      crclr     6, 0x6
      bl        -0x33F070

    .loc_0x2B0:
      li        r3, 0x34
      bl        -0x345814
      mr.       r30, r3
      beq-      .loc_0x2E0
      addi      r4, r31, 0x364
      addi      r5, r31, 0x1FC
      li        r6, 0xBF
      li        r7, 0xC0
      bl        0x472F8
      lis       r3, 0x804E
      addi      r0, r3, 0x6F18
      stw       r0, 0x0(r30)

    .loc_0x2E0:
      stw       r30, 0x37C(r31)
      lwz       r0, 0x37C(r31)
      cmplwi    r0, 0
      bne-      .loc_0x30C
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x1D98
      li        r4, 0xC5
      addi      r5, r5, 0x1DA4
      crclr     6, 0x6
      bl        -0x33F0CC

    .loc_0x30C:
      li        r3, 0x14
      bl        -0x345870
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
      addi      r8, r4, 0x6940
      lis       r4, 0x804E
      addi      r0, r5, 0x14
      stw       r5, 0x0(r3)
      addi      r4, r4, 0x6E58
      li        r10, 0
      li        r9, 0x2B2
      stw       r0, 0x4(r3)
      addi      r7, r8, 0x14
      addi      r6, r31, 0x364
      li        r5, 0xB8
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

    .loc_0x394:
      stw       r3, 0x380(r31)
      lwz       r0, 0x378(r31)
      cmplwi    r0, 0
      bne-      .loc_0x3C0
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x1D98
      li        r4, 0xC8
      addi      r5, r5, 0x1DA4
      crclr     6, 0x6
      bl        -0x33F180

    .loc_0x3C0:
      li        r0, 0
      mr        r3, r31
      stw       r0, -0x6720(r13)
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
 * Address:	803697E8
 * Size:	00004C
 */
void Game::Jigumo::Obj::setFSM((Game::Jigumo::FSM*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r4, 0x388(r3)
      mr        r4, r31
      lwz       r3, 0x388(r3)
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
 * Address:	80369834
 * Size:	000040
 */
void Game::Jigumo::Obj::doUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x14(r1)
      lwz       r0, 0x1E0(r3)
      rlwinm.   r0,r0,0,22,22
      bne-      .loc_0x30
      lwz       r3, 0x388(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl

    .loc_0x30:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80369874
 * Size:	000004
 */
void Game::Jigumo::Obj::doDirectDraw((Graphics&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80369878
 * Size:	000020
 */
void Game::Jigumo::Obj::doDebugDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x263A18
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80369898
 * Size:	00014C
 */
void Game::Jigumo::Obj::doAnimationCullingOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      addi      r3, r31, 0x2D8
      bl        -0x23113C
      lwz       r0, 0x64(r3)
      cmplwi    r0, 0
      beq-      .loc_0x30
      stw       r31, -0x6720(r13)

    .loc_0x30:
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
      beq-      .loc_0xC8
      addi      r4, r31, 0x138
      bl        -0x203B5C
      lwz       r4, 0x174(r31)
      addi      r3, r31, 0x138
      lwz       r4, 0x8(r4)
      addi      r4, r4, 0x24
      bl        -0x27F644
      lfs       f0, 0x144(r31)
      mr        r3, r31
      addi      r4, r1, 0x18
      stfs      f0, 0x18(r1)
      lfs       f0, 0x154(r31)
      stfs      f0, 0x1C(r1)
      lfs       f0, 0x164(r31)
      stfs      f0, 0x20(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x70(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      addi      r4, r1, 0x18
      lwz       r12, 0x0(r31)
      lwz       r12, 0x74(r12)
      mtctr     r12
      bctrl
      b         .loc_0xD0

    .loc_0xC8:
      mr        r3, r31
      bl        0x17C4

    .loc_0xD0:
      lwz       r3, 0x174(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x114(r31)
      addi      r4, r1, 0x8
      lwz       r3, 0x0(r3)
      bl        -0x231790
      lfs       f2, 0x14(r1)
      lfs       f1, 0x1F8(r31)
      lfs       f0, 0x8(r1)
      fmuls     f1, f2, f1
      stfs      f1, 0x14(r1)
      stfs      f0, 0x220(r31)
      lfs       f0, 0xC(r1)
      stfs      f0, 0x224(r31)
      lfs       f0, 0x10(r1)
      stfs      f0, 0x228(r31)
      lfs       f0, 0x14(r1)
      stfs      f0, 0x22C(r31)
      lwz       r3, 0x114(r31)
      bl        -0x233F28
      li        r0, 0
      stw       r0, -0x6720(r13)
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803699E4
 * Size:	000028
 */
void Game::Jigumo::Obj::startCarcassMotion(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0xE
      li        r5, 0
      stw       r0, 0x14(r1)
      bl        -0x2649F4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80369A0C
 * Size:	0000BC
 */
void Game::Jigumo::Obj::initMouthSlots(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stfd      f31, 0x20(r1)
      psq_st    f31,0x28(r1),0,0
      stfd      f30, 0x10(r1)
      psq_st    f30,0x18(r1),0,0
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      li        r4, 0x1
      addi      r3, r30, 0x2D8
      bl        -0x2314E4
      lis       r3, 0x8049
      lwz       r5, 0x174(r30)
      addi      r6, r3, 0x1DBC
      li        r4, 0
      addi      r3, r30, 0x2D8
      bl        -0x2313C4
      lfs       f31, 0x608(r2)
      li        r31, 0
      b         .loc_0x88

    .loc_0x58:
      lwz       r3, 0xC0(r30)
      lfs       f0, 0x1F8(r30)
      lfs       f1, 0x928(r3)
      fmuls     f30, f1, f0
      fcmpo     cr0, f30, f31
      bge-      .loc_0x74
      fmr       f30, f31

    .loc_0x74:
      mr        r4, r31
      addi      r3, r30, 0x2D8
      bl        -0x231310
      stfs      f30, 0x1C(r3)
      addi      r31, r31, 0x1

    .loc_0x88:
      lwz       r0, 0x2D8(r30)
      cmpw      r31, r0
      blt+      .loc_0x58
      psq_l     f31,0x28(r1),0,0
      lfd       f31, 0x20(r1)
      psq_l     f30,0x18(r1),0,0
      lfd       f30, 0x10(r1)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x34(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80369AC8
 * Size:	00009C
 */
void Game::Jigumo::Obj::doGetLifeGaugeParam((Game::LifeGaugeParam&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      stw       r30, 0x8(r1)
      mr        r30, r4
      lwz       r5, 0xC0(r3)
      lfs       f1, 0x190(r3)
      lfs       f0, 0x12C(r5)
      lfs       f3, 0x930(r5)
      fadds     f0, f1, f0
      lfs       f2, 0x1F8(r3)
      lfs       f4, 0x194(r3)
      lfs       f1, 0x18C(r3)
      fmadds    f2, f3, f2, f0
      lfs       f0, 0x620(r2)
      stfs      f1, 0x0(r4)
      stfs      f2, 0x4(r4)
      stfs      f4, 0x8(r4)
      lfs       f2, 0x200(r3)
      lfs       f1, 0x204(r3)
      fdivs     f1, f2, f1
      stfs      f1, 0xC(r4)
      stfs      f0, 0x10(r4)
      lwz       r0, 0x1E0(r3)
      rlwinm.   r0,r0,0,20,20
      beq-      .loc_0x80
      bl        -0x266490
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x80
      li        r31, 0x1

    .loc_0x80:
      stb       r31, 0x14(r30)
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
 * Address:	80369B64
 * Size:	000108
 */
void Game::Jigumo::Obj::pressCallBack((Game::Creature*, float, CollPart*))
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
      lwz       r0, 0x1E0(r3)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0x44
      lwz       r12, 0x0(r3)
      lwz       r12, 0x278(r12)
      mtctr     r12
      bctrl
      b         .loc_0xEC

    .loc_0x44:
      bl        -0x2627B4
      cmpwi     r3, 0x7
      beq-      .loc_0x68
      mr        r3, r29
      bl        -0x2627C4
      cmpwi     r3, 0x6
      beq-      .loc_0x68
      li        r3, 0
      b         .loc_0xEC

    .loc_0x68:
      lwz       r3, 0xC0(r29)
      lbz       r0, 0x8FE(r3)
      cmplwi    r0, 0
      beq-      .loc_0xE8
      cmplwi    r31, 0
      beq-      .loc_0xE8
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xE8
      mr        r3, r29
      bl        -0x262810
      cmpwi     r3, 0x3
      beq-      .loc_0xE8
      lwz       r0, 0x1E0(r29)
      mr        r4, r29
      lfs       f0, 0x618(r2)
      li        r5, 0x3
      ori       r0, r0, 0x800
      li        r6, 0
      stw       r0, 0x1E0(r29)
      stfs      f0, 0x200(r29)
      lwz       r3, 0x388(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      li        r3, 0x1
      b         .loc_0xEC

    .loc_0xE8:
      li        r3, 0

    .loc_0xEC:
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
 * Address:	80369C6C
 * Size:	0001B4
 */
void Game::Jigumo::Obj::damageCallBack((Game::Creature*, float, CollPart*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xB0(r1)
      mflr      r0
      stw       r0, 0xB4(r1)
      stfd      f31, 0xA0(r1)
      psq_st    f31,0xA8(r1),0,0
      stfd      f30, 0x90(r1)
      psq_st    f30,0x98(r1),0,0
      stfd      f29, 0x80(r1)
      psq_st    f29,0x88(r1),0,0
      stfd      f28, 0x70(r1)
      psq_st    f28,0x78(r1),0,0
      stfd      f27, 0x60(r1)
      psq_st    f27,0x68(r1),0,0
      stfd      f26, 0x50(r1)
      psq_st    f26,0x58(r1),0,0
      stfd      f25, 0x40(r1)
      psq_st    f25,0x48(r1),0,0
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      stw       r29, 0x34(r1)
      lwz       r0, 0x1E0(r3)
      fmr       f31, f1
      mr        r29, r3
      mr        r30, r4
      rlwinm.   r0,r0,0,22,22
      mr        r31, r5
      beq-      .loc_0x78
      bl        -0x263C6C
      li        r3, 0x1
      b         .loc_0x160

    .loc_0x78:
      bl        -0x2628F0
      cmpwi     r3, 0x7
      beq-      .loc_0x94
      mr        r3, r29
      bl        -0x262900
      cmpwi     r3, 0x6
      bne-      .loc_0x15C

    .loc_0x94:
      lis       r4, 0x6865
      lwz       r3, 0x114(r29)
      addi      r4, r4, 0x6164
      bl        -0x233EC8
      addi      r4, r1, 0x14
      bl        -0x231B18
      lis       r3, 0x626F
      lfs       f30, 0x14(r1)
      lfs       f29, 0x18(r1)
      addi      r4, r3, 0x6479
      lfs       f28, 0x1C(r1)
      lwz       r3, 0x114(r29)
      bl        -0x233EEC
      addi      r4, r1, 0x14
      bl        -0x231B3C
      mr        r4, r30
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r30)
      lfs       f27, 0x14(r1)
      lwz       r12, 0x8(r12)
      lfs       f26, 0x18(r1)
      lfs       f25, 0x1C(r1)
      mtctr     r12
      bctrl
      lfs       f1, 0xC(r1)
      lfs       f3, 0x8(r1)
      fsubs     f0, f26, f1
      lfs       f5, 0x10(r1)
      fsubs     f1, f29, f1
      fsubs     f2, f27, f3
      fmuls     f0, f0, f0
      fsubs     f3, f30, f3
      fmuls     f1, f1, f1
      fsubs     f4, f25, f5
      fmadds    f0, f2, f2, f0
      fsubs     f2, f28, f5
      fmadds    f1, f3, f3, f1
      fmadds    f0, f4, f4, f0
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x140
      li        r3, 0
      b         .loc_0x160

    .loc_0x140:
      fmr       f1, f31
      mr        r3, r29
      mr        r4, r30
      mr        r5, r31
      bl        -0x263D50
      li        r3, 0x1
      b         .loc_0x160

    .loc_0x15C:
      li        r3, 0

    .loc_0x160:
      psq_l     f31,0xA8(r1),0,0
      lfd       f31, 0xA0(r1)
      psq_l     f30,0x98(r1),0,0
      lfd       f30, 0x90(r1)
      psq_l     f29,0x88(r1),0,0
      lfd       f29, 0x80(r1)
      psq_l     f28,0x78(r1),0,0
      lfd       f28, 0x70(r1)
      psq_l     f27,0x68(r1),0,0
      lfd       f27, 0x60(r1)
      psq_l     f26,0x58(r1),0,0
      lfd       f26, 0x50(r1)
      psq_l     f25,0x48(r1),0,0
      lfd       f25, 0x40(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r0, 0xB4(r1)
      lwz       r29, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0xB0
      blr
    */
}

/*
 * --INFO--
 * Address:	80369E20
 * Size:	0000D0
 */
void Game::Jigumo::Obj::collisionCallback((Game::CollEvent&))
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
      lwz       r3, 0x0(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x64
      lwz       r3, 0x0(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x258(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x53
      bne-      .loc_0x64
      lfs       f0, 0x618(r2)
      stfs      f0, 0x11C(r30)
      stfs      f0, 0x120(r30)
      stfs      f0, 0x124(r30)

    .loc_0x64:
      mr        r3, r30
      mr        r4, r31
      bl        -0x26387C
      lwz       r0, 0x1E0(r30)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0xB8
      lwz       r3, 0x0(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB8
      mr        r3, r30
      lwz       r4, 0x0(r31)
      lwz       r12, 0x0(r30)
      li        r5, 0
      lfs       f1, 0x61C(r2)
      lwz       r12, 0x278(r12)
      mtctr     r12
      bctrl

    .loc_0xB8:
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
 * Address:	80369EF0
 * Size:	000120
 */
void Game::Jigumo::Obj::outWaterCallback(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      bl        -0x2661D8
      lwz       r7, 0x18C(r31)
      lis       r4, 0x804B
      lwz       r6, 0x190(r31)
      lis       r3, 0x804B
      lwz       r5, 0x194(r31)
      subi      r4, r4, 0x5814
      lfs       f3, 0x1F8(r31)
      subi      r0, r3, 0x5D24
      stw       r7, 0x8(r1)
      mr        r3, r31
      stw       r6, 0xC(r1)
      lfs       f2, 0x8(r1)
      stw       r5, 0x10(r1)
      lfs       f1, 0xC(r1)
      stw       r4, 0x14(r1)
      lfs       f0, 0x10(r1)
      stfs      f2, 0x18(r1)
      stfs      f1, 0x1C(r1)
      stfs      f0, 0x20(r1)
      stw       r0, 0x14(r1)
      stfs      f3, 0x24(r1)
      bl        -0x262B68
      cmpwi     r3, 0x6
      beq-      .loc_0xF4
      bge-      .loc_0x88
      cmpwi     r3, 0x4
      beq-      .loc_0x94
      b         .loc_0x10C

    .loc_0x88:
      cmpwi     r3, 0x8
      bge-      .loc_0x10C
      b         .loc_0xC4

    .loc_0x94:
      lwz       r3, 0x370(r31)
      addi      r4, r1, 0x14
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x374(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      b         .loc_0x10C

    .loc_0xC4:
      lwz       r3, 0x378(r31)
      addi      r4, r1, 0x14
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x37C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      b         .loc_0x10C

    .loc_0xF4:
      lwz       r3, 0x380(r31)
      addi      r4, r1, 0x14
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x10C:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8036A010
 * Size:	000150
 */
void Game::Jigumo::Obj::inWaterCallback((Game::WaterBox*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      bl        -0x266190
      lwz       r7, 0x18C(r31)
      lis       r4, 0x804B
      lwz       r6, 0x190(r31)
      lis       r3, 0x804B
      lwz       r5, 0x194(r31)
      subi      r4, r4, 0x5814
      lfs       f3, 0x1F8(r31)
      subi      r0, r3, 0x5D24
      stw       r7, 0x8(r1)
      mr        r3, r31
      stw       r6, 0xC(r1)
      lfs       f2, 0x8(r1)
      stw       r5, 0x10(r1)
      lfs       f1, 0xC(r1)
      stw       r4, 0x14(r1)
      lfs       f0, 0x10(r1)
      stfs      f2, 0x18(r1)
      stfs      f1, 0x1C(r1)
      stfs      f0, 0x20(r1)
      stw       r0, 0x14(r1)
      stfs      f3, 0x24(r1)
      bl        -0x262C88
      cmpwi     r3, 0x6
      beq-      .loc_0x128
      bge-      .loc_0x88
      cmpwi     r3, 0x4
      beq-      .loc_0x94
      b         .loc_0x13C

    .loc_0x88:
      cmpwi     r3, 0x8
      bge-      .loc_0x13C
      b         .loc_0xF8

    .loc_0x94:
      lfs       f0, 0x18C(r31)
      stfs      f0, 0x364(r31)
      lfs       f0, 0x190(r31)
      stfs      f0, 0x368(r31)
      lfs       f0, 0x194(r31)
      stfs      f0, 0x36C(r31)
      lwz       r3, 0x280(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x0(r3)
      addi      r4, r1, 0x14
      stfs      f0, 0x368(r31)
      lwz       r3, 0x374(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x370(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      b         .loc_0x13C

    .loc_0xF8:
      lwz       r3, 0x37C(r31)
      addi      r4, r1, 0x14
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x378(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      b         .loc_0x13C

    .loc_0x128:
      lwz       r3, 0x380(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl

    .loc_0x13C:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8036A160
 * Size:	00007C
 */
void Game::Jigumo::Obj::earthquakeCallBack((Game::Creature*, float))
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
      lbz       r0, 0x385(r3)
      cmplwi    r0, 0
      beq-      .loc_0x5C
      bl        -0x262D9C
      cmpwi     r3, 0x8
      beq-      .loc_0x5C
      lwz       r0, 0x334(r30)
      cmpwi     r0, 0
      bne-      .loc_0x5C
      fmr       f1, f31
      mr        r3, r30
      mr        r4, r31
      bl        -0x263DF0
      b         .loc_0x60

    .loc_0x5C:
      li        r3, 0

    .loc_0x60:
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
 * Address:	8036A1DC
 * Size:	00009C
 */
void Game::Jigumo::Obj::getShadowParam((Game::ShadowParam&))
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
      lwz       r3, 0x2E0(r3)
      bl        0xBF6A4
      lfs       f0, 0xC(r3)
      lfs       f3, 0x624(r2)
      stfs      f0, 0x0(r31)
      lfs       f0, 0x628(r2)
      lfs       f2, 0x1C(r3)
      lfs       f1, 0x62C(r2)
      stfs      f2, 0x4(r31)
      lfs       f2, 0x2C(r3)
      stfs      f2, 0x8(r31)
      lfs       f2, 0x190(r30)
      fadds     f2, f3, f2
      stfs      f2, 0x4(r31)
      lwz       r3, 0x174(r30)
      lwz       r3, 0x8(r3)
      lfs       f2, 0x28(r3)
      stfs      f2, 0xC(r31)
      lfs       f2, 0x38(r3)
      stfs      f2, 0x10(r31)
      lfs       f2, 0x48(r3)
      stfs      f2, 0x14(r31)
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
 * Address:	8036A278
 * Size:	00007C
 */
void Game::Jigumo::Obj::needShadow(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x262E7C
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x28
      li        r3, 0
      b         .loc_0x68

    .loc_0x28:
      lwz       r4, 0x1E0(r31)
      li        r3, 0
      rlwinm.   r0,r4,0,21,21
      bne-      .loc_0x40
      rlwinm.   r0,r4,0,13,13
      beq-      .loc_0x44

    .loc_0x40:
      li        r3, 0x1

    .loc_0x44:
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x64
      mr        r3, r31
      bl        -0x262ED4
      subfic    r0, r3, 0x2
      cntlzw    r0, r0
      rlwinm    r3,r0,27,24,31
      b         .loc_0x68

    .loc_0x64:
      li        r3, 0x1

    .loc_0x68:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036A2F4
 * Size:	000174
 */
void Game::Jigumo::Obj::doSimulationGround((float))
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
      fmr       f30, f1
      lwz       r0, 0x334(r3)
      cmpwi     r0, 0
      ble-      .loc_0x64
      lwz       r4, 0x1E4(r31)
      rlwinm.   r0,r4,0,30,30
      bne-      .loc_0x64
      rlwinm.   r0,r4,0,31,31
      bne-      .loc_0x64
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1F8(r12)
      mtctr     r12
      bctrl
      b         .loc_0x148

    .loc_0x64:
      lwz       r4, 0xC0(r31)
      mr        r3, r31
      lfs       f5, 0x1CC(r31)
      lfs       f0, 0x9C(r4)
      lfs       f1, 0x1D4(r31)
      fsubs     f3, f5, f5
      fdivs     f4, f30, f0
      lfs       f7, 0x1C8(r31)
      lfs       f0, 0x1DC(r31)
      lfs       f6, 0x1D0(r31)
      lfs       f31, 0x61C(r2)
      fsubs     f2, f1, f7
      fsubs     f0, f0, f6
      fmuls     f1, f3, f4
      fmuls     f2, f2, f4
      fmuls     f0, f0, f4
      fadds     f1, f5, f1
      fadds     f2, f7, f2
      fadds     f0, f6, f0
      stfs      f2, 0x1C8(r31)
      stfs      f1, 0x1CC(r31)
      stfs      f0, 0x1D0(r31)
      lwz       r4, 0xC0(r31)
      lfs       f29, 0x90C(r4)
      bl        -0x262FC4
      cmpwi     r3, 0x4
      bne-      .loc_0xD8
      lfs       f29, 0x618(r2)
      lfs       f31, 0x630(r2)

    .loc_0xD8:
      lfs       f1, 0x61C(r2)
      lfs       f0, 0x2FC(r31)
      fcmpu     cr0, f1, f0
      beq-      .loc_0x108
      lfs       f1, 0x2F8(r31)
      lfs       f0, 0x1C8(r31)
      fnmsubs   f0, f1, f29, f0
      stfs      f0, 0x1C8(r31)
      lfs       f1, 0x300(r31)
      lfs       f0, 0x1D0(r31)
      fnmsubs   f0, f1, f29, f0
      stfs      f0, 0x1D0(r31)

    .loc_0x108:
      lwz       r4, 0x1E4(r31)
      li        r3, 0
      rlwinm.   r0,r4,0,31,31
      bne-      .loc_0x120
      rlwinm.   r0,r4,0,27,27
      beq-      .loc_0x124

    .loc_0x120:
      li        r3, 0x1

    .loc_0x124:
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x130
      lfs       f31, 0x634(r2)

    .loc_0x130:
      lwz       r3, -0x6C10(r13)
      lfs       f0, 0x1CC(r31)
      lfs       f1, 0x28(r3)
      fmuls     f1, f30, f1
      fnmsubs   f0, f31, f1, f0
      stfs      f0, 0x1CC(r31)

    .loc_0x148:
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
 * Address:	8036A468
 * Size:	000034
 */
void Game::Jigumo::Obj::onKill((Game::CreatureKillArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x268594
      mr        r3, r31
      bl        0x1A50
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036A49C
 * Size:	000008
 */
void Game::Jigumo::Obj::isLivingThing(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	8036A4A4
 * Size:	00008C
 */
void Game::Jigumo::Obj::doStartMovie(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x370(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x374(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x378(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x37C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x380(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
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
 * Address:	8036A530
 * Size:	00008C
 */
void Game::Jigumo::Obj::doEndMovie(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x370(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x374(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x378(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x37C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x380(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
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
 * Address:	8036A5BC
 * Size:	0000D8
 */
void Game::Jigumo::Obj::doStartStoneState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x2676DC
      lis       r4, 0x626F
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x6479
      bl        -0x23479C
      lis       r4, 0x7374
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0xA8E14
      lis       r4, 0x6865
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x6164
      bl        -0x2347BC
      lis       r4, 0x5F74
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0xA8DF4
      mr        r3, r31
      bl        0x16E4
      lwz       r0, 0x1E0(r31)
      mr        r3, r31
      li        r4, 0x1
      ori       r0, r0, 0x800
      stw       r0, 0x1E0(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      li        r4, 0x1
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        -0x263268
      cmplwi    r3, 0x2
      ble-      .loc_0xB4
      cmpwi     r3, 0xA
      bne-      .loc_0xC4

    .loc_0xB4:
      lfs       f1, 0x638(r2)
      lfs       f0, 0x1F8(r31)
      fmuls     f0, f1, f0
      stfs      f0, 0x2F0(r31)

    .loc_0xC4:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036A694
 * Size:	0000E8
 */
void Game::Jigumo::Obj::doFinishStoneState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x2677A0
      lbz       r0, 0x384(r31)
      cmplwi    r0, 0
      bne-      .loc_0x64
      lis       r4, 0x626F
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x6479
      bl        -0x234880
      lis       r4, 0x5F5F
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0xA8D30
      lis       r4, 0x6865
      lwz       r3, 0x114(r31)
      addi      r4, r4, 0x6164
      bl        -0x2348A0
      lis       r4, 0x5F5F
      addi      r3, r3, 0x3C
      addi      r4, r4, 0x5F5F
      bl        0xA8D10

    .loc_0x64:
      mr        r3, r31
      bl        -0x263308
      cmplwi    r3, 0x2
      ble-      .loc_0x7C
      cmpwi     r3, 0xA
      bne-      .loc_0xB8

    .loc_0x7C:
      lwz       r0, 0x1E0(r31)
      mr        r3, r31
      li        r4, 0
      rlwinm    r0,r0,0,21,19
      stw       r0, 0x1E0(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      li        r4, 0
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl

    .loc_0xB8:
      lwz       r4, 0xC0(r31)
      mr        r3, r31
      lfs       f1, 0x1F8(r31)
      lfs       f0, 0x1F4(r4)
      fmuls     f0, f1, f0
      stfs      f0, 0x2F0(r31)
      bl        0x13D8
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036A77C
 * Size:	000034
 */
void Game::Jigumo::Obj::getGoalDist(void)
{
    /*
    .loc_0x0:
      lfs       f1, 0x190(r3)
      lfs       f0, 0x2CC(r3)
      lfs       f3, 0x18C(r3)
      fsubs     f4, f1, f0
      lfs       f0, 0x2C8(r3)
      lfs       f2, 0x194(r3)
      fsubs     f3, f3, f0
      lfs       f1, 0x2D0(r3)
      fmuls     f0, f4, f4
      fsubs     f1, f2, f1
      fmadds    f0, f3, f3, f0
      fmadds    f1, f1, f1, f0
      blr
    */
}

/*
 * --INFO--
 * Address:	8036A7B0
 * Size:	0007DC
 */
void Game::Jigumo::Obj::walkFunc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0xB0(r1)
      mflr      r0
      stw       r0, 0xB4(r1)
      stfd      f31, 0xA0(r1)
      psq_st    f31,0xA8(r1),0,0
      stfd      f30, 0x90(r1)
      psq_st    f30,0x98(r1),0,0
      stfd      f29, 0x80(r1)
      psq_st    f29,0x88(r1),0,0
      stfd      f28, 0x70(r1)
      psq_st    f28,0x78(r1),0,0
      stfd      f27, 0x60(r1)
      psq_st    f27,0x68(r1),0,0
      stw       r31, 0x5C(r1)
      stw       r30, 0x58(r1)
      mr        r30, r3
      lfs       f0, 0x18C(r3)
      stfs      f0, 0x364(r3)
      lfs       f0, 0x190(r3)
      stfs      f0, 0x368(r3)
      lfs       f0, 0x194(r3)
      stfs      f0, 0x36C(r3)
      lwz       r3, 0x280(r3)
      cmplwi    r3, 0
      beq-      .loc_0x7C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x0(r3)
      stfs      f0, 0x368(r30)

    .loc_0x7C:
      mr        r3, r30
      bl        0x1170
      lwz       r4, 0xC0(r30)
      fmr       f29, f1
      mr        r3, r30
      lfs       f30, 0x35C(r4)
      lfs       f31, 0x904(r4)
      lfs       f28, 0x30C(r4)
      lfs       f27, 0x334(r4)
      bl        -0x26345C
      mr        r31, r3
      cmpwi     r31, 0x7
      beq-      .loc_0xD0
      lwz       r3, 0xC0(r30)
      lbz       r0, 0x8FC(r3)
      cmplwi    r0, 0
      bne-      .loc_0x714
      cmpwi     r31, 0x6
      beq-      .loc_0xD0
      cmpwi     r31, 0x5
      bne-      .loc_0x714

    .loc_0xD0:
      lfs       f1, 0x2CC(r30)
      lfs       f0, 0x190(r30)
      lfs       f3, 0x2C8(r30)
      fsubs     f1, f1, f0
      lfs       f0, 0x18C(r30)
      lfs       f2, 0x2D0(r30)
      fsubs     f3, f3, f0
      lfs       f0, 0x194(r30)
      fmuls     f1, f1, f1
      fsubs     f2, f2, f0
      lfs       f0, 0x618(r2)
      fmadds    f1, f3, f3, f1
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x11C
      ble-      .loc_0x120
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x120

    .loc_0x11C:
      fmr       f1, f0

    .loc_0x120:
      lfs       f0, 0x618(r2)
      fmr       f4, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x134
      fmr       f4, f0

    .loc_0x134:
      lfs       f0, 0x61C(r2)
      lwz       r3, 0xC0(r30)
      fdivs     f0, f0, f30
      lfs       f3, 0x63C(r2)
      lfs       f1, 0x908(r3)
      lfs       f2, 0x640(r2)
      fmuls     f0, f3, f0
      fmuls     f0, f4, f0
      fmuls     f0, f1, f0
      fadds     f1, f2, f0
      bl        -0x29B0F0
      lwz       r3, 0xC0(r30)
      frsp      f0, f1
      lbz       r0, 0x8FB(r3)
      fmuls     f2, f31, f0
      cmplwi    r0, 0
      bne-      .loc_0x17C
      lfs       f2, 0x618(r2)

    .loc_0x17C:
      lfs       f1, 0x344(r30)
      lfs       f0, 0x64C(r2)
      fmuls     f2, f2, f1
      lfs       f3, 0x648(r2)
      fadds     f1, f1, f0
      lfs       f4, 0x644(r2)
      lfs       f0, 0x61C(r2)
      fmuls     f2, f3, f2
      stfs      f1, 0x344(r30)
      lfs       f1, 0x344(r30)
      fmuls     f30, f4, f2
      fcmpo     cr0, f1, f0
      ble-      .loc_0x1B4
      stfs      f0, 0x344(r30)

    .loc_0x1B4:
      mr        r3, r30
      bl        -0x263574
      cmpwi     r3, 0x7
      bne-      .loc_0x340
      lwz       r3, 0xC0(r30)
      lbz       r0, 0x8F9(r3)
      cmplwi    r0, 0
      beq-      .loc_0x2EC
      lfs       f1, 0x338(r30)
      lfs       f0, 0x61C(r2)
      fadds     f0, f1, f0
      stfs      f0, 0x338(r30)
      lwz       r3, 0x188(r30)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x2B4
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x1
      bne-      .loc_0x2B4
      lfs       f1, 0x338(r30)
      lfs       f0, 0x33C(r30)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x2B4
      lbz       r0, 0x340(r30)
      cntlzw    r0, r0
      rlwinm    r0,r0,27,5,31
      stb       r0, 0x340(r30)
      lwz       r0, 0x334(r30)
      cmpwi     r0, 0
      ble-      .loc_0x234
      li        r0, 0
      stb       r0, 0x340(r30)

    .loc_0x234:
      lbz       r0, 0x340(r30)
      cmplwi    r0, 0
      beq-      .loc_0x25C
      mr        r3, r30
      li        r4, 0x3
      li        r5, 0
      bl        -0x2659F8
      mr        r3, r30
      bl        0x12F8
      b         .loc_0x274

    .loc_0x25C:
      mr        r3, r30
      li        r4, 0x2
      li        r5, 0
      bl        -0x265A14
      mr        r3, r30
      bl        0x111C

    .loc_0x274:
      bl        -0x2A1484
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x3C(r1)
      lwz       r3, 0xC0(r30)
      stw       r0, 0x38(r1)
      lfd       f1, 0x610(r2)
      lfd       f0, 0x38(r1)
      lfs       f2, 0x600(r2)
      fsubs     f3, f0, f1
      lfs       f1, 0x914(r3)
      lfs       f0, 0x618(r2)
      fdivs     f2, f3, f2
      fmuls     f1, f1, f2
      stfs      f1, 0x33C(r30)
      stfs      f0, 0x338(r30)

    .loc_0x2B4:
      lbz       r0, 0x340(r30)
      cmplwi    r0, 0
      beq-      .loc_0x2EC
      lfs       f1, 0x338(r30)
      lfs       f0, 0x33C(r30)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x2EC
      fdivs     f0, f1, f0
      lfs       f1, 0x61C(r2)
      lwz       r3, 0xC0(r30)
      lfs       f2, 0x918(r3)
      fsubs     f0, f1, f0
      fmuls     f0, f2, f0
      fmuls     f29, f29, f0

    .loc_0x2EC:
      lwz       r3, 0xC0(r30)
      lbz       r0, 0x8FA(r3)
      cmplwi    r0, 0
      beq-      .loc_0x340
      lwz       r3, 0x1F4(r30)
      lis       r0, 0x4330
      stw       r0, 0x38(r1)
      xoris     r0, r3, 0x8000
      lfd       f2, 0x610(r2)
      stw       r0, 0x3C(r1)
      lfs       f3, 0x650(r2)
      lfd       f1, 0x38(r1)
      lfs       f0, 0x654(r2)
      fsubs     f1, f1, f2
      fmuls     f1, f3, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x334
      fmr       f1, f0

    .loc_0x334:
      lfs       f0, 0x61C(r2)
      fsubs     f0, f0, f1
      fmuls     f29, f29, f0

    .loc_0x340:
      lfs       f0, 0x2EC(r30)
      stfs      f0, 0x1FC(r30)
      lwz       r3, 0x35C(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x35C(r30)
      lwz       r0, 0x35C(r30)
      cmpwi     r0, 0x3C
      ble-      .loc_0x4D4
      lfs       f1, 0x190(r30)
      lfs       f0, 0x354(r30)
      lfs       f3, 0x18C(r30)
      fsubs     f1, f1, f0
      lfs       f0, 0x350(r30)
      lfs       f2, 0x194(r30)
      fsubs     f3, f3, f0
      lfs       f0, 0x358(r30)
      fmuls     f1, f1, f1
      fsubs     f2, f2, f0
      lfs       f0, 0x658(r2)
      fmadds    f1, f3, f3, f1
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x4B4
      lbz       r0, 0x2E8(r30)
      lfs       f4, 0x624(r2)
      cmplwi    r0, 0
      beq-      .loc_0x3B4
      lfs       f0, 0x65C(r2)
      fmuls     f4, f4, f0

    .loc_0x3B4:
      lfs       f1, 0x1FC(r30)
      lfs       f0, 0x618(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x3F0
      lfs       f0, 0x660(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r0, 0x3C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f2, f0
      b         .loc_0x414

    .loc_0x3F0:
      lfs       f0, 0x664(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x40(r1)
      lwz       r0, 0x44(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r3, r0

    .loc_0x414:
      lfs       f1, 0x18C(r30)
      lfs       f0, 0x618(r2)
      fnmsubs   f1, f4, f2, f1
      stfs      f1, 0x18C(r30)
      lfs       f2, 0x1FC(r30)
      fcmpo     cr0, f2, f0
      bge-      .loc_0x434
      fneg      f2, f2

    .loc_0x434:
      lfs       f1, 0x664(r2)
      lis       r0, 0x4330
      lis       r3, 0x8050
      stw       r0, 0x50(r1)
      fmuls     f2, f2, f1
      addi      r3, r3, 0x71A0
      lfs       f0, 0x194(r30)
      lfd       f1, 0x610(r2)
      fctiwz    f3, f2
      lfs       f2, 0x618(r2)
      stfd      f3, 0x48(r1)
      lwz       r0, 0x4C(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r3, r0
      lfs       f3, 0x4(r3)
      fnmsubs   f0, f4, f3, f0
      stfs      f0, 0x194(r30)
      lwz       r0, 0x334(r30)
      xoris     r0, r0, 0x8000
      stw       r0, 0x54(r1)
      lfd       f0, 0x50(r1)
      fsubs     f0, f0, f1
      fcmpu     cr0, f2, f0
      beq-      .loc_0x4A0
      lfs       f0, 0x624(r2)
      stfs      f0, 0x2F4(r30)
      b         .loc_0x4B4

    .loc_0x4A0:
      lfs       f0, 0x61C(r2)
      stfs      f0, 0x2F4(r30)
      lwz       r3, 0xC0(r30)
      lbz       r0, 0x910(r3)
      stw       r0, 0x334(r30)

    .loc_0x4B4:
      lfs       f0, 0x18C(r30)
      li        r0, 0
      stfs      f0, 0x350(r30)
      lfs       f0, 0x190(r30)
      stfs      f0, 0x354(r30)
      lfs       f0, 0x194(r30)
      stfs      f0, 0x358(r30)
      stw       r0, 0x35C(r30)

    .loc_0x4D4:
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
      lfs       f1, 0x2C8(r30)
      lfs       f0, 0x2D0(r30)
      lfs       f4, 0x18(r1)
      fsubs     f1, f1, f5
      fsubs     f2, f0, f3
      stfs      f5, 0x8(r1)
      stfs      f4, 0xC(r1)
      stfs      f3, 0x10(r1)
      bl        -0x335BC4
      bl        0xA6F00
      lwz       r12, 0x0(r30)
      fmr       f31, f1
      mr        r3, r30
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0xA6F08
      fmuls     f28, f1, f28
      lfs       f0, 0x648(r2)
      lfs       f1, 0x644(r2)
      fmuls     f0, f0, f27
      fabs      f2, f28
      fmuls     f1, f1, f0
      frsp      f0, f2
      fcmpo     cr0, f0, f1
      ble-      .loc_0x584
      lfs       f0, 0x618(r2)
      fcmpo     cr0, f28, f0
      ble-      .loc_0x580
      fmr       f28, f1
      b         .loc_0x584

    .loc_0x580:
      fneg      f28, f1

    .loc_0x584:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f28, f1
      bl        0xA6E84
      stfs      f1, 0x1FC(r30)
      lfs       f0, 0x618(r2)
      lfs       f1, 0x1FC(r30)
      stfs      f1, 0x1A8(r30)
      lfs       f4, 0x1FC(r30)
      fadds     f3, f4, f30
      fcmpo     cr0, f3, f0
      bge-      .loc_0x5EC
      lfs       f0, 0x660(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x50(r1)
      lwz       r0, 0x54(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f2, f0
      b         .loc_0x610

    .loc_0x5EC:
      lfs       f0, 0x664(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x48(r1)
      lwz       r0, 0x4C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r3, r0

    .loc_0x610:
      lfs       f0, 0x618(r2)
      fmuls     f31, f29, f2
      lfs       f1, 0x1D4(r30)
      lfs       f28, 0x1D8(r30)
      fcmpo     cr0, f3, f0
      lfs       f0, 0x1DC(r30)
      stfs      f1, 0x2C(r1)
      stfs      f28, 0x30(r1)
      stfs      f0, 0x34(r1)
      bge-      .loc_0x63C
      fneg      f3, f3

    .loc_0x63C:
      lfs       f0, 0x664(r2)
      lis       r3, 0x8050
      fabs      f2, f30
      addi      r3, r3, 0x71A0
      fmuls     f1, f3, f0
      frsp      f0, f2
      fctiwz    f1, f1
      fcmpo     cr0, f0, f27
      stfd      f1, 0x40(r1)
      lwz       r0, 0x44(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r3, r0
      lfs       f0, 0x4(r3)
      fmuls     f29, f29, f0
      stfs      f4, 0x2EC(r30)
      ble-      .loc_0x694
      lfs       f0, 0x618(r2)
      fcmpo     cr0, f30, f0
      ble-      .loc_0x690
      fmr       f30, f27
      b         .loc_0x694

    .loc_0x690:
      fneg      f30, f27

    .loc_0x694:
      cmpwi     r31, 0x6
      lfs       f1, 0x61C(r2)
      beq-      .loc_0x6A8
      cmpwi     r31, 0x5
      bne-      .loc_0x6AC

    .loc_0x6A8:
      lfs       f1, 0x618(r2)

    .loc_0x6AC:
      lfs       f0, 0x644(r2)
      fmadds    f1, f0, f1, f30
      bl        0xA6D6C
      lfs       f0, 0x1FC(r30)
      fadds     f0, f0, f1
      stfs      f0, 0x1FC(r30)
      lfs       f0, 0x1FC(r30)
      stfs      f0, 0x1A8(r30)
      stfs      f31, 0x1D4(r30)
      stfs      f28, 0x1D8(r30)
      stfs      f29, 0x1DC(r30)
      lbz       r0, 0x340(r30)
      cmplwi    r0, 0
      beq-      .loc_0x79C
      lwz       r3, 0xC0(r30)
      lfs       f1, 0x618(r2)
      lfs       f0, 0x918(r3)
      fcmpu     cr0, f1, f0
      bne-      .loc_0x79C
      stfs      f1, 0x1D4(r30)
      stfs      f1, 0x1D8(r30)
      stfs      f1, 0x1DC(r30)
      stfs      f1, 0x1C8(r30)
      stfs      f1, 0x1CC(r30)
      stfs      f1, 0x1D0(r30)
      b         .loc_0x79C

    .loc_0x714:
      cmpwi     r31, 0x4
      bne-      .loc_0x784
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      bl        -0x29B6C4
      mr        r3, r30
      lfs       f2, 0x1D4(r30)
      lwz       r12, 0x0(r30)
      frsp      f28, f1
      lfs       f27, 0x1D8(r30)
      lfs       f0, 0x1DC(r30)
      lwz       r12, 0x64(r12)
      stfs      f2, 0x20(r1)
      stfs      f27, 0x24(r1)
      stfs      f0, 0x28(r1)
      mtctr     r12
      bctrl
      bl        -0x29BC60
      fmuls     f0, f29, f28
      frsp      f1, f1
      stfs      f0, 0x1D4(r30)
      fmuls     f0, f29, f1
      stfs      f27, 0x1D8(r30)
      stfs      f0, 0x1DC(r30)
      b         .loc_0x79C

    .loc_0x784:
      fmr       f1, f29
      mr        r3, r30
      fmr       f2, f28
      addi      r4, r30, 0x2C8
      fmr       f3, f27
      bl        -0x25596C

    .loc_0x79C:
      psq_l     f31,0xA8(r1),0,0
      lfd       f31, 0xA0(r1)
      psq_l     f30,0x98(r1),0,0
      lfd       f30, 0x90(r1)
      psq_l     f29,0x88(r1),0,0
      lfd       f29, 0x80(r1)
      psq_l     f28,0x78(r1),0,0
      lfd       f28, 0x70(r1)
      psq_l     f27,0x68(r1),0,0
      lfd       f27, 0x60(r1)
      lwz       r31, 0x5C(r1)
      lwz       r0, 0xB4(r1)
      lwz       r30, 0x58(r1)
      mtlr      r0
      addi      r1, r1, 0xB0
      blr
    */
}

/*
 * --INFO--
 * Address:	8036AF8C
 * Size:	00019C
 */
void Game::Jigumo::Obj::getOffsetForMapCollision(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      li        r5, 0
      lwz       r6, 0x1E0(r4)
      rlwinm.   r0,r6,0,21,21
      bne-      .loc_0x1C
      rlwinm.   r0,r6,0,13,13
      beq-      .loc_0x20

    .loc_0x1C:
      li        r5, 0x1

    .loc_0x20:
      rlwinm.   r0,r5,0,24,31
      beq-      .loc_0x3C
      lfs       f0, 0x618(r2)
      stfs      f0, 0x0(r3)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      b         .loc_0x194

    .loc_0x3C:
      lbz       r0, 0x2E8(r4)
      cmplwi    r0, 0
      beq-      .loc_0xF0
      lfs       f5, 0x1FC(r4)
      lfs       f0, 0x618(r2)
      fmr       f1, f5
      fcmpo     cr0, f5, f0
      bge-      .loc_0x60
      fneg      f1, f5

    .loc_0x60:
      lfs       f2, 0x664(r2)
      lis       r4, 0x8050
      lfs       f0, 0x618(r2)
      addi      r5, r4, 0x71A0
      fmuls     f1, f1, f2
      lfs       f3, 0x668(r2)
      fcmpo     cr0, f5, f0
      fctiwz    f0, f1
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      add       r4, r5, r0
      lfs       f0, 0x4(r4)
      fmuls     f4, f3, f0
      bge-      .loc_0xC0
      lfs       f0, 0x660(r2)
      fmuls     f0, f5, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r5, r0
      fneg      f0, f0
      b         .loc_0xD8

    .loc_0xC0:
      fmuls     f0, f5, f2
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r5, r0

    .loc_0xD8:
      fmuls     f1, f3, f0
      lfs       f0, 0x618(r2)
      stfs      f1, 0x0(r3)
      stfs      f0, 0x4(r3)
      stfs      f4, 0x8(r3)
      b         .loc_0x194

    .loc_0xF0:
      lfs       f5, 0x1FC(r4)
      lfs       f0, 0x618(r2)
      fmr       f1, f5
      fcmpo     cr0, f5, f0
      bge-      .loc_0x108
      fneg      f1, f5

    .loc_0x108:
      lfs       f2, 0x664(r2)
      lis       r4, 0x8050
      lfs       f0, 0x618(r2)
      addi      r5, r4, 0x71A0
      fmuls     f1, f1, f2
      lfs       f3, 0x624(r2)
      fcmpo     cr0, f5, f0
      fctiwz    f0, f1
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      add       r4, r5, r0
      lfs       f0, 0x4(r4)
      fmuls     f4, f3, f0
      bge-      .loc_0x168
      lfs       f0, 0x660(r2)
      fmuls     f0, f5, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r5, r0
      fneg      f0, f0
      b         .loc_0x180

    .loc_0x168:
      fmuls     f0, f5, f2
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r5, r0

    .loc_0x180:
      fmuls     f1, f3, f0
      lfs       f0, 0x618(r2)
      stfs      f1, 0x0(r3)
      stfs      f0, 0x4(r3)
      stfs      f4, 0x8(r3)

    .loc_0x194:
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8036B128
 * Size:	000820
 */
void Game::Jigumo::Obj::calcBaseTrMatrix(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x160(r1)
      mflr      r0
      stw       r0, 0x164(r1)
      stfd      f31, 0x150(r1)
      psq_st    f31,0x158(r1),0,0
      stfd      f30, 0x140(r1)
      psq_st    f30,0x148(r1),0,0
      stfd      f29, 0x130(r1)
      psq_st    f29,0x138(r1),0,0
      stfd      f28, 0x120(r1)
      psq_st    f28,0x128(r1),0,0
      stfd      f27, 0x110(r1)
      psq_st    f27,0x118(r1),0,0
      stw       r31, 0x10C(r1)
      mr        r31, r3
      lwz       r4, 0xC0(r3)
      lbz       r0, 0x8F8(r4)
      cmplwi    r0, 0
      bne-      .loc_0xA8
      lfs       f0, 0x61C(r2)
      addi      r3, r31, 0x138
      addi      r4, r1, 0x58
      addi      r5, r31, 0x1A4
      stfs      f0, 0x58(r1)
      addi      r6, r31, 0x18C
      stfs      f0, 0x5C(r1)
      stfs      f0, 0x60(r1)
      bl        0xBD144
      lwz       r4, 0x174(r31)
      addi      r3, r31, 0x138
      lwz       r4, 0x8(r4)
      addi      r4, r4, 0x24
      bl        -0x280EDC
      lwz       r3, 0x174(r31)
      lfs       f0, 0x168(r31)
      lwz       r3, 0x8(r3)
      stfs      f0, 0x18(r3)
      lfs       f0, 0x16C(r31)
      stfs      f0, 0x1C(r3)
      lfs       f0, 0x170(r31)
      stfs      f0, 0x20(r3)
      b         .loc_0x7E4

    .loc_0xA8:
      lwz       r5, -0x6C18(r13)
      lwz       r3, -0x6514(r13)
      cmplwi    r5, 0
      lfs       f27, 0x1A4(r4)
      lfs       f31, 0x54(r3)
      beq-      .loc_0x108
      lbz       r0, 0x48(r5)
      cmplwi    r0, 0
      beq-      .loc_0x108
      lwz       r3, -0x6CF8(r13)
      addi      r4, r31, 0x18C
      lwz       r12, 0x4(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x66C(r2)
      lfs       f2, 0x190(r31)
      fadds     f0, f0, f1
      fcmpo     cr0, f2, f0
      ble-      .loc_0x108
      li        r3, 0
      li        r0, 0x1E
      stw       r3, 0x334(r31)
      stw       r0, 0x34C(r31)

    .loc_0x108:
      lwz       r3, 0x34C(r31)
      cmpwi     r3, 0
      ble-      .loc_0x130
      subi      r0, r3, 0x1
      stw       r0, 0x34C(r31)
      lwz       r0, 0x34C(r31)
      cmpwi     r0, 0
      bge-      .loc_0x130
      li        r0, 0
      stw       r0, 0x34C(r31)

    .loc_0x130:
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lfs       f30, 0x18C(r31)
      lwz       r12, 0x224(r12)
      lfs       f29, 0x190(r31)
      lfs       f28, 0x194(r31)
      mtctr     r12
      bctrl
      lfs       f0, 0x8(r1)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      lfs       f3, 0x618(r2)
      stfs      f0, 0x240(r31)
      addi      r7, r1, 0x48
      lfs       f0, 0x670(r2)
      addi      r6, r31, 0x1C8
      lfs       f2, 0xC(r1)
      li        r5, 0
      li        r0, -0x1
      fmr       f1, f31
      stfs      f2, 0x244(r31)
      addi      r4, r1, 0x64
      lfs       f2, 0x10(r1)
      stfs      f2, 0x248(r31)
      lfs       f2, 0x244(r31)
      lfs       f5, 0x240(r31)
      fadds     f29, f29, f2
      lfs       f4, 0x248(r31)
      fadds     f30, f30, f5
      lfs       f2, 0x800(r3)
      fadds     f28, f28, f4
      stfs      f27, 0x54(r1)
      fadds     f29, f29, f27
      stfs      f30, 0x48(r1)
      lwz       r3, -0x6CF8(r13)
      stfs      f28, 0x50(r1)
      stfs      f29, 0x4C(r1)
      lwz       r8, 0xC0(r31)
      lfs       f4, 0x4C(r8)
      stw       r7, 0x64(r1)
      stw       r6, 0x68(r1)
      stfs      f4, 0x6C(r1)
      stfs      f3, 0x70(r1)
      stw       r5, 0x74(r1)
      stw       r5, 0xA8(r1)
      stb       r5, 0xD8(r1)
      stb       r5, 0x7D(r1)
      stb       r5, 0x7C(r1)
      stw       r5, 0xAC(r1)
      stw       r5, 0x78(r1)
      stb       r5, 0xF4(r1)
      stw       r5, 0xF8(r1)
      stfs      f2, 0x90(r1)
      stfs      f0, 0x94(r1)
      stw       r0, 0xFC(r1)
      stw       r5, 0xB0(r1)
      stb       r5, 0x7E(r1)
      lwz       r12, 0x4(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        -0x263F60
      cmpwi     r3, 0x4
      beq-      .loc_0x3E8
      lwz       r0, 0x34C(r31)
      cmpwi     r0, 0
      bne-      .loc_0x3E8
      lwz       r0, 0x334(r31)
      cmpwi     r0, 0
      bgt-      .loc_0x25C
      lwz       r0, 0xAC(r1)
      cmplwi    r0, 0
      beq-      .loc_0x3E8

    .loc_0x25C:
      lwz       r0, 0xAC(r1)
      cmplwi    r0, 0
      beq-      .loc_0x2B0
      lfs       f1, 0x618(r2)
      lfs       f2, 0xC0(r1)
      fcmpu     cr0, f1, f2
      bne-      .loc_0x290
      lfs       f0, 0xC4(r1)
      fcmpu     cr0, f1, f0
      bne-      .loc_0x290
      lfs       f0, 0xC8(r1)
      fcmpu     cr0, f1, f0
      beq-      .loc_0x2B0

    .loc_0x290:
      stfs      f2, 0x304(r31)
      lfs       f0, 0xC4(r1)
      stfs      f0, 0x308(r31)
      lfs       f0, 0xC8(r1)
      stfs      f0, 0x30C(r31)
      lwz       r3, 0xC0(r31)
      lbz       r0, 0x910(r3)
      stw       r0, 0x334(r31)

    .loc_0x2B0:
      lfs       f1, 0x2F8(r31)
      lfs       f0, 0x304(r31)
      fcmpu     cr0, f1, f0
      bne-      .loc_0x2E0
      lfs       f1, 0x2FC(r31)
      lfs       f0, 0x308(r31)
      fcmpu     cr0, f1, f0
      bne-      .loc_0x2E0
      lfs       f1, 0x300(r31)
      lfs       f0, 0x30C(r31)
      fcmpu     cr0, f1, f0
      beq-      .loc_0x2E8

    .loc_0x2E0:
      lfs       f0, 0x618(r2)
      stfs      f0, 0x330(r31)

    .loc_0x2E8:
      lwz       r3, 0xC0(r31)
      lfs       f0, 0x308(r31)
      lfs       f1, 0x900(r3)
      fcmpo     cr0, f0, f1
      bge-      .loc_0x384
      stfs      f1, 0x308(r31)
      lfs       f1, 0x618(r2)
      lfs       f3, 0x304(r31)
      lfs       f2, 0x308(r31)
      fmuls     f0, f3, f3
      lfs       f4, 0x30C(r31)
      fmuls     f2, f2, f2
      fmuls     f4, f4, f4
      fadds     f0, f0, f2
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x348
      fmadds    f0, f3, f3, f2
      fadds     f2, f4, f0
      fcmpo     cr0, f2, f1
      ble-      .loc_0x34C
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0x34C

    .loc_0x348:
      fmr       f2, f1

    .loc_0x34C:
      lfs       f0, 0x618(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x384
      lfs       f1, 0x61C(r2)
      lfs       f0, 0x304(r31)
      fdivs     f1, f1, f2
      fmuls     f0, f0, f1
      stfs      f0, 0x304(r31)
      lfs       f0, 0x308(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0x308(r31)
      lfs       f0, 0x30C(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0x30C(r31)

    .loc_0x384:
      lfs       f0, 0x304(r31)
      li        r3, 0
      lfs       f3, 0x61C(r2)
      stfs      f0, 0x2F8(r31)
      lfs       f0, 0x308(r31)
      stfs      f0, 0x2FC(r31)
      lfs       f0, 0x30C(r31)
      stfs      f0, 0x300(r31)
      lwz       r4, 0x1E0(r31)
      rlwinm.   r0,r4,0,21,21
      bne-      .loc_0x3B8
      rlwinm.   r0,r4,0,13,13
      beq-      .loc_0x3BC

    .loc_0x3B8:
      li        r3, 0x1

    .loc_0x3BC:
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x3C8
      lfs       f3, 0x618(r2)

    .loc_0x3C8:
      lwz       r3, 0xC0(r31)
      lfs       f2, 0x2F4(r31)
      lfs       f1, 0x91C(r3)
      lfs       f0, 0x190(r31)
      fmuls     f1, f3, f1
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x190(r31)
      b         .loc_0x4A4

    .loc_0x3E8:
      lwz       r0, 0xA8(r1)
      cmplwi    r0, 0
      beq-      .loc_0x40C
      lfs       f0, 0xB4(r1)
      stfs      f0, 0x304(r31)
      lfs       f0, 0xB8(r1)
      stfs      f0, 0x308(r31)
      lfs       f0, 0xBC(r1)
      stfs      f0, 0x30C(r31)

    .loc_0x40C:
      lwz       r4, 0x1E0(r31)
      li        r3, 0
      rlwinm.   r0,r4,0,21,21
      bne-      .loc_0x424
      rlwinm.   r0,r4,0,13,13
      beq-      .loc_0x428

    .loc_0x424:
      li        r3, 0x1

    .loc_0x428:
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x444
      lfs       f1, 0x618(r2)
      lfs       f0, 0x61C(r2)
      stfs      f1, 0x304(r31)
      stfs      f0, 0x308(r31)
      stfs      f1, 0x30C(r31)

    .loc_0x444:
      lfs       f1, 0x2F8(r31)
      lfs       f0, 0x304(r31)
      fcmpu     cr0, f1, f0
      bne-      .loc_0x474
      lfs       f1, 0x2FC(r31)
      lfs       f0, 0x308(r31)
      fcmpu     cr0, f1, f0
      bne-      .loc_0x474
      lfs       f1, 0x300(r31)
      lfs       f0, 0x30C(r31)
      fcmpu     cr0, f1, f0
      beq-      .loc_0x47C

    .loc_0x474:
      lfs       f0, 0x618(r2)
      stfs      f0, 0x330(r31)

    .loc_0x47C:
      lfs       f1, 0x304(r31)
      lfs       f0, 0x674(r2)
      stfs      f1, 0x2F8(r31)
      lfs       f1, 0x308(r31)
      stfs      f1, 0x2FC(r31)
      lfs       f1, 0x30C(r31)
      stfs      f1, 0x300(r31)
      lfs       f1, 0x2F4(r31)
      fmuls     f0, f1, f0
      stfs      f0, 0x2F4(r31)

    .loc_0x4A4:
      lfs       f1, 0x2F4(r31)
      lfs       f0, 0x678(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x4BC
      lfs       f0, 0x61C(r2)
      stfs      f0, 0x2F4(r31)

    .loc_0x4BC:
      lwz       r3, 0x334(r31)
      subi      r0, r3, 0x1
      stw       r0, 0x334(r31)
      lwz       r0, 0x334(r31)
      cmpwi     r0, 0
      bge-      .loc_0x4DC
      li        r0, 0
      stw       r0, 0x334(r31)

    .loc_0x4DC:
      lfs       f1, 0x1FC(r31)
      bl        -0x29C354
      frsp      f31, f1
      lfs       f1, 0x1FC(r31)
      bl        -0x29BDF8
      frsp      f2, f1
      lfs       f1, 0x618(r2)
      fmuls     f4, f31, f31
      stfs      f31, 0x44(r1)
      fmuls     f3, f1, f1
      fmuls     f0, f2, f2
      stfs      f2, 0x3C(r1)
      fadds     f0, f0, f3
      stfs      f1, 0x40(r1)
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x53C
      fmadds    f0, f2, f2, f3
      fadds     f3, f4, f0
      fcmpo     cr0, f3, f1
      ble-      .loc_0x540
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0x540

    .loc_0x53C:
      fmr       f3, f1

    .loc_0x540:
      lfs       f0, 0x618(r2)
      fcmpo     cr0, f3, f0
      ble-      .loc_0x578
      lfs       f0, 0x61C(r2)
      lfs       f2, 0x3C(r1)
      fdivs     f3, f0, f3
      lfs       f1, 0x40(r1)
      lfs       f0, 0x44(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x3C(r1)
      stfs      f1, 0x40(r1)
      stfs      f0, 0x44(r1)

    .loc_0x578:
      lfs       f0, 0x2F8(r31)
      addi      r3, r1, 0x30
      addi      r4, r1, 0x3C
      addi      r5, r1, 0x24
      stfs      f0, 0x30(r1)
      lfs       f0, 0x2FC(r31)
      stfs      f0, 0x34(r1)
      lfs       f0, 0x300(r31)
      stfs      f0, 0x38(r1)
      bl        -0x280740
      lfs       f2, 0x24(r1)
      lfs       f1, 0x28(r1)
      fmuls     f0, f2, f2
      lfs       f3, 0x2C(r1)
      fmuls     f4, f1, f1
      lfs       f1, 0x618(r2)
      fmuls     f3, f3, f3
      fadds     f0, f0, f4
      fadds     f0, f3, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x5E8
      fmadds    f0, f2, f2, f4
      fadds     f3, f3, f0
      fcmpo     cr0, f3, f1
      ble-      .loc_0x5EC
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0x5EC

    .loc_0x5E8:
      fmr       f3, f1

    .loc_0x5EC:
      lfs       f0, 0x618(r2)
      fcmpo     cr0, f3, f0
      ble-      .loc_0x624
      lfs       f0, 0x61C(r2)
      lfs       f2, 0x24(r1)
      fdivs     f3, f0, f3
      lfs       f1, 0x28(r1)
      lfs       f0, 0x2C(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x24(r1)
      stfs      f1, 0x28(r1)
      stfs      f0, 0x2C(r1)

    .loc_0x624:
      addi      r3, r1, 0x24
      addi      r4, r1, 0x30
      addi      r5, r1, 0x3C
      bl        -0x2807D4
      lfs       f2, 0x3C(r1)
      lfs       f1, 0x40(r1)
      fmuls     f0, f2, f2
      lfs       f3, 0x44(r1)
      fmuls     f4, f1, f1
      lfs       f1, 0x618(r2)
      fmuls     f3, f3, f3
      fadds     f0, f0, f4
      fadds     f0, f3, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x67C
      fmadds    f0, f2, f2, f4
      fadds     f3, f3, f0
      fcmpo     cr0, f3, f1
      ble-      .loc_0x680
      fsqrte    f0, f3
      fmuls     f3, f0, f3
      b         .loc_0x680

    .loc_0x67C:
      fmr       f3, f1

    .loc_0x680:
      lfs       f0, 0x618(r2)
      fcmpo     cr0, f3, f0
      ble-      .loc_0x6B8
      lfs       f0, 0x61C(r2)
      lfs       f2, 0x3C(r1)
      fdivs     f3, f0, f3
      lfs       f1, 0x40(r1)
      lfs       f0, 0x44(r1)
      fmuls     f2, f2, f3
      fmuls     f1, f1, f3
      fmuls     f0, f0, f3
      stfs      f2, 0x3C(r1)
      stfs      f1, 0x40(r1)
      stfs      f0, 0x44(r1)

    .loc_0x6B8:
      lfs       f0, 0x24(r1)
      addi      r3, r31, 0x320
      addi      r4, r31, 0x138
      stfs      f0, 0x138(r31)
      lfs       f0, 0x28(r1)
      stfs      f0, 0x148(r31)
      lfs       f0, 0x2C(r1)
      stfs      f0, 0x158(r31)
      lfs       f0, 0x30(r1)
      stfs      f0, 0x13C(r31)
      lfs       f0, 0x34(r1)
      stfs      f0, 0x14C(r31)
      lfs       f0, 0x38(r1)
      stfs      f0, 0x15C(r31)
      lfs       f0, 0x3C(r1)
      stfs      f0, 0x140(r31)
      lfs       f0, 0x40(r1)
      stfs      f0, 0x150(r31)
      lfs       f0, 0x44(r1)
      stfs      f0, 0x160(r31)
      bl        0xA7408
      addi      r3, r1, 0x14
      addi      r4, r31, 0x310
      bl        0xA6F24
      lfs       f2, 0x330(r31)
      lfs       f1, 0x61C(r2)
      fcmpo     cr0, f2, f1
      bge-      .loc_0x75C
      lfs       f0, 0x64C(r2)
      fadds     f0, f2, f0
      stfs      f0, 0x330(r31)
      lfs       f0, 0x330(r31)
      fcmpo     cr0, f0, f1
      ble-      .loc_0x744
      stfs      f1, 0x330(r31)

    .loc_0x744:
      addi      r3, r31, 0x310
      lfs       f1, 0x330(r31)
      mr        r5, r3
      addi      r4, r31, 0x320
      bl        0xA7074
      b         .loc_0x784

    .loc_0x75C:
      lfs       f0, 0x618(r2)
      stfs      f0, 0x330(r31)
      lfs       f0, 0x320(r31)
      stfs      f0, 0x310(r31)
      lfs       f0, 0x324(r31)
      stfs      f0, 0x314(r31)
      lfs       f0, 0x328(r31)
      stfs      f0, 0x318(r31)
      lfs       f0, 0x32C(r31)
      stfs      f0, 0x31C(r31)

    .loc_0x784:
      addi      r3, r31, 0x310
      bl        0xA6F9C
      addi      r3, r31, 0x138
      addi      r4, r31, 0x310
      bl        0xBD2CC
      lfs       f0, 0x18C(r31)
      addi      r3, r31, 0x138
      stfs      f0, 0x144(r31)
      lfs       f0, 0x190(r31)
      stfs      f0, 0x154(r31)
      lfs       f0, 0x194(r31)
      stfs      f0, 0x164(r31)
      lwz       r4, 0x174(r31)
      lwz       r4, 0x8(r4)
      addi      r4, r4, 0x24
      bl        -0x28161C
      lwz       r3, 0x174(r31)
      lfs       f0, 0x168(r31)
      lwz       r3, 0x8(r3)
      stfs      f0, 0x18(r3)
      lfs       f0, 0x16C(r31)
      stfs      f0, 0x1C(r3)
      lfs       f0, 0x170(r31)
      stfs      f0, 0x20(r3)

    .loc_0x7E4:
      psq_l     f31,0x158(r1),0,0
      lfd       f31, 0x150(r1)
      psq_l     f30,0x148(r1),0,0
      lfd       f30, 0x140(r1)
      psq_l     f29,0x138(r1),0,0
      lfd       f29, 0x130(r1)
      psq_l     f28,0x128(r1),0,0
      lfd       f28, 0x120(r1)
      psq_l     f27,0x118(r1),0,0
      lfd       f27, 0x110(r1)
      lwz       r0, 0x164(r1)
      lwz       r31, 0x10C(r1)
      mtlr      r0
      addi      r1, r1, 0x160
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void Game::Jigumo::Obj::isUnitePos(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8036B948
 * Size:	000058
 */
void Game::Jigumo::Obj::revisionAnimPos((float))
{
    /*
    .loc_0x0:
      lfs       f0, 0x61C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x28
      lfs       f0, 0x198(r3)
      stfs      f0, 0x18C(r3)
      lfs       f0, 0x19C(r3)
      stfs      f0, 0x190(r3)
      lfs       f0, 0x1A0(r3)
      stfs      f0, 0x194(r3)
      blr

    .loc_0x28:
      lfs       f2, 0x198(r3)
      lfs       f4, 0x2BC(r3)
      lfs       f3, 0x1A0(r3)
      fsubs     f2, f2, f4
      lfs       f0, 0x2C4(r3)
      fsubs     f3, f3, f0
      fmadds    f0, f2, f1, f4
      stfs      f0, 0x18C(r3)
      lfs       f0, 0x2C4(r3)
      fmadds    f0, f3, f1, f0
      stfs      f0, 0x194(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8036B9A0
 * Size:	000080
 */
void Game::Jigumo::Obj::getWalkSpeed(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x2645C0
      cmpwi     r3, 0x8
      beq-      .loc_0x64
      bge-      .loc_0x38
      cmpwi     r3, 0x7
      bge-      .loc_0x44
      cmpwi     r3, 0x5
      bge-      .loc_0x50
      b         .loc_0x64

    .loc_0x38:
      cmpwi     r3, 0xA
      bge-      .loc_0x64
      b         .loc_0x5C

    .loc_0x44:
      lwz       r3, 0xC0(r31)
      lfs       f1, 0x81C(r3)
      b         .loc_0x6C

    .loc_0x50:
      lwz       r3, 0xC0(r31)
      lfs       f1, 0x844(r3)
      b         .loc_0x6C

    .loc_0x5C:
      lfs       f1, 0x618(r2)
      b         .loc_0x6C

    .loc_0x64:
      lwz       r3, 0xC0(r31)
      lfs       f1, 0x2E4(r3)

    .loc_0x6C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036BA20
 * Size:	000074
 */
void Game::Jigumo::Obj::velocityControl(void)
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
      bl        -0x26481C
      fmr       f31, f1
      mr        r3, r31
      bl        -0x2667DC
      fdivs     f1, f1, f31
      lfs       f0, 0x64C(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x58
      lfs       f0, 0x1C8(r31)
      lfs       f1, 0x624(r2)
      fmuls     f0, f0, f1
      stfs      f0, 0x1C8(r31)
      lfs       f0, 0x1D0(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0x1D0(r31)

    .loc_0x58:
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
 * Address:	8036BA94
 * Size:	0000A8
 */
void Game::Jigumo::Obj::getNearestPikiOrNavi((float, float))
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
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      fmr       f31, f2
      mr        r30, r3
      fmr       f30, f1
      addi      r4, r1, 0xC
      li        r5, 0
      frsp      f0, f31
      stfs      f31, 0xC(r1)
      fmuls     f0, f0, f31
      stfs      f0, 0xC(r1)
      stfs      f0, 0x8(r1)
      bl        -0x258F7C
      fmr       f1, f30
      mr        r31, r3
      fmr       f2, f31
      mr        r3, r30
      addi      r4, r1, 0x8
      li        r5, 0
      bl        -0x259408
      lfs       f1, 0xC(r1)
      lfs       f0, 0x8(r1)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x80
      mr        r3, r31

    .loc_0x80:
      psq_l     f31,0x38(r1),0,0
      lfd       f31, 0x30(r1)
      psq_l     f30,0x28(r1),0,0
      lfd       f30, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r0, 0x44(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	8036BB3C
 * Size:	0001C0
 */
void Game::Jigumo::Obj::effectStart(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lfs       f0, 0x618(r2)
      lis       r4, 0x804B
      stw       r0, 0x44(r1)
      subi      r5, r4, 0x5814
      lis       r4, 0x804B
      stw       r31, 0x3C(r1)
      subi      r0, r4, 0x5D24
      stw       r30, 0x38(r1)
      mr        r30, r3
      lfs       f3, 0x1F8(r3)
      stfs      f0, 0x14(r1)
      stfs      f0, 0x18(r1)
      lwz       r7, 0x14(r1)
      stfs      f0, 0x1C(r1)
      lwz       r6, 0x18(r1)
      lwz       r4, 0x1C(r1)
      stw       r7, 0x8(r1)
      stw       r6, 0xC(r1)
      lfs       f2, 0x8(r1)
      stw       r4, 0x10(r1)
      lfs       f1, 0xC(r1)
      stw       r5, 0x20(r1)
      lfs       f0, 0x10(r1)
      stfs      f2, 0x24(r1)
      stfs      f1, 0x28(r1)
      stfs      f0, 0x2C(r1)
      stw       r0, 0x20(r1)
      stfs      f3, 0x30(r1)
      bl        -0x2647C0
      mr        r31, r3
      cmpwi     r31, 0x4
      bne-      .loc_0x10C
      lwz       r0, 0x280(r30)
      cmplwi    r0, 0
      beq-      .loc_0xEC
      lwz       r3, 0x374(r30)
      cmplwi    r3, 0
      beq-      .loc_0x10C
      lwz       r12, 0x0(r3)
      addi      r4, r1, 0x20
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x18C(r30)
      stfs      f0, 0x364(r30)
      lfs       f0, 0x190(r30)
      stfs      f0, 0x368(r30)
      lfs       f0, 0x194(r30)
      stfs      f0, 0x36C(r30)
      lwz       r3, 0x280(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x0(r3)
      stfs      f0, 0x368(r30)
      b         .loc_0x10C

    .loc_0xEC:
      lwz       r3, 0x370(r30)
      cmplwi    r3, 0
      beq-      .loc_0x10C
      lwz       r12, 0x0(r3)
      addi      r4, r1, 0x20
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x10C:
      cmpwi     r31, 0x7
      bne-      .loc_0x16C
      lfs       f0, 0x618(r2)
      stfs      f0, 0x344(r30)
      lwz       r0, 0x280(r30)
      cmplwi    r0, 0
      beq-      .loc_0x14C
      lwz       r3, 0x37C(r30)
      cmplwi    r3, 0
      beq-      .loc_0x16C
      lwz       r12, 0x0(r3)
      addi      r4, r1, 0x20
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      b         .loc_0x16C

    .loc_0x14C:
      lwz       r3, 0x378(r30)
      cmplwi    r3, 0
      beq-      .loc_0x16C
      lwz       r12, 0x0(r3)
      addi      r4, r1, 0x20
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x16C:
      cmpwi     r31, 0x6
      bne-      .loc_0x1A8
      lwz       r0, 0x280(r30)
      cmplwi    r0, 0
      bne-      .loc_0x1A8
      lfs       f1, 0x67C(r2)
      addi      r4, r1, 0x20
      lfs       f0, 0x1F8(r30)
      fmuls     f0, f1, f0
      stfs      f0, 0x30(r1)
      lwz       r3, 0x380(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x1A8:
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	8036BCFC
 * Size:	00008C
 */
void Game::Jigumo::Obj::effectStop(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x374(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x370(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x37C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x378(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x380(r31)
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
 * Address:	........
 * Size:	0000A8
 */
void Game::Jigumo::Obj::appearEffectStart(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void Game::Jigumo::Obj::appearEffectStop(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8036BD88
 * Size:	000028
 */
void Game::Jigumo::Obj::boundEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f1, 0x680(r2)
      addi      r4, r3, 0x18C
      stw       r0, 0x14(r1)
      bl        -0x26824C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036BDB0
 * Size:	000124
 */
void Game::Jigumo::Obj::eatWaterEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x64(r1)
      stw       r31, 0x5C(r1)
      mr        r31, r3
      addi      r3, r31, 0x2D8
      bl        -0x233654
      lwz       r4, 0x64(r3)
      cmplwi    r4, 0
      beq-      .loc_0x110
      lis       r3, 0x804B
      li        r5, 0
      subi      r0, r3, 0x5808
      li        r7, 0x159
      lis       r3, 0x804E
      stw       r0, 0x2C(r1)
      addi      r0, r3, 0x6A64
      li        r6, 0x15A
      lis       r3, 0x804F
      stw       r0, 0x2C(r1)
      subi      r0, r3, 0x7A18
      sth       r7, 0x30(r1)
      addi      r3, r1, 0x14
      sth       r6, 0x32(r1)
      stw       r5, 0x34(r1)
      stw       r5, 0x38(r1)
      stw       r0, 0x2C(r1)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x280(r31)
      lfs       f2, 0x14(r1)
      lwz       r12, 0x0(r3)
      lfs       f1, 0x18(r1)
      lfs       f0, 0x1C(r1)
      lwz       r12, 0x14(r12)
      stfs      f2, 0x20(r1)
      stfs      f1, 0x24(r1)
      stfs      f0, 0x28(r1)
      mtctr     r12
      bctrl
      lfs       f0, 0x0(r3)
      lis       r4, 0x804B
      lwz       r8, 0x20(r1)
      lis       r3, 0x804B
      stfs      f0, 0x24(r1)
      subi      r5, r4, 0x5814
      lfs       f3, 0x1F8(r31)
      subi      r0, r3, 0x5D24
      lwz       r7, 0x24(r1)
      addi      r3, r1, 0x2C
      lwz       r6, 0x28(r1)
      addi      r4, r1, 0x3C
      stw       r8, 0x8(r1)
      stw       r7, 0xC(r1)
      lfs       f2, 0x8(r1)
      stw       r6, 0x10(r1)
      lfs       f1, 0xC(r1)
      stw       r5, 0x3C(r1)
      lfs       f0, 0x10(r1)
      stfs      f2, 0x40(r1)
      stfs      f1, 0x44(r1)
      stfs      f0, 0x48(r1)
      stw       r0, 0x3C(r1)
      stfs      f3, 0x4C(r1)
      bl        0x5CA1C

    .loc_0x110:
      lwz       r0, 0x64(r1)
      lwz       r31, 0x5C(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	8036BED4
 * Size:	000020
 */
void Game::Jigumo::Obj::killNest(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0x2E4(r3)
      cmplwi    r4, 0
      beq-      .loc_0x14
      li        r0, 0x1
      stw       r0, 0x2F0(r4)

    .loc_0x14:
      li        r0, 0
      stw       r0, 0x2E4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8036BEF4
 * Size:	000194
 */
void Game::Jigumo::Obj::mouthScaleMtxCalc(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0x174(r3)
      lhz       r0, 0x360(r3)
      lwz       r4, 0x8(r4)
      mulli     r0, r0, 0x30
      lfs       f3, 0x618(r2)
      lwz       r4, 0x84(r4)
      lwz       r4, 0xC(r4)
      add       r4, r4, r0
      lfs       f1, 0x10(r4)
      lfs       f2, 0x20(r4)
      fmuls     f4, f1, f1
      lfs       f0, 0x0(r4)
      fmuls     f5, f2, f2
      fmadds    f4, f0, f0, f4
      fadds     f4, f5, f4
      fcmpo     cr0, f4, f3
      ble-      .loc_0x54
      ble-      .loc_0x58
      fsqrte    f3, f4
      fmuls     f4, f3, f4
      b         .loc_0x58

    .loc_0x54:
      fmr       f4, f3

    .loc_0x58:
      lfs       f3, 0x618(r2)
      fcmpo     cr0, f4, f3
      ble-      .loc_0x78
      lfs       f3, 0x61C(r2)
      fdivs     f3, f3, f4
      fmuls     f0, f0, f3
      fmuls     f1, f1, f3
      fmuls     f2, f2, f3

    .loc_0x78:
      lfs       f3, 0x14(r4)
      lfs       f4, 0x24(r4)
      fmuls     f6, f3, f3
      lfs       f7, 0x4(r4)
      fmuls     f8, f4, f4
      lfs       f5, 0x618(r2)
      fmadds    f6, f7, f7, f6
      fadds     f6, f8, f6
      fcmpo     cr0, f6, f5
      ble-      .loc_0xB0
      ble-      .loc_0xB4
      fsqrte    f5, f6
      fmuls     f6, f5, f6
      b         .loc_0xB4

    .loc_0xB0:
      fmr       f6, f5

    .loc_0xB4:
      lfs       f5, 0x618(r2)
      fcmpo     cr0, f6, f5
      ble-      .loc_0xD4
      lfs       f5, 0x61C(r2)
      fdivs     f5, f5, f6
      fmuls     f7, f7, f5
      fmuls     f3, f3, f5
      fmuls     f4, f4, f5

    .loc_0xD4:
      lfs       f9, 0x18(r4)
      lfs       f10, 0x28(r4)
      fmuls     f6, f9, f9
      lfs       f8, 0x8(r4)
      fmuls     f11, f10, f10
      lfs       f5, 0x618(r2)
      fmadds    f6, f8, f8, f6
      fadds     f6, f11, f6
      fcmpo     cr0, f6, f5
      ble-      .loc_0x10C
      ble-      .loc_0x110
      fsqrte    f5, f6
      fmuls     f6, f5, f6
      b         .loc_0x110

    .loc_0x10C:
      fmr       f6, f5

    .loc_0x110:
      lfs       f5, 0x618(r2)
      fcmpo     cr0, f6, f5
      ble-      .loc_0x130
      lfs       f5, 0x61C(r2)
      fdivs     f5, f5, f6
      fmuls     f8, f8, f5
      fmuls     f9, f9, f5
      fmuls     f10, f10, f5

    .loc_0x130:
      lbz       r0, 0x2E9(r3)
      lwz       r3, 0xC0(r3)
      cmplwi    r0, 0
      lfs       f11, 0x92C(r3)
      beq-      .loc_0x148
      lfs       f11, 0x684(r2)

    .loc_0x148:
      fmuls     f5, f0, f11
      fmuls     f1, f1, f11
      fmuls     f0, f2, f11
      stfs      f5, 0x0(r4)
      fmuls     f6, f7, f11
      fmuls     f5, f3, f11
      stfs      f1, 0x10(r4)
      fmuls     f3, f4, f11
      fmuls     f2, f8, f11
      stfs      f0, 0x20(r4)
      fmuls     f1, f9, f11
      fmuls     f0, f10, f11
      stfs      f6, 0x4(r4)
      stfs      f5, 0x14(r4)
      stfs      f3, 0x24(r4)
      stfs      f2, 0x8(r4)
      stfs      f1, 0x18(r4)
      stfs      f0, 0x28(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	8036C088
 * Size:	000004
 */
void Game::Jigumo::Obj::setInitialSetting((Game::EnemyInitialParamBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8036C08C
 * Size:	000014
 */
void Game::Jigumo::Obj::getCellRadius(void)
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
 * Address:	8036C0A0
 * Size:	000008
 */
void Game::Jigumo::Obj::getBodyRadius(void)
{
    /*
    .loc_0x0:
      lfs       f1, 0x2F0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8036C0A8
 * Size:	000028
 */
void Game::Jigumo::Obj::eatWhitePikminCallBack((Game::Creature*, float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r5, 0xC0(r3)
      lfs       f1, 0x8BC(r5)
      bl        -0x264BEC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036C0D0
 * Size:	000008
 */
void Game::Jigumo::Obj::getDownSmokeScale(void)
{
    /*
    .loc_0x0:
      lfs       f1, 0x688(r2)
      blr
    */
}

/*
 * --INFO--
 * Address:	8036C0D8
 * Size:	000008
 */
void Game::Jigumo::Obj::getMouthSlots(void)
{
    /*
    .loc_0x0:
      addi      r3, r3, 0x2D8
      blr
    */
}

/*
 * --INFO--
 * Address:	8036C0E0
 * Size:	00003C
 */
void Game::Jigumo::Obj::createEfxHamon(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x264DBC
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x28
      mr        r3, r31
      bl        -0x26A800

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
 * Address:	8036C11C
 * Size:	000014
 */
void @908 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x38C
      b         -0x265810
    */
}

/*
 * --INFO--
 * Address:	8036C130
 * Size:	000014
 */
void @908 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x38C
      b         -0x265A98
    */
}

/*
 * --INFO--
 * Address:	8036C144
 * Size:	000014
 */
void @908 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x38C
      b         -0x265A8C
    */
}

/*
 * --INFO--
 * Address:	8036C158
 * Size:	000014
 */
void @908 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x38C
      b         -0x2656F0
    */
}

/*
 * --INFO--
 * Address:	8036C16C
 * Size:	000014
 */
void @908 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x38C
      b         -0x265730
    */
}

/*
 * --INFO--
 * Address:	8036C180
 * Size:	000014
 */
void @908 @12 @Game::EnemyBase::viewGetShape(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x38C
      b         -0x265AF0
    */
}
