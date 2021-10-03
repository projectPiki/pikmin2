

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
 * Address:	80370C08
 * Size:	000204
 */
void Morimura::TZukanBase::__ct((char*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x3209C
      lis       r4, 0x804E
      li        r0, 0
      addi      r4, r4, 0x4054
      lis       r3, 0x8005
      stw       r4, 0x0(r31)
      addi      r5, r4, 0x10
      subi      r4, r3, 0x5D40
      addi      r3, r31, 0x1B0
      stw       r5, 0x18(r31)
      li        r5, 0
      li        r6, 0x8
      li        r7, 0x2
      stw       r0, 0xB4(r31)
      stw       r0, 0xB8(r31)
      stw       r0, 0xBC(r31)
      stw       r0, 0xC0(r31)
      stw       r0, 0xC4(r31)
      stw       r0, 0xC8(r31)
      stw       r0, 0xCC(r31)
      stw       r0, 0xD0(r31)
      stw       r0, 0xD4(r31)
      stw       r0, 0xD8(r31)
      stw       r0, 0xDC(r31)
      stw       r0, 0xE0(r31)
      stw       r0, 0xE4(r31)
      stw       r0, 0xE8(r31)
      stw       r0, 0xEC(r31)
      stw       r0, 0xF0(r31)
      stw       r0, 0xF4(r31)
      stw       r0, 0xF8(r31)
      stw       r0, 0xFC(r31)
      stw       r0, 0x100(r31)
      stw       r0, 0x104(r31)
      stw       r0, 0x108(r31)
      stw       r0, 0x10C(r31)
      stw       r0, 0x110(r31)
      stw       r0, 0x114(r31)
      stw       r0, 0x118(r31)
      stw       r0, 0x11C(r31)
      stw       r0, 0x120(r31)
      stw       r0, 0x124(r31)
      stw       r0, 0x128(r31)
      stw       r0, 0x12C(r31)
      stw       r0, 0x130(r31)
      stb       r0, 0x17C(r31)
      stw       r0, 0x180(r31)
      stw       r0, 0x184(r31)
      stw       r0, 0x188(r31)
      stw       r0, 0x18C(r31)
      stw       r0, 0x190(r31)
      stw       r0, 0x194(r31)
      stw       r0, 0x198(r31)
      stw       r0, 0x19C(r31)
      bl        -0x2AF4B8
      lis       r4, 0x8005
      addi      r3, r31, 0x1C0
      subi      r4, r4, 0x5D40
      li        r5, 0
      li        r6, 0x8
      li        r7, 0x2
      bl        -0x2AF4D4
      lis       r4, 0x8005
      addi      r3, r31, 0x1D0
      subi      r4, r4, 0x5D40
      li        r5, 0
      li        r6, 0x8
      li        r7, 0x2
      bl        -0x2AF4F0
      li        r7, 0
      lfs       f4, 0x7C0(r2)
      stw       r7, 0x1E0(r31)
      li        r6, 0x1
      lfs       f3, 0x7C4(r2)
      li        r5, -0x1
      stw       r7, 0x1E4(r31)
      li        r4, 0xA
      lfs       f2, 0x7C8(r2)
      li        r0, 0x3
      stw       r7, 0x1E8(r31)
      mr        r3, r31
      lfs       f1, 0x7CC(r2)
      stw       r7, 0x1EC(r31)
      lfs       f0, 0x7D0(r2)
      stfs      f4, 0x1F0(r31)
      stfs      f4, 0x1F4(r31)
      stfs      f4, 0x1F8(r31)
      stfs      f3, 0x1FC(r31)
      stfs      f3, 0x200(r31)
      stfs      f4, 0x204(r31)
      stfs      f2, 0x208(r31)
      stfs      f1, 0x20C(r31)
      stfs      f4, 0x210(r31)
      stb       r7, 0x214(r31)
      stb       r7, 0x215(r31)
      stb       r7, 0x216(r31)
      stb       r7, 0x217(r31)
      stb       r7, 0x218(r31)
      stb       r6, 0x219(r31)
      stb       r7, 0x21A(r31)
      stb       r7, 0x21B(r31)
      stb       r6, 0x21C(r31)
      stw       r7, 0x22C(r31)
      stw       r7, 0x230(r31)
      stw       r5, 0x234(r31)
      stw       r7, 0x238(r31)
      stw       r7, 0x23C(r31)
      stb       r6, 0x240(r31)
      stb       r7, 0x241(r31)
      stb       r6, 0x242(r31)
      stb       r7, 0x243(r31)
      stb       r7, 0x244(r31)
      sth       r4, 0x8E(r31)
      stw       r0, 0x9C(r31)
      stfs      f0, 0x3C(r31)
      stw       r7, 0x134(r31)
      stw       r7, 0x138(r31)
      stw       r7, 0x13C(r31)
      stw       r7, 0x140(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80370E0C
 * Size:	0000C4
 */
void Morimura::TScrollList::__dt(void)
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
      beq-      .loc_0xA8
      lis       r4, 0x804E
      addi      r4, r4, 0x58C0
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0x98
      lis       r4, 0x804E
      subi      r4, r4, 0x4708
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0x98
      lis       r4, 0x804F
      subi      r4, r4, 0x28A8
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0x98
      lis       r4, 0x804E
      subi      r4, r4, 0x7DC0
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      bl        0xA0748
      addi      r3, r30, 0x18
      li        r4, 0
      bl        -0x353E60
      mr        r3, r30
      li        r4, 0
      bl        0xA06E8

    .loc_0x98:
      extsh.    r0, r31
      ble-      .loc_0xA8
      mr        r3, r30
      bl        -0x34CDFC

    .loc_0xA8:
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
 * Address:	80370ED0
 * Size:	0000FC
 */
void Morimura::TZukanBase::__dt(void)
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
      beq-      .loc_0xE0
      lis       r3, 0x804E
      addi      r3, r3, 0x4054
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x10
      stw       r0, 0x18(r30)
      lwz       r3, -0x66CC(r13)
      cmplwi    r3, 0
      beq-      .loc_0x44
      bl        -0x34D95C

    .loc_0x44:
      li        r0, 0
      cmplwi    r30, 0
      stw       r0, -0x66CC(r13)
      beq-      .loc_0xD0
      lis       r3, 0x804E
      addi      r3, r3, 0x58C0
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0xD0
      lis       r3, 0x804E
      subi      r3, r3, 0x4708
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0xD0
      lis       r3, 0x804F
      subi      r3, r3, 0x28A8
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0xD0
      lis       r4, 0x804E
      mr        r3, r30
      subi      r4, r4, 0x7DC0
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      bl        0xA064C
      addi      r3, r30, 0x18
      li        r4, 0
      bl        -0x353F5C
      mr        r3, r30
      li        r4, 0
      bl        0xA05EC

    .loc_0xD0:
      extsh.    r0, r31
      ble-      .loc_0xE0
      mr        r3, r30
      bl        -0x34CEF8

    .loc_0xE0:
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
 * Address:	........
 * Size:	000044
 */
void Morimura::TZukanBase::setDebugHeapParent((JKRHeap*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80370FCC
 * Size:	00090C
 */
void Morimura::TZukanBase::doCreate((JKRArchive*))
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
      stw       r29, 0x24(r1)
      lis       r4, 0x8049
      mr        r30, r3
      addi      r31, r4, 0x2520
      li        r3, 0x148
      bl        -0x34D158
      mr.       r0, r3
      beq-      .loc_0x44
      bl        0xC3DA4
      mr        r0, r3

    .loc_0x44:
      stw       r0, 0xC8(r30)
      addi      r4, r31, 0x24
      lis       r5, 0x2
      lwz       r3, 0xC8(r30)
      lwz       r6, 0x78(r30)
      bl        -0x331A00
      lwz       r3, 0xC8(r30)
      lis       r4, 0x506E
      addi      r6, r4, 0x6577
      li        r5, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xF0(r30)
      lwz       r0, 0xF0(r30)
      cmplwi    r0, 0
      bne-      .loc_0xA0
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x102
      crclr     6, 0x6
      bl        -0x346A28

    .loc_0xA0:
      lwz       r3, 0xF0(r30)
      lfs       f1, 0x7D4(r2)
      lfs       f0, 0x7C0(r2)
      stfs      f1, 0xD4(r3)
      stfs      f0, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      li        r3, 0x38
      bl        -0x34D1F0
      mr.       r0, r3
      beq-      .loc_0xF4
      lis       r5, 0x756D
      li        r4, 0
      addi      r6, r5, 0x6D79
      li        r5, 0x64
      li        r7, 0x3
      li        r8, 0x32
      bl        0x9ADB8
      mr        r0, r3

    .loc_0xF4:
      stw       r0, 0xD8(r30)
      li        r0, 0x1
      li        r3, 0x48
      lwz       r5, -0x66F0(r13)
      lwz       r4, 0xD8(r30)
      stw       r5, 0x10(r1)
      lwz       r6, 0x1C(r4)
      lbz       r5, 0x10(r1)
      lbz       r4, 0x11(r1)
      stb       r5, 0x0(r6)
      lbz       r5, 0x12(r1)
      stb       r4, 0x1(r6)
      lbz       r4, 0x13(r1)
      stb       r5, 0x2(r6)
      stb       r4, 0x3(r6)
      lwz       r5, -0x66EC(r13)
      lwz       r4, 0xD8(r30)
      stw       r5, 0xC(r1)
      lwz       r6, 0x1C(r4)
      lbz       r5, 0xC(r1)
      lbz       r4, 0xD(r1)
      stb       r5, 0x4(r6)
      lbz       r5, 0xE(r1)
      stb       r4, 0x5(r6)
      lbz       r4, 0xF(r1)
      stb       r5, 0x6(r6)
      stb       r4, 0x7(r6)
      lwz       r5, -0x66F0(r13)
      lwz       r4, 0xD8(r30)
      stw       r5, 0x8(r1)
      lwz       r6, 0x1C(r4)
      lbz       r5, 0x8(r1)
      lbz       r4, 0x9(r1)
      stb       r5, 0x8(r6)
      lbz       r5, 0xA(r1)
      stb       r4, 0x9(r6)
      lbz       r4, 0xB(r1)
      stb       r5, 0xA(r6)
      stb       r4, 0xB(r6)
      lwz       r4, 0xD8(r30)
      stb       r0, 0x34(r4)
      bl        -0x34D2C0
      mr.       r0, r3
      beq-      .loc_0x1AC
      bl        -0x67B5C
      mr        r0, r3

    .loc_0x1AC:
      stw       r0, 0xCC(r30)
      lis       r3, 0x506E
      addi      r6, r3, 0x6577
      li        r5, 0
      lwz       r3, 0xC8(r30)
      lwz       r7, 0xCC(r30)
      bl        0xC3994
      li        r3, 0x1C
      bl        -0x34D2F4
      mr.       r0, r3
      beq-      .loc_0x1E0
      bl        -0x483A0
      mr        r0, r3

    .loc_0x1E0:
      stw       r0, 0x1E0(r30)
      li        r3, 0x10
      bl        -0x34D310
      cmplwi    r3, 0
      beq-      .loc_0x214
      lfs       f1, 0x7C0(r2)
      lfs       f0, 0x7D8(r2)
      stfs      f1, 0x0(r3)
      lfs       f1, 0x7DC(r2)
      stfs      f0, 0x4(r3)
      lfs       f0, 0x7E0(r2)
      stfs      f1, 0x8(r3)
      stfs      f0, 0xC(r3)

    .loc_0x214:
      stw       r3, 0xFC(r30)
      mr        r3, r30
      bl        0xE2E58
      stw       r3, 0x80(r30)
      lis       r4, 0x6963
      lis       r3, 0x4E73
      lwz       r7, 0xB4(r30)
      addi      r6, r4, 0x6F6E
      addi      r5, r3, 0x656C
      lwz       r3, 0x8(r7)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x130(r30)
      lwz       r0, 0x130(r30)
      cmplwi    r0, 0
      bne-      .loc_0x270
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x118
      crclr     6, 0x6
      bl        -0x346BF8

    .loc_0x270:
      lwz       r5, 0x130(r30)
      li        r0, 0
      lis       r4, 0x6C5F
      lis       r3, 0x50
      stb       r0, 0xB0(r5)
      addi      r6, r4, 0x6C75
      addi      r5, r3, 0x7365
      lwz       r3, 0xB4(r30)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x134(r30)
      lwz       r0, 0x134(r30)
      cmplwi    r0, 0
      bne-      .loc_0x2C8
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x11D
      crclr     6, 0x6
      bl        -0x346C50

    .loc_0x2C8:
      lwz       r3, 0xB4(r30)
      lis       r5, 0x6C5F
      lis       r4, 0x50
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x7275
      addi      r5, r4, 0x7365
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x138(r30)
      lwz       r0, 0x138(r30)
      cmplwi    r0, 0
      bne-      .loc_0x314
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x120
      crclr     6, 0x6
      bl        -0x346C9C

    .loc_0x314:
      lwz       r3, 0xB4(r30)
      lis       r5, 0x6C5F
      lis       r4, 0x50
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x6C6C
      addi      r5, r4, 0x7365
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x13C(r30)
      lwz       r0, 0x13C(r30)
      cmplwi    r0, 0
      bne-      .loc_0x360
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x123
      crclr     6, 0x6
      bl        -0x346CE8

    .loc_0x360:
      lwz       r3, 0xB4(r30)
      lis       r5, 0x6C5F
      lis       r4, 0x50
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x726C
      addi      r5, r4, 0x7365
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x140(r30)
      lwz       r0, 0x140(r30)
      cmplwi    r0, 0
      bne-      .loc_0x3AC
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x126
      crclr     6, 0x6
      bl        -0x346D34

    .loc_0x3AC:
      lwz       r4, 0x130(r30)
      lis       r3, 0x6C69
      addi      r6, r3, 0x7374
      li        r5, 0x4E
      lfs       f0, 0xD4(r4)
      stfs      f0, 0x174(r30)
      lwz       r3, 0x130(r30)
      lfs       f0, 0xD8(r3)
      stfs      f0, 0x178(r30)
      lwz       r3, 0x7C(r30)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      mr.       r29, r3
      bne-      .loc_0x404
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x12E
      crclr     6, 0x6
      bl        -0x346D8C

    .loc_0x404:
      mr        r3, r29
      bl        -0x3390B4
      lfs       f0, 0x0(r3)
      lis       r5, 0x6777
      lis       r4, 0x4E
      lfs       f4, 0x7E4(r2)
      stfs      f0, 0x1A0(r30)
      addi      r6, r5, 0x696E
      lfs       f0, 0x7E8(r2)
      addi      r5, r4, 0x6269
      lfs       f1, 0x4(r3)
      lfs       f2, 0x2434(r2)
      stfs      f1, 0x1A4(r30)
      lfs       f1, 0x2438(r2)
      lfs       f3, 0x8(r3)
      stfs      f3, 0x1A8(r30)
      lfs       f3, 0xC(r3)
      stfs      f3, 0x1AC(r30)
      lfs       f3, 0x1A8(r30)
      fadds     f3, f3, f4
      stfs      f3, 0x1A8(r30)
      lfs       f3, 0x1A4(r30)
      fsubs     f3, f3, f4
      stfs      f3, 0x1A4(r30)
      lfs       f3, 0x1AC(r30)
      fsubs     f0, f3, f0
      stfs      f0, 0x1AC(r30)
      lfs       f0, 0x1A0(r30)
      fmuls     f0, f0, f2
      stfs      f0, 0x1A0(r30)
      lfs       f0, 0x1A4(r30)
      fmuls     f0, f0, f1
      stfs      f0, 0x1A4(r30)
      lfs       f0, 0x1A8(r30)
      fmuls     f0, f0, f2
      stfs      f0, 0x1A8(r30)
      lfs       f0, 0x1AC(r30)
      fmuls     f0, f0, f1
      stfs      f0, 0x1AC(r30)
      lwz       r3, 0xBC(r30)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x12C(r30)
      lwz       r0, 0x12C(r30)
      cmplwi    r0, 0
      bne-      .loc_0x4DC
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x13C
      crclr     6, 0x6
      bl        -0x346E64

    .loc_0x4DC:
      lwz       r3, 0x12C(r30)
      li        r4, 0
      li        r5, 0
      bl        -0x338708
      lwz       r3, 0x12C(r30)
      li        r4, 0x2
      bl        -0x338804
      lwz       r5, 0x12C(r30)
      li        r0, 0
      lis       r4, 0x6261
      lis       r3, 0x5077
      stb       r0, 0xB0(r5)
      addi      r6, r4, 0x636B
      addi      r5, r3, 0x696E
      lwz       r3, 0xBC(r30)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x124(r30)
      lwz       r0, 0x124(r30)
      cmplwi    r0, 0
      bne-      .loc_0x550
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x143
      crclr     6, 0x6
      bl        -0x346ED8

    .loc_0x550:
      lwz       r3, 0x124(r30)
      bl        -0x3384B0
      stw       r3, 0x128(r30)
      lwz       r0, 0x128(r30)
      cmplwi    r0, 0
      bne-      .loc_0x57C
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x147
      crclr     6, 0x6
      bl        -0x346F04

    .loc_0x57C:
      lwz       r3, 0xBC(r30)
      lwz       r4, 0x128(r30)
      lwz       r3, 0x8(r3)
      bl        -0x339E90
      lwz       r3, 0xBC(r30)
      lis       r5, 0x656C
      lis       r4, 0x506D
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x5F73
      addi      r5, r4, 0x6F64
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x120(r30)
      lwz       r0, 0x120(r30)
      cmplwi    r0, 0
      bne-      .loc_0x5F0
      lwz       r3, 0x7C(r30)
      lis       r5, 0x656C
      lis       r4, 0x506D
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x5F73
      addi      r5, r4, 0x6F64
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x120(r30)

    .loc_0x5F0:
      lwz       r0, 0x120(r30)
      cmplwi    r0, 0
      bne-      .loc_0x610
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x14F
      crclr     6, 0x6
      bl        -0x346F98

    .loc_0x610:
      lwz       r3, 0x120(r30)
      li        r4, 0
      li        r5, 0
      bl        -0x33883C
      lwz       r3, 0x120(r30)
      li        r4, 0x4
      bl        -0x338938
      lwz       r3, 0xBC(r30)
      lis       r5, 0x6261
      lis       r4, 0x5077
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x636B
      addi      r5, r4, 0x696E
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r4, 0x4
      bl        -0x338968
      lwz       r3, 0x124(r30)
      li        r4, 0x4
      bl        -0x338974
      lwz       r3, 0x128(r30)
      li        r4, 0x4
      bl        -0x338980
      lbz       r0, -0x6760(r13)
      lwz       r29, 0x120(r30)
      cmplwi    r0, 0
      beq-      .loc_0x6A4
      mr        r3, r29
      addi      r4, r31, 0x30
      lwz       r12, 0x0(r29)
      li        r5, 0
      lwz       r12, 0x114(r12)
      mtctr     r12
      bctrl
      b         .loc_0x6D8

    .loc_0x6A4:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xB4(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r3)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      li        r5, 0
      lwz       r4, 0x20(r4)
      lwz       r12, 0x110(r12)
      mtctr     r12
      bctrl

    .loc_0x6D8:
      li        r0, 0x1
      mr        r3, r29
      stb       r0, 0xB0(r29)
      bl        -0x339390
      lwz       r7, 0x0(r3)
      lis       r5, 0x656C
      lwz       r0, 0x4(r3)
      lis       r4, 0x506D
      addi      r6, r5, 0x5F6C
      stw       r7, 0x144(r30)
      addi      r5, r4, 0x6F64
      stw       r0, 0x148(r30)
      lwz       r4, 0x8(r3)
      lwz       r0, 0xC(r3)
      stw       r4, 0x14C(r30)
      stw       r0, 0x150(r30)
      lwz       r3, 0x7C(r30)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r6, 0xBC(r30)
      mr        r0, r3
      lis       r5, 0x656C
      lis       r4, 0x506D
      lwz       r3, 0x8(r6)
      mr        r29, r0
      addi      r6, r5, 0x5F6C
      addi      r5, r4, 0x6F64
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0x794
      lwz       r3, 0xBC(r30)
      lis       r5, 0x656C
      lis       r4, 0x506D
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x5F6C
      addi      r5, r4, 0x6F64
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      mr        r29, r3

    .loc_0x794:
      cmplwi    r29, 0
      bne-      .loc_0x7B0
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x16B
      crclr     6, 0x6
      bl        -0x347138

    .loc_0x7B0:
      mr        r3, r29
      bl        -0x339460
      lwz       r4, 0x0(r3)
      lwz       r0, 0x4(r3)
      stw       r4, 0x154(r30)
      stw       r0, 0x158(r30)
      lwz       r4, 0x8(r3)
      lwz       r0, 0xC(r3)
      stw       r4, 0x15C(r30)
      stw       r0, 0x160(r30)
      lwz       r3, 0x120(r30)
      lfs       f1, 0xD8(r3)
      lfs       f0, 0xD4(r3)
      stfs      f0, 0x164(r30)
      stfs      f1, 0x168(r30)
      lfs       f1, 0xD8(r29)
      lfs       f0, 0xD4(r29)
      stfs      f0, 0x16C(r30)
      stfs      f1, 0x170(r30)
      lwz       r3, 0xB4(r30)
      lwz       r29, 0x8(r3)
      cmplwi    r29, 0
      bne-      .loc_0x820
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x177
      crclr     6, 0x6
      bl        -0x3471A8

    .loc_0x820:
      li        r0, -0x32
      mr        r3, r30
      stw       r0, 0x220(r30)
      mr        r4, r29
      lwz       r12, 0x0(r30)
      lwz       r12, 0xB8(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x88(r30)
      li        r0, 0x1
      li        r3, 0x30
      lwz       r5, 0x0(r4)
      lwz       r4, 0x4(r4)
      lwz       r5, 0x4(r5)
      lwz       r4, 0x4(r4)
      lfs       f0, 0xD8(r5)
      lfs       f1, 0xD8(r4)
      fsubs     f31, f1, f0
      stb       r0, 0xB0(r5)
      bl        -0x34D994
      mr.       r0, r3
      beq-      .loc_0x880
      bl        0x30910
      mr        r0, r3

    .loc_0x880:
      stw       r0, 0x84(r30)
      lis       r3, 0x8051
      addi      r4, r3, 0x401C
      mr        r3, r30
      lwz       r5, 0x84(r30)
      stfs      f31, 0x18(r5)
      lwz       r5, 0x84(r30)
      lfs       f0, 0x0(r4)
      stfs      f0, 0x0(r5)
      lfs       f0, 0x4(r4)
      stfs      f0, 0x4(r5)
      lfs       f0, 0x8(r4)
      stfs      f0, 0x8(r5)
      lfs       f0, 0xC(r4)
      stfs      f0, 0xC(r5)
      lfs       f0, 0x10(r4)
      stfs      f0, 0x10(r5)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x80(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x84(r12)
      mtctr     r12
      bctrl
      psq_l     f31,0x38(r1),0,0
      lwz       r0, 0x44(r1)
      lfd       f31, 0x30(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r29, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	803718D8
 * Size:	000FC8
 */
void Morimura::TZukanBase::doUpdate(void)
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
      stw       r31, 0x5C(r1)
      stw       r30, 0x58(r1)
      stw       r29, 0x54(r1)
      stw       r28, 0x50(r1)
      mr        r30, r3
      lbz       r0, 0x244(r3)
      cmplwi    r0, 0
      bne-      .loc_0x4C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x98(r12)
      mtctr     r12
      bctrl

    .loc_0x4C:
      lbz       r0, 0x244(r30)
      cmplwi    r0, 0
      bne-      .loc_0x194
      lwz       r0, 0x198(r30)
      cmpwi     r0, 0x2
      bge-      .loc_0x194
      li        r3, 0
      stw       r3, 0x198(r30)
      lbz       r0, 0x218(r30)
      cmplwi    r0, 0
      beq-      .loc_0xB4
      li        r0, 0x1
      stw       r0, 0x198(r30)
      stb       r3, 0x218(r30)
      stb       r3, 0x217(r30)
      lbz       r0, 0x216(r30)
      cmplwi    r0, 0
      beq-      .loc_0xA4
      lwz       r3, -0x67A8(r13)
      li        r4, 0x180F
      li        r5, 0
      bl        -0x39348

    .loc_0xA4:
      li        r0, 0
      stb       r0, 0x216(r30)
      stw       r0, 0x220(r30)
      b         .loc_0x194

    .loc_0xB4:
      lwz       r0, 0x94(r30)
      lwz       r3, 0x88(r30)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x30C20
      lwz       r12, 0x0(r30)
      mr        r4, r3
      mr        r3, r30
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x14C
      lwz       r0, 0x94(r30)
      lwz       r3, 0x88(r30)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x30BEC
      lwz       r0, 0x224(r30)
      cmpw      r0, r3
      bne-      .loc_0x14C
      lbz       r0, 0x217(r30)
      cmplwi    r0, 0
      bne-      .loc_0x194
      lwz       r3, 0x220(r30)
      lha       r0, -0x7A70(r13)
      cmpw      r3, r0
      ble-      .loc_0x140
      li        r3, 0x1
      stw       r3, 0x198(r30)
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0x194
      stb       r3, 0x217(r30)
      b         .loc_0x194

    .loc_0x140:
      addi      r0, r3, 0x1
      stw       r0, 0x220(r30)
      b         .loc_0x194

    .loc_0x14C:
      lwz       r0, 0x94(r30)
      lwz       r3, 0x88(r30)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x30B88
      stw       r3, 0x224(r30)
      li        r0, 0
      stb       r0, 0x217(r30)
      lbz       r0, 0x216(r30)
      cmplwi    r0, 0
      beq-      .loc_0x188
      lwz       r3, -0x67A8(r13)
      li        r4, 0x180F
      li        r5, 0
      bl        -0x3942C

    .loc_0x188:
      li        r0, 0
      stb       r0, 0x216(r30)
      stw       r0, 0x220(r30)

    .loc_0x194:
      lbz       r0, 0x216(r30)
      cmplwi    r0, 0
      beq-      .loc_0x214
      lfs       f0, 0x7EC(r2)
      lfs       f1, 0x200(r30)
      fcmpu     cr0, f0, f1
      beq-      .loc_0x24C
      lfs       f0, 0x7F0(r2)
      fmuls     f0, f1, f0
      stfs      f0, 0x200(r30)
      lwz       r3, 0x12C(r30)
      cmplwi    r3, 0
      beq-      .loc_0x1D0
      li        r0, 0x1
      stb       r0, 0xB0(r3)

    .loc_0x1D0:
      lfs       f1, 0x200(r30)
      lfs       f0, 0x7EC(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x24C
      stfs      f0, 0x200(r30)
      lfs       f1, 0x7F4(r2)
      lwz       r3, 0x1E0(r30)
      lfs       f2, 0x7F8(r2)
      lfs       f3, 0x7D0(r2)
      lfs       f4, 0x7C0(r2)
      bl        -0x48BF8
      lwz       r3, 0x12C(r30)
      cmplwi    r3, 0
      beq-      .loc_0x24C
      li        r0, 0x1
      stb       r0, 0xB0(r3)
      b         .loc_0x24C

    .loc_0x214:
      lfs       f2, 0x200(r30)
      lfs       f1, 0x7FC(r2)
      lfs       f0, 0x7C4(r2)
      fmuls     f1, f2, f1
      stfs      f1, 0x200(r30)
      lfs       f1, 0x200(r30)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x24C
      stfs      f0, 0x200(r30)
      lwz       r3, 0x12C(r30)
      cmplwi    r3, 0
      beq-      .loc_0x24C
      li        r0, 0
      stb       r0, 0xB0(r3)

    .loc_0x24C:
      lbz       r0, 0x244(r30)
      li        r31, 0
      cmplwi    r0, 0
      bne-      .loc_0x27C
      lbz       r0, 0x45(r30)
      cmplwi    r0, 0
      bne-      .loc_0x27C
      lwz       r0, 0x198(r30)
      cmpwi     r0, 0x2
      bge-      .loc_0x27C
      li        r0, 0x1
      stb       r0, 0x21A(r30)

    .loc_0x27C:
      lbz       r0, 0x244(r30)
      cmplwi    r0, 0
      bne-      .loc_0x710
      lbz       r0, 0x45(r30)
      cmplwi    r0, 0
      beq-      .loc_0x710
      lwz       r0, 0x198(r30)
      cmpwi     r0, 0x2
      bge-      .loc_0x710
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xDC(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x710
      li        r4, 0
      stb       r4, 0x21A(r30)
      lbz       r0, 0x216(r30)
      cmplwi    r0, 0
      bne-      .loc_0x4F8
      lwz       r3, 0xDC(r30)
      lwz       r0, 0x20(r3)
      cmpwi     r0, 0
      bne-      .loc_0x4F8
      lwz       r5, 0x80(r30)
      lwz       r3, 0x18(r5)
      rlwinm.   r0,r3,0,4,4
      beq-      .loc_0x354
      lbz       r0, 0x240(r30)
      cmplwi    r0, 0
      beq-      .loc_0x348
      lbz       r0, 0x242(r30)
      cmplwi    r0, 0
      bne-      .loc_0x348
      lwz       r0, 0x94(r30)
      cmpwi     r0, 0
      ble-      .loc_0x320
      lwz       r3, 0x84(r30)
      bl        0x305B0
      b         .loc_0x4F8

    .loc_0x320:
      lbz       r0, 0x215(r30)
      cmplwi    r0, 0
      bne-      .loc_0x4F8
      li        r0, 0x1
      li        r4, 0x1807
      stb       r0, 0x215(r30)
      li        r5, 0
      lwz       r3, -0x67A8(r13)
      bl        -0x395E8
      b         .loc_0x4F8

    .loc_0x348:
      lwz       r3, 0x84(r30)
      bl        0x3057C
      b         .loc_0x4F8

    .loc_0x354:
      rlwinm.   r0,r3,0,5,5
      beq-      .loc_0x44C
      lbz       r0, 0x240(r30)
      cmplwi    r0, 0
      beq-      .loc_0x440
      lbz       r0, 0x242(r30)
      cmplwi    r0, 0
      bne-      .loc_0x440
      lwz       r0, 0x234(r30)
      li        r29, 0x1
      cmpwi     r0, 0
      bge-      .loc_0x3DC
      lwz       r0, 0x238(r30)
      lis       r3, 0x4330
      lwz       r4, 0x94(r30)
      xoris     r0, r0, 0x8000
      stw       r3, 0x30(r1)
      xoris     r4, r4, 0x8000
      lfd       f3, 0x820(r2)
      stw       r0, 0x34(r1)
      lfs       f1, 0x800(r2)
      lfd       f0, 0x30(r1)
      stw       r4, 0x2C(r1)
      fsubs     f2, f0, f3
      lfs       f0, 0x7C4(r2)
      stw       r3, 0x28(r1)
      fdivs     f1, f2, f1
      lfd       f2, 0x28(r1)
      fsubs     f2, f2, f3
      fsubs     f0, f1, f0
      fcmpo     cr0, f2, f0
      bge-      .loc_0x404
      li        r29, 0
      b         .loc_0x404

    .loc_0x3DC:
      lwz       r0, 0x94(r30)
      lwz       r3, 0x88(r30)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x30950
      lwz       r4, 0x230(r30)
      subi      r0, r4, 0x1
      cmpw      r3, r0
      bge-      .loc_0x404
      li        r29, 0

    .loc_0x404:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0x434
      lbz       r0, 0x215(r30)
      cmplwi    r0, 0
      bne-      .loc_0x4F8
      li        r0, 0x1
      li        r4, 0x1807
      stb       r0, 0x215(r30)
      li        r5, 0
      lwz       r3, -0x67A8(r13)
      bl        -0x396D4
      b         .loc_0x4F8

    .loc_0x434:
      lwz       r3, 0x84(r30)
      bl        0x304FC
      b         .loc_0x4F8

    .loc_0x440:
      lwz       r3, 0x84(r30)
      bl        0x304F0
      b         .loc_0x4F8

    .loc_0x44C:
      lwz       r3, 0x1C(r5)
      rlwinm.   r0,r3,0,6,6
      beq-      .loc_0x4B8
      lwz       r0, 0x94(r30)
      lwz       r3, 0x88(r30)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      lwz       r0, 0xC(r3)
      cmpwi     r0, 0
      bne-      .loc_0x4F8
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xE8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x4F8
      lwz       r3, -0x6638(r13)
      addi      r0, r3, 0x1
      cmpwi     r0, 0x2
      stw       r0, -0x6638(r13)
      ble-      .loc_0x4B0
      li        r0, 0x2
      stw       r0, -0x6638(r13)
      b         .loc_0x4F8

    .loc_0x4B0:
      li        r31, 0x1
      b         .loc_0x4F8

    .loc_0x4B8:
      rlwinm.   r0,r3,0,7,7
      beq-      .loc_0x4F8
      lwz       r0, 0x94(r30)
      lwz       r3, 0x88(r30)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      lwz       r0, 0xC(r3)
      cmpwi     r0, 0
      bne-      .loc_0x4F8
      lwz       r3, -0x6638(r13)
      subic.    r0, r3, 0x1
      stw       r0, -0x6638(r13)
      bge-      .loc_0x4F4
      stw       r4, -0x6638(r13)
      b         .loc_0x4F8

    .loc_0x4F4:
      li        r31, 0x1

    .loc_0x4F8:
      lwz       r3, 0x84(r30)
      lwz       r0, 0x20(r3)
      cmpwi     r0, 0
      bne-      .loc_0x710
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0x710
      lwz       r4, 0x80(r30)
      lwz       r3, 0x1C(r4)
      rlwinm.   r0,r3,0,21,21
      beq-      .loc_0x534
      li        r0, 0x1
      mr        r3, r30
      stw       r0, 0x198(r30)
      bl        0x2460
      b         .loc_0x710

    .loc_0x534:
      rlwinm.   r0,r3,0,20,20
      beq-      .loc_0x550
      li        r0, 0x1
      mr        r3, r30
      stw       r0, 0x198(r30)
      bl        0x2558
      b         .loc_0x710

    .loc_0x550:
      rlwinm.   r0,r3,0,25,26
      beq-      .loc_0x5A8
      lbz       r0, 0x216(r30)
      cmplwi    r0, 0
      beq-      .loc_0x57C
      lwz       r3, -0x67A8(r13)
      li        r4, 0x180F
      li        r5, 0
      bl        -0x39818
      li        r0, 0
      stb       r0, 0x216(r30)

    .loc_0x57C:
      lwz       r3, 0xDC(r30)
      lwz       r0, 0x20(r3)
      cmpwi     r0, 0
      beq-      .loc_0x710
      lwz       r3, -0x67A8(r13)
      li        r4, 0x1811
      li        r5, 0
      bl        -0x39840
      lwz       r3, 0xDC(r30)
      bl        0xA4A0
      b         .loc_0x710

    .loc_0x5A8:
      rlwinm.   r0,r3,0,22,22
      beq-      .loc_0x5BC
      mr        r3, r30
      bl        0x261C
      b         .loc_0x710

    .loc_0x5BC:
      rlwinm.   r0,r3,0,23,23
      beq-      .loc_0x650
      li        r0, 0x1
      lfs       f0, 0x7CC(r2)
      stw       r0, 0x198(r30)
      lfs       f1, 0x1FC(r30)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x600
      lbz       r0, 0x216(r30)
      cmplwi    r0, 0
      bne-      .loc_0x5F8
      lwz       r3, -0x67A8(r13)
      li        r4, 0x180F
      li        r5, 0
      bl        -0x3989C

    .loc_0x5F8:
      li        r0, 0x1
      stb       r0, 0x216(r30)

    .loc_0x600:
      lwz       r3, 0xDC(r30)
      lwz       r0, 0x20(r3)
      cmpwi     r0, 0
      beq-      .loc_0x710
      lwz       r0, 0x94(r30)
      lwz       r3, 0x88(r30)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x306C4
      lwz       r12, 0x0(r30)
      mr        r4, r3
      mr        r3, r30
      lwz       r12, 0xC8(r12)
      mtctr     r12
      bctrl
      mr        r5, r3
      mr        r3, r30
      mr        r6, r4
      bl        0x287C
      b         .loc_0x710

    .loc_0x650:
      lwz       r3, 0xDC(r30)
      lwz       r0, 0x20(r3)
      cntlzw    r0, r0
      rlwinm.   r0,r0,27,24,31
      bne-      .loc_0x710
      lfs       f1, 0x4C(r4)
      lfs       f0, 0x7CC(r2)
      fmr       f30, f1
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      beq-      .loc_0x68C
      lfs       f0, 0x804(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x710

    .loc_0x68C:
      lfs       f0, 0x804(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x6A0
      lfs       f30, 0x808(r2)

    .loc_0x6A0:
      lfs       f0, 0x7CC(r2)
      fcmpo     cr0, f30, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x6B4
      lfs       f30, 0x7C4(r2)

    .loc_0x6B4:
      fmr       f1, f30
      bl        0xA3B8
      lwz       r3, 0xDC(r30)
      bl        0xA3E8
      lfs       f0, 0x7C0(r2)
      fcmpu     cr0, f0, f1
      beq-      .loc_0x6E4
      lwz       r3, 0xDC(r30)
      bl        0xA3D4
      lfs       f0, 0x7C4(r2)
      fcmpu     cr0, f0, f1
      bne-      .loc_0x6E8

    .loc_0x6E4:
      lfs       f30, 0x7C0(r2)

    .loc_0x6E8:
      lfs       f0, 0x7C0(r2)
      fcmpu     cr0, f0, f30
      beq-      .loc_0x704
      lwz       r3, -0x67A8(r13)
      li        r4, 0x1075
      li        r5, 0
      bl        -0x399A8

    .loc_0x704:
      fmr       f1, f30
      lwz       r3, 0xDC(r30)
      bl        0xA5B4

    .loc_0x710:
      lbz       r3, 0x215(r30)
      cmplwi    r3, 0
      beq-      .loc_0x738
      addi      r0, r3, 0x1
      stb       r0, 0x215(r30)
      lbz       r0, 0x215(r30)
      cmplwi    r0, 0xF
      ble-      .loc_0x738
      li        r0, 0
      stb       r0, 0x215(r30)

    .loc_0x738:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xB4(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x18(r3)
      lwz       r0, 0x8(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0x798
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      bne-      .loc_0x798
      lwz       r0, 0x198(r30)
      cmpwi     r0, 0x2
      bge-      .loc_0x798
      li        r0, 0x2
      mr        r3, r30
      stw       r0, 0x198(r30)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      li        r4, 0
      bl        0xDFF24

    .loc_0x798:
      lbz       r0, 0x216(r30)
      cmplwi    r0, 0
      bne-      .loc_0x7C8
      lwz       r3, 0xDC(r30)
      lwz       r0, 0x20(r3)
      cmpwi     r0, 0
      bne-      .loc_0x7C8
      lwz       r3, 0xE4(r30)
      lfs       f1, 0x7EC(r2)
      lwz       r3, 0x34(r3)
      bl        -0x6C9F0
      b         .loc_0x7D8

    .loc_0x7C8:
      lwz       r3, 0xE4(r30)
      lfs       f1, 0x7C0(r2)
      lwz       r3, 0x34(r3)
      bl        -0x6CA04

    .loc_0x7D8:
      lbz       r0, 0x240(r30)
      cmplwi    r0, 0
      beq-      .loc_0x800
      lwz       r0, 0x230(r30)
      cmpwi     r0, 0x3
      bgt-      .loc_0x800
      lwz       r3, 0xE4(r30)
      lfs       f1, 0x7C0(r2)
      lwz       r3, 0x34(r3)
      bl        -0x6CA2C

    .loc_0x800:
      lwz       r3, 0xB8(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xB4(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x7C(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xDC(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xBC(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xC0(r30)
      cmplwi    r3, 0
      beq-      .loc_0x880
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0x880:
      lwz       r3, 0xC4(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xC8(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lfs       f2, -0x7A5C(r13)
      lfs       f1, 0x2434(r2)
      lfs       f0, 0x2438(r2)
      fmuls     f1, f2, f1
      lwz       r3, 0xC8(r30)
      fmuls     f0, f2, f0
      stfs      f1, 0x138(r3)
      stfs      f0, 0x13C(r3)
      lwz       r3, 0xD8(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      bl        0x31094
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x8F4
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x9B4

    .loc_0x8F4:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x84(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x67A8(r13)
      li        r4, 0x1802
      li        r5, 0
      bl        -0x39BBC
      lwz       r0, 0x94(r30)
      lwz       r3, 0x88(r30)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      lwz       r0, 0xC(r3)
      cmpwi     r0, 0
      beq-      .loc_0x99C
      li        r28, 0
      li        r29, 0
      b         .loc_0x98C

    .loc_0x940:
      lwz       r3, 0x88(r30)
      lwzx      r3, r3, r29
      bl        0x303F4
      lwz       r0, 0x94(r30)
      mr        r31, r3
      lwz       r3, 0x88(r30)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x303DC
      cmpw      r3, r31
      bne-      .loc_0x984
      lwz       r3, 0x88(r30)
      lfs       f1, 0x7CC(r2)
      lwzx      r3, r3, r29
      lwz       r3, 0x20(r3)
      lwz       r3, 0x4(r3)
      bl        0x3093C

    .loc_0x984:
      addi      r29, r29, 0x4
      addi      r28, r28, 0x1

    .loc_0x98C:
      lha       r0, 0x8E(r30)
      cmpw      r28, r0
      blt+      .loc_0x940
      b         .loc_0x9B4

    .loc_0x99C:
      lwz       r0, -0x6638(r13)
      lwz       r3, 0x20(r3)
      rlwinm    r0,r0,2,0,29
      lfs       f1, 0x7C4(r2)
      lwzx      r3, r3, r0
      bl        0x3090C

    .loc_0x9B4:
      lfs       f1, 0x200(r30)
      lwz       r3, 0x144(r30)
      lwz       r0, 0x148(r30)
      lfs       f0, 0x7C4(r2)
      stw       r3, 0x14(r1)
      fsubs     f31, f1, f0
      stw       r0, 0x18(r1)
      lwz       r3, 0x14C(r30)
      lwz       r0, 0x150(r30)
      stw       r3, 0x1C(r1)
      stw       r0, 0x20(r1)
      lwz       r3, 0x1E0(r30)
      bl        -0x49338
      lfs       f1, 0x154(r30)
      addi      r4, r1, 0x14
      lfs       f0, 0x144(r30)
      lfs       f5, 0x7C4(r2)
      fsubs     f0, f1, f0
      lfs       f3, 0x14(r1)
      lfs       f2, 0x18(r1)
      lfs       f1, 0x1C(r1)
      fmuls     f4, f31, f0
      lfs       f0, 0x20(r1)
      fmadds    f3, f5, f4, f3
      stfs      f3, 0x14(r1)
      lfs       f4, 0x158(r30)
      lfs       f3, 0x148(r30)
      fsubs     f3, f4, f3
      fmuls     f3, f31, f3
      fmadds    f2, f5, f3, f2
      stfs      f2, 0x18(r1)
      lfs       f3, 0x15C(r30)
      lfs       f2, 0x14C(r30)
      fsubs     f2, f3, f2
      fmuls     f2, f31, f2
      fmadds    f1, f5, f2, f1
      stfs      f1, 0x1C(r1)
      lfs       f2, 0x160(r30)
      lfs       f1, 0x150(r30)
      fsubs     f1, f2, f1
      fmuls     f1, f31, f1
      fmadds    f0, f5, f1, f0
      stfs      f0, 0x20(r1)
      lwz       r3, 0x120(r30)
      bl        -0x33A404
      lwz       r3, 0x124(r30)
      addi      r4, r1, 0x14
      bl        -0x33A410
      lwz       r3, 0x128(r30)
      addi      r4, r1, 0x14
      bl        -0x33A41C
      lwz       r3, 0x12C(r30)
      cmplwi    r3, 0
      beq-      .loc_0xAB4
      lfs       f1, 0x7C4(r2)
      lfs       f0, 0x7CC(r2)
      fadds     f1, f1, f31
      fmuls     f1, f1, f0
      stfs      f1, 0xCC(r3)
      stfs      f1, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0xAB4:
      lbz       r0, 0x21C(r30)
      lfs       f30, 0x80C(r2)
      cmplwi    r0, 0
      beq-      .loc_0xAD0
      lwz       r3, 0xFC(r30)
      bl        -0x704E0
      fmr       f30, f1

    .loc_0xAD0:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xDC(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB0C
      lfs       f0, 0x80C(r2)
      fcmpo     cr0, f30, f0
      cror      2, 0, 0x2
      bne-      .loc_0xB14
      li        r0, 0
      fmr       f30, f0
      stb       r0, 0x21C(r30)
      b         .loc_0xB14

    .loc_0xB0C:
      li        r0, 0x1
      stb       r0, 0x21C(r30)

    .loc_0xB14:
      lfs       f0, 0x810(r2)
      lwz       r3, 0xC4(r30)
      fmuls     f0, f0, f30
      lwz       r3, 0x8(r3)
      fctiwz    f0, f0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      stfd      f0, 0x30(r1)
      lwz       r4, 0x34(r1)
      mtctr     r12
      bctrl
      lwz       r4, 0xD8(r30)
      lwz       r3, 0xF0(r30)
      lwz       r0, 0x20(r4)
      lwz       r12, 0x0(r3)
      stw       r0, 0x10(r1)
      lwz       r12, 0x24(r12)
      lbz       r4, 0x13(r1)
      mtctr     r12
      bctrl
      li        r0, 0
      addi      r4, r1, 0x8
      stb       r0, 0x13(r1)
      lwz       r0, 0x10(r1)
      stw       r0, 0x8(r1)
      lwz       r3, 0xF0(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0xDC(r30)
      lwz       r0, 0x10(r31)
      cmpwi     r0, 0x1
      bge-      .loc_0xBB4
      lis       r3, 0x8049
      li        r4, 0x58
      addi      r3, r3, 0x255C
      li        r5, 0
      crclr     6, 0x6
      bl        -0x347E48

    .loc_0xBB4:
      lwz       r3, 0x4(r31)
      addi      r5, r1, 0xC
      li        r4, 0
      lwz       r3, 0x4(r3)
      lwz       r3, 0x14(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xDC(r30)
      lbz       r4, 0xF(r1)
      lwz       r3, 0x44(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x217(r30)
      cmplwi    r0, 0
      bne-      .loc_0xC28
      lfs       f2, 0x1FC(r30)
      lfs       f1, 0x7E0(r2)
      lfs       f0, 0x7C4(r2)
      fadds     f1, f2, f1
      stfs      f1, 0x1FC(r30)
      lfs       f1, 0x1FC(r30)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xC50
      stfs      f0, 0x1FC(r30)
      b         .loc_0xC50

    .loc_0xC28:
      lfs       f2, 0x1FC(r30)
      lfs       f1, 0x814(r2)
      lfs       f0, 0x818(r2)
      fmuls     f1, f2, f1
      stfs      f1, 0x1FC(r30)
      lfs       f1, 0x1FC(r30)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xC50
      lfs       f0, 0x7C0(r2)
      stfs      f0, 0x1FC(r30)

    .loc_0xC50:
      lwz       r3, 0xDC(r30)
      lwz       r0, 0x20(r3)
      cntlzw    r0, r0
      rlwinm.   r0,r0,27,24,31
      bne-      .loc_0xD54
      bl        0x9E44
      lfs       f0, 0x7F4(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xC80
      lfs       f0, 0x7E4(r2)
      fmuls     f30, f1, f0
      b         .loc_0xC84

    .loc_0xC80:
      lfs       f30, 0x7C4(r2)

    .loc_0xC84:
      lwz       r3, 0xDC(r30)
      lis       r5, 0x7961
      lis       r4, 0x6D
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x6A69
      addi      r5, r4, 0x675F
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x810(r2)
      lwz       r12, 0x0(r3)
      fmuls     f30, f0, f30
      lwz       r12, 0x24(r12)
      fctiwz    f0, f30
      stfd      f0, 0x30(r1)
      lwz       r4, 0x34(r1)
      mtctr     r12
      bctrl
      lwz       r3, 0xDC(r30)
      lis       r5, 0x5F63
      lis       r4, 0x5062
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x7531
      addi      r5, r4, 0x746E
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      fctiwz    f0, f30
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      stfd      f0, 0x28(r1)
      lwz       r4, 0x2C(r1)
      mtctr     r12
      bctrl
      lwz       r3, 0x104(r30)
      fctiwz    f0, f30
      lwz       r12, 0x0(r3)
      stfd      f0, 0x38(r1)
      lwz       r12, 0x24(r12)
      lwz       r4, 0x3C(r1)
      mtctr     r12
      bctrl
      lwz       r3, 0x100(r30)
      fctiwz    f0, f30
      lwz       r12, 0x0(r3)
      stfd      f0, 0x40(r1)
      lwz       r12, 0x24(r12)
      lwz       r4, 0x44(r1)
      mtctr     r12
      bctrl

    .loc_0xD54:
      lbz       r0, 0x21A(r30)
      cmplwi    r0, 0
      beq-      .loc_0xD68
      lfs       f0, 0x7C4(r2)
      stfs      f0, 0x1FC(r30)

    .loc_0xD68:
      lfs       f1, 0x810(r2)
      lfs       f0, 0x1FC(r30)
      lwz       r3, 0xBC(r30)
      fmuls     f0, f1, f0
      lwz       r3, 0x8(r3)
      fctiwz    f0, f0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      stfd      f0, 0x40(r1)
      lwz       r4, 0x44(r1)
      mtctr     r12
      bctrl
      lfs       f1, 0x7C4(r2)
      lfs       f0, 0x1FC(r30)
      lwz       r3, 0x120(r30)
      fsubs     f0, f1, f0
      lfs       f1, 0x810(r2)
      lwz       r12, 0x0(r3)
      fmuls     f0, f1, f0
      lwz       r12, 0x24(r12)
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r4, 0x3C(r1)
      mtctr     r12
      bctrl
      lfs       f1, 0x7C4(r2)
      lfs       f0, 0x1FC(r30)
      lwz       r3, 0x114(r30)
      fsubs     f0, f1, f0
      lfs       f1, 0x810(r2)
      lwz       r12, 0x0(r3)
      fmuls     f0, f1, f0
      lwz       r12, 0x24(r12)
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r4, 0x34(r1)
      mtctr     r12
      bctrl
      mr        r3, r30
      li        r4, 0xFF
      lwz       r12, 0x0(r30)
      lwz       r12, 0xD8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x164(r30)
      lfs       f0, 0x16C(r30)
      lfs       f3, 0x168(r30)
      fsubs     f1, f0, f2
      lfs       f0, 0x170(r30)
      lwz       r3, 0x120(r30)
      fsubs     f0, f0, f3
      fmadds    f30, f31, f1, f2
      fmadds    f31, f31, f0, f3
      stfs      f30, 0xD4(r3)
      stfs      f31, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x124(r30)
      stfs      f30, 0xD4(r3)
      stfs      f31, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x128(r30)
      stfs      f30, 0xD4(r3)
      stfs      f31, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x198(r30)
      cmpwi     r0, 0x1
      bne-      .loc_0xEDC
      lwz       r0, 0x94(r30)
      lwz       r3, 0x88(r30)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2FE3C
      lwz       r12, 0x0(r30)
      mr        r4, r3
      mr        r3, r30
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x19C(r30)
      lbz       r0, 0x17C(r30)
      cmplwi    r0, 0
      bne-      .loc_0xEDC
      li        r0, -0x1
      stw       r0, 0x19C(r30)

    .loc_0xEDC:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x9C(r12)
      mtctr     r12
      bctrl
      lbz       r0, -0x6634(r13)
      cmplwi    r0, 0
      beq-      .loc_0xF34
      li        r0, 0
      lis       r3, 0x8051
      stb       r0, -0x6634(r13)
      lfsu      f0, 0x401C(r3)
      lwz       r4, 0x84(r30)
      stfs      f0, 0x0(r4)
      lfs       f0, 0x4(r3)
      stfs      f0, 0x4(r4)
      lfs       f0, 0x8(r3)
      stfs      f0, 0x8(r4)
      lfs       f0, 0xC(r3)
      stfs      f0, 0xC(r4)
      lfs       f0, 0x10(r3)
      stfs      f0, 0x10(r4)

    .loc_0xF34:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xB4(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0
      beq-      .loc_0xF94
      lbz       r0, 0x45(r30)
      cmplwi    r0, 0
      beq-      .loc_0xF94
      lwz       r0, 0x94(r30)
      lwz       r3, 0x88(r30)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2FD74
      mr        r31, r3
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xB4(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x1C(r3)
      stw       r31, 0x0(r3)

    .loc_0xF94:
      li        r3, 0
      psq_l     f31,0x78(r1),0,0
      lfd       f31, 0x70(r1)
      psq_l     f30,0x68(r1),0,0
      lfd       f30, 0x60(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      lwz       r29, 0x54(r1)
      lwz       r0, 0x84(r1)
      lwz       r28, 0x50(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	803728A0
 * Size:	000008
 */
void Morimura::TScrollList::isListShow((int))
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	803728A8
 * Size:	0002B8
 */
void Morimura::TZukanBase::updateButtonAlpha((unsigned char))
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
      lbz       r0, 0x219(r3)
      cmplwi    r0, 0
      beq-      .loc_0x3C
      lfs       f1, 0x1F0(r30)
      lfs       f0, 0x7F4(r2)
      fsubs     f0, f1, f0
      stfs      f0, 0x1F0(r30)
      b         .loc_0x6C

    .loc_0x3C:
      lbz       r0, 0x17C(r30)
      cmplwi    r0, 0
      beq-      .loc_0x5C
      lfs       f1, 0x1F0(r30)
      lfs       f0, 0x7F4(r2)
      fadds     f0, f1, f0
      stfs      f0, 0x1F0(r30)
      b         .loc_0x6C

    .loc_0x5C:
      lfs       f1, 0x1F0(r30)
      lfs       f0, 0x7F4(r2)
      fsubs     f0, f1, f0
      stfs      f0, 0x1F0(r30)

    .loc_0x6C:
      lbz       r0, 0x17C(r30)
      cmplwi    r0, 0
      beq-      .loc_0xCC
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xBC(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xA8
      lfs       f1, 0x1F8(r30)
      lfs       f0, 0x7F4(r2)
      fadds     f0, f1, f0
      stfs      f0, 0x1F8(r30)
      b         .loc_0xB8

    .loc_0xA8:
      lfs       f1, 0x1F8(r30)
      lfs       f0, 0x7F4(r2)
      fsubs     f0, f1, f0
      stfs      f0, 0x1F8(r30)

    .loc_0xB8:
      lfs       f1, 0x1F4(r30)
      lfs       f0, 0x7F4(r2)
      fadds     f0, f1, f0
      stfs      f0, 0x1F4(r30)
      b         .loc_0xE8

    .loc_0xCC:
      lfs       f0, 0x1F4(r30)
      lfs       f1, 0x7F4(r2)
      fsubs     f0, f0, f1
      stfs      f0, 0x1F4(r30)
      lfs       f0, 0x1F8(r30)
      fsubs     f0, f0, f1
      stfs      f0, 0x1F8(r30)

    .loc_0xE8:
      lfs       f1, 0x1F4(r30)
      lfs       f0, 0x7C4(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xFC
      stfs      f0, 0x1F4(r30)

    .loc_0xFC:
      lfs       f1, 0x1F4(r30)
      lfs       f0, 0x7C0(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x110
      stfs      f0, 0x1F4(r30)

    .loc_0x110:
      lfs       f1, 0x1F8(r30)
      lfs       f0, 0x7C4(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x124
      stfs      f0, 0x1F8(r30)

    .loc_0x124:
      lfs       f1, 0x1F8(r30)
      lfs       f0, 0x7C0(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x138
      stfs      f0, 0x1F8(r30)

    .loc_0x138:
      lfs       f1, 0x1F0(r30)
      lfs       f0, 0x7C4(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x14C
      stfs      f0, 0x1F0(r30)

    .loc_0x14C:
      lfs       f1, 0x1F0(r30)
      lfs       f0, 0x7C0(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x174
      stfs      f0, 0x1F0(r30)
      mr        r3, r30
      bl        0x1120
      li        r0, 0
      stb       r0, 0x219(r30)

    .loc_0x174:
      lbz       r0, 0x244(r30)
      cmplwi    r0, 0
      beq-      .loc_0x190
      lfs       f0, 0x7C0(r2)
      stfs      f0, 0x1F0(r30)
      stfs      f0, 0x1F4(r30)
      b         .loc_0x228

    .loc_0x190:
      lwz       r3, 0x118(r30)
      cmplwi    r3, 0
      beq-      .loc_0x1DC
      rlwinm    r4,r31,0,24,31
      lis       r0, 0x4330
      stw       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      stw       r0, 0x8(r1)
      lfd       f1, 0x830(r2)
      lfd       f0, 0x8(r1)
      lfs       f2, 0x1F4(r30)
      fsubs     f0, f0, f1
      lwz       r12, 0x24(r12)
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r4, 0x14(r1)
      mtctr     r12
      bctrl

    .loc_0x1DC:
      lwz       r3, 0x11C(r30)
      cmplwi    r3, 0
      beq-      .loc_0x228
      rlwinm    r4,r31,0,24,31
      lis       r0, 0x4330
      stw       r4, 0x14(r1)
      lwz       r12, 0x0(r3)
      stw       r0, 0x10(r1)
      lfd       f1, 0x830(r2)
      lfd       f0, 0x10(r1)
      lfs       f2, 0x1F8(r30)
      fsubs     f0, f0, f1
      lwz       r12, 0x24(r12)
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r4, 0xC(r1)
      mtctr     r12
      bctrl

    .loc_0x228:
      rlwinm    r3,r31,0,24,31
      lis       r0, 0x4330
      stw       r3, 0x14(r1)
      lwz       r3, 0x108(r30)
      stw       r0, 0x10(r1)
      lfd       f1, 0x830(r2)
      lfd       f0, 0x10(r1)
      lfs       f2, 0x1F0(r30)
      fsubs     f0, f0, f1
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r4, 0xC(r1)
      mtctr     r12
      bctrl
      lwz       r3, 0x10C(r30)
      cmplwi    r3, 0
      beq-      .loc_0x2A0
      lfs       f1, 0x828(r2)
      lfs       f0, 0x1F0(r30)
      lwz       r12, 0x0(r3)
      fmuls     f0, f1, f0
      lwz       r12, 0x24(r12)
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r4, 0x14(r1)
      mtctr     r12
      bctrl

    .loc_0x2A0:
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
 * Address:	80372B60
 * Size:	000008
 */
void Morimura::TZukanBase::isComplete(void)
{
    /*
    .loc_0x0:
      lbz       r3, 0x228(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80372B68
 * Size:	000714
 */
void Morimura::TZukanBase::doDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0xE0(r1)
      mflr      r0
      stw       r0, 0xE4(r1)
      stfd      f31, 0xD0(r1)
      psq_st    f31,0xD8(r1),0,0
      stfd      f30, 0xC0(r1)
      psq_st    f30,0xC8(r1),0,0
      stmw      r23, 0x9C(r1)
      mr        r23, r3
      mr        r24, r4
      lwz       r3, 0xB8(r3)
      addi      r31, r24, 0x190
      mr        r5, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lfs       f31, 0x1A4(r23)
      lfs       f0, 0x1AC(r23)
      lfs       f30, 0x1A0(r23)
      fsubs     f1, f0, f31
      bl        -0x2B1070
      lfs       f0, 0x1A8(r23)
      mr        r27, r3
      fsubs     f1, f0, f30
      bl        -0x2B1080
      fmr       f1, f31
      mr        r26, r3
      bl        -0x2B108C
      fmr       f1, f30
      mr        r25, r3
      bl        -0x2B1098
      mr        r4, r25
      mr        r5, r26
      mr        r6, r27
      bl        -0x28941C
      lwz       r3, 0xB4(r23)
      mr        r4, r24
      mr        r5, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xC8(r23)
      mr        r4, r24
      mr        r5, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x9C(r12)
      mtctr     r12
      bctrl
      li        r26, 0
      li        r29, 0
      subi      r28, r13, 0x6700
      subi      r27, r13, 0x66F8
      b         .loc_0x278

    .loc_0xDC:
      lwz       r3, 0x88(r23)
      lwzx      r3, r3, r29
      lwz       r4, 0x4(r3)
      lbz       r0, 0xB0(r4)
      cmplwi    r0, 0
      beq-      .loc_0x270
      lwz       r0, 0xC(r3)
      cmpwi     r0, 0
      bne-      .loc_0x1D4
      li        r25, 0
      li        r30, 0

    .loc_0x108:
      lwz       r0, 0x88(r23)
      lwzx      r3, r29, r0
      bl        0x2F99C
      lwz       r0, 0x88(r23)
      add       r4, r3, r25
      lwzx      r3, r29, r0
      lwz       r3, 0x20(r3)
      lwzx      r3, r3, r30
      lwz       r0, 0x18(r3)
      cmplwi    r0, 0
      beq-      .loc_0x1C0
      lwz       r12, 0x0(r23)
      mr        r3, r23
      li        r5, 0
      lwz       r12, 0xE4(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1C0
      lwz       r0, 0x88(r23)
      mr        r4, r24
      lfs       f1, -0x6700(r13)
      mr        r5, r31
      lwzx      r6, r29, r0
      lwz       r3, 0xF0(r23)
      lwz       r6, 0x20(r6)
      lwzx      r6, r6, r30
      lwz       r6, 0x10(r6)
      lfs       f0, 0x8C(r6)
      fadds     f0, f1, f0
      stfs      f0, 0x8C(r3)
      lwz       r0, 0x88(r23)
      lfs       f1, 0x4(r28)
      lwzx      r6, r29, r0
      lwz       r3, 0xF0(r23)
      lwz       r6, 0x20(r6)
      lwzx      r6, r6, r30
      lwz       r6, 0x10(r6)
      lfs       f0, 0x9C(r6)
      fadds     f0, f1, f0
      stfs      f0, 0x9C(r3)
      lwz       r3, 0xCC(r23)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x1C0:
      addi      r25, r25, 0x1
      addi      r30, r30, 0x4
      cmpwi     r25, 0x3
      blt+      .loc_0x108
      b         .loc_0x270

    .loc_0x1D4:
      cmpwi     r0, 0x1
      beq-      .loc_0x270
      bl        0x2F8D0
      lwz       r12, 0x0(r23)
      mr        r4, r3
      mr        r3, r23
      li        r5, 0
      lwz       r12, 0xE4(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x270
      lwz       r3, 0x88(r23)
      mr        r4, r24
      lfs       f1, -0x66F8(r13)
      mr        r5, r31
      lwzx      r6, r3, r29
      lwz       r3, 0xF0(r23)
      lwz       r6, 0x20(r6)
      lwz       r6, 0x4(r6)
      lwz       r6, 0x10(r6)
      lfs       f0, 0x8C(r6)
      fadds     f0, f1, f0
      stfs      f0, 0x8C(r3)
      lwz       r3, 0x88(r23)
      lfs       f1, 0x4(r27)
      lwzx      r6, r3, r29
      lwz       r3, 0xF0(r23)
      lwz       r6, 0x20(r6)
      lwz       r6, 0x4(r6)
      lwz       r6, 0x10(r6)
      lfs       f0, 0x9C(r6)
      fadds     f0, f1, f0
      stfs      f0, 0x9C(r3)
      lwz       r3, 0xCC(r23)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x270:
      addi      r29, r29, 0x4
      addi      r26, r26, 0x1

    .loc_0x278:
      lha       r0, 0x8E(r23)
      cmpw      r26, r0
      blt+      .loc_0xDC
      li        r3, 0
      li        r4, 0
      li        r5, 0x280
      li        r6, 0x1E0
      bl        -0x289624
      lwz       r3, 0x7C(r23)
      mr        r4, r24
      mr        r5, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xC0(r23)
      cmplwi    r3, 0
      beq-      .loc_0x2D8
      lwz       r12, 0x0(r3)
      mr        r4, r24
      mr        r5, r31
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl

    .loc_0x2D8:
      lbz       r0, 0x244(r23)
      cmplwi    r0, 0
      beq-      .loc_0x300
      lwz       r3, 0xBC(r23)
      mr        r4, r24
      mr        r5, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl

    .loc_0x300:
      lwz       r3, 0xDC(r23)
      lwz       r3, 0x20(r3)
      cntlzw    r0, r3
      rlwinm.   r0,r0,27,24,31
      bne-      .loc_0x458
      cmpwi     r3, 0x3
      bne-      .loc_0x340
      lbz       r3, 0x214(r23)
      cmplwi    r3, 0x14
      ble-      .loc_0x334
      subi      r0, r3, 0x14
      stb       r0, 0x214(r23)
      b         .loc_0x360

    .loc_0x334:
      li        r0, 0
      stb       r0, 0x214(r23)
      b         .loc_0x360

    .loc_0x340:
      lbz       r3, 0x214(r23)
      addi      r0, r3, 0x14
      stb       r0, 0x214(r23)
      lbz       r0, 0x214(r23)
      cmplwi    r0, 0xC8
      ble-      .loc_0x360
      li        r0, 0xC8
      stb       r0, 0x214(r23)

    .loc_0x360:
      li        r0, -0x1
      li        r8, 0
      stw       r0, 0x48(r1)
      mr        r3, r31
      lbz       r0, 0x214(r23)
      addi      r4, r1, 0x34
      stb       r8, 0x4B(r1)
      addi      r5, r1, 0x38
      addi      r6, r1, 0x3C
      addi      r7, r1, 0x40
      stb       r8, 0x48(r1)
      stb       r8, 0x49(r1)
      stb       r8, 0x4A(r1)
      stb       r0, 0x4B(r1)
      lwz       r0, 0x48(r1)
      stw       r0, 0x10(r1)
      stw       r0, 0x40(r1)
      stw       r0, 0x3C(r1)
      stw       r0, 0x38(r1)
      stw       r0, 0x34(r1)
      bl        -0x33C88C
      li        r3, 0
      bl        -0x289DC8
      bl        0xB0300
      lhz       r25, 0x6(r3)
      bl        0xB02F8
      lhz       r4, 0x4(r3)
      lis       r0, 0x4330
      lfs       f3, 0x7C0(r2)
      mr        r3, r31
      stw       r4, 0x84(r1)
      addi      r4, r1, 0x6C
      lfd       f2, 0x830(r2)
      stw       r0, 0x80(r1)
      lfd       f0, 0x80(r1)
      stw       r25, 0x8C(r1)
      fsubs     f1, f0, f2
      stw       r0, 0x88(r1)
      lfd       f0, 0x88(r1)
      fadds     f1, f3, f1
      stfs      f3, 0x6C(r1)
      fsubs     f0, f0, f2
      stfs      f3, 0x70(r1)
      fadds     f0, f3, f0
      stfs      f1, 0x74(r1)
      stfs      f0, 0x78(r1)
      bl        -0x33C7AC
      li        r3, 0x1
      bl        -0x289E30
      lwz       r3, 0x108(r23)
      lbz       r4, 0x214(r23)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xD4(r23)
      mr        r4, r24
      mr        r5, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x458:
      lbz       r0, 0x244(r23)
      cmplwi    r0, 0
      beq-      .loc_0x480
      mr        r3, r23
      mr        r4, r24
      lwz       r12, 0x0(r23)
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl
      b         .loc_0x4B8

    .loc_0x480:
      lwz       r3, 0xDC(r23)
      mr        r4, r24
      mr        r5, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xBC(r23)
      mr        r4, r24
      mr        r5, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl

    .loc_0x4B8:
      lwz       r3, 0xC4(r23)
      mr        r4, r24
      mr        r5, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x130(r23)
      li        r0, 0x1
      mr        r3, r31
      stb       r0, 0xB0(r4)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      mr        r3, r23
      li        r4, -0x1
      lwz       r12, 0x0(r23)
      li        r0, 0
      stw       r4, 0x44(r1)
      lwz       r12, 0x30(r12)
      stb       r0, 0x44(r1)
      stb       r0, 0x45(r1)
      stb       r0, 0x46(r1)
      stb       r0, 0x47(r1)
      mtctr     r12
      bctrl
      lwz       r3, 0x224(r3)
      lbz       r0, 0xD4(r3)
      cmplwi    r0, 0
      beq-      .loc_0x644
      mr        r3, r23
      lwz       r12, 0x0(r23)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x224(r3)
      lbz       r0, 0xD5(r3)
      cmplwi    r0, 0
      beq-      .loc_0x57C
      lbz       r3, 0x214(r23)
      addi      r0, r3, 0x14
      stb       r0, 0x214(r23)
      lbz       r0, 0x214(r23)
      cmplwi    r0, 0xC8
      ble-      .loc_0x59C
      li        r0, 0xC8
      stb       r0, 0x214(r23)
      b         .loc_0x59C

    .loc_0x57C:
      lbz       r3, 0x214(r23)
      cmplwi    r3, 0x14
      ble-      .loc_0x594
      subi      r0, r3, 0x14
      stb       r0, 0x214(r23)
      b         .loc_0x59C

    .loc_0x594:
      li        r0, 0
      stb       r0, 0x214(r23)

    .loc_0x59C:
      lbz       r0, 0x214(r23)
      mr        r3, r31
      addi      r4, r1, 0x24
      addi      r5, r1, 0x28
      stb       r0, 0x47(r1)
      addi      r6, r1, 0x2C
      addi      r7, r1, 0x30
      lwz       r0, 0x44(r1)
      stw       r0, 0xC(r1)
      stw       r0, 0x30(r1)
      stw       r0, 0x2C(r1)
      stw       r0, 0x28(r1)
      stw       r0, 0x24(r1)
      bl        -0x33CAAC
      li        r3, 0
      bl        -0x289FE8
      bl        0xB00E0
      lhz       r24, 0x6(r3)
      bl        0xB00D8
      lhz       r4, 0x4(r3)
      lis       r0, 0x4330
      lfs       f3, 0x7C0(r2)
      mr        r3, r31
      stw       r4, 0x8C(r1)
      addi      r4, r1, 0x5C
      lfd       f2, 0x830(r2)
      stw       r0, 0x88(r1)
      lfd       f0, 0x88(r1)
      stw       r24, 0x84(r1)
      fsubs     f1, f0, f2
      stw       r0, 0x80(r1)
      lfd       f0, 0x80(r1)
      fadds     f1, f3, f1
      stfs      f3, 0x5C(r1)
      fsubs     f0, f0, f2
      stfs      f3, 0x60(r1)
      fadds     f0, f3, f0
      stfs      f1, 0x64(r1)
      stfs      f0, 0x68(r1)
      bl        -0x33C9CC
      li        r3, 0x1
      bl        -0x28A050

    .loc_0x644:
      lbz       r0, 0x44(r23)
      mr        r3, r31
      addi      r4, r1, 0x14
      addi      r5, r1, 0x18
      subfic    r0, r0, 0xFF
      addi      r6, r1, 0x1C
      stb       r0, 0x47(r1)
      addi      r7, r1, 0x20
      lwz       r0, 0x44(r1)
      stw       r0, 0x8(r1)
      stw       r0, 0x20(r1)
      stw       r0, 0x1C(r1)
      stw       r0, 0x18(r1)
      stw       r0, 0x14(r1)
      bl        -0x33CB58
      li        r3, 0
      bl        -0x28A094
      bl        0xB0034
      lhz       r23, 0x6(r3)
      bl        0xB002C
      lhz       r4, 0x4(r3)
      lis       r0, 0x4330
      lfs       f3, 0x7C0(r2)
      mr        r3, r31
      stw       r4, 0x8C(r1)
      addi      r4, r1, 0x4C
      lfd       f2, 0x830(r2)
      stw       r0, 0x88(r1)
      lfd       f0, 0x88(r1)
      stw       r23, 0x84(r1)
      fsubs     f1, f0, f2
      stw       r0, 0x80(r1)
      lfd       f0, 0x80(r1)
      fadds     f1, f3, f1
      stfs      f3, 0x4C(r1)
      fsubs     f0, f0, f2
      stfs      f3, 0x50(r1)
      fadds     f0, f3, f0
      stfs      f1, 0x54(r1)
      stfs      f0, 0x58(r1)
      bl        -0x33CA78
      li        r3, 0x1
      bl        -0x28A0FC
      psq_l     f31,0xD8(r1),0,0
      lfd       f31, 0xD0(r1)
      psq_l     f30,0xC8(r1),0,0
      lfd       f30, 0xC0(r1)
      lmw       r23, 0x9C(r1)
      lwz       r0, 0xE4(r1)
      mtlr      r0
      addi      r1, r1, 0xE0
      blr
    */
}

/*
 * --INFO--
 * Address:	8037327C
 * Size:	000004
 */
void Morimura::TZukanBase::doDemoDraw((Graphics&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80373280
 * Size:	000018
 */
void Morimura::TZukanBase::doUpdateFadeoutFinish(void)
{
    /*
    .loc_0x0:
      lwz       r0, 0x198(r3)
      cmpwi     r0, 0x2
      bnelr-
      li        r0, 0x3
      stw       r0, 0x198(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80373298
 * Size:	000578
 */
void Morimura::TZukanBase::indexPaneInit((J2DScreen*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x470(r1)
      mflr      r0
      lis       r5, 0x8049
      stw       r0, 0x474(r1)
      li        r0, 0
      stmw      r16, 0x430(r1)
      addi      r22, r5, 0x2520
      mr        r24, r4
      mr        r23, r3
      addi      r5, r1, 0x14
      addi      r4, r22, 0x44
      stw       r0, 0x90(r3)
      li        r3, 0x4
      li        r0, 0xA
      stw       r3, 0x94(r23)
      lha       r3, 0x8E(r23)
      subi      r3, r3, 0x1
      stw       r3, 0x98(r23)
      mtctr     r0

    .loc_0x4C:
      lwz       r3, 0x4(r4)
      lwzu      r0, 0x8(r4)
      stw       r3, 0x4(r5)
      stwu      r0, 0x8(r5)
      bdnz+     .loc_0x4C
      mr        r3, r24
      lwz       r4, 0x90(r23)
      lwz       r12, 0x0(r24)
      addi      r0, r1, 0x18
      rlwinm    r4,r4,3,0,28
      lwz       r12, 0x3C(r12)
      add       r6, r0, r4
      lwz       r5, 0x0(r6)
      lwz       r6, 0x4(r6)
      mtctr     r12
      bctrl
      mr.       r17, r3
      bne-      .loc_0xA8
      addi      r3, r22, 0xC
      addi      r5, r22, 0x18
      li        r4, 0x43B
      crclr     6, 0x6
      bl        -0x348CFC

    .loc_0xA8:
      lfs       f0, 0xD8(r17)
      mr        r3, r24
      addi      r0, r1, 0x18
      stfs      f0, 0xA0(r23)
      lwz       r4, 0x98(r23)
      lwz       r12, 0x0(r24)
      rlwinm    r4,r4,3,0,28
      add       r6, r0, r4
      lwz       r12, 0x3C(r12)
      lwz       r5, 0x0(r6)
      lwz       r6, 0x4(r6)
      mtctr     r12
      bctrl
      mr.       r17, r3
      bne-      .loc_0xF8
      addi      r3, r22, 0xC
      addi      r5, r22, 0x18
      li        r4, 0x43E
      crclr     6, 0x6
      bl        -0x348D4C

    .loc_0xF8:
      lfs       f0, 0xD8(r17)
      li        r0, 0x78
      addi      r5, r1, 0x64
      addi      r4, r22, 0x94
      stfs      f0, 0xA4(r23)
      mtctr     r0

    .loc_0x110:
      lwz       r3, 0x4(r4)
      lwzu      r0, 0x8(r4)
      stw       r3, 0x4(r5)
      stwu      r0, 0x8(r5)
      bdnz+     .loc_0x110
      lbz       r0, 0x240(r23)
      li        r28, 0
      cmplwi    r0, 0
      beq-      .loc_0x144
      lwz       r0, 0x230(r23)
      cmpwi     r0, 0
      bne-      .loc_0x144
      li        r28, 0x1

    .loc_0x144:
      lha       r0, 0x8E(r23)
      rlwinm    r3,r0,2,0,29
      bl        -0x34F438
      li        r5, 0
      stw       r3, 0x88(r23)
      mr        r4, r5
      li        r6, 0
      b         .loc_0x174

    .loc_0x164:
      lwz       r3, 0x88(r23)
      addi      r6, r6, 0x1
      stwx      r4, r3, r5
      addi      r5, r5, 0x4

    .loc_0x174:
      lha       r0, 0x8E(r23)
      cmpw      r6, r0
      blt+      .loc_0x164
      addi      r31, r1, 0x18
      addi      r29, r1, 0x68
      li        r27, 0
      li        r26, 0
      li        r30, 0
      b         .loc_0x510

    .loc_0x198:
      li        r3, 0x28
      bl        -0x34F590
      mr.       r17, r3
      beq-      .loc_0x1F8
      mr        r3, r24
      lwz       r5, 0x0(r31)
      lwz       r12, 0x0(r24)
      lwz       r6, 0x4(r31)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lfs       f0, 0x7C0(r2)
      stw       r0, 0x0(r17)
      stw       r3, 0x4(r17)
      stw       r0, 0x8(r17)
      stw       r0, 0xC(r17)
      stw       r0, 0x10(r17)
      stfs      f0, 0x18(r17)
      stw       r0, 0x20(r17)
      stw       r23, 0x24(r17)
      lwz       r3, 0x4(r17)
      lfs       f0, 0xD8(r3)
      stfs      f0, 0x1C(r17)

    .loc_0x1F8:
      lwz       r4, 0x88(r23)
      mr        r3, r23
      stwx      r17, r4, r30
      lwz       r12, 0x0(r23)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      lwz       r6, 0x88(r23)
      mr        r5, r3
      li        r4, 0x3
      lwzx      r3, r6, r30
      bl        0x2EE88
      mr        r19, r29
      li        r25, 0
      li        r20, 0

    .loc_0x234:
      lwz       r0, 0x88(r23)
      mr        r3, r24
      lwz       r12, 0x0(r24)
      lwzx      r5, r30, r0
      lwz       r4, 0xB4(r23)
      lwz       r5, 0x20(r5)
      lwz       r12, 0x3C(r12)
      lwzx      r21, r5, r20
      lwz       r16, 0x8(r4)
      lwz       r5, 0x48(r19)
      lwz       r6, 0x4C(r19)
      mtctr     r12
      bctrl
      mr        r17, r3
      mr        r3, r24
      lwz       r12, 0x0(r24)
      lwz       r5, 0x30(r19)
      lwz       r12, 0x3C(r12)
      lwz       r6, 0x34(r19)
      mtctr     r12
      bctrl
      lwz       r0, 0x78(r23)
      mr        r18, r3
      mr        r3, r16
      addi      r9, r21, 0x18
      stw       r0, 0x8(r1)
      li        r10, 0x3
      lwz       r5, 0x0(r19)
      lwz       r6, 0x4(r19)
      lwz       r7, 0x18(r19)
      lwz       r8, 0x1C(r19)
      bl        0x2E8B8
      mr        r4, r3
      mr        r3, r21
      mr        r5, r18
      mr        r6, r17
      bl        0x2F21C
      lbz       r0, 0x241(r23)
      cmplwi    r0, 0
      beq-      .loc_0x3CC
      li        r3, 0x1A8
      bl        -0x34F6CC
      mr.       r21, r3
      beq-      .loc_0x328
      mr        r3, r24
      lwz       r5, 0x48(r19)
      lwz       r12, 0x0(r24)
      lwz       r6, 0x4C(r19)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      bl        -0x33B278
      lis       r4, 0x7465
      mr        r7, r3
      mr        r3, r21
      addi      r8, r22, 0x458
      addi      r6, r4, 0x7374
      li        r5, 0
      lis       r9, 0x110
      bl        -0x31E47C
      mr        r21, r3

    .loc_0x328:
      cmplwi    r21, 0
      bne-      .loc_0x344
      addi      r3, r22, 0xC
      addi      r5, r22, 0x18
      li        r4, 0x469
      crclr     6, 0x6
      bl        -0x348F98

    .loc_0x344:
      lwz       r0, 0x88(r23)
      mr        r3, r24
      lwzx      r4, r30, r0
      lwz       r4, 0x20(r4)
      lwzx      r4, r4, r20
      stw       r21, 0x4(r4)
      lwz       r12, 0x0(r24)
      lwz       r5, 0x0(r31)
      lwz       r12, 0x3C(r12)
      lwz       r6, 0x4(r31)
      mtctr     r12
      bctrl
      mr        r4, r21
      bl        -0x33BF4C
      mr        r3, r24
      lwz       r5, 0x48(r19)
      lwz       r12, 0x0(r24)
      lwz       r6, 0x4C(r19)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      mr        r18, r3
      mr        r3, r24
      lwz       r12, 0x0(r24)
      lwz       r5, 0x0(r31)
      lwz       r12, 0x3C(r12)
      lwz       r6, 0x4(r31)
      mtctr     r12
      bctrl
      mr        r4, r18
      bl        -0x33BF90
      mr        r3, r21
      li        r4, 0x4
      bl        -0x33A9A4

    .loc_0x3CC:
      addi      r25, r25, 0x1
      addi      r19, r19, 0x8
      cmpwi     r25, 0x3
      addi      r20, r20, 0x4
      blt+      .loc_0x234
      lwz       r0, 0x9C(r23)
      lwz       r3, 0x88(r23)
      mullw     r0, r26, r0
      lwzx      r3, r3, r30
      lwz       r19, 0x4(r3)
      stw       r0, 0x10(r1)
      lbz       r0, 0x240(r23)
      cmplwi    r0, 0
      beq-      .loc_0x408
      stw       r27, 0x10(r1)

    .loc_0x408:
      lbz       r0, 0x240(r23)
      cmplwi    r0, 0
      beq-      .loc_0x4AC
      rlwinm.   r0,r28,0,24,31
      beq-      .loc_0x440
      mr        r3, r23
      mr        r4, r26
      lwz       r12, 0x0(r23)
      li        r5, -0x1
      li        r6, 0x1
      lwz       r12, 0x94(r12)
      mtctr     r12
      bctrl
      b         .loc_0x4CC

    .loc_0x440:
      mr        r3, r23
      addi      r4, r1, 0x10
      lwz       r12, 0x0(r23)
      li        r5, 0x1
      lwz       r12, 0x90(r12)
      mtctr     r12
      bctrl
      mr        r3, r23
      mr        r4, r26
      lwz       r12, 0x0(r23)
      mr        r5, r27
      li        r6, 0x1
      lwz       r12, 0x94(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x10(r1)
      cmpwi     r3, 0
      bne-      .loc_0x494
      cmpwi     r27, 0
      beq-      .loc_0x494
      li        r28, 0x1

    .loc_0x494:
      lwz       r0, 0x230(r23)
      cmpwi     r0, 0x3
      bge-      .loc_0x4A4
      li        r28, 0x1

    .loc_0x4A4:
      mr        r27, r3
      b         .loc_0x4CC

    .loc_0x4AC:
      mr        r3, r23
      mr        r4, r26
      lwz       r12, 0x0(r23)
      li        r6, 0x1
      lwz       r5, 0x10(r1)
      lwz       r12, 0x94(r12)
      mtctr     r12
      bctrl

    .loc_0x4CC:
      lwz       r4, 0x10(r1)
      cmpwi     r4, 0
      blt-      .loc_0x500
      lbz       r0, 0xB0(r23)
      cmplwi    r0, 0
      beq-      .loc_0x500
      lwz       r12, 0x0(r23)
      mr        r3, r23
      lwz       r12, 0x8C(r12)
      mtctr     r12
      bctrl
      stw       r4, 0x1C(r19)
      stw       r3, 0x18(r19)

    .loc_0x500:
      addi      r31, r31, 0x8
      addi      r30, r30, 0x4
      addi      r29, r29, 0x60
      addi      r26, r26, 0x1

    .loc_0x510:
      lha       r4, 0x8E(r23)
      cmpw      r26, r4
      blt+      .loc_0x198
      cmpwi     r4, 0
      li        r5, 0
      ble-      .loc_0x564
      cmpwi     r4, 0x8
      subi      r3, r4, 0x8
      ble-      .loc_0x550
      addi      r0, r3, 0x7
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmpwi     r3, 0
      ble-      .loc_0x550

    .loc_0x548:
      addi      r5, r5, 0x8
      bdnz+     .loc_0x548

    .loc_0x550:
      sub       r0, r4, r5
      mtctr     r0
      cmpw      r5, r4
      bge-      .loc_0x564

    .loc_0x560:
      bdnz-     .loc_0x560

    .loc_0x564:
      lmw       r16, 0x430(r1)
      lwz       r0, 0x474(r1)
      mtlr      r0
      addi      r1, r1, 0x470
      blr
    */
}

/*
 * --INFO--
 * Address:	80373810
 * Size:	000258
 */
void Morimura::TZukanBase::paneInit(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x5474
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lis       r3, 0x696E
      lwz       r5, 0x7C(r31)
      addi      r6, r3, 0x616D
      lwz       r3, 0x8(r5)
      addi      r5, r4, 0x656B
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x108(r31)
      lwz       r0, 0x108(r31)
      cmplwi    r0, 0
      bne-      .loc_0x68
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x252C
      li        r4, 0x4AC
      addi      r5, r5, 0x2538
      crclr     6, 0x6
      bl        -0x349234

    .loc_0x68:
      lwz       r3, 0x7C(r31)
      lis       r5, 0x696E
      lis       r4, 0x5474
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x6131
      addi      r5, r4, 0x656B
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x10C(r31)
      li        r3, 0x48
      bl        -0x34FA04
      mr.       r0, r3
      beq-      .loc_0xAC
      bl        -0x6A2A0
      mr        r0, r3

    .loc_0xAC:
      stw       r0, 0xD4(r31)
      lis       r4, 0x696E
      lis       r3, 0x5474
      lwz       r8, 0x7C(r31)
      addi      r6, r4, 0x616D
      lwz       r7, 0xD4(r31)
      addi      r5, r3, 0x656B
      lwz       r3, 0x8(r8)
      bl        0xC1248
      lwz       r4, 0x7C(r31)
      lis       r3, 0x6274
      addi      r6, r3, 0x6E30
      li        r5, 0x4E
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x11C(r31)
      lwz       r0, 0x11C(r31)
      cmplwi    r0, 0
      bne-      .loc_0x120
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x252C
      li        r4, 0x4B4
      addi      r5, r5, 0x2538
      crclr     6, 0x6
      bl        -0x3492EC

    .loc_0x120:
      lwz       r4, 0x7C(r31)
      lis       r3, 0x6274
      addi      r6, r3, 0x6E32
      li        r5, 0x4E
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x118(r31)
      lwz       r0, 0x118(r31)
      cmplwi    r0, 0
      bne-      .loc_0x170
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x252C
      li        r4, 0x4B8
      addi      r5, r5, 0x2538
      crclr     6, 0x6
      bl        -0x34933C

    .loc_0x170:
      lwz       r4, 0x7C(r31)
      lis       r3, 0x6274
      addi      r6, r3, 0x6E33
      li        r5, 0x4E
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x114(r31)
      lwz       r0, 0x114(r31)
      cmplwi    r0, 0
      bne-      .loc_0x1C0
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x252C
      li        r4, 0x4BB
      addi      r5, r5, 0x2538
      crclr     6, 0x6
      bl        -0x34938C

    .loc_0x1C0:
      lwz       r3, 0xDC(r31)
      lis       r5, 0x6465
      lis       r4, 0x6D
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x6D6F
      addi      r5, r4, 0x675F
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x110(r31)
      lwz       r0, 0x110(r31)
      cmplwi    r0, 0
      bne-      .loc_0x214
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x252C
      li        r4, 0x4BF
      addi      r5, r5, 0x2538
      crclr     6, 0x6
      bl        -0x3493E0

    .loc_0x214:
      lwz       r0, 0x94(r31)
      lwz       r3, 0x88(r31)
      rlwinm    r0,r0,2,0,29
      lfs       f1, 0x838(r2)
      lwzx      r3, r3, r0
      lfs       f0, 0x83C(r2)
      lfs       f2, 0x1C(r3)
      fsubs     f1, f2, f1
      stfs      f1, 0xA8(r31)
      lfs       f1, 0xA8(r31)
      fadds     f0, f1, f0
      stfs      f0, 0xAC(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80373A68
 * Size:	0000C8
 */
void Morimura::TZukanBase::changePaneInfo(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0x1
      stw       r31, 0xC(r1)
      mr        r31, r3
      stb       r0, 0x215(r3)
      stb       r0, 0x219(r3)
      lwz       r0, 0x94(r3)
      lwz       r3, 0x88(r3)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2EB24
      addi      r0, r3, 0x1
      mr        r3, r31
      stw       r0, 0x194(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0xD0(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x240(r31)
      cmplwi    r0, 0
      beq-      .loc_0xB4
      lbz       r0, 0x242(r31)
      cmplwi    r0, 0
      bne-      .loc_0xB4
      lwz       r4, 0x94(r31)
      cmpwi     r4, 0
      bne-      .loc_0x80
      lwz       r3, 0xEC(r31)
      bl        -0x46690
      b         .loc_0xB4

    .loc_0x80:
      lis       r3, 0x5555
      lwz       r0, 0x238(r31)
      addi      r3, r3, 0x5556
      mulhw     r3, r3, r0
      rlwinm    r0,r3,1,31,31
      add       r0, r3, r0
      cmpw      r4, r0
      bne-      .loc_0xAC
      lwz       r3, 0xEC(r31)
      bl        -0x46790
      b         .loc_0xB4

    .loc_0xAC:
      lwz       r3, 0xEC(r31)
      bl        -0x465E0

    .loc_0xB4:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80373B30
 * Size:	0000A8
 */
void Morimura::TZukanBase::changeName(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r3
      lwz       r0, 0x94(r3)
      lwz       r3, 0x88(r3)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2EA60
      mr.       r31, r3
      blt-      .loc_0x8C
      mr        r3, r29
      mr        r4, r31
      lwz       r12, 0x0(r29)
      lwz       r30, 0x108(r29)
      lwz       r12, 0x8C(r12)
      mtctr     r12
      bctrl
      stw       r4, 0x1C(r30)
      stw       r3, 0x18(r30)
      lwz       r0, 0x10C(r29)
      cmplwi    r0, 0
      beq-      .loc_0x6C
      mr        r30, r0

    .loc_0x6C:
      mr        r3, r29
      mr        r4, r31
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8C(r12)
      mtctr     r12
      bctrl
      stw       r4, 0x1C(r30)
      stw       r3, 0x18(r30)

    .loc_0x8C:
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
 * Address:	80373BD8
 * Size:	00005C
 */
void Morimura::TZukanBase::doUpdateIn(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r4, 0xDC(r3)
      lwz       r0, 0x20(r4)
      cntlzw    r0, r0
      rlwinm.   r0,r0,27,24,31
      beq-      .loc_0x4C
      lbz       r0, 0x18(r4)
      cmplwi    r0, 0
      beq-      .loc_0x4C
      li        r0, 0
      stb       r0, 0x18(r4)
      lbz       r0, 0x21B(r3)
      cmplwi    r0, 0
      beq-      .loc_0x48
      bl        0x64C
      b         .loc_0x4C

    .loc_0x48:
      bl        0x758

    .loc_0x4C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80373C34
 * Size:	000630
 */
void Morimura::TZukanBase::doUpdateOut(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stfd      f31, 0x50(r1)
      psq_st    f31,0x58(r1),0,0
      stmw      r26, 0x38(r1)
      mr        r27, r3
      lfs       f0, 0x840(r2)
      lfs       f2, 0x204(r3)
      lfs       f1, 0x20C(r3)
      fadds     f1, f2, f1
      stfs      f1, 0x204(r3)
      lfs       f1, 0x204(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x44
      fsubs     f0, f1, f0
      stfs      f0, 0x204(r27)

    .loc_0x44:
      lfs       f1, 0x204(r27)
      lfs       f0, 0x7C0(r2)
      lfs       f2, 0x208(r27)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x84
      lfs       f0, 0x848(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f1, f0
      b         .loc_0xA8

    .loc_0x84:
      lfs       f0, 0x84C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f1, r3, r0

    .loc_0xA8:
      lfs       f0, 0x844(r2)
      li        r28, 0
      li        r26, 0
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x210(r27)
      b         .loc_0xD4

    .loc_0xC0:
      lwz       r3, 0x88(r27)
      lwzx      r3, r3, r26
      bl        0x2E5AC
      addi      r26, r26, 0x4
      addi      r28, r28, 0x1

    .loc_0xD4:
      lha       r0, 0x8E(r27)
      cmpw      r28, r0
      blt+      .loc_0xC0
      lwz       r0, 0x94(r27)
      lwz       r3, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwz       r30, -0x6638(r13)
      lwzx      r3, r3, r0
      lwz       r0, 0xC(r3)
      cmpwi     r0, 0
      beq-      .loc_0x134
      lfs       f1, 0x850(r2)
      lfs       f0, 0x174(r27)
      lwz       r3, 0x130(r27)
      fadds     f0, f1, f0
      lfs       f1, 0x178(r27)
      stfs      f0, 0xD4(r3)
      stfs      f1, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      li        r30, 0x1
      b         .loc_0x230

    .loc_0x134:
      lbz       r0, 0x240(r27)
      cmplwi    r0, 0
      beq-      .loc_0x1E4
      lwz       r0, 0x230(r27)
      cmpwi     r0, 0
      ble-      .loc_0x1E4
      bl        0x2E83C
      cmpwi     r3, 0
      bge-      .loc_0x1E4
      lwz       r0, 0x234(r27)
      lwz       r4, 0x230(r27)
      cmpwi     r0, 0
      blt-      .loc_0x16C
      mr        r4, r0

    .loc_0x16C:
      lis       r3, 0x5555
      addi      r0, r3, 0x5556
      mulhw     r3, r0, r4
      rlwinm    r0,r3,1,31,31
      add       r0, r3, r0
      mulli     r0, r0, 0x3
      sub       r30, r4, r0
      subic.    r30, r30, 0x1
      bge-      .loc_0x194
      li        r30, 0

    .loc_0x194:
      stw       r30, -0x6638(r13)
      mr        r3, r27
      lwz       r12, 0x0(r27)
      lwz       r12, 0x84(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x94(r27)
      lwz       r4, 0x88(r27)
      rlwinm    r3,r0,2,0,29
      lwz       r0, -0x6638(r13)
      lwzx      r3, r4, r3
      rlwinm    r0,r0,2,0,29
      lfs       f1, 0x7C4(r2)
      lwz       r3, 0x20(r3)
      lwzx      r3, r3, r0
      bl        0x2ED90
      lwz       r3, -0x67A8(r13)
      li        r4, 0x1802
      li        r5, 0
      bl        -0x3B7E4

    .loc_0x1E4:
      lwz       r4, -0x6638(r13)
      lis       r0, 0x4330
      stw       r0, 0x28(r1)
      xoris     r4, r4, 0x8000
      lfd       f2, 0x820(r2)
      stw       r4, 0x2C(r1)
      lfs       f3, 0x850(r2)
      lfd       f1, 0x28(r1)
      lfs       f0, 0x174(r27)
      fsubs     f1, f1, f2
      lwz       r3, 0x130(r27)
      lfs       f2, 0x178(r27)
      fmadds    f0, f3, f1, f0
      stfs      f0, 0xD4(r3)
      stfs      f2, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0x230:
      lwz       r3, 0x94(r27)
      rlwinm    r0,r30,2,0,29
      lwz       r4, 0x88(r27)
      li        r30, 0
      rlwinm    r3,r3,2,0,29
      lwzx      r3, r4, r3
      lwz       r3, 0x20(r3)
      lwzx      r3, r3, r0
      lwz       r26, 0x10(r3)
      b         .loc_0x2F4

    .loc_0x258:
      lbz       r0, 0x240(r27)
      cmplwi    r0, 0
      beq-      .loc_0x288
      lwz       r0, 0x230(r27)
      cmpwi     r0, 0
      bne-      .loc_0x288
      rlwinm    r3,r30,2,22,29
      li        r4, 0
      addi      r0, r3, 0x134
      lwzx      r3, r27, r0
      stb       r4, 0xB0(r3)
      b         .loc_0x2F0

    .loc_0x288:
      mr        r4, r26
      addi      r3, r1, 0x14
      rlwinm    r5,r30,0,24,31
      bl        -0x33AF30
      lfs       f1, 0x14(r1)
      mr        r4, r26
      lfs       f0, 0x8C(r26)
      addi      r3, r1, 0x8
      rlwinm    r5,r30,0,24,31
      fsubs     f31, f1, f0
      bl        -0x33AF4C
      lfs       f1, 0xC(r1)
      rlwinm    r3,r30,2,22,29
      lfs       f0, 0x9C(r26)
      addi      r0, r3, 0x134
      lfs       f2, 0x210(r27)
      fsubs     f1, f1, f0
      lwzx      r3, r27, r0
      fmuls     f0, f2, f31
      fmuls     f1, f2, f1
      stfs      f0, 0xD4(r3)
      stfs      f1, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0x2F0:
      addi      r30, r30, 0x1

    .loc_0x2F4:
      rlwinm    r0,r30,0,24,31
      cmplwi    r0, 0x4
      blt+      .loc_0x258
      li        r29, 0
      li        r31, 0
      subi      r30, r13, 0x66E8
      b         .loc_0x608

    .loc_0x310:
      lbz       r0, 0x240(r27)
      cmplwi    r0, 0
      beq-      .loc_0x51C
      lbz       r0, 0x242(r27)
      li        r28, 0x1
      cmplwi    r0, 0
      bne-      .loc_0x3E0
      lwz       r0, 0x94(r27)
      cmpw      r29, r0
      bne-      .loc_0x344
      lwz       r0, 0x230(r27)
      cmpwi     r0, 0
      bne-      .loc_0x3E0

    .loc_0x344:
      lwz       r3, 0x88(r27)
      lwzx      r3, r3, r31
      bl        0x2E694
      lwz       r0, 0x94(r27)
      mr        r26, r3
      lwz       r3, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2E67C
      cmpwi     r26, 0
      blt-      .loc_0x37C
      lwz       r0, 0x238(r27)
      cmpwi     r0, 0x3
      bgt-      .loc_0x384

    .loc_0x37C:
      li        r28, 0
      b         .loc_0x3E0

    .loc_0x384:
      cmpw      r26, r3
      ble-      .loc_0x3B8
      lwz       r0, 0x94(r27)
      lwz       r3, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwzx      r4, r3, r31
      lwzx      r3, r3, r0
      lfs       f1, 0x1C(r4)
      lfs       f0, 0x1C(r3)
      fcmpo     cr0, f0, f1
      ble-      .loc_0x3E0
      li        r28, 0
      b         .loc_0x3E0

    .loc_0x3B8:
      lwz       r0, 0x94(r27)
      lwz       r3, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwzx      r4, r3, r31
      lwzx      r3, r3, r0
      lfs       f1, 0x1C(r4)
      lfs       f0, 0x1C(r3)
      fcmpo     cr0, f0, f1
      bge-      .loc_0x3E0
      li        r28, 0

    .loc_0x3E0:
      rlwinm.   r0,r28,0,24,31
      beq-      .loc_0x464
      lbz       r0, -0x7A4C(r13)
      cmpwi     r0, 0x2
      beq-      .loc_0x434
      bge-      .loc_0x534
      cmpwi     r0, 0
      bge-      .loc_0x404
      b         .loc_0x534

    .loc_0x404:
      lwz       r3, 0x88(r27)
      li        r0, 0x1
      lwzx      r3, r3, r31
      lwz       r3, 0x4(r3)
      stb       r0, 0xB0(r3)
      lwz       r3, 0x88(r27)
      lwzx      r3, r3, r31
      lwz       r3, 0x4(r3)
      bl        -0x33AFE8
      li        r0, 0x1
      stb       r0, 0xB0(r3)
      b         .loc_0x534

    .loc_0x434:
      lwz       r3, 0x88(r27)
      li        r0, 0x1
      lwzx      r3, r3, r31
      lwz       r3, 0x4(r3)
      stb       r0, 0xB0(r3)
      lwz       r3, 0x88(r27)
      lwzx      r3, r3, r31
      lwz       r3, 0x4(r3)
      bl        -0x33B018
      li        r0, 0
      stb       r0, 0xB0(r3)
      b         .loc_0x534

    .loc_0x464:
      lbz       r0, -0x7A4C(r13)
      cmpwi     r0, 0x1
      beq-      .loc_0x4A0
      bge-      .loc_0x480
      cmpwi     r0, 0
      bge-      .loc_0x488
      b         .loc_0x534

    .loc_0x480:
      cmpwi     r0, 0x3
      bge-      .loc_0x534

    .loc_0x488:
      lwz       r3, 0x88(r27)
      li        r0, 0
      lwzx      r3, r3, r31
      lwz       r3, 0x4(r3)
      stb       r0, 0xB0(r3)
      b         .loc_0x534

    .loc_0x4A0:
      lwz       r3, 0x88(r27)
      li        r0, 0x1
      lwzx      r3, r3, r31
      lwz       r3, 0x4(r3)
      stb       r0, 0xB0(r3)
      lwz       r3, 0x88(r27)
      lwzx      r3, r3, r31
      lwz       r3, 0x4(r3)
      bl        -0x33B084
      li        r4, 0x1
      li        r0, 0
      stb       r4, 0xB0(r3)
      lwz       r3, 0x88(r27)
      lwzx      r3, r3, r31
      lwz       r3, 0x20(r3)
      lwz       r3, 0x0(r3)
      lwz       r3, 0x10(r3)
      stb       r0, 0xB0(r3)
      lwz       r3, 0x88(r27)
      lwzx      r3, r3, r31
      lwz       r3, 0x20(r3)
      lwz       r3, 0x4(r3)
      lwz       r3, 0x10(r3)
      stb       r0, 0xB0(r3)
      lwz       r3, 0x88(r27)
      lwzx      r3, r3, r31
      lwz       r3, 0x20(r3)
      lwz       r3, 0x8(r3)
      lwz       r3, 0x10(r3)
      stb       r0, 0xB0(r3)
      b         .loc_0x534

    .loc_0x51C:
      lwz       r3, 0x88(r27)
      lwzx      r3, r3, r31
      lwz       r3, 0x4(r3)
      bl        -0x33B0EC
      li        r0, 0
      stb       r0, 0xB0(r3)

    .loc_0x534:
      lbz       r0, 0x241(r27)
      cmplwi    r0, 0
      beq-      .loc_0x600
      li        r28, 0
      li        r26, 0

    .loc_0x548:
      lwz       r0, 0x88(r27)
      lwzx      r3, r31, r0
      lwz       r3, 0x20(r3)
      lwzx      r4, r3, r26
      lwz       r0, 0x18(r4)
      lwz       r3, 0x4(r4)
      cmplwi    r0, 0
      beq-      .loc_0x5E8
      lwz       r4, 0x10(r4)
      lbz       r0, 0xB0(r4)
      cmplwi    r0, 0
      beq-      .loc_0x5E8
      li        r0, 0x1
      stb       r0, 0xB0(r3)
      lwz       r0, 0x88(r27)
      lwzx      r4, r31, r0
      lwz       r0, 0xC(r4)
      cmpwi     r0, 0
      bne-      .loc_0x5B8
      lfs       f1, 0x4(r30)
      lfs       f0, -0x66E8(r13)
      stfs      f0, 0xCC(r3)
      stfs      f1, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x5F0

    .loc_0x5B8:
      lfs       f2, -0x7A54(r13)
      lfs       f0, -0x66E8(r13)
      lfs       f1, 0x4(r30)
      fmuls     f0, f0, f2
      fmuls     f1, f1, f2
      stfs      f0, 0xCC(r3)
      stfs      f1, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x5F0

    .loc_0x5E8:
      li        r0, 0
      stb       r0, 0xB0(r3)

    .loc_0x5F0:
      addi      r28, r28, 0x1
      addi      r26, r26, 0x4
      cmpwi     r28, 0x3
      blt+      .loc_0x548

    .loc_0x600:
      addi      r31, r31, 0x4
      addi      r29, r29, 0x1

    .loc_0x608:
      lha       r0, 0x8E(r27)
      cmpw      r29, r0
      blt+      .loc_0x310
      psq_l     f31,0x58(r1),0,0
      lfd       f31, 0x50(r1)
      lmw       r26, 0x38(r1)
      lwz       r0, 0x64(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	80374264
 * Size:	000114
 */
void Morimura::TZukanBase::doPushXButton(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r0, 0x17C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x100
      lbz       r0, 0x216(r31)
      cmplwi    r0, 0
      beq-      .loc_0x3C
      lwz       r3, -0x67A8(r13)
      li        r4, 0x180F
      li        r5, 0
      bl        -0x3BC6C

    .loc_0x3C:
      li        r4, 0
      stb       r4, 0x216(r31)
      lwz       r3, 0xDC(r31)
      lwz       r0, 0x20(r3)
      cmpwi     r0, 0
      bne-      .loc_0xAC
      stb       r4, 0x21B(r31)
      lwz       r0, 0x94(r31)
      lwz       r3, 0x88(r31)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2E2F0
      lwz       r12, 0x0(r31)
      mr        r4, r3
      mr        r3, r31
      lwz       r12, 0xC8(r12)
      mtctr     r12
      bctrl
      mr        r5, r3
      mr        r3, r31
      mr        r6, r4
      bl        0x4A8
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xC0(r12)
      mtctr     r12
      bctrl
      b         .loc_0x100

    .loc_0xAC:
      lwz       r0, 0x94(r31)
      lwz       r3, 0x88(r31)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2E29C
      lwz       r12, 0x0(r31)
      mr        r4, r3
      mr        r3, r31
      lwz       r12, 0xC8(r12)
      mtctr     r12
      bctrl
      mr        r5, r3
      mr        r3, r31
      mr        r6, r4
      bl        0x454
      lbz       r0, 0x21B(r31)
      cmplwi    r0, 0
      beq-      .loc_0x100
      lwz       r3, 0xDC(r31)
      li        r0, 0x1
      stb       r0, 0x18(r3)

    .loc_0x100:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80374378
 * Size:	000130
 */
void Morimura::TZukanBase::doPushYButton(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r0, 0x17C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x11C
      lwz       r12, 0x0(r3)
      lwz       r12, 0xBC(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x11C
      lbz       r0, 0x216(r31)
      cmplwi    r0, 0
      beq-      .loc_0x54
      lwz       r3, -0x67A8(r13)
      li        r4, 0x180F
      li        r5, 0
      bl        -0x3BD98

    .loc_0x54:
      li        r0, 0
      stb       r0, 0x216(r31)
      lwz       r3, 0xDC(r31)
      lwz       r0, 0x20(r3)
      cmpwi     r0, 0
      bne-      .loc_0xC8
      li        r0, 0x1
      stb       r0, 0x21B(r31)
      lwz       r0, 0x94(r31)
      lwz       r3, 0x88(r31)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2E1C0
      lwz       r12, 0x0(r31)
      mr        r4, r3
      mr        r3, r31
      lwz       r12, 0xCC(r12)
      mtctr     r12
      bctrl
      mr        r5, r3
      mr        r3, r31
      mr        r6, r4
      bl        0x378
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xC4(r12)
      mtctr     r12
      bctrl
      b         .loc_0x11C

    .loc_0xC8:
      lwz       r0, 0x94(r31)
      lwz       r3, 0x88(r31)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2E16C
      lwz       r12, 0x0(r31)
      mr        r4, r3
      mr        r3, r31
      lwz       r12, 0xCC(r12)
      mtctr     r12
      bctrl
      mr        r5, r3
      mr        r3, r31
      mr        r6, r4
      bl        0x324
      lbz       r0, 0x21B(r31)
      cmplwi    r0, 0
      bne-      .loc_0x11C
      lwz       r3, 0xDC(r31)
      li        r0, 0x1
      stb       r0, 0x18(r3)

    .loc_0x11C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803744A8
 * Size:	0000B0
 */
void Morimura::TZukanBase::doPushBButton(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r0, 0x216(r3)
      cmplwi    r0, 0
      beq-      .loc_0x3C
      li        r0, 0
      li        r4, 0x180F
      stb       r0, 0x216(r31)
      li        r5, 0
      lwz       r3, -0x67A8(r13)
      bl        -0x3BEAC
      b         .loc_0x9C

    .loc_0x3C:
      lwz       r4, 0xDC(r31)
      lwz       r0, 0x20(r4)
      cmpwi     r0, 0
      beq-      .loc_0x8C
      lwz       r0, 0x94(r31)
      lwz       r3, 0x88(r31)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2E0B8
      lwz       r12, 0x0(r31)
      mr        r4, r3
      mr        r3, r31
      lwz       r12, 0xC8(r12)
      mtctr     r12
      bctrl
      mr        r5, r3
      mr        r3, r31
      mr        r6, r4
      bl        0x270
      b         .loc_0x9C

    .loc_0x8C:
      lwz       r12, 0x0(r3)
      lwz       r12, 0xE0(r12)
      mtctr     r12
      bctrl

    .loc_0x9C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80374558
 * Size:	000244
 */
void Morimura::TZukanBase::setShortenIndex((int, int, bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r24, 0x10(r1)
      mr        r26, r3
      mr        r27, r5
      lbz       r0, 0x240(r3)
      cmplwi    r0, 0
      beq-      .loc_0x21C
      lwz       r3, 0x88(r26)
      rlwinm    r30,r4,2,0,29
      lwzx      r3, r3, r30
      lwz       r0, 0x0(r3)
      cmpwi     r0, 0
      bge-      .loc_0x40
      li        r27, -0x1

    .loc_0x40:
      stw       r27, 0x0(r3)
      lbz       r0, 0x8C(r26)
      cmplwi    r0, 0
      beq-      .loc_0x118
      cmpwi     r27, 0
      blt-      .loc_0x118
      lwz       r0, 0x230(r26)
      cmpw      r27, r0
      bge-      .loc_0x118
      lwz       r3, 0x22C(r26)
      rlwinm    r31,r27,2,0,29
      lwz       r4, 0x184(r26)
      lwzx      r0, r3, r31
      lbzx      r0, r4, r0
      cmplwi    r0, 0
      beq-      .loc_0x118
      lwz       r3, 0x88(r26)
      mr        r4, r27
      lwzx      r3, r3, r30
      bl        0x2DDF4
      lwz       r3, 0x88(r26)
      lwzx      r3, r3, r30
      lwz       r0, 0xC(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0xFC
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0xCC
      lwz       r3, 0x20(r3)
      li        r5, 0
      lwz       r4, 0x22C(r26)
      lwz       r3, 0x4(r3)
      lwzx      r4, r4, r31
      bl        0x2E3C4
      b         .loc_0x230

    .loc_0xCC:
      lwz       r5, 0x20(r3)
      mr        r3, r26
      lwz       r4, 0x22C(r26)
      lwz       r27, 0x4(r5)
      lwzx      r4, r4, r31
      bl        0x338
      lwz       r4, 0x22C(r26)
      mr        r5, r3
      mr        r3, r27
      lwzx      r4, r4, r31
      bl        0x2E394
      b         .loc_0x230

    .loc_0xFC:
      lwz       r4, 0x22C(r26)
      lwz       r3, 0x20(r3)
      lwzx      r4, r4, r31
      lwz       r3, 0x4(r3)
      addi      r0, r4, 0x1
      stw       r0, 0x18(r3)
      b         .loc_0x230

    .loc_0x118:
      li        r29, 0
      li        r28, 0
      li        r31, 0

    .loc_0x124:
      cmpwi     r27, 0
      blt-      .loc_0x1E0
      lwz       r0, 0x230(r26)
      add       r3, r28, r27
      cmpw      r3, r0
      bge-      .loc_0x1E0
      lwz       r0, 0x234(r26)
      cmpwi     r0, 0
      blt-      .loc_0x170
      cmpw      r3, r0
      blt-      .loc_0x170
      lwz       r0, 0x88(r26)
      li        r4, -0x1
      li        r5, 0
      lwzx      r3, r30, r0
      lwz       r3, 0x20(r3)
      lwzx      r3, r3, r31
      bl        0x2E320
      b         .loc_0x1FC

    .loc_0x170:
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0x1A4
      lwz       r4, 0x88(r26)
      rlwinm    r0,r3,2,0,29
      lwz       r3, 0x22C(r26)
      li        r5, 0
      lwzx      r6, r30, r4
      lwzx      r4, r3, r0
      lwz       r3, 0x20(r6)
      lwzx      r3, r3, r31
      bl        0x2E2EC
      b         .loc_0x1FC

    .loc_0x1A4:
      lwz       r0, 0x88(r26)
      rlwinm    r24,r3,2,0,29
      lwz       r4, 0x22C(r26)
      mr        r3, r26
      lwzx      r5, r30, r0
      lwzx      r4, r4, r24
      lwz       r5, 0x20(r5)
      lwzx      r25, r5, r31
      bl        0x254
      lwz       r4, 0x22C(r26)
      mr        r5, r3
      mr        r3, r25
      lwzx      r4, r4, r24
      bl        0x2E2B0
      b         .loc_0x1FC

    .loc_0x1E0:
      lwz       r0, 0x88(r26)
      li        r4, -0x1
      li        r5, 0
      lwzx      r3, r30, r0
      lwz       r3, 0x20(r3)
      lwzx      r3, r3, r31
      bl        0x2E290

    .loc_0x1FC:
      addi      r29, r29, 0x1
      addi      r31, r31, 0x4
      cmpwi     r29, 0x2
      bgt-      .loc_0x230
      addi      r28, r28, 0x1
      cmpwi     r28, 0x3
      blt+      .loc_0x124
      b         .loc_0x230

    .loc_0x21C:
      lwz       r3, 0x88(r26)
      rlwinm    r0,r4,2,0,29
      mr        r4, r27
      lwzx      r3, r3, r0
      bl        0x2DC54

    .loc_0x230:
      lmw       r24, 0x10(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8037479C
 * Size:	000088
 */
void Morimura::TZukanBase::windowOpenClose((unsigned long long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r0, 0x17C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x74
      lwz       r3, 0xDC(r31)
      lwz       r3, 0x20(r3)
      cntlzw    r0, r3
      rlwinm.   r0,r0,27,24,31
      beq-      .loc_0x54
      lwz       r3, 0x110(r31)
      li        r0, 0
      stw       r6, 0x1C(r3)
      stw       r5, 0x18(r3)
      stb       r0, 0x214(r31)
      lwz       r3, 0xDC(r31)
      bl        0x7A40
      b         .loc_0x74

    .loc_0x54:
      cmpwi     r3, 0x3
      beq-      .loc_0x74
      lwz       r3, -0x67A8(r13)
      li        r4, 0x1811
      li        r5, 0
      bl        -0x3C1D4
      lwz       r3, 0xDC(r31)
      bl        0x7B0C

    .loc_0x74:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80374824
 * Size:	000074
 */
void Morimura::TZukanBase::isPanelExist(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r12, 0x0(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x94(r30)
      mr        r31, r3
      lwz       r3, 0x88(r30)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2DD5C
      lwz       r0, -0x6638(r13)
      add       r0, r0, r3
      xor       r0, r31, r0
      srawi     r3, r0, 0x1
      and       r0, r0, r31
      lwz       r31, 0xC(r1)
      sub       r0, r3, r0
      lwz       r30, 0x8(r1)
      rlwinm    r3,r0,1,31,31
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80374898
 * Size:	000018
 */
void Morimura::TZukanBase::requireRequest(void)
{
    /*
    .loc_0x0:
      li        r4, 0x1
      li        r0, 0
      stb       r4, 0x218(r3)
      stw       r0, 0x220(r3)
      stb       r0, 0x217(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803748B0
 * Size:	00000C
 */
void Morimura::TZukanBase::requireEffectOff(void)
{
    /*
    .loc_0x0:
      li        r0, 0x1
      stb       r0, 0x217(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803748BC
 * Size:	00001C
 */
void Morimura::TZukanBase::isEnlargedWindow(void)
{
    /*
    .loc_0x0:
      lbz       r0, 0x244(r3)
      cmplwi    r0, 0
      beq-      .loc_0x14
      li        r3, 0x1
      blr

    .loc_0x14:
      lbz       r3, 0x216(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803748D8
 * Size:	000020
 */
void Morimura::TZukanBase::isMemoWindow(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0xDC(r3)
      lwz       r0, 0x20(r3)
      cmpwi     r0, 0
      beq-      .loc_0x18
      li        r3, 0x1
      blr

    .loc_0x18:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void Morimura::TZukanBase::requireSceneEnd(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803748F8
 * Size:	000010
 */
void Morimura::TZukanBase::checkRequest((int&))
{
    /*
    .loc_0x0:
      lwz       r0, 0x19C(r3)
      stw       r0, 0x0(r4)
      lwz       r3, 0x198(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80374908
 * Size:	000068
 */
void Morimura::TZukanBase::getCurrSelectId(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r0, 0x17C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x50
      lwz       r0, 0x94(r31)
      lwz       r3, 0x88(r31)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2DC84
      lwz       r12, 0x0(r31)
      mr        r4, r3
      mr        r3, r31
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl
      b         .loc_0x54

    .loc_0x50:
      li        r3, -0x1

    .loc_0x54:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80374970
 * Size:	000124
 */
void Morimura::TZukanBase::getTexInfo((int))
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
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0x48
      lwz       r3, 0x78(r30)
      lis       r4, 0x8049
      addi      r4, r4, 0x2988
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      b         .loc_0x10C

    .loc_0x48:
      lwz       r12, 0x0(r3)
      lwz       r12, 0xB4(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lis       r5, 0x4E45
      li        r0, 0x4445
      addi      r5, r5, 0x4D59
      xor       r4, r4, r5
      xor       r0, r3, r0
      or.       r0, r4, r0
      bne-      .loc_0xC8
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl
      mr        r31, r3
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xB4(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x14(r3)
      mr        r4, r31
      bl        -0x14123C
      lwz       r3, 0x20(r3)
      b         .loc_0x10C

    .loc_0xC8:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl
      mr        r0, r3
      mr        r3, r30
      lwz       r12, 0x0(r30)
      mr        r31, r0
      lwz       r12, 0xB4(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x10(r3)
      mr        r4, r31
      bl        -0x14D26C
      lwz       r3, 0x20(r3)

    .loc_0x10C:
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
 * Address:	........
 * Size:	0000BC
 */
void Morimura::TZukanBase::resetDebugShow(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void Morimura::TEnemyZukanIndex::getIndexInfo((int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void Morimura::TEnemyZukan::__ct(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80374A94
 * Size:	000124
 */
void Morimura::TEnemyZukan::__dt(void)
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
      beq-      .loc_0x108
      lis       r3, 0x804E
      addi      r3, r3, 0x3F68
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x10
      stw       r0, 0x18(r30)
      lwz       r3, 0x248(r30)
      lwz       r3, 0x8(r3)
      bl        -0x3513A0
      cmplwi    r30, 0
      beq-      .loc_0xF8
      lis       r3, 0x804E
      addi      r3, r3, 0x4054
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x10
      stw       r0, 0x18(r30)
      lwz       r3, -0x66CC(r13)
      cmplwi    r3, 0
      beq-      .loc_0x6C
      bl        -0x351548

    .loc_0x6C:
      li        r0, 0
      cmplwi    r30, 0
      stw       r0, -0x66CC(r13)
      beq-      .loc_0xF8
      lis       r3, 0x804E
      addi      r3, r3, 0x58C0
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0xF8
      lis       r3, 0x804E
      subi      r3, r3, 0x4708
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0xF8
      lis       r3, 0x804F
      subi      r3, r3, 0x28A8
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0xF8
      lis       r4, 0x804E
      mr        r3, r30
      subi      r4, r4, 0x7DC0
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      bl        0x9CA60
      addi      r3, r30, 0x18
      li        r4, 0
      bl        -0x357B48
      mr        r3, r30
      li        r4, 0
      bl        0x9CA00

    .loc_0xF8:
      extsh.    r0, r31
      ble-      .loc_0x108
      mr        r3, r30
      bl        -0x350AE4

    .loc_0x108:
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
 * Address:	80374BB8
 * Size:	001734
 */
void Morimura::TEnemyZukan::doCreate((JKRArchive*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xA0(r1)
      mflr      r0
      stw       r0, 0xA4(r1)
      stfd      f31, 0x90(r1)
      psq_st    f31,0x98(r1),0,0
      stfd      f30, 0x80(r1)
      psq_st    f30,0x88(r1),0,0
      stmw      r25, 0x64(r1)
      lis       r7, 0x8051
      lfs       f4, 0x838(r2)
      li        r11, 0
      subi      r10, r13, 0x66E0
      li        r9, 0xFF
      subi      r6, r13, 0x66D8
      subi      r5, r13, 0x66D4
      addi      r12, r7, 0x401C
      lfs       f3, 0x858(r2)
      li        r0, 0x46
      lfs       f2, 0x85C(r2)
      lis       r26, 0x8049
      lfs       f1, 0x860(r2)
      li        r8, 0xDC
      subi      r7, r13, 0x66DC
      lfs       f0, 0x7E8(r2)
      stfs      f4, 0x0(r12)
      mr        r31, r3
      mr        r29, r4
      addi      r30, r26, 0x2520
      stfs      f3, 0x8(r12)
      stfs      f2, 0x4(r12)
      stfs      f1, 0xC(r12)
      stfs      f0, 0x10(r12)
      stb       r11, -0x66E0(r13)
      stb       r11, 0x1(r10)
      stb       r9, 0x2(r10)
      stb       r11, -0x66DC(r13)
      stb       r8, 0x1(r7)
      stb       r8, 0x2(r7)
      stb       r0, -0x66D8(r13)
      stb       r9, 0x1(r6)
      stb       r9, 0x2(r6)
      stb       r9, -0x66D4(r13)
      stb       r9, 0x1(r5)
      stb       r11, 0x2(r5)
      stw       r29, 0x78(r3)
      bl        0xDF33C
      lis       r4, 0x4D52
      lis       r6, 0x4E45
      mr        r26, r3
      li        r5, 0x4445
      addi      r4, r4, 0x4D52
      addi      r6, r6, 0x4D59
      bl        -0x6596C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xE4
      stw       r26, 0x248(r31)
      b         .loc_0xEC

    .loc_0xE4:
      li        r0, 0x1
      stb       r0, -0x6760(r13)

    .loc_0xEC:
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0x2E0
      lwz       r4, -0x66D0(r13)
      cmplwi    r4, 0
      beq-      .loc_0x2C8
      lis       r3, 0x10
      li        r5, 0x1
      bl        -0x354DFC
      cmplwi    r3, 0
      stw       r3, -0x66CC(r13)
      bne-      .loc_0x130
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x7C2
      crclr     6, 0x6
      bl        -0x34A6A4

    .loc_0x130:
      lwz       r4, -0x66CC(r13)
      li        r3, 0x20
      li        r5, 0
      bl        -0x350DB4
      cmplwi    r3, 0
      beq-      .loc_0x18C
      lis       r4, 0x804B
      lis       r5, 0x804C
      addi      r0, r4, 0x1148
      lis       r4, 0x804C
      stw       r0, 0x0(r3)
      li        r6, 0
      addi      r5, r5, 0xB44
      addi      r0, r4, 0xB2C
      stw       r6, 0x4(r3)
      stw       r5, 0x0(r3)
      stw       r6, 0x8(r3)
      stw       r6, 0xC(r3)
      stw       r6, 0x10(r3)
      stw       r6, 0x14(r3)
      stw       r6, 0x18(r3)
      stw       r6, 0x1C(r3)
      stw       r0, 0x0(r3)

    .loc_0x18C:
      stw       r3, 0x248(r31)
      li        r0, 0x1
      li        r3, 0x51
      lwz       r5, -0x66CC(r13)
      lwz       r4, 0x248(r31)
      stw       r5, 0x8(r4)
      stb       r0, -0x6760(r13)
      bl        -0x350DB4
      stw       r3, 0x180(r31)
      li        r25, 0
      lfd       f30, 0x820(r2)
      li        r26, 0
      lfs       f31, 0x854(r2)
      lis       r28, 0x4330
      li        r27, 0x1

    .loc_0x1C8:
      lwz       r3, 0x180(r31)
      stbx      r26, r3, r25
      bl        -0x2AB7E8
      xoris     r0, r3, 0x8000
      stw       r28, 0x40(r1)
      lfs       f0, -0x6704(r13)
      stw       r0, 0x44(r1)
      lfd       f1, 0x40(r1)
      fsubs     f1, f1, f30
      fdivs     f1, f1, f31
      fcmpo     cr0, f1, f0
      bge-      .loc_0x200
      lwz       r3, 0x180(r31)
      stbx      r27, r3, r25

    .loc_0x200:
      addi      r25, r25, 0x1
      cmpwi     r25, 0x51
      blt+      .loc_0x1C8
      lwz       r4, -0x66CC(r13)
      li        r3, 0x4
      li        r5, 0
      bl        -0x350E90
      lwz       r4, 0x248(r31)
      stw       r3, 0x1C(r4)
      bl        -0x2AB83C
      lwz       r4, 0x248(r31)
      li        r0, 0
      li        r3, 0x28
      lwz       r4, 0x1C(r4)
      stw       r0, 0x0(r4)
      bl        -0x350F50
      cmplwi    r3, 0
      beq-      .loc_0x2A0
      lis       r4, 0x804B
      lis       r7, 0x804E
      addi      r0, r4, 0x1148
      lis       r6, 0x305F
      stw       r0, 0x0(r3)
      li        r8, 0
      lis       r5, 0x34
      lis       r4, 0x315F
      stw       r8, 0x4(r3)
      subi      r0, r7, 0x61F8
      addi      r6, r6, 0x3030
      addi      r5, r5, 0x3731
      stw       r0, 0x0(r3)
      addi      r4, r4, 0x3030
      li        r0, 0xB4
      stw       r8, 0x8(r3)
      stw       r6, 0x14(r3)
      stw       r5, 0x10(r3)
      stw       r4, 0x1C(r3)
      stw       r5, 0x18(r3)
      stb       r0, 0x20(r3)
      stb       r8, 0x21(r3)

    .loc_0x2A0:
      lwz       r4, 0x248(r31)
      stw       r3, 0x18(r4)
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x248(r31)
      bl        0xDD248
      b         .loc_0x350

    .loc_0x2C8:
      addi      r3, r30, 0xC
      addi      r5, r30, 0x4C0
      li        r4, 0x7DC
      crclr     6, 0x6
      bl        -0x34A850
      b         .loc_0x350

    .loc_0x2E0:
      li        r3, 0x28
      bl        -0x350FF8
      cmplwi    r3, 0
      beq-      .loc_0x348
      lis       r4, 0x804B
      lis       r7, 0x804E
      addi      r0, r4, 0x1148
      lis       r6, 0x305F
      stw       r0, 0x0(r3)
      li        r8, 0
      lis       r5, 0x34
      lis       r4, 0x315F
      stw       r8, 0x4(r3)
      subi      r0, r7, 0x61F8
      addi      r6, r6, 0x3030
      addi      r5, r5, 0x3731
      stw       r0, 0x0(r3)
      addi      r4, r4, 0x3030
      li        r0, 0xB4
      stw       r8, 0x8(r3)
      stw       r6, 0x14(r3)
      stw       r5, 0x10(r3)
      stw       r4, 0x1C(r3)
      stw       r5, 0x18(r3)
      stb       r0, 0x20(r3)
      stb       r8, 0x21(r3)

    .loc_0x348:
      lwz       r4, 0x248(r31)
      stw       r3, 0x18(r4)

    .loc_0x350:
      li        r0, 0x1
      stb       r0, 0x8C(r31)
      lbz       r0, 0x8C(r31)
      cmplwi    r0, 0
      beq-      .loc_0x4C8
      li        r3, 0x51
      bl        -0x350F74
      li        r0, 0x5
      stw       r3, 0x184(r31)
      li        r11, 0
      mtctr     r0

    .loc_0x37C:
      lwz       r3, 0x184(r31)
      li        r10, 0
      addi      r9, r11, 0x1
      addi      r8, r11, 0x2
      stbx      r10, r3, r11
      addi      r7, r11, 0x3
      addi      r6, r11, 0x4
      addi      r5, r11, 0x5
      lwz       r3, 0x184(r31)
      addi      r4, r11, 0x6
      addi      r0, r11, 0x7
      stbx      r10, r3, r9
      addi      r9, r11, 0x9
      lwz       r3, 0x184(r31)
      stbx      r10, r3, r8
      addi      r8, r11, 0xA
      lwz       r3, 0x184(r31)
      stbx      r10, r3, r7
      addi      r7, r11, 0xB
      lwz       r3, 0x184(r31)
      stbx      r10, r3, r6
      addi      r6, r11, 0xC
      lwz       r3, 0x184(r31)
      stbx      r10, r3, r5
      addi      r5, r11, 0xD
      lwz       r3, 0x184(r31)
      stbx      r10, r3, r4
      addi      r4, r11, 0xE
      lwz       r3, 0x184(r31)
      stbx      r10, r3, r0
      addi      r0, r11, 0xF
      addi      r11, r11, 0x8
      lwz       r3, 0x184(r31)
      stbx      r10, r3, r11
      addi      r11, r11, 0x8
      lwz       r3, 0x184(r31)
      stbx      r10, r3, r9
      lwz       r3, 0x184(r31)
      stbx      r10, r3, r8
      lwz       r3, 0x184(r31)
      stbx      r10, r3, r7
      lwz       r3, 0x184(r31)
      stbx      r10, r3, r6
      lwz       r3, 0x184(r31)
      stbx      r10, r3, r5
      lwz       r3, 0x184(r31)
      stbx      r10, r3, r4
      lwz       r3, 0x184(r31)
      stbx      r10, r3, r0
      bdnz+     .loc_0x37C
      subfic    r0, r11, 0x51
      mtctr     r0
      cmpwi     r11, 0x51
      bge-      .loc_0x464

    .loc_0x454:
      lwz       r3, 0x184(r31)
      stbx      r10, r3, r11
      addi      r11, r11, 0x1
      bdnz+     .loc_0x454

    .loc_0x464:
      lwz       r3, 0x184(r31)
      li        r0, 0x1
      stb       r0, 0x4E(r3)
      lwz       r3, 0x184(r31)
      stb       r0, 0x4D(r3)
      lwz       r3, 0x184(r31)
      stb       r0, 0x49(r3)
      lwz       r3, 0x184(r31)
      stb       r0, 0x4A(r3)
      lwz       r3, 0x184(r31)
      stb       r0, 0x46(r3)
      lwz       r3, 0x184(r31)
      stb       r0, 0x4C(r3)
      lwz       r3, 0x184(r31)
      stb       r0, 0x50(r3)
      lwz       r3, 0x184(r31)
      stb       r0, 0x4B(r3)
      lwz       r3, 0x184(r31)
      stb       r0, 0x4F(r3)
      lwz       r3, 0x184(r31)
      stb       r0, 0x47(r3)
      lwz       r3, 0x184(r31)
      stb       r0, 0x45(r3)
      lwz       r3, 0x184(r31)
      stb       r0, 0x48(r3)

    .loc_0x4C8:
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0x4E8
      lbz       r0, -0x6706(r13)
      cmplwi    r0, 0
      bne-      .loc_0x4E8
      li        r0, 0
      stb       r0, 0x240(r31)

    .loc_0x4E8:
      lwz       r3, -0x6B70(r13)
      cmplwi    r3, 0
      beq-      .loc_0x508
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x508
      li        r0, 0
      stb       r0, 0x240(r31)

    .loc_0x508:
      li        r0, -0x1
      stw       r0, 0x234(r31)
      lbz       r0, 0x240(r31)
      cmplwi    r0, 0
      beq-      .loc_0x778
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0x680
      bl        -0x2ABB40
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      mr        r27, r3
      bl        -0x2ABB5C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x44(r1)
      lfd       f3, 0x820(r2)
      stw       r0, 0x40(r1)
      lfs       f1, 0x854(r2)
      lfd       f2, 0x40(r1)
      lfs       f0, 0x864(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x48(r1)
      lwz       r3, 0x4C(r1)
      addi      r25, r3, 0x1
      bl        -0x2ABB9C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x54(r1)
      li        r4, 0
      lfd       f3, 0x820(r2)
      stw       r0, 0x50(r1)
      lfs       f1, 0x854(r2)
      lfd       f2, 0x50(r1)
      lfs       f0, 0x838(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x58(r1)
      lwz       r0, 0x5C(r1)
      subfic    r26, r0, 0x55
      mtctr     r27
      cmpwi     r27, 0
      ble-      .loc_0x5F8

    .loc_0x5D4:
      cmpw      r4, r25
      blt-      .loc_0x5E4
      cmpw      r4, r26
      ble-      .loc_0x5F0

    .loc_0x5E4:
      lwz       r3, 0x230(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x230(r31)

    .loc_0x5F0:
      addi      r4, r4, 0x1
      bdnz+     .loc_0x5D4

    .loc_0x5F8:
      lwz       r0, 0x230(r31)
      cmpwi     r0, 0
      bne-      .loc_0x610
      li        r0, 0
      stb       r0, 0x242(r31)
      b         .loc_0x61C

    .loc_0x610:
      rlwinm    r3,r0,2,0,29
      bl        -0x351220
      stw       r3, 0x22C(r31)

    .loc_0x61C:
      li        r5, 0
      li        r6, 0
      li        r4, 0
      mtctr     r27
      cmpwi     r27, 0
      ble-      .loc_0x778

    .loc_0x634:
      cmpw      r6, r25
      blt-      .loc_0x644
      cmpw      r6, r26
      ble-      .loc_0x674

    .loc_0x644:
      lwz       r3, 0x22C(r31)
      stwx      r6, r3, r4
      lwz       r0, 0x234(r31)
      cmpwi     r0, 0
      bge-      .loc_0x66C
      lwz       r3, 0x184(r31)
      lbzx      r0, r3, r6
      cmplwi    r0, 0
      beq-      .loc_0x66C
      stw       r5, 0x234(r31)

    .loc_0x66C:
      addi      r4, r4, 0x4
      addi      r5, r5, 0x1

    .loc_0x674:
      addi      r6, r6, 0x1
      bdnz+     .loc_0x634
      b         .loc_0x778

    .loc_0x680:
      li        r25, 0
      b         .loc_0x6B8

    .loc_0x688:
      mr        r3, r31
      mr        r4, r25
      lwz       r12, 0x0(r31)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x6B4
      lwz       r3, 0x230(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x230(r31)

    .loc_0x6B4:
      addi      r25, r25, 0x1

    .loc_0x6B8:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      cmpw      r25, r3
      blt+      .loc_0x688
      lwz       r0, 0x230(r31)
      cmpwi     r0, 0
      bne-      .loc_0x6EC
      li        r0, 0
      stb       r0, 0x242(r31)
      b         .loc_0x6F8

    .loc_0x6EC:
      rlwinm    r3,r0,2,0,29
      bl        -0x3512FC
      stw       r3, 0x22C(r31)

    .loc_0x6F8:
      li        r25, 0
      li        r27, 0
      li        r26, 0
      b         .loc_0x75C

    .loc_0x708:
      mr        r3, r31
      mr        r4, r27
      lwz       r12, 0x0(r31)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x758
      lwz       r3, 0x22C(r31)
      stwx      r27, r3, r26
      lwz       r0, 0x234(r31)
      cmpwi     r0, 0
      bge-      .loc_0x750
      lwz       r3, 0x184(r31)
      lbzx      r0, r3, r27
      cmplwi    r0, 0
      beq-      .loc_0x750
      stw       r25, 0x234(r31)

    .loc_0x750:
      addi      r26, r26, 0x4
      addi      r25, r25, 0x1

    .loc_0x758:
      addi      r27, r27, 0x1

    .loc_0x75C:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      cmpw      r27, r3
      blt+      .loc_0x708

    .loc_0x778:
      li        r3, 0x18
      bl        -0x351490
      mr.       r0, r3
      beq-      .loc_0x798
      mr        r4, r29
      li        r5, 0x2
      bl        0x2C060
      mr        r0, r3

    .loc_0x798:
      stw       r0, 0x7C(r31)
      addi      r4, r30, 0x4E8
      lis       r5, 0x2
      lwz       r3, 0x7C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x7C(r31)
      addi      r4, r30, 0x504
      bl        0x2C0E8
      lwz       r3, 0x7C(r31)
      addi      r4, r30, 0x520
      bl        0x2C0DC
      lwz       r5, 0x7C(r31)
      lis       r4, 0x6133
      lwz       r3, 0x78(r31)
      addi      r6, r4, 0x646C
      lwz       r4, 0x8(r5)
      li        r5, 0x6F74
      bl        -0x48150
      stw       r3, 0xE4(r31)
      lis       r3, 0x6133
      addi      r6, r3, 0x646C
      li        r5, 0x6F74
      lwz       r3, 0x7C(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xF8(r31)
      lwz       r0, 0xF8(r31)
      cmplwi    r0, 0
      bne-      .loc_0x838
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x85E
      crclr     6, 0x6
      bl        -0x34ADAC

    .loc_0x838:
      lwz       r0, 0xE4(r31)
      cmplwi    r0, 0
      bne-      .loc_0x858
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x85F
      crclr     6, 0x6
      bl        -0x34ADCC

    .loc_0x858:
      lwz       r3, 0xE4(r31)
      lfs       f1, 0x7C0(r2)
      lwz       r3, 0x34(r3)
      bl        -0x6FD74
      lwz       r3, 0xE4(r31)
      lwz       r3, 0x34(r3)
      bl        -0x6FB70
      li        r3, 0x8
      bl        -0x35158C
      mr.       r0, r3
      beq-      .loc_0x890
      lwz       r4, 0xE4(r31)
      bl        -0x480D4
      mr        r0, r3

    .loc_0x890:
      stw       r0, 0xEC(r31)
      lwz       r0, 0xEC(r31)
      cmplwi    r0, 0
      bne-      .loc_0x8B4
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x864
      crclr     6, 0x6
      bl        -0x34AE28

    .loc_0x8B4:
      li        r3, 0x18
      bl        -0x3515CC
      mr.       r0, r3
      beq-      .loc_0x8D4
      mr        r4, r29
      li        r5, 0
      bl        0x2BF24
      mr        r0, r3

    .loc_0x8D4:
      stw       r0, 0xB8(r31)
      addi      r4, r30, 0x53C
      lis       r5, 0x2
      lwz       r3, 0xB8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      li        r3, 0x18
      bl        -0x35160C
      mr.       r0, r3
      beq-      .loc_0x914
      mr        r4, r29
      li        r5, 0x1
      bl        0x2BEE4
      mr        r0, r3

    .loc_0x914:
      stw       r0, 0xBC(r31)
      addi      r4, r30, 0x554
      lis       r5, 0x2
      lwz       r3, 0xBC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xBC(r31)
      addi      r4, r30, 0x570
      bl        0x2BF6C
      lwz       r3, 0xBC(r31)
      lis       r5, 0x656C
      lis       r4, 0x506D
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x5F6C
      addi      r5, r4, 0x6F64
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0xB0(r3)
      lwz       r3, 0x248(r31)
      lwz       r28, -0x77D4(r13)
      lwz       r3, 0x8(r3)
      bl        -0x351F90
      li        r3, 0x18
      bl        -0x351698
      mr.       r27, r3
      beq-      .loc_0x9A8
      mr        r4, r29
      li        r5, 0
      bl        0x2BE58
      lis       r3, 0x804E
      addi      r0, r3, 0x596C
      stw       r0, 0x0(r27)

    .loc_0x9A8:
      stw       r27, 0xB4(r31)
      addi      r4, r30, 0x58C
      lis       r5, 0x2
      lwz       r3, 0xB4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0x228(r31)
      lbz       r0, -0x6708(r13)
      cmplwi    r0, 0
      beq-      .loc_0x9E8
      li        r0, 0x1
      stb       r0, 0x228(r31)
      b         .loc_0xA04

    .loc_0x9E8:
      lwz       r3, -0x6514(r13)
      bl        0xAD98C
      bl        -0x140E90
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xA04
      li        r0, 0x1
      stb       r0, 0x228(r31)

    .loc_0xA04:
      li        r3, 0x18
      bl        -0x35171C
      mr.       r0, r3
      beq-      .loc_0xA24
      mr        r4, r29
      li        r5, 0
      bl        0x2BDD4
      mr        r0, r3

    .loc_0xA24:
      stw       r0, 0xC0(r31)
      addi      r4, r30, 0x5A8
      lis       r5, 0x2
      lwz       r3, 0xC0(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      li        r3, 0xB0
      bl        -0x35175C
      mr.       r27, r3
      beq-      .loc_0xA90
      lis       r4, 0x804D
      lwz       r7, 0x78(r31)
      addi      r4, r4, 0x7E18
      li        r5, 0x4
      li        r6, 0x4
      bl        -0x6A0FC
      lis       r3, 0x804E
      li        r0, 0
      addi      r3, r3, 0x583C
      lfs       f0, 0x7C0(r2)
      stw       r3, 0x0(r27)
      stb       r0, 0xA8(r27)
      stb       r0, 0xA9(r27)
      stb       r0, 0xAA(r27)
      stfs      f0, 0xAC(r27)

    .loc_0xA90:
      stw       r27, 0x24C(r31)
      lis       r4, 0x6569
      addi      r0, r31, 0x188
      lis       r3, 0x5067
      stw       r0, 0x8(r1)
      addi      r5, r3, 0x6973
      li        r0, 0x1
      addi      r6, r4, 0x3135
      stw       r0, 0xC(r1)
      mr        r7, r5
      mr        r9, r5
      addi      r8, r4, 0x3134
      lwz       r3, 0x24C(r31)
      addi      r10, r4, 0x3132
      lwz       r4, 0xC0(r31)
      lwz       r12, 0x0(r3)
      lwz       r4, 0x8(r4)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x24C(r31)
      li        r4, 0x1
      bl        -0x69EC8
      lwz       r3, 0xC0(r31)
      lis       r5, 0x6569
      lis       r4, 0x5067
      lwz       r7, 0x24C(r31)
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x3135
      addi      r5, r4, 0x6973
      bl        0xBF464
      li        r3, 0xB0
      bl        -0x351824
      mr.       r27, r3
      beq-      .loc_0xB58
      lis       r4, 0x804D
      lwz       r7, 0x78(r31)
      addi      r4, r4, 0x7E18
      li        r5, 0xA
      li        r6, 0x4
      bl        -0x6A1C4
      lis       r3, 0x804E
      li        r0, 0
      addi      r3, r3, 0x583C
      lfs       f0, 0x7C0(r2)
      stw       r3, 0x0(r27)
      stb       r0, 0xA8(r27)
      stb       r0, 0xA9(r27)
      stb       r0, 0xAA(r27)
      stfs      f0, 0xAC(r27)

    .loc_0xB58:
      stw       r27, 0x254(r31)
      lis       r4, 0x6569
      addi      r0, r31, 0x18C
      lis       r3, 0x5067
      stw       r0, 0x8(r1)
      addi      r5, r3, 0x6973
      li        r0, 0x1
      addi      r6, r4, 0x3030
      stw       r0, 0xC(r1)
      mr        r7, r5
      mr        r9, r5
      addi      r8, r4, 0x3031
      lwz       r3, 0x254(r31)
      addi      r10, r4, 0x3033
      lwz       r4, 0xC0(r31)
      lwz       r12, 0x0(r3)
      lwz       r4, 0x8(r4)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x254(r31)
      li        r4, 0x1
      bl        -0x69F90
      lwz       r3, 0xC0(r31)
      lis       r5, 0x6569
      lis       r4, 0x5067
      lwz       r7, 0x254(r31)
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x3030
      addi      r5, r4, 0x6973
      bl        0xBF39C
      li        r3, 0xB0
      bl        -0x3518EC
      mr.       r27, r3
      beq-      .loc_0xC20
      lis       r4, 0x804D
      lwz       r7, 0x78(r31)
      addi      r4, r4, 0x7E18
      li        r5, 0xA
      li        r6, 0x4
      bl        -0x6A28C
      lis       r3, 0x804E
      li        r0, 0
      addi      r3, r3, 0x583C
      lfs       f0, 0x7C0(r2)
      stw       r3, 0x0(r27)
      stb       r0, 0xA8(r27)
      stb       r0, 0xA9(r27)
      stb       r0, 0xAA(r27)
      stfs      f0, 0xAC(r27)

    .loc_0xC20:
      stw       r27, 0x250(r31)
      lis       r4, 0x7369
      addi      r0, r31, 0x190
      lis       r3, 0x5074
      stw       r0, 0x8(r1)
      addi      r5, r3, 0x616F
      li        r0, 0x1
      addi      r6, r4, 0x3030
      stw       r0, 0xC(r1)
      mr        r7, r5
      mr        r9, r5
      addi      r8, r4, 0x3031
      lwz       r3, 0x250(r31)
      addi      r10, r4, 0x3033
      lwz       r4, 0xC0(r31)
      lwz       r12, 0x0(r3)
      lwz       r4, 0x8(r4)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x250(r31)
      li        r4, 0x1
      bl        -0x6A058
      lwz       r3, 0xC0(r31)
      lis       r5, 0x7369
      lis       r4, 0x5074
      lwz       r7, 0x250(r31)
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x3030
      addi      r5, r4, 0x616F
      bl        0xBF2D4
      lwz       r3, 0xC0(r31)
      lis       r5, 0x696E
      lis       r4, 0x5074
      lwz       r9, 0x78(r31)
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x6F31
      addi      r5, r4, 0x656B
      addi      r7, r31, 0x194
      li        r8, 0x3
      bl        0x2C3E4
      stw       r3, 0xE0(r31)
      lbz       r0, 0x240(r31)
      cmplwi    r0, 0
      beq-      .loc_0xD0C
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      bne-      .loc_0xCF0
      lwz       r3, 0xE0(r31)
      bl        -0x6A0DC
      li        r0, 0
      stb       r0, 0xB0(r3)

    .loc_0xCF0:
      lbz       r0, -0x6705(r13)
      cmplwi    r0, 0
      beq-      .loc_0xD0C
      lwz       r3, 0xE0(r31)
      bl        -0x6A0F8
      li        r0, 0x1
      stb       r0, 0xB0(r3)

    .loc_0xD0C:
      lwz       r3, 0xC0(r31)
      lis       r5, 0x6569
      lis       r4, 0x5067
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x3030
      addi      r5, r4, 0x6973
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r4, 0x6569
      stb       r0, 0xB0(r3)
      lis       r3, 0x5067
      addi      r6, r4, 0x3031
      lwz       r4, 0xC0(r31)
      addi      r5, r3, 0x6973
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r4, 0x6569
      stb       r0, 0xB0(r3)
      lis       r3, 0x5067
      addi      r6, r4, 0x3032
      lwz       r4, 0xC0(r31)
      addi      r5, r3, 0x6973
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r4, 0x6569
      stb       r0, 0xB0(r3)
      lis       r3, 0x5067
      addi      r6, r4, 0x3033
      lwz       r4, 0xC0(r31)
      addi      r5, r3, 0x6973
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r4, 0x6569
      stb       r0, 0xB0(r3)
      lis       r3, 0x5067
      addi      r6, r4, 0x3132
      lwz       r4, 0xC0(r31)
      addi      r5, r3, 0x6973
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r4, 0x6569
      stb       r0, 0xB0(r3)
      lis       r3, 0x5067
      addi      r6, r4, 0x3133
      lwz       r4, 0xC0(r31)
      addi      r5, r3, 0x6973
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r4, 0x6569
      stb       r0, 0xB0(r3)
      lis       r3, 0x5067
      addi      r6, r4, 0x3134
      lwz       r4, 0xC0(r31)
      addi      r5, r3, 0x6973
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r4, 0x6569
      stb       r0, 0xB0(r3)
      lis       r3, 0x5067
      addi      r6, r4, 0x3135
      lwz       r4, 0xC0(r31)
      addi      r5, r3, 0x6973
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r4, 0x7369
      stb       r0, 0xB0(r3)
      lis       r3, 0x5074
      addi      r6, r4, 0x3030
      lwz       r4, 0xC0(r31)
      addi      r5, r3, 0x616F
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r4, 0x7369
      stb       r0, 0xB0(r3)
      lis       r3, 0x5074
      addi      r6, r4, 0x3031
      lwz       r4, 0xC0(r31)
      addi      r5, r3, 0x616F
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r4, 0x7369
      stb       r0, 0xB0(r3)
      lis       r3, 0x5074
      addi      r6, r4, 0x3032
      lwz       r4, 0xC0(r31)
      addi      r5, r3, 0x616F
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r4, 0x7369
      stb       r0, 0xB0(r3)
      lis       r3, 0x5074
      addi      r6, r4, 0x3033
      lwz       r4, 0xC0(r31)
      addi      r5, r3, 0x616F
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0xB0(r3)
      li        r3, 0x58
      bl        -0x351C64
      mr.       r0, r3
      beq-      .loc_0xF6C
      mr        r4, r29
      li        r5, 0x2
      bl        0x5D98
      mr        r0, r3

    .loc_0xF6C:
      stw       r0, 0xDC(r31)
      addi      r4, r30, 0x5C4
      lis       r5, 0x2
      lwz       r3, 0xDC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xDC(r31)
      addi      r4, r30, 0x5DC
      bl        0x2B914
      lwz       r3, 0xDC(r31)
      addi      r4, r30, 0x5F4
      bl        0x2B908
      lwz       r5, 0xDC(r31)
      lis       r4, 0x6133
      lwz       r3, 0x78(r31)
      addi      r6, r4, 0x6473
      lwz       r4, 0x8(r5)
      li        r5, 0x6F74
      bl        -0x48924
      stw       r3, 0xE8(r31)
      lis       r3, 0x6133
      addi      r6, r3, 0x6473
      li        r5, 0x6F74
      lwz       r3, 0xDC(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x100(r31)
      lwz       r0, 0x100(r31)
      cmplwi    r0, 0
      bne-      .loc_0x100C
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x8D9
      crclr     6, 0x6
      bl        -0x34B580

    .loc_0x100C:
      lwz       r0, 0xE8(r31)
      cmplwi    r0, 0
      bne-      .loc_0x102C
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x8DA
      crclr     6, 0x6
      bl        -0x34B5A0

    .loc_0x102C:
      lwz       r3, 0xE8(r31)
      lfs       f1, 0x7C4(r2)
      lwz       r3, 0x34(r3)
      bl        -0x70548
      lwz       r3, 0xE8(r31)
      lwz       r3, 0x34(r3)
      bl        -0x70344
      lwz       r4, 0xDC(r31)
      lis       r3, 0x6463
      addi      r6, r3, 0x6170
      li        r5, 0x5033
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x104(r31)
      lwz       r0, 0x104(r31)
      cmplwi    r0, 0
      bne-      .loc_0x1090
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x8DF
      crclr     6, 0x6
      bl        -0x34B604

    .loc_0x1090:
      li        r3, 0x18
      bl        -0x351DA8
      mr.       r0, r3
      beq-      .loc_0x10B0
      mr        r4, r29
      li        r5, 0
      bl        0x2B748
      mr        r0, r3

    .loc_0x10B0:
      stw       r0, 0xC4(r31)
      addi      r4, r30, 0x60C
      lis       r5, 0x2
      lwz       r3, 0xC4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfd       f1, 0x490(r30)
      li        r3, 0x18
      lfd       f0, 0x498(r30)
      stfd      f1, 0x30(r1)
      stfd      f0, 0x38(r1)
      bl        -0x351DF8
      mr.       r0, r3
      beq-      .loc_0x1110
      lis       r6, 0x305F
      lis       r5, 0x31
      addi      r4, r1, 0x30
      li        r7, 0x2
      addi      r6, r6, 0x3030
      addi      r5, r5, 0x3330
      bl        0x2B424
      mr        r0, r3

    .loc_0x1110:
      stw       r0, 0x1E4(r31)
      li        r3, 0x18
      lfd       f1, 0x4A0(r30)
      lfd       f0, 0x4A8(r30)
      stfd      f1, 0x20(r1)
      stfd      f0, 0x28(r1)
      bl        -0x351E3C
      mr.       r0, r3
      beq-      .loc_0x1154
      lis       r6, 0x305F
      lis       r5, 0x31
      addi      r4, r1, 0x20
      li        r7, 0x2
      addi      r6, r6, 0x3030
      addi      r5, r5, 0x3830
      bl        0x2B3E0
      mr        r0, r3

    .loc_0x1154:
      stw       r0, 0x1E8(r31)
      li        r3, 0x18
      lfd       f1, 0x4B0(r30)
      lfd       f0, 0x4B8(r30)
      stfd      f1, 0x10(r1)
      stfd      f0, 0x18(r1)
      bl        -0x351E80
      mr.       r0, r3
      beq-      .loc_0x1198
      lis       r6, 0x305F
      lis       r5, 0x31
      addi      r4, r1, 0x10
      li        r7, 0x2
      addi      r6, r6, 0x3030
      addi      r5, r5, 0x3730
      bl        0x2B39C
      mr        r0, r3

    .loc_0x1198:
      stw       r0, 0x1EC(r31)
      li        r0, 0xA5
      li        r7, 0
      li        r6, 0xFF
      sth       r0, 0x1B0(r31)
      li        r5, 0xC3
      li        r4, 0xD5
      li        r3, 0x28
      sth       r7, 0x1B2(r31)
      li        r0, 0xC8
      sth       r7, 0x1B4(r31)
      sth       r6, 0x1B6(r31)
      sth       r7, 0x1B8(r31)
      sth       r5, 0x1BA(r31)
      sth       r4, 0x1BC(r31)
      sth       r6, 0x1BE(r31)
      sth       r6, 0x1C0(r31)
      sth       r3, 0x1C2(r31)
      sth       r3, 0x1C4(r31)
      sth       r7, 0x1C6(r31)
      sth       r3, 0x1C8(r31)
      sth       r3, 0x1CA(r31)
      sth       r6, 0x1CC(r31)
      sth       r7, 0x1CE(r31)
      sth       r6, 0x1D0(r31)
      sth       r0, 0x1D2(r31)
      sth       r0, 0x1D4(r31)
      sth       r6, 0x1D6(r31)
      sth       r0, 0x1D8(r31)
      sth       r0, 0x1DA(r31)
      sth       r6, 0x1DC(r31)
      sth       r6, 0x1DE(r31)
      lbz       r0, 0x240(r31)
      cmplwi    r0, 0
      beq-      .loc_0x126C
      lwz       r0, 0x230(r31)
      li        r6, 0
      mtctr     r0
      cmpwi     r0, 0
      ble-      .loc_0x1264

    .loc_0x1238:
      lwz       r3, 0x22C(r31)
      addi      r5, r6, 0x1
      lwz       r4, 0x184(r31)
      lwzx      r0, r3, r7
      lbzx      r0, r4, r0
      cmplwi    r0, 0
      beq-      .loc_0x1258
      addi      r5, r6, 0x6

    .loc_0x1258:
      mr        r6, r5
      addi      r7, r7, 0x4
      bdnz+     .loc_0x1238

    .loc_0x1264:
      stw       r6, 0x238(r31)
      b         .loc_0x1284

    .loc_0x126C:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x238(r31)

    .loc_0x1284:
      mr        r3, r31
      mr        r4, r29
      bl        -0x4E78
      lwz       r3, 0x88(r31)
      lbz       r0, 0x240(r31)
      lwz       r4, 0x0(r3)
      lwz       r3, 0x4(r3)
      cmplwi    r0, 0
      lwz       r4, 0x4(r4)
      lwz       r3, 0x4(r3)
      lfs       f0, 0xD8(r4)
      lfs       f1, 0xD8(r3)
      fsubs     f30, f1, f0
      beq-      .loc_0x12DC
      lha       r3, 0x8E(r31)
      lwz       r4, 0x238(r31)
      subi      r0, r3, 0x1
      mulli     r0, r0, 0x3
      cmpw      r4, r0
      bgt-      .loc_0x12DC
      li        r0, 0
      stb       r0, 0x242(r31)

    .loc_0x12DC:
      li        r25, 0
      lfs       f31, 0x7C0(r2)

    .loc_0x12E4:
      li        r27, 0
      li        r26, 0
      b         .loc_0x1334

    .loc_0x12F0:
      lwz       r3, 0x88(r31)
      lwzx      r4, r3, r26
      lfs       f0, 0x1C(r4)
      lwz       r3, 0x4(r4)
      fadds     f0, f0, f30
      stfs      f0, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x88(r31)
      addi      r27, r27, 0x1
      lwzx      r4, r3, r26
      addi      r26, r26, 0x4
      lwz       r3, 0x4(r4)
      lfs       f0, 0xD8(r3)
      stfs      f0, 0x1C(r4)

    .loc_0x1334:
      lha       r0, 0x8E(r31)
      cmpw      r27, r0
      blt+      .loc_0x12F0
      mr        r3, r31
      li        r4, 0
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x84(r31)
      li        r0, 0
      mr        r3, r31
      stfs      f31, 0x14(r4)
      stw       r0, 0x20(r4)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x84(r12)
      mtctr     r12
      bctrl
      addi      r25, r25, 0x1
      cmpwi     r25, 0x6
      blt+      .loc_0x12E4
      lwz       r3, 0x248(r31)
      li        r29, -0x1
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x13D4
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lis       r5, 0x4E45
      li        r0, 0x4445
      addi      r5, r5, 0x4D59
      xor       r4, r4, r5
      xor       r0, r3, r0
      or.       r0, r4, r0
      bne-      .loc_0x13D4
      lwz       r3, 0x248(r31)
      lwz       r3, 0x1C(r3)
      lwz       r29, 0x0(r3)

    .loc_0x13D4:
      cmpwi     r29, 0
      bge-      .loc_0x1448
      li        r25, 0
      b         .loc_0x142C

    .loc_0x13E4:
      mr        r3, r31
      mr        r4, r25
      lwz       r12, 0x0(r31)
      li        r5, 0
      lwz       r12, 0xE4(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1428
      lbz       r0, 0x240(r31)
      mr        r29, r25
      cmplwi    r0, 0
      beq-      .loc_0x1448
      lwz       r3, 0x22C(r31)
      rlwinm    r0,r25,2,0,29
      lwzx      r29, r3, r0
      b         .loc_0x1448

    .loc_0x1428:
      addi      r25, r25, 0x1

    .loc_0x142C:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      cmpw      r25, r3
      blt+      .loc_0x13E4

    .loc_0x1448:
      cmpwi     r29, 0
      blt-      .loc_0x16C4
      lbz       r0, 0x240(r31)
      cmplwi    r0, 0
      beq-      .loc_0x1498
      lwz       r0, 0x230(r31)
      li        r5, 0
      li        r4, 0
      mtctr     r0
      cmpwi     r0, 0
      ble-      .loc_0x1498

    .loc_0x1474:
      lwz       r3, 0x22C(r31)
      lwzx      r0, r3, r4
      cmpw      r29, r0
      bne-      .loc_0x148C
      mr        r29, r5
      b         .loc_0x1498

    .loc_0x148C:
      addi      r4, r4, 0x4
      addi      r5, r5, 0x1
      bdnz+     .loc_0x1474

    .loc_0x1498:
      cmpwi     r29, 0x2
      ble-      .loc_0x1690
      lfs       f31, 0x7C0(r2)

    .loc_0x14A4:
      lwz       r0, 0x94(r31)
      lwz       r3, 0x88(r31)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2C5A8
      lbz       r0, 0x240(r31)
      addi      r4, r3, 0x3
      cmplwi    r0, 0
      beq-      .loc_0x14E8
      lwz       r0, 0x234(r31)
      cmpwi     r0, 0
      blt-      .loc_0x14E8
      cmpw      r3, r0
      bge-      .loc_0x14E8
      cmpw      r4, r0
      ble-      .loc_0x14E8
      mr        r4, r0

    .loc_0x14E8:
      cmpw      r4, r29
      ble-      .loc_0x15F4
      cmpw      r3, r29
      beq-      .loc_0x1514
      lwz       r0, 0x94(r31)
      lwz       r4, 0x88(r31)
      rlwinm    r0,r0,2,0,29
      lwzx      r4, r4, r0
      lwz       r0, 0xC(r4)
      cmpwi     r0, 0
      bne-      .loc_0x15F4

    .loc_0x1514:
      lwz       r0, 0x94(r31)
      lwz       r4, 0x88(r31)
      rlwinm    r0,r0,2,0,29
      lwzx      r4, r4, r0
      lwz       r0, 0xC(r4)
      cmpwi     r0, 0
      beq-      .loc_0x15A4
      fneg      f0, f30
      lfs       f1, 0x7CC(r2)
      li        r25, 0
      li        r26, 0
      fmuls     f30, f1, f0
      b         .loc_0x158C

    .loc_0x1548:
      lwz       r3, 0x88(r31)
      lwzx      r4, r3, r26
      lfs       f0, 0x1C(r4)
      lwz       r3, 0x4(r4)
      fadds     f0, f0, f30
      stfs      f0, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x88(r31)
      addi      r25, r25, 0x1
      lwzx      r4, r3, r26
      addi      r26, r26, 0x4
      lwz       r3, 0x4(r4)
      lfs       f0, 0xD8(r3)
      stfs      f0, 0x1C(r4)

    .loc_0x158C:
      lha       r0, 0x8E(r31)
      cmpw      r25, r0
      blt+      .loc_0x1548
      li        r0, 0x1
      stw       r0, -0x6638(r13)
      b         .loc_0x15DC

    .loc_0x15A4:
      sub.      r3, r29, r3
      li        r0, 0
      stw       r3, -0x6638(r13)
      blt-      .loc_0x15C0
      cmpwi     r3, 0x3
      bge-      .loc_0x15C0
      li        r0, 0x1

    .loc_0x15C0:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x15DC
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x97F
      crclr     6, 0x6
      bl        -0x34BB50

    .loc_0x15DC:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x84(r12)
      mtctr     r12
      bctrl
      b         .loc_0x16C4

    .loc_0x15F4:
      li        r25, 0
      li        r26, 0
      b         .loc_0x1644

    .loc_0x1600:
      lwz       r3, 0x88(r31)
      lwzx      r4, r3, r26
      lfs       f0, 0x1C(r4)
      lwz       r3, 0x4(r4)
      fsubs     f0, f0, f30
      stfs      f0, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x88(r31)
      addi      r25, r25, 0x1
      lwzx      r4, r3, r26
      addi      r26, r26, 0x4
      lwz       r3, 0x4(r4)
      lfs       f0, 0xD8(r3)
      stfs      f0, 0x1C(r4)

    .loc_0x1644:
      lha       r0, 0x8E(r31)
      cmpw      r25, r0
      blt+      .loc_0x1600
      mr        r3, r31
      li        r4, 0x1
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x84(r31)
      li        r0, 0
      mr        r3, r31
      stfs      f31, 0x14(r4)
      stw       r0, 0x20(r4)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x84(r12)
      mtctr     r12
      bctrl
      b         .loc_0x14A4

    .loc_0x1690:
      lis       r4, 0x5555
      mr        r3, r31
      addi      r0, r4, 0x5556
      mulhw     r4, r0, r29
      rlwinm    r0,r4,1,31,31
      add       r0, r4, r0
      mulli     r0, r0, 0x3
      sub       r0, r29, r0
      stw       r0, -0x6638(r13)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x84(r12)
      mtctr     r12
      bctrl

    .loc_0x16C4:
      lwz       r0, 0x94(r31)
      lwz       r3, 0x88(r31)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2C330
      stw       r3, 0x224(r31)
      lwz       r4, 0x224(r31)
      cmpwi     r4, 0
      blt-      .loc_0x1708
      lwz       r12, 0x0(r31)
      mr        r3, r31
      lwz       r25, 0x110(r31)
      lwz       r12, 0xC8(r12)
      mtctr     r12
      bctrl
      stw       r4, 0x1C(r25)
      stw       r3, 0x18(r25)

    .loc_0x1708:
      mr        r3, r28
      bl        -0x352D20
      psq_l     f31,0x98(r1),0,0
      lfd       f31, 0x90(r1)
      psq_l     f30,0x88(r1),0,0
      lfd       f30, 0x80(r1)
      lmw       r25, 0x64(r1)
      lwz       r0, 0xA4(r1)
      mtlr      r0
      addi      r1, r1, 0xA0
      blr
    */
}

/*
 * --INFO--
 * Address:	803762EC
 * Size:	000044
 */
void Morimura::TScaleUpCounter::init((J2DScreen*, unsigned long long,
                                      unsigned long long, unsigned long long,
                                      unsigned long*, bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      lwz       r11, 0x28(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lbz       r0, 0x2F(r1)
      stw       r11, 0x8(r1)
      stw       r0, 0xC(r1)
      bl        -0x6AA2C
      lfs       f0, 0x34(r31)
      stfs      f0, 0xAC(r31)
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80376330
 * Size:	000008
 */
void Morimura::TEnemyZukan::getIdMax(void)
{
    /*
    .loc_0x0:
      li        r3, 0x51
      blr
    */
}

/*
 * --INFO--
 * Address:	80376338
 * Size:	0001D8
 */
void Morimura::TEnemyZukan::setDetail(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r0, 0x94(r3)
      lwz       r3, 0x88(r3)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2C25C
      mr        r0, r3
      mr        r3, r30
      mr        r31, r0
      mr        r4, r31
      bl        0x1720
      stw       r3, 0x188(r30)
      lwz       r7, 0x188(r30)
      cmplwi    r7, 0x2710
      blt-      .loc_0x70
      lis       r3, 0x8049
      lis       r4, 0x8049
      addi      r5, r4, 0x2B4C
      mr        r6, r31
      addi      r3, r3, 0x252C
      li        r4, 0x9BB
      crclr     6, 0x6
      bl        -0x34BD64

    .loc_0x70:
      mr        r3, r30
      mr        r4, r31
      bl        0x1910
      stw       r3, 0x18C(r30)
      mr        r3, r30
      mr        r4, r31
      bl        0x1808
      stw       r3, 0x190(r30)
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x164
      li        r0, 0x1
      li        r4, 0
      stb       r0, 0x17C(r30)
      lwz       r3, 0x24C(r30)
      bl        -0x6AC10
      lwz       r3, 0x250(r30)
      li        r4, 0
      bl        -0x6AC1C
      lwz       r3, 0x254(r30)
      li        r4, 0
      bl        -0x6AC28
      subi      r0, r31, 0x8
      cmplwi    r0, 0x48
      bgt-      .loc_0x190
      lis       r3, 0x804E
      rlwinm    r0,r0,2,0,29
      addi      r3, r3, 0x3C20
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      lwz       r3, 0x24C(r30)
      li        r4, 0x1
      bl        -0x6AC58
      b         .loc_0x190
      lwz       r3, 0x254(r30)
      li        r4, 0x1
      bl        -0x6AC68
      b         .loc_0x190
      lwz       r3, 0x24C(r30)
      li        r4, 0x1
      bl        -0x6AC78
      lwz       r3, 0x254(r30)
      li        r4, 0x1
      bl        -0x6AC84
      b         .loc_0x190
      lwz       r3, 0x24C(r30)
      li        r4, 0x1
      bl        -0x6AC94
      lwz       r3, 0x254(r30)
      li        r4, 0x1
      bl        -0x6ACA0
      lwz       r3, 0x250(r30)
      li        r4, 0x1
      bl        -0x6ACAC
      b         .loc_0x190

    .loc_0x164:
      li        r0, 0
      li        r4, 0x1
      stb       r0, 0x17C(r30)
      lwz       r3, 0x24C(r30)
      bl        -0x6ACC4
      lwz       r3, 0x250(r30)
      li        r4, 0x1
      bl        -0x6ACD0
      lwz       r3, 0x254(r30)
      li        r4, 0x1
      bl        -0x6ACDC

    .loc_0x190:
      lwz       r3, 0xE0(r30)
      li        r4, 0
      bl        0x2B6EC
      lwz       r3, 0x24C(r30)
      li        r4, 0
      bl        0x2B6E0
      lwz       r3, 0x250(r30)
      li        r4, 0
      bl        0x2B6D4
      lwz       r3, 0x254(r30)
      li        r4, 0
      bl        0x2B6C8
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
 * Address:	80376510
 * Size:	000048
 */
void Morimura::TEnemyZukan::setShortenIndex((int, int, bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lbz       r0, 0x240(r3)
      cmplwi    r0, 0
      beq-      .loc_0x34
      lbz       r0, 0x242(r3)
      cmplwi    r0, 0
      bne-      .loc_0x34
      lwz       r0, 0x238(r3)
      cmpwi     r0, 0x12
      bgt-      .loc_0x34
      li        r5, -0x1

    .loc_0x34:
      bl        -0x1FEC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80376558
 * Size:	0000D8
 */
void Morimura::TEnemyZukan::isListShow((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0
      stw       r0, 0x14(r1)
      bge-      .loc_0x1C
      li        r3, 0
      b         .loc_0xC8

    .loc_0x1C:
      lbz       r0, -0x6708(r13)
      cmplwi    r0, 0
      beq-      .loc_0x30
      li        r3, 0x1
      b         .loc_0xC8

    .loc_0x30:
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0x48
      lwz       r3, 0x180(r3)
      lbzx      r3, r3, r4
      b         .loc_0xC8

    .loc_0x48:
      lwz       r6, -0x6B70(r13)
      cmplwi    r6, 0
      beq-      .loc_0xC4
      lis       r3, 0x804E
      li        r0, 0x51
      addi      r3, r3, 0x3998
      li        r5, 0
      mtctr     r0

    .loc_0x68:
      lwz       r0, 0x0(r3)
      cmpw      r4, r0
      bne-      .loc_0x88
      lis       r3, 0x804E
      rlwinm    r4,r5,3,0,28
      addi      r0, r3, 0x3998
      add       r3, r0, r4
      b         .loc_0x9C

    .loc_0x88:
      addi      r3, r3, 0x8
      addi      r5, r5, 0x1
      bdnz+     .loc_0x68
      lis       r3, 0x804E
      addi      r3, r3, 0x3998

    .loc_0x9C:
      lwz       r4, 0x4(r3)
      addi      r3, r6, 0x40
      bl        -0x142B38
      lbz       r0, 0x8(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0xBC
      li        r3, 0x1
      b         .loc_0xC8

    .loc_0xBC:
      li        r3, 0
      b         .loc_0xC8

    .loc_0xC4:
      li        r3, 0x1

    .loc_0xC8:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80376630
 * Size:	000718
 */
void Morimura::TEnemyZukan::indexPaneInit((J2DScreen*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x610(r1)
      mflr      r0
      li        r6, 0xE
      stw       r0, 0x614(r1)
      li        r0, 0
      addi      r5, r1, 0x14
      stmw      r16, 0x5D0(r1)
      mr        r23, r3
      mr        r24, r4
      stw       r0, 0x90(r3)
      li        r0, 0x4
      lis       r3, 0x8049
      stw       r0, 0x94(r23)
      addi      r22, r3, 0x2520
      li        r0, 0x6
      lha       r3, 0x8E(r23)
      addi      r4, r22, 0x63C
      subi      r3, r3, 0x1
      stw       r3, 0x98(r23)
      sth       r6, 0x8E(r23)
      stw       r0, 0x94(r23)
      lha       r3, 0x8E(r23)
      subi      r0, r3, 0x1
      stw       r0, 0x98(r23)
      mtctr     r6

    .loc_0x64:
      lwz       r3, 0x4(r4)
      lwzu      r0, 0x8(r4)
      stw       r3, 0x4(r5)
      stwu      r0, 0x8(r5)
      bdnz+     .loc_0x64
      mr        r3, r24
      lwz       r4, 0x90(r23)
      lwz       r12, 0x0(r24)
      addi      r0, r1, 0x18
      rlwinm    r4,r4,3,0,28
      lwz       r12, 0x3C(r12)
      add       r6, r0, r4
      lwz       r5, 0x0(r6)
      lwz       r6, 0x4(r6)
      mtctr     r12
      bctrl
      mr.       r17, r3
      bne-      .loc_0xC0
      addi      r3, r22, 0xC
      addi      r5, r22, 0x18
      li        r4, 0xA5A
      crclr     6, 0x6
      bl        -0x34C0AC

    .loc_0xC0:
      lfs       f0, 0xD8(r17)
      mr        r3, r24
      addi      r0, r1, 0x18
      stfs      f0, 0xA0(r23)
      lwz       r4, 0x98(r23)
      lwz       r12, 0x0(r24)
      rlwinm    r4,r4,3,0,28
      add       r6, r0, r4
      lwz       r12, 0x3C(r12)
      lwz       r5, 0x0(r6)
      lwz       r6, 0x4(r6)
      mtctr     r12
      bctrl
      mr.       r17, r3
      bne-      .loc_0x110
      addi      r3, r22, 0xC
      addi      r5, r22, 0x18
      li        r4, 0xA5D
      crclr     6, 0x6
      bl        -0x34C0FC

    .loc_0x110:
      lfs       f0, 0xD8(r17)
      li        r0, 0xA8
      addi      r5, r1, 0x84
      addi      r4, r22, 0x6AC
      stfs      f0, 0xA4(r23)
      mtctr     r0

    .loc_0x128:
      lwz       r3, 0x4(r4)
      lwzu      r0, 0x8(r4)
      stw       r3, 0x4(r5)
      stwu      r0, 0x8(r5)
      bdnz+     .loc_0x128
      lbz       r0, 0x240(r23)
      cmplwi    r0, 0
      beq-      .loc_0x150
      li        r0, 0x1
      stb       r0, 0x243(r23)

    .loc_0x150:
      lbz       r0, 0x240(r23)
      li        r28, 0
      cmplwi    r0, 0
      beq-      .loc_0x170
      lwz       r0, 0x230(r23)
      cmpwi     r0, 0
      bne-      .loc_0x170
      li        r28, 0x1

    .loc_0x170:
      lha       r0, 0x8E(r23)
      rlwinm    r3,r0,2,0,29
      bl        -0x3527FC
      li        r5, 0
      stw       r3, 0x88(r23)
      mr        r4, r5
      li        r6, 0
      b         .loc_0x1A0

    .loc_0x190:
      lwz       r3, 0x88(r23)
      addi      r6, r6, 0x1
      stwx      r4, r3, r5
      addi      r5, r5, 0x4

    .loc_0x1A0:
      lha       r0, 0x8E(r23)
      cmpw      r6, r0
      blt+      .loc_0x190
      addi      r31, r1, 0x18
      addi      r29, r1, 0x88
      li        r27, 0
      li        r26, 0
      li        r30, 0
      b         .loc_0x6A8

    .loc_0x1C4:
      li        r3, 0x28
      bl        -0x352954
      mr.       r17, r3
      beq-      .loc_0x224
      mr        r3, r24
      lwz       r5, 0x0(r31)
      lwz       r12, 0x0(r24)
      lwz       r6, 0x4(r31)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lfs       f0, 0x7C0(r2)
      stw       r0, 0x0(r17)
      stw       r3, 0x4(r17)
      stw       r0, 0x8(r17)
      stw       r0, 0xC(r17)
      stw       r0, 0x10(r17)
      stfs      f0, 0x18(r17)
      stw       r0, 0x20(r17)
      stw       r23, 0x24(r17)
      lwz       r3, 0x4(r17)
      lfs       f0, 0xD8(r3)
      stfs      f0, 0x1C(r17)

    .loc_0x224:
      lwz       r4, 0x88(r23)
      mr        r3, r23
      stwx      r17, r4, r30
      lwz       r12, 0x0(r23)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      lwz       r6, 0x88(r23)
      mr        r5, r3
      li        r4, 0x3
      lwzx      r3, r6, r30
      bl        0x2BAC4
      mr        r19, r29
      li        r25, 0
      li        r20, 0

    .loc_0x260:
      lwz       r0, 0x88(r23)
      mr        r3, r24
      lwz       r12, 0x0(r24)
      lwzx      r5, r30, r0
      lwz       r4, 0xB4(r23)
      lwz       r5, 0x20(r5)
      lwz       r12, 0x3C(r12)
      lwzx      r21, r5, r20
      lwz       r16, 0x8(r4)
      lwz       r5, 0x48(r19)
      lwz       r6, 0x4C(r19)
      mtctr     r12
      bctrl
      mr        r17, r3
      mr        r3, r24
      lwz       r12, 0x0(r24)
      lwz       r5, 0x30(r19)
      lwz       r12, 0x3C(r12)
      lwz       r6, 0x34(r19)
      mtctr     r12
      bctrl
      lwz       r0, 0x78(r23)
      mr        r18, r3
      mr        r3, r16
      addi      r9, r21, 0x18
      stw       r0, 0x8(r1)
      li        r10, 0x2
      lwz       r5, 0x0(r19)
      lwz       r6, 0x4(r19)
      lwz       r7, 0x18(r19)
      lwz       r8, 0x1C(r19)
      bl        0x2B4F4
      mr        r4, r3
      mr        r3, r21
      mr        r5, r18
      mr        r6, r17
      bl        0x2BE58
      lbz       r0, 0x241(r23)
      cmplwi    r0, 0
      beq-      .loc_0x3F8
      li        r3, 0x1A8
      bl        -0x352A90
      mr.       r21, r3
      beq-      .loc_0x354
      mr        r3, r24
      lwz       r5, 0x48(r19)
      lwz       r12, 0x0(r24)
      lwz       r6, 0x4C(r19)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      bl        -0x33E63C
      lis       r4, 0x7465
      mr        r7, r3
      mr        r3, r21
      addi      r8, r22, 0x458
      addi      r6, r4, 0x7374
      li        r5, 0
      lis       r9, 0x110
      bl        -0x321840
      mr        r21, r3

    .loc_0x354:
      cmplwi    r21, 0
      bne-      .loc_0x370
      addi      r3, r22, 0xC
      addi      r5, r22, 0x18
      li        r4, 0xA91
      crclr     6, 0x6
      bl        -0x34C35C

    .loc_0x370:
      lwz       r0, 0x88(r23)
      mr        r3, r24
      lwzx      r4, r30, r0
      lwz       r4, 0x20(r4)
      lwzx      r4, r4, r20
      stw       r21, 0x4(r4)
      lwz       r12, 0x0(r24)
      lwz       r5, 0x0(r31)
      lwz       r12, 0x3C(r12)
      lwz       r6, 0x4(r31)
      mtctr     r12
      bctrl
      mr        r4, r21
      bl        -0x33F310
      mr        r3, r24
      lwz       r5, 0x48(r19)
      lwz       r12, 0x0(r24)
      lwz       r6, 0x4C(r19)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      mr        r18, r3
      mr        r3, r24
      lwz       r12, 0x0(r24)
      lwz       r5, 0x0(r31)
      lwz       r12, 0x3C(r12)
      lwz       r6, 0x4(r31)
      mtctr     r12
      bctrl
      mr        r4, r18
      bl        -0x33F354
      mr        r3, r21
      li        r4, 0x4
      bl        -0x33DD68

    .loc_0x3F8:
      addi      r25, r25, 0x1
      addi      r19, r19, 0x8
      cmpwi     r25, 0x3
      addi      r20, r20, 0x4
      blt+      .loc_0x260
      lwz       r3, 0x9C(r23)
      li        r0, 0
      lwz       r4, 0x88(r23)
      mullw     r3, r26, r3
      lwzx      r4, r4, r30
      lwz       r19, 0x4(r4)
      stw       r3, 0x10(r1)
      lwz       r3, 0x88(r23)
      lwzx      r3, r3, r30
      stw       r0, 0xC(r3)
      lbz       r0, 0x240(r23)
      cmplwi    r0, 0
      beq-      .loc_0x444
      stw       r27, 0x10(r1)

    .loc_0x444:
      lbz       r0, 0x8C(r23)
      cmplwi    r0, 0
      beq-      .loc_0x55C
      cmpwi     r26, 0
      ble-      .loc_0x55C
      lwz       r3, 0x88(r23)
      subi      r0, r30, 0x4
      lwzx      r3, r3, r0
      bl        0x2BB80
      stw       r3, 0x10(r1)
      li        r6, 0x1
      lwz       r0, 0x88(r23)
      add       r5, r0, r30
      lwz       r4, -0x4(r5)
      lwz       r0, 0xC(r4)
      cmpwi     r0, 0x1
      beq-      .loc_0x4C8
      bge-      .loc_0x498
      cmpwi     r0, 0
      bge-      .loc_0x4A4
      b         .loc_0x4E4

    .loc_0x498:
      cmpwi     r0, 0x4
      bge-      .loc_0x4E4
      b         .loc_0x4D4

    .loc_0x4A4:
      lwz       r0, 0x234(r23)
      cmpw      r27, r0
      bne-      .loc_0x4B8
      stw       r27, 0x10(r1)
      b         .loc_0x4E4

    .loc_0x4B8:
      lwz       r0, 0x9C(r23)
      add       r0, r3, r0
      stw       r0, 0x10(r1)
      b         .loc_0x4E4

    .loc_0x4C8:
      addi      r0, r3, 0x1
      stw       r0, 0x10(r1)
      b         .loc_0x4E4

    .loc_0x4D4:
      lwz       r3, 0x0(r5)
      li        r0, 0x1
      li        r6, 0
      stw       r0, 0xC(r3)

    .loc_0x4E4:
      rlwinm.   r0,r6,0,24,31
      beq-      .loc_0x55C
      lbz       r0, 0x240(r23)
      cmplwi    r0, 0
      beq-      .loc_0x538
      lwz       r4, 0x10(r1)
      lwz       r0, 0x230(r23)
      cmpw      r4, r0
      bge-      .loc_0x55C
      lwz       r3, 0x22C(r23)
      rlwinm    r0,r4,2,0,29
      lwz       r4, 0x184(r23)
      lwzx      r0, r3, r0
      lbzx      r0, r4, r0
      cmplwi    r0, 0
      beq-      .loc_0x55C
      lwz       r3, 0x88(r23)
      li        r0, 0x2
      lwzx      r3, r3, r30
      stw       r0, 0xC(r3)
      b         .loc_0x55C

    .loc_0x538:
      lwz       r3, 0x184(r23)
      lwz       r0, 0x10(r1)
      lbzx      r0, r3, r0
      cmplwi    r0, 0
      beq-      .loc_0x55C
      lwz       r3, 0x88(r23)
      li        r0, 0x2
      lwzx      r3, r3, r30
      stw       r0, 0xC(r3)

    .loc_0x55C:
      lbz       r0, 0x240(r23)
      cmplwi    r0, 0
      beq-      .loc_0x644
      rlwinm.   r0,r28,0,24,31
      beq-      .loc_0x594
      mr        r3, r23
      mr        r4, r26
      lwz       r12, 0x0(r23)
      li        r5, -0x1
      li        r6, 0x1
      lwz       r12, 0x94(r12)
      mtctr     r12
      bctrl
      b         .loc_0x61C

    .loc_0x594:
      mr        r3, r23
      addi      r4, r1, 0x10
      lwz       r12, 0x0(r23)
      li        r5, 0x1
      lwz       r12, 0x90(r12)
      mtctr     r12
      bctrl
      mr        r3, r23
      mr        r4, r26
      lwz       r12, 0x0(r23)
      mr        r5, r27
      li        r6, 0x1
      lwz       r12, 0x94(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x234(r23)
      cmpw      r27, r3
      bge-      .loc_0x5F0
      addi      r0, r27, 0x3
      cmpw      r0, r3
      ble-      .loc_0x5F0
      stw       r3, 0x10(r1)
      mr        r27, r3

    .loc_0x5F0:
      lwz       r3, 0x10(r1)
      cmpwi     r3, 0
      bne-      .loc_0x608
      cmpwi     r27, 0
      beq-      .loc_0x608
      li        r28, 0x1

    .loc_0x608:
      lwz       r0, 0x238(r23)
      cmpwi     r0, 0x3
      bge-      .loc_0x618
      li        r28, 0x1

    .loc_0x618:
      mr        r27, r3

    .loc_0x61C:
      lwz       r3, 0x90(r23)
      addi      r0, r3, 0x1
      stw       r0, 0x90(r23)
      lwz       r3, 0x90(r23)
      lha       r0, 0x8E(r23)
      cmpw      r3, r0
      blt-      .loc_0x664
      li        r0, 0
      stw       r0, 0x90(r23)
      b         .loc_0x664

    .loc_0x644:
      mr        r3, r23
      mr        r4, r26
      lwz       r12, 0x0(r23)
      li        r6, 0x1
      lwz       r5, 0x10(r1)
      lwz       r12, 0x94(r12)
      mtctr     r12
      bctrl

    .loc_0x664:
      lwz       r4, 0x10(r1)
      cmpwi     r4, 0
      blt-      .loc_0x698
      lbz       r0, 0xB0(r23)
      cmplwi    r0, 0
      beq-      .loc_0x698
      lwz       r12, 0x0(r23)
      mr        r3, r23
      lwz       r12, 0x8C(r12)
      mtctr     r12
      bctrl
      stw       r4, 0x1C(r19)
      stw       r3, 0x18(r19)

    .loc_0x698:
      addi      r31, r31, 0x8
      addi      r30, r30, 0x4
      addi      r29, r29, 0x60
      addi      r26, r26, 0x1

    .loc_0x6A8:
      lha       r4, 0x8E(r23)
      cmpw      r26, r4
      blt+      .loc_0x1C4
      cmpwi     r4, 0
      li        r5, 0
      ble-      .loc_0x6FC
      cmpwi     r4, 0x8
      subi      r3, r4, 0x8
      ble-      .loc_0x6E8
      addi      r0, r3, 0x7
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmpwi     r3, 0
      ble-      .loc_0x6E8

    .loc_0x6E0:
      addi      r5, r5, 0x8
      bdnz+     .loc_0x6E0

    .loc_0x6E8:
      sub       r0, r4, r5
      mtctr     r0
      cmpw      r5, r4
      bge-      .loc_0x6FC

    .loc_0x6F8:
      bdnz-     .loc_0x6F8

    .loc_0x6FC:
      li        r0, 0
      stb       r0, 0x243(r23)
      lmw       r16, 0x5D0(r1)
      lwz       r0, 0x614(r1)
      mtlr      r0
      addi      r1, r1, 0x610
      blr
    */
}

/*
 * --INFO--
 * Address:	80376D48
 * Size:	000970
 */
void Morimura::TEnemyZukan::getUpdateIndex((int&, bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      rlwinm.   r0,r5,0,24,31
      stmw      r24, 0x10(r1)
      mr        r29, r5
      mr        r27, r3
      mr        r28, r4
      beq-      .loc_0x41C
      lbz       r0, 0x240(r27)
      cmplwi    r0, 0
      beq-      .loc_0x104
      lbz       r0, 0x243(r27)
      cmplwi    r0, 0
      beq-      .loc_0x104
      lwz       r0, 0x0(r28)
      cmpwi     r0, 0
      bge-      .loc_0x64
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x252C
      li        r4, 0xB25
      addi      r5, r5, 0x2538
      crclr     6, 0x6
      bl        -0x34C768

    .loc_0x64:
      lwz       r4, 0x0(r28)
      lwz       r3, 0x22C(r27)
      rlwinm    r0,r4,2,0,29
      lwz       r5, 0x184(r27)
      lwzx      r0, r3, r0
      lbzx      r0, r5, r0
      cmplwi    r0, 0
      beq-      .loc_0xBC
      lwz       r0, 0x90(r27)
      lwz       r3, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      lwz       r0, 0xC(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0xC8
      bge-      .loc_0xC8
      cmpwi     r0, 0x1
      bge-      .loc_0xB0
      b         .loc_0xC8

    .loc_0xB0:
      addi      r0, r4, 0x1
      stw       r0, 0x0(r28)
      b         .loc_0xC8

    .loc_0xBC:
      lwz       r0, 0x9C(r27)
      add       r0, r4, r0
      stw       r0, 0x0(r28)

    .loc_0xC8:
      mr        r3, r27
      lwz       r12, 0x0(r27)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x240(r27)
      cmplwi    r0, 0
      beq-      .loc_0xEC
      lwz       r3, 0x230(r27)

    .loc_0xEC:
      lwz       r0, 0x0(r28)
      cmpw      r0, r3
      blt-      .loc_0x95C
      li        r0, 0
      stw       r0, 0x0(r28)
      b         .loc_0x95C

    .loc_0x104:
      lha       r0, 0x8E(r27)
      lwz       r3, 0x238(r27)
      mulli     r0, r0, 0x3
      cmpw      r3, r0
      bgt-      .loc_0x134
      lwz       r0, 0x90(r27)
      lwz       r3, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2B7A4
      stw       r3, 0x0(r28)
      b         .loc_0x95C

    .loc_0x134:
      lwz       r0, 0x90(r27)
      li        r4, 0
      lwz       r3, 0x88(r27)
      li        r31, 0
      rlwinm    r0,r0,2,0,29
      li        r30, 0
      lwzx      r3, r3, r0
      stw       r4, 0xC(r3)
      lwz       r0, 0x98(r27)
      lwz       r3, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2B768
      lwz       r0, 0x0(r28)
      cmpw      r0, r3
      bne-      .loc_0x178
      li        r30, 0x1

    .loc_0x178:
      li        r25, 0
      li        r24, 0
      li        r26, 0
      b         .loc_0x1AC

    .loc_0x188:
      lwz       r3, 0x88(r27)
      lwzx      r3, r3, r26
      bl        0x2B73C
      lwz       r0, 0x0(r28)
      cmpw      r0, r3
      bne-      .loc_0x1A4
      addi      r25, r25, 0x1

    .loc_0x1A4:
      addi      r26, r26, 0x4
      addi      r24, r24, 0x1

    .loc_0x1AC:
      lha       r0, 0x8E(r27)
      cmpw      r24, r0
      blt+      .loc_0x188
      cmpwi     r25, 0x2
      bne-      .loc_0x1D4
      lwz       r3, 0x0(r28)
      li        r31, 0x1
      addi      r0, r3, 0x1
      stw       r0, 0x0(r28)
      b         .loc_0x370

    .loc_0x1D4:
      lwz       r0, 0x98(r27)
      lwz       r5, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r5, r0
      lwz       r0, 0xC(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0x210
      bge-      .loc_0x204
      cmpwi     r0, 0
      beq-      .loc_0x2D4
      bge-      .loc_0x24C
      b         .loc_0x370

    .loc_0x204:
      cmpwi     r0, 0x4
      bge-      .loc_0x370
      b         .loc_0x24C

    .loc_0x210:
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x230
      lwz       r0, 0x90(r27)
      li        r4, 0x1
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r5, r0
      stw       r4, 0xC(r3)
      b         .loc_0x370

    .loc_0x230:
      lis       r3, 0x8049
      li        r4, 0xB69
      addi      r3, r3, 0x252C
      li        r5, 0
      crclr     6, 0x6
      bl        -0x34C94C
      b         .loc_0x370

    .loc_0x24C:
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x2C0
      li        r0, 0x2
      stw       r0, 0xC(r3)
      lbz       r0, 0x240(r27)
      cmplwi    r0, 0
      beq-      .loc_0x28C
      mr        r3, r27
      mr        r6, r29
      lwz       r12, 0x0(r27)
      lwz       r4, 0x98(r27)
      lwz       r12, 0x94(r12)
      lwz       r5, 0x0(r28)
      mtctr     r12
      bctrl
      b         .loc_0x2A4

    .loc_0x28C:
      lwz       r0, 0x98(r27)
      lwz       r3, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwz       r4, 0x0(r28)
      lwzx      r3, r3, r0
      bl        0x2B3F0

    .loc_0x2A4:
      lwz       r0, 0x90(r27)
      li        r4, 0x1
      lwz       r3, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      stw       r4, 0xC(r3)
      b         .loc_0x370

    .loc_0x2C0:
      lwz       r3, 0x0(r28)
      li        r31, 0x1
      addi      r0, r3, 0x1
      stw       r0, 0x0(r28)
      b         .loc_0x370

    .loc_0x2D4:
      lwz       r3, 0x234(r27)
      cmpwi     r3, 0
      blt-      .loc_0x35C
      cmpwi     r25, 0x2
      bge-      .loc_0x314
      lwz       r4, 0x0(r28)
      lwz       r0, 0x9C(r27)
      cmpw      r4, r3
      add       r0, r4, r0
      bge-      .loc_0x30C
      cmpw      r0, r3
      ble-      .loc_0x30C
      stw       r3, 0x0(r28)
      b         .loc_0x36C

    .loc_0x30C:
      stw       r0, 0x0(r28)
      b         .loc_0x36C

    .loc_0x314:
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x348
      lwz       r3, 0x0(r28)
      lwz       r4, 0x22C(r27)
      rlwinm    r0,r3,2,0,29
      lwz       r5, 0x184(r27)
      lwzx      r0, r4, r0
      lbzx      r0, r5, r0
      cmplwi    r0, 0
      beq-      .loc_0x348
      addi      r0, r3, 0x1
      stw       r0, 0x0(r28)
      b         .loc_0x36C

    .loc_0x348:
      lwz       r3, 0x0(r28)
      lwz       r0, 0x9C(r27)
      add       r0, r3, r0
      stw       r0, 0x0(r28)
      b         .loc_0x36C

    .loc_0x35C:
      lwz       r3, 0x0(r28)
      lwz       r0, 0x9C(r27)
      add       r0, r3, r0
      stw       r0, 0x0(r28)

    .loc_0x36C:
      li        r31, 0x1

    .loc_0x370:
      mr        r3, r27
      lwz       r12, 0x0(r27)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      lbz       r4, 0x240(r27)
      cmplwi    r4, 0
      beq-      .loc_0x394
      lwz       r3, 0x230(r27)

    .loc_0x394:
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x3EC
      lwz       r0, 0x0(r28)
      cmpw      r0, r3
      bge-      .loc_0x3EC
      cmpwi     r0, 0
      blt-      .loc_0x3EC
      cmplwi    r4, 0
      beq-      .loc_0x3C4
      lwz       r4, 0x22C(r27)
      rlwinm    r0,r0,2,0,29
      lwzx      r0, r4, r0

    .loc_0x3C4:
      lwz       r4, 0x184(r27)
      lbzx      r0, r4, r0
      cmplwi    r0, 0
      beq-      .loc_0x3EC
      lwz       r0, 0x90(r27)
      li        r5, 0x2
      lwz       r4, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwzx      r4, r4, r0
      stw       r5, 0xC(r4)

    .loc_0x3EC:
      lwz       r0, 0x0(r28)
      cmpw      r0, r3
      blt-      .loc_0x400
      li        r0, 0
      stw       r0, 0x0(r28)

    .loc_0x400:
      lwz       r0, 0x90(r27)
      lwz       r3, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwz       r4, 0x0(r28)
      lwzx      r3, r3, r0
      bl        0x2B27C
      b         .loc_0x95C

    .loc_0x41C:
      lbz       r0, 0x240(r27)
      cmplwi    r0, 0
      beq-      .loc_0x464
      lbz       r0, 0x243(r27)
      cmplwi    r0, 0
      bne-      .loc_0x464
      lha       r0, 0x8E(r27)
      lwz       r3, 0x238(r27)
      mulli     r0, r0, 0x3
      cmpw      r3, r0
      bgt-      .loc_0x464
      lwz       r0, 0x98(r27)
      lwz       r3, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2B474
      stw       r3, 0x0(r28)
      b         .loc_0x95C

    .loc_0x464:
      lwz       r4, 0x98(r27)
      subic.    r24, r4, 0x1
      bge-      .loc_0x478
      lha       r3, 0x8E(r27)
      subi      r24, r3, 0x1

    .loc_0x478:
      lwz       r5, 0x88(r27)
      rlwinm    r31,r24,2,0,29
      lwzx      r3, r5, r31
      lwz       r0, 0xC(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0x51C
      rlwinm    r0,r4,2,0,29
      lwzx      r3, r5, r0
      bl        0x2B434
      lwz       r4, 0x88(r27)
      mr        r30, r3
      lwzx      r3, r4, r31
      bl        0x2B424
      cmpw      r3, r30
      bne-      .loc_0x51C
      lwz       r3, 0x88(r27)
      li        r0, 0x2
      lwzx      r3, r3, r31
      stw       r0, 0xC(r3)
      lbz       r0, 0x240(r27)
      cmplwi    r0, 0
      beq-      .loc_0x500
      lwz       r3, 0x88(r27)
      lwzx      r3, r3, r31
      bl        0x2B3F4
      lwz       r12, 0x0(r27)
      mr        r5, r3
      mr        r3, r27
      mr        r4, r24
      lwz       r12, 0x94(r12)
      mr        r6, r29
      mtctr     r12
      bctrl
      b         .loc_0x51C

    .loc_0x500:
      lwz       r3, 0x88(r27)
      lwzx      r3, r3, r31
      bl        0x2B3C4
      lwz       r5, 0x88(r27)
      mr        r4, r3
      lwzx      r3, r5, r31
      bl        0x2B178

    .loc_0x51C:
      lwz       r0, 0x98(r27)
      li        r4, 0
      lwz       r3, 0x88(r27)
      li        r30, 0
      rlwinm    r0,r0,2,0,29
      li        r31, 0
      lwzx      r3, r3, r0
      stw       r4, 0xC(r3)
      lwz       r0, 0x90(r27)
      lwz       r3, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2B380
      lwz       r0, 0x0(r28)
      cmpw      r0, r3
      bne-      .loc_0x560
      li        r31, 0x1

    .loc_0x560:
      li        r24, 0
      li        r25, 0
      li        r26, 0
      b         .loc_0x594

    .loc_0x570:
      lwz       r3, 0x88(r27)
      lwzx      r3, r3, r26
      bl        0x2B354
      lwz       r0, 0x0(r28)
      cmpw      r0, r3
      bne-      .loc_0x58C
      addi      r24, r24, 0x1

    .loc_0x58C:
      addi      r26, r26, 0x4
      addi      r25, r25, 0x1

    .loc_0x594:
      lha       r0, 0x8E(r27)
      cmpw      r25, r0
      blt+      .loc_0x570
      cmpwi     r24, 0x2
      bne-      .loc_0x664
      lbz       r0, 0x240(r27)
      lwz       r4, 0x0(r28)
      cmplwi    r0, 0
      subi      r0, r4, 0x1
      beq-      .loc_0x5D0
      cmpwi     r4, 0
      ble-      .loc_0x5D0
      lwz       r3, 0x22C(r27)
      rlwinm    r0,r0,2,0,29
      lwzx      r0, r3, r0

    .loc_0x5D0:
      cmpwi     r4, 0
      ble-      .loc_0x5F8
      lwz       r3, 0x184(r27)
      lbzx      r0, r3, r0
      cmplwi    r0, 0
      beq-      .loc_0x5F8
      lwz       r3, 0x0(r28)
      subi      r0, r3, 0x1
      stw       r0, 0x0(r28)
      b         .loc_0x65C

    .loc_0x5F8:
      lwz       r5, 0x234(r27)
      cmpwi     r5, 0
      blt-      .loc_0x64C
      cmpw      r4, r5
      bne-      .loc_0x64C
      cmpwi     r5, 0x3
      bge-      .loc_0x61C
      mr        r0, r5
      b         .loc_0x640

    .loc_0x61C:
      lis       r3, 0x5555
      addi      r0, r3, 0x5556
      mulhw     r3, r0, r5
      rlwinm    r0,r3,1,31,31
      add       r0, r3, r0
      mulli     r0, r0, 0x3
      sub.      r0, r5, r0
      bne-      .loc_0x640
      li        r0, 0x3

    .loc_0x640:
      sub       r0, r5, r0
      stw       r0, 0x0(r28)
      b         .loc_0x65C

    .loc_0x64C:
      lwz       r3, 0x9C(r27)
      lwz       r0, 0x0(r28)
      sub       r0, r0, r3
      stw       r0, 0x0(r28)

    .loc_0x65C:
      li        r30, 0x1
      b         .loc_0x898

    .loc_0x664:
      lwz       r0, 0x90(r27)
      lwz       r5, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r5, r0
      lwz       r0, 0xC(r3)
      cmpwi     r0, 0x3
      beq-      .loc_0x694
      bge-      .loc_0x898
      cmpwi     r0, 0
      beq-      .loc_0x758
      bge-      .loc_0x6D0
      b         .loc_0x898

    .loc_0x694:
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x6B4
      lwz       r0, 0x98(r27)
      li        r4, 0x1
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r5, r0
      stw       r4, 0xC(r3)
      b         .loc_0x898

    .loc_0x6B4:
      lis       r3, 0x8049
      li        r4, 0xBFC
      addi      r3, r3, 0x252C
      li        r5, 0
      crclr     6, 0x6
      bl        -0x34CDD0
      b         .loc_0x898

    .loc_0x6D0:
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x744
      li        r0, 0x3
      stw       r0, 0xC(r3)
      lbz       r0, 0x240(r27)
      cmplwi    r0, 0
      beq-      .loc_0x710
      mr        r3, r27
      mr        r6, r29
      lwz       r12, 0x0(r27)
      lwz       r4, 0x90(r27)
      lwz       r12, 0x94(r12)
      lwz       r5, 0x0(r28)
      mtctr     r12
      bctrl
      b         .loc_0x728

    .loc_0x710:
      lwz       r0, 0x90(r27)
      lwz       r3, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwz       r4, 0x0(r28)
      lwzx      r3, r3, r0
      bl        0x2AF6C

    .loc_0x728:
      lwz       r0, 0x98(r27)
      li        r4, 0x1
      lwz       r3, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      stw       r4, 0xC(r3)
      b         .loc_0x898

    .loc_0x744:
      lwz       r3, 0x0(r28)
      li        r30, 0x1
      subi      r0, r3, 0x1
      stw       r0, 0x0(r28)
      b         .loc_0x898

    .loc_0x758:
      lbz       r0, 0x240(r27)
      lwz       r4, 0x0(r28)
      cmplwi    r0, 0
      subi      r0, r4, 0x1
      beq-      .loc_0x780
      cmpwi     r4, 0
      ble-      .loc_0x780
      lwz       r3, 0x22C(r27)
      rlwinm    r0,r0,2,0,29
      lwzx      r0, r3, r0

    .loc_0x780:
      cmpwi     r4, 0
      ble-      .loc_0x7A8
      lwz       r3, 0x184(r27)
      lbzx      r0, r3, r0
      cmplwi    r0, 0
      beq-      .loc_0x7A8
      lwz       r3, 0x0(r28)
      subi      r0, r3, 0x1
      stw       r0, 0x0(r28)
      b         .loc_0x80C

    .loc_0x7A8:
      lwz       r5, 0x234(r27)
      cmpwi     r5, 0
      blt-      .loc_0x7FC
      cmpw      r4, r5
      bne-      .loc_0x7FC
      cmpwi     r5, 0x3
      bge-      .loc_0x7CC
      mr        r0, r5
      b         .loc_0x7F0

    .loc_0x7CC:
      lis       r3, 0x5555
      addi      r0, r3, 0x5556
      mulhw     r3, r0, r5
      rlwinm    r0,r3,1,31,31
      add       r0, r3, r0
      mulli     r0, r0, 0x3
      sub.      r0, r5, r0
      bne-      .loc_0x7F0
      li        r0, 0x3

    .loc_0x7F0:
      sub       r0, r5, r0
      stw       r0, 0x0(r28)
      b         .loc_0x80C

    .loc_0x7FC:
      lwz       r3, 0x9C(r27)
      lwz       r0, 0x0(r28)
      sub       r0, r0, r3
      stw       r0, 0x0(r28)

    .loc_0x80C:
      mr        r3, r27
      lwz       r12, 0x0(r27)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x240(r27)
      subi      r3, r3, 0x1
      cmplwi    r0, 0
      beq-      .loc_0x884
      lwz       r0, 0x234(r27)
      cmpwi     r0, 0
      blt-      .loc_0x848
      lwz       r3, 0x230(r27)
      subi      r3, r3, 0x1
      b         .loc_0x884

    .loc_0x848:
      lwz       r4, 0x230(r27)
      cmpwi     r4, 0x3
      bge-      .loc_0x85C
      mr        r0, r4
      b         .loc_0x880

    .loc_0x85C:
      lis       r3, 0x5555
      addi      r0, r3, 0x5556
      mulhw     r3, r0, r4
      rlwinm    r0,r3,1,31,31
      add       r0, r3, r0
      mulli     r0, r0, 0x3
      sub.      r0, r4, r0
      bne-      .loc_0x880
      li        r0, 0x3

    .loc_0x880:
      sub       r3, r4, r0

    .loc_0x884:
      lwz       r0, 0x0(r28)
      cmpwi     r0, 0
      bge-      .loc_0x894
      stw       r3, 0x0(r28)

    .loc_0x894:
      li        r30, 0x1

    .loc_0x898:
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x8F8
      lwz       r3, 0x0(r28)
      cmpwi     r3, 0
      blt-      .loc_0x8F8
      lbz       r0, 0x240(r27)
      mr        r5, r3
      cmplwi    r0, 0
      beq-      .loc_0x8D0
      lwz       r4, 0x22C(r27)
      cmplwi    r4, 0
      beq-      .loc_0x8D0
      rlwinm    r0,r3,2,0,29
      lwzx      r5, r4, r0

    .loc_0x8D0:
      lwz       r3, 0x184(r27)
      lbzx      r0, r3, r5
      cmplwi    r0, 0
      beq-      .loc_0x8F8
      lwz       r0, 0x98(r27)
      li        r4, 0x3
      lwz       r3, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      stw       r4, 0xC(r3)

    .loc_0x8F8:
      lwz       r0, 0x0(r28)
      cmpwi     r0, 0
      bge-      .loc_0x944
      lbz       r0, 0x240(r27)
      cmplwi    r0, 0
      beq-      .loc_0x924
      lwz       r3, 0x9C(r27)
      lwz       r0, 0x230(r27)
      sub       r0, r0, r3
      stw       r0, 0x0(r28)
      b         .loc_0x944

    .loc_0x924:
      mr        r3, r27
      lwz       r12, 0x0(r27)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x9C(r27)
      sub       r0, r3, r0
      stw       r0, 0x0(r28)

    .loc_0x944:
      lwz       r0, 0x98(r27)
      lwz       r3, 0x88(r27)
      rlwinm    r0,r0,2,0,29
      lwz       r4, 0x0(r28)
      lwzx      r3, r3, r0
      bl        0x2AD38

    .loc_0x95C:
      lmw       r24, 0x10(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803776B8
 * Size:	000024
 */
void Morimura::TEnemyZukan::getNameID((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x1E4(r3)
      bl        0x29B44
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803776DC
 * Size:	000024
 */
void Morimura::TEnemyZukan::getXMsgID((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x1E8(r3)
      bl        0x29B20
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80377700
 * Size:	000024
 */
void Morimura::TEnemyZukan::getYMsgID((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x1EC(r3)
      bl        0x29AFC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80377724
 * Size:	000050
 */
void Morimura::TEnemyZukan::getModelIndex((int))
{
    /*
    .loc_0x0:
      lis       r3, 0x804E
      li        r0, 0x51
      addi      r3, r3, 0x3998
      li        r5, 0
      mtctr     r0

    .loc_0x14:
      lwz       r0, 0x0(r3)
      cmpw      r4, r0
      bne-      .loc_0x34
      lis       r3, 0x804E
      rlwinm    r4,r5,3,0,28
      addi      r0, r3, 0x3998
      add       r3, r0, r4
      b         .loc_0x48

    .loc_0x34:
      addi      r3, r3, 0x8
      addi      r5, r5, 0x1
      bdnz+     .loc_0x14
      lis       r3, 0x804E
      addi      r3, r3, 0x3998

    .loc_0x48:
      lwz       r3, 0x4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80377774
 * Size:	000060
 */
void Morimura::TEnemyZukan::setXWindow(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x1836
      li        r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, -0x67A8(r13)
      bl        -0x3F164
      lwz       r3, 0xDC(r31)
      addi      r4, r31, 0x1B0
      bl        0x4C10
      lwz       r3, 0xDC(r31)
      li        r4, 0
      bl        0x4D60
      lwz       r3, 0xDC(r31)
      addi      r4, r31, 0x1C0
      addi      r5, r31, 0x1D0
      bl        0x4C60
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803777D4
 * Size:	000060
 */
void Morimura::TEnemyZukan::setYWindow(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x1837
      li        r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, -0x67A8(r13)
      bl        -0x3F1C4
      lwz       r3, 0xDC(r31)
      addi      r4, r31, 0x1B8
      bl        0x4BB0
      lwz       r3, 0xDC(r31)
      li        r4, 0x1
      bl        0x4D00
      lwz       r3, 0xDC(r31)
      addi      r4, r31, 0x1C8
      addi      r5, r31, 0x1D8
      bl        0x4C00
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80377834
 * Size:	000034
 */
void Morimura::TEnemyZukan::isOpenConfirmWindow(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x224(r3)
      lwz       r0, 0x14(r1)
      lbz       r3, 0xD4(r3)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80377868
 * Size:	0000FC
 */
void Morimura::TEnemyZukan::isNewSupply((int, bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lbz       r0, -0x6707(r13)
      cmplwi    r0, 0
      beq-      .loc_0x20
      li        r3, 0x1
      b         .loc_0xEC

    .loc_0x20:
      lwz       r6, -0x6B70(r13)
      cmplwi    r6, 0
      beq-      .loc_0xE8
      cmpwi     r4, 0
      blt-      .loc_0xE8
      rlwinm.   r0,r5,0,24,31
      bne-      .loc_0x68
      lbz       r0, 0x240(r3)
      cmplwi    r0, 0
      beq-      .loc_0x68
      lwz       r0, 0x230(r3)
      cmpwi     r0, 0
      bne-      .loc_0x5C
      li        r3, 0
      b         .loc_0xEC

    .loc_0x5C:
      lwz       r3, 0x22C(r3)
      rlwinm    r0,r4,2,0,29
      lwzx      r4, r3, r0

    .loc_0x68:
      lis       r3, 0x804E
      li        r0, 0x51
      addi      r3, r3, 0x3998
      li        r5, 0
      mtctr     r0

    .loc_0x7C:
      lwz       r0, 0x0(r3)
      cmpw      r4, r0
      bne-      .loc_0x9C
      lis       r3, 0x804E
      rlwinm    r4,r5,3,0,28
      addi      r0, r3, 0x3998
      add       r3, r0, r4
      b         .loc_0xB0

    .loc_0x9C:
      addi      r3, r3, 0x8
      addi      r5, r5, 0x1
      bdnz+     .loc_0x7C
      lis       r3, 0x804E
      addi      r3, r3, 0x3998

    .loc_0xB0:
      lwz       r4, 0x4(r3)
      addi      r3, r6, 0x40
      bl        -0x143E5C
      cmplwi    r3, 0
      beq-      .loc_0xE0
      lbz       r3, 0x8(r3)
      rlwinm.   r0,r3,0,31,31
      beq-      .loc_0xE0
      rlwinm.   r0,r3,0,30,30
      bne-      .loc_0xE0
      li        r3, 0x1
      b         .loc_0xEC

    .loc_0xE0:
      li        r3, 0
      b         .loc_0xEC

    .loc_0xE8:
      li        r3, 0

    .loc_0xEC:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80377964
 * Size:	0000E4
 */
void Morimura::TEnemyZukan::isPanelExist(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r0, 0x94(r3)
      lwz       r3, 0x88(r3)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2AC30
      mr.       r31, r3
      bge-      .loc_0x3C
      li        r3, 0
      b         .loc_0xCC

    .loc_0x3C:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x240(r30)
      cmplwi    r0, 0
      beq-      .loc_0xA0
      lwz       r0, 0x230(r30)
      cmpwi     r0, 0x1
      bge-      .loc_0x70
      li        r3, 0
      b         .loc_0xCC

    .loc_0x70:
      lwz       r5, 0x22C(r30)
      rlwinm    r0,r0,2,0,29
      lwz       r4, 0x234(r30)
      subi      r6, r5, 0x4
      cmpwi     r4, 0
      lwzx      r3, r6, r0
      blt-      .loc_0xA0
      rlwinm    r4,r4,2,0,29
      lwzx      r0, r5, r4
      cmpw      r31, r0
      bge-      .loc_0xA0
      lwzx      r3, r6, r4

    .loc_0xA0:
      cmpw      r31, r3
      bne-      .loc_0xB0
      li        r3, 0
      b         .loc_0xCC

    .loc_0xB0:
      lwz       r0, -0x6638(r13)
      srawi     r5, r3, 0x1F
      add       r0, r31, r0
      rlwinm    r4,r0,1,31,31
      subc      r0, r3, r0
      adde      r0, r5, r4
      rlwinm    r3,r0,0,24,31

    .loc_0xCC:
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
 * Address:	80377A48
 * Size:	00004C
 */
void Morimura::TEnemyZukan::openConfirmWindow(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stb       r0, 0x214(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x224(r3)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
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
 * Address:	80377A94
 * Size:	000134
 */
void Morimura::TEnemyZukan::getPrice((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      lbz       r0, -0x6708(r13)
      cmplwi    r0, 0
      bne-      .loc_0x2C
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0x68

    .loc_0x2C:
      bl        -0x2AE520
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, 0x820(r2)
      stw       r0, 0x8(r1)
      lfs       f2, 0x854(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, 0x868(r2)
      fsubs     f3, f0, f3
      lfs       f0, 0x7C4(r2)
      fdivs     f2, f3, f2
      fmadds    f1, f1, f2, f0
      bl        -0x2B5FA8
      b         .loc_0x11C

    .loc_0x68:
      lwz       r6, -0x6B70(r13)
      cmplwi    r6, 0
      beq-      .loc_0x118
      lis       r3, 0x804E
      li        r0, 0x51
      addi      r3, r3, 0x3998
      li        r5, 0
      mtctr     r0

    .loc_0x88:
      lwz       r0, 0x0(r3)
      cmpw      r4, r0
      bne-      .loc_0xA8
      lis       r3, 0x804E
      rlwinm    r4,r5,3,0,28
      addi      r0, r3, 0x3998
      add       r3, r0, r4
      b         .loc_0xBC

    .loc_0xA8:
      addi      r3, r3, 0x8
      addi      r5, r5, 0x1
      bdnz+     .loc_0x88
      lis       r3, 0x804E
      addi      r3, r3, 0x3998

    .loc_0xBC:
      lwz       r31, 0x4(r3)
      addi      r3, r6, 0x40
      mr        r4, r31
      bl        -0x144098
      lbz       r0, 0x8(r3)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0xE0
      li        r3, 0
      b         .loc_0x11C

    .loc_0xE0:
      li        r3, 0x1
      bl        -0x14FE1C
      lis       r4, 0x1
      mr        r30, r3
      mr        r3, r31
      subi      r4, r4, 0x1
      bl        -0x2548B0
      mr        r4, r3
      mr        r3, r30
      bl        -0x1C3774
      cmplwi    r3, 0
      beq-      .loc_0x118
      lwz       r3, 0x170(r3)
      b         .loc_0x11C

    .loc_0x118:
      li        r3, 0

    .loc_0x11C:
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
 * Address:	80377BC8
 * Size:	0000F8
 */
void Morimura::TEnemyZukan::getDefeatNum((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lbz       r0, -0x6708(r13)
      cmplwi    r0, 0
      bne-      .loc_0x24
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0x60

    .loc_0x24:
      bl        -0x2AE64C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, 0x820(r2)
      stw       r0, 0x8(r1)
      lfs       f2, 0x854(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, 0x86C(r2)
      fsubs     f3, f0, f3
      lfs       f0, 0x7C4(r2)
      fdivs     f2, f3, f2
      fmadds    f1, f1, f2, f0
      bl        -0x2B60D4
      b         .loc_0xE8

    .loc_0x60:
      lwz       r6, -0x6B70(r13)
      cmplwi    r6, 0
      beq-      .loc_0xE4
      lis       r3, 0x804E
      li        r0, 0x51
      addi      r3, r3, 0x3998
      li        r5, 0
      mtctr     r0

    .loc_0x80:
      lwz       r0, 0x0(r3)
      cmpw      r4, r0
      bne-      .loc_0xA0
      lis       r3, 0x804E
      rlwinm    r4,r5,3,0,28
      addi      r0, r3, 0x3998
      add       r3, r0, r4
      b         .loc_0xB4

    .loc_0xA0:
      addi      r3, r3, 0x8
      addi      r5, r5, 0x1
      bdnz+     .loc_0x80
      lis       r3, 0x804E
      addi      r3, r3, 0x3998

    .loc_0xB4:
      lwz       r4, 0x4(r3)
      addi      r3, r6, 0x40
      bl        -0x1441C0
      cmplwi    r3, 0
      beq-      .loc_0xE4
      lbz       r0, 0x8(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0xDC
      lwz       r3, 0x0(r3)
      b         .loc_0xE8

    .loc_0xDC:
      li        r3, 0
      b         .loc_0xE8

    .loc_0xE4:
      li        r3, 0

    .loc_0xE8:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80377CC0
 * Size:	00012C
 */
void Morimura::TEnemyZukan::getKilledNum((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lbz       r0, -0x6708(r13)
      cmplwi    r0, 0
      bne-      .loc_0x24
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0x60

    .loc_0x24:
      bl        -0x2AE744
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, 0x820(r2)
      stw       r0, 0x8(r1)
      lfs       f2, 0x854(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, 0x86C(r2)
      fsubs     f3, f0, f3
      lfs       f0, 0x7C4(r2)
      fdivs     f2, f3, f2
      fmadds    f1, f1, f2, f0
      bl        -0x2B61CC
      b         .loc_0x11C

    .loc_0x60:
      lwz       r6, -0x6B70(r13)
      cmplwi    r6, 0
      beq-      .loc_0xE4
      lis       r3, 0x804E
      li        r0, 0x51
      addi      r3, r3, 0x3998
      li        r5, 0
      mtctr     r0

    .loc_0x80:
      lwz       r0, 0x0(r3)
      cmpw      r4, r0
      bne-      .loc_0xA0
      lis       r3, 0x804E
      rlwinm    r4,r5,3,0,28
      addi      r0, r3, 0x3998
      add       r3, r0, r4
      b         .loc_0xB4

    .loc_0xA0:
      addi      r3, r3, 0x8
      addi      r5, r5, 0x1
      bdnz+     .loc_0x80
      lis       r3, 0x804E
      addi      r3, r3, 0x3998

    .loc_0xB4:
      lwz       r4, 0x4(r3)
      addi      r3, r6, 0x40
      bl        -0x1442B8
      cmplwi    r3, 0
      beq-      .loc_0xE4
      lbz       r0, 0x8(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0xDC
      lwz       r3, 0x4(r3)
      b         .loc_0x11C

    .loc_0xDC:
      li        r3, 0
      b         .loc_0x11C

    .loc_0xE4:
      bl        -0x2AE804
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, 0x820(r2)
      stw       r0, 0x8(r1)
      lfs       f2, 0x854(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, 0x86C(r2)
      fsubs     f3, f0, f3
      lfs       f0, 0x7C4(r2)
      fdivs     f2, f3, f2
      fmadds    f1, f1, f2, f0
      bl        -0x2B628C

    .loc_0x11C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80377DEC
 * Size:	000054
 */
void Morimura::TDEnemyScene::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0xD9990
      lis       r4, 0x804E
      lis       r3, 0x804E
      addi      r0, r4, 0x3F18
      li        r4, 0
      stw       r0, 0x0(r31)
      addi      r0, r3, 0x3EC8
      mr        r3, r31
      stw       r4, 0x220(r31)
      stw       r0, 0x0(r31)
      stw       r4, 0x224(r31)
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
 * Size:	000074
 */
void Morimura::THIOScene::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80377E40
 * Size:	0000DC
 */
void Morimura::TDEnemyScene::doCreateObj((JKRArchive*))
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
      li        r3, 0x258
      bl        -0x353FC0
      mr.       r31, r3
      beq-      .loc_0x60
      lis       r4, 0x8049
      addi      r4, r4, 0x29A0
      bl        -0x7270
      lis       r3, 0x804E
      li        r0, 0
      addi      r3, r3, 0x3F68
      stw       r3, 0x0(r31)
      addi      r3, r3, 0x10
      stw       r3, 0x18(r31)
      stw       r0, 0x24C(r31)
      stw       r0, 0x250(r31)
      stw       r0, 0x254(r31)

    .loc_0x60:
      mr        r3, r29
      mr        r4, r31
      mr        r5, r30
      bl        0xD9EC8
      stw       r31, 0x220(r29)
      li        r3, 0xD8
      bl        -0x354014
      mr.       r0, r3
      beq-      .loc_0x94
      lis       r4, 0x8049
      addi      r4, r4, 0x3110
      bl        0x2B778
      mr        r0, r3

    .loc_0x94:
      stw       r0, 0x224(r29)
      mr        r3, r29
      mr        r5, r30
      lwz       r4, 0x224(r29)
      bl        0xD9E90
      lis       r5, 0x385F
      lis       r4, 0x36
      lwz       r3, 0x224(r29)
      addi      r6, r5, 0x3030
      addi      r5, r4, 0x3031
      bl        0x2B8EC
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
 * Address:	80377F1C
 * Size:	000034
 */
void Morimura::TDEnemyScene::doStart((Screen::StartSceneArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x220(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      li        r3, 0x1
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80377F50
 * Size:	000028
 */
void Morimura::TDEnemyScene::isAppearConfirmWindow(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x224(r3)
      cmplwi    r3, 0
      beq-      .loc_0x20
      lbz       r0, 0xD4(r3)
      cmplwi    r0, 0
      beq-      .loc_0x20
      li        r3, 0x1
      blr

    .loc_0x20:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void Morimura::TItemZukan::isCategoryComplete(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000148
 */
void Morimura::TItemZukan::__ct(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80377F78
 * Size:	000124
 */
void Morimura::TItemZukan::__dt(void)
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
      beq-      .loc_0x108
      lis       r3, 0x804E
      addi      r3, r3, 0x3DDC
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x10
      stw       r0, 0x18(r30)
      lwz       r3, 0x248(r30)
      lwz       r3, 0x8(r3)
      bl        -0x354884
      cmplwi    r30, 0
      beq-      .loc_0xF8
      lis       r3, 0x804E
      addi      r3, r3, 0x4054
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x10
      stw       r0, 0x18(r30)
      lwz       r3, -0x66CC(r13)
      cmplwi    r3, 0
      beq-      .loc_0x6C
      bl        -0x354A2C

    .loc_0x6C:
      li        r0, 0
      cmplwi    r30, 0
      stw       r0, -0x66CC(r13)
      beq-      .loc_0xF8
      lis       r3, 0x804E
      addi      r3, r3, 0x58C0
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0xF8
      lis       r3, 0x804E
      subi      r3, r3, 0x4708
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0xF8
      lis       r3, 0x804F
      subi      r3, r3, 0x28A8
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0xF8
      lis       r4, 0x804E
      mr        r3, r30
      subi      r4, r4, 0x7DC0
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      bl        0x9957C
      addi      r3, r30, 0x18
      li        r4, 0
      bl        -0x35B02C
      mr        r3, r30
      li        r4, 0
      bl        0x9951C

    .loc_0xF8:
      extsh.    r0, r31
      ble-      .loc_0x108
      mr        r3, r30
      bl        -0x353FC8

    .loc_0x108:
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
 * Address:	8037809C
 * Size:	000424
 */
void Morimura::TItemZukan::doUpdate(void)
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
      stmw      r22, 0x48(r1)
      mr        r31, r3
      lbz       r0, 0x244(r3)
      cmplwi    r0, 0
      beq-      .loc_0x3F8
      lbz       r0, 0x45(r31)
      cmplwi    r0, 0
      beq-      .loc_0x3F8
      lwz       r3, 0x24C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x3AC(r31)
      cmpwi     r0, 0x2
      beq-      .loc_0x3F8
      bge-      .loc_0x70
      cmpwi     r0, 0
      beq-      .loc_0x80
      bge-      .loc_0x1A0
      b         .loc_0x3F8

    .loc_0x70:
      cmpwi     r0, 0x4
      beq-      .loc_0x29C
      bge-      .loc_0x3F8
      b         .loc_0x1AC

    .loc_0x80:
      lwz       r4, 0x23C(r31)
      rlwinm    r0,r4,2,0,29
      add       r3, r31, r0
      lwz       r0, 0x2DC(r3)
      cmpwi     r0, 0
      beq-      .loc_0x180
      li        r3, 0
      li        r0, 0x1
      stw       r3, 0x3A8(r31)
      li        r3, 0
      stw       r0, 0x3AC(r31)
      lwz       r0, 0x23C(r31)
      cmpwi     r0, 0
      ble-      .loc_0xCC
      lis       r3, 0x804E
      rlwinm    r0,r0,2,0,29
      addi      r3, r3, 0x3934
      add       r3, r3, r0
      lwz       r3, -0x4(r3)

    .loc_0xCC:
      stw       r3, 0x3B0(r31)
      lis       r3, 0x804E
      addi      r3, r3, 0x3934
      lwz       r0, 0x23C(r31)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      subi      r0, r3, 0x1
      stw       r0, 0x3B0(r31)
      lbz       r0, 0x240(r31)
      cmplwi    r0, 0
      beq-      .loc_0x158
      lwz       r0, 0x230(r31)
      li        r6, 0
      li        r5, 0
      mtctr     r0
      cmpwi     r0, 0
      ble-      .loc_0x3F8

    .loc_0x110:
      lwz       r3, 0x22C(r31)
      lwz       r4, 0x3B0(r31)
      lwzx      r0, r3, r5
      cmpw      r4, r0
      bne-      .loc_0x148
      lis       r3, 0x5555
      addi      r0, r3, 0x5556
      mulhw     r3, r0, r6
      rlwinm    r0,r3,1,31,31
      add       r0, r3, r0
      mulli     r0, r0, 0x3
      sub       r0, r6, r0
      stw       r0, -0x6638(r13)
      b         .loc_0x3F8

    .loc_0x148:
      addi      r5, r5, 0x4
      addi      r6, r6, 0x1
      bdnz+     .loc_0x110
      b         .loc_0x3F8

    .loc_0x158:
      lis       r3, 0x5555
      lwz       r4, 0x3B0(r31)
      addi      r0, r3, 0x5556
      mulhw     r3, r0, r4
      rlwinm    r0,r3,1,31,31
      add       r0, r3, r0
      mulli     r0, r0, 0x3
      sub       r0, r4, r0
      stw       r0, -0x6638(r13)
      b         .loc_0x3F8

    .loc_0x180:
      addi      r0, r4, 0x1
      stw       r0, 0x23C(r31)
      lwz       r0, 0x23C(r31)
      cmpwi     r0, 0x19
      blt-      .loc_0x3F8
      li        r0, 0
      stb       r0, 0x244(r31)
      b         .loc_0x3F8

    .loc_0x1A0:
      mr        r3, r31
      bl        .loc_0x424
      b         .loc_0x3F8

    .loc_0x1AC:
      lwz       r3, 0x80(r31)
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,22,23
      beq-      .loc_0x1E4
      li        r3, 0
      li        r0, 0x4
      stw       r3, 0x3A8(r31)
      li        r4, 0x1811
      li        r5, 0
      stw       r0, 0x3AC(r31)
      lwz       r3, -0x67A8(r13)
      bl        -0x3FC44
      lwz       r3, 0xDC(r31)
      bl        0x409C

    .loc_0x1E4:
      lwz       r3, 0x80(r31)
      lfs       f0, 0x7CC(r2)
      lfs       f1, 0x4C(r3)
      fcmpo     cr0, f1, f0
      fmr       f30, f1
      cror      2, 0x1, 0x2
      beq-      .loc_0x210
      lfs       f0, 0x804(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x3F8

    .loc_0x210:
      lfs       f0, 0x804(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x224
      lfs       f30, 0x808(r2)

    .loc_0x224:
      lfs       f0, 0x7CC(r2)
      fcmpo     cr0, f30, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x238
      lfs       f30, 0x7C4(r2)

    .loc_0x238:
      fmr       f1, f30
      lwz       r3, 0xDC(r31)
      bl        0x406C
      lwz       r3, 0xDC(r31)
      bl        0x409C
      lfs       f0, 0x7C0(r2)
      fcmpu     cr0, f0, f1
      beq-      .loc_0x26C
      lwz       r3, 0xDC(r31)
      bl        0x4088
      lfs       f0, 0x7C4(r2)
      fcmpu     cr0, f0, f1
      bne-      .loc_0x270

    .loc_0x26C:
      lfs       f30, 0x7C0(r2)

    .loc_0x270:
      lfs       f0, 0x7C0(r2)
      fcmpu     cr0, f0, f30
      beq-      .loc_0x28C
      lwz       r3, -0x67A8(r13)
      li        r4, 0x1075
      li        r5, 0
      bl        -0x3FCF4

    .loc_0x28C:
      fmr       f1, f30
      lwz       r3, 0xDC(r31)
      bl        0x4268
      b         .loc_0x3F8

    .loc_0x29C:
      lwz       r3, 0xDC(r31)
      lwz       r0, 0x20(r3)
      cmpwi     r0, 0
      bne-      .loc_0x3F8
      lwz       r0, 0x3A8(r31)
      cmpwi     r0, 0
      bne-      .loc_0x3AC
      lwz       r3, 0x11C(r31)
      li        r4, 0x187F
      lfs       f2, 0x7EC(r2)
      li        r5, 0
      lfs       f1, 0x2C(r3)
      lfs       f0, 0x24(r3)
      lfs       f3, 0x9C(r3)
      fsubs     f0, f1, f0
      lfs       f1, 0x8C(r3)
      stfs      f3, 0x14(r1)
      lwz       r3, -0x67A8(r13)
      fnmsubs   f0, f2, f0, f3
      stfs      f1, 0x10(r1)
      stfs      f0, 0x14(r1)
      bl        -0x3FD5C
      lis       r7, 0x804C
      lis       r6, 0x804C
      lis       r5, 0x804C
      lis       r4, 0x804E
      lis       r3, 0x804E
      lwz       r23, 0x10(r1)
      lwz       r24, 0x14(r1)
      addi      r25, r7, 0x1514
      lfs       f30, 0x870(r2)
      addi      r27, r6, 0x14F0
      lfd       f31, 0x820(r2)
      addi      r28, r5, 0x14D8
      addi      r29, r4, 0x7488
      addi      r30, r3, 0x3DC4
      li        r22, 0
      lis       r26, 0x4330

    .loc_0x334:
      xoris     r0, r22, 0x8000
      li        r5, 0
      stw       r0, 0x3C(r1)
      li        r0, 0x7
      addi      r3, r1, 0x18
      addi      r4, r1, 0x28
      stw       r26, 0x38(r1)
      lfd       f0, 0x38(r1)
      stw       r23, 0x8(r1)
      fsubs     f0, f0, f31
      lfs       f2, 0x8(r1)
      stw       r27, 0x18(r1)
      fmadds    f0, f30, f0, f2
      stw       r24, 0xC(r1)
      stw       r28, 0x18(r1)
      lfs       f1, 0xC(r1)
      stfs      f2, 0x28(r1)
      stw       r29, 0x18(r1)
      stw       r25, 0x30(r1)
      stfs      f1, 0x2C(r1)
      stfs      f0, 0x28(r1)
      stb       r5, 0x1C(r1)
      stb       r5, 0x1D(r1)
      sth       r0, 0x20(r1)
      stw       r5, 0x24(r1)
      stw       r30, 0x18(r1)
      bl        0x413F8
      addi      r22, r22, 0x1
      cmpwi     r22, 0x5
      blt+      .loc_0x334

    .loc_0x3AC:
      lwz       r3, 0x3A8(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x3A8(r31)
      lwz       r0, 0x3A8(r31)
      cmpwi     r0, 0x1E
      ble-      .loc_0x3F8
      lwz       r3, 0x23C(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x23C(r31)
      lwz       r0, 0x23C(r31)
      cmpwi     r0, 0x19
      blt-      .loc_0x3F0
      li        r0, 0
      lfs       f0, 0x7C4(r2)
      stb       r0, 0x244(r31)
      stfs      f0, 0x1F8(r31)
      b         .loc_0x3F8

    .loc_0x3F0:
      li        r0, 0
      stw       r0, 0x3AC(r31)

    .loc_0x3F8:
      mr        r3, r31
      bl        -0x6BC0
      psq_l     f31,0x88(r1),0,0
      lfd       f31, 0x80(r1)
      psq_l     f30,0x78(r1),0,0
      lfd       f30, 0x70(r1)
      lmw       r22, 0x48(r1)
      lwz       r0, 0x94(r1)
      mtlr      r0
      addi      r1, r1, 0x90
      blr

    .loc_0x424:
    */
}

/*
 * --INFO--
 * Address:	803784C0
 * Size:	0000A8
 */
void Morimura::TItemZukan::demoSet(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0x94(r3)
      lwz       r3, 0x88(r3)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2A0D8
      lwz       r0, 0x3B0(r31)
      cmpw      r0, r3
      beq-      .loc_0x40
      lwz       r3, 0x84(r31)
      bl        0x29D14
      b         .loc_0x94

    .loc_0x40:
      lwz       r3, 0xDC(r31)
      lwz       r0, 0x20(r3)
      cmpwi     r0, 0
      bne-      .loc_0x94
      lwz       r3, 0x3A4(r31)
      lwz       r4, 0x23C(r31)
      bl        0x28CF4
      lwz       r5, 0x110(r31)
      li        r0, 0
      stw       r4, 0x1C(r5)
      stw       r3, 0x18(r5)
      stb       r0, 0x214(r31)
      lwz       r3, 0xDC(r31)
      bl        0x3CF4
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xC4(r12)
      mtctr     r12
      bctrl
      li        r0, 0x3
      stw       r0, 0x3AC(r31)

    .loc_0x94:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80378568
 * Size:	00045C
 */
void Morimura::TItemZukan::setShortenIndex((int, int, bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stmw      r26, 0x28(r1)
      mr        r29, r3
      mr        r30, r4
      mr        r31, r6
      bl        -0x402C
      lbz       r0, 0x242(r29)
      li        r7, 0
      li        r4, 0x1
      cmplwi    r0, 0
      beq-      .loc_0x9C
      lwz       r0, 0x3B4(r29)
      rlwinm    r3,r0,1,31,31
      rlwinm    r0,r0,0,31,31
      xor       r0, r0, r3
      sub       r0, r0, r3
      cmpwi     r0, 0x1
      bne-      .loc_0x9C
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x7C
      subic.    r5, r30, 0x1
      li        r4, 0x3
      bge-      .loc_0x6C
      lha       r3, 0x8E(r29)
      subi      r5, r3, 0x1

    .loc_0x6C:
      lwz       r3, 0x88(r29)
      rlwinm    r0,r5,2,0,29
      lwzx      r7, r3, r0
      b         .loc_0x9C

    .loc_0x7C:
      lha       r0, 0x8E(r29)
      addi      r5, r30, 0x1
      cmpw      r5, r0
      blt-      .loc_0x90
      li        r5, 0

    .loc_0x90:
      lwz       r3, 0x88(r29)
      rlwinm    r0,r5,2,0,29
      lwzx      r7, r3, r0

    .loc_0x9C:
      cmplwi    r7, 0
      li        r0, 0
      beq-      .loc_0x2B8
      li        r3, -0x1
      li        r5, 0
      mtctr     r4
      cmpwi     r4, 0
      ble-      .loc_0xDC

    .loc_0xBC:
      lwz       r4, 0x20(r7)
      lwzx      r6, r4, r5
      lwz       r4, 0x18(r6)
      cmplwi    r4, 0
      beq-      .loc_0xD4
      lwz       r3, 0x0(r6)

    .loc_0xD4:
      addi      r5, r5, 0x4
      bdnz+     .loc_0xBC

    .loc_0xDC:
      cmpwi     r3, 0
      blt-      .loc_0x2B8
      rlwinm.   r4,r31,0,24,31
      beq-      .loc_0x1D4
      lwz       r4, 0x88(r29)
      rlwinm    r6,r30,2,0,29
      lwzx      r4, r6, r4
      lwz       r4, 0x20(r4)
      lwz       r4, 0x0(r4)
      lwz       r7, 0x0(r4)
      cmpw      r3, r7
      beq-      .loc_0x13C
      lwz       r4, 0x18(r4)
      cmplwi    r4, 0
      beq-      .loc_0x13C
      rlwinm    r3,r3,2,0,29
      rlwinm    r4,r7,2,0,29
      addi      r5, r3, 0x340
      mr        r3, r7
      lwzx      r5, r29, r5
      addi      r4, r4, 0x340
      li        r0, 0x1
      subfic    r5, r5, 0x1
      stwx      r5, r29, r4

    .loc_0x13C:
      lwz       r4, 0x88(r29)
      lwzx      r4, r6, r4
      lwz       r4, 0x20(r4)
      lwz       r4, 0x4(r4)
      lwz       r7, 0x0(r4)
      cmpw      r3, r7
      beq-      .loc_0x188
      lwz       r4, 0x18(r4)
      cmplwi    r4, 0
      beq-      .loc_0x188
      rlwinm    r3,r3,2,0,29
      rlwinm    r4,r7,2,0,29
      addi      r5, r3, 0x340
      mr        r3, r7
      lwzx      r5, r29, r5
      addi      r4, r4, 0x340
      li        r0, 0x1
      subfic    r5, r5, 0x1
      stwx      r5, r29, r4

    .loc_0x188:
      lwz       r4, 0x88(r29)
      lwzx      r4, r6, r4
      lwz       r4, 0x20(r4)
      lwz       r4, 0x8(r4)
      lwz       r7, 0x0(r4)
      cmpw      r3, r7
      beq-      .loc_0x2B8
      lwz       r4, 0x18(r4)
      cmplwi    r4, 0
      beq-      .loc_0x2B8
      rlwinm    r3,r3,2,0,29
      rlwinm    r4,r7,2,0,29
      addi      r5, r3, 0x340
      li        r0, 0x1
      lwzx      r5, r29, r5
      addi      r4, r4, 0x340
      subfic    r5, r5, 0x1
      stwx      r5, r29, r4
      b         .loc_0x2B8

    .loc_0x1D4:
      lwz       r4, 0x88(r29)
      rlwinm    r6,r30,2,0,29
      lwzx      r4, r6, r4
      lwz       r4, 0x20(r4)
      lwz       r4, 0x8(r4)
      lwz       r7, 0x0(r4)
      cmpw      r3, r7
      beq-      .loc_0x224
      lwz       r4, 0x18(r4)
      cmplwi    r4, 0
      beq-      .loc_0x224
      rlwinm    r3,r3,2,0,29
      rlwinm    r4,r7,2,0,29
      addi      r5, r3, 0x340
      mr        r3, r7
      lwzx      r5, r29, r5
      addi      r4, r4, 0x340
      li        r0, 0x1
      subfic    r5, r5, 0x1
      stwx      r5, r29, r4

    .loc_0x224:
      lwz       r4, 0x88(r29)
      lwzx      r4, r6, r4
      lwz       r4, 0x20(r4)
      lwz       r4, 0x4(r4)
      lwz       r7, 0x0(r4)
      cmpw      r3, r7
      beq-      .loc_0x270
      lwz       r4, 0x18(r4)
      cmplwi    r4, 0
      beq-      .loc_0x270
      rlwinm    r3,r3,2,0,29
      rlwinm    r4,r7,2,0,29
      addi      r5, r3, 0x340
      mr        r3, r7
      lwzx      r5, r29, r5
      addi      r4, r4, 0x340
      li        r0, 0x1
      subfic    r5, r5, 0x1
      stwx      r5, r29, r4

    .loc_0x270:
      lwz       r4, 0x88(r29)
      lwzx      r4, r6, r4
      lwz       r4, 0x20(r4)
      lwz       r4, 0x0(r4)
      lwz       r7, 0x0(r4)
      cmpw      r3, r7
      beq-      .loc_0x2B8
      lwz       r4, 0x18(r4)
      cmplwi    r4, 0
      beq-      .loc_0x2B8
      rlwinm    r3,r3,2,0,29
      rlwinm    r4,r7,2,0,29
      addi      r5, r3, 0x340
      li        r0, 0x1
      lwzx      r5, r29, r5
      addi      r4, r4, 0x340
      subfic    r5, r5, 0x1
      stwx      r5, r29, r4

    .loc_0x2B8:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x39C
      li        r28, 0
      li        r31, 0
      b         .loc_0x38C

    .loc_0x2CC:
      lwz       r3, 0x88(r29)
      lwzx      r0, r3, r31
      cmplwi    r0, 0
      beq-      .loc_0x448
      li        r27, 0
      li        r30, 0

    .loc_0x2E4:
      lwz       r0, 0x88(r29)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwzx      r4, r31, r0
      lwz       r12, 0xB0(r12)
      lwz       r4, 0x20(r4)
      lwzx      r4, r4, r30
      lwz       r26, 0x4(r4)
      lwz       r4, 0x0(r4)
      mtctr     r12
      bctrl
      cmpwi     r3, 0
      bne-      .loc_0x348
      lwz       r5, -0x66E0(r13)
      mr        r3, r26
      lwz       r0, -0x66DC(r13)
      addi      r4, r1, 0x24
      stw       r5, 0x20(r1)
      addi      r5, r1, 0x20
      stw       r0, 0x24(r1)
      lwz       r12, 0x0(r26)
      lwz       r12, 0x130(r12)
      mtctr     r12
      bctrl
      b         .loc_0x374

    .loc_0x348:
      lwz       r5, -0x66D8(r13)
      mr        r3, r26
      lwz       r0, -0x66D4(r13)
      addi      r4, r1, 0x1C
      stw       r5, 0x18(r1)
      addi      r5, r1, 0x18
      stw       r0, 0x1C(r1)
      lwz       r12, 0x0(r26)
      lwz       r12, 0x130(r12)
      mtctr     r12
      bctrl

    .loc_0x374:
      addi      r27, r27, 0x1
      addi      r30, r30, 0x4
      cmpwi     r27, 0x3
      blt+      .loc_0x2E4
      addi      r31, r31, 0x4
      addi      r28, r28, 0x1

    .loc_0x38C:
      lha       r0, 0x8E(r29)
      cmpw      r28, r0
      blt+      .loc_0x2CC
      b         .loc_0x448

    .loc_0x39C:
      rlwinm    r31,r30,2,0,29
      li        r26, 0
      li        r30, 0

    .loc_0x3A8:
      lwz       r0, 0x88(r29)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwzx      r4, r31, r0
      lwz       r12, 0xB0(r12)
      lwz       r4, 0x20(r4)
      lwzx      r4, r4, r30
      lwz       r27, 0x4(r4)
      lwz       r4, 0x0(r4)
      mtctr     r12
      bctrl
      cmpwi     r3, 0
      bne-      .loc_0x40C
      lwz       r5, -0x66E0(r13)
      mr        r3, r27
      lwz       r0, -0x66DC(r13)
      addi      r4, r1, 0x14
      stw       r5, 0x10(r1)
      addi      r5, r1, 0x10
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r27)
      lwz       r12, 0x130(r12)
      mtctr     r12
      bctrl
      b         .loc_0x438

    .loc_0x40C:
      lwz       r5, -0x66D8(r13)
      mr        r3, r27
      lwz       r0, -0x66D4(r13)
      addi      r4, r1, 0xC
      stw       r5, 0x8(r1)
      addi      r5, r1, 0x8
      stw       r0, 0xC(r1)
      lwz       r12, 0x0(r27)
      lwz       r12, 0x130(r12)
      mtctr     r12
      bctrl

    .loc_0x438:
      addi      r26, r26, 0x1
      addi      r30, r30, 0x4
      cmpwi     r26, 0x3
      blt+      .loc_0x3A8

    .loc_0x448:
      lmw       r26, 0x28(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	803789C4
 * Size:	000010
 */
void Morimura::TItemZukan::getCategoryColorId((int))
{
    /*
    .loc_0x0:
      rlwinm    r0,r4,2,0,29
      add       r3, r3, r0
      lwz       r3, 0x340(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803789D4
 * Size:	0002D4
 */
void Morimura::TItemZukan::doUpdateOut(void)
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
      stmw      r25, 0x24(r1)
      mr        r31, r3
      bl        -0x4DEC
      lbz       r0, 0x241(r31)
      cmplwi    r0, 0
      beq-      .loc_0x1D8
      lfs       f31, 0x7D8(r2)
      li        r27, 0
      lfd       f27, 0x830(r2)
      li        r28, 0
      lfs       f28, 0x810(r2)
      lis       r30, 0x4330
      lfs       f29, 0x7C0(r2)
      lfs       f30, 0x7C4(r2)
      b         .loc_0x1CC

    .loc_0x80:
      lwz       r3, 0xD8(r31)
      stw       r30, 0x10(r1)
      lwz       r0, 0x20(r3)
      stw       r0, 0x8(r1)
      lbz       r0, 0xB(r1)
      stw       r0, 0x14(r1)
      lfd       f0, 0x10(r1)
      fsubs     f0, f0, f27
      fdivs     f0, f0, f28
      fcmpo     cr0, f0, f29
      bge-      .loc_0xB0
      fmr       f0, f29

    .loc_0xB0:
      fcmpo     cr0, f0, f30
      ble-      .loc_0xBC
      fmr       f0, f30

    .loc_0xBC:
      fcmpo     cr0, f0, f31
      fsubs     f1, f30, f0
      bge-      .loc_0xCC
      fmr       f0, f31

    .loc_0xCC:
      fcmpo     cr0, f1, f31
      bge-      .loc_0xD8
      fmr       f1, f31

    .loc_0xD8:
      fmuls     f26, f28, f0
      li        r26, 0
      fmuls     f25, f28, f1
      li        r29, 0

    .loc_0xE8:
      lwz       r0, 0x88(r31)
      lwzx      r3, r28, r0
      lwz       r3, 0x20(r3)
      lwzx      r3, r3, r29
      lwz       r4, 0x0(r3)
      lwz       r25, 0x4(r3)
      rlwinm    r3,r4,2,0,29
      addi      r0, r3, 0x278
      lwzx      r0, r31, r0
      cmpwi     r0, 0
      beq-      .loc_0x144
      lfs       f1, 0x810(r2)
      mr        r3, r25
      lfs       f0, -0x7A50(r13)
      lwz       r12, 0x0(r25)
      fmuls     f0, f1, f0
      lwz       r12, 0x24(r12)
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r4, 0x14(r1)
      mtctr     r12
      bctrl
      b         .loc_0x1B4

    .loc_0x144:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      lwz       r12, 0xB0(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0
      bne-      .loc_0x18C
      lfs       f0, -0x7A50(r13)
      mr        r3, r25
      lwz       r12, 0x0(r25)
      fmuls     f0, f26, f0
      lwz       r12, 0x24(r12)
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r4, 0x14(r1)
      mtctr     r12
      bctrl
      b         .loc_0x1B4

    .loc_0x18C:
      lfs       f0, -0x7A50(r13)
      mr        r3, r25
      lwz       r12, 0x0(r25)
      fmuls     f0, f25, f0
      lwz       r12, 0x24(r12)
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r4, 0x14(r1)
      mtctr     r12
      bctrl

    .loc_0x1B4:
      addi      r26, r26, 0x1
      addi      r29, r29, 0x4
      cmpwi     r26, 0x3
      blt+      .loc_0xE8
      addi      r28, r28, 0x4
      addi      r27, r27, 0x1

    .loc_0x1CC:
      lha       r0, 0x8E(r31)
      cmpw      r27, r0
      blt+      .loc_0x80

    .loc_0x1D8:
      lbz       r0, 0x244(r31)
      cmplwi    r0, 0
      beq-      .loc_0x288
      lwz       r0, 0x3AC(r31)
      cmpwi     r0, 0x1
      bne-      .loc_0x218
      lfs       f2, 0x3B8(r31)
      lfs       f1, 0x7D8(r2)
      lfs       f0, 0x7C0(r2)
      fsubs     f1, f2, f1
      stfs      f1, 0x3B8(r31)
      lfs       f1, 0x3B8(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x254
      stfs      f0, 0x3B8(r31)
      b         .loc_0x254

    .loc_0x218:
      lwz       r3, 0x3A8(r31)
      lis       r0, 0x4330
      stw       r0, 0x10(r1)
      xoris     r0, r3, 0x8000
      lfd       f1, 0x820(r2)
      stw       r0, 0x14(r1)
      lfs       f2, 0x7C0(r2)
      lfd       f0, 0x10(r1)
      fsubs     f0, f0, f1
      fcmpu     cr0, f2, f0
      bne-      .loc_0x24C
      stfs      f2, 0x3B8(r31)
      b         .loc_0x254

    .loc_0x24C:
      lfs       f0, 0x7C4(r2)
      stfs      f0, 0x3B8(r31)

    .loc_0x254:
      lfs       f0, 0x3B8(r31)
      lfs       f1, 0x810(r2)
      stfs      f0, 0x1F8(r31)
      lfs       f0, 0x3B8(r31)
      lwz       r3, 0x11C(r31)
      fmuls     f0, f1, f0
      lwz       r12, 0x0(r3)
      fctiwz    f0, f0
      lwz       r12, 0x24(r12)
      stfd      f0, 0x10(r1)
      lwz       r4, 0x14(r1)
      mtctr     r12
      bctrl

    .loc_0x288:
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
      lmw       r25, 0x24(r1)
      lwz       r0, 0xB4(r1)
      mtlr      r0
      addi      r1, r1, 0xB0
      blr
    */
}

/*
 * --INFO--
 * Address:	80378CA8
 * Size:	0000C0
 */
void Morimura::TItemZukan::getUpdateIndex((int&, bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lbz       r0, 0x240(r3)
      cmplwi    r0, 0
      beq-      .loc_0xAC
      rlwinm.   r0,r5,0,24,31
      beq-      .loc_0x4C
      lwz       r5, 0x0(r4)
      lwz       r0, 0x9C(r3)
      add       r0, r5, r0
      stw       r0, 0x0(r4)
      lwz       r5, 0x0(r4)
      lwz       r0, 0x230(r3)
      cmpw      r5, r0
      blt-      .loc_0xB0
      li        r0, 0
      stw       r0, 0x0(r4)
      b         .loc_0xB0

    .loc_0x4C:
      lwz       r5, 0x9C(r3)
      lwz       r0, 0x0(r4)
      sub       r0, r0, r5
      stw       r0, 0x0(r4)
      lwz       r0, 0x0(r4)
      cmpwi     r0, 0
      bge-      .loc_0xB0
      lwz       r5, 0x230(r3)
      cmpwi     r5, 0x3
      bge-      .loc_0x7C
      mr        r0, r5
      b         .loc_0xA0

    .loc_0x7C:
      lis       r3, 0x5555
      addi      r0, r3, 0x5556
      mulhw     r3, r0, r5
      rlwinm    r0,r3,1,31,31
      add       r0, r3, r0
      mulli     r0, r0, 0x3
      sub.      r0, r5, r0
      bne-      .loc_0xA0
      li        r0, 0x3

    .loc_0xA0:
      sub       r0, r5, r0
      stw       r0, 0x0(r4)
      b         .loc_0xB0

    .loc_0xAC:
      bl        0x2A41C

    .loc_0xB0:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80378D68
 * Size:	00003C
 */
void Morimura::TItemZukan::getNameID((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      mr        r3, r4
      bl        -0x150B7C
      mr        r4, r3
      lwz       r3, 0x1E4(r31)
      bl        0x28480
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80378DA4
 * Size:	00003C
 */
void Morimura::TItemZukan::getXMsgID((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      mr        r3, r4
      bl        -0x150BB8
      mr        r4, r3
      lwz       r3, 0x1E8(r31)
      bl        0x28444
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80378DE0
 * Size:	00003C
 */
void Morimura::TItemZukan::getYMsgID((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      mr        r3, r4
      bl        -0x150BF4
      mr        r4, r3
      lwz       r3, 0x1EC(r31)
      bl        0x28408
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80378E1C
 * Size:	000034
 */
void Morimura::TItemZukan::getModelIndex((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0
      stw       r0, 0x14(r1)
      bge-      .loc_0x1C
      li        r3, -0x1
      b         .loc_0x24

    .loc_0x1C:
      mr        r3, r4
      bl        -0x150C38

    .loc_0x24:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80378E50
 * Size:	000020
 */
void Morimura::TItemZukan::getIdMax(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x150D14
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80378E70
 * Size:	001690
 */
void Morimura::TItemZukan::doCreate((JKRArchive*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xD0(r1)
      mflr      r0
      stw       r0, 0xD4(r1)
      stfd      f31, 0xC0(r1)
      psq_st    f31,0xC8(r1),0,0
      stfd      f30, 0xB0(r1)
      psq_st    f30,0xB8(r1),0,0
      stmw      r22, 0x88(r1)
      lis       r5, 0x8051
      lfs       f4, 0x838(r2)
      li        r12, 0
      subi      r10, r13, 0x66E0
      addi      r24, r5, 0x401C
      lfs       f3, 0x858(r2)
      lfs       f2, 0x85C(r2)
      li        r11, 0x5F
      lfs       f1, 0x874(r2)
      li        r9, 0xE6
      subi      r8, r13, 0x66DC
      lfs       f0, 0x7EC(r2)
      subi      r7, r13, 0x66D8
      li        r6, 0xFF
      subi      r5, r13, 0x66D4
      li        r0, 0x80
      lis       r25, 0x8049
      mr        r31, r3
      stfs      f4, 0x0(r24)
      mr        r29, r4
      addi      r30, r25, 0x2520
      li        r3, 0x38
      stfs      f3, 0x8(r24)
      stfs      f2, 0x4(r24)
      stfs      f1, 0xC(r24)
      stfs      f0, 0x10(r24)
      stb       r12, -0x66E0(r13)
      stb       r11, 0x1(r10)
      stb       r12, 0x2(r10)
      stb       r9, -0x66DC(r13)
      stb       r9, 0x1(r8)
      stb       r12, 0x2(r8)
      stb       r12, -0x66D8(r13)
      stb       r12, 0x1(r7)
      stb       r6, 0x2(r7)
      stb       r12, -0x66D4(r13)
      stb       r0, 0x1(r5)
      stb       r6, 0x2(r5)
      bl        -0x355084
      mr.       r0, r3
      beq-      .loc_0xE4
      lis       r5, 0x756D
      li        r4, 0
      addi      r6, r5, 0x6D79
      li        r5, 0x64
      li        r7, 0x3
      li        r8, 0x32
      bl        0x92F24
      mr        r0, r3

    .loc_0xE4:
      stw       r0, 0x24C(r31)
      li        r0, 0x1
      mr        r3, r31
      lwz       r5, -0x66E0(r13)
      lwz       r4, 0x24C(r31)
      stw       r5, 0x18(r1)
      lwz       r6, 0x1C(r4)
      lbz       r5, 0x18(r1)
      lbz       r4, 0x19(r1)
      stb       r5, 0x0(r6)
      lbz       r5, 0x1A(r1)
      stb       r4, 0x1(r6)
      lbz       r4, 0x1B(r1)
      stb       r5, 0x2(r6)
      stb       r4, 0x3(r6)
      lwz       r5, -0x66DC(r13)
      lwz       r4, 0x24C(r31)
      stw       r5, 0x14(r1)
      lwz       r6, 0x1C(r4)
      lbz       r5, 0x14(r1)
      lbz       r4, 0x15(r1)
      stb       r5, 0x4(r6)
      lbz       r5, 0x16(r1)
      stb       r4, 0x5(r6)
      lbz       r4, 0x17(r1)
      stb       r5, 0x6(r6)
      stb       r4, 0x7(r6)
      lwz       r5, -0x66E0(r13)
      lwz       r4, 0x24C(r31)
      stw       r5, 0x10(r1)
      lwz       r6, 0x1C(r4)
      lbz       r5, 0x10(r1)
      lbz       r4, 0x11(r1)
      stb       r5, 0x8(r6)
      lbz       r5, 0x12(r1)
      stb       r4, 0x9(r6)
      lbz       r4, 0x13(r1)
      stb       r5, 0xA(r6)
      stb       r4, 0xB(r6)
      lwz       r4, 0x24C(r31)
      stb       r0, 0x34(r4)
      stw       r29, 0x78(r31)
      bl        0xDAFAC
      lis       r4, 0x4D52
      lis       r6, 0x4954
      mr        r24, r3
      li        r5, 0x44
      addi      r4, r4, 0x4D52
      addi      r6, r6, 0x454D
      bl        -0x69CFC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1BC
      stw       r24, 0x248(r31)
      b         .loc_0x1C4

    .loc_0x1BC:
      li        r0, 0x1
      stb       r0, -0x6760(r13)

    .loc_0x1C4:
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0x3F4
      lwz       r4, -0x66D0(r13)
      cmplwi    r4, 0
      beq-      .loc_0x3DC
      lis       r3, 0x10
      li        r5, 0x1
      bl        -0x35918C
      cmplwi    r3, 0
      stw       r3, -0x66CC(r13)
      bne-      .loc_0x208
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x1036
      crclr     6, 0x6
      bl        -0x34EA34

    .loc_0x208:
      lwz       r4, -0x66CC(r13)
      li        r3, 0x20
      li        r5, 0
      bl        -0x355144
      cmplwi    r3, 0
      beq-      .loc_0x264
      lis       r4, 0x804B
      lis       r5, 0x804C
      addi      r0, r4, 0x1148
      lis       r4, 0x804C
      stw       r0, 0x0(r3)
      li        r6, 0
      addi      r5, r5, 0xB44
      addi      r0, r4, 0xB14
      stw       r6, 0x4(r3)
      stw       r5, 0x0(r3)
      stw       r6, 0x8(r3)
      stw       r6, 0xC(r3)
      stw       r6, 0x10(r3)
      stw       r6, 0x14(r3)
      stw       r6, 0x18(r3)
      stw       r6, 0x1C(r3)
      stw       r0, 0x0(r3)

    .loc_0x264:
      stw       r3, 0x248(r31)
      li        r0, 0x1
      mr        r3, r31
      lwz       r5, -0x66CC(r13)
      lwz       r4, 0x248(r31)
      stw       r5, 0x8(r4)
      stb       r0, -0x6760(r13)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      bl        -0x355154
      stw       r3, 0x180(r31)
      li        r27, 0
      lfd       f30, 0x820(r2)
      lis       r25, 0x4330
      lfs       f31, 0x854(r2)
      li        r26, 0
      li        r24, 0x1
      b         .loc_0x2F0

    .loc_0x2B4:
      lwz       r3, 0x180(r31)
      stbx      r26, r3, r27
      bl        -0x2AFB8C
      xoris     r0, r3, 0x8000
      stw       r25, 0x78(r1)
      lfs       f0, -0x6704(r13)
      stw       r0, 0x7C(r1)
      lfd       f1, 0x78(r1)
      fsubs     f1, f1, f30
      fdivs     f1, f1, f31
      fcmpo     cr0, f1, f0
      bge-      .loc_0x2EC
      lwz       r3, 0x180(r31)
      stbx      r24, r3, r27

    .loc_0x2EC:
      addi      r27, r27, 0x1

    .loc_0x2F0:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      cmpw      r27, r3
      blt+      .loc_0x2B4
      lwz       r4, -0x66CC(r13)
      li        r3, 0x4
      li        r5, 0
      bl        -0x355248
      lwz       r4, 0x248(r31)
      stw       r3, 0x1C(r4)
      bl        -0x2AFBF4
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x248(r31)
      li        r0, 0
      li        r3, 0x28
      lwz       r4, 0x1C(r4)
      stw       r0, 0x0(r4)
      bl        -0x35531C
      cmplwi    r3, 0
      beq-      .loc_0x3B4
      lis       r4, 0x804B
      lis       r7, 0x804E
      addi      r0, r4, 0x1148
      lis       r6, 0x305F
      stw       r0, 0x0(r3)
      li        r8, 0
      lis       r5, 0x34
      lis       r4, 0x315F
      stw       r8, 0x4(r3)
      subi      r0, r7, 0x61F8
      addi      r6, r6, 0x3030
      addi      r5, r5, 0x3731
      stw       r0, 0x0(r3)
      addi      r4, r4, 0x3030
      li        r0, 0xB4
      stw       r8, 0x8(r3)
      stw       r6, 0x14(r3)
      stw       r5, 0x10(r3)
      stw       r4, 0x1C(r3)
      stw       r5, 0x18(r3)
      stb       r0, 0x20(r3)
      stb       r8, 0x21(r3)

    .loc_0x3B4:
      lwz       r4, 0x248(r31)
      stw       r3, 0x18(r4)
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x248(r31)
      bl        0xD8E7C
      b         .loc_0x464

    .loc_0x3DC:
      addi      r3, r30, 0xC
      addi      r5, r30, 0x4C0
      li        r4, 0x104E
      crclr     6, 0x6
      bl        -0x34EC1C
      b         .loc_0x464

    .loc_0x3F4:
      li        r3, 0x28
      bl        -0x3553C4
      cmplwi    r3, 0
      beq-      .loc_0x45C
      lis       r4, 0x804B
      lis       r7, 0x804E
      addi      r0, r4, 0x1148
      lis       r6, 0x305F
      stw       r0, 0x0(r3)
      li        r8, 0
      lis       r5, 0x34
      lis       r4, 0x315F
      stw       r8, 0x4(r3)
      subi      r0, r7, 0x61F8
      addi      r6, r6, 0x3030
      addi      r5, r5, 0x3731
      stw       r0, 0x0(r3)
      addi      r4, r4, 0x3030
      li        r0, 0xB4
      stw       r8, 0x8(r3)
      stw       r6, 0x14(r3)
      stw       r5, 0x10(r3)
      stw       r4, 0x1C(r3)
      stw       r5, 0x18(r3)
      stb       r0, 0x20(r3)
      stb       r8, 0x21(r3)

    .loc_0x45C:
      lwz       r4, 0x248(r31)
      stw       r3, 0x18(r4)

    .loc_0x464:
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0x484
      lbz       r0, -0x6706(r13)
      cmplwi    r0, 0
      bne-      .loc_0x484
      li        r0, 0
      stb       r0, 0x240(r31)

    .loc_0x484:
      lwz       r3, -0x6B70(r13)
      cmplwi    r3, 0
      beq-      .loc_0x4A4
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x4A4
      li        r0, 0
      stb       r0, 0x240(r31)

    .loc_0x4A4:
      li        r0, 0x1
      stb       r0, 0x241(r31)
      lbz       r0, 0x240(r31)
      cmplwi    r0, 0
      beq-      .loc_0x66C
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0x59C
      bl        -0x2AFD94
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x7C(r1)
      li        r4, 0
      lfd       f3, 0x820(r2)
      stw       r0, 0x78(r1)
      lfs       f1, 0x854(r2)
      lfd       f2, 0x78(r1)
      lfs       f0, 0x878(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x80(r1)
      lwz       r24, 0x84(r1)
      mtctr     r24
      cmpwi     r24, 0
      ble-      .loc_0x538

    .loc_0x510:
      rlwinm    r3,r4,1,31,31
      rlwinm    r0,r4,0,31,31
      xor       r0, r0, r3
      sub.      r0, r0, r3
      bne-      .loc_0x530
      lwz       r3, 0x230(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x230(r31)

    .loc_0x530:
      addi      r4, r4, 0x1
      bdnz+     .loc_0x510

    .loc_0x538:
      lwz       r0, 0x230(r31)
      cmpwi     r0, 0
      bne-      .loc_0x550
      li        r0, 0
      stb       r0, 0x242(r31)
      b         .loc_0x55C

    .loc_0x550:
      rlwinm    r3,r0,2,0,29
      bl        -0x355418
      stw       r3, 0x22C(r31)

    .loc_0x55C:
      li        r5, 0
      li        r4, 0
      mtctr     r24
      cmpwi     r24, 0
      ble-      .loc_0x66C

    .loc_0x570:
      rlwinm    r3,r5,1,31,31
      rlwinm    r0,r5,0,31,31
      xor       r0, r0, r3
      sub.      r0, r0, r3
      bne-      .loc_0x590
      lwz       r3, 0x22C(r31)
      stwx      r5, r3, r4
      addi      r4, r4, 0x4

    .loc_0x590:
      addi      r5, r5, 0x1
      bdnz+     .loc_0x570
      b         .loc_0x66C

    .loc_0x59C:
      li        r24, 0
      b         .loc_0x5D4

    .loc_0x5A4:
      mr        r3, r31
      mr        r4, r24
      lwz       r12, 0x0(r31)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x5D0
      lwz       r3, 0x230(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x230(r31)

    .loc_0x5D0:
      addi      r24, r24, 0x1

    .loc_0x5D4:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      cmpw      r24, r3
      blt+      .loc_0x5A4
      lwz       r0, 0x230(r31)
      cmpwi     r0, 0
      bne-      .loc_0x608
      li        r0, 0
      stb       r0, 0x242(r31)
      b         .loc_0x614

    .loc_0x608:
      rlwinm    r3,r0,2,0,29
      bl        -0x3554D0
      stw       r3, 0x22C(r31)

    .loc_0x614:
      li        r25, 0
      li        r24, 0
      b         .loc_0x650

    .loc_0x620:
      mr        r3, r31
      mr        r4, r25
      lwz       r12, 0x0(r31)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x64C
      lwz       r3, 0x22C(r31)
      stwx      r25, r3, r24
      addi      r24, r24, 0x4

    .loc_0x64C:
      addi      r25, r25, 0x1

    .loc_0x650:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      cmpw      r25, r3
      blt+      .loc_0x620

    .loc_0x66C:
      lbz       r0, 0x240(r31)
      cmplwi    r0, 0
      beq-      .loc_0x698
      lha       r3, 0x8E(r31)
      lwz       r4, 0x230(r31)
      subi      r0, r3, 0x1
      mulli     r0, r0, 0x3
      cmpw      r4, r0
      bgt-      .loc_0x698
      li        r0, 0
      stb       r0, 0x242(r31)

    .loc_0x698:
      lfd       f2, 0xC08(r30)
      li        r3, 0x18
      lfd       f1, 0xC10(r30)
      lfd       f0, 0xC18(r30)
      stfd      f2, 0x60(r1)
      stfd      f1, 0x68(r1)
      stfd      f0, 0x70(r1)
      bl        -0x355680
      mr.       r0, r3
      beq-      .loc_0x6E0
      lis       r6, 0x305F
      lis       r5, 0x30
      addi      r4, r1, 0x60
      li        r7, 0x3
      addi      r6, r6, 0x3030
      addi      r5, r5, 0x3130
      bl        0x27B9C
      mr        r0, r3

    .loc_0x6E0:
      stw       r0, 0x1E4(r31)
      li        r3, 0x18
      lfd       f2, 0xC20(r30)
      lfd       f1, 0xC28(r30)
      lfd       f0, 0xC30(r30)
      stfd      f2, 0x48(r1)
      stfd      f1, 0x50(r1)
      stfd      f0, 0x58(r1)
      bl        -0x3556CC
      mr.       r0, r3
      beq-      .loc_0x72C
      lis       r6, 0x305F
      lis       r5, 0x30
      addi      r4, r1, 0x48
      li        r7, 0x3
      addi      r6, r6, 0x3030
      addi      r5, r5, 0x3430
      bl        0x27B50
      mr        r0, r3

    .loc_0x72C:
      stw       r0, 0x1E8(r31)
      li        r3, 0x18
      lfd       f2, 0xC38(r30)
      lfd       f1, 0xC40(r30)
      lfd       f0, 0xC48(r30)
      stfd      f2, 0x30(r1)
      stfd      f1, 0x38(r1)
      stfd      f0, 0x40(r1)
      bl        -0x355718
      mr.       r0, r3
      beq-      .loc_0x778
      lis       r6, 0x305F
      lis       r5, 0x30
      addi      r4, r1, 0x30
      li        r7, 0x3
      addi      r6, r6, 0x3030
      addi      r5, r5, 0x3730
      bl        0x27B04
      mr        r0, r3

    .loc_0x778:
      stw       r0, 0x1EC(r31)
      li        r3, 0x18
      lfd       f1, 0xC50(r30)
      lfd       f0, 0xC58(r30)
      stfd      f1, 0x20(r1)
      stfd      f0, 0x28(r1)
      bl        -0x35575C
      mr.       r4, r3
      beq-      .loc_0x7BC
      lis       r6, 0x305F
      lis       r5, 0x31
      addi      r4, r1, 0x20
      li        r7, 0x2
      addi      r6, r6, 0x3030
      addi      r5, r5, 0x3433
      bl        0x27AC0
      mr        r4, r3

    .loc_0x7BC:
      li        r0, 0x5
      mr        r5, r31
      stw       r4, 0x3A4(r31)
      mtctr     r0
      li        r3, 0x1
      li        r4, 0
      li        r0, -0x1

    .loc_0x7D8:
      stw       r3, 0x278(r5)
      stw       r4, 0x2DC(r5)
      stw       r0, 0x340(r5)
      stw       r3, 0x27C(r5)
      stw       r4, 0x2E0(r5)
      stw       r0, 0x344(r5)
      stw       r3, 0x280(r5)
      stw       r4, 0x2E4(r5)
      stw       r0, 0x348(r5)
      stw       r3, 0x284(r5)
      stw       r4, 0x2E8(r5)
      stw       r0, 0x34C(r5)
      stw       r3, 0x288(r5)
      stw       r4, 0x2EC(r5)
      stw       r0, 0x350(r5)
      addi      r5, r5, 0x14
      bdnz+     .loc_0x7D8
      lis       r3, 0x804E
      stw       r4, 0x3B4(r31)
      addi      r28, r3, 0x3934
      mr        r27, r31
      li        r26, 0
      li        r25, 0

    .loc_0x834:
      cmpwi     r25, 0
      li        r24, 0
      ble-      .loc_0x844
      lwz       r24, -0x4(r28)

    .loc_0x844:
      mr        r22, r24
      li        r23, 0
      b         .loc_0x8AC

    .loc_0x850:
      mr        r3, r31
      mr        r4, r22
      lwz       r12, 0x0(r31)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x880
      li        r0, 0
      li        r23, 0
      stw       r0, 0x278(r27)
      b         .loc_0x8B8

    .loc_0x880:
      mr        r3, r31
      mr        r4, r22
      lwz       r12, 0x0(r31)
      li        r5, 0x1
      lwz       r12, 0xE4(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x8A8
      li        r23, 0x1

    .loc_0x8A8:
      addi      r22, r22, 0x1

    .loc_0x8AC:
      lwz       r0, 0x0(r28)
      cmpw      r22, r0
      blt+      .loc_0x850

    .loc_0x8B8:
      rlwinm.   r0,r23,0,24,31
      beq-      .loc_0x918
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      bne-      .loc_0x90C
      lwz       r3, 0x248(r31)
      lwz       r4, 0x1C(r3)
      lwz       r0, 0x0(r4)
      cmpwi     r0, 0
      bge-      .loc_0x918
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lis       r5, 0x4954
      li        r0, 0x44
      addi      r5, r5, 0x454D
      xor       r4, r4, r5
      xor       r0, r3, r0
      or.       r0, r4, r0
      bne-      .loc_0x918

    .loc_0x90C:
      li        r0, 0x1
      stw       r0, 0x2DC(r27)
      stb       r0, 0x244(r31)

    .loc_0x918:
      lbz       r0, 0x241(r31)
      cmplwi    r0, 0
      beq-      .loc_0x9B0
      mr        r22, r24
      b         .loc_0x9A4

    .loc_0x92C:
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0x968
      lbz       r0, 0x240(r31)
      cmplwi    r0, 0
      beq-      .loc_0x968
      lwz       r0, 0x230(r31)
      cmpwi     r0, 0
      beq-      .loc_0x968
      rlwinm    r3,r0,2,0,29
      lwz       r4, 0x22C(r31)
      subi      r0, r3, 0x4
      lwzx      r0, r4, r0
      cmpw      r22, r0
      bgt-      .loc_0x9B0

    .loc_0x968:
      mr        r3, r31
      mr        r4, r22
      lwz       r12, 0x0(r31)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x9A0
      lwz       r3, 0x3B4(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x3B4(r31)
      stw       r26, 0x340(r27)
      subfic    r26, r26, 0x1
      b         .loc_0x9B0

    .loc_0x9A0:
      addi      r22, r22, 0x1

    .loc_0x9A4:
      lwz       r0, 0x0(r28)
      cmpw      r22, r0
      blt+      .loc_0x92C

    .loc_0x9B0:
      addi      r25, r25, 0x1
      addi      r27, r27, 0x4
      cmpwi     r25, 0x19
      addi      r28, r28, 0x4
      blt+      .loc_0x834
      li        r9, 0x78
      li        r8, 0xFF
      sth       r9, 0x1B0(r31)
      li        r7, 0xF0
      li        r6, 0
      li        r5, 0xC8
      sth       r9, 0x1B2(r31)
      li        r3, 0x28
      li        r0, 0xA5
      addi      r4, r30, 0xC60
      sth       r9, 0x1B4(r31)
      sth       r8, 0x1B6(r31)
      sth       r7, 0x1B8(r31)
      sth       r7, 0x1BA(r31)
      sth       r7, 0x1BC(r31)
      sth       r8, 0x1BE(r31)
      lha       r7, 0x1B0(r31)
      sth       r7, 0x1B8(r31)
      lha       r7, 0x1B2(r31)
      sth       r7, 0x1BA(r31)
      lha       r7, 0x1B4(r31)
      sth       r7, 0x1BC(r31)
      lha       r7, 0x1B6(r31)
      sth       r7, 0x1BE(r31)
      sth       r8, 0x1C0(r31)
      sth       r8, 0x1C2(r31)
      sth       r6, 0x1C4(r31)
      sth       r6, 0x1C6(r31)
      sth       r8, 0x1D0(r31)
      sth       r5, 0x1D2(r31)
      sth       r5, 0x1D4(r31)
      sth       r8, 0x1D6(r31)
      sth       r8, 0x1C8(r31)
      sth       r3, 0x1CA(r31)
      sth       r3, 0x1CC(r31)
      sth       r6, 0x1CE(r31)
      sth       r8, 0x1D8(r31)
      sth       r5, 0x1DA(r31)
      sth       r5, 0x1DC(r31)
      sth       r8, 0x1DE(r31)
      sth       r0, 0x258(r31)
      sth       r6, 0x25A(r31)
      sth       r6, 0x25C(r31)
      sth       r8, 0x25E(r31)
      sth       r8, 0x260(r31)
      sth       r3, 0x262(r31)
      sth       r3, 0x264(r31)
      sth       r6, 0x266(r31)
      sth       r8, 0x268(r31)
      sth       r5, 0x26A(r31)
      sth       r5, 0x26C(r31)
      sth       r8, 0x26E(r31)
      lwz       r3, 0x78(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x270(r31)
      lwz       r0, 0x270(r31)
      cmplwi    r0, 0
      bne-      .loc_0xACC
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x110B
      crclr     6, 0x6
      bl        -0x34F2F8

    .loc_0xACC:
      li        r3, 0x18
      bl        -0x355A9C
      mr.       r24, r3
      beq-      .loc_0xAF4
      mr        r4, r29
      li        r5, 0
      bl        0x27A54
      lis       r3, 0x804E
      addi      r0, r3, 0x596C
      stw       r0, 0x0(r24)

    .loc_0xAF4:
      stw       r24, 0xB4(r31)
      addi      r4, r30, 0xC78
      lis       r5, 0x2
      lwz       r3, 0xB4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x248(r31)
      lwz       r28, -0x77D4(r13)
      lwz       r3, 0x8(r3)
      bl        -0x3563EC
      li        r3, 0x18
      bl        -0x355AF4
      mr.       r0, r3
      beq-      .loc_0xB44
      mr        r4, r29
      li        r5, 0x2
      bl        0x279FC
      mr        r0, r3

    .loc_0xB44:
      stw       r0, 0x7C(r31)
      addi      r4, r30, 0xC94
      lis       r5, 0x2
      lwz       r3, 0x7C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x7C(r31)
      addi      r4, r30, 0xCB0
      bl        0x27A84
      lwz       r3, 0x7C(r31)
      addi      r4, r30, 0xCCC
      bl        0x27A78
      lwz       r3, 0x7C(r31)
      lis       r5, 0x656E
      lis       r4, 0x54
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x7531
      addi      r5, r4, 0x6C6D
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xF4(r31)
      lwz       r0, 0xF4(r31)
      cmplwi    r0, 0
      bne-      .loc_0xBC8
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x112C
      crclr     6, 0x6
      bl        -0x34F3F4

    .loc_0xBC8:
      li        r3, 0x48
      bl        -0x355B98
      mr.       r0, r3
      beq-      .loc_0xBE0
      bl        -0x70434
      mr        r0, r3

    .loc_0xBE0:
      stw       r0, 0xD0(r31)
      lis       r4, 0x656E
      lis       r3, 0x54
      lwz       r8, 0x7C(r31)
      addi      r6, r4, 0x7531
      lwz       r7, 0xD0(r31)
      addi      r5, r3, 0x6C6D
      lwz       r3, 0x8(r8)
      bl        0xBB0B4
      lwz       r5, 0x7C(r31)
      lis       r4, 0x6133
      lwz       r3, 0x78(r31)
      addi      r6, r4, 0x646C
      lwz       r4, 0x8(r5)
      li        r5, 0x6F74
      bl        -0x4C83C
      stw       r3, 0xE4(r31)
      lis       r3, 0x6133
      addi      r6, r3, 0x646C
      li        r5, 0x6F74
      lwz       r3, 0x7C(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xF8(r31)
      lwz       r0, 0xF8(r31)
      cmplwi    r0, 0
      bne-      .loc_0xC6C
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x1137
      crclr     6, 0x6
      bl        -0x34F498

    .loc_0xC6C:
      lwz       r0, 0xE4(r31)
      cmplwi    r0, 0
      bne-      .loc_0xC8C
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x1138
      crclr     6, 0x6
      bl        -0x34F4B8

    .loc_0xC8C:
      lwz       r3, 0xE4(r31)
      lfs       f1, 0x7C0(r2)
      lwz       r3, 0x34(r3)
      bl        -0x74460
      lwz       r3, 0xE4(r31)
      lwz       r3, 0x34(r3)
      bl        -0x7425C
      li        r3, 0x8
      bl        -0x355C78
      mr.       r0, r3
      beq-      .loc_0xCC4
      lwz       r4, 0xE4(r31)
      bl        -0x4C7C0
      mr        r0, r3

    .loc_0xCC4:
      stw       r0, 0xEC(r31)
      lwz       r0, 0xEC(r31)
      cmplwi    r0, 0
      bne-      .loc_0xCE8
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x113E
      crclr     6, 0x6
      bl        -0x34F514

    .loc_0xCE8:
      li        r3, 0x18
      bl        -0x355CB8
      mr.       r0, r3
      beq-      .loc_0xD08
      mr        r4, r29
      li        r5, 0
      bl        0x27838
      mr        r0, r3

    .loc_0xD08:
      stw       r0, 0xB8(r31)
      addi      r4, r30, 0xCE8
      lis       r5, 0x2
      lwz       r3, 0xB8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      li        r3, 0x18
      bl        -0x355CF8
      mr.       r0, r3
      beq-      .loc_0xD48
      mr        r4, r29
      li        r5, 0x1
      bl        0x277F8
      mr        r0, r3

    .loc_0xD48:
      stw       r0, 0xBC(r31)
      addi      r4, r30, 0xD00
      lis       r5, 0x2
      lwz       r3, 0xBC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xBC(r31)
      addi      r4, r30, 0xD1C
      bl        0x27880
      lwz       r3, 0xBC(r31)
      lis       r5, 0x656C
      lis       r4, 0x506D
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x5F6C
      addi      r5, r4, 0x6F64
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0xB0(r3)
      li        r3, 0x58
      bl        -0x355D74
      mr.       r0, r3
      beq-      .loc_0xDC4
      mr        r4, r29
      li        r5, 0x2
      bl        0x1C88
      mr        r0, r3

    .loc_0xDC4:
      stw       r0, 0xDC(r31)
      addi      r4, r30, 0x5C4
      lis       r5, 0x2
      lwz       r3, 0xDC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xDC(r31)
      addi      r4, r30, 0x5DC
      bl        0x27804
      lwz       r3, 0xDC(r31)
      addi      r4, r30, 0x5F4
      bl        0x277F8
      lwz       r5, 0xDC(r31)
      lis       r4, 0x6133
      lwz       r3, 0x78(r31)
      addi      r6, r4, 0x6473
      lwz       r4, 0x8(r5)
      li        r5, 0x6F74
      bl        -0x4CA34
      stw       r3, 0xE8(r31)
      lis       r3, 0x6133
      addi      r6, r3, 0x6473
      li        r5, 0x6F74
      lwz       r3, 0xDC(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x100(r31)
      lwz       r0, 0x100(r31)
      cmplwi    r0, 0
      bne-      .loc_0xE64
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x1154
      crclr     6, 0x6
      bl        -0x34F690

    .loc_0xE64:
      lwz       r0, 0xE8(r31)
      cmplwi    r0, 0
      bne-      .loc_0xE84
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x1155
      crclr     6, 0x6
      bl        -0x34F6B0

    .loc_0xE84:
      lwz       r3, 0xE8(r31)
      lfs       f1, 0x7C4(r2)
      lwz       r3, 0x34(r3)
      bl        -0x74658
      lwz       r3, 0xE8(r31)
      lwz       r3, 0x34(r3)
      bl        -0x74454
      lwz       r3, 0xDC(r31)
      lis       r5, 0x5F63
      lis       r4, 0x5062
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x7570
      addi      r5, r4, 0x746E
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x104(r31)
      lwz       r0, 0x104(r31)
      cmplwi    r0, 0
      bne-      .loc_0xEEC
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x115A
      crclr     6, 0x6
      bl        -0x34F718

    .loc_0xEEC:
      li        r3, 0x18
      bl        -0x355EBC
      mr.       r0, r3
      beq-      .loc_0xF0C
      mr        r4, r29
      li        r5, 0
      bl        0x27634
      mr        r0, r3

    .loc_0xF0C:
      stw       r0, 0xC4(r31)
      addi      r4, r30, 0xD38
      lis       r5, 0x2
      lwz       r3, 0xC4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lbz       r0, -0x6708(r13)
      cmplwi    r0, 0
      bne-      .loc_0xF50
      lwz       r3, -0x6B70(r13)
      cmplwi    r3, 0
      beq-      .loc_0xF80
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0xF80

    .loc_0xF50:
      li        r0, 0
      addi      r4, r31, 0x1B8
      stw       r0, 0x274(r31)
      lwz       r3, 0xDC(r31)
      bl        0x25E0
      lwz       r3, 0xDC(r31)
      li        r4, 0x1
      bl        0x2730
      lwz       r3, 0xDC(r31)
      addi      r4, r31, 0x1C8
      addi      r5, r31, 0x1D8
      bl        0x2630

    .loc_0xF80:
      lwz       r3, 0xDC(r31)
      lwz       r4, 0x274(r31)
      lwz       r5, 0x270(r31)
      bl        0x2870
      li        r3, 0x18
      bl        -0x355F60
      mr.       r0, r3
      beq-      .loc_0xFB0
      mr        r4, r29
      li        r5, 0
      bl        0x27590
      mr        r0, r3

    .loc_0xFB0:
      stw       r0, 0xC0(r31)
      addi      r4, r30, 0xD58
      lis       r5, 0x2
      lwz       r3, 0xC0(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      li        r3, 0xB0
      bl        -0x355FA0
      mr.       r24, r3
      beq-      .loc_0x101C
      lis       r4, 0x804D
      lwz       r7, 0x78(r31)
      addi      r4, r4, 0x7E18
      li        r5, 0x4
      li        r6, 0x4
      bl        -0x6E940
      lis       r3, 0x804E
      li        r0, 0
      addi      r3, r3, 0x583C
      lfs       f0, 0x7C0(r2)
      stw       r3, 0x0(r24)
      stb       r0, 0xA8(r24)
      stb       r0, 0xA9(r24)
      stb       r0, 0xAA(r24)
      stfs      f0, 0xAC(r24)

    .loc_0x101C:
      stw       r24, 0x250(r31)
      lis       r4, 0x6569
      addi      r0, r31, 0x188
      lis       r3, 0x5067
      stw       r0, 0x8(r1)
      addi      r5, r3, 0x6973
      li        r0, 0x1
      addi      r6, r4, 0x3135
      stw       r0, 0xC(r1)
      mr        r7, r5
      mr        r9, r5
      addi      r8, r4, 0x3134
      lwz       r3, 0x250(r31)
      addi      r10, r4, 0x3132
      lwz       r4, 0xC0(r31)
      lwz       r12, 0x0(r3)
      lwz       r4, 0x8(r4)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x250(r31)
      li        r4, 0x1
      bl        -0x6E70C
      lwz       r3, 0xC0(r31)
      lis       r5, 0x6569
      lis       r4, 0x5067
      lwz       r7, 0x250(r31)
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x3135
      addi      r5, r4, 0x6973
      bl        0xBAC20
      li        r3, 0xB0
      bl        -0x356068
      mr.       r24, r3
      beq-      .loc_0x10E4
      lis       r4, 0x804D
      lwz       r7, 0x78(r31)
      addi      r4, r4, 0x7E18
      li        r5, 0x4
      li        r6, 0x2
      bl        -0x6EA08
      lis       r3, 0x804E
      li        r0, 0
      addi      r3, r3, 0x583C
      lfs       f0, 0x7C0(r2)
      stw       r3, 0x0(r24)
      stb       r0, 0xA8(r24)
      stb       r0, 0xA9(r24)
      stb       r0, 0xAA(r24)
      stfs      f0, 0xAC(r24)

    .loc_0x10E4:
      stw       r24, 0x254(r31)
      lis       r4, 0x7369
      addi      r0, r31, 0x18C
      lis       r3, 0x5074
      stw       r0, 0x8(r1)
      addi      r5, r3, 0x616F
      addi      r8, r4, 0x3031
      addi      r6, r4, 0x3030
      lwz       r3, 0x78(r31)
      mr        r7, r5
      mr        r10, r8
      mr        r9, r5
      neg       r0, r3
      or        r0, r0, r3
      rlwinm    r0,r0,1,31,31
      stw       r0, 0xC(r1)
      lwz       r3, 0x254(r31)
      lwz       r4, 0xC0(r31)
      lwz       r12, 0x0(r3)
      lwz       r4, 0x8(r4)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x254(r31)
      li        r4, 0x1
      bl        -0x6E7E0
      lwz       r3, 0xC0(r31)
      lis       r5, 0x7369
      lis       r4, 0x5074
      lwz       r7, 0x254(r31)
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x3030
      addi      r5, r4, 0x616F
      bl        0xBAB4C
      lwz       r3, 0xC0(r31)
      lis       r5, 0x696E
      lis       r4, 0x5074
      lwz       r9, 0x78(r31)
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x6F31
      addi      r5, r4, 0x656B
      addi      r7, r31, 0x194
      li        r8, 0x3
      bl        0x27C5C
      stw       r3, 0xE0(r31)
      lbz       r0, 0x240(r31)
      cmplwi    r0, 0
      beq-      .loc_0x11DC
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      bne-      .loc_0x11C0
      lwz       r3, 0xE0(r31)
      bl        -0x6E864
      li        r0, 0
      stb       r0, 0xB0(r3)

    .loc_0x11C0:
      lbz       r0, -0x6705(r13)
      cmplwi    r0, 0
      beq-      .loc_0x11DC
      lwz       r3, 0xE0(r31)
      bl        -0x6E880
      li        r0, 0x1
      stb       r0, 0xB0(r3)

    .loc_0x11DC:
      lwz       r3, 0xC0(r31)
      lis       r5, 0x7369
      lis       r4, 0x5074
      lwz       r3, 0x8(r3)
      addi      r6, r5, 0x3030
      addi      r5, r4, 0x616F
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r4, 0x7369
      stb       r0, 0xB0(r3)
      lis       r3, 0x5074
      addi      r6, r4, 0x3031
      lwz       r4, 0xC0(r31)
      addi      r5, r3, 0x616F
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r4, 0x6569
      stb       r0, 0xB0(r3)
      lis       r3, 0x5067
      addi      r6, r4, 0x3132
      lwz       r4, 0xC0(r31)
      addi      r5, r3, 0x6973
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r4, 0x6569
      stb       r0, 0xB0(r3)
      lis       r3, 0x5067
      addi      r6, r4, 0x3133
      lwz       r4, 0xC0(r31)
      addi      r5, r3, 0x6973
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r4, 0x6569
      stb       r0, 0xB0(r3)
      lis       r3, 0x5067
      addi      r6, r4, 0x3134
      lwz       r4, 0xC0(r31)
      addi      r5, r3, 0x6973
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      lis       r4, 0x6569
      stb       r0, 0xB0(r3)
      lis       r3, 0x5067
      addi      r6, r4, 0x3135
      lwz       r4, 0xC0(r31)
      addi      r5, r3, 0x6973
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      mr        r4, r29
      stb       r0, 0xB0(r3)
      mr        r3, r31
      bl        -0x91A8
      lwz       r3, 0x88(r31)
      lwz       r0, 0x230(r31)
      lwz       r4, 0x0(r3)
      lwz       r3, 0x4(r3)
      lwz       r4, 0x4(r4)
      lwz       r3, 0x4(r3)
      lfs       f0, 0xD8(r4)
      lfs       f1, 0xD8(r3)
      stw       r0, 0x238(r31)
      fsubs     f30, f1, f0
      lbz       r0, 0x240(r31)
      cmplwi    r0, 0
      bne-      .loc_0x1354
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x238(r31)

    .loc_0x1354:
      li        r22, 0
      lfs       f31, 0x7C0(r2)

    .loc_0x135C:
      li        r23, 0
      li        r24, 0
      b         .loc_0x13AC

    .loc_0x1368:
      lwz       r3, 0x88(r31)
      lwzx      r4, r3, r24
      lfs       f0, 0x1C(r4)
      lwz       r3, 0x4(r4)
      fadds     f0, f0, f30
      stfs      f0, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x88(r31)
      addi      r23, r23, 0x1
      lwzx      r4, r3, r24
      addi      r24, r24, 0x4
      lwz       r3, 0x4(r4)
      lfs       f0, 0xD8(r3)
      stfs      f0, 0x1C(r4)

    .loc_0x13AC:
      lha       r0, 0x8E(r31)
      cmpw      r23, r0
      blt+      .loc_0x1368
      mr        r3, r31
      li        r4, 0
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x84(r31)
      li        r0, 0
      mr        r3, r31
      stfs      f31, 0x14(r4)
      stw       r0, 0x20(r4)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x84(r12)
      mtctr     r12
      bctrl
      addi      r22, r22, 0x1
      cmpwi     r22, 0x4
      blt+      .loc_0x135C
      lwz       r3, 0x248(r31)
      li        r24, -0x1
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x144C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lis       r5, 0x4954
      li        r0, 0x44
      addi      r5, r5, 0x454D
      xor       r4, r4, r5
      xor       r0, r3, r0
      or.       r0, r4, r0
      bne-      .loc_0x144C
      lwz       r3, 0x248(r31)
      lwz       r3, 0x1C(r3)
      lwz       r24, 0x0(r3)

    .loc_0x144C:
      cmpwi     r24, 0
      bge-      .loc_0x14E0
      li        r22, 0
      b         .loc_0x14C4

    .loc_0x145C:
      mr        r3, r31
      mr        r4, r22
      lwz       r12, 0x0(r31)
      li        r5, 0
      lwz       r12, 0xE4(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x14C0
      lbz       r0, 0x240(r31)
      mr        r24, r22
      cmplwi    r0, 0
      beq-      .loc_0x14E0
      lwz       r0, 0x22C(r31)
      cmplwi    r0, 0
      bne-      .loc_0x14B0
      addi      r3, r30, 0xC
      addi      r5, r30, 0x18
      li        r4, 0x11B5
      crclr     6, 0x6
      bl        -0x34FCDC

    .loc_0x14B0:
      lwz       r3, 0x22C(r31)
      rlwinm    r0,r22,2,0,29
      lwzx      r24, r3, r0
      b         .loc_0x14E0

    .loc_0x14C0:
      addi      r22, r22, 0x1

    .loc_0x14C4:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      cmpw      r22, r3
      blt+      .loc_0x145C

    .loc_0x14E0:
      cmpwi     r24, 0
      blt-      .loc_0x1620
      lbz       r0, 0x240(r31)
      cmplwi    r0, 0
      beq-      .loc_0x1530
      lwz       r0, 0x230(r31)
      li        r5, 0
      li        r4, 0
      mtctr     r0
      cmpwi     r0, 0
      ble-      .loc_0x1530

    .loc_0x150C:
      lwz       r3, 0x22C(r31)
      lwzx      r0, r3, r4
      cmpw      r24, r0
      bne-      .loc_0x1524
      mr        r24, r5
      b         .loc_0x1530

    .loc_0x1524:
      addi      r4, r4, 0x4
      addi      r5, r5, 0x1
      bdnz+     .loc_0x150C

    .loc_0x1530:
      lis       r3, 0x5555
      cmpwi     r24, 0x2
      addi      r0, r3, 0x5556
      mulhw     r3, r0, r24
      rlwinm    r0,r3,1,31,31
      add       r25, r3, r0
      mulli     r0, r25, 0x3
      sub       r0, r24, r0
      stw       r0, -0x6638(r13)
      ble-      .loc_0x160C
      lfs       f31, 0x7C0(r2)
      li        r22, 0
      b         .loc_0x1600

    .loc_0x1564:
      li        r23, 0
      li        r24, 0
      b         .loc_0x15B4

    .loc_0x1570:
      lwz       r3, 0x88(r31)
      lwzx      r4, r3, r24
      lfs       f0, 0x1C(r4)
      lwz       r3, 0x4(r4)
      fsubs     f0, f0, f30
      stfs      f0, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x88(r31)
      addi      r23, r23, 0x1
      lwzx      r4, r3, r24
      addi      r24, r24, 0x4
      lwz       r3, 0x4(r4)
      lfs       f0, 0xD8(r3)
      stfs      f0, 0x1C(r4)

    .loc_0x15B4:
      lha       r0, 0x8E(r31)
      cmpw      r23, r0
      blt+      .loc_0x1570
      mr        r3, r31
      li        r4, 0x1
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x84(r31)
      li        r0, 0
      mr        r3, r31
      stfs      f31, 0x14(r4)
      stw       r0, 0x20(r4)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x84(r12)
      mtctr     r12
      bctrl
      addi      r22, r22, 0x1

    .loc_0x1600:
      cmpw      r22, r25
      blt+      .loc_0x1564
      b         .loc_0x1620

    .loc_0x160C:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x84(r12)
      mtctr     r12
      bctrl

    .loc_0x1620:
      lwz       r0, 0x94(r31)
      lwz       r3, 0x88(r31)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2811C
      stw       r3, 0x224(r31)
      lwz       r4, 0x224(r31)
      cmpwi     r4, 0
      blt-      .loc_0x1664
      lwz       r12, 0x0(r31)
      mr        r3, r31
      lwz       r22, 0x110(r31)
      lwz       r12, 0xC8(r12)
      mtctr     r12
      bctrl
      stw       r4, 0x1C(r22)
      stw       r3, 0x18(r22)

    .loc_0x1664:
      mr        r3, r28
      bl        -0x356F34
      psq_l     f31,0xC8(r1),0,0
      lfd       f31, 0xC0(r1)
      psq_l     f30,0xB8(r1),0,0
      lfd       f30, 0xB0(r1)
      lmw       r22, 0x88(r1)
      lwz       r0, 0xD4(r1)
      mtlr      r0
      addi      r1, r1, 0xD0
      blr
    */
}

/*
 * --INFO--
 * Address:	8037A500
 * Size:	0007B4
 */
void Morimura::TItemZukan::doDemoDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0xE0(r1)
      mflr      r0
      stw       r0, 0xE4(r1)
      stfd      f31, 0xD0(r1)
      psq_st    f31,0xD8(r1),0,0
      stfd      f30, 0xC0(r1)
      psq_st    f30,0xC8(r1),0,0
      stmw      r23, 0x9C(r1)
      mr        r24, r3
      mr        r25, r4
      lfs       f1, 0x810(r2)
      addi      r3, r25, 0xBC
      lfs       f0, 0x3B8(r24)
      addi      r31, r25, 0x190
      lwz       r12, 0xBC(r4)
      fmuls     f0, f1, f0
      lwz       r12, 0x14(r12)
      fctiwz    f0, f0
      stfd      f0, 0x88(r1)
      lwz       r26, 0x8C(r1)
      mtctr     r12
      bctrl
      lwz       r4, 0x7C(r24)
      lis       r3, 0x6274
      addi      r6, r3, 0x6E33
      li        r5, 0x507A
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r23, r3
      mr        r4, r26
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      mr        r4, r23
      addi      r3, r1, 0x70
      li        r5, 0x1
      bl        -0x341608
      mr        r4, r23
      addi      r3, r1, 0x7C
      li        r5, 0
      bl        -0x341618
      mr        r3, r23
      lfs       f3, 0x28(r23)
      lwz       r12, 0x0(r23)
      li        r4, 0
      lfs       f2, 0x20(r23)
      li        r5, 0
      lfs       f1, 0x2C(r23)
      li        r6, 0
      lfs       f0, 0x24(r23)
      fsubs     f3, f3, f2
      lwz       r12, 0xEC(r12)
      fsubs     f4, f1, f0
      lfs       f1, 0x7C(r1)
      lfs       f2, 0x74(r1)
      mtctr     r12
      bctrl
      mr        r3, r23
      lwz       r12, 0x0(r23)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr        r3, r23
      li        r4, 0xFF
      lwz       r12, 0x0(r23)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x7C(r24)
      lis       r3, 0x6274
      addi      r6, r3, 0x6E32
      li        r5, 0x507A
      lwz       r3, 0x8(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r23, r3
      mr        r4, r26
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      mr        r4, r23
      addi      r3, r1, 0x58
      li        r5, 0x1
      bl        -0x3416D0
      mr        r4, r23
      addi      r3, r1, 0x64
      li        r5, 0
      bl        -0x3416E0
      mr        r3, r23
      lfs       f3, 0x28(r23)
      lwz       r12, 0x0(r23)
      li        r4, 0
      lfs       f2, 0x20(r23)
      li        r5, 0
      lfs       f1, 0x2C(r23)
      li        r6, 0
      lfs       f0, 0x24(r23)
      fsubs     f3, f3, f2
      lwz       r12, 0xEC(r12)
      fsubs     f4, f1, f0
      lfs       f1, 0x64(r1)
      lfs       f2, 0x5C(r1)
      mtctr     r12
      bctrl
      mr        r3, r23
      lwz       r12, 0x0(r23)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr        r3, r23
      li        r4, 0xFF
      lwz       r12, 0x0(r23)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r31)
      mr        r3, r31
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xF4(r24)
      mr        r4, r26
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xD0(r24)
      mr        r4, r25
      mr        r5, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xF4(r24)
      li        r4, 0xFF
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      addi      r3, r25, 0xBC
      lwz       r12, 0xBC(r25)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lfs       f31, 0x1A4(r24)
      lfs       f0, 0x1AC(r24)
      lfs       f30, 0x1A0(r24)
      fsubs     f1, f0, f31
      bl        -0x2B8C20
      lfs       f0, 0x1A8(r24)
      mr        r28, r3
      fsubs     f1, f0, f30
      bl        -0x2B8C30
      fmr       f1, f31
      mr        r27, r3
      bl        -0x2B8C3C
      fmr       f1, f30
      mr        r26, r3
      bl        -0x2B8C48
      mr        r4, r26
      mr        r5, r27
      mr        r6, r28
      bl        -0x290FCC
      li        r28, 0
      li        r29, 0
      b         .loc_0x568

    .loc_0x2B4:
      li        r27, 0
      li        r30, 0

    .loc_0x2BC:
      lwz       r0, 0x88(r24)
      lwz       r3, 0x23C(r24)
      lwzx      r4, r29, r0
      lwz       r4, 0x20(r4)
      lwzx      r4, r4, r30
      lwz       r0, 0x0(r4)
      cmpw      r3, r0
      bne-      .loc_0x550
      lwz       r3, 0x10(r4)
      lbz       r0, 0xB0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x550
      lbz       r3, 0x214(r24)
      lis       r0, 0x4330
      lwz       r23, 0x4(r4)
      stw       r3, 0x8C(r1)
      mr        r3, r23
      lfd       f2, 0x830(r2)
      stw       r0, 0x88(r1)
      lwz       r12, 0x0(r23)
      lfd       f1, 0x88(r1)
      lfs       f0, -0x7A50(r13)
      fsubs     f1, f1, f2
      lwz       r12, 0x24(r12)
      lbz       r26, 0xB2(r23)
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x90(r1)
      lwz       r4, 0x94(r1)
      mtctr     r12
      bctrl
      mr        r4, r23
      addi      r3, r1, 0x40
      li        r5, 0
      bl        -0x3418AC
      lfs       f1, 0x44(r1)
      mr        r4, r23
      lfs       f0, 0x7E8(r2)
      addi      r3, r1, 0x4C
      li        r5, 0
      fadds     f31, f0, f1
      bl        -0x3418C8
      lfs       f1, 0x4C(r1)
      fmr       f2, f31
      lfs       f0, 0x87C(r2)
      mr        r3, r23
      lwz       r12, 0x0(r23)
      li        r4, 0
      fadds     f1, f0, f1
      lfs       f5, 0x28(r23)
      li        r5, 0
      lfs       f3, 0x20(r23)
      li        r6, 0
      lfs       f4, 0x2C(r23)
      lfs       f0, 0x24(r23)
      fsubs     f3, f5, f3
      lwz       r12, 0xEC(r12)
      fsubs     f4, f4, f0
      mtctr     r12
      bctrl
      mr        r3, r23
      lwz       r12, 0x0(r23)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr        r3, r23
      mr        r4, r26
      lwz       r12, 0x0(r23)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x88(r24)
      lbz       r4, 0x214(r24)
      lwzx      r3, r29, r0
      lwz       r3, 0x20(r3)
      lwzx      r3, r3, r30
      lwz       r23, 0x10(r3)
      mr        r3, r23
      lbz       r26, 0xB2(r23)
      lwz       r12, 0x0(r23)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      mr        r4, r23
      addi      r3, r1, 0x28
      li        r5, 0
      bl        -0x34197C
      mr        r4, r23
      addi      r3, r1, 0x34
      li        r5, 0
      bl        -0x34198C
      mr        r3, r23
      lfs       f3, 0x28(r23)
      lwz       r12, 0x0(r23)
      li        r4, 0
      lfs       f2, 0x20(r23)
      li        r5, 0
      lfs       f1, 0x2C(r23)
      li        r6, 0
      lfs       f0, 0x24(r23)
      fsubs     f3, f3, f2
      lwz       r12, 0xEC(r12)
      fsubs     f4, f1, f0
      lfs       f1, 0x34(r1)
      lfs       f2, 0x2C(r1)
      mtctr     r12
      bctrl
      mr        r3, r23
      lwz       r12, 0x0(r23)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr        r3, r23
      mr        r4, r26
      lwz       r12, 0x0(r23)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x88(r24)
      lbz       r4, 0x214(r24)
      lwzx      r3, r29, r0
      lwz       r3, 0x20(r3)
      lwzx      r3, r3, r30
      lwz       r23, 0xC(r3)
      mr        r3, r23
      lbz       r26, 0xB2(r23)
      lwz       r12, 0x0(r23)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      mr        r4, r23
      addi      r3, r1, 0x10
      li        r5, 0
      bl        -0x341A38
      mr        r4, r23
      addi      r3, r1, 0x1C
      li        r5, 0
      bl        -0x341A48
      mr        r3, r23
      lfs       f3, 0x28(r23)
      lwz       r12, 0x0(r23)
      li        r4, 0
      lfs       f2, 0x20(r23)
      li        r5, 0
      lfs       f1, 0x2C(r23)
      li        r6, 0
      lfs       f0, 0x24(r23)
      fsubs     f3, f3, f2
      lwz       r12, 0xEC(r12)
      fsubs     f4, f1, f0
      lfs       f1, 0x1C(r1)
      lfs       f2, 0x14(r1)
      mtctr     r12
      bctrl
      mr        r3, r23
      lwz       r12, 0x0(r23)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr        r3, r23
      mr        r4, r26
      lwz       r12, 0x0(r23)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl

    .loc_0x550:
      addi      r27, r27, 0x1
      addi      r30, r30, 0x4
      cmpwi     r27, 0x3
      blt+      .loc_0x2BC
      addi      r29, r29, 0x4
      addi      r28, r28, 0x1

    .loc_0x568:
      lha       r0, 0x8E(r24)
      cmpw      r28, r0
      blt+      .loc_0x2B4
      addi      r3, r25, 0x190
      lwz       r12, 0x190(r25)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x3AC(r24)
      cmpwi     r0, 0x3
      bne-      .loc_0x774
      lfs       f30, 0x1A4(r24)
      lfs       f0, 0x1AC(r24)
      lfs       f31, 0x1A0(r24)
      fsubs     f1, f0, f30
      bl        -0x2B8F58
      lfs       f0, 0x1A8(r24)
      mr        r28, r3
      fsubs     f1, f0, f31
      bl        -0x2B8F68
      fmr       f1, f30
      mr        r27, r3
      bl        -0x2B8F74
      fmr       f1, f31
      mr        r26, r3
      bl        -0x2B8F80
      mr        r4, r26
      mr        r5, r27
      mr        r6, r28
      bl        -0x291304
      lis       r4, 0x315F
      lwz       r3, 0xF0(r24)
      addi      r0, r4, 0x3030
      lis       r4, 0x39
      stw       r0, 0x1C(r3)
      addi      r0, r4, 0x3030
      stw       r0, 0x18(r3)
      lwz       r4, 0x24C(r24)
      lwz       r3, 0xF0(r24)
      lwz       r0, 0x20(r4)
      lwz       r12, 0x0(r3)
      stw       r0, 0xC(r1)
      lwz       r12, 0x24(r12)
      lbz       r4, 0xF(r1)
      mtctr     r12
      bctrl
      li        r0, 0
      addi      r4, r1, 0x8
      stb       r0, 0xF(r1)
      lwz       r0, 0xC(r1)
      stw       r0, 0x8(r1)
      lwz       r3, 0xF0(r24)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xC8(r24)
      mr        r4, r25
      mr        r5, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x9C(r12)
      mtctr     r12
      bctrl
      li        r27, 0
      li        r30, 0
      subi      r28, r13, 0x6700
      b         .loc_0x738

    .loc_0x674:
      lwz       r3, 0x88(r24)
      lwzx      r3, r3, r30
      lwz       r3, 0x4(r3)
      lbz       r0, 0xB0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x730
      li        r26, 0
      li        r29, 0

    .loc_0x694:
      lwz       r0, 0x88(r24)
      lwz       r4, 0x23C(r24)
      lwzx      r3, r30, r0
      lwz       r3, 0x20(r3)
      lwzx      r3, r3, r29
      lwz       r0, 0x0(r3)
      cmpw      r4, r0
      bne-      .loc_0x720
      bne-      .loc_0x720
      lwz       r0, 0x18(r3)
      cmplwi    r0, 0
      beq-      .loc_0x720
      lwz       r3, 0x10(r3)
      mr        r4, r25
      lfs       f1, -0x6700(r13)
      mr        r5, r31
      lfs       f0, 0x8C(r3)
      lwz       r3, 0xF0(r24)
      fadds     f0, f1, f0
      stfs      f0, 0x8C(r3)
      lwz       r0, 0x88(r24)
      lfs       f1, 0x4(r28)
      lwzx      r6, r30, r0
      lwz       r3, 0xF0(r24)
      lwz       r6, 0x20(r6)
      lwzx      r6, r6, r29
      lwz       r6, 0x10(r6)
      lfs       f0, 0x9C(r6)
      fadds     f0, f1, f0
      stfs      f0, 0x9C(r3)
      lwz       r3, 0xCC(r24)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x720:
      addi      r26, r26, 0x1
      addi      r29, r29, 0x4
      cmpwi     r26, 0x3
      blt+      .loc_0x694

    .loc_0x730:
      addi      r30, r30, 0x4
      addi      r27, r27, 0x1

    .loc_0x738:
      lha       r0, 0x8E(r24)
      cmpw      r27, r0
      blt+      .loc_0x674
      lis       r3, 0x305F
      lwz       r5, 0xF0(r24)
      addi      r0, r3, 0x3030
      lis       r3, 0x39
      stw       r0, 0x1C(r5)
      addi      r0, r3, 0x3030
      li        r3, 0
      li        r4, 0
      stw       r0, 0x18(r5)
      li        r5, 0x280
      li        r6, 0x1E0
      bl        -0x291498

    .loc_0x774:
      lwz       r3, 0xDC(r24)
      mr        r4, r25
      mr        r5, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      psq_l     f31,0xD8(r1),0,0
      lfd       f31, 0xD0(r1)
      psq_l     f30,0xC8(r1),0,0
      lfd       f30, 0xC0(r1)
      lmw       r23, 0x9C(r1)
      lwz       r0, 0xE4(r1)
      mtlr      r0
      addi      r1, r1, 0xE0
      blr
    */
}

/*
 * --INFO--
 * Address:	8037ACB4
 * Size:	000170
 */
void Morimura::TItemZukan::setDetail(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r3
      lis       r3, 0x8049
      lwz       r0, 0x94(r29)
      addi      r31, r3, 0x2520
      lwz       r3, 0x88(r29)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x278D4
      mr.       r30, r3
      bge-      .loc_0x64
      li        r0, 0
      li        r4, 0x1
      stb       r0, 0x17C(r29)
      lwz       r3, 0x250(r29)
      bl        -0x6F51C
      lwz       r3, 0x254(r29)
      li        r4, 0x1
      bl        -0x6F528
      b         .loc_0x154

    .loc_0x64:
      mr        r3, r29
      mr        r4, r30
      bl        0x328
      stw       r3, 0x188(r29)
      lwz       r7, 0x188(r29)
      cmplwi    r7, 0x2710
      blt-      .loc_0x98
      mr        r6, r30
      addi      r3, r31, 0xC
      addi      r5, r31, 0x62C
      li        r4, 0x1276
      crclr     6, 0x6
      bl        -0x350708

    .loc_0x98:
      mr        r3, r29
      mr        r4, r30
      bl        0x3B4
      stw       r3, 0x18C(r29)
      lwz       r7, 0x18C(r29)
      cmplwi    r7, 0x2710
      blt-      .loc_0xCC
      mr        r6, r30
      addi      r3, r31, 0xC
      addi      r5, r31, 0xD78
      li        r4, 0x1278
      crclr     6, 0x6
      bl        -0x35073C

    .loc_0xCC:
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x110
      li        r0, 0x1
      li        r4, 0
      stb       r0, 0x17C(r29)
      lwz       r3, 0x250(r29)
      bl        -0x6F5C8
      lwz       r3, 0x254(r29)
      li        r4, 0
      bl        -0x6F5D4
      b         .loc_0x130

    .loc_0x110:
      li        r0, 0
      li        r4, 0x1
      stb       r0, 0x17C(r29)
      lwz       r3, 0x250(r29)
      bl        -0x6F5EC
      lwz       r3, 0x254(r29)
      li        r4, 0x1
      bl        -0x6F5F8

    .loc_0x130:
      lwz       r3, 0xE0(r29)
      li        r4, 0
      bl        0x26DD0
      lwz       r3, 0x250(r29)
      li        r4, 0
      bl        0x26DC4
      lwz       r3, 0x254(r29)
      li        r4, 0
      bl        0x26DB8

    .loc_0x154:
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
 * Address:	8037AE24
 * Size:	000090
 */
void Morimura::TItemZukan::isComplete(void)
{
    /*
    .loc_0x0:
      lbz       r0, 0x241(r3)
      cmplwi    r0, 0
      beq-      .loc_0x88
      lwz       r0, 0x94(r3)
      lwz       r5, 0x88(r3)
      rlwinm    r4,r0,2,0,29
      lwz       r0, -0x6638(r13)
      lwzx      r4, r5, r4
      rlwinm    r0,r0,2,0,29
      lwz       r4, 0x20(r4)
      lwzx      r4, r4, r0
      lwz       r0, 0x0(r4)
      cmpwi     r0, 0
      bge-      .loc_0x40
      li        r3, 0
      blr

    .loc_0x40:
      rlwinm    r0,r0,2,0,29
      add       r4, r3, r0
      lwz       r0, 0x278(r4)
      cmpwi     r0, 0
      beq-      .loc_0x80
      lbz       r0, 0x244(r3)
      cmplwi    r0, 0
      beq-      .loc_0x78
      lwz       r3, 0xDC(r3)
      lwz       r0, 0x20(r3)
      cmpwi     r0, 0x2
      bne-      .loc_0x80
      li        r3, 0x1
      blr

    .loc_0x78:
      li        r3, 0x1
      blr

    .loc_0x80:
      li        r3, 0
      blr

    .loc_0x88:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	8037AEB4
 * Size:	000080
 */
void Morimura::TItemZukan::isListShow((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0
      stw       r0, 0x14(r1)
      bge-      .loc_0x1C
      li        r3, 0
      b         .loc_0x70

    .loc_0x1C:
      lbz       r0, -0x6708(r13)
      cmplwi    r0, 0
      beq-      .loc_0x30
      li        r3, 0x1
      b         .loc_0x70

    .loc_0x30:
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0x48
      lwz       r3, 0x180(r3)
      lbzx      r3, r3, r4
      b         .loc_0x70

    .loc_0x48:
      lwz       r3, -0x6B70(r13)
      cmplwi    r3, 0
      beq-      .loc_0x6C
      bl        -0x19326C
      rlwinm    r3,r3,0,24,31
      neg       r0, r3
      or        r0, r0, r3
      rlwinm    r3,r0,1,31,31
      b         .loc_0x70

    .loc_0x6C:
      li        r3, 0x1

    .loc_0x70:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8037AF34
 * Size:	00006C
 */
void Morimura::TItemZukan::setXWindow(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, 0x7C0(r2)
      li        r4, 0x1836
      stw       r0, 0x14(r1)
      li        r5, 0
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0xDC(r3)
      stfs      f0, 0x1C(r3)
      lwz       r3, -0x67A8(r13)
      bl        -0x42930
      lwz       r3, 0xDC(r31)
      addi      r4, r31, 0x258
      bl        0x1444
      lwz       r3, 0xDC(r31)
      lwz       r4, 0x274(r31)
      bl        0x1594
      lwz       r3, 0xDC(r31)
      addi      r4, r31, 0x260
      addi      r5, r31, 0x268
      bl        0x1494
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8037AFA0
 * Size:	0000A8
 */
void Morimura::TItemZukan::setYWindow(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r3
      lbz       r0, 0x244(r3)
      cmplwi    r0, 0
      beq-      .loc_0x38
      lfs       f0, -0x7A58(r13)
      lwz       r3, 0xDC(r29)
      stfs      f0, 0x1C(r3)
      b         .loc_0x44

    .loc_0x38:
      lfs       f0, 0x7C0(r2)
      lwz       r3, 0xDC(r29)
      stfs      f0, 0x1C(r3)

    .loc_0x44:
      lwz       r3, -0x67A8(r13)
      li        r4, 0x1838
      li        r5, 0
      bl        -0x429C0
      lwz       r0, 0x274(r29)
      lwz       r3, 0xDC(r29)
      subfic    r30, r0, 0x1
      rlwinm    r0,r30,3,0,28
      add       r31, r29, r0
      addi      r4, r31, 0x1B0
      bl        0x13A4
      lwz       r3, 0xDC(r29)
      mr        r4, r30
      bl        0x14F4
      lwz       r3, 0xDC(r29)
      addi      r4, r31, 0x1C0
      addi      r5, r31, 0x1D0
      bl        0x13F4
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
 * Address:	8037B048
 * Size:	0000C0
 */
void Morimura::TItemZukan::getPrice((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r4
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      bne-      .loc_0x70
      lwz       r0, -0x6B70(r13)
      cmplwi    r0, 0
      beq-      .loc_0x70
      mr        r3, r30
      bl        -0x152F1C
      mr.       r31, r3
      beq-      .loc_0x68
      lbz       r0, -0x6708(r13)
      cmplwi    r0, 0
      bne-      .loc_0x60
      lwz       r3, -0x6B70(r13)
      mr        r4, r30
      bl        -0x193400
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x68

    .loc_0x60:
      lwz       r3, 0x170(r31)
      b         .loc_0xA8

    .loc_0x68:
      li        r3, 0
      b         .loc_0xA8

    .loc_0x70:
      bl        -0x2B1B18
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, 0x820(r2)
      stw       r0, 0x8(r1)
      lfs       f2, 0x854(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, 0x868(r2)
      fsubs     f3, f0, f3
      lfs       f0, 0x7C4(r2)
      fdivs     f2, f3, f2
      fmadds    f1, f1, f2, f0
      bl        -0x2B95A0

    .loc_0xA8:
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
 * Address:	8037B108
 * Size:	0000C8
 */
void Morimura::TItemZukan::getWeight((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r4
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      bne-      .loc_0x7C
      lwz       r0, -0x6B70(r13)
      cmplwi    r0, 0
      beq-      .loc_0x7C
      mr        r3, r30
      bl        -0x152FDC
      mr.       r31, r3
      beq-      .loc_0x74
      lbz       r0, -0x6708(r13)
      cmplwi    r0, 0
      bne-      .loc_0x60
      lwz       r3, -0x6B70(r13)
      mr        r4, r30
      bl        -0x1934C0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x74

    .loc_0x60:
      lwz       r3, 0x120(r31)
      cmplwi    r3, 0x80
      bne-      .loc_0xB0
      li        r3, 0x3E8
      b         .loc_0xB0

    .loc_0x74:
      li        r3, 0
      b         .loc_0xB0

    .loc_0x7C:
      bl        -0x2B1BE4
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, 0x820(r2)
      stw       r0, 0x8(r1)
      lfs       f1, 0x854(r2)
      lfd       f2, 0x8(r1)
      lfs       f0, 0x868(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f1, f0, f1
      bl        -0x2B9668

    .loc_0xB0:
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
 * Address:	8037B1D0
 * Size:	000098
 */
void Morimura::TItemZukan::isNewSupply((int, bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lbz       r0, -0x6707(r13)
      cmplwi    r0, 0
      beq-      .loc_0x20
      li        r3, 0x1
      b         .loc_0x88

    .loc_0x20:
      lwz       r6, -0x6B70(r13)
      cmplwi    r6, 0
      beq-      .loc_0x84
      cmpwi     r4, 0
      blt-      .loc_0x84
      rlwinm.   r0,r5,0,24,31
      bne-      .loc_0x68
      lbz       r0, 0x240(r3)
      cmplwi    r0, 0
      beq-      .loc_0x68
      lwz       r0, 0x230(r3)
      cmpwi     r0, 0
      bne-      .loc_0x5C
      li        r3, 0
      b         .loc_0x88

    .loc_0x5C:
      lwz       r3, 0x22C(r3)
      rlwinm    r0,r4,2,0,29
      lwzx      r4, r3, r0

    .loc_0x68:
      mr        r3, r6
      bl        -0x193478
      rlwinm    r3,r3,0,24,31
      neg       r0, r3
      or        r0, r0, r3
      rlwinm    r3,r0,1,31,31
      b         .loc_0x88

    .loc_0x84:
      li        r3, 0

    .loc_0x88:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8037B268
 * Size:	0000C4
 */
void Morimura::TItemZukan::isPanelExist(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r0, 0x94(r3)
      lwz       r3, 0x88(r3)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      bl        0x2732C
      mr.       r31, r3
      bge-      .loc_0x3C
      li        r3, 0
      b         .loc_0xAC

    .loc_0x3C:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0x240(r30)
      cmplwi    r0, 0
      beq-      .loc_0x80
      lwz       r0, 0x230(r30)
      cmpwi     r0, 0x1
      bge-      .loc_0x70
      li        r3, 0
      b         .loc_0xAC

    .loc_0x70:
      lwz       r3, 0x22C(r30)
      rlwinm    r0,r0,2,0,29
      add       r3, r3, r0
      lwz       r3, -0x4(r3)

    .loc_0x80:
      cmpw      r31, r3
      bne-      .loc_0x90
      li        r3, 0
      b         .loc_0xAC

    .loc_0x90:
      lwz       r0, -0x6638(r13)
      srawi     r5, r3, 0x1F
      add       r0, r31, r0
      rlwinm    r4,r0,1,31,31
      subc      r0, r3, r0
      adde      r0, r5, r4
      rlwinm    r3,r0,0,24,31

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
 * Address:	8037B32C
 * Size:	000034
 */
void Morimura::TItemZukan::isOpenConfirmWindow(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x224(r3)
      lwz       r0, 0x14(r1)
      lbz       r3, 0xD4(r3)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8037B360
 * Size:	00004C
 */
void Morimura::TItemZukan::openConfirmWindow(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stb       r0, 0x214(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x224(r3)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
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
 * Address:	8037B3AC
 * Size:	000054
 */
void Morimura::TDItemScene::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0xD63D0
      lis       r4, 0x804E
      lis       r3, 0x804E
      addi      r0, r4, 0x3F18
      li        r4, 0
      stw       r0, 0x0(r31)
      addi      r0, r3, 0x3D74
      mr        r3, r31
      stw       r4, 0x220(r31)
      stw       r0, 0x0(r31)
      stw       r4, 0x224(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8037B400
 * Size:	0001C8
 */
void Morimura::TDItemScene::doCreateObj((JKRArchive*))
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
      li        r3, 0x3BC
      bl        -0x357580
      mr.       r31, r3
      beq-      .loc_0x14C
      lis       r4, 0x8049
      addi      r4, r4, 0x311C
      bl        -0xA830
      lis       r4, 0x804E
      li        r3, 0
      addi      r4, r4, 0x3DDC
      li        r0, 0x1
      stw       r4, 0x0(r31)
      addi      r4, r4, 0x10
      lfs       f0, 0x7C0(r2)
      stw       r4, 0x18(r31)
      stw       r3, 0x24C(r31)
      stw       r3, 0x250(r31)
      stw       r3, 0x254(r31)
      stw       r3, 0x270(r31)
      stw       r0, 0x274(r31)
      stw       r3, 0x3A4(r31)
      stw       r3, 0x3A8(r31)
      stw       r3, 0x3AC(r31)
      stw       r3, 0x3B0(r31)
      stfs      f0, 0x3B8(r31)
      stw       r3, 0x2DC(r31)
      stw       r3, 0x278(r31)
      stw       r3, 0x2E0(r31)
      stw       r3, 0x27C(r31)
      stw       r3, 0x2E4(r31)
      stw       r3, 0x280(r31)
      stw       r3, 0x2E8(r31)
      stw       r3, 0x284(r31)
      stw       r3, 0x2EC(r31)
      stw       r3, 0x288(r31)
      stw       r3, 0x2F0(r31)
      stw       r3, 0x28C(r31)
      stw       r3, 0x2F4(r31)
      stw       r3, 0x290(r31)
      stw       r3, 0x2F8(r31)
      stw       r3, 0x294(r31)
      stw       r3, 0x2FC(r31)
      stw       r3, 0x298(r31)
      stw       r3, 0x300(r31)
      stw       r3, 0x29C(r31)
      stw       r3, 0x304(r31)
      stw       r3, 0x2A0(r31)
      stw       r3, 0x308(r31)
      stw       r3, 0x2A4(r31)
      stw       r3, 0x30C(r31)
      stw       r3, 0x2A8(r31)
      stw       r3, 0x310(r31)
      stw       r3, 0x2AC(r31)
      stw       r3, 0x314(r31)
      stw       r3, 0x2B0(r31)
      stw       r3, 0x318(r31)
      stw       r3, 0x2B4(r31)
      stw       r3, 0x31C(r31)
      stw       r3, 0x2B8(r31)
      stw       r3, 0x320(r31)
      stw       r3, 0x2BC(r31)
      stw       r3, 0x324(r31)
      stw       r3, 0x2C0(r31)
      stw       r3, 0x328(r31)
      stw       r3, 0x2C4(r31)
      stw       r3, 0x32C(r31)
      stw       r3, 0x2C8(r31)
      stw       r3, 0x330(r31)
      stw       r3, 0x2CC(r31)
      stw       r3, 0x334(r31)
      stw       r3, 0x2D0(r31)
      stw       r3, 0x338(r31)
      stw       r3, 0x2D4(r31)
      stw       r3, 0x33C(r31)
      stw       r3, 0x2D8(r31)

    .loc_0x14C:
      mr        r3, r29
      mr        r4, r31
      mr        r5, r30
      bl        0xD681C
      stw       r31, 0x220(r29)
      li        r3, 0xD8
      bl        -0x3576C0
      mr.       r0, r3
      beq-      .loc_0x180
      lis       r4, 0x8049
      addi      r4, r4, 0x3110
      bl        0x280CC
      mr        r0, r3

    .loc_0x180:
      stw       r0, 0x224(r29)
      mr        r3, r29
      mr        r5, r30
      lwz       r4, 0x224(r29)
      bl        0xD67E4
      lis       r5, 0x385F
      lis       r4, 0x36
      lwz       r3, 0x224(r29)
      addi      r6, r5, 0x3030
      addi      r5, r4, 0x3031
      bl        0x28240
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
 * Address:	8037B5C8
 * Size:	000034
 */
void Morimura::TDItemScene::doStart((Screen::StartSceneArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x220(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      li        r3, 0x1
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8037B5FC
 * Size:	000028
 */
void Morimura::TDItemScene::isAppearConfirmWindow(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x224(r3)
      cmplwi    r3, 0
      beq-      .loc_0x20
      lbz       r0, 0xD4(r3)
      cmplwi    r0, 0
      beq-      .loc_0x20
      li        r3, 0x1
      blr

    .loc_0x20:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	8037B624
 * Size:	000080
 */
void Morimura::TCallbackScrollMsg::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x72024
      lis       r3, 0x804E
      lfs       f2, 0x7C0(r2)
      addi      r0, r3, 0x3D58
      lfs       f1, 0x880(r2)
      stw       r0, 0x0(r31)
      li        r3, 0x74
      lfs       f0, 0x884(r2)
      stfs      f2, 0x48(r31)
      stfs      f1, -0x7A6C(r13)
      stfs      f0, -0x7A68(r13)
      bl        -0x3577C0
      mr.       r0, r3
      beq-      .loc_0x54
      bl        0xD99D4
      mr        r0, r3

    .loc_0x54:
      stw       r0, 0x50(r31)
      lwz       r3, 0x50(r31)
      bl        0xBD554
      mr        r3, r31
      bl        0xC4
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
 * Address:	8037B6A4
 * Size:	000070
 */
void Morimura::TCallbackScrollMsg::doInit(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x18(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,16,31
      cmplwi    r0, 0x13
      beq-      .loc_0x50
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x252C
      li        r4, 0x13A1
      addi      r5, r5, 0x2538
      crclr     6, 0x6
      bl        -0x3510B0

    .loc_0x50:
      lwz       r3, 0x50(r31)
      lwz       r4, 0x18(r31)
      bl        0xD9C0C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8037B714
 * Size:	000038
 */
void Morimura::TCallbackScrollMsg::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0
      li        r5, 0
      stw       r0, 0x14(r1)
      lwz       r3, 0x50(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
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
 * Address:	8037B74C
 * Size:	0000C8
 */
void Morimura::TCallbackScrollMsg::reset(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, 0x83C(r2)
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      stfs      f0, 0x48(r3)
      lwz       r3, 0x50(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x18(r30)
      cmplwi    r4, 0
      beq-      .loc_0xB0
      lwz       r3, 0x18(r4)
      addi      r5, r30, 0x28
      lwz       r4, 0x1C(r4)
      addi      r6, r30, 0x2C
      bl        0xC1B90
      lwz       r3, 0x50(r30)
      lwz       r4, 0x28(r30)
      lwz       r12, 0x0(r3)
      lwz       r5, 0x2C(r30)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x50(r30)
      lwz       r4, 0x18(r30)
      lwz       r31, 0x40(r3)
      mr        r3, r31
      bl        0xC16A0
      lfs       f0, -0x7A6C(r13)
      stfs      f0, 0xC0(r31)
      stfs      f0, 0xC8(r31)
      lfs       f0, -0x7A68(r13)
      stfs      f0, 0x140(r31)
      lfs       f0, -0x7A64(r13)
      lwz       r3, 0x50(r30)
      stfs      f0, 0x6C(r3)
      lfs       f0, -0x7A60(r13)
      lwz       r3, 0x50(r30)
      stfs      f0, 0x70(r3)

    .loc_0xB0:
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
 * Address:	8037B814
 * Size:	000034
 */
void Morimura::TCallbackScrollMsg::scroll((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, 0x7E4(r2)
      stw       r0, 0x14(r1)
      lfs       f2, 0x48(r3)
      fadds     f0, f2, f0
      stfs      f0, 0x48(r3)
      lwz       r3, 0x50(r3)
      bl        0xD9910
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8037B848
 * Size:	000048
 */
void Morimura::TCallbackScrollMsg::draw((Graphics&, J2DGrafContext&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r4, 0x18(r3)
      lbz       r0, 0xB0(r4)
      cmplwi    r0, 0
      beq-      .loc_0x38
      lwz       r3, 0x50(r3)
      addi      r5, r5, 0x80
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x38:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8037B890
 * Size:	000024
 */
void Morimura::TCallbackScrollMsg::getPosRate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x50(r3)
      bl        0xD987C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8037B8B4
 * Size:	000080
 */
void Morimura::TZukanWindow::__ct((JKRArchive*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x25AE0
      lis       r3, 0x804E
      li        r0, 0
      addi      r3, r3, 0x3D44
      lfs       f0, 0x7C0(r2)
      stw       r3, 0x0(r31)
      mr        r3, r31
      stb       r0, 0x18(r31)
      stfs      f0, 0x1C(r31)
      stw       r0, 0x20(r31)
      stw       r0, 0x24(r31)
      stw       r0, 0x28(r31)
      stw       r0, 0x2C(r31)
      stw       r0, 0x34(r31)
      stw       r0, 0x38(r31)
      stw       r0, 0x3C(r31)
      stw       r0, 0x40(r31)
      stw       r0, 0x44(r31)
      stfs      f0, 0x50(r31)
      stfs      f0, 0x54(r31)
      stw       r0, 0x48(r31)
      stw       r0, 0x4C(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8037B934
 * Size:	000538
 */
void Morimura::TZukanWindow::create((char const*, unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lis       r6, 0x8049
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      addi      r31, r6, 0x2520
      stw       r30, 0x38(r1)
      mr        r30, r3
      li        r3, 0x148
      stw       r29, 0x34(r1)
      mr        r29, r5
      stw       r28, 0x30(r1)
      mr        r28, r4
      bl        -0x357AC4
      mr.       r0, r3
      beq-      .loc_0x48
      bl        0xB9438
      mr        r0, r3

    .loc_0x48:
      stw       r0, 0x8(r30)
      mr        r4, r28
      mr        r5, r29
      lwz       r3, 0x8(r30)
      lwz       r6, 0xC(r30)
      bl        -0x33C36C
      li        r3, 0x2C
      bl        -0x357AF4
      mr.       r29, r3
      beq-      .loc_0xB4
      bl        0x959EC
      lis       r3, 0x804D
      lis       r4, 0x804D
      addi      r0, r3, 0x7B0C
      lis       r3, 0x804E
      stw       r0, 0x0(r29)
      li        r5, 0
      addi      r4, r4, 0x7F2C
      addi      r0, r3, 0x58A4
      stw       r5, 0x18(r29)
      lfs       f0, 0x7C0(r2)
      stw       r4, 0x0(r29)
      stw       r0, 0x0(r29)
      stfs      f0, 0x1C(r29)
      stfs      f0, 0x20(r29)
      stfs      f0, 0x24(r29)
      stfs      f0, 0x28(r29)

    .loc_0xB4:
      lfs       f1, 0x7C0(r2)
      lis       r4, 0x6465
      stw       r29, 0x34(r30)
      lis       r3, 0x6D
      lfs       f0, 0x888(r2)
      addi      r6, r4, 0x6D6F
      stfs      f1, 0x18(r1)
      addi      r5, r3, 0x675F
      lwz       r4, 0x34(r30)
      stfs      f1, 0x1C(r1)
      lwz       r0, 0x18(r1)
      stfs      f0, 0x20(r1)
      lfs       f0, 0x88C(r2)
      stw       r0, 0x1C(r4)
      lwz       r0, 0x1C(r1)
      stfs      f0, 0x24(r1)
      lwz       r3, 0x20(r1)
      stw       r0, 0x20(r4)
      lwz       r0, 0x24(r1)
      stw       r3, 0x24(r4)
      stw       r0, 0x28(r4)
      lwz       r3, 0x8(r30)
      lwz       r7, 0x34(r30)
      bl        0xB90E0
      lwz       r3, 0x8(r30)
      lis       r5, 0x6E63
      lis       r4, 0x57
      lwz       r12, 0x0(r3)
      addi      r6, r5, 0x6170
      addi      r5, r4, 0x7769
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x38(r30)
      lwz       r0, 0x38(r30)
      cmplwi    r0, 0
      bne-      .loc_0x15C
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x1439
      crclr     6, 0x6
      bl        -0x35144C

    .loc_0x15C:
      li        r3, 0x58
      bl        -0x357BF0
      mr.       r0, r3
      beq-      .loc_0x258
      mr        r28, r0
      bl        -0x72490
      lis       r3, 0x804E
      lfs       f2, 0x7C0(r2)
      addi      r0, r3, 0x3D58
      lfs       f1, 0x880(r2)
      stw       r0, 0x0(r28)
      li        r3, 0x74
      lfs       f0, 0x884(r2)
      stfs      f2, 0x48(r28)
      stfs      f1, -0x7A6C(r13)
      stfs      f0, -0x7A68(r13)
      bl        -0x357C2C
      mr.       r0, r3
      beq-      .loc_0x1B0
      bl        0xD9568
      mr        r0, r3

    .loc_0x1B0:
      stw       r0, 0x50(r28)
      lwz       r3, 0x50(r28)
      bl        0xBD0E8
      lfs       f0, 0x83C(r2)
      stfs      f0, 0x48(r28)
      lwz       r3, 0x50(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x18(r28)
      cmplwi    r4, 0
      beq-      .loc_0x254
      lwz       r3, 0x18(r4)
      addi      r5, r28, 0x28
      lwz       r4, 0x1C(r4)
      addi      r6, r28, 0x2C
      bl        0xC1804
      lwz       r3, 0x50(r28)
      lwz       r4, 0x28(r28)
      lwz       r12, 0x0(r3)
      lwz       r5, 0x2C(r28)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x50(r28)
      lwz       r4, 0x18(r28)
      lwz       r29, 0x40(r3)
      mr        r3, r29
      bl        0xC1314
      lfs       f0, -0x7A6C(r13)
      stfs      f0, 0xC0(r29)
      stfs      f0, 0xC8(r29)
      lfs       f0, -0x7A68(r13)
      stfs      f0, 0x140(r29)
      lfs       f0, -0x7A64(r13)
      lwz       r3, 0x50(r28)
      stfs      f0, 0x6C(r3)
      lfs       f0, -0x7A60(r13)
      lwz       r3, 0x50(r28)
      stfs      f0, 0x70(r3)

    .loc_0x254:
      mr        r0, r28

    .loc_0x258:
      stw       r0, 0x2C(r30)
      lis       r5, 0x6465
      lis       r4, 0x6D
      lwz       r3, 0x8(r30)
      addi      r6, r5, 0x6D6F
      lwz       r7, 0x2C(r30)
      addi      r5, r4, 0x675F
      bl        0xB8F7C
      li        r3, 0x2C
      bl        -0x357D0C
      mr.       r29, r3
      beq-      .loc_0x2CC
      bl        0x957D4
      lis       r3, 0x804D
      lis       r4, 0x804D
      addi      r0, r3, 0x7B0C
      lis       r3, 0x804E
      stw       r0, 0x0(r29)
      li        r5, 0
      addi      r4, r4, 0x7F2C
      addi      r0, r3, 0x58A4
      stw       r5, 0x18(r29)
      lfs       f0, 0x7C0(r2)
      stw       r4, 0x0(r29)
      stw       r0, 0x0(r29)
      stfs      f0, 0x1C(r29)
      stfs      f0, 0x20(r29)
      stfs      f0, 0x24(r29)
      stfs      f0, 0x28(r29)

    .loc_0x2CC:
      lfs       f2, 0x7C0(r2)
      lis       r4, 0x6465
      lfs       f1, 0x888(r2)
      lis       r3, 0x6D
      stfs      f2, 0x8(r1)
      mr        r7, r29
      lfs       f0, 0x88C(r2)
      addi      r6, r4, 0x6D6F
      stfs      f2, 0xC(r1)
      addi      r5, r3, 0x675F
      lwz       r3, 0x8(r1)
      stfs      f1, 0x10(r1)
      lwz       r0, 0xC(r1)
      stw       r3, 0x1C(r29)
      lwz       r3, 0x10(r1)
      stfs      f0, 0x14(r1)
      stw       r0, 0x20(r29)
      lwz       r0, 0x14(r1)
      stw       r3, 0x24(r29)
      stw       r0, 0x28(r29)
      lwz       r3, 0x8(r30)
      bl        0xB8ED0
      lwz       r0, 0x10(r30)
      rlwinm    r3,r0,2,0,29
      bl        -0x357CB4
      stw       r3, 0x4(r30)
      lwz       r3, 0x8(r30)
      bl        -0x78958
      lwz       r3, 0x8(r30)
      lis       r4, 0x6963
      addi      r6, r4, 0x6F6E
      li        r5, 0x4E
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x3C(r30)
      lwz       r0, 0x3C(r30)
      cmplwi    r0, 0
      bne-      .loc_0x380
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x1449
      crclr     6, 0x6
      bl        -0x351670

    .loc_0x380:
      lwz       r3, 0x8(r30)
      lis       r5, 0x6E6D
      lis       r4, 0x50
      lwz       r12, 0x0(r3)
      addi      r6, r5, 0x6170
      addi      r5, r4, 0x7769
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x40(r30)
      lwz       r0, 0x40(r30)
      cmplwi    r0, 0
      bne-      .loc_0x3C8
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x144D
      crclr     6, 0x6
      bl        -0x3516B8

    .loc_0x3C8:
      lwz       r3, 0x8(r30)
      lis       r5, 0x6F6E
      lis       r4, 0x505F
      lwz       r12, 0x0(r3)
      addi      r6, r5, 0x5F6C
      addi      r5, r4, 0x6963
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x44(r30)
      lwz       r0, 0x44(r30)
      cmplwi    r0, 0
      bne-      .loc_0x410
      addi      r3, r31, 0xC
      addi      r5, r31, 0x18
      li        r4, 0x1451
      crclr     6, 0x6
      bl        -0x351700

    .loc_0x410:
      lwz       r3, 0x44(r30)
      li        r4, 0
      li        r5, 0
      bl        -0x342FA4
      li        r3, 0x44
      bl        -0x357EB4
      mr.       r0, r3
      beq-      .loc_0x438
      bl        -0x76BEC
      mr        r0, r3

    .loc_0x438:
      stw       r0, 0x28(r30)
      lis       r4, 0x6F6E
      lis       r5, 0x505F
      addi      r9, r31, 0x5DC
      lwz       r3, 0x28(r30)
      addi      r8, r4, 0x5F6C
      lwz       r4, 0xC(r30)
      addi      r7, r5, 0x6963
      lwz       r5, 0x8(r30)
      bl        -0x76B78
      lfs       f0, 0x7CC(r2)
      li        r3, 0x44
      lwz       r4, 0x28(r30)
      stfs      f0, 0x20(r4)
      bl        -0x357F00
      mr.       r0, r3
      beq-      .loc_0x484
      bl        -0x76C38
      mr        r0, r3

    .loc_0x484:
      stw       r0, 0x24(r30)
      lis       r4, 0x7961
      lis       r5, 0x6D
      addi      r9, r31, 0x5DC
      lwz       r3, 0x24(r30)
      addi      r8, r4, 0x6A69
      lwz       r4, 0xC(r30)
      addi      r7, r5, 0x675F
      lwz       r5, 0x8(r30)
      bl        -0x76BC4
      lwz       r3, 0x8(r30)
      lis       r5, 0x6F6E
      lis       r4, 0x505F
      lwz       r12, 0x0(r3)
      addi      r6, r5, 0x5F61
      addi      r5, r4, 0x6963
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x48(r30)
      lis       r5, 0x6F6E
      lis       r4, 0x505F
      lwz       r3, 0x8(r30)
      addi      r6, r5, 0x5F62
      addi      r5, r4, 0x6963
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4C(r30)
      li        r3, 0x1C
      bl        -0x357F90
      mr.       r0, r3
      beq-      .loc_0x514
      bl        -0x5303C
      mr        r0, r3

    .loc_0x514:
      stw       r0, 0x30(r30)
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
 * Address:	8037BE6C
 * Size:	000390
 */
void Morimura::TZukanWindow::update(void)
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
      stw       r29, 0x44(r1)
      mr        r31, r3
      lwz       r0, 0x20(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0xAC
      bge-      .loc_0x4C
      cmpwi     r0, 0
      beq-      .loc_0x364
      bge-      .loc_0x5C
      b         .loc_0xF8

    .loc_0x4C:
      cmpwi     r0, 0x4
      bge-      .loc_0xF8
      b         .loc_0xCC
      b         .loc_0x364

    .loc_0x5C:
      lwz       r3, 0x4(r31)
      lfs       f4, 0x7C0(r2)
      lwz       r3, 0x0(r3)
      lfs       f0, 0x18(r3)
      fcmpu     cr0, f4, f0
      bne-      .loc_0x88
      lwz       r3, 0x30(r31)
      lfs       f1, 0x7CC(r2)
      lfs       f2, 0x870(r2)
      lfs       f3, 0x814(r2)
      bl        -0x53018

    .loc_0x88:
      lwz       r3, 0x4(r31)
      lfs       f0, 0x890(r2)
      lwz       r3, 0x0(r3)
      lfs       f1, 0x18(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xF8
      li        r0, 0x2
      stw       r0, 0x20(r31)
      b         .loc_0xF8

    .loc_0xAC:
      lwz       r3, 0x4(r31)
      lfs       f0, 0x890(r2)
      lwz       r3, 0x0(r3)
      lfs       f1, 0x18(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xF8
      stfs      f0, 0x18(r3)
      b         .loc_0xF8

    .loc_0xCC:
      lwz       r3, 0x4(r31)
      lfs       f0, 0x7C4(r2)
      lwz       r3, 0x0(r3)
      lfs       f1, 0x18(r3)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0xF8
      lfs       f0, 0x7C0(r2)
      li        r0, 0
      stfs      f0, 0x18(r3)
      stw       r0, 0x20(r31)

    .loc_0xF8:
      lwz       r3, 0x8(r31)
      cmplwi    r3, 0
      beq-      .loc_0x2E8
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lfs       f30, 0x894(r2)
      li        r29, 0
      lfs       f31, 0x7C0(r2)
      li        r30, 0
      b         .loc_0x15C

    .loc_0x128:
      lwz       r3, 0x4(r31)
      lwzx      r3, r3, r30
      bl        -0x7718C
      cmpwi     r29, 0
      ble-      .loc_0x154
      lwz       r3, 0x4(r31)
      lwzx      r3, r3, r30
      lfs       f0, 0x18(r3)
      fcmpo     cr0, f0, f30
      ble-      .loc_0x154
      stfs      f31, 0x18(r3)

    .loc_0x154:
      addi      r30, r30, 0x4
      addi      r29, r29, 0x1

    .loc_0x15C:
      lwz       r0, 0x10(r31)
      cmpw      r29, r0
      blt+      .loc_0x128
      lwz       r4, 0x4(r31)
      lwz       r3, 0x28(r31)
      lwz       r4, 0x4(r4)
      lfs       f0, 0x18(r4)
      stfs      f0, 0x18(r3)
      lwz       r3, 0x28(r31)
      bl        -0x771DC
      lwz       r3, 0x24(r31)
      bl        -0x771E4
      lwz       r3, 0x24(r31)
      lfs       f0, 0x898(r2)
      lfs       f1, 0x18(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x1A8
      lfs       f0, 0x89C(r2)
      stfs      f0, 0x18(r3)

    .loc_0x1A8:
      lwz       r3, 0x8(r31)
      bl        -0x33B4EC
      lwz       r3, 0x30(r31)
      bl        -0x5309C
      lwz       r3, 0x4(r31)
      lfs       f4, 0x7EC(r2)
      lwz       r3, 0x0(r3)
      lfs       f2, 0x890(r2)
      lfs       f3, 0x18(r3)
      lfs       f0, 0x7C4(r2)
      fmuls     f3, f4, f3
      fdivs     f2, f3, f2
      fcmpo     cr0, f2, f0
      ble-      .loc_0x1E4
      fmr       f2, f0

    .loc_0x1E4:
      fmuls     f0, f2, f1
      lwz       r3, 0x3C(r31)
      stfs      f0, 0xCC(r3)
      stfs      f0, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x54(r31)
      lfs       f1, 0x7E0(r2)
      lfs       f0, 0x840(r2)
      fadds     f1, f2, f1
      stfs      f1, 0x54(r31)
      lfs       f1, 0x54(r31)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x22C
      fsubs     f0, f1, f0
      stfs      f0, 0x54(r31)

    .loc_0x22C:
      lfs       f0, 0x50(r31)
      lbz       r0, -0x7A6E(r13)
      fabs      f0, f0
      lfs       f1, 0x884(r2)
      cmplwi    r0, 0
      frsp      f0, f0
      fsubs     f0, f1, f0
      fdivs     f5, f0, f1
      beq-      .loc_0x2E8
      lfs       f1, 0x54(r31)
      lfs       f0, 0x7C0(r2)
      lwz       r3, 0x3C(r31)
      fcmpo     cr0, f1, f0
      lfs       f4, 0xD8(r3)
      bge-      .loc_0x294
      lfs       f0, 0x848(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f3, f0
      b         .loc_0x2B8

    .loc_0x294:
      lfs       f0, 0x84C(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r0, 0x3C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f3, r4, r0

    .loc_0x2B8:
      lfs       f2, 0x50(r31)
      lfs       f1, 0x1C(r31)
      lfs       f0, 0xD4(r3)
      fadds     f2, f2, f4
      fadds     f0, f1, f0
      fmadds    f1, f5, f3, f2
      stfs      f0, 0xD4(r3)
      stfs      f1, 0xD8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0x2E8:
      lwz       r4, 0x38(r31)
      addi      r3, r1, 0x14
      li        r5, 0
      bl        -0x3431C8
      lfs       f30, 0x14(r1)
      addi      r3, r1, 0x8
      lfs       f31, 0x18(r1)
      li        r5, 0x3
      lwz       r4, 0x38(r31)
      bl        -0x3431E0
      lfs       f1, 0x838(r2)
      lfs       f0, 0x7E4(r2)
      fadds     f30, f30, f1
      lfs       f2, 0x8(r1)
      fadds     f31, f31, f0
      lfs       f0, 0xC(r1)
      fsubs     f2, f2, f1
      lwz       r4, 0x34(r31)
      stfs      f30, 0x20(r1)
      fsubs     f0, f0, f1
      stfs      f31, 0x24(r1)
      lwz       r3, 0x20(r1)
      stfs      f2, 0x28(r1)
      lwz       r0, 0x24(r1)
      stw       r3, 0x1C(r4)
      lwz       r3, 0x28(r1)
      stfs      f0, 0x2C(r1)
      stw       r0, 0x20(r4)
      lwz       r0, 0x2C(r1)
      stw       r3, 0x24(r4)
      stw       r0, 0x28(r4)

    .loc_0x364:
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      lwz       r0, 0x74(r1)
      lwz       r29, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C1FC
 * Size:	00002C
 */
void Morimura::TZukanWindow::draw((Graphics&, J2DPerspGraph*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0x20(r3)
      cmpwi     r0, 0
      beq-      .loc_0x1C
      bl        0x25384

    .loc_0x1C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C228
 * Size:	0000F0
 */
void Morimura::TZukanWindow::windowOpen(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, 0x7C0(r2)
      stw       r0, 0x14(r1)
      li        r0, 0x1
      lfs       f1, 0x7CC(r2)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      lwz       r4, 0x4(r3)
      lwz       r4, 0x0(r4)
      stfs      f0, 0x18(r4)
      lfs       f0, 0x83C(r2)
      lwz       r4, 0x4(r3)
      lwz       r4, 0x0(r4)
      stfs      f1, 0x20(r4)
      stw       r0, 0x20(r3)
      lwz       r30, 0x2C(r3)
      stfs      f0, 0x48(r30)
      lwz       r3, 0x50(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x18(r30)
      cmplwi    r4, 0
      beq-      .loc_0xD8
      lwz       r3, 0x18(r4)
      addi      r5, r30, 0x28
      lwz       r4, 0x1C(r4)
      addi      r6, r30, 0x2C
      bl        0xC108C
      lwz       r3, 0x50(r30)
      lwz       r4, 0x28(r30)
      lwz       r12, 0x0(r3)
      lwz       r5, 0x2C(r30)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x50(r30)
      lwz       r4, 0x18(r30)
      lwz       r31, 0x40(r3)
      mr        r3, r31
      bl        0xC0B9C
      lfs       f0, -0x7A6C(r13)
      stfs      f0, 0xC0(r31)
      stfs      f0, 0xC8(r31)
      lfs       f0, -0x7A68(r13)
      stfs      f0, 0x140(r31)
      lfs       f0, -0x7A64(r13)
      lwz       r3, 0x50(r30)
      stfs      f0, 0x6C(r3)
      lfs       f0, -0x7A60(r13)
      lwz       r3, 0x50(r30)
      stfs      f0, 0x70(r3)

    .loc_0xD8:
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
 * Address:	8037C318
 * Size:	000030
 */
void Morimura::TZukanWindow::windowClose(void)
{
    /*
    .loc_0x0:
      lwz       r0, 0x20(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0x14
      cmpwi     r0, 0x1
      bne-      .loc_0x24

    .loc_0x14:
      lwz       r4, 0x4(r3)
      lfs       f0, 0x804(r2)
      lwz       r4, 0x0(r4)
      stfs      f0, 0x20(r4)

    .loc_0x24:
      li        r0, 0x3
      stw       r0, 0x20(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C348
 * Size:	000038
 */
void Morimura::TZukanWindow::msgScroll((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, 0x7E4(r2)
      stw       r0, 0x14(r1)
      lwz       r3, 0x2C(r3)
      lfs       f2, 0x48(r3)
      fadds     f0, f2, f0
      stfs      f0, 0x48(r3)
      lwz       r3, 0x50(r3)
      bl        0xD8DD8
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C380
 * Size:	000030
 */
void Morimura::TZukanWindow::getPosRate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2C(r3)
      lwz       r3, 0x50(r3)
      bl        0xD8D88
      lfs       f0, 0x7C4(r2)
      lwz       r0, 0x14(r1)
      fsubs     f1, f0, f1
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C3B0
 * Size:	00006C
 */
void Morimura::TZukanWindow::setWindowColor((J2DGXColorS10&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lha       r0, 0x0(r4)
      sth       r0, 0x8(r1)
      lha       r0, 0x2(r4)
      sth       r0, 0xA(r1)
      lha       r0, 0x4(r4)
      sth       r0, 0xC(r1)
      lha       r0, 0x6(r4)
      sth       r0, 0xE(r1)
      lwz       r3, 0x40(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x13C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x70(r3)
      addi      r5, r1, 0x8
      li        r4, 0x1
      lwz       r12, 0x0(r3)
      lwz       r12, 0x34(r12)
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
 * Address:	8037C41C
 * Size:	0000F0
 */
void Morimura::TZukanWindow::setIconColor((J2DGXColorS10&, J2DGXColorS10&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r5
      stw       r30, 0x18(r1)
      mr        r30, r3
      lha       r0, 0x0(r4)
      sth       r0, 0x10(r1)
      lha       r0, 0x2(r4)
      sth       r0, 0x12(r1)
      lha       r0, 0x4(r4)
      sth       r0, 0x14(r1)
      lha       r0, 0x6(r4)
      sth       r0, 0x16(r1)
      lwz       r3, 0x44(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x13C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x70(r3)
      addi      r5, r1, 0x10
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x34(r12)
      mtctr     r12
      bctrl
      lha       r0, 0x0(r31)
      sth       r0, 0x8(r1)
      lha       r0, 0x2(r31)
      sth       r0, 0xA(r1)
      lha       r0, 0x4(r31)
      sth       r0, 0xC(r1)
      lha       r0, 0x6(r31)
      sth       r0, 0xE(r1)
      lwz       r3, 0x44(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x13C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x70(r3)
      addi      r5, r1, 0x8
      li        r4, 0x1
      lwz       r12, 0x0(r3)
      lwz       r12, 0x34(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x44(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x13C(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      stb       r0, 0xF(r3)
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
 * Address:	8037C50C
 * Size:	00008C
 */
void Morimura::TZukanWindow::onIcon((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      cmpwi     r31, 0x2
      stw       r30, 0x8(r1)
      mr        r30, r3
      blt-      .loc_0x40
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x252C
      li        r4, 0x1527
      addi      r5, r5, 0x2538
      crclr     6, 0x6
      bl        -0x351F08

    .loc_0x40:
      rlwinm    r0,r31,2,0,29
      add       r3, r30, r0
      lwz       r4, 0x48(r3)
      cmplwi    r4, 0
      beq-      .loc_0x74
      subfic    r0, r31, 0x1
      li        r3, 0x1
      rlwinm    r0,r0,2,0,29
      stb       r3, 0xB0(r4)
      add       r3, r30, r0
      li        r0, 0
      lwz       r3, 0x48(r3)
      stb       r0, 0xB0(r3)

    .loc_0x74:
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
 * Address:	8037C598
 * Size:	0000D4
 */
void Morimura::TZukanWindow::moveIcon((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      lbz       r0, -0x7A6E(r13)
      fmr       f31, f1
      mr        r31, r3
      cmplwi    r0, 0
      beq-      .loc_0xB8
      fabs      f1, f31
      lfs       f0, 0x7D8(r2)
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x44
      lfs       f31, 0x7C0(r2)

    .loc_0x44:
      lfs       f1, 0x50(r31)
      lfs       f0, 0x7C4(r2)
      fabs      f1, f1
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x64
      lfs       f0, 0x7C0(r2)
      stfs      f0, 0x50(r31)

    .loc_0x64:
      lfs       f4, 0x7C0(r2)
      lfs       f0, 0x50(r31)
      fcmpu     cr0, f4, f0
      bne-      .loc_0x90
      fcmpu     cr0, f4, f31
      beq-      .loc_0x90
      lwz       r3, 0x30(r31)
      lfs       f1, 0x818(r2)
      lfs       f2, 0x7C4(r2)
      lfs       f3, 0x7F4(r2)
      bl        -0x5374C

    .loc_0x90:
      lfs       f0, 0x7C0(r2)
      lfs       f2, 0x7D8(r2)
      fcmpu     cr0, f0, f31
      bne-      .loc_0xA4
      lfs       f2, 0x8A0(r2)

    .loc_0xA4:
      lfs       f0, 0x7E4(r2)
      lfs       f1, 0x50(r31)
      fmsubs    f0, f0, f31, f1
      fmadds    f0, f2, f0, f1
      stfs      f0, 0x50(r31)

    .loc_0xB8:
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
 * Address:	8037C66C
 * Size:	000040
 */
void Morimura::TZukanWindow::changeIconTexture((int, ResTIMG*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      rlwinm    r0,r4,2,0,29
      add       r3, r3, r0
      mr        r4, r5
      lwz       r3, 0x48(r3)
      li        r5, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x110(r12)
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
 * Address:	8037C6AC
 * Size:	000090
 */
void Morimura::TCallbackScrollMsg::__dt(void)
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
      beq-      .loc_0x74
      lis       r4, 0x804E
      addi      r0, r4, 0x3D58
      stw       r0, 0x0(r30)
      beq-      .loc_0x64
      lis       r4, 0x804E
      subi      r0, r4, 0x7E78
      stw       r0, 0x0(r30)
      beq-      .loc_0x64
      lis       r4, 0x804D
      addi      r0, r4, 0x7F2C
      stw       r0, 0x0(r30)
      beq-      .loc_0x64
      lis       r5, 0x804D
      li        r4, 0
      addi      r0, r5, 0x7B0C
      stw       r0, 0x0(r30)
      bl        0x94E7C

    .loc_0x64:
      extsh.    r0, r31
      ble-      .loc_0x74
      mr        r3, r30
      bl        -0x358668

    .loc_0x74:
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
 * Address:	8037C73C
 * Size:	00000C
 */
void Morimura::TDItemScene::getResName( const
{
    /*
    .loc_0x0:
      lis       r3, 0x8049
      addi      r3, r3, 0x32AC
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C748
 * Size:	000008
 */
void Morimura::TDItemScene::getSceneType(void)
{
    /*
    .loc_0x0:
      li        r3, 0x2735
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C750
 * Size:	00000C
 */
void Morimura::TDItemScene::getOwnerID(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x4D52
      addi      r3, r3, 0x4D52
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C75C
 * Size:	000010
 */
void Morimura::TDItemScene::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x4954
      li        r3, 0x44
      addi      r4, r4, 0x454D
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C76C
 * Size:	000034
 */
void Morimura::TItemZukan::getDispMemberBase(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0x20
      lwz       r3, 0x248(r3)
      b         .loc_0x24

    .loc_0x20:
      bl        0xD781C

    .loc_0x24:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C7A0
 * Size:	000008
 */
void Morimura::TItemZukan::getDispDataZukan(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x248(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C7A8
 * Size:	000014
 */
void Morimura::TZukanBase::doUpdateFadeinFinish(void)
{
    /*
    .loc_0x0:
      li        r0, 0x1
      stb       r0, 0x45(r3)
      lwz       r3, 0x130(r3)
      stb       r0, 0xB0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C7BC
 * Size:	000028
 */
void Morimura::TZukanBase::doUpdateFadeout(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stb       r0, 0x45(r3)
      bl        -0x33498
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C7E4
 * Size:	000004
 */
void Morimura::TScrollList::changeTextTevBlock( (int))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C7E8
 * Size:	000004
 */
void Morimura::TScrollList::setPaneCharacter( (int))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C7EC
 * Size:	00000C
 */
void Morimura::TDEnemyScene::getResName( const
{
    /*
    .loc_0x0:
      lis       r3, 0x8049
      addi      r3, r3, 0x32CC
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C7F8
 * Size:	000008
 */
void Morimura::TDEnemyScene::getSceneType(void)
{
    /*
    .loc_0x0:
      li        r3, 0x2734
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C800
 * Size:	00000C
 */
void Morimura::TDEnemyScene::getOwnerID(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x4D52
      addi      r3, r3, 0x4D52
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C80C
 * Size:	000010
 */
void Morimura::TDEnemyScene::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x4E45
      li        r3, 0x4445
      addi      r4, r4, 0x4D59
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C81C
 * Size:	000034
 */
void Morimura::TEnemyZukan::getDispMemberBase(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lbz       r0, -0x6760(r13)
      cmplwi    r0, 0
      beq-      .loc_0x20
      lwz       r3, 0x248(r3)
      b         .loc_0x24

    .loc_0x20:
      bl        0xD776C

    .loc_0x24:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C850
 * Size:	000008
 */
void Morimura::TEnemyZukan::getDispDataZukan(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x248(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C858
 * Size:	000008
 */
void Morimura::TZukanBase::getCategoryColorId( (int))
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C860
 * Size:	000134
 */
void __sinit_zukan2D_cpp(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      lis       r3, 0x8051
      addi      r10, r3, 0x48B0
      lis       r7, 0x804E
      stmw      r26, 0x8(r1)
      li        r31, 0xFF
      subi      r4, r13, 0x66D8
      lfs       f4, 0x7C0(r2)
      subi      r6, r13, 0x66E0
      li        r9, 0
      subi      r8, r13, 0x66EC
      subi      r5, r13, 0x66DC
      subi      r3, r13, 0x66D4
      addi      r27, r7, 0x3928
      lfs       f1, 0x8AC(r2)
      lis       r7, 0x8051
      subi      r11, r13, 0x66F0
      li        r12, 0x60
      lfs       f9, 0x87C(r2)
      addi      r28, r7, 0x401C
      lfs       f10, 0x0(r10)
      li        r10, 0x50
      lfs       f8, 0x7FC(r2)
      li        r0, 0xE1
      lfs       f7, 0x858(r2)
      li        r26, -0x1
      lfs       f6, 0x860(r2)
      subi      r29, r13, 0x6700
      lfs       f5, 0x7EC(r2)
      subi      r30, r13, 0x66F8
      lfs       f3, 0x8A4(r2)
      subi      r7, r13, 0x66E8
      lfs       f2, 0x8A8(r2)
      lfs       f0, 0x8B0(r2)
      stfs      f9, 0x0(r28)
      stfs      f8, 0x4(r28)
      stfs      f7, 0x8(r28)
      stfs      f6, 0xC(r28)
      stfs      f5, 0x10(r28)
      stfs      f4, -0x6700(r13)
      stfs      f3, 0x4(r29)
      stfs      f4, -0x66F8(r13)
      stfs      f2, 0x4(r30)
      stb       r31, -0x66F0(r13)
      stb       r12, 0x1(r11)
      stb       r10, 0x2(r11)
      stb       r9, 0x3(r11)
      stb       r0, -0x66EC(r13)
      stb       r9, 0x1(r8)
      stb       r9, 0x2(r8)
      stb       r31, 0x3(r8)
      stfs      f1, -0x66E8(r13)
      stfs      f0, 0x4(r7)
      stb       r9, -0x66E0(r13)
      stb       r9, 0x1(r6)
      stb       r31, 0x2(r6)
      stb       r31, 0x3(r6)
      stb       r31, -0x66DC(r13)
      stb       r31, 0x1(r5)
      stb       r31, 0x2(r5)
      stb       r9, 0x3(r5)
      stb       r31, -0x66D8(r13)
      stb       r31, 0x1(r4)
      stb       r31, 0x2(r4)
      stb       r31, 0x3(r4)
      stb       r31, -0x66D4(r13)
      stb       r31, 0x1(r3)
      stb       r31, 0x2(r3)
      stb       r9, 0x3(r3)
      stw       r26, -0x6710(r13)
      stfs      f10, 0x0(r27)
      stfs      f10, 0x4(r27)
      stfs      f10, 0x8(r27)
      lmw       r26, 0x8(r1)
      stfs      f10, -0x670C(r13)
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8037C994
 * Size:	000008
 */
void @24@Morimura::TZukanBase::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x18
      b         -0xBAC8
    */
}

/*
 * --INFO--
 * Address:	8037C99C
 * Size:	000008
 */
void @24@Morimura::TEnemyZukan::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x18
      b         -0x7F0C
    */
}

/*
 * --INFO--
 * Address:	8037C9A4
 * Size:	000008
 */
void @24@Morimura::TItemZukan::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x18
      b         -0x4A30
    */
}
