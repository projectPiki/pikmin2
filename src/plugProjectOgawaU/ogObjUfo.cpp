

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
 * Address:	80323798
 * Size:	0000B0
 */
void og::newScreen::ObjUfoMenu::__ct((char const*))
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
      bl        0x130334
      lis       r3, 0x804E
      li        r0, 0
      subi      r3, r3, 0x6828
      lfs       f1, -0x638(r2)
      stw       r3, 0x0(r30)
      addi      r4, r3, 0x10
      lfs       f0, -0x634(r2)
      mr        r3, r30
      stw       r4, 0x18(r30)
      stw       r31, 0x14(r30)
      stw       r0, 0x38(r30)
      stw       r0, 0x3C(r30)
      stw       r0, 0x40(r30)
      stw       r0, 0x48(r30)
      stw       r0, 0x4C(r30)
      stb       r0, 0x50(r30)
      stfs      f1, 0x54(r30)
      stw       r0, 0x58(r30)
      stw       r0, 0x60(r30)
      stfs      f0, 0x84(r30)
      stw       r0, 0x64(r30)
      stw       r0, 0x68(r30)
      stw       r0, 0x6C(r30)
      stw       r0, 0x70(r30)
      stw       r0, 0x74(r30)
      stw       r0, 0x78(r30)
      stw       r0, 0x7C(r30)
      stw       r0, 0x80(r30)
      stw       r0, 0x8C(r30)
      stb       r0, 0x88(r30)
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
 * Address:	80323848
 * Size:	0000AC
 */
void og::newScreen::ObjUfoMenu::__dt(void)
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
      subi      r4, r4, 0x6828
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
      bl        0xEDD24
      addi      r3, r30, 0x18
      li        r4, 0
      bl        -0x306884
      mr        r3, r30
      li        r4, 0
      bl        0xEDCC4

    .loc_0x80:
      extsh.    r0, r31
      ble-      .loc_0x90
      mr        r3, r30
      bl        -0x2FF820

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
 * Address:	803238F4
 * Size:	000490
 */
