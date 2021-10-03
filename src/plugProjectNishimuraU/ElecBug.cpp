

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
 * Address:	8027AC88
 * Size:	000138
 */
void Game::ElecBug::Obj::__ct(void)
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
      addi      r0, r31, 0x2E0
      lis       r3, 0x804B
      stw       r0, 0x17C(r31)
      subi      r3, r3, 0x5988
      li        r0, 0
      stw       r3, 0x2E0(r31)
      stw       r0, 0x2E4(r31)
      stw       r0, 0x2E8(r31)

    .loc_0x40:
      mr        r3, r31
      li        r4, 0
      bl        -0x179930
      lis       r3, 0x804C
      addi      r0, r31, 0x2E0
      addi      r5, r3, 0x7BB0
      li        r3, 0x2C
      stw       r5, 0x0(r31)
      addi      r4, r5, 0x1B0
      addi      r5, r5, 0x2FC
      stw       r4, 0x178(r31)
      lwz       r4, 0x17C(r31)
      stw       r5, 0x0(r4)
      lwz       r4, 0x17C(r31)
      sub       r0, r0, r4
      stw       r0, 0xC(r4)
      bl        -0x256E64
      mr.       r30, r3
      beq-      .loc_0xCC
      bl        -0x1533A0
      lis       r3, 0x804C
      lis       r4, 0x804B
      addi      r0, r3, 0x7A00
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

    .loc_0xCC:
      stw       r30, 0x184(r31)
      li        r3, 0x1C
      bl        -0x256EB8
      mr.       r4, r3
      beq-      .loc_0x100
      lis       r5, 0x804B
      lis       r3, 0x804C
      subi      r0, r5, 0x680
      li        r5, -0x1
      stw       r0, 0x0(r4)
      addi      r0, r3, 0x79DC
      stw       r5, 0x18(r4)
      stw       r0, 0x0(r4)

    .loc_0x100:
      lwz       r12, 0x0(r31)
      mr        r3, r31
      lwz       r12, 0x2F8(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        0xAC4
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
 * Address:	8027ADC0
 * Size:	000004
 */
void Game::ElecBug::Obj::setInitialSetting((Game::EnemyInitialParamBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8027ADC4
 * Size:	0000A4
 */
void Game::ElecBug::Obj::onInit((Game::CreatureInitArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      bl        -0x179380
      lwz       r0, 0x1E0(r31)
      ori       r0, r0, 0x1
      stw       r0, 0x1E0(r31)
      bl        -0x1B1848
      xoris     r0, r3, 0x8000
      lis       r4, 0x4330
      stw       r0, 0xC(r1)
      li        r0, 0
      lfd       f3, -0x2E70(r2)
      mr        r3, r31
      stw       r4, 0x8(r1)
      lfs       f2, -0x2E80(r2)
      lfd       f0, 0x8(r1)
      lfs       f1, -0x2E7C(r2)
      fsubs     f3, f0, f3
      lfs       f0, -0x2E78(r2)
      fmuls     f2, f2, f3
      fdivs     f1, f2, f1
      stfs      f1, 0x2C0(r31)
      stfs      f0, 0x2C4(r31)
      stw       r0, 0x2D8(r31)
      bl        0xE20
      lwz       r3, 0x2BC(r31)
      mr        r4, r31
      li        r5, 0x2
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
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
 * Address:	8027AE68
 * Size:	000044
 */
void Game::ElecBug::Obj::onKill((Game::CreatureKillArg*))
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
      bl        0xEDC
      mr        r3, r30
      mr        r4, r31
      bl        -0x178FA8
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
 * Address:	8027AEAC
 * Size:	000048
 */
void Game::ElecBug::Obj::doUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x14(r1)
      lwz       r5, -0x6514(r13)
      lfs       f1, 0x2C0(r3)
      lfs       f0, 0x54(r5)
      fadds     f0, f1, f0
      stfs      f0, 0x2C0(r3)
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
 * Address:	8027AEF4
 * Size:	000004
 */
void Game::ElecBug::Obj::doDirectDraw((Graphics&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8027AEF8
 * Size:	000020
 */
void Game::ElecBug::Obj::doDebugDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x175098
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8027AF18
 * Size:	00004C
 */
void Game::ElecBug::Obj::setFSM((Game::ElecBug::FSM*))
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
 * Address:	8027AF64
 * Size:	000080
 */
void Game::ElecBug::Obj::getShadowParam((Game::ShadowParam&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      subi      r4, r2, 0x2E68
      lwz       r3, 0x174(r3)
      bl        0x1C4064
      bl        0x1AE91C
      lfs       f4, 0x2C(r3)
      lfs       f1, 0x1C(r3)
      lfs       f0, 0xC(r3)
      lfs       f3, -0x2E60(r2)
      stfs      f0, 0x0(r31)
      lfs       f2, -0x2E78(r2)
      stfs      f1, 0x4(r31)
      lfs       f1, -0x2E5C(r2)
      stfs      f4, 0x8(r31)
      lfs       f0, -0x2E58(r2)
      lfs       f4, 0x4(r31)
      fsubs     f3, f4, f3
      stfs      f3, 0x4(r31)
      stfs      f2, 0xC(r31)
      stfs      f1, 0x10(r31)
      stfs      f2, 0x14(r31)
      stfs      f0, 0x18(r31)
      stfs      f0, 0x1C(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8027AFE4
 * Size:	0001E4
 */
void Game::ElecBug::Obj::collisionCallback((Game::CollEvent&))
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
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      mr        r31, r4
      mr        r30, r3
      lwz       r0, 0x0(r4)
      cmplwi    r0, 0
      beq-      .loc_0x19C
      lwz       r0, 0x1E0(r30)
      rlwinm.   r0,r0,0,22,22
      bne-      .loc_0x19C
      bl        -0x173C3C
      cmpwi     r3, 0x5
      beq-      .loc_0x60
      cmpwi     r3, 0x7
      bne-      .loc_0x19C

    .loc_0x60:
      lwz       r3, 0x0(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x98
      lwz       r3, 0x0(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x19C

    .loc_0x98:
      lwz       r4, 0x0(r31)
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f3, 0x8(r1)
      lfs       f1, 0x18C(r30)
      lfs       f4, 0x10(r1)
      lfs       f0, 0x194(r30)
      fsubs     f3, f3, f1
      lfs       f1, -0x2E78(r2)
      fsubs     f4, f4, f0
      fmadds    f0, f3, f3, f1
      fmuls     f2, f4, f4
      fadds     f2, f2, f0
      fcmpo     cr0, f2, f1
      ble-      .loc_0xF0
      ble-      .loc_0xF4
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0xF4

    .loc_0xF0:
      fmr       f2, f1

    .loc_0xF4:
      lfs       f0, -0x2E78(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x110
      lfs       f0, -0x2E5C(r2)
      fdivs     f0, f0, f2
      fmuls     f3, f3, f0
      fmuls     f4, f4, f0

    .loc_0x110:
      lwz       r3, 0x0(r31)
      lwz       r4, 0xC0(r30)
      lwz       r12, 0x0(r3)
      lfs       f0, 0x44C(r4)
      lwz       r12, 0x1C(r12)
      fmuls     f30, f4, f0
      lfs       f29, 0x474(r4)
      fmuls     f31, f3, f0
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x144
      lfs       f29, -0x2E78(r2)

    .loc_0x144:
      lwz       r6, 0xC0(r30)
      lis       r5, 0x804B
      lis       r4, 0x804B
      lis       r3, 0x804B
      lfs       f0, 0x604(r6)
      subi      r6, r5, 0x5D00
      addi      r5, r4, 0x4974
      addi      r0, r3, 0x4908
      stw       r6, 0x14(r1)
      addi      r4, r1, 0x14
      stw       r5, 0x14(r1)
      stw       r30, 0x18(r1)
      stfs      f0, 0x1C(r1)
      stfs      f31, 0x20(r1)
      stfs      f29, 0x24(r1)
      stfs      f30, 0x28(r1)
      stw       r0, 0x14(r1)
      lwz       r3, 0x0(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl

    .loc_0x19C:
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      lwz       r12, 0x240(r12)
      mtctr     r12
      bctrl
      psq_l     f31,0x68(r1),0,0
      lfd       f31, 0x60(r1)
      psq_l     f30,0x58(r1),0,0
      lfd       f30, 0x50(r1)
      psq_l     f29,0x48(r1),0,0
      lfd       f29, 0x40(r1)
      lwz       r31, 0x3C(r1)
      lwz       r0, 0x74(r1)
      lwz       r30, 0x38(r1)
      mtlr      r0
      addi      r1, r1, 0x70
      blr
    */
}

/*
 * --INFO--
 * Address:	8027B1C8
 * Size:	0001BC
 */
void Game::ElecBug::Obj::pressCallBack((Game::Creature*, float, CollPart*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      mr        r30, r4
      stw       r29, 0x34(r1)
      mr        r29, r3
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x19C
      lwz       r0, 0x1E0(r29)
      rlwinm.   r0,r0,0,22,22
      bne-      .loc_0x19C
      cmplwi    r30, 0
      beq-      .loc_0x19C
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x19C
      mr        r3, r29
      bl        -0x173E40
      mr        r31, r3
      cmpwi     r31, 0x1
      blt-      .loc_0x19C
      cmpwi     r31, 0x7
      bgt-      .loc_0x19C
      lwz       r3, 0x2BC(r29)
      mr        r4, r29
      li        r5, 0x8
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      cmpwi     r31, 0x5
      beq-      .loc_0xB4
      cmpwi     r31, 0x7
      bne-      .loc_0x194

    .loc_0xB4:
      mr        r4, r30
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f4, 0x8(r1)
      lfs       f1, 0x18C(r29)
      lfs       f5, 0x10(r1)
      lfs       f0, 0x194(r29)
      fsubs     f4, f4, f1
      lfs       f1, -0x2E78(r2)
      fsubs     f5, f5, f0
      fmadds    f0, f4, f4, f1
      fmuls     f2, f5, f5
      fadds     f2, f2, f0
      fcmpo     cr0, f2, f1
      ble-      .loc_0x10C
      ble-      .loc_0x110
      fsqrte    f0, f2
      fmuls     f2, f0, f2
      b         .loc_0x110

    .loc_0x10C:
      fmr       f2, f1

    .loc_0x110:
      lfs       f0, -0x2E78(r2)
      fcmpo     cr0, f2, f0
      ble-      .loc_0x12C
      lfs       f0, -0x2E5C(r2)
      fdivs     f0, f0, f2
      fmuls     f4, f4, f0
      fmuls     f5, f5, f0

    .loc_0x12C:
      lwz       r7, 0xC0(r29)
      lis       r5, 0x804B
      lis       r4, 0x804B
      lis       r3, 0x804B
      lfs       f0, 0x44C(r7)
      subi      r6, r5, 0x5D00
      lfs       f1, 0x474(r7)
      addi      r5, r4, 0x4974
      lfs       f3, 0x604(r7)
      fmuls     f2, f5, f0
      fmuls     f0, f4, f0
      addi      r0, r3, 0x4908
      stw       r6, 0x14(r1)
      mr        r3, r30
      addi      r4, r1, 0x14
      stw       r5, 0x14(r1)
      stw       r29, 0x18(r1)
      stfs      f3, 0x1C(r1)
      stfs      f0, 0x20(r1)
      stfs      f1, 0x24(r1)
      stfs      f2, 0x28(r1)
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl

    .loc_0x194:
      li        r3, 0x1
      b         .loc_0x1A0

    .loc_0x19C:
      li        r3, 0

    .loc_0x1A0:
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r29, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	8027B384
 * Size:	00002C
 */
void Game::ElecBug::Obj::hipdropCallBack((Game::Creature*, float, CollPart*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x27C(r12)
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
 * Address:	8027B3B0
 * Size:	0000C0
 */
void Game::ElecBug::Obj::earthquakeCallBack((Game::Creature*, float))
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
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xA4
      lwz       r0, 0x1E0(r30)
      rlwinm.   r0,r0,0,22,22
      bne-      .loc_0xA4
      cmplwi    r31, 0
      beq-      .loc_0xA4
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xA4
      mr        r3, r30
      bl        -0x174024
      cmpwi     r3, 0x1
      blt-      .loc_0xA4
      cmpwi     r3, 0x7
      bgt-      .loc_0xA4
      lwz       r3, 0x2BC(r30)
      mr        r4, r30
      li        r5, 0x8
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      li        r3, 0x1
      b         .loc_0xA8

    .loc_0xA4:
      li        r3, 0

    .loc_0xA8:
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
 * Address:	8027B470
 * Size:	000040
 */
void Game::ElecBug::Obj::doStartStoneState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x178590
      lwz       r0, 0x1E0(r31)
      mr        r3, r31
      rlwinm    r0,r0,0,0,30
      stw       r0, 0x1E0(r31)
      bl        0x8C8
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8027B4B0
 * Size:	000040
 */
void Game::ElecBug::Obj::doFinishStoneState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x1740D0
      cmpwi     r3, 0x8
      beq-      .loc_0x2C
      lwz       r0, 0x1E0(r31)
      ori       r0, r0, 0x1
      stw       r0, 0x1E0(r31)

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
 * Address:	8027B4F0
 * Size:	000034
 */
void Game::ElecBug::Obj::doStartWaitingBirthTypeDrop(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x173B6C
      mr        r3, r31
      bl        0x984
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8027B524
 * Size:	000034
 */
void Game::ElecBug::Obj::doFinishWaitingBirthTypeDrop(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x173B70
      mr        r3, r31
      bl        0x8C4
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8027B558
 * Size:	000028
 */
void Game::ElecBug::Obj::startCarcassMotion(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x7
      li        r5, 0
      stw       r0, 0x14(r1)
      bl        -0x176568
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8027B580
 * Size:	000020
 */
void Game::ElecBug::Obj::doStartMovie(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        0x904
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8027B5A0
 * Size:	000020
 */
void Game::ElecBug::Obj::doEndMovie(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        0x858
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8027B5C0
 * Size:	0001A4
 */
void Game::ElecBug::Obj::setTargetPosition(void)
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
      stfd      f27, 0x40(r1)
      psq_st    f27,0x48(r1),0,0
      stw       r31, 0x3C(r1)
      mr        r31, r3
      lfs       f30, 0x198(r3)
      lfs       f29, 0x19C(r3)
      lfs       f28, 0x1A0(r3)
      bl        -0x1B2068
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lwz       r3, 0xC0(r31)
      stw       r0, 0x8(r1)
      lfd       f1, -0x2E70(r2)
      lfd       f0, 0x8(r1)
      lfs       f3, -0x2E54(r2)
      fsubs     f4, f0, f1
      lfs       f2, -0x2E7C(r2)
      lfs       f1, 0x35C(r3)
      lfs       f0, 0x384(r3)
      fmuls     f3, f3, f4
      fsubs     f27, f1, f0
      fdivs     f31, f3, f2
      bl        -0x1B20A8
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x14(r1)
      lwz       r3, 0xC0(r31)
      stw       r0, 0x10(r1)
      lfd       f2, -0x2E70(r2)
      lfd       f1, 0x10(r1)
      lfs       f0, -0x2E78(r2)
      fsubs     f3, f1, f2
      lfs       f2, -0x2E7C(r2)
      lfs       f1, 0x384(r3)
      fcmpo     cr0, f31, f0
      fmuls     f0, f27, f3
      fdivs     f0, f0, f2
      fadds     f2, f1, f0
      bge-      .loc_0xF8
      lfs       f0, -0x2E50(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f31, f0
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f0, f0
      b         .loc_0x11C

    .loc_0xF8:
      lfs       f0, -0x2E4C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f31, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0

    .loc_0x11C:
      fmadds    f1, f2, f0, f30
      lfs       f0, -0x2E78(r2)
      fcmpo     cr0, f31, f0
      stfs      f1, 0x2C8(r31)
      stfs      f29, 0x2CC(r31)
      bge-      .loc_0x138
      fneg      f31, f31

    .loc_0x138:
      lfs       f0, -0x2E4C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f31, f0
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r3, r0
      lfs       f0, 0x4(r3)
      fmadds    f0, f2, f0, f28
      stfs      f0, 0x2D0(r31)
      psq_l     f31,0x88(r1),0,0
      lfd       f31, 0x80(r1)
      psq_l     f30,0x78(r1),0,0
      lfd       f30, 0x70(r1)
      psq_l     f29,0x68(r1),0,0
      lfd       f29, 0x60(r1)
      psq_l     f28,0x58(r1),0,0
      lfd       f28, 0x50(r1)
      psq_l     f27,0x48(r1),0,0
      lfd       f27, 0x40(r1)
      lwz       r0, 0x94(r1)
      lwz       r31, 0x3C(r1)
      mtlr      r0
      addi      r1, r1, 0x90
      blr
    */
}

/*
 * --INFO--
 * Address:	8027B764
 * Size:	00001C
 */
void Game::ElecBug::Obj::resetPartnerPtr(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0x2D8(r3)
      cmplwi    r4, 0
      beqlr-
      li        r0, 0
      stw       r0, 0x2D8(r4)
      stw       r0, 0x2D8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8027B780
 * Size:	000070
 */
void Game::ElecBug::Obj::isBecomeChargeState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x58
      lwz       r0, 0x1E0(r31)
      rlwinm.   r0,r0,0,22,22
      bne-      .loc_0x58
      mr        r3, r31
      bl        -0x1743C8
      cmpwi     r3, 0x1
      blt-      .loc_0x58
      cmpwi     r3, 0x3
      bgt-      .loc_0x58
      li        r3, 0x1
      b         .loc_0x5C

    .loc_0x58:
      li        r3, 0

    .loc_0x5C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8027B7F0
 * Size:	000030
 */
void Game::ElecBug::Obj::startChargeState((Game::ElecBug::Obj*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r3
      stw       r0, 0x14(r1)
      stw       r4, 0x2D8(r3)
      mr        r3, r4
      mr        r4, r5
      bl        .loc_0x30
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x30:
    */
}

/*
 * --INFO--
 * Address:	8027B820
 * Size:	000044
 */
void Game::ElecBug::Obj::startChildChargeState((Game::ElecBug::Obj*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0x6
      li        r6, 0
      stw       r0, 0x14(r1)
      stw       r4, 0x2D8(r3)
      mr        r4, r3
      lwz       r3, 0x2BC(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      li        r3, 0x1
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8027B864
 * Size:	000044
 */
void Game::ElecBug::Obj::createEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x74
      bl        -0x2579D8
      mr.       r0, r3
      beq-      .loc_0x2C
      bl        .loc_0x44
      mr        r0, r3

    .loc_0x2C:
      stw       r0, 0x2DC(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x44:
    */
}

/*
 * --INFO--
 * Address:	8027B8A8
 * Size:	000168
 */
void efx::TDnkmsEffect::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      lis       r4, 0x804B
      lis       r6, 0x804A
      lis       r5, 0x804E
      stmw      r22, 0x8(r1)
      subi      r25, r4, 0x5808
      addi      r27, r5, 0x698C
      lis       r4, 0x804E
      addi      r30, r4, 0x6940
      subi      r26, r6, 0x1D84
      lis       r4, 0x804C
      addi      r24, r27, 0x14
      addi      r12, r4, 0x7B64
      li        r28, 0
      lis       r4, 0x804C
      li        r29, 0x2B2
      addi      r10, r4, 0x7B18
      addi      r23, r30, 0x14
      lis       r4, 0x804E
      li        r31, 0x33
      addi      r7, r4, 0x6C00
      addi      r22, r12, 0x14
      lis       r4, 0x804E
      li        r11, 0x34
      addi      r4, r4, 0x6BB4
      addi      r9, r10, 0x14
      li        r8, 0x35
      addi      r6, r7, 0x14
      stw       r25, 0x8(r3)
      li        r5, 0x36
      addi      r0, r4, 0x14
      stw       r26, 0xC(r3)
      stw       r27, 0x8(r3)
      stw       r24, 0xC(r3)
      stw       r28, 0x10(r3)
      sth       r29, 0x14(r3)
      stb       r28, 0x16(r3)
      stw       r30, 0x8(r3)
      stw       r23, 0xC(r3)
      stw       r28, 0x18(r3)
      sth       r31, 0x14(r3)
      stw       r12, 0x8(r3)
      stw       r22, 0xC(r3)
      stw       r25, 0x1C(r3)
      stw       r26, 0x20(r3)
      stw       r27, 0x1C(r3)
      stw       r24, 0x20(r3)
      stw       r28, 0x24(r3)
      sth       r29, 0x28(r3)
      stb       r28, 0x2A(r3)
      stw       r30, 0x1C(r3)
      stw       r23, 0x20(r3)
      stw       r28, 0x2C(r3)
      sth       r31, 0x28(r3)
      stw       r12, 0x1C(r3)
      stw       r22, 0x20(r3)
      stw       r25, 0x30(r3)
      stw       r26, 0x34(r3)
      stw       r27, 0x30(r3)
      stw       r24, 0x34(r3)
      stw       r28, 0x38(r3)
      sth       r29, 0x3C(r3)
      stb       r28, 0x3E(r3)
      stw       r30, 0x30(r3)
      stw       r23, 0x34(r3)
      stw       r28, 0x40(r3)
      sth       r11, 0x3C(r3)
      stw       r10, 0x30(r3)
      stw       r9, 0x34(r3)
      stw       r25, 0x44(r3)
      stw       r26, 0x48(r3)
      stw       r27, 0x44(r3)
      stw       r24, 0x48(r3)
      stw       r28, 0x4C(r3)
      sth       r8, 0x50(r3)
      stb       r28, 0x52(r3)
      stw       r7, 0x44(r3)
      stw       r6, 0x48(r3)
      stw       r25, 0x5C(r3)
      stw       r26, 0x60(r3)
      stw       r27, 0x5C(r3)
      stw       r24, 0x60(r3)
      stw       r28, 0x64(r3)
      sth       r5, 0x68(r3)
      stb       r28, 0x6A(r3)
      stw       r4, 0x5C(r3)
      stw       r0, 0x60(r3)
      lmw       r22, 0x8(r1)
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8027BA10
 * Size:	000084
 */
void efx::TDnkmsThunderB::__dt(void)
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
      beq-      .loc_0x68
      lis       r3, 0x804E
      addi      r3, r3, 0x6BB4
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x58
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x1EBDC8

    .loc_0x58:
      extsh.    r0, r31
      ble-      .loc_0x68
      mr        r3, r30
      bl        -0x2579C0

    .loc_0x68:
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
 * Address:	8027BA94
 * Size:	000084
 */
void efx::TDnkmsThunderA::__dt(void)
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
      beq-      .loc_0x68
      lis       r3, 0x804E
      addi      r3, r3, 0x6C00
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x58
      lis       r4, 0x804E
      addi      r3, r30, 0x4
      addi      r5, r4, 0x698C
      li        r4, 0
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x14
      stw       r0, 0x4(r30)
      bl        -0x1EBE4C

    .loc_0x58:
      extsh.    r0, r31
      ble-      .loc_0x68
      mr        r3, r30
      bl        -0x257A44

    .loc_0x68:
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
 * Address:	8027BB18
 * Size:	00009C
 */
void efx::TDnkmsHoudenB::__dt(void)
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
      addi      r3, r3, 0x7B18
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x6940
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
      bl        -0x1EBEE8

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x257AE0

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
 * Address:	8027BBB4
 * Size:	00009C
 */
void efx::TDnkmsHoudenA::__dt(void)
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
      addi      r3, r3, 0x7B64
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x14
      stw       r0, 0x4(r30)
      beq-      .loc_0x70
      lis       r3, 0x804E
      addi      r3, r3, 0x6940
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
      bl        -0x1EBF84

    .loc_0x70:
      extsh.    r0, r31
      ble-      .loc_0x80
      mr        r3, r30
      bl        -0x257B7C

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
 * Address:	8027BC50
 * Size:	000010
 */
void Game::ElecBug::Obj::setupEffect(void)
{
    /*
    .loc_0x0:
      lwz       r4, 0x2DC(r3)
      addi      r0, r3, 0x18C
      stw       r0, 0x0(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	8027BC60
 * Size:	000040
 */
void Game::ElecBug::Obj::startChargeEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0
      stw       r0, 0x14(r1)
      lwz       r5, 0x2DC(r3)
      lwz       r0, 0x0(r5)
      addi      r3, r5, 0x30
      stw       r0, 0x40(r5)
      lwz       r12, 0x30(r5)
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
 * Address:	8027BCA0
 * Size:	0000C0
 */
void Game::ElecBug::Obj::startDischargeEffect((Game::ElecBug::Obj*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      addi      r0, r4, 0x18C
      li        r4, 0
      stw       r31, 0xC(r1)
      lwz       r31, 0x2DC(r3)
      stw       r0, 0x4(r31)
      addi      r3, r31, 0x8
      lwz       r0, 0x0(r31)
      stw       r0, 0x18(r31)
      lwz       r12, 0x8(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x4(r31)
      addi      r3, r31, 0x1C
      li        r4, 0
      stw       r0, 0x2C(r31)
      lwz       r12, 0x1C(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r5, 0x4(r31)
      addi      r3, r31, 0x44
      lwz       r0, 0x0(r31)
      li        r4, 0
      stw       r0, 0x54(r31)
      stw       r5, 0x58(r31)
      lwz       r5, 0x4(r31)
      lwz       r0, 0x0(r31)
      stw       r0, 0x6C(r31)
      stw       r5, 0x70(r31)
      lwz       r12, 0x44(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x5C
      li        r4, 0
      lwz       r12, 0x5C(r31)
      lwz       r12, 0x8(r12)
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
 * Address:	8027BD60
 * Size:	0000A4
 */
void Game::ElecBug::Obj::finishPartnerAndEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      lwz       r4, 0x2D8(r3)
      cmplwi    r4, 0
      beq-      .loc_0x28
      li        r0, 0
      stw       r0, 0x2D8(r4)
      stw       r0, 0x2D8(r3)

    .loc_0x28:
      lwz       r31, 0x2DC(r3)
      addi      r3, r31, 0x8
      lwz       r12, 0x8(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x1C
      lwz       r12, 0x1C(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x30
      lwz       r12, 0x30(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x44
      lwz       r12, 0x44(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x5C
      lwz       r12, 0x5C(r31)
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
 * Address:	8027BE04
 * Size:	00008C
 */
void Game::ElecBug::Obj::effectDrawOn(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      lwz       r31, 0x2DC(r3)
      lwz       r12, 0x8(r31)
      addi      r3, r31, 0x8
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x1C
      lwz       r12, 0x1C(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x30
      lwz       r12, 0x30(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x44
      lwz       r12, 0x44(r31)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x5C
      lwz       r12, 0x5C(r31)
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
 * Address:	8027BE90
 * Size:	00008C
 */
void Game::ElecBug::Obj::effectDrawOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      lwz       r31, 0x2DC(r3)
      lwz       r12, 0x8(r31)
      addi      r3, r31, 0x8
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x1C
      lwz       r12, 0x1C(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x30
      lwz       r12, 0x30(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x44
      lwz       r12, 0x44(r31)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      addi      r3, r31, 0x5C
      lwz       r12, 0x5C(r31)
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
 * Address:	8027BF1C
 * Size:	0004D0
 */
void Game::ElecBug::Obj::checkInteract((Game::ElecBug::Obj*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x1D0(r1)
      mflr      r0
      stw       r0, 0x1D4(r1)
      stfd      f31, 0x1C0(r1)
      psq_st    f31,0x1C8(r1),0,0
      stfd      f30, 0x1B0(r1)
      psq_st    f30,0x1B8(r1),0,0
      stfd      f29, 0x1A0(r1)
      psq_st    f29,0x1A8(r1),0,0
      stfd      f28, 0x190(r1)
      psq_st    f28,0x198(r1),0,0
      stfd      f27, 0x180(r1)
      psq_st    f27,0x188(r1),0,0
      stfd      f26, 0x170(r1)
      psq_st    f26,0x178(r1),0,0
      stfd      f25, 0x160(r1)
      psq_st    f25,0x168(r1),0,0
      stfd      f24, 0x150(r1)
      psq_st    f24,0x158(r1),0,0
      stfd      f23, 0x140(r1)
      psq_st    f23,0x148(r1),0,0
      stfd      f22, 0x130(r1)
      psq_st    f22,0x138(r1),0,0
      stfd      f21, 0x120(r1)
      psq_st    f21,0x128(r1),0,0
      stfd      f20, 0x110(r1)
      psq_st    f20,0x118(r1),0,0
      stfd      f19, 0x100(r1)
      psq_st    f19,0x108(r1),0,0
      stfd      f18, 0xF0(r1)
      psq_st    f18,0xF8(r1),0,0
      stfd      f17, 0xE0(r1)
      psq_st    f17,0xE8(r1),0,0
      stfd      f16, 0xD0(r1)
      psq_st    f16,0xD8(r1),0,0
      stw       r31, 0xCC(r1)
      stw       r30, 0xC8(r1)
      mr        r30, r3
      mr        r31, r4
      mr        r4, r30
      addi      r3, r1, 0x20
      lwz       r12, 0x0(r30)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r31)
      lfs       f19, 0x20(r1)
      lwz       r12, 0x8(r12)
      lfs       f20, 0x24(r1)
      lfs       f22, 0x28(r1)
      mtctr     r12
      bctrl
      lfs       f2, 0x18(r1)
      lfs       f1, 0x14(r1)
      fsubs     f29, f2, f20
      lfs       f0, 0x1C(r1)
      fsubs     f30, f1, f19
      lfs       f3, -0x2E78(r2)
      fsubs     f31, f0, f22
      fmuls     f4, f29, f29
      fmuls     f5, f31, f31
      fmadds    f4, f30, f30, f4
      fadds     f4, f5, f4
      fcmpo     cr0, f4, f3
      ble-      .loc_0x11C
      ble-      .loc_0x120
      fsqrte    f3, f4
      fmuls     f4, f3, f4
      b         .loc_0x120

    .loc_0x11C:
      fmr       f4, f3

    .loc_0x120:
      lfs       f3, -0x2E78(r2)
      fcmpo     cr0, f4, f3
      ble-      .loc_0x140
      lfs       f3, -0x2E5C(r2)
      fdivs     f3, f3, f4
      fmuls     f30, f30, f3
      fmuls     f29, f29, f3
      fmuls     f31, f31, f3

    .loc_0x140:
      lfs       f4, -0x2E78(r2)
      lfs       f5, -0x2E5C(r2)
      fmuls     f3, f4, f31
      fmuls     f6, f4, f29
      fmsubs    f27, f4, f30, f3
      fnmsubs   f26, f5, f30, f6
      fmsubs    f28, f5, f31, f6
      fmuls     f3, f27, f27
      fmuls     f5, f26, f26
      fmadds    f3, f28, f28, f3
      fadds     f5, f5, f3
      fcmpo     cr0, f5, f4
      ble-      .loc_0x184
      ble-      .loc_0x188
      fsqrte    f3, f5
      fmuls     f5, f3, f5
      b         .loc_0x188

    .loc_0x184:
      fmr       f5, f4

    .loc_0x188:
      lfs       f3, -0x2E78(r2)
      fcmpo     cr0, f5, f3
      ble-      .loc_0x1A8
      lfs       f3, -0x2E5C(r2)
      fdivs     f3, f3, f5
      fmuls     f28, f28, f3
      fmuls     f27, f27, f3
      fmuls     f26, f26, f3

    .loc_0x1A8:
      fmuls     f5, f30, f26
      lfs       f3, -0x2E78(r2)
      fmuls     f6, f31, f27
      fmuls     f4, f29, f28
      fmsubs    f25, f31, f28, f5
      fmsubs    f23, f29, f26, f6
      fmsubs    f24, f30, f27, f4
      fmuls     f4, f25, f25
      fmuls     f5, f24, f24
      fmadds    f4, f23, f23, f4
      fadds     f4, f5, f4
      fcmpo     cr0, f4, f3
      ble-      .loc_0x1EC
      ble-      .loc_0x1F0
      fsqrte    f3, f4
      fmuls     f4, f3, f4
      b         .loc_0x1F0

    .loc_0x1EC:
      fmr       f4, f3

    .loc_0x1F0:
      lfs       f3, -0x2E78(r2)
      fcmpo     cr0, f4, f3
      ble-      .loc_0x210
      lfs       f3, -0x2E5C(r2)
      fdivs     f3, f3, f4
      fmuls     f23, f23, f3
      fmuls     f25, f25, f3
      fmuls     f24, f24, f3

    .loc_0x210:
      fsubs     f5, f20, f2
      lfs       f3, -0x2E78(r2)
      fsubs     f4, f22, f0
      fsubs     f6, f19, f1
      fmuls     f5, f5, f5
      fmuls     f7, f4, f4
      fmadds    f4, f6, f6, f5
      fadds     f21, f7, f4
      fcmpo     cr0, f21, f3
      ble-      .loc_0x248
      ble-      .loc_0x24C
      fsqrte    f3, f21
      fmuls     f21, f3, f21
      b         .loc_0x24C

    .loc_0x248:
      fmr       f21, f3

    .loc_0x24C:
      fadds     f3, f19, f1
      lwz       r3, 0xC0(r30)
      lfs       f4, -0x2E48(r2)
      fadds     f1, f20, f2
      fadds     f0, f22, f0
      lfs       f5, 0x44C(r3)
      lfs       f17, 0x474(r3)
      fmuls     f2, f4, f3
      fmuls     f1, f4, f1
      addi      r3, r1, 0x54
      fmuls     f0, f4, f0
      stfs      f21, 0x38(r1)
      fmuls     f18, f26, f5
      fmuls     f16, f28, f5
      stfs      f2, 0x2C(r1)
      addi      r4, r1, 0x2C
      stfs      f1, 0x30(r1)
      stfs      f0, 0x34(r1)
      bl        -0x4DE10
      li        r0, 0x1
      addi      r3, r1, 0x74
      stb       r0, 0x70(r1)
      addi      r4, r1, 0x54
      bl        -0x4DDE4
      addi      r3, r1, 0x74
      bl        -0x4DD70
      b         .loc_0x428

    .loc_0x2B8:
      addi      r3, r1, 0x74
      bl        -0x4DC94
      lwz       r12, 0x0(r3)
      mr        r31, r3
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x420
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x314
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x420

    .loc_0x314:
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0xC(r1)
      lfs       f0, 0x8(r1)
      fsubs     f1, f1, f20
      lfs       f2, 0x10(r1)
      fsubs     f0, f0, f19
      lfs       f4, -0x2E78(r2)
      fsubs     f2, f2, f22
      fmuls     f3, f27, f1
      fmadds    f3, f28, f0, f3
      fmadds    f3, f26, f2, f3
      fcmpo     cr0, f3, f4
      ble-      .loc_0x364
      fmr       f4, f3
      b         .loc_0x368

    .loc_0x364:
      fneg      f4, f3

    .loc_0x368:
      lfs       f5, -0x2E80(r2)
      fcmpo     cr0, f4, f5
      bge-      .loc_0x420
      fmuls     f5, f29, f1
      fmadds    f5, f30, f0, f5
      fmadds    f6, f31, f2, f5
      fcmpo     cr0, f6, f21
      bge-      .loc_0x420
      lfs       f5, -0x2E78(r2)
      fcmpo     cr0, f6, f5
      ble-      .loc_0x420
      fmuls     f1, f25, f1
      fmadds    f0, f23, f0, f1
      fmadds    f1, f24, f2, f0
      fcmpo     cr0, f1, f5
      ble-      .loc_0x3AC
      b         .loc_0x3B0

    .loc_0x3AC:
      fneg      f1, f1

    .loc_0x3B0:
      lfs       f0, -0x2E58(r2)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x420
      fdivs     f0, f3, f4
      lwz       r5, 0xC0(r30)
      lis       r3, 0x804B
      lis       r4, 0x804B
      lfs       f2, 0x604(r5)
      subi      r0, r3, 0x5D00
      fmuls     f1, f0, f16
      lis       r3, 0x804B
      fmuls     f0, f0, f18
      stw       r0, 0x3C(r1)
      addi      r4, r4, 0x4974
      addi      r0, r3, 0x4908
      stw       r4, 0x3C(r1)
      mr        r3, r31
      addi      r4, r1, 0x3C
      stw       r30, 0x40(r1)
      stfs      f2, 0x44(r1)
      stfs      f1, 0x48(r1)
      stfs      f17, 0x4C(r1)
      stfs      f0, 0x50(r1)
      stw       r0, 0x3C(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl

    .loc_0x420:
      addi      r3, r1, 0x74
      bl        -0x4DE40

    .loc_0x428:
      addi      r3, r1, 0x74
      bl        -0x4DE14
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x2B8
      psq_l     f31,0x1C8(r1),0,0
      lfd       f31, 0x1C0(r1)
      psq_l     f30,0x1B8(r1),0,0
      lfd       f30, 0x1B0(r1)
      psq_l     f29,0x1A8(r1),0,0
      lfd       f29, 0x1A0(r1)
      psq_l     f28,0x198(r1),0,0
      lfd       f28, 0x190(r1)
      psq_l     f27,0x188(r1),0,0
      lfd       f27, 0x180(r1)
      psq_l     f26,0x178(r1),0,0
      lfd       f26, 0x170(r1)
      psq_l     f25,0x168(r1),0,0
      lfd       f25, 0x160(r1)
      psq_l     f24,0x158(r1),0,0
      lfd       f24, 0x150(r1)
      psq_l     f23,0x148(r1),0,0
      lfd       f23, 0x140(r1)
      psq_l     f22,0x138(r1),0,0
      lfd       f22, 0x130(r1)
      psq_l     f21,0x128(r1),0,0
      lfd       f21, 0x120(r1)
      psq_l     f20,0x118(r1),0,0
      lfd       f20, 0x110(r1)
      psq_l     f19,0x108(r1),0,0
      lfd       f19, 0x100(r1)
      psq_l     f18,0xF8(r1),0,0
      lfd       f18, 0xF0(r1)
      psq_l     f17,0xE8(r1),0,0
      lfd       f17, 0xE0(r1)
      psq_l     f16,0xD8(r1),0,0
      lfd       f16, 0xD0(r1)
      lwz       r31, 0xCC(r1)
      lwz       r0, 0x1D4(r1)
      lwz       r30, 0xC8(r1)
      mtlr      r0
      addi      r1, r1, 0x1D0
      blr
    */
}

/*
 * --INFO--
 * Address:	8027C3EC
 * Size:	000008
 */
void Game::ElecBug::Obj::getDownSmokeScale(void)
{
    /*
    .loc_0x0:
      lfs       f1, -0x2E44(r2)
      blr
    */
}

/*
 * --INFO--
 * Address:	8027C3F4
 * Size:	000008
 */
void Game::ElecBug::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1C
      blr
    */
}

/*
 * --INFO--
 * Address:	8027C3FC
 * Size:	000008
 */
void @4 @efx::TDnkmsHoudenA::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x84C
    */
}

/*
 * --INFO--
 * Address:	8027C404
 * Size:	000008
 */
void @4 @efx::TDnkmsHoudenB::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x8F0
    */
}
