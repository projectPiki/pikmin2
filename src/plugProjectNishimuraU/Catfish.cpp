

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
 * Address:	80277008
 * Size:	000090
 */
void Game::Catfish::Obj::__ct(void)
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
      addi      r0, r31, 0x2D8
      lis       r3, 0x804B
      stw       r0, 0x17C(r31)
      subi      r3, r3, 0x5988
      li        r0, 0
      stw       r3, 0x2D8(r31)
      stw       r0, 0x2DC(r31)
      stw       r0, 0x2E0(r31)

    .loc_0x3C:
      mr        r3, r31
      li        r4, 0
      bl        -0x149564
      lis       r3, 0x804C
      addi      r0, r31, 0x2D8
      addi      r5, r3, 0x6F88
      mr        r3, r31
      stw       r5, 0x0(r31)
      addi      r4, r5, 0x1B0
      addi      r5, r5, 0x308
      stw       r4, 0x178(r31)
      lwz       r4, 0x17C(r31)
      stw       r5, 0x0(r4)
      lwz       r4, 0x17C(r31)
      sub       r0, r0, r4
      stw       r0, 0xC(r4)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80277098
 * Size:	00003C
 */
void Game::Catfish::Obj::onInit((Game::CreatureInitArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x149410
      lwz       r3, 0x174(r31)
      subi      r4, r2, 0x3008
      bl        0x1C7F2C
      stw       r3, 0x2C8(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802770D4
 * Size:	0000C0
 */
void Game::Catfish::Obj::getShadowParam((Game::ShadowParam&))
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
      lwz       r3, 0x2C8(r3)
      bl        0x1B27AC
      lfs       f4, 0x2C(r3)
      lfs       f3, 0x1C(r3)
      lfs       f0, 0xC(r3)
      lfs       f2, -0x3000(r2)
      stfs      f0, 0x0(r31)
      lfs       f1, -0x2FFC(r2)
      stfs      f3, 0x4(r31)
      lfs       f0, -0x2FF8(r2)
      stfs      f4, 0x8(r31)
      lfs       f3, 0x4(r31)
      fsubs     f2, f3, f2
      stfs      f2, 0x4(r31)
      stfs      f1, 0xC(r31)
      stfs      f0, 0x10(r31)
      stfs      f1, 0x14(r31)
      lfs       f1, 0x4(r31)
      lfs       f0, 0x190(r30)
      fsubs     f0, f1, f0
      stfs      f0, 0x18(r31)
      lwz       r0, 0x1E4(r30)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x90
      lfs       f1, 0x18(r31)
      lfs       f0, -0x2FF4(r2)
      fadds     f0, f1, f0
      stfs      f0, 0x18(r31)
      b         .loc_0xA0

    .loc_0x90:
      lfs       f1, 0x18(r31)
      lfs       f0, -0x2FF0(r2)
      fadds     f0, f1, f0
      stfs      f0, 0x18(r31)

    .loc_0xA0:
      lfs       f0, -0x2FF0(r2)
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
 * Address:	80277194
 * Size:	000028
 */
void Game::Catfish::Obj::pressCallBack((Game::Creature*, float, CollPart*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f2, -0x2FF8(r2)
      stw       r0, 0x14(r1)
      bl        -0x171178
      lwz       r0, 0x14(r1)
      li        r3, 0
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802771BC
 * Size:	000020
 */
void Game::Catfish::Obj::hipdropCallBack((Game::Creature*, float, CollPart*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x171104
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802771DC
 * Size:	0000A0
 */
void Game::Catfish::Obj::initMouthSlots(void)
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
      li        r4, 0x2
      addi      r3, r30, 0x2C0
      bl        -0x13ECAC
      lwz       r5, 0x174(r30)
      addi      r3, r30, 0x2C0
      li        r4, 0
      subi      r6, r2, 0x2FEC
      bl        -0x13EB88
      lwz       r5, 0x174(r30)
      addi      r3, r30, 0x2C0
      li        r4, 0x1
      subi      r6, r2, 0x2FE4
      bl        -0x13EB9C
      lfs       f31, -0x2FDC(r2)
      li        r31, 0
      b         .loc_0x74

    .loc_0x60:
      mr        r4, r31
      addi      r3, r30, 0x2C0
      bl        -0x13EACC
      stfs      f31, 0x1C(r3)
      addi      r31, r31, 0x1

    .loc_0x74:
      lwz       r0, 0x2C0(r30)
      cmpw      r31, r0
      blt+      .loc_0x60
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
 * Address:	8027727C
 * Size:	000044
 */
void Game::Catfish::Obj::resetEnemyNonStone(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0x1E0(r3)
      rlwinm.   r0,r0,0,10,10
      beq-      .loc_0x24
      bl        .loc_0x44

    .loc_0x24:
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,11,9
      stw       r0, 0x1E0(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x44:
    */
}

/*
 * --INFO--
 * Address:	802772C0
 * Size:	000028
 */
void Game::Catfish::Obj::createDownEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f1, -0x2FD8(r2)
      addi      r4, r3, 0x18C
      stw       r0, 0x14(r1)
      bl        -0x173784
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802772E8
 * Size:	000004
 */
void Game::Catfish::Obj::changeMaterial(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802772EC
 * Size:	000004
 */
void Game::Catfish::Obj::inWaterCallback((Game::WaterBox*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802772F0
 * Size:	000004
 */
void Game::Catfish::Obj::outWaterCallback(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802772F4
 * Size:	000008
 */
void Game::Catfish::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1A
      blr
    */
}

/*
 * --INFO--
 * Address:	802772FC
 * Size:	000010
 */
void Game::Catfish::Obj::setEnemyNonStone(void)
{
    /*
    .loc_0x0:
      lwz       r0, 0x1E0(r3)
      oris      r0, r0, 0x20
      stw       r0, 0x1E0(r3)
      blr
    */
}
