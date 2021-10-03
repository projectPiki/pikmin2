

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
 * Address:	80293094
 * Size:	00016C
 */
void Game::SnakeCrow::Obj::__ct(void)
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
      addi      r0, r31, 0x328
      lis       r3, 0x804B
      stw       r0, 0x17C(r31)
      subi      r3, r3, 0x5988
      li        r0, 0
      stw       r3, 0x328(r31)
      stw       r0, 0x32C(r31)
      stw       r0, 0x330(r31)

    .loc_0x40:
      mr        r3, r31
      li        r4, 0
      bl        -0x191D3C
      lis       r3, 0x804D
      addi      r0, r31, 0x328
      subi      r5, r3, 0x4948
      addi      r3, r31, 0x2CC
      stw       r5, 0x0(r31)
      addi      r4, r5, 0x1B0
      addi      r5, r5, 0x2FC
      stw       r4, 0x178(r31)
      lwz       r4, 0x17C(r31)
      stw       r5, 0x0(r4)
      lwz       r4, 0x17C(r31)
      sub       r0, r0, r4
      stw       r0, 0xC(r4)
      bl        -0x15ABCC
      lis       r4, 0x8012
      addi      r3, r31, 0x2D8
      subi      r4, r4, 0xCB8
      li        r5, 0
      li        r6, 0xC
      li        r7, 0x5
      bl        -0x1D18F4
      li        r3, 0x2C
      bl        -0x26F294
      mr.       r30, r3
      beq-      .loc_0xF0
      bl        -0x16B7D0
      lis       r3, 0x804D
      lis       r4, 0x804B
      subi      r0, r3, 0x4BA8
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

    .loc_0xF0:
      stw       r30, 0x184(r31)
      li        r3, 0x1C
      bl        -0x26F2E8
      mr.       r4, r3
      beq-      .loc_0x124
      lis       r5, 0x804B
      lis       r3, 0x804D
      subi      r0, r5, 0x680
      li        r5, -0x1
      stw       r0, 0x0(r4)
      subi      r0, r3, 0x4BD0
      stw       r5, 0x18(r4)
      stw       r0, 0x0(r4)

    .loc_0x124:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      lwz       r12, 0x2F8(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        0x1B48
      mr        r3, r31
      bl        0x1DD0
      mr        r3, r31
      bl        0x2320
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
 * Address:	80293200
 * Size:	000044
 */
void Game::SnakeCrow::Obj::constructor(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x191A8C
      li        r3, 0x1
      li        r0, 0
      stb       r3, 0x2C1(r31)
      mr        r3, r31
      stb       r0, 0x2C2(r31)
      bl        0x2138
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80293244
 * Size:	000004
 */
void Game::SnakeCrow::Obj::setInitialSetting((Game::EnemyInitialParamBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80293248
 * Size:	0000E0
 */
void Game::SnakeCrow::Obj::onInit((Game::CreatureInitArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x191804
      lwz       r0, 0x1E0(r31)
      mr        r3, r31
      rlwinm    r0,r0,0,20,18
      stw       r0, 0x1E0(r31)
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,21,19
      stw       r0, 0x1E0(r31)
      bl        -0x18BB00
      lwz       r3, -0x6980(r13)
      mr        r4, r31
      bl        -0x513F0
      li        r0, 0x1
      lfs       f0, -0x28D0(r2)
      stb       r0, 0x2C0(r31)
      li        r0, -0x1
      mr        r3, r31
      stfs      f0, 0x2C4(r31)
      stw       r0, 0x2C8(r31)
      stw       r0, 0x2D4(r31)
      bl        0x1AB4
      mr        r3, r31
      bl        0x1C7C
      mr        r3, r31
      bl        0x1D34
      mr        r3, r31
      bl        0x239C
      li        r3, 0x1
      li        r0, 0
      stb       r3, 0x2C1(r31)
      mr        r3, r31
      stb       r0, 0x2C2(r31)
      bl        0x2088
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
 * Address:	80293328
 * Size:	00004C
 */
void Game::SnakeCrow::Obj::onKill((Game::CreatureKillArg*))
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
      bl        0x2594
      mr        r3, r30
      bl        0x2614
      mr        r3, r30
      mr        r4, r31
      bl        -0x191470
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
 * Address:	80293374
 * Size:	000088
 */
void Game::SnakeCrow::Obj::setParameters(void)
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
      subis     r0, r3, 0x665F
      cmplwi    r0, 0x3032
      bne-      .loc_0x6C
      lwz       r3, 0xC0(r31)
      lfs       f0, 0x8BC(r3)
      stfs      f0, 0x104(r3)

    .loc_0x6C:
      mr        r3, r31
      bl        -0x19080C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802933FC
 * Size:	000048
 */
void Game::SnakeCrow::Obj::doUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      mr        r4, r31
      lwz       r3, 0x2BC(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x2CC
      bl        -0x15AE00
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80293444
 * Size:	000034
 */
void Game::SnakeCrow::Obj::doUpdateCommon(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x190544
      mr        r3, r31
      bl        0x1E08
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80293478
 * Size:	000034
 */
void Game::SnakeCrow::Obj::doAnimationUpdateAnimator(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x190494
      mr        r3, r31
      bl        0x18F0
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802934AC
 * Size:	00003C
 */
void Game::SnakeCrow::Obj::doAnimationCullingOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x190440
      mr        r3, r31
      bl        0x1B4C
      mr        r3, r31
      bl        0x18D8
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802934E8
 * Size:	000004
 */
void Game::SnakeCrow::Obj::doDirectDraw((Graphics&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802934EC
 * Size:	000020
 */
void Game::SnakeCrow::Obj::doDebugDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x18D68C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8029350C
 * Size:	00004C
 */
void Game::SnakeCrow::Obj::setFSM((Game::SnakeCrow::FSM*))
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
 * Address:	80293558
 * Size:	000098
 */
void Game::SnakeCrow::Obj::getShadowParam((Game::ShadowParam&))
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
      lis       r3, 0x8049
      subi      r0, r3, 0x78B4
      lwz       r3, 0x174(r30)
      mr        r4, r0
      bl        0x1ABA60
      bl        0x196318
      lfs       f4, 0x2C(r3)
      lfs       f1, 0x1C(r3)
      lfs       f0, 0xC(r3)
      lfs       f5, -0x28CC(r2)
      stfs      f0, 0x0(r31)
      lfs       f3, -0x28D0(r2)
      stfs      f1, 0x4(r31)
      lfs       f2, -0x28C8(r2)
      stfs      f4, 0x8(r31)
      lfs       f1, -0x28C4(r2)
      lfs       f4, 0x190(r30)
      lfs       f0, -0x28C0(r2)
      fadds     f4, f5, f4
      stfs      f4, 0x4(r31)
      stfs      f3, 0xC(r31)
      stfs      f2, 0x10(r31)
      stfs      f3, 0x14(r31)
      stfs      f1, 0x18(r31)
      stfs      f0, 0x1C(r31)
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
 * Address:	802935F0
 * Size:	000098
 */
void Game::SnakeCrow::Obj::damageCallBack((Game::Creature*, float, CollPart*))
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
      fmr       f31, f1
      cmplwi    r4, 0
      mr        r30, r3
      mr        r31, r5
      beq-      .loc_0x74
      mr        r3, r4
      lwz       r12, 0x0(r4)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x74
      cmplwi    r31, 0
      bne-      .loc_0x5C
      lfs       f0, -0x28BC(r2)
      fmuls     f31, f31, f0

    .loc_0x5C:
      fmr       f1, f31
      lfs       f2, -0x28C8(r2)
      mr        r3, r30
      bl        -0x18D62C
      li        r3, 0x1
      b         .loc_0x78

    .loc_0x74:
      li        r3, 0

    .loc_0x78:
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
 * Address:	80293688
 * Size:	00003C
 */
void Game::SnakeCrow::Obj::doStartStoneState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x1907A8
      mr        r3, r31
      bl        0x2234
      mr        r3, r31
      bl        0x22B4
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802936C4
 * Size:	000060
 */
void Game::SnakeCrow::Obj::doFinishStoneState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x1907D0
      lfs       f1, -0x28C8(r2)
      mr        r3, r31
      lfs       f2, -0x28B8(r2)
      li        r4, 0
      lfs       f3, -0x28D0(r2)
      lfs       f4, -0x28B4(r2)
      bl        -0x1805D8
      mr        r3, r31
      bl        -0x18C308
      cmpwi     r3, 0x5
      blt-      .loc_0x4C
      mr        r3, r31
      bl        0x21FC

    .loc_0x4C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80293724
 * Size:	000028
 */
void Game::SnakeCrow::Obj::startCarcassMotion(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0xC
      li        r5, 0
      stw       r0, 0x14(r1)
      bl        -0x18E734
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8029374C
 * Size:	000020
 */
void Game::SnakeCrow::Obj::doStartMovie(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        0x2410
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8029376C
 * Size:	000020
 */
void Game::SnakeCrow::Obj::doEndMovie(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        0x238C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8029378C
 * Size:	0000BC
 */
void Game::SnakeCrow::Obj::initMouthSlots(void)
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
      lis       r3, 0x8049
      subi      r31, r3, 0x78D0
      li        r4, 0x3
      addi      r3, r30, 0x2CC
      bl        -0x15B264
      lwz       r5, 0x174(r30)
      addi      r3, r30, 0x2CC
      addi      r6, r31, 0x28
      li        r4, 0
      bl        -0x15B140
      lwz       r5, 0x174(r30)
      addi      r3, r30, 0x2CC
      addi      r6, r31, 0x34
      li        r4, 0x1
      bl        -0x15B154
      lwz       r5, 0x174(r30)
      addi      r3, r30, 0x2CC
      addi      r6, r31, 0x40
      li        r4, 0x2
      bl        -0x15B168
      lfs       f31, -0x28B0(r2)
      li        r31, 0
      b         .loc_0x90

    .loc_0x7C:
      mr        r4, r31
      addi      r3, r30, 0x2CC
      bl        -0x15B098
      stfs      f31, 0x1C(r3)
      addi      r31, r31, 0x1

    .loc_0x90:
      lwz       r0, 0x2CC(r30)
      cmpw      r31, r0
      blt+      .loc_0x7C
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
 * Address:	80293848
 * Size:	000058
 */
void getThrowupItemPosition__Q34Game9SnakeCrow3ObjFP10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x8049
      stw       r0, 0x14(r1)
      subi      r0, r5, 0x78B4
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r4, r0
      lwz       r3, 0x174(r3)
      bl        0x1AB778
      bl        0x196030
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
 * Address:	802938A0
 * Size:	000058
 */
void getCommonEffectPos__Q34Game9SnakeCrow3ObjFR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x8049
      stw       r0, 0x14(r1)
      subi      r0, r5, 0x78B4
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r4, r0
      lwz       r3, 0x174(r3)
      bl        0x1AB720
      bl        0x195FD8
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
 * Address:	802938F8
 * Size:	000338
 */
void Game::SnakeCrow::Obj::appearNearByTarget((Game::Creature*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x90(r1)
      mflr      r0
      stw       r0, 0x94(r1)
      stfd      f31, 0x80(r1)
      psq_st    f31,0x88(r1),0,0
      stfd      f30, 0x70(r1)
      psq_st    f30,0x78(r1),0,0
      stfd      f29, 0x60(r1)
      psq_st    f29,0x68(r1),0,0
      stfd      f28, 0x50(r1)
      psq_st    f28,0x58(r1),0,0
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      lwz       r12, 0x0(r4)
      mr        r31, r3
      addi      r3, r1, 0x8
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f31, 0x8(r1)
      lfs       f30, 0xC(r1)
      lfs       f29, 0x10(r1)
      bl        -0x1CA3B0
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x24(r1)
      lfd       f3, -0x2890(r2)
      stw       r0, 0x20(r1)
      lfs       f2, -0x28AC(r2)
      lfd       f0, 0x20(r1)
      lfs       f1, -0x28A8(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x28D0(r2)
      fmuls     f2, f2, f3
      fdivs     f3, f2, f1
      fmr       f28, f3
      fmr       f1, f3
      fcmpo     cr0, f3, f0
      bge-      .loc_0xA0
      fneg      f1, f3

    .loc_0xA0:
      lfs       f2, -0x28A4(r2)
      lis       r3, 0x8050
      lfs       f0, -0x28D0(r2)
      addi      r3, r3, 0x71A0
      fmuls     f1, f1, f2
      addi      r30, r3, 0x4
      fcmpo     cr0, f3, f0
      fctiwz    f0, f1
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r30, r0
      fneg      f5, f0
      bge-      .loc_0xFC
      lfs       f0, -0x28A0(r2)
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f0, f0
      b         .loc_0x114

    .loc_0xFC:
      fmuls     f0, f3, f2
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r0, 0x3C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0

    .loc_0x114:
      fneg      f3, f0
      lfs       f2, -0x28D0(r2)
      lfs       f1, -0x289C(r2)
      frsp      f0, f5
      stfs      f2, 0x18(r1)
      frsp      f4, f3
      fmuls     f2, f2, f1
      stfs      f3, 0x14(r1)
      fmuls     f3, f0, f1
      fmuls     f4, f4, f1
      stfs      f5, 0x1C(r1)
      fadds     f1, f2, f30
      stfs      f2, 0x18(r1)
      fadds     f0, f3, f29
      fadds     f2, f4, f31
      stfs      f4, 0x14(r1)
      stfs      f3, 0x1C(r1)
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)
      lfs       f3, 0x1A0(r31)
      lfs       f4, 0x198(r31)
      fsubs     f1, f3, f0
      lwz       r3, 0xC0(r31)
      fsubs     f2, f4, f2
      lfs       f0, 0x35C(r3)
      fmuls     f1, f1, f1
      fmuls     f0, f0, f0
      fmadds    f1, f2, f2, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x2C0
      fsubs     f1, f31, f4
      lis       r3, 0x8051
      fsubs     f2, f29, f3
      subi      r3, r3, 0x2E20
      bl        -0x25E990
      fmr       f28, f1
      bl        -0x1CA500
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x3C(r1)
      lfd       f1, -0x2890(r2)
      stw       r0, 0x38(r1)
      lfs       f3, -0x2898(r2)
      lfd       f0, 0x38(r1)
      lfs       f2, -0x28A8(r2)
      fsubs     f4, f0, f1
      lfs       f1, -0x2894(r2)
      lfs       f0, -0x28D0(r2)
      fmuls     f3, f3, f4
      fdivs     f2, f3, f2
      fsubs     f1, f2, f1
      fadds     f28, f28, f1
      fmr       f1, f28
      fcmpo     cr0, f28, f0
      bge-      .loc_0x1F8
      fneg      f1, f28

    .loc_0x1F8:
      lfs       f2, -0x28A4(r2)
      lfs       f0, -0x28D0(r2)
      fmuls     f1, f1, f2
      fcmpo     cr0, f28, f0
      fctiwz    f0, f1
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r30, r0
      fneg      f5, f0
      bge-      .loc_0x250
      lfs       f0, -0x28A0(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f28, f0
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f0, f0
      b         .loc_0x270

    .loc_0x250:
      fmuls     f0, f28, f2
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0

    .loc_0x270:
      fneg      f3, f0
      lfs       f2, -0x28D0(r2)
      lfs       f1, -0x289C(r2)
      frsp      f0, f5
      stfs      f2, 0x18(r1)
      frsp      f4, f3
      fmuls     f2, f2, f1
      stfs      f3, 0x14(r1)
      fmuls     f3, f0, f1
      fmuls     f4, f4, f1
      stfs      f5, 0x1C(r1)
      fadds     f1, f2, f30
      stfs      f2, 0x18(r1)
      fadds     f0, f3, f29
      fadds     f2, f4, f31
      stfs      f4, 0x14(r1)
      stfs      f3, 0x1C(r1)
      stfs      f2, 0x14(r1)
      stfs      f1, 0x18(r1)
      stfs      f0, 0x1C(r1)

    .loc_0x2C0:
      lwz       r3, -0x6CF8(r13)
      addi      r4, r1, 0x14
      lwz       r12, 0x4(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      stfs      f1, 0x18(r1)
      mr        r3, r31
      addi      r4, r1, 0x14
      lwz       r12, 0x0(r31)
      lwz       r12, 0x70(r12)
      mtctr     r12
      bctrl
      stfs      f28, 0x1FC(r31)
      lfs       f0, 0x1FC(r31)
      stfs      f0, 0x1A8(r31)
      psq_l     f31,0x88(r1),0,0
      lfd       f31, 0x80(r1)
      psq_l     f30,0x78(r1),0,0
      lfd       f30, 0x70(r1)
      psq_l     f29,0x68(r1),0,0
      lfd       f29, 0x60(r1)
      psq_l     f28,0x58(r1),0,0
      lfd       f28, 0x50(r1)
      lwz       r31, 0x4C(r1)
      lwz       r0, 0x94(r1)
      lwz       r30, 0x48(r1)
      mtlr      r0
      addi      r1, r1, 0x90
      blr
    */
}

/*
 * --INFO--
 * Address:	80293C30
 * Size:	00020C
 */
void Game::SnakeCrow::Obj::setAttackPosition(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x90(r1)
      mflr      r0
      stw       r0, 0x94(r1)
      stfd      f31, 0x80(r1)
      psq_st    f31,0x88(r1),0,0
      stfd      f30, 0x70(r1)
      psq_st    f30,0x78(r1),0,0
      stfd      f29, 0x60(r1)
      psq_st    f29,0x68(r1),0,0
      stmw      r27, 0x4C(r1)
      mr        r31, r3
      lfs       f0, -0x28D0(r2)
      lfs       f3, 0x1FC(r3)
      fmr       f1, f3
      fcmpo     cr0, f3, f0
      bge-      .loc_0x44
      fneg      f1, f3

    .loc_0x44:
      lfs       f2, -0x28A4(r2)
      lis       r3, 0x8050
      lfs       f0, -0x28D0(r2)
      addi      r4, r3, 0x71A0
      fmuls     f1, f1, f2
      fcmpo     cr0, f3, f0
      fctiwz    f0, f1
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f31, 0x4(r3)
      bge-      .loc_0x9C
      lfs       f0, -0x28A0(r2)
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r0, 0x3C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f30, f0
      b         .loc_0xB4

    .loc_0x9C:
      fmuls     f0, f3, f2
      fctiwz    f0, f0
      stfd      f0, 0x40(r1)
      lwz       r0, 0x44(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f30, r4, r0

    .loc_0xB4:
      lis       r4, 0x8049
      lwzu      r12, -0x7884(r4)
      lis       r3, 0x8049
      fneg      f29, f31
      subi      r7, r3, 0x7870
      lwz       r11, 0x4(r4)
      lwz       r10, 0x8(r4)
      mr        r28, r31
      lwz       r9, 0xC(r4)
      lwz       r8, 0x10(r4)
      addi      r30, r1, 0x1C
      lwz       r6, 0x0(r7)
      addi      r29, r1, 0x8
      lwz       r5, 0x4(r7)
      li        r27, 0
      lwz       r4, 0x8(r7)
      lwz       r3, 0xC(r7)
      lwz       r0, 0x10(r7)
      stw       r12, 0x1C(r1)
      stw       r11, 0x20(r1)
      stw       r10, 0x24(r1)
      stw       r9, 0x28(r1)
      stw       r8, 0x2C(r1)
      stw       r6, 0x8(r1)
      stw       r5, 0xC(r1)
      stw       r4, 0x10(r1)
      stw       r3, 0x14(r1)
      stw       r0, 0x18(r1)

    .loc_0x124:
      lfs       f0, 0x18C(r31)
      addi      r4, r28, 0x2D8
      lfs       f1, 0x0(r30)
      stfs      f0, 0x2D8(r28)
      lfs       f2, 0x0(r29)
      fmuls     f3, f30, f1
      lfs       f0, 0x190(r31)
      fmuls     f5, f31, f1
      lfs       f4, -0x28D0(r2)
      fmuls     f6, f29, f2
      stfs      f0, 0x2DC(r28)
      fmr       f7, f4
      lfs       f0, 0x194(r31)
      fmuls     f4, f4, f1
      fmuls     f1, f30, f2
      stfs      f0, 0x2E0(r28)
      fmuls     f7, f7, f2
      lfs       f0, 0x2D8(r28)
      fadds     f0, f0, f3
      stfs      f0, 0x2D8(r28)
      lfs       f0, 0x2DC(r28)
      fadds     f0, f0, f4
      stfs      f0, 0x2DC(r28)
      lfs       f0, 0x2E0(r28)
      fadds     f0, f0, f5
      stfs      f0, 0x2E0(r28)
      lfs       f0, 0x2D8(r28)
      fadds     f0, f0, f6
      stfs      f0, 0x2D8(r28)
      lfs       f0, 0x2DC(r28)
      fadds     f0, f0, f7
      stfs      f0, 0x2DC(r28)
      lfs       f0, 0x2E0(r28)
      fadds     f0, f0, f1
      stfs      f0, 0x2E0(r28)
      lwz       r3, -0x6CF8(r13)
      lwz       r12, 0x4(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      addi      r27, r27, 0x1
      stfs      f1, 0x2DC(r28)
      cmpwi     r27, 0x5
      addi      r30, r30, 0x4
      addi      r29, r29, 0x4
      addi      r28, r28, 0xC
      blt+      .loc_0x124
      psq_l     f31,0x88(r1),0,0
      lfd       f31, 0x80(r1)
      psq_l     f30,0x78(r1),0,0
      lfd       f30, 0x70(r1)
      psq_l     f29,0x68(r1),0,0
      lfd       f29, 0x60(r1)
      lmw       r27, 0x4C(r1)
      lwz       r0, 0x94(r1)
      mtlr      r0
      addi      r1, r1, 0x90
      blr
    */
}

/*
 * --INFO--
 * Address:	80293E3C
 * Size:	0005F4
 */
void Game::SnakeCrow::Obj::getAttackPiki((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x160(r1)
      mflr      r0
      stw       r0, 0x164(r1)
      stfd      f31, 0x150(r1)
      psq_st    f31,0x158(r1),0,0
      stfd      f30, 0x140(r1)
      psq_st    f30,0x148(r1),0,0
      stfd      f29, 0x130(r1)
      psq_st    f29,0x138(r1),0,0
      stfd      f28, 0x120(r1)
      psq_st    f28,0x128(r1),0,0
      stfd      f27, 0x110(r1)
      psq_st    f27,0x118(r1),0,0
      stfd      f26, 0x100(r1)
      psq_st    f26,0x108(r1),0,0
      stmw      r19, 0xCC(r1)
      cmpwi     r4, 0x5
      lis       r5, 0x8049
      mr        r28, r3
      li        r30, 0
      subi      r31, r5, 0x78D0
      li        r29, 0x5
      bge-      .loc_0x64
      mr        r30, r4
      addi      r29, r4, 0x1

    .loc_0x64:
      mr        r4, r28
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r28)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f3, 0x1FC(r28)
      lfs       f0, -0x28D0(r2)
      fmr       f1, f3
      lfs       f28, 0x14(r1)
      fcmpo     cr0, f3, f0
      lfs       f27, 0x18(r1)
      lfs       f26, 0x1C(r1)
      bge-      .loc_0xA0
      fneg      f1, f3

    .loc_0xA0:
      lfs       f2, -0x28A4(r2)
      lis       r3, 0x8050
      lfs       f0, -0x28D0(r2)
      addi      r4, r3, 0x71A0
      fmuls     f1, f1, f2
      fcmpo     cr0, f3, f0
      fctiwz    f0, f1
      stfd      f0, 0xA8(r1)
      lwz       r0, 0xAC(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f30, 0x4(r3)
      bge-      .loc_0xF8
      lfs       f0, -0x28A0(r2)
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0xB0(r1)
      lwz       r0, 0xB4(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f29, f0
      b         .loc_0x110

    .loc_0xF8:
      fmuls     f0, f3, f2
      fctiwz    f0, f0
      stfd      f0, 0xB8(r1)
      lwz       r0, 0xBC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f29, r4, r0

    .loc_0x110:
      lwz       r0, 0xC4(r31)
      fneg      f31, f30
      lwz       r11, 0xC8(r31)
      lwz       r10, 0xCC(r31)
      lwz       r9, 0xD0(r31)
      lwz       r8, 0xD4(r31)
      lwz       r7, 0xD8(r31)
      lwz       r6, 0xDC(r31)
      lwz       r5, 0xE0(r31)
      lwz       r4, 0xE4(r31)
      lwz       r3, 0xE8(r31)
      lfs       f1, 0x2DC(r28)
      lfs       f0, 0x2E8(r28)
      lfs       f2, 0x2F4(r28)
      fsubs     f8, f1, f27
      lfs       f1, 0x300(r28)
      fsubs     f6, f0, f27
      lfs       f0, 0x30C(r28)
      fsubs     f12, f2, f27
      stw       r0, 0x44(r1)
      lwz       r0, 0x74(r31)
      fsubs     f11, f1, f27
      stw       r11, 0x48(r1)
      fsubs     f10, f0, f27
      lfs       f0, 0x44(r1)
      stw       r10, 0x4C(r1)
      lfs       f1, 0x48(r1)
      fadds     f9, f0, f8
      stw       r9, 0x50(r1)
      lfs       f0, 0x4C(r1)
      fadds     f7, f1, f6
      stw       r8, 0x54(r1)
      lfs       f1, 0x50(r1)
      fadds     f5, f0, f12
      stw       r7, 0x30(r1)
      lfs       f0, 0x54(r1)
      fadds     f3, f1, f11
      stw       r6, 0x34(r1)
      lfs       f4, 0x30(r1)
      fadds     f1, f0, f10
      stw       r5, 0x38(r1)
      lfs       f2, 0x34(r1)
      fadds     f8, f4, f8
      stw       r4, 0x3C(r1)
      lfs       f0, 0x38(r1)
      fadds     f6, f2, f6
      stw       r3, 0x40(r1)
      lfs       f2, 0x3C(r1)
      fadds     f4, f0, f12
      lfs       f0, 0x40(r1)
      fadds     f2, f2, f11
      lwz       r19, 0x78(r31)
      fadds     f0, f0, f10
      lwz       r20, 0x7C(r31)
      lwz       r21, 0x80(r31)
      lwz       r22, 0x84(r31)
      lwz       r23, 0x88(r31)
      lwz       r24, 0x8C(r31)
      lwz       r25, 0x90(r31)
      lwz       r26, 0x94(r31)
      lwz       r27, 0x98(r31)
      lwz       r12, 0x9C(r31)
      lwz       r11, 0xA0(r31)
      lwz       r10, 0xA4(r31)
      lwz       r9, 0xA8(r31)
      lwz       r8, 0xAC(r31)
      lwz       r7, 0xB0(r31)
      lwz       r6, 0xB4(r31)
      lwz       r5, 0xB8(r31)
      lwz       r4, 0xBC(r31)
      lwz       r3, 0xC0(r31)
      stw       r0, 0x94(r1)
      stw       r19, 0x98(r1)
      stw       r20, 0x9C(r1)
      stw       r21, 0xA0(r1)
      stw       r22, 0xA4(r1)
      stw       r23, 0x80(r1)
      stw       r24, 0x84(r1)
      stw       r25, 0x88(r1)
      stw       r26, 0x8C(r1)
      stw       r27, 0x90(r1)
      stw       r12, 0x6C(r1)
      stw       r11, 0x70(r1)
      stw       r10, 0x74(r1)
      stw       r9, 0x78(r1)
      stw       r8, 0x7C(r1)
      stw       r7, 0x58(r1)
      stw       r6, 0x5C(r1)
      stw       r5, 0x60(r1)
      stw       r4, 0x64(r1)
      stw       r3, 0x68(r1)
      stfs      f9, 0x44(r1)
      stfs      f8, 0x30(r1)
      stfs      f7, 0x48(r1)
      stfs      f6, 0x34(r1)
      stfs      f5, 0x4C(r1)
      stfs      f4, 0x38(r1)
      stfs      f3, 0x50(r1)
      stfs      f2, 0x3C(r1)
      stfs      f1, 0x54(r1)
      stfs      f0, 0x40(r1)
      li        r0, 0
      lwz       r3, -0x6D0C(r13)
      lis       r4, 0x804B
      stw       r0, 0x2C(r1)
      subi      r4, r4, 0x4364
      cmplwi    r0, 0
      stw       r4, 0x20(r1)
      stw       r0, 0x24(r1)
      stw       r3, 0x28(r1)
      bne-      .loc_0x2E4
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x58C

    .loc_0x2E4:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x350

    .loc_0x2FC:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x58C
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)

    .loc_0x350:
      lwz       r12, 0x20(r1)
      addi      r3, r1, 0x20
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x2FC
      b         .loc_0x58C

    .loc_0x370:
      lwz       r3, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r19, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x4D0
      mr        r3, r19
      lwz       r12, 0x0(r19)
      lwz       r12, 0x1C0(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x4D0
      mr        r3, r19
      bl        -0xF4C74
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4D0
      mr        r4, r19
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r19)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0xC(r1)
      rlwinm    r9,r30,2,0,29
      lfs       f1, 0x8(r1)
      addi      r3, r1, 0x94
      fsubs     f4, f0, f27
      lfs       f0, -0x28D0(r2)
      lfs       f2, 0x10(r1)
      addi      r4, r1, 0x80
      addi      r5, r1, 0x6C
      addi      r6, r1, 0x58
      fsubs     f3, f1, f28
      addi      r7, r1, 0x44
      fmuls     f0, f0, f4
      addi      r8, r1, 0x30
      fsubs     f2, f2, f26
      sub       r0, r29, r30
      fmadds    f1, f29, f3, f0
      mr        r10, r30
      fmadds    f0, f31, f3, f0
      add       r3, r3, r9
      add       r4, r4, r9
      add       r5, r5, r9
      fmadds    f1, f30, f2, f1
      add       r6, r6, r9
      fmadds    f2, f29, f2, f0
      add       r7, r7, r9
      add       r8, r8, r9
      mtctr     r0
      cmpw      r30, r29
      bge-      .loc_0x4D0

    .loc_0x45C:
      lfs       f0, 0x0(r3)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x4B0
      lfs       f0, 0x0(r4)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x4B0
      lfs       f0, 0x0(r5)
      fcmpo     cr0, f2, f0
      bge-      .loc_0x4B0
      lfs       f0, 0x0(r6)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x4B0
      lfs       f0, 0x0(r7)
      fcmpo     cr0, f4, f0
      bge-      .loc_0x4B0
      lfs       f0, 0x0(r8)
      fcmpo     cr0, f4, f0
      ble-      .loc_0x4B0
      stw       r10, 0x2D4(r28)
      mr        r3, r19
      b         .loc_0x5B0

    .loc_0x4B0:
      addi      r3, r3, 0x4
      addi      r4, r4, 0x4
      addi      r5, r5, 0x4
      addi      r6, r6, 0x4
      addi      r7, r7, 0x4
      addi      r8, r8, 0x4
      addi      r10, r10, 0x1
      bdnz+     .loc_0x45C

    .loc_0x4D0:
      lwz       r0, 0x2C(r1)
      cmplwi    r0, 0
      bne-      .loc_0x4FC
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x58C

    .loc_0x4FC:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x570

    .loc_0x51C:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x58C
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)

    .loc_0x570:
      lwz       r12, 0x20(r1)
      addi      r3, r1, 0x20
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x51C

    .loc_0x58C:
      lwz       r3, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x24(r1)
      cmplw     r4, r3
      bne+      .loc_0x370
      li        r3, 0

    .loc_0x5B0:
      psq_l     f31,0x158(r1),0,0
      lfd       f31, 0x150(r1)
      psq_l     f30,0x148(r1),0,0
      lfd       f30, 0x140(r1)
      psq_l     f29,0x138(r1),0,0
      lfd       f29, 0x130(r1)
      psq_l     f28,0x128(r1),0,0
      lfd       f28, 0x120(r1)
      psq_l     f27,0x118(r1),0,0
      lfd       f27, 0x110(r1)
      psq_l     f26,0x108(r1),0,0
      lfd       f26, 0x100(r1)
      lmw       r19, 0xCC(r1)
      lwz       r0, 0x164(r1)
      mtlr      r0
      addi      r1, r1, 0x160
      blr
    */
}

/*
 * --INFO--
 * Address:	80294430
 * Size:	0005C8
 */
void Game::SnakeCrow::Obj::getAttackNavi((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x160(r1)
      mflr      r0
      stw       r0, 0x164(r1)
      stfd      f31, 0x150(r1)
      psq_st    f31,0x158(r1),0,0
      stfd      f30, 0x140(r1)
      psq_st    f30,0x148(r1),0,0
      stfd      f29, 0x130(r1)
      psq_st    f29,0x138(r1),0,0
      stfd      f28, 0x120(r1)
      psq_st    f28,0x128(r1),0,0
      stfd      f27, 0x110(r1)
      psq_st    f27,0x118(r1),0,0
      stfd      f26, 0x100(r1)
      psq_st    f26,0x108(r1),0,0
      stmw      r19, 0xCC(r1)
      cmpwi     r4, 0x5
      lis       r5, 0x8049
      mr        r28, r3
      li        r30, 0
      subi      r31, r5, 0x78D0
      li        r29, 0x5
      bge-      .loc_0x64
      mr        r30, r4
      addi      r29, r4, 0x1

    .loc_0x64:
      mr        r4, r28
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r28)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f3, 0x1FC(r28)
      lfs       f0, -0x28D0(r2)
      fmr       f1, f3
      lfs       f28, 0x14(r1)
      fcmpo     cr0, f3, f0
      lfs       f27, 0x18(r1)
      lfs       f26, 0x1C(r1)
      bge-      .loc_0xA0
      fneg      f1, f3

    .loc_0xA0:
      lfs       f2, -0x28A4(r2)
      lis       r3, 0x8050
      lfs       f0, -0x28D0(r2)
      addi      r4, r3, 0x71A0
      fmuls     f1, f1, f2
      fcmpo     cr0, f3, f0
      fctiwz    f0, f1
      stfd      f0, 0xA8(r1)
      lwz       r0, 0xAC(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f30, 0x4(r3)
      bge-      .loc_0xF8
      lfs       f0, -0x28A0(r2)
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0xB0(r1)
      lwz       r0, 0xB4(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f29, f0
      b         .loc_0x110

    .loc_0xF8:
      fmuls     f0, f3, f2
      fctiwz    f0, f0
      stfd      f0, 0xB8(r1)
      lwz       r0, 0xBC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f29, r4, r0

    .loc_0x110:
      lwz       r0, 0x13C(r31)
      fneg      f31, f30
      lwz       r11, 0x140(r31)
      lwz       r10, 0x144(r31)
      lwz       r9, 0x148(r31)
      lwz       r8, 0x14C(r31)
      lwz       r7, 0x150(r31)
      lwz       r6, 0x154(r31)
      lwz       r5, 0x158(r31)
      lwz       r4, 0x15C(r31)
      lwz       r3, 0x160(r31)
      lfs       f1, 0x2DC(r28)
      lfs       f0, 0x2E8(r28)
      lfs       f2, 0x2F4(r28)
      fsubs     f8, f1, f27
      lfs       f1, 0x300(r28)
      fsubs     f6, f0, f27
      lfs       f0, 0x30C(r28)
      fsubs     f12, f2, f27
      stw       r0, 0x44(r1)
      lwz       r0, 0xEC(r31)
      fsubs     f11, f1, f27
      stw       r11, 0x48(r1)
      fsubs     f10, f0, f27
      lfs       f0, 0x44(r1)
      stw       r10, 0x4C(r1)
      lfs       f1, 0x48(r1)
      fadds     f9, f0, f8
      stw       r9, 0x50(r1)
      lfs       f0, 0x4C(r1)
      fadds     f7, f1, f6
      stw       r8, 0x54(r1)
      lfs       f1, 0x50(r1)
      fadds     f5, f0, f12
      stw       r7, 0x30(r1)
      lfs       f0, 0x54(r1)
      fadds     f3, f1, f11
      stw       r6, 0x34(r1)
      lfs       f4, 0x30(r1)
      fadds     f1, f0, f10
      stw       r5, 0x38(r1)
      lfs       f2, 0x34(r1)
      fadds     f8, f4, f8
      stw       r4, 0x3C(r1)
      lfs       f0, 0x38(r1)
      fadds     f6, f2, f6
      stw       r3, 0x40(r1)
      lfs       f2, 0x3C(r1)
      fadds     f4, f0, f12
      lfs       f0, 0x40(r1)
      fadds     f2, f2, f11
      lwz       r19, 0xF0(r31)
      fadds     f0, f0, f10
      lwz       r20, 0xF4(r31)
      lwz       r21, 0xF8(r31)
      lwz       r22, 0xFC(r31)
      lwz       r23, 0x100(r31)
      lwz       r24, 0x104(r31)
      lwz       r25, 0x108(r31)
      lwz       r26, 0x10C(r31)
      lwz       r27, 0x110(r31)
      lwz       r12, 0x114(r31)
      lwz       r11, 0x118(r31)
      lwz       r10, 0x11C(r31)
      lwz       r9, 0x120(r31)
      lwz       r8, 0x124(r31)
      lwz       r7, 0x128(r31)
      lwz       r6, 0x12C(r31)
      lwz       r5, 0x130(r31)
      lwz       r4, 0x134(r31)
      lwz       r3, 0x138(r31)
      stw       r0, 0x94(r1)
      stw       r19, 0x98(r1)
      stw       r20, 0x9C(r1)
      stw       r21, 0xA0(r1)
      stw       r22, 0xA4(r1)
      stw       r23, 0x80(r1)
      stw       r24, 0x84(r1)
      stw       r25, 0x88(r1)
      stw       r26, 0x8C(r1)
      stw       r27, 0x90(r1)
      stw       r12, 0x6C(r1)
      stw       r11, 0x70(r1)
      stw       r10, 0x74(r1)
      stw       r9, 0x78(r1)
      stw       r8, 0x7C(r1)
      stw       r7, 0x58(r1)
      stw       r6, 0x5C(r1)
      stw       r5, 0x60(r1)
      stw       r4, 0x64(r1)
      stw       r3, 0x68(r1)
      stfs      f9, 0x44(r1)
      stfs      f8, 0x30(r1)
      stfs      f7, 0x48(r1)
      stfs      f6, 0x34(r1)
      stfs      f5, 0x4C(r1)
      stfs      f4, 0x38(r1)
      stfs      f3, 0x50(r1)
      stfs      f2, 0x3C(r1)
      stfs      f1, 0x54(r1)
      stfs      f0, 0x40(r1)
      li        r0, 0
      lwz       r3, -0x6D20(r13)
      lis       r4, 0x804B
      stw       r0, 0x2C(r1)
      subi      r4, r4, 0x434C
      cmplwi    r0, 0
      stw       r4, 0x20(r1)
      stw       r0, 0x24(r1)
      stw       r3, 0x28(r1)
      bne-      .loc_0x2E4
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x560

    .loc_0x2E4:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x350

    .loc_0x2FC:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x560
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)

    .loc_0x350:
      lwz       r12, 0x20(r1)
      addi      r3, r1, 0x20
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x2FC
      b         .loc_0x560

    .loc_0x370:
      lwz       r3, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r19, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x4A4
      mr        r4, r19
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r19)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0xC(r1)
      rlwinm    r9,r30,2,0,29
      lfs       f1, 0x8(r1)
      addi      r3, r1, 0x94
      fsubs     f4, f0, f27
      lfs       f0, -0x28D0(r2)
      lfs       f2, 0x10(r1)
      addi      r4, r1, 0x80
      addi      r5, r1, 0x6C
      addi      r6, r1, 0x58
      fsubs     f3, f1, f28
      addi      r7, r1, 0x44
      fmuls     f0, f0, f4
      addi      r8, r1, 0x30
      fsubs     f2, f2, f26
      sub       r0, r29, r30
      fmadds    f1, f29, f3, f0
      mr        r10, r30
      fmadds    f0, f31, f3, f0
      add       r3, r3, r9
      add       r4, r4, r9
      add       r5, r5, r9
      fmadds    f1, f30, f2, f1
      add       r6, r6, r9
      fmadds    f2, f29, f2, f0
      add       r7, r7, r9
      add       r8, r8, r9
      mtctr     r0
      cmpw      r30, r29
      bge-      .loc_0x4A4

    .loc_0x430:
      lfs       f0, 0x0(r3)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x484
      lfs       f0, 0x0(r4)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x484
      lfs       f0, 0x0(r5)
      fcmpo     cr0, f2, f0
      bge-      .loc_0x484
      lfs       f0, 0x0(r6)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x484
      lfs       f0, 0x0(r7)
      fcmpo     cr0, f4, f0
      bge-      .loc_0x484
      lfs       f0, 0x0(r8)
      fcmpo     cr0, f4, f0
      ble-      .loc_0x484
      stw       r10, 0x2D4(r28)
      mr        r3, r19
      b         .loc_0x584

    .loc_0x484:
      addi      r3, r3, 0x4
      addi      r4, r4, 0x4
      addi      r5, r5, 0x4
      addi      r6, r6, 0x4
      addi      r7, r7, 0x4
      addi      r8, r8, 0x4
      addi      r10, r10, 0x1
      bdnz+     .loc_0x430

    .loc_0x4A4:
      lwz       r0, 0x2C(r1)
      cmplwi    r0, 0
      bne-      .loc_0x4D0
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x560

    .loc_0x4D0:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)
      b         .loc_0x544

    .loc_0x4F0:
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x2C(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x560
      lwz       r3, 0x28(r1)
      lwz       r4, 0x24(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x24(r1)

    .loc_0x544:
      lwz       r12, 0x20(r1)
      addi      r3, r1, 0x20
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x4F0

    .loc_0x560:
      lwz       r3, 0x28(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x24(r1)
      cmplw     r4, r3
      bne+      .loc_0x370
      li        r3, 0

    .loc_0x584:
      psq_l     f31,0x158(r1),0,0
      lfd       f31, 0x150(r1)
      psq_l     f30,0x148(r1),0,0
      lfd       f30, 0x140(r1)
      psq_l     f29,0x138(r1),0,0
      lfd       f29, 0x130(r1)
      psq_l     f28,0x128(r1),0,0
      lfd       f28, 0x120(r1)
      psq_l     f27,0x118(r1),0,0
      lfd       f27, 0x110(r1)
      psq_l     f26,0x108(r1),0,0
      lfd       f26, 0x100(r1)
      lmw       r19, 0xCC(r1)
      lwz       r0, 0x164(r1)
      mtlr      r0
      addi      r1, r1, 0x160
      blr
    */
}

/*
 * --INFO--
 * Address:	802949F8
 * Size:	000068
 */
void Game::SnakeCrow::Obj::getSwallowSlot(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      stw       r30, 0x8(r1)
      mr        r30, r3
      b         .loc_0x40

    .loc_0x20:
      mr        r4, r31
      addi      r3, r30, 0x2CC
      bl        -0x15C2A8
      lwz       r0, 0x64(r3)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      b         .loc_0x50

    .loc_0x3C:
      addi      r31, r31, 0x1

    .loc_0x40:
      lwz       r0, 0x2CC(r30)
      cmpw      r31, r0
      blt+      .loc_0x20
      li        r3, 0

    .loc_0x50:
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
 * Address:	80294A60
 * Size:	00006C
 */
void Game::SnakeCrow::Obj::isSwallowPikmin(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      stw       r30, 0x8(r1)
      mr        r30, r3
      b         .loc_0x44

    .loc_0x20:
      mr        r4, r31
      addi      r3, r30, 0x2CC
      bl        -0x15C310
      lwz       r0, 0x64(r3)
      cmplwi    r0, 0
      beq-      .loc_0x40
      li        r3, 0x1
      b         .loc_0x54

    .loc_0x40:
      addi      r31, r31, 0x1

    .loc_0x44:
      lwz       r0, 0x2CC(r30)
      cmpw      r31, r0
      blt+      .loc_0x20
      li        r3, 0

    .loc_0x54:
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
 * Address:	80294ACC
 * Size:	00024C
 */
void Game::SnakeCrow::Obj::getStickHeadPikmin(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x44(r1)
      addi      r3, r1, 0x18
      stw       r31, 0x3C(r1)
      li        r31, 0
      stw       r30, 0x38(r1)
      bl        -0xF4E90
      li        r0, 0
      lis       r3, 0x804B
      subi      r4, r3, 0x437C
      addi      r3, r1, 0x18
      cmplwi    r0, 0
      stw       r4, 0x8(r1)
      stw       r0, 0x14(r1)
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x64
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x204

    .loc_0x64:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0xD0

    .loc_0x7C:
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
      bne-      .loc_0x204
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0xD0:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x7C
      b         .loc_0x204

    .loc_0xF0:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r30, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x148
      lwz       r3, 0xF8(r30)
      cmplwi    r3, 0
      beq-      .loc_0x148
      lis       r4, 0x6865
      addi      r3, r3, 0x30
      addi      r4, r4, 0x6164
      bl        0x17E830
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x148
      addi      r31, r31, 0x1

    .loc_0x148:
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x174
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x204

    .loc_0x174:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1E8

    .loc_0x194:
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
      bne-      .loc_0x204
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x1E8:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x194

    .loc_0x204:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0xF0
      addi      r3, r1, 0x18
      li        r4, -0x1
      bl        -0xF4F94
      lwz       r0, 0x44(r1)
      mr        r3, r31
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80294D18
 * Size:	000048
 */
void Game::SnakeCrow::Obj::createJointCallBack(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x30
      bl        -0x270E8C
      mr.       r0, r3
      beq-      .loc_0x30
      mr        r4, r31
      bl        0x3C92C
      mr        r0, r3

    .loc_0x30:
      stw       r0, 0x314(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80294D60
 * Size:	000024
 */
void Game::SnakeCrow::Obj::setupJointCallBack(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x314(r3)
      bl        0x3C938
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80294D84
 * Size:	000024
 */
void Game::SnakeCrow::Obj::doAnimationJointCallBack(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x314(r3)
      bl        0x3CA14
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80294DA8
 * Size:	000024
 */
void Game::SnakeCrow::Obj::finishAnimationJointCallBack(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x314(r3)
      bl        0x3CA70
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80294DCC
 * Size:	0000B8
 */
void Game::SnakeCrow::Obj::startJointCallBack(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stfd      f31, 0x20(r1)
      psq_st    f31,0x28(r1),0,0
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r3
      lwz       r0, 0x2D4(r3)
      lwz       r3, 0x184(r3)
      mulli     r0, r0, 0xC
      lfs       f0, 0x190(r30)
      lwz       r12, 0x0(r3)
      add       r4, r30, r0
      lwz       r12, 0x10(r12)
      lfs       f1, 0x2DC(r4)
      fsubs     f31, f1, f0
      mtctr     r12
      bctrl
      lwz       r3, 0xC(r3)
      li        r4, 0x3
      bl        0x194B34
      mr        r31, r3
      mr        r3, r30
      bl        -0x18FBC0
      lwz       r3, 0x18(r31)
      lis       r0, 0x4330
      fmr       f3, f1
      stw       r0, 0x8(r1)
      xoris     r0, r3, 0x8000
      lfd       f2, -0x2890(r2)
      stw       r0, 0xC(r1)
      fmr       f1, f31
      lfd       f0, 0x8(r1)
      lwz       r3, 0x314(r30)
      fsubs     f0, f0, f2
      fsubs     f2, f0, f3
      bl        0x3C900
      psq_l     f31,0x28(r1),0,0
      lwz       r0, 0x34(r1)
      lfd       f31, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80294E84
 * Size:	000088
 */
void Game::SnakeCrow::Obj::returnJointCallBack(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r3
      lwz       r3, 0x184(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0xC(r3)
      li        r4, 0x4
      bl        0x194A9C
      mr        r31, r3
      mr        r3, r30
      bl        -0x18FC58
      lwz       r3, 0x18(r31)
      lis       r0, 0x4330
      stw       r0, 0x8(r1)
      xoris     r0, r3, 0x8000
      lfd       f2, -0x2890(r2)
      stw       r0, 0xC(r1)
      lwz       r3, 0x314(r30)
      lfd       f0, 0x8(r1)
      fsubs     f0, f0, f2
      fsubs     f1, f0, f1
      bl        0x3C890
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80294F0C
 * Size:	000024
 */
void Game::SnakeCrow::Obj::finishJointCallBack(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x314(r3)
      bl        0x3C880
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80294F30
 * Size:	000038
 */
void Game::SnakeCrow::Obj::setupCollision(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x626F
      stw       r0, 0x14(r1)
      addi      r4, r4, 0x6431
      lwz       r3, 0x114(r3)
      bl        -0x15F104
      cmplwi    r3, 0
      beq-      .loc_0x28
      bl        -0x15DBB8

    .loc_0x28:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80294F68
 * Size:	000040
 */
void Game::SnakeCrow::Obj::lifeIncrement(void)
{
    /*
    .loc_0x0:
      lfs       f1, -0x28D0(r2)
      lfs       f0, -0x28B8(r2)
      stfs      f1, 0x208(r3)
      lwz       r0, 0x1E0(r3)
      rlwinm    r0,r0,0,31,29
      stw       r0, 0x1E0(r3)
      lfs       f1, 0x200(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x200(r3)
      lwz       r4, 0xC0(r3)
      lfs       f1, 0x200(r3)
      lfs       f0, 0x104(r4)
      fcmpo     cr0, f1, f0
      blelr-
      stfs      f0, 0x200(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80294FA8
 * Size:	000048
 */
void Game::SnakeCrow::Obj::createShadowSystem(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x68
      bl        -0x27111C
      mr.       r0, r3
      beq-      .loc_0x30
      mr        r4, r31
      bl        0x63418
      mr        r0, r3

    .loc_0x30:
      stw       r0, 0x318(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80294FF0
 * Size:	000024
 */
void Game::SnakeCrow::Obj::setupShadowSystem(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x318(r3)
      bl        0x634D4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80295014
 * Size:	000024
 */
void Game::SnakeCrow::Obj::doAnimationShadowSystem(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x318(r3)
      bl        0x6364C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80295038
 * Size:	000024
 */
void Game::SnakeCrow::Obj::startJointShadow(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x318(r3)
      bl        0x6354C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8029505C
 * Size:	000024
 */
void Game::SnakeCrow::Obj::finishJointShadow(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x318(r3)
      bl        0x635A0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80295080
 * Size:	000040
 */
void Game::SnakeCrow::Obj::deleteJointShadow(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      mr        r4, r31
      lwz       r3, -0x6980(r13)
      bl        -0x53368
      lwz       r3, -0x6980(r13)
      mr        r4, r31
      bl        -0x531A4
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802950C0
 * Size:	0000E0
 */
void Game::SnakeCrow::Obj::startBossAttackBGM(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      lbz       r0, 0x2C1(r3)
      cmplwi    r0, 0
      beq-      .loc_0x2C
      li        r0, 0
      stb       r0, 0x2C1(r3)
      b         .loc_0xC8

    .loc_0x2C:
      lwz       r30, 0x28C(r3)
      li        r31, 0
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x5
      beq-      .loc_0x88
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x6
      beq-      .loc_0x88
      mr        r3, r30
      lwz       r12, 0x28(r30)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0x7
      bne-      .loc_0x8C

    .loc_0x88:
      li        r31, 0x1

    .loc_0x8C:
      rlwinm.   r0,r31,0,24,31
      bne-      .loc_0xB0
      lis       r3, 0x8049
      lis       r5, 0x8049
      subi      r3, r3, 0x776C
      li        r4, 0x454
      subi      r5, r5, 0x7754
      crclr     6, 0x6
      bl        -0x26AB2C

    .loc_0xB0:
      mr        r3, r30
      li        r4, 0x3
      lwz       r12, 0x28(r30)
      lwz       r12, 0xD4(r12)
      mtctr     r12
      bctrl

    .loc_0xC8:
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
 * Address:	802951A0
 * Size:	0000C8
 */
void Game::SnakeCrow::Obj::startBossFlickBGM(void)
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
      subi      r3, r3, 0x776C
      li        r4, 0x454
      subi      r5, r5, 0x7754
      crclr     6, 0x6
      bl        -0x26ABF4

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
 * Address:	80295268
 * Size:	0000FC
 */
void Game::SnakeCrow::Obj::updateBossBGM(void)
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
      subi      r3, r3, 0x776C
      li        r4, 0x454
      subi      r5, r5, 0x7754
      crclr     6, 0x6
      bl        -0x26ACC4

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
 * Address:	80295364
 * Size:	0000D0
 */
void Game::SnakeCrow::Obj::resetBossAppearBGM(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      lbz       r0, 0x2C2(r3)
      cmplwi    r0, 0
      bne-      .loc_0xB8
      li        r0, 0x1
      li        r31, 0
      stb       r0, 0x2C2(r3)
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
      subi      r3, r3, 0x776C
      li        r4, 0x454
      subi      r5, r5, 0x7754
      crclr     6, 0x6
      bl        -0x26ADCC

    .loc_0xAC:
      mr        r3, r30
      li        r4, 0
      bl        0x1CA5D8

    .loc_0xB8:
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
 * Address:	80295434
 * Size:	0000CC
 */
void Game::SnakeCrow::Obj::setBossAppearBGM(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      lbz       r0, 0x2C2(r3)
      cmplwi    r0, 0
      beq-      .loc_0xB4
      li        r31, 0
      stb       r31, 0x2C2(r3)
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
      subi      r3, r3, 0x776C
      li        r4, 0x454
      subi      r5, r5, 0x7754
      crclr     6, 0x6
      bl        -0x26AE98

    .loc_0xA8:
      mr        r3, r30
      li        r4, 0x1
      bl        0x1CA50C

    .loc_0xB4:
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
 * Address:	80295500
 * Size:	000160
 */
void Game::SnakeCrow::Obj::createEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x10
      stw       r30, 0x8(r1)
      bl        -0x271678
      cmplwi    r3, 0
      beq-      .loc_0x90
      lis       r4, 0x804B
      lis       r5, 0x804A
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r5, 0x1D84
      addi      r5, r4, 0x698C
      lis       r4, 0x804B
      stw       r0, 0x4(r3)
      addi      r6, r4, 0x2C24
      lis       r4, 0x804D
      addi      r0, r5, 0x14
      stw       r5, 0x0(r3)
      subi      r4, r4, 0x4994
      li        r8, 0
      li        r7, 0xA9
      stw       r0, 0x4(r3)
      addi      r5, r6, 0x14
      addi      r0, r4, 0x14
      stw       r8, 0x8(r3)
      sth       r7, 0xC(r3)
      stb       r8, 0xE(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x4(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)

    .loc_0x90:
      stw       r3, 0x31C(r31)
      li        r3, 0x10
      bl        -0x2716F4
      cmplwi    r3, 0
      beq-      .loc_0x10C
      lis       r4, 0x804B
      lis       r5, 0x804A
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x0(r3)
      subi      r0, r5, 0x1D84
      addi      r5, r4, 0x698C
      lis       r4, 0x804B
      stw       r0, 0x4(r3)
      addi      r6, r4, 0x2C24
      lis       r4, 0x804D
      addi      r0, r5, 0x14
      stw       r5, 0x0(r3)
      subi      r4, r4, 0x49E0
      li        r8, 0
      li        r7, 0xAA
      stw       r0, 0x4(r3)
      addi      r5, r6, 0x14
      addi      r0, r4, 0x14
      stw       r8, 0x8(r3)
      sth       r7, 0xC(r3)
      stb       r8, 0xE(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x4(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x4(r3)

    .loc_0x10C:
      stw       r3, 0x320(r31)
      li        r3, 0x54
      bl        -0x271770
      mr.       r30, r3
      beq-      .loc_0x144
      li        r4, 0
      li        r5, 0xA4
      li        r6, 0xA5
      li        r7, 0xA6
      li        r8, 0xA7
      bl        0x11B2D8
      lis       r3, 0x804D
      subi      r0, r3, 0x49FC
      stw       r0, 0x0(r30)

    .loc_0x144:
      stw       r30, 0x324(r31)
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
 * Address:	........
 * Size:	000080
 */
void efx::TChaseMtxT4::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80295660
 * Size:	00004C
 */
void Game::SnakeCrow::Obj::setupEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lis       r3, 0x8049
      subi      r4, r3, 0x7748
      lwz       r3, 0x174(r31)
      bl        0x1A9964
      bl        0x19421C
      mr        r0, r3
      lwz       r3, 0x324(r31)
      mr        r4, r0
      bl        0x11B324
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802956AC
 * Size:	0001D4
 */
void Game::SnakeCrow::Obj::createAppearEffect((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      lis       r5, 0x804B
      cmpwi     r4, 0x1
      stw       r0, 0x84(r1)
      subi      r0, r5, 0x5814
      stw       r0, 0x8(r1)
      lfs       f0, 0x18C(r3)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x190(r3)
      stfs      f0, 0x10(r1)
      lfs       f0, 0x194(r3)
      stfs      f0, 0x14(r1)
      beq-      .loc_0xD0
      bge-      .loc_0x48
      cmpwi     r4, 0
      bge-      .loc_0x54
      b         .loc_0x1C4

    .loc_0x48:
      cmpwi     r4, 0x3
      bge-      .loc_0x1C4
      b         .loc_0x14C

    .loc_0x54:
      lis       r3, 0x804B
      li        r6, 0
      subi      r0, r3, 0x5808
      lis       r3, 0x804E
      stw       r0, 0x58(r1)
      addi      r0, r3, 0x6A3C
      lis       r4, 0x804E
      lis       r3, 0x804D
      stw       r0, 0x58(r1)
      addi      r0, r4, 0x6E30
      li        r4, 0xA0
      li        r9, 0xA1
      stw       r0, 0x58(r1)
      subi      r0, r3, 0x4A48
      li        r8, 0xA2
      li        r7, 0xA3
      li        r5, 0x28
      sth       r4, 0x5C(r1)
      addi      r3, r1, 0x58
      addi      r4, r1, 0x8
      sth       r9, 0x5E(r1)
      sth       r8, 0x60(r1)
      sth       r7, 0x62(r1)
      stw       r6, 0x64(r1)
      stw       r6, 0x68(r1)
      stw       r6, 0x6C(r1)
      stw       r6, 0x70(r1)
      stw       r5, 0x74(r1)
      stw       r0, 0x58(r1)
      bl        0x11E334
      b         .loc_0x1C4

    .loc_0xD0:
      lis       r3, 0x804B
      li        r6, 0
      subi      r0, r3, 0x5808
      lis       r3, 0x804E
      stw       r0, 0x38(r1)
      addi      r0, r3, 0x6A3C
      lis       r4, 0x804E
      lis       r3, 0x804D
      stw       r0, 0x38(r1)
      addi      r0, r4, 0x6E30
      li        r4, 0xA0
      li        r9, 0xA1
      stw       r0, 0x38(r1)
      subi      r0, r3, 0x4A5C
      li        r8, 0xA2
      li        r7, 0xA3
      li        r5, 0x41
      sth       r4, 0x3C(r1)
      addi      r3, r1, 0x38
      addi      r4, r1, 0x8
      sth       r9, 0x3E(r1)
      sth       r8, 0x40(r1)
      sth       r7, 0x42(r1)
      stw       r6, 0x44(r1)
      stw       r6, 0x48(r1)
      stw       r6, 0x4C(r1)
      stw       r6, 0x50(r1)
      stw       r5, 0x54(r1)
      stw       r0, 0x38(r1)
      bl        0x11E2B8
      b         .loc_0x1C4

    .loc_0x14C:
      lis       r3, 0x804B
      li        r6, 0
      subi      r0, r3, 0x5808
      lis       r3, 0x804E
      stw       r0, 0x18(r1)
      addi      r0, r3, 0x6A3C
      lis       r4, 0x804E
      lis       r3, 0x804D
      stw       r0, 0x18(r1)
      addi      r0, r4, 0x6E30
      li        r4, 0xA0
      li        r9, 0xA1
      stw       r0, 0x18(r1)
      subi      r0, r3, 0x4A70
      li        r8, 0xA2
      li        r7, 0xA3
      li        r5, 0x23
      sth       r4, 0x1C(r1)
      addi      r3, r1, 0x18
      addi      r4, r1, 0x8
      sth       r9, 0x1E(r1)
      sth       r8, 0x20(r1)
      sth       r7, 0x22(r1)
      stw       r6, 0x24(r1)
      stw       r6, 0x28(r1)
      stw       r6, 0x2C(r1)
      stw       r6, 0x30(r1)
      stw       r5, 0x34(r1)
      stw       r0, 0x18(r1)
      bl        0x11E23C

    .loc_0x1C4:
      lwz       r0, 0x84(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	80295880
 * Size:	000058
 */
void Game::SnakeCrow::Obj::startRotateEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x24(r1)
      subi      r0, r4, 0x5814
      addi      r4, r1, 0x8
      stw       r0, 0x8(r1)
      lfs       f0, 0x18C(r3)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x190(r3)
      stfs      f0, 0x10(r1)
      lfs       f0, 0x194(r3)
      stfs      f0, 0x14(r1)
      lwz       r3, 0x31C(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	802958D8
 * Size:	000030
 */
void Game::SnakeCrow::Obj::finishRotateEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x31C(r3)
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
 * Address:	80295908
 * Size:	000058
 */
void Game::SnakeCrow::Obj::startWaitEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x24(r1)
      subi      r0, r4, 0x5814
      addi      r4, r1, 0x8
      stw       r0, 0x8(r1)
      lfs       f0, 0x18C(r3)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x190(r3)
      stfs      f0, 0x10(r1)
      lfs       f0, 0x194(r3)
      stfs      f0, 0x14(r1)
      lwz       r3, 0x320(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80295960
 * Size:	000030
 */
void Game::SnakeCrow::Obj::finishWaitEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x320(r3)
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
 * Address:	80295990
 * Size:	000034
 */
void Game::SnakeCrow::Obj::createDeadStartEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x14(r1)
      lwz       r3, 0x324(r3)
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
 * Address:	802959C4
 * Size:	000094
 */
void Game::SnakeCrow::Obj::createDeadFinishEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r4, 0x8049
      stw       r0, 0x34(r1)
      subi      r4, r4, 0x78B4
      lwz       r3, 0x174(r3)
      bl        0x1A9608
      bl        0x193EC0
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
      li        r6, 0xA8
      li        r5, 0
      stw       r0, 0x8(r1)
      subi      r0, r3, 0x4A84
      addi      r3, r1, 0x8
      stw       r4, 0x14(r1)
      addi      r4, r1, 0x14
      stfs      f0, 0x18(r1)
      stfs      f1, 0x1C(r1)
      stfs      f2, 0x20(r1)
      sth       r6, 0xC(r1)
      stw       r5, 0x10(r1)
      stw       r0, 0x8(r1)
      bl        0x119540
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80295A58
 * Size:	0000AC
 */
void Game::SnakeCrow::Obj::createDownHeadEffect((float))
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
      lis       r3, 0x8049
      subi      r4, r3, 0x78B4
      fmr       f31, f1
      lwz       r3, 0x174(r31)
      bl        0x1A9560
      bl        0x193E18
      lfs       f3, 0x1C(r3)
      fmr       f1, f31
      lfs       f0, -0x28B0(r2)
      addi      r4, r1, 0x8
      lfs       f4, 0x2C(r3)
      lfs       f2, 0xC(r3)
      fsubs     f0, f3, f0
      mr        r3, r31
      stfs      f3, 0xC(r1)
      stfs      f2, 0x8(r1)
      stfs      f4, 0x10(r1)
      stfs      f0, 0xC(r1)
      bl        -0x191F6C
      lwz       r3, -0x6960(r13)
      addi      r5, r1, 0x8
      li        r4, 0x3
      li        r6, 0x2
      bl        -0x43894
      lwz       r3, -0x6958(r13)
      addi      r5, r1, 0x8
      li        r4, 0x8
      li        r6, 0x2
      bl        -0x42364
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
 * Address:	80295B04
 * Size:	000064
 */
void Game::SnakeCrow::Obj::effectDrawOn(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x31C(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x320(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x324(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
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
 * Address:	80295B68
 * Size:	000064
 */
void Game::SnakeCrow::Obj::effectDrawOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x31C(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x320(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x324(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
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
 * Address:	80295BCC
 * Size:	000048
 */
void Game::SnakeCrow::Obj::createEfxHamon(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r12, 0x0(r3)
      lwz       r12, 0xD0(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x34
      mr        r3, r31
      bl        -0x1942F8

    .loc_0x34:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80295C14
 * Size:	000008
 */
void Game::SnakeCrow::Obj::isUnderground(void)
{
    /*
    .loc_0x0:
      lbz       r3, 0x2C0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80295C1C
 * Size:	00009C
 */
void efx::THebiWait::__dt(void)
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
      subi      r3, r3, 0x49E0
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804B
      addi      r3, r3, 0x2C24
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
      bl        -0x205FEC

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x271BE4

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
 * Address:	80295CB8
 * Size:	00009C
 */
void efx::THebiRot::__dt(void)
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
      subi      r3, r3, 0x4994
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804B
      addi      r3, r3, 0x2C24
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
      bl        -0x206088

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x271C80

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
 * Address:	80295D54
 * Size:	000004
 */
void Game::SnakeCrow::Obj::inWaterCallback((Game::WaterBox*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80295D58
 * Size:	000004
 */
void Game::SnakeCrow::Obj::outWaterCallback(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80295D5C
 * Size:	000008
 */
void Game::SnakeCrow::Obj::getDamageCoeStoneState(void)
{
    /*
    .loc_0x0:
      lfs       f1, -0x2888(r2)
      blr
    */
}

/*
 * --INFO--
 * Address:	80295D64
 * Size:	000008
 */
void Game::SnakeCrow::Obj::getMouthSlots(void)
{
    /*
    .loc_0x0:
      addi      r3, r3, 0x2CC
      blr
    */
}

/*
 * --INFO--
 * Address:	80295D6C
 * Size:	000004
 */
void Game::SnakeCrow::Obj::throwupItemInDeathProcedure(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80295D70
 * Size:	000008
 */
void Game::SnakeCrow::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x22
      blr
    */
}

/*
 * --INFO--
 * Address:	80295D78
 * Size:	000028
 */
void __sinit_SnakeCrow_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804D
      stw       r0, -0x6920(r13)
      stfsu     f0, -0x4A90(r3)
      stfs      f0, -0x691C(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80295DA0
 * Size:	000014
 */
void @808 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x328
      b         -0x18F494
    */
}

/*
 * --INFO--
 * Address:	80295DB4
 * Size:	000014
 */
void @808 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x328
      b         -0x18F71C
    */
}

/*
 * --INFO--
 * Address:	80295DC8
 * Size:	000014
 */
void @808 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x328
      b         -0x18F710
    */
}

/*
 * --INFO--
 * Address:	80295DDC
 * Size:	000014
 */
void @808 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x328
      b         -0x18F374
    */
}

/*
 * --INFO--
 * Address:	80295DF0
 * Size:	000014
 */
void @808 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x328
      b         -0x18F3B4
    */
}

/*
 * --INFO--
 * Address:	80295E04
 * Size:	000014
 */
void @808 @12 @Game::EnemyBase::viewGetShape(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x328
      b         -0x18F774
    */
}

/*
 * --INFO--
 * Address:	80295E18
 * Size:	000008
 */
void @4 @efx::THebiRot::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x164
    */
}

/*
 * --INFO--
 * Address:	80295E20
 * Size:	000008
 */
void @4 @efx::THebiWait::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x208
    */
}
