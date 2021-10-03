

/*
 * --INFO--
 * Address:	800725A0
 * Size:	0008C4
 */
void J3DAnmLoaderDataBase::load(const void*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      stw       r31, 0x6C(r1)
      mr.       r31, r3
      stw       r30, 0x68(r1)
      bne-      .loc_0x24
      li        r3, 0
      b         .loc_0x8AC

    .loc_0x24:
      lwz       r3, 0x0(r31)
      subis     r0, r3, 0x4A33
      cmplwi    r0, 0x4431
      bne-      .loc_0x8A8
      lis       r3, 0x6272
      lwz       r5, 0x4(r31)
      addi      r0, r3, 0x6B31
      cmpw      r5, r0
      beq-      .loc_0x3BC
      bge-      .loc_0xB8
      lis       r4, 0x626C
      addi      r0, r4, 0x6B31
      cmpw      r5, r0
      beq-      .loc_0x26C
      bge-      .loc_0x94
      lis       r3, 0x6263
      addi      r0, r3, 0x6B31
      cmpw      r5, r0
      beq-      .loc_0x114
      bge-      .loc_0x84
      addi      r0, r3, 0x6131
      cmpw      r5, r0
      beq-      .loc_0x524
      b         .loc_0x8A0

    .loc_0x84:
      addi      r0, r4, 0x6131
      cmpw      r5, r0
      beq-      .loc_0x788
      b         .loc_0x8A0

    .loc_0x94:
      lis       r3, 0x6270
      addi      r0, r3, 0x6B31
      cmpw      r5, r0
      beq-      .loc_0x1B4
      bge-      .loc_0x8A0
      addi      r0, r3, 0x6131
      cmpw      r5, r0
      beq-      .loc_0x5C0
      b         .loc_0x8A0

    .loc_0xB8:
      lis       r3, 0x6276
      addi      r0, r3, 0x6131
      cmpw      r5, r0
      beq-      .loc_0x708
      bge-      .loc_0xF0
      lis       r3, 0x6274
      addi      r0, r3, 0x7031
      cmpw      r5, r0
      beq-      .loc_0x678
      bge-      .loc_0x8A0
      addi      r0, r3, 0x6B31
      cmpw      r5, r0
      beq-      .loc_0x2F0
      b         .loc_0x8A0

    .loc_0xF0:
      lis       r3, 0x6278
      addi      r0, r3, 0x6B31
      cmpw      r5, r0
      beq-      .loc_0x490
      bge-      .loc_0x8A0
      addi      r0, r3, 0x6131
      cmpw      r5, r0
      beq-      .loc_0x80C
      b         .loc_0x8A0

    .loc_0x114:
      addi      r3, r1, 0x60
      bl        0x86C
      li        r3, 0x28
      bl        -0x4E81C
      cmplwi    r3, 0
      beq-      .loc_0x18C
      lis       r4, 0x804A
      lis       r5, 0x804A
      addi      r0, r4, 0x1A34
      lis       r4, 0x804A
      stw       r0, 0x0(r3)
      li        r6, 0
      lfs       f0, -0x78D0(r2)
      addi      r5, r5, 0x1AF8
      stb       r6, 0x4(r3)
      addi      r0, r4, 0x2034
      stb       r6, 0x5(r3)
      sth       r6, 0x6(r3)
      stfs      f0, 0x8(r3)
      stw       r5, 0x0(r3)
      stw       r6, 0xC(r3)
      stw       r6, 0x10(r3)
      stw       r6, 0x14(r3)
      sth       r6, 0x18(r3)
      sth       r6, 0x1A(r3)
      sth       r6, 0x1C(r3)
      sth       r6, 0x1E(r3)
      stw       r0, 0x0(r3)
      stw       r6, 0x20(r3)
      stw       r6, 0x24(r3)

    .loc_0x18C:
      stw       r3, 0x64(r1)
      mr        r4, r31
      addi      r3, r1, 0x60
      bl        0x1018
      mr        r31, r3
      addi      r3, r1, 0x60
      li        r4, -0x1
      bl        0x7F8
      mr        r3, r31
      b         .loc_0x8AC

    .loc_0x1B4:
      addi      r3, r1, 0x58
      bl        0x7CC
      li        r3, 0x40
      bl        -0x4E8BC
      mr.       r30, r3
      beq-      .loc_0x244
      lis       r3, 0x804A
      mr        r5, r30
      addi      r0, r3, 0x1A34
      lis       r3, 0x804A
      stw       r0, 0x0(r30)
      li        r4, 0
      lfs       f0, -0x78D0(r2)
      addi      r0, r3, 0x1A44
      stb       r4, 0x4(r30)
      addi      r3, r5, 0x1C
      stb       r4, 0x5(r30)
      sth       r4, 0x6(r30)
      stfs      f0, 0x8(r30)
      stw       r0, 0x0(r30)
      sth       r4, 0xC(r30)
      sth       r4, 0xE(r30)
      sth       r4, 0x10(r30)
      sth       r4, 0x12(r30)
      sth       r4, 0x14(r30)
      stw       r4, 0x18(r30)
      bl        -0x43AF0
      lis       r3, 0x804A
      li        r0, 0
      addi      r3, r3, 0x1A20
      stw       r3, 0x0(r30)
      stw       r0, 0x2C(r30)
      stw       r0, 0x30(r30)
      stw       r0, 0x34(r30)
      stw       r0, 0x38(r30)
      stw       r0, 0x3C(r30)

    .loc_0x244:
      stw       r30, 0x5C(r1)
      mr        r4, r31
      addi      r3, r1, 0x58
      bl        0xF60
      mr        r31, r3
      addi      r3, r1, 0x58
      li        r4, -0x1
      bl        0x740
      mr        r3, r31
      b         .loc_0x8AC

    .loc_0x26C:
      addi      r3, r1, 0x50
      bl        0x714
      li        r3, 0x14
      bl        -0x4E974
      cmplwi    r3, 0
      beq-      .loc_0x2C8
      lis       r4, 0x804A
      lis       r5, 0x804A
      addi      r0, r4, 0x1A34
      lis       r4, 0x804A
      stw       r0, 0x0(r3)
      li        r6, 0
      lfs       f0, -0x78D0(r2)
      addi      r5, r5, 0x1ABC
      stb       r6, 0x4(r3)
      addi      r0, r4, 0x1AA8
      stb       r6, 0x5(r3)
      sth       r6, 0x6(r3)
      stfs      f0, 0x8(r3)
      stw       r5, 0x0(r3)
      stw       r6, 0xC(r3)
      stw       r0, 0x0(r3)
      stw       r6, 0x10(r3)

    .loc_0x2C8:
      stw       r3, 0x54(r1)
      mr        r4, r31
      addi      r3, r1, 0x50
      bl        0xEDC
      mr        r31, r3
      addi      r3, r1, 0x50
      li        r4, -0x1
      bl        0x6BC
      mr        r3, r31
      b         .loc_0x8AC

    .loc_0x2F0:
      addi      r3, r1, 0x48
      bl        0x690
      li        r3, 0x7C
      bl        -0x4E9F8
      mr.       r30, r3
      beq-      .loc_0x394
      lis       r3, 0x804A
      li        r4, 0
      addi      r0, r3, 0x1A34
      lfs       f0, -0x78D0(r2)
      stw       r0, 0x0(r30)
      lis       r3, 0x804A
      addi      r0, r3, 0x2024
      stb       r4, 0x4(r30)
      addi      r3, r30, 0x30
      stb       r4, 0x5(r30)
      sth       r4, 0x6(r30)
      stfs      f0, 0x8(r30)
      stw       r0, 0x0(r30)
      bl        -0x43C10
      addi      r3, r30, 0x64
      bl        -0x43C18
      li        r0, 0
      stw       r0, 0xC(r30)
      sth       r0, 0x1A(r30)
      sth       r0, 0x18(r30)
      sth       r0, 0x16(r30)
      sth       r0, 0x14(r30)
      stw       r0, 0x10(r30)
      stw       r0, 0x24(r30)
      stw       r0, 0x1C(r30)
      stw       r0, 0x20(r30)
      sth       r0, 0x48(r30)
      sth       r0, 0x46(r30)
      sth       r0, 0x44(r30)
      sth       r0, 0x4A(r30)
      stw       r0, 0x58(r30)
      stw       r0, 0x54(r30)
      stw       r0, 0x4C(r30)
      stw       r0, 0x50(r30)
      stw       r0, 0x78(r30)

    .loc_0x394:
      stw       r30, 0x4C(r1)
      mr        r4, r31
      addi      r3, r1, 0x48
      bl        0xE10
      mr        r31, r3
      addi      r3, r1, 0x48
      li        r4, -0x1
      bl        0x5F0
      mr        r3, r31
      b         .loc_0x8AC

    .loc_0x3BC:
      addi      r3, r1, 0x40
      bl        0x5C4
      li        r3, 0x70
      bl        -0x4EAC4
      mr.       r30, r3
      beq-      .loc_0x468
      lis       r3, 0x804A
      li        r4, 0
      addi      r0, r3, 0x1A34
      lfs       f0, -0x78D0(r2)
      stw       r0, 0x0(r30)
      lis       r3, 0x804A
      addi      r0, r3, 0x2014
      stb       r4, 0x4(r30)
      addi      r3, r30, 0x24
      stb       r4, 0x5(r30)
      sth       r4, 0x6(r30)
      stfs      f0, 0x8(r30)
      stw       r0, 0x0(r30)
      bl        -0x43CDC
      addi      r3, r30, 0x38
      bl        -0x43CE4
      li        r0, 0
      sth       r0, 0xE(r30)
      sth       r0, 0xC(r30)
      sth       r0, 0x16(r30)
      sth       r0, 0x14(r30)
      sth       r0, 0x12(r30)
      sth       r0, 0x10(r30)
      sth       r0, 0x1E(r30)
      sth       r0, 0x1C(r30)
      sth       r0, 0x1A(r30)
      sth       r0, 0x18(r30)
      stw       r0, 0x34(r30)
      stw       r0, 0x20(r30)
      stw       r0, 0x5C(r30)
      stw       r0, 0x58(r30)
      stw       r0, 0x54(r30)
      stw       r0, 0x50(r30)
      stw       r0, 0x6C(r30)
      stw       r0, 0x68(r30)
      stw       r0, 0x64(r30)
      stw       r0, 0x60(r30)

    .loc_0x468:
      stw       r30, 0x44(r1)
      mr        r4, r31
      addi      r3, r1, 0x40
      bl        0xD3C
      mr        r31, r3
      addi      r3, r1, 0x40
      li        r4, -0x1
      bl        0x51C
      mr        r3, r31
      b         .loc_0x8AC

    .loc_0x490:
      addi      r3, r1, 0x38
      bl        0x4F0
      li        r3, 0x30
      bl        -0x4EB98
      cmplwi    r3, 0
      beq-      .loc_0x4FC
      lis       r4, 0x804A
      lis       r5, 0x804A
      addi      r0, r4, 0x1A34
      lis       r4, 0x804A
      stw       r0, 0x0(r3)
      li        r6, 0
      lfs       f0, -0x78D0(r2)
      addi      r5, r5, 0x1A80
      stb       r6, 0x4(r3)
      addi      r0, r4, 0x1A6C
      stb       r6, 0x5(r3)
      sth       r6, 0x6(r3)
      stfs      f0, 0x8(r3)
      stw       r5, 0x0(r3)
      sth       r6, 0xC(r3)
      sth       r6, 0xE(r3)
      stw       r6, 0x10(r3)
      stw       r6, 0x14(r3)
      stw       r0, 0x0(r3)
      stw       r6, 0x18(r3)
      stw       r6, 0x1C(r3)

    .loc_0x4FC:
      stw       r3, 0x3C(r1)
      mr        r4, r31
      addi      r3, r1, 0x38
      bl        0xCA8
      mr        r31, r3
      addi      r3, r1, 0x38
      li        r4, -0x1
      bl        0x488
      mr        r3, r31
      b         .loc_0x8AC

    .loc_0x524:
      addi      r3, r1, 0x30
      bl        .loc_0x8C4
      li        r3, 0x24
      bl        -0x4EC2C
      cmplwi    r3, 0
      beq-      .loc_0x598
      lis       r4, 0x804A
      lis       r5, 0x804A
      addi      r0, r4, 0x1A34
      lis       r4, 0x804A
      stw       r0, 0x0(r3)
      li        r6, 0
      lfs       f0, -0x78D0(r2)
      addi      r5, r5, 0x1AF8
      stb       r6, 0x4(r3)
      addi      r0, r4, 0x1AE4
      stb       r6, 0x5(r3)
      sth       r6, 0x6(r3)
      stfs      f0, 0x8(r3)
      stw       r5, 0x0(r3)
      stw       r6, 0xC(r3)
      stw       r6, 0x10(r3)
      stw       r6, 0x14(r3)
      sth       r6, 0x18(r3)
      sth       r6, 0x1A(r3)
      sth       r6, 0x1C(r3)
      sth       r6, 0x1E(r3)
      stw       r0, 0x0(r3)
      stw       r6, 0x20(r3)

    .loc_0x598:
      stw       r3, 0x34(r1)
      mr        r4, r31
      addi      r3, r1, 0x30
      bl        0x458
      mr        r31, r3
      addi      r3, r1, 0x30
      li        r4, -0x1
      bl        0x374
      mr        r3, r31
      b         .loc_0x8AC

    .loc_0x5C0:
      addi      r3, r1, 0x28
      bl        .loc_0x8C4
      li        r3, 0x40
      bl        -0x4ECC8
      mr.       r30, r3
      beq-      .loc_0x650
      lis       r3, 0x804A
      mr        r5, r30
      addi      r0, r3, 0x1A34
      lis       r3, 0x804A
      stw       r0, 0x0(r30)
      li        r4, 0
      lfs       f0, -0x78D0(r2)
      addi      r0, r3, 0x1A44
      stb       r4, 0x4(r30)
      addi      r3, r5, 0x1C
      stb       r4, 0x5(r30)
      sth       r4, 0x6(r30)
      stfs      f0, 0x8(r30)
      stw       r0, 0x0(r30)
      sth       r4, 0xC(r30)
      sth       r4, 0xE(r30)
      sth       r4, 0x10(r30)
      sth       r4, 0x12(r30)
      sth       r4, 0x14(r30)
      stw       r4, 0x18(r30)
      bl        -0x43EFC
      lis       r3, 0x804A
      li        r0, 0
      addi      r3, r3, 0x1A58
      stw       r3, 0x0(r30)
      stw       r0, 0x2C(r30)
      stw       r0, 0x30(r30)
      stw       r0, 0x34(r30)
      stw       r0, 0x38(r30)
      stw       r0, 0x3C(r30)

    .loc_0x650:
      stw       r30, 0x2C(r1)
      mr        r4, r31
      addi      r3, r1, 0x28
      bl        0x3A0
      mr        r31, r3
      addi      r3, r1, 0x28
      li        r4, -0x1
      bl        0x2BC
      mr        r3, r31
      b         .loc_0x8AC

    .loc_0x678:
      addi      r3, r1, 0x20
      bl        .loc_0x8C4
      li        r3, 0x2C
      bl        -0x4ED80
      mr.       r30, r3
      beq-      .loc_0x6E0
      lis       r3, 0x804A
      mr        r5, r30
      addi      r0, r3, 0x1A34
      lis       r3, 0x804A
      stw       r0, 0x0(r30)
      li        r4, 0
      lfs       f0, -0x78D0(r2)
      addi      r0, r3, 0x2004
      stb       r4, 0x4(r30)
      addi      r3, r5, 0x1C
      stb       r4, 0x5(r30)
      sth       r4, 0x6(r30)
      stfs      f0, 0x8(r30)
      stw       r0, 0x0(r30)
      stw       r4, 0xC(r30)
      stw       r4, 0x10(r30)
      sth       r4, 0x14(r30)
      sth       r4, 0x16(r30)
      stw       r4, 0x18(r30)
      bl        -0x43FB0

    .loc_0x6E0:
      stw       r30, 0x24(r1)
      mr        r4, r31
      addi      r3, r1, 0x20
      bl        0x310
      mr        r31, r3
      addi      r3, r1, 0x20
      li        r4, -0x1
      bl        0x22C
      mr        r3, r31
      b         .loc_0x8AC

    .loc_0x708:
      addi      r3, r1, 0x18
      bl        .loc_0x8C4
      li        r3, 0x18
      bl        -0x4EE10
      cmplwi    r3, 0
      beq-      .loc_0x760
      lis       r5, 0x804A
      lis       r4, 0x804A
      addi      r0, r5, 0x1A34
      li        r5, 0
      stw       r0, 0x0(r3)
      addi      r0, r4, 0x1FF4
      lfs       f0, -0x78D0(r2)
      stb       r5, 0x4(r3)
      stb       r5, 0x5(r3)
      sth       r5, 0x6(r3)
      stfs      f0, 0x8(r3)
      stw       r0, 0x0(r3)
      sth       r5, 0xC(r3)
      sth       r5, 0xE(r3)
      stw       r5, 0x10(r3)
      stw       r5, 0x14(r3)

    .loc_0x760:
      stw       r3, 0x1C(r1)
      mr        r4, r31
      addi      r3, r1, 0x18
      bl        0x290
      mr        r31, r3
      addi      r3, r1, 0x18
      li        r4, -0x1
      bl        0x1AC
      mr        r3, r31
      b         .loc_0x8AC

    .loc_0x788:
      addi      r3, r1, 0x10
      bl        .loc_0x8C4
      li        r3, 0x14
      bl        -0x4EE90
      cmplwi    r3, 0
      beq-      .loc_0x7E4
      lis       r4, 0x804A
      lis       r5, 0x804A
      addi      r0, r4, 0x1A34
      lis       r4, 0x804A
      stw       r0, 0x0(r3)
      li        r6, 0
      lfs       f0, -0x78D0(r2)
      addi      r5, r5, 0x1ABC
      stb       r6, 0x4(r3)
      addi      r0, r4, 0x1AD0
      stb       r6, 0x5(r3)
      sth       r6, 0x6(r3)
      stfs      f0, 0x8(r3)
      stw       r5, 0x0(r3)
      stw       r6, 0xC(r3)
      stw       r0, 0x0(r3)
      stw       r6, 0x10(r3)

    .loc_0x7E4:
      stw       r3, 0x14(r1)
      mr        r4, r31
      addi      r3, r1, 0x10
      bl        0x20C
      mr        r31, r3
      addi      r3, r1, 0x10
      li        r4, -0x1
      bl        0x128
      mr        r3, r31
      b         .loc_0x8AC

    .loc_0x80C:
      addi      r3, r1, 0x8
      bl        .loc_0x8C4
      li        r3, 0x30
      bl        -0x4EF14
      cmplwi    r3, 0
      beq-      .loc_0x878
      lis       r4, 0x804A
      lis       r5, 0x804A
      addi      r0, r4, 0x1A34
      lis       r4, 0x804A
      stw       r0, 0x0(r3)
      li        r6, 0
      lfs       f0, -0x78D0(r2)
      addi      r5, r5, 0x1A80
      stb       r6, 0x4(r3)
      addi      r0, r4, 0x1A94
      stb       r6, 0x5(r3)
      sth       r6, 0x6(r3)
      stfs      f0, 0x8(r3)
      stw       r5, 0x0(r3)
      sth       r6, 0xC(r3)
      sth       r6, 0xE(r3)
      stw       r6, 0x10(r3)
      stw       r6, 0x14(r3)
      stw       r0, 0x0(r3)
      stw       r6, 0x18(r3)
      stw       r6, 0x1C(r3)

    .loc_0x878:
      stw       r3, 0xC(r1)
      mr        r4, r31
      addi      r3, r1, 0x8
      bl        0x178
      mr        r31, r3
      addi      r3, r1, 0x8
      li        r4, -0x1
      bl        0x94
      mr        r3, r31
      b         .loc_0x8AC

    .loc_0x8A0:
      li        r3, 0
      b         .loc_0x8AC

    .loc_0x8A8:
      li        r3, 0

    .loc_0x8AC:
      lwz       r0, 0x74(r1)
      lwz       r31, 0x6C(r1)
      lwz       r30, 0x68(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr

    .loc_0x8C4:
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000320
 */
void J3DAnmLoaderDataBase::setResource(J3DAnmBase*, const void*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80072E64
 * Size:	00001C
 */
void J3DAnmFullLoader_v15::J3DAnmFullLoader_v15()
{
    /*
    .loc_0x0:
      lis       r5, 0x804A
      lis       r4, 0x804A
      addi      r5, r5, 0x1FE0
      stw       r5, 0x0(r3)
      addi      r0, r4, 0x1FCC
      stw       r0, 0x0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80072E80
 * Size:	000048
 */
void J3DAnmLoader::~J3DAnmLoader()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x30
      lis       r5, 0x804A
      extsh.    r0, r4
      addi      r0, r5, 0x1FE0
      stw       r0, 0x0(r31)
      ble-      .loc_0x30
      bl        -0x4EDF8

    .loc_0x30:
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
 * Address:	80072EC8
 * Size:	00005C
 */
void J3DAnmFullLoader_v15::~J3DAnmFullLoader_v15()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x44
      lis       r3, 0x804A
      addi      r0, r3, 0x1FCC
      stw       r0, 0x0(r31)
      beq-      .loc_0x34
      lis       r3, 0x804A
      addi      r0, r3, 0x1FE0
      stw       r0, 0x0(r31)

    .loc_0x34:
      extsh.    r0, r4
      ble-      .loc_0x44
      mr        r3, r31
      bl        -0x4EE54

    .loc_0x44:
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
 * Address:	80072F24
 * Size:	00001C
 */
void J3DAnmKeyLoader_v15::J3DAnmKeyLoader_v15()
{
    /*
    .loc_0x0:
      lis       r5, 0x804A
      lis       r4, 0x804A
      addi      r5, r5, 0x1FE0
      stw       r5, 0x0(r3)
      addi      r0, r4, 0x1FB8
      stw       r0, 0x0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80072F40
 * Size:	00005C
 */
void J3DAnmKeyLoader_v15::~J3DAnmKeyLoader_v15()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x44
      lis       r3, 0x804A
      addi      r0, r3, 0x1FB8
      stw       r0, 0x0(r31)
      beq-      .loc_0x34
      lis       r3, 0x804A
      addi      r0, r3, 0x1FE0
      stw       r0, 0x0(r31)

    .loc_0x34:
      extsh.    r0, r4
      ble-      .loc_0x44
      mr        r3, r31
      bl        -0x4EECC

    .loc_0x44:
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
 * Address:	80072F9C
 * Size:	000128
 */
void J3DAnmFullLoader_v15::load(const void*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x5450
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r27, r3
      lwz       r31, 0xC(r4)
      addi      r29, r4, 0x20
      addi      r30, r5, 0x5431
      li        r28, 0
      b         .loc_0x108

    .loc_0x2C:
      lwz       r4, 0x0(r29)
      cmpw      r4, r30
      beq-      .loc_0xC0
      bge-      .loc_0x78
      lis       r3, 0x434C
      addi      r0, r3, 0x4631
      cmpw      r4, r0
      beq-      .loc_0xD0
      bge-      .loc_0x64
      lis       r3, 0x414E
      addi      r0, r3, 0x4631
      cmpw      r4, r0
      beq-      .loc_0xA0
      b         .loc_0xFC

    .loc_0x64:
      lis       r3, 0x5041
      addi      r0, r3, 0x4631
      cmpw      r4, r0
      beq-      .loc_0xB0
      b         .loc_0xFC

    .loc_0x78:
      lis       r3, 0x5643
      addi      r0, r3, 0x4631
      cmpw      r4, r0
      beq-      .loc_0xF0
      bge-      .loc_0xFC
      lis       r3, 0x5641
      addi      r0, r3, 0x4631
      cmpw      r4, r0
      beq-      .loc_0xE0
      b         .loc_0xFC

    .loc_0xA0:
      mr        r3, r27
      mr        r4, r29
      bl        0x1C0
      b         .loc_0xFC

    .loc_0xB0:
      mr        r3, r27
      mr        r4, r29
      bl        0x26C
      b         .loc_0xFC

    .loc_0xC0:
      mr        r3, r27
      mr        r4, r29
      bl        0x350
      b         .loc_0xFC

    .loc_0xD0:
      mr        r3, r27
      mr        r4, r29
      bl        0x4B0
      b         .loc_0xFC

    .loc_0xE0:
      mr        r3, r27
      mr        r4, r29
      bl        0x3FC
      b         .loc_0xFC

    .loc_0xF0:
      mr        r3, r27
      mr        r4, r29
      bl        0x524

    .loc_0xFC:
      lwz       r0, 0x4(r29)
      addi      r28, r28, 0x1
      add       r29, r29, r0

    .loc_0x108:
      cmplw     r28, r31
      blt+      .loc_0x2C
      lwz       r3, 0x4(r27)
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	800730C4
 * Size:	000140
 */
void J3DAnmFullLoader_v15::setResource(J3DAnmBase*, const void*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r6, 0x5450
      stw       r0, 0x24(r1)
      stmw      r26, 0x8(r1)
      mr        r30, r3
      lwz       r29, 0xC(r5)
      mr        r31, r4
      addi      r27, r5, 0x20
      addi      r28, r6, 0x5431
      li        r26, 0
      b         .loc_0x124

    .loc_0x30:
      lwz       r4, 0x0(r27)
      cmpw      r4, r28
      beq-      .loc_0xCC
      bge-      .loc_0x7C
      lis       r3, 0x434C
      addi      r0, r3, 0x4631
      cmpw      r4, r0
      beq-      .loc_0xE0
      bge-      .loc_0x68
      lis       r3, 0x414E
      addi      r0, r3, 0x4631
      cmpw      r4, r0
      beq-      .loc_0xA4
      b         .loc_0x118

    .loc_0x68:
      lis       r3, 0x5041
      addi      r0, r3, 0x4631
      cmpw      r4, r0
      beq-      .loc_0xB8
      b         .loc_0x118

    .loc_0x7C:
      lis       r3, 0x5643
      addi      r0, r3, 0x4631
      cmpw      r4, r0
      beq-      .loc_0x108
      bge-      .loc_0x118
      lis       r3, 0x5641
      addi      r0, r3, 0x4631
      cmpw      r4, r0
      beq-      .loc_0xF4
      b         .loc_0x118

    .loc_0xA4:
      mr        r3, r30
      mr        r4, r31
      mr        r5, r27
      bl        0xB8
      b         .loc_0x118

    .loc_0xB8:
      mr        r3, r30
      mr        r4, r31
      mr        r5, r27
      bl        0x160
      b         .loc_0x118

    .loc_0xCC:
      mr        r3, r30
      mr        r4, r31
      mr        r5, r27
      bl        0x240
      b         .loc_0x118

    .loc_0xE0:
      mr        r3, r30
      mr        r4, r31
      mr        r5, r27
      bl        0x39C
      b         .loc_0x118

    .loc_0xF4:
      mr        r3, r30
      mr        r4, r31
      mr        r5, r27
      bl        0x2E4
      b         .loc_0x118

    .loc_0x108:
      mr        r3, r30
      mr        r4, r31
      mr        r5, r27
      bl        0x408

    .loc_0x118:
      lwz       r0, 0x4(r27)
      addi      r26, r26, 0x1
      add       r27, r27, r0

    .loc_0x124:
      cmplw     r26, r29
      blt+      .loc_0x30
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80073204
 * Size:	000028
 */
void J3DAnmFullLoader_v15::readAnmTransform(const J3DAnmTransformFullData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r4, 0x4(r3)
      bl        .loc_0x28
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x28:
    */
}

/*
 * --INFO--
 * Address:	8007322C
 * Size:	000094
 */
void J3DAnmFullLoader_v15::setAnmTransform(J3DAnmTransformFull*,
                                           const J3DAnmTransformFullData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x78D0(r2)
      stw       r0, 0x14(r1)
      lhz       r0, 0xC(r5)
      stw       r31, 0xC(r1)
      mr        r31, r5
      mr        r3, r31
      stw       r30, 0x8(r1)
      mr        r30, r4
      lha       r4, 0xA(r5)
      sth       r0, 0x1E(r30)
      lbz       r0, 0x8(r5)
      sth       r4, 0x6(r30)
      lwz       r4, 0x14(r5)
      stb       r0, 0x4(r30)
      stfs      f0, 0x8(r30)
      bl        -0x29E7C
      stw       r3, 0x20(r30)
      mr        r3, r31
      lwz       r4, 0x18(r31)
      bl        -0x29DCC
      stw       r3, 0xC(r30)
      mr        r3, r31
      lwz       r4, 0x1C(r31)
      bl        -0x29DF4
      stw       r3, 0x10(r30)
      mr        r3, r31
      lwz       r4, 0x20(r31)
      bl        -0x29DEC
      stw       r3, 0x14(r30)
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
 * Address:	800732C0
 * Size:	000028
 */
void J3DAnmFullLoader_v15::readAnmColor(const J3DAnmColorFullData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r4, 0x4(r3)
      bl        .loc_0x28
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x28:
    */
}

/*
 * --INFO--
 * Address:	800732E8
 * Size:	0000CC
 */
void J3DAnmFullLoader_v15::setAnmColor(J3DAnmColorFull*,
                                       const J3DAnmColorFullData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x78D0(r2)
      stw       r0, 0x14(r1)
      lbz       r0, 0x8(r5)
      stw       r31, 0xC(r1)
      mr        r31, r5
      mr        r3, r31
      stw       r30, 0x8(r1)
      mr        r30, r4
      lha       r4, 0xC(r5)
      sth       r4, 0x6(r30)
      lwz       r4, 0x18(r5)
      stb       r0, 0x4(r30)
      lhz       r0, 0xE(r5)
      stfs      f0, 0x8(r30)
      sth       r0, 0x14(r30)
      bl        -0x29F50
      stw       r3, 0x3C(r30)
      mr        r3, r31
      lwz       r4, 0x24(r31)
      bl        -0x29EE8
      stw       r3, 0x2C(r30)
      mr        r3, r31
      lwz       r4, 0x28(r31)
      bl        -0x29EF8
      stw       r3, 0x30(r30)
      mr        r3, r31
      lwz       r4, 0x2C(r31)
      bl        -0x29F08
      stw       r3, 0x34(r30)
      mr        r3, r31
      lwz       r4, 0x30(r31)
      bl        -0x29F18
      stw       r3, 0x38(r30)
      mr        r3, r31
      lwz       r4, 0x1C(r31)
      bl        -0x29EF8
      stw       r3, 0x18(r30)
      mr        r3, r31
      lwz       r4, 0x20(r31)
      bl        -0x29F20
      mr        r4, r3
      addi      r3, r30, 0x1C
      bl        -0x44650
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
 * Address:	800733B4
 * Size:	000028
 */
void J3DAnmFullLoader_v15::readAnmTexPattern(const J3DAnmTexPatternFullData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r4, 0x4(r3)
      bl        .loc_0x28
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x28:
    */
}

/*
 * --INFO--
 * Address:	800733DC
 * Size:	0000A4
 */
void J3DAnmFullLoader_v15::setAnmTexPattern(J3DAnmTexPattern*,
                                            const J3DAnmTexPatternFullData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x78D0(r2)
      stw       r0, 0x14(r1)
      lbz       r0, 0x8(r5)
      stw       r31, 0xC(r1)
      mr        r31, r5
      mr        r3, r31
      stw       r30, 0x8(r1)
      mr        r30, r4
      lha       r4, 0xA(r5)
      sth       r4, 0x6(r30)
      lhz       r4, 0xC(r5)
      stb       r0, 0x4(r30)
      lhz       r0, 0xE(r5)
      stfs      f0, 0x8(r30)
      sth       r4, 0x16(r30)
      lwz       r4, 0x10(r5)
      sth       r0, 0x14(r30)
      bl        -0x2A064
      stw       r3, 0x10(r30)
      mr        r3, r31
      lwz       r4, 0x14(r31)
      bl        -0x29FB4
      stw       r3, 0xC(r30)
      mr        r3, r31
      lwz       r4, 0x18(r31)
      bl        -0x29FC4
      stw       r3, 0x18(r30)
      mr        r3, r31
      lwz       r4, 0x1C(r31)
      bl        -0x29FEC
      mr        r4, r3
      addi      r3, r30, 0x1C
      bl        -0x4471C
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
 * Address:	80073480
 * Size:	000028
 */
void J3DAnmFullLoader_v15::readAnmVisibility(const J3DAnmVisibilityFullData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r4, 0x4(r3)
      bl        .loc_0x28
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x28:
    */
}

/*
 * --INFO--
 * Address:	800734A8
 * Size:	00007C
 */
void J3DAnmFullLoader_v15::setAnmVisibility(J3DAnmVisibilityFull*,
                                            const J3DAnmVisibilityFullData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x78D0(r2)
      stw       r0, 0x14(r1)
      lbz       r0, 0x8(r5)
      stw       r31, 0xC(r1)
      mr        r31, r5
      mr        r3, r31
      stw       r30, 0x8(r1)
      mr        r30, r4
      lha       r4, 0xA(r5)
      sth       r4, 0x6(r30)
      lhz       r4, 0xC(r5)
      stb       r0, 0x4(r30)
      lhz       r0, 0xE(r5)
      stfs      f0, 0x8(r30)
      sth       r4, 0xC(r30)
      lwz       r4, 0x10(r5)
      sth       r0, 0xE(r30)
      bl        -0x2A178
      stw       r3, 0x10(r30)
      mr        r3, r31
      lwz       r4, 0x14(r31)
      bl        -0x2A0B0
      stw       r3, 0x14(r30)
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
 * Address:	80073524
 * Size:	000028
 */
void J3DAnmFullLoader_v15::readAnmCluster(const J3DAnmClusterFullData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r4, 0x4(r3)
      bl        .loc_0x28
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x28:
    */
}

/*
 * --INFO--
 * Address:	8007354C
 * Size:	00006C
 */
void J3DAnmFullLoader_v15::setAnmCluster(J3DAnmClusterFull*,
                                         const J3DAnmClusterFullData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x78D0(r2)
      stw       r0, 0x14(r1)
      lbz       r0, 0x8(r5)
      stw       r31, 0xC(r1)
      mr        r31, r5
      mr        r3, r31
      stw       r30, 0x8(r1)
      mr        r30, r4
      lha       r4, 0xA(r5)
      sth       r4, 0x6(r30)
      lwz       r4, 0x10(r5)
      stb       r0, 0x4(r30)
      stfs      f0, 0x8(r30)
      bl        0xE98
      stw       r3, 0x10(r30)
      mr        r3, r31
      lwz       r4, 0x14(r31)
      bl        -0x2A0E4
      stw       r3, 0xC(r30)
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
 * Address:	800735B8
 * Size:	000028
 */
void J3DAnmFullLoader_v15::readAnmVtxColor(const J3DAnmVtxColorFullData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r4, 0x4(r3)
      bl        .loc_0x28
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x28:
    */
}

/*
 * --INFO--
 * Address:	800735E0
 * Size:	000170
 */
void J3DAnmFullLoader_v15::setAnmVtxColor(J3DAnmVtxColorFull*,
                                          const J3DAnmVtxColorFullData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lfs       f0, -0x78D0(r2)
      stw       r0, 0x24(r1)
      lbz       r0, 0x8(r5)
      stw       r31, 0x1C(r1)
      mr        r31, r5
      mr        r3, r31
      stw       r30, 0x18(r1)
      mr        r30, r4
      lha       r4, 0xA(r5)
      stw       r29, 0x14(r1)
      sth       r4, 0x6(r30)
      lhz       r4, 0xC(r5)
      stb       r0, 0x4(r30)
      lhz       r0, 0xE(r5)
      stfs      f0, 0x8(r30)
      sth       r4, 0xC(r30)
      lwz       r4, 0x18(r5)
      sth       r0, 0xE(r30)
      bl        -0x2A254
      stw       r3, 0x18(r30)
      mr        r3, r31
      lwz       r4, 0x1C(r31)
      bl        -0x2A264
      stw       r3, 0x1C(r30)
      mr        r3, r31
      lwz       r4, 0x20(r31)
      bl        -0x2A244
      stw       r3, 0x10(r30)
      mr        r3, r31
      lwz       r4, 0x24(r31)
      bl        -0x2A254
      stw       r3, 0x14(r30)
      mr        r3, r31
      lwz       r4, 0x28(r31)
      bl        -0x2A1EC
      lwz       r4, 0x2C(r31)
      mr        r29, r3
      mr        r3, r31
      bl        -0x2A1FC
      li        r7, 0
      li        r5, 0
      b         .loc_0xD0

    .loc_0xB0:
      lwz       r4, 0x10(r30)
      addi      r6, r5, 0x4
      addi      r5, r5, 0x8
      addi      r7, r7, 0x1
      lwzx      r0, r4, r6
      rlwinm    r0,r0,1,0,30
      add       r0, r29, r0
      stwx      r0, r4, r6

    .loc_0xD0:
      lhz       r0, 0xC(r30)
      cmpw      r7, r0
      blt+      .loc_0xB0
      li        r7, 0
      li        r5, 0
      b         .loc_0x108

    .loc_0xE8:
      lwz       r4, 0x14(r30)
      addi      r6, r5, 0x4
      addi      r5, r5, 0x8
      addi      r7, r7, 0x1
      lwzx      r0, r4, r6
      rlwinm    r0,r0,1,0,30
      add       r0, r3, r0
      stwx      r0, r4, r6

    .loc_0x108:
      lhz       r0, 0xE(r30)
      cmpw      r7, r0
      blt+      .loc_0xE8
      lwz       r4, 0x30(r31)
      mr        r3, r31
      bl        -0x2A2A8
      stw       r3, 0x20(r30)
      mr        r3, r31
      lwz       r4, 0x34(r31)
      bl        -0x2A2B8
      stw       r3, 0x24(r30)
      mr        r3, r31
      lwz       r4, 0x38(r31)
      bl        -0x2A2C8
      stw       r3, 0x28(r30)
      mr        r3, r31
      lwz       r4, 0x3C(r31)
      bl        -0x2A2D8
      stw       r3, 0x2C(r30)
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
 * Address:	80073750
 * Size:	000128
 */
void J3DAnmKeyLoader_v15::load(const void*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x5452
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r27, r3
      lwz       r31, 0xC(r4)
      addi      r29, r4, 0x20
      addi      r30, r5, 0x4B31
      li        r28, 0
      b         .loc_0x108

    .loc_0x2C:
      lwz       r4, 0x0(r29)
      cmpw      r4, r30
      beq-      .loc_0xE0
      bge-      .loc_0x78
      lis       r3, 0x434C
      addi      r0, r3, 0x4B31
      cmpw      r4, r0
      beq-      .loc_0xC0
      bge-      .loc_0x64
      lis       r3, 0x414E
      addi      r0, r3, 0x4B31
      cmpw      r4, r0
      beq-      .loc_0xA0
      b         .loc_0xFC

    .loc_0x64:
      lis       r3, 0x5041
      addi      r0, r3, 0x4B31
      cmpw      r4, r0
      beq-      .loc_0xB0
      b         .loc_0xFC

    .loc_0x78:
      lis       r3, 0x5643
      addi      r0, r3, 0x4B31
      cmpw      r4, r0
      beq-      .loc_0xF0
      bge-      .loc_0xFC
      lis       r3, 0x5454
      addi      r0, r3, 0x4B31
      cmpw      r4, r0
      beq-      .loc_0xD0
      b         .loc_0xFC

    .loc_0xA0:
      mr        r3, r27
      mr        r4, r29
      bl        0x1C0
      b         .loc_0xFC

    .loc_0xB0:
      mr        r3, r27
      mr        r4, r29
      bl        0x474
      b         .loc_0xFC

    .loc_0xC0:
      mr        r3, r27
      mr        r4, r29
      bl        0x578
      b         .loc_0xFC

    .loc_0xD0:
      mr        r3, r27
      mr        r4, r29
      bl        0x254
      b         .loc_0xFC

    .loc_0xE0:
      mr        r3, r27
      mr        r4, r29
      bl        0x5EC
      b         .loc_0xFC

    .loc_0xF0:
      mr        r3, r27
      mr        r4, r29
      bl        0x790

    .loc_0xFC:
      lwz       r0, 0x4(r29)
      addi      r28, r28, 0x1
      add       r29, r29, r0

    .loc_0x108:
      cmplw     r28, r31
      blt+      .loc_0x2C
      lwz       r3, 0x4(r27)
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80073878
 * Size:	000140
 */
void J3DAnmKeyLoader_v15::setResource(J3DAnmBase*, const void*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r6, 0x5452
      stw       r0, 0x24(r1)
      stmw      r26, 0x8(r1)
      mr        r30, r3
      lwz       r29, 0xC(r5)
      mr        r31, r4
      addi      r27, r5, 0x20
      addi      r28, r6, 0x4B31
      li        r26, 0
      b         .loc_0x124

    .loc_0x30:
      lwz       r4, 0x0(r27)
      cmpw      r4, r28
      beq-      .loc_0xF4
      bge-      .loc_0x7C
      lis       r3, 0x434C
      addi      r0, r3, 0x4B31
      cmpw      r4, r0
      beq-      .loc_0xCC
      bge-      .loc_0x68
      lis       r3, 0x414E
      addi      r0, r3, 0x4B31
      cmpw      r4, r0
      beq-      .loc_0xA4
      b         .loc_0x118

    .loc_0x68:
      lis       r3, 0x5041
      addi      r0, r3, 0x4B31
      cmpw      r4, r0
      beq-      .loc_0xB8
      b         .loc_0x118

    .loc_0x7C:
      lis       r3, 0x5643
      addi      r0, r3, 0x4B31
      cmpw      r4, r0
      beq-      .loc_0x108
      bge-      .loc_0x118
      lis       r3, 0x5454
      addi      r0, r3, 0x4B31
      cmpw      r4, r0
      beq-      .loc_0xE0
      b         .loc_0x118

    .loc_0xA4:
      mr        r3, r30
      mr        r4, r31
      mr        r5, r27
      bl        0xB8
      b         .loc_0x118

    .loc_0xB8:
      mr        r3, r30
      mr        r4, r31
      mr        r5, r27
      bl        0x368
      b         .loc_0x118

    .loc_0xCC:
      mr        r3, r30
      mr        r4, r31
      mr        r5, r27
      bl        0x468
      b         .loc_0x118

    .loc_0xE0:
      mr        r3, r30
      mr        r4, r31
      mr        r5, r27
      bl        0x140
      b         .loc_0x118

    .loc_0xF4:
      mr        r3, r30
      mr        r4, r31
      mr        r5, r27
      bl        0x4D4
      b         .loc_0x118

    .loc_0x108:
      mr        r3, r30
      mr        r4, r31
      mr        r5, r27
      bl        0x674

    .loc_0x118:
      lwz       r0, 0x4(r27)
      addi      r26, r26, 0x1
      add       r27, r27, r0

    .loc_0x124:
      cmplw     r26, r29
      blt+      .loc_0x30
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	800739B8
 * Size:	000028
 */
void J3DAnmKeyLoader_v15::readAnmTransform(const J3DAnmTransformKeyData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r4, 0x4(r3)
      bl        .loc_0x28
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x28:
    */
}

/*
 * --INFO--
 * Address:	800739E0
 * Size:	00009C
 */
void J3DAnmKeyLoader_v15::setAnmTransform(J3DAnmTransformKey*,
                                          const J3DAnmTransformKeyData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x78D0(r2)
      stw       r0, 0x14(r1)
      lha       r0, 0xA(r5)
      stw       r31, 0xC(r1)
      mr        r31, r5
      mr        r3, r31
      stw       r30, 0x8(r1)
      mr        r30, r4
      lhz       r4, 0xC(r5)
      sth       r4, 0x1E(r30)
      lbz       r4, 0x8(r5)
      sth       r0, 0x6(r30)
      lbz       r0, 0x9(r5)
      stb       r4, 0x4(r30)
      lwz       r4, 0x14(r5)
      stw       r0, 0x20(r30)
      stfs      f0, 0x8(r30)
      bl        -0x2A560
      stw       r3, 0x24(r30)
      mr        r3, r31
      lwz       r4, 0x18(r31)
      bl        -0x2A588
      stw       r3, 0xC(r30)
      mr        r3, r31
      lwz       r4, 0x1C(r31)
      bl        -0x2A5B0
      stw       r3, 0x10(r30)
      mr        r3, r31
      lwz       r4, 0x20(r31)
      bl        -0x2A5A8
      stw       r3, 0x14(r30)
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
 * Address:	80073A7C
 * Size:	000028
 */
void J3DAnmKeyLoader_v15::readAnmTextureSRT(const J3DAnmTextureSRTKeyData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r4, 0x4(r3)
      bl        .loc_0x28
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x28:
    */
}

/*
 * --INFO--
 * Address:	80073AA4
 * Size:	0001D8
 */
void J3DAnmKeyLoader_v15::setAnmTextureSRT(J3DAnmTextureSRTKey*,
                                           const J3DAnmTextureSRTKeyData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lhz       r6, 0xC(r5)
      stw       r0, 0x14(r1)
      lha       r0, 0xA(r5)
      stw       r31, 0xC(r1)
      mr        r31, r5
      lfs       f0, -0x78D0(r2)
      mr        r3, r31
      stw       r30, 0x8(r1)
      mr        r30, r4
      sth       r6, 0x14(r4)
      lbz       r4, 0x8(r5)
      sth       r0, 0x6(r30)
      lbz       r0, 0x9(r5)
      stb       r4, 0x4(r30)
      lhz       r4, 0xE(r5)
      stw       r0, 0xC(r30)
      lhz       r5, 0x10(r5)
      stfs      f0, 0x8(r30)
      lhz       r0, 0x12(r31)
      sth       r6, 0x14(r30)
      sth       r4, 0x16(r30)
      lwz       r4, 0x14(r31)
      sth       r5, 0x18(r30)
      sth       r0, 0x1A(r30)
      bl        -0x2A640
      stw       r3, 0x10(r30)
      mr        r3, r31
      lwz       r4, 0x18(r31)
      bl        -0x2A698
      stw       r3, 0x2C(r30)
      mr        r3, r31
      lwz       r4, 0x1C(r31)
      bl        -0x2A6C0
      mr        r4, r3
      addi      r3, r30, 0x30
      bl        -0x44DF0
      lwz       r4, 0x20(r31)
      mr        r3, r31
      bl        -0x2A6F0
      stw       r3, 0x28(r30)
      mr        r3, r31
      lwz       r4, 0x24(r31)
      bl        -0x2A718
      stw       r3, 0x40(r30)
      mr        r3, r31
      lwz       r4, 0x28(r31)
      bl        -0x2A6B0
      stw       r3, 0x1C(r30)
      mr        r3, r31
      lwz       r4, 0x2C(r31)
      bl        -0x2A6D8
      stw       r3, 0x20(r30)
      mr        r3, r31
      lwz       r4, 0x30(r31)
      bl        -0x2A6D0
      lwz       r4, 0x44(r31)
      stw       r3, 0x24(r30)
      cmplwi    r4, 0
      beq-      .loc_0x108
      mr        r3, r31
      bl        -0x2A730
      mr        r4, r3
      addi      r3, r30, 0x64
      bl        -0x44E60

    .loc_0x108:
      lhz       r4, 0x34(r31)
      mr        r3, r31
      lhz       r0, 0x36(r31)
      sth       r4, 0x4A(r30)
      lhz       r4, 0x38(r31)
      sth       r0, 0x44(r30)
      lhz       r0, 0x3A(r31)
      sth       r4, 0x46(r30)
      lwz       r4, 0x3C(r31)
      sth       r0, 0x48(r30)
      bl        -0x2A708
      stw       r3, 0x58(r30)
      mr        r3, r31
      lwz       r4, 0x40(r31)
      bl        -0x2A760
      stw       r3, 0x60(r30)
      mr        r3, r31
      lwz       r4, 0x48(r31)
      bl        -0x2A7A0
      stw       r3, 0x5C(r30)
      mr        r3, r31
      lwz       r4, 0x4C(r31)
      bl        -0x2A7C8
      stw       r3, 0x74(r30)
      mr        r3, r31
      lwz       r4, 0x50(r31)
      bl        -0x2A760
      stw       r3, 0x4C(r30)
      mr        r3, r31
      lwz       r4, 0x54(r31)
      bl        -0x2A788
      stw       r3, 0x50(r30)
      mr        r3, r31
      lwz       r4, 0x58(r31)
      bl        -0x2A780
      lwz       r0, 0x5C(r31)
      stw       r3, 0x54(r30)
      cmpwi     r0, 0x2
      bge-      .loc_0x1B8
      cmpwi     r0, 0
      bge-      .loc_0x1B0
      b         .loc_0x1B8

    .loc_0x1B0:
      stw       r0, 0x78(r30)
      b         .loc_0x1C0

    .loc_0x1B8:
      li        r0, 0
      stw       r0, 0x78(r30)

    .loc_0x1C0:
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
 * Address:	80073C7C
 * Size:	000028
 */
void J3DAnmKeyLoader_v15::readAnmColor(const J3DAnmColorKeyData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r4, 0x4(r3)
      bl        .loc_0x28
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x28:
    */
}

/*
 * --INFO--
 * Address:	80073CA4
 * Size:	0000EC
 */
void J3DAnmKeyLoader_v15::setAnmColor(J3DAnmColorKey*,
                                      const J3DAnmColorKeyData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x78D0(r2)
      stw       r0, 0x14(r1)
      lbz       r0, 0x8(r5)
      stw       r31, 0xC(r1)
      mr        r31, r5
      mr        r3, r31
      stw       r30, 0x8(r1)
      mr        r30, r4
      lha       r4, 0xC(r5)
      sth       r4, 0x6(r30)
      lhz       r4, 0x10(r5)
      stb       r0, 0x4(r30)
      lhz       r0, 0xE(r5)
      stfs      f0, 0x8(r30)
      sth       r0, 0x14(r30)
      lhz       r0, 0x12(r5)
      sth       r4, 0xC(r30)
      lhz       r4, 0x14(r5)
      sth       r0, 0xE(r30)
      lhz       r0, 0x16(r5)
      sth       r4, 0x10(r30)
      lwz       r4, 0x18(r5)
      sth       r0, 0x12(r30)
      bl        -0x2A8E4
      stw       r3, 0x3C(r30)
      mr        r3, r31
      lwz       r4, 0x24(r31)
      bl        -0x2A87C
      stw       r3, 0x2C(r30)
      mr        r3, r31
      lwz       r4, 0x28(r31)
      bl        -0x2A88C
      stw       r3, 0x30(r30)
      mr        r3, r31
      lwz       r4, 0x2C(r31)
      bl        -0x2A89C
      stw       r3, 0x34(r30)
      mr        r3, r31
      lwz       r4, 0x30(r31)
      bl        -0x2A8AC
      stw       r3, 0x38(r30)
      mr        r3, r31
      lwz       r4, 0x1C(r31)
      bl        -0x2A8D4
      stw       r3, 0x18(r30)
      mr        r3, r31
      lwz       r4, 0x20(r31)
      bl        -0x2A8FC
      mr        r4, r3
      addi      r3, r30, 0x1C
      bl        -0x4502C
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
 * Address:	80073D90
 * Size:	000028
 */
void J3DAnmKeyLoader_v15::readAnmCluster(const J3DAnmClusterKeyData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r4, 0x4(r3)
      bl        .loc_0x28
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x28:
    */
}

/*
 * --INFO--
 * Address:	80073DB8
 * Size:	00006C
 */
void J3DAnmKeyLoader_v15::setAnmCluster(J3DAnmClusterKey*,
                                        const J3DAnmClusterKeyData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x78D0(r2)
      stw       r0, 0x14(r1)
      lbz       r0, 0x8(r5)
      stw       r31, 0xC(r1)
      mr        r31, r5
      mr        r3, r31
      stw       r30, 0x8(r1)
      mr        r30, r4
      lha       r4, 0xA(r5)
      sth       r4, 0x6(r30)
      lwz       r4, 0x10(r5)
      stb       r0, 0x4(r30)
      stfs      f0, 0x8(r30)
      bl        0x614
      stw       r3, 0x10(r30)
      mr        r3, r31
      lwz       r4, 0x14(r31)
      bl        -0x2A950
      stw       r3, 0xC(r30)
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
 * Address:	80073E24
 * Size:	000028
 */
void J3DAnmKeyLoader_v15::readAnmTevReg(const J3DAnmTevRegKeyData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r4, 0x4(r3)
      bl        .loc_0x28
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x28:
    */
}

/*
 * --INFO--
 * Address:	80073E4C
 * Size:	00018C
 */
void J3DAnmKeyLoader_v15::setAnmTevReg(J3DAnmTevRegKey*,
                                       const J3DAnmTevRegKeyData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x78D0(r2)
      stw       r0, 0x14(r1)
      lbz       r0, 0x8(r5)
      stw       r31, 0xC(r1)
      mr        r31, r5
      mr        r3, r31
      stw       r30, 0x8(r1)
      mr        r30, r4
      lha       r4, 0xA(r5)
      sth       r4, 0x6(r30)
      lwz       r4, 0x20(r5)
      stb       r0, 0x4(r30)
      lhz       r0, 0xC(r5)
      stfs      f0, 0x8(r30)
      sth       r0, 0xC(r30)
      bl        -0x2AAE4
      stw       r3, 0x48(r30)
      mr        r3, r31
      lwz       r4, 0x28(r31)
      bl        -0x2AA1C
      stw       r3, 0x20(r30)
      mr        r3, r31
      lwz       r4, 0x30(r31)
      bl        -0x2AA44
      mr        r4, r3
      addi      r3, r30, 0x24
      bl        -0x45174
      lhz       r0, 0xE(r31)
      mr        r3, r31
      lwz       r4, 0x24(r31)
      sth       r0, 0xE(r30)
      bl        -0x2AB3C
      stw       r3, 0x4C(r30)
      mr        r3, r31
      lwz       r4, 0x2C(r31)
      bl        -0x2AA5C
      stw       r3, 0x34(r30)
      mr        r3, r31
      lwz       r4, 0x34(r31)
      bl        -0x2AA84
      mr        r4, r3
      addi      r3, r30, 0x38
      bl        -0x451B4
      lhz       r4, 0x10(r31)
      mr        r3, r31
      lhz       r0, 0x12(r31)
      sth       r4, 0x10(r30)
      lhz       r4, 0x14(r31)
      sth       r0, 0x12(r30)
      lhz       r0, 0x16(r31)
      sth       r4, 0x14(r30)
      lwz       r4, 0x38(r31)
      sth       r0, 0x16(r30)
      bl        -0x2AA8C
      stw       r3, 0x50(r30)
      mr        r3, r31
      lwz       r4, 0x3C(r31)
      bl        -0x2AA9C
      stw       r3, 0x54(r30)
      mr        r3, r31
      lwz       r4, 0x40(r31)
      bl        -0x2AAAC
      stw       r3, 0x58(r30)
      mr        r3, r31
      lwz       r4, 0x44(r31)
      bl        -0x2AABC
      stw       r3, 0x5C(r30)
      mr        r3, r31
      lhz       r4, 0x18(r31)
      lhz       r0, 0x1A(r31)
      sth       r4, 0x18(r30)
      lhz       r4, 0x1C(r31)
      sth       r0, 0x1A(r30)
      lhz       r0, 0x1E(r31)
      sth       r4, 0x1C(r30)
      lwz       r4, 0x48(r31)
      sth       r0, 0x1E(r30)
      bl        -0x2AAEC
      stw       r3, 0x60(r30)
      mr        r3, r31
      lwz       r4, 0x4C(r31)
      bl        -0x2AAFC
      stw       r3, 0x64(r30)
      mr        r3, r31
      lwz       r4, 0x50(r31)
      bl        -0x2AB0C
      stw       r3, 0x68(r30)
      mr        r3, r31
      lwz       r4, 0x54(r31)
      bl        -0x2AB1C
      stw       r3, 0x6C(r30)
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
 * Address:	80073FD8
 * Size:	000028
 */
void J3DAnmKeyLoader_v15::readAnmVtxColor(const J3DAnmVtxColorKeyData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r4, 0x4(r3)
      bl        .loc_0x28
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x28:
    */
}

/*
 * --INFO--
 * Address:	80074000
 * Size:	000170
 */
void J3DAnmKeyLoader_v15::setAnmVtxColor(J3DAnmVtxColorKey*,
                                         const J3DAnmVtxColorKeyData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lfs       f0, -0x78D0(r2)
      stw       r0, 0x24(r1)
      lbz       r0, 0x8(r5)
      stw       r31, 0x1C(r1)
      mr        r31, r5
      mr        r3, r31
      stw       r30, 0x18(r1)
      mr        r30, r4
      lha       r4, 0xA(r5)
      stw       r29, 0x14(r1)
      sth       r4, 0x6(r30)
      lhz       r4, 0xC(r5)
      stb       r0, 0x4(r30)
      lhz       r0, 0xE(r5)
      stfs      f0, 0x8(r30)
      sth       r4, 0xC(r30)
      lwz       r4, 0x18(r5)
      sth       r0, 0xE(r30)
      bl        -0x2AC2C
      stw       r3, 0x18(r30)
      mr        r3, r31
      lwz       r4, 0x1C(r31)
      bl        -0x2AC3C
      stw       r3, 0x1C(r30)
      mr        r3, r31
      lwz       r4, 0x20(r31)
      bl        -0x2AC64
      stw       r3, 0x10(r30)
      mr        r3, r31
      lwz       r4, 0x24(r31)
      bl        -0x2AC74
      stw       r3, 0x14(r30)
      mr        r3, r31
      lwz       r4, 0x28(r31)
      bl        -0x2AC0C
      lwz       r4, 0x2C(r31)
      mr        r29, r3
      mr        r3, r31
      bl        -0x2AC1C
      li        r7, 0
      li        r5, 0
      b         .loc_0xD0

    .loc_0xB0:
      lwz       r4, 0x10(r30)
      addi      r6, r5, 0x4
      addi      r5, r5, 0x8
      addi      r7, r7, 0x1
      lwzx      r0, r4, r6
      rlwinm    r0,r0,1,0,30
      add       r0, r29, r0
      stwx      r0, r4, r6

    .loc_0xD0:
      lhz       r0, 0xC(r30)
      cmpw      r7, r0
      blt+      .loc_0xB0
      li        r7, 0
      li        r5, 0
      b         .loc_0x108

    .loc_0xE8:
      lwz       r4, 0x14(r30)
      addi      r6, r5, 0x4
      addi      r5, r5, 0x8
      addi      r7, r7, 0x1
      lwzx      r0, r4, r6
      rlwinm    r0,r0,1,0,30
      add       r0, r3, r0
      stwx      r0, r4, r6

    .loc_0x108:
      lhz       r0, 0xE(r30)
      cmpw      r7, r0
      blt+      .loc_0xE8
      lwz       r4, 0x30(r31)
      mr        r3, r31
      bl        -0x2AC80
      stw       r3, 0x20(r30)
      mr        r3, r31
      lwz       r4, 0x34(r31)
      bl        -0x2AC90
      stw       r3, 0x24(r30)
      mr        r3, r31
      lwz       r4, 0x38(r31)
      bl        -0x2ACA0
      stw       r3, 0x28(r30)
      mr        r3, r31
      lwz       r4, 0x3C(r31)
      bl        -0x2ACB0
      stw       r3, 0x2C(r30)
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
 * Address:	80074170
 * Size:	00005C
 */
void J3DAnmVisibilityFull::~J3DAnmVisibilityFull()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x44
      lis       r3, 0x804A
      addi      r0, r3, 0x1FF4
      stw       r0, 0x0(r31)
      beq-      .loc_0x34
      lis       r3, 0x804A
      addi      r0, r3, 0x1A34
      stw       r0, 0x0(r31)

    .loc_0x34:
      extsh.    r0, r4
      ble-      .loc_0x44
      mr        r3, r31
      bl        -0x500FC

    .loc_0x44:
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
 * Address:	800741CC
 * Size:	000008
 */
void J3DAnmVisibilityFull::getKind() const
{
    /*
    .loc_0x0:
      li        r3, 0x6
      blr
    */
}

/*
 * --INFO--
 * Address:	800741D4
 * Size:	000074
 */
void J3DAnmTexPattern::~J3DAnmTexPattern()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x5C
      lis       r3, 0x804A
      addic.    r0, r31, 0x1C
      addi      r0, r3, 0x2004
      stw       r0, 0x0(r31)
      beq-      .loc_0x38
      lis       r3, 0x804A
      addi      r0, r3, 0x4E0
      stw       r0, 0x1C(r31)

    .loc_0x38:
      cmplwi    r31, 0
      beq-      .loc_0x4C
      lis       r3, 0x804A
      addi      r0, r3, 0x1A34
      stw       r0, 0x0(r31)

    .loc_0x4C:
      extsh.    r0, r4
      ble-      .loc_0x5C
      mr        r3, r31
      bl        -0x50178

    .loc_0x5C:
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
 * Address:	80074248
 * Size:	000008
 */
void J3DAnmTexPattern::getKind() const
{
    /*
    .loc_0x0:
      li        r3, 0x2
      blr
    */
}

/*
 * --INFO--
 * Address:	80074250
 * Size:	000088
 */
void J3DAnmTevRegKey::~J3DAnmTevRegKey()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x70
      lis       r3, 0x804A
      addic.    r0, r31, 0x38
      addi      r0, r3, 0x2014
      stw       r0, 0x0(r31)
      beq-      .loc_0x38
      lis       r3, 0x804A
      addi      r0, r3, 0x4E0
      stw       r0, 0x38(r31)

    .loc_0x38:
      addic.    r0, r31, 0x24
      beq-      .loc_0x4C
      lis       r3, 0x804A
      addi      r0, r3, 0x4E0
      stw       r0, 0x24(r31)

    .loc_0x4C:
      cmplwi    r31, 0
      beq-      .loc_0x60
      lis       r3, 0x804A
      addi      r0, r3, 0x1A34
      stw       r0, 0x0(r31)

    .loc_0x60:
      extsh.    r0, r4
      ble-      .loc_0x70
      mr        r3, r31
      bl        -0x50208

    .loc_0x70:
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
 * Address:	800742D8
 * Size:	000008
 */
void J3DAnmTevRegKey::getKind() const
{
    /*
    .loc_0x0:
      li        r3, 0x5
      blr
    */
}

/*
 * --INFO--
 * Address:	800742E0
 * Size:	000088
 */
void J3DAnmTextureSRTKey::~J3DAnmTextureSRTKey()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x70
      lis       r3, 0x804A
      addic.    r0, r31, 0x64
      addi      r0, r3, 0x2024
      stw       r0, 0x0(r31)
      beq-      .loc_0x38
      lis       r3, 0x804A
      addi      r0, r3, 0x4E0
      stw       r0, 0x64(r31)

    .loc_0x38:
      addic.    r0, r31, 0x30
      beq-      .loc_0x4C
      lis       r3, 0x804A
      addi      r0, r3, 0x4E0
      stw       r0, 0x30(r31)

    .loc_0x4C:
      cmplwi    r31, 0
      beq-      .loc_0x60
      lis       r3, 0x804A
      addi      r0, r3, 0x1A34
      stw       r0, 0x0(r31)

    .loc_0x60:
      extsh.    r0, r4
      ble-      .loc_0x70
      mr        r3, r31
      bl        -0x50298

    .loc_0x70:
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
 * Address:	80074368
 * Size:	000008
 */
void J3DAnmTextureSRTKey::getKind() const
{
    /*
    .loc_0x0:
      li        r3, 0x4
      blr
    */
}

/*
 * --INFO--
 * Address:	80074370
 * Size:	00006C
 */
void J3DAnmTransformKey::~J3DAnmTransformKey()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x54
      lis       r3, 0x804A
      addi      r0, r3, 0x2034
      stw       r0, 0x0(r31)
      beq-      .loc_0x44
      lis       r3, 0x804A
      addi      r0, r3, 0x1AF8
      stw       r0, 0x0(r31)
      beq-      .loc_0x44
      lis       r3, 0x804A
      addi      r0, r3, 0x1A34
      stw       r0, 0x0(r31)

    .loc_0x44:
      extsh.    r0, r4
      ble-      .loc_0x54
      mr        r3, r31
      bl        -0x5030C

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
 * Address:	800743DC
 * Size:	000008
 */
void J3DAnmTransformKey::getKind() const
{
    /*
    .loc_0x0:
      li        r3, 0x8
      blr
    */
}

/*
 * --INFO--
 * Address:	800743E4
 * Size:	000024
 */
void J3DAnmTransformKey::getTransform(unsigned short, J3DTransformInfo*) const
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f1, 0x8(r3)
      stw       r0, 0x14(r1)
      bl        -0xC578
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80074408
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmClusterKeyTable>(const void*, const void*)
{
    /*
    .loc_0x0:
      cmplwi    r4, 0
      bne-      .loc_0x10
      li        r3, 0
      blr

    .loc_0x10:
      add       r3, r3, r4
      blr
    */
}

/*
 * --INFO--
 * Address:	80074420
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmClusterFullTable>(const void*, const void*)
{
    /*
    .loc_0x0:
      cmplwi    r4, 0
      bne-      .loc_0x10
      li        r3, 0
      blr

    .loc_0x10:
      add       r3, r3, r4
      blr
    */
}