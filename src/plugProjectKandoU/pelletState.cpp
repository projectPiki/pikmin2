

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
 * Address:	801A4310
 * Size:	0002AC
 */
void Game::PelletFSM::init((Game::Pellet*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x9
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x3B04
      li        r3, 0x10
      bl        -0x18048C
      mr.       r4, r3
      beq-      .loc_0x5C
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x51E0
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r6, 0
      addi      r5, r5, 0x51B4
      addi      r0, r3, 0x5188
      stw       r6, 0x4(r4)
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x5C:
      mr        r3, r31
      bl        0x3B20
      li        r3, 0x40
      bl        -0x1804D4
      mr.       r4, r3
      beq-      .loc_0xA8
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x51E0
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x1
      li        r6, 0
      addi      r5, r5, 0x51B4
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x5130
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0xA8:
      mr        r3, r31
      bl        0x3AD4
      li        r3, 0x10
      bl        -0x180520
      mr.       r4, r3
      beq-      .loc_0xF4
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x51E0
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x2
      li        r6, 0
      addi      r5, r5, 0x51B4
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x5098
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0xF4:
      mr        r3, r31
      bl        0x3A88
      li        r3, 0x10
      bl        -0x18056C
      mr.       r4, r3
      beq-      .loc_0x140
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x51E0
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x3
      li        r6, 0
      addi      r5, r5, 0x51B4
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x5040
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x140:
      mr        r3, r31
      bl        0x3A3C
      li        r3, 0x30
      bl        -0x1805B8
      mr.       r4, r3
      beq-      .loc_0x18C
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x51E0
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x4
      li        r6, 0
      addi      r5, r5, 0x51B4
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x5104
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x18C:
      mr        r3, r31
      bl        0x39F0
      li        r3, 0x30
      bl        -0x180604
      mr.       r4, r3
      beq-      .loc_0x1D8
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x51E0
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x5
      li        r6, 0
      addi      r5, r5, 0x51B4
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x50C4
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x1D8:
      mr        r3, r31
      bl        0x39A4
      li        r3, 0x14
      bl        -0x180650
      mr.       r4, r3
      beq-      .loc_0x224
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x51E0
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x6
      li        r6, 0
      addi      r5, r5, 0x51B4
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x506C
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x224:
      mr        r3, r31
      bl        0x3958
      li        r3, 0x14
      bl        -0x18069C
      mr.       r4, r3
      beq-      .loc_0x270
      lis       r3, 0x804B
      lis       r5, 0x804B
      addi      r0, r3, 0x51E0
      lis       r3, 0x804B
      stw       r0, 0x0(r4)
      li        r0, 0x7
      li        r6, 0
      addi      r5, r5, 0x51B4
      stw       r0, 0x4(r4)
      addi      r0, r3, 0x515C
      stw       r6, 0x8(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x270:
      mr        r3, r31
      bl        0x390C
      li        r3, 0x40
      bl        -0x1806E8
      mr.       r4, r3
      beq-      .loc_0x290
      bl        0x2834
      mr        r4, r3

    .loc_0x290:
      mr        r3, r31
      bl        0x38EC
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801A45BC
 * Size:	000004
 */
void Game::PelletNormalState::init((Game::Pellet*, Game::StateArg*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801A45C0
 * Size:	000004
 */
void Game::PelletNormalState::exec((Game::Pellet*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801A45C4
 * Size:	000004
 */
void Game::PelletNormalState::cleanup((Game::Pellet*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801A45C8
 * Size:	00007C
 */
void Game::PelletGoalWaitState::init((Game::Pellet*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr.       r31, r5
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      bne-      .loc_0x44
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0xB58
      li        r4, 0x1B0
      subi      r5, r5, 0xB48
      crclr     6, 0x6
      bl        -0x179FC8

    .loc_0x44:
      lwz       r0, 0x0(r31)
      mr        r3, r30
      stw       r0, 0x10(r29)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1A8(r12)
      mtctr     r12
      bctrl
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
 * Address:	801A4644
 * Size:	000060
 */
void Game::PelletGoalWaitState::exec((Game::Pellet*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r5, -0x64AC(r13)
      cmplwi    r5, 0
      beq-      .loc_0x50
      lwz       r0, 0x18(r5)
      cmpwi     r0, 0
      bne-      .loc_0x50
      lwz       r7, 0x10(r3)
      lis       r5, 0x804B
      addi      r0, r5, 0x2244
      addi      r6, r1, 0x8
      stw       r0, 0xC(r1)
      li        r5, 0x1
      stw       r7, 0x8(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x50:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801A46A4
 * Size:	000030
 */
void transit__Q24Game24FSMState<Game::Pellet>
FPQ24Game6PelletiPQ24Game8StateArg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x8(r3)
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
 * Address:	801A46D4
 * Size:	000004
 */
void Game::PelletGoalWaitState::cleanup((Game::Pellet*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801A46D8
 * Size:	000680
 */
void Game::PelletGoalState::init((Game::Pellet*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xA0(r1)
      mflr      r0
      stw       r0, 0xA4(r1)
      stw       r31, 0x9C(r1)
      mr        r31, r5
      stw       r30, 0x98(r1)
      mr        r30, r4
      stw       r29, 0x94(r1)
      mr        r29, r3
      mr        r3, r30
      bl        -0x3E8DC
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,24,31
      cmplwi    r0, 0x4
      bne-      .loc_0x84
      lwz       r3, -0x6C18(r13)
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0
      bne-      .loc_0x84
      mr        r3, r30
      bl        -0x3DD58
      cmpwi     r3, 0
      blt-      .loc_0x84
      cmpwi     r3, 0xC
      bge-      .loc_0x84
      lwz       r5, -0x6B70(r13)
      mr        r4, r3
      addi      r3, r5, 0x48
      bl        0x41910

    .loc_0x84:
      mr        r3, r30
      li        r4, 0
      lwz       r12, 0x0(r30)
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x0(r31)
      li        r31, 0
      stw       r0, 0x10(r29)
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x44(r3)
      cmpwi     r3, 0
      beq-      .loc_0xD8
      cmpwi     r3, 0x2
      li        r0, 0
      beq-      .loc_0xCC
      cmpwi     r3, 0x3
      bne-      .loc_0xD0

    .loc_0xCC:
      li        r0, 0x1

    .loc_0xD0:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0xEC

    .loc_0xD8:
      mr        r3, r29
      mr        r4, r30
      bl        .loc_0x680
      mr        r31, r3
      b         .loc_0x260

    .loc_0xEC:
      cmpwi     r3, 0x1
      bne-      .loc_0x260
      lbz       r0, 0x32C(r30)
      cmplwi    r0, 0x4
      bne-      .loc_0x160
      mr        r3, r30
      li        r4, 0
      bl        -0x68D90
      lwz       r3, 0x10(r29)
      li        r4, 0
      bl        -0x68D9C
      lis       r4, 0x804B
      lis       r3, 0x804B
      addi      r0, r4, 0x590
      li        r5, 0x1
      stw       r0, 0x78(r1)
      addi      r4, r3, 0x6194
      li        r0, 0
      lwz       r3, -0x6C18(r13)
      stw       r4, 0x78(r1)
      addi      r4, r1, 0x78
      stw       r5, 0x7C(r1)
      stb       r0, 0x80(r1)
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x50(r12)
      mtctr     r12
      bctrl
      b         .loc_0x260

    .loc_0x160:
      cmplwi    r0, 0x5
      bne-      .loc_0x1C4
      mr        r3, r30
      li        r4, 0
      bl        -0x68DF8
      lwz       r3, 0x10(r29)
      li        r4, 0
      bl        -0x68E04
      lis       r3, 0x804B
      li        r0, 0
      addi      r4, r3, 0x590
      lis       r3, 0x804B
      stw       r4, 0x6C(r1)
      addi      r5, r3, 0x6194
      lwz       r3, -0x6C18(r13)
      addi      r4, r1, 0x6C
      stw       r5, 0x6C(r1)
      stw       r0, 0x70(r1)
      stb       r0, 0x74(r1)
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x50(r12)
      mtctr     r12
      bctrl
      b         .loc_0x260

    .loc_0x1C4:
      cmplwi    r0, 0x6
      bne-      .loc_0x260
      lwz       r3, 0x10(r29)
      lhz       r6, 0x128(r3)
      cmpwi     r6, 0x402
      bne-      .loc_0x244
      mr        r3, r30
      li        r4, 0
      bl        -0x68E6C
      lwz       r3, 0x10(r29)
      li        r4, 0
      bl        -0x68E78
      lwz       r5, 0x10(r29)
      lis       r4, 0x804B
      lis       r3, 0x804B
      li        r0, 0x1
      lhz       r6, 0x22E(r5)
      addi      r4, r4, 0x590
      addi      r5, r3, 0x6194
      lwz       r3, -0x6C18(r13)
      stw       r4, 0x60(r1)
      subfic    r6, r6, 0x1
      addi      r4, r1, 0x60
      stw       r5, 0x60(r1)
      stw       r6, 0x64(r1)
      stb       r0, 0x68(r1)
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x50(r12)
      mtctr     r12
      bctrl
      b         .loc_0x260

    .loc_0x244:
      lis       r3, 0x8048
      lis       r4, 0x8048
      subi      r5, r4, 0xB3C
      subi      r3, r3, 0xB58
      li        r4, 0x200
      crclr     6, 0x6
      bl        -0x17A2F4

    .loc_0x260:
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x280
      lwz       r3, 0x10(r29)
      li        r4, 0
      bl        -0x68EF8
      mr        r3, r30
      li        r4, 0
      bl        -0x68F04

    .loc_0x280:
      mr        r4, r30
      addi      r3, r1, 0x1C
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x10(r29)
      addi      r3, r1, 0x28
      lwz       r12, 0x0(r4)
      lwz       r12, 0x194(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x2C(r1)
      lfs       f0, 0x20(r1)
      lfs       f3, 0x30(r1)
      fsubs     f4, f1, f0
      lfs       f2, 0x24(r1)
      lfs       f1, 0x28(r1)
      lfs       f0, 0x1C(r1)
      fsubs     f2, f3, f2
      fmuls     f3, f4, f4
      fsubs     f1, f1, f0
      lfs       f0, -0x51D8(r2)
      fmuls     f2, f2, f2
      fmadds    f1, f1, f1, f3
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x300
      ble-      .loc_0x304
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x304

    .loc_0x300:
      fmr       f1, f0

    .loc_0x304:
      stfs      f1, 0x18(r29)
      mr        r4, r30
      lfs       f1, -0x51D8(r2)
      addi      r3, r1, 0x10
      lfs       f0, -0x51D4(r2)
      stfs      f1, 0x14(r29)
      stfs      f0, 0x1C(r29)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x6C(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x14(r1)
      mr        r3, r30
      lfs       f2, 0x10(r1)
      addi      r4, r1, 0x54
      lfs       f1, 0x18(r1)
      stfs      f0, 0x58(r1)
      lfs       f0, -0x51D8(r2)
      stfs      f2, 0x54(r1)
      stfs      f1, 0x5C(r1)
      stfs      f0, 0x58(r1)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl
      lfs       f0, -0x51D0(r2)
      stfs      f0, 0x20(r29)
      lwz       r3, 0x358(r30)
      cmplwi    r3, 0
      beq-      .loc_0x390
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x20(r29)

    .loc_0x390:
      lwz       r3, 0x10(r29)
      lhz       r0, 0x128(r3)
      cmpwi     r0, 0x402
      beq-      .loc_0x3A8
      cmpwi     r0, 0x403
      bne-      .loc_0x3B4

    .loc_0x3A8:
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0x3B4
      bl        -0x2B8A4

    .loc_0x3B4:
      stb       r31, 0x3C(r29)
      li        r5, 0
      stb       r5, 0x3E(r29)
      lbz       r0, 0x3C(r29)
      cmplwi    r0, 0
      bne-      .loc_0x5EC
      lwz       r3, -0x6D0C(r13)
      lis       r4, 0x804B
      subi      r0, r4, 0x4364
      cmplwi    r5, 0
      stw       r0, 0x44(r1)
      stw       r5, 0x50(r1)
      stw       r5, 0x48(r1)
      stw       r3, 0x4C(r1)
      bne-      .loc_0x408
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x48(r1)
      b         .loc_0x56C

    .loc_0x408:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x48(r1)
      b         .loc_0x474

    .loc_0x420:
      lwz       r3, 0x4C(r1)
      lwz       r4, 0x48(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x50(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x56C
      lwz       r3, 0x4C(r1)
      lwz       r4, 0x48(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x48(r1)

    .loc_0x474:
      lwz       r12, 0x44(r1)
      addi      r3, r1, 0x44
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x420
      b         .loc_0x56C

    .loc_0x494:
      lwz       r3, 0x4C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      li        r4, 0
      bl        -0x69098
      lwz       r0, 0x50(r1)
      cmplwi    r0, 0
      bne-      .loc_0x4DC
      lwz       r3, 0x4C(r1)
      lwz       r4, 0x48(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x48(r1)
      b         .loc_0x56C

    .loc_0x4DC:
      lwz       r3, 0x4C(r1)
      lwz       r4, 0x48(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x48(r1)
      b         .loc_0x550

    .loc_0x4FC:
      lwz       r3, 0x4C(r1)
      lwz       r4, 0x48(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x50(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x56C
      lwz       r3, 0x4C(r1)
      lwz       r4, 0x48(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x48(r1)

    .loc_0x550:
      lwz       r12, 0x44(r1)
      addi      r3, r1, 0x44
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x4FC

    .loc_0x56C:
      lwz       r3, 0x4C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x48(r1)
      cmplw     r4, r3
      bne+      .loc_0x494
      lwz       r3, -0x6E20(r13)
      cmplwi    r3, 0
      beq-      .loc_0x59C
      addi      r3, r3, 0x4

    .loc_0x59C:
      li        r0, 0
      stw       r3, 0x3C(r1)
      addi      r3, r1, 0x34
      stw       r0, 0x40(r1)
      stw       r0, 0x34(r1)
      stw       r0, 0x38(r1)
      bl        -0x967FC
      b         .loc_0x5E0

    .loc_0x5BC:
      lwz       r12, 0x0(r3)
      lwz       r4, 0x38(r1)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      li        r4, 0
      bl        -0x691C0
      addi      r3, r1, 0x34
      bl        -0x96DC4

    .loc_0x5E0:
      lwz       r3, 0x34(r1)
      cmplwi    r3, 0
      bne+      .loc_0x5BC

    .loc_0x5EC:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x218(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x10(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1A0(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x65C
      lis       r4, 0x804B
      lis       r3, 0x804B
      subi      r5, r4, 0x5D00
      stw       r30, 0xC(r1)
      addi      r0, r3, 0x2958
      addi      r4, r1, 0x8
      stw       r5, 0x8(r1)
      stw       r0, 0x8(r1)
      lwz       r3, 0x10(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0x3D(r29)
      b         .loc_0x664

    .loc_0x65C:
      li        r0, 0x1
      stb       r0, 0x3D(r29)

    .loc_0x664:
      lwz       r0, 0xA4(r1)
      lwz       r31, 0x9C(r1)
      lwz       r30, 0x98(r1)
      lwz       r29, 0x94(r1)
      mtlr      r0
      addi      r1, r1, 0xA0
      blr

    .loc_0x680:
    */
}

/*
 * --INFO--
 * Address:	801A4D58
 * Size:	000D6C
 */
void Game::PelletGoalState::checkMovie((Game::Pellet*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x2C0(r1)
      mflr      r0
      lis       r6, 0x8048
      stw       r0, 0x2C4(r1)
      stmw      r26, 0x2A8(r1)
      mr        r27, r3
      mr        r28, r4
      subi      r31, r6, 0xB70
      li        r30, 0
      lwz       r5, -0x6C18(r13)
      lwz       r0, 0x44(r5)
      cmpwi     r0, 0
      bne-      .loc_0x40
      lwz       r3, -0x6B70(r13)
      bl        0x427D4
      mr        r30, r3

    .loc_0x40:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,24,31
      cmplwi    r0, 0x2
      bne-      .loc_0x64
      li        r30, 0x1

    .loc_0x64:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x84
      li        r30, 0x1

    .loc_0x84:
      lwz       r3, 0x35C(r28)
      subi      r4, r2, 0x51CC
      lwz       r3, 0x40(r3)
      bl        -0xDA728
      cmpwi     r3, 0
      bne-      .loc_0xE4
      lwz       r4, -0x6C18(r13)
      li        r3, 0
      lwz       r0, 0x44(r4)
      cmpwi     r0, 0x2
      beq-      .loc_0xB8
      cmpwi     r0, 0x3
      bne-      .loc_0xBC

    .loc_0xB8:
      li        r3, 0x1

    .loc_0xBC:
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x114
      lwz       r3, -0x6514(r13)
      bl        0x27E110
      bl        0x8F98C
      lwz       r3, -0x6514(r13)
      li        r0, 0x1
      lwz       r3, 0x60(r3)
      stb       r0, 0x42(r3)
      b         .loc_0x114

    .loc_0xE4:
      lwz       r4, -0x6C18(r13)
      li        r3, 0
      lwz       r0, 0x44(r4)
      cmpwi     r0, 0x2
      beq-      .loc_0x100
      cmpwi     r0, 0x3
      bne-      .loc_0x104

    .loc_0x100:
      li        r3, 0x1

    .loc_0x104:
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x114
      li        r3, 0
      b         .loc_0xD58

    .loc_0x114:
      lwz       r3, 0x35C(r28)
      subi      r4, r2, 0x51C8
      lwz       r3, 0x40(r3)
      bl        -0xDA7B8
      cmpwi     r3, 0
      bne-      .loc_0x158
      lwz       r3, -0x6514(r13)
      bl        0x27E0A8
      bl        0x8F954
      lwz       r3, -0x6514(r13)
      li        r0, 0x1
      lwz       r3, 0x60(r3)
      stb       r0, 0x42(r3)
      lwz       r3, -0x6B70(r13)
      lbz       r0, 0x2F(r3)
      ori       r0, r0, 0x4
      stb       r0, 0x2F(r3)

    .loc_0x158:
      rlwinm.   r0,r30,0,24,31
      li        r30, 0
      li        r29, 0
      beq-      .loc_0xC7C
      lwz       r3, 0x10(r27)
      li        r4, 0
      lhz       r0, 0x128(r3)
      cmplwi    r0, 0x403
      beq-      .loc_0x184
      cmplwi    r0, 0x402
      bne-      .loc_0x188

    .loc_0x184:
      mr        r4, r3

    .loc_0x188:
      cmplwi    r4, 0
      beq-      .loc_0x84C
      lhz       r0, 0x22E(r4)
      cmplwi    r0, 0x4
      bne-      .loc_0x84C
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      beq-      .loc_0xC7C
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,24,31
      cmplwi    r0, 0x2
      bne-      .loc_0x658
      lhz       r4, 0x43E(r28)
      cmpwi     r4, 0
      mr        r26, r4
      bne-      .loc_0x420
      lwz       r3, -0x6B70(r13)
      bl        0x43690
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1B
      bl        0x4248C
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1D
      bl        0x42480
      lwz       r3, -0x6B70(r13)
      mr        r4, r26
      bl        0x4366C
      mr        r27, r3
      lwz       r3, -0x6B70(r13)
      mr        r4, r26
      bl        0x436D4
      lwz       r3, -0x6B70(r13)
      li        r4, 0
      bl        0x43650
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1
      bl        0x43644
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1B
      bl        0x42440
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2E4
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1B
      bl        0x423F0
      lwz       r3, -0x6C18(r13)
      mr        r4, r28
      lwz       r3, 0x58(r3)
      bl        0x965D4
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r27, 0xC8(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      lwz       r5, 0x14(r3)
      li        r0, 0
      lfs       f0, -0x51D8(r2)
      addi      r3, r31, 0x44
      stw       r3, 0x268(r1)
      addi      r4, r1, 0x268
      lwz       r3, -0x64AC(r13)
      stw       r5, 0x26C(r1)
      stw       r27, 0x274(r1)
      stfs      f0, 0x280(r1)
      stfs      f0, 0x284(r1)
      stfs      f0, 0x288(r1)
      stfs      f0, 0x28C(r1)
      stw       r0, 0x290(r1)
      stw       r0, 0x278(r1)
      stw       r0, 0x270(r1)
      stw       r0, 0x294(r1)
      stw       r0, 0x27C(r1)
      stw       r0, 0x298(r1)
      bl        0x2879A0
      li        r29, 0x1
      b         .loc_0xC7C

    .loc_0x2E4:
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1D
      bl        0x4239C
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xC7C
      lwz       r3, -0x6B70(r13)
      mr        r4, r26
      bl        0x43580
      lwz       r3, -0x6C10(r13)
      addi      r4, r27, 0x1
      lwz       r0, 0x38(r3)
      cmpw      r4, r0
      blt-      .loc_0xC7C
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1D
      bl        0x4232C
      lwz       r3, -0x6BB0(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      lis       r4, 0x804B
      li        r0, 0x1
      subi      r5, r4, 0x5D0C
      stb       r0, 0x14(r1)
      lis       r4, 0x804B
      mr        r26, r3
      stw       r5, 0x10(r1)
      subi      r5, r4, 0x5D18
      addi      r4, r1, 0x10
      stw       r5, 0x10(r1)
      stb       r0, 0x15(r1)
      bl        -0x6A0F4
      lfs       f1, -0x51D8(r2)
      mr        r3, r26
      lfs       f0, -0x51C0(r2)
      addi      r4, r1, 0x54
      stfs      f1, 0x54(r1)
      li        r5, 0
      stfs      f0, 0x58(r1)
      stfs      f1, 0x5C(r1)
      bl        -0x69F38
      mr        r3, r26
      li        r4, 0
      bl        -0x6969C
      lwz       r3, -0x6C18(r13)
      mr        r4, r26
      li        r30, 0x1
      lwz       r3, 0x58(r3)
      bl        0x96498
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r27, 0xC8(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      lwz       r5, 0x14(r3)
      li        r0, 0
      lfs       f0, -0x51D8(r2)
      addi      r3, r31, 0x58
      stw       r3, 0x234(r1)
      addi      r4, r1, 0x234
      lwz       r3, -0x64AC(r13)
      stw       r5, 0x238(r1)
      stw       r27, 0x240(r1)
      stfs      f0, 0x24C(r1)
      stfs      f0, 0x250(r1)
      stfs      f0, 0x254(r1)
      stfs      f0, 0x258(r1)
      stw       r0, 0x25C(r1)
      stw       r0, 0x244(r1)
      stw       r0, 0x23C(r1)
      stw       r0, 0x260(r1)
      stw       r0, 0x248(r1)
      stw       r0, 0x264(r1)
      bl        0x287864
      li        r29, 0x1
      b         .loc_0xC7C

    .loc_0x420:
      lwz       r3, -0x6B70(r13)
      bl        0x4345C
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1C
      bl        0x42258
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1E
      bl        0x4224C
      lwz       r3, -0x6B70(r13)
      mr        r4, r26
      bl        0x43438
      mr        r27, r3
      lwz       r3, -0x6B70(r13)
      mr        r4, r26
      bl        0x434A0
      lwz       r3, -0x6B70(r13)
      li        r4, 0
      bl        0x4341C
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1
      bl        0x43410
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1C
      bl        0x4220C
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x518
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1C
      bl        0x421BC
      lwz       r3, -0x6C18(r13)
      mr        r4, r28
      lwz       r3, 0x58(r3)
      bl        0x963A0
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r27, 0xC8(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      lwz       r5, 0x14(r3)
      li        r0, 0
      lfs       f0, -0x51D8(r2)
      addi      r3, r31, 0x6C
      stw       r3, 0x200(r1)
      addi      r4, r1, 0x200
      lwz       r3, -0x64AC(r13)
      stw       r5, 0x204(r1)
      stw       r27, 0x20C(r1)
      stfs      f0, 0x218(r1)
      stfs      f0, 0x21C(r1)
      stfs      f0, 0x220(r1)
      stfs      f0, 0x224(r1)
      stw       r0, 0x228(r1)
      stw       r0, 0x210(r1)
      stw       r0, 0x208(r1)
      stw       r0, 0x22C(r1)
      stw       r0, 0x214(r1)
      stw       r0, 0x230(r1)
      bl        0x28776C
      li        r29, 0x1
      b         .loc_0xC7C

    .loc_0x518:
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1E
      bl        0x42168
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xC7C
      lwz       r3, -0x6B70(r13)
      mr        r4, r26
      bl        0x4334C
      lwz       r3, -0x6C10(r13)
      addi      r4, r27, 0x1
      lwz       r0, 0x38(r3)
      cmpw      r4, r0
      blt-      .loc_0xC7C
      lwz       r3, -0x6B70(r13)
      li        r4, 0x1E
      bl        0x420F8
      lwz       r3, -0x6BB0(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      lis       r5, 0x804B
      lis       r4, 0x804B
      subi      r0, r5, 0x5D0C
      mr        r26, r3
      stw       r0, 0x8(r1)
      li        r5, 0x2
      subi      r4, r4, 0x5D18
      li        r0, 0x1
      stw       r4, 0x8(r1)
      addi      r4, r1, 0x8
      stb       r5, 0xC(r1)
      stb       r0, 0xD(r1)
      bl        -0x6A32C
      lfs       f1, -0x51D8(r2)
      mr        r3, r26
      lfs       f0, -0x51C0(r2)
      addi      r4, r1, 0x48
      stfs      f1, 0x48(r1)
      li        r5, 0
      stfs      f0, 0x4C(r1)
      stfs      f1, 0x50(r1)
      bl        -0x6A170
      mr        r3, r26
      li        r4, 0
      bl        -0x698D4
      lwz       r3, -0x6C18(r13)
      mr        r4, r26
      li        r30, 0x1
      lwz       r3, 0x58(r3)
      bl        0x96260
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r27, 0xC8(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      lwz       r5, 0x14(r3)
      li        r0, 0
      lfs       f0, -0x51D8(r2)
      addi      r3, r31, 0x80
      stw       r3, 0x1CC(r1)
      addi      r4, r1, 0x1CC
      lwz       r3, -0x64AC(r13)
      stw       r5, 0x1D0(r1)
      stw       r27, 0x1D8(r1)
      stfs      f0, 0x1E4(r1)
      stfs      f0, 0x1E8(r1)
      stfs      f0, 0x1EC(r1)
      stfs      f0, 0x1F0(r1)
      stw       r0, 0x1F4(r1)
      stw       r0, 0x1DC(r1)
      stw       r0, 0x1D4(r1)
      stw       r0, 0x1F8(r1)
      stw       r0, 0x1E0(r1)
      stw       r0, 0x1FC(r1)
      bl        0x28762C
      li        r29, 0x1
      b         .loc_0xC7C

    .loc_0x658:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,24,31
      cmplwi    r0, 0x3
      bne-      .loc_0x708
      lwz       r3, -0x6C18(r13)
      mr        r4, r28
      lwz       r3, 0x58(r3)
      bl        0x961BC
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r27, 0xC8(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      lwz       r5, 0x14(r3)
      li        r0, 0
      lfs       f0, -0x51D8(r2)
      addi      r3, r31, 0x94
      stw       r3, 0x198(r1)
      addi      r4, r1, 0x198
      lwz       r3, -0x64AC(r13)
      stw       r5, 0x19C(r1)
      stw       r27, 0x1A4(r1)
      stfs      f0, 0x1B0(r1)
      stfs      f0, 0x1B4(r1)
      stfs      f0, 0x1B8(r1)
      stfs      f0, 0x1BC(r1)
      stw       r0, 0x1C0(r1)
      stw       r0, 0x1A8(r1)
      stw       r0, 0x1A0(r1)
      stw       r0, 0x1C4(r1)
      stw       r0, 0x1AC(r1)
      stw       r0, 0x1C8(r1)
      lwz       r5, 0x35C(r28)
      lwz       r0, 0x40(r5)
      stw       r0, 0x1A0(r1)
      bl        0x28757C
      li        r29, 0x1
      b         .loc_0xC7C

    .loc_0x708:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,24,31
      cmplwi    r0, 0x4
      bne-      .loc_0x7D8
      lwz       r3, -0x6C18(r13)
      mr        r4, r28
      lwz       r3, 0x58(r3)
      bl        0x9610C
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r27, 0xC8(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      lwz       r5, 0x14(r3)
      li        r4, 0
      lfs       f0, -0x51D8(r2)
      addi      r0, r31, 0xA8
      stw       r0, 0x164(r1)
      lis       r3, 0xC001
      addi      r0, r3, 0x100B
      stw       r5, 0x168(r1)
      stw       r27, 0x170(r1)
      stfs      f0, 0x17C(r1)
      stfs      f0, 0x180(r1)
      stfs      f0, 0x184(r1)
      stfs      f0, 0x188(r1)
      stw       r4, 0x18C(r1)
      stw       r4, 0x174(r1)
      stw       r4, 0x16C(r1)
      stw       r4, 0x190(r1)
      stw       r4, 0x178(r1)
      stw       r4, 0x194(r1)
      lwz       r5, 0x35C(r28)
      lwz       r4, 0x40(r5)
      stw       r4, 0x16C(r1)
      stw       r0, 0x190(r1)
      lha       r0, 0x258(r5)
      cmpwi     r0, 0x8
      blt-      .loc_0x7C4
      addi      r0, r3, 0x100A
      stw       r0, 0x190(r1)

    .loc_0x7C4:
      lwz       r3, -0x64AC(r13)
      addi      r4, r1, 0x164
      bl        0x2874AC
      li        r29, 0x1
      b         .loc_0xC7C

    .loc_0x7D8:
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r27, 0xC8(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      lwz       r5, 0x14(r3)
      li        r0, 0
      lfs       f0, -0x51D8(r2)
      addi      r3, r31, 0xBC
      stw       r3, 0x130(r1)
      addi      r4, r1, 0x130
      lwz       r3, -0x64AC(r13)
      stw       r5, 0x134(r1)
      stw       r27, 0x13C(r1)
      stfs      f0, 0x148(r1)
      stfs      f0, 0x14C(r1)
      stfs      f0, 0x150(r1)
      stfs      f0, 0x154(r1)
      stw       r0, 0x158(r1)
      stw       r0, 0x140(r1)
      stw       r0, 0x138(r1)
      stw       r0, 0x15C(r1)
      stw       r0, 0x144(r1)
      stw       r0, 0x160(r1)
      bl        0x287438
      li        r29, 0x1
      b         .loc_0xC7C

    .loc_0x84C:
      cmplwi    r4, 0
      beq-      .loc_0xB74
      lhz       r0, 0x22E(r4)
      cmplwi    r0, 0x3
      bne-      .loc_0xB74
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,24,31
      cmplwi    r0, 0x3
      bne-      .loc_0x95C
      lwz       r3, -0x6C18(r13)
      mr        r4, r28
      lwz       r3, 0x58(r3)
      bl        0x95FB4
      lwz       r3, -0x6C18(r13)
      addi      r4, r31, 0xC8
      lfs       f0, -0x51D8(r2)
      li        r0, 0
      lwz       r5, 0x58(r3)
      addi      r3, r1, 0x3C
      lwz       r5, 0xC8(r5)
      stw       r4, 0xFC(r1)
      stw       r0, 0x100(r1)
      stw       r5, 0x108(r1)
      stfs      f0, 0x114(r1)
      stfs      f0, 0x118(r1)
      stfs      f0, 0x11C(r1)
      stfs      f0, 0x120(r1)
      stw       r0, 0x124(r1)
      stw       r0, 0x10C(r1)
      stw       r0, 0x104(r1)
      stw       r0, 0x128(r1)
      stw       r0, 0x110(r1)
      stw       r0, 0x12C(r1)
      lwz       r4, 0x10(r27)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x3C(r1)
      lfs       f1, 0x40(r1)
      lfs       f0, 0x44(r1)
      stfs      f2, 0x114(r1)
      stfs      f1, 0x118(r1)
      stfs      f0, 0x11C(r1)
      lwz       r3, 0x10(r27)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x120(r1)
      addi      r4, r1, 0xFC
      lwz       r5, -0x6C18(r13)
      lwz       r3, -0x64AC(r13)
      lwz       r5, 0x58(r5)
      lwz       r0, 0xCC(r5)
      stw       r0, 0x10C(r1)
      lwz       r0, 0xC8(r5)
      stw       r0, 0x108(r1)
      lwz       r5, 0x35C(r28)
      lwz       r0, 0x40(r5)
      stw       r0, 0x104(r1)
      bl        0x287328
      li        r29, 0x1
      b         .loc_0xC7C

    .loc_0x95C:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,24,31
      cmplwi    r0, 0x4
      bne-      .loc_0xA6C
      lwz       r3, -0x6C18(r13)
      mr        r4, r28
      lwz       r3, 0x58(r3)
      bl        0x95EB8
      lwz       r3, -0x6C18(r13)
      addi      r4, r31, 0xE0
      lfs       f0, -0x51D8(r2)
      li        r0, 0
      lwz       r6, 0x58(r3)
      addi      r3, r1, 0x30
      lwz       r5, 0xC8(r6)
      stw       r4, 0xC8(r1)
      stw       r0, 0xCC(r1)
      stw       r5, 0xD4(r1)
      stfs      f0, 0xE0(r1)
      stfs      f0, 0xE4(r1)
      stfs      f0, 0xE8(r1)
      stfs      f0, 0xEC(r1)
      stw       r0, 0xF0(r1)
      stw       r0, 0xD8(r1)
      stw       r0, 0xD0(r1)
      stw       r0, 0xF4(r1)
      stw       r0, 0xDC(r1)
      stw       r0, 0xF8(r1)
      lwz       r4, 0x35C(r28)
      lwz       r0, 0x40(r4)
      stw       r0, 0xD0(r1)
      lwz       r0, 0xCC(r6)
      stw       r0, 0xD8(r1)
      lwz       r4, 0x10(r27)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x30(r1)
      lfs       f1, 0x34(r1)
      lfs       f0, 0x38(r1)
      stfs      f2, 0xE0(r1)
      stfs      f1, 0xE4(r1)
      stfs      f0, 0xE8(r1)
      lwz       r3, 0x10(r27)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      lis       r4, 0xC001
      stfs      f1, 0xEC(r1)
      addi      r0, r4, 0x100B
      stw       r0, 0xF4(r1)
      lwz       r3, 0x35C(r28)
      lha       r0, 0x258(r3)
      cmpwi     r0, 0x8
      blt-      .loc_0xA58
      addi      r0, r4, 0x100A
      stw       r0, 0xF4(r1)

    .loc_0xA58:
      lwz       r3, -0x64AC(r13)
      addi      r4, r1, 0xC8
      bl        0x287218
      li        r29, 0x1
      b         .loc_0xC7C

    .loc_0xA6C:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,24,31
      cmplwi    r0, 0x1
      bne-      .loc_0xC7C
      lbz       r0, 0x32C(r28)
      cmplwi    r0, 0x1
      beq-      .loc_0xC7C
      lwz       r3, -0x6B70(r13)
      li        r4, 0x28
      bl        0x41BE8
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xC7C
      lwz       r3, -0x6B70(r13)
      li        r4, 0x28
      bl        0x41B98
      lwz       r3, -0x6C18(r13)
      addi      r4, r31, 0xF8
      lfs       f0, -0x51D8(r2)
      li        r0, 0
      lwz       r6, 0x58(r3)
      addi      r3, r1, 0x24
      lwz       r5, 0xC8(r6)
      stw       r4, 0x94(r1)
      stw       r0, 0x98(r1)
      stw       r5, 0xA0(r1)
      stfs      f0, 0xAC(r1)
      stfs      f0, 0xB0(r1)
      stfs      f0, 0xB4(r1)
      stfs      f0, 0xB8(r1)
      stw       r0, 0xBC(r1)
      stw       r0, 0xA4(r1)
      stw       r0, 0x9C(r1)
      stw       r0, 0xC0(r1)
      stw       r0, 0xA8(r1)
      stw       r0, 0xC4(r1)
      lwz       r4, 0x35C(r28)
      lwz       r0, 0x40(r4)
      stw       r0, 0x9C(r1)
      lwz       r0, 0xCC(r6)
      stw       r0, 0xA4(r1)
      lwz       r4, 0x10(r27)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x24(r1)
      lfs       f1, 0x28(r1)
      lfs       f0, 0x2C(r1)
      stfs      f2, 0xAC(r1)
      stfs      f1, 0xB0(r1)
      stfs      f0, 0xB4(r1)
      lwz       r3, 0x10(r27)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0xB8(r1)
      addi      r4, r1, 0x94
      lwz       r3, -0x64AC(r13)
      bl        0x287110
      li        r29, 0x1
      b         .loc_0xC7C

    .loc_0xB74:
      cmplwi    r4, 0
      beq-      .loc_0xC7C
      lhz       r0, 0x22E(r4)
      cmplwi    r0, 0x2
      bgt-      .loc_0xC7C
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xC7C
      lwz       r3, -0x6B70(r13)
      li        r4, 0x31
      bl        0x41ADC
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xC7C
      lwz       r3, -0x6B70(r13)
      li        r4, 0x31
      bl        0x41A8C
      lwz       r3, -0x6C18(r13)
      addi      r4, r31, 0x10C
      lfs       f0, -0x51D8(r2)
      li        r0, 0
      lwz       r6, 0x58(r3)
      addi      r3, r1, 0x18
      lwz       r5, 0xC8(r6)
      stw       r4, 0x60(r1)
      stw       r0, 0x64(r1)
      stw       r5, 0x6C(r1)
      stfs      f0, 0x78(r1)
      stfs      f0, 0x7C(r1)
      stfs      f0, 0x80(r1)
      stfs      f0, 0x84(r1)
      stw       r0, 0x88(r1)
      stw       r0, 0x70(r1)
      stw       r0, 0x68(r1)
      stw       r0, 0x8C(r1)
      stw       r0, 0x74(r1)
      stw       r0, 0x90(r1)
      lwz       r4, 0x35C(r28)
      lwz       r0, 0x40(r4)
      stw       r0, 0x68(r1)
      lwz       r0, 0xCC(r6)
      stw       r0, 0x70(r1)
      lwz       r4, 0x10(r27)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x18(r1)
      lfs       f1, 0x1C(r1)
      lfs       f0, 0x20(r1)
      stfs      f2, 0x78(r1)
      stfs      f1, 0x7C(r1)
      stfs      f0, 0x80(r1)
      lwz       r3, 0x10(r27)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x84(r1)
      addi      r4, r1, 0x60
      lwz       r3, -0x64AC(r13)
      bl        0x287004
      li        r29, 0x1

    .loc_0xC7C:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0xD54
      mr        r3, r28
      li        r26, 0
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,24,31
      cmplwi    r0, 0x1
      bne-      .loc_0xCBC
      lwz       r3, 0x358(r28)
      li        r4, 0
      lwz       r3, 0x8(r3)
      bl        -0x69FBC
      b         .loc_0xD30

    .loc_0xCBC:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xCE8
      mr        r3, r28
      li        r4, 0
      bl        -0x69FE8
      b         .loc_0xD30

    .loc_0xCE8:
      mr        r3, r28
      mr        r26, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1A8(r12)
      mtctr     r12
      bctrl
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x1AC(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x358(r28)
      cmplwi    r3, 0
      beq-      .loc_0xD30
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0xD30:
      rlwinm.   r0,r30,0,24,31
      bne-      .loc_0xD48
      lwz       r3, -0x6C18(r13)
      mr        r4, r26
      lwz       r3, 0x58(r3)
      bl        0x95AFC

    .loc_0xD48:
      mr        r3, r28
      li        r4, 0
      bl        -0x6A058

    .loc_0xD54:
      mr        r3, r29

    .loc_0xD58:
      lmw       r26, 0x2A8(r1)
      lwz       r0, 0x2C4(r1)
      mtlr      r0
      addi      r1, r1, 0x2C0
      blr
    */
}

/*
 * --INFO--
 * Address:	801A5AC4
 * Size:	000B34
 */
void Game::PelletGoalState::exec((Game::Pellet*))
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
      stfd      f29, 0xB0(r1)
      psq_st    f29,0xB8(r1),0,0
      stw       r31, 0xAC(r1)
      stw       r30, 0xA8(r1)
      stw       r29, 0xA4(r1)
      stw       r28, 0xA0(r1)
      mr        r30, r4
      lis       r4, 0x8048
      lwz       r5, 0x358(r30)
      mr        r29, r3
      subi      r31, r4, 0xB70
      cmplwi    r5, 0
      beq-      .loc_0x88
      lwz       r3, 0x8(r5)
      cmplwi    r3, 0
      beq-      .loc_0x9C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x9C
      lwz       r3, 0x358(r30)
      lfs       f1, -0x51BC(r2)
      lwz       r3, 0x8(r3)
      bl        -0x9E7B4
      b         .loc_0x9C

    .loc_0x88:
      lwz       r3, -0x6514(r13)
      lfs       f1, -0x51B8(r2)
      lfs       f0, 0x54(r3)
      fmuls     f0, f1, f0
      stfs      f0, 0x438(r30)

    .loc_0x9C:
      lbz       r0, 0x3C(r29)
      cmplwi    r0, 0
      beq-      .loc_0xF0
      lbz       r0, 0x3E(r29)
      cmplwi    r0, 0
      bne-      .loc_0xF0
      lwz       r3, -0x64AC(r13)
      cmplwi    r3, 0
      beq-      .loc_0xF0
      lwz       r0, 0x18(r3)
      cmpwi     r0, 0x5
      bne-      .loc_0xF0
      lwz       r3, 0x10(r29)
      lhz       r0, 0x128(r3)
      cmpwi     r0, 0x402
      beq-      .loc_0xE4
      cmpwi     r0, 0x403
      bne-      .loc_0xF0

    .loc_0xE4:
      bl        -0x2C9C4
      li        r0, 0x1
      stb       r0, 0x3E(r29)

    .loc_0xF0:
      lbz       r0, 0x34(r29)
      cmplwi    r0, 0
      beq-      .loc_0x1B4
      mr        r4, r30
      addi      r3, r1, 0x3C
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x3C(r1)
      li        r0, 0
      lfs       f0, -0x51D8(r2)
      addi      r3, r1, 0x30
      stfs      f1, 0x28(r29)
      lfs       f1, 0x40(r1)
      stfs      f1, 0x2C(r29)
      lfs       f1, 0x44(r1)
      stfs      f1, 0x30(r29)
      stfs      f0, 0x24(r29)
      stb       r0, 0x34(r29)
      lwz       r4, 0x10(r29)
      lwz       r12, 0x0(r4)
      lwz       r12, 0x194(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x34(r1)
      lfs       f0, 0x2C(r29)
      lfs       f3, 0x38(r1)
      fsubs     f4, f1, f0
      lfs       f2, 0x30(r29)
      lfs       f1, 0x30(r1)
      lfs       f0, 0x28(r29)
      fsubs     f2, f3, f2
      fmuls     f3, f4, f4
      fsubs     f1, f1, f0
      lfs       f0, -0x51D8(r2)
      fmuls     f2, f2, f2
      fmadds    f1, f1, f1, f3
      fadds     f1, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x1A4
      ble-      .loc_0x1A8
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x1A8

    .loc_0x1A4:
      fmr       f1, f0

    .loc_0x1A8:
      stfs      f1, 0x18(r29)
      lfs       f0, -0x51D8(r2)
      stfs      f0, 0x38(r29)

    .loc_0x1B4:
      lwz       r4, 0x10(r29)
      addi      r3, r1, 0x24
      lwz       r12, 0x0(r4)
      lwz       r12, 0x194(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x2C(r1)
      lfs       f5, 0x30(r29)
      lfs       f0, 0x28(r1)
      lfs       f6, 0x2C(r29)
      fsubs     f2, f1, f5
      lfs       f4, 0x24(r29)
      fsubs     f3, f0, f6
      lfs       f1, 0x24(r1)
      lfs       f7, 0x28(r29)
      fmuls     f0, f2, f4
      lbz       r0, 0x3D(r29)
      fsubs     f2, f1, f7
      fmuls     f1, f3, f4
      cmplwi    r0, 0
      fadds     f29, f5, f0
      fmuls     f0, f2, f4
      fadds     f30, f6, f1
      fadds     f31, f7, f0
      beq-      .loc_0x270
      lwz       r3, 0x10(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1A0(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xAFC
      lis       r4, 0x804B
      lis       r3, 0x804B
      subi      r5, r4, 0x5D00
      stw       r30, 0x14(r1)
      addi      r0, r3, 0x2958
      addi      r4, r1, 0x10
      stw       r5, 0x10(r1)
      stw       r0, 0x10(r1)
      lwz       r3, 0x10(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0x3D(r29)

    .loc_0x270:
      lfs       f1, 0x1C(r29)
      lfs       f0, -0x51D8(r2)
      fcmpo     cr0, f1, f0
      bgt-      .loc_0x29C
      lwz       r3, 0x10(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x19C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x310

    .loc_0x29C:
      mr        r4, r30
      addi      r3, r1, 0x18
      lwz       r12, 0x0(r30)
      lwz       r12, 0x6C(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x18(r1)
      mr        r3, r30
      lfs       f1, 0x20(r1)
      addi      r4, r1, 0x64
      lfs       f2, 0x1C(r1)
      stfs      f0, 0x64(r1)
      lfs       f0, -0x51D8(r2)
      stfs      f1, 0x6C(r1)
      stfs      f2, 0x68(r1)
      stfs      f0, 0x6C(r1)
      stfs      f0, 0x64(r1)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6514(r13)
      li        r0, 0x1
      lfs       f1, 0x1C(r29)
      lfs       f0, 0x54(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0x1C(r29)
      stb       r0, 0x34(r29)
      b         .loc_0xAFC

    .loc_0x310:
      stfs      f31, 0x1B0(r30)
      lfs       f5, -0x51D0(r2)
      stfs      f30, 0x1B4(r30)
      lfs       f1, -0x51A8(r2)
      stfs      f29, 0x1B8(r30)
      lfs       f2, -0x51AC(r2)
      stfs      f31, 0x3AC(r30)
      lfs       f0, -0x51D8(r2)
      stfs      f30, 0x3B0(r30)
      stfs      f29, 0x3B4(r30)
      lfs       f4, 0x24(r29)
      lfs       f3, 0x20(r29)
      fsubs     f4, f5, f4
      fmuls     f1, f1, f4
      fmuls     f4, f4, f3
      fmuls     f1, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x384
      lfs       f0, -0x51B4(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x90(r1)
      lwz       r0, 0x94(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f1, f0
      b         .loc_0x3A8

    .loc_0x384:
      lfs       f0, -0x51B0(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x98(r1)
      lwz       r0, 0x9C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f1, r3, r0

    .loc_0x3A8:
      lfs       f0, -0x51A4(r2)
      lfs       f3, -0x51A0(r2)
      fmuls     f1, f0, f1
      lfs       f0, -0x51D0(r2)
      fadds     f4, f4, f1
      stfs      f4, 0x168(r30)
      stfs      f4, 0x16C(r30)
      stfs      f4, 0x170(r30)
      lwz       r3, -0x6514(r13)
      lfs       f4, 0x38(r29)
      lfs       f2, 0x54(r3)
      lfs       f1, 0x18(r29)
      fmuls     f2, f4, f2
      lfs       f4, 0x24(r29)
      fdivs     f1, f2, f1
      fadds     f1, f4, f1
      stfs      f1, 0x24(r29)
      lwz       r3, -0x6514(r13)
      lfs       f1, 0x38(r29)
      lfs       f2, 0x54(r3)
      fmadds    f1, f3, f2, f1
      stfs      f1, 0x38(r29)
      lfs       f1, 0x24(r29)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0xAFC
      mr        r4, r30
      addi      r3, r1, 0x70
      bl        -0x6280
      lis       r3, 0x804B
      li        r5, 0
      subi      r0, r3, 0x5D00
      lis       r3, 0x804B
      lis       r4, 0x804E
      stw       r0, 0x8(r1)
      subi      r6, r3, 0x437C
      addi      r3, r1, 0x70
      subi      r0, r4, 0x2EB0
      cmplwi    r5, 0
      stw       r6, 0x54(r1)
      stw       r5, 0x60(r1)
      stw       r5, 0x58(r1)
      stw       r3, 0x5C(r1)
      stw       r30, 0xC(r1)
      stw       r0, 0x8(r1)
      bne-      .loc_0x478
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x58(r1)
      b         .loc_0x5E8

    .loc_0x478:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x58(r1)
      b         .loc_0x4E4

    .loc_0x490:
      lwz       r3, 0x5C(r1)
      lwz       r4, 0x58(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x60(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x5E8
      lwz       r3, 0x5C(r1)
      lwz       r4, 0x58(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x58(r1)

    .loc_0x4E4:
      lwz       r12, 0x54(r1)
      addi      r3, r1, 0x54
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x490
      b         .loc_0x5E8

    .loc_0x504:
      lwz       r3, 0x5C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      addi      r4, r1, 0x8
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x60(r1)
      cmplwi    r0, 0
      bne-      .loc_0x558
      lwz       r3, 0x5C(r1)
      lwz       r4, 0x58(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x58(r1)
      b         .loc_0x5E8

    .loc_0x558:
      lwz       r3, 0x5C(r1)
      lwz       r4, 0x58(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x58(r1)
      b         .loc_0x5CC

    .loc_0x578:
      lwz       r3, 0x5C(r1)
      lwz       r4, 0x58(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x60(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x5E8
      lwz       r3, 0x5C(r1)
      lwz       r4, 0x58(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x58(r1)

    .loc_0x5CC:
      lwz       r12, 0x54(r1)
      addi      r3, r1, 0x54
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x578

    .loc_0x5E8:
      lwz       r3, 0x5C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x58(r1)
      cmplw     r4, r3
      bne+      .loc_0x504
      lis       r4, 0x804B
      lis       r3, 0x804B
      subi      r4, r4, 0x5D00
      li        r0, 0
      stw       r4, 0x48(r1)
      addi      r3, r3, 0x2920
      addi      r4, r1, 0x48
      stw       r30, 0x4C(r1)
      stw       r3, 0x48(r1)
      stb       r0, 0x50(r1)
      lwz       r3, 0x10(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl
      lwz       r0, -0x6A50(r13)
      cmplwi    r0, 0
      beq-      .loc_0x694
      bl        0x7851C
      bl        0x78518
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,24,31
      subfic    r0, r0, 0x3
      cntlzw    r0, r0
      rlwinm.   r0,r0,27,24,31
      bne-      .loc_0x694
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl

    .loc_0x694:
      lwz       r3, -0x6C18(r13)
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0x994
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,24,31
      cmplwi    r0, 0x3
      beq-      .loc_0x6E4
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,24,31
      cmplwi    r0, 0x4
      bne-      .loc_0x994

    .loc_0x6E4:
      bl        0x78488
      cmpwi     r3, 0x1
      bgt-      .loc_0x994
      lwz       r3, -0x6C18(r13)
      lbz       r0, 0x48(r3)
      cmplwi    r0, 0
      beq-      .loc_0x8D8
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x720
      addi      r3, r31, 0x128
      addi      r5, r31, 0x28
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x17BBA0

    .loc_0x720:
      lwz       r28, -0x6780(r13)
      cmplwi    r28, 0
      bne-      .loc_0x740
      addi      r3, r31, 0x128
      addi      r5, r31, 0x28
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x17BBC0

    .loc_0x740:
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0x760
      addi      r3, r31, 0x134
      addi      r5, r31, 0x28
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x17BBE0

    .loc_0x760:
      lwz       r3, 0x4(r28)
      lwz       r28, 0x4(r3)
      cmplwi    r28, 0
      bne-      .loc_0x784
      addi      r3, r31, 0x134
      addi      r5, r31, 0x140
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x17BC04

    .loc_0x784:
      lwz       r12, 0x0(r28)
      mr        r3, r28
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x7B4
      addi      r3, r31, 0x164
      addi      r5, r31, 0x28
      li        r4, 0x177
      crclr     6, 0x6
      bl        -0x17BC34

    .loc_0x7B4:
      mr        r3, r28
      bl        0x2C3E78
      lwz       r4, -0x6C18(r13)
      li        r3, 0
      lwz       r0, 0x44(r4)
      cmpwi     r0, 0x2
      beq-      .loc_0x7D8
      cmpwi     r0, 0x3
      bne-      .loc_0x7DC

    .loc_0x7D8:
      li        r3, 0x1

    .loc_0x7DC:
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x994
      lwz       r3, 0x35C(r30)
      subi      r4, r2, 0x51CC
      lwz       r3, 0x40(r3)
      bl        -0xDBBF4
      cmpwi     r3, 0
      beq-      .loc_0x994
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x81C
      addi      r3, r31, 0x128
      addi      r5, r31, 0x28
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x17BC9C

    .loc_0x81C:
      lwz       r28, -0x6780(r13)
      cmplwi    r28, 0
      bne-      .loc_0x83C
      addi      r3, r31, 0x128
      addi      r5, r31, 0x28
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x17BCBC

    .loc_0x83C:
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0x85C
      addi      r3, r31, 0x134
      addi      r5, r31, 0x28
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x17BCDC

    .loc_0x85C:
      lwz       r3, 0x4(r28)
      lwz       r28, 0x4(r3)
      cmplwi    r28, 0
      bne-      .loc_0x880
      addi      r3, r31, 0x134
      addi      r5, r31, 0x140
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x17BD00

    .loc_0x880:
      lwz       r12, 0x0(r28)
      mr        r3, r28
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x8B0
      addi      r3, r31, 0x164
      addi      r5, r31, 0x28
      li        r4, 0x177
      crclr     6, 0x6
      bl        -0x17BD30

    .loc_0x8B0:
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x58(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x994
      mr        r3, r28
      bl        0x2C3DAC
      b         .loc_0x994

    .loc_0x8D8:
      lwz       r0, -0x6780(r13)
      cmplwi    r0, 0
      bne-      .loc_0x8F8
      addi      r3, r31, 0x128
      addi      r5, r31, 0x28
      li        r4, 0x1D3
      crclr     6, 0x6
      bl        -0x17BD78

    .loc_0x8F8:
      lwz       r28, -0x6780(r13)
      cmplwi    r28, 0
      bne-      .loc_0x918
      addi      r3, r31, 0x128
      addi      r5, r31, 0x28
      li        r4, 0x1DC
      crclr     6, 0x6
      bl        -0x17BD98

    .loc_0x918:
      lwz       r0, 0x4(r28)
      cmplwi    r0, 0
      bne-      .loc_0x938
      addi      r3, r31, 0x134
      addi      r5, r31, 0x28
      li        r4, 0xCF
      crclr     6, 0x6
      bl        -0x17BDB8

    .loc_0x938:
      lwz       r3, 0x4(r28)
      lwz       r28, 0x4(r3)
      cmplwi    r28, 0
      bne-      .loc_0x95C
      addi      r3, r31, 0x134
      addi      r5, r31, 0x140
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x17BDDC

    .loc_0x95C:
      lwz       r12, 0x0(r28)
      mr        r3, r28
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x98C
      addi      r3, r31, 0x164
      addi      r5, r31, 0x28
      li        r4, 0x177
      crclr     6, 0x6
      bl        -0x17BE0C

    .loc_0x98C:
      mr        r3, r28
      bl        0x2C36B4

    .loc_0x994:
      lwz       r3, -0x6C18(r13)
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0x9C0
      lbz       r0, 0x50(r1)
      cmplwi    r0, 0
      beq-      .loc_0x9C0
      addi      r3, r1, 0x70
      li        r4, -0x1
      bl        -0x6718
      b         .loc_0xAFC

    .loc_0x9C0:
      lbz       r0, 0x3C(r29)
      cmplwi    r0, 0
      bne-      .loc_0xA10
      lwz       r4, 0x35C(r30)
      subi      r3, r2, 0x519C
      lwz       r4, 0x40(r4)
      bl        -0xDBDDC
      cmpwi     r3, 0
      bne-      .loc_0xA00
      lwz       r3, 0x330(r30)
      li        r4, 0x3806
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0xA00:
      mr        r3, r30
      li        r4, 0
      bl        -0x6B3DC
      b         .loc_0xABC

    .loc_0xA10:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,24,31
      cmplwi    r0, 0x1
      beq-      .loc_0xA4C
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xA5C

    .loc_0xA4C:
      mr        r3, r30
      li        r4, 0
      bl        -0x6B428
      b         .loc_0xABC

    .loc_0xA5C:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,24,31
      cmplwi    r0, 0x4
      beq-      .loc_0xA9C
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1F4(r12)
      mtctr     r12
      bctrl
      rlwinm    r0,r3,0,24,31
      cmplwi    r0, 0x3
      bne-      .loc_0xABC

    .loc_0xA9C:
      lwz       r5, -0x6514(r13)
      addi      r3, r30, 0x41C
      lfs       f1, -0x5194(r2)
      li        r4, 0
      lfs       f0, 0x54(r5)
      fmuls     f0, f1, f0
      stfs      f0, 0x438(r30)
      bl        0x282884

    .loc_0xABC:
      lwz       r3, -0x6980(r13)
      cmplwi    r3, 0
      beq-      .loc_0xAD0
      mr        r4, r30
      bl        0x9B760

    .loc_0xAD0:
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      addi      r3, r1, 0x70
      li        r4, -0x1
      bl        -0x6858

    .loc_0xAFC:
      psq_l     f31,0xD8(r1),0,0
      lfd       f31, 0xD0(r1)
      psq_l     f30,0xC8(r1),0,0
      lfd       f30, 0xC0(r1)
      psq_l     f29,0xB8(r1),0,0
      lfd       f29, 0xB0(r1)
      lwz       r31, 0xAC(r1)
      lwz       r30, 0xA8(r1)
      lwz       r29, 0xA4(r1)
      lwz       r0, 0xE4(r1)
      lwz       r28, 0xA0(r1)
      mtlr      r0
      addi      r1, r1, 0xE0
      blr
    */
}

/*
 * --INFO--
 * Address:	801A65F8
 * Size:	000004
 */
void Game::PelletGoalState::cleanup((Game::Pellet*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801A65FC
 * Size:	000144
 */
void Game::PelletAppearState::init((Game::Pellet*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      stw       r30, 0x28(r1)
      mr        r30, r3
      mr        r3, r31
      bl        -0x407F8
      lfs       f2, -0x5190(r2)
      lfs       f1, -0x51D0(r2)
      stfs      f2, 0x168(r31)
      lfs       f0, -0x51D8(r2)
      stfs      f2, 0x16C(r31)
      stfs      f2, 0x170(r31)
      stfs      f1, 0x18(r30)
      stfs      f0, 0x10(r30)
      stfs      f0, 0x14(r30)
      bl        -0xDD0A4
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, -0x5170(r2)
      stw       r0, 0x8(r1)
      lfs       f2, -0x518C(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, -0x5188(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x51A8(r2)
      fdivs     f2, f3, f2
      fmadds    f0, f1, f2, f0
      stfs      f0, 0x28(r30)
      bl        -0xDD0DC
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x14(r1)
      lfd       f3, -0x5170(r2)
      stw       r0, 0x10(r1)
      lfs       f2, -0x518C(r2)
      lfd       f0, 0x10(r1)
      lfs       f1, -0x5180(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x5184(r2)
      fdivs     f2, f3, f2
      fmadds    f0, f1, f2, f0
      stfs      f0, 0x20(r30)
      bl        -0xDD114
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x1C(r1)
      lfd       f3, -0x5170(r2)
      stw       r0, 0x18(r1)
      lfs       f2, -0x518C(r2)
      lfd       f0, 0x18(r1)
      lfs       f1, -0x5178(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x517C(r2)
      fdivs     f2, f3, f2
      fmadds    f0, f1, f2, f0
      stfs      f0, 0x24(r30)
      bl        -0xDD14C
      xoris     r0, r3, 0x8000
      lis       r3, 0x4330
      stw       r0, 0x24(r1)
      li        r0, 0
      lfd       f3, -0x5170(r2)
      stw       r3, 0x20(r1)
      lfs       f1, -0x518C(r2)
      lfd       f2, 0x20(r1)
      lfs       f0, -0x5174(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      stfs      f0, 0x1C(r30)
      stb       r0, 0x2C(r30)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	801A6740
 * Size:	000240
 */
void Game::PelletAppearState::exec((Game::Pellet*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stfd      f31, 0x50(r1)
      psq_st    f31,0x58(r1),0,0
      stfd      f30, 0x40(r1)
      psq_st    f30,0x48(r1),0,0
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      mr        r30, r3
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x10(r30)
      mr        r31, r4
      lfs       f1, 0x1C(r30)
      lfs       f31, 0x54(r3)
      fcmpo     cr0, f2, f1
      lfs       f30, -0x51D8(r2)
      blt-      .loc_0x1F0
      lfs       f3, 0x20(r30)
      fadds     f0, f1, f3
      fcmpo     cr0, f2, f0
      bge-      .loc_0x68
      fsubs     f0, f2, f1
      fdivs     f0, f0, f3
      fmuls     f30, f0, f0
      b         .loc_0x1F0

    .loc_0x68:
      lbz       r0, 0x2C(r30)
      cmplwi    r0, 0
      bne-      .loc_0xFC
      lis       r3, 0x804B
      lfs       f0, 0x144(r31)
      lfs       f1, 0x154(r31)
      subi      r0, r3, 0x5808
      lfs       f2, 0x164(r31)
      lis       r3, 0x804E
      addi      r5, r3, 0x6A78
      lis       r4, 0x804B
      stw       r0, 0x18(r1)
      lis       r3, 0x804B
      subi      r0, r3, 0x5814
      li        r7, 0x1C1
      li        r6, 0
      stw       r5, 0x18(r1)
      addi      r5, r4, 0x50F0
      addi      r3, r1, 0x18
      sth       r7, 0x1C(r1)
      addi      r4, r1, 0x8
      stw       r6, 0x20(r1)
      stw       r5, 0x18(r1)
      stw       r0, 0x8(r1)
      stfs      f0, 0xC(r1)
      stfs      f1, 0x10(r1)
      stfs      f2, 0x14(r1)
      bl        0x208770
      lwz       r3, 0x330(r31)
      li        r4, 0x3840
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      stb       r0, 0x2C(r30)

    .loc_0xFC:
      lfs       f1, 0x28(r30)
      lfs       f0, 0x14(r30)
      fmadds    f1, f1, f31, f0
      bl        0x26B388
      stfs      f1, 0x14(r30)
      lfs       f2, -0x5168(r2)
      lfs       f1, 0x18(r30)
      lfs       f3, 0x14(r30)
      lfs       f0, -0x51D8(r2)
      fmuls     f5, f2, f1
      fcmpo     cr0, f3, f0
      bge-      .loc_0x158
      lfs       f0, -0x51B4(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f4, f0
      b         .loc_0x17C

    .loc_0x158:
      lfs       f0, -0x51B0(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f4, r3, r0

    .loc_0x17C:
      lfs       f1, 0x1C(r30)
      lfs       f0, 0x20(r30)
      lfs       f3, -0x51D0(r2)
      fadds     f1, f1, f0
      lfs       f2, 0x10(r30)
      lfs       f0, 0x24(r30)
      fmadds    f30, f5, f4, f3
      fsubs     f1, f2, f1
      fdivs     f0, f1, f0
      fnmsubs   f0, f0, f0, f3
      stfs      f0, 0x18(r30)
      lfs       f1, 0x1C(r30)
      lfs       f0, 0x20(r30)
      lfs       f2, 0x24(r30)
      fadds     f0, f1, f0
      lfs       f1, 0x10(r30)
      fadds     f0, f2, f0
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x1F0
      mr        r3, r30
      fmr       f30, f3
      lwz       r12, 0x0(r30)
      mr        r4, r31
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x1F0:
      lfs       f1, 0x10(r30)
      lfs       f0, -0x51D8(r2)
      fadds     f1, f1, f31
      fcmpu     cr0, f0, f30
      stfs      f1, 0x10(r30)
      bne-      .loc_0x20C
      lfs       f30, -0x5190(r2)

    .loc_0x20C:
      stfs      f30, 0x168(r31)
      stfs      f30, 0x16C(r31)
      stfs      f30, 0x170(r31)
      psq_l     f31,0x58(r1),0,0
      lfd       f31, 0x50(r1)
      psq_l     f30,0x48(r1),0,0
      lfd       f30, 0x40(r1)
      lwz       r31, 0x3C(r1)
      lwz       r0, 0x64(r1)
      lwz       r30, 0x38(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	801A6980
 * Size:	000004
 */
void Game::PelletAppearState::cleanup((Game::Pellet*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801A6984
 * Size:	000130
 */
void Game::PelletScaleAppearState::init((Game::Pellet*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      stw       r30, 0x28(r1)
      mr        r30, r3
      mr        r3, r31
      bl        -0x40B80
      lfs       f2, -0x5190(r2)
      lfs       f1, -0x51D0(r2)
      stfs      f2, 0x168(r31)
      lfs       f0, -0x51D8(r2)
      stfs      f2, 0x16C(r31)
      stfs      f2, 0x170(r31)
      stfs      f1, 0x18(r30)
      stfs      f0, 0x10(r30)
      stfs      f0, 0x14(r30)
      bl        -0xDD42C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, -0x5170(r2)
      stw       r0, 0x8(r1)
      lfs       f2, -0x518C(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, -0x5188(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x5164(r2)
      fdivs     f2, f3, f2
      fmadds    f0, f1, f2, f0
      stfs      f0, 0x28(r30)
      bl        -0xDD464
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x14(r1)
      lfd       f3, -0x5170(r2)
      stw       r0, 0x10(r1)
      lfs       f2, -0x518C(r2)
      lfd       f0, 0x10(r1)
      lfs       f1, -0x515C(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x5160(r2)
      fdivs     f2, f3, f2
      fmadds    f0, f1, f2, f0
      stfs      f0, 0x20(r30)
      bl        -0xDD49C
      xoris     r0, r3, 0x8000
      lis       r4, 0x4330
      stw       r0, 0x1C(r1)
      li        r0, 0
      lfd       f1, -0x5170(r2)
      mr        r3, r31
      stw       r4, 0x18(r1)
      li        r4, 0
      lfs       f3, -0x518C(r2)
      lfd       f0, 0x18(r1)
      lfs       f2, -0x5168(r2)
      fsubs     f4, f0, f1
      lfs       f1, -0x5158(r2)
      lfs       f0, -0x51D8(r2)
      fdivs     f3, f4, f3
      fmadds    f1, f2, f3, f1
      stfs      f1, 0x24(r30)
      stfs      f0, 0x1C(r30)
      stb       r0, 0x2C(r30)
      lwz       r12, 0x0(r31)
      lwz       r12, 0xB4(r12)
      mtctr     r12
      bctrl
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
 * Address:	801A6AB4
 * Size:	0001BC
 */
void Game::PelletScaleAppearState::exec((Game::Pellet*))
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
      mr        r30, r3
      lwz       r3, -0x6514(r13)
      lfs       f2, 0x10(r30)
      mr        r31, r4
      lfs       f1, 0x1C(r30)
      lfs       f31, 0x54(r3)
      fcmpo     cr0, f2, f1
      lfs       f30, -0x51D8(r2)
      blt-      .loc_0x16C
      lfs       f3, 0x20(r30)
      fadds     f0, f1, f3
      fcmpo     cr0, f2, f0
      bge-      .loc_0x64
      fsubs     f0, f2, f1
      fdivs     f30, f0, f3
      b         .loc_0x16C

    .loc_0x64:
      lbz       r0, 0x2C(r30)
      cmplwi    r0, 0
      bne-      .loc_0x78
      li        r0, 0x1
      stb       r0, 0x2C(r30)

    .loc_0x78:
      lfs       f1, 0x28(r30)
      lfs       f0, 0x14(r30)
      fmadds    f1, f1, f31, f0
      bl        0x26B098
      stfs      f1, 0x14(r30)
      lfs       f2, -0x5160(r2)
      lfs       f1, 0x18(r30)
      lfs       f3, 0x14(r30)
      lfs       f0, -0x51D8(r2)
      fmuls     f5, f2, f1
      fcmpo     cr0, f3, f0
      bge-      .loc_0xD4
      lfs       f0, -0x51B4(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f4, f0
      b         .loc_0xF8

    .loc_0xD4:
      lfs       f0, -0x51B0(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f4, r3, r0

    .loc_0xF8:
      lfs       f1, 0x1C(r30)
      lfs       f0, 0x20(r30)
      lfs       f3, -0x51D0(r2)
      fadds     f1, f1, f0
      lfs       f2, 0x10(r30)
      lfs       f0, 0x24(r30)
      fmadds    f30, f5, f4, f3
      fsubs     f1, f2, f1
      fdivs     f0, f1, f0
      fnmsubs   f0, f0, f0, f3
      stfs      f0, 0x18(r30)
      lfs       f1, 0x1C(r30)
      lfs       f0, 0x20(r30)
      lfs       f2, 0x24(r30)
      fadds     f0, f1, f0
      lfs       f1, 0x10(r30)
      fadds     f0, f2, f0
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x16C
      mr        r3, r30
      fmr       f30, f3
      lwz       r12, 0x0(r30)
      mr        r4, r31
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x16C:
      lfs       f1, 0x10(r30)
      lfs       f0, -0x51D8(r2)
      fadds     f1, f1, f31
      fcmpu     cr0, f0, f30
      stfs      f1, 0x10(r30)
      bne-      .loc_0x188
      lfs       f30, -0x5190(r2)

    .loc_0x188:
      stfs      f30, 0x168(r31)
      stfs      f30, 0x16C(r31)
      stfs      f30, 0x170(r31)
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
 * Address:	801A6C70
 * Size:	000034
 */
void Game::PelletScaleAppearState::cleanup((Game::Pellet*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      li        r4, 0x1
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xB4(r12)
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
 * Address:	801A6CA4
 * Size:	000024
 */
void Game::PelletBuryState::init((Game::Pellet*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      bl        -0x40E90
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801A6CC8
 * Size:	000004
 */
void Game::PelletBuryState::exec((Game::Pellet*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801A6CCC
 * Size:	000004
 */
void Game::PelletBuryState::cleanup((Game::Pellet*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801A6CD0
 * Size:	000038
 */
void Game::PelletZukanState::init((Game::Pellet*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      mr        r3, r4
      bl        -0x40EC4
      lfs       f0, -0x51D8(r2)
      stfs      f0, 0x10(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801A6D08
 * Size:	000094
 */
void Game::PelletZukanState::exec((Game::Pellet*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lfs       f3, -0x5154(r2)
      stw       r0, 0x34(r1)
      lfs       f0, -0x51A8(r2)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      lwz       r5, -0x6514(r13)
      lfs       f1, 0x10(r3)
      lfs       f2, 0x54(r5)
      fmadds    f1, f3, f2, f1
      stfs      f1, 0x10(r3)
      lfs       f1, 0x10(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x44
      lfs       f0, -0x51D8(r2)
      stfs      f0, 0x10(r3)

    .loc_0x44:
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      addi      r3, r31, 0x138
      lfs       f1, 0xC(r1)
      addi      r4, r1, 0x14
      lfs       f0, 0x10(r1)
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      bl        0x281ABC
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	801A6D9C
 * Size:	000004
 */
void Game::PelletZukanState::cleanup((Game::Pellet*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801A6DA0
 * Size:	000024
 */
void Game::PelletUpState::init((Game::Pellet*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      bl        -0x40F8C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801A6DC4
 * Size:	000004
 */
void Game::PelletUpState::exec((Game::Pellet*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801A6DC8
 * Size:	000004
 */
void Game::PelletUpState::cleanup((Game::Pellet*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801A6DCC
 * Size:	0000F0
 */
void Game::PelletReturnState::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x804B
      lis       r5, 0x804B
      stw       r0, 0x14(r1)
      addi      r0, r5, 0x51E0
      li        r6, 0x8
      li        r5, 0
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r4, r4, 0x51B4
      lis       r3, 0x804B
      stw       r30, 0x8(r1)
      stw       r0, 0x0(r31)
      addi      r0, r3, 0x5014
      stw       r6, 0x4(r31)
      stw       r5, 0x8(r31)
      stw       r4, 0x0(r31)
      stw       r0, 0x0(r31)
      stw       r5, 0x38(r31)
      stw       r5, 0x3C(r31)
      lwz       r3, -0x6C18(r13)
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x1
      bne-      .loc_0xD4
      li        r3, 0x30
      bl        -0x182F90
      mr.       r30, r3
      beq-      .loc_0x98
      li        r4, 0
      li        r5, 0x123
      li        r6, 0x123
      bl        0x209650
      lis       r3, 0x804E
      li        r0, 0
      addi      r3, r3, 0x72E8
      stw       r3, 0x0(r30)
      stw       r0, 0x2C(r30)

    .loc_0x98:
      stw       r30, 0x38(r31)
      li        r3, 0x30
      bl        -0x182FC8
      mr.       r30, r3
      beq-      .loc_0xD0
      li        r4, 0
      li        r5, 0x124
      li        r6, 0x125
      bl        0x209618
      lis       r3, 0x804E
      li        r0, 0
      addi      r3, r3, 0x72CC
      stw       r3, 0x0(r30)
      stw       r0, 0x2C(r30)

    .loc_0xD0:
      stw       r30, 0x3C(r31)

    .loc_0xD4:
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
 * Address:	801A6EBC
 * Size:	000318
 */
void Game::PelletReturnState::init((Game::Pellet*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      cmplwi    r5, 0
      stw       r0, 0x54(r1)
      li        r0, 0
      stw       r31, 0x4C(r1)
      li        r31, 0
      stw       r30, 0x48(r1)
      mr        r30, r4
      stw       r29, 0x44(r1)
      mr        r29, r3
      stw       r0, 0x1C(r3)
      beq-      .loc_0x5C
      lfs       f0, 0x0(r5)
      stfs      f0, 0x20(r29)
      lfs       f0, 0x4(r5)
      stfs      f0, 0x24(r29)
      lfs       f0, 0x8(r5)
      stfs      f0, 0x28(r29)
      bl        0x440
      cmpwi     r3, 0x1
      bne-      .loc_0x5C
      li        r31, 0x1

    .loc_0x5C:
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0x88
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      b         .loc_0xF8

    .loc_0x88:
      lwz       r3, 0x38(r29)
      cmplwi    r3, 0
      beq-      .loc_0xF8
      lwz       r0, 0x3C(r29)
      cmplwi    r0, 0
      beq-      .loc_0xF8
      li        r0, 0
      addi      r4, r30, 0x138
      stw       r0, 0x2C(r3)
      lwz       r3, 0x3C(r29)
      stw       r0, 0x2C(r3)
      lwz       r3, 0x38(r29)
      bl        0x20962C
      lwz       r3, 0x3C(r29)
      addi      r4, r30, 0x138
      bl        0x209620
      lwz       r3, 0x38(r29)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x3C(r29)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0xF8:
      lfs       f1, -0x51D8(r2)
      li        r0, 0
      lfs       f0, -0x51D0(r2)
      mr        r3, r30
      stfs      f1, 0x10(r29)
      stfs      f0, 0x14(r29)
      stb       r0, 0x18(r29)
      stb       r0, 0x19(r29)
      bl        -0x7438
      mr        r3, r30
      bl        -0x7BB8
      mr        r4, r30
      addi      r3, r1, 0x18
      bl        -0x738C
      li        r0, 0
      lis       r3, 0x804B
      subi      r4, r3, 0x437C
      addi      r3, r1, 0x18
      cmplwi    r0, 0
      stw       r4, 0x8(r1)
      stw       r0, 0x14(r1)
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x170
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x2D0

    .loc_0x170:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1DC

    .loc_0x188:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2D0
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x1DC:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x188
      b         .loc_0x2D0

    .loc_0x1FC:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      bl        -0x7CA8
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x240
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x2D0

    .loc_0x240:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x2B4

    .loc_0x260:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2D0
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x2B4:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x260

    .loc_0x2D0:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0x1FC
      addi      r3, r1, 0x18
      li        r4, -0x1
      bl        -0x7450
      lwz       r0, 0x54(r1)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      lwz       r29, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000280
 */
void Game::PelletReturnState::flick((Game::Pellet*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A71D4
 * Size:	0000D8
 */
void Game::PelletReturnState::exec((Game::Pellet*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      lhz       r0, 0x1A(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0x60
      bge-      .loc_0x40
      cmpwi     r0, 0
      bge-      .loc_0x4C
      b         .loc_0x94

    .loc_0x40:
      cmpwi     r0, 0x3
      bge-      .loc_0x94
      b         .loc_0x84

    .loc_0x4C:
      bl        0x2DC
      cmpwi     r3, 0x2
      bne-      .loc_0x94
      li        r31, 0x1
      b         .loc_0x94

    .loc_0x60:
      bl        0x358
      cmpwi     r3, 0x2
      bne-      .loc_0x74
      li        r31, 0x1
      b         .loc_0x94

    .loc_0x74:
      cmpwi     r3, 0x1
      bne-      .loc_0x94
      li        r31, 0x1
      b         .loc_0x94

    .loc_0x84:
      bl        0xB8C
      cmpwi     r3, 0x2
      bne-      .loc_0x94
      li        r31, 0x1

    .loc_0x94:
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0xBC
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x0(r29)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0xBC:
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
 * Address:	801A72AC
 * Size:	00009C
 */
void Game::PelletReturnState::cleanup((Game::Pellet*))
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
      lwz       r3, 0x38(r3)
      cmplwi    r3, 0
      beq-      .loc_0x58
      lwz       r0, 0x3C(r30)
      cmplwi    r0, 0
      beq-      .loc_0x58
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x3C(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl

    .loc_0x58:
      lfs       f0, -0x51D0(r2)
      stfs      f0, 0x168(r31)
      stfs      f0, 0x16C(r31)
      stfs      f0, 0x170(r31)
      lwz       r4, 0x1C(r30)
      cmplwi    r4, 0
      beq-      .loc_0x84
      lwz       r3, -0x6C80(r13)
      bl        -0x38C4
      li        r0, 0
      stw       r0, 0x1C(r30)

    .loc_0x84:
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
 * Address:	801A7348
 * Size:	0001B4
 */
void Game::PelletReturnState::initPathfinding((Game::Pellet*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stw       r31, 0x5C(r1)
      mr        r31, r3
      addi      r3, r1, 0x10
      stw       r30, 0x58(r1)
      mr        r30, r4
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x10(r1)
      li        r4, 0
      lfs       f1, 0x14(r1)
      li        r0, -0x1
      lfs       f0, 0x18(r1)
      mr        r3, r30
      stw       r4, 0x50(r1)
      stw       r4, 0x4C(r1)
      stb       r4, 0x40(r1)
      sth       r0, 0x48(r1)
      stw       r4, 0x44(r1)
      stfs      f2, 0x34(r1)
      stfs      f1, 0x38(r1)
      stfs      f0, 0x3C(r1)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x88
      li        r0, 0x1
      stb       r0, 0x40(r1)

    .loc_0x88:
      lwz       r3, -0x6CF8(r13)
      addi      r4, r1, 0x34
      lwz       r3, 0x8(r3)
      bl        -0x34070
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xC0
      lwz       r3, 0x4C(r1)
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0xB8
      mr        r30, r3
      b         .loc_0x100

    .loc_0xB8:
      lwz       r30, 0x50(r1)
      b         .loc_0x100

    .loc_0xC0:
      lwz       r3, -0x6CF8(r13)
      addi      r4, r1, 0x34
      lwz       r3, 0x8(r3)
      bl        -0x340A8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xF8
      lwz       r3, 0x4C(r1)
      lbz       r0, 0x34(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0xF0
      lwz       r30, 0x50(r1)
      b         .loc_0x100

    .loc_0xF0:
      mr        r30, r3
      b         .loc_0x100

    .loc_0xF8:
      li        r3, 0x2
      b         .loc_0x19C

    .loc_0x100:
      lwz       r4, 0x1C(r31)
      cmplwi    r4, 0
      beq-      .loc_0x11C
      lwz       r3, -0x6C80(r13)
      bl        -0x39F8
      li        r0, 0
      stw       r0, 0x1C(r31)

    .loc_0x11C:
      lfs       f1, 0x20(r31)
      li        r0, 0
      lfs       f0, -0x5148(r2)
      addi      r4, r1, 0x1C
      stfs      f1, 0x1C(r1)
      lwz       r3, -0x6CF8(r13)
      lfs       f1, 0x24(r31)
      stfs      f1, 0x20(r1)
      lfs       f1, 0x28(r31)
      stfs      f1, 0x24(r1)
      stw       r0, 0x28(r1)
      stb       r0, 0x2C(r1)
      stfs      f0, 0x30(r1)
      lwz       r3, 0x8(r3)
      bl        -0x344D8
      cmplwi    r3, 0
      bne-      .loc_0x168
      li        r3, 0x2
      b         .loc_0x19C

    .loc_0x168:
      lha       r6, 0x36(r3)
      li        r0, 0x1
      lha       r5, 0x36(r30)
      addi      r4, r1, 0x8
      lwz       r3, -0x6C80(r13)
      sth       r5, 0x8(r1)
      sth       r6, 0xA(r1)
      stb       r0, 0xC(r1)
      bl        -0x3C7C
      stw       r3, 0x1C(r31)
      li        r0, 0
      li        r3, 0x1
      sth       r0, 0x1A(r31)

    .loc_0x19C:
      lwz       r0, 0x64(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	801A74FC
 * Size:	000090
 */
void Game::PelletReturnState::execPathfinding((Game::Pellet*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r4, 0x1C(r3)
      cmplwi    r4, 0
      bne-      .loc_0x28
      li        r3, 0x2
      b         .loc_0x7C

    .loc_0x28:
      lwz       r3, -0x6C80(r13)
      bl        -0x3A58
      cmpwi     r3, 0x1
      beq-      .loc_0x70
      bge-      .loc_0x78
      cmpwi     r3, 0
      bge-      .loc_0x48
      b         .loc_0x78

    .loc_0x48:
      lwz       r3, -0x6C80(r13)
      addi      r5, r31, 0x2C
      lwz       r4, 0x1C(r31)
      bl        -0x3BB0
      stw       r3, 0x34(r31)
      li        r0, 0x1
      lwz       r3, 0x2C(r31)
      stw       r3, 0x30(r31)
      sth       r0, 0x1A(r31)
      b         .loc_0x78

    .loc_0x70:
      li        r3, 0x2
      b         .loc_0x7C

    .loc_0x78:
      li        r3, 0

    .loc_0x7C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801A758C
 * Size:	000858
 */
void Game::PelletReturnState::execMove((Game::Pellet*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x150(r1)
      mflr      r0
      stw       r0, 0x154(r1)
      stfd      f31, 0x140(r1)
      psq_st    f31,0x148(r1),0,0
      stfd      f30, 0x130(r1)
      psq_st    f30,0x138(r1),0,0
      stfd      f29, 0x120(r1)
      psq_st    f29,0x128(r1),0,0
      stfd      f28, 0x110(r1)
      psq_st    f28,0x118(r1),0,0
      stfd      f27, 0x100(r1)
      psq_st    f27,0x108(r1),0,0
      stfd      f26, 0xF0(r1)
      psq_st    f26,0xF8(r1),0,0
      stfd      f25, 0xE0(r1)
      psq_st    f25,0xE8(r1),0,0
      stw       r31, 0xDC(r1)
      stw       r30, 0xD8(r1)
      stw       r29, 0xD4(r1)
      stw       r28, 0xD0(r1)
      lwz       r6, -0x6CF8(r13)
      mr        r30, r3
      lwz       r5, 0x2C(r3)
      mr        r31, r4
      lwz       r3, 0x8(r6)
      lha       r4, 0x20(r5)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      lfs       f25, 0x4C(r3)
      lwz       r12, 0x0(r31)
      lfs       f26, 0x54(r3)
      addi      r3, r1, 0x3C
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x44(r1)
      lfs       f0, 0x3C(r1)
      fsubs     f28, f26, f1
      lfs       f29, -0x51D8(r2)
      fsubs     f30, f25, f0
      fmuls     f1, f28, f28
      fmadds    f0, f30, f30, f29
      fadds     f1, f1, f0
      fcmpo     cr0, f1, f29
      ble-      .loc_0xD4
      ble-      .loc_0xD8
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0xD8

    .loc_0xD4:
      fmr       f1, f29

    .loc_0xD8:
      lfs       f0, -0x51D8(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xFC
      lfs       f0, -0x51D0(r2)
      fdivs     f0, f0, f1
      fmuls     f30, f30, f0
      fmuls     f29, f29, f0
      fmuls     f28, f28, f0
      b         .loc_0x100

    .loc_0xFC:
      fmr       f1, f0

    .loc_0x100:
      lfs       f0, -0x5144(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x14C
      lwz       r3, 0x2C(r30)
      lwz       r0, 0xC(r3)
      stw       r0, 0x2C(r30)
      lwz       r0, 0x2C(r30)
      cmplwi    r0, 0
      bne-      .loc_0x14C
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      li        r3, 0x1
      b         .loc_0x800

    .loc_0x14C:
      lfs       f1, 0x10(r30)
      lfs       f0, -0x5160(r2)
      lwz       r3, -0x6514(r13)
      fcmpo     cr0, f1, f0
      lfs       f31, 0x54(r3)
      bge-      .loc_0x1E8
      fdivs     f0, f1, f0
      lfs       f1, -0x5154(r2)
      lfs       f2, -0x5140(r2)
      lfs       f27, -0x51D8(r2)
      fmuls     f0, f1, f0
      fmuls     f1, f2, f0
      fcmpo     cr0, f1, f27
      bge-      .loc_0x1B0
      lfs       f0, -0x51B4(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0xB0(r1)
      lwz       r0, 0xB4(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f2, f0
      b         .loc_0x1D4

    .loc_0x1B0:
      lfs       f0, -0x51B0(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0xB8(r1)
      lwz       r0, 0xBC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r3, r0

    .loc_0x1D4:
      lfs       f1, -0x5184(r2)
      lfs       f0, -0x51D0(r2)
      fnmsubs   f0, f1, f2, f0
      stfs      f0, 0x14(r30)
      b         .loc_0x6A8

    .loc_0x1E8:
      lfs       f0, -0x513C(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x530
      lbz       r0, 0x19(r30)
      cmplwi    r0, 0
      bne-      .loc_0x440
      lwz       r3, 0x330(r31)
      li        r4, 0x5826
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      mr        r4, r31
      stb       r0, 0x19(r30)
      addi      r3, r1, 0x80
      bl        -0x7B5C
      li        r0, 0
      lis       r3, 0x804B
      subi      r4, r3, 0x437C
      addi      r3, r1, 0x80
      cmplwi    r0, 0
      stw       r4, 0x8(r1)
      stw       r0, 0x14(r1)
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x270
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x2F8

    .loc_0x270:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x2DC

    .loc_0x288:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2F8
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x2DC:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x288

    .loc_0x2F8:
      lis       r4, 0x804B
      lis       r3, 0x804B
      lfs       f25, -0x5150(r2)
      subi      r28, r4, 0x5D00
      lfs       f26, -0x51D8(r2)
      addi      r29, r3, 0x4E04
      lfs       f27, -0x514C(r2)
      b         .loc_0x414

    .loc_0x318:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      stw       r28, 0x9C(r1)
      addi      r4, r1, 0x9C
      stw       r31, 0xA0(r1)
      stw       r29, 0x9C(r1)
      stfs      f25, 0xA4(r1)
      stfs      f26, 0xA8(r1)
      stfs      f27, 0xAC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x384
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x414

    .loc_0x384:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x3F8

    .loc_0x3A4:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x414
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x3F8:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x3A4

    .loc_0x414:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0x318
      addi      r3, r1, 0x80
      li        r4, -0x1
      bl        -0x7C64

    .loc_0x440:
      lfs       f2, 0x10(r30)
      lfs       f0, -0x5160(r2)
      lfs       f1, -0x513C(r2)
      fsubs     f2, f2, f0
      lfs       f3, -0x5154(r2)
      lfs       f0, -0x51D8(r2)
      fdivs     f1, f2, f1
      fmuls     f3, f3, f1
      fcmpo     cr0, f3, f0
      bge-      .loc_0x494
      lfs       f0, -0x51B4(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0xB8(r1)
      lwz       r0, 0xBC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f2, f0
      b         .loc_0x4B8

    .loc_0x494:
      lfs       f0, -0x51B0(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0xB0(r1)
      lwz       r0, 0xB4(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r3, r0

    .loc_0x4B8:
      lfs       f1, -0x5138(r2)
      lfs       f0, -0x51D8(r2)
      fmuls     f27, f1, f2
      lfs       f2, -0x5134(r2)
      fcmpo     cr0, f3, f0
      bge-      .loc_0x4FC
      lfs       f0, -0x51B4(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0xC0(r1)
      lwz       r0, 0xC4(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f1, f0
      b         .loc_0x520

    .loc_0x4FC:
      lfs       f0, -0x51B0(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0xC8(r1)
      lwz       r0, 0xCC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f1, r3, r0

    .loc_0x520:
      lfs       f0, -0x5174(r2)
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x14(r30)
      b         .loc_0x6A8

    .loc_0x530:
      lbz       r0, 0x18(r30)
      cmplwi    r0, 0
      bne-      .loc_0x60C
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x60C
      lwz       r3, 0x330(r31)
      li        r4, 0x5827
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      addi      r3, r1, 0x30
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f25, 0x30(r1)
      mr        r3, r31
      lfs       f26, 0x34(r1)
      lfs       f27, 0x38(r1)
      bl        -0x41154
      lis       r3, 0x804B
      lfs       f2, -0x5140(r2)
      subi      r0, r3, 0x5808
      lfs       f0, -0x51D0(r2)
      lis       r3, 0x804E
      stw       r0, 0x60(r1)
      fnmsubs   f26, f2, f1, f26
      addi      r0, r3, 0x6A78
      stfs      f0, 0x6C(r1)
      lis       r4, 0x804B
      lis       r3, 0x804F
      li        r6, 0x53
      subi      r7, r4, 0x5814
      li        r5, 0
      stw       r0, 0x60(r1)
      subi      r0, r3, 0x79F0
      addi      r3, r1, 0x60
      addi      r4, r1, 0x70
      stw       r7, 0x70(r1)
      stfs      f25, 0x74(r1)
      stfs      f26, 0x78(r1)
      stfs      f27, 0x7C(r1)
      sth       r6, 0x64(r1)
      stw       r5, 0x68(r1)
      stw       r0, 0x60(r1)
      stfs      f2, 0x6C(r1)
      bl        0x220BD0

    .loc_0x60C:
      li        r0, 0x1
      lfs       f0, -0x513C(r2)
      stb       r0, 0x18(r30)
      lfs       f1, -0x5130(r2)
      lfs       f2, 0x10(r30)
      lfs       f3, -0x5154(r2)
      fsubs     f2, f2, f0
      lfs       f4, -0x5140(r2)
      lfs       f0, -0x51D8(r2)
      fdivs     f1, f2, f1
      fmuls     f1, f3, f1
      fmuls     f1, f4, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x670
      lfs       f0, -0x51B4(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0xC8(r1)
      lwz       r0, 0xCC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f2, f0
      b         .loc_0x694

    .loc_0x670:
      lfs       f0, -0x51B0(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0xC0(r1)
      lwz       r0, 0xC4(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r3, r0

    .loc_0x694:
      lfs       f1, -0x5184(r2)
      lfs       f0, -0x5174(r2)
      lfs       f27, -0x51D8(r2)
      fmadds    f0, f1, f2, f0
      stfs      f0, 0x14(r30)

    .loc_0x6A8:
      lfs       f0, 0x10(r30)
      lfs       f1, -0x51D0(r2)
      fadds     f0, f0, f31
      stfs      f0, 0x10(r30)
      lfs       f0, 0x10(r30)
      fcmpo     cr0, f0, f1
      ble-      .loc_0x6DC
      lfs       f0, -0x51D8(r2)
      li        r0, 0
      stfs      f0, 0x10(r30)
      stfs      f1, 0x14(r30)
      stb       r0, 0x18(r30)
      stb       r0, 0x19(r30)

    .loc_0x6DC:
      lfs       f0, -0x512C(r2)
      mr        r4, r31
      addi      r3, r1, 0x24
      fmuls     f2, f30, f0
      fmuls     f1, f29, f0
      fmuls     f0, f28, f0
      stfs      f2, 0x54(r1)
      stfs      f1, 0x58(r1)
      stfs      f0, 0x5C(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x6C(r12)
      mtctr     r12
      bctrl
      lfs       f4, 0x28(r1)
      mr        r4, r31
      lfs       f0, 0x58(r1)
      addi      r3, r1, 0x18
      lfs       f5, 0x2C(r1)
      lfs       f1, 0x5C(r1)
      fsubs     f0, f0, f4
      lfs       f2, -0x5168(r2)
      fsubs     f1, f1, f5
      lfs       f3, 0x54(r1)
      lfs       f6, 0x24(r1)
      fmuls     f0, f0, f2
      fsubs     f3, f3, f6
      fmuls     f1, f1, f2
      fadds     f4, f4, f0
      fmuls     f0, f3, f2
      fadds     f1, f5, f1
      stfs      f4, 0x58(r1)
      fadds     f0, f6, f0
      stfs      f1, 0x5C(r1)
      stfs      f0, 0x54(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x18(r1)
      mr        r3, r31
      lfs       f1, 0x1C(r1)
      lfs       f0, 0x20(r1)
      stfs      f2, 0x48(r1)
      stfs      f1, 0x4C(r1)
      stfs      f0, 0x50(r1)
      bl        -0x41348
      lwz       r3, -0x6CF8(r13)
      addi      r4, r1, 0x48
      lfs       f0, -0x5140(r2)
      lwz       r12, 0x4(r3)
      fmuls     f25, f0, f1
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      fadds     f0, f25, f1
      mr        r3, r31
      addi      r4, r1, 0x48
      li        r5, 0
      fadds     f0, f27, f0
      stfs      f0, 0x4C(r1)
      bl        -0x6CBB0
      lfs       f1, 0x14(r30)
      mr        r3, r31
      lfs       f0, -0x51D0(r2)
      addi      r4, r1, 0x54
      stfs      f0, 0x168(r31)
      stfs      f1, 0x16C(r31)
      stfs      f0, 0x170(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl
      li        r3, 0

    .loc_0x800:
      psq_l     f31,0x148(r1),0,0
      lfd       f31, 0x140(r1)
      psq_l     f30,0x138(r1),0,0
      lfd       f30, 0x130(r1)
      psq_l     f29,0x128(r1),0,0
      lfd       f29, 0x120(r1)
      psq_l     f28,0x118(r1),0,0
      lfd       f28, 0x110(r1)
      psq_l     f27,0x108(r1),0,0
      lfd       f27, 0x100(r1)
      psq_l     f26,0xF8(r1),0,0
      lfd       f26, 0xF0(r1)
      psq_l     f25,0xE8(r1),0,0
      lfd       f25, 0xE0(r1)
      lwz       r31, 0xDC(r1)
      lwz       r30, 0xD8(r1)
      lwz       r29, 0xD4(r1)
      lwz       r0, 0x154(r1)
      lwz       r28, 0xD0(r1)
      mtlr      r0
      addi      r1, r1, 0x150
      blr
    */
}

/*
 * --INFO--
 * Address:	801A7DE4
 * Size:	000008
 */
void Game::PelletReturnState::execMoveGoal((Game::Pellet*))
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Game::PelletReturnState::getWayPont((int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A7DEC
 * Size:	000008
 */
void Game::PelletState::isBuried(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	801A7DF4
 * Size:	000008
 */
void Game::PelletState::appeared(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	801A7DFC
 * Size:	000008
 */
void Game::PelletUpState::isBuried(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	801A7E04
 * Size:	000008
 */
void Game::PelletBuryState::isBuried(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	801A7E0C
 * Size:	000008
 */
void Game::PelletScaleAppearState::appeared(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	801A7E14
 * Size:	000008
 */
void Game::PelletAppearState::appeared(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	801A7E1C
 * Size:	000008
 */
void Game::PelletNormalState::isPickable(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	801A7E24
 * Size:	000004
 */
void resume__Q24Game24FSMState<Game::Pellet> FPQ24Game6Pellet(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801A7E28
 * Size:	000004
 */
void restart__Q24Game24FSMState<Game::Pellet> FPQ24Game6Pellet(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801A7E2C
 * Size:	000064
 */
void create__Q24Game28StateMachine<Game::Pellet> Fi(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r4, 0xC(r3)
      stw       r0, 0x8(r3)
      lwz       r0, 0xC(r3)
      rlwinm    r3,r0,2,0,29
      bl        -0x183EA8
      stw       r3, 0x4(r31)
      lwz       r0, 0xC(r31)
      rlwinm    r3,r0,2,0,29
      bl        -0x183EB8
      stw       r3, 0x10(r31)
      lwz       r0, 0xC(r31)
      rlwinm    r3,r0,2,0,29
      bl        -0x183EC8
      stw       r3, 0x14(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801A7E90
 * Size:	000084
 */
void registerState__Q24Game28StateMachine<Game::Pellet>
FPQ24Game24FSMState<Game::Pellet>(void)
{
    /*
    .loc_0x0:
      lwz       r6, 0x8(r3)
      lwz       r0, 0xC(r3)
      cmpw      r6, r0
      bgelr-
      lwz       r5, 0x4(r3)
      rlwinm    r0,r6,2,0,29
      stwx      r4, r5, r0
      lwz       r5, 0x4(r4)
      cmpwi     r5, 0
      blt-      .loc_0x34
      lwz       r0, 0xC(r3)
      cmpw      r5, r0
      blt-      .loc_0x3C

    .loc_0x34:
      li        r0, 0
      b         .loc_0x40

    .loc_0x3C:
      li        r0, 0x1

    .loc_0x40:
      rlwinm.   r0,r0,0,24,31
      beqlr-
      stw       r3, 0x8(r4)
      lwz       r0, 0x8(r3)
      lwz       r6, 0x4(r4)
      lwz       r5, 0x10(r3)
      rlwinm    r0,r0,2,0,29
      stwx      r6, r5, r0
      lwz       r0, 0x4(r4)
      lwz       r5, 0x8(r3)
      lwz       r4, 0x14(r3)
      rlwinm    r0,r0,2,0,29
      stwx      r5, r4, r0
      lwz       r4, 0x8(r3)
      addi      r0, r4, 0x1
      stw       r0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801A7F14
 * Size:	000028
 */
void __sinit_pelletState_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804B
      stw       r0, -0x6C78(r13)
      stfsu     f0, 0x5008(r3)
      stfs      f0, -0x6C74(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
