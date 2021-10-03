

/*
 * --INFO--
 * Address:	8005DAAC
 * Size:	000114
 */
void J3DSys::J3DSys()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x7AD8
      bl        0x7E9C
      bl        0x7C30
      bl        0x7D5C
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x34(r31)
      bl        0x8C7C4
      li        r5, 0x1
      lis       r3, 0x8051
      stw       r5, 0x50(r31)
      li        r0, 0
      subi      r4, r3, 0xBE4
      mr        r3, r31
      stw       r0, 0x54(r31)
      stw       r0, 0x38(r31)
      stw       r0, 0x44(r31)
      stw       r0, 0x48(r31)
      stw       r0, 0x4C(r31)
      stw       r0, 0x58(r31)
      stw       r0, 0x3C(r31)
      stw       r0, 0x40(r31)
      stw       r0, 0x104(r31)
      stw       r0, 0x108(r31)
      stw       r0, 0x10C(r31)
      stw       r0, 0x110(r31)
      stw       r0, 0x114(r31)
      sth       r5, 0x0(r4)
      sth       r5, 0x2(r4)
      sth       r0, 0x4(r4)
      sth       r0, 0x6(r4)
      sth       r5, 0x8(r4)
      sth       r5, 0xA(r4)
      sth       r0, 0xC(r4)
      sth       r0, 0xE(r4)
      sth       r5, 0x10(r4)
      sth       r5, 0x12(r4)
      sth       r0, 0x14(r4)
      sth       r0, 0x16(r4)
      sth       r5, 0x18(r4)
      sth       r5, 0x1A(r4)
      sth       r0, 0x1C(r4)
      sth       r0, 0x1E(r4)
      sth       r5, 0x20(r4)
      sth       r5, 0x22(r4)
      sth       r0, 0x24(r4)
      sth       r0, 0x26(r4)
      sth       r5, 0x28(r4)
      sth       r5, 0x2A(r4)
      sth       r0, 0x2C(r4)
      sth       r0, 0x2E(r4)
      sth       r5, 0x30(r4)
      sth       r5, 0x32(r4)
      sth       r0, 0x34(r4)
      sth       r0, 0x36(r4)
      sth       r5, 0x38(r4)
      sth       r5, 0x3A(r4)
      sth       r0, 0x3C(r4)
      sth       r0, 0x3E(r4)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8005DBC0
 * Size:	000024
 */