void og::newScreen::ObjUfoMenu::doCreate((JKRArchive*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      li        r0, 0
      stmw      r26, 0x28(r1)
      mr        r30, r3
      mr        r31, r4
      stw       r0, 0x38(r3)
      bl        0x130694
      lis       r4, 0x4F
      lis       r6, 0x5F47
      lis       r5, 0x55
      mr        r26, r3
      addi      r4, r4, 0x4741
      addi      r6, r6, 0x5250
      addi      r5, r5, 0x464F
      bl        -0x14618
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x54
      stw       r26, 0x38(r30)
      b         .loc_0x160

    .loc_0x54:
      li        r3, 0x8C
      bl        -0x2FFAA8
      cmplwi    r3, 0
      beq-      .loc_0x15C
      lis       r4, 0x804B
      lis       r6, 0x804B
      addi      r26, r4, 0x1148
      lis       r5, 0x804B
      stw       r26, 0x0(r3)
      li        r27, 0
      lis       r4, 0x804B
      addi      r0, r6, 0x3164
      stw       r27, 0x4(r3)
      addi      r28, r5, 0x314C
      li        r29, 0x1
      addi      r12, r4, 0x3134
      stw       r0, 0x0(r3)
      li        r11, 0x64
      li        r10, 0x3E8
      li        r9, 0x14
      stw       r26, 0x8(r3)
      li        r8, 0x32
      li        r7, 0x3C
      li        r6, 0xC8
      stw       r27, 0xC(r3)
      li        r5, -0x1
      li        r4, 0x4
      li        r0, 0x3
      stw       r28, 0x8(r3)
      stw       r29, 0x10(r3)
      stb       r27, 0x14(r3)
      stw       r26, 0x18(r3)
      stw       r27, 0x1C(r3)
      stw       r12, 0x18(r3)
      stw       r11, 0x24(r3)
      stw       r10, 0x28(r3)
      stw       r27, 0x2C(r3)
      stw       r9, 0x30(r3)
      stw       r8, 0x34(r3)
      stw       r7, 0x38(r3)
      stw       r6, 0x3C(r3)
      stw       r5, 0x20(r3)
      stw       r27, 0x40(r3)
      stb       r27, 0x44(r3)
      stw       r27, 0x48(r3)
      sth       r27, 0x4C(r3)
      stw       r26, 0x50(r3)
      stw       r27, 0x54(r3)
      stw       r12, 0x50(r3)
      stw       r11, 0x5C(r3)
      stw       r10, 0x60(r3)
      stw       r27, 0x64(r3)
      stw       r9, 0x68(r3)
      stw       r8, 0x6C(r3)
      stw       r7, 0x70(r3)
      stw       r6, 0x74(r3)
      stw       r5, 0x58(r3)
      stw       r27, 0x78(r3)
      stb       r27, 0x7C(r3)
      stw       r27, 0x80(r3)
      sth       r27, 0x84(r3)
      stb       r27, 0x88(r3)
      stb       r27, 0x89(r3)
      stw       r4, 0x20(r3)
      stw       r0, 0x58(r3)
      stb       r27, 0x8A(r3)

    .loc_0x15C:
      stw       r3, 0x38(r30)

    .loc_0x160:
      li        r3, 0x148
      bl        -0x2FFBB4
      mr.       r0, r3
      beq-      .loc_0x178
      bl        0x111348
      mr        r0, r3

    .loc_0x178:
      stw       r0, 0x3C(r30)
      mr        r6, r31
      subi      r4, r2, 0x630
      lis       r5, 0x104
      lwz       r3, 0x3C(r30)
      bl        -0x2E445C
      li        r3, 0x138
      bl        -0x2FFBE4
      mr.       r0, r3
      beq-      .loc_0x1A8
      bl        0x11102C
      mr        r0, r3

    .loc_0x1A8:
      stw       r0, 0x40(r30)
      lis       r3, 0x8049
      subi      r4, r3, 0xD70
      mr        r6, r31
      lwz       r3, 0x40(r30)
      lis       r5, 0x104
      bl        -0x2E4490
      lis       r4, 0x775F
      lwz       r3, 0x40(r30)
      addi      r6, r4, 0x3030
      li        r5, 0x505F
      bl        -0x20C1C
      stw       r3, 0x64(r30)
      lis       r5, 0x5F73
      lis       r4, 0x50
      lwz       r3, 0x40(r30)
      addi      r6, r5, 0x3030
      addi      r5, r4, 0x5F77
      bl        -0x20C38
      stw       r3, 0x68(r30)
      lis       r3, 0x625F
      addi      r6, r3, 0x3030
      li        r5, 0x505F
      lwz       r3, 0x40(r30)
      bl        -0x20C50
      stw       r3, 0x6C(r30)
      lis       r5, 0x735F
      lis       r4, 0x505F
      lwz       r3, 0x40(r30)
      addi      r6, r5, 0x3030
      addi      r5, r4, 0x625F
      bl        -0x20C6C
      stw       r3, 0x70(r30)
      lis       r3, 0x6C6C
      addi      r6, r3, 0x5F77
      li        r5, 0x4E61
      lwz       r3, 0x40(r30)
      bl        -0x20C84
      stw       r3, 0x74(r30)
      lis       r3, 0x6C6C
      addi      r6, r3, 0x5F62
      li        r5, 0x4E61
      lwz       r3, 0x40(r30)
      bl        -0x20C9C
      stw       r3, 0x78(r30)
      lis       r3, 0x3030
      addi      r6, r3, 0x5F63
      li        r5, 0x4E
      lwz       r3, 0x3C(r30)
      bl        -0x20CB4
      stw       r3, 0x7C(r30)
      lis       r3, 0x3031
      addi      r6, r3, 0x5F63
      li        r5, 0x4E
      lwz       r3, 0x3C(r30)
      bl        -0x20CCC
      stw       r3, 0x80(r30)
      lis       r5, 0x6B6F
      lis       r4, 0x6675
      lwz       r3, 0x3C(r30)
      addi      r6, r5, 0x3030
      addi      r5, r4, 0x7269
      bl        0x66DC
      stw       r31, 0x8(r1)
      lis       r3, 0x3030
      lis       r5, 0x50
      li        r8, 0xA
      lwz       r4, 0x38(r30)
      addi      r6, r3, 0x5F31
      lwz       r3, 0x3C(r30)
      addi      r5, r5, 0x7069
      addi      r7, r4, 0x24
      li        r9, 0
      li        r10, 0x1
      bl        -0x175BC
      stw       r31, 0x8(r1)
      lis       r3, 0x3031
      lis       r5, 0x50
      li        r8, 0xA
      lwz       r4, 0x38(r30)
      addi      r6, r3, 0x5F31
      lwz       r3, 0x3C(r30)
      addi      r5, r5, 0x7069
      addi      r7, r4, 0x5C
      li        r9, 0
      li        r10, 0x1
      bl        -0x175EC
      lwz       r3, 0x3C(r30)
      bl        -0x19DFC
      li        r0, 0
      mr        r3, r30
      stw       r0, 0x48(r30)
      lwz       r4, 0x48(r30)
      bl        .loc_0x490
      li        r3, 0x78
      bl        -0x2FFD74
      mr.       r0, r3
      beq-      .loc_0x338
      bl        -0x19DFC
      mr        r0, r3

    .loc_0x338:
      lis       r3, 0x735F
      stw       r0, 0x4C(r30)
      addi      r0, r3, 0x3030
      lis       r3, 0x696C
      stw       r0, 0xC(r1)
      li        r11, 0
      lis       r5, 0x6972
      lis       r4, 0x4E
      stw       r11, 0x8(r1)
      addi      r6, r3, 0x3030
      lis       r3, 0x685F
      addi      r0, r5, 0x3030
      stw       r6, 0x14(r1)
      addi      r8, r4, 0x3030
      addi      r10, r3, 0x3030
      li        r5, 0x2
      stw       r11, 0x10(r1)
      li        r7, 0
      li        r9, 0
      stw       r0, 0x1C(r1)
      stw       r11, 0x18(r1)
      lwz       r3, 0x4C(r30)
      lwz       r4, 0x3C(r30)
      bl        -0x1964C
      lwz       r5, 0x4C(r30)
      li        r0, 0x1
      lis       r4, 0x8051
      li        r3, 0x1C
      stb       r0, 0x2E(r5)
      addi      r4, r4, 0x3F18
      lfs       f0, 0x24(r4)
      lwz       r4, 0x4C(r30)
      stfs      f0, 0x74(r4)
      bl        -0x2FFE0C
      mr.       r0, r3
      beq-      .loc_0x3D4
      li        r4, 0x3
      bl        -0x1E868
      mr        r0, r3

    .loc_0x3D4:
      stw       r0, 0x58(r30)
      lis       r7, 0x6874
      lis       r6, 0x506C
      lfs       f1, -0x620(r2)
      lwz       r3, 0x58(r30)
      mr        r4, r31
      lwz       r5, 0x3C(r30)
      addi      r8, r7, 0x3030
      addi      r7, r6, 0x6967
      subi      r9, r2, 0x628
      bl        -0x1E104
      lis       r7, 0x6874
      lis       r6, 0x506C
      lwz       r3, 0x58(r30)
      mr        r4, r31
      lwz       r5, 0x3C(r30)
      addi      r8, r7, 0x3031
      lfs       f1, -0x620(r2)
      addi      r7, r6, 0x6967
      subi      r9, r2, 0x628
      bl        -0x1E12C
      lwz       r3, 0x58(r30)
      mr        r4, r31
      lwz       r5, 0x3C(r30)
      subi      r6, r2, 0x61C
      lfs       f1, -0x620(r2)
      bl        -0x1E398
      li        r3, 0x1C
      bl        -0x2FFE94
      mr.       r0, r3
      beq-      .loc_0x45C
      li        r4, 0x1
      bl        -0x1E8F0
      mr        r0, r3

    .loc_0x45C:
      stw       r0, 0x60(r30)
      lis       r3, 0x8049
      subi      r6, r3, 0xD5C
      lfs       f1, -0x620(r2)
      lwz       r3, 0x60(r30)
      mr        r4, r31
      lwz       r5, 0x40(r30)
      bl        -0x1E3D4
      lmw       r26, 0x28(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr

    .loc_0x490:
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void og::newScreen::ObjUfoMenu::commonUpdate(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80323D84
 * Size:	0000F4
 */
void og::newScreen::ObjUfoMenu::setSelectPikmin((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bne-      .loc_0x80
      lwz       r3, 0x68(r31)
      li        r4, 0xFF
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x6C(r31)
      li        r4, 0xFF
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x64(r31)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x70(r31)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      b         .loc_0xE0

    .loc_0x80:
      lwz       r3, 0x68(r31)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x6C(r31)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x64(r31)
      li        r4, 0xFF
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x70(r31)
      li        r4, 0xFF
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl

    .loc_0xE0:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80323E78
 * Size:	000524
 */
void og::newScreen::ObjUfoMenu::doUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      li        r30, 0
      stw       r29, 0x34(r1)
      mr        r29, r3
      bl        0x1301A8
      lwz       r4, 0x38(r29)
      mr        r31, r3
      lbz       r0, 0x88(r4)
      cmplwi    r0, 0
      beq-      .loc_0x254
      lbz       r0, 0x89(r4)
      cmplwi    r0, 0
      beq-      .loc_0x254
      lis       r3, 0x800
      lwz       r4, 0x1C(r31)
      addi      r0, r3, 0x8
      and.      r0, r4, r0
      beq-      .loc_0x150
      lwz       r3, 0x48(r29)
      cmpwi     r3, 0
      ble-      .loc_0x254
      subi      r0, r3, 0x1
      stw       r0, 0x48(r29)
      lwz       r0, 0x48(r29)
      lwz       r3, 0x4C(r29)
      rlwinm    r4,r0,0,16,31
      bl        -0x19390
      lwz       r0, 0x48(r29)
      cmpwi     r0, 0
      bne-      .loc_0xEC
      lwz       r3, 0x68(r29)
      li        r4, 0xFF
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x6C(r29)
      li        r4, 0xFF
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x64(r29)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x70(r29)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      b         .loc_0x254

    .loc_0xEC:
      lwz       r3, 0x68(r29)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x6C(r29)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x64(r29)
      li        r4, 0xFF
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x70(r29)
      li        r4, 0xFF
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      b         .loc_0x254

    .loc_0x150:
      lis       r3, 0x400
      addi      r0, r3, 0x4
      and.      r0, r4, r0
      beq-      .loc_0x254
      lwz       r3, 0x48(r29)
      cmpwi     r3, 0x1
      bge-      .loc_0x254
      addi      r0, r3, 0x1
      stw       r0, 0x48(r29)
      lwz       r0, 0x48(r29)
      lwz       r3, 0x4C(r29)
      rlwinm    r4,r0,0,16,31
      bl        -0x19498
      lwz       r0, 0x48(r29)
      cmpwi     r0, 0
      bne-      .loc_0x1F4
      lwz       r3, 0x68(r29)
      li        r4, 0xFF
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x6C(r29)
      li        r4, 0xFF
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x64(r29)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x70(r29)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      b         .loc_0x254

    .loc_0x1F4:
      lwz       r3, 0x68(r29)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x6C(r29)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x64(r29)
      li        r4, 0xFF
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x70(r29)
      li        r4, 0xFF
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl

    .loc_0x254:
      lwz       r3, 0x1C(r31)
      rlwinm.   r0,r3,0,23,23
      beq-      .loc_0x3D8
      lwz       r3, -0x6858(r13)
      bl        -0x175B8
      lwz       r0, 0x48(r29)
      li        r30, 0x1
      cmpwi     r0, 0
      bne-      .loc_0x324
      lwz       r4, 0x38(r29)
      li        r0, 0x1
      mr        r3, r29
      stw       r0, 0x10(r4)
      bl        0x12FEA8
      lis       r5, 0x804E
      lis       r4, 0x804E
      subi      r0, r5, 0x7B98
      li        r5, 0x2717
      stw       r0, 0x18(r1)
      subi      r6, r4, 0x7BA8
      li        r4, 0
      li        r0, 0x1
      stw       r3, 0x24(r1)
      mr        r3, r29
      stw       r6, 0x18(r1)
      stw       r5, 0x1C(r1)
      stb       r4, 0x20(r1)
      stb       r0, 0x21(r1)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      mr        r31, r3
      stb       r0, 0x21(r1)
      addi      r4, r1, 0x18
      bl        0x12DDD4
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x400
      mr        r3, r31
      li        r4, 0
      bl        0x12DDF0
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x400
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0xD80
      li        r4, 0x164
      subi      r5, r5, 0xD48
      crclr     6, 0x6
      bl        -0x2F9B54
      b         .loc_0x400

    .loc_0x324:
      cmpwi     r0, 0x1
      bne-      .loc_0x400
      lwz       r4, 0x38(r29)
      li        r0, 0x2
      mr        r3, r29
      stw       r0, 0x10(r4)
      bl        0x12FDF4
      lis       r5, 0x804E
      lis       r4, 0x804E
      subi      r0, r5, 0x7B98
      li        r5, 0x2718
      stw       r0, 0x8(r1)
      subi      r6, r4, 0x7BA8
      li        r4, 0
      li        r0, 0x1
      stw       r3, 0x14(r1)
      mr        r3, r29
      stw       r6, 0x8(r1)
      stw       r5, 0xC(r1)
      stb       r4, 0x10(r1)
      stb       r0, 0x11(r1)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      mr        r31, r3
      stb       r0, 0x11(r1)
      addi      r4, r1, 0x8
      bl        0x12DD20
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x400
      mr        r3, r31
      li        r4, 0
      bl        0x12DD3C
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x400
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0xD80
      li        r4, 0x174
      subi      r5, r5, 0xD48
      crclr     6, 0x6
      bl        -0x2F9C08
      b         .loc_0x400

    .loc_0x3D8:
      rlwinm.   r0,r3,0,22,22
      beq-      .loc_0x400
      lwz       r3, -0x6858(r13)
      bl        -0x17688
      lwz       r4, 0x38(r29)
      li        r0, 0
      mr        r3, r29
      stw       r0, 0x10(r4)
      bl        .loc_0x524
      li        r30, 0x1

    .loc_0x400:
      lwz       r3, 0x58(r29)
      bl        -0x1ED94
      lwz       r3, 0x60(r29)
      bl        -0x1ED9C
      lwz       r3, 0x7C(r29)
      lis       r4, 0x8051
      addi      r4, r4, 0x3F18
      lwz       r12, 0x0(r3)
      lfs       f1, 0xC(r4)
      lwz       r12, 0x10(r12)
      lfs       f2, 0x10(r4)
      mtctr     r12
      bctrl
      lis       r4, 0x8051
      lwz       r3, 0x7C(r29)
      addi      r4, r4, 0x3F18
      lfs       f0, 0x14(r4)
      stfs      f0, 0xCC(r3)
      stfs      f0, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x80(r29)
      lis       r4, 0x8051
      addi      r4, r4, 0x3F18
      lwz       r12, 0x0(r3)
      lfs       f1, 0x18(r4)
      lwz       r12, 0x10(r12)
      lfs       f2, 0x1C(r4)
      mtctr     r12
      bctrl
      lis       r4, 0x8051
      lwz       r3, 0x80(r29)
      addi      r4, r4, 0x3F18
      lfs       f0, 0x20(r4)
      stfs      f0, 0xCC(r3)
      stfs      f0, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      lfs       f2, 0x243C(r2)
      stb       r0, 0x88(r29)
      lfs       f1, -0x634(r2)
      lfs       f3, 0x54(r29)
      lfs       f0, 0x2440(r2)
      fadds     f2, f3, f2
      lwz       r3, 0x3C(r29)
      fadds     f0, f1, f0
      stfs      f2, 0x140(r3)
      stfs      f0, 0x144(r3)
      lwz       r3, 0x3C(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x4C(r29)
      bl        -0x19758
      lwz       r3, 0x40(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x44(r1)
      mr        r3, r30
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r29, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr

    .loc_0x524:
    */
}

/*
 * --INFO--
 * Address:	8032439C
 * Size:	000094
 */
void og::newScreen::ObjUfoMenu::setBackupScene(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lbz       r0, 0x50(r3)
      cmplwi    r0, 0
      bne-      .loc_0x7C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      mr        r31, r3
      bl        0x12DBEC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x74
      mr        r3, r31
      li        r4, 0
      bl        0x12DB78
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x74
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0xD80
      li        r4, 0x199
      subi      r5, r5, 0xD48
      crclr     6, 0x6
      bl        -0x2F9DCC

    .loc_0x74:
      li        r0, 0x1
      stb       r0, 0x50(r30)

    .loc_0x7C:
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
 * Address:	80324430
 * Size:	0000B4
 */
void og::newScreen::ObjUfoMenu::doDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r4
      addi      r31, r30, 0x190
      stw       r29, 0x14(r1)
      mr        r29, r3
      lbz       r0, 0x88(r3)
      cmplwi    r0, 0
      beq-      .loc_0x98
      lwz       r3, 0x3C(r29)
      mr        r5, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x9C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x7C(r29)
      lwz       r4, 0x74(r29)
      addi      r3, r3, 0x80
      addi      r4, r4, 0x50
      bl        -0x23A1BC
      lwz       r3, 0x80(r29)
      lwz       r4, 0x78(r29)
      addi      r3, r3, 0x80
      addi      r4, r4, 0x50
      bl        -0x23A1D0
      lwz       r3, 0x40(r29)
      mr        r4, r30
      mr        r5, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x9C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x4C(r29)
      mr        r4, r31
      bl        -0x19338

    .loc_0x98:
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
 * Address:	803244E4
 * Size:	000020
 */
void og::newScreen::ObjUfoMenu::doStart((Screen::StartSceneArg const*))
{
    /*
    .loc_0x0:
      lfs       f1, -0x634(r2)
      li        r0, 0
      lfs       f0, -0x638(r2)
      stfs      f1, 0x84(r3)
      stfs      f0, 0x54(r3)
      stb       r0, 0x88(r3)
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80324504
 * Size:	000008
 */
void og::newScreen::ObjUfoMenu::doEnd((Screen::EndSceneArg const*))
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	8032450C
 * Size:	000044
 */
void og::newScreen::ObjUfoMenu::doUpdateFadeinFinish(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0x48(r3)
      lwz       r3, 0x4C(r3)
      rlwinm    r4,r0,0,16,31
      bl        -0x19934
      lwz       r3, 0x4C(r31)
      lfs       f1, -0x614(r2)
      bl        -0x1A438
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80324550
 * Size:	00002C
 */
void og::newScreen::ObjUfoMenu::doUpdateFinish(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x634(r2)
      stw       r0, 0x14(r1)
      stfs      f0, 0x84(r3)
      lwz       r3, 0x4C(r3)
      bl        -0x1A3D4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8032457C
 * Size:	000024
 */
void og::newScreen::ObjUfoMenu::doUpdateFadeoutFinish(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x4C(r3)
      bl        -0x1A3F8
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803245A0
 * Size:	000188
 */
void og::newScreen::ObjUfoMenu::doUpdateFadein(void)
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
      lwz       r3, 0x58(r3)
      bl        -0x1F0D8
      lwz       r3, 0x60(r30)
      bl        -0x1F0E0
      lwz       r3, 0x7C(r30)
      lis       r4, 0x8051
      addi      r4, r4, 0x3F18
      lwz       r12, 0x0(r3)
      lfs       f1, 0xC(r4)
      lwz       r12, 0x10(r12)
      lfs       f2, 0x10(r4)
      mtctr     r12
      bctrl
      lis       r4, 0x8051
      lwz       r3, 0x7C(r30)
      addi      r4, r4, 0x3F18
      lfs       f0, 0x14(r4)
      stfs      f0, 0xCC(r3)
      stfs      f0, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x80(r30)
      lis       r4, 0x8051
      addi      r4, r4, 0x3F18
      lwz       r12, 0x0(r3)
      lfs       f1, 0x18(r4)
      lwz       r12, 0x10(r12)
      lfs       f2, 0x1C(r4)
      mtctr     r12
      bctrl
      lis       r4, 0x8051
      lwz       r3, 0x80(r30)
      addi      r4, r4, 0x3F18
      lfs       f0, 0x20(r4)
      stfs      f0, 0xCC(r3)
      stfs      f0, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      lfs       f2, 0x243C(r2)
      stb       r0, 0x88(r30)
      lfs       f1, -0x634(r2)
      lfs       f3, 0x54(r30)
      lfs       f0, 0x2440(r2)
      fadds     f2, f3, f2
      lwz       r3, 0x3C(r30)
      fadds     f0, f1, f0
      stfs      f2, 0x140(r3)
      stfs      f0, 0x144(r3)
      lwz       r3, 0x3C(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x4C(r30)
      bl        -0x19A9C
      lwz       r3, 0x40(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r4, -0x6514(r13)
      lis       r3, 0x8051
      lfs       f1, 0x84(r30)
      addi      r3, r3, 0x3F18
      lfs       f0, 0x54(r4)
      fadds     f0, f1, f0
      stfs      f0, 0x84(r30)
      lfs       f1, 0x84(r30)
      lfs       f2, 0x8(r3)
      fcmpo     cr0, f1, f2
      cror      2, 0x1, 0x2
      bne-      .loc_0x154
      li        r31, 0x1

    .loc_0x154:
      bl        -0x22058
      lfs       f2, -0x610(r2)
      mr        r3, r31
      lfs       f0, -0x638(r2)
      fsubs     f1, f2, f1
      fmuls     f0, f0, f1
      stfs      f0, 0x54(r30)
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
 * Address:	80324728
 * Size:	00017C
 */
void og::newScreen::ObjUfoMenu::doUpdateFadeout(void)
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
      lwz       r3, 0x58(r3)
      bl        -0x1F260
      lwz       r3, 0x60(r30)
      bl        -0x1F268
      lwz       r3, 0x7C(r30)
      lis       r4, 0x8051
      addi      r4, r4, 0x3F18
      lwz       r12, 0x0(r3)
      lfs       f1, 0xC(r4)
      lwz       r12, 0x10(r12)
      lfs       f2, 0x10(r4)
      mtctr     r12
      bctrl
      lis       r4, 0x8051
      lwz       r3, 0x7C(r30)
      addi      r4, r4, 0x3F18
      lfs       f0, 0x14(r4)
      stfs      f0, 0xCC(r3)
      stfs      f0, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x80(r30)
      lis       r4, 0x8051
      addi      r4, r4, 0x3F18
      lwz       r12, 0x0(r3)
      lfs       f1, 0x18(r4)
      lwz       r12, 0x10(r12)
      lfs       f2, 0x1C(r4)
      mtctr     r12
      bctrl
      lis       r4, 0x8051
      lwz       r3, 0x80(r30)
      addi      r4, r4, 0x3F18
      lfs       f0, 0x20(r4)
      stfs      f0, 0xCC(r3)
      stfs      f0, 0xD0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      lfs       f2, 0x243C(r2)
      stb       r0, 0x88(r30)
      lfs       f1, -0x634(r2)
      lfs       f3, 0x54(r30)
      lfs       f0, 0x2440(r2)
      fadds     f2, f3, f2
      lwz       r3, 0x3C(r30)
      fadds     f0, f1, f0
      stfs      f2, 0x140(r3)
      stfs      f0, 0x144(r3)
      lwz       r3, 0x3C(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x4C(r30)
      bl        -0x19C24
      lwz       r3, 0x40(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r4, -0x6514(r13)
      lis       r3, 0x8051
      lfs       f1, 0x84(r30)
      addi      r3, r3, 0x3F18
      lfs       f0, 0x54(r4)
      fadds     f0, f1, f0
      stfs      f0, 0x84(r30)
      lfs       f1, 0x84(r30)
      lfs       f2, 0x8(r3)
      fcmpo     cr0, f1, f2
      ble-      .loc_0x150
      li        r31, 0x1

    .loc_0x150:
      bl        -0x221DC
      lfs       f0, -0x60C(r2)
      mr        r3, r31
      fmuls     f0, f0, f1
      stfs      f0, 0x54(r30)
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
 * Address:	803248A4
 * Size:	000048
 */
void __sinit_ogObjUfo_cpp(void)
{
    /*
    .loc_0x0:
      lfs       f5, -0x620(r2)
      lis       r3, 0x8051
      lfs       f2, -0x634(r2)
      stfsu     f5, 0x3F18(r3)
      lfs       f1, -0x600(r2)
      lfs       f4, -0x608(r2)
      lfs       f3, -0x604(r2)
      lfs       f0, -0x5FC(r2)
      stfs      f4, 0x4(r3)
      stfs      f3, 0x8(r3)
      stfs      f2, 0xC(r3)
      stfs      f2, 0x10(r3)
      stfs      f1, 0x14(r3)
      stfs      f2, 0x18(r3)
      stfs      f2, 0x1C(r3)
      stfs      f1, 0x20(r3)
      stfs      f0, 0x24(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803248EC
 * Size:	000008
 */
void @24 @og::newScreen::ObjUfoMenu::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x18
      b         -0x10A8
    */
}
