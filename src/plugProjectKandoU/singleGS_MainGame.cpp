

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
 * Address:	802135AC
 * Size:	0008B0
 */
void Game::SingleGame::GameState::init((Game::SingleGameSection*,
                                        Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x140(r1)
      mflr      r0
      lis       r6, 0x8048
      stw       r0, 0x144(r1)
      li        r0, 0
      stmw      r27, 0x12C(r1)
      mr        r27, r3
      mr        r28, r4
      mr        r29, r5
      addi      r31, r6, 0x2150
      stw       r0, -0x69E8(r13)
      lwz       r3, -0x64AC(r13)
      bl        0x2192D4
      lwz       r4, -0x6C18(r13)
      li        r0, 0
      lbz       r3, 0x3C(r4)
      ori       r3, r3, 0x20
      stb       r3, 0x3C(r4)
      stb       r0, 0x10(r27)
      stb       r0, 0x19(r27)
      stb       r0, 0x20(r27)
      lwz       r4, 0x22C(r28)
      lwz       r3, -0x6B70(r13)
      lwz       r30, 0x48(r4)
      mr        r4, r30
      bl        -0x2C1A4
      lwz       r5, -0x6B70(r13)
      lbz       r0, 0x20(r5)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0xA4
      lwz       r3, -0x6D20(r13)
      li        r4, 0
      lwz       r3, 0xC8(r3)
      lfs       f0, 0x9D0(r3)
      stfs      f0, 0x24(r5)
      lwz       r3, -0x6D20(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      bl        -0xD1664

    .loc_0xA4:
      lwz       r5, -0x6B70(r13)
      lbz       r0, 0x20(r5)
      rlwinm.   r0,r0,31,31,31
      bne-      .loc_0xE0
      lwz       r3, -0x6D20(r13)
      li        r4, 0x1
      lwz       r3, 0xC8(r3)
      lfs       f0, 0x9D0(r3)
      stfs      f0, 0x28(r5)
      lwz       r3, -0x6D20(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      bl        -0xD16A0

    .loc_0xE0:
      cmplwi    r29, 0
      bne-      .loc_0xFC
      addi      r3, r31, 0x7C
      addi      r5, r31, 0x94
      li        r4, 0x270
      crclr     6, 0x6
      bl        -0x1E9064

    .loc_0xFC:
      lfs       f1, -0x43B8(r2)
      mr        r3, r28
      lhz       r29, 0x2(r29)
      li        r4, 0
      fmr       f2, f1
      bl        -0xC599C
      lwz       r3, -0x6560(r13)
      li        r0, 0
      lwz       r3, 0x18(r3)
      stb       r0, 0x91(r3)
      lwz       r3, -0x6560(r13)
      lwz       r3, 0x18(r3)
      stw       r30, 0x94(r3)
      lwz       r3, -0x6C18(r13)
      stb       r0, 0x48(r3)
      stw       r0, 0x248(r28)
      stb       r0, 0x194(r28)
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x20(r3)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0x160
      mr        r3, r28
      li        r4, 0
      bl        -0xC5DEC
      b         .loc_0x16C

    .loc_0x160:
      mr        r3, r28
      li        r4, 0x1
      bl        -0xC5DFC

    .loc_0x16C:
      mr        r3, r28
      bl        -0xC5994
      lwz       r3, 0x244(r28)
      cmplwi    r3, 0
      beq-      .loc_0x194
      lwz       r12, 0x0(r3)
      li        r4, 0
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x194:
      mr        r3, r28
      bl        -0xBEC20
      lwz       r3, -0x6D0C(r13)
      addi      r4, r31, 0xA0
      bl        -0xB4550
      lwz       r3, -0x64AC(r13)
      bl        0x2191A0
      cmpwi     r29, 0x2
      beq-      .loc_0x1DC
      bge-      .loc_0x1CC
      cmpwi     r29, 0
      beq-      .loc_0x4BC
      bge-      .loc_0x5E8
      b         .loc_0x6A8

    .loc_0x1CC:
      cmpwi     r29, 0x5
      beq-      .loc_0x208
      bge-      .loc_0x6A8
      b         .loc_0x5E8

    .loc_0x1DC:
      li        r0, 0x2
      mr        r3, r27
      sth       r0, 0x8(r1)
      mr        r4, r28
      addi      r6, r1, 0x8
      li        r5, 0x5
      lwz       r12, 0x0(r27)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x89C

    .loc_0x208:
      lwz       r4, 0x22C(r28)
      addi      r3, r31, 0x1C
      lwz       r5, 0xC8(r28)
      li        r0, 0
      lwz       r6, 0x14(r4)
      li        r4, 0x1F
      lfs       f0, -0x43B8(r2)
      stw       r3, 0xE8(r1)
      lwz       r3, -0x6B70(r13)
      stw       r6, 0xEC(r1)
      stw       r5, 0xF4(r1)
      stfs      f0, 0x100(r1)
      stfs      f0, 0x104(r1)
      stfs      f0, 0x108(r1)
      stfs      f0, 0x10C(r1)
      stw       r0, 0x110(r1)
      stw       r0, 0xF8(r1)
      stw       r0, 0xF0(r1)
      stw       r0, 0x114(r1)
      stw       r0, 0xFC(r1)
      stw       r0, 0x118(r1)
      bl        -0x2C464
      lwz       r3, -0x6E20(r13)
      cmplwi    r3, 0
      beq-      .loc_0x270
      addi      r3, r3, 0x4

    .loc_0x270:
      li        r0, 0
      stw       r3, 0x44(r1)
      addi      r3, r1, 0x3C
      stw       r0, 0x48(r1)
      stw       r0, 0x3C(r1)
      stw       r0, 0x40(r1)
      bl        -0x1053A4
      b         .loc_0x2B4

    .loc_0x290:
      lwz       r12, 0x0(r3)
      lwz       r4, 0x40(r1)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      li        r4, 0
      bl        -0xD7E04
      addi      r3, r1, 0x3C
      bl        -0x10596C

    .loc_0x2B4:
      lwz       r3, 0x3C(r1)
      cmplwi    r3, 0
      bne+      .loc_0x290
      li        r0, 0
      lwz       r3, -0x6D0C(r13)
      lis       r4, 0x804B
      stw       r0, 0x38(r1)
      subi      r4, r4, 0x4364
      cmplwi    r0, 0
      stw       r4, 0x2C(r1)
      stw       r0, 0x30(r1)
      stw       r3, 0x34(r1)
      bne-      .loc_0x300
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x30(r1)
      b         .loc_0x464

    .loc_0x300:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x30(r1)
      b         .loc_0x36C

    .loc_0x318:
      lwz       r3, 0x34(r1)
      lwz       r4, 0x30(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x38(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x464
      lwz       r3, 0x34(r1)
      lwz       r4, 0x30(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x30(r1)

    .loc_0x36C:
      lwz       r12, 0x2C(r1)
      addi      r3, r1, 0x2C
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x318
      b         .loc_0x464

    .loc_0x38C:
      lwz       r3, 0x34(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      li        r4, 0
      bl        -0xD7F00
      lwz       r0, 0x38(r1)
      cmplwi    r0, 0
      bne-      .loc_0x3D4
      lwz       r3, 0x34(r1)
      lwz       r4, 0x30(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x30(r1)
      b         .loc_0x464

    .loc_0x3D4:
      lwz       r3, 0x34(r1)
      lwz       r4, 0x30(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x30(r1)
      b         .loc_0x448

    .loc_0x3F4:
      lwz       r3, 0x34(r1)
      lwz       r4, 0x30(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x38(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x464
      lwz       r3, 0x34(r1)
      lwz       r4, 0x30(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x30(r1)

    .loc_0x448:
      lwz       r12, 0x2C(r1)
      addi      r3, r1, 0x2C
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x3F4

    .loc_0x464:
      lwz       r3, 0x34(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x30(r1)
      cmplw     r4, r3
      bne+      .loc_0x38C
      lwz       r0, 0xCC(r28)
      addi      r4, r1, 0xE8
      lwz       r3, -0x64AC(r13)
      stw       r0, 0xF8(r1)
      bl        0x218F90
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x40(r3)
      bl        -0xEC970
      lwz       r3, 0x244(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      b         .loc_0x6BC

    .loc_0x4BC:
      lwz       r4, 0x22C(r28)
      lwz       r3, -0x6B70(r13)
      lwz       r4, 0x48(r4)
      addi      r30, r4, 0x1F
      mr        r4, r30
      bl        -0x2C69C
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x578
      lwz       r3, -0x6B70(r13)
      mr        r4, r30
      bl        -0x2C6EC
      lwz       r11, 0x22C(r28)
      addi      r5, r1, 0x1C
      lwz       r6, 0x6C(r31)
      li        r0, 0
      lwz       r9, 0x70(r31)
      addi      r4, r1, 0xB4
      lwz       r8, 0x74(r31)
      lwz       r7, 0x78(r31)
      lwz       r3, 0x48(r11)
      stw       r6, 0x1C(r1)
      rlwinm    r6,r3,2,0,29
      lwz       r10, 0xC8(r28)
      lwz       r11, 0x14(r11)
      lfs       f0, -0x43B8(r2)
      stw       r9, 0x20(r1)
      lwz       r3, -0x64AC(r13)
      stw       r8, 0x24(r1)
      stw       r7, 0x28(r1)
      lwzx      r5, r5, r6
      stw       r11, 0xB8(r1)
      stw       r5, 0xB4(r1)
      stw       r10, 0xC0(r1)
      stfs      f0, 0xCC(r1)
      stfs      f0, 0xD0(r1)
      stfs      f0, 0xD4(r1)
      stfs      f0, 0xD8(r1)
      stw       r0, 0xDC(r1)
      stw       r0, 0xC4(r1)
      stw       r0, 0xBC(r1)
      stw       r0, 0xE0(r1)
      stw       r0, 0xC8(r1)
      stw       r0, 0xE4(r1)
      lwz       r0, 0xCC(r28)
      stw       r0, 0xC4(r1)
      bl        0x218EB4
      b         .loc_0x5D8

    .loc_0x578:
      lwz       r4, 0x22C(r28)
      addi      r3, r31, 0xB0
      lwz       r5, 0xC8(r28)
      li        r0, 0
      lwz       r6, 0x14(r4)
      addi      r4, r1, 0x80
      lfs       f0, -0x43B8(r2)
      stw       r3, 0x80(r1)
      lwz       r3, -0x64AC(r13)
      stw       r6, 0x84(r1)
      stw       r5, 0x8C(r1)
      stfs      f0, 0x98(r1)
      stfs      f0, 0x9C(r1)
      stfs      f0, 0xA0(r1)
      stfs      f0, 0xA4(r1)
      stw       r0, 0xA8(r1)
      stw       r0, 0x90(r1)
      stw       r0, 0x88(r1)
      stw       r0, 0xAC(r1)
      stw       r0, 0x94(r1)
      stw       r0, 0xB0(r1)
      lwz       r0, 0xCC(r28)
      stw       r0, 0x90(r1)
      bl        0x218E50

    .loc_0x5D8:
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x40(r3)
      bl        -0xECAB0
      b         .loc_0x6BC

    .loc_0x5E8:
      lwz       r4, 0x22C(r28)
      addi      r3, r31, 0xC0
      lwz       r5, 0xC8(r28)
      li        r0, 0
      lwz       r6, 0x14(r4)
      addi      r4, r1, 0x4C
      lfs       f0, -0x43B8(r2)
      stw       r3, 0x4C(r1)
      lwz       r3, -0x64AC(r13)
      stw       r6, 0x50(r1)
      stw       r5, 0x58(r1)
      stfs      f0, 0x64(r1)
      stfs      f0, 0x68(r1)
      stfs      f0, 0x6C(r1)
      stfs      f0, 0x70(r1)
      stw       r0, 0x74(r1)
      stw       r0, 0x5C(r1)
      stw       r0, 0x54(r1)
      stw       r0, 0x78(r1)
      stw       r0, 0x60(r1)
      stw       r0, 0x7C(r1)
      lwz       r0, 0xCC(r28)
      stw       r0, 0x5C(r1)
      bl        0x218DE0
      li        r30, 0

    .loc_0x64C:
      lwz       r3, -0x6B70(r13)
      mr        r4, r30
      bl        -0x2CB28
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x67C
      lwz       r3, -0x6CD0(r13)
      mr        r4, r30
      bl        -0x98178
      cmplwi    r3, 0
      beq-      .loc_0x67C
      li        r4, 0x3
      bl        -0x9C9A8

    .loc_0x67C:
      addi      r30, r30, 0x1
      cmpwi     r30, 0x3
      blt+      .loc_0x64C
      cmplwi    r29, 0x1
      bne-      .loc_0x6BC
      lwz       r3, -0x6C18(r13)
      lwz       r4, -0x6B70(r13)
      lwz       r3, 0x40(r3)
      lfs       f1, 0x68(r4)
      bl        -0xECBAC
      b         .loc_0x6BC

    .loc_0x6A8:
      addi      r3, r31, 0x7C
      addi      r5, r31, 0xD0
      li        r4, 0x340
      crclr     6, 0x6
      bl        -0x1E9624

    .loc_0x6BC:
      lwz       r3, -0x6514(r13)
      li        r4, 0x1
      bl        0x20F6F8
      lwz       r3, -0x6C18(r13)
      cmplwi    r29, 0x3
      lwz       r3, 0x40(r3)
      lwz       r0, 0x240(r3)
      rlwinm    r0,r0,0,0,30
      stw       r0, 0x240(r3)
      beq-      .loc_0x748
      li        r29, 0
      li        r30, 0

    .loc_0x6EC:
      lwz       r3, -0x6B70(r13)
      mr        r4, r30
      bl        -0x2CC80
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x728
      mr        r3, r30
      bl        -0x42D74
      cmpwi     r3, 0
      bne-      .loc_0x728
      lwz       r3, -0x6B70(r13)
      mr        r4, r30
      addi      r3, r3, 0xA8
      bl        -0x22718
      li        r29, 0x1
      b         .loc_0x734

    .loc_0x728:
      addi      r30, r30, 0x1
      cmpwi     r30, 0x2
      ble+      .loc_0x6EC

    .loc_0x734:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0x750
      li        r0, 0x1
      stb       r0, 0x10(r27)
      b         .loc_0x750

    .loc_0x748:
      li        r0, 0
      stb       r0, 0x10(r27)

    .loc_0x750:
      li        r0, 0
      lfs       f0, -0x43B4(r2)
      stb       r0, 0x11(r27)
      mr        r3, r28
      stfs      f0, 0x14(r27)
      bl        -0xBFD78
      li        r0, 0
      stb       r0, 0x18(r27)
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      rlwinm    r0,r0,0,31,29
      stb       r0, 0x3C(r3)
      lwz       r3, -0x6560(r13)
      bl        0x1E82DC
      li        r0, 0
      lis       r3, 0x8051
      stb       r0, 0x23D(r28)
      addi      r4, r3, 0x41E4
      lfs       f1, -0x43B0(r2)
      addi      r5, r1, 0x10
      lwz       r3, -0x6A50(r13)
      addi      r6, r1, 0xC
      bl        0xAA20
      cmpwi     r3, 0
      bne-      .loc_0x7C0
      li        r0, 0x1
      stb       r0, 0x23E(r28)
      b         .loc_0x7C8

    .loc_0x7C0:
      li        r0, 0
      stb       r0, 0x23E(r28)

    .loc_0x7C8:
      lwz       r0, -0x6A50(r13)
      cmplwi    r0, 0
      beq-      .loc_0x89C
      bl        0xA8B0
      cmpwi     r3, 0
      bne-      .loc_0x89C
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x800
      addi      r3, r31, 0xF0
      addi      r5, r31, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1E9768

    .loc_0x800:
      lwz       r27, -0x6780(r13)
      cmplwi    r27, 0
      bne-      .loc_0x820
      addi      r3, r31, 0xF0
      addi      r5, r31, 0x94
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x1E9788

    .loc_0x820:
      lwz       r0, 0x4(r27)
      cmplwi    r0, 0
      bne-      .loc_0x840
      addi      r3, r31, 0xFC
      addi      r5, r31, 0x94
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x1E97A8

    .loc_0x840:
      lwz       r3, 0x4(r27)
      lwz       r27, 0x4(r3)
      cmplwi    r27, 0
      bne-      .loc_0x864
      addi      r3, r31, 0xFC
      addi      r5, r31, 0x108
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x1E97CC

    .loc_0x864:
      lwz       r12, 0x0(r27)
      mr        r3, r27
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x894
      addi      r3, r31, 0x12C
      addi      r5, r31, 0x94
      li        r4, 0x177
      crclr     6, 0x6
      bl        -0x1E97FC

    .loc_0x894:
      mr        r3, r27
      bl        0x255CC4

    .loc_0x89C:
      lmw       r27, 0x12C(r1)
      lwz       r0, 0x144(r1)
      mtlr      r0
      addi      r1, r1, 0x140
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000174
 */
void Game::SingleGame::GameState::gameStart((Game::SingleGameSection*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80213E5C
 * Size:	000288
 */
void Game::SingleGame::GameState::check_DemoInout((Game::SingleGameSection*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xB0(r1)
      mflr      r0
      lis       r5, 0x8048
      stw       r0, 0xB4(r1)
      stw       r31, 0xAC(r1)
      mr        r31, r4
      li        r4, 0xD
      stw       r30, 0xA8(r1)
      addi      r30, r5, 0x2150
      lwz       r3, -0x6B70(r13)
      bl        -0x2CAA4
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xD0
      lwz       r3, -0x6B70(r13)
      li        r4, 0x3
      addi      r3, r3, 0xA8
      bl        -0x228EC
      cmpwi     r3, 0
      ble-      .loc_0xD0
      lwz       r3, -0x6B70(r13)
      li        r4, 0xD
      bl        -0x2CB0C
      lwz       r4, 0x22C(r31)
      addi      r3, r30, 0x140
      lwz       r5, 0xC8(r31)
      li        r0, 0
      lwz       r4, 0x14(r4)
      lfs       f0, -0x43B8(r2)
      stw       r3, 0x70(r1)
      lwz       r3, -0x6CD0(r13)
      stw       r4, 0x74(r1)
      stw       r5, 0x7C(r1)
      stfs      f0, 0x88(r1)
      stfs      f0, 0x8C(r1)
      stfs      f0, 0x90(r1)
      stfs      f0, 0x94(r1)
      stw       r0, 0x98(r1)
      stw       r0, 0x80(r1)
      stw       r0, 0x78(r1)
      stw       r0, 0x9C(r1)
      stw       r0, 0x84(r1)
      stw       r0, 0xA0(r1)
      lwz       r3, 0xB0(r3)
      cmplwi    r3, 0
      beq-      .loc_0xBC
      li        r4, 0
      bl        -0xD84C4

    .loc_0xBC:
      lwz       r3, -0x64AC(r13)
      addi      r4, r1, 0x70
      bl        0x218AB0
      li        r3, 0x1
      b         .loc_0x270

    .loc_0xD0:
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      rlwinm.   r0,r0,0,26,26
      beq-      .loc_0x190
      lwz       r3, -0x6B70(r13)
      li        r4, 0xE
      bl        -0x2CB64
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x190
      lwz       r3, -0x6B70(r13)
      li        r4, 0x4
      addi      r3, r3, 0xA8
      bl        -0x229AC
      cmpwi     r3, 0
      ble-      .loc_0x190
      lwz       r3, -0x6B70(r13)
      li        r4, 0xE
      bl        -0x2CBCC
      lwz       r4, 0x22C(r31)
      addi      r3, r30, 0x150
      lwz       r5, 0xC8(r31)
      li        r0, 0
      lwz       r4, 0x14(r4)
      lfs       f0, -0x43B8(r2)
      stw       r3, 0x3C(r1)
      lwz       r3, -0x6CD0(r13)
      stw       r4, 0x40(r1)
      stw       r5, 0x48(r1)
      stfs      f0, 0x54(r1)
      stfs      f0, 0x58(r1)
      stfs      f0, 0x5C(r1)
      stfs      f0, 0x60(r1)
      stw       r0, 0x64(r1)
      stw       r0, 0x4C(r1)
      stw       r0, 0x44(r1)
      stw       r0, 0x68(r1)
      stw       r0, 0x50(r1)
      stw       r0, 0x6C(r1)
      lwz       r3, 0xB0(r3)
      cmplwi    r3, 0
      beq-      .loc_0x17C
      li        r4, 0
      bl        -0xD8584

    .loc_0x17C:
      lwz       r3, -0x64AC(r13)
      addi      r4, r1, 0x3C
      bl        0x2189F0
      li        r3, 0x1
      b         .loc_0x270

    .loc_0x190:
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      rlwinm.   r0,r0,0,26,26
      beq-      .loc_0x26C
      lwz       r3, -0x6B70(r13)
      li        r4, 0xF
      bl        -0x2CC24
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x26C
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1
      addi      r3, r3, 0xA8
      bl        -0x22A6C
      cmpwi     r3, 0
      ble-      .loc_0x26C
      lwz       r3, -0x6B70(r13)
      li        r4, 0xF
      bl        -0x2CC8C
      lwz       r4, 0x22C(r31)
      addi      r3, r30, 0x160
      lwz       r5, 0xC8(r31)
      li        r0, 0
      lwz       r6, 0x14(r4)
      li        r4, 0x1
      lfs       f0, -0x43B8(r2)
      stw       r3, 0x8(r1)
      lwz       r3, -0x6CD0(r13)
      stw       r6, 0xC(r1)
      stw       r5, 0x14(r1)
      stfs      f0, 0x20(r1)
      stfs      f0, 0x24(r1)
      stfs      f0, 0x28(r1)
      stfs      f0, 0x2C(r1)
      stw       r0, 0x30(r1)
      stw       r0, 0x18(r1)
      stw       r0, 0x10(r1)
      stw       r0, 0x34(r1)
      stw       r0, 0x1C(r1)
      stw       r0, 0x38(r1)
      bl        -0x985EC
      cmplwi    r3, 0
      beq-      .loc_0x240
      li        r4, 0
      bl        -0xD8648

    .loc_0x240:
      lwz       r3, -0x6CD0(r13)
      lwz       r3, 0xB0(r3)
      cmplwi    r3, 0
      beq-      .loc_0x258
      li        r4, 0
      bl        -0xD8660

    .loc_0x258:
      lwz       r3, -0x64AC(r13)
      addi      r4, r1, 0x8
      bl        0x218914
      li        r3, 0x1
      b         .loc_0x270

    .loc_0x26C:
      li        r3, 0

    .loc_0x270:
      lwz       r0, 0xB4(r1)
      lwz       r31, 0xAC(r1)
      lwz       r30, 0xA8(r1)
      mtlr      r0
      addi      r1, r1, 0xB0
      blr
    */
}

/*
 * --INFO--
 * Address:	802140E4
 * Size:	00000C
 */
void Game::SingleGame::GameState::on_section_fadeout((Game::SingleGameSection*))
{
    /*
    .loc_0x0:
      li        r0, 0x1
      stb       r0, 0x18(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802140F0
 * Size:	000B28
 */
void Game::SingleGame::GameState::on_demo_timer((Game::SingleGameSection*,
                                                 unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x1D0(r1)
      mflr      r0
      lis       r3, 0x8048
      stw       r0, 0x1D4(r1)
      stw       r31, 0x1CC(r1)
      addi      r31, r3, 0x2150
      stw       r30, 0x1C8(r1)
      mr        r30, r4
      stw       r29, 0x1C4(r1)
      mr        r29, r5
      cmplwi    r29, 0x7
      stw       r28, 0x1C0(r1)
      bne-      .loc_0x2E4
      lwz       r3, -0x6B20(r13)
      li        r28, 0
      cmplwi    r3, 0
      beq-      .loc_0x48
      addi      r3, r3, 0x30

    .loc_0x48:
      li        r0, 0
      lis       r4, 0x804B
      addi      r4, r4, 0x560
      stw       r0, 0x7C(r1)
      cmplwi    r0, 0
      stw       r4, 0x70(r1)
      stw       r0, 0x74(r1)
      stw       r3, 0x78(r1)
      bne-      .loc_0x84
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x74(r1)
      b         .loc_0x1F0

    .loc_0x84:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x74(r1)
      b         .loc_0xF0

    .loc_0x9C:
      lwz       r3, 0x78(r1)
      lwz       r4, 0x74(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x7C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1F0
      lwz       r3, 0x78(r1)
      lwz       r4, 0x74(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x74(r1)

    .loc_0xF0:
      lwz       r12, 0x70(r1)
      addi      r3, r1, 0x70
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x9C
      b         .loc_0x1F0

    .loc_0x110:
      lwz       r3, 0x78(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x1E8(r3)
      cmpwi     r0, 0xF
      bne-      .loc_0x134
      mr        r28, r3

    .loc_0x134:
      lwz       r0, 0x7C(r1)
      cmplwi    r0, 0
      bne-      .loc_0x160
      lwz       r3, 0x78(r1)
      lwz       r4, 0x74(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x74(r1)
      b         .loc_0x1F0

    .loc_0x160:
      lwz       r3, 0x78(r1)
      lwz       r4, 0x74(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x74(r1)
      b         .loc_0x1D4

    .loc_0x180:
      lwz       r3, 0x78(r1)
      lwz       r4, 0x74(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x7C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1F0
      lwz       r3, 0x78(r1)
      lwz       r4, 0x74(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x74(r1)

    .loc_0x1D4:
      lwz       r12, 0x70(r1)
      addi      r3, r1, 0x70
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x180

    .loc_0x1F0:
      lwz       r3, 0x78(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x74(r1)
      cmplw     r4, r3
      bne+      .loc_0x110
      cmplwi    r28, 0
      bne-      .loc_0x22C
      addi      r3, r31, 0x7C
      addi      r5, r31, 0x170
      li        r4, 0x401
      crclr     6, 0x6
      bl        -0x1E9CD8

    .loc_0x22C:
      lfs       f0, -0x43B8(r2)
      li        r0, 0
      addi      r5, r31, 0x184
      stw       r0, 0x188(r1)
      mr        r4, r28
      addi      r3, r1, 0x44
      stw       r5, 0x184(r1)
      stw       r0, 0x190(r1)
      stfs      f0, 0x19C(r1)
      stfs      f0, 0x1A0(r1)
      stfs      f0, 0x1A4(r1)
      stfs      f0, 0x1A8(r1)
      stw       r0, 0x1AC(r1)
      stw       r0, 0x194(r1)
      stw       r0, 0x18C(r1)
      stw       r0, 0x1B0(r1)
      stw       r0, 0x198(r1)
      stw       r0, 0x1B4(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x44(r1)
      mr        r3, r28
      lfs       f1, 0x48(r1)
      lfs       f0, 0x4C(r1)
      stfs      f2, 0x19C(r1)
      stfs      f1, 0x1A0(r1)
      stfs      f0, 0x1A4(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x1A8(r1)
      addi      r4, r1, 0x184
      lwz       r3, -0x64AC(r13)
      stw       r28, 0x194(r3)
      lwz       r3, -0x64AC(r13)
      bl        0x21861C
      lwz       r3, -0x6C18(r13)
      li        r4, 0x7
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl

    .loc_0x2E4:
      cmplwi    r29, 0x5
      bne-      .loc_0x3F4
      lwz       r3, -0x6D20(r13)
      bl        -0xB97C0
      mr.       r28, r3
      bne-      .loc_0x330
      lwz       r3, -0x6C18(r13)
      li        r4, 0x1
      lwz       r3, 0x58(r3)
      lwz       r0, 0xE4(r3)
      cmpwi     r0, 0
      bne-      .loc_0x318
      li        r4, 0

    .loc_0x318:
      lwz       r3, -0x6D20(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      mr        r28, r3

    .loc_0x330:
      lwz       r3, -0x6B70(r13)
      li        r4, 0x2E
      bl        -0x2D084
      lfs       f0, -0x43B8(r2)
      li        r0, 0
      addi      r5, r31, 0x194
      stw       r0, 0x154(r1)
      mr        r4, r28
      addi      r3, r1, 0x38
      stw       r5, 0x150(r1)
      stw       r0, 0x15C(r1)
      stfs      f0, 0x168(r1)
      stfs      f0, 0x16C(r1)
      stfs      f0, 0x170(r1)
      stfs      f0, 0x174(r1)
      stw       r0, 0x178(r1)
      stw       r0, 0x160(r1)
      stw       r0, 0x158(r1)
      stw       r0, 0x17C(r1)
      stw       r0, 0x164(r1)
      stw       r0, 0x180(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x38(r1)
      mr        r3, r28
      lfs       f1, 0x3C(r1)
      lfs       f0, 0x40(r1)
      stfs      f2, 0x168(r1)
      stfs      f1, 0x16C(r1)
      stfs      f0, 0x170(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x174(r1)
      addi      r4, r1, 0x150
      lwz       r3, -0x64AC(r13)
      stw       r28, 0x194(r3)
      lwz       r3, -0x64AC(r13)
      bl        0x21850C
      lwz       r3, -0x6C18(r13)
      li        r4, 0x5
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl

    .loc_0x3F4:
      cmplwi    r29, 0x4
      bne-      .loc_0x6CC
      lwz       r3, -0x6D20(r13)
      bl        -0xB98D0
      mr.       r28, r3
      bne-      .loc_0x440
      lwz       r3, -0x6C18(r13)
      li        r4, 0x1
      lwz       r3, 0x58(r3)
      lwz       r0, 0xE4(r3)
      cmpwi     r0, 0
      bne-      .loc_0x428
      li        r4, 0

    .loc_0x428:
      lwz       r3, -0x6D20(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      mr        r28, r3

    .loc_0x440:
      li        r0, 0
      lwz       r3, -0x6D0C(r13)
      lis       r4, 0x804B
      stw       r0, 0x6C(r1)
      subi      r4, r4, 0x4364
      cmplwi    r0, 0
      stw       r4, 0x60(r1)
      stw       r0, 0x64(r1)
      stw       r3, 0x68(r1)
      bne-      .loc_0x480
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x64(r1)
      b         .loc_0x5E4

    .loc_0x480:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x64(r1)
      b         .loc_0x4EC

    .loc_0x498:
      lwz       r3, 0x68(r1)
      lwz       r4, 0x64(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x6C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x5E4
      lwz       r3, 0x68(r1)
      lwz       r4, 0x64(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x64(r1)

    .loc_0x4EC:
      lwz       r12, 0x60(r1)
      addi      r3, r1, 0x60
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x498
      b         .loc_0x5E4

    .loc_0x50C:
      lwz       r3, 0x68(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      li        r4, 0
      bl        -0xD8BC4
      lwz       r0, 0x6C(r1)
      cmplwi    r0, 0
      bne-      .loc_0x554
      lwz       r3, 0x68(r1)
      lwz       r4, 0x64(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x64(r1)
      b         .loc_0x5E4

    .loc_0x554:
      lwz       r3, 0x68(r1)
      lwz       r4, 0x64(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x64(r1)
      b         .loc_0x5C8

    .loc_0x574:
      lwz       r3, 0x68(r1)
      lwz       r4, 0x64(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x6C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x5E4
      lwz       r3, 0x68(r1)
      lwz       r4, 0x64(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x64(r1)

    .loc_0x5C8:
      lwz       r12, 0x60(r1)
      addi      r3, r1, 0x60
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x574

    .loc_0x5E4:
      lwz       r3, 0x68(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x64(r1)
      cmplw     r4, r3
      bne+      .loc_0x50C
      lwz       r3, -0x6B70(r13)
      li        r4, 0x23
      bl        -0x2D358
      lwz       r5, 0xC8(r30)
      li        r0, 0
      lfs       f0, -0x43B8(r2)
      addi      r3, r31, 0x1A0
      stw       r3, 0x11C(r1)
      mr        r4, r28
      addi      r3, r1, 0x2C
      stw       r0, 0x120(r1)
      stw       r5, 0x128(r1)
      stfs      f0, 0x134(r1)
      stfs      f0, 0x138(r1)
      stfs      f0, 0x13C(r1)
      stfs      f0, 0x140(r1)
      stw       r0, 0x144(r1)
      stw       r0, 0x12C(r1)
      stw       r0, 0x124(r1)
      stw       r0, 0x148(r1)
      stw       r0, 0x130(r1)
      stw       r0, 0x14C(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x2C(r1)
      mr        r3, r28
      lfs       f1, 0x30(r1)
      lfs       f0, 0x34(r1)
      stfs      f2, 0x134(r1)
      stfs      f1, 0x138(r1)
      stfs      f0, 0x13C(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x140(r1)
      addi      r4, r1, 0x11C
      lwz       r3, -0x64AC(r13)
      stw       r28, 0x194(r3)
      lwz       r3, -0x64AC(r13)
      bl        0x218234
      lwz       r3, -0x6C18(r13)
      li        r4, 0x4
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl

    .loc_0x6CC:
      cmplwi    r29, 0x3
      bne-      .loc_0x7D4
      lwz       r3, -0x6D20(r13)
      bl        -0xB9BA8
      mr.       r28, r3
      bne-      .loc_0x718
      lwz       r3, -0x6C18(r13)
      li        r4, 0x1
      lwz       r3, 0x58(r3)
      lwz       r0, 0xE4(r3)
      cmpwi     r0, 0
      bne-      .loc_0x700
      li        r4, 0

    .loc_0x700:
      lwz       r3, -0x6D20(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      mr        r28, r3

    .loc_0x718:
      lwz       r5, 0xC8(r30)
      li        r0, 0
      lfs       f0, -0x43B8(r2)
      addi      r3, r31, 0x1B8
      stw       r3, 0xE8(r1)
      mr        r4, r28
      addi      r3, r1, 0x20
      stw       r0, 0xEC(r1)
      stw       r5, 0xF4(r1)
      stfs      f0, 0x100(r1)
      stfs      f0, 0x104(r1)
      stfs      f0, 0x108(r1)
      stfs      f0, 0x10C(r1)
      stw       r0, 0x110(r1)
      stw       r0, 0xF8(r1)
      stw       r0, 0xF0(r1)
      stw       r0, 0x114(r1)
      stw       r0, 0xFC(r1)
      stw       r0, 0x118(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x20(r1)
      mr        r3, r28
      lfs       f1, 0x24(r1)
      lfs       f0, 0x28(r1)
      stfs      f2, 0x100(r1)
      stfs      f1, 0x104(r1)
      stfs      f0, 0x108(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x10C(r1)
      addi      r4, r1, 0xE8
      lwz       r3, -0x64AC(r13)
      bl        0x218134
      lwz       r3, -0x6B70(r13)
      li        r4, 0x25
      bl        -0x2D504
      mr        r3, r30
      li        r4, 0x3
      lwz       r12, 0x0(r30)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl

    .loc_0x7D4:
      cmplwi    r29, 0x1
      bne-      .loc_0x9E4
      lwz       r3, -0x6B70(r13)
      li        r4, 0
      bl        -0x2D4F4
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x9C8
      lwz       r3, -0x6B90(r13)
      li        r28, 0
      cmplwi    r3, 0
      beq-      .loc_0x804
      addi      r3, r3, 0x30

    .loc_0x804:
      li        r0, 0
      lis       r4, 0x804B
      addi      r4, r4, 0x5A4
      stw       r0, 0x5C(r1)
      cmplwi    r0, 0
      stw       r4, 0x50(r1)
      stw       r0, 0x54(r1)
      stw       r3, 0x58(r1)
      bne-      .loc_0x840
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x54(r1)
      b         .loc_0x8E8

    .loc_0x840:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x54(r1)
      b         .loc_0x8AC

    .loc_0x858:
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
      bne-      .loc_0x8E8
      lwz       r3, 0x58(r1)
      lwz       r4, 0x54(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x54(r1)

    .loc_0x8AC:
      lwz       r12, 0x50(r1)
      addi      r3, r1, 0x50
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x858
      b         .loc_0x8E8

    .loc_0x8CC:
      lwz       r3, 0x58(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r28, r3
      b         .loc_0x908

    .loc_0x8E8:
      lwz       r3, 0x58(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x54(r1)
      cmplw     r4, r3
      bne+      .loc_0x8CC

    .loc_0x908:
      cmplwi    r28, 0
      bne-      .loc_0x924
      addi      r3, r31, 0x7C
      addi      r5, r31, 0x94
      li        r4, 0x472
      crclr     6, 0x6
      bl        -0x1EA3D0

    .loc_0x924:
      lwz       r5, 0xC8(r30)
      li        r0, 0
      lfs       f0, -0x43B8(r2)
      addi      r3, r31, 0x1C4
      stw       r3, 0xB4(r1)
      mr        r4, r28
      addi      r3, r1, 0x14
      stw       r0, 0xB8(r1)
      stw       r5, 0xC0(r1)
      stfs      f0, 0xCC(r1)
      stfs      f0, 0xD0(r1)
      stfs      f0, 0xD4(r1)
      stfs      f0, 0xD8(r1)
      stw       r0, 0xDC(r1)
      stw       r0, 0xC4(r1)
      stw       r0, 0xBC(r1)
      stw       r0, 0xE0(r1)
      stw       r0, 0xC8(r1)
      stw       r0, 0xE4(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x14(r1)
      mr        r3, r28
      lfs       f1, 0x18(r1)
      lfs       f0, 0x1C(r1)
      stfs      f2, 0xCC(r1)
      stfs      f1, 0xD0(r1)
      stfs      f0, 0xD4(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0xD8(r1)
      addi      r4, r1, 0xB4
      lwz       r3, -0x64AC(r13)
      bl        0x217F28
      lwz       r3, -0x6B70(r13)
      li        r4, 0
      bl        -0x2D710

    .loc_0x9C8:
      mr        r3, r30
      li        r4, 0x1
      lwz       r12, 0x0(r30)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      b         .loc_0xB08

    .loc_0x9E4:
      cmplwi    r29, 0x2
      bne-      .loc_0xB08
      lwz       r3, -0x6B70(r13)
      li        r4, 0x13
      bl        -0x2D704
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xAF0
      lwz       r3, -0x6D20(r13)
      bl        -0xB9ED4
      cmplwi    r3, 0
      beq-      .loc_0xB08
      lwz       r4, 0x22C(r30)
      addi      r3, r31, 0x1D0
      lwz       r5, 0xC8(r30)
      li        r0, 0
      lwz       r6, 0x14(r4)
      li        r4, 0
      lfs       f0, -0x43B8(r2)
      stw       r3, 0x80(r1)
      lwz       r3, -0x6D20(r13)
      stw       r6, 0x84(r1)
      stw       r5, 0x8C(r1)
      stfs      f0, 0x98(r1)
      stfs      f0, 0x9C(r1)
      stfs      f0, 0xA0(r1)
      stfs      f0, 0xA4(r1)
      stw       r0, 0xA8(r1)
      stw       r0, 0x90(r1)
      stw       r0, 0x88(r1)
      stw       r0, 0xAC(r1)
      stw       r0, 0x94(r1)
      stw       r0, 0xB0(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      mr.       r28, r3
      bne-      .loc_0xA88
      lwz       r3, -0x6D20(r13)
      bl        -0xB9F50
      mr        r28, r3

    .loc_0xA88:
      mr        r4, r28
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r28)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      mr        r3, r28
      lfs       f1, 0xC(r1)
      lfs       f0, 0x10(r1)
      stfs      f2, 0x98(r1)
      stfs      f1, 0x9C(r1)
      stfs      f0, 0xA0(r1)
      lwz       r12, 0x0(r28)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0xA4(r1)
      addi      r4, r1, 0x80
      lwz       r3, -0x64AC(r13)
      bl        0x217E08
      lwz       r3, -0x6B70(r13)
      li        r4, 0x13
      bl        -0x2D830
      b         .loc_0xAF0
      b         .loc_0xB08

    .loc_0xAF0:
      mr        r3, r30
      li        r4, 0x2
      lwz       r12, 0x0(r30)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl

    .loc_0xB08:
      lwz       r0, 0x1D4(r1)
      lwz       r31, 0x1CC(r1)
      lwz       r30, 0x1C8(r1)
      lwz       r29, 0x1C4(r1)
      lwz       r28, 0x1C0(r1)
      mtlr      r0
      addi      r1, r1, 0x1D0
      blr
    */
}

/*
 * --INFO--
 * Address:	80214C18
 * Size:	0006E0
 */
void Game::SingleGame::GameState::exec((Game::SingleGameSection*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x140(r1)
      mflr      r0
      stw       r0, 0x144(r1)
      stw       r31, 0x13C(r1)
      stw       r30, 0x138(r1)
      mr        r30, r4
      stw       r29, 0x134(r1)
      mr        r29, r3
      lis       r3, 0x8048
      lbz       r0, 0x18(r29)
      addi      r31, r3, 0x2150
      cmplwi    r0, 0
      bne-      .loc_0x6C4
      lbz       r0, 0x20(r29)
      cmplwi    r0, 0
      beq-      .loc_0xA0
      lwz       r3, -0x65F8(r13)
      bl        0x1A4954
      lwz       r3, -0x6560(r13)
      bl        0x1E73C8
      lwz       r3, -0x6560(r13)
      bl        0x1E9AE0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x6C4
      li        r7, 0
      li        r3, 0x1
      li        r0, 0x64
      stb       r3, 0x18(r1)
      mr        r3, r29
      mr        r4, r30
      stb       r7, 0x19(r1)
      addi      r6, r1, 0x18
      li        r5, 0x2
      stb       r7, 0x1A(r1)
      sth       r0, 0x1C(r1)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x6C4

    .loc_0xA0:
      mr        r3, r30
      bl        -0xC9440
      lwz       r3, 0x250(r30)
      lwz       r0, 0x4(r29)
      lwz       r3, 0x4(r3)
      cmpw      r3, r0
      bne-      .loc_0x6C4
      mr        r3, r30
      bl        -0xBF7EC
      li        r3, -0x1
      bl        -0x43E80
      cmpwi     r3, 0xF
      blt-      .loc_0x134
      lwz       r3, -0x64AC(r13)
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0
      bne-      .loc_0x134
      lwz       r3, -0x6B70(r13)
      li        r4, 0x30
      bl        -0x2D924
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x134
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1
      bl        -0x2DC40
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x134
      lwz       r3, -0x6B70(r13)
      li        r4, 0x30
      bl        -0x2D988
      mr        r3, r30
      lfs       f1, -0x43AC(r2)
      lwz       r12, 0x0(r30)
      li        r4, 0x7
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl

    .loc_0x134:
      lwz       r3, -0x64AC(r13)
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0
      bne-      .loc_0x15C
      mr        r3, r29
      bl        0x24FC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x15C
      mr        r3, r29
      bl        0x2560

    .loc_0x15C:
      mr        r3, r29
      bl        0x2698
      cmpwi     r3, 0x3
      beq-      .loc_0x190
      bge-      .loc_0x180
      cmpwi     r3, 0x1
      beq-      .loc_0x6C4
      bge-      .loc_0x250
      b         .loc_0x26C

    .loc_0x180:
      cmpwi     r3, 0x5
      bge-      .loc_0x26C
      b         .loc_0x1F0
      b         .loc_0x6C4

    .loc_0x190:
      lwz       r3, -0x6D0C(r13)
      li        r4, 0
      bl        -0xB50FC
      lwz       r4, 0x22C(r30)
      mr        r3, r30
      bl        -0xC762C
      mr        r3, r30
      bl        -0xC76D8
      lwz       r3, -0x6C18(r13)
      addi      r5, r31, 0x1E0
      li        r4, 0
      li        r6, 0x3
      bl        -0x5FE44
      li        r0, 0
      mr        r3, r29
      stb       r0, 0xC(r1)
      mr        r4, r30
      addi      r6, r1, 0xC
      li        r5, 0xB
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x6C4

    .loc_0x1F0:
      lwz       r3, -0x6D0C(r13)
      li        r4, 0
      bl        -0xB515C
      lwz       r4, 0x22C(r30)
      mr        r3, r30
      bl        -0xC768C
      mr        r3, r30
      bl        -0xC7738
      lwz       r3, -0x6C18(r13)
      addi      r5, r31, 0x1E0
      li        r4, 0
      li        r6, 0x3
      bl        -0x5FEA4
      li        r0, 0x2
      mr        r3, r29
      stb       r0, 0x8(r1)
      mr        r4, r30
      addi      r6, r1, 0x8
      li        r5, 0xB
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x6C4

    .loc_0x250:
      bl        0x256CE0
      lwz       r3, -0x6C18(r13)
      addi      r5, r31, 0x1E0
      li        r4, 0
      li        r6, 0x3
      bl        -0x5FEE8
      b         .loc_0x6C4

    .loc_0x26C:
      lbz       r0, 0x180(r30)
      cmplwi    r0, 0
      beq-      .loc_0x288
      mr        r3, r30
      bl        -0xC0778
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x6C4

    .loc_0x288:
      lwz       r3, -0x6560(r13)
      lwz       r4, 0x10C(r30)
      bl        0x1E71D0
      lwz       r3, -0x6560(r13)
      bl        0x1E8080
      cmpwi     r3, 0x2
      beq-      .loc_0x2F0
      bge-      .loc_0x2B8
      cmpwi     r3, 0
      beq-      .loc_0x49C
      bge-      .loc_0x2C8
      b         .loc_0x414

    .loc_0x2B8:
      cmpwi     r3, 0x4
      beq-      .loc_0x3FC
      bge-      .loc_0x414
      b         .loc_0x350

    .loc_0x2C8:
      lwz       r3, -0x6C18(r13)
      li        r4, 0
      subi      r5, r2, 0x43A8
      bl        -0x5FF68
      lwz       r3, -0x6C18(r13)
      li        r4, 0
      subi      r5, r2, 0x43A8
      li        r6, 0x3
      bl        -0x5FF6C
      b         .loc_0x49C

    .loc_0x2F0:
      lwz       r3, -0x6C18(r13)
      li        r4, 0
      subi      r5, r2, 0x43A0
      lbz       r0, 0x3C(r3)
      rlwinm    r0,r0,0,27,25
      stb       r0, 0x3C(r3)
      lwz       r3, -0x6C18(r13)
      bl        -0x5FFA0
      lwz       r3, -0x6C18(r13)
      li        r4, 0
      subi      r5, r2, 0x43A0
      li        r6, 0x3
      bl        -0x5FFA4
      li        r0, 0
      mr        r3, r29
      sth       r0, 0x14(r1)
      mr        r4, r30
      addi      r6, r1, 0x14
      li        r5, 0x5
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x6C4

    .loc_0x350:
      lwz       r3, -0x6560(r13)
      lwz       r3, 0x18(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,24,31
      cmplwi    r0, 0x1
      beq-      .loc_0x388
      addi      r3, r31, 0x7C
      addi      r5, r31, 0x94
      li        r4, 0x518
      crclr     6, 0x6
      bl        -0x1EA95C

    .loc_0x388:
      lwz       r3, -0x6B70(r13)
      li        r0, 0
      stb       r0, 0x20(r3)
      lwz       r3, -0x6D20(r13)
      bl        -0xB9DC0
      lwz       r3, -0x6C18(r13)
      li        r4, 0
      subi      r5, r2, 0x4398
      lbz       r0, 0x3C(r3)
      rlwinm    r0,r0,0,27,25
      stb       r0, 0x3C(r3)
      lwz       r3, -0x6C18(r13)
      bl        -0x6004C
      lwz       r3, -0x6C18(r13)
      li        r4, 0
      subi      r5, r2, 0x4398
      li        r6, 0x3
      bl        -0x60050
      mr        r3, r30
      bl        -0xC5248
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x6C4

    .loc_0x3FC:
      addi      r3, r31, 0x7C
      addi      r5, r31, 0x1EC
      li        r4, 0x526
      crclr     6, 0x6
      bl        -0x1EA9E4
      b         .loc_0x49C

    .loc_0x414:
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      rlwinm.   r0,r0,0,28,28
      bne-      .loc_0x49C
      lwz       r4, -0x64AC(r13)
      lwz       r0, 0x18(r4)
      cmpwi     r0, 0
      bne-      .loc_0x49C
      bl        -0x60084
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x49C
      lwz       r3, 0x10C(r30)
      lwz       r0, 0x1C(r3)
      rlwinm.   r0,r0,0,19,19
      beq-      .loc_0x49C
      addi      r3, r1, 0x60
      bl        .loc_0x6E0
      mr        r3, r30
      addi      r4, r1, 0x60
      bl        -0xC00A0
      lwz       r3, -0x6560(r13)
      addi      r4, r1, 0x60
      bl        0x1E7C4C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x49C
      lwz       r3, -0x6C18(r13)
      li        r4, 0x1
      subi      r5, r2, 0x4390
      li        r6, 0x3
      bl        -0x6010C
      lwz       r3, -0x6C18(r13)
      li        r4, 0x1
      subi      r5, r2, 0x4390
      bl        -0x6012C

    .loc_0x49C:
      lwz       r3, -0x6C18(r13)
      bl        -0x600F8
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x51C
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      rlwinm.   r0,r0,0,28,28
      bne-      .loc_0x51C
      lwz       r3, 0x40(r3)
      bl        -0xEDD40
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x51C
      lbz       r0, 0x180(r30)
      cmplwi    r0, 0
      bne-      .loc_0x51C
      lwz       r4, -0x6C18(r13)
      lbz       r3, 0x3C(r4)
      rlwinm.   r0,r3,0,26,26
      beq-      .loc_0x51C
      rlwinm    r3,r3,0,27,25
      li        r0, 0
      stb       r3, 0x3C(r4)
      mr        r3, r29
      mr        r4, r30
      addi      r6, r1, 0x10
      sth       r0, 0x10(r1)
      li        r5, 0x5
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x6C4

    .loc_0x51C:
      lbz       r0, 0x10(r29)
      cmplwi    r0, 0
      bne-      .loc_0x660
      lwz       r3, -0x64AC(r13)
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0
      bne-      .loc_0x660
      li        r3, -0x1
      bl        -0x44218
      mr        r29, r3
      li        r3, -0x1
      bl        -0x44274
      sub.      r0, r29, r3
      bne-      .loc_0x660
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1
      bl        -0x2E09C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x660
      lwz       r5, -0x6C18(r13)
      addi      r4, r31, 0x1FC
      lfs       f0, -0x43B8(r2)
      li        r0, 0
      lbz       r3, 0x3C(r5)
      rlwinm    r3,r3,0,27,25
      stb       r3, 0x3C(r5)
      lwz       r5, 0xC8(r30)
      lwz       r3, -0x6D20(r13)
      stw       r4, 0x2C(r1)
      stw       r0, 0x30(r1)
      stw       r5, 0x38(r1)
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
      bl        -0xBA5B8
      mr.       r29, r3
      bne-      .loc_0x600
      lwz       r3, -0x6C18(r13)
      li        r4, 0x1
      lwz       r3, 0x58(r3)
      lwz       r0, 0xE4(r3)
      cmpwi     r0, 0
      bne-      .loc_0x5E8
      li        r4, 0

    .loc_0x5E8:
      lwz       r3, -0x6D20(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      mr        r29, r3

    .loc_0x600:
      lwz       r0, 0xCC(r30)
      mr        r4, r29
      addi      r3, r1, 0x20
      stw       r0, 0x3C(r1)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x20(r1)
      mr        r3, r29
      lfs       f1, 0x24(r1)
      lfs       f0, 0x28(r1)
      stfs      f2, 0x44(r1)
      stfs      f1, 0x48(r1)
      stfs      f0, 0x4C(r1)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x50(r1)
      addi      r4, r1, 0x2C
      lwz       r3, -0x64AC(r13)
      bl        0x217760
      b         .loc_0x6C4

    .loc_0x660:
      bl        0x243B18
      mr        r0, r3
      li        r3, -0x1
      mr        r29, r0
      bl        -0x44478
      cmpwi     r3, 0xA
      bge-      .loc_0x6A8
      lwz       r0, -0x69E8(r13)
      cmpwi     r0, 0
      ble-      .loc_0x6A8
      cmplwi    r29, 0
      beq-      .loc_0x6C4
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      b         .loc_0x6C4

    .loc_0x6A8:
      cmplwi    r29, 0
      beq-      .loc_0x6C4
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x6C4:
      lwz       r0, 0x144(r1)
      lwz       r31, 0x13C(r1)
      lwz       r30, 0x138(r1)
      lwz       r29, 0x134(r1)
      mtlr      r0
      addi      r1, r1, 0x140
      blr

    .loc_0x6E0:
    */
}

/*
 * --INFO--
 * Address:	802152F8
 * Size:	0001DC
 */
void og::Screen::DispMemberSMenuAll::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      lis       r4, 0x804B
      addi      r5, r4, 0x1148
      lis       r9, 0x804C
      stmw      r24, 0x10(r1)
      addi      r0, r9, 0x58C
      lis       r8, 0x804C
      lis       r7, 0x804C
      addi      r26, r8, 0x574
      lis       r6, 0x804C
      addi      r12, r7, 0x55C
      li        r4, 0
      addi      r10, r6, 0x544
      li        r25, 0x4D2
      li        r24, 0x9A5
      li        r11, 0x56
      li        r9, 0x6F
      li        r8, 0x16
      li        r7, 0x14D
      li        r6, 0x2C
      stw       r5, 0x0(r3)
      stw       r4, 0x4(r3)
      stw       r0, 0x0(r3)
      li        r0, 0x1
      stw       r5, 0x8(r3)
      stw       r4, 0xC(r3)
      stw       r26, 0x8(r3)
      stw       r25, 0x10(r3)
      stw       r24, 0x14(r3)
      stw       r0, 0x18(r3)
      stw       r5, 0x1C(r3)
      stw       r4, 0x20(r3)
      stw       r12, 0x1C(r3)
      stw       r0, 0x30(r3)
      stw       r11, 0x24(r3)
      stw       r24, 0x28(r3)
      stb       r0, 0x2C(r3)
      stb       r4, 0x2D(r3)
      stw       r5, 0x34(r3)
      stw       r4, 0x38(r3)
      stw       r10, 0x34(r3)
      stw       r9, 0x3C(r3)
      stw       r8, 0x40(r3)
      stw       r7, 0x44(r3)
      stw       r6, 0x48(r3)
      stb       r4, 0x4C(r3)
      stb       r4, 0x4D(r3)
      stb       r4, 0x4E(r3)
      stb       r4, 0x4F(r3)
      stb       r4, 0x50(r3)
      stb       r4, 0x51(r3)
      stb       r4, 0x52(r3)
      stb       r4, 0x53(r3)
      stb       r4, 0x54(r3)
      stb       r4, 0x55(r3)
      stb       r4, 0x56(r3)
      stb       r4, 0x57(r3)
      stb       r4, 0x58(r3)
      lis       r12, 0x804C
      lis       r11, 0x75
      lis       r10, 0xA
      stb       r4, 0x59(r3)
      lis       r9, 0x1
      lis       r8, 0x745F
      lis       r7, 0x804C
      stw       r5, 0x5C(r3)
      lis       r6, 0x804C
      addi      r12, r12, 0x52C
      subi      r24, r11, 0x344F
      stw       r4, 0x60(r3)
      subi      r25, r10, 0x40F
      subi      r26, r9, 0x2BCF
      li        r27, 0x10E1
      stw       r12, 0x5C(r3)
      li        r28, 0x141
      li        r29, 0xA
      li        r30, 0x14
      stw       r0, 0x64(r3)
      li        r31, 0x1E
      li        r12, 0x28
      li        r11, 0x32
      stw       r24, 0x68(r3)
      li        r10, 0x3C
      li        r9, 0x46
      addi      r8, r8, 0x3031
      stw       r25, 0x6C(r3)
      addi      r7, r7, 0x514
      addi      r6, r6, 0x4FC
      stw       r26, 0x70(r3)
      stw       r27, 0x74(r3)
      stw       r28, 0x78(r3)
      stw       r29, 0x7C(r3)
      stw       r30, 0x80(r3)
      stw       r31, 0x84(r3)
      stw       r12, 0x88(r3)
      stw       r11, 0x8C(r3)
      stw       r10, 0x90(r3)
      stw       r9, 0x94(r3)
      stb       r4, 0xA5(r3)
      stb       r4, 0xA6(r3)
      stw       r4, 0x98(r3)
      stw       r8, 0x9C(r3)
      stb       r0, 0xA0(r3)
      stb       r0, 0xA1(r3)
      stb       r0, 0xA2(r3)
      stb       r0, 0xA3(r3)
      stb       r0, 0xA4(r3)
      stw       r5, 0xA8(r3)
      stw       r4, 0xAC(r3)
      stw       r7, 0xA8(r3)
      stw       r0, 0xB0(r3)
      stw       r5, 0xB4(r3)
      stw       r4, 0xB8(r3)
      stw       r6, 0xB4(r3)
      stw       r4, 0xBC(r3)
      stb       r4, 0xC0(r3)
      lmw       r24, 0x10(r1)
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	802154D4
 * Size:	0000D4
 */
void Game::SingleGame::GameState::onOrimaDown((Game::SingleGameSection*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      lis       r3, 0x8048
      lfs       f0, -0x43B8(r2)
      stw       r0, 0x54(r1)
      li        r0, 0
      stw       r31, 0x4C(r1)
      mr        r31, r5
      addi      r5, r3, 0x235C
      stw       r30, 0x48(r1)
      mr        r30, r4
      lwz       r6, 0xC8(r4)
      mr        r4, r31
      lwz       r3, -0x6D20(r13)
      stw       r0, 0xC(r1)
      stw       r5, 0x8(r1)
      stw       r6, 0x14(r1)
      stfs      f0, 0x20(r1)
      stfs      f0, 0x24(r1)
      stfs      f0, 0x28(r1)
      stfs      f0, 0x2C(r1)
      stw       r31, 0x30(r1)
      stw       r0, 0x18(r1)
      stw       r0, 0x10(r1)
      stw       r0, 0x34(r1)
      stw       r0, 0x1C(r1)
      stw       r0, 0x38(r1)
      lwz       r0, 0xCC(r30)
      stw       r0, 0x18(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r4, -0x64AC(r13)
      cmpwi     r31, 0
      stw       r3, 0x18C(r4)
      bne-      .loc_0xA4
      lwz       r0, 0x104(r30)
      lwz       r3, -0x64AC(r13)
      stw       r0, 0x190(r3)
      b         .loc_0xB0

    .loc_0xA4:
      lwz       r0, 0x108(r30)
      lwz       r3, -0x64AC(r13)
      stw       r0, 0x190(r3)

    .loc_0xB0:
      lwz       r3, -0x64AC(r13)
      addi      r4, r1, 0x8
      bl        0x217444
      lwz       r0, 0x54(r1)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	802155A8
 * Size:	0000DC
 */
void Game::SingleGame::GameState::onHoleIn((Game::SingleGameSection*,
                                            Game::ItemCave::Item*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      lis       r3, 0x8048
      lfs       f0, -0x43B8(r2)
      stw       r0, 0x54(r1)
      addi      r6, r3, 0x236C
      li        r0, 0
      addi      r3, r1, 0x8
      stw       r31, 0x4C(r1)
      mr        r31, r5
      lwz       r7, 0xC8(r4)
      stw       r0, 0x18(r1)
      stw       r6, 0x14(r1)
      stw       r7, 0x20(r1)
      stfs      f0, 0x2C(r1)
      stfs      f0, 0x30(r1)
      stfs      f0, 0x34(r1)
      stfs      f0, 0x38(r1)
      stw       r0, 0x3C(r1)
      stw       r0, 0x24(r1)
      stw       r0, 0x1C(r1)
      stw       r0, 0x40(r1)
      stw       r0, 0x28(r1)
      stw       r0, 0x44(r1)
      lwz       r0, 0xCC(r4)
      mr        r4, r31
      stw       r0, 0x24(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      mr        r3, r31
      lfs       f1, 0xC(r1)
      lfs       f0, 0x10(r1)
      stfs      f2, 0x2C(r1)
      stfs      f1, 0x30(r1)
      stfs      f0, 0x34(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x38(r1)
      addi      r4, r1, 0x14
      lwz       r3, -0x64AC(r13)
      stw       r31, 0x194(r3)
      lwz       r0, 0x1F0(r31)
      lwz       r3, -0x64AC(r13)
      stw       r0, 0x3C(r1)
      bl        0x217364
      lwz       r0, 0x54(r1)
      lwz       r31, 0x4C(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	80215684
 * Size:	000004
 */
void Game::SingleGame::GameState::onMovieCommand((Game::SingleGameSection*,
                                                  int))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80215688
 * Size:	000158
 */
void Game::SingleGame::GameState::onMovieStart((Game::SingleGameSection*,
                                                Game::MovieConfig*,
                                                unsigned long, unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lis       r6, 0x8048
      stw       r0, 0x44(r1)
      stmw      r27, 0x2C(r1)
      mr        r27, r4
      mr        r28, r5
      mr        r29, r7
      addi      r31, r6, 0x2150
      lwz       r3, -0x6560(r13)
      bl        0x1E819C
      lwz       r3, -0x6560(r13)
      bl        0x1E824C
      mr        r3, r28
      addi      r4, r31, 0xC0
      bl        0x21C208
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x50
      mr        r3, r27
      bl        -0xC41A0

    .loc_0x50:
      mr        r3, r28
      addi      r4, r31, 0x1FC
      bl        0x21C1EC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x70
      lwz       r3, -0x6560(r13)
      li        r4, 0x4
      bl        0x1E8258

    .loc_0x70:
      mr        r3, r28
      addi      r4, r31, 0x20C
      bl        0x21C1CC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xD4
      cmplwi    r29, 0
      bne-      .loc_0xA0
      mr        r3, r27
      li        r30, 0x1
      li        r4, 0
      bl        -0xC7E08
      b         .loc_0xC8

    .loc_0xA0:
      lwz       r3, -0x6B70(r13)
      li        r4, 0x2
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0xB8
      li        r4, 0x3

    .loc_0xB8:
      mr        r30, r4
      mr        r3, r27
      li        r4, 0x1
      bl        -0xC7E34

    .loc_0xC8:
      lwz       r3, -0x6560(r13)
      mr        r4, r30
      bl        0x1E81F4

    .loc_0xD4:
      mr        r3, r28
      addi      r4, r31, 0x21C
      bl        0x21C168
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x144
      subis     r0, r29, 0x795F
      li        r4, 0
      cmplwi    r0, 0x3034
      bne-      .loc_0xFC
      li        r4, 0x1

    .loc_0xFC:
      mr        r3, r27
      bl        -0xC1AC0
      lwz       r4, 0x184(r27)
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      mr        r3, r27
      lfs       f1, 0xC(r1)
      addi      r4, r1, 0x14
      lfs       f0, 0x10(r1)
      li        r5, 0
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      bl        -0xC7698

    .loc_0x144:
      lmw       r27, 0x2C(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	802157E0
 * Size:	001A7C
 */
void Game::SingleGame::GameState::onMovieDone((Game::SingleGameSection*,
                                               Game::MovieConfig*,
                                               unsigned long, unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x580(r1)
      mflr      r0
      lis       r6, 0x8048
      stw       r0, 0x584(r1)
      stmw      r25, 0x564(r1)
      mr        r26, r3
      mr        r27, r4
      mr        r28, r5
      mr        r29, r7
      addi      r30, r6, 0x2150
      bl        .loc_0x1A7C
      mr        r31, r3
      mr        r3, r28
      addi      r4, r30, 0x228
      bl        0x21C0B4
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xD4
      lwz       r3, -0x6B70(r13)
      li        r4, 0
      bl        -0x2D5CC
      lwz       r3, -0x6B70(r13)
      li        r4, 0
      bl        -0x2D5D8
      cmpwi     r3, 0x1
      bne-      .loc_0xD4
      lwz       r3, -0x6B70(r13)
      li        r4, 0
      bl        -0x2BE8C
      cmpwi     r3, 0
      bne-      .loc_0xD4
      lwz       r4, 0x22C(r27)
      addi      r3, r30, 0x23C
      lwz       r5, 0xC8(r27)
      li        r0, 0
      lwz       r6, 0x14(r4)
      addi      r4, r1, 0x1F8
      lfs       f0, -0x43B8(r2)
      stw       r3, 0x1F8(r1)
      lwz       r3, -0x64AC(r13)
      stw       r6, 0x1FC(r1)
      stw       r5, 0x204(r1)
      stfs      f0, 0x210(r1)
      stfs      f0, 0x214(r1)
      stfs      f0, 0x218(r1)
      stfs      f0, 0x21C(r1)
      stw       r0, 0x220(r1)
      stw       r0, 0x208(r1)
      stw       r0, 0x200(r1)
      stw       r0, 0x224(r1)
      stw       r0, 0x20C(r1)
      stw       r0, 0x228(r1)
      bl        0x217124
      b         .loc_0x1A68

    .loc_0xD4:
      mr        r3, r28
      addi      r4, r30, 0x23C
      bl        0x21C010
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x114
      li        r0, 0
      mr        r3, r26
      sth       r0, 0x14(r1)
      mr        r4, r27
      addi      r6, r1, 0x14
      li        r5, 0x5
      lwz       r12, 0x0(r26)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1A68

    .loc_0x114:
      mr        r3, r28
      addi      r4, r30, 0x250
      bl        0x21BFD0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x39C
      lwz       r3, -0x6B70(r13)
      li        r4, 0x12
      bl        -0x2E530
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1BC
      lwz       r3, -0x6B70(r13)
      li        r4, 0xA
      addi      r3, r3, 0x48
      bl        -0x2F958
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1BC
      lwz       r3, -0x6B70(r13)
      li        r4, 0x12
      bl        -0x2E598
      lwz       r4, 0x22C(r27)
      addi      r3, r30, 0x264
      lwz       r5, 0xC8(r27)
      li        r0, 0
      lwz       r6, 0x14(r4)
      addi      r4, r1, 0x1C4
      lfs       f0, -0x43B8(r2)
      stw       r3, 0x1C4(r1)
      lwz       r3, -0x64AC(r13)
      stw       r6, 0x1C8(r1)
      stw       r5, 0x1D0(r1)
      stfs      f0, 0x1DC(r1)
      stfs      f0, 0x1E0(r1)
      stfs      f0, 0x1E4(r1)
      stfs      f0, 0x1E8(r1)
      stw       r0, 0x1EC(r1)
      stw       r0, 0x1D4(r1)
      stw       r0, 0x1CC(r1)
      stw       r0, 0x1F0(r1)
      stw       r0, 0x1D8(r1)
      stw       r0, 0x1F4(r1)
      bl        0x21703C
      b         .loc_0x1A68

    .loc_0x1BC:
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x1E0
      lwz       r3, -0x6B70(r13)
      bl        -0x2CB4C
      cmpwi     r3, 0x9
      bne-      .loc_0x1E0
      mr        r3, r26
      bl        0x1918
      b         .loc_0x1A68

    .loc_0x1E0:
      mr        r3, r26
      mr        r4, r27
      bl        -0x1B6C
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1A68
      lbz       r0, 0x10(r26)
      cmplwi    r0, 0
      beq-      .loc_0x25C
      lwz       r4, 0x22C(r27)
      addi      r3, r30, 0x270
      lwz       r5, 0xC8(r27)
      li        r0, 0
      lwz       r6, 0x14(r4)
      addi      r4, r1, 0x190
      lfs       f0, -0x43B8(r2)
      stw       r3, 0x190(r1)
      lwz       r3, -0x64AC(r13)
      stw       r6, 0x194(r1)
      stw       r5, 0x19C(r1)
      stfs      f0, 0x1A8(r1)
      stfs      f0, 0x1AC(r1)
      stfs      f0, 0x1B0(r1)
      stfs      f0, 0x1B4(r1)
      stw       r0, 0x1B8(r1)
      stw       r0, 0x1A0(r1)
      stw       r0, 0x198(r1)
      stw       r0, 0x1BC(r1)
      stw       r0, 0x1A4(r1)
      stw       r0, 0x1C0(r1)
      bl        0x216F9C
      b         .loc_0x1A68

    .loc_0x25C:
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      ori       r0, r0, 0x2
      stb       r0, 0x3C(r3)
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x40(r3)
      lwz       r0, 0x218(r3)
      cmplwi    r0, 0
      beq-      .loc_0x2E0
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x2A0
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EB43C

    .loc_0x2A0:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0x2C4
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EB460

    .loc_0x2C4:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x39C

    .loc_0x2E0:
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x300
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EB49C

    .loc_0x300:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0x324
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EB4C0

    .loc_0x324:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x54(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x35C
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EB4F8

    .loc_0x35C:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0x380
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EB51C

    .loc_0x380:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      bl        0x12B134

    .loc_0x39C:
      mr        r3, r28
      addi      r4, r30, 0x284
      bl        0x21BD48
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x3E0
      lwz       r3, -0x6B70(r13)
      li        r4, 0
      bl        -0x2E7B8
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x3E0
      mr        r3, r27
      lfs       f1, -0x4388(r2)
      lwz       r12, 0x0(r27)
      li        r4, 0x1
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl

    .loc_0x3E0:
      mr        r3, r28
      addi      r4, r30, 0x264
      bl        0x21BD04
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x444
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x418
      lwz       r3, -0x6B70(r13)
      bl        -0x2CD84
      cmpwi     r3, 0x9
      bne-      .loc_0x418
      mr        r3, r26
      bl        0x16E0
      b         .loc_0x1A68

    .loc_0x418:
      li        r0, 0
      mr        r3, r26
      sth       r0, 0x10(r1)
      mr        r4, r27
      addi      r6, r1, 0x10
      li        r5, 0x5
      lwz       r12, 0x0(r26)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1A68

    .loc_0x444:
      mr        r3, r28
      addi      r4, r30, 0x1C
      bl        0x21BCA0
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x46C
      mr        r3, r28
      addi      r4, r30, 0x250
      bl        0x21BC8C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x6DC

    .loc_0x46C:
      mr        r3, r28
      addi      r4, r30, 0x1C
      bl        0x21BC78
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x498
      lwz       r3, 0x244(r27)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x498:
      lis       r3, 0x804B
      li        r12, 0
      addi      r31, r3, 0x1148
      li        r8, 0x1
      lfs       f3, -0x4384(r2)
      lis       r5, 0x804B
      li        r6, 0xA
      lfs       f2, -0x4380(r2)
      lfs       f1, -0x437C(r2)
      li        r7, 0x2
      lfs       f4, -0x43B8(r2)
      lis       r4, 0x804B
      lfs       f0, -0x4378(r2)
      lis       r3, 0x804B
      li        r10, 0x4D2
      li        r9, 0x32
      stw       r31, 0x4D4(r1)
      addi      r11, r5, 0x10DC
      addi      r5, r4, 0x10C4
      addi      r0, r3, 0x10AC
      stw       r31, 0x53C(r1)
      addi      r4, r1, 0x4D4
      lwz       r3, -0x6560(r13)
      stw       r31, 0x54C(r1)
      stw       r12, 0x4D8(r1)
      stw       r11, 0x4D4(r1)
      stfs      f4, 0x4DC(r1)
      stw       r12, 0x4E0(r1)
      stw       r12, 0x4E8(r1)
      stw       r10, 0x4E4(r1)
      stw       r9, 0x4EC(r1)
      stb       r12, 0x4F0(r1)
      stw       r12, 0x4F4(r1)
      stfs      f3, 0x4F8(r1)
      stw       r8, 0x4FC(r1)
      stw       r7, 0x500(r1)
      stw       r6, 0x504(r1)
      stw       r6, 0x508(r1)
      stb       r8, 0x50C(r1)
      stfs      f3, 0x510(r1)
      stw       r8, 0x514(r1)
      stw       r7, 0x518(r1)
      stw       r6, 0x51C(r1)
      stw       r6, 0x520(r1)
      stb       r8, 0x524(r1)
      stw       r12, 0x540(r1)
      stw       r5, 0x53C(r1)
      stfs      f2, 0x548(r1)
      stfs      f2, 0x544(r1)
      stw       r12, 0x550(r1)
      stw       r0, 0x54C(r1)
      stfs      f1, 0x558(r1)
      stfs      f1, 0x554(r1)
      stb       r12, 0x532(r1)
      stfs      f0, 0x528(r1)
      stb       r12, 0x530(r1)
      stb       r8, 0x531(r1)
      stw       r8, 0x52C(r1)
      stb       r12, 0x533(r1)
      stb       r12, 0x534(r1)
      stb       r12, 0x535(r1)
      stb       r12, 0x536(r1)
      stb       r12, 0x537(r1)
      stb       r12, 0x538(r1)
      bl        0x1E6390
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      ori       r0, r0, 0x2
      stb       r0, 0x3C(r3)
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x40(r3)
      lwz       r0, 0x218(r3)
      cmplwi    r0, 0
      beq-      .loc_0x620
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x5E0
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EB77C

    .loc_0x5E0:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0x604
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EB7A0

    .loc_0x604:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x6DC

    .loc_0x620:
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x640
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EB7DC

    .loc_0x640:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0x664
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EB800

    .loc_0x664:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x54(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x69C
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EB838

    .loc_0x69C:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0x6C0
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EB85C

    .loc_0x6C0:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      bl        0x12ADF4

    .loc_0x6DC:
      mr        r3, r28
      addi      r4, r30, 0x1C
      bl        0x21BA08
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x77C
      lwz       r3, -0x6D20(r13)
      li        r4, 0x1
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lfs       f1, -0x4374(r2)
      mr        r25, r3
      lfs       f2, -0x4370(r2)
      lfs       f0, -0x436C(r2)
      stfs      f1, 0x4C(r1)
      lfs       f1, -0x4368(r2)
      stfs      f2, 0x50(r1)
      stfs      f0, 0x54(r1)
      bl        0x1FBCC8
      stfs      f1, 0x1FC(r25)
      addi      r4, r1, 0x4C
      lwz       r3, -0x6CF8(r13)
      lwz       r12, 0x4(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x50(r1)
      mr        r3, r25
      addi      r4, r1, 0x4C
      li        r5, 0
      bl        -0xDAD90
      lwz       r3, 0x270(r25)
      mr        r4, r25
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0x77C:
      mr        r3, r28
      addi      r4, r30, 0x298
      bl        0x21B968
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xA54
      lbz       r0, 0x10(r26)
      cmplwi    r0, 0
      beq-      .loc_0x7F8
      lwz       r4, 0x22C(r27)
      addi      r3, r30, 0x270
      lwz       r5, 0xC8(r27)
      li        r0, 0
      lwz       r6, 0x14(r4)
      addi      r4, r1, 0x15C
      lfs       f0, -0x43B8(r2)
      stw       r3, 0x15C(r1)
      lwz       r3, -0x64AC(r13)
      stw       r6, 0x160(r1)
      stw       r5, 0x168(r1)
      stfs      f0, 0x174(r1)
      stfs      f0, 0x178(r1)
      stfs      f0, 0x17C(r1)
      stfs      f0, 0x180(r1)
      stw       r0, 0x184(r1)
      stw       r0, 0x16C(r1)
      stw       r0, 0x164(r1)
      stw       r0, 0x188(r1)
      stw       r0, 0x170(r1)
      stw       r0, 0x18C(r1)
      bl        0x216A00
      b         .loc_0x1A68

    .loc_0x7F8:
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      ori       r0, r0, 0x2
      stb       r0, 0x3C(r3)
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x40(r3)
      lwz       r0, 0x218(r3)
      cmplwi    r0, 0
      beq-      .loc_0x87C
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x83C
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EB9D8

    .loc_0x83C:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0x860
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EB9FC

    .loc_0x860:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x938

    .loc_0x87C:
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x89C
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EBA38

    .loc_0x89C:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0x8C0
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EBA5C

    .loc_0x8C0:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x54(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x8F8
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EBA94

    .loc_0x8F8:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0x91C
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EBAB8

    .loc_0x91C:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      bl        0x12AB98

    .loc_0x938:
      mr        r3, r26
      mr        r4, r27
      bl        -0x22C4
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1A68
      lis       r3, 0x804B
      li        r12, 0
      addi      r26, r3, 0x1148
      li        r8, 0x1
      lfs       f3, -0x4384(r2)
      lis       r5, 0x804B
      li        r6, 0xA
      lfs       f2, -0x4380(r2)
      lfs       f1, -0x437C(r2)
      li        r7, 0x2
      lfs       f4, -0x43B8(r2)
      lis       r4, 0x804B
      lfs       f0, -0x4378(r2)
      lis       r3, 0x804B
      li        r10, 0x4D2
      li        r9, 0x32
      stw       r26, 0x44C(r1)
      addi      r11, r5, 0x10DC
      addi      r5, r4, 0x10C4
      addi      r0, r3, 0x10AC
      stw       r26, 0x4B4(r1)
      addi      r4, r1, 0x44C
      lwz       r3, -0x6560(r13)
      stw       r26, 0x4C4(r1)
      stw       r12, 0x450(r1)
      stw       r11, 0x44C(r1)
      stfs      f4, 0x454(r1)
      stw       r12, 0x458(r1)
      stw       r12, 0x460(r1)
      stw       r10, 0x45C(r1)
      stw       r9, 0x464(r1)
      stb       r12, 0x468(r1)
      stw       r12, 0x46C(r1)
      stfs      f3, 0x470(r1)
      stw       r8, 0x474(r1)
      stw       r7, 0x478(r1)
      stw       r6, 0x47C(r1)
      stw       r6, 0x480(r1)
      stb       r8, 0x484(r1)
      stfs      f3, 0x488(r1)
      stw       r8, 0x48C(r1)
      stw       r7, 0x490(r1)
      stw       r6, 0x494(r1)
      stw       r6, 0x498(r1)
      stb       r8, 0x49C(r1)
      stw       r12, 0x4B8(r1)
      stw       r5, 0x4B4(r1)
      stfs      f2, 0x4C0(r1)
      stfs      f2, 0x4BC(r1)
      stw       r12, 0x4C8(r1)
      stw       r0, 0x4C4(r1)
      stfs      f1, 0x4D0(r1)
      stfs      f1, 0x4CC(r1)
      stb       r12, 0x4AA(r1)
      stfs      f0, 0x4A0(r1)
      stb       r12, 0x4A8(r1)
      stb       r8, 0x4A9(r1)
      stw       r8, 0x4A4(r1)
      stb       r12, 0x4AB(r1)
      stb       r12, 0x4AC(r1)
      stb       r12, 0x4AD(r1)
      stb       r12, 0x4AE(r1)
      stb       r12, 0x4AF(r1)
      stb       r12, 0x4B0(r1)
      bl        0x1E5EDC
      b         .loc_0x1A68

    .loc_0xA54:
      mr        r3, r28
      addi      r4, r30, 0xB0
      bl        0x21B690
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xAA4
      mr        r3, r28
      addi      r4, r30, 0x2C
      bl        0x21B67C
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xAA4
      mr        r3, r28
      addi      r4, r30, 0x40
      bl        0x21B668
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xAA4
      mr        r3, r28
      addi      r4, r30, 0x58
      bl        0x21B654
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xE0C

    .loc_0xAA4:
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x2F(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0xB3C
      li        r4, 0x16
      bl        -0x2EEB8
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xB3C
      lwz       r3, -0x6B70(r13)
      li        r4, 0x16
      bl        -0x2EF08
      lwz       r4, 0x22C(r27)
      addi      r3, r30, 0x298
      lwz       r5, 0xC8(r27)
      li        r0, 0
      lwz       r6, 0x14(r4)
      addi      r4, r1, 0x128
      lfs       f0, -0x43B8(r2)
      stw       r3, 0x128(r1)
      lwz       r3, -0x64AC(r13)
      stw       r6, 0x12C(r1)
      stw       r5, 0x134(r1)
      stfs      f0, 0x140(r1)
      stfs      f0, 0x144(r1)
      stfs      f0, 0x148(r1)
      stfs      f0, 0x14C(r1)
      stw       r0, 0x150(r1)
      stw       r0, 0x138(r1)
      stw       r0, 0x130(r1)
      stw       r0, 0x154(r1)
      stw       r0, 0x13C(r1)
      stw       r0, 0x158(r1)
      lwz       r0, 0xCC(r27)
      stw       r0, 0x138(r1)
      bl        0x2166C4
      lwz       r3, -0x6560(r13)
      bl        0x1E7580
      b         .loc_0x1A68

    .loc_0xB3C:
      lbz       r0, 0x10(r26)
      cmplwi    r0, 0
      beq-      .loc_0xBA4
      lwz       r4, 0x22C(r27)
      addi      r3, r30, 0x270
      lwz       r5, 0xC8(r27)
      li        r0, 0
      lwz       r6, 0x14(r4)
      addi      r4, r1, 0xF4
      lfs       f0, -0x43B8(r2)
      stw       r3, 0xF4(r1)
      lwz       r3, -0x64AC(r13)
      stw       r6, 0xF8(r1)
      stw       r5, 0x100(r1)
      stfs      f0, 0x10C(r1)
      stfs      f0, 0x110(r1)
      stfs      f0, 0x114(r1)
      stfs      f0, 0x118(r1)
      stw       r0, 0x11C(r1)
      stw       r0, 0x104(r1)
      stw       r0, 0xFC(r1)
      stw       r0, 0x120(r1)
      stw       r0, 0x108(r1)
      stw       r0, 0x124(r1)
      bl        0x216654
      b         .loc_0x1A68

    .loc_0xBA4:
      mr        r3, r26
      mr        r4, r27
      bl        -0x2530
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xBC4
      lwz       r3, -0x6560(r13)
      bl        0x1E74F8
      b         .loc_0x1A68

    .loc_0xBC4:
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      ori       r0, r0, 0x2
      stb       r0, 0x3C(r3)
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x40(r3)
      lwz       r0, 0x218(r3)
      cmplwi    r0, 0
      beq-      .loc_0xC48
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0xC08
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EBDA4

    .loc_0xC08:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0xC2C
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EBDC8

    .loc_0xC2C:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xD04

    .loc_0xC48:
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0xC68
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EBE04

    .loc_0xC68:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0xC8C
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EBE28

    .loc_0xC8C:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x54(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0xCC4
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EBE60

    .loc_0xCC4:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0xCE8
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EBE84

    .loc_0xCE8:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      bl        0x12A7CC

    .loc_0xD04:
      lis       r3, 0x804B
      li        r12, 0
      addi      r26, r3, 0x1148
      li        r8, 0x1
      lfs       f3, -0x4384(r2)
      lis       r5, 0x804B
      li        r6, 0xA
      lfs       f2, -0x4380(r2)
      lfs       f1, -0x437C(r2)
      li        r7, 0x2
      lfs       f4, -0x43B8(r2)
      lis       r4, 0x804B
      lfs       f0, -0x4378(r2)
      lis       r3, 0x804B
      li        r10, 0x4D2
      li        r9, 0x32
      stw       r26, 0x3C4(r1)
      addi      r11, r5, 0x10DC
      addi      r5, r4, 0x10C4
      addi      r0, r3, 0x10AC
      stw       r26, 0x42C(r1)
      addi      r4, r1, 0x3C4
      lwz       r3, -0x6560(r13)
      stw       r26, 0x43C(r1)
      stw       r12, 0x3C8(r1)
      stw       r11, 0x3C4(r1)
      stfs      f4, 0x3CC(r1)
      stw       r12, 0x3D0(r1)
      stw       r12, 0x3D8(r1)
      stw       r10, 0x3D4(r1)
      stw       r9, 0x3DC(r1)
      stb       r12, 0x3E0(r1)
      stw       r12, 0x3E4(r1)
      stfs      f3, 0x3E8(r1)
      stw       r8, 0x3EC(r1)
      stw       r7, 0x3F0(r1)
      stw       r6, 0x3F4(r1)
      stw       r6, 0x3F8(r1)
      stb       r8, 0x3FC(r1)
      stfs      f3, 0x400(r1)
      stw       r8, 0x404(r1)
      stw       r7, 0x408(r1)
      stw       r6, 0x40C(r1)
      stw       r6, 0x410(r1)
      stb       r8, 0x414(r1)
      stw       r12, 0x430(r1)
      stw       r5, 0x42C(r1)
      stfs      f2, 0x438(r1)
      stfs      f2, 0x434(r1)
      stw       r12, 0x440(r1)
      stw       r0, 0x43C(r1)
      stfs      f1, 0x448(r1)
      stfs      f1, 0x444(r1)
      stb       r12, 0x422(r1)
      stfs      f0, 0x418(r1)
      stb       r12, 0x420(r1)
      stb       r8, 0x421(r1)
      stw       r8, 0x41C(r1)
      stb       r12, 0x423(r1)
      stb       r12, 0x424(r1)
      stb       r12, 0x425(r1)
      stb       r12, 0x426(r1)
      stb       r12, 0x427(r1)
      stb       r12, 0x428(r1)
      bl        0x1E5B24
      b         .loc_0x1A68

    .loc_0xE0C:
      mr        r3, r28
      addi      r4, r30, 0x21C
      bl        0x21B2D8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xE70
      lwz       r3, -0x64AC(r13)
      bl        0x216984
      lis       r3, 0x804B
      li        r4, 0
      addi      r0, r3, 0x1148
      lis       r3, 0x804C
      stw       r0, 0x40(r1)
      addi      r3, r3, 0x4E4
      li        r0, 0x1
      stb       r4, 0x48(r1)
      stw       r4, 0x44(r1)
      stw       r3, 0x40(r1)
      stb       r0, 0x48(r1)
      bl        0x250E04
      lwz       r3, -0x6560(r13)
      addi      r4, r1, 0x40
      bl        0x1E8064
      li        r0, 0x1
      stb       r0, 0x20(r26)
      b         .loc_0x1A68

    .loc_0xE70:
      mr        r3, r28
      addi      r4, r30, 0x270
      bl        0x21B274
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x10D0
      li        r27, 0
      lis       r3, 0x804B
      stb       r27, 0x10(r26)
      li        r8, 0x1
      addi      r12, r3, 0x1148
      li        r6, 0xA
      lfs       f3, -0x4384(r2)
      lis       r5, 0x804B
      lfs       f2, -0x4380(r2)
      li        r7, 0x2
      lfs       f1, -0x437C(r2)
      lis       r4, 0x804B
      lfs       f4, -0x43B8(r2)
      lis       r3, 0x804B
      lfs       f0, -0x4378(r2)
      li        r10, 0x4D2
      li        r9, 0x32
      stw       r12, 0x33C(r1)
      addi      r11, r5, 0x10DC
      addi      r5, r4, 0x10C4
      stw       r12, 0x3A4(r1)
      addi      r0, r3, 0x10AC
      lwz       r3, -0x6560(r13)
      addi      r4, r1, 0x33C
      stw       r12, 0x3B4(r1)
      stw       r27, 0x340(r1)
      stw       r11, 0x33C(r1)
      stfs      f4, 0x344(r1)
      stw       r27, 0x348(r1)
      stw       r27, 0x350(r1)
      stw       r10, 0x34C(r1)
      stw       r9, 0x354(r1)
      stb       r27, 0x358(r1)
      stw       r27, 0x35C(r1)
      stfs      f3, 0x360(r1)
      stw       r8, 0x364(r1)
      stw       r7, 0x368(r1)
      stw       r6, 0x36C(r1)
      stw       r6, 0x370(r1)
      stb       r8, 0x374(r1)
      stfs      f3, 0x378(r1)
      stw       r8, 0x37C(r1)
      stw       r7, 0x380(r1)
      stw       r6, 0x384(r1)
      stw       r6, 0x388(r1)
      stb       r8, 0x38C(r1)
      stw       r27, 0x3A8(r1)
      stw       r5, 0x3A4(r1)
      stfs      f2, 0x3B0(r1)
      stfs      f2, 0x3AC(r1)
      stw       r27, 0x3B8(r1)
      stw       r0, 0x3B4(r1)
      stfs      f1, 0x3C0(r1)
      stfs      f1, 0x3BC(r1)
      stb       r27, 0x39A(r1)
      stfs      f0, 0x390(r1)
      stb       r27, 0x398(r1)
      stb       r8, 0x399(r1)
      stw       r8, 0x394(r1)
      stb       r27, 0x39B(r1)
      stb       r27, 0x39C(r1)
      stb       r27, 0x39D(r1)
      stb       r27, 0x39E(r1)
      stb       r27, 0x39F(r1)
      stb       r27, 0x3A0(r1)
      bl        0x1E59A0
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      ori       r0, r0, 0x2
      stb       r0, 0x3C(r3)
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x40(r3)
      lwz       r0, 0x218(r3)
      cmplwi    r0, 0
      beq-      .loc_0x1010
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0xFD0
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EC16C

    .loc_0xFD0:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0xFF4
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EC190

    .loc_0xFF4:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1A68

    .loc_0x1010:
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x1030
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EC1CC

    .loc_0x1030:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0x1054
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EC1F0

    .loc_0x1054:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x54(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x108C
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EC228

    .loc_0x108C:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0x10B0
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EC24C

    .loc_0x10B0:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      bl        0x12A404
      b         .loc_0x1A68

    .loc_0x10D0:
      mr        r3, r28
      addi      r4, r30, 0xC0
      bl        0x21B014
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x16DC
      lbz       r0, 0x10(r26)
      cmplwi    r0, 0
      beq-      .loc_0x114C
      lwz       r4, 0x22C(r27)
      addi      r3, r30, 0x270
      lwz       r5, 0xC8(r27)
      li        r0, 0
      lwz       r6, 0x14(r4)
      addi      r4, r1, 0xC0
      lfs       f0, -0x43B8(r2)
      stw       r3, 0xC0(r1)
      lwz       r3, -0x64AC(r13)
      stw       r6, 0xC4(r1)
      stw       r5, 0xCC(r1)
      stfs      f0, 0xD8(r1)
      stfs      f0, 0xDC(r1)
      stfs      f0, 0xE0(r1)
      stfs      f0, 0xE4(r1)
      stw       r0, 0xE8(r1)
      stw       r0, 0xD0(r1)
      stw       r0, 0xC8(r1)
      stw       r0, 0xEC(r1)
      stw       r0, 0xD4(r1)
      stw       r0, 0xF0(r1)
      bl        0x2160AC
      b         .loc_0x1A68

    .loc_0x114C:
      li        r0, 0
      lwz       r3, -0x6D0C(r13)
      lis       r4, 0x804B
      stw       r0, 0x3C(r1)
      subi      r4, r4, 0x4364
      cmplwi    r0, 0
      stw       r4, 0x30(r1)
      stw       r0, 0x34(r1)
      stw       r3, 0x38(r1)
      bne-      .loc_0x118C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x34(r1)
      b         .loc_0x1348

    .loc_0x118C:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x34(r1)
      b         .loc_0x11F8

    .loc_0x11A4:
      lwz       r3, 0x38(r1)
      lwz       r4, 0x34(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1348
      lwz       r3, 0x38(r1)
      lwz       r4, 0x34(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x34(r1)

    .loc_0x11F8:
      lwz       r12, 0x30(r1)
      addi      r3, r1, 0x30
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x11A4
      b         .loc_0x1348

    .loc_0x1218:
      lwz       r3, 0x38(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r25, r3
      addi      r3, r1, 0x18
      lwz       r12, 0x0(r25)
      mr        r4, r25
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x18(r1)
      addi      r4, r1, 0x24
      lfs       f1, 0x1C(r1)
      lfs       f0, 0x20(r1)
      stfs      f2, 0x24(r1)
      lwz       r3, -0x6CF8(r13)
      stfs      f1, 0x28(r1)
      stfs      f0, 0x2C(r1)
      lwz       r12, 0x4(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x28(r1)
      mr        r3, r25
      addi      r4, r1, 0x24
      li        r5, 0
      bl        -0xDB8C0
      lwz       r0, 0x3C(r1)
      cmplwi    r0, 0
      bne-      .loc_0x12B8
      lwz       r3, 0x38(r1)
      lwz       r4, 0x34(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x34(r1)
      b         .loc_0x1348

    .loc_0x12B8:
      lwz       r3, 0x38(r1)
      lwz       r4, 0x34(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x34(r1)
      b         .loc_0x132C

    .loc_0x12D8:
      lwz       r3, 0x38(r1)
      lwz       r4, 0x34(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x3C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1348
      lwz       r3, 0x38(r1)
      lwz       r4, 0x34(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x34(r1)

    .loc_0x132C:
      lwz       r12, 0x30(r1)
      addi      r3, r1, 0x30
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x12D8

    .loc_0x1348:
      lwz       r3, 0x38(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x34(r1)
      cmplw     r4, r3
      bne+      .loc_0x1218
      lwz       r3, -0x6B70(r13)
      li        r4, 0x6
      bl        -0x2F770
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x13EC
      lwz       r3, -0x6B70(r13)
      li        r4, 0x6
      bl        -0x2F7C0
      lwz       r4, 0x22C(r27)
      addi      r3, r30, 0x250
      lwz       r5, 0xC8(r27)
      li        r0, 0
      lwz       r6, 0x14(r4)
      addi      r4, r1, 0x8C
      lfs       f0, -0x43B8(r2)
      stw       r3, 0x8C(r1)
      lwz       r3, -0x64AC(r13)
      stw       r6, 0x90(r1)
      stw       r5, 0x98(r1)
      stfs      f0, 0xA4(r1)
      stfs      f0, 0xA8(r1)
      stfs      f0, 0xAC(r1)
      stfs      f0, 0xB0(r1)
      stw       r0, 0xB4(r1)
      stw       r0, 0x9C(r1)
      stw       r0, 0x94(r1)
      stw       r0, 0xB8(r1)
      stw       r0, 0xA0(r1)
      stw       r0, 0xBC(r1)
      lwz       r0, 0xCC(r27)
      stw       r0, 0x9C(r1)
      bl        0x215E0C
      b         .loc_0x1A68

    .loc_0x13EC:
      lwz       r3, -0x6B70(r13)
      li        r4, 0x12
      bl        -0x2F7F4
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1480
      lwz       r3, -0x6B70(r13)
      li        r4, 0xA
      addi      r3, r3, 0x48
      bl        -0x30C1C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1480
      lwz       r3, -0x6B70(r13)
      li        r4, 0x12
      bl        -0x2F85C
      lwz       r4, 0x22C(r27)
      addi      r3, r30, 0x264
      lwz       r5, 0xC8(r27)
      li        r0, 0
      lwz       r6, 0x14(r4)
      addi      r4, r1, 0x58
      lfs       f0, -0x43B8(r2)
      stw       r3, 0x58(r1)
      lwz       r3, -0x64AC(r13)
      stw       r6, 0x5C(r1)
      stw       r5, 0x64(r1)
      stfs      f0, 0x70(r1)
      stfs      f0, 0x74(r1)
      stfs      f0, 0x78(r1)
      stfs      f0, 0x7C(r1)
      stw       r0, 0x80(r1)
      stw       r0, 0x68(r1)
      stw       r0, 0x60(r1)
      stw       r0, 0x84(r1)
      stw       r0, 0x6C(r1)
      stw       r0, 0x88(r1)
      bl        0x215D78
      b         .loc_0x1A68

    .loc_0x1480:
      mr        r3, r26
      mr        r4, r27
      bl        -0x2E0C
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1A68
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      ori       r0, r0, 0x2
      stb       r0, 0x3C(r3)
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x40(r3)
      lwz       r0, 0x218(r3)
      cmplwi    r0, 0
      beq-      .loc_0x1518
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x14D8
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EC674

    .loc_0x14D8:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0x14FC
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EC698

    .loc_0x14FC:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x15D4

    .loc_0x1518:
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x1538
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EC6D4

    .loc_0x1538:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0x155C
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EC6F8

    .loc_0x155C:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x54(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x1594
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EC730

    .loc_0x1594:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0x15B8
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EC754

    .loc_0x15B8:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      bl        0x129EFC

    .loc_0x15D4:
      lis       r3, 0x804B
      li        r12, 0
      addi      r26, r3, 0x1148
      li        r8, 0x1
      lfs       f3, -0x4384(r2)
      lis       r5, 0x804B
      li        r6, 0xA
      lfs       f2, -0x4380(r2)
      lfs       f1, -0x437C(r2)
      li        r7, 0x2
      lfs       f4, -0x43B8(r2)
      lis       r4, 0x804B
      lfs       f0, -0x4378(r2)
      lis       r3, 0x804B
      li        r10, 0x4D2
      li        r9, 0x32
      stw       r26, 0x2B4(r1)
      addi      r11, r5, 0x10DC
      addi      r5, r4, 0x10C4
      addi      r0, r3, 0x10AC
      stw       r26, 0x31C(r1)
      addi      r4, r1, 0x2B4
      lwz       r3, -0x6560(r13)
      stw       r26, 0x32C(r1)
      stw       r12, 0x2B8(r1)
      stw       r11, 0x2B4(r1)
      stfs      f4, 0x2BC(r1)
      stw       r12, 0x2C0(r1)
      stw       r12, 0x2C8(r1)
      stw       r10, 0x2C4(r1)
      stw       r9, 0x2CC(r1)
      stb       r12, 0x2D0(r1)
      stw       r12, 0x2D4(r1)
      stfs      f3, 0x2D8(r1)
      stw       r8, 0x2DC(r1)
      stw       r7, 0x2E0(r1)
      stw       r6, 0x2E4(r1)
      stw       r6, 0x2E8(r1)
      stb       r8, 0x2EC(r1)
      stfs      f3, 0x2F0(r1)
      stw       r8, 0x2F4(r1)
      stw       r7, 0x2F8(r1)
      stw       r6, 0x2FC(r1)
      stw       r6, 0x300(r1)
      stb       r8, 0x304(r1)
      stw       r12, 0x320(r1)
      stw       r5, 0x31C(r1)
      stfs      f2, 0x328(r1)
      stfs      f2, 0x324(r1)
      stw       r12, 0x330(r1)
      stw       r0, 0x32C(r1)
      stfs      f1, 0x338(r1)
      stfs      f1, 0x334(r1)
      stb       r12, 0x312(r1)
      stfs      f0, 0x308(r1)
      stb       r12, 0x310(r1)
      stb       r8, 0x311(r1)
      stw       r8, 0x30C(r1)
      stb       r12, 0x313(r1)
      stb       r12, 0x314(r1)
      stb       r12, 0x315(r1)
      stb       r12, 0x316(r1)
      stb       r12, 0x317(r1)
      stb       r12, 0x318(r1)
      bl        0x1E5254
      b         .loc_0x1A68

    .loc_0x16DC:
      mr        r3, r28
      addi      r4, r30, 0x140
      bl        0x21AA08
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1718
      mr        r3, r28
      addi      r4, r30, 0x150
      bl        0x21A9F4
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1718
      mr        r3, r28
      addi      r4, r30, 0x160
      bl        0x21A9E0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1960

    .loc_0x1718:
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      ori       r0, r0, 0x2
      stb       r0, 0x3C(r3)
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x40(r3)
      lwz       r0, 0x218(r3)
      cmplwi    r0, 0
      beq-      .loc_0x179C
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x175C
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EC8F8

    .loc_0x175C:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0x1780
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EC91C

    .loc_0x1780:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1858

    .loc_0x179C:
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x17BC
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EC958

    .loc_0x17BC:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0x17E0
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EC97C

    .loc_0x17E0:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x54(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x1818
      addi      r3, r30, 0xF0
      addi      r5, r30, 0x94
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x1EC9B4

    .loc_0x1818:
      lwz       r25, -0x6780(r13)
      lwz       r0, 0x4(r25)
      cmplwi    r0, 0
      bne-      .loc_0x183C
      addi      r3, r30, 0xFC
      addi      r5, r30, 0x94
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x1EC9D8

    .loc_0x183C:
      lwz       r3, 0x4(r25)
      lwz       r3, 0x4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      bl        0x129C78

    .loc_0x1858:
      lis       r3, 0x804B
      li        r12, 0
      addi      r26, r3, 0x1148
      li        r8, 0x1
      lfs       f3, -0x4384(r2)
      lis       r5, 0x804B
      li        r6, 0xA
      lfs       f2, -0x4380(r2)
      lfs       f1, -0x437C(r2)
      li        r7, 0x2
      lfs       f4, -0x43B8(r2)
      lis       r4, 0x804B
      lfs       f0, -0x4378(r2)
      lis       r3, 0x804B
      li        r10, 0x4D2
      li        r9, 0x32
      stw       r26, 0x22C(r1)
      addi      r11, r5, 0x10DC
      addi      r5, r4, 0x10C4
      addi      r0, r3, 0x10AC
      stw       r26, 0x294(r1)
      addi      r4, r1, 0x22C
      lwz       r3, -0x6560(r13)
      stw       r26, 0x2A4(r1)
      stw       r12, 0x230(r1)
      stw       r11, 0x22C(r1)
      stfs      f4, 0x234(r1)
      stw       r12, 0x238(r1)
      stw       r12, 0x240(r1)
      stw       r10, 0x23C(r1)
      stw       r9, 0x244(r1)
      stb       r12, 0x248(r1)
      stw       r12, 0x24C(r1)
      stfs      f3, 0x250(r1)
      stw       r8, 0x254(r1)
      stw       r7, 0x258(r1)
      stw       r6, 0x25C(r1)
      stw       r6, 0x260(r1)
      stb       r8, 0x264(r1)
      stfs      f3, 0x268(r1)
      stw       r8, 0x26C(r1)
      stw       r7, 0x270(r1)
      stw       r6, 0x274(r1)
      stw       r6, 0x278(r1)
      stb       r8, 0x27C(r1)
      stw       r12, 0x298(r1)
      stw       r5, 0x294(r1)
      stfs      f2, 0x2A0(r1)
      stfs      f2, 0x29C(r1)
      stw       r12, 0x2A8(r1)
      stw       r0, 0x2A4(r1)
      stfs      f1, 0x2B0(r1)
      stfs      f1, 0x2AC(r1)
      stb       r12, 0x28A(r1)
      stfs      f0, 0x280(r1)
      stb       r12, 0x288(r1)
      stb       r8, 0x289(r1)
      stw       r8, 0x284(r1)
      stb       r12, 0x28B(r1)
      stb       r12, 0x28C(r1)
      stb       r12, 0x28D(r1)
      stb       r12, 0x28E(r1)
      stb       r12, 0x28F(r1)
      stb       r12, 0x290(r1)
      bl        0x1E4FD0
      b         .loc_0x1A68

    .loc_0x1960:
      mr        r3, r28
      addi      r4, r30, 0x20C
      bl        0x21A784
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1A14
      lwz       r3, -0x6560(r13)
      bl        0x1E6A4C
      lwz       r3, -0x6D20(r13)
      mr        r4, r29
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      bl        -0xD4450
      lwz       r3, -0x6D20(r13)
      lwz       r0, 0x50(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0x19D8
      cmpwi     r29, 0
      bne-      .loc_0x19C4
      lwz       r3, -0x6C18(r13)
      li        r4, 0x1
      lwz       r3, 0x58(r3)
      bl        -0xC9884
      b         .loc_0x1A68

    .loc_0x19C4:
      lwz       r3, -0x6C18(r13)
      li        r4, 0
      lwz       r3, 0x58(r3)
      bl        -0xC9898
      b         .loc_0x1A68

    .loc_0x19D8:
      lwz       r8, -0x6C18(r13)
      li        r0, 0x2
      mr        r3, r26
      mr        r4, r27
      lbz       r7, 0x3C(r8)
      addi      r6, r1, 0xC
      li        r5, 0x5
      rlwinm    r7,r7,0,27,25
      stb       r7, 0x3C(r8)
      sth       r0, 0xC(r1)
      lwz       r12, 0x0(r26)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1A68

    .loc_0x1A14:
      mr        r3, r28
      addi      r4, r30, 0x1FC
      bl        0x21A6D0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x1A68
      lwz       r3, -0x6560(r13)
      bl        0x1E6998
      lwz       r8, -0x6C18(r13)
      li        r0, 0x1
      mr        r3, r26
      mr        r4, r27
      lbz       r7, 0x3C(r8)
      addi      r6, r1, 0x8
      li        r5, 0x5
      rlwinm    r7,r7,0,27,25
      stb       r7, 0x3C(r8)
      sth       r0, 0x8(r1)
      lwz       r12, 0x0(r26)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x1A68:
      lmw       r25, 0x564(r1)
      lwz       r0, 0x584(r1)
      mtlr      r0
      addi      r1, r1, 0x580
      blr

    .loc_0x1A7C:
    */
}

/*
 * --INFO--
 * Address:	8021725C
 * Size:	000074
 */
void Game::SingleGame::GameState::needRepayDemo(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      lbz       r0, 0x19(r3)
      cmplwi    r0, 0
      beq-      .loc_0x24
      li        r3, 0
      b         .loc_0x60

    .loc_0x24:
      lwz       r3, -0x6B70(r13)
      li        r31, 0
      bl        -0x2E42C
      lwz       r3, -0x6B70(r13)
      bl        -0x2E2CC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x44
      li        r31, 0x1

    .loc_0x44:
      lwz       r3, -0x6B70(r13)
      bl        -0x3143C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x5C
      li        r3, 0x1
      b         .loc_0x60

    .loc_0x5C:
      mr        r3, r31

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
 * Address:	802172D0
 * Size:	000140
 */
void Game::SingleGame::GameState::startRepayDemo(void)
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
      lbz       r0, 0x19(r3)
      cmplwi    r0, 0
      bne-      .loc_0x124
      li        r0, 0x1
      lis       r3, 0x8048
      stb       r0, 0x19(r31)
      addi      r5, r3, 0x2400
      li        r4, 0x1
      li        r6, 0x3
      lwz       r3, -0x6C18(r13)
      bl        -0x62380
      lis       r4, 0x8048
      lwz       r3, -0x6C18(r13)
      addi      r5, r4, 0x2400
      li        r4, 0x1
      bl        -0x623A4
      lfs       f0, -0x4364(r2)
      stfs      f0, 0x1C(r31)
      lwz       r3, -0x6B70(r13)
      bl        -0x2E4DC
      mr        r0, r3
      lwz       r3, -0x6B70(r13)
      mr        r31, r0
      mr        r4, r31
      bl        -0x2E3CC
      fmr       f31, f1
      lwz       r3, -0x6B70(r13)
      bl        -0x314F0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xC4
      addi      r3, r1, 0x28
      li        r4, 0x2
      li        r5, 0
      bl        0x1F7E70
      lwz       r3, -0x6560(r13)
      addi      r4, r1, 0x28
      bl        0x1E7224
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      rlwinm    r0,r0,0,27,25
      stb       r0, 0x3C(r3)
      b         .loc_0x120

    .loc_0xC4:
      cmpwi     r31, 0x9
      bge-      .loc_0xF4
      fctiwz    f0, f31
      addi      r3, r1, 0x18
      li        r4, 0
      stfd      f0, 0x38(r1)
      lwz       r5, 0x3C(r1)
      bl        0x1F7E30
      lwz       r3, -0x6560(r13)
      addi      r4, r1, 0x18
      bl        0x1E71E4
      b         .loc_0x120

    .loc_0xF4:
      addi      r3, r1, 0x8
      li        r4, 0x1
      li        r5, 0
      bl        0x1F7E10
      lwz       r3, -0x6560(r13)
      addi      r4, r1, 0x8
      bl        0x1E71C4
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x3C(r3)
      rlwinm    r0,r0,0,27,25
      stb       r0, 0x3C(r3)

    .loc_0x120:
      bl        0x25456C

    .loc_0x124:
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
 * Address:	80217410
 * Size:	0000A8
 */
void Game::SingleGame::GameState::updateRepayDemo(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r0, 0x19(r3)
      cmplwi    r0, 0
      beq-      .loc_0x90
      lwz       r3, -0x6560(r13)
      bl        0x1E7214
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x88
      lis       r4, 0x8048
      lwz       r3, -0x6C18(r13)
      addi      r5, r4, 0x240C
      li        r4, 0
      bl        -0x624CC
      li        r0, 0
      stb       r0, 0x19(r31)
      lwz       r3, -0x6B70(r13)
      bl        -0x315F8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x64
      li        r3, 0x4
      b         .loc_0x94

    .loc_0x64:
      lwz       r3, -0x6B70(r13)
      bl        -0x2E354
      lwz       r3, -0x6B70(r13)
      bl        -0x2E624
      cmpwi     r3, 0x9
      li        r3, 0x2
      blt-      .loc_0x94
      li        r3, 0x3
      b         .loc_0x94

    .loc_0x88:
      li        r3, 0x1
      b         .loc_0x94

    .loc_0x90:
      li        r3, 0

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
 * Address:	........
 * Size:	000004
 */
void Game::SingleGame::GameState::drawRepayDemo((Graphics&))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802174B8
 * Size:	000078
 */
void Game::SingleGame::GameState::draw((Game::SingleGameSection*, Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      lbz       r0, 0x18(r3)
      cmplwi    r0, 0
      bne-      .loc_0x64
      lbz       r0, 0x20(r3)
      cmplwi    r0, 0
      beq-      .loc_0x48
      mr        r3, r31
      mr        r4, r5
      lwz       r12, 0x0(r31)
      lwz       r12, 0x118(r12)
      mtctr     r12
      bctrl
      b         .loc_0x64

    .loc_0x48:
      mr        r3, r31
      mr        r4, r5
      bl        -0xCB8E0
      mr        r3, r31
      bl        -0xC1A98
      mr        r3, r31
      bl        -0xC8340

    .loc_0x64:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80217530
 * Size:	000068
 */
void Game::SingleGame::GameState::cleanup((Game::SingleGameSection*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r3, 0x8048
      stw       r0, 0x14(r1)
      addi      r5, r3, 0x2418
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0
      lwz       r6, -0x6C18(r13)
      lbz       r0, 0x3C(r6)
      rlwinm    r0,r0,0,31,29
      stb       r0, 0x3C(r6)
      lwz       r3, -0x6C18(r13)
      bl        -0x625E0
      lwz       r0, 0xFC(r31)
      cmplwi    r0, 0
      beq-      .loc_0x48
      bl        0x24FEC4

    .loc_0x48:
      mr        r3, r31
      li        r4, 0
      bl        0x24018
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80217598
 * Size:	000008
 */
void og::Screen::DispMemberSave::getSize(void)
{
    /*
    .loc_0x0:
      li        r3, 0xC
      blr
    */
}

/*
 * --INFO--
 * Address:	802175A0
 * Size:	00000C
 */
void og::Screen::DispMemberSave::getOwnerID(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x4F
      addi      r3, r3, 0x4741
      blr
    */
}

/*
 * --INFO--
 * Address:	802175AC
 * Size:	000010
 */
void og::Screen::DispMemberSave::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x5341
      li        r3, 0
      addi      r4, r4, 0x5645
      blr
    */
}

/*
 * --INFO--
 * Address:	802175BC
 * Size:	000008
 */
void og::Screen::DispMemberSMenuCont::getSize(void)
{
    /*
    .loc_0x0:
      li        r3, 0x8
      blr
    */
}

/*
 * --INFO--
 * Address:	802175C4
 * Size:	00000C
 */
void og::Screen::DispMemberSMenuCont::getOwnerID(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x4F
      addi      r3, r3, 0x4741
      blr
    */
}

/*
 * --INFO--
 * Address:	802175D0
 * Size:	000014
 */
void og::Screen::DispMemberSMenuCont::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x434F
      lis       r3, 0x53
      addi      r4, r4, 0x4E54
      addi      r3, r3, 0x4D5F
      blr
    */
}

/*
 * --INFO--
 * Address:	802175E4
 * Size:	000008
 */
void og::Screen::DispMemberSMenuPauseVS::getSize(void)
{
    /*
    .loc_0x0:
      li        r3, 0xC
      blr
    */
}

/*
 * --INFO--
 * Address:	802175EC
 * Size:	00000C
 */
void og::Screen::DispMemberSMenuPauseVS::getOwnerID(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x4F
      addi      r3, r3, 0x4741
      blr
    */
}

/*
 * --INFO--
 * Address:	802175F8
 * Size:	000014
 */
void og::Screen::DispMemberSMenuPauseVS::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x535F
      lis       r3, 0x534D
      addi      r4, r4, 0x5653
      addi      r3, r3, 0x5F50
      blr
    */
}

/*
 * --INFO--
 * Address:	8021760C
 * Size:	000008
 */
void og::Screen::DispMemberSMenuMap::getSize(void)
{
    /*
    .loc_0x0:
      li        r3, 0x4C
      blr
    */
}

/*
 * --INFO--
 * Address:	80217614
 * Size:	00000C
 */
void og::Screen::DispMemberSMenuMap::getOwnerID(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x4F
      addi      r3, r3, 0x4741
      blr
    */
}

/*
 * --INFO--
 * Address:	80217620
 * Size:	000010
 */
void og::Screen::DispMemberSMenuMap::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x5F4D
      li        r3, 0x534D
      addi      r4, r4, 0x4150
      blr
    */
}

/*
 * --INFO--
 * Address:	80217630
 * Size:	000008
 */
void og::Screen::DispMemberSMenuItem::getSize(void)
{
    /*
    .loc_0x0:
      li        r3, 0x28
      blr
    */
}

/*
 * --INFO--
 * Address:	80217638
 * Size:	00000C
 */
void og::Screen::DispMemberSMenuItem::getOwnerID(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x4F
      addi      r3, r3, 0x4741
      blr
    */
}

/*
 * --INFO--
 * Address:	80217644
 * Size:	000014
 */
void og::Screen::DispMemberSMenuItem::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x4954
      lis       r3, 0x53
      addi      r4, r4, 0x454D
      addi      r3, r3, 0x4D5F
      blr
    */
}

/*
 * --INFO--
 * Address:	80217658
 * Size:	000008
 */
void og::Screen::DispMemberSMenuPauseDoukutu::getSize(void)
{
    /*
    .loc_0x0:
      li        r3, 0x18
      blr
    */
}

/*
 * --INFO--
 * Address:	80217660
 * Size:	00000C
 */
void og::Screen::DispMemberSMenuPauseDoukutu::getOwnerID(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x4F
      addi      r3, r3, 0x4741
      blr
    */
}

/*
 * --INFO--
 * Address:	8021766C
 * Size:	000014
 */
void og::Screen::DispMemberSMenuPauseDoukutu::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x5345
      lis       r3, 0x50
      addi      r4, r4, 0x5F44
      addi      r3, r3, 0x4155
      blr
    */
}

/*
 * --INFO--
 * Address:	80217680
 * Size:	000008
 */
void og::Screen::DispMemberSMenuPause::getSize(void)
{
    /*
    .loc_0x0:
      li        r3, 0x14
      blr
    */
}

/*
 * --INFO--
 * Address:	80217688
 * Size:	00000C
 */
void og::Screen::DispMemberSMenuPause::getOwnerID(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x4F
      addi      r3, r3, 0x4741
      blr
    */
}

/*
 * --INFO--
 * Address:	80217694
 * Size:	000014
 */
void og::Screen::DispMemberSMenuPause::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x4155
      lis       r3, 0x534D
      addi      r4, r4, 0x5345
      addi      r3, r3, 0x5F50
      blr
    */
}

/*
 * --INFO--
 * Address:	802176A8
 * Size:	000008
 */
void og::Screen::DispMemberSMenuAll::getSize(void)
{
    /*
    .loc_0x0:
      li        r3, 0xC4
      blr
    */
}

/*
 * --INFO--
 * Address:	802176B0
 * Size:	00000C
 */
void og::Screen::DispMemberSMenuAll::getOwnerID(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x4F
      addi      r3, r3, 0x4741
      blr
    */
}

/*
 * --INFO--
 * Address:	802176BC
 * Size:	000010
 */
void og::Screen::DispMemberSMenuAll::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x5F41
      li        r3, 0x534D
      addi      r4, r4, 0x4C4C
      blr
    */
}

/*
 * --INFO--
 * Address:	802176CC
 * Size:	00006C
 */
void og::Screen::DispMemberSMenuAll::doSetSubMemberAll(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r4, r31, 0x8
      bl        0xF7CF8
      mr        r3, r31
      addi      r4, r31, 0x1C
      bl        0xF7CEC
      mr        r3, r31
      addi      r4, r31, 0x34
      bl        0xF7CE0
      mr        r3, r31
      addi      r4, r31, 0x5C
      bl        0xF7CD4
      mr        r3, r31
      addi      r4, r31, 0xA8
      bl        0xF7CC8
      mr        r3, r31
      addi      r4, r31, 0xB4
      bl        0xF7CBC
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80217738
 * Size:	000028
 */
void __sinit_singleGS_MainGame_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804C
      stw       r0, -0x6A98(r13)
      stfsu     f0, 0x4D8(r3)
      stfs      f0, -0x6A94(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
