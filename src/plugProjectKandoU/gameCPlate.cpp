

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
 * Address:	80194FF4
 * Size:	000014
 */
void Game::CPlate::get((void*))
{
    /*
    .loc_0x0:
      lwz       r3, 0xC0(r3)
      rlwinm    r0,r4,5,0,26
      add       r3, r3, r0
      lwz       r3, 0x18(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80195008
 * Size:	00003C
 */
void Game::CPlate::getNext((void*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      addi      r3, r31, 0x1
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80195044
 * Size:	000008
 */
void Game::CPlate::getStart(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	8019504C
 * Size:	000008
 */
void Game::CPlate::getEnd(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0xC8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80195054
 * Size:	00000C
 */
void Game::CPlate::shrink(void)
{
    /*
    .loc_0x0:
      li        r0, 0xA
      stb       r0, 0x100(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void Game::CPlate::updateShrink(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80195060
 * Size:	0001F0
 */
void Game::CPlate::__ct((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x8048
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      subi      r31, r5, 0x1058
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      mr        r0, r29
      stw       r28, 0x10(r1)
      mr        r28, r0
      bl        0x27C2FC
      lis       r3, 0x804B
      lis       r5, 0x7030
      subi      r0, r3, 0x5324
      li        r8, 0
      lis       r3, 0x804B
      stw       r0, 0x0(r28)
      addi      r0, r3, 0x4A08
      addi      r7, r29, 0xA0
      stw       r0, 0x0(r28)
      lis       r3, 0x804B
      addi      r6, r3, 0x4A34
      addi      r4, r29, 0x1C
      stb       r8, 0x18(r28)
      addi      r0, r31, 0
      addi      r3, r4, 0xC
      addi      r5, r5, 0x3030
      stw       r6, 0x0(r29)
      addi      r6, r31, 0xC
      stw       r7, 0x1C(r29)
      stw       r8, 0x20(r29)
      stw       r0, 0x24(r29)
      bl        0x27E56C
      lis       r3, 0x804B
      lis       r5, 0x7030
      subi      r0, r3, 0x5344
      addi      r4, r29, 0x1C
      stw       r0, 0x28(r29)
      addi      r3, r4, 0x34
      lfs       f0, -0x5470(r2)
      addi      r5, r5, 0x3031
      lfs       f1, -0x546C(r2)
      addi      r6, r31, 0x1C
      stfs      f0, 0x40(r29)
      lfs       f0, -0x5468(r2)
      stfs      f1, 0x48(r29)
      stfs      f0, 0x4C(r29)
      bl        0x27E530
      lis       r3, 0x804B
      lis       r5, 0x7030
      subi      r0, r3, 0x5344
      addi      r4, r29, 0x1C
      stw       r0, 0x50(r29)
      addi      r3, r4, 0x5C
      lfs       f0, -0x5464(r2)
      addi      r5, r5, 0x3032
      lfs       f1, -0x5460(r2)
      addi      r6, r31, 0x2C
      stfs      f0, 0x68(r29)
      lfs       f0, -0x545C(r2)
      stfs      f1, 0x70(r29)
      stfs      f0, 0x74(r29)
      bl        0x27E4F4
      lis       r3, 0x804B
      lfs       f1, -0x5458(r2)
      subi      r0, r3, 0x5344
      lfs       f0, -0x5454(r2)
      stw       r0, 0x78(r29)
      lfs       f2, -0x5450(r2)
      stfs      f1, 0x90(r29)
      lfs       f1, -0x5460(r2)
      stfs      f0, 0x98(r29)
      lfs       f0, -0x546C(r2)
      stfs      f2, 0x9C(r29)
      stw       r30, 0xC4(r29)
      stfs      f1, 0xB4(r29)
      stfs      f1, 0xB0(r29)
      stfs      f0, 0xCC(r29)
      stfs      f0, 0xD0(r29)
      stfs      f0, 0xD4(r29)
      stfs      f0, 0xF0(r29)
      lwz       r30, 0xC4(r29)
      rlwinm    r3,r30,5,0,26
      addi      r3, r3, 0x10
      bl        -0x171210
      lis       r4, 0x8019
      mr        r7, r30
      addi      r4, r4, 0x5250
      li        r5, 0
      li        r6, 0x20
      bl        -0xD37E4
      stw       r3, 0xC0(r29)
      li        r4, 0
      li        r0, 0x1
      lfs       f0, -0x546C(r2)
      stw       r4, 0xBC(r29)
      mr        r3, r29
      stw       r4, 0xC8(r29)
      stb       r4, 0x110(r29)
      stb       r0, 0x111(r29)
      stfs      f0, 0xF4(r29)
      stfs      f0, 0xF8(r29)
      stfs      f0, 0xFC(r29)
      stw       r4, 0x104(r29)
      stw       r4, 0x108(r29)
      stw       r4, 0x10C(r29)
      stfs      f0, 0xE4(r29)
      stfs      f0, 0xE8(r29)
      stfs      f0, 0xEC(r29)
      stfs      f0, 0xD8(r29)
      stfs      f0, 0xDC(r29)
      stfs      f0, 0xE0(r29)
      stb       r4, 0x100(r29)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80195250
 * Size:	00002C
 */
void Game::CPlate::Slot::__ct(void)
{
    /*
    .loc_0x0:
      li        r0, 0
      lfs       f0, -0x546C(r2)
      stw       r0, 0x18(r3)
      stw       r0, 0x1C(r3)
      stfs      f0, 0x0(r3)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      stfs      f0, 0xC(r3)
      stfs      f0, 0x10(r3)
      stfs      f0, 0x14(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8019527C
 * Size:	000070
 */
void Container<Game::Creature>::~Container()
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
      beq-      .loc_0x54
      lis       r4, 0x804B
      addi      r0, r4, 0x4A08
      stw       r0, 0x0(r30)
      beq-      .loc_0x44
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x5324
      stw       r0, 0x0(r30)
      bl        0x27C2CC

    .loc_0x44:
      extsh.    r0, r31
      ble-      .loc_0x54
      mr        r3, r30
      bl        -0x171218

    .loc_0x54:
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
 * Address:	801952EC
 * Size:	000210
 */
void setPos__Q24Game6CPlateFR10Vector3<float> fR10Vector3<float> f(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      lfs       f4, 0xE4(r3)
      lfs       f0, 0xEC(r3)
      fmuls     f3, f4, f4
      lfs       f6, 0x40(r3)
      fmuls     f5, f0, f0
      lfs       f0, -0x546C(r2)
      fmuls     f6, f6, f2
      fadds     f2, f3, f5
      fcmpo     cr0, f2, f0
      ble-      .loc_0x44
      fmadds    f2, f4, f4, f5
      fcmpo     cr0, f2, f0
      ble-      .loc_0x48
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0x48

    .loc_0x44:
      fmr       f2, f0

    .loc_0x48:
      lfs       f0, -0x544C(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x58
      lfs       f6, -0x546C(r2)

    .loc_0x58:
      lfs       f2, 0xB0(r3)
      fmr       f4, f1
      lfs       f0, -0x546C(r2)
      stfs      f1, 0xF0(r3)
      fadds     f6, f2, f6
      fcmpo     cr0, f1, f0
      lfs       f0, 0x0(r4)
      stfs      f0, 0xCC(r3)
      lfs       f0, 0x4(r4)
      stfs      f0, 0xD0(r3)
      lfs       f0, 0x8(r4)
      stfs      f0, 0xD4(r3)
      bge-      .loc_0x90
      fneg      f4, f1

    .loc_0x90:
      lfs       f3, -0x5448(r2)
      lis       r6, 0x8050
      lfs       f0, -0x546C(r2)
      addi      r6, r6, 0x71A0
      fmuls     f2, f4, f3
      addi      r7, r6, 0x4
      fcmpo     cr0, f1, f0
      fctiwz    f0, f2
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r7, r0
      fmuls     f5, f6, f0
      bge-      .loc_0xEC
      lfs       f0, -0x5444(r2)
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r6, r0
      fneg      f0, f0
      b         .loc_0x104

    .loc_0xEC:
      fmuls     f0, f1, f3
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r6, r0

    .loc_0x104:
      fmuls     f0, f6, f0
      lfs       f2, 0xCC(r3)
      lfs       f3, -0x546C(r2)
      fmr       f6, f1
      lfs       f4, 0xD0(r3)
      fadds     f0, f2, f0
      lfs       f2, 0xD4(r3)
      fadds     f4, f4, f3
      fcmpo     cr0, f1, f3
      stfs      f0, 0xD8(r3)
      fadds     f0, f2, f5
      stfs      f4, 0xDC(r3)
      stfs      f0, 0xE0(r3)
      lfs       f0, 0x0(r5)
      stfs      f0, 0xE4(r3)
      lfs       f0, 0x4(r5)
      stfs      f0, 0xE8(r3)
      lfs       f0, 0x8(r5)
      stfs      f0, 0xEC(r3)
      bge-      .loc_0x158
      fneg      f6, f1

    .loc_0x158:
      lfs       f3, -0x5448(r2)
      lfs       f0, -0x546C(r2)
      fmuls     f2, f6, f3
      lfs       f5, 0xB8(r3)
      fcmpo     cr0, f1, f0
      fctiwz    f0, f2
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r7, r0
      fmuls     f4, f5, f0
      bge-      .loc_0x1B4
      lfs       f0, -0x5444(r2)
      lis       r5, 0x8050
      addi      r5, r5, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r5, r0
      fneg      f0, f0
      b         .loc_0x1D4

    .loc_0x1B4:
      fmuls     f0, f1, f3
      lis       r5, 0x8050
      addi      r5, r5, 0x71A0
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r5, r0

    .loc_0x1D4:
      fmuls     f0, f5, f0
      lfs       f1, 0x0(r4)
      lfs       f3, 0x8(r4)
      li        r0, 0
      lfs       f2, 0x4(r4)
      fadds     f0, f1, f0
      lfs       f1, -0x546C(r2)
      fadds     f3, f3, f4
      fadds     f1, f2, f1
      stfs      f0, 0xA4(r3)
      stfs      f1, 0xA8(r3)
      stfs      f3, 0xAC(r3)
      stb       r0, 0x111(r3)
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	801954FC
 * Size:	00020C
 */
void setPosGray__Q24Game6CPlateFR10Vector3<float> fR10Vector3<float> f(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      lfs       f4, 0xE4(r3)
      lfs       f0, 0xEC(r3)
      fmuls     f3, f4, f4
      lfs       f6, 0x40(r3)
      fmuls     f5, f0, f0
      lfs       f0, -0x546C(r2)
      fmuls     f6, f6, f2
      fadds     f2, f3, f5
      fcmpo     cr0, f2, f0
      ble-      .loc_0x44
      fmadds    f2, f4, f4, f5
      fcmpo     cr0, f2, f0
      ble-      .loc_0x48
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0x48

    .loc_0x44:
      fmr       f2, f0

    .loc_0x48:
      lfs       f0, -0x544C(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x58
      lfs       f6, -0x546C(r2)

    .loc_0x58:
      lfs       f3, 0xB0(r3)
      fmr       f4, f1
      lfs       f2, 0x0(r4)
      lfs       f0, -0x546C(r2)
      fadds     f6, f3, f6
      stfs      f2, 0xCC(r3)
      fcmpo     cr0, f1, f0
      lfs       f0, 0x4(r4)
      stfs      f0, 0xD0(r3)
      lfs       f0, 0x8(r4)
      stfs      f0, 0xD4(r3)
      bge-      .loc_0x8C
      fneg      f4, f1

    .loc_0x8C:
      lfs       f3, -0x5448(r2)
      lis       r6, 0x8050
      lfs       f0, -0x546C(r2)
      addi      r6, r6, 0x71A0
      fmuls     f2, f4, f3
      addi      r7, r6, 0x4
      fcmpo     cr0, f1, f0
      fctiwz    f0, f2
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r7, r0
      fmuls     f5, f6, f0
      bge-      .loc_0xE8
      lfs       f0, -0x5444(r2)
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r6, r0
      fneg      f0, f0
      b         .loc_0x100

    .loc_0xE8:
      fmuls     f0, f1, f3
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r6, r0

    .loc_0x100:
      fmuls     f0, f6, f0
      lfs       f2, 0xCC(r3)
      lfs       f3, -0x546C(r2)
      fmr       f6, f1
      lfs       f4, 0xD0(r3)
      fadds     f0, f2, f0
      lfs       f2, 0xD4(r3)
      fadds     f4, f4, f3
      fcmpo     cr0, f1, f3
      stfs      f0, 0xD8(r3)
      fadds     f0, f2, f5
      stfs      f4, 0xDC(r3)
      stfs      f0, 0xE0(r3)
      lfs       f0, 0x0(r5)
      stfs      f0, 0xE4(r3)
      lfs       f0, 0x4(r5)
      stfs      f0, 0xE8(r3)
      lfs       f0, 0x8(r5)
      stfs      f0, 0xEC(r3)
      bge-      .loc_0x154
      fneg      f6, f1

    .loc_0x154:
      lfs       f3, -0x5448(r2)
      lfs       f0, -0x546C(r2)
      fmuls     f2, f6, f3
      lfs       f5, 0xB8(r3)
      fcmpo     cr0, f1, f0
      fctiwz    f0, f2
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r7, r0
      fmuls     f4, f5, f0
      bge-      .loc_0x1B0
      lfs       f0, -0x5444(r2)
      lis       r5, 0x8050
      addi      r5, r5, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r5, r0
      fneg      f0, f0
      b         .loc_0x1D0

    .loc_0x1B0:
      fmuls     f0, f1, f3
      lis       r5, 0x8050
      addi      r5, r5, 0x71A0
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r5, r0

    .loc_0x1D0:
      fmuls     f0, f5, f0
      lfs       f1, 0x0(r4)
      lfs       f3, 0x8(r4)
      li        r0, 0
      lfs       f2, 0x4(r4)
      fadds     f0, f1, f0
      lfs       f1, -0x546C(r2)
      fadds     f3, f3, f4
      fadds     f1, f2, f1
      stfs      f0, 0xA4(r3)
      stfs      f1, 0xA8(r3)
      stfs      f3, 0xAC(r3)
      stb       r0, 0x111(r3)
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void setPosNeutral__Q24Game6CPlateFR10Vector3<float> fR10Vector3<float> f(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80195708
 * Size:	0000A8
 */
void Game::CPlate::getSlot((Game::Creature*, Game::SlotChangeListener*, bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      rlwinm.   r0,r6,0,24,31
      stw       r31, 0x1C(r1)
      mr        r31, r5
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      bne-      .loc_0x48
      lwz       r3, 0x2C4(r30)
      bl        -0x54294
      lwz       r0, 0xC8(r29)
      cmpwi     r0, 0x64
      blt-      .loc_0x48
      li        r3, -0x1
      b         .loc_0x8C

    .loc_0x48:
      lbz       r0, 0x2B9(r30)
      rlwinm    r0,r0,2,0,29
      add       r4, r29, r0
      lwz       r3, 0x104(r4)
      addi      r0, r3, 0x1
      stw       r0, 0x104(r4)
      lwz       r3, 0xC8(r29)
      lwz       r0, 0xC0(r29)
      rlwinm    r5,r3,5,0,26
      add       r4, r0, r5
      stw       r30, 0x18(r4)
      lwz       r0, 0xC0(r29)
      add       r4, r0, r5
      stw       r31, 0x1C(r4)
      lwz       r4, 0xC8(r29)
      addi      r0, r4, 0x1
      stw       r0, 0xC8(r29)

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
 * Address:	801957B0
 * Size:	0000B8
 */
void Game::CPlate::changeFlower((Game::Creature*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      mr        r30, r4
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x54
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0x1010
      li        r4, 0x138
      subi      r5, r5, 0x1000
      crclr     6, 0x6
      bl        -0x16B1C0

    .loc_0x54:
      lbz       r5, 0x2B9(r30)
      lis       r3, 0x5555
      addi      r0, r3, 0x5556
      addi      r4, r5, 0x2
      rlwinm    r5,r5,2,0,29
      mulhw     r3, r0, r4
      add       r6, r31, r5
      lwz       r5, 0x104(r6)
      addi      r5, r5, 0x1
      rlwinm    r0,r3,1,31,31
      stw       r5, 0x104(r6)
      add       r0, r3, r0
      mulli     r0, r0, 0x3
      sub       r0, r4, r0
      rlwinm    r0,r0,2,0,29
      add       r4, r31, r0
      lwz       r3, 0x104(r4)
      subi      r0, r3, 0x1
      stw       r0, 0x104(r4)
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
 * Address:	80195868
 * Size:	000128
 */
void Game::CPlate::releaseSlot((Game::Creature*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      rlwinm    r31,r5,5,0,26
      mr        r29, r4
      mr        r28, r3
      mr        r30, r5
      lwz       r0, 0xC0(r3)
      add       r27, r0, r31
      lwz       r0, 0x18(r27)
      cmplw     r0, r29
      beq-      .loc_0x50
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0x1010
      li        r4, 0x14B
      subi      r5, r5, 0xFF4
      crclr     6, 0x6
      bl        -0x16B274

    .loc_0x50:
      lbz       r3, 0x2B9(r29)
      li        r0, 0
      rlwinm    r3,r3,2,0,29
      add       r4, r28, r3
      lwz       r3, 0x104(r4)
      subi      r3, r3, 0x1
      stw       r3, 0x104(r4)
      stw       r0, 0x18(r27)
      lwz       r3, 0xC8(r28)
      subi      r0, r3, 0x1
      stw       r0, 0xC8(r28)
      lwz       r3, 0xBC(r28)
      subi      r0, r3, 0x1
      stw       r0, 0xBC(r28)
      lwz       r0, 0xC8(r28)
      cmpwi     r0, 0
      bge-      .loc_0xA8
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl

    .loc_0xA8:
      mr        r27, r30
      li        r29, 0
      b         .loc_0x108

    .loc_0xB4:
      lwz       r5, 0xC0(r28)
      addi      r3, r31, 0x18
      addi      r0, r31, 0x1C
      mr        r4, r27
      stwx      r29, r5, r3
      lwz       r3, 0xC0(r28)
      add       r5, r3, r31
      lwz       r3, 0x38(r5)
      stw       r3, 0x18(r5)
      lwz       r3, 0xC0(r28)
      add       r5, r3, r31
      lwz       r3, 0x3C(r5)
      stw       r3, 0x1C(r5)
      lwz       r3, 0xC0(r28)
      lwzx      r3, r3, r0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      addi      r31, r31, 0x20
      addi      r27, r27, 0x1

    .loc_0x108:
      lwz       r0, 0xC8(r28)
      cmpw      r27, r0
      blt+      .loc_0xB4
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void Game::CPlate::swapSlot((int, int))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80195990
 * Size:	000024
 */
void Game::CPlate::validSlot((int))
{
    /*
    .loc_0x0:
      cmpwi     r4, 0
      blt-      .loc_0x14
      lwz       r0, 0xC8(r3)
      cmpw      r4, r0
      blt-      .loc_0x1C

    .loc_0x14:
      li        r3, 0
      blr

    .loc_0x1C:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void getPriority(int*, int)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801959B4
 * Size:	0004A0
 */
void Game::CPlate::sortByColor((Game::Creature*, int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      lis       r6, 0x9249
      stw       r0, 0x64(r1)
      addi      r10, r6, 0x2493
      stmw      r22, 0x38(r1)
      mr        r30, r5
      mr        r29, r3
      cmpwi     r30, -0x1
      lbz       r11, 0x2B8(r4)
      lbz       r31, 0x2B9(r4)
      mulhw     r7, r10, r11
      addi      r8, r11, 0x1
      addi      r0, r11, 0x4
      addi      r6, r11, 0x2
      addi      r4, r11, 0x3
      addi      r27, r11, 0x5
      mulhw     r5, r10, r8
      add       r7, r7, r11
      addi      r24, r11, 0x6
      srawi     r9, r7, 0x2
      rlwinm    r12,r9,1,31,31
      add       r5, r5, r8
      srawi     r25, r5, 0x2
      add       r9, r9, r12
      mulhw     r7, r10, r6
      rlwinm    r26,r25,1,31,31
      add       r12, r7, r6
      add       r7, r25, r26
      srawi     r25, r12, 0x2
      mulhw     r5, r10, r4
      rlwinm    r26,r25,1,31,31
      add       r12, r5, r4
      add       r5, r25, r26
      srawi     r26, r12, 0x2
      mulhw     r3, r10, r0
      rlwinm    r28,r26,1,31,31
      mulhw     r12, r10, r27
      add       r25, r3, r0
      add       r3, r26, r28
      srawi     r25, r25, 0x2
      mulhw     r10, r10, r24
      rlwinm    r26,r25,1,31,31
      add       r12, r12, r27
      add       r28, r25, r26
      srawi     r25, r12, 0x2
      mulli     r5, r5, 0x7
      add       r10, r10, r24
      rlwinm    r26,r25,1,31,31
      sub       r5, r6, r5
      srawi     r10, r10, 0x2
      mulli     r3, r3, 0x7
      stw       r5, 0x1C(r1)
      rlwinm    r12,r10,1,31,31
      add       r25, r25, r26
      mulli     r5, r28, 0x7
      add       r10, r10, r12
      sub       r3, r4, r3
      stw       r3, 0x20(r1)
      sub       r0, r0, r5
      mulli     r9, r9, 0x7
      stw       r0, 0x24(r1)
      mulli     r7, r7, 0x7
      sub       r9, r11, r9
      stw       r9, 0x14(r1)
      mulli     r3, r25, 0x7
      sub       r7, r8, r7
      stw       r7, 0x18(r1)
      mulli     r0, r10, 0x7
      sub       r3, r27, r3
      stw       r3, 0x28(r1)
      sub       r0, r24, r0
      stw       r0, 0x2C(r1)
      beq-      .loc_0x188
      lis       r3, 0x5555
      addi      r7, r30, 0x1
      addi      r0, r3, 0x5556
      addi      r4, r30, 0x2
      mulhw     r6, r0, r7
      rlwinm    r3,r30,2,0,29
      addi      r9, r1, 0x8
      li        r5, 0
      stwx      r5, r9, r3
      li        r8, 0x1
      mulhw     r3, r0, r4
      rlwinm    r0,r6,1,31,31
      li        r5, 0x2
      add       r0, r6, r0
      mulli     r6, r0, 0x3
      rlwinm    r0,r3,1,31,31
      add       r0, r3, r0
      mulli     r0, r0, 0x3
      sub       r3, r7, r6
      rlwinm    r3,r3,2,0,29
      sub       r0, r4, r0
      stwx      r8, r9, r3
      rlwinm    r0,r0,2,0,29
      stwx      r5, r9, r0

    .loc_0x188:
      li        r25, 0
      li        r26, 0
      b         .loc_0x480

    .loc_0x194:
      li        r24, 0
      li        r27, 0
      b         .loc_0x46C

    .loc_0x1A0:
      lwz       r3, 0xC0(r29)
      addi      r0, r3, 0x18
      add       r5, r3, r27
      lwzx      r4, r26, r0
      lwz       r7, 0x18(r5)
      lbz       r6, 0x2B8(r4)
      lbz       r28, 0x2B8(r7)
      cmpw      r6, r28
      beq-      .loc_0x3A0
      lwz       r0, 0x14(r1)
      cmpw      r6, r0
      bne-      .loc_0x1D8
      li        r23, 0
      b         .loc_0x270

    .loc_0x1D8:
      lwz       r0, 0x18(r1)
      cmpw      r6, r0
      bne-      .loc_0x1EC
      li        r23, 0x1
      b         .loc_0x270

    .loc_0x1EC:
      lwz       r0, 0x1C(r1)
      cmpw      r6, r0
      bne-      .loc_0x200
      li        r23, 0x2
      b         .loc_0x270

    .loc_0x200:
      lwz       r0, 0x20(r1)
      cmpw      r6, r0
      bne-      .loc_0x214
      li        r23, 0x3
      b         .loc_0x270

    .loc_0x214:
      lwz       r0, 0x24(r1)
      cmpw      r6, r0
      bne-      .loc_0x228
      li        r23, 0x4
      b         .loc_0x270

    .loc_0x228:
      lwz       r0, 0x28(r1)
      cmpw      r6, r0
      bne-      .loc_0x23C
      li        r23, 0x5
      b         .loc_0x270

    .loc_0x23C:
      lwz       r0, 0x2C(r1)
      cmpw      r6, r0
      bne-      .loc_0x250
      li        r23, 0x6
      b         .loc_0x270

    .loc_0x250:
      lis       r3, 0x8048
      lis       r4, 0x8048
      subi      r5, r4, 0xFE8
      subi      r3, r3, 0x1010
      li        r4, 0x195
      crclr     6, 0x6
      bl        -0x16B5DC
      li        r23, 0x80

    .loc_0x270:
      lwz       r0, 0x14(r1)
      cmpw      r28, r0
      bne-      .loc_0x284
      li        r0, 0
      b         .loc_0x320

    .loc_0x284:
      lwz       r0, 0x18(r1)
      cmpw      r28, r0
      bne-      .loc_0x298
      li        r0, 0x1
      b         .loc_0x320

    .loc_0x298:
      lwz       r0, 0x1C(r1)
      cmpw      r28, r0
      bne-      .loc_0x2AC
      li        r0, 0x2
      b         .loc_0x320

    .loc_0x2AC:
      lwz       r0, 0x20(r1)
      cmpw      r28, r0
      bne-      .loc_0x2C0
      li        r0, 0x3
      b         .loc_0x320

    .loc_0x2C0:
      lwz       r0, 0x24(r1)
      cmpw      r28, r0
      bne-      .loc_0x2D4
      li        r0, 0x4
      b         .loc_0x320

    .loc_0x2D4:
      lwz       r0, 0x28(r1)
      cmpw      r28, r0
      bne-      .loc_0x2E8
      li        r0, 0x5
      b         .loc_0x320

    .loc_0x2E8:
      lwz       r0, 0x2C(r1)
      cmpw      r28, r0
      bne-      .loc_0x2FC
      li        r0, 0x6
      b         .loc_0x320

    .loc_0x2FC:
      lis       r3, 0x8048
      lis       r4, 0x8048
      subi      r5, r4, 0xFE8
      mr        r6, r28
      subi      r3, r3, 0x1010
      li        r4, 0x195
      crclr     6, 0x6
      bl        -0x16B68C
      li        r0, 0x80

    .loc_0x320:
      cmpw      r24, r25
      ble-      .loc_0x464
      cmpw      r0, r23
      bge-      .loc_0x464
      lwz       r3, 0xC0(r29)
      li        r0, 0
      mr        r4, r24
      add       r6, r3, r27
      add       r22, r3, r26
      lwz       r28, 0x18(r6)
      lwz       r23, 0x1C(r6)
      lwz       r5, 0x18(r22)
      lwz       r3, 0x1C(r22)
      stw       r0, 0x18(r6)
      stw       r5, 0x18(r6)
      stw       r3, 0x1C(r6)
      lwz       r3, 0x1C(r6)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      mr        r4, r25
      stw       r0, 0x18(r22)
      stw       r28, 0x18(r22)
      stw       r23, 0x1C(r22)
      lwz       r3, 0x1C(r22)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      b         .loc_0x464

    .loc_0x3A0:
      cmpwi     r30, -0x1
      bne-      .loc_0x3D4
      lbz       r4, 0x2B9(r4)
      lbz       r0, 0x2B9(r7)
      sub       r6, r4, r31
      sub       r4, r31, r4
      or        r6, r6, r4
      sub       r4, r0, r31
      sub       r0, r31, r0
      or        r0, r4, r0
      rlwinm    r4,r6,1,31,31
      rlwinm    r0,r0,1,31,31
      b         .loc_0x3F0

    .loc_0x3D4:
      lbz       r4, 0x2B9(r4)
      addi      r6, r1, 0x8
      lbz       r0, 0x2B9(r7)
      rlwinm    r4,r4,2,0,29
      rlwinm    r0,r0,2,0,29
      lwzx      r4, r6, r4
      lwzx      r0, r6, r0

    .loc_0x3F0:
      cmpw      r24, r25
      ble-      .loc_0x464
      cmpw      r0, r4
      bge-      .loc_0x464
      add       r28, r3, r26
      lwz       r23, 0x18(r5)
      lwz       r22, 0x1C(r5)
      li        r0, 0
      lwz       r6, 0x18(r28)
      mr        r4, r24
      lwz       r3, 0x1C(r28)
      stw       r0, 0x18(r5)
      stw       r6, 0x18(r5)
      stw       r3, 0x1C(r5)
      lwz       r3, 0x1C(r5)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      mr        r4, r25
      stw       r0, 0x18(r28)
      stw       r23, 0x18(r28)
      stw       r22, 0x1C(r28)
      lwz       r3, 0x1C(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x464:
      addi      r27, r27, 0x20
      addi      r24, r24, 0x1

    .loc_0x46C:
      lwz       r0, 0xC8(r29)
      cmpw      r24, r0
      blt+      .loc_0x1A0
      addi      r26, r26, 0x20
      addi      r25, r25, 0x1

    .loc_0x480:
      lwz       r0, 0xC8(r29)
      cmpw      r25, r0
      blt+      .loc_0x194
      lmw       r22, 0x38(r1)
      lwz       r0, 0x64(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	80195E54
 * Size:	0001E0
 */
void rearrangeSlot__Q24Game6CPlateFR10Vector3<float> fR10Vector3<float>(void)
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
      stmw      r24, 0x20(r1)
      mr        r27, r3
      lwz       r3, 0xC8(r3)
      lfs       f31, -0x546C(r2)
      mr        r28, r4
      subi      r30, r3, 0x1
      b         .loc_0x1B4

    .loc_0x38:
      mr        r29, r30
      rlwinm    r31,r30,5,0,26
      b         .loc_0x1A8

    .loc_0x44:
      lwz       r4, 0xC0(r27)
      addi      r0, r31, 0x18
      addi      r3, r1, 0x14
      lwzx      r4, r4, r0
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x4(r28)
      lfs       f0, 0x18(r1)
      lfs       f3, 0x8(r28)
      fsubs     f4, f1, f0
      lfs       f2, 0x1C(r1)
      lfs       f1, 0x0(r28)
      lfs       f0, 0x14(r1)
      fsubs     f2, f3, f2
      fmuls     f3, f4, f4
      fsubs     f0, f1, f0
      fmuls     f1, f2, f2
      fmadds    f0, f0, f0, f3
      fadds     f30, f1, f0
      fcmpo     cr0, f30, f31
      ble-      .loc_0xB0
      ble-      .loc_0xB4
      fsqrte    f0, f30
      fmuls     f30, f0, f30
      b         .loc_0xB4

    .loc_0xB0:
      fmr       f30, f31

    .loc_0xB4:
      lwz       r4, 0xC0(r27)
      subi      r0, r31, 0x8
      addi      r3, r1, 0x8
      lwzx      r4, r4, r0
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x4(r28)
      lfs       f0, 0xC(r1)
      lfs       f3, 0x0(r28)
      fsubs     f4, f1, f0
      lfs       f2, 0x8(r1)
      lfs       f1, 0x8(r28)
      lfs       f0, 0x10(r1)
      fsubs     f2, f3, f2
      fmuls     f3, f4, f4
      fsubs     f1, f1, f0
      fmadds    f0, f2, f2, f3
      fmuls     f1, f1, f1
      fadds     f0, f1, f0
      fcmpo     cr0, f0, f31
      ble-      .loc_0x120
      ble-      .loc_0x124
      fsqrte    f1, f0
      fmuls     f0, f1, f0
      b         .loc_0x124

    .loc_0x120:
      fmr       f0, f31

    .loc_0x124:
      fcmpo     cr0, f30, f0
      bge-      .loc_0x1A0
      subi      r0, r29, 0x1
      lwz       r5, 0xC0(r27)
      rlwinm    r3,r0,5,0,26
      li        r0, 0
      add       r6, r5, r31
      mr        r4, r29
      add       r24, r5, r3
      lwz       r25, 0x18(r6)
      lwz       r26, 0x1C(r6)
      lwz       r5, 0x18(r24)
      lwz       r3, 0x1C(r24)
      stw       r0, 0x18(r6)
      stw       r5, 0x18(r6)
      stw       r3, 0x1C(r6)
      lwz       r3, 0x1C(r6)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      subi      r4, r29, 0x1
      stw       r0, 0x18(r24)
      stw       r25, 0x18(r24)
      stw       r26, 0x1C(r24)
      lwz       r3, 0x1C(r24)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x1A0:
      subi      r31, r31, 0x20
      subi      r29, r29, 0x1

    .loc_0x1A8:
      cmpwi     r29, 0x1
      bge+      .loc_0x44
      subi      r30, r30, 0x1

    .loc_0x1B4:
      cmpwi     r30, 0x1
      bge+      .loc_0x38
      psq_l     f31,0x58(r1),0,0
      lfd       f31, 0x50(r1)
      psq_l     f30,0x48(r1),0,0
      lfd       f30, 0x40(r1)
      lmw       r24, 0x20(r1)
      lwz       r0, 0x64(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	80196034
 * Size:	0000C4
 */
void getSlotPosition__Q24Game6CPlateFiR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r5
      stw       r30, 0x18(r1)
      mr.       r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      blt-      .loc_0x34
      lwz       r0, 0xC8(r29)
      cmpw      r30, r0
      blt-      .loc_0x3C

    .loc_0x34:
      li        r0, 0
      b         .loc_0x40

    .loc_0x3C:
      li        r0, 0x1

    .loc_0x40:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x68
      lis       r3, 0x8048
      lis       r4, 0x8048
      subi      r5, r4, 0xFD0
      mr        r6, r30
      subi      r3, r3, 0x1010
      li        r4, 0x273
      crclr     6, 0x6
      bl        -0x16BA58

    .loc_0x68:
      rlwinm    r3,r30,5,0,26
      lwz       r0, 0xC0(r29)
      addi      r3, r3, 0xC
      lfs       f0, 0xD8(r29)
      add       r3, r0, r3
      lfs       f2, 0xDC(r29)
      lfs       f1, 0x0(r3)
      lfs       f3, 0x4(r3)
      fadds     f0, f1, f0
      lfs       f4, 0x8(r3)
      lfs       f1, 0xE0(r29)
      fadds     f2, f3, f2
      stfs      f0, 0x0(r31)
      fadds     f0, f4, f1
      stfs      f2, 0x4(r31)
      stfs      f0, 0x8(r31)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801960F8
 * Size:	0001B8
 */
void Game::CPlate::refresh((int, float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f0, -0x5454(r2)
      stw       r0, 0x14(r1)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x20
      fmr       f1, f0
      b         .loc_0x30

    .loc_0x20:
      lfs       f0, -0x546C(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x30
      fmr       f1, f0

    .loc_0x30:
      lwz       r5, 0xBC(r3)
      cmpw      r4, r5
      bge-      .loc_0x4C
      lwz       r0, 0xC8(r3)
      sub       r5, r5, r4
      sub       r0, r0, r5
      stw       r0, 0xC8(r3)

    .loc_0x4C:
      stw       r4, 0xBC(r3)
      lbz       r0, 0x100(r3)
      lfs       f2, 0x90(r3)
      cmplwi    r0, 0
      beq-      .loc_0x68
      lfs       f0, -0x5440(r2)
      b         .loc_0x6C

    .loc_0x68:
      lfs       f0, -0x5454(r2)

    .loc_0x6C:
      xoris     r5, r4, 0x8000
      lis       r0, 0x4330
      stw       r5, 0xC(r1)
      fmuls     f0, f2, f0
      lfd       f5, -0x5428(r2)
      stw       r0, 0x8(r1)
      lfs       f3, -0x543C(r2)
      lfd       f4, 0x8(r1)
      lfs       f2, -0x546C(r2)
      fsubs     f4, f4, f5
      fdivs     f4, f4, f3
      fcmpo     cr0, f4, f2
      ble-      .loc_0xB0
      ble-      .loc_0xB4
      fsqrte    f2, f4
      fmuls     f4, f2, f4
      b         .loc_0xB4

    .loc_0xB0:
      fmr       f4, f2

    .loc_0xB4:
      lfs       f3, -0x5438(r2)
      lfs       f2, -0x5434(r2)
      fmuls     f3, f3, f0
      fmuls     f5, f2, f0
      fmuls     f2, f3, f4
      stfs      f2, 0xB8(r3)
      lfs       f2, 0xB8(r3)
      fcmpo     cr0, f5, f2
      ble-      .loc_0xE0
      fmr       f4, f5
      b         .loc_0xE8

    .loc_0xE0:
      fmr       f4, f2
      fmr       f2, f5

    .loc_0xE8:
      fsubs     f3, f4, f2
      lfs       f2, -0x546C(r2)
      fneg      f3, f3
      fmadds    f3, f1, f3, f4
      stfs      f3, 0xB4(r3)
      lfs       f3, 0xB4(r3)
      fcmpu     cr0, f2, f3
      bne-      .loc_0x114
      lfs       f2, -0x5460(r2)
      stfs      f2, 0xB0(r3)
      b         .loc_0x150

    .loc_0x114:
      xoris     r5, r4, 0x8000
      lis       r0, 0x4330
      stw       r5, 0xC(r1)
      lfs       f2, -0x543C(r2)
      stw       r0, 0x8(r1)
      lfd       f4, -0x5428(r2)
      fmuls     f2, f2, f3
      lfd       f3, 0x8(r1)
      lfs       f5, -0x5430(r2)
      fsubs     f3, f3, f4
      fmuls     f3, f5, f3
      fmuls     f3, f3, f0
      fmuls     f3, f0, f3
      fdivs     f2, f3, f2
      stfs      f2, 0xB0(r3)

    .loc_0x150:
      lfs       f4, 0x68(r3)
      lfs       f2, 0xB0(r3)
      fcmpo     cr0, f2, f4
      ble-      .loc_0x1A4
      xoris     r4, r4, 0x8000
      lis       r0, 0x4330
      stw       r4, 0xC(r1)
      lfd       f3, -0x5428(r2)
      stw       r0, 0x8(r1)
      lfs       f5, -0x5430(r2)
      lfd       f2, 0x8(r1)
      stfs      f4, 0xB0(r3)
      fsubs     f4, f2, f3
      lfs       f3, -0x543C(r2)
      lfs       f2, 0xB0(r3)
      fmuls     f4, f5, f4
      fmuls     f2, f3, f2
      fmuls     f3, f4, f0
      fmuls     f0, f0, f3
      fdivs     f0, f0, f2
      stfs      f0, 0xB4(r3)

    .loc_0x1A4:
      bl        .loc_0x1B8
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x1B8:
    */
}

/*
 * --INFO--
 * Address:	801962B0
 * Size:	0002EC
 */
void Game::CPlate::refreshSlot((float))
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
      stfd      f24, 0xD0(r1)
      psq_st    f24,0xD8(r1),0,0
      stfd      f23, 0xC0(r1)
      psq_st    f23,0xC8(r1),0,0
      stfd      f22, 0xB0(r1)
      psq_st    f22,0xB8(r1),0,0
      stmw      r25, 0x94(r1)
      mr        r29, r3
      lfs       f2, -0x546C(r2)
      lfs       f3, 0xB0(r3)
      fmr       f24, f1
      lfs       f1, 0xF0(r3)
      addi      r3, r1, 0x44
      lfs       f0, -0x5454(r2)
      fneg      f26, f3
      stfs      f2, 0x38(r1)
      addi      r4, r1, 0x2C
      addi      r5, r1, 0x38
      stfs      f1, 0x3C(r1)
      li        r31, 0
      stfs      f2, 0x40(r1)
      stfs      f0, 0x2C(r1)
      stfs      f0, 0x30(r1)
      stfs      f0, 0x34(r1)
      bl        0x29225C
      lbz       r0, 0x100(r29)
      lfs       f2, 0x90(r29)
      cmplwi    r0, 0
      beq-      .loc_0xC0
      lfs       f1, -0x5440(r2)
      b         .loc_0xC4

    .loc_0xC0:
      lfs       f1, -0x5454(r2)

    .loc_0xC4:
      lfs       f0, -0x546C(r2)
      fmuls     f25, f2, f1
      addi      r3, r1, 0x44
      addi      r4, r1, 0x20
      stfs      f0, 0x20(r1)
      addi      r5, r1, 0x14
      stfs      f0, 0x24(r1)
      stfs      f0, 0x28(r1)
      bl        -0xAB7BC
      lfs       f1, 0x18(r1)
      li        r30, 0x1
      lfs       f2, 0x1C(r1)
      li        r26, 0
      lfs       f0, 0x14(r1)
      lis       r28, 0x4330
      lfs       f28, -0x5420(r2)
      stfs      f0, 0xF4(r29)
      fmuls     f27, f28, f25
      lfs       f29, -0x546C(r2)
      stfs      f1, 0xF8(r29)
      lfs       f30, -0x541C(r2)
      stfs      f2, 0xFC(r29)
      lfd       f31, -0x5428(r2)
      b         .loc_0x27C

    .loc_0x124:
      lfs       f2, 0xB0(r29)
      fmuls     f1, f26, f26
      fmuls     f0, f2, f2
      fsubs     f0, f0, f1
      fcmpo     cr0, f0, f29
      ble-      .loc_0x154
      fmsubs    f1, f2, f2, f1
      fcmpo     cr0, f1, f29
      ble-      .loc_0x158
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x158

    .loc_0x154:
      fmr       f1, f29

    .loc_0x158:
      lfs       f0, 0xB4(r29)
      fmuls     f0, f0, f1
      fdivs     f0, f0, f2
      fdivs     f0, f0, f27
      fctiwz    f0, f0
      stfd      f0, 0x78(r1)
      lwz       r3, 0x7C(r1)
      cmpwi     r3, 0
      bge-      .loc_0x180
      li        r3, 0

    .loc_0x180:
      fcmpo     cr0, f24, f30
      bge-      .loc_0x1A0
      cmpwi     r3, 0
      bne-      .loc_0x1A0
      sub       r0, r0, r31
      cmpwi     r0, 0x1
      ble-      .loc_0x1A0
      li        r3, 0x1

    .loc_0x1A0:
      xoris     r0, r3, 0x8000
      xoris     r4, r30, 0x8000
      stw       r0, 0x84(r1)
      rlwinm    r3,r3,1,0,30
      mr        r27, r26
      stw       r28, 0x80(r1)
      addi      r25, r3, 0x1
      lfd       f0, 0x80(r1)
      stw       r4, 0x8C(r1)
      fsubs     f1, f0, f31
      stw       r28, 0x88(r1)
      lfd       f0, 0x88(r1)
      fmuls     f1, f1, f25
      stw       r4, 0x7C(r1)
      fsubs     f0, f0, f31
      stw       r28, 0x78(r1)
      fmuls     f1, f28, f1
      lfd       f2, 0x78(r1)
      fmuls     f0, f0, f25
      fsubs     f2, f2, f31
      fmuls     f23, f28, f0
      fmuls     f22, f2, f1
      b         .loc_0x26C

    .loc_0x1FC:
      lwz       r0, 0xBC(r29)
      cmpw      r31, r0
      bge-      .loc_0x264
      lwz       r0, 0xC0(r29)
      addi      r3, r1, 0x44
      lfs       f0, -0x546C(r2)
      addi      r5, r1, 0x8
      add       r4, r0, r27
      stfs      f22, 0x0(r4)
      stfs      f0, 0x4(r4)
      stfs      f26, 0x8(r4)
      lwz       r0, 0xC0(r29)
      add       r4, r0, r27
      bl        -0xAB908
      lwz       r0, 0xC0(r29)
      addi      r3, r27, 0xC
      lfs       f1, 0xC(r1)
      addi      r26, r26, 0x20
      lfs       f2, 0x10(r1)
      add       r3, r0, r3
      lfs       f0, 0x8(r1)
      addi      r27, r27, 0x20
      addi      r31, r31, 0x1
      stfs      f0, 0x0(r3)
      stfs      f1, 0x4(r3)
      stfs      f2, 0x8(r3)

    .loc_0x264:
      fsubs     f22, f22, f23
      subi      r25, r25, 0x1

    .loc_0x26C:
      cmpwi     r25, 0
      bgt+      .loc_0x1FC
      fadds     f26, f26, f27
      mulli     r30, r30, -0x1

    .loc_0x27C:
      lwz       r0, 0xBC(r29)
      cmpw      r31, r0
      blt+      .loc_0x124
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
      psq_l     f24,0xD8(r1),0,0
      lfd       f24, 0xD0(r1)
      psq_l     f23,0xC8(r1),0,0
      lfd       f23, 0xC0(r1)
      psq_l     f22,0xB8(r1),0,0
      lfd       f22, 0xB0(r1)
      lmw       r25, 0x94(r1)
      lwz       r0, 0x154(r1)
      mtlr      r0
      addi      r1, r1, 0x150
      blr
    */
}

/*
 * --INFO--
 * Address:	8019659C
 * Size:	000018
 */
void Game::CPlate::update(void)
{
    /*
    .loc_0x0:
      lbz       r4, 0x100(r3)
      cmplwi    r4, 0
      beqlr-
      subi      r0, r4, 0x1
      stb       r0, 0x100(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::CPlate::directDraw((Graphics&))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801965B4
 * Size:	000080
 */
void Game::CPlate::__dt(void)
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
      lis       r4, 0x804B
      addi      r0, r4, 0x4A34
      stw       r0, 0x0(r30)
      beq-      .loc_0x54
      lis       r4, 0x804B
      addi      r0, r4, 0x4A08
      stw       r0, 0x0(r30)
      beq-      .loc_0x54
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x5324
      stw       r0, 0x0(r30)
      bl        0x27AF84

    .loc_0x54:
      extsh.    r0, r31
      ble-      .loc_0x64
      mr        r3, r30
      bl        -0x172560

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
 * Address:	80196634
 * Size:	00002C
 */
void Container<Game::Creature>::getObject(void*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
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
 * Address:	80196660
 * Size:	000008
 */
void Container<Game::Creature>::getAt(int)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80196668
 * Size:	000008
 */
void Container<Game::Creature>::getTo()
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}
