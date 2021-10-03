

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
 * Address:	803C1F58
 * Size:	000094
 */
void ebi::title::TTitleLightMgr::loadSettingFile((JKRArchive*, char*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x430(r1)
      mflr      r0
      stw       r0, 0x434(r1)
      stw       r31, 0x42C(r1)
      mr        r31, r3
      mr        r3, r4
      lwz       r12, 0x0(r4)
      mr        r4, r5
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0x80
      mr        r4, r3
      addi      r3, r1, 0x8
      li        r5, -0x1
      bl        0x53960
      li        r0, 0x1
      cmpwi     r0, 0x1
      stw       r0, 0x14(r1)
      bne-      .loc_0x5C
      li        r0, 0
      stw       r0, 0x41C(r1)

    .loc_0x5C:
      addi      r3, r31, 0x100
      addi      r4, r1, 0x8
      bl        0x51838
      addi      r3, r31, 0x1B0
      addi      r4, r1, 0x8
      bl        0x5182C
      addi      r3, r31, 0x3C8
      addi      r4, r1, 0x8
      bl        0x51820

    .loc_0x80:
      lwz       r0, 0x434(r1)
      lwz       r31, 0x42C(r1)
      mtlr      r0
      addi      r1, r1, 0x430
      blr
    */
}

/*
 * --INFO--
 * Address:	803C1FEC
 * Size:	00017C
 */
void ebi::title::TTitleLightMgr::setParam_(void)
{
    /*
    .loc_0x0:
      lwz       r6, 0x19C(r3)
      lwz       r5, 0x174(r3)
      lwz       r4, 0x14C(r3)
      lwz       r0, 0x124(r3)
      lfs       f0, 0x1540(r2)
      stb       r0, 0x30(r3)
      stb       r4, 0x31(r3)
      stb       r5, 0x32(r3)
      stb       r6, 0x33(r3)
      lwz       r6, 0x24C(r3)
      lwz       r5, 0x224(r3)
      lwz       r4, 0x1FC(r3)
      lwz       r0, 0x1D4(r3)
      stb       r0, 0x84(r3)
      stb       r4, 0x85(r3)
      stb       r5, 0x86(r3)
      stb       r6, 0x87(r3)
      lfs       f3, 0x2C4(r3)
      lfs       f2, 0x29C(r3)
      lfs       f1, 0x274(r3)
      stfs      f1, 0x6C(r3)
      stfs      f2, 0x70(r3)
      stfs      f3, 0x74(r3)
      lfs       f3, 0x314(r3)
      lfs       f4, 0x33C(r3)
      fmuls     f1, f3, f3
      lfs       f2, 0x2EC(r3)
      fmuls     f5, f4, f4
      fmadds    f1, f2, f2, f1
      fadds     f1, f5, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x90
      ble-      .loc_0x94
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x94

    .loc_0x90:
      fmr       f1, f0

    .loc_0x94:
      lfs       f0, 0x1540(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xB4
      lfs       f0, 0x1544(r2)
      fdivs     f0, f0, f1
      fmuls     f2, f2, f0
      fmuls     f3, f3, f0
      fmuls     f4, f4, f0

    .loc_0xB4:
      stfs      f2, 0x78(r3)
      li        r4, 0x1
      li        r0, 0x3
      lfs       f0, 0x1540(r2)
      stfs      f3, 0x7C(r3)
      stfs      f4, 0x80(r3)
      lfs       f2, 0x3B4(r3)
      lfs       f3, 0x38C(r3)
      lfs       f1, 0x364(r3)
      stfs      f1, 0x8C(r3)
      stfs      f3, 0x90(r3)
      stfs      f2, 0x94(r3)
      stb       r4, 0x98(r3)
      stb       r0, 0x99(r3)
      lwz       r6, 0x464(r3)
      lwz       r5, 0x43C(r3)
      lwz       r4, 0x414(r3)
      lwz       r0, 0x3EC(r3)
      stb       r0, 0xDC(r3)
      stb       r4, 0xDD(r3)
      stb       r5, 0xDE(r3)
      stb       r6, 0xDF(r3)
      lfs       f4, 0x4B4(r3)
      lfs       f5, 0x4DC(r3)
      fmuls     f1, f4, f4
      lfs       f3, 0x48C(r3)
      fmuls     f2, f5, f5
      fmadds    f1, f3, f3, f1
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x140
      ble-      .loc_0x144
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x144

    .loc_0x140:
      fmr       f1, f0

    .loc_0x144:
      lfs       f0, 0x1540(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x164
      lfs       f0, 0x1544(r2)
      fdivs     f0, f0, f1
      fmuls     f3, f3, f0
      fmuls     f4, f4, f0
      fmuls     f5, f5, f0

    .loc_0x164:
      stfs      f3, 0xD0(r3)
      stfs      f4, 0xD4(r3)
      stfs      f5, 0xD8(r3)
      lfs       f0, 0x504(r3)
      stfs      f0, 0xF4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803C2168
 * Size:	000020
 */
void ebi::title::TTitleLightMgr::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x188
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803C2188
 * Size:	000094
 */
void ebi::title::TTitleLightMgr::setCameraMtx((float (*)[4]))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      mr        r31, r3
      mr        r3, r4
      addi      r4, r1, 0x10
      bl        -0x2D7ED8
      lbz       r7, 0x30(r31)
      addi      r4, r1, 0xC
      lbz       r6, 0x31(r31)
      li        r3, 0x4
      lbz       r5, 0x32(r31)
      lbz       r0, 0x33(r31)
      stb       r7, 0x8(r1)
      stb       r6, 0x9(r1)
      stb       r5, 0xA(r1)
      stb       r0, 0xB(r1)
      lwz       r0, 0x8(r1)
      stw       r0, 0xC(r1)
      bl        -0x2DB554
      lwz       r31, 0x44(r31)
      b         .loc_0x78

    .loc_0x5C:
      mr        r3, r31
      addi      r4, r1, 0x10
      lwz       r12, 0x0(r31)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x4(r31)

    .loc_0x78:
      cmplwi    r31, 0
      bne+      .loc_0x5C
      lwz       r0, 0x54(r1)
      lwz       r31, 0x4C(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	803C221C
 * Size:	000028
 */
void __sinit_ebiP2TitleLight_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804E
      stw       r0, -0x65B8(r13)
      stfsu     f0, 0x79D8(r3)
      stfs      f0, -0x65B4(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
