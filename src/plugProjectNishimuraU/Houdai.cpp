

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
 * Address:	802BFCB0
 * Size:	000024
 */
void Game::Houdai::HoudaiGroundCallBack::invokeOnGround((int, Game::WaterBox*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x4(r3)
      bl        0x2618
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802BFCD4
 * Size:	000024
 */
void Game::Houdai::HoudaiGroundCallBack::invokeOffGround((int, Game::WaterBox*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x4(r3)
      bl        0x2978
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802BFCF8
 * Size:	00016C
 */
void Game::Houdai::Obj::__ct(void)
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
      addi      r0, r31, 0x420
      lis       r3, 0x804B
      stw       r0, 0x17C(r31)
      subi      r3, r3, 0x5988
      li        r0, 0
      stw       r3, 0x420(r31)
      stw       r0, 0x424(r31)
      stw       r0, 0x428(r31)

    .loc_0x40:
      mr        r3, r31
      li        r4, 0
      bl        -0x1BE9A0
      lis       r4, 0x804D
      addi      r0, r31, 0x420
      addi      r6, r4, 0x1160
      lis       r3, 0x8012
      stw       r6, 0x0(r31)
      addi      r5, r6, 0x1B0
      addi      r9, r6, 0x2FC
      subi      r4, r3, 0xCB8
      stw       r5, 0x178(r31)
      addi      r3, r31, 0x304
      li        r5, 0
      li        r6, 0xC
      lwz       r8, 0x17C(r31)
      li        r7, 0x10
      stw       r9, 0x0(r8)
      lwz       r8, 0x17C(r31)
      sub       r0, r0, r8
      stw       r0, 0xC(r8)
      bl        -0x1FE550
      li        r3, 0x2C
      bl        -0x29BEF0
      mr.       r30, r3
      beq-      .loc_0xE8
      bl        -0x19842C
      lis       r3, 0x804D
      lis       r4, 0x804B
      addi      r0, r3, 0xD80
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
      bl        -0x29BF44
      mr.       r4, r3
      beq-      .loc_0x11C
      lis       r5, 0x804B
      lis       r3, 0x804D
      subi      r0, r5, 0x680
      li        r5, -0x1
      stw       r0, 0x0(r4)
      addi      r0, r3, 0xD5C
      stw       r5, 0x18(r4)
      stw       r0, 0x0(r4)

    .loc_0x11C:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      lwz       r12, 0x2F8(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        0xC50
      mr        r3, r31
      bl        0x1128
      mr        r3, r31
      bl        0x133C
      mr        r3, r31
      bl        0x1D20
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
 * Address:	802BFE64
 * Size:	000004
 */
void Game::Houdai::Obj::setInitialSetting((Game::EnemyInitialParamBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802BFE68
 * Size:	000144
 */
void Game::Houdai::Obj::onInit((Game::CreatureInitArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x1BE424
      mr        r3, r31
      bl        -0x1B8708
      lwz       r3, 0x1E0(r31)
      li        r4, -0x1
      lfs       f0, -0x1E68(r2)
      li        r0, 0
      rlwinm    r5,r3,0,26,24
      mr        r3, r31
      stw       r5, 0x1E0(r31)
      lwz       r5, 0x1E0(r31)
      rlwinm    r5,r5,0,20,18
      stw       r5, 0x1E0(r31)
      lwz       r5, 0x1E0(r31)
      rlwinm    r5,r5,0,25,23
      stw       r5, 0x1E0(r31)
      stfs      f0, 0x2C0(r31)
      stfs      f0, 0x2C4(r31)
      stfs      f0, 0x2C8(r31)
      stw       r4, 0x2D0(r31)
      lfs       f0, 0x198(r31)
      stfs      f0, 0x2D4(r31)
      lfs       f0, 0x19C(r31)
      stfs      f0, 0x2D8(r31)
      lfs       f0, 0x1A0(r31)
      stfs      f0, 0x2DC(r31)
      stb       r0, 0x2EC(r31)
      bl        0xCA0
      mr        r3, r31
      bl        0x10B4
      mr        r3, r31
      bl        0x5F0
      lfs       f0, -0x1E68(r2)
      li        r0, 0
      mr        r3, r31
      stfs      f0, 0x2CC(r31)
      stb       r0, 0x2ED(r31)
      lfs       f0, 0x198(r31)
      stfs      f0, 0x2E0(r31)
      lfs       f0, 0x19C(r31)
      stfs      f0, 0x2E4(r31)
      lfs       f0, 0x1A0(r31)
      stfs      f0, 0x2E8(r31)
      bl        0x1298
      mr        r3, r31
      bl        0x149C
      mr        r3, r31
      bl        0x21F8
      mr        r3, r31
      li        r4, 0
      bl        0x2D48
      li        r0, 0
      mr        r3, r31
      stb       r0, 0x2EF(r31)
      bl        0x1A98
      lwz       r3, -0x6980(r13)
      mr        r4, r31
      bl        -0x7E270
      lwz       r3, 0x2BC(r31)
      mr        r4, r31
      li        r5, 0x1
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
 * Address:	802BFFAC
 * Size:	000054
 */
void Game::Houdai::Obj::onKill((Game::CreatureKillArg*))
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
      bl        0x2D40
      mr        r3, r30
      bl        0x2E00
      mr        r3, r30
      bl        0x13D0
      mr        r3, r30
      mr        r4, r31
      bl        -0x1BE0FC
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
 * Address:	802C0000
 * Size:	000088
 */
void Game::Houdai::Obj::setParameters(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r4, -0x6C18(r13)
      cmplwi    r4, 0
      beq-      .loc_0x6C
      lbz       r0, 0x48(r4)
      cmplwi    r0, 0
      beq-      .loc_0x6C
      lwz       r0, 0x44(r4)
      cmpwi     r0, 0
      bne-      .loc_0x6C
      lwz       r3, 0x58(r4)
      cmplwi    r3, 0
      beq-      .loc_0x6C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x78(r12)
      mtctr     r12
      bctrl
      subis     r0, r3, 0x6C5F
      cmplwi    r0, 0x3032
      bne-      .loc_0x6C
      lwz       r3, 0xC0(r31)
      lfs       f0, 0x9AC(r3)
      stfs      f0, 0x35C(r3)

    .loc_0x6C:
      mr        r3, r31
      bl        -0x1BD498
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0088
 * Size:	0000B4
 */
void Game::Houdai::Obj::doUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x1090
      lwz       r3, 0x2BC(r31)
      mr        r4, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        0x2950
      mr        r3, r31
      bl        0xC98
      mr        r3, r31
      bl        0x1184
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xA0
      mr        r3, r31
      bl        -0x1B8CFC
      cmpwi     r3, 0x2
      ble-      .loc_0xA0
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xF4(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      li        r4, 0x512E
      li        r5, 0
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0xA0:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C013C
 * Size:	00003C
 */
void Game::Houdai::Obj::doUpdateCommon(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x1BD23C
      mr        r3, r31
      bl        0x111C
      mr        r3, r31
      bl        0x1790
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0178
 * Size:	0000A0
 */
void Game::Houdai::Obj::doAnimationCullingOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x10A0
      lwz       r4, 0x188(r31)
      li        r0, 0
      mr        r3, r31
      stb       r0, 0x24(r4)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1D8(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        0xC08
      lwz       r4, 0x174(r31)
      addi      r3, r31, 0x138
      lwz       r4, 0x8(r4)
      addi      r4, r4, 0x24
      bl        -0x1D5EFC
      lwz       r3, 0x174(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x114(r31)
      bl        -0x18A74C
      mr        r3, r31
      bl        0xE28
      mr        r3, r31
      bl        0xC24
      mr        r3, r31
      bl        0x1008
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0218
 * Size:	000004
 */
void Game::Houdai::Obj::doDirectDraw((Graphics&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802C021C
 * Size:	000020
 */
void Game::Houdai::Obj::doDebugDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x1BA3BC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C023C
 * Size:	00004C
 */
void Game::Houdai::Obj::setFSM((Game::Houdai::FSM*))
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
 * Address:	802C0288
 * Size:	00003C
 */
void Game::Houdai::Obj::getShadowParam((Game::ShadowParam&))
{
    /*
    .loc_0x0:
      lfs       f0, 0x18C(r3)
      lfs       f2, -0x1E68(r2)
      stfs      f0, 0x0(r4)
      lfs       f1, -0x1E64(r2)
      lfs       f3, 0x190(r3)
      lfs       f0, -0x1E60(r2)
      stfs      f3, 0x4(r4)
      lfs       f3, 0x194(r3)
      stfs      f3, 0x8(r4)
      stfs      f2, 0xC(r4)
      stfs      f1, 0x10(r4)
      stfs      f2, 0x14(r4)
      stfs      f0, 0x18(r4)
      stfs      f0, 0x1C(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	802C02C4
 * Size:	0000B4
 */
void Game::Houdai::Obj::damageCallBack((Game::Creature*, float, CollPart*))
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
      mr.       r31, r4
      fmr       f31, f1
      mr        r30, r3
      beq-      .loc_0x90
      cmplwi    r5, 0
      beq-      .loc_0x90
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x90
      mr        r3, r31
      bl        -0x120DA4
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x90
      mr        r3, r30
      bl        -0x1B8F34
      cmpwi     r3, 0x2
      bne-      .loc_0x78
      lfs       f0, -0x1E5C(r2)
      fmuls     f31, f31, f0

    .loc_0x78:
      fmr       f1, f31
      lfs       f2, -0x1E64(r2)
      mr        r3, r30
      bl        -0x1BA31C
      li        r3, 0x1
      b         .loc_0x94

    .loc_0x90:
      li        r3, 0

    .loc_0x94:
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
 * Address:	802C0378
 * Size:	000054
 */
void Game::Houdai::Obj::doStartStoneState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x1BD498
      mr        r3, r31
      bl        0x248C
      mr        r3, r31
      bl        0x296C
      mr        r3, r31
      bl        0x2A2C
      lwz       r3, 0x300(r31)
      bl        0x5400
      mr        r3, r31
      bl        0x12CC
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C03CC
 * Size:	000078
 */
void Game::Houdai::Obj::doFinishStoneState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x1BD4D8
      lfs       f1, -0x1E64(r2)
      mr        r3, r31
      lfs       f2, -0x1E58(r2)
      li        r4, 0
      lfs       f3, -0x1E68(r2)
      lfs       f4, -0x1E54(r2)
      bl        -0x1AD2E0
      lbz       r0, 0x2EC(r31)
      cmplwi    r0, 0
      beq-      .loc_0x48
      mr        r3, r31
      bl        0x23B4

    .loc_0x48:
      mr        r3, r31
      li        r4, 0x1
      bl        0x2870
      lwz       r3, 0x300(r31)
      bl        0x53B8
      mr        r3, r31
      bl        0x1328
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0444
 * Size:	000020
 */
void Game::Houdai::Obj::doStartMovie(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        0x2E3C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0464
 * Size:	000020
 */
void Game::Houdai::Obj::doEndMovie(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        0x2CA0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0484
 * Size:	000050
 */
void getThrowupItemPosition__Q34Game6Houdai3ObjFP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      subi      r4, r2, 0x1E50
      lwz       r3, 0x174(r3)
      bl        0x17EB44
      bl        0x1693FC
      lfs       f2, 0x2C(r3)
      lfs       f1, 0x1C(r3)
      lfs       f0, 0xC(r3)
      stfs      f0, 0x0(r31)
      stfs      f1, 0x4(r31)
      stfs      f2, 0x8(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C04D4
 * Size:	000014
 */
void getThrowupItemVelocity__Q34Game6Houdai3ObjFP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      lfs       f0, -0x1E68(r2)
      stfs      f0, 0x8(r4)
      stfs      f0, 0x4(r4)
      stfs      f0, 0x0(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	802C04E8
 * Size:	0000C8
 */
void Game::Houdai::Obj::setTargetPattern(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      li        r0, 0x1
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stb       r0, 0x2EE(r3)
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0xB4
      lbz       r0, 0x48(r3)
      cmplwi    r0, 0
      beq-      .loc_0xB4
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0
      bne-      .loc_0xB4
      lwz       r3, 0x58(r3)
      cmplwi    r3, 0
      beq-      .loc_0xB4
      lwz       r12, 0x0(r3)
      lwz       r12, 0x78(r12)
      mtctr     r12
      bctrl
      subis     r0, r3, 0x6C5F
      cmplwi    r0, 0x3032
      bne-      .loc_0xB4
      bl        -0x1F6FB0
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f3, -0x1E40(r2)
      stw       r0, 0x8(r1)
      lfs       f1, -0x1E44(r2)
      lfd       f2, 0x8(r1)
      lfs       f0, -0x1E48(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r3, 0x14(r1)
      neg       r0, r3
      or        r0, r0, r3
      rlwinm    r0,r0,1,31,31
      stb       r0, 0x2EE(r31)

    .loc_0xB4:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	802C05B0
 * Size:	000298
 */
void Game::Houdai::Obj::getTargetPosition(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      stfd      f31, 0x60(r1)
      psq_st    f31,0x68(r1),0,0
      stfd      f30, 0x50(r1)
      psq_st    f30,0x58(r1),0,0
      stw       r31, 0x4C(r1)
      mr        r31, r3
      lfs       f1, 0x194(r3)
      lfs       f0, 0x1A0(r3)
      lwz       r7, 0xC0(r3)
      fsubs     f2, f1, f0
      lfs       f1, 0x18C(r3)
      lfs       f4, 0x198(r3)
      lfs       f0, 0x35C(r7)
      fsubs     f3, f1, f4
      fmuls     f1, f2, f2
      fmuls     f0, f0, f0
      fmadds    f1, f3, f3, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x254
      lis       r5, 0x804B
      lis       r4, 0x804D
      subi      r6, r5, 0x43A0
      stw       r31, 0xC(r1)
      subi      r0, r4, 0x2490
      addi      r5, r1, 0x8
      stw       r6, 0x8(r1)
      li        r4, 0
      stw       r0, 0x8(r1)
      lfs       f1, 0x424(r7)
      lfs       f2, 0x3D4(r7)
      bl        -0x1ADAD0
      cmplwi    r3, 0
      beq-      .loc_0xC4
      mr        r4, r3
      addi      r3, r1, 0x10
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x10(r1)
      stfs      f0, 0x2D4(r31)
      lfs       f0, 0x14(r1)
      stfs      f0, 0x2D8(r31)
      lfs       f0, 0x18(r1)
      stfs      f0, 0x2DC(r31)
      b         .loc_0x268

    .loc_0xC4:
      lfs       f1, 0x194(r31)
      lfs       f0, 0x2DC(r31)
      lfs       f2, 0x18C(r31)
      fsubs     f3, f1, f0
      lfs       f1, 0x2D4(r31)
      lfs       f0, -0x1E38(r2)
      fsubs     f2, f2, f1
      fmuls     f1, f3, f3
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x268
      lwz       r3, 0xC0(r31)
      lfs       f1, 0x35C(r3)
      lfs       f0, 0x384(r3)
      fsubs     f30, f1, f0
      bl        -0x1F7110
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x24(r1)
      lis       r3, 0x8051
      lwz       r4, 0xC0(r31)
      subi      r3, r3, 0x2E20
      stw       r0, 0x20(r1)
      lfd       f1, -0x1E40(r2)
      lfd       f0, 0x20(r1)
      lfs       f5, -0x1E44(r2)
      fsubs     f0, f0, f1
      lfs       f3, 0x18C(r31)
      lfs       f1, 0x198(r31)
      lfs       f4, 0x384(r4)
      fmuls     f6, f30, f0
      lfs       f2, 0x194(r31)
      fsubs     f1, f3, f1
      lfs       f0, 0x1A0(r31)
      fdivs     f3, f6, f5
      fadds     f31, f4, f3
      fsubs     f2, f2, f0
      bl        -0x28B600
      fmr       f30, f1
      bl        -0x1F7170
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x2C(r1)
      lfd       f2, -0x1E40(r2)
      stw       r0, 0x28(r1)
      lfs       f3, -0x1E34(r2)
      lfd       f0, 0x28(r1)
      lfs       f1, -0x1E44(r2)
      fsubs     f4, f0, f2
      lfs       f2, -0x1E30(r2)
      lfs       f0, -0x1E68(r2)
      fmuls     f3, f3, f4
      fdivs     f1, f3, f1
      fadds     f1, f30, f1
      fadds     f3, f2, f1
      fcmpo     cr0, f3, f0
      bge-      .loc_0x1D4
      lfs       f0, -0x1E2C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f2, f0
      b         .loc_0x1F8

    .loc_0x1D4:
      lfs       f0, -0x1E28(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r0, 0x3C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r3, r0

    .loc_0x1F8:
      lfs       f1, 0x198(r31)
      lfs       f0, -0x1E68(r2)
      fmadds    f1, f31, f2, f1
      fcmpo     cr0, f3, f0
      stfs      f1, 0x2D4(r31)
      lfs       f0, 0x19C(r31)
      stfs      f0, 0x2D8(r31)
      bge-      .loc_0x21C
      fneg      f3, f3

    .loc_0x21C:
      lfs       f1, -0x1E28(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      lfs       f0, 0x1A0(r31)
      fmuls     f1, f3, f1
      fctiwz    f1, f1
      stfd      f1, 0x40(r1)
      lwz       r0, 0x44(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r3, r0
      lfs       f1, 0x4(r3)
      fmadds    f0, f31, f1, f0
      stfs      f0, 0x2DC(r31)
      b         .loc_0x268

    .loc_0x254:
      stfs      f4, 0x2D4(r31)
      lfs       f0, 0x19C(r31)
      stfs      f0, 0x2D8(r31)
      lfs       f0, 0x1A0(r31)
      stfs      f0, 0x2DC(r31)

    .loc_0x268:
      mr        r3, r31
      addi      r4, r31, 0x2D4
      bl        0x51C
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      lwz       r0, 0x74(r1)
      lwz       r31, 0x4C(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0848
 * Size:	000234
 */
void Game::Houdai::Obj::setShotGunTargetPosition(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      stw       r0, 0x74(r1)
      stfd      f31, 0x60(r1)
      psq_st    f31,0x68(r1),0,0
      stfd      f30, 0x50(r1)
      psq_st    f30,0x58(r1),0,0
      stw       r31, 0x4C(r1)
      lis       r5, 0x804B
      lis       r4, 0x804D
      subi      r0, r5, 0x43A0
      mr        r31, r3
      stw       r0, 0x8(r1)
      subi      r0, r4, 0x2490
      stw       r0, 0x8(r1)
      stw       r31, 0xC(r1)
      lbz       r0, 0x2EE(r3)
      cmplwi    r0, 0
      beq-      .loc_0x70
      lwz       r5, 0xC0(r31)
      addi      r6, r1, 0x8
      lfs       f1, -0x1E24(r2)
      li        r4, 0
      lfs       f2, 0x44C(r5)
      li        r5, 0
      bl        -0x1AD85C
      mr        r4, r3
      b         .loc_0xAC

    .loc_0x70:
      lwz       r6, 0xC0(r31)
      li        r4, 0
      lfs       f1, -0x1E24(r2)
      li        r5, 0
      lfs       f2, 0x44C(r6)
      bl        -0x1AE1D8
      mr.       r4, r3
      beq-      .loc_0xAC
      lwz       r6, 0xC0(r31)
      addi      r5, r1, 0x8
      lfs       f1, -0x1E24(r2)
      li        r4, 0
      lfs       f2, 0x44C(r6)
      bl        -0x1ADD88
      mr        r4, r3

    .loc_0xAC:
      cmplwi    r4, 0
      beq-      .loc_0xE4
      lwz       r12, 0x0(r4)
      addi      r3, r1, 0x10
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x10(r1)
      stfs      f0, 0x2E0(r31)
      lfs       f0, 0x14(r1)
      stfs      f0, 0x2E4(r31)
      lfs       f0, 0x18(r1)
      stfs      f0, 0x2E8(r31)
      b         .loc_0x204

    .loc_0xE4:
      lfs       f1, 0x2C8(r31)
      lfs       f0, -0x1E64(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x204
      lfs       f0, -0x1E68(r2)
      stfs      f0, 0x2C8(r31)
      bl        -0x1F73A4
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x24(r1)
      lwz       r3, 0xC0(r31)
      stw       r0, 0x20(r1)
      lfd       f2, -0x1E40(r2)
      lfd       f0, 0x20(r1)
      lfs       f1, -0x1E20(r2)
      fsubs     f2, f0, f2
      lfs       f0, -0x1E44(r2)
      lfs       f31, 0x44C(r3)
      fmuls     f1, f1, f2
      fdivs     f30, f1, f0
      bl        -0x1F73DC
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x2C(r1)
      fmr       f4, f30
      lfs       f0, -0x1E68(r2)
      stw       r0, 0x28(r1)
      lfd       f2, -0x1E40(r2)
      fcmpo     cr0, f30, f0
      lfd       f1, 0x28(r1)
      lfs       f0, -0x1E44(r2)
      fsubs     f1, f1, f2
      fmuls     f1, f31, f1
      fdivs     f5, f1, f0
      bge-      .loc_0x174
      fneg      f4, f30

    .loc_0x174:
      lfs       f3, -0x1E28(r2)
      lis       r3, 0x8050
      lfs       f0, -0x1E68(r2)
      addi      r4, r3, 0x71A0
      fmuls     f2, f4, f3
      lfs       f1, 0x194(r31)
      fcmpo     cr0, f30, f0
      lfs       f4, 0x190(r31)
      fctiwz    f0, f2
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f0, 0x4(r3)
      fmadds    f2, f5, f0, f1
      bge-      .loc_0x1D8
      lfs       f0, -0x1E2C(r2)
      fmuls     f0, f30, f0
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r0, 0x3C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f1, f0
      b         .loc_0x1F0

    .loc_0x1D8:
      fmuls     f0, f30, f3
      fctiwz    f0, f0
      stfd      f0, 0x40(r1)
      lwz       r0, 0x44(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f1, r4, r0

    .loc_0x1F0:
      lfs       f0, 0x18C(r31)
      fmadds    f0, f5, f1, f0
      stfs      f0, 0x2E0(r31)
      stfs      f4, 0x2E4(r31)
      stfs      f2, 0x2E8(r31)

    .loc_0x204:
      mr        r3, r31
      addi      r4, r31, 0x2E0
      bl        0x790
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      lwz       r0, 0x74(r1)
      lwz       r31, 0x4C(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0A7C
 * Size:	00010C
 */
void Game::Houdai::Obj::createIKSystem(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x9C
      bl        -0x29CBF0
      mr.       r0, r3
      beq-      .loc_0x2C
      bl        -0x17FE8
      mr        r0, r3

    .loc_0x2C:
      stw       r0, 0x2F0(r31)
      li        r3, 0x48
      bl        -0x29CC0C
      cmplwi    r3, 0
      beq-      .loc_0xC4
      li        r0, -0x1
      lfs       f5, -0x1E68(r2)
      stw       r0, 0x0(r3)
      lfs       f1, -0x1E1C(r2)
      stfs      f5, 0x4(r3)
      lfs       f0, -0x1E18(r2)
      stfs      f5, 0x8(r3)
      lfs       f2, -0x1E14(r2)
      stfs      f1, 0xC(r3)
      lfs       f1, -0x1E10(r2)
      stfs      f0, 0x10(r3)
      lfs       f0, -0x1E0C(r2)
      stfs      f2, 0x14(r3)
      lfs       f2, -0x1E58(r2)
      stfs      f1, 0x18(r3)
      lfs       f1, -0x1E08(r2)
      stfs      f0, 0x1C(r3)
      lfs       f0, -0x1E04(r2)
      stfs      f2, 0x20(r3)
      lfs       f4, -0x1E00(r2)
      stfs      f1, 0x24(r3)
      lfs       f3, -0x1DFC(r2)
      stfs      f5, 0x28(r3)
      lfs       f2, -0x1E60(r2)
      stfs      f0, 0x2C(r3)
      lfs       f1, -0x1DF8(r2)
      stfs      f5, 0x30(r3)
      lfs       f0, -0x1DF4(r2)
      stfs      f4, 0x34(r3)
      stfs      f3, 0x38(r3)
      stfs      f2, 0x3C(r3)
      stfs      f1, 0x40(r3)
      stfs      f0, 0x44(r3)

    .loc_0xC4:
      stw       r3, 0x2F4(r31)
      li        r3, 0x8
      bl        -0x29CCA4
      cmplwi    r3, 0
      beq-      .loc_0xF4
      lis       r5, 0x804D
      lis       r4, 0x804D
      subi      r0, r5, 0x24A0
      stw       r0, 0x0(r3)
      addi      r0, r4, 0x148C
      stw       r0, 0x0(r3)
      stw       r31, 0x4(r3)

    .loc_0xF4:
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
 * Address:	802C0B88
 * Size:	000124
 */
void Game::Houdai::Obj::setupIKSystem(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x54(r1)
      stmw      r27, 0x3C(r1)
      mr        r31, r3
      mr        r4, r31
      lwz       r3, 0x2F0(r3)
      bl        -0x18074
      lis       r3, 0x8049
      addi      r6, r1, 0x8
      subi      r27, r3, 0x4E98
      li        r5, 0
      lwz       r28, 0x0(r27)
      lwz       r29, 0x4(r27)
      lwz       r30, 0x8(r27)
      lwz       r12, 0xC(r27)
      lwz       r11, 0x10(r27)
      lwz       r10, 0x14(r27)
      lwz       r9, 0x18(r27)
      lwz       r8, 0x1C(r27)
      lwz       r7, 0x20(r27)
      lwz       r4, 0x24(r27)
      lwz       r3, 0x28(r27)
      lwz       r0, 0x2C(r27)
      stw       r28, 0x8(r1)
      stw       r29, 0xC(r1)
      stw       r30, 0x10(r1)
      stw       r12, 0x14(r1)
      stw       r11, 0x18(r1)
      stw       r10, 0x1C(r1)
      stw       r9, 0x20(r1)
      stw       r8, 0x24(r1)
      stw       r7, 0x28(r1)
      stw       r4, 0x2C(r1)
      stw       r3, 0x30(r1)
      stw       r0, 0x34(r1)
      lwz       r3, 0x2F0(r31)
      lwz       r4, 0x174(r31)
      bl        -0x17FAC
      lwz       r3, 0x2F0(r31)
      addi      r6, r1, 0x14
      lwz       r4, 0x174(r31)
      li        r5, 0x1
      bl        -0x17FC0
      lwz       r3, 0x2F0(r31)
      addi      r6, r1, 0x20
      lwz       r4, 0x174(r31)
      li        r5, 0x2
      bl        -0x17FD4
      lwz       r3, 0x2F0(r31)
      addi      r6, r1, 0x2C
      lwz       r4, 0x174(r31)
      li        r5, 0x3
      bl        -0x17FE8
      lis       r4, 0x8049
      lwz       r3, 0x2F0(r31)
      subi      r5, r4, 0x4F10
      lwz       r4, 0x174(r31)
      bl        -0x17F90
      mr        r3, r31
      bl        .loc_0x124
      lwz       r3, 0x2F0(r31)
      lwz       r4, 0x2F4(r31)
      bl        -0x17F6C
      lwz       r0, 0x2F8(r31)
      lwz       r3, 0x2F0(r31)
      stw       r0, 0x94(r3)
      lmw       r27, 0x3C(r1)
      lwz       r0, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr

    .loc_0x124:
    */
}

/*
 * --INFO--
 * Address:	802C0CAC
 * Size:	000090
 */
void Game::Houdai::Obj::setIKParameter(void)
{
    /*
    .loc_0x0:
      lfs       f0, -0x1DF0(r2)
      lwz       r4, 0x2F4(r3)
      stfs      f0, 0x28(r4)
      lwz       r5, 0xC0(r3)
      lwz       r4, 0x2F4(r3)
      lfs       f0, 0x334(r5)
      stfs      f0, 0x38(r4)
      lwz       r5, 0xC0(r3)
      lwz       r4, 0x2F4(r3)
      lfs       f0, 0x2E4(r5)
      stfs      f0, 0x2C(r4)
      lwz       r5, 0xC0(r3)
      lwz       r4, 0x2F4(r3)
      lfs       f0, 0x81C(r5)
      stfs      f0, 0x14(r4)
      lwz       r5, 0xC0(r3)
      lwz       r4, 0x2F4(r3)
      lfs       f0, 0x844(r5)
      stfs      f0, 0x18(r4)
      lwz       r5, 0xC0(r3)
      lwz       r4, 0x2F4(r3)
      lfs       f0, 0x86C(r5)
      stfs      f0, 0x1C(r4)
      lwz       r5, 0xC0(r3)
      lwz       r4, 0x2F4(r3)
      lfs       f0, 0x8BC(r5)
      stfs      f0, 0x20(r4)
      lwz       r5, 0xC0(r3)
      lwz       r4, 0x2F4(r3)
      lfs       f0, 0x894(r5)
      stfs      f0, 0x24(r4)
      lwz       r4, 0xC0(r3)
      lwz       r3, 0x2F4(r3)
      lfs       f0, 0x8E4(r4)
      stfs      f0, 0x10(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0D3C
 * Size:	000020
 */
void setIKSystemTargetPosition__Q34Game6Houdai3ObjFR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x2F0(r3)
      lfs       f0, 0x0(r4)
      stfs      f0, 0x2C(r3)
      lfs       f0, 0x4(r4)
      stfs      f0, 0x30(r3)
      lfs       f0, 0x8(r4)
      stfs      f0, 0x34(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0D5C
 * Size:	000060
 */
void Game::Houdai::Obj::updateIKSystem(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x2F0(r3)
      bl        -0x17C90
      lwz       r3, 0x2F0(r31)
      lfs       f1, 0x3C(r3)
      lfs       f2, 0x40(r3)
      lfs       f0, 0x38(r3)
      stfs      f0, 0x18C(r31)
      stfs      f1, 0x190(r31)
      stfs      f2, 0x194(r31)
      lwz       r3, 0x2F0(r31)
      lfs       f0, 0x4(r3)
      stfs      f0, 0x1FC(r31)
      lfs       f0, 0x1FC(r31)
      stfs      f0, 0x1A8(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0DBC
 * Size:	000060
 */
void Game::Houdai::Obj::doAnimationIKSystem(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lwz       r3, 0x2F0(r3)
      bl        -0x17CF8
      lwz       r7, 0x2F0(r31)
      addi      r3, r31, 0x138
      addi      r4, r31, 0x168
      addi      r5, r31, 0x1A4
      lfs       f1, 0x48(r7)
      addi      r6, r1, 0x8
      lfs       f2, 0x4C(r7)
      lfs       f0, 0x44(r7)
      stfs      f0, 0x8(r1)
      stfs      f1, 0xC(r1)
      stfs      f2, 0x10(r1)
      bl        0x1674D4
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0E1C
 * Size:	000024
 */
void Game::Houdai::Obj::finishAnimationIKSystem(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2F0(r3)
      bl        -0x17D5C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0E40
 * Size:	000024
 */
void Game::Houdai::Obj::startProgramedIK(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2F0(r3)
      bl        -0x180D0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0E64
 * Size:	000024
 */
void Game::Houdai::Obj::startIKMotion(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2F0(r3)
      bl        -0x17F6C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0E88
 * Size:	000024
 */
void Game::Houdai::Obj::finishIKMotion(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2F0(r3)
      bl        -0x17F6C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0EAC
 * Size:	000024
 */
void Game::Houdai::Obj::forceFinishIKMotion(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2F0(r3)
      bl        -0x17F84
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0ED0
 * Size:	000024
 */
void Game::Houdai::Obj::isFinishIKMotion(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2F0(r3)
      bl        -0x17E80
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0EF4
 * Size:	000024
 */
void Game::Houdai::Obj::startBlendMotion(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2F0(r3)
      bl        -0x17FB8
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0F18
 * Size:	000024
 */
void Game::Houdai::Obj::finishBlendMotion(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2F0(r3)
      bl        -0x17F80
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0F3C
 * Size:	000020
 */
void Game::Houdai::Obj::getTraceCentrePosition(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0x2F0(r4)
      lfs       f0, 0x44(r4)
      stfs      f0, 0x0(r3)
      lfs       f0, 0x48(r4)
      stfs      f0, 0x4(r3)
      lfs       f0, 0x4C(r4)
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0F5C
 * Size:	000048
 */
void Game::Houdai::Obj::createShadowSystem(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0xC4
      bl        -0x29D0D0
      mr.       r0, r3
      beq-      .loc_0x30
      mr        r4, r31
      bl        -0x1B08
      mr        r0, r3

    .loc_0x30:
      stw       r0, 0x2FC(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C0FA4
 * Size:	000074
 */
void Game::Houdai::Obj::setupShadowSystem(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r27, r3
      lwz       r3, 0x2FC(r3)
      bl        -0x18C4
      li        r29, 0
      mr        r30, r27

    .loc_0x24:
      li        r28, 0
      mr        r31, r30

    .loc_0x2C:
      lwz       r3, 0x2FC(r27)
      mr        r4, r29
      mr        r5, r28
      addi      r6, r31, 0x304
      bl        -0x1738
      addi      r28, r28, 0x1
      addi      r31, r31, 0xC
      cmpwi     r28, 0x4
      blt+      .loc_0x2C
      addi      r29, r29, 0x1
      addi      r30, r30, 0x30
      cmpwi     r29, 0x4
      blt+      .loc_0x24
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	802C1018
 * Size:	000024
 */
void Game::Houdai::Obj::doAnimationShadowSystem(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x2FC(r3)
      bl        -0x1768
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C103C
 * Size:	000078
 */
void Game::Houdai::Obj::setShotGunEmitKeepTimerOn(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stfd      f31, 0x20(r1)
      psq_st    f31,0x28(r1),0,0
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lwz       r3, 0xC0(r3)
      lfs       f1, 0x90C(r3)
      lfs       f0, 0x934(r3)
      fsubs     f31, f1, f0
      bl        -0x1F7AC8
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f2, -0x1E40(r2)
      stw       r0, 0x8(r1)
      lfs       f0, -0x1E44(r2)
      lfd       f1, 0x8(r1)
      fsubs     f1, f1, f2
      fmuls     f1, f31, f1
      fdivs     f0, f1, f0
      stfs      f0, 0x2CC(r31)
      psq_l     f31,0x28(r1),0,0
      lwz       r0, 0x34(r1)
      lfd       f31, 0x20(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	802C10B4
 * Size:	000078
 */
void Game::Houdai::Obj::setShotGunEmitKeepTimerOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stfd      f31, 0x20(r1)
      psq_st    f31,0x28(r1),0,0
      stw       r31, 0x1C(r1)
      mr        r31, r3
      lwz       r3, 0xC0(r3)
      lfs       f1, 0x95C(r3)
      lfs       f0, 0x984(r3)
      fsubs     f31, f1, f0
      bl        -0x1F7B40
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfd       f2, -0x1E40(r2)
      stw       r0, 0x8(r1)
      lfs       f0, -0x1E44(r2)
      lfd       f1, 0x8(r1)
      fsubs     f1, f1, f2
      fmuls     f1, f31, f1
      fdivs     f0, f1, f0
      stfs      f0, 0x2CC(r31)
      psq_l     f31,0x28(r1),0,0
      lwz       r0, 0x34(r1)
      lfd       f31, 0x20(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	802C112C
 * Size:	000030
 */
void Game::Houdai::Obj::updateShotGunTimer(void)
{
    /*
    .loc_0x0:
      lwz       r0, 0x1E0(r3)
      rlwinm.   r0,r0,0,30,30
      beq-      .loc_0x18
      lfs       f0, -0x1E68(r2)
      stfs      f0, 0x2C8(r3)
      blr

    .loc_0x18:
      lwz       r4, -0x6514(r13)
      lfs       f1, 0x2C8(r3)
      lfs       f0, 0x54(r4)
      fadds     f0, f1, f0
      stfs      f0, 0x2C8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802C115C
 * Size:	00001C
 */
void Game::Houdai::Obj::isTransitShotGunState(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0xC0(r3)
      lfs       f1, 0x2C8(r3)
      lfs       f0, 0x474(r4)
      fcmpo     cr0, f1, f0
      mfcr      r0
      rlwinm    r3,r0,2,31,31
      blr
    */
}

/*
 * --INFO--
 * Address:	802C1178
 * Size:	000048
 */
void Game::Houdai::Obj::createShotGun(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x3C
      bl        -0x29D2EC
      mr.       r0, r3
      beq-      .loc_0x30
      mr        r4, r31
      bl        0x3334
      mr        r0, r3

    .loc_0x30:
      stw       r0, 0x300(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C11C0
 * Size:	000024
 */
void Game::Houdai::Obj::setupShotGun(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x300(r3)
      bl        0x3544
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C11E4
 * Size:	000024
 */
void setShotGunTarget__Q34Game6Houdai3ObjFR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x300(r3)
      bl        0x3638
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C1208
 * Size:	000024
 */
void Game::Houdai::Obj::resetShotGunCallBack(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x300(r3)
      bl        0x35B0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C122C
 * Size:	000024
 */
void Game::Houdai::Obj::setShotGunCallBack(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x300(r3)
      bl        0x3598
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C1250
 * Size:	000024
 */
void Game::Houdai::Obj::doUpdateShotGun(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x300(r3)
      bl        0x39A8
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C1274
 * Size:	000024
 */
void Game::Houdai::Obj::doUpdateCommonShotGun(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x300(r3)
      bl        0x3A08
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C1298
 * Size:	000024
 */
void Game::Houdai::Obj::startShotGunRotation(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x300(r3)
      bl        0x3534
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C12BC
 * Size:	000024
 */
void Game::Houdai::Obj::finishShotGunRotation(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x300(r3)
      bl        0x3534
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C12E0
 * Size:	000024
 */
void Game::Houdai::Obj::isShotGunRotation(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x300(r3)
      bl        0x3524
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C1304
 * Size:	000024
 */
void Game::Houdai::Obj::isShotGunLockOn(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x300(r3)
      bl        0x3508
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C1328
 * Size:	000024
 */
void Game::Houdai::Obj::isFinishShotGun(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x300(r3)
      bl        0x34EC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C134C
 * Size:	00005C
 */
void Game::Houdai::Obj::emitShotGun(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x300(r3)
      bl        0x34E4
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xF4(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      li        r4, 0x5934
      li        r5, 0
      lwz       r12, 0xC(r12)
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
 * Address:	802C13A8
 * Size:	000024
 */
void Game::Houdai::Obj::forceFinishShotGun(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x300(r3)
      bl        0x394C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C13CC
 * Size:	000038
 */
void Game::Houdai::Obj::setupCollision(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x7268
      stw       r0, 0x14(r1)
      addi      r4, r4, 0x7431
      lwz       r3, 0x114(r3)
      bl        -0x18B5A0
      cmplwi    r3, 0
      beq-      .loc_0x28
      bl        -0x18A054

    .loc_0x28:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C1404
 * Size:	0000C8
 */
void Game::Houdai::Obj::startBossChargeBGM(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      stw       r30, 0x8(r1)
      lwz       r30, 0x28C(r3)
      lwz       r12, 0x28(r30)
      mr        r3, r30
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x5
      beq-      .loc_0x70
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x70
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x7
      bne-      .loc_0x74

    .loc_0x70:
      li        r31, 0x1

    .loc_0x74:
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0x98
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x4E68
      li        r4, 0x454
      subi      r5, r5, 0x4E50
      crclr     6, 0x6
      bl        -0x296E58

    .loc_0x98:
      mr        r3, r30
      li        r4, 0x2
      lwz       r12, 0x28(r30)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl
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
 * Address:	802C14CC
 * Size:	0000DC
 */
void Game::Houdai::Obj::startBossAttackLoopBGM(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      lbz       r0, 0x2EF(r3)
      cmplwi    r0, 0
      bne-      .loc_0xC4
      li        r0, 0x1
      li        r31, 0
      stb       r0, 0x2EF(r3)
      lwz       r30, 0x28C(r3)
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x5
      beq-      .loc_0x84
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x84
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x7
      bne-      .loc_0x88

    .loc_0x84:
      li        r31, 0x1

    .loc_0x88:
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0xAC
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x4E68
      li        r4, 0x454
      subi      r5, r5, 0x4E50
      crclr     6, 0x6
      bl        -0x296F34

    .loc_0xAC:
      mr        r3, r30
      li        r4, 0x8
      lwz       r12, 0x28(r30)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl

    .loc_0xC4:
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
 * Address:	802C15A8
 * Size:	0000D8
 */
void Game::Houdai::Obj::finishBossAttackLoopBGM(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      lbz       r0, 0x2EF(r3)
      cmplwi    r0, 0
      beq-      .loc_0xC0
      li        r31, 0
      stb       r31, 0x2EF(r3)
      lwz       r30, 0x28C(r3)
      lwz       r12, 0x28(r30)
      mr        r3, r30
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x5
      beq-      .loc_0x80
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x80
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x7
      bne-      .loc_0x84

    .loc_0x80:
      li        r31, 0x1

    .loc_0x84:
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0xA8
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x4E68
      li        r4, 0x454
      subi      r5, r5, 0x4E50
      crclr     6, 0x6
      bl        -0x29700C

    .loc_0xA8:
      mr        r3, r30
      li        r4, 0x1
      lwz       r12, 0x28(r30)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl

    .loc_0xC0:
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
 * Address:	802C1680
 * Size:	0000D4
 */
void Game::Houdai::Obj::startStoneStateBossAttackLoopBGM(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      lbz       r0, 0x2EF(r3)
      cmplwi    r0, 0
      beq-      .loc_0xBC
      lwz       r30, 0x28C(r3)
      li        r31, 0
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x5
      beq-      .loc_0x7C
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x7C
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x7
      bne-      .loc_0x80

    .loc_0x7C:
      li        r31, 0x1

    .loc_0x80:
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0xA4
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x4E68
      li        r4, 0x454
      subi      r5, r5, 0x4E50
      crclr     6, 0x6
      bl        -0x2970E0

    .loc_0xA4:
      mr        r3, r30
      li        r4, 0x1
      lwz       r12, 0x28(r30)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl

    .loc_0xBC:
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
 * Address:	802C1754
 * Size:	0000D4
 */
void Game::Houdai::Obj::finishStoneStateBossAttackLoopBGM(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      lbz       r0, 0x2EF(r3)
      cmplwi    r0, 0
      beq-      .loc_0xBC
      lwz       r30, 0x28C(r3)
      li        r31, 0
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x5
      beq-      .loc_0x7C
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x7C
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x7
      bne-      .loc_0x80

    .loc_0x7C:
      li        r31, 0x1

    .loc_0x80:
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0xA4
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x4E68
      li        r4, 0x454
      subi      r5, r5, 0x4E50
      crclr     6, 0x6
      bl        -0x2971B4

    .loc_0xA4:
      mr        r3, r30
      li        r4, 0x8
      lwz       r12, 0x28(r30)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl

    .loc_0xBC:
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
 * Address:	802C1828
 * Size:	0000C8
 */
void Game::Houdai::Obj::startBossFlickBGM(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      stw       r30, 0x8(r1)
      lwz       r30, 0x28C(r3)
      lwz       r12, 0x28(r30)
      mr        r3, r30
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x5
      beq-      .loc_0x70
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x70
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x7
      bne-      .loc_0x74

    .loc_0x70:
      li        r31, 0x1

    .loc_0x74:
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0x98
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x4E68
      li        r4, 0x454
      subi      r5, r5, 0x4E50
      crclr     6, 0x6
      bl        -0x29727C

    .loc_0x98:
      mr        r3, r30
      li        r4, 0x4
      lwz       r12, 0x28(r30)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl
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
 * Address:	802C18F0
 * Size:	0000FC
 */
void Game::Houdai::Obj::updateBossBGM(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r3
      lwz       r30, 0x28C(r3)
      lwz       r12, 0x28(r30)
      mr        r3, r30
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x5
      beq-      .loc_0x78
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x78
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x7
      bne-      .loc_0x7C

    .loc_0x78:
      li        r31, 0x1

    .loc_0x7C:
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0xA0
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x4E68
      li        r4, 0x454
      subi      r5, r5, 0x4E50
      crclr     6, 0x6
      bl        -0x29734C

    .loc_0xA0:
      lwz       r0, 0x1F4(r29)
      cmpwi     r0, 0
      beq-      .loc_0xC8
      mr        r3, r30
      li        r4, 0x1
      lwz       r12, 0x28(r30)
      lwz       r12, 0xD8(r12)
      mtctr     r12
      bctrl
      b         .loc_0xE0

    .loc_0xC8:
      mr        r3, r30
      li        r4, 0
      lwz       r12, 0x28(r30)
      lwz       r12, 0xD8(r12)
      mtctr     r12
      bctrl

    .loc_0xE0:
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
 * Address:	802C19EC
 * Size:	0000BC
 */
void Game::Houdai::Obj::resetBossAppearBGM(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      stw       r30, 0x8(r1)
      lwz       r30, 0x28C(r3)
      lwz       r12, 0x28(r30)
      mr        r3, r30
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x5
      beq-      .loc_0x70
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x70
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x7
      bne-      .loc_0x74

    .loc_0x70:
      li        r31, 0x1

    .loc_0x74:
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0x98
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x4E68
      li        r4, 0x454
      subi      r5, r5, 0x4E50
      crclr     6, 0x6
      bl        -0x297440

    .loc_0x98:
      mr        r3, r30
      li        r4, 0
      bl        0x19DF64
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
 * Address:	802C1AA8
 * Size:	0000BC
 */
void Game::Houdai::Obj::setBossAppearBGM(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      stw       r30, 0x8(r1)
      lwz       r30, 0x28C(r3)
      lwz       r12, 0x28(r30)
      mr        r3, r30
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x5
      beq-      .loc_0x70
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x70
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x7
      bne-      .loc_0x74

    .loc_0x70:
      li        r31, 0x1

    .loc_0x74:
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0x98
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x4E68
      li        r4, 0x454
      subi      r5, r5, 0x4E50
      crclr     6, 0x6
      bl        -0x2974FC

    .loc_0x98:
      mr        r3, r30
      li        r4, 0x1
      bl        0x19DEA8
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
 * Address:	802C1B64
 * Size:	0005CC
 */
void Game::Houdai::Obj::createEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r6, 0x804E
      lis       r5, 0x804E
      stw       r0, 0x34(r1)
      lis       r4, 0x804D
      addi      r6, r6, 0x698C
      addi      r5, r5, 0x6810
      stmw      r22, 0x8(r1)
      mr        r22, r3
      addi      r3, r4, 0x1114
      addi      r26, r6, 0x14
      mr        r31, r22
      addi      r25, r5, 0x14
      addi      r30, r3, 0x14
      li        r24, 0

    .loc_0x40:
      li        r3, 0x18
      bl        -0x29DD04
      cmplwi    r3, 0
      beq-      .loc_0xBC
      lis       r5, 0x804B
      lis       r4, 0x804A
      subi      r0, r5, 0x5808
      lis       r6, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r4, 0x1D84
      lis       r5, 0x804E
      lis       r4, 0x804D
      stw       r0, 0x4(r3)
      addi      r0, r6, 0x698C
      li        r8, 0
      li        r7, 0x2B2
      stw       r0, 0x0(r3)
      addi      r6, r5, 0x6810
      li        r5, 0x205
      addi      r0, r4, 0x1114
      stw       r26, 0x4(r3)
      stw       r8, 0x8(r3)
      sth       r7, 0xC(r3)
      stb       r8, 0xE(r3)
      stw       r6, 0x0(r3)
      stw       r25, 0x4(r3)
      stw       r8, 0x10(r3)
      stw       r8, 0x14(r3)
      sth       r5, 0xC(r3)
      stw       r0, 0x0(r3)
      stw       r30, 0x4(r3)

    .loc_0xBC:
      addi      r24, r24, 0x1
      stw       r3, 0x3E8(r31)
      cmpwi     r24, 0x4
      addi      r31, r31, 0x4
      blt+      .loc_0x40
      lis       r7, 0x804D
      lis       r6, 0x804E
      lis       r5, 0x804D
      lis       r4, 0x804D
      lis       r3, 0x804D
      subi      r7, r7, 0x25A0
      addi      r6, r6, 0x68A8
      addi      r5, r5, 0x10C8
      addi      r4, r4, 0x107C
      addi      r3, r3, 0x1030
      mr        r30, r22
      addi      r31, r7, 0x14
      addi      r24, r6, 0x14
      addi      r29, r5, 0x14
      addi      r28, r4, 0x14
      addi      r27, r3, 0x14
      li        r23, 0

    .loc_0x114:
      li        r3, 0x18
      bl        -0x29DDD8
      cmplwi    r3, 0
      beq-      .loc_0x190
      lis       r5, 0x804B
      lis       r4, 0x804A
      subi      r0, r5, 0x5808
      lis       r6, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r4, 0x1D84
      lis       r5, 0x804E
      lis       r4, 0x804D
      stw       r0, 0x4(r3)
      addi      r0, r6, 0x698C
      li        r8, 0
      li        r7, 0x2B2
      stw       r0, 0x0(r3)
      addi      r6, r5, 0x6810
      li        r5, 0x1D
      subi      r0, r4, 0x25A0
      stw       r26, 0x4(r3)
      stw       r8, 0x8(r3)
      sth       r7, 0xC(r3)
      stb       r8, 0xE(r3)
      stw       r6, 0x0(r3)
      stw       r25, 0x4(r3)
      stw       r8, 0x10(r3)
      stw       r8, 0x14(r3)
      sth       r5, 0xC(r3)
      stw       r0, 0x0(r3)
      stw       r31, 0x4(r3)

    .loc_0x190:
      stw       r3, 0x3D8(r30)
      li        r3, 0x14
      bl        -0x29DE58
      cmplwi    r3, 0
      beq-      .loc_0x20C
      lis       r5, 0x804B
      lis       r4, 0x804A
      subi      r0, r5, 0x5808
      lis       r6, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r4, 0x1D84
      lis       r5, 0x804E
      lis       r4, 0x804D
      stw       r0, 0x4(r3)
      addi      r0, r6, 0x698C
      li        r8, 0
      li        r7, 0x2B2
      stw       r0, 0x0(r3)
      addi      r6, r5, 0x68A8
      li        r5, 0x20B
      addi      r0, r4, 0x10C8
      stw       r26, 0x4(r3)
      stw       r8, 0x8(r3)
      sth       r7, 0xC(r3)
      stb       r8, 0xE(r3)
      stw       r6, 0x0(r3)
      stw       r24, 0x4(r3)
      stw       r8, 0x10(r3)
      sth       r5, 0xC(r3)
      stw       r0, 0x0(r3)
      stw       r29, 0x4(r3)

    .loc_0x20C:
      stw       r3, 0x400(r30)
      li        r3, 0x14
      bl        -0x29DED4
      cmplwi    r3, 0
      beq-      .loc_0x288
      lis       r5, 0x804B
      lis       r4, 0x804A
      subi      r0, r5, 0x5808
      lis       r6, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r4, 0x1D84
      lis       r5, 0x804E
      lis       r4, 0x804D
      stw       r0, 0x4(r3)
      addi      r0, r6, 0x698C
      li        r8, 0
      li        r7, 0x2B2
      stw       r0, 0x0(r3)
      addi      r6, r5, 0x68A8
      li        r5, 0x20D
      addi      r0, r4, 0x107C
      stw       r26, 0x4(r3)
      stw       r8, 0x8(r3)
      sth       r7, 0xC(r3)
      stb       r8, 0xE(r3)
      stw       r6, 0x0(r3)
      stw       r24, 0x4(r3)
      stw       r8, 0x10(r3)
      sth       r5, 0xC(r3)
      stw       r0, 0x0(r3)
      stw       r28, 0x4(r3)

    .loc_0x288:
      stw       r3, 0x40C(r30)
      li        r3, 0x18
      bl        -0x29DF50
      cmplwi    r3, 0
      beq-      .loc_0x308
      lis       r5, 0x804B
      lis       r4, 0x804A
      subi      r0, r5, 0x5808
      lis       r6, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r4, 0x1D84
      lis       r5, 0x804E
      lis       r4, 0x804D
      stw       r0, 0x4(r3)
      addi      r0, r6, 0x698C
      li        r8, 0
      li        r7, 0x2B2
      stw       r0, 0x0(r3)
      addi      r6, r5, 0x6810
      li        r5, 0x203
      addi      r0, r4, 0x1030
      stw       r26, 0x4(r3)
      stw       r8, 0x8(r3)
      sth       r7, 0xC(r3)
      stb       r8, 0xE(r3)
      stw       r6, 0x0(r3)
      stw       r25, 0x4(r3)
      stw       r8, 0x10(r3)
      stw       r8, 0x14(r3)
      sth       r5, 0xC(r3)
      stw       r0, 0x0(r3)
      stw       r27, 0x4(r3)

    .loc_0x308:
      addi      r23, r23, 0x1
      stw       r3, 0x3CC(r30)
      cmpwi     r23, 0x3
      addi      r30, r30, 0x4
      blt+      .loc_0x114
      lis       r4, 0x804E
      lis       r3, 0x804D
      addi      r4, r4, 0x6940
      mr        r27, r22
      subi      r3, r3, 0x26D0
      li        r23, 0
      addi      r28, r4, 0x14
      addi      r29, r3, 0x14

    .loc_0x33C:
      li        r3, 0x14
      bl        -0x29E000
      cmplwi    r3, 0
      beq-      .loc_0x3B4
      lis       r5, 0x804B
      lis       r4, 0x804A
      subi      r0, r5, 0x5808
      lis       r6, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r4, 0x1D84
      lis       r5, 0x804E
      lis       r4, 0x804D
      stw       r0, 0x4(r3)
      addi      r0, r6, 0x698C
      li        r8, 0
      li        r7, 0x2B2
      stw       r0, 0x0(r3)
      addi      r6, r5, 0x6940
      li        r5, 0x27
      subi      r0, r4, 0x26D0
      stw       r26, 0x4(r3)
      stw       r8, 0x8(r3)
      sth       r7, 0xC(r3)
      stb       r8, 0xE(r3)
      stw       r6, 0x0(r3)
      stw       r28, 0x4(r3)
      stw       r8, 0x10(r3)
      sth       r5, 0xC(r3)
      stw       r0, 0x0(r3)
      stw       r29, 0x4(r3)

    .loc_0x3B4:
      addi      r23, r23, 0x1
      stw       r3, 0x3C4(r27)
      cmpwi     r23, 0x2
      addi      r27, r27, 0x4
      blt+      .loc_0x33C
      li        r3, 0x14
      bl        -0x29E08C
      cmplwi    r3, 0
      beq-      .loc_0x444
      lis       r5, 0x804B
      lis       r4, 0x804A
      subi      r0, r5, 0x5808
      lis       r6, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r4, 0x1D84
      lis       r5, 0x804E
      lis       r4, 0x804D
      stw       r0, 0x4(r3)
      addi      r0, r6, 0x698C
      addi      r4, r4, 0xFE4
      li        r8, 0
      stw       r0, 0x0(r3)
      li        r7, 0x2B2
      addi      r6, r5, 0x68A8
      li        r5, 0x204
      stw       r26, 0x4(r3)
      addi      r0, r4, 0x14
      stw       r8, 0x8(r3)
      sth       r7, 0xC(r3)
      stb       r8, 0xE(r3)
      stw       r6, 0x0(r3)
      stw       r24, 0x4(r3)
      stw       r8, 0x10(r3)
      sth       r5, 0xC(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)

    .loc_0x444:
      stw       r3, 0x3E4(r22)
      li        r3, 0x14
      bl        -0x29E10C
      cmplwi    r3, 0
      beq-      .loc_0x4C8
      lis       r5, 0x804B
      lis       r4, 0x804A
      subi      r0, r5, 0x5808
      lis       r6, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r4, 0x1D84
      lis       r5, 0x804E
      lis       r4, 0x804D
      stw       r0, 0x4(r3)
      addi      r0, r6, 0x698C
      addi      r7, r5, 0x685C
      addi      r4, r4, 0xF98
      stw       r0, 0x0(r3)
      li        r9, 0
      li        r8, 0x2B2
      addi      r6, r7, 0x14
      stw       r26, 0x4(r3)
      li        r5, 0x208
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

    .loc_0x4C8:
      stw       r3, 0x3F8(r22)
      li        r3, 0x14
      bl        -0x29E190
      cmplwi    r3, 0
      beq-      .loc_0x54C
      lis       r5, 0x804B
      lis       r4, 0x804A
      subi      r0, r5, 0x5808
      lis       r6, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r4, 0x1D84
      lis       r5, 0x804E
      lis       r4, 0x804D
      stw       r0, 0x4(r3)
      addi      r0, r6, 0x698C
      addi      r7, r5, 0x685C
      addi      r4, r4, 0xF4C
      stw       r0, 0x0(r3)
      li        r9, 0
      li        r8, 0x2B2
      addi      r6, r7, 0x14
      stw       r26, 0x4(r3)
      li        r5, 0x20C
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

    .loc_0x54C:
      stw       r3, 0x3FC(r22)
      li        r3, 0x54
      bl        -0x29E214
      mr.       r23, r3
      beq-      .loc_0x584
      li        r4, 0
      li        r5, 0x1F9
      li        r6, 0x1FA
      li        r7, 0x1FB
      li        r8, 0x1FC
      bl        0xEE584
      lis       r3, 0x804D
      addi      r0, r3, 0xF30
      stw       r0, 0x0(r23)

    .loc_0x584:
      stw       r23, 0x418(r22)
      li        r3, 0x2C
      bl        -0x29E24C
      mr.       r23, r3
      beq-      .loc_0x5B4
      li        r4, 0
      li        r5, 0x200
      li        r6, 0x201
      bl        0xEE394
      lis       r3, 0x804D
      addi      r0, r3, 0xF14
      stw       r0, 0x0(r23)

    .loc_0x5B4:
      stw       r23, 0x41C(r22)
      lmw       r22, 0x8(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	802C2130
 * Size:	0001A8
 */
void Game::Houdai::Obj::setupEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      subi      r4, r2, 0x1E50
      stw       r0, 0x34(r1)
      stmw      r27, 0x1C(r1)
      mr        r31, r3
      addi      r12, r31, 0x310
      addi      r11, r31, 0x31C
      addi      r10, r31, 0x340
      addi      r9, r31, 0x34C
      addi      r8, r31, 0x370
      addi      r7, r31, 0x37C
      addi      r6, r31, 0x3A0
      addi      r5, r31, 0x3AC
      addi      r0, r31, 0x328
      lwz       r3, 0x3E8(r3)
      stw       r12, 0x10(r3)
      stw       r11, 0x14(r3)
      addi      r3, r31, 0x304
      lwz       r29, 0x3EC(r31)
      stw       r10, 0x10(r29)
      stw       r9, 0x14(r29)
      lwz       r29, 0x3F0(r31)
      stw       r8, 0x10(r29)
      stw       r7, 0x14(r29)
      lwz       r29, 0x3F4(r31)
      stw       r6, 0x10(r29)
      stw       r5, 0x14(r29)
      lwz       r30, 0x3D8(r31)
      stw       r3, 0x10(r30)
      stw       r12, 0x14(r30)
      lwz       r3, 0x3DC(r31)
      stw       r12, 0x10(r3)
      stw       r11, 0x14(r3)
      lwz       r3, 0x3E0(r31)
      stw       r11, 0x10(r3)
      stw       r0, 0x14(r3)
      lwz       r3, 0x3CC(r31)
      stw       r8, 0x10(r3)
      stw       r7, 0x14(r3)
      lwz       r3, 0x3D0(r31)
      stw       r10, 0x10(r3)
      stw       r9, 0x14(r3)
      lwz       r3, 0x3D4(r31)
      stw       r6, 0x10(r3)
      stw       r5, 0x14(r3)
      lwz       r3, 0x3C4(r31)
      stw       r12, 0x10(r3)
      lwz       r3, 0x3C8(r31)
      stw       r11, 0x10(r3)
      lwz       r3, 0x174(r31)
      bl        0x17CDE8
      mr        r28, r3
      bl        0x16769C
      lwz       r4, 0x3E4(r31)
      stw       r3, 0x10(r4)
      mr        r3, r28
      bl        0x16768C
      lwz       r4, 0x3F8(r31)
      stw       r3, 0x10(r4)
      mr        r3, r28
      bl        0x16767C
      lwz       r4, 0x3FC(r31)
      stw       r3, 0x10(r4)
      mr        r3, r28
      bl        0x16766C
      mr        r4, r3
      lwz       r3, 0x418(r31)
      bl        0xEE4C8
      mr        r3, r28
      bl        0x167658
      mr        r4, r3
      lwz       r3, 0x41C(r31)
      bl        0xEE34C
      lis       r3, 0x8049
      mr        r29, r31
      subi      r5, r3, 0x4E20
      addi      r30, r1, 0x8
      lwz       r4, 0x0(r5)
      li        r27, 0
      lwz       r3, 0x4(r5)
      lwz       r0, 0x8(r5)
      stw       r4, 0x8(r1)
      stw       r3, 0xC(r1)
      stw       r0, 0x10(r1)

    .loc_0x154:
      lwz       r3, 0x174(r31)
      lwz       r4, 0x0(r30)
      bl        0x17CD58
      mr        r28, r3
      bl        0x16760C
      lwz       r4, 0x400(r29)
      stw       r3, 0x10(r4)
      mr        r3, r28
      bl        0x1675FC
      lwz       r4, 0x40C(r29)
      addi      r27, r27, 0x1
      cmpwi     r27, 0x3
      addi      r29, r29, 0x4
      stw       r3, 0x10(r4)
      addi      r30, r30, 0x4
      blt+      .loc_0x154
      lmw       r27, 0x1C(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	802C22D8
 * Size:	000384
 */
void Game::Houdai::Obj::createOnGroundEffect((int, Game::WaterBox*))
{
    /*
    .loc_0x0:
      stwu      r1, -0xD0(r1)
      mflr      r0
      stw       r0, 0xD4(r1)
      stw       r31, 0xCC(r1)
      stw       r30, 0xC8(r1)
      mr.       r30, r4
      stw       r29, 0xC4(r1)
      mr        r29, r3
      mulli     r31, r30, 0x30
      add       r3, r29, r31
      lfs       f3, 0x328(r3)
      lfs       f2, 0x32C(r3)
      lfs       f1, 0x330(r3)
      stfs      f3, 0x64(r1)
      stfs      f2, 0x68(r1)
      stfs      f1, 0x6C(r1)
      bne-      .loc_0x190
      cmplwi    r5, 0
      beq-      .loc_0x118
      mr        r3, r5
      lwz       r12, 0x0(r5)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x0(r3)
      lis       r3, 0x804B
      subi      r0, r3, 0x5808
      li        r5, 0
      lis       r3, 0x804E
      stw       r0, 0x9C(r1)
      addi      r0, r3, 0x6A50
      lfs       f1, 0x64(r1)
      lfs       f0, 0x6C(r1)
      lis       r4, 0x804B
      lis       r3, 0x804D
      li        r8, 0x28
      subi      r9, r4, 0x5814
      li        r7, 0x29
      li        r6, 0x2A
      stw       r0, 0x9C(r1)
      subi      r0, r3, 0x27B4
      addi      r3, r1, 0x9C
      stfs      f2, 0x68(r1)
      addi      r4, r1, 0x54
      stw       r9, 0x54(r1)
      stfs      f1, 0x58(r1)
      stfs      f2, 0x5C(r1)
      stfs      f0, 0x60(r1)
      sth       r8, 0xA0(r1)
      sth       r7, 0xA2(r1)
      sth       r6, 0xA4(r1)
      stw       r5, 0xA8(r1)
      stw       r5, 0xAC(r1)
      stw       r5, 0xB0(r1)
      stw       r0, 0x9C(r1)
      bl        0xECD08
      addi      r4, r31, 0x328
      li        r3, 0x380D
      add       r4, r29, r4
      bl        0x1ABCF0
      cmplwi    r3, 0
      beq-      .loc_0x17C
      lwz       r12, 0x10(r3)
      li        r4, 0
      lfs       f1, -0x1DEC(r2)
      li        r5, 0
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x17C

    .loc_0x118:
      lis       r3, 0x804B
      li        r5, 0
      subi      r0, r3, 0x5808
      lis       r3, 0x804E
      stw       r0, 0x34(r1)
      addi      r0, r3, 0x6A64
      lis       r4, 0x804B
      lis       r3, 0x804D
      stw       r0, 0x34(r1)
      subi      r4, r4, 0x5814
      addi      r0, r3, 0xF00
      li        r7, 0x115
      li        r6, 0x116
      stw       r4, 0x44(r1)
      addi      r3, r1, 0x34
      addi      r4, r1, 0x44
      stfs      f3, 0x48(r1)
      stfs      f2, 0x4C(r1)
      stfs      f1, 0x50(r1)
      sth       r7, 0x38(r1)
      sth       r6, 0x3A(r1)
      stw       r5, 0x3C(r1)
      stw       r5, 0x40(r1)
      stw       r0, 0x34(r1)
      bl        0xECBC4

    .loc_0x17C:
      addi      r4, r31, 0x328
      li        r3, 0x5927
      add       r4, r29, r4
      bl        0x1ABC54
      b         .loc_0x368

    .loc_0x190:
      cmplwi    r5, 0
      beq-      .loc_0x294
      mr        r3, r5
      lwz       r12, 0x0(r5)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x0(r3)
      li        r5, 0
      lwz       r8, 0x64(r1)
      lis       r3, 0x804B
      stfs      f0, 0x68(r1)
      subi      r0, r3, 0x5808
      lwz       r6, 0x6C(r1)
      lis       r4, 0x804B
      lwz       r7, 0x68(r1)
      lis       r3, 0x804E
      stw       r8, 0x8(r1)
      subi      r11, r4, 0x5814
      lfs       f0, -0x1DE8(r2)
      lis       r4, 0x804B
      stw       r7, 0xC(r1)
      addi      r9, r3, 0x6A50
      lfs       f3, 0x8(r1)
      lis       r3, 0x804F
      stw       r6, 0x10(r1)
      li        r8, 0x54
      lfs       f2, 0xC(r1)
      li        r7, 0x55
      stw       r0, 0x70(r1)
      li        r6, 0x56
      lfs       f1, 0x10(r1)
      subi      r10, r4, 0x5D24
      stw       r11, 0x88(r1)
      subi      r0, r3, 0x7A04
      addi      r3, r1, 0x70
      addi      r4, r1, 0x88
      stw       r9, 0x70(r1)
      stfs      f3, 0x8C(r1)
      stfs      f2, 0x90(r1)
      stfs      f1, 0x94(r1)
      stw       r10, 0x88(r1)
      stfs      f0, 0x98(r1)
      sth       r8, 0x74(r1)
      sth       r7, 0x76(r1)
      sth       r6, 0x78(r1)
      stw       r5, 0x7C(r1)
      stw       r5, 0x80(r1)
      stw       r5, 0x84(r1)
      stw       r0, 0x70(r1)
      bl        0x10629C
      addi      r4, r31, 0x328
      li        r3, 0x380C
      add       r4, r29, r4
      bl        0x1ABB74
      cmplwi    r3, 0
      beq-      .loc_0x2FC
      lwz       r12, 0x10(r3)
      li        r4, 0
      lfs       f1, -0x1DE4(r2)
      li        r5, 0
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      b         .loc_0x2FC

    .loc_0x294:
      lis       r3, 0x804B
      lfs       f0, -0x1E64(r2)
      subi      r0, r3, 0x5808
      lis       r3, 0x804E
      stw       r0, 0x14(r1)
      addi      r0, r3, 0x6A78
      lis       r4, 0x804B
      lis       r3, 0x804F
      stw       r0, 0x14(r1)
      subi      r4, r4, 0x5814
      subi      r0, r3, 0x79F0
      li        r6, 0x53
      li        r5, 0
      stfs      f0, 0x20(r1)
      lfs       f0, -0x1DE8(r2)
      addi      r3, r1, 0x14
      stw       r4, 0x24(r1)
      addi      r4, r1, 0x24
      stfs      f3, 0x28(r1)
      stfs      f2, 0x2C(r1)
      stfs      f1, 0x30(r1)
      sth       r6, 0x18(r1)
      stw       r5, 0x1C(r1)
      stw       r0, 0x14(r1)
      stfs      f0, 0x20(r1)
      bl        0x106194

    .loc_0x2FC:
      lbz       r0, 0x2EC(r29)
      cmplwi    r0, 0
      beq-      .loc_0x358
      cmpwi     r30, 0x2
      li        r0, 0
      bne-      .loc_0x31C
      li        r0, 0
      b         .loc_0x338

    .loc_0x31C:
      cmpwi     r30, 0x1
      bne-      .loc_0x32C
      li        r0, 0x1
      b         .loc_0x338

    .loc_0x32C:
      cmpwi     r30, 0x3
      bne-      .loc_0x338
      li        r0, 0x2

    .loc_0x338:
      rlwinm    r0,r0,2,0,29
      li        r4, 0
      add       r3, r29, r0
      lwz       r3, 0x3CC(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x358:
      addi      r4, r31, 0x328
      li        r3, 0x5926
      add       r4, r29, r4
      bl        0x1ABA78

    .loc_0x368:
      lwz       r0, 0xD4(r1)
      lwz       r31, 0xCC(r1)
      lwz       r30, 0xC8(r1)
      lwz       r29, 0xC4(r1)
      mtlr      r0
      addi      r1, r1, 0xD0
      blr
    */
}

/*
 * --INFO--
 * Address:	802C265C
 * Size:	000168
 */
void Game::Houdai::Obj::createOffGroundEffect((int, Game::WaterBox*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmpwi     r4, 0
      stw       r0, 0x14(r1)
      lwz       r5, 0xC0(r3)
      lfs       f1, 0x200(r3)
      lfs       f0, 0x104(r5)
      fdivs     f1, f1, f0
      bne-      .loc_0xC0
      lfs       f0, -0x1DE0(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x5C
      lwz       r12, 0x0(r3)
      lwz       r12, 0xF4(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      li        r4, 0x592D
      li        r5, 0
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      b         .loc_0x158

    .loc_0x5C:
      lfs       f0, -0x1DDC(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x94
      lwz       r12, 0x0(r3)
      lwz       r12, 0xF4(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      li        r4, 0x592C
      li        r5, 0
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      b         .loc_0x158

    .loc_0x94:
      lwz       r12, 0x0(r3)
      lwz       r12, 0xF4(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      li        r4, 0x592B
      li        r5, 0
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      b         .loc_0x158

    .loc_0xC0:
      lfs       f0, -0x1DE0(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xF8
      lwz       r12, 0x0(r3)
      lwz       r12, 0xF4(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      li        r4, 0x592A
      li        r5, 0
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      b         .loc_0x158

    .loc_0xF8:
      lfs       f0, -0x1DDC(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x130
      lwz       r12, 0x0(r3)
      lwz       r12, 0xF4(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      li        r4, 0x5929
      li        r5, 0
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      b         .loc_0x158

    .loc_0x130:
      lwz       r12, 0x0(r3)
      lwz       r12, 0xF4(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      li        r4, 0x5928
      li        r5, 0
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0x158:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802C27C4
 * Size:	00005C
 */
void Game::Houdai::Obj::startPinchJointEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      lwz       r3, 0x3C4(r31)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x4
      cmpwi     r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	802C2820
 * Size:	000058
 */
void Game::Houdai::Obj::finishPinchJointEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      lwz       r3, 0x3C4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x4
      cmpwi     r30, 0x2
      blt+      .loc_0x1C
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
 * Address:	802C2878
 * Size:	000194
 */
void Game::Houdai::Obj::createHoudaiDeadEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x70(r1)
      mflr      r0
      lis       r6, 0x804B
      lis       r5, 0x804B
      stw       r0, 0x74(r1)
      lis       r4, 0x804E
      stmw      r21, 0x44(r1)
      mr        r31, r3
      lis       r3, 0x804D
      subi      r25, r6, 0x5814
      mr        r23, r31
      subi      r26, r5, 0x5808
      addi      r27, r4, 0x6A78
      subi      r30, r3, 0x27DC
      li        r22, 0

    .loc_0x3C:
      addi      r24, r23, 0xC
      li        r21, 0x1
      li        r28, 0x1C
      li        r29, 0

    .loc_0x4C:
      stw       r25, 0x30(r1)
      addi      r3, r1, 0x24
      addi      r4, r1, 0x30
      lfs       f0, 0x304(r24)
      stfs      f0, 0x34(r1)
      lfs       f0, 0x308(r24)
      stfs      f0, 0x38(r1)
      lfs       f0, 0x30C(r24)
      stw       r26, 0x24(r1)
      stw       r27, 0x24(r1)
      stfs      f0, 0x3C(r1)
      sth       r28, 0x28(r1)
      stw       r29, 0x2C(r1)
      stw       r30, 0x24(r1)
      bl        0xEC688
      addi      r21, r21, 0x1
      addi      r24, r24, 0xC
      cmpwi     r21, 0x3
      blt+      .loc_0x4C
      addi      r22, r22, 0x1
      addi      r23, r23, 0x30
      cmpwi     r22, 0x4
      blt+      .loc_0x3C
      li        r21, 0
      mr        r23, r31

    .loc_0xB0:
      lwz       r3, 0x3D8(r23)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      addi      r21, r21, 0x1
      addi      r23, r23, 0x4
      cmpwi     r21, 0x3
      blt+      .loc_0xB0
      lwz       r3, 0x41C(r31)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lis       r3, 0x804B
      lis       r5, 0x804B
      subi      r0, r3, 0x5814
      lis       r4, 0x804E
      stw       r0, 0x14(r1)
      lis       r3, 0x804D
      subi      r8, r5, 0x5808
      addi      r7, r4, 0x6A78
      lfs       f0, 0x18C(r31)
      addi      r0, r3, 0xEEC
      li        r6, 0x202
      li        r5, 0
      stfs      f0, 0x18(r1)
      addi      r3, r1, 0x8
      addi      r4, r1, 0x14
      lfs       f0, 0x190(r31)
      stfs      f0, 0x1C(r1)
      lfs       f0, 0x194(r31)
      stw       r8, 0x8(r1)
      stw       r7, 0x8(r1)
      stfs      f0, 0x20(r1)
      sth       r6, 0xC(r1)
      stw       r5, 0x10(r1)
      stw       r0, 0x8(r1)
      bl        0xEC5BC
      li        r25, 0
      mr        r23, r31

    .loc_0x15C:
      lwz       r3, 0x3C4(r23)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r25, r25, 0x1
      addi      r23, r23, 0x4
      cmpwi     r25, 0x2
      blt+      .loc_0x15C
      lmw       r21, 0x44(r1)
      lwz       r0, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	802C2A0C
 * Size:	000120
 */
void Game::Houdai::Obj::updatePinchLife(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r3
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x104
      lwz       r3, 0xC0(r29)
      lbz       r0, 0x2EC(r29)
      lfs       f1, 0x200(r29)
      lfs       f0, 0x104(r3)
      cmplwi    r0, 0
      fdivs     f1, f1, f0
      beq-      .loc_0x94
      lfs       f0, -0x1DDC(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x104
      li        r31, 0
      mr        r30, r29

    .loc_0x64:
      lwz       r3, 0x3C4(r30)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r31, r31, 0x1
      addi      r30, r30, 0x4
      cmpwi     r31, 0x2
      blt+      .loc_0x64
      li        r0, 0
      stb       r0, 0x2EC(r29)
      b         .loc_0x104

    .loc_0x94:
      lfs       f0, -0x1DDC(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x104
      li        r31, 0
      mr        r30, r29

    .loc_0xA8:
      lwz       r3, 0x3C4(r30)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      addi      r31, r31, 0x1
      addi      r30, r30, 0x4
      cmpwi     r31, 0x2
      blt+      .loc_0xA8
      li        r0, 0x1
      mr        r3, r29
      stb       r0, 0x2EC(r29)
      lwz       r12, 0x0(r29)
      lwz       r12, 0xF4(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      li        r4, 0x5844
      li        r5, 0
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0x104:
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
 * Address:	802C2B2C
 * Size:	0000F0
 */
void Game::Houdai::Obj::createAppearEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lis       r5, 0x804B
      lis       r4, 0x804B
      stw       r0, 0x44(r1)
      subi      r0, r4, 0x5814
      subi      r9, r5, 0x5808
      lis       r4, 0x804E
      stw       r31, 0x3C(r1)
      mr        r31, r3
      addi      r8, r4, 0x6A64
      lis       r3, 0x804D
      stw       r0, 0x24(r1)
      addi      r0, r3, 0xED8
      li        r7, 0x206
      li        r6, 0x207
      lfs       f0, 0x18C(r31)
      li        r5, 0
      addi      r3, r1, 0x14
      addi      r4, r1, 0x24
      stfs      f0, 0x28(r1)
      lfs       f0, 0x190(r31)
      stfs      f0, 0x2C(r1)
      lfs       f0, 0x194(r31)
      stw       r9, 0x14(r1)
      stw       r8, 0x14(r1)
      stfs      f0, 0x30(r1)
      sth       r7, 0x18(r1)
      sth       r6, 0x1A(r1)
      stw       r5, 0x1C(r1)
      stw       r5, 0x20(r1)
      stw       r0, 0x14(r1)
      bl        0xEC468
      lwz       r3, 0x3F8(r31)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lis       r3, 0x804B
      lis       r4, 0x804E
      subi      r0, r3, 0x5808
      lis       r3, 0x804D
      stw       r0, 0x8(r1)
      addi      r0, r4, 0x6A78
      li        r6, 0x209
      li        r5, 0
      stw       r0, 0x8(r1)
      addi      r0, r3, 0xEC4
      addi      r3, r1, 0x8
      addi      r4, r1, 0x24
      sth       r6, 0xC(r1)
      stw       r5, 0x10(r1)
      stw       r0, 0x8(r1)
      bl        0xEC380
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	802C2C1C
 * Size:	000034
 */
void Game::Houdai::Obj::createAppearHahenEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x14(r1)
      lwz       r3, 0x3E4(r3)
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
 * Address:	802C2C50
 * Size:	00003C
 */
void Game::Houdai::Obj::createAppearFootEffect((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      rlwinm    r0,r4,2,0,29
      add       r3, r3, r0
      li        r4, 0
      lwz       r3, 0x3E8(r3)
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
 * Address:	802C2C8C
 * Size:	00007C
 */
void Game::Houdai::Obj::startSteamEffect((bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      rlwinm.   r0,r4,0,24,31
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      beq-      .loc_0x38
      lwz       r3, 0x3FC(r31)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x38:
      li        r30, 0

    .loc_0x3C:
      lwz       r3, 0x400(r31)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x4
      cmpwi     r30, 0x3
      blt+      .loc_0x3C
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
 * Address:	802C2D08
 * Size:	00006C
 */
void Game::Houdai::Obj::finishSteamEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      lwz       r3, 0x3FC(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      li        r30, 0

    .loc_0x30:
      lwz       r3, 0x400(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x4
      cmpwi     r30, 0x3
      blt+      .loc_0x30
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
 * Address:	802C2D74
 * Size:	00005C
 */
void Game::Houdai::Obj::startChimneyEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      lwz       r3, 0x40C(r31)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x4
      cmpwi     r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	802C2DD0
 * Size:	000058
 */
void Game::Houdai::Obj::finishChimneyEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      li        r30, 0

    .loc_0x1C:
      lwz       r3, 0x40C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x4
      cmpwi     r30, 0x3
      blt+      .loc_0x1C
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
 * Address:	802C2E28
 * Size:	000090
 */
void Game::Houdai::Obj::createShotGunOpenEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      subi      r4, r2, 0x1E50
      stw       r0, 0x34(r1)
      lwz       r3, 0x174(r3)
      bl        0x17C1A8
      bl        0x166A60
      lis       r4, 0x804B
      lfs       f2, 0x2C(r3)
      lfs       f1, 0x1C(r3)
      subi      r4, r4, 0x5808
      lfs       f0, 0xC(r3)
      lis       r3, 0x804E
      addi      r0, r3, 0x6A78
      lis       r5, 0x804B
      stw       r4, 0x8(r1)
      lis       r3, 0x804D
      subi      r4, r5, 0x5814
      li        r6, 0x20A
      li        r5, 0
      stw       r0, 0x8(r1)
      addi      r0, r3, 0xEB0
      addi      r3, r1, 0x8
      stw       r4, 0x14(r1)
      addi      r4, r1, 0x14
      stfs      f0, 0x18(r1)
      stfs      f1, 0x1C(r1)
      stfs      f2, 0x20(r1)
      sth       r6, 0xC(r1)
      stw       r5, 0x10(r1)
      stw       r0, 0x8(r1)
      bl        0xEC0E0
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	802C2EB8
 * Size:	000258
 */
void Game::Houdai::Obj::createDeadBombEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0xE0(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0xE4(r1)
      stmw      r21, 0xB4(r1)
      mr        r21, r3
      lwz       r3, 0x418(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lis       r3, 0x8051
      mr        r27, r21
      addi      r29, r3, 0x41E4
      li        r26, 0

    .loc_0x3C:
      cmpwi     r26, 0
      bne-      .loc_0x144
      lis       r8, 0x804B
      lis       r7, 0x8051
      lis       r6, 0x804D
      lis       r5, 0x804B
      lis       r4, 0x804E
      lis       r3, 0x804F
      mr        r28, r27
      subi      r30, r8, 0x5814
      addi      r31, r7, 0x41E4
      addi      r24, r6, 0xEA4
      subi      r23, r5, 0x5808
      addi      r22, r4, 0x6A64
      subi      r21, r3, 0x6048
      li        r25, 0

    .loc_0x7C:
      lwz       r12, 0x310(r28)
      li        r6, 0x1FE
      lwz       r11, 0x314(r28)
      li        r5, 0x1FF
      lwz       r10, 0x318(r28)
      li        r0, 0
      lwz       r9, 0x304(r28)
      addi      r3, r1, 0x44
      lwz       r8, 0x308(r28)
      addi      r4, r1, 0x7C
      lwz       r7, 0x30C(r28)
      stw       r12, 0x20(r1)
      lfs       f8, 0x0(r31)
      stw       r11, 0x24(r1)
      lfs       f7, 0x4(r29)
      stw       r10, 0x28(r1)
      lfs       f6, 0x8(r29)
      stw       r9, 0x2C(r1)
      lfs       f2, 0x20(r1)
      stw       r8, 0x30(r1)
      lfs       f5, 0x2C(r1)
      stw       r7, 0x34(r1)
      lfs       f4, 0x30(r1)
      stw       r23, 0x44(r1)
      lfs       f3, 0x34(r1)
      stw       r30, 0x7C(r1)
      lfs       f1, 0x24(r1)
      stw       r22, 0x44(r1)
      lfs       f0, 0x28(r1)
      stfs      f8, 0x80(r1)
      stfs      f7, 0x84(r1)
      stfs      f6, 0x88(r1)
      stw       r24, 0x7C(r1)
      stfs      f5, 0x8C(r1)
      stfs      f4, 0x90(r1)
      stfs      f3, 0x94(r1)
      stfs      f2, 0x98(r1)
      stfs      f1, 0x9C(r1)
      stfs      f0, 0xA0(r1)
      sth       r6, 0x48(r1)
      sth       r5, 0x4A(r1)
      stw       r0, 0x4C(r1)
      stw       r0, 0x50(r1)
      stw       r21, 0x44(r1)
      bl        0x1298F4
      addi      r25, r25, 0x1
      addi      r28, r28, 0xC
      cmpwi     r25, 0x3
      blt+      .loc_0x7C
      b         .loc_0x234

    .loc_0x144:
      lis       r8, 0x804B
      lis       r7, 0x8051
      lis       r6, 0x804D
      lis       r5, 0x804B
      lis       r4, 0x804E
      lis       r3, 0x804F
      mr        r28, r27
      subi      r31, r8, 0x5814
      addi      r21, r7, 0x41E4
      addi      r22, r6, 0xEA4
      subi      r23, r5, 0x5808
      addi      r24, r4, 0x6A78
      subi      r30, r3, 0x6034
      li        r25, 0

    .loc_0x17C:
      lwz       r11, 0x310(r28)
      li        r5, 0x1FD
      lwz       r10, 0x314(r28)
      li        r0, 0
      lwz       r9, 0x318(r28)
      addi      r3, r1, 0x38
      lwz       r8, 0x304(r28)
      addi      r4, r1, 0x54
      lwz       r7, 0x308(r28)
      lwz       r6, 0x30C(r28)
      stw       r11, 0x8(r1)
      lfs       f8, 0x0(r21)
      stw       r10, 0xC(r1)
      lfs       f7, 0x4(r29)
      stw       r9, 0x10(r1)
      lfs       f6, 0x8(r29)
      stw       r8, 0x14(r1)
      lfs       f2, 0x8(r1)
      stw       r7, 0x18(r1)
      lfs       f5, 0x14(r1)
      stw       r6, 0x1C(r1)
      lfs       f4, 0x18(r1)
      stw       r23, 0x38(r1)
      lfs       f3, 0x1C(r1)
      stw       r31, 0x54(r1)
      lfs       f1, 0xC(r1)
      stw       r24, 0x38(r1)
      lfs       f0, 0x10(r1)
      stfs      f8, 0x58(r1)
      stfs      f7, 0x5C(r1)
      stfs      f6, 0x60(r1)
      stw       r22, 0x54(r1)
      stfs      f5, 0x64(r1)
      stfs      f4, 0x68(r1)
      stfs      f3, 0x6C(r1)
      stfs      f2, 0x70(r1)
      stfs      f1, 0x74(r1)
      stfs      f0, 0x78(r1)
      sth       r5, 0x3C(r1)
      stw       r0, 0x40(r1)
      stw       r30, 0x38(r1)
      bl        0x12968C
      addi      r25, r25, 0x1
      addi      r28, r28, 0xC
      cmpwi     r25, 0x3
      blt+      .loc_0x17C

    .loc_0x234:
      addi      r26, r26, 0x1
      addi      r27, r27, 0x30
      cmpwi     r26, 0x4
      blt+      .loc_0x3C
      lmw       r21, 0xB4(r1)
      lwz       r0, 0xE4(r1)
      mtlr      r0
      addi      r1, r1, 0xE0
      blr
    */
}

/*
 * --INFO--
 * Address:	802C3110
 * Size:	00017C
 */
void Game::Houdai::Obj::effectDrawOn(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r3
      mr        r31, r29

    .loc_0x24:
      lwz       r3, 0x3C4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x4
      cmpwi     r30, 0x2
      blt+      .loc_0x24
      li        r30, 0
      mr        r31, r29

    .loc_0x50:
      lwz       r3, 0x3CC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x3D8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x4
      cmpwi     r30, 0x3
      blt+      .loc_0x50
      lwz       r3, 0x3E4(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      li        r30, 0
      mr        r31, r29

    .loc_0xA4:
      lwz       r3, 0x3E8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x4
      cmpwi     r30, 0x4
      blt+      .loc_0xA4
      lwz       r3, 0x3F8(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x3FC(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      li        r30, 0
      mr        r31, r29

    .loc_0xF8:
      lwz       r3, 0x400(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x40C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x4
      cmpwi     r30, 0x3
      blt+      .loc_0xF8
      lwz       r3, 0x418(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x41C(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x300(r29)
      bl        0x2408
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
 * Address:	802C328C
 * Size:	00017C
 */
void Game::Houdai::Obj::effectDrawOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r3
      mr        r31, r29

    .loc_0x24:
      lwz       r3, 0x3C4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x4
      cmpwi     r30, 0x2
      blt+      .loc_0x24
      li        r30, 0
      mr        r31, r29

    .loc_0x50:
      lwz       r3, 0x3CC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x3D8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x4
      cmpwi     r30, 0x3
      blt+      .loc_0x50
      lwz       r3, 0x3E4(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      li        r30, 0
      mr        r31, r29

    .loc_0xA4:
      lwz       r3, 0x3E8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x4
      cmpwi     r30, 0x4
      blt+      .loc_0xA4
      lwz       r3, 0x3F8(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x3FC(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      li        r30, 0
      mr        r31, r29

    .loc_0xF8:
      lwz       r3, 0x400(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x40C(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r30, r30, 0x1
      addi      r31, r31, 0x4
      cmpwi     r30, 0x3
      blt+      .loc_0xF8
      lwz       r3, 0x418(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x41C(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x300(r29)
      bl        0x2328
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
 * Address:	802C3408
 * Size:	00000C
 */
void efx::ArgPosPos::getName(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8049
      subi      r3, r3, 0x4E14
      blr
    */
}

/*
 * --INFO--
 * Address:	802C3414
 * Size:	00009C
 */
void efx::THdamaSteamBd::__dt(void)
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
      lis       r3, 0x804D
      addi      r3, r3, 0xF4C
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
      bl        -0x2337E4

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x29F3DC

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
 * Address:	802C34B0
 * Size:	00009C
 */
void efx::THdamaOnSteam1::__dt(void)
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
      lis       r3, 0x804D
      addi      r3, r3, 0xF98
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
      bl        -0x233880

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x29F478

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
 * Address:	802C354C
 * Size:	00009C
 */
void efx::THdamaOnHahen1::__dt(void)
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
      lis       r3, 0x804D
      addi      r3, r3, 0xFE4
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x68A8
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
      bl        -0x23391C

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x29F514

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
 * Address:	802C35E8
 * Size:	00009C
 */
void efx::THdamaHahen::__dt(void)
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
      lis       r3, 0x804D
      addi      r3, r3, 0x1030
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x6810
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
      bl        -0x2339B8

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x29F5B0

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
 * Address:	802C3684
 * Size:	00009C
 */
void efx::THdamaSteamSt::__dt(void)
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
      lis       r3, 0x804D
      addi      r3, r3, 0x107C
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x68A8
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
      bl        -0x233A54

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x29F64C

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
 * Address:	802C3720
 * Size:	00009C
 */
void efx::THdamaSteam::__dt(void)
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
      lis       r3, 0x804D
      addi      r3, r3, 0x10C8
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x68A8
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
      bl        -0x233AF0

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x29F6E8

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
 * Address:	802C37BC
 * Size:	00009C
 */
void efx::THdamaOnHahen2::__dt(void)
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
      lis       r3, 0x804D
      addi      r3, r3, 0x1114
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x6810
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
      bl        -0x233B8C

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x29F784

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
 * Address:	802C3858
 * Size:	000004
 */
void Game::Houdai::Obj::inWaterCallback((Game::WaterBox*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802C385C
 * Size:	000004
 */
void Game::Houdai::Obj::outWaterCallback(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802C3860
 * Size:	000008
 */
void Game::Houdai::Obj::getDamageCoeStoneState(void)
{
    /*
    .loc_0x0:
      lfs       f1, -0x1E5C(r2)
      blr
    */
}

/*
 * --INFO--
 * Address:	802C3868
 * Size:	000004
 */
void Game::Houdai::Obj::throwupItemInDeathProcedure(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802C386C
 * Size:	000008
 */
void Game::Houdai::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x42
      blr
    */
}

/*
 * --INFO--
 * Address:	802C3874
 * Size:	000028
 */
void __sinit_Houdai_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804D
      stw       r0, -0x68E8(r13)
      stfsu     f0, 0xE98(r3)
      stfs      f0, -0x68E4(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	802C389C
 * Size:	000014
 */
void @1056 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x420
      b         -0x1BCF90
    */
}

/*
 * --INFO--
 * Address:	802C38B0
 * Size:	000014
 */
void @1056 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x420
      b         -0x1BD218
    */
}

/*
 * --INFO--
 * Address:	802C38C4
 * Size:	000014
 */
void @1056 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x420
      b         -0x1BD20C
    */
}

/*
 * --INFO--
 * Address:	802C38D8
 * Size:	000014
 */
void @1056 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x420
      b         -0x1BCE70
    */
}

/*
 * --INFO--
 * Address:	802C38EC
 * Size:	000014
 */
void @1056 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x420
      b         -0x1BCEB0
    */
}

/*
 * --INFO--
 * Address:	802C3900
 * Size:	000014
 */
void @1056 @12 @Game::EnemyBase::viewGetShape(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x420
      b         -0x1BD270
    */
}

/*
 * --INFO--
 * Address:	802C3914
 * Size:	000008
 */
void @4 @efx::THdamaOnHahen2::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x15C
    */
}

/*
 * --INFO--
 * Address:	802C391C
 * Size:	000008
 */
void @4 @efx::THdamaSteam::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x200
    */
}

/*
 * --INFO--
 * Address:	802C3924
 * Size:	000008
 */
void @4 @efx::THdamaSteamSt::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x2A4
    */
}

/*
 * --INFO--
 * Address:	802C392C
 * Size:	000008
 */
void @4 @efx::THdamaHahen::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x348
    */
}

/*
 * --INFO--
 * Address:	802C3934
 * Size:	000008
 */
void @4 @efx::THdamaOnHahen1::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x3EC
    */
}

/*
 * --INFO--
 * Address:	802C393C
 * Size:	000008
 */
void @4 @efx::THdamaOnSteam1::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x490
    */
}

/*
 * --INFO--
 * Address:	802C3944
 * Size:	000008
 */
void @4 @efx::THdamaSteamBd::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x534
    */
}
