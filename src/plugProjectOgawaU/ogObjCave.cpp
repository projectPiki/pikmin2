

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
 * Address:	8031C008
 * Size:	00009C
 */
void og::newScreen::ObjCave::__ct((char const*))
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
      bl        0x137AC4
      lis       r3, 0x804E
      lfs       f0, -0x7A0(r2)
      subi      r3, r3, 0x712C
      li        r0, 0
      stw       r3, 0x0(r30)
      addi      r4, r3, 0x10
      mr        r3, r30
      stw       r4, 0x18(r30)
      stfs      f0, 0x5C(r30)
      stfs      f0, 0x60(r30)
      stw       r31, 0x14(r30)
      stw       r0, 0x38(r30)
      stw       r0, 0x3C(r30)
      stw       r0, 0x40(r30)
      stw       r0, 0x44(r30)
      stw       r0, 0x48(r30)
      stw       r0, 0x4C(r30)
      stw       r0, 0x50(r30)
      stw       r0, 0x54(r30)
      stw       r0, 0x58(r30)
      stb       r0, 0x64(r30)
      stw       r0, 0x68(r30)
      stfs      f0, 0x6C(r30)
      stw       r0, 0x70(r30)
      stw       r0, 0x74(r30)
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
 * Address:	8031C0A4
 * Size:	0000AC
 */
void og::newScreen::ObjCave::__dt(void)
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
      beq-      .loc_0x90
      lis       r4, 0x804E
      subi      r4, r4, 0x712C
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0x80
      lis       r4, 0x804F
      subi      r4, r4, 0x28A8
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      beq-      .loc_0x80
      lis       r4, 0x804E
      subi      r4, r4, 0x7DC0
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x10
      stw       r0, 0x18(r30)
      bl        0xF54C8
      addi      r3, r30, 0x18
      li        r4, 0
      bl        -0x2FF0E0
      mr        r3, r30
      li        r4, 0
      bl        0xF5468

    .loc_0x80:
      extsh.    r0, r31
      ble-      .loc_0x90
      mr        r3, r30
      bl        -0x2F807C

    .loc_0x90:
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
 * Address:	8031C150
 * Size:	000518
 */