void J3DSys::loadPosMtxIndx(int, unsigned short) const
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0xC
      li        r4, 0x20
      lis       r3, 0xCC01
      stb       r4, -0x8000(r3)
      rlwinm    r0,r0,0,16,31
      sth       r5, -0x8000(r3)
      ori       r0, r0, 0xB000
      sth       r0, -0x8000(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8005DBE4
 * Size:	000028
 */
void J3DSys::loadNrmMtxIndx(int, unsigned short) const
{
    /*
    .loc_0x0:
      mulli     r3, r4, 0x9
      li        r0, 0x28
      lis       r4, 0xCC01
      stb       r0, -0x8000(r4)
      addi      r0, r3, 0x400
      rlwinm    r0,r0,0,16,31
      sth       r5, -0x8000(r4)
      ori       r0, r0, 0x8000
      sth       r0, -0x8000(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000198
 */
void J3DSys::setTexCacheRegion(_GXTexCacheSize)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8005DC0C
 * Size:	0007B8
 */
void J3DSys::drawInit()
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      lis       r4, 0x8048
      stw       r0, 0x84(r1)
      stmw      r27, 0x6C(r1)
      mr        r30, r3
      subi      r31, r4, 0x7900
      bl        0x870E4
      li        r3, 0
      bl        0x8B9E8
      li        r3, 0x2
      bl        0x87F70
      li        r3, 0
      bl        0x87FAC
      li        r3, 0
      bl        0x8BC90
      li        r3, 0x1
      bl        0x8B4DC
      li        r3, 0x1
      bl        0x8B668
      li        r3, 0x1
      li        r4, 0x4
      li        r5, 0x5
      li        r6, 0x5
      bl        0x8B46C
      li        r3, 0x7
      li        r4, 0
      li        r5, 0
      li        r6, 0x7
      li        r7, 0
      bl        0x8ACC8
      li        r3, 0x1
      li        r4, 0x3
      li        r5, 0x1
      bl        0x8B4F0
      li        r3, 0x1
      bl        0x8B51C
      li        r3, 0
      li        r4, 0x9
      li        r5, 0x1
      li        r6, 0x4
      li        r7, 0
      bl        0x86A54
      li        r3, 0
      li        r4, 0xA
      li        r5, 0
      li        r6, 0x4
      li        r7, 0
      bl        0x86A3C
      li        r3, 0
      li        r4, 0xB
      li        r5, 0x1
      li        r6, 0x5
      li        r7, 0
      bl        0x86A24
      li        r3, 0
      li        r4, 0xC
      li        r5, 0x1
      li        r6, 0x5
      li        r7, 0
      bl        0x86A0C
      li        r3, 0
      li        r4, 0xD
      li        r5, 0x1
      li        r6, 0x3
      li        r7, 0x7
      bl        0x869F4
      li        r3, 0
      li        r4, 0xE
      li        r5, 0x1
      li        r6, 0x3
      li        r7, 0x7
      bl        0x869DC
      li        r3, 0
      li        r4, 0xF
      li        r5, 0x1
      li        r6, 0x3
      li        r7, 0x7
      bl        0x869C4
      li        r3, 0
      li        r4, 0x10
      li        r5, 0x1
      li        r6, 0x3
      li        r7, 0x7
      bl        0x869AC
      li        r3, 0
      li        r4, 0x11
      li        r5, 0x1
      li        r6, 0x3
      li        r7, 0x7
      bl        0x86994
      li        r3, 0
      li        r4, 0x12
      li        r5, 0x1
      li        r6, 0x3
      li        r7, 0x7
      bl        0x8697C
      li        r3, 0
      li        r4, 0x13
      li        r5, 0x1
      li        r6, 0x3
      li        r7, 0x7
      bl        0x86964
      li        r3, 0
      li        r4, 0x14
      li        r5, 0x1
      li        r6, 0x3
      li        r7, 0x7
      bl        0x8694C
      li        r3, 0
      bl        0x8A590
      mr        r3, r30
      bl        0x850
      li        r3, 0
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8AC3C
      li        r3, 0x1
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8AC28
      li        r3, 0x2
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8AC14
      li        r3, 0x3
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8AC00
      li        r3, 0x4
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8ABEC
      li        r3, 0x5
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8ABD8
      li        r3, 0x6
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8ABC4
      li        r3, 0x7
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8ABB0
      li        r3, 0x8
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8AB9C
      li        r3, 0x9
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8AB88
      li        r3, 0xA
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8AB74
      li        r3, 0xB
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8AB60
      li        r3, 0xC
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8AB4C
      li        r3, 0xD
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8AB38
      li        r3, 0xE
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8AB24
      li        r3, 0xF
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8AB10
      lis       r4, 0x804A
      li        r27, 0
      addi      r28, r4, 0x1490
      li        r29, 0x1E

    .loc_0x314:
      mr        r3, r28
      mr        r4, r29
      li        r5, 0
      bl        0x8B720
      addi      r27, r27, 0x1
      addi      r29, r29, 0x3
      cmplwi    r27, 0xA
      blt+      .loc_0x314
      lwz       r8, 0x20(r31)
      li        r27, 0
      lwz       r7, 0x24(r31)
      lwz       r6, 0x28(r31)
      lwz       r5, 0x2C(r31)
      lwz       r4, 0x30(r31)
      lwz       r0, 0x34(r31)
      stw       r8, 0x44(r1)
      stw       r7, 0x48(r1)
      stw       r6, 0x4C(r1)
      stw       r5, 0x50(r1)
      stw       r4, 0x54(r1)
      stw       r0, 0x58(r1)
      b         .loc_0x384

    .loc_0x36C:
      rlwinm    r5,r27,0,24,31
      addi      r4, r1, 0x44
      addi      r3, r5, 0x1
      li        r5, 0x1
      bl        0x8A024
      addi      r27, r27, 0x1

    .loc_0x384:
      rlwinm    r0,r27,0,24,31
      cmplwi    r0, 0x3
      blt+      .loc_0x36C
      lwz       r0, -0x79A0(r2)
      addi      r4, r1, 0x18
      li        r3, 0x4
      stw       r0, 0x18(r1)
      bl        0x88DC8
      lwz       r0, -0x79A0(r2)
      addi      r4, r1, 0x14
      li        r3, 0x5
      stw       r0, 0x14(r1)
      bl        0x88DB4
      lbz       r3, -0x7998(r2)
      bl        0x88E9C
      li        r3, 0x1
      bl        0x86FCC
      li        r3, 0x1
      bl        0x8ABE0
      li        r3, 0x4
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0
      li        r8, 0x2
      li        r9, 0x2
      bl        0x88EA8
      li        r3, 0x5
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0
      li        r8, 0x2
      li        r9, 0x2
      bl        0x88E88
      lis       r4, 0x8048
      li        r27, 0
      subi      r28, r4, 0x7758
      b         .loc_0x448

    .loc_0x420:
      rlwinm    r0,r27,2,22,29
      rlwinm    r3,r27,0,24,31
      add       r6, r28, r0
      li        r7, 0
      lbz       r4, 0x0(r6)
      li        r8, 0x7D
      lbz       r5, 0x1(r6)
      lbz       r6, 0x2(r6)
      bl        0x86CD0
      addi      r27, r27, 0x1

    .loc_0x448:
      rlwinm    r0,r27,0,24,31
      cmplwi    r0, 0x8
      blt+      .loc_0x420
      li        r27, 0
      b         .loc_0x470

    .loc_0x45C:
      rlwinm    r3,r27,0,24,31
      li        r4, 0
      li        r5, 0
      bl        0x8A0B0
      addi      r27, r27, 0x1

    .loc_0x470:
      rlwinm    r0,r27,0,24,31
      cmplwi    r0, 0x4
      blt+      .loc_0x45C
      lwz       r28, -0x7980(r2)
      li        r27, 0
      b         .loc_0x49C

    .loc_0x488:
      stw       r28, 0x10(r1)
      rlwinm    r3,r27,0,24,31
      addi      r4, r1, 0x10
      bl        0x8A6B8
      addi      r27, r27, 0x1

    .loc_0x49C:
      rlwinm    r0,r27,0,24,31
      cmplwi    r0, 0x4
      blt+      .loc_0x488
      lwz       r29, -0x798C(r2)
      li        r27, 0
      lwz       r28, -0x7988(r2)
      b         .loc_0x4D0

    .loc_0x4B8:
      stw       r29, 0x1C(r1)
      rlwinm    r3,r27,0,24,31
      addi      r4, r1, 0x1C
      stw       r28, 0x20(r1)
      bl        0x8A608
      addi      r27, r27, 0x1

    .loc_0x4D0:
      rlwinm    r0,r27,0,24,31
      cmplwi    r0, 0x4
      blt+      .loc_0x4B8
      li        r28, 0
      b         .loc_0x554

    .loc_0x4E4:
      rlwinm    r27,r28,0,24,31
      li        r4, 0xA
      mr        r3, r27
      li        r5, 0xF
      li        r6, 0xF
      li        r7, 0xF
      bl        0x8A400
      mr        r3, r27
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0x1
      li        r8, 0
      bl        0x8A46C
      mr        r3, r27
      li        r4, 0x5
      li        r5, 0x7
      li        r6, 0x7
      li        r7, 0x7
      bl        0x8A410
      mr        r3, r27
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0x1
      li        r8, 0
      bl        0x8A4A0
      addi      r28, r28, 0x1

    .loc_0x554:
      rlwinm    r0,r28,0,24,31
      cmplwi    r0, 0x10
      blt+      .loc_0x4E4
      li        r27, 0
      b         .loc_0x57C

    .loc_0x568:
      rlwinm    r3,r27,0,24,31
      li        r4, 0
      li        r5, 0
      bl        0x8A704
      addi      r27, r27, 0x1

    .loc_0x57C:
      rlwinm    r0,r27,0,24,31
      cmplwi    r0, 0x10
      blt+      .loc_0x568
      li        r3, 0
      li        r4, 0
      li        r5, 0x1
      li        r6, 0x2
      li        r7, 0x3
      bl        0x8A724
      li        r3, 0x1
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0x3
      bl        0x8A70C
      li        r3, 0x2
      li        r4, 0x1
      li        r5, 0x1
      li        r6, 0x1
      li        r7, 0x3
      bl        0x8A6F4
      li        r3, 0x3
      li        r4, 0x2
      li        r5, 0x2
      li        r6, 0x2
      li        r7, 0x3
      bl        0x8A6DC
      li        r27, 0
      mr        r29, r27
      mr        r28, r27
      b         .loc_0x628

    .loc_0x5F8:
      stw       r29, 0x8(r1)
      rlwinm    r3,r27,0,24,31
      li        r4, 0
      li        r5, 0
      stw       r28, 0xC(r1)
      li        r6, 0
      li        r7, 0
      li        r8, 0
      li        r9, 0
      li        r10, 0
      bl        0x89D14
      addi      r27, r27, 0x1

    .loc_0x628:
      rlwinm    r0,r27,0,24,31
      cmplwi    r0, 0x10
      blt+      .loc_0x5F8
      li        r3, 0x4
      oris      r3, r3, 0x4
      mtspr     914, r3
      li        r3, 0x5
      oris      r3, r3, 0x5
      mtspr     915, r3
      li        r3, 0x6
      oris      r3, r3, 0x6
      mtspr     916, r3
      li        r3, 0x7
      oris      r3, r3, 0x7
      mtspr     917, r3
      lwz       r28, 0x0(r31)
      lwz       r9, 0x4(r31)
      lwz       r8, 0x8(r31)
      lwz       r7, 0xC(r31)
      lwz       r29, 0x10(r31)
      lwz       r6, 0x14(r31)
      lwz       r5, 0x18(r31)
      lwz       r4, 0x1C(r31)
      stw       r28, 0x24(r1)
      stw       r29, 0x60(r30)
      lwz       r0, 0x34(r30)
      stw       r9, 0x28(r1)
      rlwinm.   r0,r0,0,0,0
      stw       r8, 0x2C(r1)
      stw       r7, 0x30(r1)
      stw       r29, 0x34(r1)
      stw       r6, 0x38(r1)
      stw       r5, 0x3C(r1)
      stw       r4, 0x40(r1)
      beq-      .loc_0x750
      li        r31, 0
      mr        r27, r30
      mr        r30, r31
      b         .loc_0x744

    .loc_0x6C4:
      rlwinm.   r0,r31,0,31,31
      beq-      .loc_0x704
      mr        r7, r30
      addi      r3, r27, 0x64
      addis     r5, r30, 0x8
      li        r4, 0
      li        r6, 0
      li        r8, 0
      bl        0x89544
      mr        r3, r31
      mr        r6, r30
      addis     r4, r30, 0x8
      li        r5, 0
      li        r7, 0
      bl        0x18E38
      b         .loc_0x738

    .loc_0x704:
      mr        r5, r30
      addi      r3, r27, 0x64
      addis     r7, r30, 0x8
      li        r4, 0
      li        r6, 0
      li        r8, 0
      bl        0x8950C
      mr        r3, r31
      mr        r4, r30
      addis     r6, r30, 0x8
      li        r5, 0
      li        r7, 0
      bl        0x18E00

    .loc_0x738:
      add       r30, r30, r28
      addi      r27, r27, 0x10
      addi      r31, r31, 0x1

    .loc_0x744:
      cmplw     r31, r29
      blt+      .loc_0x6C4
      b         .loc_0x7A4

    .loc_0x750:
      li        r31, 0
      mr        r27, r31
      b         .loc_0x79C

    .loc_0x75C:
      mr        r5, r27
      addi      r3, r30, 0x64
      addis     r7, r27, 0x8
      li        r4, 0
      li        r6, 0
      li        r8, 0
      bl        0x894B4
      mr        r3, r31
      mr        r4, r27
      addis     r6, r27, 0x8
      li        r5, 0
      li        r7, 0
      bl        0x18DA8
      add       r27, r27, r28
      addi      r30, r30, 0x10
      addi      r31, r31, 0x1

    .loc_0x79C:
      cmplw     r31, r29
      blt+      .loc_0x75C

    .loc_0x7A4:
      lmw       r27, 0x6C(r1)
      lwz       r0, 0x84(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	8005E3C4
 * Size:	00005C
 */
void J3DSys::reinitGX()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        .loc_0x5C
      mr        r3, r31
      bl        0x8C
      mr        r3, r31
      bl        0x130
      mr        r3, r31
      bl        0x22C
      mr        r3, r31
      bl        0x2C8
      mr        r3, r31
      bl        0x5C8
      mr        r3, r31
      bl        0x6B8
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x5C:
    */
}

/*
 * --INFO--
 * Address:	8005E420
 * Size:	00004C
 */
void J3DSys::reinitGenMode()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r3, 0
      stw       r0, 0x14(r1)
      bl        0x88A34
      li        r3, 0x1
      bl        0x86B64
      li        r3, 0x1
      bl        0x8A778
      li        r3, 0
      bl        0x89F0C
      li        r3, 0x2
      bl        0x87758
      li        r3, 0
      bl        0x87794
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8005E46C
 * Size:	0000AC
 */
void J3DSys::reinitLighting()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      li        r3, 0x4
      li        r4, 0
      stw       r0, 0x24(r1)
      li        r5, 0
      li        r6, 0x1
      li        r7, 0
      li        r8, 0
      li        r9, 0x2
      bl        0x88A0C
      li        r3, 0x5
      li        r4, 0
      li        r5, 0
      li        r6, 0x1
      li        r7, 0
      li        r8, 0
      li        r9, 0x2
      bl        0x889EC
      lwz       r0, -0x7FA8(r13)
      addi      r4, r1, 0x14
      li        r3, 0x4
      stw       r0, 0x14(r1)
      bl        0x887BC
      lwz       r0, -0x7FA8(r13)
      addi      r4, r1, 0x10
      li        r3, 0x5
      stw       r0, 0x10(r1)
      bl        0x887A8
      lwz       r0, -0x7FA4(r13)
      addi      r4, r1, 0xC
      li        r3, 0x4
      stw       r0, 0xC(r1)
      bl        0x88884
      lwz       r0, -0x7FA4(r13)
      addi      r4, r1, 0x8
      li        r3, 0x5
      stw       r0, 0x8(r1)
      bl        0x88870
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8005E518
 * Size:	000104
 */
void J3DSys::reinitTransform()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r3, 0
      stw       r0, 0x14(r1)
      bl        0x8B0F0
      li        r3, 0
      li        r4, 0x1
      li        r5, 0x4
      li        r6, 0x3C
      li        r7, 0
      li        r8, 0x7D
      bl        0x867D8
      li        r3, 0x1
      li        r4, 0x1
      li        r5, 0x5
      li        r6, 0x3C
      li        r7, 0
      li        r8, 0x7D
      bl        0x867BC
      li        r3, 0x2
      li        r4, 0x1
      li        r5, 0x6
      li        r6, 0x3C
      li        r7, 0
      li        r8, 0x7D
      bl        0x867A0
      li        r3, 0x3
      li        r4, 0x1
      li        r5, 0x7
      li        r6, 0x3C
      li        r7, 0
      li        r8, 0x7D
      bl        0x86784
      li        r3, 0x4
      li        r4, 0x1
      li        r5, 0x8
      li        r6, 0x3C
      li        r7, 0
      li        r8, 0x7D
      bl        0x86768
      li        r3, 0x5
      li        r4, 0x1
      li        r5, 0x9
      li        r6, 0x3C
      li        r7, 0
      li        r8, 0x7D
      bl        0x8674C
      li        r3, 0x6
      li        r4, 0x1
      li        r5, 0xA
      li        r6, 0x3C
      li        r7, 0
      li        r8, 0x7D
      bl        0x86730
      li        r3, 0x7
      li        r4, 0x1
      li        r5, 0xB
      li        r6, 0x3C
      li        r7, 0
      li        r8, 0x7D
      bl        0x86714
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8005E61C
 * Size:	0000A4
 */
void J3DSys::reinitTexture()
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r4, 0x804A
      li        r5, 0x4
      stw       r0, 0x34(r1)
      addi      r3, r1, 0x8
      addi      r4, r4, 0x1480
      li        r6, 0x4
      li        r7, 0x3
      li        r8, 0
      li        r9, 0
      li        r10, 0
      bl        0x88B30
      addi      r3, r1, 0x8
      li        r4, 0
      bl        0x890B8
      addi      r3, r1, 0x8
      li        r4, 0x1
      bl        0x890AC
      addi      r3, r1, 0x8
      li        r4, 0x2
      bl        0x890A0
      addi      r3, r1, 0x8
      li        r4, 0x3
      bl        0x89094
      addi      r3, r1, 0x8
      li        r4, 0x4
      bl        0x89088
      addi      r3, r1, 0x8
      li        r4, 0x5
      bl        0x8907C
      addi      r3, r1, 0x8
      li        r4, 0x6
      bl        0x89070
      addi      r3, r1, 0x8
      li        r4, 0x7
      bl        0x89064
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8005E6C0
 * Size:	000308
 */
void J3DSys::reinitTevStages()
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      li        r3, 0
      li        r4, 0xFF
      stw       r0, 0x34(r1)
      li        r5, 0xFF
      li        r6, 0xFF
      stw       r31, 0x2C(r1)
      bl        0x8A33C
      li        r3, 0x1
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8A328
      li        r3, 0x2
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8A314
      li        r3, 0x3
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8A300
      li        r3, 0x4
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8A2EC
      li        r3, 0x5
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8A2D8
      li        r3, 0x6
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8A2C4
      li        r3, 0x7
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8A2B0
      li        r3, 0x8
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8A29C
      li        r3, 0x9
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8A288
      li        r3, 0xA
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8A274
      li        r3, 0xB
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8A260
      li        r3, 0xC
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8A24C
      li        r3, 0xD
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8A238
      li        r3, 0xE
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8A224
      li        r3, 0xF
      li        r4, 0xFF
      li        r5, 0xFF
      li        r6, 0xFF
      bl        0x8A210
      lwz       r0, -0x7FA4(r13)
      addi      r4, r1, 0x20
      li        r3, 0x1
      stw       r0, 0x20(r1)
      bl        0x89E40
      lwz       r0, -0x7FA4(r13)
      addi      r4, r1, 0x1C
      li        r3, 0x2
      stw       r0, 0x1C(r1)
      bl        0x89E2C
      lwz       r0, -0x7FA4(r13)
      addi      r4, r1, 0x18
      li        r3, 0x3
      stw       r0, 0x18(r1)
      bl        0x89E18
      lwz       r0, -0x7FA4(r13)
      addi      r4, r1, 0x14
      li        r3, 0
      stw       r0, 0x14(r1)
      bl        0x89EFC
      lwz       r0, -0x7FA4(r13)
      addi      r4, r1, 0x10
      li        r3, 0x1
      stw       r0, 0x10(r1)
      bl        0x89EE8
      lwz       r0, -0x7FA4(r13)
      addi      r4, r1, 0xC
      li        r3, 0x2
      stw       r0, 0xC(r1)
      bl        0x89ED4
      lwz       r0, -0x7FA4(r13)
      addi      r4, r1, 0x8
      li        r3, 0x3
      stw       r0, 0x8(r1)
      bl        0x89EC0
      li        r31, 0

    .loc_0x1E0:
      mr        r3, r31
      li        r4, 0xA
      li        r5, 0xF
      li        r6, 0xF
      li        r7, 0xF
      bl        0x89C54
      mr        r3, r31
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0x1
      li        r8, 0
      bl        0x89CC0
      mr        r3, r31
      li        r4, 0x5
      li        r5, 0x7
      li        r6, 0x7
      li        r7, 0x7
      bl        0x89C64
      mr        r3, r31
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0x1
      li        r8, 0
      bl        0x89CF4
      mr        r3, r31
      li        r4, 0x6
      bl        0x89EBC
      mr        r3, r31
      li        r4, 0
      bl        0x89F0C
      mr        r3, r31
      li        r4, 0
      li        r5, 0
      bl        0x89F58
      addi      r31, r31, 0x1
      cmplwi    r31, 0x10
      blt+      .loc_0x1E0
      li        r3, 0
      li        r4, 0
      li        r5, 0x1
      li        r6, 0x2
      li        r7, 0x3
      bl        0x89F7C
      li        r3, 0x1
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0x3
      bl        0x89F64
      li        r3, 0x2
      li        r4, 0x1
      li        r5, 0x1
      li        r6, 0x1
      li        r7, 0x3
      bl        0x89F4C
      li        r3, 0x3
      li        r4, 0x2
      li        r5, 0x2
      li        r6, 0x2
      li        r7, 0x3
      bl        0x89F34
      li        r3, 0x7
      li        r4, 0
      li        r5, 0
      li        r6, 0x7
      li        r7, 0
      bl        0x89F9C
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8005E9C8
 * Size:	0000F8
 */
void J3DSys::reinitIndStages()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0

    .loc_0x14:
      mr        r3, r31
      bl        0x89998
      addi      r31, r31, 0x1
      cmplwi    r31, 0x10
      blt+      .loc_0x14
      li        r3, 0
      li        r4, 0
      li        r5, 0
      bl        0x8986C
      li        r3, 0x1
      li        r4, 0x1
      li        r5, 0x1
      bl        0x8985C
      li        r3, 0x2
      li        r4, 0x2
      li        r5, 0x2
      bl        0x8984C
      li        r3, 0x3
      li        r4, 0x3
      li        r5, 0x3
      bl        0x8983C
      li        r3, 0
      li        r4, 0
      li        r5, 0
      bl        0x896E8
      li        r3, 0x1
      li        r4, 0
      li        r5, 0
      bl        0x896D8
      li        r3, 0x2
      li        r4, 0
      li        r5, 0
      bl        0x896C8
      li        r3, 0x3
      li        r4, 0
      li        r5, 0
      bl        0x896B8
      lis       r4, 0x804A
      li        r3, 0x1
      addi      r4, r4, 0x14C0
      li        r5, 0x1
      bl        0x8952C
      lis       r4, 0x804A
      li        r3, 0x2
      addi      r4, r4, 0x14C0
      li        r5, 0x1
      bl        0x89518
      lis       r4, 0x804A
      li        r3, 0x3
      addi      r4, r4, 0x14C0
      li        r5, 0x1
      bl        0x89504
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8005EAC0
 * Size:	000094
 */
void J3DSys::reinitPixelProc()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r3, 0
      li        r4, 0x4
      stw       r0, 0x14(r1)
      li        r5, 0x5
      li        r6, 0
      bl        0x8A5FC
      li        r3, 0x1
      bl        0x8A648
      li        r3, 0x1
      bl        0x8A66C
      li        r3, 0x1
      bl        0x8A7CC
      lfs       f2, -0x79D4(r2)
      addi      r4, r1, 0x8
      lwz       r0, -0x7FA8(r13)
      li        r3, 0
      fmr       f4, f2
      lfs       f1, -0x79D8(r2)
      stw       r0, 0x8(r1)
      lfs       f3, -0x79D0(r2)
      bl        0x8A0C8
      li        r3, 0
      li        r4, 0
      li        r5, 0
      bl        0x8A48C
      li        r3, 0x1
      li        r4, 0x3
      li        r5, 0x1
      bl        0x8A64C
      li        r3, 0x1
      bl        0x8A678
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8005EB54
 * Size:	000004
 */
void J3DSys::ErrorReport(J3DErrType) const
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8005EB58
 * Size:	000028
 */
void __sinit_J3DSys_cpp(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r3, 0x8051
      stw       r0, 0x14(r1)
      subi      r3, r3, 0xDD0
      bl        -0x10C0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}