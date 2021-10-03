

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
 * Address:	80260178
 * Size:	000154
 */
void Game::Qurione::Obj::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      extsh.    r0, r4
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      beq-      .loc_0x40
      addi      r0, r31, 0x2FC
      lis       r3, 0x804B
      stw       r0, 0x17C(r31)
      subi      r3, r3, 0x5988
      li        r0, 0
      stw       r3, 0x2FC(r31)
      stw       r0, 0x300(r31)
      stw       r0, 0x304(r31)

    .loc_0x40:
      mr        r3, r31
      li        r4, 0
      bl        -0x15EE20
      lis       r4, 0x804C
      addi      r0, r31, 0x2FC
      addi      r6, r4, 0x3748
      lis       r3, 0x8012
      stw       r6, 0x0(r31)
      addi      r5, r6, 0x1B0
      addi      r9, r6, 0x2FC
      subi      r4, r3, 0xCB8
      stw       r5, 0x178(r31)
      addi      r3, r31, 0x2D4
      li        r5, 0
      li        r6, 0xC
      lwz       r8, 0x17C(r31)
      li        r7, 0x2
      stw       r9, 0x0(r8)
      lwz       r8, 0x17C(r31)
      sub       r0, r0, r8
      stw       r0, 0xC(r8)
      bl        -0x19E9D0
      li        r3, 0x2C
      bl        -0x23C370
      mr.       r30, r3
      beq-      .loc_0xE8
      bl        -0x1388AC
      lis       r3, 0x804C
      lis       r4, 0x804B
      addi      r0, r3, 0x3A78
      lis       r3, 0x804F
      stw       r0, 0x0(r30)
      subi      r4, r4, 0x4678
      subi      r3, r3, 0x4200
      li        r0, 0
      stw       r4, 0x10(r30)
      stw       r3, 0x10(r30)
      stb       r0, 0x28(r30)
      stw       r0, 0x1C(r30)
      stw       r0, 0x14(r30)
      stb       r0, 0x28(r30)
      stw       r0, 0x20(r30)

    .loc_0xE8:
      stw       r30, 0x184(r31)
      li        r3, 0x1C
      bl        -0x23C3C4
      mr.       r4, r3
      beq-      .loc_0x11C
      lis       r5, 0x804B
      lis       r3, 0x804C
      subi      r0, r5, 0x680
      li        r5, -0x1
      stw       r0, 0x0(r4)
      addi      r0, r3, 0x351C
      stw       r5, 0x18(r4)
      stw       r0, 0x0(r4)

    .loc_0x11C:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      lwz       r12, 0x2F8(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        0x9A0
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
 * Address:	802602CC
 * Size:	00005C
 */
void birth__Q34Game7Qurione3ObjFR10Vector3<float> f(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      bl        -0x15D8E0
      mr        r3, r31
      bl        0x81C
      lfs       f1, -0x3670(r2)
      mr        r3, r31
      lfs       f0, -0x366C(r2)
      addi      r4, r1, 0x8
      stfs      f1, 0x8(r1)
      stfs      f0, 0xC(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1C4(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80260328
 * Size:	00002C
 */
void Game::Qurione::Obj::setInitialSetting((Game::EnemyInitialParamBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lfs       f0, 0x0(r4)
      stfs      f0, 0x2C4(r3)
      lfs       f1, 0x4(r4)
      bl        0x374
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80260354
 * Size:	0000EC
 */
void Game::Qurione::Obj::onInit((Game::CreatureInitArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x15E910
      lwz       r4, 0x1E0(r31)
      li        r0, 0
      lfs       f0, -0x3668(r2)
      mr        r3, r31
      ori       r4, r4, 0x4
      stw       r4, 0x1E0(r31)
      lwz       r4, 0x1E0(r31)
      ori       r4, r4, 0x1
      stw       r4, 0x1E0(r31)
      lwz       r4, 0x1E0(r31)
      rlwinm    r4,r4,0,20,18
      stw       r4, 0x1E0(r31)
      lwz       r4, 0x1E0(r31)
      rlwinm    r4,r4,0,29,27
      stw       r4, 0x1E0(r31)
      lwz       r4, 0x1E0(r31)
      rlwinm    r4,r4,0,25,23
      stw       r4, 0x1E0(r31)
      lwz       r4, 0x1E0(r31)
      rlwinm    r4,r4,0,24,22
      stw       r4, 0x1E0(r31)
      lwz       r4, 0x1E0(r31)
      rlwinm    r4,r4,0,21,19
      stw       r4, 0x1E0(r31)
      lwz       r4, 0x1E0(r31)
      oris      r4, r4, 0x40
      stw       r4, 0x1E0(r31)
      stb       r0, 0x2B0(r31)
      stfs      f0, 0x2C8(r31)
      stw       r0, 0x2D0(r31)
      bl        0x5FC
      lfs       f0, -0x3668(r2)
      mr        r3, r31
      stfs      f0, 0x2C0(r31)
      bl        0xA18
      lwz       r3, 0x2BC(r31)
      mr        r4, r31
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1DC(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80260440
 * Size:	000044
 */
void Game::Qurione::Obj::onKill((Game::CreatureKillArg*))
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
      bl        0xB1C
      mr        r3, r30
      mr        r4, r31
      bl        -0x15E580
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
 * Address:	80260484
 * Size:	000034
 */
void Game::Qurione::Obj::doUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x14(r1)
      lwz       r3, 0x2BC(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
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
 * Address:	802604B8
 * Size:	00004C
 */
void Game::Qurione::Obj::setFSM((Game::Qurione::FSM*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r4, 0x2BC(r3)
      mr        r4, r31
      lwz       r3, 0x2BC(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stw       r0, 0x2B4(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80260504
 * Size:	000004
 */
void Game::Qurione::Obj::doDirectDraw((Graphics&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80260508
 * Size:	000020
 */
void Game::Qurione::Obj::doDebugDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x15A6A8
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80260528
 * Size:	00005C
 */
void Game::Qurione::Obj::getShadowParam((Game::ShadowParam&))
{
    /*
    .loc_0x0:
      lfs       f0, 0x18C(r3)
      lfs       f1, -0x3664(r2)
      stfs      f0, 0x0(r4)
      lfs       f2, -0x3668(r2)
      lfs       f3, 0x190(r3)
      lfs       f0, -0x3660(r2)
      fsubs     f3, f3, f1
      lfs       f1, -0x365C(r2)
      stfs      f3, 0x4(r4)
      lfs       f3, 0x194(r3)
      stfs      f3, 0x8(r4)
      stfs      f2, 0xC(r4)
      stfs      f0, 0x10(r4)
      stfs      f2, 0x14(r4)
      lfs       f0, 0x2C0(r3)
      fmuls     f0, f1, f0
      stfs      f0, 0x1C(r4)
      lwz       r3, 0xC0(r3)
      lfs       f1, 0x81C(r3)
      lfs       f0, 0x86C(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x18(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	80260584
 * Size:	000088
 */
void Game::Qurione::Obj::flyCollisionCallBack((Game::Creature*, float,
                                               CollPart*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      beq-      .loc_0x70
      mr        r3, r4
      lwz       r12, 0x0(r4)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x70
      mr        r3, r31
      bl        -0x1591CC
      cmpwi     r3, 0x3
      bne-      .loc_0x70
      lwz       r3, 0x2BC(r31)
      mr        r4, r31
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      li        r3, 0x1
      b         .loc_0x74

    .loc_0x70:
      li        r3, 0

    .loc_0x74:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8026060C
 * Size:	000034
 */
void Game::Qurione::Obj::doStartWaitingBirthTypeDrop(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x158C88
      mr        r3, r31
      bl        0xA4C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80260640
 * Size:	000034
 */
void Game::Qurione::Obj::doFinishWaitingBirthTypeDrop(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x158C8C
      mr        r3, r31
      bl        0x9B4
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80260674
 * Size:	000020
 */
void Game::Qurione::Obj::doStartMovie(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        0x9F4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80260694
 * Size:	000020
 */
void Game::Qurione::Obj::doEndMovie(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        0x970
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802606B4
 * Size:	000188
 */
void Game::Qurione::Obj::setQurioneStartPos((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      lfs       f0, -0x3668(r2)
      lfs       f2, 0x18C(r3)
      stfs      f2, 0x2D4(r3)
      lwz       r4, 0xC0(r3)
      lfs       f3, 0x190(r3)
      lfs       f2, 0x81C(r4)
      fadds     f2, f3, f2
      stfs      f2, 0x2D8(r3)
      lfs       f2, 0x194(r3)
      stfs      f2, 0x2DC(r3)
      lfs       f5, 0x1FC(r3)
      fcmpo     cr0, f5, f0
      bge-      .loc_0x64
      lfs       f0, -0x3658(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f5, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f2, f0
      b         .loc_0x88

    .loc_0x64:
      lfs       f0, -0x3654(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f5, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r4, r0

    .loc_0x88:
      lfs       f6, 0x2C4(r3)
      fmr       f4, f5
      lfs       f0, -0x3668(r2)
      fmuls     f7, f6, f2
      fcmpo     cr0, f5, f0
      bge-      .loc_0xA4
      fneg      f4, f5

    .loc_0xA4:
      lfs       f3, -0x3654(r2)
      lis       r4, 0x8050
      lfs       f0, -0x3650(r2)
      addi      r4, r4, 0x71A0
      fmuls     f2, f4, f3
      addi      r5, r4, 0x4
      fsubs     f5, f5, f0
      lfs       f0, -0x3668(r2)
      fctiwz    f2, f2
      fcmpo     cr0, f5, f0
      stfd      f2, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r5, r0
      fmuls     f4, f6, f0
      bge-      .loc_0x108
      lfs       f0, -0x3658(r2)
      fmuls     f0, f5, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f2, f0
      b         .loc_0x120

    .loc_0x108:
      fmuls     f0, f5, f3
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r4, r0

    .loc_0x120:
      lfs       f0, -0x3668(r2)
      fmr       f3, f5
      fmuls     f6, f1, f2
      fcmpo     cr0, f5, f0
      bge-      .loc_0x138
      fneg      f3, f5

    .loc_0x138:
      lfs       f2, -0x3654(r2)
      lfs       f0, 0x2D4(r3)
      fmuls     f2, f3, f2
      fadds     f0, f0, f7
      fctiwz    f2, f2
      fadds     f0, f6, f0
      stfd      f2, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r5, r0
      stfs      f0, 0x2E0(r3)
      fmuls     f1, f1, f2
      lfs       f0, 0x2D8(r3)
      stfs      f0, 0x2E4(r3)
      lfs       f0, 0x2DC(r3)
      fadds     f0, f0, f4
      fadds     f0, f1, f0
      stfs      f0, 0x2E8(r3)
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void Game::Qurione::Obj::setHeightVelocity(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8026083C
 * Size:	00016C
 */
void Game::Qurione::Obj::moveFaceDir(void)
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
      stfd      f29, 0x30(r1)
      psq_st    f29,0x38(r1),0,0
      stw       r31, 0x2C(r1)
      lwz       r12, 0x0(r3)
      mr        r31, r3
      lwz       r4, 0xC0(r3)
      lwz       r12, 0x64(r12)
      lfs       f30, 0x2E4(r4)
      mtctr     r12
      bctrl
      bl        -0x191064
      mr        r3, r31
      lfs       f2, 0x1D4(r31)
      lwz       r12, 0x0(r31)
      frsp      f29, f1
      lfs       f31, 0x1D8(r31)
      lfs       f0, 0x1DC(r31)
      lwz       r12, 0x64(r12)
      stfs      f2, 0x8(r1)
      stfs      f31, 0xC(r1)
      stfs      f0, 0x10(r1)
      mtctr     r12
      bctrl
      bl        -0x191600
      fmuls     f0, f30, f29
      addi      r4, r31, 0x18C
      frsp      f1, f1
      stfs      f0, 0x1D4(r31)
      fmuls     f0, f30, f1
      stfs      f31, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      lwz       r3, -0x6CF8(r13)
      lwz       r12, 0x4(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      fmr       f31, f1
      mr        r3, r31
      bl        .loc_0x16C
      lfs       f1, 0x2C8(r31)
      lfs       f0, -0x3668(r2)
      lwz       r4, 0xC0(r31)
      fcmpo     cr0, f1, f0
      lfs       f4, -0x364C(r2)
      lfs       f3, 0x86C(r4)
      bge-      .loc_0x100
      lfs       f0, -0x3658(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f2, f0
      b         .loc_0x124

    .loc_0x100:
      lfs       f0, -0x3654(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r3, r0

    .loc_0x124:
      lfs       f1, 0x81C(r4)
      lfs       f0, 0x190(r31)
      fmadds    f1, f3, f2, f1
      fadds     f1, f31, f1
      fsubs     f0, f1, f0
      fmuls     f0, f4, f0
      stfs      f0, 0x1CC(r31)
      psq_l     f31,0x58(r1),0,0
      lfd       f31, 0x50(r1)
      psq_l     f30,0x48(r1),0,0
      lfd       f30, 0x40(r1)
      psq_l     f29,0x38(r1),0,0
      lfd       f29, 0x30(r1)
      lwz       r0, 0x64(r1)
      lwz       r31, 0x2C(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr

    .loc_0x16C:
    */
}

/*
 * --INFO--
 * Address:	802609A8
 * Size:	000038
 */
void Game::Qurione::Obj::addPitchRatio(void)
{
    /*
    .loc_0x0:
      lwz       r5, 0xC0(r3)
      lwz       r4, -0x6514(r13)
      lfs       f3, 0x844(r5)
      lfs       f2, 0x54(r4)
      lfs       f1, 0x2C8(r3)
      lfs       f0, -0x3648(r2)
      fmadds    f1, f3, f2, f1
      stfs      f1, 0x2C8(r3)
      lfs       f1, 0x2C8(r3)
      fcmpo     cr0, f1, f0
      blelr-
      fsubs     f0, f1, f0
      stfs      f0, 0x2C8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802609E0
 * Size:	000088
 */
void Game::Qurione::Obj::resetUtilityTimer(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lwz       r4, -0x6C18(r13)
      cmplwi    r4, 0
      beq-      .loc_0x6C
      lwz       r0, 0x44(r4)
      cmpwi     r0, 0x4
      bne-      .loc_0x6C
      bl        -0x19746C
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, -0x3638(r2)
      stw       r0, 0x8(r1)
      lfs       f2, -0x3644(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, -0x3640(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x3660(r2)
      fmuls     f2, f2, f3
      fdivs     f1, f2, f1
      fsubs     f0, f0, f1
      stfs      f0, 0x2CC(r31)
      b         .loc_0x74

    .loc_0x6C:
      lfs       f0, -0x3668(r2)
      stfs      f0, 0x2CC(r31)

    .loc_0x74:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80260A68
 * Size:	00006C
 */
void Game::Qurione::Obj::isAppear(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r4, -0x6C18(r13)
      cmplwi    r4, 0
      beq-      .loc_0x2C
      lwz       r0, 0x44(r4)
      cmpwi     r0, 0x4
      bne-      .loc_0x2C
      li        r3, 0x1
      b         .loc_0x5C

    .loc_0x2C:
      lwz       r7, 0xC0(r3)
      li        r4, 0
      li        r5, 0
      li        r6, 0
      lfs       f1, 0x424(r7)
      lfs       f2, 0x3D4(r7)
      bl        -0x14DA5C
      cmplwi    r3, 0
      beq-      .loc_0x58
      li        r3, 0x1
      b         .loc_0x5C

    .loc_0x58:
      li        r3, 0

    .loc_0x5C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80260AD4
 * Size:	000030
 */
void Game::Qurione::Obj::isFlyKill(void)
{
    /*
    .loc_0x0:
      lbz       r0, 0xD8(r3)
      rlwinm.   r0,r0,0,29,29
      beq-      .loc_0x20
      lwz       r4, 0xC0(r3)
      lfs       f1, 0x2CC(r3)
      lfs       f0, 0x8BC(r4)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x28

    .loc_0x20:
      li        r3, 0x1
      blr

    .loc_0x28:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80260B04
 * Size:	0000A4
 */
void Game::Qurione::Obj::attachItem(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      subi      r4, r2, 0x3630
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      mr        r30, r3
      lwz       r3, 0x174(r3)
      bl        0x1DE4C0
      bl        0x1C8D78
      mr        r0, r3
      addi      r3, r1, 0x8
      mr        r31, r0
      bl        -0x131F14
      lfs       f0, 0x18C(r30)
      addi      r5, r1, 0x8
      lwz       r3, -0x6E20(r13)
      li        r4, 0x25
      stfs      f0, 0x8(r1)
      lfs       f0, 0x190(r30)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x194(r30)
      stfs      f0, 0x10(r1)
      lfs       f0, 0x1FC(r30)
      stfs      f0, 0x14(r1)
      bl        -0x1536A8
      stw       r3, 0x2EC(r30)
      lwz       r3, 0x2EC(r30)
      cmplwi    r3, 0
      beq-      .loc_0x8C
      li        r4, 0
      bl        -0x125BB8
      lwz       r3, 0x2EC(r30)
      mr        r4, r31
      bl        -0xC10E4

    .loc_0x8C:
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
 * Address:	80260BA8
 * Size:	00004C
 */
void Game::Qurione::Obj::dropItem(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x2EC(r3)
      cmplwi    r3, 0
      beq-      .loc_0x2C
      bl        -0xC102C
      li        r0, 0
      stw       r0, 0x2EC(r31)

    .loc_0x2C:
      mr        r3, r31
      li        r4, 0
      bl        -0x15E2BC
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80260BF4
 * Size:	00002C
 */
void Game::Qurione::Obj::addQurioneScale(void)
{
    /*
    .loc_0x0:
      lfs       f2, 0x2C0(r3)
      lfd       f1, -0x3628(r2)
      lfs       f0, -0x3660(r2)
      fadd      f1, f2, f1
      frsp      f1, f1
      stfs      f1, 0x2C0(r3)
      lfs       f1, 0x2C0(r3)
      fcmpo     cr0, f1, f0
      blelr-
      stfs      f0, 0x2C0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80260C20
 * Size:	00002C
 */
void Game::Qurione::Obj::subQurioneScale(void)
{
    /*
    .loc_0x0:
      lfs       f2, 0x2C0(r3)
      lfd       f1, -0x3628(r2)
      lfs       f0, -0x3668(r2)
      fsub      f1, f2, f1
      frsp      f1, f1
      stfs      f1, 0x2C0(r3)
      lfs       f1, 0x2C0(r3)
      fcmpo     cr0, f1, f0
      bgelr-
      stfs      f0, 0x2C0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80260C4C
 * Size:	0001C0
 */
void Game::Qurione::Obj::createEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x14
      bl        -0x23CDC0
      cmplwi    r3, 0
      beq-      .loc_0x98
      lis       r4, 0x804B
      lis       r5, 0x804A
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r5, 0x1D84
      addi      r5, r4, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r7, r4, 0x685C
      lis       r4, 0x804C
      addi      r0, r5, 0x14
      stw       r5, 0x0(r3)
      addi      r4, r4, 0x36FC
      li        r9, 0
      li        r8, 0x2B2
      stw       r0, 0x4(r3)
      addi      r6, r7, 0x14
      li        r5, 0x1A3
      addi      r0, r4, 0x14
      stw       r9, 0x8(r3)
      sth       r8, 0xC(r3)
      stb       r9, 0xE(r3)
      stw       r7, 0x0(r3)
      stw       r6, 0x4(r3)
      stw       r9, 0x10(r3)
      sth       r5, 0xC(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)

    .loc_0x98:
      stw       r3, 0x2F0(r31)
      li        r3, 0x14
      bl        -0x23CE48
      cmplwi    r3, 0
      beq-      .loc_0x120
      lis       r4, 0x804B
      lis       r5, 0x804A
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r5, 0x1D84
      addi      r5, r4, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r7, r4, 0x685C
      lis       r4, 0x804C
      addi      r0, r5, 0x14
      stw       r5, 0x0(r3)
      addi      r4, r4, 0x36B0
      li        r9, 0
      li        r8, 0x2B2
      stw       r0, 0x4(r3)
      addi      r6, r7, 0x14
      li        r5, 0x1A1
      addi      r0, r4, 0x14
      stw       r9, 0x8(r3)
      sth       r8, 0xC(r3)
      stb       r9, 0xE(r3)
      stw       r7, 0x0(r3)
      stw       r6, 0x4(r3)
      stw       r9, 0x10(r3)
      sth       r5, 0xC(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)

    .loc_0x120:
      stw       r3, 0x2F4(r31)
      li        r3, 0x14
      bl        -0x23CED0
      cmplwi    r3, 0
      beq-      .loc_0x1A8
      lis       r4, 0x804B
      lis       r5, 0x804A
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r5, 0x1D84
      addi      r5, r4, 0x698C
      lis       r4, 0x804E
      stw       r0, 0x4(r3)
      addi      r7, r4, 0x685C
      lis       r4, 0x804C
      addi      r0, r5, 0x14
      stw       r5, 0x0(r3)
      addi      r4, r4, 0x3664
      li        r9, 0
      li        r8, 0x2B2
      stw       r0, 0x4(r3)
      addi      r6, r7, 0x14
      li        r5, 0x1A2
      addi      r0, r4, 0x14
      stw       r9, 0x8(r3)
      sth       r8, 0xC(r3)
      stb       r9, 0xE(r3)
      stw       r7, 0x0(r3)
      stw       r6, 0x4(r3)
      stw       r9, 0x10(r3)
      sth       r5, 0xC(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)

    .loc_0x1A8:
      stw       r3, 0x2F8(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80260E0C
 * Size:	000054
 */
void Game::Qurione::Obj::setupEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lis       r3, 0x8048
      addi      r4, r3, 0x5760
      lwz       r3, 0x174(r31)
      bl        0x1DE1B8
      bl        0x1C8A70
      lwz       r4, 0x2F0(r31)
      stw       r3, 0x10(r4)
      lwz       r4, 0x2F4(r31)
      stw       r3, 0x10(r4)
      lwz       r4, 0x2F8(r31)
      stw       r3, 0x10(r4)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80260E60
 * Size:	0000A0
 */
void Game::Qurione::Obj::createHitEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r4, 0x8048
      stw       r0, 0x34(r1)
      addi      r4, r4, 0x5760
      lwz       r3, 0x174(r3)
      bl        0x1DE16C
      bl        0x1C8A24
      lis       r4, 0x804B
      lfs       f2, 0x2C(r3)
      lfs       f1, 0x1C(r3)
      subi      r4, r4, 0x5808
      lfs       f0, 0xC(r3)
      lis       r3, 0x804E
      addi      r0, r3, 0x6A64
      li        r5, 0
      stw       r4, 0x8(r1)
      lis       r4, 0x804B
      lis       r3, 0x804C
      li        r7, 0x1A4
      subi      r8, r4, 0x5814
      li        r6, 0x1A5
      stw       r0, 0x8(r1)
      addi      r0, r3, 0x3650
      addi      r3, r1, 0x8
      addi      r4, r1, 0x18
      stw       r8, 0x18(r1)
      stfs      f0, 0x1C(r1)
      stfs      f1, 0x20(r1)
      stfs      f2, 0x24(r1)
      sth       r7, 0xC(r1)
      sth       r6, 0xE(r1)
      stw       r5, 0x10(r1)
      stw       r5, 0x14(r1)
      stw       r0, 0x8(r1)
      bl        0x14E128
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80260F00
 * Size:	00004C
 */
void Game::Qurione::Obj::startGlowEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x2F0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x2F0(r31)
      lfs       f1, -0x3668(r2)
      bl        0x152B50
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80260F4C
 * Size:	00002C
 */
void Game::Qurione::Obj::setGlowEffectScale(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x14(r1)
      lwz       r3, 0x2F0(r3)
      lfs       f1, 0x2C0(r4)
      bl        0x152B20
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80260F78
 * Size:	000030
 */
void Game::Qurione::Obj::finishGlowEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2F0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
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
 * Address:	80260FA8
 * Size:	000034
 */
void Game::Qurione::Obj::createAppearEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2F4(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
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
 * Address:	80260FDC
 * Size:	000034
 */
void Game::Qurione::Obj::createDisppearEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2F8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
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
 * Address:	80261010
 * Size:	000064
 */
void Game::Qurione::Obj::effectDrawOn(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x2F0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x2F4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x2F8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80261074
 * Size:	000064
 */
void Game::Qurione::Obj::effectDrawOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x2F0(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x2F4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x2F8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802610D8
 * Size:	00009C
 */
void efx::TQuriDisap::__dt(void)
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
      beq-      .loc_0x80
      lis       r3, 0x804C
      addi      r3, r3, 0x3664
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x685C
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x1D14A8

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x23D0A0

    .loc_0x80:
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
 * Address:	80261174
 * Size:	00009C
 */
void efx::TQuriApp::__dt(void)
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
      beq-      .loc_0x80
      lis       r3, 0x804C
      addi      r3, r3, 0x36B0
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x685C
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x1D1544

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x23D13C

    .loc_0x80:
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
 * Address:	80261210
 * Size:	00009C
 */
void efx::TQuriGlow::__dt(void)
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
      beq-      .loc_0x80
      lis       r3, 0x804C
      addi      r3, r3, 0x36FC
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x685C
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x1D15E0

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x23D1D8

    .loc_0x80:
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
 * Address:	802612AC
 * Size:	000004
 */
void Game::Qurione::Obj::inWaterCallback((Game::WaterBox*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802612B0
 * Size:	000004
 */
void Game::Qurione::Obj::outWaterCallback(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802612B4
 * Size:	000008
 */
void Game::Qurione::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802612BC
 * Size:	000014
 */
void @764 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x2FC
      b         -0x15A9B0
    */
}

/*
 * --INFO--
 * Address:	802612D0
 * Size:	000014
 */
void @764 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x2FC
      b         -0x15AC38
    */
}

/*
 * --INFO--
 * Address:	802612E4
 * Size:	000014
 */
void @764 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x2FC
      b         -0x15AC2C
    */
}

/*
 * --INFO--
 * Address:	802612F8
 * Size:	000014
 */
void @764 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x2FC
      b         -0x15A890
    */
}

/*
 * --INFO--
 * Address:	8026130C
 * Size:	000014
 */
void @764 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x2FC
      b         -0x15A8D0
    */
}

/*
 * --INFO--
 * Address:	80261320
 * Size:	000014
 */
void @764 @12 @Game::EnemyBase::viewGetShape(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x2FC
      b         -0x15AC90
    */
}

/*
 * --INFO--
 * Address:	80261334
 * Size:	000008
 */
void @4 @efx::TQuriGlow::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x128
    */
}

/*
 * --INFO--
 * Address:	8026133C
 * Size:	000008
 */
void @4 @efx::TQuriApp::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x1CC
    */
}

/*
 * --INFO--
 * Address:	80261344
 * Size:	000008
 */
void @4 @efx::TQuriDisap::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x270
    */
}