void og::newScreen::ObjCave::doCreate((JKRArchive*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x8049
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      subi      r31, r5, 0x12E8
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      stw       r28, 0x10(r1)
      bl        0x137E2C
      lis       r4, 0x4F
      lis       r6, 0x4341
      li        r5, 0
      mr        r28, r3
      addi      r4, r4, 0x4741
      addi      r6, r6, 0x5645
      bl        -0xCE7C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x5C
      stw       r28, 0x38(r29)
      b         .loc_0x164

    .loc_0x5C:
      lis       r4, 0x4F
      lis       r6, 0x554D
      mr        r3, r28
      li        r5, 0x44
      addi      r4, r4, 0x4741
      addi      r6, r6, 0x4D59
      bl        -0xCEA8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x150
      li        r3, 0x64
      bl        -0x2F8330
      cmplwi    r3, 0
      beq-      .loc_0x148
      lis       r5, 0x804B
      lis       r4, 0x804B
      addi      r0, r5, 0x1148
      li        r8, 0
      stw       r0, 0x0(r3)
      addi      r0, r4, 0x1094
      lfs       f2, -0x7A0(r2)
      li        r7, 0x4D2
      stw       r8, 0x4(r3)
      li        r6, 0x32
      lfs       f1, -0x79C(r2)
      li        r5, 0x1
      stw       r0, 0x0(r3)
      li        r4, 0x2
      li        r0, 0xA
      lfs       f0, -0x798(r2)
      stfs      f2, 0x8(r3)
      stw       r8, 0xC(r3)
      stw       r8, 0x14(r3)
      stw       r7, 0x10(r3)
      stw       r6, 0x18(r3)
      stb       r8, 0x1C(r3)
      stw       r8, 0x20(r3)
      stfs      f1, 0x24(r3)
      stw       r5, 0x28(r3)
      stw       r4, 0x2C(r3)
      stw       r0, 0x30(r3)
      stw       r0, 0x34(r3)
      stb       r5, 0x38(r3)
      stfs      f1, 0x3C(r3)
      stw       r5, 0x40(r3)
      stw       r4, 0x44(r3)
      stw       r0, 0x48(r3)
      stw       r0, 0x4C(r3)
      stb       r5, 0x50(r3)
      stb       r5, 0x1C(r3)
      stb       r8, 0x5D(r3)
      stb       r8, 0x5E(r3)
      stfs      f0, 0x54(r3)
      stb       r8, 0x5C(r3)
      stw       r5, 0x58(r3)
      stb       r8, 0x5F(r3)
      stb       r8, 0x62(r3)
      stb       r8, 0x63(r3)
      stb       r8, 0x60(r3)
      stb       r8, 0x61(r3)

    .loc_0x148:
      stw       r3, 0x38(r29)
      b         .loc_0x164

    .loc_0x150:
      addi      r3, r31, 0xC
      addi      r5, r31, 0x1C
      li        r4, 0xBD
      crclr     6, 0x6
      bl        -0x2F1C70

    .loc_0x164:
      li        r3, 0x198
      bl        -0x2F8414
      mr.       r0, r3
      beq-      .loc_0x17C
      bl        -0x18CB8
      mr        r0, r3

    .loc_0x17C:
      stw       r0, 0x44(r29)
      li        r3, 0x158
      bl        -0x2F8430
      mr.       r28, r3
      beq-      .loc_0x1B0
      bl        0x118ACC
      lis       r3, 0x804D
      li        r0, 0
      addi      r3, r3, 0x7E70
      stw       r3, 0x0(r28)
      stw       r0, 0x148(r28)
      stw       r0, 0x14C(r28)
      stw       r0, 0x150(r28)

    .loc_0x1B0:
      stw       r28, 0x48(r29)
      li        r3, 0x158
      bl        -0x2F8464
      mr.       r28, r3
      beq-      .loc_0x1E4
      bl        0x118A98
      lis       r3, 0x804D
      li        r0, 0
      addi      r3, r3, 0x7E70
      stw       r3, 0x0(r28)
      stw       r0, 0x148(r28)
      stw       r0, 0x14C(r28)
      stw       r0, 0x150(r28)

    .loc_0x1E4:
      stw       r28, 0x4C(r29)
      li        r3, 0x1A8
      bl        -0x2F8498
      mr.       r28, r3
      beq-      .loc_0x208
      bl        -0x1812C
      lis       r3, 0x804D
      addi      r0, r3, 0x7C9C
      stw       r0, 0x0(r28)

    .loc_0x208:
      stw       r28, 0x50(r29)
      li        r3, 0x180
      bl        -0x2F84BC
      mr.       r0, r3
      beq-      .loc_0x224
      bl        0x10040
      mr        r0, r3

    .loc_0x224:
      stw       r0, 0x54(r29)
      li        r3, 0x148
      bl        -0x2F84D8
      mr.       r0, r3
      beq-      .loc_0x240
      bl        0x118A24
      mr        r0, r3

    .loc_0x240:
      stw       r0, 0x58(r29)
      li        r3, 0xC
      bl        -0x2F84F4
      mr.       r0, r3
      beq-      .loc_0x260
      li        r4, 0x6
      bl        -0xD420
      mr        r0, r3

    .loc_0x260:
      stw       r0, 0x40(r29)
      mr        r7, r30
      addi      r4, r31, 0x3C
      lis       r6, 0x104
      lwz       r3, 0x40(r29)
      lwz       r5, 0x44(r29)
      bl        -0xD3A8
      lwz       r3, 0x40(r29)
      mr        r7, r30
      lwz       r5, 0x48(r29)
      addi      r4, r31, 0x48
      lis       r6, 0x104
      bl        -0xD3C0
      lwz       r3, 0x40(r29)
      mr        r7, r30
      lwz       r5, 0x4C(r29)
      addi      r4, r31, 0x48
      lis       r6, 0x104
      bl        -0xD3D8
      lwz       r3, 0x40(r29)
      mr        r7, r30
      lwz       r5, 0x50(r29)
      addi      r4, r31, 0x54
      lis       r6, 0x104
      bl        -0xD3F0
      lwz       r3, 0x40(r29)
      mr        r7, r30
      lwz       r5, 0x54(r29)
      addi      r4, r31, 0x64
      lis       r6, 0x104
      bl        -0xD408
      lwz       r3, 0x40(r29)
      mr        r7, r30
      lwz       r5, 0x58(r29)
      addi      r4, r31, 0x78
      lis       r6, 0x104
      bl        -0xD420
      lwz       r3, 0x44(r29)
      mr        r4, r30
      bl        -0x18D4C
      lwz       r4, 0x38(r29)
      li        r5, 0
      lwz       r3, 0x48(r29)
      addi      r4, r4, 0x24
      bl        -0x154B8
      lwz       r4, 0x38(r29)
      lbz       r0, 0x5D(r4)
      cmplwi    r0, 0
      beq-      .loc_0x338
      lwz       r3, 0x4C(r29)
      addi      r4, r4, 0x3C
      li        r5, 0x2
      bl        -0x154D8
      b         .loc_0x348

    .loc_0x338:
      lwz       r3, 0x4C(r29)
      addi      r4, r4, 0x3C
      li        r5, 0x1
      bl        -0x154EC

    .loc_0x348:
      lwz       r3, 0x50(r29)
      mr        r4, r30
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA0(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x54(r29)
      lis       r4, 0x8051
      addi      r5, r4, 0x3DDC
      mr        r4, r30
      lwz       r12, 0x0(r3)
      lfs       f1, 0x8(r5)
      lwz       r12, 0xA0(r12)
      lfs       f2, 0xC(r5)
      lfs       f3, 0x10(r5)
      lfs       f4, 0x14(r5)
      mtctr     r12
      bctrl
      lis       r4, 0x6869
      lwz       r3, 0x50(r29)
      addi      r6, r4, 0x6B61
      li        r5, 0x5063
      bl        -0x19644
      stw       r3, 0x70(r29)
      lis       r5, 0x6E61
      lis       r4, 0x4E
      lwz       r3, 0x50(r29)
      addi      r6, r5, 0x6C66
      addi      r5, r4, 0x6669
      bl        -0x19660
      stw       r3, 0x74(r29)
      lwz       r3, 0x38(r29)
      lbz       r0, 0x5E(r3)
      cmplwi    r0, 0
      beq-      .loc_0x3F0
      lwz       r3, 0x70(r29)
      li        r4, 0
      li        r0, 0x1
      stb       r4, 0xB0(r3)
      lwz       r3, 0x74(r29)
      stb       r0, 0xB0(r3)
      b         .loc_0x408

    .loc_0x3F0:
      lwz       r3, 0x70(r29)
      li        r4, 0x1
      li        r0, 0
      stb       r4, 0xB0(r3)
      lwz       r3, 0x74(r29)
      stb       r0, 0xB0(r3)

    .loc_0x408:
      lwz       r3, 0x38(r29)
      lwz       r0, 0x20(r3)
      stw       r0, 0x68(r29)
      lwz       r3, 0x54(r29)
      lwz       r4, 0x68(r29)
      bl        0xFF50
      lfs       f0, -0x7A0(r2)
      li        r0, 0
      stfs      f0, 0x6C(r29)
      lwz       r3, 0x50(r29)
      stb       r0, 0x18C(r3)
      lwz       r3, 0x54(r29)
      bl        0xFFA4
      lwz       r3, 0x54(r29)
      bl        0xFFE0
      li        r3, 0x94
      bl        -0x2F86F4
      mr.       r0, r3
      beq-      .loc_0x45C
      bl        0x11344
      mr        r0, r3

    .loc_0x45C:
      stw       r0, 0x3C(r29)
      lis       r5, 0x6E73
      lis       r4, 0x4E
      lwz       r3, 0x58(r29)
      addi      r6, r5, 0x6F72
      addi      r5, r4, 0x7365
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      mr        r30, r3
      lwz       r3, 0x58(r29)
      lis       r4, 0x6861
      li        r5, 0x4E
      lwz       r12, 0x0(r3)
      addi      r6, r4, 0x7269
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r5, 0x38(r29)
      mr        r4, r3
      lwz       r3, 0x3C(r29)
      lwz       r6, 0x58(r5)
      mr        r5, r30
      bl        0x1141C
      li        r0, 0x1
      lis       r3, 0x8051
      stb       r0, 0x78(r29)
      addi      r3, r3, 0x3DDC
      lfs       f1, 0x30(r3)
      lwz       r4, 0x3C(r29)
      lfs       f0, 0x2C(r3)
      stfs      f0, 0x4C(r4)
      stfs      f1, 0x50(r4)
      lwz       r5, 0x38(r29)
      lwz       r3, 0x44(r29)
      lbz       r4, 0x62(r5)
      lbz       r5, 0x63(r5)
      bl        -0x189B0
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
 * Address:	8031C668
 * Size:	0003A4
 */
void og::newScreen::ObjCave::commonUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      stw       r30, 0x28(r1)
      lwz       r3, 0x38(r3)
      cmplwi    r3, 0
      beq-      .loc_0x1B0
      lbz       r0, 0x5E(r3)
      cmplwi    r0, 0
      beq-      .loc_0x4C
      lwz       r3, 0x70(r31)
      li        r4, 0
      li        r0, 0x1
      stb       r4, 0xB0(r3)
      lwz       r3, 0x74(r31)
      stb       r0, 0xB0(r3)
      b         .loc_0x64

    .loc_0x4C:
      lwz       r3, 0x70(r31)
      li        r4, 0x1
      li        r0, 0
      stb       r4, 0xB0(r3)
      lwz       r3, 0x74(r31)
      stb       r0, 0xB0(r3)

    .loc_0x64:
      lwz       r4, 0x38(r31)
      lwz       r3, 0x44(r31)
      addi      r4, r4, 0x24
      bl        -0x18D0C
      lwz       r5, 0x38(r31)
      lbz       r0, 0x38(r5)
      cmplwi    r0, 0
      beq-      .loc_0x98
      lwz       r3, 0x50(r31)
      addi      r4, r5, 0x8
      addi      r5, r5, 0x24
      bl        -0x18420
      b         .loc_0xA8

    .loc_0x98:
      lwz       r3, 0x50(r31)
      addi      r4, r5, 0x8
      addi      r5, r5, 0x3C
      bl        -0x18434

    .loc_0xA8:
      lbz       r0, 0x64(r31)
      cmplwi    r0, 0
      beq-      .loc_0x110
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x6C(r31)
      lfs       f1, 0x54(r3)
      lfs       f0, -0x794(r2)
      fadds     f1, f2, f1
      stfs      f1, 0x6C(r31)
      lfs       f1, 0x6C(r31)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xE0
      li        r0, 0
      stb       r0, 0x64(r31)

    .loc_0xE0:
      lwz       r3, 0x38(r31)
      lwz       r0, 0x68(r31)
      lwz       r3, 0x20(r3)
      cmplw     r3, r0
      beq-      .loc_0x14C
      stw       r3, 0x68(r31)
      lwz       r3, 0x54(r31)
      lwz       r4, 0x68(r31)
      bl        0xFD54
      lfs       f0, -0x7A0(r2)
      stfs      f0, 0x6C(r31)
      b         .loc_0x14C

    .loc_0x110:
      lwz       r3, 0x38(r31)
      lwz       r0, 0x68(r31)
      lwz       r3, 0x20(r3)
      cmplw     r3, r0
      beq-      .loc_0x14C
      li        r0, 0x1
      stb       r0, 0x64(r31)
      lwz       r3, 0x38(r31)
      lwz       r0, 0x20(r3)
      stw       r0, 0x68(r31)
      lwz       r3, 0x54(r31)
      lwz       r4, 0x68(r31)
      bl        0xFD14
      lfs       f0, -0x7A0(r2)
      stfs      f0, 0x6C(r31)

    .loc_0x14C:
      lbz       r0, 0x64(r31)
      cmplwi    r0, 0
      beq-      .loc_0x170
      lwz       r3, 0x50(r31)
      li        r0, 0x1
      stb       r0, 0x18C(r3)
      lwz       r3, 0x54(r31)
      bl        0xFC7C
      b         .loc_0x184

    .loc_0x170:
      lwz       r3, 0x50(r31)
      li        r0, 0
      stb       r0, 0x18C(r3)
      lwz       r3, 0x54(r31)
      bl        0xFD44

    .loc_0x184:
      lwz       r3, 0x38(r31)
      lbz       r0, 0x5D(r3)
      cmplwi    r0, 0
      beq-      .loc_0x1A4
      lwz       r3, 0x4C(r31)
      li        r4, 0x2
      bl        -0x15744
      b         .loc_0x1B0

    .loc_0x1A4:
      lwz       r3, 0x4C(r31)
      li        r4, 0x1
      bl        -0x15754

    .loc_0x1B0:
      bl        0x106A0C
      lhz       r30, 0x4(r3)
      bl        0x106A04
      lhz       r3, 0x6(r3)
      lis       r0, 0x4330
      stw       r30, 0xC(r1)
      li        r4, 0x7A
      lfd       f4, -0x780(r2)
      stw       r0, 0x8(r1)
      lfs       f2, -0x790(r2)
      lfd       f0, 0x8(r1)
      stw       r3, 0x14(r1)
      fsubs     f1, f0, f4
      lwz       r3, 0x40(r31)
      stw       r0, 0x10(r1)
      lfs       f3, -0x7A0(r2)
      lfd       f0, 0x10(r1)
      fmuls     f1, f1, f2
      fsubs     f0, f0, f4
      fmuls     f2, f0, f2
      bl        -0xD764
      lfs       f1, -0x79C(r2)
      lfs       f0, 0x60(r31)
      lfs       f3, -0x78C(r2)
      fadds     f2, f1, f0
      lfs       f1, -0x790(r2)
      lfs       f0, -0x7A0(r2)
      fmuls     f2, f3, f2
      fmuls     f2, f2, f1
      fcmpo     cr0, f2, f0
      bge-      .loc_0x230
      fneg      f2, f2

    .loc_0x230:
      lfs       f0, -0x784(r2)
      lis       r3, 0x8050
      addi      r4, r3, 0x71A0
      lfs       f1, -0x79C(r2)
      fmuls     f0, f2, f0
      lfs       f2, -0x788(r2)
      lwz       r3, 0x40(r31)
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      add       r4, r4, r0
      lfs       f0, 0x4(r4)
      fneg      f0, f0
      fsubs     f0, f1, f0
      fmadds    f1, f2, f0, f1
      bl        -0xD818
      lwz       r3, 0x40(r31)
      bl        -0xD738
      lwz       r3, 0x38(r31)
      lbz       r0, 0x5C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x2B4
      lbz       r0, 0x78(r31)
      cmplwi    r0, 0
      beq-      .loc_0x2B4
      lbz       r0, 0x5F(r3)
      cmplwi    r0, 0
      beq-      .loc_0x2B4
      lwz       r3, 0x3C(r31)
      bl        0x1138C
      li        r0, 0
      stb       r0, 0x78(r31)

    .loc_0x2B4:
      lwz       r6, 0x38(r31)
      lwz       r3, 0x3C(r31)
      lfs       f1, 0x54(r6)
      lwz       r4, 0x58(r6)
      lbz       r5, 0x60(r6)
      lbz       r6, 0x61(r6)
      bl        0x1119C
      lwz       r3, 0x3C(r31)
      bl        0x114DC
      lwz       r3, 0x38(r31)
      lbz       r0, 0x5C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x358
      lwz       r3, 0x3C(r31)
      bl        0x11328
      lwz       r3, 0x3C(r31)
      bl        0x11434
      lis       r4, 0x8051
      lwz       r3, 0x3C(r31)
      addi      r4, r4, 0x3DDC
      lfs       f1, 0x18(r4)
      lfs       f2, 0x1C(r4)
      bl        0x1133C
      lis       r4, 0x8051
      lwz       r3, 0x3C(r31)
      addi      r4, r4, 0x3DDC
      lfs       f1, 0x20(r4)
      bl        0x11400
      lis       r3, 0x8051
      lwz       r4, 0x3C(r31)
      addi      r3, r3, 0x3DDC
      lfs       f1, 0x38(r3)
      lfs       f0, 0x34(r3)
      stfs      f0, 0x5C(r4)
      stfs      f1, 0x60(r4)
      lfs       f1, 0x40(r3)
      lwz       r4, 0x3C(r31)
      lfs       f0, 0x3C(r3)
      stfs      f0, 0x64(r4)
      stfs      f1, 0x68(r4)
      b         .loc_0x360

    .loc_0x358:
      lwz       r3, 0x3C(r31)
      bl        0x112C8

    .loc_0x360:
      lwz       r5, 0x38(r31)
      lwz       r3, 0x44(r31)
      lbz       r4, 0x62(r5)
      lbz       r5, 0x63(r5)
      bl        -0x18D44
      lis       r4, 0x8051
      lwz       r3, 0x44(r31)
      addi      r4, r4, 0x3DDC
      lfs       f1, 0x24(r4)
      lfs       f2, 0x28(r4)
      bl        -0x18D68
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
 * Address:	8031CA0C
 * Size:	000024
 */
void og::newScreen::ObjCave::doUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x3B0
      lwz       r0, 0x14(r1)
      li        r3, 0
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8031CA30
 * Size:	000064
 */
void og::newScreen::ObjCave::doDraw((Graphics&))
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
      lwz       r3, 0x40(r3)
      cmplwi    r3, 0
      beq-      .loc_0x30
      addi      r4, r31, 0x190
      bl        -0xD844

    .loc_0x30:
      lwz       r3, 0x38(r30)
      lbz       r0, 0x5C(r3)
      cmplwi    r0, 0
      beq-      .loc_0x4C
      lwz       r3, 0x3C(r30)
      addi      r4, r31, 0x190
      bl        0x11FD4

    .loc_0x4C:
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
 * Address:	8031CA94
 * Size:	000014
 */
void og::newScreen::ObjCave::doStart((Screen::StartSceneArg const*))
{
    /*
    .loc_0x0:
      lfs       f0, -0x7A0(r2)
      stfs      f0, 0x5C(r3)
      stfs      f0, 0x60(r3)
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	8031CAA8
 * Size:	000010
 */
void og::newScreen::ObjCave::doEnd((Screen::EndSceneArg const*))
{
    /*
    .loc_0x0:
      lfs       f0, -0x7A0(r2)
      stfs      f0, 0x5C(r3)
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	8031CAB8
 * Size:	000074
 */
void og::newScreen::ObjCave::doUpdateFadein(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x8051
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      lwz       r5, -0x6514(r13)
      lfs       f1, 0x5C(r3)
      lfs       f0, 0x54(r5)
      fadds     f0, f1, f0
      stfs      f0, 0x5C(r3)
      lfs       f0, 0x5C(r3)
      lfs       f1, 0x3DDC(r4)
      fcmpo     cr0, f0, f1
      ble-      .loc_0x44
      stfs      f1, 0x5C(r3)
      li        r31, 0x1

    .loc_0x44:
      lis       r4, 0x8051
      lfs       f1, 0x5C(r3)
      lfs       f0, 0x3DDC(r4)
      fdivs     f0, f1, f0
      stfs      f0, 0x60(r3)
      bl        -0x4A8
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
 * Address:	8031CB2C
 * Size:	000004
 */
void og::newScreen::ObjCave::doUpdateFadeinFinish(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8031CB30
 * Size:	00000C
 */
void og::newScreen::ObjCave::doUpdateFinish(void)
{
    /*
    .loc_0x0:
      lfs       f0, -0x7A0(r2)
      stfs      f0, 0x5C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8031CB3C
 * Size:	00007C
 */
void og::newScreen::ObjCave::doUpdateFadeout(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x8051
      stw       r0, 0x14(r1)
      addi      r4, r4, 0x3DDC
      stw       r31, 0xC(r1)
      li        r31, 0
      lwz       r5, -0x6514(r13)
      lfs       f1, 0x5C(r3)
      lfs       f0, 0x54(r5)
      fadds     f0, f1, f0
      stfs      f0, 0x5C(r3)
      lfs       f0, 0x5C(r3)
      lfs       f1, 0x4(r4)
      fcmpo     cr0, f0, f1
      ble-      .loc_0x48
      stfs      f1, 0x5C(r3)
      li        r31, 0x1

    .loc_0x48:
      lfs       f1, 0x5C(r3)
      lfs       f0, 0x4(r4)
      lfs       f2, -0x79C(r2)
      fdivs     f0, f1, f0
      fsubs     f0, f2, f0
      stfs      f0, 0x60(r3)
      bl        -0x534
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
 * Address:	8031CBB8
 * Size:	000004
 */
void og::newScreen::ObjCave::doUpdateFadeoutFinish(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8031CBBC
 * Size:	0000CC
 */
void __sinit_ogObjCave_cpp(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      lis       r3, 0x8051
      li        r0, -0x1
      addi      r5, r3, 0x48B0
      lfs       f13, -0x778(r2)
      lfs       f31, 0x0(r5)
      lis       r4, 0x804E
      lis       r3, 0x8051
      lfs       f10, -0x7A0(r2)
      stfsu     f13, 0x3DDC(r3)
      lfs       f9, -0x79C(r2)
      stfsu     f31, -0x7138(r4)
      lfs       f12, -0x774(r2)
      lfs       f11, -0x770(r2)
      lfs       f8, -0x794(r2)
      lfs       f7, -0x76C(r2)
      lfs       f6, -0x768(r2)
      lfs       f5, -0x764(r2)
      lfs       f4, -0x760(r2)
      lfs       f3, -0x75C(r2)
      lfs       f2, -0x758(r2)
      lfs       f1, -0x754(r2)
      lfs       f0, -0x788(r2)
      stw       r0, -0x6808(r13)
      stfs      f31, -0x6804(r13)
      stfs      f31, 0x4(r4)
      stfs      f31, 0x8(r4)
      stfs      f12, 0x4(r3)
      stfs      f11, 0x8(r3)
      stfs      f10, 0xC(r3)
      stfs      f9, 0x10(r3)
      stfs      f9, 0x14(r3)
      stfs      f10, 0x18(r3)
      stfs      f8, 0x1C(r3)
      stfs      f7, 0x20(r3)
      stfs      f10, 0x24(r3)
      stfs      f6, 0x28(r3)
      stfs      f5, 0x2C(r3)
      stfs      f4, 0x30(r3)
      stfs      f10, 0x34(r3)
      stfs      f3, 0x38(r3)
      stfs      f10, 0x3C(r3)
      stfs      f2, 0x40(r3)
      stfs      f1, 0x44(r3)
      stfs      f0, 0x48(r3)
      psq_l     f31,0x18(r1),0,0
      lfd       f31, 0x10(r1)
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8031CC88
 * Size:	000008
 */
void @24 @og::newScreen::ObjCave::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x18
      b         -0xBE8
    */
}
