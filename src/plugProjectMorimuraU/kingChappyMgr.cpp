

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
 * Address:	8035C288
 * Size:	000050
 */
void Game::KingChappy::Mgr::__ct((int, unsigned char))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x22D608
      lis       r3, 0x804E
      lis       r4, 0x8049
      addi      r5, r3, 0x1C38
      mr        r3, r31
      stw       r5, 0x0(r31)
      addi      r5, r5, 0x38
      addi      r0, r4, 0x1140
      stw       r5, 0x4(r31)
      stw       r0, 0x18(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035C2D8
 * Size:	000048
 */
void Game::KingChappy::Mgr::doAlloc(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0xBD4
      bl        -0x33844C
      mr.       r4, r3
      beq-      .loc_0x2C
      bl        .loc_0x48
      mr        r4, r3

    .loc_0x2C:
      mr        r3, r31
      bl        -0x22CA6C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x48:
    */
}

/*
 * --INFO--
 * Address:	8035C320
 * Size:	00006C
 */
void Game::KingChappy::Parms::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x252B98
      lis       r4, 0x804E
      addi      r3, r31, 0x7F8
      addi      r0, r4, 0x1D18
      li        r4, 0x1
      stw       r0, 0xD8(r31)
      bl        .loc_0x6C
      li        r4, 0
      li        r0, 0x1
      stb       r4, 0xBC8(r31)
      mr        r3, r31
      lfs       f0, 0x2A8(r2)
      stb       r4, 0xBC9(r31)
      stb       r0, 0xBCA(r31)
      stb       r0, 0xBCB(r31)
      stb       r4, 0xBCC(r31)
      stfs      f0, 0xBD0(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x6C:
    */
}

/*
 * --INFO--
 * Address:	8035C38C
 * Size:	0005F4
 */
void Game::KingChappy::Parms::ProperParms::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      extsh.    r0, r4
      lis       r4, 0x8049
      stw       r31, 0xC(r1)
      addi      r31, r4, 0x1130
      stw       r30, 0x8(r1)
      mr        r30, r3
      beq-      .loc_0x30
      addi      r0, r30, 0x3CC
      stw       r0, 0x0(r30)

    .loc_0x30:
      li        r0, 0
      lis       r5, 0x6670
      stw       r0, 0x4(r30)
      addi      r0, r31, 0x30
      mr        r4, r30
      addi      r3, r30, 0xC
      stw       r0, 0x8(r30)
      addi      r5, r5, 0x3031
      addi      r6, r31, 0x40
      bl        0xB7278
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x2AC(r2)
      stw       r0, 0xC(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0x34
      stfs      f0, 0x24(r30)
      addi      r5, r5, 0x3032
      lfs       f0, 0x2B4(r2)
      addi      r6, r31, 0x50
      stfs      f1, 0x2C(r30)
      stfs      f0, 0x30(r30)
      bl        0xB723C
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x2B8(r2)
      stw       r0, 0x34(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0x5C
      stfs      f0, 0x4C(r30)
      addi      r5, r5, 0x3033
      lfs       f0, 0x2BC(r2)
      addi      r6, r31, 0x60
      stfs      f1, 0x54(r30)
      stfs      f0, 0x58(r30)
      bl        0xB7200
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x2C0(r2)
      stw       r0, 0x5C(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0x84
      stfs      f0, 0x74(r30)
      addi      r5, r5, 0x3034
      lfs       f0, 0x2B4(r2)
      addi      r6, r31, 0x78
      stfs      f1, 0x7C(r30)
      stfs      f0, 0x80(r30)
      bl        0xB71C4
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x2C4(r2)
      stw       r0, 0x84(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0xAC
      stfs      f0, 0x9C(r30)
      addi      r5, r5, 0x3035
      lfs       f0, 0x2BC(r2)
      addi      r6, r31, 0x8C
      stfs      f1, 0xA4(r30)
      stfs      f0, 0xA8(r30)
      bl        0xB7188
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x2C8(r2)
      stw       r0, 0xAC(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0xD4
      stfs      f0, 0xC4(r30)
      addi      r5, r5, 0x3036
      lfs       f0, 0x2CC(r2)
      addi      r6, r31, 0x9C
      stfs      f1, 0xCC(r30)
      stfs      f0, 0xD0(r30)
      bl        0xB714C
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x2D0(r2)
      stw       r0, 0xD4(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0xFC
      stfs      f0, 0xEC(r30)
      addi      r5, r5, 0x3037
      lfs       f0, 0x2C8(r2)
      addi      r6, r31, 0xAC
      stfs      f1, 0xF4(r30)
      stfs      f0, 0xF8(r30)
      bl        0xB7110
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x2D4(r2)
      stw       r0, 0xFC(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0x124
      stfs      f0, 0x114(r30)
      addi      r5, r5, 0x3038
      lfs       f0, 0x2B4(r2)
      addi      r6, r31, 0xBC
      stfs      f1, 0x11C(r30)
      stfs      f0, 0x120(r30)
      bl        0xB70D4
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x2C0(r2)
      stw       r0, 0x124(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0x14C
      stfs      f0, 0x13C(r30)
      addi      r5, r5, 0x3039
      lfs       f0, 0x2C8(r2)
      addi      r6, r31, 0xCC
      stfs      f1, 0x144(r30)
      stfs      f0, 0x148(r30)
      bl        0xB7098
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x2C4(r2)
      stw       r0, 0x14C(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0x174
      stfs      f0, 0x164(r30)
      addi      r5, r5, 0x3130
      lfs       f0, 0x2C8(r2)
      addi      r6, r31, 0xE0
      stfs      f1, 0x16C(r30)
      stfs      f0, 0x170(r30)
      bl        0xB705C
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x2C8(r2)
      stw       r0, 0x174(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0x19C
      stfs      f0, 0x18C(r30)
      addi      r5, r5, 0x3131
      lfs       f0, 0x2D8(r2)
      addi      r6, r31, 0xF0
      stfs      f1, 0x194(r30)
      stfs      f0, 0x198(r30)
      bl        0xB7020
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x2DC(r2)
      stw       r0, 0x19C(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0x1C4
      stfs      f0, 0x1B4(r30)
      addi      r5, r5, 0x3132
      lfs       f0, 0x2A8(r2)
      addi      r6, r31, 0x104
      stfs      f1, 0x1BC(r30)
      stfs      f0, 0x1C0(r30)
      bl        0xB6FE4
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f1, 0x2B0(r2)
      stw       r0, 0x1C4(r30)
      mr        r4, r30
      lfs       f0, 0x2DC(r2)
      addi      r3, r30, 0x1EC
      stfs      f1, 0x1DC(r30)
      addi      r5, r5, 0x3133
      addi      r6, r31, 0x114
      stfs      f1, 0x1E4(r30)
      stfs      f0, 0x1E8(r30)
      bl        0xB6FAC
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x2E0(r2)
      stw       r0, 0x1EC(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0x214
      stfs      f0, 0x204(r30)
      addi      r5, r5, 0x3134
      lfs       f0, 0x2DC(r2)
      addi      r6, r31, 0x128
      stfs      f1, 0x20C(r30)
      stfs      f0, 0x210(r30)
      bl        0xB6F70
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x2BC(r2)
      stw       r0, 0x214(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0x23C
      stfs      f0, 0x22C(r30)
      addi      r5, r5, 0x3135
      lfs       f0, 0x2E4(r2)
      addi      r6, r31, 0x134
      stfs      f1, 0x234(r30)
      stfs      f0, 0x238(r30)
      bl        0xB6F34
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f1, 0x2DC(r2)
      stw       r0, 0x23C(r30)
      mr        r4, r30
      lfs       f0, 0x2E8(r2)
      addi      r3, r30, 0x264
      stfs      f1, 0x254(r30)
      addi      r5, r5, 0x3136
      addi      r6, r31, 0x140
      stfs      f1, 0x25C(r30)
      stfs      f0, 0x260(r30)
      bl        0xB6EFC
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x2C4(r2)
      stw       r0, 0x264(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0x28C
      stfs      f0, 0x27C(r30)
      addi      r5, r5, 0x3137
      lfs       f0, 0x2EC(r2)
      addi      r6, r2, 0x2F0
      stfs      f1, 0x284(r30)
      stfs      f0, 0x288(r30)
      bl        0xB6EC0
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x2F8(r2)
      stw       r0, 0x28C(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0x2B4
      stfs      f0, 0x2A4(r30)
      addi      r5, r5, 0x3138
      lfs       f0, 0x2E4(r2)
      addi      r6, r31, 0x14C
      stfs      f1, 0x2AC(r30)
      stfs      f0, 0x2B0(r30)
      bl        0xB6E84
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x2FC(r2)
      stw       r0, 0x2B4(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0x2DC
      stfs      f0, 0x2CC(r30)
      addi      r5, r5, 0x3139
      lfs       f0, 0x2DC(r2)
      addi      r6, r31, 0x15C
      stfs      f1, 0x2D4(r30)
      stfs      f0, 0x2D8(r30)
      bl        0xB6E48
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x2D4(r2)
      stw       r0, 0x2DC(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0x304
      stfs      f0, 0x2F4(r30)
      addi      r5, r5, 0x3230
      lfs       f0, 0x300(r2)
      addi      r6, r31, 0x16C
      stfs      f1, 0x2FC(r30)
      stfs      f0, 0x300(r30)
      bl        0xB6E0C
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, 0x304(r2)
      stw       r0, 0x304(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0x32C
      stfs      f0, 0x31C(r30)
      addi      r5, r5, 0x3231
      lfs       f0, 0x2B4(r2)
      addi      r6, r31, 0x17C
      stfs      f1, 0x324(r30)
      stfs      f0, 0x328(r30)
      bl        0xB6DD0
      lis       r3, 0x804B
      lis       r5, 0x6970
      subi      r0, r3, 0x5344
      lfs       f0, 0x2D0(r2)
      stw       r0, 0x32C(r30)
      mr        r4, r30
      lfs       f1, 0x2B0(r2)
      addi      r3, r30, 0x354
      stfs      f0, 0x344(r30)
      addi      r5, r5, 0x3031
      lfs       f0, 0x2E4(r2)
      addi      r6, r31, 0x190
      stfs      f1, 0x34C(r30)
      stfs      f0, 0x350(r30)
      bl        0xB6D94
      lis       r3, 0x804B
      lis       r5, 0x6970
      subi      r0, r3, 0x5370
      li        r3, 0x1F4
      stw       r0, 0x354(r30)
      li        r7, 0
      li        r0, 0x7D0
      mr        r4, r30
      stw       r3, 0x36C(r30)
      addi      r3, r30, 0x37C
      addi      r5, r5, 0x3032
      addi      r6, r31, 0x1A0
      stw       r7, 0x374(r30)
      stw       r0, 0x378(r30)
      bl        0xB6D58
      lis       r3, 0x804B
      lis       r5, 0x6970
      subi      r0, r3, 0x5370
      li        r3, 0xC8
      stw       r0, 0x37C(r30)
      li        r7, 0
      li        r0, 0x3E8
      mr        r4, r30
      stw       r3, 0x394(r30)
      addi      r3, r30, 0x3A4
      addi      r5, r5, 0x3033
      addi      r6, r31, 0x1B0
      stw       r7, 0x39C(r30)
      stw       r0, 0x3A0(r30)
      bl        0xB6D1C
      lis       r3, 0x804B
      li        r5, 0xA
      subi      r0, r3, 0x5370
      li        r4, 0
      stw       r0, 0x3A4(r30)
      li        r0, 0xC8
      mr        r3, r30
      stw       r5, 0x3BC(r30)
      stw       r4, 0x3C4(r30)
      stw       r0, 0x3C8(r30)
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
 * Address:	8035C980
 * Size:	000020
 */
void Game::KingChappy::Mgr::birth((Game::EnemyBirthArg&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x22D5C4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035C9A0
 * Size:	000020
 */
void Game::KingChappy::Mgr::createModel(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x22D03C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035C9C0
 * Size:	0000EC
 */
void Game::KingChappy::Mgr::requestState((Game::KingChappy::Obj*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r27, r3
      mr        r28, r4
      mr        r29, r5
      li        r31, 0
      b         .loc_0xBC

    .loc_0x24:
      mr        r3, r27
      mr        r4, r31
      lwz       r12, 0x0(r27)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      mr.       r30, r3
      bne-      .loc_0x60
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x15AC
      li        r4, 0x41
      addi      r5, r5, 0x15C0
      crclr     6, 0x6
      bl        -0x3323DC

    .loc_0x60:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xB8
      cmplw     r30, r28
      beq-      .loc_0xB8
      mr        r3, r30
      bl        -0x255654
      cmpw      r29, r3
      beq-      .loc_0xB8
      mr        r3, r30
      bl        -0x255664
      cmpwi     r3, 0x2
      beq-      .loc_0xB8
      mr        r3, r30
      mr        r4, r29
      bl        0x34BC
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xD8

    .loc_0xB8:
      addi      r31, r31, 0x1

    .loc_0xBC:
      mr        r3, r27
      lwz       r12, 0x0(r27)
      lwz       r12, 0x8C(r12)
      mtctr     r12
      bctrl
      cmpw      r31, r3
      blt+      .loc_0x24

    .loc_0xD8:
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8035CAAC
 * Size:	000010
 */
void Game::KingChappy::Mgr::getEnemy((int))
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x3A8
      lwz       r3, 0x44(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	8035CABC
 * Size:	0000B0
 */
void Game::KingChappy::Mgr::__dt(void)
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
      beq-      .loc_0x94
      lis       r3, 0x804E
      addi      r3, r3, 0x1C38
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x38
      stw       r0, 0x4(r30)
      beq-      .loc_0x84
      lis       r3, 0x804B
      subi      r3, r3, 0x760
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x38
      stw       r0, 0x4(r30)
      beq-      .loc_0x84
      lis       r3, 0x804B
      addic.    r0, r30, 0x4
      subi      r3, r3, 0x5304
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x38
      stw       r0, 0x4(r30)
      beq-      .loc_0x84
      lis       r4, 0x804B
      addi      r3, r30, 0x4
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x4(r30)
      bl        0xB4A4C

    .loc_0x84:
      extsh.    r0, r31
      ble-      .loc_0x94
      mr        r3, r30
      bl        -0x338A98

    .loc_0x94:
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
 * Address:	8035CB6C
 * Size:	000008
 */
void Game::KingChappy::Mgr::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x35
      blr
    */
}

/*
 * --INFO--
 * Address:	8035CB74
 * Size:	000060
 */
void Game::KingChappy::Mgr::createObj((int))
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
      mulli     r3, r31, 0x3A8
      addi      r3, r3, 0x10
      bl        -0x338BEC
      lis       r4, 0x8036
      lis       r5, 0x8036
      subi      r4, r4, 0x2D9C
      mr        r7, r31
      subi      r5, r5, 0x342C
      li        r6, 0x3A8
      bl        -0x29B1C4
      stw       r3, 0x44(r30)
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
 * Address:	8035CBD4
 * Size:	0000BC
 */
void Game::KingChappy::Obj::__dt(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      stw       r30, 0x8(r1)
      mr        r30, r4
      beq-      .loc_0xA0
      lis       r3, 0x804E
      addi      r0, r31, 0x398
      addi      r4, r3, 0x201C
      stw       r4, 0x0(r31)
      addi      r3, r4, 0x1B0
      addi      r4, r4, 0x2FC
      stw       r3, 0x178(r31)
      lwz       r3, 0x17C(r31)
      stw       r4, 0x0(r3)
      lwz       r3, 0x17C(r31)
      sub       r0, r0, r3
      stw       r0, 0xC(r3)
      beq-      .loc_0x90
      lis       r3, 0x804B
      addi      r0, r31, 0x2BC
      subi      r4, r3, 0x5CDC
      addi      r3, r31, 0x290
      stw       r4, 0x0(r31)
      addi      r5, r4, 0x1B0
      addi      r6, r4, 0x2F8
      li        r4, -0x1
      stw       r5, 0x178(r31)
      lwz       r5, 0x17C(r31)
      stw       r6, 0x0(r5)
      lwz       r5, 0x17C(r31)
      sub       r0, r0, r5
      stw       r0, 0xC(r5)
      bl        0xB4928

    .loc_0x90:
      extsh.    r0, r30
      ble-      .loc_0xA0
      mr        r3, r31
      bl        -0x338BBC

    .loc_0xA0:
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
 * Address:	8035CC90
 * Size:	000050
 */
void Game::KingChappy::Parms::read((Stream&))
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
      bl        0xB6B48
      mr        r4, r31
      addi      r3, r30, 0xE0
      bl        0xB6B3C
      mr        r4, r31
      addi      r3, r30, 0x7F8
      bl        0xB6B30
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
 * Address:	8035CCE0
 * Size:	000008
 */
void @4 @Game::KingChappy::Mgr::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x228
    */
}
