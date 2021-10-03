

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
 * Address:	801EDF74
 * Size:	000084
 */
void Game::ItemBridge::FSM::init((Game::ItemBridge::Item*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x1
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x2FD8
      li        r3, 0x10
      bl        -0x1CA0F0
      mr.       r4, r3
      beq-      .loc_0x68
      lis       r3, 0x804C
      lis       r6, 0x804C
      subi      r0, r3, 0x4440
      lis       r5, 0x804C
      stw       r0, 0x0(r4)
      li        r7, 0
      lis       r3, 0x804C
      subi      r6, r6, 0x4474
      stw       r7, 0x4(r4)
      subi      r5, r5, 0x44A8
      subi      r0, r3, 0x44DC
      stw       r7, 0x8(r4)
      stw       r6, 0x0(r4)
      stw       r5, 0x0(r4)
      stw       r0, 0x0(r4)

    .loc_0x68:
      mr        r3, r31
      bl        0x3084
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801EDFF8
 * Size:	000004
 */
void Game::ItemBridge::NormalState::init((Game::ItemBridge::Item*,
                                          Game::StateArg*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801EDFFC
 * Size:	000004
 */
void Game::ItemBridge::NormalState::exec((Game::ItemBridge::Item*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801EE000
 * Size:	000004
 */
void Game::ItemBridge::NormalState::cleanup((Game::ItemBridge::Item*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void Game::ItemBridge::Item::__ct(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801EE004
 * Size:	000180
 */
void Game::ItemBridge::Item::onInit((Game::CreatureInitArg*))
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
      mr        r31, r3
      li        r0, 0
      cmplwi    r4, 0
      sth       r0, 0x214(r3)
      beq-      .loc_0x38
      lhz       r0, 0x4(r4)
      sth       r0, 0x214(r31)

    .loc_0x38:
      li        r3, 0x14
      bl        -0x1CA19C
      mr.       r30, r3
      beq-      .loc_0x6C
      lwz       r3, -0x6B48(r13)
      lhz       r4, 0x214(r31)
      bl        -0x20F04
      mr        r4, r3
      mr        r3, r30
      lis       r5, 0x2
      li        r6, 0x2
      bl        0x250170
      mr        r30, r3

    .loc_0x6C:
      stw       r30, 0x174(r31)
      lwz       r3, 0x174(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x174(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x174(r31)
      lwz       r3, 0x8(r3)
      bl        -0x187788
      lwz       r3, 0x174(r31)
      lwz       r3, 0x8(r3)
      bl        -0x1878C4
      lwz       r3, 0x1D8(r31)
      mr        r4, r31
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      li        r4, 0x1
      lwz       r12, 0x0(r31)
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl
      lfs       f0, -0x4850(r2)
      stfs      f0, 0x1F4(r31)
      lwz       r3, -0x6B48(r13)
      lhz       r4, 0x214(r31)
      bl        0x2740
      lwz       r4, -0x6B48(r13)
      lwz       r0, 0x0(r3)
      lwz       r3, 0x90(r4)
      lfs       f31, 0x100(r3)
      stw       r0, 0x21C(r31)
      lwz       r0, 0x21C(r31)
      rlwinm    r3,r0,2,0,29
      bl        -0x1CA178
      stw       r3, 0x220(r31)
      li        r5, 0
      li        r4, 0
      b         .loc_0x144

    .loc_0x134:
      lwz       r3, 0x220(r31)
      addi      r5, r5, 0x1
      stfsx     f31, r3, r4
      addi      r4, r4, 0x4

    .loc_0x144:
      lwz       r0, 0x21C(r31)
      cmpw      r5, r0
      blt+      .loc_0x134
      li        r0, 0
      stw       r0, 0x200(r31)
      stw       r0, 0x1FC(r31)
      stb       r0, 0x1F8(r31)
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
 * Address:	801EE184
 * Size:	000034
 */
void start__Q24Game38StateMachine<Game::ItemBridge::Item>
FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r0, 0x1DC(r4)
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
 * Address:	801EE1B8
 * Size:	000110
 */
void Game::ItemBridge::Item::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x1F0(r3)
      cmpwi     r3, 0
      ble-      .loc_0x30
      lwz       r0, 0x1EC(r31)
      add       r0, r0, r3
      stw       r0, 0x1EC(r31)
      b         .loc_0x58

    .loc_0x30:
      lwz       r3, 0x1EC(r31)
      cmpwi     r3, 0
      ble-      .loc_0x58
      subi      r0, r3, 0x5
      stw       r0, 0x1EC(r31)
      lwz       r0, 0x1EC(r31)
      cmpwi     r0, 0
      bge-      .loc_0x58
      li        r0, 0
      stw       r0, 0x1EC(r31)

    .loc_0x58:
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x1F0(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1C8(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x210(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x17C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        -0xB24F0
      lwz       r0, 0xDC(r31)
      cmpwi     r0, 0
      blt-      .loc_0xB8
      cmpwi     r0, 0xA
      ble-      .loc_0xE8

    .loc_0xB8:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x1234
      li        r4, 0xF5
      addi      r5, r5, 0x1244
      crclr     6, 0x6
      bl        -0x1C3C5C

    .loc_0xE8:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1D4(r12)
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
 * Address:	801EE2C8
 * Size:	0001B4
 */
void Game::ItemBridge::Item::getLODCylinder((Sys::Cylinder&))
{
    /*
    .loc_0x0:
      stwu      r1, -0xA0(r1)
      mflr      r0
      stw       r0, 0xA4(r1)
      stw       r31, 0x9C(r1)
      mr        r31, r4
      stw       r30, 0x98(r1)
      mr        r30, r3
      mr        r4, r30
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f2, 0x20(r1)
      lfs       f1, 0x24(r1)
      lfs       f0, 0x28(r1)
      stfs      f2, 0x50(r1)
      stfs      f1, 0x54(r1)
      stfs      f0, 0x58(r1)
      lhz       r0, 0x214(r30)
      cmpwi     r0, 0x1
      beq-      .loc_0x8C
      bge-      .loc_0x68
      cmpwi     r0, 0
      bge-      .loc_0x74
      b         .loc_0xBC

    .loc_0x68:
      cmpwi     r0, 0x3
      bge-      .loc_0xBC
      b         .loc_0xA8

    .loc_0x74:
      lfs       f1, -0x4850(r2)
      lfs       f0, -0x484C(r2)
      stfs      f1, 0x44(r1)
      stfs      f1, 0x48(r1)
      stfs      f0, 0x4C(r1)
      b         .loc_0xBC

    .loc_0x8C:
      lfs       f2, -0x4850(r2)
      lfs       f1, -0x4848(r2)
      lfs       f0, -0x4844(r2)
      stfs      f2, 0x44(r1)
      stfs      f1, 0x48(r1)
      stfs      f0, 0x4C(r1)
      b         .loc_0xBC

    .loc_0xA8:
      lfs       f1, -0x4850(r2)
      lfs       f0, -0x4840(r2)
      stfs      f1, 0x44(r1)
      stfs      f1, 0x48(r1)
      stfs      f0, 0x4C(r1)

    .loc_0xBC:
      lfs       f1, -0x483C(r2)
      addi      r3, r1, 0x5C
      lfs       f0, -0x4850(r2)
      addi      r4, r1, 0x38
      stfs      f1, 0x38(r1)
      addi      r5, r1, 0x2C
      stfs      f1, 0x3C(r1)
      stfs      f1, 0x40(r1)
      lfs       f1, 0x1F4(r30)
      stfs      f0, 0x2C(r1)
      stfs      f1, 0x30(r1)
      stfs      f0, 0x34(r1)
      bl        0x23A1FC
      addi      r3, r1, 0x5C
      addi      r4, r1, 0x44
      addi      r5, r1, 0x8
      bl        -0x1037EC
      lfs       f5, 0x8(r1)
      mr        r4, r30
      lfs       f4, 0xC(r1)
      addi      r3, r1, 0x14
      lfs       f3, 0x10(r1)
      lfs       f2, 0x58(r1)
      lfs       f1, 0x54(r1)
      lfs       f0, 0x50(r1)
      fadds     f2, f3, f2
      stfs      f3, 0x4C(r1)
      fadds     f1, f4, f1
      fadds     f0, f5, f0
      stfs      f5, 0x44(r1)
      stfs      f4, 0x48(r1)
      stfs      f0, 0x44(r1)
      stfs      f1, 0x48(r1)
      stfs      f2, 0x4C(r1)
      bl        0xC2C
      lfs       f3, 0x1C(r1)
      mr        r3, r31
      lfs       f2, -0x4838(r2)
      addi      r4, r1, 0x50
      lfs       f1, 0x18(r1)
      addi      r5, r1, 0x44
      lfs       f0, 0x14(r1)
      fmuls     f5, f3, f2
      lfs       f6, 0x58(r1)
      fmuls     f3, f1, f2
      lfs       f4, 0x54(r1)
      fmuls     f0, f0, f2
      lfs       f2, 0x50(r1)
      fsubs     f5, f6, f5
      lfs       f1, -0x4834(r2)
      fsubs     f3, f4, f3
      fsubs     f0, f2, f0
      stfs      f5, 0x58(r1)
      stfs      f0, 0x50(r1)
      stfs      f3, 0x54(r1)
      bl        0x233204
      lwz       r0, 0xA4(r1)
      lwz       r31, 0x9C(r1)
      lwz       r30, 0x98(r1)
      mtlr      r0
      addi      r1, r1, 0xA0
      blr
    */
}

/*
 * --INFO--
 * Address:	801EE47C
 * Size:	000044
 */
void Game::ItemBridge::Item::do_updateLOD(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      addi      r3, r1, 0x8
      bl        -0x16C8C
      li        r0, 0x1
      mr        r3, r31
      stb       r0, 0x10(r1)
      addi      r4, r1, 0x8
      bl        -0x16C6C
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801EE4C0
 * Size:	000004
 */
void Game::ItemBridge::Item::doDirectDraw((Graphics&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801EE4C4
 * Size:	000048
 */
void Game::ItemBridge::Item::constructor(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x84
      bl        -0x1CA638
      mr.       r0, r3
      beq-      .loc_0x30
      mr        r4, r31
      bl        0x273134
      mr        r0, r3

    .loc_0x30:
      stw       r0, 0x17C(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801EE50C
 * Size:	0000FC
 */
void Game::ItemBridge::Item::doLoad((Stream&))
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
      mr        r3, r31
      bl        0x226564
      stw       r3, 0x218(r30)
      li        r5, 0
      lfs       f0, -0x4850(r2)
      li        r4, 0
      b         .loc_0x48

    .loc_0x38:
      lwz       r3, 0x220(r30)
      addi      r5, r5, 0x1
      stfsx     f0, r3, r4
      addi      r4, r4, 0x4

    .loc_0x48:
      lwz       r0, 0x21C(r30)
      cmpw      r5, r0
      blt+      .loc_0x38
      mr        r3, r31
      bl        0x226848
      lwz       r4, 0x218(r30)
      lwz       r0, 0x21C(r30)
      cmpw      r4, r0
      blt-      .loc_0xCC
      mr        r3, r30
      li        r4, 0
      lwz       r12, 0x0(r30)
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x1FC(r30)
      cmplwi    r3, 0
      beq-      .loc_0xD8
      lwz       r0, 0x200(r30)
      cmplwi    r0, 0
      beq-      .loc_0xD8
      li        r4, 0x1
      bl        -0x7BD38
      lwz       r3, 0x200(r30)
      li        r4, 0x1
      bl        -0x7BD44
      lwz       r3, 0x1FC(r30)
      li        r4, 0
      bl        -0x7BD28
      lwz       r3, 0x200(r30)
      li        r4, 0
      bl        -0x7BD34
      b         .loc_0xD8

    .loc_0xCC:
      lwz       r3, 0x220(r30)
      rlwinm    r0,r4,2,0,29
      stfsx     f1, r3, r0

    .loc_0xD8:
      lwz       r4, 0x218(r30)
      mr        r3, r30
      bl        0x408
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
 * Address:	801EE608
 * Size:	000074
 */
void Game::ItemBridge::Item::doSave((Stream&))
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
      lwz       r4, 0x218(r3)
      mr        r3, r31
      bl        0x227194
      lwz       r3, 0x218(r30)
      lwz       r0, 0x21C(r30)
      cmpw      r3, r0
      blt-      .loc_0x48
      lfs       f1, -0x4830(r2)
      mr        r3, r31
      bl        0x227200
      b         .loc_0x5C

    .loc_0x48:
      lwz       r4, 0x220(r30)
      rlwinm    r0,r3,2,0,29
      mr        r3, r31
      lfsx      f1, r4, r0
      bl        0x2271E8

    .loc_0x5C:
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
 * Address:	801EE67C
 * Size:	000090
 */
void Game::ItemBridge::Item::onSetPosition(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lfs       f0, -0x4850(r2)
      stw       r0, 0x24(r1)
      addi      r5, r1, 0x8
      stw       r31, 0x1C(r1)
      mr        r31, r3
      addi      r4, r31, 0x19C
      lfs       f1, 0x1F4(r3)
      addi      r3, r31, 0x138
      stfs      f0, 0x8(r1)
      stfs      f1, 0xC(r1)
      stfs      f0, 0x10(r1)
      bl        0x23A1D8
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6B48(r13)
      mr        r4, r31
      addi      r5, r31, 0x204
      bl        0x23F4
      addi      r3, r31, 0x204
      li        r4, 0x1
      bl        -0x292E0
      mr        r3, r31
      bl        0x598
      mr        r3, r31
      li        r4, 0
      bl        0x300
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801EE70C
 * Size:	000024
 */
void Game::ItemBridge::Item::updateBoundSphere(void)
{
    /*
    .loc_0x0:
      lfs       f1, 0x19C(r3)
      lfs       f0, -0x4838(r2)
      stfs      f1, 0x1C4(r3)
      lfs       f1, 0x1A0(r3)
      stfs      f1, 0x1C8(r3)
      lfs       f1, 0x1A4(r3)
      stfs      f1, 0x1CC(r3)
      stfs      f0, 0x1D0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801EE730
 * Size:	000124
 */
void Game::ItemBridge::Item::changeMaterial(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      mr        r28, r3
      addi      r3, r28, 0x204
      bl        -0x2922C
      lwz       r3, -0x6B48(r13)
      lhz       r4, 0x214(r28)
      bl        0x20E4
      mr        r31, r3
      lwz       r5, 0xC(r3)
      cmpwi     r5, -0x1
      beq-      .loc_0x104
      lwz       r3, 0x218(r28)
      lwz       r0, 0x21C(r28)
      cmpw      r3, r0
      bne-      .loc_0xEC
      li        r29, 0
      li        r30, 0
      b         .loc_0xC0

    .loc_0x60:
      rlwinm    r3,r29,1,31,31
      rlwinm    r0,r29,0,31,31
      xor       r0, r0, r3
      sub.      r0, r0, r3
      bne-      .loc_0x98
      lwz       r3, 0x174(r28)
      li        r4, 0
      lwz       r5, 0x8(r31)
      lwz       r12, 0x0(r3)
      lhzx      r5, r5, r30
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      b         .loc_0xB8

    .loc_0x98:
      lwz       r3, 0x174(r28)
      li        r4, 0x1
      lwz       r5, 0x8(r31)
      lwz       r12, 0x0(r3)
      lhzx      r5, r5, r30
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl

    .loc_0xB8:
      addi      r30, r30, 0x2
      addi      r29, r29, 0x1

    .loc_0xC0:
      lwz       r0, 0x4(r31)
      cmpw      r29, r0
      blt+      .loc_0x60
      lwz       r3, 0x174(r28)
      li        r4, 0x1
      lwz       r5, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      b         .loc_0x104

    .loc_0xEC:
      lwz       r3, 0x174(r28)
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl

    .loc_0x104:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801EE854
 * Size:	0001A0
 */
void Game::ItemBridge::Item::doAI(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      mr        r4, r31
      lwz       r3, 0x1D8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x1E0
      bl        0x403BC
      cmpwi     r3, 0x2
      beq-      .loc_0x40
      b         .loc_0x8C

    .loc_0x40:
      lwz       r3, 0x17C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0xA
      beq-      .loc_0x78
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x1234
      li        r4, 0x1BE
      addi      r5, r5, 0x1260
      crclr     6, 0x6
      bl        -0x1C4288

    .loc_0x78:
      lwz       r3, 0x17C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x90(r12)
      mtctr     r12
      bctrl

    .loc_0x8C:
      lbz       r3, 0x1F8(r31)
      cmplwi    r3, 0
      beq-      .loc_0x18C
      subi      r0, r3, 0x1
      stb       r0, 0x1F8(r31)
      lbz       r0, 0x1F8(r31)
      cmplwi    r0, 0
      bne-      .loc_0x18C
      lwz       r4, 0x218(r31)
      mr        r3, r31
      addi      r4, r4, 0x1
      bl        .loc_0x1A0
      lwz       r3, 0x218(r31)
      lwz       r0, 0x21C(r31)
      cmpw      r3, r0
      bne-      .loc_0x18C
      mr        r3, r31
      li        r4, 0
      lwz       r12, 0x0(r31)
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x67A8(r13)
      li        r4, 0x181C
      li        r5, 0
      bl        0x149CEC
      lwz       r3, 0x1FC(r31)
      cmplwi    r3, 0
      beq-      .loc_0x138
      lwz       r0, 0x200(r31)
      cmplwi    r0, 0
      beq-      .loc_0x138
      li        r4, 0x1
      bl        -0x7C0F0
      lwz       r3, 0x200(r31)
      li        r4, 0x1
      bl        -0x7C0FC
      lwz       r3, 0x1FC(r31)
      li        r4, 0
      bl        -0x7C0E0
      lwz       r3, 0x200(r31)
      li        r4, 0
      bl        -0x7C0EC

    .loc_0x138:
      addi      r3, r31, 0x1E0
      bl        0x402A0
      lwz       r3, 0x17C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0xA
      beq-      .loc_0x178
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x1234
      li        r4, 0x1D7
      addi      r5, r5, 0x1260
      crclr     6, 0x6
      bl        -0x1C4388

    .loc_0x178:
      lwz       r3, 0x17C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x94(r12)
      mtctr     r12
      bctrl

    .loc_0x18C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x1A0:
    */
}

/*
 * --INFO--
 * Address:	801EE9F4
 * Size:	00028C
 */
void Game::ItemBridge::Item::setCurrStage((int))
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
      stfd      f29, 0x40(r1)
      psq_st    f29,0x48(r1),0,0
      stmw      r27, 0x2C(r1)
      mr        r29, r3
      mr        r30, r4
      lwz       r3, -0x6B48(r13)
      lhz       r4, 0x214(r29)
      bl        0x1E18
      mr        r31, r3
      lwz       r4, 0xC(r3)
      cmpwi     r4, -0x1
      beq-      .loc_0x150
      lwz       r0, 0x21C(r29)
      cmpw      r30, r0
      bne-      .loc_0xA4
      li        r28, 0
      b         .loc_0x7C

    .loc_0x60:
      lwz       r4, 0x8(r31)
      rlwinm    r0,r28,1,15,30
      addi      r3, r29, 0x204
      lhzx      r5, r4, r0
      li        r4, 0
      bl        -0x296FC
      addi      r28, r28, 0x1

    .loc_0x7C:
      lwz       r0, 0x4(r31)
      rlwinm    r3,r28,0,16,31
      cmpw      r3, r0
      blt+      .loc_0x60
      lwz       r0, 0xC(r31)
      addi      r3, r29, 0x204
      li        r4, 0x1
      rlwinm    r5,r0,0,16,31
      bl        -0x29724
      b         .loc_0x1E8

    .loc_0xA4:
      addi      r3, r29, 0x204
      rlwinm    r5,r4,0,16,31
      li        r4, 0
      bl        -0x29738
      rlwinm    r28,r30,1,0,30
      li        r27, 0
      b         .loc_0x13C

    .loc_0xC0:
      cmpw      r4, r28
      bgt-      .loc_0x120
      rlwinm    r3,r4,1,31,31
      rlwinm    r0,r4,0,31,31
      xor       r0, r0, r3
      sub       r0, r0, r3
      cmpwi     r0, 0x1
      beq-      .loc_0xE8
      cmpw      r4, r28
      bne-      .loc_0x104

    .loc_0xE8:
      lwz       r4, 0x8(r31)
      rlwinm    r0,r27,1,15,30
      addi      r3, r29, 0x204
      lhzx      r5, r4, r0
      li        r4, 0x1
      bl        -0x29784
      b         .loc_0x138

    .loc_0x104:
      lwz       r4, 0x8(r31)
      rlwinm    r0,r27,1,15,30
      addi      r3, r29, 0x204
      lhzx      r5, r4, r0
      li        r4, 0
      bl        -0x297A0
      b         .loc_0x138

    .loc_0x120:
      lwz       r4, 0x8(r31)
      rlwinm    r0,r27,1,15,30
      addi      r3, r29, 0x204
      lhzx      r5, r4, r0
      li        r4, 0
      bl        -0x297BC

    .loc_0x138:
      addi      r27, r27, 0x1

    .loc_0x13C:
      lwz       r0, 0x4(r31)
      rlwinm    r4,r27,0,16,31
      cmpw      r4, r0
      blt+      .loc_0xC0
      b         .loc_0x1E8

    .loc_0x150:
      rlwinm    r28,r30,1,0,30
      li        r27, 0
      b         .loc_0x1D8

    .loc_0x15C:
      cmpw      r4, r28
      bgt-      .loc_0x1BC
      rlwinm    r3,r4,1,31,31
      rlwinm    r0,r4,0,31,31
      xor       r0, r0, r3
      sub       r0, r0, r3
      cmpwi     r0, 0x1
      beq-      .loc_0x184
      cmpw      r4, r28
      bne-      .loc_0x1A0

    .loc_0x184:
      lwz       r4, 0x8(r31)
      rlwinm    r0,r27,1,15,30
      addi      r3, r29, 0x204
      lhzx      r5, r4, r0
      li        r4, 0x1
      bl        -0x29820
      b         .loc_0x1D4

    .loc_0x1A0:
      lwz       r4, 0x8(r31)
      rlwinm    r0,r27,1,15,30
      addi      r3, r29, 0x204
      lhzx      r5, r4, r0
      li        r4, 0
      bl        -0x2983C
      b         .loc_0x1D4

    .loc_0x1BC:
      lwz       r4, 0x8(r31)
      rlwinm    r0,r27,1,15,30
      addi      r3, r29, 0x204
      lhzx      r5, r4, r0
      li        r4, 0
      bl        -0x29858

    .loc_0x1D4:
      addi      r27, r27, 0x1

    .loc_0x1D8:
      lwz       r0, 0x4(r31)
      rlwinm    r4,r27,0,16,31
      cmpw      r4, r0
      blt+      .loc_0x15C

    .loc_0x1E8:
      stw       r30, 0x218(r29)
      lwz       r0, 0x218(r29)
      cmpwi     r0, -0x1
      beq-      .loc_0x260
      mr        r4, r29
      addi      r3, r1, 0x8
      bl        0x444
      lfs       f3, 0x10(r1)
      mr        r4, r29
      lfs       f2, -0x482C(r2)
      addi      r3, r1, 0x14
      lfs       f1, 0xC(r1)
      lfs       f0, 0x8(r1)
      fmuls     f30, f3, f2
      fmuls     f31, f1, f2
      lwz       r5, 0x218(r29)
      fmuls     f29, f0, f2
      bl        0x22C
      lfs       f2, 0x1C(r1)
      lfs       f1, 0x18(r1)
      lfs       f0, 0x14(r1)
      fsubs     f2, f2, f30
      lwz       r3, 0x1FC(r29)
      fsubs     f1, f1, f31
      fsubs     f0, f0, f29
      cmplwi    r3, 0
      beq-      .loc_0x260
      stfs      f0, 0x4C(r3)
      stfs      f1, 0x50(r3)
      stfs      f2, 0x54(r3)

    .loc_0x260:
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      psq_l     f29,0x48(r1),0,0
      lfd       f29, 0x40(r1)
      lmw       r27, 0x2C(r1)
      lwz       r0, 0x74(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	801EEC80
 * Size:	0001CC
 */
void Game::ItemBridge::Item::createWayPoints(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0xA0(r1)
      mflr      r0
      stw       r0, 0xA4(r1)
      stfd      f31, 0x90(r1)
      psq_st    f31,0x98(r1),0,0
      stfd      f30, 0x80(r1)
      psq_st    f30,0x88(r1),0,0
      stfd      f29, 0x70(r1)
      psq_st    f29,0x78(r1),0,0
      stw       r31, 0x6C(r1)
      mr        r31, r3
      addi      r3, r1, 0x20
      mr        r4, r31
      bl        0x280
      lwz       r3, -0x6CF8(r13)
      li        r0, 0
      lfs       f29, 0x20(r1)
      lfs       f31, 0x24(r1)
      cmplwi    r3, 0
      lfs       f30, 0x28(r1)
      lfs       f0, -0x4828(r2)
      stfs      f29, 0x44(r1)
      stfs      f31, 0x48(r1)
      stfs      f30, 0x4C(r1)
      stw       r0, 0x50(r1)
      stb       r0, 0x54(r1)
      stfs      f0, 0x58(r1)
      beq-      .loc_0xB4
      lwz       r3, 0x8(r3)
      cmplwi    r3, 0
      beq-      .loc_0xB4
      addi      r4, r1, 0x44
      bl        -0x7BD3C
      stw       r3, 0x1FC(r31)
      li        r4, 0x1
      lwz       r3, 0x1FC(r31)
      stfs      f29, 0x4C(r3)
      stfs      f31, 0x50(r3)
      stfs      f30, 0x54(r3)
      lwz       r3, 0x1FC(r31)
      bl        -0x7C45C
      lwz       r3, 0x1FC(r31)
      li        r4, 0
      bl        -0x7C4B8
      b         .loc_0xBC

    .loc_0xB4:
      li        r0, 0
      stw       r0, 0x1FC(r31)

    .loc_0xBC:
      lwz       r5, 0x21C(r31)
      mr        r4, r31
      addi      r3, r1, 0x14
      subi      r5, r5, 0x1
      bl        .loc_0x1CC
      lfs       f30, 0x14(r1)
      mr        r4, r31
      lfs       f31, 0x18(r1)
      addi      r3, r1, 0x8
      lfs       f29, 0x1C(r1)
      bl        0x2D4
      lfs       f2, 0x8(r1)
      li        r0, 0
      lfs       f4, -0x4848(r2)
      lfs       f1, 0xC(r1)
      lfs       f0, 0x10(r1)
      fmuls     f3, f2, f4
      fmuls     f2, f1, f4
      lwz       r3, -0x6CF8(r13)
      fmuls     f1, f0, f4
      lfs       f0, -0x4828(r2)
      fadds     f30, f30, f3
      fadds     f31, f31, f2
      fadds     f29, f29, f1
      cmplwi    r3, 0
      stfs      f30, 0x2C(r1)
      stfs      f31, 0x30(r1)
      stfs      f29, 0x34(r1)
      stw       r0, 0x38(r1)
      stb       r0, 0x3C(r1)
      stfs      f0, 0x40(r1)
      beq-      .loc_0x198
      lwz       r3, 0x8(r3)
      cmplwi    r3, 0
      beq-      .loc_0x198
      addi      r4, r1, 0x2C
      bl        -0x7BE08
      stw       r3, 0x200(r31)
      li        r4, 0x1
      lwz       r3, 0x200(r31)
      stfs      f30, 0x4C(r3)
      stfs      f31, 0x50(r3)
      stfs      f29, 0x54(r3)
      lwz       r3, 0x200(r31)
      bl        -0x7C528
      lwz       r3, 0x200(r31)
      li        r4, 0
      bl        -0x7C584
      lwz       r3, 0x1FC(r31)
      li        r4, 0
      bl        -0x7C568
      lwz       r3, 0x200(r31)
      li        r4, 0
      bl        -0x7C574
      b         .loc_0x1A0

    .loc_0x198:
      li        r0, 0
      stw       r0, 0x200(r31)

    .loc_0x1A0:
      psq_l     f31,0x98(r1),0,0
      lfd       f31, 0x90(r1)
      psq_l     f30,0x88(r1),0,0
      lfd       f30, 0x80(r1)
      psq_l     f29,0x78(r1),0,0
      lfd       f29, 0x70(r1)
      lwz       r0, 0xA4(r1)
      lwz       r31, 0x6C(r1)
      mtlr      r0
      addi      r1, r1, 0xA0
      blr

    .loc_0x1CC:
    */
}

/*
 * --INFO--
 * Address:	801EEE4C
 * Size:	0000E8
 */
void Game::ItemBridge::Item::getStagePos((int))
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
      mr        r30, r4
      mr        r31, r5
      mr        r29, r3
      mr        r3, r30
      mr        r4, r31
      bl        0x154
      fmr       f31, f1
      mr        r4, r30
      addi      r3, r1, 0x8
      bl        0x1A8
      lfs       f2, 0x8(r1)
      cmpwi     r31, 0x1
      lfs       f1, 0xC(r1)
      lfs       f0, 0x10(r1)
      fmuls     f4, f2, f31
      lfs       f5, 0x19C(r30)
      fmuls     f2, f1, f31
      lfs       f3, 0x1A0(r30)
      fmuls     f0, f0, f31
      lfs       f1, 0x1A4(r30)
      fadds     f4, f5, f4
      fadds     f3, f3, f2
      fadds     f5, f1, f0
      blt-      .loc_0xB8
      subi      r0, r31, 0x1
      lis       r4, 0x4330
      xoris     r3, r0, 0x8000
      lhz       r0, 0x214(r30)
      stw       r3, 0x1C(r1)
      lis       r3, 0x804C
      lfd       f2, -0x4820(r2)
      rlwinm    r0,r0,2,0,29
      stw       r4, 0x18(r1)
      subi      r3, r3, 0x4C80
      lfsx      f0, r3, r0
      lfd       f1, 0x18(r1)
      fsubs     f1, f1, f2
      fmadds    f3, f1, f0, f3

    .loc_0xB8:
      stfs      f4, 0x0(r29)
      stfs      f3, 0x4(r29)
      stfs      f5, 0x8(r29)
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
 * Address:	801EEF34
 * Size:	0000A0
 */
void Game::ItemBridge::Item::getStartPos(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stfd      f31, 0x40(r1)
      psq_st    f31,0x48(r1),0,0
      stfd      f30, 0x30(r1)
      psq_st    f30,0x38(r1),0,0
      stfd      f29, 0x20(r1)
      psq_st    f29,0x28(r1),0,0
      stw       r31, 0x1C(r1)
      lfs       f31, 0x19C(r4)
      mr        r31, r3
      lfs       f30, 0x1A0(r4)
      addi      r3, r1, 0x8
      lfs       f29, 0x1A4(r4)
      bl        0xC8
      lfs       f2, -0x4818(r2)
      lfs       f0, 0x8(r1)
      lfs       f1, 0xC(r1)
      fmuls     f0, f0, f2
      lfs       f3, 0x10(r1)
      fmuls     f1, f1, f2
      fmuls     f2, f3, f2
      fsubs     f0, f31, f0
      fsubs     f1, f30, f1
      fsubs     f2, f29, f2
      stfs      f0, 0x0(r31)
      stfs      f1, 0x4(r31)
      stfs      f2, 0x8(r31)
      psq_l     f31,0x48(r1),0,0
      lfd       f31, 0x40(r1)
      psq_l     f30,0x38(r1),0,0
      lfd       f30, 0x30(r1)
      psq_l     f29,0x28(r1),0,0
      lfd       f29, 0x20(r1)
      lwz       r0, 0x54(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	801EEFD4
 * Size:	00005C
 */
void Game::ItemBridge::Item::getStageZ((int))
{
    /*
    .loc_0x0:
      cmpwi     r4, 0
      stwu      r1, -0x10(r1)
      lfs       f1, -0x4814(r2)
      ble-      .loc_0x4C
      subi      r0, r4, 0x1
      lis       r4, 0x4330
      xoris     r5, r0, 0x8000
      lhz       r0, 0x214(r3)
      stw       r5, 0xC(r1)
      lis       r3, 0x804C
      lfd       f2, -0x4820(r2)
      rlwinm    r0,r0,2,0,29
      stw       r4, 0x8(r1)
      subi      r3, r3, 0x4C90
      lfs       f3, -0x4818(r2)
      lfd       f1, 0x8(r1)
      lfsx      f0, r3, r0
      fsubs     f1, f1, f2
      fmadds    f1, f3, f1, f0

    .loc_0x4C:
      lfs       f0, -0x4828(r2)
      fsubs     f1, f1, f0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Game::ItemBridge::Item::getStageDepth(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801EF030
 * Size:	000008
 */
void Game::ItemBridge::Item::getStageWidth(void)
{
    /*
    .loc_0x0:
      lfs       f1, -0x4810(r2)
      blr
    */
}

/*
 * --INFO--
 * Address:	801EF038
 * Size:	0000A4
 */
void Game::ItemBridge::Item::getBridgeZVec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      lfs       f0, -0x4850(r2)
      lfs       f3, 0x1F4(r4)
      fmr       f1, f3
      fcmpo     cr0, f3, f0
      bge-      .loc_0x1C
      fneg      f1, f3

    .loc_0x1C:
      lfs       f2, -0x480C(r2)
      lis       r4, 0x8050
      lfs       f0, -0x4850(r2)
      addi      r5, r4, 0x71A0
      fmuls     f1, f1, f2
      fcmpo     cr0, f3, f0
      fctiwz    f0, f1
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      add       r4, r5, r0
      lfs       f1, 0x4(r4)
      bge-      .loc_0x74
      lfs       f0, -0x4808(r2)
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r5, r0
      fneg      f0, f0
      b         .loc_0x8C

    .loc_0x74:
      fmuls     f0, f3, f2
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r5, r0

    .loc_0x8C:
      stfs      f0, 0x0(r3)
      lfs       f0, -0x4850(r2)
      stfs      f0, 0x4(r3)
      stfs      f1, 0x8(r3)
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801EF0DC
 * Size:	0000B8
 */
void Game::ItemBridge::Item::getBridgeXVec(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      lfs       f0, -0x4850(r2)
      lfs       f3, 0x1F4(r4)
      fcmpo     cr0, f3, f0
      bge-      .loc_0x40
      lfs       f0, -0x4808(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x8(r1)
      lwz       r0, 0xC(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f1, f0
      b         .loc_0x64

    .loc_0x40:
      lfs       f0, -0x480C(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x10(r1)
      lwz       r0, 0x14(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f1, r4, r0

    .loc_0x64:
      lfs       f0, -0x4850(r2)
      fneg      f2, f1
      fcmpo     cr0, f3, f0
      bge-      .loc_0x78
      fneg      f3, f3

    .loc_0x78:
      lfs       f1, -0x480C(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      lfs       f0, -0x4850(r2)
      fmuls     f1, f3, f1
      fctiwz    f1, f1
      stfd      f1, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      add       r4, r4, r0
      lfs       f1, 0x4(r4)
      stfs      f1, 0x0(r3)
      stfs      f0, 0x4(r3)
      stfs      f2, 0x8(r3)
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801EF194
 * Size:	0001F0
 */
void getBridgePos__Q34Game10ItemBridge4ItemFR10Vector3<float> RfRf(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      stw       r0, 0x84(r1)
      stfd      f31, 0x70(r1)
      psq_st    f31,0x78(r1),0,0
      stfd      f30, 0x60(r1)
      psq_st    f30,0x68(r1),0,0
      stw       r31, 0x5C(r1)
      stw       r30, 0x58(r1)
      stw       r29, 0x54(r1)
      stw       r28, 0x50(r1)
      mr        r28, r3
      mr        r29, r4
      lfs       f31, 0x19C(r3)
      mr        r30, r5
      lfs       f30, 0x1A4(r3)
      mr        r31, r6
      mr        r4, r28
      addi      r3, r1, 0x8
      bl        -0x1A8
      lfs       f0, 0x8(r1)
      lfs       f2, -0x4818(r2)
      lfs       f1, 0x10(r1)
      fmuls     f4, f0, f2
      lfs       f0, 0x1F4(r28)
      fmuls     f2, f1, f2
      lfs       f1, -0x4850(r2)
      lfs       f3, 0x8(r29)
      fsubs     f4, f31, f4
      fsubs     f5, f30, f2
      lfs       f2, 0x0(r29)
      fcmpo     cr0, f0, f1
      fsubs     f4, f2, f4
      fsubs     f5, f3, f5
      bge-      .loc_0xB8
      lfs       f1, -0x4808(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f1, f0, f1
      fctiwz    f1, f1
      stfd      f1, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f1, r3, r0
      fneg      f2, f1
      b         .loc_0xDC

    .loc_0xB8:
      lfs       f1, -0x480C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f1, f0, f1
      fctiwz    f1, f1
      stfd      f1, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r3, r0

    .loc_0xDC:
      lfs       f1, -0x4850(r2)
      fmr       f3, f0
      fneg      f6, f2
      fcmpo     cr0, f0, f1
      bge-      .loc_0xF4
      fneg      f3, f0

    .loc_0xF4:
      lfs       f2, -0x480C(r2)
      lis       r3, 0x8050
      lfs       f1, -0x4850(r2)
      addi      r3, r3, 0x71A0
      fmuls     f2, f3, f2
      addi      r3, r3, 0x4
      fcmpo     cr0, f0, f1
      fmr       f8, f0
      fctiwz    f1, f2
      stfd      f1, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f7, r3, r0
      bge-      .loc_0x130
      fneg      f8, f0

    .loc_0x130:
      lfs       f3, -0x480C(r2)
      lfs       f1, -0x4850(r2)
      fmuls     f2, f8, f3
      fcmpo     cr0, f0, f1
      fctiwz    f1, f2
      stfd      f1, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r3, r0
      bge-      .loc_0x184
      lfs       f1, -0x4808(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f0, f1
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r0, 0x3C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f3, f0
      b         .loc_0x1A4

    .loc_0x184:
      fmuls     f0, f0, f3
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fctiwz    f0, f0
      stfd      f0, 0x40(r1)
      lwz       r0, 0x44(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f3, r3, r0

    .loc_0x1A4:
      lfs       f0, -0x4850(r2)
      fmadds    f1, f4, f7, f0
      fmadds    f0, f4, f3, f0
      fmadds    f1, f5, f6, f1
      fmadds    f0, f5, f2, f0
      stfs      f1, 0x0(r30)
      stfs      f0, 0x0(r31)
      psq_l     f31,0x78(r1),0,0
      lfd       f31, 0x70(r1)
      psq_l     f30,0x68(r1),0,0
      lfd       f30, 0x60(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      lwz       r29, 0x54(r1)
      lwz       r0, 0x84(r1)
      lwz       r28, 0x50(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	801EF384
 * Size:	000138
 */
void workable__Q34Game10ItemBridge4ItemFR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      addi      r5, r1, 0xC
      addi      r6, r1, 0x8
      stw       r31, 0x1C(r1)
      mr        r31, r3
      bl        -0x20C
      lwz       r3, 0x218(r31)
      lwz       r0, 0x21C(r31)
      cmpw      r3, r0
      bne-      .loc_0x38
      li        r3, 0
      b         .loc_0x124

    .loc_0x38:
      cmpwi     r3, 0
      lfs       f3, -0x4814(r2)
      ble-      .loc_0x80
      subi      r0, r3, 0x1
      lis       r4, 0x4330
      xoris     r3, r0, 0x8000
      lhz       r0, 0x214(r31)
      stw       r3, 0x14(r1)
      lis       r3, 0x804C
      lfd       f2, -0x4820(r2)
      rlwinm    r0,r0,2,0,29
      stw       r4, 0x10(r1)
      subi      r3, r3, 0x4C90
      lfs       f3, -0x4818(r2)
      lfd       f1, 0x10(r1)
      lfsx      f0, r3, r0
      fsubs     f1, f1, f2
      fmadds    f3, f3, f1, f0

    .loc_0x80:
      lfs       f2, -0x4828(r2)
      lfs       f0, 0x8(r1)
      fsubs     f3, f3, f2
      fsubs     f1, f0, f2
      fadds     f0, f2, f3
      stfs      f1, 0x8(r1)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xA8
      li        r3, 0
      b         .loc_0x124

    .loc_0xA8:
      lfs       f0, -0x4850(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0xE8
      fcmpo     cr0, f1, f3
      cror      2, 0, 0x2
      bne-      .loc_0xE8
      lfs       f1, 0xC(r1)
      lfs       f0, -0x4804(r2)
      fabs      f1, f1
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0xFC
      li        r3, 0
      b         .loc_0x124

    .loc_0xE8:
      lfs       f0, -0x4800(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xFC
      li        r3, 0
      b         .loc_0x124

    .loc_0xFC:
      lfs       f1, 0xC(r1)
      lfs       f0, -0x47FC(r2)
      fabs      f1, f1
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x120
      li        r3, 0
      b         .loc_0x124

    .loc_0x120:
      li        r3, 0x1

    .loc_0x124:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801EF4BC
 * Size:	000430
 */
void getVectorField__Q34Game10ItemBridge4ItemFRQ23Sys6SphereR10Vector3<float>(
    void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      stw       r0, 0x84(r1)
      stfd      f31, 0x70(r1)
      psq_st    f31,0x78(r1),0,0
      stfd      f30, 0x60(r1)
      psq_st    f30,0x68(r1),0,0
      stfd      f29, 0x50(r1)
      psq_st    f29,0x58(r1),0,0
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      stw       r29, 0x44(r1)
      mr        r29, r3
      mr        r30, r4
      lwz       r3, 0x218(r3)
      mr        r31, r5
      lwz       r0, 0x21C(r29)
      cmpw      r3, r0
      bne-      .loc_0x54
      li        r3, 0
      b         .loc_0x3FC

    .loc_0x54:
      lfs       f31, 0x19C(r29)
      mr        r4, r29
      lfs       f30, 0x1A0(r29)
      addi      r3, r1, 0x10
      lfs       f29, 0x1A4(r29)
      bl        -0x4EC
      lfs       f3, -0x4818(r2)
      lfs       f0, 0x14(r1)
      lfs       f2, 0x10(r1)
      fmuls     f1, f0, f3
      lfs       f0, 0x18(r1)
      fmuls     f5, f2, f3
      lfs       f2, 0x4(r30)
      fmuls     f4, f0, f3
      lfs       f3, 0x8(r30)
      fsubs     f6, f30, f1
      lfs       f1, 0x0(r30)
      fsubs     f7, f29, f4
      lfs       f0, -0x4850(r2)
      fsubs     f5, f31, f5
      fsubs     f4, f6, f2
      fsubs     f3, f7, f3
      fsubs     f2, f5, f1
      fmuls     f1, f4, f4
      fmuls     f5, f3, f3
      fmadds    f1, f2, f2, f1
      fadds     f1, f5, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0xD8
      ble-      .loc_0xDC
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0xDC

    .loc_0xD8:
      fmr       f1, f0

    .loc_0xDC:
      lfs       f0, -0x4850(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x100
      lfs       f0, -0x483C(r2)
      fdivs     f0, f0, f1
      fmuls     f2, f2, f0
      fmuls     f4, f4, f0
      fmuls     f3, f3, f0
      b         .loc_0x104

    .loc_0x100:
      fmr       f1, f0

    .loc_0x104:
      lfs       f0, -0x47F8(r2)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x124
      stfs      f2, 0x0(r31)
      stfs      f4, 0x4(r31)
      stfs      f3, 0x8(r31)
      b         .loc_0x3F8

    .loc_0x124:
      mr        r3, r29
      mr        r4, r30
      addi      r5, r1, 0xC
      addi      r6, r1, 0x8
      bl        -0x45C
      lwz       r3, 0x218(r29)
      lfs       f2, -0x4814(r2)
      cmpwi     r3, 0
      ble-      .loc_0x184
      subi      r0, r3, 0x1
      lis       r4, 0x4330
      xoris     r3, r0, 0x8000
      lhz       r0, 0x214(r29)
      stw       r3, 0x24(r1)
      lis       r3, 0x804C
      lfd       f2, -0x4820(r2)
      rlwinm    r0,r0,2,0,29
      stw       r4, 0x20(r1)
      subi      r3, r3, 0x4C90
      lfs       f3, -0x4818(r2)
      lfd       f1, 0x20(r1)
      lfsx      f0, r3, r0
      fsubs     f1, f1, f2
      fmadds    f2, f3, f1, f0

    .loc_0x184:
      lfs       f1, -0x4828(r2)
      lfs       f0, 0xC(r1)
      fsubs     f2, f2, f1
      lfs       f1, -0x4818(r2)
      fabs      f4, f0
      lfs       f3, 0x8(r1)
      lfs       f0, -0x47F4(r2)
      fadds     f2, f1, f2
      frsp      f1, f4
      fsubs     f2, f3, f2
      fcmpo     cr0, f1, f0
      stfs      f2, 0x8(r1)
      bge-      .loc_0x284
      lfs       f0, -0x47F0(r2)
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      bne-      .loc_0x264
      lfs       f3, 0x1F4(r29)
      lfs       f0, -0x4850(r2)
      fmr       f1, f3
      fcmpo     cr0, f3, f0
      bge-      .loc_0x1E0
      fneg      f1, f3

    .loc_0x1E0:
      lfs       f2, -0x480C(r2)
      lis       r3, 0x8050
      lfs       f0, -0x4850(r2)
      addi      r4, r3, 0x71A0
      fmuls     f1, f1, f2
      fcmpo     cr0, f3, f0
      fctiwz    f0, f1
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f1, 0x4(r3)
      bge-      .loc_0x238
      lfs       f0, -0x4808(r2)
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f0, f0
      b         .loc_0x250

    .loc_0x238:
      fmuls     f0, f3, f2
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0

    .loc_0x250:
      stfs      f0, 0x0(r31)
      lfs       f0, -0x4850(r2)
      stfs      f0, 0x4(r31)
      stfs      f1, 0x8(r31)
      b         .loc_0x3F8

    .loc_0x264:
      lfs       f0, -0x4850(r2)
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      bne-      .loc_0x27C
      li        r3, 0
      b         .loc_0x3FC

    .loc_0x27C:
      li        r3, 0
      b         .loc_0x3FC

    .loc_0x284:
      lfs       f0, -0x47F0(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x330
      lfs       f3, 0x1F4(r29)
      lfs       f0, -0x4850(r2)
      fmr       f1, f3
      fcmpo     cr0, f3, f0
      bge-      .loc_0x2A8
      fneg      f1, f3

    .loc_0x2A8:
      lfs       f2, -0x480C(r2)
      lis       r3, 0x8050
      lfs       f0, -0x4850(r2)
      addi      r4, r3, 0x71A0
      fmuls     f1, f1, f2
      fcmpo     cr0, f3, f0
      fctiwz    f0, f1
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f1, 0x4(r3)
      bge-      .loc_0x300
      lfs       f0, -0x4808(r2)
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f2, f0
      b         .loc_0x318

    .loc_0x300:
      fmuls     f0, f3, f2
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r4, r0

    .loc_0x318:
      lfs       f0, -0x47EC(r2)
      lfs       f3, -0x4850(r2)
      fmuls     f2, f2, f0
      fmuls     f3, f3, f0
      fmuls     f4, f1, f0
      b         .loc_0x3EC

    .loc_0x330:
      lfs       f2, 0x1F4(r29)
      lfs       f0, -0x4850(r2)
      fcmpo     cr0, f2, f0
      bge-      .loc_0x36C
      lfs       f0, -0x4808(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f1, f0
      b         .loc_0x390

    .loc_0x36C:
      lfs       f0, -0x480C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f1, r3, r0

    .loc_0x390:
      lfs       f0, -0x4850(r2)
      fneg      f4, f1
      fcmpo     cr0, f2, f0
      bge-      .loc_0x3A4
      fneg      f2, f2

    .loc_0x3A4:
      lfs       f0, -0x480C(r2)
      lis       r3, 0x8050
      lfs       f3, -0x4850(r2)
      addi      r3, r3, 0x71A0
      fmuls     f1, f2, f0
      lfs       f0, 0xC(r1)
      fcmpo     cr0, f0, f3
      fctiwz    f0, f1
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r3, r0
      lfs       f2, 0x4(r3)
      ble-      .loc_0x3EC
      lfs       f0, -0x47EC(r2)
      fmuls     f2, f2, f0
      fmuls     f3, f3, f0
      fmuls     f4, f4, f0

    .loc_0x3EC:
      stfs      f2, 0x0(r31)
      stfs      f3, 0x4(r31)
      stfs      f4, 0x8(r31)

    .loc_0x3F8:
      li        r3, 0x1

    .loc_0x3FC:
      psq_l     f31,0x78(r1),0,0
      lfd       f31, 0x70(r1)
      psq_l     f30,0x68(r1),0,0
      lfd       f30, 0x60(r1)
      psq_l     f29,0x58(r1),0,0
      lfd       f29, 0x50(r1)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      lwz       r0, 0x84(r1)
      lwz       r29, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	801EF8EC
 * Size:	000148
 */
void Game::ItemBridge::Item::getWorkDistance((Sys::Sphere&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      addi      r5, r1, 0xC
      addi      r6, r1, 0x8
      stw       r31, 0x1C(r1)
      mr        r31, r3
      bl        -0x774
      lwz       r3, 0x218(r31)
      lwz       r0, 0x21C(r31)
      cmpw      r3, r0
      bne-      .loc_0x38
      lfs       f1, -0x47E8(r2)
      b         .loc_0x134

    .loc_0x38:
      cmpwi     r3, 0
      lfs       f3, -0x4814(r2)
      ble-      .loc_0x80
      subi      r0, r3, 0x1
      lis       r4, 0x4330
      xoris     r3, r0, 0x8000
      lhz       r0, 0x214(r31)
      stw       r3, 0x14(r1)
      lis       r3, 0x804C
      lfd       f2, -0x4820(r2)
      rlwinm    r0,r0,2,0,29
      stw       r4, 0x10(r1)
      subi      r3, r3, 0x4C90
      lfs       f3, -0x4818(r2)
      lfd       f1, 0x10(r1)
      lfsx      f0, r3, r0
      fsubs     f1, f1, f2
      fmadds    f3, f3, f1, f0

    .loc_0x80:
      lfs       f1, -0x4828(r2)
      lfs       f0, 0x8(r1)
      fsubs     f3, f3, f1
      fsubs     f2, f0, f1
      fadds     f0, f1, f3
      stfs      f2, 0x8(r1)
      fcmpo     cr0, f2, f0
      ble-      .loc_0xA8
      lfs       f1, -0x47E8(r2)
      b         .loc_0x134

    .loc_0xA8:
      lfs       f1, -0x4850(r2)
      fcmpo     cr0, f2, f1
      cror      2, 0x1, 0x2
      bne-      .loc_0xEC
      fcmpo     cr0, f2, f3
      cror      2, 0, 0x2
      bne-      .loc_0xEC
      lfs       f2, 0xC(r1)
      lfs       f0, -0x4804(r2)
      fabs      f2, f2
      frsp      f2, f2
      fcmpo     cr0, f2, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x134
      fsubs     f1, f2, f0
      b         .loc_0x134
      b         .loc_0x134

    .loc_0xEC:
      lfs       f0, -0x4800(r2)
      fcmpo     cr0, f2, f0
      bge-      .loc_0x100
      lfs       f1, -0x47E8(r2)
      b         .loc_0x134

    .loc_0x100:
      lfs       f1, 0xC(r1)
      lfs       f0, -0x47FC(r2)
      fabs      f1, f1
      frsp      f1, f1
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x124
      lfs       f1, -0x47E8(r2)
      b         .loc_0x134

    .loc_0x124:
      lfs       f0, 0x8(r1)
      fsubs     f0, f0, f3
      fabs      f0, f0
      frsp      f1, f0

    .loc_0x134:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801EFA34
 * Size:	000448
 */
void Game::ItemBridge::Item::interactAttack((Game::InteractAttack&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x110(r1)
      mflr      r0
      stw       r0, 0x114(r1)
      stfd      f31, 0x100(r1)
      psq_st    f31,0x108(r1),0,0
      stw       r31, 0xFC(r1)
      stw       r30, 0xF8(r1)
      mr        r31, r3
      mr        r30, r4
      addi      r3, r31, 0x1E0
      bl        0x3F18C
      cmpwi     r3, 0x2
      beq-      .loc_0xEC
      bge-      .loc_0x44
      cmpwi     r3, 0x1
      bge-      .loc_0x50
      b         .loc_0xEC

    .loc_0x44:
      cmpwi     r3, 0x4
      bge-      .loc_0xEC
      b         .loc_0xA0

    .loc_0x50:
      lwz       r3, 0x17C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0xA
      beq-      .loc_0x88
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x1234
      li        r4, 0x339
      addi      r5, r5, 0x1260
      crclr     6, 0x6
      bl        -0x1C5478

    .loc_0x88:
      lwz       r3, 0x17C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      b         .loc_0xEC

    .loc_0xA0:
      lwz       r3, 0x17C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0xA
      beq-      .loc_0xD8
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x1234
      li        r4, 0x340
      addi      r5, r5, 0x1260
      crclr     6, 0x6
      bl        -0x1C54C8

    .loc_0xD8:
      lwz       r3, 0x17C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x8C(r12)
      mtctr     r12
      bctrl

    .loc_0xEC:
      lbz       r0, 0x1F8(r31)
      cmplwi    r0, 0
      beq-      .loc_0x100
      li        r3, 0x1
      b         .loc_0x428

    .loc_0x100:
      lwz       r4, 0x218(r31)
      lwz       r0, 0x21C(r31)
      cmpw      r4, r0
      bne-      .loc_0x118
      li        r3, 0
      b         .loc_0x428

    .loc_0x118:
      lwz       r3, 0x220(r31)
      rlwinm    r0,r4,2,0,29
      lfs       f1, 0x8(r30)
      lfsx      f2, r3, r0
      lfs       f0, -0x4850(r2)
      fsubs     f1, f2, f1
      stfsx     f1, r3, r0
      lfsx      f1, r3, r0
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x424
      lwz       r30, 0x218(r31)
      lfs       f31, -0x4814(r2)
      cmpwi     r30, 0
      ble-      .loc_0x190
      subi      r0, r30, 0x1
      lis       r4, 0x4330
      xoris     r3, r0, 0x8000
      lhz       r0, 0x214(r31)
      stw       r3, 0xD4(r1)
      lis       r3, 0x804C
      lfd       f2, -0x4820(r2)
      rlwinm    r0,r0,2,0,29
      stw       r4, 0xD0(r1)
      subi      r3, r3, 0x4C90
      lfs       f3, -0x4818(r2)
      lfd       f1, 0xD0(r1)
      lfsx      f0, r3, r0
      fsubs     f1, f1, f2
      fmadds    f31, f3, f1, f0

    .loc_0x190:
      lfs       f0, -0x4828(r2)
      mr        r4, r31
      addi      r3, r1, 0x14
      fsubs     f31, f31, f0
      bl        -0xB9C
      lfs       f2, 0x14(r1)
      cmpwi     r30, 0x1
      lfs       f1, 0x18(r1)
      lfs       f0, 0x1C(r1)
      fmuls     f4, f2, f31
      lfs       f5, 0x19C(r31)
      fmuls     f2, f1, f31
      lfs       f3, 0x1A0(r31)
      fmuls     f0, f0, f31
      lfs       f1, 0x1A4(r31)
      fadds     f4, f5, f4
      fadds     f3, f3, f2
      fadds     f5, f1, f0
      blt-      .loc_0x214
      subi      r0, r30, 0x1
      lis       r4, 0x4330
      xoris     r3, r0, 0x8000
      lhz       r0, 0x214(r31)
      stw       r3, 0xDC(r1)
      lis       r3, 0x804C
      lfd       f2, -0x4820(r2)
      rlwinm    r0,r0,2,0,29
      stw       r4, 0xD8(r1)
      subi      r3, r3, 0x4C80
      lfsx      f0, r3, r0
      lfd       f1, 0xD8(r1)
      fsubs     f1, f1, f2
      fmadds    f3, f1, f0, f3

    .loc_0x214:
      stfs      f4, 0x64(r1)
      addi      r3, r1, 0xA0
      lfs       f0, -0x4850(r2)
      addi      r4, r1, 0x64
      stfs      f3, 0x68(r1)
      addi      r5, r1, 0x58
      stfs      f5, 0x6C(r1)
      lfs       f1, 0x1F4(r31)
      stfs      f0, 0x58(r1)
      stfs      f1, 0x5C(r1)
      stfs      f0, 0x60(r1)
      bl        0x238C14
      lis       r4, 0x804B
      lis       r3, 0x804E
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x48(r1)
      addi      r0, r3, 0x6A78
      lis       r3, 0x804C
      addi      r5, r1, 0xA0
      stw       r0, 0x48(r1)
      addi      r0, r4, 0x6A14
      li        r7, 0x11
      li        r6, 0
      stw       r0, 0x48(r1)
      subi      r0, r3, 0x4B8C
      addi      r3, r1, 0x48
      li        r4, 0
      sth       r7, 0x4C(r1)
      stw       r6, 0x50(r1)
      stw       r5, 0x54(r1)
      stw       r0, 0x48(r1)
      bl        0x1BF5EC
      lwz       r3, 0x1F0(r31)
      lfs       f31, -0x4814(r2)
      addi      r0, r3, 0x8C
      stw       r0, 0x1F0(r31)
      lwz       r3, 0x218(r31)
      addic.    r30, r3, 0x1
      ble-      .loc_0x2F0
      subi      r0, r30, 0x1
      lis       r4, 0x4330
      xoris     r3, r0, 0x8000
      lhz       r0, 0x214(r31)
      stw       r3, 0xE4(r1)
      lis       r3, 0x804C
      lfd       f2, -0x4820(r2)
      rlwinm    r0,r0,2,0,29
      stw       r4, 0xE0(r1)
      subi      r3, r3, 0x4C90
      lfs       f3, -0x4818(r2)
      lfd       f1, 0xE0(r1)
      lfsx      f0, r3, r0
      fsubs     f1, f1, f2
      fmadds    f31, f3, f1, f0

    .loc_0x2F0:
      lfs       f0, -0x4828(r2)
      mr        r4, r31
      addi      r3, r1, 0x8
      fsubs     f31, f31, f0
      bl        -0xCFC
      lfs       f2, 0x8(r1)
      cmpwi     r30, 0x1
      lfs       f1, 0xC(r1)
      lfs       f0, 0x10(r1)
      fmuls     f4, f2, f31
      lfs       f5, 0x19C(r31)
      fmuls     f2, f1, f31
      lfs       f3, 0x1A0(r31)
      fmuls     f0, f0, f31
      lfs       f1, 0x1A4(r31)
      fadds     f4, f5, f4
      fadds     f3, f3, f2
      fadds     f5, f1, f0
      blt-      .loc_0x374
      subi      r0, r30, 0x1
      lis       r4, 0x4330
      xoris     r3, r0, 0x8000
      lhz       r0, 0x214(r31)
      stw       r3, 0xEC(r1)
      lis       r3, 0x804C
      lfd       f2, -0x4820(r2)
      rlwinm    r0,r0,2,0,29
      stw       r4, 0xE8(r1)
      subi      r3, r3, 0x4C80
      lfsx      f0, r3, r0
      lfd       f1, 0xE8(r1)
      fsubs     f1, f1, f2
      fmadds    f3, f1, f0, f3

    .loc_0x374:
      stfs      f4, 0x3C(r1)
      addi      r3, r1, 0x70
      lfs       f0, -0x4850(r2)
      addi      r4, r1, 0x3C
      stfs      f3, 0x40(r1)
      addi      r5, r1, 0x30
      stfs      f5, 0x44(r1)
      lfs       f1, 0x1F4(r31)
      stfs      f0, 0x30(r1)
      stfs      f1, 0x34(r1)
      stfs      f0, 0x38(r1)
      bl        0x238AB4
      lis       r4, 0x804B
      lis       r3, 0x804E
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x20(r1)
      addi      r0, r3, 0x6A78
      lis       r3, 0x804C
      addi      r5, r1, 0x70
      stw       r0, 0x20(r1)
      addi      r0, r4, 0x6A14
      li        r7, 0x11
      li        r6, 0
      stw       r0, 0x20(r1)
      subi      r0, r3, 0x4B8C
      addi      r3, r1, 0x20
      li        r4, 0
      sth       r7, 0x24(r1)
      stw       r6, 0x28(r1)
      stw       r5, 0x2C(r1)
      stw       r0, 0x20(r1)
      bl        0x1BF48C
      lwz       r5, 0x1F0(r31)
      li        r0, 0x28
      mr        r3, r31
      li        r4, 0x3801
      addi      r5, r5, 0x3C
      stw       r5, 0x1F0(r31)
      stb       r0, 0x1F8(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1C0(r12)
      mtctr     r12
      bctrl

    .loc_0x424:
      li        r3, 0x1

    .loc_0x428:
      psq_l     f31,0x108(r1),0,0
      lwz       r0, 0x114(r1)
      lfd       f31, 0x100(r1)
      lwz       r31, 0xFC(r1)
      lwz       r30, 0xF8(r1)
      mtlr      r0
      addi      r1, r1, 0x110
      blr
    */
}

/*
 * --INFO--
 * Address:	801EFE7C
 * Size:	0000F0
 */
void Game::ItemBridge::Item::interactBreakBridge((Game::InteractBreakBridge&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r0, 0x1F8(r3)
      cmplwi    r0, 0
      bne-      .loc_0x2C
      lwz       r5, 0x218(r31)
      cmpwi     r5, 0
      bne-      .loc_0x34

    .loc_0x2C:
      li        r3, 0
      b         .loc_0xDC

    .loc_0x34:
      subi      r0, r5, 0x1
      lwz       r5, 0x220(r31)
      rlwinm    r0,r0,2,0,29
      lfs       f0, 0x8(r4)
      lfsx      f1, r5, r0
      fadds     f0, f1, f0
      stfsx     f0, r5, r0
      lwz       r4, -0x6B48(r13)
      lfsx      f1, r5, r0
      lwz       r4, 0x90(r4)
      lfs       f0, 0x100(r4)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0xD8
      stfsx     f0, r5, r0
      lwz       r4, 0x218(r31)
      subi      r4, r4, 0x1
      bl        -0x1500
      mr        r3, r31
      li        r4, 0x1
      lwz       r12, 0x0(r31)
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x1FC(r31)
      cmplwi    r3, 0
      beq-      .loc_0xD8
      lwz       r0, 0x200(r31)
      cmplwi    r0, 0
      beq-      .loc_0xD8
      li        r4, 0
      bl        -0x7D6B8
      lwz       r3, 0x200(r31)
      li        r4, 0
      bl        -0x7D6C4
      lwz       r3, 0x1FC(r31)
      li        r4, 0
      bl        -0x7D6A8
      lwz       r3, 0x200(r31)
      li        r4, 0
      bl        -0x7D6B4

    .loc_0xD8:
      li        r3, 0

    .loc_0xDC:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Game::ItemBridge::Item::getWorkRadius(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801EFF6C
 * Size:	00004C
 */
void Game::ItemBridge::Mgr::generatorNewItemParm(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r3, 0x8
      stw       r0, 0x14(r1)
      bl        -0x1CC0D8
      cmplwi    r3, 0
      beq-      .loc_0x3C
      lis       r5, 0x804B
      lis       r4, 0x804C
      addi      r5, r5, 0x2624
      li        r0, 0
      stw       r5, 0x0(r3)
      subi      r4, r4, 0x4B98
      stw       r4, 0x0(r3)
      sth       r0, 0x4(r3)

    .loc_0x3C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801EFFB8
 * Size:	000088
 */
void Game::ItemBridge::Mgr::generatorWrite((Stream&, Game::GenItemParm*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r3, 0x8048
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      addi      r31, r3, 0x1228
      stw       r30, 0x18(r1)
      mr.       r30, r5
      stw       r29, 0x14(r1)
      mr        r29, r4
      bne-      .loc_0x40
      addi      r3, r31, 0xC
      addi      r5, r31, 0x38
      li        r4, 0x3AC
      crclr     6, 0x6
      bl        -0x1C59B4

    .loc_0x40:
      lwz       r4, 0x414(r29)
      mr        r3, r29
      bl        0x224434
      lhz       r0, 0x4(r30)
      mr        r3, r29
      extsh     r4, r0
      bl        0x225720
      mr        r3, r29
      addi      r4, r31, 0x44
      crclr     6, 0x6
      bl        0x2241BC
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
 * Address:	801F0040
 * Size:	000088
 */
void Game::ItemBridge::Mgr::generatorRead((Stream&, Game::GenItemParm*,
                                           unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r6
      stw       r30, 0x18(r1)
      mr.       r30, r5
      stw       r29, 0x14(r1)
      mr        r29, r4
      bne-      .loc_0x44
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x1234
      li        r4, 0x3B6
      addi      r5, r5, 0x1260
      crclr     6, 0x6
      bl        -0x1C5A40

    .loc_0x44:
      lis       r3, 0x3030
      addi      r0, r3, 0x3031
      cmplw     r31, r0
      blt-      .loc_0x64
      mr        r3, r29
      bl        0x2246CC
      sth       r3, 0x4(r30)
      b         .loc_0x6C

    .loc_0x64:
      li        r0, 0
      sth       r0, 0x4(r30)

    .loc_0x6C:
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
 * Address:	801F00C8
 * Size:	000130
 */
void Game::ItemBridge::Mgr::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x440(r1)
      mflr      r0
      stw       r0, 0x444(r1)
      extsh.    r0, r4
      lis       r4, 0x8048
      stw       r31, 0x43C(r1)
      addi      r31, r4, 0x1228
      stw       r30, 0x438(r1)
      mr        r30, r3
      beq-      .loc_0x30
      addi      r0, r30, 0x94
      stw       r0, 0x4(r30)

    .loc_0x30:
      mr        r3, r30
      li        r4, 0
      bl        -0x22CE0
      lis       r3, 0x804C
      subi      r0, r2, 0x47E4
      subi      r4, r3, 0x4C64
      mr        r3, r30
      stw       r4, 0x0(r30)
      addi      r5, r4, 0x74
      li        r4, 0x3
      stw       r5, 0x30(r30)
      stw       r0, 0x8(r30)
      bl        -0x2335C
      addi      r0, r31, 0x54
      li        r3, 0x114
      stw       r0, 0x28(r30)
      bl        -0x1CC294
      mr.       r0, r3
      beq-      .loc_0x84
      bl        0xD8
      mr        r0, r3

    .loc_0x84:
      stw       r0, 0x90(r30)
      addi      r3, r31, 0x70
      bl        -0x113FF0
      addi      r3, r31, 0x90
      bl        -0x113FF8
      li        r0, 0
      addi      r3, r31, 0x70
      stw       r0, 0x8(r1)
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0
      li        r8, 0x2
      li        r9, 0
      li        r10, 0
      bl        -0x1D1000
      mr.       r31, r3
      beq-      .loc_0x114
      mr        r4, r31
      addi      r3, r1, 0x10
      li        r5, -0x1
      bl        0x225758
      li        r0, 0x1
      cmpwi     r0, 0x1
      stw       r0, 0x1C(r1)
      bne-      .loc_0xF4
      li        r0, 0
      stw       r0, 0x424(r1)

    .loc_0xF4:
      lwz       r3, 0x90(r30)
      addi      r4, r1, 0x10
      lwz       r12, 0xD8(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        -0x1CC100

    .loc_0x114:
      lwz       r0, 0x444(r1)
      mr        r3, r30
      lwz       r31, 0x43C(r1)
      lwz       r30, 0x438(r1)
      mtlr      r0
      addi      r1, r1, 0x440
      blr
    */
}

/*
 * --INFO--
 * Address:	801F01F8
 * Size:	000024
 */
void Game::ItemBridge::BridgeParms::read((Stream&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r3, r3, 0xDC
      stw       r0, 0x14(r1)
      bl        0x2235EC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801F021C
 * Size:	0001EC
 */
void Game::ItemBridge::BridgeParms::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x7330
      lis       r4, 0x804B
      stw       r0, 0x14(r1)
      subi      r0, r4, 0x5350
      addi      r5, r5, 0x3030
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      lis       r3, 0x8048
      stw       r0, 0xD8(r30)
      addi      r31, r3, 0x1228
      addi      r0, r30, 0xD4
      li        r3, 0
      stw       r0, 0x0(r30)
      addi      r0, r31, 0xB0
      mr        r4, r30
      addi      r6, r31, 0xC4
      stw       r3, 0x4(r30)
      addi      r3, r30, 0xC
      stw       r0, 0x8(r30)
      bl        0x2233E4
      lis       r3, 0x804B
      lis       r5, 0x7330
      subi      r0, r3, 0x5344
      lfs       f0, -0x47DC(r2)
      stw       r0, 0xC(r30)
      mr        r4, r30
      lfs       f1, -0x4850(r2)
      addi      r3, r30, 0x34
      stfs      f0, 0x24(r30)
      addi      r5, r5, 0x3031
      lfs       f0, -0x483C(r2)
      addi      r6, r31, 0xD8
      stfs      f1, 0x2C(r30)
      stfs      f0, 0x30(r30)
      bl        0x2233A8
      lis       r3, 0x804B
      lis       r5, 0x7330
      subi      r0, r3, 0x5344
      lfs       f0, -0x47DC(r2)
      stw       r0, 0x34(r30)
      mr        r4, r30
      lfs       f1, -0x4850(r2)
      addi      r3, r30, 0x5C
      stfs      f0, 0x4C(r30)
      addi      r5, r5, 0x3032
      lfs       f0, -0x483C(r2)
      addi      r6, r31, 0xE8
      stfs      f1, 0x54(r30)
      stfs      f0, 0x58(r30)
      bl        0x22336C
      lis       r3, 0x804B
      lis       r5, 0x7330
      subi      r0, r3, 0x5344
      lfs       f0, -0x47D8(r2)
      stw       r0, 0x5C(r30)
      mr        r4, r30
      lfs       f1, -0x4850(r2)
      addi      r3, r30, 0x84
      stfs      f0, 0x74(r30)
      addi      r5, r5, 0x3033
      lfs       f0, -0x483C(r2)
      subi      r6, r2, 0x47D4
      stfs      f1, 0x7C(r30)
      stfs      f0, 0x80(r30)
      bl        0x223330
      lis       r3, 0x804B
      lis       r5, 0x7330
      subi      r0, r3, 0x5344
      lfs       f0, -0x47CC(r2)
      stw       r0, 0x84(r30)
      mr        r4, r30
      lfs       f1, -0x47C8(r2)
      addi      r3, r30, 0xAC
      stfs      f0, 0x9C(r30)
      addi      r5, r5, 0x3034
      lfs       f0, -0x47C4(r2)
      addi      r6, r31, 0xF8
      stfs      f1, 0xA4(r30)
      stfs      f0, 0xA8(r30)
      bl        0x2232F4
      lis       r4, 0x804B
      lis       r3, 0x804C
      subi      r0, r4, 0x5344
      lis       r5, 0x7030
      stw       r0, 0xAC(r30)
      subi      r9, r3, 0x4BA4
      lfs       f0, -0x47C0(r2)
      addi      r8, r30, 0x110
      lfs       f1, -0x47C8(r2)
      li        r7, 0
      stfs      f0, 0xC4(r30)
      addi      r0, r31, 0x108
      lfs       f0, -0x47C4(r2)
      addi      r3, r30, 0xE8
      stfs      f1, 0xCC(r30)
      addi      r4, r30, 0xDC
      addi      r5, r5, 0x3030
      subi      r6, r2, 0x47BC
      stfs      f0, 0xD0(r30)
      stw       r9, 0xD8(r30)
      stw       r8, 0xDC(r30)
      stw       r7, 0xE0(r30)
      stw       r0, 0xE4(r30)
      bl        0x223294
      lis       r3, 0x804B
      lfs       f2, -0x4838(r2)
      subi      r0, r3, 0x5344
      lfs       f1, -0x4850(r2)
      stw       r0, 0xE8(r30)
      mr        r3, r30
      lfs       f0, -0x47B4(r2)
      stfs      f2, 0x100(r30)
      stfs      f1, 0x108(r30)
      stfs      f0, 0x10C(r30)
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
 * Address:	801F0408
 * Size:	000118
 */
void Game::ItemBridge::Mgr::birth(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      li        r3, 0x224
      bl        -0x1CC580
      mr.       r31, r3
      beq-      .loc_0xF0
      li        r4, 0x40D
      bl        -0x2444C
      lis       r3, 0x804C
      li        r0, 0
      subi      r4, r3, 0x4700
      li        r3, 0x1C
      stw       r4, 0x0(r31)
      addi      r4, r4, 0x1B0
      stw       r4, 0x178(r31)
      stw       r0, 0x1D8(r31)
      stw       r0, 0x1DC(r31)
      bl        -0x1CC5B8
      cmplwi    r3, 0
      beq-      .loc_0x8C
      lis       r4, 0x804C
      lis       r5, 0x804C
      subi      r0, r4, 0x4718
      lis       r4, 0x804C
      stw       r0, 0x0(r3)
      li        r6, -0x1
      subi      r5, r5, 0x4730
      subi      r0, r4, 0x4420
      stw       r6, 0x18(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0x0(r3)

    .loc_0x8C:
      stw       r3, 0x1D8(r31)
      mr        r4, r31
      lwz       r3, 0x1D8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lis       r4, 0x804C
      addi      r3, r31, 0x1E0
      subi      r4, r4, 0x4954
      stw       r4, 0x0(r31)
      addi      r0, r4, 0x1B0
      stw       r0, 0x178(r31)
      bl        0x3E704
      lis       r4, 0x804C
      addi      r3, r31, 0x204
      subi      r4, r4, 0x4B78
      stw       r4, 0x0(r31)
      addi      r0, r4, 0x1B0
      stw       r0, 0x178(r31)
      bl        -0x2B340
      lfs       f0, -0x4850(r2)
      li        r0, 0
      stfs      f0, 0x118(r31)
      stw       r0, 0x218(r31)

    .loc_0xF0:
      mr        r3, r30
      mr        r4, r31
      bl        -0x22CD8
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
 * Address:	801F0520
 * Size:	0000A8
 */
void generatorBirth__Q34Game10ItemBridge3MgrFR10Vector3<float> R10Vector3<float>
PQ24Game11GenItemParm(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r8, 0x804B
      lis       r7, 0x804C
      stw       r0, 0x24(r1)
      subi      r8, r8, 0x5D0C
      li        r0, 0
      subi      r7, r7, 0x4C70
      stw       r31, 0x1C(r1)
      cmplwi    r6, 0
      stw       r30, 0x18(r1)
      mr        r30, r5
      stw       r29, 0x14(r1)
      mr        r29, r4
      stw       r8, 0x8(r1)
      stw       r7, 0x8(r1)
      sth       r0, 0xC(r1)
      beq-      .loc_0x50
      lhz       r0, 0x4(r6)
      sth       r0, 0xC(r1)

    .loc_0x50:
      lwz       r12, 0x0(r3)
      lwz       r12, 0xBC(r12)
      mtctr     r12
      bctrl
      addi      r4, r1, 0x8
      mr        r31, r3
      bl        -0xB55C0
      lfs       f1, 0x4(r30)
      bl        0x221640
      stfs      f1, 0x1F4(r31)
      mr        r3, r31
      mr        r4, r29
      li        r5, 0
      bl        -0xB53FC
      lwz       r0, 0x24(r1)
      mr        r3, r31
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
 * Address:	801F05C8
 * Size:	000260
 */
void Game::ItemBridge::Mgr::onLoadResources(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x8048
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      addi      r31, r4, 0x1228
      stw       r30, 0x18(r1)
      mr        r30, r3
      li        r3, 0xC
      stw       r29, 0x14(r1)
      stw       r28, 0x10(r1)
      bl        -0x1CC648
      stw       r3, 0x88(r30)
      li        r6, 0
      addi      r0, r31, 0x118
      mr        r3, r30
      lwz       r5, 0x88(r30)
      subi      r4, r2, 0x47B0
      stw       r6, 0x0(r5)
      lwz       r5, 0x88(r30)
      stw       r6, 0x4(r5)
      lwz       r5, 0x88(r30)
      stw       r6, 0x8(r5)
      stw       r0, 0x28(r30)
      bl        -0x23754
      mr        r3, r30
      addi      r4, r31, 0x134
      li        r5, 0
      lis       r6, 0x2
      bl        -0x236EC
      addi      r0, r31, 0x144
      mr        r3, r30
      stw       r0, 0x28(r30)
      subi      r4, r2, 0x47B0
      bl        -0x2377C
      mr        r3, r30
      addi      r4, r31, 0x160
      li        r5, 0x1
      lis       r6, 0x2
      bl        -0x23714
      addi      r0, r31, 0x16C
      mr        r3, r30
      stw       r0, 0x28(r30)
      subi      r4, r2, 0x47B0
      bl        -0x237A4
      mr        r3, r30
      addi      r4, r31, 0x188
      li        r5, 0x2
      lis       r6, 0x2
      bl        -0x2373C
      li        r28, 0
      li        r29, 0

    .loc_0xD0:
      lwz       r3, 0x1C(r30)
      lis       r4, 0x4
      lwzx      r3, r3, r29
      bl        -0x16CDCC
      lwz       r3, 0x1C(r30)
      lwzx      r3, r3, r29
      bl        -0x16CC80
      addi      r28, r28, 0x1
      addi      r29, r29, 0x4
      cmpwi     r28, 0x3
      blt+      .loc_0xD0
      addi      r3, r1, 0x8
      li        r4, 0x3
      li        r5, 0
      li        r6, 0x1
      bl        0x22BD84
      addi      r0, r31, 0x118
      mr        r3, r30
      stw       r0, 0x28(r30)
      addi      r4, r31, 0x198
      bl        -0x2351C
      mr        r0, r3
      mr        r3, r30
      mr        r28, r0
      addi      r5, r31, 0x1A4
      mr        r4, r28
      bl        -0x233F8
      lwz       r5, 0x88(r30)
      addi      r4, r1, 0x8
      stw       r3, 0x0(r5)
      lwz       r3, 0x88(r30)
      lwz       r3, 0x0(r3)
      bl        -0xBCEA4
      mr        r3, r30
      mr        r4, r28
      bl        -0x234D4
      addi      r0, r31, 0x144
      mr        r3, r30
      stw       r0, 0x28(r30)
      addi      r4, r31, 0x198
      bl        -0x2356C
      mr        r0, r3
      mr        r3, r30
      mr        r28, r0
      addi      r5, r31, 0x1A4
      mr        r4, r28
      bl        -0x23448
      lwz       r5, 0x88(r30)
      addi      r4, r1, 0x8
      stw       r3, 0x4(r5)
      lwz       r3, 0x88(r30)
      lwz       r3, 0x4(r3)
      bl        -0xBCEF4
      mr        r3, r30
      mr        r4, r28
      bl        -0x23524
      addi      r0, r31, 0x16C
      mr        r3, r30
      stw       r0, 0x28(r30)
      addi      r4, r31, 0x198
      bl        -0x235BC
      mr        r0, r3
      mr        r3, r30
      mr        r28, r0
      addi      r5, r31, 0x1A4
      mr        r4, r28
      bl        -0x23498
      lwz       r5, 0x88(r30)
      addi      r4, r1, 0x8
      stw       r3, 0x8(r5)
      lwz       r3, 0x88(r30)
      lwz       r3, 0x8(r3)
      bl        -0xBCF44
      mr        r3, r30
      mr        r4, r28
      bl        -0x23574
      li        r3, 0x40
      bl        -0x1CC820
      lis       r4, 0x801F
      li        r5, 0
      addi      r4, r4, 0x828
      li        r6, 0x10
      li        r7, 0x3
      bl        -0x12EDF4
      stw       r3, 0x8C(r30)
      li        r28, 0

    .loc_0x228:
      mr        r3, r30
      mr        r4, r28
      bl        0xC4
      addi      r28, r28, 0x1
      cmpwi     r28, 0x3
      blt+      .loc_0x228
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0828
 * Size:	00001C
 */
void Game::ItemBridge::BridgeInfo::__ct(void)
{
    /*
    .loc_0x0:
      li        r4, 0
      li        r0, -0x1
      stw       r4, 0x0(r3)
      stw       r4, 0x4(r3)
      stw       r4, 0x8(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0844
 * Size:	000078
 */
void Game::ItemBridge::Mgr::getBridgeInfo((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr.       r31, r4
      stw       r30, 0x8(r1)
      mr        r30, r3
      blt-      .loc_0x30
      cmpwi     r31, 0x3
      bge-      .loc_0x30
      li        r0, 0x1

    .loc_0x30:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x54
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x1234
      li        r4, 0x467
      addi      r5, r5, 0x1260
      crclr     6, 0x6
      bl        -0x1C6254

    .loc_0x54:
      lwz       r3, 0x8C(r30)
      rlwinm    r0,r31,4,0,27
      add       r3, r3, r0
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
 * Address:	801F08BC
 * Size:	00020C
 */
void Game::ItemBridge::Mgr::createBridgeInfo((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x230(r1)
      mflr      r0
      stw       r0, 0x234(r1)
      li        r0, 0
      stmw      r25, 0x214(r1)
      mr.       r25, r4
      lis       r4, 0x8048
      mr        r26, r3
      addi      r31, r4, 0x1228
      blt-      .loc_0x34
      cmpwi     r25, 0x3
      bge-      .loc_0x34
      li        r0, 0x1

    .loc_0x34:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x50
      addi      r3, r31, 0xC
      addi      r5, r31, 0x38
      li        r4, 0x46D
      crclr     6, 0x6
      bl        -0x1C62C8

    .loc_0x50:
      lwz       r3, 0x1C(r26)
      rlwinm    r0,r25,2,0,29
      lwzx      r29, r3, r0
      cmplwi    r29, 0
      bne-      .loc_0x78
      addi      r3, r31, 0xC
      addi      r5, r31, 0x38
      li        r4, 0x46F
      crclr     6, 0x6
      bl        -0x1C62F0

    .loc_0x78:
      li        r28, 0
      li        r30, 0

    .loc_0x80:
      mr        r5, r30
      addi      r3, r1, 0x8
      addi      r4, r31, 0x1B4
      crclr     6, 0x6
      bl        -0x129514
      lwz       r3, 0x54(r29)
      addi      r4, r1, 0x8
      bl        -0x1C1BD4
      rlwinm    r0,r3,0,16,31
      cmplwi    r0, 0xFFFF
      beq-      .loc_0xB0
      addi      r28, r28, 0x1

    .loc_0xB0:
      addi      r30, r30, 0x1
      cmpwi     r30, 0x20
      blt+      .loc_0x80
      rlwinm    r3,r28,1,31,31
      rlwinm    r0,r28,0,31,31
      xor       r0, r0, r3
      sub.      r0, r0, r3
      beq-      .loc_0xE4
      addi      r3, r31, 0xC
      addi      r5, r31, 0x38
      li        r4, 0x47A
      crclr     6, 0x6
      bl        -0x1C635C

    .loc_0xE4:
      rlwinm    r0,r28,1,31,31
      lwz       r5, 0x8C(r26)
      rlwinm    r4,r25,4,0,27
      rlwinm    r3,r28,1,0,30
      add       r0, r0, r28
      add       r27, r5, r4
      srawi     r0, r0, 0x1
      stw       r0, 0x0(r27)
      stw       r28, 0x4(r27)
      bl        -0x1CCA18
      stw       r3, 0x8(r27)
      li        r26, 0
      li        r30, 0
      b         .loc_0x190

    .loc_0x11C:
      mr        r5, r26
      addi      r3, r1, 0x8
      addi      r4, r31, 0x1B4
      crclr     6, 0x6
      bl        -0x1295B0
      lwz       r3, 0x54(r29)
      addi      r4, r1, 0x8
      bl        -0x1C1C70
      extsh     r0, r3
      lwz       r4, 0x8(r27)
      cmpwi     r0, -0x1
      sthx      r3, r4, r30
      bne-      .loc_0x188
      li        r25, 0
      b         .loc_0x168

    .loc_0x158:
      lwz       r3, 0x54(r29)
      rlwinm    r4,r25,0,16,31
      bl        -0x1C1C00
      addi      r25, r25, 0x1

    .loc_0x168:
      lhz       r0, 0x2C(r29)
      cmpw      r25, r0
      blt+      .loc_0x158
      addi      r3, r31, 0xC
      addi      r5, r31, 0x1C0
      li        r4, 0x48B
      crclr     6, 0x6
      bl        -0x1C6400

    .loc_0x188:
      addi      r30, r30, 0x2
      addi      r26, r26, 0x1

    .loc_0x190:
      cmpw      r26, r28
      blt+      .loc_0x11C
      lwz       r3, 0x54(r29)
      subi      r4, r2, 0x47A8
      bl        -0x1C1CD8
      extsh     r0, r3
      cmpwi     r0, -0x1
      beq-      .loc_0x1B8
      stw       r0, 0xC(r27)
      b         .loc_0x1F8

    .loc_0x1B8:
      li        r0, -0x1
      li        r25, 0
      stw       r0, 0xC(r27)
      b         .loc_0x1D8

    .loc_0x1C8:
      lwz       r3, 0x54(r29)
      rlwinm    r4,r25,0,16,31
      bl        -0x1C1C70
      addi      r25, r25, 0x1

    .loc_0x1D8:
      lhz       r0, 0x2C(r29)
      cmpw      r25, r0
      blt+      .loc_0x1C8
      addi      r3, r31, 0xC
      addi      r5, r31, 0x1E0
      li        r4, 0x49C
      crclr     6, 0x6
      bl        -0x1C6470

    .loc_0x1F8:
      lmw       r25, 0x214(r1)
      lwz       r0, 0x234(r1)
      mtlr      r0
      addi      r1, r1, 0x230
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0AC8
 * Size:	0001A0
 */
void Game::ItemBridge::Mgr::setupPlatInstanceAttacher(
    (Game::ItemBridge::Item*, Game::PlatInstanceAttacher&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      mr        r30, r5
      stw       r29, 0x44(r1)
      mr        r29, r4
      stw       r28, 0x40(r1)
      mr        r28, r3
      lhz       r0, 0x214(r4)
      cmplwi    r0, 0x3
      blt-      .loc_0x50
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x1234
      li        r4, 0x4A2
      addi      r5, r5, 0x1260
      crclr     6, 0x6
      bl        -0x1C64D4

    .loc_0x50:
      lhz       r31, 0x214(r29)
      li        r0, 0
      cmpwi     r31, 0
      blt-      .loc_0x6C
      cmpwi     r31, 0x3
      bge-      .loc_0x6C
      li        r0, 0x1

    .loc_0x6C:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x90
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x1234
      li        r4, 0x467
      addi      r5, r5, 0x1260
      crclr     6, 0x6
      bl        -0x1C6514

    .loc_0x90:
      lwz       r5, 0x8C(r28)
      rlwinm    r0,r31,4,0,27
      lis       r4, 0x6E6F
      addi      r3, r1, 0x2C
      add       r31, r5, r0
      addi      r4, r4, 0x6E65
      bl        0x222738
      lhz       r0, 0x214(r29)
      mr        r3, r30
      lwz       r6, 0x88(r28)
      mr        r4, r29
      rlwinm    r0,r0,2,0,29
      addi      r5, r1, 0x2C
      lwzx      r6, r6, r0
      li        r7, 0
      bl        -0x2B9D8
      li        r29, 0
      li        r28, 0
      b         .loc_0x144

    .loc_0xDC:
      rlwinm    r3,r29,1,31,31
      rlwinm    r0,r29,0,31,31
      xor       r0, r0, r3
      sub.      r0, r0, r3
      bne-      .loc_0x118
      lis       r4, 0x6272
      addi      r3, r1, 0x20
      addi      r4, r4, 0x626B
      bl        0x2226E4
      lwz       r5, 0x8(r31)
      mr        r3, r30
      addi      r4, r1, 0x20
      lhzx      r5, r5, r28
      bl        -0x2B73C
      b         .loc_0x13C

    .loc_0x118:
      lis       r4, 0x6272
      addi      r3, r1, 0x14
      addi      r4, r4, 0x5F5F
      bl        0x2226BC
      lwz       r5, 0x8(r31)
      mr        r3, r30
      addi      r4, r1, 0x14
      lhzx      r5, r5, r28
      bl        -0x2B764

    .loc_0x13C:
      addi      r28, r28, 0x2
      addi      r29, r29, 0x1

    .loc_0x144:
      lwz       r0, 0x4(r31)
      cmpw      r29, r0
      blt+      .loc_0xDC
      lwz       r0, 0xC(r31)
      cmpwi     r0, -0x1
      beq-      .loc_0x180
      lis       r4, 0x6669
      addi      r3, r1, 0x8
      addi      r4, r4, 0x6E6C
      bl        0x222678
      lwz       r0, 0xC(r31)
      mr        r3, r30
      addi      r4, r1, 0x8
      rlwinm    r5,r0,0,16,31
      bl        -0x2B7A8

    .loc_0x180:
      lwz       r0, 0x54(r1)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      lwz       r29, 0x44(r1)
      lwz       r28, 0x40(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0C68
 * Size:	00000C
 */
void Game::ItemBridge::BridgeInitArg::getName(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x8048
      addi      r3, r3, 0x1418
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0C74
 * Size:	000134
 */
void Game::ItemBridge::Mgr::__dt(void)
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
      beq-      .loc_0x118
      lis       r3, 0x804C
      subi      r3, r3, 0x4C64
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x74
      stw       r0, 0x30(r30)
      beq-      .loc_0x108
      lis       r3, 0x804B
      addic.    r0, r30, 0x4C
      addi      r3, r3, 0x7180
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x74
      stw       r0, 0x30(r30)
      beq-      .loc_0xD4
      lis       r4, 0x804B
      addic.    r3, r30, 0x6C
      addi      r4, r4, 0x724C
      stw       r4, 0x4C(r30)
      addi      r0, r4, 0x2C
      stw       r0, 0x68(r30)
      beq-      .loc_0x84
      lis       r4, 0x804B
      addi      r0, r4, 0x723C
      stw       r0, 0x6C(r30)
      li        r4, 0
      bl        0x220894

    .loc_0x84:
      addic.    r0, r30, 0x4C
      beq-      .loc_0xD4
      lis       r3, 0x804B
      addic.    r0, r30, 0x4C
      addi      r3, r3, 0x72CC
      stw       r3, 0x4C(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x68(r30)
      beq-      .loc_0xD4
      lis       r3, 0x804B
      addic.    r0, r30, 0x4C
      addi      r0, r3, 0x7348
      stw       r0, 0x4C(r30)
      beq-      .loc_0xD4
      lis       r4, 0x804B
      addi      r3, r30, 0x4C
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x4C(r30)
      bl        0x220844

    .loc_0xD4:
      addic.    r0, r30, 0x30
      beq-      .loc_0x108
      lis       r3, 0x804B
      addic.    r0, r30, 0x30
      addi      r0, r3, 0x7348
      stw       r0, 0x30(r30)
      beq-      .loc_0x108
      lis       r4, 0x804B
      addi      r3, r30, 0x30
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x30(r30)
      bl        0x220810

    .loc_0x108:
      extsh.    r0, r31
      ble-      .loc_0x118
      mr        r3, r30
      bl        -0x1CCCD4

    .loc_0x118:
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
 * Address:	801F0DA8
 * Size:	000100
 */
void Game::ItemBridge::Mgr::doNew(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r3, 0x224
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      bl        -0x1CCF18
      mr.       r31, r3
      beq-      .loc_0xE8
      li        r4, 0x40D
      bl        -0x24DE4
      lis       r3, 0x804C
      li        r0, 0
      subi      r4, r3, 0x4700
      li        r3, 0x1C
      stw       r4, 0x0(r31)
      addi      r4, r4, 0x1B0
      stw       r4, 0x178(r31)
      stw       r0, 0x1D8(r31)
      stw       r0, 0x1DC(r31)
      bl        -0x1CCF50
      cmplwi    r3, 0
      beq-      .loc_0x84
      lis       r4, 0x804C
      lis       r5, 0x804C
      subi      r0, r4, 0x4718
      lis       r4, 0x804C
      stw       r0, 0x0(r3)
      li        r6, -0x1
      subi      r5, r5, 0x4730
      subi      r0, r4, 0x4420
      stw       r6, 0x18(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0x0(r3)

    .loc_0x84:
      stw       r3, 0x1D8(r31)
      mr        r4, r31
      lwz       r3, 0x1D8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lis       r4, 0x804C
      addi      r3, r31, 0x1E0
      subi      r4, r4, 0x4954
      stw       r4, 0x0(r31)
      addi      r0, r4, 0x1B0
      stw       r0, 0x178(r31)
      bl        0x3DD6C
      lis       r4, 0x804C
      addi      r3, r31, 0x204
      subi      r4, r4, 0x4B78
      stw       r4, 0x0(r31)
      addi      r0, r4, 0x1B0
      stw       r0, 0x178(r31)
      bl        -0x2BCD8
      lfs       f0, -0x4850(r2)
      li        r0, 0
      stfs      f0, 0x118(r31)
      stw       r0, 0x218(r31)

    .loc_0xE8:
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
 * Address:	801F0EA8
 * Size:	00000C
 */
void Game::ItemBridge::Mgr::generatorGetID(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x6272
      addi      r3, r3, 0x6467
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0EB4
 * Size:	00000C
 */
void Game::ItemBridge::Mgr::generatorLocalVersion(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x3030
      addi      r3, r3, 0x3031
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0EC0
 * Size:	000004
 */
void Game::ItemBridge::Item::makeTrMatrix(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0EC4
 * Size:	000008
 */
void Game::ItemBridge::Item::getCreatureName(void)
{
    /*
    .loc_0x0:
      subi      r3, r2, 0x47E4
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0ECC
 * Size:	000008
 */
void Game::ItemBridge::Item::getMabiki(void)
{
    /*
    .loc_0x0:
      addi      r3, r3, 0x1EC
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0ED4
 * Size:	000034
 */
void doAI__Q24Game83FSMItem<Game::ItemBridge::Item, Game::ItemBridge::FSM,
                            Game::ItemBridge::State>
Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x14(r1)
      lwz       r3, 0x1D8(r3)
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
 * Address:	801F0F08
 * Size:	000004
 */
void onDamage__Q24Game35ItemState<Game::ItemBridge::Item>
FPQ34Game10ItemBridge4Itemf(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0F0C
 * Size:	000004
 */
void onKeyEvent__Q24Game35ItemState<Game::ItemBridge::Item>
FPQ34Game10ItemBridge4ItemRCQ28SysShape8KeyEvent(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0F10
 * Size:	000004
 */
void onBounce__Q24Game35ItemState<Game::ItemBridge::Item>
FPQ34Game10ItemBridge4ItemPQ23Sys8Triangle(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0F14
 * Size:	000004
 */
void onPlatCollision__Q24Game35ItemState<Game::ItemBridge::Item>
FPQ34Game10ItemBridge4ItemRQ24Game9PlatEvent(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0F18
 * Size:	000004
 */
void onCollision__Q24Game35ItemState<Game::ItemBridge::Item>
FPQ34Game10ItemBridge4ItemRQ24Game9CollEvent(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0F1C
 * Size:	000004
 */
void init__Q24Game34FSMState<Game::ItemBridge::Item>
FPQ34Game10ItemBridge4ItemPQ24Game8StateArg(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0F20
 * Size:	000004
 */
void exec__Q24Game34FSMState<Game::ItemBridge::Item>
FPQ34Game10ItemBridge4Item(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0F24
 * Size:	000004
 */
void cleanup__Q24Game34FSMState<Game::ItemBridge::Item>
FPQ34Game10ItemBridge4Item(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0F28
 * Size:	000004
 */
void resume__Q24Game34FSMState<Game::ItemBridge::Item>
FPQ34Game10ItemBridge4Item(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0F2C
 * Size:	000004
 */
void restart__Q24Game34FSMState<Game::ItemBridge::Item>
FPQ34Game10ItemBridge4Item(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0F30
 * Size:	000030
 */
void transit__Q24Game34FSMState<Game::ItemBridge::Item>
FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg(void)
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
 * Address:	801F0F60
 * Size:	000004
 */
void init__Q24Game38StateMachine<Game::ItemBridge::Item>
FPQ34Game10ItemBridge4Item(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801F0F64
 * Size:	000064
 */
void create__Q24Game38StateMachine<Game::ItemBridge::Item> Fi(void)
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
      bl        -0x1CCFE0
      stw       r3, 0x4(r31)
      lwz       r0, 0xC(r31)
      rlwinm    r3,r0,2,0,29
      bl        -0x1CCFF0
      stw       r3, 0x10(r31)
      lwz       r0, 0xC(r31)
      rlwinm    r3,r0,2,0,29
      bl        -0x1CD000
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
 * Address:	801F0FC8
 * Size:	00009C
 */
void transit__Q24Game38StateMachine<Game::ItemBridge::Item>
FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      rlwinm    r0,r5,2,0,29
      stmw      r27, 0xC(r1)
      mr        r27, r3
      mr        r28, r4
      mr        r29, r6
      lwz       r30, 0x1DC(r4)
      lwz       r3, 0x14(r3)
      cmplwi    r30, 0
      lwzx      r31, r3, r0
      beq-      .loc_0x50
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x4(r30)
      stw       r0, 0x18(r27)

    .loc_0x50:
      lwz       r0, 0xC(r27)
      cmpw      r31, r0
      blt-      .loc_0x60

    .loc_0x5C:
      b         .loc_0x5C

    .loc_0x60:
      lwz       r3, 0x4(r27)
      rlwinm    r0,r31,2,0,29
      mr        r4, r28
      mr        r5, r29
      lwzx      r3, r3, r0
      stw       r3, 0x1DC(r28)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801F1064
 * Size:	000084
 */
void registerState__Q24Game38StateMachine<Game::ItemBridge::Item>
FPQ24Game34FSMState<Game::ItemBridge::Item>(void)
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
 * Address:	801F10E8
 * Size:	000038
 */
void exec__Q24Game38StateMachine<Game::ItemBridge::Item>
FPQ34Game10ItemBridge4Item(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x1DC(r4)
      cmplwi    r3, 0
      beq-      .loc_0x28
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0x28:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801F1120
 * Size:	000044
 */
void onKeyEvent__Q24Game83FSMItem<Game::ItemBridge::Item, Game::ItemBridge::FSM,
                                  Game::ItemBridge::State>
FRCQ28SysShape8KeyEvent(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r6, r3
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r3, 0x1DC(r3)
      cmplwi    r3, 0
      beq-      .loc_0x34
      lwz       r12, 0x0(r3)
      mr        r4, r6
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl

    .loc_0x34:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801F1164
 * Size:	000044
 */
void platCallback__Q24Game83FSMItem<
    Game::ItemBridge::Item, Game::ItemBridge::FSM, Game::ItemBridge::State>
FRQ24Game9PlatEvent(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r6, r3
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r3, 0x1DC(r3)
      cmplwi    r3, 0
      beq-      .loc_0x34
      lwz       r12, 0x0(r3)
      mr        r4, r6
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl

    .loc_0x34:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801F11A8
 * Size:	000044
 */
void collisionCallback__Q24Game83FSMItem<
    Game::ItemBridge::Item, Game::ItemBridge::FSM, Game::ItemBridge::State>
FRQ24Game9CollEvent(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r6, r3
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r3, 0x1DC(r3)
      cmplwi    r3, 0
      beq-      .loc_0x34
      lwz       r12, 0x0(r3)
      mr        r4, r6
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl

    .loc_0x34:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801F11EC
 * Size:	000044
 */
void bounceCallback__Q24Game83FSMItem<
    Game::ItemBridge::Item, Game::ItemBridge::FSM, Game::ItemBridge::State>
FPQ23Sys8Triangle(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r6, r3
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r3, 0x1DC(r3)
      cmplwi    r3, 0
      beq-      .loc_0x34
      lwz       r12, 0x0(r3)
      mr        r4, r6
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl

    .loc_0x34:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801F1230
 * Size:	000008
 */
void @376
    @onKeyEvent__Q24Game83FSMItem<Game::ItemBridge::Item, Game::ItemBridge::FSM,
                                  Game::ItemBridge::State>
    FRCQ28SysShape8KeyEvent(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x178
      b         -0x114
    */
}

/*
 * --INFO--
 * Address:	801F1238
 * Size:	000008
 */
void @48 @Game::ItemBridge::Mgr::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x30
      b         -0x5C8
    */
}
