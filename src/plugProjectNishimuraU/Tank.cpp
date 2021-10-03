

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
 * Address:	80275D8C
 * Size:	000138
 */
void Game::Tank::Obj::__ct(void)
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
      addi      r0, r31, 0x308
      lis       r3, 0x804B
      stw       r0, 0x17C(r31)
      subi      r3, r3, 0x5988
      li        r0, 0
      stw       r3, 0x308(r31)
      stw       r0, 0x30C(r31)
      stw       r0, 0x310(r31)

    .loc_0x40:
      mr        r3, r31
      li        r4, 0
      bl        -0x174A34
      lis       r3, 0x804C
      addi      r0, r31, 0x308
      addi      r5, r3, 0x6B50
      addi      r3, r31, 0x2C4
      stw       r5, 0x0(r31)
      addi      r4, r5, 0x1B0
      addi      r5, r5, 0x328
      stw       r4, 0x178(r31)
      lwz       r4, 0x17C(r31)
      stw       r5, 0x0(r4)
      lwz       r4, 0x17C(r31)
      sub       r0, r0, r4
      stw       r0, 0xC(r4)
      bl        -0x14BAB8
      li        r3, 0x2C
      bl        -0x251F70
      mr.       r30, r3
      beq-      .loc_0xD4
      bl        -0x14E4AC
      lis       r3, 0x804C
      lis       r4, 0x804B
      addi      r0, r3, 0x6A40
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

    .loc_0xD4:
      stw       r30, 0x184(r31)
      li        r3, 0x1C
      bl        -0x251FC4
      mr.       r4, r3
      beq-      .loc_0x108
      lis       r5, 0x804B
      lis       r3, 0x804C
      subi      r0, r5, 0x680
      li        r5, -0x1
      stw       r0, 0x0(r4)
      addi      r0, r3, 0x6A18
      stw       r5, 0x18(r4)
      stw       r0, 0x0(r4)

    .loc_0x108:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      lwz       r12, 0x2F8(r12)
      mtctr     r12
      bctrl
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
 * Address:	80275EC4
 * Size:	000004
 */
