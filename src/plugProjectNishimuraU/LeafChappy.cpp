

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
 * Address:	802C5C18
 * Size:	000098
 */
void Game::LeafChappy::Obj::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      extsh.    r0, r4
      stw       r31, 0xC(r1)
      mr        r31, r3
      beq-      .loc_0x3C
      addi      r0, r31, 0x2FC
      lis       r3, 0x804B
      stw       r0, 0x17C(r31)
      subi      r3, r3, 0x5988
      li        r0, 0
      stw       r3, 0x2FC(r31)
      stw       r0, 0x300(r31)
      stw       r0, 0x304(r31)

    .loc_0x3C:
      mr        r3, r31
      li        r4, 0
      bl        -0x2C5BC
      lis       r3, 0x804D
      addi      r0, r31, 0x2FC
      addi      r5, r3, 0x1638
      mr        r3, r31
      stw       r5, 0x0(r31)
      addi      r4, r5, 0x1B0
      addi      r5, r5, 0x30C
      stw       r4, 0x178(r31)
      lwz       r4, 0x17C(r31)
      stw       r5, 0x0(r4)
      lwz       r4, 0x17C(r31)
      sub       r0, r0, r4
      stw       r0, 0xC(r4)
      bl        0x5DC
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
 * Address:	802C5CB0
 * Size:	0000C0
 */
