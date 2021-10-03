

/*
 * --INFO--
 * Address:	80459BD4
 * Size:	000274
 */
void PSM::Env_Pollutin::play(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804A
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      subi      r29, r4, 0x3198
      bl        -0x118FC0
      lfs       f0, 0x28C0(r2)
      stfs      f0, 0x28(r31)
      lfs       f1, 0x50(r31)
      fcmpu     cr0, f0, f1
      beq-      .loc_0x254
      fcmpo     cr0, f1, f0
      blt-      .loc_0x58
      addi      r3, r29, 0xC
      addi      r5, r29, 0x24
      li        r4, 0x4F
      crclr     6, 0x6
      bl        -0x42F5E8

    .loc_0x58:
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x78
      addi      r3, r29, 0x30
      addi      r5, r29, 0x24
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x42F608

    .loc_0x78:
      lwz       r30, -0x6780(r13)
      cmplwi    r30, 0
      bne-      .loc_0x98
      addi      r3, r29, 0x30
      addi      r5, r29, 0x24
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x42F628

    .loc_0x98:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0xB8
      addi      r3, r29, 0x3C
      addi      r5, r29, 0x24
      li        r4, 0xC7
      crclr     6, 0x6
      bl        -0x42F648

    .loc_0xB8:
      lwz       r3, 0x4(r30)
      lwz       r3, 0x4(r3)
      cmplwi    r3, 0
      bne-      .loc_0xD0
      li        r30, 0
      b         .loc_0xD8

    .loc_0xD0:
      bl        -0x124624
      mr        r30, r3

    .loc_0xD8:
      cmplwi    r30, 0
      beq-      .loc_0x154
      mr        r3, r30
      lwz       r12, 0x10(r30)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x154
      mr        r3, r30
      lwz       r12, 0x10(r30)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x0(r3)
      li        r4, 0
      lwz       r12, 0x10(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x28C4(r2)
      fcmpo     cr0, f1, f2
      ble-      .loc_0x254
      lfs       f3, 0x28C0(r2)
      li        r3, 0x1
      lfs       f5, 0x50(r31)
      fmr       f4, f3
      bl        -0x39FAD8
      stfs      f1, 0x28(r31)
      b         .loc_0x254

    .loc_0x154:
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x174
      addi      r3, r29, 0x30
      addi      r5, r29, 0x24
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x42F704

    .loc_0x174:
      lwz       r30, -0x6780(r13)
      cmplwi    r30, 0
      bne-      .loc_0x194
      addi      r3, r29, 0x30
      addi      r5, r29, 0x24
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x42F724

    .loc_0x194:
      lwz       r0, 0x4(r30)
      cmplwi    r0, 0
      bne-      .loc_0x1B4
      addi      r3, r29, 0x3C
      addi      r5, r29, 0x24
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x42F744

    .loc_0x1B4:
      lwz       r3, 0x4(r30)
      lwz       r30, 0x4(r3)
      cmplwi    r30, 0
      bne-      .loc_0x1D8
      addi      r3, r29, 0x3C
      addi      r5, r29, 0x48
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x42F768

    .loc_0x1D8:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x208
      addi      r3, r29, 0x6C
      addi      r5, r29, 0x24
      li        r4, 0x177
      crclr     6, 0x6
      bl        -0x42F798

    .loc_0x208:
      addi      r3, r30, 0x10
      li        r4, 0x1
      bl        -0x125F48
      mr.       r30, r3
      beq-      .loc_0x254
      lwz       r12, 0x10(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x254
      lwz       r3, 0x14(r30)
      addi      r4, r29, 0x80
      bl        -0x38F754
      cmpwi     r3, 0
      bne-      .loc_0x254
      lfs       f0, 0x50(r31)
      stfs      f0, 0x28(r31)

    .loc_0x254:
      lwz       r0, 0x24(r1)
      lwz       r3, 0x34(r31)
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
 * Address:	........
 * Size:	000068
 */
void PSM::EnvSe_Perspective_AvoidY::__ct((unsigned long, float, Vec, float))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void PSGame::EnvSe_Perspective::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80459E48
 * Size:	000280
 */
void PSM::EnvSe_Perspective_AvoidY::play(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stfd      f31, 0x50(r1)
      psq_st    f31,0x58(r1),0,0
      stmw      r27, 0x3C(r1)
      mr        r31, r3
      lis       r4, 0x804A
      lwz       r3, -0x6D20(r13)
      subi      r30, r4, 0x3198
      li        r28, 0x1
      bl        -0x2FF254
      mr.       r27, r3
      bne-      .loc_0x3C
      li        r28, 0

    .loc_0x3C:
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x5C
      addi      r3, r30, 0x30
      addi      r5, r30, 0x24
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x42F860

    .loc_0x5C:
      lwz       r29, -0x6780(r13)
      cmplwi    r29, 0
      bne-      .loc_0x7C
      addi      r3, r30, 0x30
      addi      r5, r30, 0x24
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x42F880

    .loc_0x7C:
      lwz       r0, 0x4(r29)
      cmplwi    r0, 0
      bne-      .loc_0x9C
      addi      r3, r30, 0x3C
      addi      r5, r30, 0x24
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x42F8A0

    .loc_0x9C:
      lwz       r3, 0x4(r29)
      lwz       r29, 0x4(r3)
      cmplwi    r29, 0
      bne-      .loc_0xC0
      addi      r3, r30, 0x3C
      addi      r5, r30, 0x48
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x42F8C4

    .loc_0xC0:
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xE0
      b         .loc_0xE4

    .loc_0xE0:
      li        r29, 0

    .loc_0xE4:
      rlwinm.   r0,r28,0,24,31
      lwz       r3, 0x58(r29)
      beq-      .loc_0x260
      cmplwi    r3, 0
      beq-      .loc_0x260
      mr        r4, r31
      bl        0x2B38
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x260
      mr        r4, r27
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r27)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x24(r1)
      mr        r4, r27
      lfs       f0, 0x48(r31)
      addi      r3, r1, 0x14
      fadds     f0, f0, f1
      stfs      f0, 0x40(r31)
      lwz       r12, 0x0(r27)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x14(r1)
      lfs       f0, 0x1C(r1)
      stfs      f1, 0x8(r1)
      lfs       f4, 0x18(r1)
      stfs      f0, 0x10(r1)
      lwz       r3, 0x8(r1)
      lwz       r0, 0x10(r1)
      stw       r3, 0x2C(r1)
      lfs       f3, 0x3C(r31)
      stw       r0, 0x34(r1)
      lfs       f2, 0x2C(r1)
      lfs       f1, 0x44(r31)
      lfs       f0, 0x34(r1)
      fsubs     f2, f3, f2
      stfs      f4, 0xC(r1)
      fsubs     f1, f1, f0
      lfs       f0, 0x28C4(r2)
      fmuls     f2, f2, f2
      lwz       r0, 0xC(r1)
      fmuls     f1, f1, f1
      stw       r0, 0x30(r1)
      fadds     f31, f2, f1
      fcmpo     cr0, f31, f0
      ble-      .loc_0x1B0
      fsqrte    f0, f31
      fmuls     f31, f0, f31

    .loc_0x1B0:
      lwz       r0, -0x6E4C(r13)
      cmplwi    r0, 0
      bne-      .loc_0x1D0
      addi      r3, r30, 0x90
      addi      r5, r30, 0x24
      li        r4, 0x89
      crclr     6, 0x6
      bl        -0x42F9D4

    .loc_0x1D0:
      lwz       r3, -0x6E4C(r13)
      addi      r4, r31, 0x3C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      mr        r9, r3
      lwz       r3, -0x67A8(r13)
      lwz       r4, 0x24(r31)
      addi      r5, r31, 0x34
      addi      r6, r31, 0x3C
      li        r7, 0
      li        r8, 0
      bl        -0x4447E0
      lfs       f3, 0x54(r31)
      fcmpo     cr0, f31, f3
      bge-      .loc_0x230
      fmr       f1, f31
      lfs       f2, 0x50(r31)
      lfs       f4, 0x28C4(r2)
      li        r3, 0x1
      lfs       f5, 0x5C(r31)
      bl        -0x39FE2C
      b         .loc_0x25C

    .loc_0x230:
      lfs       f2, 0x58(r31)
      fcmpo     cr0, f31, f2
      bge-      .loc_0x244
      lfs       f1, 0x5C(r31)
      b         .loc_0x25C

    .loc_0x244:
      fmr       f1, f31
      lfs       f3, 0x4C(r31)
      lfs       f4, 0x5C(r31)
      li        r3, 0x1
      lfs       f5, 0x28C4(r2)
      bl        -0x39FE5C

    .loc_0x25C:
      stfs      f1, 0x28(r31)

    .loc_0x260:
      lwz       r3, 0x34(r31)
      psq_l     f31,0x58(r1),0,0
      lfd       f31, 0x50(r1)
      lmw       r27, 0x3C(r1)
      lwz       r0, 0x64(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	8045A0C8
 * Size:	0000A0
 */
void PSM::EnvSeObjBuilder::newSeObj((unsigned long, float, Vec))
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
      fmr       f31, f1
      mr        r29, r4
      mr        r30, r5
      li        r3, 0x60
      bl        -0x436254
      mr.       r31, r3
      beq-      .loc_0x78
      lwz       r7, 0x0(r30)
      fmr       f1, f31
      lwz       r6, 0x4(r30)
      mr        r4, r29
      lwz       r0, 0x8(r30)
      addi      r5, r1, 0x8
      stw       r7, 0x8(r1)
      stw       r6, 0xC(r1)
      stw       r0, 0x10(r1)
      bl        -0x11A274
      lis       r3, 0x804F
      lfs       f0, 0x28C8(r2)
      subi      r0, r3, 0x1CC0
      stw       r0, 0x10(r31)
      stfs      f0, 0x48(r31)

    .loc_0x78:
      mr        r3, r31
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
 * Address:	8045A168
 * Size:	00005C
 */
void PSM::EnvSeObjBuilder::onBuild((PSSystem::EnvSeBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      lwz       r5, 0x50(r3)
      lwz       r0, 0x54(r3)
      stw       r5, 0x8(r1)
      lwz       r6, 0x58(r3)
      stw       r0, 0xC(r1)
      lwz       r5, 0x5C(r3)
      lwz       r0, 0x60(r3)
      lfs       f0, 0x8(r1)
      stw       r6, 0x10(r1)
      lfs       f1, 0xC(r1)
      stfs      f0, 0x4C(r4)
      lfs       f0, 0x10(r1)
      stfs      f1, 0x50(r4)
      stw       r5, 0x14(r1)
      lfs       f1, 0x14(r1)
      stfs      f0, 0x54(r4)
      stw       r0, 0x18(r1)
      lfs       f0, 0x18(r1)
      stfs      f1, 0x58(r4)
      stfs      f0, 0x5C(r4)
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8045A1C4
 * Size:	00003C
 */
void PSM::SceneMgr::__ct(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x804F
      lis       r5, 0x804E
      subi      r0, r4, 0x1CE0
      lis       r4, 0x804F
      stw       r0, 0x0(r3)
      li        r6, 0
      subi      r5, r5, 0x5638
      subi      r0, r4, 0x1D08
      stw       r6, 0x4(r3)
      stw       r6, 0x8(r3)
      stb       r6, 0xC(r3)
      stw       r5, 0x0(r3)
      stb       r6, 0x10(r3)
      stw       r0, 0x0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8045A200
 * Size:	0000D8
 */
void PSM::SceneMgr::newMainBgm((char const*, JAInter::SoundInfo&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      li        r3, 0x88
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r5
      stw       r29, 0x14(r1)
      mr        r29, r4
      bl        -0x436380
      mr.       r31, r3
      beq-      .loc_0x40
      li        r4, 0
      li        r5, 0x8
      bl        0x15084
      mr        r31, r3

    .loc_0x40:
      li        r3, 0x134
      bl        -0x4363A0
      mr.       r0, r3
      beq-      .loc_0x64
      mr        r4, r29
      mr        r5, r30
      mr        r6, r31
      bl        -0x12702C
      mr        r0, r3

    .loc_0x64:
      cmplwi    r0, 0
      mr        r30, r0
      bne-      .loc_0x8C
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x318C
      li        r4, 0x15D
      subi      r5, r5, 0x3174
      crclr     6, 0x6
      bl        -0x42FC48

    .loc_0x8C:
      mr        r3, r30
      lwz       r12, 0x10(r30)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      mr        r4, r30
      bl        0x15378
      mr        r3, r31
      mr        r4, r30
      bl        -0x1169E4
      lwz       r0, 0x24(r1)
      mr        r3, r30
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
 * Address:	8045A2D8
 * Size:	000014
 */
void PSM::SceneMgr::curSceneIsBigBossFloor(void)
{
    /*
    .loc_0x0:
      lwz       r3, -0x6370(r13)
      neg       r0, r3
      or        r0, r0, r3
      rlwinm    r3,r0,1,31,31
      blr
    */
}

/*
 * --INFO--
 * Address:	8045A2EC
 * Size:	0001C0
 */
void PSM::SceneMgr::newDirectedBgm((char const*, JAInter::SoundInfo&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r3, 0x804A
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r30, r4
      subi      r29, r3, 0x3198
      mr        r31, r5
      mr        r3, r30
      li        r28, 0
      addi      r4, r29, 0x9C
      li        r27, 0
      bl        -0x38FC5C
      cmpwi     r3, 0
      bne-      .loc_0x84
      li        r3, 0x24
      bl        -0x436488
      mr.       r28, r3
      beq-      .loc_0x54
      bl        0x15EB8
      mr        r28, r3

    .loc_0x54:
      mr        r27, r28
      li        r3, 0x144
      bl        -0x4364A4
      mr.       r0, r3
      beq-      .loc_0x7C
      mr        r4, r30
      mr        r5, r31
      mr        r6, r28
      bl        0x1F30
      mr        r0, r3

    .loc_0x7C:
      mr        r28, r0
      b         .loc_0x150

    .loc_0x84:
      mr        r3, r30
      addi      r4, r29, 0xA8
      bl        -0x38FCB8
      cmpwi     r3, 0
      bne-      .loc_0xE0
      li        r3, 0x24
      bl        -0x4364E4
      mr.       r28, r3
      beq-      .loc_0xB0
      bl        0x15E5C
      mr        r28, r3

    .loc_0xB0:
      mr        r27, r28
      li        r3, 0x144
      bl        -0x436500
      mr.       r0, r3
      beq-      .loc_0xD8
      mr        r4, r30
      mr        r5, r31
      mr        r6, r28
      bl        0x2330
      mr        r0, r3

    .loc_0xD8:
      mr        r28, r0
      b         .loc_0x150

    .loc_0xE0:
      mr        r3, r30
      addi      r4, r29, 0xB4
      bl        -0x38FD14
      cmpwi     r3, 0
      bne-      .loc_0x13C
      li        r3, 0x24
      bl        -0x436540
      mr.       r28, r3
      beq-      .loc_0x10C
      bl        0x16094
      mr        r28, r3

    .loc_0x10C:
      mr        r27, r28
      li        r3, 0xB8
      bl        -0x43655C
      mr.       r0, r3
      beq-      .loc_0x134
      mr        r4, r30
      mr        r5, r31
      mr        r6, r28
      bl        -0x127B68
      mr        r0, r3

    .loc_0x134:
      mr        r28, r0
      b         .loc_0x150

    .loc_0x13C:
      addi      r3, r29, 0xC
      addi      r5, r29, 0x24
      li        r4, 0x193
      crclr     6, 0x6
      bl        -0x42FDF8

    .loc_0x150:
      cmplwi    r27, 0
      bne-      .loc_0x16C
      addi      r3, r29, 0xC
      addi      r5, r29, 0x24
      li        r4, 0x196
      crclr     6, 0x6
      bl        -0x42FE14

    .loc_0x16C:
      cmplwi    r28, 0
      bne-      .loc_0x188
      addi      r3, r29, 0xC
      addi      r5, r29, 0x24
      li        r4, 0x197
      crclr     6, 0x6
      bl        -0x42FE30

    .loc_0x188:
      mr        r3, r28
      lwz       r12, 0x10(r28)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r3, r27
      mr        r4, r28
      bl        -0x116BC0
      mr        r3, r28
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8045A4AC
 * Size:	0001F4
 */
void PSM::SceneMgr::newGameScene((unsigned char, PSGame::SceneInfo*))
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
      li        r29, 0
      lbz       r0, 0x6(r5)
      cmplwi    r0, 0x6
      beq-      .loc_0x3C
      rlwinm    r0,r0,0,24,31
      cmplwi    r0, 0x7
      bne-      .loc_0x64

    .loc_0x3C:
      li        r3, 0x68
      bl        -0x436648
      mr.       r0, r3
      beq-      .loc_0x5C
      mr        r4, r30
      mr        r5, r31
      bl        0x10684
      mr        r0, r3

    .loc_0x5C:
      mr        r29, r0
      b         .loc_0x16C

    .loc_0x64:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xA8
      li        r3, 0x68
      bl        -0x43668C
      mr.       r0, r3
      beq-      .loc_0xA0
      mr        r4, r30
      mr        r5, r31
      bl        0xF950
      mr        r0, r3

    .loc_0xA0:
      mr        r29, r0
      b         .loc_0x16C

    .loc_0xA8:
      lbz       r0, 0x6(r31)
      cmplwi    r0, 0x14
      bgt-      .loc_0x16C
      lis       r3, 0x804F
      rlwinm    r0,r0,2,0,29
      subi      r3, r3, 0x1E9C
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      li        r3, 0x28
      bl        -0x4366D8
      mr.       r0, r3
      beq-      .loc_0xEC
      mr        r4, r30
      mr        r5, r31
      bl        0xD22C
      mr        r0, r3

    .loc_0xEC:
      mr        r29, r0
      b         .loc_0x16C
      li        r3, 0x38
      bl        -0x436700
      mr.       r29, r3
      beq-      .loc_0x16C
      mr        r4, r30
      mr        r5, r31
      bl        0xD5D8
      lis       r3, 0x804F
      subi      r0, r3, 0xCE4
      stw       r0, 0x0(r29)
      b         .loc_0x16C
      li        r3, 0x60
      bl        -0x43672C
      mr.       r0, r3
      beq-      .loc_0x140
      mr        r4, r30
      mr        r5, r31
      bl        0xF35C
      mr        r0, r3

    .loc_0x140:
      mr        r29, r0
      b         .loc_0x16C
      li        r3, 0x2C
      bl        -0x436754
      mr.       r0, r3
      beq-      .loc_0x168
      mr        r4, r30
      mr        r5, r31
      bl        0x10E60
      mr        r0, r3

    .loc_0x168:
      mr        r29, r0

    .loc_0x16C:
      cmplwi    r29, 0
      bne-      .loc_0x19C
      li        r3, 0x28
      bl        -0x436780
      mr.       r29, r3
      beq-      .loc_0x19C
      mr        r4, r30
      mr        r5, r31
      bl        0xCFF8
      lis       r3, 0x804F
      subi      r0, r3, 0xD8C
      stw       r0, 0x0(r29)

    .loc_0x19C:
      cmplwi    r29, 0
      bne-      .loc_0x1C0
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x318C
      li        r4, 0x1D4
      subi      r5, r5, 0x3174
      crclr     6, 0x6
      bl        -0x430028

    .loc_0x1C0:
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x24(r1)
      mr        r3, r29
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
 * Address:	8045A6A0
 * Size:	0018BC
 */
void PSM::SceneMgr::initEnvironmentSe((PSM::Scene_Game*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x170(r1)
      mflr      r0
      stw       r0, 0x174(r1)
      stmw      r24, 0x150(r1)
      mr        r27, r4
      lis       r4, 0x804A
      mr        r3, r27
      subi      r31, r4, 0x3198
      bl        0xD054
      mr        r0, r3
      addi      r3, r1, 0x6C
      mr        r28, r0
      li        r29, 0
      lbz       r25, 0x6(r28)
      addi      r4, r28, 0x20
      bl        0x1A1C
      mr        r4, r3
      addi      r3, r1, 0xE8
      bl        0x19A0
      rlwinm    r30,r25,0,24,31
      cmpwi     r30, 0x7
      beq-      .loc_0x454
      bge-      .loc_0x454
      cmpwi     r30, 0x6
      bge-      .loc_0x68
      b         .loc_0x454

    .loc_0x68:
      li        r3, 0x18
      bl        -0x436868
      mr.       r29, r3
      beq-      .loc_0x80
      bl        0x2670
      mr        r29, r3

    .loc_0x80:
      li        r3, 0x14
      bl        -0x436880
      mr.       r26, r3
      beq-      .loc_0x9C
      mr        r4, r29
      bl        0x22F0
      mr        r26, r3

    .loc_0x9C:
      stw       r26, 0x58(r27)
      li        r3, 0x14
      li        r5, -0x4
      lwz       r4, -0x77D4(r13)
      bl        -0x43680C
      mr.       r24, r3
      beq-      .loc_0xC8
      mr        r4, r24
      bl        -0x433FA4
      li        r0, 0x4016
      stw       r0, 0x10(r24)

    .loc_0xC8:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0xDC
      stw       r24, 0x134(r1)

    .loc_0xDC:
      mr        r3, r25
      mr        r4, r24
      bl        -0x433EA0
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436854
      mr.       r24, r3
      beq-      .loc_0x110
      mr        r4, r24
      bl        -0x433FEC
      li        r0, 0x4018
      stw       r0, 0x10(r24)

    .loc_0x110:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x120
      stw       r24, 0x134(r1)

    .loc_0x120:
      mr        r3, r25
      mr        r4, r24
      bl        -0x433EE4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436898
      mr.       r24, r3
      beq-      .loc_0x154
      mr        r4, r24
      bl        -0x434030
      li        r0, 0x401A
      stw       r0, 0x10(r24)

    .loc_0x154:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x164
      stw       r24, 0x134(r1)

    .loc_0x164:
      mr        r3, r25
      mr        r4, r24
      bl        -0x433F28
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x4368DC
      mr.       r24, r3
      beq-      .loc_0x198
      mr        r4, r24
      bl        -0x434074
      li        r0, 0x401C
      stw       r0, 0x10(r24)

    .loc_0x198:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x1A8
      stw       r24, 0x134(r1)

    .loc_0x1A8:
      mr        r3, r25
      mr        r4, r24
      bl        -0x433F6C
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436920
      mr.       r24, r3
      beq-      .loc_0x1DC
      mr        r4, r24
      bl        -0x4340B8
      li        r0, 0x401E
      stw       r0, 0x10(r24)

    .loc_0x1DC:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x1EC
      stw       r24, 0x134(r1)

    .loc_0x1EC:
      mr        r3, r25
      mr        r4, r24
      bl        -0x433FB0
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436964
      mr.       r24, r3
      beq-      .loc_0x220
      mr        r4, r24
      bl        -0x4340FC
      li        r0, 0x4017
      stw       r0, 0x10(r24)

    .loc_0x220:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x230
      stw       r24, 0x134(r1)

    .loc_0x230:
      mr        r3, r25
      mr        r4, r24
      bl        -0x433FF4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x4369A8
      mr.       r24, r3
      beq-      .loc_0x264
      mr        r4, r24
      bl        -0x434140
      li        r0, 0x4019
      stw       r0, 0x10(r24)

    .loc_0x264:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x274
      stw       r24, 0x134(r1)

    .loc_0x274:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434038
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x4369EC
      mr.       r24, r3
      beq-      .loc_0x2A8
      mr        r4, r24
      bl        -0x434184
      li        r0, 0x401B
      stw       r0, 0x10(r24)

    .loc_0x2A8:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x2B8
      stw       r24, 0x134(r1)

    .loc_0x2B8:
      mr        r3, r25
      mr        r4, r24
      bl        -0x43407C
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436A30
      mr.       r24, r3
      beq-      .loc_0x2EC
      mr        r4, r24
      bl        -0x4341C8
      li        r0, 0x401D
      stw       r0, 0x10(r24)

    .loc_0x2EC:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x2FC
      stw       r24, 0x134(r1)

    .loc_0x2FC:
      mr        r3, r25
      mr        r4, r24
      bl        -0x4340C0
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436A74
      mr.       r24, r3
      beq-      .loc_0x330
      mr        r4, r24
      bl        -0x43420C
      li        r0, 0x401F
      stw       r0, 0x10(r24)

    .loc_0x330:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x340
      stw       r24, 0x134(r1)

    .loc_0x340:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434104
      lwz       r8, 0xC4(r31)
      addi      r3, r1, 0xE8
      lwz       r7, 0xC8(r31)
      addi      r4, r1, 0x58
      lwz       r6, 0xCC(r31)
      lwz       r5, 0xD0(r31)
      lwz       r0, 0xD4(r31)
      lfs       f0, 0x28CC(r2)
      stw       r8, 0xD4(r1)
      stfs      f0, 0x10(r26)
      stw       r7, 0xD8(r1)
      stw       r6, 0xDC(r1)
      stw       r5, 0xE0(r1)
      stw       r0, 0xE4(r1)
      stw       r8, 0x58(r1)
      stw       r7, 0x5C(r1)
      stw       r6, 0x60(r1)
      stw       r5, 0x64(r1)
      stw       r0, 0x68(r1)
      bl        0x1624
      lfs       f1, 0x28C0(r2)
      mr        r4, r29
      addi      r3, r1, 0xE8
      bl        -0x11A71C
      mr        r3, r29
      bl        0x1598
      li        r3, 0x54
      bl        -0x436BB4
      mr.       r25, r3
      beq-      .loc_0x3F8
      lfs       f2, 0x28C0(r2)
      mr        r24, r25
      lfs       f1, 0x28C4(r2)
      li        r4, 0x3079
      fmr       f3, f2
      lfs       f4, 0x28D0(r2)
      lfs       f5, 0x28D4(r2)
      bl        -0x11AB20
      lis       r3, 0x804F
      lfs       f0, 0x28C0(r2)
      subi      r0, r3, 0x1CA8
      stw       r0, 0x10(r24)
      stfs      f0, 0x50(r24)

    .loc_0x3F8:
      mr        r3, r29
      mr        r4, r25
      bl        -0x4341BC
      li        r3, 0x54
      bl        -0x436C04
      mr.       r25, r3
      beq-      .loc_0x448
      lfs       f1, 0x28C0(r2)
      mr        r24, r25
      lfs       f2, 0x28C4(r2)
      li        r4, 0x307A
      fmr       f3, f1
      lfs       f4, 0x28D0(r2)
      lfs       f5, 0x28D4(r2)
      bl        -0x11AB70
      lis       r3, 0x804F
      lfs       f0, 0x28C0(r2)
      subi      r0, r3, 0x1CA8
      stw       r0, 0x10(r24)
      stfs      f0, 0x50(r24)

    .loc_0x448:
      mr        r3, r29
      mr        r4, r25
      bl        -0x43420C

    .loc_0x454:
      cmplwi    r29, 0
      bne-      .loc_0x185C
      mr        r3, r28
      li        r4, 0x1
      bl        -0x1255A4
      rlwinm    r0,r3,0,24,31
      subfic    r0, r0, 0x1
      cntlzw    r0, r0
      rlwinm.   r0,r0,27,24,31
      bne-      .loc_0x185C
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x11E0
      li        r3, 0x18
      bl        -0x436C98
      mr.       r29, r3
      beq-      .loc_0x4B0
      bl        0x2240
      mr        r29, r3

    .loc_0x4B0:
      li        r3, 0x14
      bl        -0x436CB0
      mr.       r30, r3
      beq-      .loc_0x4CC
      mr        r4, r29
      bl        0x1EC0
      mr        r30, r3

    .loc_0x4CC:
      stw       r30, 0x58(r27)
      lbz       r0, 0x40(r28)
      cmplwi    r0, 0xE
      bgt-      .loc_0x1004
      lis       r3, 0x804F
      rlwinm    r0,r0,2,0,29
      subi      r3, r3, 0x1E48
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436C60
      mr.       r24, r3
      beq-      .loc_0x51C
      mr        r4, r24
      bl        -0x4343F8
      li        r0, 0x4018
      stw       r0, 0x10(r24)

    .loc_0x51C:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0x530
      stw       r24, 0x134(r1)

    .loc_0x530:
      mr        r3, r25
      mr        r4, r24
      bl        -0x4342F4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436CA8
      mr.       r24, r3
      beq-      .loc_0x564
      mr        r4, r24
      bl        -0x434440
      li        r0, 0x401A
      stw       r0, 0x10(r24)

    .loc_0x564:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x574
      stw       r24, 0x134(r1)

    .loc_0x574:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434338
      b         .loc_0x10D4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436CF0
      mr.       r24, r3
      beq-      .loc_0x5AC
      mr        r4, r24
      bl        -0x434488
      li        r0, 0x4019
      stw       r0, 0x10(r24)

    .loc_0x5AC:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0x5C0
      stw       r24, 0x134(r1)

    .loc_0x5C0:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434384
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436D38
      mr.       r24, r3
      beq-      .loc_0x5F4
      mr        r4, r24
      bl        -0x4344D0
      li        r0, 0x401B
      stw       r0, 0x10(r24)

    .loc_0x5F4:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x604
      stw       r24, 0x134(r1)

    .loc_0x604:
      mr        r3, r25
      mr        r4, r24
      bl        -0x4343C8
      b         .loc_0x10D4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436D80
      mr.       r24, r3
      beq-      .loc_0x63C
      mr        r4, r24
      bl        -0x434518
      li        r0, 0x4018
      stw       r0, 0x10(r24)

    .loc_0x63C:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0x650
      stw       r24, 0x134(r1)

    .loc_0x650:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434414
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436DC8
      mr.       r24, r3
      beq-      .loc_0x684
      mr        r4, r24
      bl        -0x434560
      li        r0, 0x401B
      stw       r0, 0x10(r24)

    .loc_0x684:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x694
      stw       r24, 0x134(r1)

    .loc_0x694:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434458
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436E0C
      mr.       r24, r3
      beq-      .loc_0x6C8
      mr        r4, r24
      bl        -0x4345A4
      li        r0, 0x401C
      stw       r0, 0x10(r24)

    .loc_0x6C8:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x6D8
      stw       r24, 0x134(r1)

    .loc_0x6D8:
      mr        r3, r25
      mr        r4, r24
      bl        -0x43449C
      b         .loc_0x10D4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436E54
      mr.       r24, r3
      beq-      .loc_0x710
      mr        r4, r24
      bl        -0x4345EC
      li        r0, 0x401A
      stw       r0, 0x10(r24)

    .loc_0x710:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0x724
      stw       r24, 0x134(r1)

    .loc_0x724:
      mr        r3, r25
      mr        r4, r24
      bl        -0x4344E8
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436E9C
      mr.       r24, r3
      beq-      .loc_0x758
      mr        r4, r24
      bl        -0x434634
      li        r0, 0x401D
      stw       r0, 0x10(r24)

    .loc_0x758:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x768
      stw       r24, 0x134(r1)

    .loc_0x768:
      mr        r3, r25
      mr        r4, r24
      bl        -0x43452C
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436EE0
      mr.       r24, r3
      beq-      .loc_0x79C
      mr        r4, r24
      bl        -0x434678
      li        r0, 0x4016
      stw       r0, 0x10(r24)

    .loc_0x79C:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x7AC
      stw       r24, 0x134(r1)

    .loc_0x7AC:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434570
      b         .loc_0x10D4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436F28
      mr.       r24, r3
      beq-      .loc_0x7E4
      mr        r4, r24
      bl        -0x4346C0
      li        r0, 0x401C
      stw       r0, 0x10(r24)

    .loc_0x7E4:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0x7F8
      stw       r24, 0x134(r1)

    .loc_0x7F8:
      mr        r3, r25
      mr        r4, r24
      bl        -0x4345BC
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436F70
      mr.       r24, r3
      beq-      .loc_0x82C
      mr        r4, r24
      bl        -0x434708
      li        r0, 0x4017
      stw       r0, 0x10(r24)

    .loc_0x82C:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x83C
      stw       r24, 0x134(r1)

    .loc_0x83C:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434600
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436FB4
      mr.       r24, r3
      beq-      .loc_0x870
      mr        r4, r24
      bl        -0x43474C
      li        r0, 0x401E
      stw       r0, 0x10(r24)

    .loc_0x870:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x880
      stw       r24, 0x134(r1)

    .loc_0x880:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434644
      b         .loc_0x10D4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x436FFC
      mr.       r24, r3
      beq-      .loc_0x8B8
      mr        r4, r24
      bl        -0x434794
      li        r0, 0x4016
      stw       r0, 0x10(r24)

    .loc_0x8B8:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0x8CC
      stw       r24, 0x134(r1)

    .loc_0x8CC:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434690
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437044
      mr.       r24, r3
      beq-      .loc_0x900
      mr        r4, r24
      bl        -0x4347DC
      li        r0, 0x401F
      stw       r0, 0x10(r24)

    .loc_0x900:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x910
      stw       r24, 0x134(r1)

    .loc_0x910:
      mr        r3, r25
      mr        r4, r24
      bl        -0x4346D4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437088
      mr.       r24, r3
      beq-      .loc_0x944
      mr        r4, r24
      bl        -0x434820
      li        r0, 0x4020
      stw       r0, 0x10(r24)

    .loc_0x944:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x954
      stw       r24, 0x134(r1)

    .loc_0x954:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434718
      b         .loc_0x10D4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x4370D0
      mr.       r24, r3
      beq-      .loc_0x98C
      mr        r4, r24
      bl        -0x434868
      li        r0, 0x401E
      stw       r0, 0x10(r24)

    .loc_0x98C:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0x9A0
      stw       r24, 0x134(r1)

    .loc_0x9A0:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434764
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437118
      mr.       r24, r3
      beq-      .loc_0x9D4
      mr        r4, r24
      bl        -0x4348B0
      li        r0, 0x4021
      stw       r0, 0x10(r24)

    .loc_0x9D4:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x9E4
      stw       r24, 0x134(r1)

    .loc_0x9E4:
      mr        r3, r25
      mr        r4, r24
      bl        -0x4347A8
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x43715C
      mr.       r24, r3
      beq-      .loc_0xA18
      mr        r4, r24
      bl        -0x4348F4
      li        r0, 0x402A
      stw       r0, 0x10(r24)

    .loc_0xA18:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0xA28
      stw       r24, 0x134(r1)

    .loc_0xA28:
      mr        r3, r25
      mr        r4, r24
      bl        -0x4347EC
      b         .loc_0x10D4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x4371A4
      mr.       r24, r3
      beq-      .loc_0xA60
      mr        r4, r24
      bl        -0x43493C
      li        r0, 0x4020
      stw       r0, 0x10(r24)

    .loc_0xA60:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0xA74
      stw       r24, 0x134(r1)

    .loc_0xA74:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434838
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x4371EC
      mr.       r24, r3
      beq-      .loc_0xAA8
      mr        r4, r24
      bl        -0x434984
      li        r0, 0x402B
      stw       r0, 0x10(r24)

    .loc_0xAA8:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0xAB8
      stw       r24, 0x134(r1)

    .loc_0xAB8:
      mr        r3, r25
      mr        r4, r24
      bl        -0x43487C
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437230
      mr.       r24, r3
      beq-      .loc_0xAEC
      mr        r4, r24
      bl        -0x4349C8
      li        r0, 0x4022
      stw       r0, 0x10(r24)

    .loc_0xAEC:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0xAFC
      stw       r24, 0x134(r1)

    .loc_0xAFC:
      mr        r3, r25
      mr        r4, r24
      bl        -0x4348C0
      b         .loc_0x10D4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437278
      mr.       r24, r3
      beq-      .loc_0xB34
      mr        r4, r24
      bl        -0x434A10
      li        r0, 0x402A
      stw       r0, 0x10(r24)

    .loc_0xB34:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0xB48
      stw       r24, 0x134(r1)

    .loc_0xB48:
      mr        r3, r25
      mr        r4, r24
      bl        -0x43490C
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x4372C0
      mr.       r24, r3
      beq-      .loc_0xB7C
      mr        r4, r24
      bl        -0x434A58
      li        r0, 0x4023
      stw       r0, 0x10(r24)

    .loc_0xB7C:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0xB8C
      stw       r24, 0x134(r1)

    .loc_0xB8C:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434950
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437304
      mr.       r24, r3
      beq-      .loc_0xBC0
      mr        r4, r24
      bl        -0x434A9C
      li        r0, 0x4028
      stw       r0, 0x10(r24)

    .loc_0xBC0:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0xBD0
      stw       r24, 0x134(r1)

    .loc_0xBD0:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434994
      b         .loc_0x10D4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x43734C
      mr.       r24, r3
      beq-      .loc_0xC08
      mr        r4, r24
      bl        -0x434AE4
      li        r0, 0x4022
      stw       r0, 0x10(r24)

    .loc_0xC08:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0xC1C
      stw       r24, 0x134(r1)

    .loc_0xC1C:
      mr        r3, r25
      mr        r4, r24
      bl        -0x4349E0
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437394
      mr.       r24, r3
      beq-      .loc_0xC50
      mr        r4, r24
      bl        -0x434B2C
      li        r0, 0x4029
      stw       r0, 0x10(r24)

    .loc_0xC50:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0xC60
      stw       r24, 0x134(r1)

    .loc_0xC60:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434A24
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x4373D8
      mr.       r24, r3
      beq-      .loc_0xC94
      mr        r4, r24
      bl        -0x434B70
      li        r0, 0x4026
      stw       r0, 0x10(r24)

    .loc_0xC94:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0xCA4
      stw       r24, 0x134(r1)

    .loc_0xCA4:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434A68
      b         .loc_0x10D4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437420
      mr.       r24, r3
      beq-      .loc_0xCDC
      mr        r4, r24
      bl        -0x434BB8
      li        r0, 0x4029
      stw       r0, 0x10(r24)

    .loc_0xCDC:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0xCF0
      stw       r24, 0x134(r1)

    .loc_0xCF0:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434AB4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437468
      mr.       r24, r3
      beq-      .loc_0xD24
      mr        r4, r24
      bl        -0x434C00
      li        r0, 0x4027
      stw       r0, 0x10(r24)

    .loc_0xD24:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0xD34
      stw       r24, 0x134(r1)

    .loc_0xD34:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434AF8
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x4374AC
      mr.       r24, r3
      beq-      .loc_0xD68
      mr        r4, r24
      bl        -0x434C44
      li        r0, 0x4024
      stw       r0, 0x10(r24)

    .loc_0xD68:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0xD78
      stw       r24, 0x134(r1)

    .loc_0xD78:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434B3C
      b         .loc_0x10D4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x4374F4
      mr.       r24, r3
      beq-      .loc_0xDB0
      mr        r4, r24
      bl        -0x434C8C
      li        r0, 0x4029
      stw       r0, 0x10(r24)

    .loc_0xDB0:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0xDC4
      stw       r24, 0x134(r1)

    .loc_0xDC4:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434B88
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x43753C
      mr.       r24, r3
      beq-      .loc_0xDF8
      mr        r4, r24
      bl        -0x434CD4
      li        r0, 0x4027
      stw       r0, 0x10(r24)

    .loc_0xDF8:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0xE08
      stw       r24, 0x134(r1)

    .loc_0xE08:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434BCC
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437580
      mr.       r24, r3
      beq-      .loc_0xE3C
      mr        r4, r24
      bl        -0x434D18
      li        r0, 0x4025
      stw       r0, 0x10(r24)

    .loc_0xE3C:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0xE4C
      stw       r24, 0x134(r1)

    .loc_0xE4C:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434C10
      b         .loc_0x10D4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x4375C8
      mr.       r24, r3
      beq-      .loc_0xE84
      mr        r4, r24
      bl        -0x434D60
      li        r0, 0x4029
      stw       r0, 0x10(r24)

    .loc_0xE84:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0xE98
      stw       r24, 0x134(r1)

    .loc_0xE98:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434C5C
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437610
      mr.       r24, r3
      beq-      .loc_0xECC
      mr        r4, r24
      bl        -0x434DA8
      li        r0, 0x4027
      stw       r0, 0x10(r24)

    .loc_0xECC:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0xEDC
      stw       r24, 0x134(r1)

    .loc_0xEDC:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434CA0
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437654
      mr.       r24, r3
      beq-      .loc_0xF10
      mr        r4, r24
      bl        -0x434DEC
      li        r0, 0x4025
      stw       r0, 0x10(r24)

    .loc_0xF10:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0xF20
      stw       r24, 0x134(r1)

    .loc_0xF20:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434CE4
      b         .loc_0x10D4
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x43769C
      mr.       r24, r3
      beq-      .loc_0xF58
      mr        r4, r24
      bl        -0x434E34
      li        r0, 0x4029
      stw       r0, 0x10(r24)

    .loc_0xF58:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0xF6C
      stw       r24, 0x134(r1)

    .loc_0xF6C:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434D30
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x4376E4
      mr.       r24, r3
      beq-      .loc_0xFA0
      mr        r4, r24
      bl        -0x434E7C
      li        r0, 0x4027
      stw       r0, 0x10(r24)

    .loc_0xFA0:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0xFB0
      stw       r24, 0x134(r1)

    .loc_0xFB0:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434D74
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437728
      mr.       r24, r3
      beq-      .loc_0xFE4
      mr        r4, r24
      bl        -0x434EC0
      li        r0, 0x4025
      stw       r0, 0x10(r24)

    .loc_0xFE4:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0xFF4
      stw       r24, 0x134(r1)

    .loc_0xFF4:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434DB8
      b         .loc_0x10D4

    .loc_0x1004:
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437770
      mr.       r24, r3
      beq-      .loc_0x102C
      mr        r4, r24
      bl        -0x434F08
      li        r0, 0x4029
      stw       r0, 0x10(r24)

    .loc_0x102C:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0x1040
      stw       r24, 0x134(r1)

    .loc_0x1040:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434E04
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x4377B8
      mr.       r24, r3
      beq-      .loc_0x1074
      mr        r4, r24
      bl        -0x434F50
      li        r0, 0x4027
      stw       r0, 0x10(r24)

    .loc_0x1074:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x1084
      stw       r24, 0x134(r1)

    .loc_0x1084:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434E48
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x4377FC
      mr.       r24, r3
      beq-      .loc_0x10B8
      mr        r4, r24
      bl        -0x434F94
      li        r0, 0x4025
      stw       r0, 0x10(r24)

    .loc_0x10B8:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x10C8
      stw       r24, 0x134(r1)

    .loc_0x10C8:
      mr        r3, r25
      mr        r4, r24
      bl        -0x434E8C

    .loc_0x10D4:
      lwz       r8, 0xD8(r31)
      addi      r3, r1, 0xE8
      lwz       r7, 0xDC(r31)
      addi      r4, r1, 0x44
      lwz       r6, 0xE0(r31)
      lwz       r5, 0xE4(r31)
      lwz       r0, 0xE8(r31)
      lfs       f0, 0x28CC(r2)
      stw       r8, 0xC0(r1)
      stfs      f0, 0x10(r30)
      stw       r7, 0xC4(r1)
      stw       r6, 0xC8(r1)
      stw       r5, 0xCC(r1)
      stw       r0, 0xD0(r1)
      stw       r8, 0x44(r1)
      stw       r7, 0x48(r1)
      stw       r6, 0x4C(r1)
      stw       r5, 0x50(r1)
      stw       r0, 0x54(r1)
      bl        0x89C
      lfs       f1, 0x28C0(r2)
      mr        r4, r29
      addi      r3, r1, 0xE8
      bl        -0x11B4A4
      mr        r3, r29
      bl        0x810
      li        r3, 0x54
      bl        -0x43793C
      mr.       r25, r3
      beq-      .loc_0x1180
      lfs       f2, 0x28C0(r2)
      mr        r24, r25
      lfs       f1, 0x28C4(r2)
      li        r4, 0x3079
      fmr       f3, f2
      lfs       f4, 0x28D0(r2)
      lfs       f5, 0x28D4(r2)
      bl        -0x11B8A8
      lis       r3, 0x804F
      lfs       f0, 0x28C0(r2)
      subi      r0, r3, 0x1CA8
      stw       r0, 0x10(r24)
      stfs      f0, 0x50(r24)

    .loc_0x1180:
      mr        r3, r29
      mr        r4, r25
      bl        -0x434F44
      li        r3, 0x54
      bl        -0x43798C
      mr.       r25, r3
      beq-      .loc_0x11D0
      lfs       f1, 0x28C0(r2)
      mr        r24, r25
      lfs       f2, 0x28C4(r2)
      li        r4, 0x307A
      fmr       f3, f1
      lfs       f4, 0x28D0(r2)
      lfs       f5, 0x28D4(r2)
      bl        -0x11B8F8
      lis       r3, 0x804F
      lfs       f0, 0x28C0(r2)
      subi      r0, r3, 0x1CA8
      stw       r0, 0x10(r24)
      stfs      f0, 0x50(r24)

    .loc_0x11D0:
      mr        r3, r29
      mr        r4, r25
      bl        -0x434F94
      b         .loc_0x185C

    .loc_0x11E0:
      cmpwi     r30, 0x4
      beq-      .loc_0x16AC
      bge-      .loc_0x1204
      cmpwi     r30, 0x2
      beq-      .loc_0x1300
      bge-      .loc_0x1470
      cmpwi     r30, 0x1
      bge-      .loc_0x1210
      b         .loc_0x185C

    .loc_0x1204:
      cmpwi     r30, 0x14
      beq-      .loc_0x1210
      b         .loc_0x185C

    .loc_0x1210:
      li        r3, 0x18
      bl        -0x437A10
      mr.       r24, r3
      beq-      .loc_0x1228
      bl        0x14C8
      mr        r24, r3

    .loc_0x1228:
      mr        r29, r24
      li        r3, 0x50
      bl        -0x437A2C
      mr.       r25, r3
      beq-      .loc_0x125C
      lfs       f1, 0x28C4(r2)
      li        r4, 0x402D
      lfs       f2, 0x28D8(r2)
      lfs       f3, 0x28C0(r2)
      lfs       f4, 0x28D0(r2)
      lfs       f5, 0x28D4(r2)
      bl        -0x11B994
      mr        r25, r3

    .loc_0x125C:
      cmplwi    r25, 0
      bne-      .loc_0x1278
      addi      r3, r31, 0xC
      addi      r5, r31, 0x24
      li        r4, 0x30A
      crclr     6, 0x6
      bl        -0x4312D4

    .loc_0x1278:
      mr        r3, r25
      li        r4, 0x1
      li        r5, 0
      bl        -0x11B93C
      mr        r3, r24
      mr        r4, r25
      bl        -0x43504C
      li        r3, 0x50
      bl        -0x437A94
      mr.       r25, r3
      beq-      .loc_0x12C4
      lfs       f1, 0x28C0(r2)
      li        r4, 0x402D
      lfs       f2, 0x28D8(r2)
      fmr       f3, f1
      lfs       f4, 0x28D0(r2)
      lfs       f5, 0x28D4(r2)
      bl        -0x11B9FC
      mr        r25, r3

    .loc_0x12C4:
      cmplwi    r25, 0
      bne-      .loc_0x12E0
      addi      r3, r31, 0xC
      addi      r5, r31, 0x24
      li        r4, 0x311
      crclr     6, 0x6
      bl        -0x43133C

    .loc_0x12E0:
      mr        r3, r25
      li        r4, 0
      li        r5, 0x1
      bl        -0x11B9A4
      mr        r3, r24
      mr        r4, r25
      bl        -0x4350B4
      b         .loc_0x185C

    .loc_0x1300:
      li        r3, 0x18
      bl        -0x437B00
      mr.       r26, r3
      beq-      .loc_0x1318
      bl        0x13D8
      mr        r26, r3

    .loc_0x1318:
      mr        r29, r26
      li        r3, 0x14
      bl        -0x437B1C
      mr.       r28, r3
      beq-      .loc_0x1338
      mr        r4, r26
      bl        0x1054
      mr        r28, r3

    .loc_0x1338:
      stw       r28, 0x58(r27)
      li        r3, 0x14
      li        r5, -0x4
      lwz       r4, -0x77D4(r13)
      bl        -0x437AA8
      mr.       r24, r3
      beq-      .loc_0x1364
      mr        r4, r24
      bl        -0x435240
      li        r0, 0x4037
      stw       r0, 0x10(r24)

    .loc_0x1364:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0x1378
      stw       r24, 0x134(r1)

    .loc_0x1378:
      mr        r3, r25
      mr        r4, r24
      bl        -0x43513C
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437AF0
      mr.       r24, r3
      beq-      .loc_0x13AC
      mr        r4, r24
      bl        -0x435288
      li        r0, 0x4038
      stw       r0, 0x10(r24)

    .loc_0x13AC:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x13BC
      stw       r24, 0x134(r1)

    .loc_0x13BC:
      mr        r3, r25
      mr        r4, r24
      bl        -0x435180
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437B34
      mr.       r24, r3
      beq-      .loc_0x13F0
      mr        r4, r24
      bl        -0x4352CC
      li        r0, 0x4039
      stw       r0, 0x10(r24)

    .loc_0x13F0:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x1400
      stw       r24, 0x134(r1)

    .loc_0x1400:
      mr        r3, r25
      mr        r4, r24
      bl        -0x4351C4
      lwz       r8, 0xEC(r31)
      addi      r3, r1, 0xE8
      lwz       r7, 0xF0(r31)
      addi      r4, r1, 0x30
      lwz       r6, 0xF4(r31)
      lwz       r5, 0xF8(r31)
      lwz       r0, 0xFC(r31)
      lfs       f0, 0x28DC(r2)
      stw       r8, 0xAC(r1)
      stfs      f0, 0x10(r28)
      stw       r7, 0xB0(r1)
      stw       r6, 0xB4(r1)
      stw       r5, 0xB8(r1)
      stw       r0, 0xBC(r1)
      stw       r8, 0x30(r1)
      stw       r7, 0x34(r1)
      stw       r6, 0x38(r1)
      stw       r5, 0x3C(r1)
      stw       r0, 0x40(r1)
      bl        0x564
      lfs       f1, 0x28C0(r2)
      mr        r4, r26
      addi      r3, r1, 0xE8
      bl        -0x11B7DC
      b         .loc_0x185C

    .loc_0x1470:
      li        r3, 0x18
      bl        -0x437C70
      mr.       r26, r3
      beq-      .loc_0x1488
      bl        0x1268
      mr        r26, r3

    .loc_0x1488:
      mr        r29, r26
      li        r3, 0x14
      bl        -0x437C8C
      mr.       r28, r3
      beq-      .loc_0x14A8
      mr        r4, r26
      bl        0xEE4
      mr        r28, r3

    .loc_0x14A8:
      stw       r28, 0x58(r27)
      li        r3, 0x14
      li        r5, -0x4
      lwz       r4, -0x77D4(r13)
      bl        -0x437C18
      mr.       r24, r3
      beq-      .loc_0x14D4
      mr        r4, r24
      bl        -0x4353B0
      li        r0, 0x402F
      stw       r0, 0x10(r24)

    .loc_0x14D4:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0x14E8
      stw       r24, 0x134(r1)

    .loc_0x14E8:
      mr        r3, r25
      mr        r4, r24
      bl        -0x4352AC
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437C60
      mr.       r24, r3
      beq-      .loc_0x151C
      mr        r4, r24
      bl        -0x4353F8
      li        r0, 0x4033
      stw       r0, 0x10(r24)

    .loc_0x151C:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x152C
      stw       r24, 0x134(r1)

    .loc_0x152C:
      mr        r3, r25
      mr        r4, r24
      bl        -0x4352F0
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437CA4
      mr.       r24, r3
      beq-      .loc_0x1560
      mr        r4, r24
      bl        -0x43543C
      li        r0, 0x4035
      stw       r0, 0x10(r24)

    .loc_0x1560:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x1570
      stw       r24, 0x134(r1)

    .loc_0x1570:
      mr        r3, r25
      mr        r4, r24
      bl        -0x435334
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437CE8
      mr.       r24, r3
      beq-      .loc_0x15A4
      mr        r4, r24
      bl        -0x435480
      li        r0, 0x4030
      stw       r0, 0x10(r24)

    .loc_0x15A4:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x15B4
      stw       r24, 0x134(r1)

    .loc_0x15B4:
      mr        r3, r25
      mr        r4, r24
      bl        -0x435378
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437D2C
      mr.       r24, r3
      beq-      .loc_0x15E8
      mr        r4, r24
      bl        -0x4354C4
      li        r0, 0x4034
      stw       r0, 0x10(r24)

    .loc_0x15E8:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x15F8
      stw       r24, 0x134(r1)

    .loc_0x15F8:
      mr        r3, r25
      mr        r4, r24
      bl        -0x4353BC
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437D70
      mr.       r24, r3
      beq-      .loc_0x162C
      mr        r4, r24
      bl        -0x435508
      li        r0, 0x4036
      stw       r0, 0x10(r24)

    .loc_0x162C:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x163C
      stw       r24, 0x134(r1)

    .loc_0x163C:
      mr        r3, r25
      mr        r4, r24
      bl        -0x435400
      lwz       r8, 0x100(r31)
      addi      r3, r1, 0xE8
      lwz       r7, 0x104(r31)
      addi      r4, r1, 0x1C
      lwz       r6, 0x108(r31)
      lwz       r5, 0x10C(r31)
      lwz       r0, 0x110(r31)
      lfs       f0, 0x28CC(r2)
      stw       r8, 0x98(r1)
      stfs      f0, 0x10(r28)
      stw       r7, 0x9C(r1)
      stw       r6, 0xA0(r1)
      stw       r5, 0xA4(r1)
      stw       r0, 0xA8(r1)
      stw       r8, 0x1C(r1)
      stw       r7, 0x20(r1)
      stw       r6, 0x24(r1)
      stw       r5, 0x28(r1)
      stw       r0, 0x2C(r1)
      bl        0x328
      lfs       f1, 0x28C0(r2)
      mr        r4, r26
      addi      r3, r1, 0xE8
      bl        -0x11BA18
      b         .loc_0x185C

    .loc_0x16AC:
      li        r3, 0x18
      bl        -0x437EAC
      mr.       r26, r3
      beq-      .loc_0x16C4
      bl        0x102C
      mr        r26, r3

    .loc_0x16C4:
      mr        r29, r26
      li        r3, 0x14
      bl        -0x437EC8
      mr.       r28, r3
      beq-      .loc_0x16E4
      mr        r4, r26
      bl        0xCA8
      mr        r28, r3

    .loc_0x16E4:
      stw       r28, 0x58(r27)
      li        r3, 0x14
      li        r5, -0x4
      lwz       r4, -0x77D4(r13)
      bl        -0x437E54
      mr.       r24, r3
      beq-      .loc_0x1710
      mr        r4, r24
      bl        -0x4355EC
      li        r0, 0x403A
      stw       r0, 0x10(r24)

    .loc_0x1710:
      lwz       r0, 0x128(r1)
      addi      r25, r1, 0x128
      cmplwi    r0, 0
      bne-      .loc_0x1724
      stw       r24, 0x134(r1)

    .loc_0x1724:
      mr        r3, r25
      mr        r4, r24
      bl        -0x4354E8
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437E9C
      mr.       r24, r3
      beq-      .loc_0x1758
      mr        r4, r24
      bl        -0x435634
      li        r0, 0x403B
      stw       r0, 0x10(r24)

    .loc_0x1758:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x1768
      stw       r24, 0x134(r1)

    .loc_0x1768:
      mr        r3, r25
      mr        r4, r24
      bl        -0x43552C
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437EE0
      mr.       r24, r3
      beq-      .loc_0x179C
      mr        r4, r24
      bl        -0x435678
      li        r0, 0x403A
      stw       r0, 0x10(r24)

    .loc_0x179C:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x17AC
      stw       r24, 0x134(r1)

    .loc_0x17AC:
      mr        r3, r25
      mr        r4, r24
      bl        -0x435570
      lwz       r4, -0x77D4(r13)
      li        r3, 0x14
      li        r5, -0x4
      bl        -0x437F24
      mr.       r24, r3
      beq-      .loc_0x17E0
      mr        r4, r24
      bl        -0x4356BC
      li        r0, 0x403C
      stw       r0, 0x10(r24)

    .loc_0x17E0:
      lwz       r0, 0x128(r1)
      cmplwi    r0, 0
      bne-      .loc_0x17F0
      stw       r24, 0x134(r1)

    .loc_0x17F0:
      mr        r3, r25
      mr        r4, r24
      bl        -0x4355B4
      lwz       r8, 0x114(r31)
      addi      r3, r1, 0xE8
      lwz       r7, 0x118(r31)
      addi      r4, r1, 0x8
      lwz       r6, 0x11C(r31)
      lwz       r5, 0x120(r31)
      lwz       r0, 0x124(r31)
      lfs       f0, 0x28DC(r2)
      stw       r8, 0x84(r1)
      stfs      f0, 0x10(r28)
      stw       r7, 0x88(r1)
      stw       r6, 0x8C(r1)
      stw       r5, 0x90(r1)
      stw       r0, 0x94(r1)
      stw       r8, 0x8(r1)
      stw       r7, 0xC(r1)
      stw       r6, 0x10(r1)
      stw       r5, 0x14(r1)
      stw       r0, 0x18(r1)
      bl        0x174
      lfs       f1, 0x28C0(r2)
      mr        r4, r26
      addi      r3, r1, 0xE8
      bl        -0x11BBCC

    .loc_0x185C:
      cmplwi    r29, 0
      beq-      .loc_0x1890
      lfs       f1, 0x28E0(r2)
      mr        r3, r29
      li        r4, 0x3079
      bl        .loc_0x18BC
      lfs       f1, 0x28E0(r2)
      mr        r3, r29
      li        r4, 0x307A
      bl        .loc_0x18BC
      mr        r3, r27
      mr        r4, r29
      bl        0xCD04

    .loc_0x1890:
      lis       r4, 0x804F
      addi      r3, r1, 0xE8
      subi      r0, r4, 0x1CD4
      li        r4, 0
      stw       r0, 0xE8(r1)
      bl        -0x11B89C
      lmw       r24, 0x150(r1)
      lwz       r0, 0x174(r1)
      mtlr      r0
      addi      r1, r1, 0x170
      blr

    .loc_0x18BC:
    */
}

/*
 * --INFO--
 * Address:	8045BF5C
 * Size:	00008C
 */
void PSM::SetBossBgmMuteVol(PSSystem::EnvSeMgr*, unsigned long, float)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x18(r1)
      fmr       f31, f1
      stw       r31, 0x14(r1)
      stw       r30, 0x10(r1)
      stw       r29, 0xC(r1)
      mr        r29, r4
      lwz       r30, 0x0(r3)
      b         .loc_0x64

    .loc_0x2C:
      lwz       r31, 0x0(r30)
      mr        r3, r31
      lwz       r12, 0x10(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      subis     r0, r3, 0x706F
      cmplwi    r0, 0x6C6C
      bne-      .loc_0x60
      lwz       r0, 0x24(r31)
      cmplw     r29, r0
      bne-      .loc_0x60
      stfs      f31, 0x50(r31)

    .loc_0x60:
      lwz       r30, 0xC(r30)

    .loc_0x64:
      cmplwi    r30, 0
      bne+      .loc_0x2C
      lwz       r0, 0x24(r1)
      lfd       f31, 0x18(r1)
      lwz       r31, 0x14(r1)
      lwz       r30, 0x10(r1)
      lwz       r29, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8045BFE8
 * Size:	000074
 */
void PSM::SetNoYOfset(PSSystem::EnvSeMgr*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      lwz       r31, 0x0(r3)
      lfs       f31, 0x28C4(r2)
      b         .loc_0x50

    .loc_0x24:
      lwz       r3, 0x0(r31)
      lwz       r12, 0x10(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      subis     r0, r3, 0x7065
      cmplwi    r0, 0x7273
      bne-      .loc_0x4C
      lwz       r3, 0x0(r31)
      stfs      f31, 0x48(r3)

    .loc_0x4C:
      lwz       r31, 0xC(r31)

    .loc_0x50:
      cmplwi    r31, 0
      bne+      .loc_0x24
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
 * Address:	8045C05C
 * Size:	00002C
 */
void PSM::EnvSeObjBuilder::setInfo((PSM::PersEnvInfo))
{
    /*
    .loc_0x0:
      lfs       f0, 0x0(r4)
      lfs       f1, 0x4(r4)
      stfs      f0, 0x50(r3)
      lfs       f0, 0x8(r4)
      stfs      f1, 0x54(r3)
      lfs       f1, 0xC(r4)
      stfs      f0, 0x58(r3)
      lfs       f0, 0x10(r4)
      stfs      f1, 0x5C(r3)
      stfs      f0, 0x60(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<PSSystem::IdLink>::~JSULink()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8045C088
 * Size:	000070
 */
void __ct__Q23PSM15EnvSeObjBuilderFQ29JGeometry8TBox3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lfs       f5, 0x0(r4)
      stw       r0, 0x34(r1)
      lfs       f4, 0x4(r4)
      stw       r31, 0x2C(r1)
      mr        r31, r3
      lfs       f3, 0x8(r4)
      lfs       f2, 0xC(r4)
      lfs       f1, 0x10(r4)
      lfs       f0, 0x14(r4)
      addi      r4, r1, 0x8
      stfs      f5, 0x8(r1)
      stfs      f4, 0xC(r1)
      stfs      f3, 0x10(r1)
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      bl        -0x11BFC0
      lis       r4, 0x804F
      mr        r3, r31
      subi      r0, r4, 0x1CD4
      stw       r0, 0x0(r31)
      lwz       r31, 0x2C(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8045C0F8
 * Size:	000034
 */
void __ct__Q29JGeometry8TBox3<float> FRCQ29JGeometry8TBox3<float>(void)
{
    /*
    .loc_0x0:
      lfs       f1, 0x0(r4)
      lfs       f0, 0x4(r4)
      stfs      f1, 0x0(r3)
      lfs       f1, 0x8(r4)
      stfs      f0, 0x4(r3)
      lfs       f0, 0xC(r4)
      stfs      f1, 0x8(r3)
      lfs       f1, 0x10(r4)
      stfs      f0, 0xC(r3)
      lfs       f0, 0x14(r4)
      stfs      f1, 0x10(r3)
      stfs      f0, 0x14(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8045C12C
 * Size:	000164
 */
void PSM::SceneMgr::newAutoBgm((char const*, char const*, JAInter::SoundInfo&,
                                JADUtility::AccessMode, PSGame::SceneInfo&,
                                PSSystem::DirectorMgrBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r3, 0x804A
      stw       r0, 0x34(r1)
      stmw      r25, 0x14(r1)
      subi      r31, r3, 0x3198
      mr        r25, r4
      mr        r26, r5
      mr        r27, r6
      mr        r28, r7
      mr        r29, r9
      li        r3, 0x88
      bl        -0x4382B8
      mr.       r30, r3
      beq-      .loc_0x5C
      mr        r4, r29
      li        r5, 0x8
      bl        0x1314C
      lis       r3, 0x804F
      subi      r3, r3, 0x6E8
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x10
      stw       r0, 0xC(r30)

    .loc_0x5C:
      li        r3, 0x350
      bl        -0x4382E8
      mr.       r29, r3
      beq-      .loc_0x88
      mr        r4, r25
      mr        r5, r26
      mr        r6, r27
      mr        r7, r28
      mr        r8, r30
      bl        -0x1205A8
      mr        r29, r3

    .loc_0x88:
      cmplwi    r29, 0
      bne-      .loc_0xA4
      addi      r3, r31, 0xC
      addi      r5, r31, 0x24
      li        r4, 0x3F7
      crclr     6, 0x6
      bl        -0x431B8C

    .loc_0xA4:
      mr        r3, r29
      lwz       r12, 0x10(r29)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      mr        r4, r29
      bl        0x13434
      mr        r3, r30
      mr        r4, r29
      bl        -0x118928
      li        r3, 0x20
      bl        -0x43835C
      mr.       r30, r3
      beq-      .loc_0x138
      mr        r25, r30
      mr        r4, r30
      bl        -0x435A5C
      addi      r3, r25, 0x10
      addi      r4, r31, 0x128
      bl        -0x3A2034
      lis       r4, 0x804E
      lis       r3, 0x804E
      subi      r4, r4, 0x5218
      li        r5, 0x1
      stw       r4, 0x14(r25)
      addi      r0, r4, 0x8
      subi      r3, r3, 0x51EC
      li        r4, 0
      stw       r0, 0x10(r25)
      addi      r0, r3, 0x8
      lfs       f0, 0x28E4(r2)
      stb       r5, 0x18(r25)
      stb       r4, 0x19(r25)
      stw       r3, 0x14(r30)
      stw       r0, 0x10(r30)
      stfs      f0, 0x1C(r30)

    .loc_0x138:
      li        r0, 0x1
      mr        r4, r30
      stb       r0, 0x18(r30)
      addi      r3, r29, 0x340
      bl        -0x435990
      mr        r3, r29
      lmw       r25, 0x14(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<PSAutoBgm::MeloArrBase>::~JSULink()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8045C290
 * Size:	000060
 */
void PSM::MiddleBossSeq::__ct((char const*, JAInter::SoundInfo const&,
                               PSSystem::DirectorMgrBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x129074
      lis       r4, 0x804F
      lis       r3, 0x1
      subi      r0, r4, 0x1D70
      li        r5, 0
      stw       r0, 0x10(r31)
      li        r4, 0x3
      subi      r0, r3, 0x1
      mr        r3, r31
      stw       r5, 0x134(r31)
      stw       r5, 0x138(r31)
      sth       r4, 0x13C(r31)
      sth       r0, 0x13E(r31)
      stb       r5, 0x140(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8045C2F0
 * Size:	000094
 */
void PSM::MiddleBossSeq::onJump((unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      rlwinm    r0,r4,0,16,31
      cmpwi     r0, 0x4
      stw       r31, 0xC(r1)
      mr        r31, r3
      beq-      .loc_0x80
      bge-      .loc_0x30
      cmpwi     r0, 0x3
      bge-      .loc_0x4C
      b         .loc_0x80

    .loc_0x30:
      cmpwi     r0, 0x9
      beq-      .loc_0x40
      bge-      .loc_0x80
      b         .loc_0x4C

    .loc_0x40:
      li        r0, 0
      sth       r0, 0x13E(r31)
      b         .loc_0x80

    .loc_0x4C:
      lwz       r0, 0x134(r31)
      cmplwi    r0, 0
      bne-      .loc_0x74
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x318C
      li        r4, 0x436
      subi      r5, r5, 0x3174
      crclr     6, 0x6
      bl        -0x431D20

    .loc_0x74:
      lwz       r3, 0x134(r31)
      li        r0, 0x1
      stb       r0, 0xFF(r3)

    .loc_0x80:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8045C384
 * Size:	000040
 */
void PSM::MiddleBossSeq::exec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x12A6E8
      lhz       r3, 0x13E(r31)
      cmplwi    r3, 0xFFFF
      beq-      .loc_0x2C
      addi      r0, r3, 0x1
      sth       r0, 0x13E(r31)

    .loc_0x2C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8045C3C4
 * Size:	00005C
 */
void PSM::MiddleBossSeq::requestJumpBgmQuickly((unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r12, 0x10(r3)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,16,31
      mr        r4, r3
      cmplwi    r0, 0xFFFF
      beq-      .loc_0x48
      mr        r3, r31
      bl        -0x128CD4
      lwz       r4, 0x138(r31)
      mr        r3, r31
      bl        -0x128A78

    .loc_0x48:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8045C420
 * Size:	00005C
 */
void PSM::MiddleBossSeq::requestJumpBgmOnBeat((unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r12, 0x10(r3)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,16,31
      mr        r4, r3
      cmplwi    r0, 0xFFFF
      beq-      .loc_0x48
      mr        r3, r31
      bl        -0x128CD0
      lwz       r4, 0x138(r31)
      mr        r3, r31
      bl        -0x128AD4

    .loc_0x48:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8045C47C
 * Size:	00005C
 */
void PSM::MiddleBossSeq::requestJumpBgmEveryBeat((unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r12, 0x10(r3)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,16,31
      mr        r4, r3
      cmplwi    r0, 0xFFFF
      beq-      .loc_0x48
      mr        r3, r31
      bl        -0x128CCC
      lwz       r4, 0x138(r31)
      mr        r3, r31
      bl        -0x128B30

    .loc_0x48:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8045C4D8
 * Size:	000214
 */
void PSM::MiddleBossSeq::jumpCheck((unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0x1
      stw       r0, 0x14(r1)
      mr        r6, r5
      stw       r31, 0xC(r1)
      mr        r31, r4
      subi      r0, r31, 0x5
      li        r4, 0
      stw       r30, 0x8(r1)
      mr        r30, r3
      rlwinm    r3,r0,0,16,31
      subfic    r0, r3, 0x1
      stw       r4, 0x138(r30)
      orc       r3, r5, r3
      rlwinm    r0,r0,31,1,31
      sub       r0, r3, r0
      rlwinm.   r0,r0,1,31,31
      bne-      .loc_0x50
      mr        r6, r4

    .loc_0x50:
      rlwinm.   r0,r6,0,24,31
      bne-      .loc_0x68
      rlwinm    r0,r31,0,16,31
      cmplwi    r0, 0x7
      beq-      .loc_0x68
      li        r5, 0

    .loc_0x68:
      rlwinm.   r0,r5,0,24,31
      beq-      .loc_0x8C
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x318C
      li        r4, 0x470
      subi      r5, r5, 0x3174
      crclr     6, 0x6
      bl        -0x431F20

    .loc_0x8C:
      lhz       r0, 0x130(r30)
      cmpwi     r0, 0x5
      bge-      .loc_0xA8
      cmpwi     r0, 0x1
      beq-      .loc_0xC0
      bge-      .loc_0xF8
      b         .loc_0xF8

    .loc_0xA8:
      cmpwi     r0, 0x9
      beq-      .loc_0xF8
      bge-      .loc_0xF8
      cmpwi     r0, 0x8
      bge-      .loc_0xD8
      b         .loc_0xF8

    .loc_0xC0:
      rlwinm    r0,r31,0,16,31
      cmplwi    r0, 0x1
      bne-      .loc_0xF8
      lis       r3, 0x1
      subi      r3, r3, 0x1
      b         .loc_0x1FC

    .loc_0xD8:
      rlwinm    r0,r31,0,16,31
      cmplwi    r0, 0x1
      beq-      .loc_0xF8
      cmplwi    r0, 0xA
      beq-      .loc_0xF8
      lis       r3, 0x1
      subi      r3, r3, 0x1
      b         .loc_0x1FC

    .loc_0xF8:
      rlwinm    r0,r31,0,16,31
      cmpwi     r0, 0x9
      beq-      .loc_0x1D0
      bge-      .loc_0x120
      cmpwi     r0, 0x4
      beq-      .loc_0x174
      bge-      .loc_0x1F8
      cmpwi     r0, 0x3
      bge-      .loc_0x130
      b         .loc_0x1F8

    .loc_0x120:
      cmpwi     r0, 0xB
      beq-      .loc_0x1F0
      bge-      .loc_0x1F8
      b         .loc_0x1DC

    .loc_0x130:
      lhz       r3, 0x13C(r30)
      addi      r0, r3, 0x1
      sth       r0, 0x13C(r30)
      lhz       r0, 0x13C(r30)
      cmplwi    r0, 0x4
      bne-      .loc_0x154
      li        r0, 0x5
      sth       r0, 0x13C(r30)
      b         .loc_0x164

    .loc_0x154:
      cmplwi    r0, 0x8
      bne-      .loc_0x164
      li        r0, 0x3
      sth       r0, 0x13C(r30)

    .loc_0x164:
      lhz       r31, 0x13C(r30)
      li        r0, 0x32
      stw       r0, 0x138(r30)
      b         .loc_0x1F8

    .loc_0x174:
      lwz       r0, 0x134(r30)
      cmplwi    r0, 0
      bne-      .loc_0x19C
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x318C
      li        r4, 0x4B5
      subi      r5, r5, 0x3174
      crclr     6, 0x6
      bl        -0x432030

    .loc_0x19C:
      lhz       r0, 0x13E(r30)
      cmplwi    r0, 0x190
      blt-      .loc_0x1B8
      lwz       r3, 0x134(r30)
      lbz       r0, 0xFF(r3)
      cmplwi    r0, 0
      bne-      .loc_0x1C4

    .loc_0x1B8:
      lis       r3, 0x1
      subi      r3, r3, 0x1
      b         .loc_0x1FC

    .loc_0x1C4:
      li        r0, 0x5A
      stw       r0, 0x138(r30)
      b         .loc_0x1F8

    .loc_0x1D0:
      li        r0, 0xB4
      stw       r0, 0x138(r30)
      b         .loc_0x1F8

    .loc_0x1DC:
      li        r3, 0xB4
      li        r0, 0
      stw       r3, 0x138(r30)
      stw       r0, 0x12C(r30)
      b         .loc_0x1F8

    .loc_0x1F0:
      li        r0, 0
      stw       r0, 0x12C(r30)

    .loc_0x1F8:
      mr        r3, r31

    .loc_0x1FC:
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
 * Address:	8045C6EC
 * Size:	00006C
 */
void PSM::BigBossSeq::__ct((char const*, JAInter::SoundInfo const&,
                            PSSystem::DirectorMgrBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x1294D0
      lis       r3, 0x804F
      lis       r4, 0x1
      subi      r0, r3, 0x1D70
      lis       r3, 0x804F
      stw       r0, 0x10(r31)
      li        r6, 0
      li        r5, 0x3
      subi      r4, r4, 0x1
      stw       r6, 0x134(r31)
      subi      r0, r3, 0x1DD8
      mr        r3, r31
      stw       r6, 0x138(r31)
      sth       r5, 0x13C(r31)
      sth       r4, 0x13E(r31)
      stb       r6, 0x140(r31)
      stw       r0, 0x10(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8045C758
 * Size:	000080
 */
void PSM::MiddleBossSeq::__dt(void)
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
      beq-      .loc_0x64
      lis       r4, 0x804F
      subi      r0, r4, 0x1D70
      stw       r0, 0x10(r30)
      beq-      .loc_0x54
      lis       r4, 0x804E
      subi      r0, r4, 0x5B74
      stw       r0, 0x10(r30)
      beq-      .loc_0x54
      lis       r5, 0x804E
      li        r4, 0
      subi      r0, r5, 0x5AA4
      stw       r0, 0x10(r30)
      bl        -0x12A650

    .loc_0x54:
      extsh.    r0, r31
      ble-      .loc_0x64
      mr        r3, r30
      bl        -0x438704

    .loc_0x64:
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
 * Address:	8045C7D8
 * Size:	0001B4
 */
void PSM::BigBossSeq::jumpCheck((unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr        r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      stw       r0, 0x138(r3)
      lhz       r0, 0x130(r3)
      cmplwi    r0, 0xC
      bgt-      .loc_0xF0
      lis       r3, 0x804F
      rlwinm    r0,r0,2,0,29
      subi      r3, r3, 0x1E0C
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      rlwinm    r0,r31,0,16,31
      cmplwi    r0, 0x1
      bne-      .loc_0xF0
      lis       r3, 0x1
      subi      r3, r3, 0x1
      b         .loc_0x19C
      rlwinm    r0,r31,0,16,31
      cmplwi    r0, 0x8
      bne-      .loc_0xF0
      lis       r3, 0x1
      subi      r3, r3, 0x1
      b         .loc_0x19C
      rlwinm    r0,r31,0,16,31
      cmplwi    r0, 0x9
      bne-      .loc_0xF0
      lis       r3, 0x1
      subi      r3, r3, 0x1
      b         .loc_0x19C
      rlwinm    r0,r31,0,16,31
      cmplwi    r0, 0xA
      bne-      .loc_0xF0
      lis       r3, 0x1
      subi      r3, r3, 0x1
      b         .loc_0x19C
      rlwinm    r0,r31,0,16,31
      cmplwi    r0, 0xB
      bne-      .loc_0xF0
      lis       r3, 0x1
      subi      r3, r3, 0x1
      b         .loc_0x19C
      rlwinm    r3,r31,0,16,31
      cmplwi    r3, 0x1
      beq-      .loc_0xF0
      subi      r0, r31, 0x8
      rlwinm    r0,r0,0,16,31
      cmplwi    r0, 0x3
      ble-      .loc_0xF0
      cmplwi    r3, 0xD
      beq-      .loc_0xF0
      lis       r3, 0x1
      subi      r3, r3, 0x1
      b         .loc_0x19C

    .loc_0xF0:
      rlwinm    r0,r31,0,16,31
      cmpwi     r0, 0xC
      beq-      .loc_0x174
      bge-      .loc_0x10C
      cmpwi     r0, 0x4
      beq-      .loc_0x118
      b         .loc_0x198

    .loc_0x10C:
      cmpwi     r0, 0xE
      bge-      .loc_0x198
      b         .loc_0x188

    .loc_0x118:
      lwz       r0, 0x134(r30)
      cmplwi    r0, 0
      bne-      .loc_0x140
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x318C
      li        r4, 0x534
      subi      r5, r5, 0x3174
      crclr     6, 0x6
      bl        -0x4322D4

    .loc_0x140:
      lhz       r0, 0x13E(r30)
      cmplwi    r0, 0x320
      blt-      .loc_0x15C
      lwz       r3, 0x134(r30)
      lbz       r0, 0xFF(r3)
      cmplwi    r0, 0
      bne-      .loc_0x168

    .loc_0x15C:
      lis       r3, 0x1
      subi      r3, r3, 0x1
      b         .loc_0x19C

    .loc_0x168:
      li        r0, 0x5A
      stw       r0, 0x138(r30)
      b         .loc_0x198

    .loc_0x174:
      li        r3, 0xB4
      li        r0, 0
      stw       r3, 0x138(r30)
      stw       r0, 0x12C(r30)
      b         .loc_0x198

    .loc_0x188:
      li        r3, 0xB4
      li        r0, 0
      stw       r3, 0x138(r30)
      stw       r0, 0x12C(r30)

    .loc_0x198:
      mr        r3, r31

    .loc_0x19C:
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
 * Address:	8045C98C
 * Size:	000098
 */
void PSM::BigBossSeq::onJump((unsigned short))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      rlwinm    r0,r4,0,16,31
      cmpwi     r0, 0x8
      stw       r31, 0xC(r1)
      mr        r31, r3
      bge-      .loc_0x38
      cmpwi     r0, 0x4
      beq-      .loc_0x84
      bge-      .loc_0x50
      cmpwi     r0, 0x3
      bge-      .loc_0x50
      b         .loc_0x84

    .loc_0x38:
      cmpwi     r0, 0xC
      beq-      .loc_0x44
      b         .loc_0x84

    .loc_0x44:
      li        r0, 0
      sth       r0, 0x13E(r31)
      b         .loc_0x84

    .loc_0x50:
      lwz       r0, 0x134(r31)
      cmplwi    r0, 0
      bne-      .loc_0x78
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x318C
      li        r4, 0x562
      subi      r5, r5, 0x3174
      crclr     6, 0x6
      bl        -0x4323C0

    .loc_0x78:
      lwz       r3, 0x134(r31)
      li        r0, 0x1
      stb       r0, 0xFF(r3)

    .loc_0x84:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8045CA24
 * Size:	000058
 */
void PSM::PersEnvManager::__ct((PSSystem::EnvSeMgr*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0x3
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r4, 0x0(r3)
      li        r3, 0xC
      stb       r0, 0x4(r31)
      bl        -0x438A9C
      stw       r3, 0x8(r31)
      li        r3, 0xC
      bl        -0x438AA8
      stw       r3, 0xC(r31)
      mr        r3, r31
      lfs       f0, 0x28C4(r2)
      stfs      f0, 0x10(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8045CA7C
 * Size:	000040
 */
void PSM::PersEnvManager::playOk((PSM::EnvSe_Perspective_AvoidY*))
{
    /*
    .loc_0x0:
      lbz       r6, 0x4(r3)
      li        r7, 0
      b         .loc_0x2C

    .loc_0xC:
      lwz       r5, 0x8(r3)
      rlwinm    r0,r7,2,22,29
      lwzx      r0, r5, r0
      cmplw     r0, r4
      bne-      .loc_0x28
      li        r3, 0x1
      blr

    .loc_0x28:
      addi      r7, r7, 0x1

    .loc_0x2C:
      rlwinm    r0,r7,0,24,31
      cmplw     r0, r6
      blt+      .loc_0xC
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	8045CABC
 * Size:	0001C4
 */
void PSM::PersEnvManager::exec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stmw      r26, 0x38(r1)
      mr        r26, r3
      lwz       r3, -0x6D20(r13)
      bl        -0x301EB4
      mr.       r29, r3
      beq-      .loc_0x1B0
      lfs       f0, 0x28E8(r2)
      li        r5, 0
      li        r4, 0
      b         .loc_0x4C

    .loc_0x34:
      lwz       r3, 0x8(r26)
      rlwinm    r0,r5,2,22,29
      addi      r5, r5, 0x1
      stwx      r4, r3, r0
      lwz       r3, 0xC(r26)
      stfsx     f0, r3, r0

    .loc_0x4C:
      lbz       r0, 0x4(r26)
      rlwinm    r3,r5,0,24,31
      cmplw     r3, r0
      blt+      .loc_0x34
      li        r28, 0
      b         .loc_0x1A0

    .loc_0x64:
      lwz       r3, 0x0(r26)
      rlwinm    r30,r28,2,22,29
      lwz       r27, 0x0(r3)
      b         .loc_0x194

    .loc_0x74:
      lwz       r31, 0x0(r27)
      mr        r3, r31
      lwz       r12, 0x10(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      subis     r0, r3, 0x7065
      cmplwi    r0, 0x7273
      bne-      .loc_0x190
      rlwinm    r0,r28,0,24,31
      li        r5, 0
      li        r6, 0
      b         .loc_0xC8

    .loc_0xA8:
      lwz       r4, 0x8(r26)
      rlwinm    r3,r6,2,22,29
      lwzx      r3, r4, r3
      cmplw     r3, r31
      bne-      .loc_0xC4
      li        r5, 0x1
      b         .loc_0xD4

    .loc_0xC4:
      addi      r6, r6, 0x1

    .loc_0xC8:
      rlwinm    r3,r6,0,24,31
      cmplw     r3, r0
      blt+      .loc_0xA8

    .loc_0xD4:
      rlwinm.   r0,r5,0,24,31
      bne-      .loc_0x190
      mr        r4, r29
      lwz       r6, 0x3C(r31)
      lwz       r12, 0x0(r29)
      addi      r3, r1, 0x14
      lwz       r5, 0x40(r31)
      lwz       r0, 0x44(r31)
      lwz       r12, 0x8(r12)
      stw       r6, 0x2C(r1)
      stw       r5, 0x30(r1)
      stw       r0, 0x34(r1)
      mtctr     r12
      bctrl
      lfs       f1, 0x14(r1)
      lfs       f0, 0x1C(r1)
      stfs      f1, 0x8(r1)
      lfs       f4, 0x18(r1)
      stfs      f0, 0x10(r1)
      lwz       r3, 0x8(r1)
      lwz       r0, 0x10(r1)
      stw       r3, 0x20(r1)
      lfs       f3, 0x2C(r1)
      stw       r0, 0x28(r1)
      lfs       f2, 0x20(r1)
      lfs       f1, 0x34(r1)
      lfs       f0, 0x28(r1)
      fsubs     f2, f3, f2
      stfs      f4, 0xC(r1)
      fsubs     f1, f1, f0
      lfs       f0, 0x28C4(r2)
      fmuls     f2, f2, f2
      lwz       r0, 0xC(r1)
      fmuls     f1, f1, f1
      stw       r0, 0x24(r1)
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x174
      fsqrte    f0, f1
      fmuls     f1, f0, f1

    .loc_0x174:
      lwz       r0, 0xC(r26)
      lfsx      f0, r30, r0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x190
      stfsx     f1, r30, r0
      lwz       r0, 0x8(r26)
      stwx      r31, r30, r0

    .loc_0x190:
      lwz       r27, 0xC(r27)

    .loc_0x194:
      cmplwi    r27, 0
      bne+      .loc_0x74
      addi      r28, r28, 0x1

    .loc_0x1A0:
      lbz       r0, 0x4(r26)
      rlwinm    r3,r28,0,24,31
      cmplw     r3, r0
      blt+      .loc_0x64

    .loc_0x1B0:
      lmw       r26, 0x38(r1)
      lwz       r0, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	8045CC80
 * Size:	000090
 */
void PSM::BigBossSeq::__dt(void)
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
      lis       r4, 0x804F
      subi      r0, r4, 0x1DD8
      stw       r0, 0x10(r30)
      beq-      .loc_0x64
      lis       r4, 0x804F
      subi      r0, r4, 0x1D70
      stw       r0, 0x10(r30)
      beq-      .loc_0x64
      lis       r4, 0x804E
      subi      r0, r4, 0x5B74
      stw       r0, 0x10(r30)
      beq-      .loc_0x64
      lis       r5, 0x804E
      li        r4, 0
      subi      r0, r5, 0x5AA4
      stw       r0, 0x10(r30)
      bl        -0x12AB88

    .loc_0x64:
      extsh.    r0, r31
      ble-      .loc_0x74
      mr        r3, r30
      bl        -0x438C3C

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
 * Address:	8045CD10
 * Size:	00000C
 */
void PSM::EnvSe_Perspective_AvoidY::getCastType(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x7065
      addi      r3, r3, 0x7273
      blr
    */
}

/*
 * --INFO--
 * Address:	8045CD1C
 * Size:	00000C
 */
void PSM::Env_Pollutin::getCastType(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x706F
      addi      r3, r3, 0x6C6C
      blr
    */
}

/*
 * --INFO--
 * Address:	8045CD28
 * Size:	000060
 */
void PSM::SceneBase::__dt(void)
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
      beq-      .loc_0x44
      lis       r5, 0x804F
      li        r4, 0
      subi      r0, r5, 0x97C
      stw       r0, 0x0(r30)
      bl        -0x127738
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x438CB4

    .loc_0x44:
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
 * Size:	000084
 */
void PSGame::EnvSe_AutoPan::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8045CD88
 * Size:	000054
 */
void PSSystem::EnvSeMgr::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x4364CC
      lis       r4, 0x804E
      lis       r3, 0x804E
      subi      r0, r4, 0x5948
      li        r4, 0
      stw       r0, 0xC(r31)
      subi      r0, r3, 0x5124
      mr        r3, r31
      sth       r4, 0x10(r31)
      stw       r0, 0xC(r31)
      stw       r31, 0x14(r31)
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
 * Size:	000054
 */
void JSUList<PSSystem::EnvSeBase>::~JSUList()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8045CDDC
 * Size:	000060
 */
void PSM::EnvSeObjBuilder::__dt(void)
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
      beq-      .loc_0x44
      lis       r5, 0x804F
      li        r4, 0
      subi      r0, r5, 0x1CD4
      stw       r0, 0x0(r30)
      bl        -0x11C764
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x438D68

    .loc_0x44:
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
 * Address:	8045CE3C
 * Size:	000028
 */
void __sinit_PSMainSide_Factory_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804F
      stw       r0, -0x6378(r13)
      stfsu     f0, -0x1EA8(r3)
      stfs      f0, -0x6374(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