void Game::Tank::Obj::setInitialSetting((Game::EnemyInitialParamBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80275EC8
 * Size:	00009C
 */
void Game::Tank::Obj::onInit((Game::CreatureInitArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x174484
      lfs       f0, -0x3078(r2)
      subi      r4, r2, 0x3074
      stfs      f0, 0x2EC(r31)
      lwz       r3, 0x174(r31)
      bl        0x1C90F4
      stw       r3, 0x2C0(r31)
      li        r0, 0
      lfs       f1, -0x306C(r2)
      mr        r3, r31
      lfs       f0, -0x3068(r2)
      stfs      f1, 0x2F0(r31)
      stfs      f1, 0x2EC(r31)
      stb       r0, 0x304(r31)
      stfs      f1, 0x2E4(r31)
      stfs      f0, 0x2E8(r31)
      stfs      f1, 0x2F4(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x300(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x2BC(r31)
      mr        r4, r31
      li        r5, 0x1
      li        r6, 0
      lwz       r12, 0x0(r3)
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
 * Address:	80275F64
 * Size:	000004
 */
void Game::Tank::Obj::setupEffect(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80275F68
 * Size:	000050
 */
void Game::Tank::Obj::onKill((Game::CreatureKillArg*))
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
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30C(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      mr        r4, r31
      bl        -0x1740B4
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
 * Address:	80275FB8
 * Size:	00004C
 */
void Game::Tank::Obj::doUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0xBCC
      mr        r3, r31
      bl        0xA94
      lwz       r3, 0x2BC(r31)
      mr        r4, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
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
 * Address:	80276004
 * Size:	000004
 */
void Game::Tank::Obj::doDirectDraw((Graphics&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80276008
 * Size:	000020
 */
void Game::Tank::Obj::doDebugDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x1701A8
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80276028
 * Size:	00004C
 */
void Game::Tank::Obj::setFSM((Game::Tank::FSM*))
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
 * Address:	80276074
 * Size:	000090
 */
void Game::Tank::Obj::getShadowParam((Game::ShadowParam&))
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
      lwz       r12, 0x0(r3)
      lwz       r12, 0x204(r12)
      mtctr     r12
      bctrl
      lfs       f2, -0x3064(r2)
      lfs       f0, 0x190(r30)
      lfs       f1, -0x306C(r2)
      fadds     f2, f2, f0
      lfs       f0, -0x3068(r2)
      stfs      f2, 0x4(r31)
      stfs      f1, 0xC(r31)
      stfs      f0, 0x10(r31)
      stfs      f1, 0x14(r31)
      lwz       r0, 0x1E4(r30)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x68
      lfs       f0, -0x3060(r2)
      stfs      f0, 0x18(r31)
      b         .loc_0x70

    .loc_0x68:
      lfs       f0, -0x305C(r2)
      stfs      f0, 0x18(r31)

    .loc_0x70:
      lfs       f0, -0x3058(r2)
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
 * Address:	80276104
 * Size:	000054
 */
void Game::Tank::Obj::doStartStoneState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x173224
      lbz       r0, 0x304(r31)
      cmplwi    r0, 0
      beq-      .loc_0x40
      lfs       f0, -0x306C(r2)
      mr        r3, r31
      stfs      f0, 0x2E4(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x30C(r12)
      mtctr     r12
      bctrl

    .loc_0x40:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80276158
 * Size:	00004C
 */
void Game::Tank::Obj::doFinishStoneState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x173264
      lbz       r0, 0x304(r31)
      cmplwi    r0, 0
      beq-      .loc_0x38
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x304(r12)
      mtctr     r12
      bctrl

    .loc_0x38:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802761A4
 * Size:	000054
 */
void Game::Tank::Obj::doStartEarthquakeFitState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x16E854
      lbz       r0, 0x304(r31)
      cmplwi    r0, 0
      beq-      .loc_0x40
      lfs       f0, -0x306C(r2)
      mr        r3, r31
      stfs      f0, 0x2E4(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x30C(r12)
      mtctr     r12
      bctrl

    .loc_0x40:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802761F8
 * Size:	00004C
 */
void Game::Tank::Obj::doFinishEarthquakeFitState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x16E8A4
      lbz       r0, 0x304(r31)
      cmplwi    r0, 0
      beq-      .loc_0x38
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x304(r12)
      mtctr     r12
      bctrl

    .loc_0x38:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80276244
 * Size:	000040
 */
void Game::Tank::Obj::doStartWaitingBirthTypeDrop(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x16E8C0
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x314(r12)
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
 * Address:	80276284
 * Size:	000004
 */
void Game::Tank::Obj::effectDrawOff(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80276288
 * Size:	000040
 */
void Game::Tank::Obj::doFinishWaitingBirthTypeDrop(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x16E8D4
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x310(r12)
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
 * Address:	802762C8
 * Size:	000004
 */
void Game::Tank::Obj::effectDrawOn(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802762CC
 * Size:	000028
 */
void Game::Tank::Obj::startCarcassMotion(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x6
      li        r5, 0
      stw       r0, 0x14(r1)
      bl        -0x1712DC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802762F4
 * Size:	00002C
 */
void Game::Tank::Obj::doStartMovie(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x314(r12)
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
 * Address:	80276320
 * Size:	00002C
 */
void Game::Tank::Obj::doEndMovie(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x310(r12)
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
 * Address:	8027634C
 * Size:	0000C4
 */
void Game::Tank::Obj::getOffsetForMapCollision(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r4
      stw       r30, 0x18(r1)
      mr        r30, r3
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x58
      lis       r3, 0x8051
      lfsu      f0, 0x41E4(r3)
      stfs      f0, 0x0(r30)
      lfs       f0, 0x4(r3)
      stfs      f0, 0x4(r30)
      lfs       f0, 0x8(r3)
      stfs      f0, 0x8(r30)
      b         .loc_0xAC

    .loc_0x58:
      mr        r3, r31
      addi      r4, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x204(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x8(r1)
      lfs       f1, 0x18C(r31)
      lfs       f0, -0x306C(r2)
      fsubs     f2, f2, f1
      lfs       f1, 0x10(r1)
      stfs      f0, 0xC(r1)
      stfs      f2, 0x8(r1)
      lfs       f0, 0x194(r31)
      fsubs     f0, f1, f0
      stfs      f0, 0x10(r1)
      stfs      f2, 0x0(r30)
      lfs       f0, 0xC(r1)
      stfs      f0, 0x4(r30)
      lfs       f0, 0x10(r1)
      stfs      f0, 0x8(r30)

    .loc_0xAC:
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
 * Address:	80276410
 * Size:	000094
 */
void Game::Tank::Obj::initWalkSmokeEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x4
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r3, r31, 0x2C4
      bl        -0x14C0C8
      lwz       r5, 0x174(r31)
      addi      r3, r31, 0x2C4
      lfs       f1, -0x304C(r2)
      li        r4, 0
      subi      r6, r2, 0x3054
      bl        -0x14BE64
      lwz       r5, 0x174(r31)
      addi      r3, r31, 0x2C4
      lfs       f1, -0x304C(r2)
      li        r4, 0x1
      subi      r6, r2, 0x3048
      bl        -0x14BE7C
      lwz       r5, 0x174(r31)
      addi      r3, r31, 0x2C4
      lfs       f1, -0x3038(r2)
      li        r4, 0x2
      subi      r6, r2, 0x3040
      bl        -0x14BE94
      lwz       r5, 0x174(r31)
      addi      r3, r31, 0x2C4
      lfs       f1, -0x3038(r2)
      li        r4, 0x3
      subi      r6, r2, 0x3034
      bl        -0x14BEAC
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802764A4
 * Size:	000008
 */
void Game::Tank::Obj::getWalkSmokeEffectMgr(void)
{
    /*
    .loc_0x0:
      addi      r3, r3, 0x2C4
      blr
    */
}

/*
 * --INFO--
 * Address:	802764AC
 * Size:	000054
 */
void getCommonEffectPos__Q34Game4Tank3ObjFR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r4
      addi      r4, r1, 0x8
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x8(r1)
      stfs      f0, 0x0(r31)
      lfs       f0, 0xC(r1)
      stfs      f0, 0x4(r31)
      lfs       f0, 0x10(r1)
      stfs      f0, 0x8(r31)
      lwz       r31, 0x1C(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80276500
 * Size:	000338
 */
void Game::Tank::Obj::isAttackable((bool))
{
    /*
    .loc_0x0:
      stwu      r1, -0x100(r1)
      mflr      r0
      stw       r0, 0x104(r1)
      stfd      f31, 0xF0(r1)
      psq_st    f31,0xF8(r1),0,0
      stfd      f30, 0xE0(r1)
      psq_st    f30,0xE8(r1),0,0
      stfd      f29, 0xD0(r1)
      psq_st    f29,0xD8(r1),0,0
      stw       r31, 0xCC(r1)
      stw       r30, 0xC8(r1)
      stw       r29, 0xC4(r1)
      mr        r30, r3
      mr        r31, r4
      lfs       f1, 0x2D0(r3)
      lfs       f2, 0x2D4(r3)
      lfs       f0, 0x2CC(r3)
      stfs      f0, 0x30(r1)
      stfs      f1, 0x34(r1)
      stfs      f2, 0x38(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      lfs       f0, -0x306C(r2)
      fcmpo     cr0, f2, f0
      bge-      .loc_0x74
      fneg      f2, f2

    .loc_0x74:
      lfs       f3, -0x302C(r2)
      lis       r3, 0x8050
      lfs       f0, -0x306C(r2)
      addi      r4, r3, 0x71A0
      fmuls     f2, f2, f3
      fcmpo     cr0, f1, f0
      fctiwz    f0, f2
      stfd      f0, 0xA8(r1)
      lwz       r0, 0xAC(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f2, 0x4(r3)
      bge-      .loc_0xCC
      lfs       f0, -0x3028(r2)
      fmuls     f0, f1, f0
      fctiwz    f0, f0
      stfd      f0, 0xB0(r1)
      lwz       r0, 0xB4(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f1, f0
      b         .loc_0xE4

    .loc_0xCC:
      fmuls     f0, f1, f3
      fctiwz    f0, f0
      stfd      f0, 0xB8(r1)
      lwz       r0, 0xBC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f1, r4, r0

    .loc_0xE4:
      lfs       f0, -0x306C(r2)
      rlwinm.   r0,r31,0,24,31
      stfs      f1, 0x24(r1)
      frsp      f30, f1
      fneg      f31, f2
      stfs      f0, 0x28(r1)
      stfs      f2, 0x2C(r1)
      lwz       r3, 0xC0(r30)
      lfs       f29, 0x564(r3)
      beq-      .loc_0x124
      fmr       f1, f29
      mr        r3, r30
      addi      r4, r1, 0x24
      addi      r5, r1, 0x30
      bl        0x220
      fmr       f29, f1

    .loc_0x124:
      lfs       f0, -0x3024(r2)
      addi      r3, r1, 0x3C
      lfs       f4, 0x34(r1)
      addi      r4, r1, 0x14
      fmuls     f5, f0, f29
      lfs       f3, 0x2C(r1)
      lfs       f2, 0x38(r1)
      lfs       f1, 0x24(r1)
      lfs       f0, 0x30(r1)
      fmadds    f2, f3, f5, f2
      stfs      f4, 0x18(r1)
      fmadds    f0, f1, f5, f0
      stfs      f2, 0x1C(r1)
      stfs      f0, 0x14(r1)
      stfs      f5, 0x20(r1)
      bl        -0x482C0
      li        r0, 0x1
      addi      r3, r1, 0x5C
      stb       r0, 0x58(r1)
      addi      r4, r1, 0x3C
      bl        -0x48294
      addi      r3, r1, 0x5C
      bl        -0x48220
      b         .loc_0x2F0

    .loc_0x184:
      addi      r3, r1, 0x5C
      bl        -0x48144
      lwz       r12, 0x0(r3)
      mr        r29, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x2E8
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1FC
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x2E8
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1C0(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x2E8

    .loc_0x1FC:
      mr        r4, r29
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r29)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0xC(r1)
      lfs       f0, 0x34(r1)
      lfs       f4, 0x10(r1)
      lfs       f3, 0x38(r1)
      fsubs     f5, f1, f0
      lfs       f0, -0x306C(r2)
      lfs       f2, 0x8(r1)
      fsubs     f4, f4, f3
      lfs       f1, 0x30(r1)
      fcmpo     cr0, f5, f0
      lwz       r3, 0xC0(r30)
      fsubs     f3, f2, f1
      ble-      .loc_0x250
      fmr       f1, f5
      b         .loc_0x254

    .loc_0x250:
      fneg      f1, f5

    .loc_0x254:
      lfs       f0, 0x5B4(r3)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x2E8
      lfs       f1, -0x306C(r2)
      fmuls     f0, f1, f5
      fmadds    f0, f31, f3, f0
      fmadds    f2, f30, f4, f0
      fcmpo     cr0, f2, f1
      ble-      .loc_0x27C
      b         .loc_0x280

    .loc_0x27C:
      fneg      f2, f2

    .loc_0x280:
      lfs       f0, 0x5B4(r3)
      fcmpo     cr0, f2, f0
      bge-      .loc_0x2E8
      lfs       f0, 0x28(r1)
      lfs       f1, 0x24(r1)
      fmuls     f0, f0, f5
      lfs       f2, 0x2C(r1)
      fmadds    f0, f1, f3, f0
      fmadds    f1, f2, f4, f0
      fcmpo     cr0, f1, f29
      bge-      .loc_0x2E8
      lfs       f0, -0x306C(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x2E8
      rlwinm.   r0,r31,0,24,31
      beq-      .loc_0x2DC
      mr        r3, r30
      mr        r4, r29
      lwz       r12, 0x0(r30)
      lwz       r12, 0x318(r12)
      mtctr     r12
      bctrl
      b         .loc_0x2E8

    .loc_0x2DC:
      stw       r29, 0x230(r30)
      li        r3, 0x1
      b         .loc_0x304

    .loc_0x2E8:
      addi      r3, r1, 0x5C
      bl        -0x482EC

    .loc_0x2F0:
      addi      r3, r1, 0x5C
      bl        -0x482C0
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x184
      mr        r3, r31

    .loc_0x304:
      psq_l     f31,0xF8(r1),0,0
      lfd       f31, 0xF0(r1)
      psq_l     f30,0xE8(r1),0,0
      lfd       f30, 0xE0(r1)
      psq_l     f29,0xD8(r1),0,0
      lfd       f29, 0xD0(r1)
      lwz       r31, 0xCC(r1)
      lwz       r30, 0xC8(r1)
      lwz       r0, 0x104(r1)
      lwz       r29, 0xC4(r1)
      mtlr      r0
      addi      r1, r1, 0x100
      blr
    */
}

/*
 * --INFO--
 * Address:	80276838
 * Size:	000004
 */
void Game::Tank::Obj::interactCreature((Game::Creature*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8027683C
 * Size:	000228
 */
void emitCollideRatio__Q34Game4Tank3ObjFR10Vector3<float> R10Vector3<float>
f(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0xE0(r1)
      mflr      r0
      stw       r0, 0xE4(r1)
      stfd      f31, 0xD0(r1)
      psq_st    f31,0xD8(r1),0,0
      stw       r31, 0xCC(r1)
      mr        r31, r3
      lfs       f0, -0x306C(r2)
      lfs       f2, 0x2E4(r3)
      fcmpu     cr0, f0, f2
      fmuls     f31, f1, f2
      bne-      .loc_0x40
      lfs       f1, -0x3020(r2)
      lfs       f0, -0x3068(r2)
      stfs      f1, 0x2E4(r31)
      stfs      f0, 0x2E8(r31)

    .loc_0x40:
      lfs       f1, 0x2E4(r31)
      lfs       f0, 0x2E8(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x1EC
      lfs       f5, 0x4(r4)
      lis       r3, 0x8050
      lfs       f3, 0x0(r4)
      addi      r3, r3, 0x71A0
      fmuls     f5, f5, f31
      lfs       f6, 0x8(r4)
      lfs       f1, 0x4(r5)
      fmuls     f3, f3, f31
      lfs       f2, 0x0(r5)
      fmuls     f6, f6, f31
      lfs       f0, 0x8(r5)
      fadds     f5, f5, f1
      lfs       f1, -0x301C(r2)
      fadds     f3, f3, f2
      fadds     f6, f6, f0
      lfs       f0, -0x3064(r2)
      fadds     f5, f5, f1
      stfs      f3, 0x14(r1)
      li        r6, 0
      lfs       f4, -0x304C(r2)
      stfs      f5, 0x18(r1)
      addi      r8, r1, 0x14
      lfs       f2, -0x306C(r2)
      addi      r7, r1, 0x8
      stfs      f6, 0x1C(r1)
      li        r0, -0x1
      lfs       f1, 0x800(r3)
      stfs      f0, 0x20(r1)
      lfs       f0, -0x3018(r2)
      lfs       f5, 0x0(r4)
      lwz       r3, -0x6CF8(r13)
      stfs      f5, 0x8(r1)
      lwz       r5, -0x6514(r13)
      lfs       f7, 0x4(r4)
      stfs      f7, 0xC(r1)
      lfs       f6, 0x8(r4)
      addi      r4, r1, 0x24
      stfs      f6, 0x10(r1)
      lwz       r9, 0xC0(r31)
      lfs       f3, 0x564(r9)
      fmuls     f3, f4, f3
      fmuls     f5, f5, f3
      fmuls     f4, f7, f3
      fmuls     f3, f6, f3
      stfs      f5, 0x8(r1)
      stfs      f4, 0xC(r1)
      stfs      f3, 0x10(r1)
      lfs       f3, 0x4C(r9)
      stw       r6, 0x38(r1)
      stw       r8, 0x24(r1)
      stw       r7, 0x28(r1)
      stfs      f3, 0x2C(r1)
      stfs      f2, 0x30(r1)
      stw       r6, 0x34(r1)
      stw       r6, 0x68(r1)
      stb       r6, 0x98(r1)
      stb       r6, 0x3D(r1)
      stb       r6, 0x3C(r1)
      stw       r6, 0x6C(r1)
      stb       r6, 0xB4(r1)
      stw       r6, 0xB8(r1)
      stfs      f1, 0x50(r1)
      stfs      f0, 0x54(r1)
      stw       r0, 0xBC(r1)
      stw       r6, 0x70(r1)
      stb       r6, 0x3E(r1)
      stw       r31, 0x38(r1)
      lwz       r12, 0x4(r3)
      lfs       f1, 0x54(r5)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x68(r1)
      cmplwi    r0, 0
      bne-      .loc_0x188
      lwz       r0, 0x6C(r1)
      cmplwi    r0, 0
      beq-      .loc_0x194

    .loc_0x188:
      lfs       f0, 0x2E4(r31)
      stfs      f0, 0x2E8(r31)
      b         .loc_0x1C0

    .loc_0x194:
      lwz       r3, -0x6514(r13)
      lfs       f2, -0x304C(r2)
      lfs       f1, 0x54(r3)
      lfs       f0, 0x2E4(r31)
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x2E4(r31)
      lfs       f0, 0x2E4(r31)
      lfs       f1, 0x2E8(r31)
      fcmpo     cr0, f0, f1
      ble-      .loc_0x1C0
      stfs      f1, 0x2E4(r31)

    .loc_0x1C0:
      lfs       f1, 0x2E8(r31)
      lfs       f0, -0x3068(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x1EC
      mr        r3, r31
      lfs       f0, -0x3014(r2)
      lwz       r12, 0x0(r31)
      fadds     f1, f0, f31
      lwz       r12, 0x31C(r12)
      mtctr     r12
      bctrl

    .loc_0x1EC:
      lfs       f1, 0x2E8(r31)
      lfs       f0, -0x3068(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x208
      lfs       f0, -0x3064(r2)
      fadds     f1, f0, f31
      b         .loc_0x20C

    .loc_0x208:
      fmr       f1, f31

    .loc_0x20C:
      psq_l     f31,0xD8(r1),0,0
      lwz       r0, 0xE4(r1)
      lfd       f31, 0xD0(r1)
      lwz       r31, 0xCC(r1)
      mtlr      r0
      addi      r1, r1, 0xE0
      blr
    */
}

/*
 * --INFO--
 * Address:	80276A64
 * Size:	000004
 */
void Game::Tank::Obj::stopEffectRadius((float))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80276A68
 * Size:	000130
 */
void Game::Tank::Obj::updateEmit(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x2C0(r3)
      bl        0x1B2E20
      cmplwi    r3, 0
      beq-      .loc_0x11C
      lfs       f0, 0xC(r3)
      lfs       f1, -0x306C(r2)
      stfs      f0, 0x2CC(r31)
      lfs       f0, 0x1C(r3)
      stfs      f0, 0x2D0(r31)
      lfs       f0, 0x2C(r3)
      stfs      f0, 0x2D4(r31)
      lfs       f0, 0x0(r3)
      stfs      f0, 0x2D8(r31)
      lfs       f0, 0x10(r3)
      stfs      f0, 0x2DC(r31)
      lfs       f0, 0x20(r3)
      stfs      f0, 0x2E0(r31)
      lfs       f3, 0x2D8(r31)
      lfs       f2, 0x2DC(r31)
      fmuls     f0, f3, f3
      lfs       f4, 0x2E0(r31)
      fmuls     f2, f2, f2
      fmuls     f4, f4, f4
      fadds     f0, f0, f2
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x9C
      fmadds    f0, f3, f3, f2
      fadds     f2, f4, f0
      fcmpo     cr0, f2, f1
      ble-      .loc_0xA0
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0xA0

    .loc_0x9C:
      fmr       f2, f1

    .loc_0xA0:
      lfs       f0, -0x306C(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0xD8
      lfs       f1, -0x3068(r2)
      lfs       f0, 0x2D8(r31)
      fdivs     f1, f1, f2
      fmuls     f0, f0, f1
      stfs      f0, 0x2D8(r31)
      lfs       f0, 0x2DC(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0x2DC(r31)
      lfs       f0, 0x2E0(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0x2E0(r31)

    .loc_0xD8:
      lfs       f2, 0x2D8(r31)
      lfs       f1, -0x301C(r2)
      lfs       f3, 0x2DC(r31)
      fmuls     f2, f2, f1
      lfs       f0, 0x2CC(r31)
      fmuls     f3, f3, f1
      lfs       f4, 0x2E0(r31)
      fadds     f0, f0, f2
      fsubs     f3, f3, f1
      fmuls     f4, f4, f1
      stfs      f0, 0x2CC(r31)
      lfs       f0, 0x2D0(r31)
      fadds     f0, f0, f3
      stfs      f0, 0x2D0(r31)
      lfs       f0, 0x2D4(r31)
      fadds     f0, f0, f4
      stfs      f0, 0x2D4(r31)

    .loc_0x11C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80276B98
 * Size:	000050
 */
void Game::Tank::Obj::updateCaution(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0x1E0(r3)
      rlwinm.   r0,r4,0,27,27
      bne-      .loc_0x20
      rlwinm.   r0,r4,0,30,30
      bne-      .loc_0x20
      lwz       r0, 0x1F4(r3)
      cmpwi     r0, 0
      beq-      .loc_0x28

    .loc_0x20:
      lfs       f0, -0x306C(r2)
      stfs      f0, 0x2EC(r3)

    .loc_0x28:
      lwz       r4, 0xC0(r3)
      lfs       f1, 0x2EC(r3)
      lfs       f0, 0x62C(r4)
      fcmpo     cr0, f1, f0
      bgelr-
      lwz       r4, -0x6514(r13)
      lfs       f0, 0x54(r4)
      fadds     f0, f1, f0
      stfs      f0, 0x2EC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80276BE8
 * Size:	000024
 */
void Game::Tank::Obj::getViewAngle(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0xC0(r3)
      lfs       f1, 0x2EC(r3)
      lfs       f0, 0x62C(r4)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x1C
      lfs       f1, -0x3010(r2)
      blr

    .loc_0x1C:
      lfs       f1, 0x424(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	80276C0C
 * Size:	0000BC
 */
void Game::Tank::Obj::__dt(void)
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
      lis       r3, 0x804C
      addi      r0, r31, 0x308
      addi      r4, r3, 0x6B50
      stw       r4, 0x0(r31)
      addi      r3, r4, 0x1B0
      addi      r4, r4, 0x328
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
      bl        0x19A8F0

    .loc_0x90:
      extsh.    r0, r30
      ble-      .loc_0xA0
      mr        r3, r31
      bl        -0x252BF4

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
 * Address:	80276CC8
 * Size:	000008
 */
void Game::Tank::Obj::getDownSmokeScale(void)
{
    /*
    .loc_0x0:
      lfs       f1, -0x300C(r2)
      blr
    */
}

/*
 * --INFO--
 * Address:	80276CD0
 * Size:	000008
 */
void Game::Tank::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x18
      blr
    */
}

/*
 * --INFO--
 * Address:	80276CD8
 * Size:	000004
 */
void Game::Tank::Obj::createEffect(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80276CDC
 * Size:	000014
 */
void @776 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x308
      b         -0x1703D0
    */
}

/*
 * --INFO--
 * Address:	80276CF0
 * Size:	000014
 */
void @776 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x308
      b         -0x170658
    */
}

/*
 * --INFO--
 * Address:	80276D04
 * Size:	000014
 */
void @776 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x308
      b         -0x17064C
    */
}

/*
 * --INFO--
 * Address:	80276D18
 * Size:	000014
 */
void @776 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x308
      b         -0x1702B0
    */
}

/*
 * --INFO--
 * Address:	80276D2C
 * Size:	000014
 */
void @776 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x308
      b         -0x1702F0
    */
}

/*
 * --INFO--
 * Address:	80276D40
 * Size:	000014
 */
void @776 @12 @Game::EnemyBase::viewGetShape(void)
{
    /*
    .loc_0x0:
      li        r11, 0xC
      lwzx      r11, r3, r11
      add       r3, r3, r11
      subi      r3, r3, 0x308
      b         -0x1706B0
    */
}