void Game::LeafChappy::Obj::doUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      mr        r31, r3
      bl        -0x2C450
      lwz       r4, -0x6C18(r13)
      lis       r0, 0x4330
      lwz       r3, 0x2F8(r31)
      lwz       r4, 0x50(r4)
      lwz       r3, 0x10(r3)
      stw       r0, 0x28(r1)
      sub       r0, r3, r4
      lfd       f2, -0x1D60(r2)
      xoris     r0, r0, 0x8000
      lfs       f0, -0x1D68(r2)
      stw       r0, 0x2C(r1)
      lfd       f1, 0x28(r1)
      fsubs     f1, f1, f2
      fcmpo     cr0, f1, f0
      ble-      .loc_0x58
      b         .loc_0x5C

    .loc_0x58:
      fneg      f1, f1

    .loc_0x5C:
      lfs       f0, -0x1D64(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xAC
      addi      r3, r1, 0x14
      bl        -0x111588
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      addi      r4, r1, 0x14
      lfs       f1, 0xC(r1)
      lfs       f0, 0x10(r1)
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      lwz       r3, 0x2F8(r31)
      bl        -0x111520

    .loc_0xAC:
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	802C5D70
 * Size:	000004
 */
void Game::LeafChappy::Obj::doDirectDraw((Graphics&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802C5D74
 * Size:	0000C4
 */
void Game::LeafChappy::Obj::getShadowParam((Game::ShadowParam&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      subi      r4, r2, 0x1D58
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r3, 0x174(r3)
      bl        0x17924C
      bl        0x163B04
      lfs       f4, 0x2C(r3)
      lfs       f3, 0x1C(r3)
      lfs       f1, 0xC(r3)
      lfs       f0, -0x1D54(r2)
      stfs      f1, 0x0(r31)
      lfs       f2, -0x1D50(r2)
      stfs      f3, 0x4(r31)
      stfs      f4, 0x8(r31)
      lfs       f1, 0x4(r31)
      fsubs     f0, f1, f0
      stfs      f0, 0x4(r31)
      lfs       f1, 0x190(r30)
      lfs       f0, 0x4(r31)
      fadds     f1, f2, f1
      fcmpo     cr0, f0, f1
      bge-      .loc_0x70
      stfs      f1, 0x4(r31)

    .loc_0x70:
      lfs       f1, -0x1D68(r2)
      lfs       f0, -0x1D4C(r2)
      stfs      f1, 0xC(r31)
      stfs      f0, 0x10(r31)
      stfs      f1, 0x14(r31)
      lwz       r0, 0x1E4(r30)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x9C
      lfs       f0, -0x1D48(r2)
      stfs      f0, 0x18(r31)
      b         .loc_0xA4

    .loc_0x9C:
      lfs       f0, -0x1D44(r2)
      stfs      f0, 0x18(r31)

    .loc_0xA4:
      lfs       f0, -0x1D40(r2)
      stfs      f0, 0x1C(r31)
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
 * Address:	802C5E38
 * Size:	0000B4
 */
void Game::LeafChappy::Obj::initMouthSlots(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x10(r1)
      psq_st    f31,0x18(r1),0,0
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      li        r4, 0x3
      addi      r3, r30, 0x2D8
      bl        -0x18D908
      lwz       r5, 0x174(r30)
      addi      r3, r30, 0x2D8
      li        r4, 0
      subi      r6, r2, 0x1D3C
      bl        -0x18D7E4
      lwz       r5, 0x174(r30)
      addi      r3, r30, 0x2D8
      li        r4, 0x1
      subi      r6, r2, 0x1D34
      bl        -0x18D7F8
      lwz       r5, 0x174(r30)
      addi      r3, r30, 0x2D8
      li        r4, 0x2
      subi      r6, r2, 0x1D2C
      bl        -0x18D80C
      lfs       f31, -0x1D44(r2)
      li        r31, 0
      b         .loc_0x88

    .loc_0x74:
      mr        r4, r31
      addi      r3, r30, 0x2D8
      bl        -0x18D73C
      stfs      f31, 0x1C(r3)
      addi      r31, r31, 0x1

    .loc_0x88:
      lwz       r0, 0x2D8(r30)
      cmpw      r31, r0
      blt+      .loc_0x74
      psq_l     f31,0x18(r1),0,0
      lwz       r0, 0x24(r1)
      lfd       f31, 0x10(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	802C5EEC
 * Size:	000064
 */
void Game::LeafChappy::Obj::initWalkSmokeEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x2
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r3, r31, 0x2C0
      bl        -0x19BBA4
      lwz       r5, 0x174(r31)
      addi      r3, r31, 0x2C0
      lfs       f1, -0x1D50(r2)
      li        r4, 0
      subi      r6, r2, 0x1D24
      bl        -0x19B940
      lwz       r5, 0x174(r31)
      addi      r3, r31, 0x2C0
      lfs       f1, -0x1D50(r2)
      li        r4, 0x1
      subi      r6, r2, 0x1D1C
      bl        -0x19B958
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C5F50
 * Size:	000020
 */
void Game::LeafChappy::Obj::doBecomeCarcass(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x1C4080
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C5F70
 * Size:	000020
 */
void Game::LeafChappy::Obj::doUpdateCarcass(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x1C4098
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C5F90
 * Size:	000020
 */
void Game::LeafChappy::Obj::doGetLifeGaugeParam((Game::LifeGaugeParam&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x1C00AC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C5FB0
 * Size:	000244
 */
void Game::LeafChappy::Obj::birthChildren((Game::EnemyBirthArg&))
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
      stfd      f28, 0xA0(r1)
      psq_st    f28,0xA8(r1),0,0
      stfd      f27, 0x90(r1)
      psq_st    f27,0x98(r1),0,0
      stfd      f26, 0x80(r1)
      psq_st    f26,0x88(r1),0,0
      stfd      f25, 0x70(r1)
      psq_st    f25,0x78(r1),0,0
      stfd      f24, 0x60(r1)
      psq_st    f24,0x68(r1),0,0
      stfd      f23, 0x50(r1)
      psq_st    f23,0x58(r1),0,0
      stmw      r26, 0x38(r1)
      lfs       f2, -0x1D14(r2)
      mr        r31, r3
      lfs       f1, 0xC(r4)
      lfs       f0, -0x1D68(r2)
      fadds     f3, f2, f1
      lfs       f27, 0x0(r4)
      lfs       f26, 0x4(r4)
      lfs       f25, 0x8(r4)
      fmr       f1, f3
      fcmpo     cr0, f3, f0
      bge-      .loc_0x88
      fneg      f1, f3

    .loc_0x88:
      lfs       f2, -0x1D10(r2)
      lis       r3, 0x8050
      lfs       f0, -0x1D68(r2)
      addi      r4, r3, 0x71A0
      fmuls     f1, f1, f2
      fcmpo     cr0, f3, f0
      fctiwz    f0, f1
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f28, 0x4(r3)
      bge-      .loc_0xE0
      lfs       f0, -0x1D0C(r2)
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f29, f0
      b         .loc_0xF8

    .loc_0xE0:
      fmuls     f0, f3, f2
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f29, r4, r0

    .loc_0xF8:
      lis       r4, 0x804B
      lis       r3, 0x804B
      lfs       f30, -0x1D64(r2)
      subi      r29, r4, 0x5D0C
      lfd       f31, -0x1D60(r2)
      addi      r30, r3, 0x10F4
      lfs       f23, -0x1D08(r2)
      li        r27, 0
      lfs       f24, -0x1D68(r2)
      lis       r28, 0x4330

    .loc_0x120:
      xoris     r0, r27, 0x8000
      stw       r28, 0x30(r1)
      lwz       r3, -0x6D0C(r13)
      stw       r0, 0x34(r1)
      lfd       f0, 0x30(r1)
      stfs      f24, 0x18(r1)
      fsubs     f0, f0, f31
      fmadds    f0, f30, f0, f23
      fmuls     f1, f0, f29
      fmuls     f0, f0, f28
      stfs      f1, 0x14(r1)
      stfs      f0, 0x1C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stw       r29, 0x8(r1)
      li        r4, -0x1
      mr.       r26, r3
      stw       r0, 0x10(r1)
      stw       r30, 0x8(r1)
      stw       r4, 0xC(r1)
      stw       r31, 0x10(r1)
      beq-      .loc_0x1DC
      addi      r4, r1, 0x8
      bl        -0x18B170
      lfs       f2, 0x14(r1)
      addi      r4, r1, 0x14
      lfs       f1, 0x18(r1)
      lfs       f0, 0x1C(r1)
      fadds     f2, f2, f27
      fadds     f1, f1, f26
      lwz       r3, -0x6CF8(r13)
      fadds     f0, f0, f25
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      lwz       r12, 0x4(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x18(r1)
      mr        r3, r26
      addi      r4, r1, 0x14
      li        r5, 0
      bl        -0x18AFE0

    .loc_0x1DC:
      addi      r27, r27, 0x1
      cmpwi     r27, 0xA
      blt+      .loc_0x120
      psq_l     f31,0xD8(r1),0,0
      lfd       f31, 0xD0(r1)
      psq_l     f30,0xC8(r1),0,0
      lfd       f30, 0xC0(r1)
      psq_l     f29,0xB8(r1),0,0
      lfd       f29, 0xB0(r1)
      psq_l     f28,0xA8(r1),0,0
      lfd       f28, 0xA0(r1)
      psq_l     f27,0x98(r1),0,0
      lfd       f27, 0x90(r1)
      psq_l     f26,0x88(r1),0,0
      lfd       f26, 0x80(r1)
      psq_l     f25,0x78(r1),0,0
      lfd       f25, 0x70(r1)
      psq_l     f24,0x68(r1),0,0
      lfd       f24, 0x60(r1)
      psq_l     f23,0x58(r1),0,0
      lfd       f23, 0x50(r1)
      lmw       r26, 0x38(r1)
      lwz       r0, 0xE4(r1)
      mtlr      r0
      addi      r1, r1, 0xE0
      blr
    */
}

/*
 * --INFO--
 * Address:	802C61F4
 * Size:	00007C
 */
void Game::LeafChappy::Obj::startEnemyRumble(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      subi      r4, r2, 0x1D58
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lwz       r3, 0x174(r3)
      bl        0x178DD4
      bl        0x16368C
      lfs       f2, 0x2C(r3)
      addi      r5, r1, 0x8
      lfs       f1, 0x1C(r3)
      li        r4, 0x8
      lfs       f0, 0xC(r3)
      li        r6, 0x2
      lwz       r3, -0x6958(r13)
      stfs      f0, 0x8(r1)
      stfs      f1, 0xC(r1)
      stfs      f2, 0x10(r1)
      lfs       f0, 0x190(r31)
      stfs      f0, 0xC(r1)
      bl        -0x72AC8
      lfs       f1, -0x1D04(r2)
      mr        r3, r31
      addi      r4, r1, 0x8
      bl        -0x1C2708
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	802C6270
 * Size:	000050
 */
void Game::LeafChappy::Obj::createFootmarks(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x20
      bl        -0x2A23E4
      mr.       r0, r3
      beq-      .loc_0x2C
      bl        -0x111AE4
      mr        r0, r3

    .loc_0x2C:
      stw       r0, 0x2F8(r31)
      li        r4, 0xA
      lwz       r3, 0x2F8(r31)
      bl        -0x111ADC
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C62C0
 * Size:	000008
 */
void Game::LeafChappy::Obj::getDownSmokeScale(void)
{
    /*
    .loc_0x0:
      lfs       f1, -0x1D00(r2)
      blr
    */
}

/*
 * --INFO--
 * Address:	802C62C8
 * Size:	000008
 */
void Game::LeafChappy::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x43
      blr
    */
}

/*
 * --INFO--
 * Address:	802C62D0
 * Size:	000004
 */
void Game::LeafChappy::Obj::createChappyRelation(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802C62D4
 * Size:	000004
 */
void Game::LeafChappy::Obj::resetChappyRelation(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802C62D8
 * Size:	000008
 */
void Game::LeafChappy::Obj::getChappyRelation(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	802C62E0
 * Size:	000008
 */
void Game::LeafChappy::Obj::getFootmarks(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x2F8(r3)
      blr
    */
}
