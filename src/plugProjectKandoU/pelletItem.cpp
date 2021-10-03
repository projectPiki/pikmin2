

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
 * Address:	80202E14
 * Size:	000004
 */
void Game::PelletItem::Object::do_onInit((Game::CreatureInitArg*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80202E18
 * Size:	00005C
 */
void Game::PelletItem::Object::onBounce(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      subi      r3, r2, 0x4610
      lwz       r4, 0x35C(r31)
      lwz       r4, 0x40(r4)
      bl        -0x138778
      cmpwi     r3, 0
      bne-      .loc_0x48
      lwz       r3, 0x330(r31)
      li        r4, 0x3830
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0x48:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80202E74
 * Size:	000054
 */
void Game::PelletItem::Object::constructor(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x90
      bl        -0x1DEFE8
      mr.       r0, r3
      beq-      .loc_0x30
      mr        r4, r31
      bl        0x25F230
      mr        r0, r3

    .loc_0x30:
      stw       r0, 0x330(r31)
      mr        r4, r31
      lwz       r3, -0x6980(r13)
      bl        0x3EC70
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80202EC8
 * Size:	000074
 */
void Game::PelletItem::Object::sound_otakaraEventStart(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x330(r3)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0xD
      beq-      .loc_0x4C
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x1C50
      li        r4, 0x66
      addi      r5, r5, 0x1C60
      crclr     6, 0x6
      bl        -0x1D88D0

    .loc_0x4C:
      lwz       r3, 0x330(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
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
 * Address:	80202F3C
 * Size:	000074
 */
void Game::PelletItem::Object::sound_otakaraEventRestart(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x330(r3)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0xD
      beq-      .loc_0x4C
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x1C50
      li        r4, 0x6D
      addi      r5, r5, 0x1C60
      crclr     6, 0x6
      bl        -0x1D8944

    .loc_0x4C:
      lwz       r3, 0x330(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x8C(r12)
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
 * Address:	80202FB0
 * Size:	000074
 */
void Game::PelletItem::Object::sound_otakaraEventStop(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x330(r3)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0xD
      beq-      .loc_0x4C
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x1C50
      li        r4, 0x74
      addi      r5, r5, 0x1C60
      crclr     6, 0x6
      bl        -0x1D89B8

    .loc_0x4C:
      lwz       r3, 0x330(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x90(r12)
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
 * Address:	80203024
 * Size:	000074
 */
void Game::PelletItem::Object::sound_otakaraEventFinish(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x330(r3)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      cmpwi     r3, 0xD
      beq-      .loc_0x4C
      lis       r3, 0x8048
      lis       r5, 0x8048
      addi      r3, r3, 0x1C50
      li        r4, 0x7B
      addi      r5, r5, 0x1C60
      crclr     6, 0x6
      bl        -0x1D8A2C

    .loc_0x4C:
      lwz       r3, 0x330(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x94(r12)
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
 * Address:	80203098
 * Size:	0000B0
 */
void Game::PelletItem::Mgr::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      extsh.    r0, r4
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      beq-      .loc_0x28
      addi      r0, r30, 0xA0
      stw       r0, 0x4(r30)

    .loc_0x28:
      mr        r3, r30
      li        r4, 0
      li        r5, 0x4
      bl        -0x9770C
      addi      r31, r30, 0x54
      mr        r3, r31
      bl        0x20E2B8
      lis       r3, 0x804B
      lis       r4, 0x804C
      subi      r0, r3, 0x5324
      lis       r3, 0x804C
      stw       r0, 0x0(r31)
      subi      r0, r4, 0x1348
      subi      r4, r3, 0x1414
      li        r5, 0
      stw       r0, 0x0(r31)
      addi      r0, r4, 0x98
      addi      r3, r30, 0x70
      stb       r5, 0x18(r31)
      stw       r4, 0x0(r30)
      stw       r0, 0x54(r30)
      bl        0x19F4
      lis       r4, 0x804C
      mr        r3, r30
      subi      r4, r4, 0x15E8
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x98
      stw       r0, 0x54(r30)
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
 * Address:	80203148
 * Size:	00019C
 */
void __dt__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
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
      beq-      .loc_0x180
      lis       r3, 0x804C
      addic.    r0, r30, 0x70
      subi      r3, r3, 0x1414
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x98
      stw       r0, 0x54(r30)
      beq-      .loc_0xA0
      lis       r3, 0x804C
      addic.    r0, r30, 0x70
      subi      r3, r3, 0x14A0
      stw       r3, 0x70(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x8C(r30)
      beq-      .loc_0xA0
      lis       r3, 0x804C
      addic.    r0, r30, 0x70
      subi      r3, r3, 0x151C
      stw       r3, 0x70(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x8C(r30)
      beq-      .loc_0xA0
      lis       r3, 0x804C
      addic.    r0, r30, 0x70
      subi      r0, r3, 0x1348
      stw       r0, 0x70(r30)
      beq-      .loc_0xA0
      lis       r4, 0x804B
      addi      r3, r30, 0x70
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x70(r30)
      bl        0x20E3A4

    .loc_0xA0:
      addic.    r0, r30, 0x54
      beq-      .loc_0xD4
      lis       r3, 0x804C
      addic.    r0, r30, 0x54
      subi      r0, r3, 0x1348
      stw       r0, 0x54(r30)
      beq-      .loc_0xD4
      lis       r4, 0x804B
      addi      r3, r30, 0x54
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x54(r30)
      bl        0x20E370

    .loc_0xD4:
      cmplwi    r30, 0
      beq-      .loc_0x170
      lis       r3, 0x804B
      addic.    r0, r30, 0x18
      addi      r0, r3, 0x1CDC
      stw       r0, 0x0(r30)
      beq-      .loc_0x170
      lis       r3, 0x804B
      addic.    r0, r30, 0x18
      addi      r3, r3, 0x1EB4
      stw       r3, 0x18(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x34(r30)
      beq-      .loc_0x170
      lis       r3, 0x804B
      addic.    r0, r30, 0x18
      addi      r3, r3, 0x1E28
      stw       r3, 0x18(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x34(r30)
      beq-      .loc_0x170
      lis       r3, 0x804B
      addic.    r0, r30, 0x18
      addi      r3, r3, 0x1DAC
      stw       r3, 0x18(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x34(r30)
      beq-      .loc_0x170
      lis       r3, 0x804B
      addic.    r0, r30, 0x18
      addi      r0, r3, 0x1D80
      stw       r0, 0x18(r30)
      beq-      .loc_0x170
      lis       r4, 0x804B
      addi      r3, r30, 0x18
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x18(r30)
      bl        0x20E2D4

    .loc_0x170:
      extsh.    r0, r31
      ble-      .loc_0x180
      mr        r3, r30
      bl        -0x1DF210

    .loc_0x180:
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
 * Address:	802032E4
 * Size:	0000A0
 */
void MonoObjectMgr<Game::PelletItem::Object>::~MonoObjectMgr()
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
      beq-      .loc_0x84
      lis       r4, 0x804C
      subi      r4, r4, 0x14A0
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x2C
      stw       r0, 0x1C(r30)
      beq-      .loc_0x74
      lis       r4, 0x804C
      subi      r4, r4, 0x151C
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x2C
      stw       r0, 0x1C(r30)
      beq-      .loc_0x74
      lis       r4, 0x804C
      subi      r0, r4, 0x1348
      stw       r0, 0x0(r30)
      beq-      .loc_0x74
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x5324
      stw       r0, 0x0(r30)
      bl        0x20E234

    .loc_0x74:
      extsh.    r0, r31
      ble-      .loc_0x84
      mr        r3, r30
      bl        -0x1DF2B0

    .loc_0x84:
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
 * Address:	80203384
 * Size:	000070
 */
void Container<Game::PelletItem::Object>::~Container()
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
      lis       r4, 0x804C
      subi      r0, r4, 0x1348
      stw       r0, 0x0(r30)
      beq-      .loc_0x44
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x5324
      stw       r0, 0x0(r30)
      bl        0x20E1C4

    .loc_0x44:
      extsh.    r0, r31
      ble-      .loc_0x54
      mr        r3, r30
      bl        -0x1DF320

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
 * Address:	802033F4
 * Size:	000074
 */
void Game::PelletItem::Mgr::setupResources(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x8048
      li        r5, 0
      stw       r0, 0x14(r1)
      addi      r4, r4, 0x1C6C
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, -0x6514(r13)
      bl        0x21FF44
      mr        r3, r31
      li        r4, 0xB
      bl        0x1918
      lis       r4, 0x8048
      mr        r3, r31
      addi      r4, r4, 0x1C78
      bl        -0x97368
      addi      r3, r31, 0x18
      li        r4, 0x80
      bl        -0x847C
      lis       r4, 0x8048
      lwz       r3, -0x6514(r13)
      addi      r4, r4, 0x1C6C
      bl        0x21FF14
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80203468
 * Size:	000024
 */
void Game::PelletItem::Mgr::generatorNewPelletParm(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r3, 0x4
      stw       r0, 0x14(r1)
      bl        -0x1DF5D4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8020348C
 * Size:	000148
 */
void generatorBirth__Q34Game10PelletItem3MgrFR10Vector3<float> R10Vector3<float>
PQ24Game13GenPelletParm(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      stw       r0, 0x84(r1)
      stfd      f31, 0x70(r1)
      psq_st    f31,0x78(r1),0,0
      stw       r31, 0x6C(r1)
      stw       r30, 0x68(r1)
      stw       r29, 0x64(r1)
      mr        r31, r6
      mr        r29, r4
      lwz       r3, -0x6AD8(r13)
      mr        r30, r5
      lwz       r4, 0x0(r6)
      bl        -0x97738
      lis       r4, 0x804B
      li        r8, 0
      subi      r0, r4, 0x5D0C
      li        r5, -0x1
      lis       r4, 0x804B
      stw       r0, 0x38(r1)
      subi      r0, r4, 0x5D48
      li        r7, 0xFF
      li        r6, 0x1
      stw       r0, 0x38(r1)
      li        r0, 0x4
      addi      r4, r1, 0x38
      stb       r8, 0x54(r1)
      sth       r8, 0x4C(r1)
      stb       r7, 0x4E(r1)
      stw       r8, 0x50(r1)
      stb       r8, 0x4F(r1)
      stb       r6, 0x3C(r1)
      stb       r8, 0x55(r1)
      stw       r5, 0x5C(r1)
      stw       r5, 0x58(r1)
      stb       r8, 0x56(r1)
      stb       r8, 0x57(r1)
      lwz       r5, 0x40(r3)
      lwz       r3, -0x6CE0(r13)
      stw       r5, 0x40(r1)
      stb       r0, 0x4E(r1)
      lwz       r0, 0x0(r31)
      stw       r0, 0x48(r1)
      stw       r8, 0x50(r1)
      bl        -0x9607C
      mr.       r31, r3
      beq-      .loc_0x120
      lwz       r3, -0x6CF8(r13)
      cmplwi    r3, 0
      beq-      .loc_0xF4
      lwz       r12, 0x4(r3)
      mr        r4, r29
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      fmr       f31, f1
      mr        r3, r31
      bl        -0x9CB9C
      lfs       f0, -0x460C(r2)
      fmadds    f0, f0, f1, f31
      stfs      f0, 0x4(r29)

    .loc_0xF4:
      mr        r3, r31
      mr        r4, r29
      li        r5, 0
      bl        -0xC83E4
      mr        r4, r29
      mr        r5, r30
      addi      r3, r1, 0x8
      bl        0x2252EC
      mr        r3, r31
      addi      r4, r1, 0x8
      bl        -0x9B0DC

    .loc_0x120:
      mr        r3, r31
      psq_l     f31,0x78(r1),0,0
      lwz       r0, 0x84(r1)
      lfd       f31, 0x70(r1)
      lwz       r31, 0x6C(r1)
      lwz       r30, 0x68(r1)
      lwz       r29, 0x64(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	802035D4
 * Size:	000030
 */
void Game::PelletItem::Mgr::generatorWrite((Stream&, Game::GenPelletParm*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      lwz       r0, 0x0(r5)
      rlwinm    r0,r0,0,16,31
      extsh     r4, r0
      bl        0x212140
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80203604
 * Size:	000038
 */
void Game::PelletItem::Mgr::generatorRead((Stream&, Game::GenPelletParm*,
                                           unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r5
      bl        0x211148
      rlwinm    r0,r3,0,16,31
      stw       r0, 0x0(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8020363C
 * Size:	0001B4
 */
void Game::PelletItem::Mgr::__dt(void)
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
      beq-      .loc_0x198
      lis       r3, 0x804C
      subi      r3, r3, 0x15E8
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x98
      stw       r0, 0x54(r30)
      beq-      .loc_0x188
      lis       r3, 0x804C
      addic.    r0, r30, 0x70
      subi      r3, r3, 0x1414
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x98
      stw       r0, 0x54(r30)
      beq-      .loc_0xB8
      lis       r3, 0x804C
      addic.    r0, r30, 0x70
      subi      r3, r3, 0x14A0
      stw       r3, 0x70(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x8C(r30)
      beq-      .loc_0xB8
      lis       r3, 0x804C
      addic.    r0, r30, 0x70
      subi      r3, r3, 0x151C
      stw       r3, 0x70(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x8C(r30)
      beq-      .loc_0xB8
      lis       r3, 0x804C
      addic.    r0, r30, 0x70
      subi      r0, r3, 0x1348
      stw       r0, 0x70(r30)
      beq-      .loc_0xB8
      lis       r4, 0x804B
      addi      r3, r30, 0x70
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x70(r30)
      bl        0x20DE98

    .loc_0xB8:
      addic.    r0, r30, 0x54
      beq-      .loc_0xEC
      lis       r3, 0x804C
      addic.    r0, r30, 0x54
      subi      r0, r3, 0x1348
      stw       r0, 0x54(r30)
      beq-      .loc_0xEC
      lis       r4, 0x804B
      addi      r3, r30, 0x54
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x54(r30)
      bl        0x20DE64

    .loc_0xEC:
      cmplwi    r30, 0
      beq-      .loc_0x188
      lis       r3, 0x804B
      addic.    r0, r30, 0x18
      addi      r0, r3, 0x1CDC
      stw       r0, 0x0(r30)
      beq-      .loc_0x188
      lis       r3, 0x804B
      addic.    r0, r30, 0x18
      addi      r3, r3, 0x1EB4
      stw       r3, 0x18(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x34(r30)
      beq-      .loc_0x188
      lis       r3, 0x804B
      addic.    r0, r30, 0x18
      addi      r3, r3, 0x1E28
      stw       r3, 0x18(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x34(r30)
      beq-      .loc_0x188
      lis       r3, 0x804B
      addic.    r0, r30, 0x18
      addi      r3, r3, 0x1DAC
      stw       r3, 0x18(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x34(r30)
      beq-      .loc_0x188
      lis       r3, 0x804B
      addic.    r0, r30, 0x18
      addi      r0, r3, 0x1D80
      stw       r0, 0x18(r30)
      beq-      .loc_0x188
      lis       r4, 0x804B
      addi      r3, r30, 0x18
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x18(r30)
      bl        0x20DDC8

    .loc_0x188:
      extsh.    r0, r31
      ble-      .loc_0x198
      mr        r3, r30
      bl        -0x1DF71C

    .loc_0x198:
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
 * Address:	802037F0
 * Size:	000008
 */
void Game::PelletItem::Mgr::getMgrName(void)
{
    /*
    .loc_0x0:
      subi      r3, r2, 0x4608
      blr
    */
}

/*
 * --INFO--
 * Address:	802037F8
 * Size:	000008
 */
void Game::PelletItem::Mgr::getMgrID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x4
      blr
    */
}

/*
 * --INFO--
 * Address:	80203800
 * Size:	00000C
 */
void Game::PelletItem::Mgr::generatorLocalVersion(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x3030
      addi      r3, r3, 0x3030
      blr
    */
}

/*
 * --INFO--
 * Address:	8020380C
 * Size:	000088
 */
void ObjectMgr<Game::PelletItem::Object>::~ObjectMgr()
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
      beq-      .loc_0x6C
      lis       r4, 0x804C
      subi      r4, r4, 0x151C
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x2C
      stw       r0, 0x1C(r30)
      beq-      .loc_0x5C
      lis       r4, 0x804C
      subi      r0, r4, 0x1348
      stw       r0, 0x0(r30)
      beq-      .loc_0x5C
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x5324
      stw       r0, 0x0(r30)
      bl        0x20DD24

    .loc_0x5C:
      extsh.    r0, r31
      ble-      .loc_0x6C
      mr        r3, r30
      bl        -0x1DF7C0

    .loc_0x6C:
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
 * Address:	80203894
 * Size:	000008
 */
void Game::PelletItem::Object::getKind(void)
{
    /*
    .loc_0x0:
      li        r3, 0x4
      blr
    */
}

/*
 * --INFO--
 * Address:	8020389C
 * Size:	000004
 */
void onCreateModel__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object>
FPQ28SysShape5Model(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	802038A0
 * Size:	00002C
 */
void birth__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x70(r3)
      lwz       r12, 0x7C(r12)
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
 * Address:	802038CC
 * Size:	00002C
 */
void doAnimation__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x70(r3)
      lwz       r12, 0x64(r12)
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
 * Address:	802038F8
 * Size:	00002C
 */
void doEntry__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x70(r3)
      lwz       r12, 0x68(r12)
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
 * Address:	80203924
 * Size:	00002C
 */
void doSetView__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fi(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x70(r3)
      lwz       r12, 0x6C(r12)
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
 * Address:	80203950
 * Size:	00002C
 */
void doViewCalc__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x70(r3)
      lwz       r12, 0x70(r12)
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
 * Address:	8020397C
 * Size:	00002C
 */
void doSimulation__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object>
Ff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x70(r3)
      lwz       r12, 0x74(r12)
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
 * Address:	802039A8
 * Size:	00002C
 */
void doDirectDraw__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object>
FR8Graphics(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x70(r3)
      lwz       r12, 0x78(r12)
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
 * Address:	802039D4
 * Size:	000024
 */
void kill__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object>
FPQ24Game6Pellet(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r3, r3, 0x70
      stw       r0, 0x14(r1)
      bl        0xCC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	802039F8
 * Size:	00002C
 */
void getNext__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> FPv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x70(r3)
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
 * Address:	80203A24
 * Size:	00002C
 */
void getStart__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x70(r3)
      lwz       r12, 0x18(r12)
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
 * Address:	80203A50
 * Size:	000060
 */
void MonoObjectMgr<Game::PelletItem::Object>::birth()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x494
      cmpwi     r3, -0x1
      beq-      .loc_0x48
      lwz       r6, 0x28(r31)
      li        r0, 0
      lwz       r4, 0x2C(r31)
      mulli     r5, r3, 0x458
      stbx      r0, r4, r3
      add       r3, r6, r5
      lwz       r4, 0x20(r31)
      addi      r0, r4, 0x1
      stw       r0, 0x20(r31)
      b         .loc_0x4C

    .loc_0x48:
      li        r3, 0

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
 * Address:	80203AB0
 * Size:	000054
 */
void MonoObjectMgr<Game::PelletItem::Object>::kill(Game::PelletItem::Object*)
{
    /*
    .loc_0x0:
      lwz       r0, 0x24(r3)
      li        r6, 0
      li        r5, 0
      mtctr     r0
      cmpwi     r0, 0
      blelr-

    .loc_0x18:
      lwz       r0, 0x28(r3)
      add       r0, r0, r5
      cmplw     r0, r4
      bne-      .loc_0x44
      lwz       r4, 0x2C(r3)
      li        r0, 0x1
      stbx      r0, r4, r6
      lwz       r4, 0x20(r3)
      subi      r0, r4, 0x1
      stw       r0, 0x20(r3)
      blr

    .loc_0x44:
      addi      r5, r5, 0x458
      addi      r6, r6, 0x1
      bdnz+     .loc_0x18
      blr
    */
}

/*
 * --INFO--
 * Address:	80203B04
 * Size:	000040
 */
void MonoObjectMgr<Game::PelletItem::Object>::getNext(void*)
{
    /*
    .loc_0x0:
      lwz       r5, 0x24(r3)
      addi      r6, r4, 0x1
      sub       r0, r5, r6
      mtctr     r0
      cmpw      r6, r5
      bge-      .loc_0x38

    .loc_0x18:
      lwz       r4, 0x2C(r3)
      lbzx      r0, r4, r6
      cmplwi    r0, 0
      bne-      .loc_0x30
      mr        r3, r6
      blr

    .loc_0x30:
      addi      r6, r6, 0x1
      bdnz+     .loc_0x18

    .loc_0x38:
      mr        r3, r5
      blr
    */
}

/*
 * --INFO--
 * Address:	80203B44
 * Size:	000030
 */
void MonoObjectMgr<Game::PelletItem::Object>::getStart()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, -0x1
      stw       r0, 0x14(r1)
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
 * Address:	80203B74
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::getEnd()
{
    /*
    .loc_0x0:
      lwz       r3, 0x24(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80203B7C
 * Size:	000010
 */
void MonoObjectMgr<Game::PelletItem::Object>::getAt(int)
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x458
      lwz       r3, 0x28(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	80203B8C
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::getTo()
{
    /*
    .loc_0x0:
      lwz       r3, 0x24(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80203B94
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletItem::Object>::doAnimation()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r3
      b         .loc_0x58

    .loc_0x28:
      lwz       r3, 0x2C(r29)
      lbzx      r0, r3, r30
      cmplwi    r0, 0
      bne-      .loc_0x50
      lwz       r0, 0x28(r29)
      add       r3, r0, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl

    .loc_0x50:
      addi      r31, r31, 0x458
      addi      r30, r30, 0x1

    .loc_0x58:
      lwz       r0, 0x24(r29)
      cmpw      r30, r0
      blt+      .loc_0x28
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
 * Address:	80203C14
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletItem::Object>::doEntry()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r3
      b         .loc_0x58

    .loc_0x28:
      lwz       r3, 0x2C(r29)
      lbzx      r0, r3, r30
      cmplwi    r0, 0
      bne-      .loc_0x50
      lwz       r0, 0x28(r29)
      add       r3, r0, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl

    .loc_0x50:
      addi      r31, r31, 0x458
      addi      r30, r30, 0x1

    .loc_0x58:
      lwz       r0, 0x24(r29)
      cmpw      r30, r0
      blt+      .loc_0x28
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
 * Address:	80203C94
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletItem::Object>::doSetView(int)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      b         .loc_0x64

    .loc_0x30:
      lwz       r3, 0x2C(r28)
      lbzx      r0, r3, r30
      cmplwi    r0, 0
      bne-      .loc_0x5C
      lwz       r0, 0x28(r28)
      mr        r4, r29
      add       r3, r0, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl

    .loc_0x5C:
      addi      r31, r31, 0x458
      addi      r30, r30, 0x1

    .loc_0x64:
      lwz       r0, 0x24(r28)
      cmpw      r30, r0
      blt+      .loc_0x30
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
 * Address:	80203D24
 * Size:	000080
 */
void MonoObjectMgr<Game::PelletItem::Object>::doViewCalc()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r3
      b         .loc_0x58

    .loc_0x28:
      lwz       r3, 0x2C(r29)
      lbzx      r0, r3, r30
      cmplwi    r0, 0
      bne-      .loc_0x50
      lwz       r0, 0x28(r29)
      add       r3, r0, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x48(r12)
      mtctr     r12
      bctrl

    .loc_0x50:
      addi      r31, r31, 0x458
      addi      r30, r30, 0x1

    .loc_0x58:
      lwz       r0, 0x24(r29)
      cmpw      r30, r0
      blt+      .loc_0x28
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
 * Address:	80203DA4
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletItem::Object>::doSimulation(float)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stfd      f31, 0x18(r1)
      fmr       f31, f1
      stw       r31, 0x14(r1)
      li        r31, 0
      stw       r30, 0x10(r1)
      li        r30, 0
      stw       r29, 0xC(r1)
      mr        r29, r3
      b         .loc_0x64

    .loc_0x30:
      lwz       r3, 0x2C(r29)
      lbzx      r0, r3, r30
      cmplwi    r0, 0
      bne-      .loc_0x5C
      lwz       r0, 0x28(r29)
      fmr       f1, f31
      add       r3, r0, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x4C(r12)
      mtctr     r12
      bctrl

    .loc_0x5C:
      addi      r31, r31, 0x458
      addi      r30, r30, 0x1

    .loc_0x64:
      lwz       r0, 0x24(r29)
      cmpw      r30, r0
      blt+      .loc_0x30
      lwz       r0, 0x24(r1)
      lfd       f31, 0x18(r1)
      lwz       r31, 0x14(r1)
      lwz       r30, 0x10(r1)
      lwz       r29, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80203E34
 * Size:	000090
 */
void MonoObjectMgr<Game::PelletItem::Object>::doDirectDraw(Graphics&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      b         .loc_0x64

    .loc_0x30:
      lwz       r3, 0x2C(r28)
      lbzx      r0, r3, r30
      cmplwi    r0, 0
      bne-      .loc_0x5C
      lwz       r0, 0x28(r28)
      mr        r4, r29
      add       r3, r0, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x50(r12)
      mtctr     r12
      bctrl

    .loc_0x5C:
      addi      r31, r31, 0x458
      addi      r30, r30, 0x1

    .loc_0x64:
      lwz       r0, 0x24(r28)
      cmpw      r30, r0
      blt+      .loc_0x30
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
 * Address:	80203EC4
 * Size:	000030
 */
void MonoObjectMgr<Game::PelletItem::Object>::clearMgr()
{
    /*
    .loc_0x0:
      li        r0, 0
      li        r6, 0
      stw       r0, 0x20(r3)
      li        r5, 0x1
      b         .loc_0x20

    .loc_0x14:
      lwz       r4, 0x2C(r3)
      stbx      r5, r4, r6
      addi      r6, r6, 0x1

    .loc_0x20:
      lwz       r0, 0x24(r3)
      cmpw      r6, r0
      blt+      .loc_0x14
      blr
    */
}

/*
 * --INFO--
 * Address:	80203EF4
 * Size:	000004
 */
void MonoObjectMgr<Game::PelletItem::Object>::onAlloc()
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80203EF8
 * Size:	00003C
 */
void MonoObjectMgr<Game::PelletItem::Object>::getEmptyIndex()
{
    /*
    .loc_0x0:
      lwz       r0, 0x24(r3)
      li        r5, 0
      mtctr     r0
      cmpwi     r0, 0
      ble-      .loc_0x34

    .loc_0x14:
      lwz       r4, 0x2C(r3)
      lbzx      r0, r4, r5
      cmplwi    r0, 0x1
      bne-      .loc_0x2C
      mr        r3, r5
      blr

    .loc_0x2C:
      addi      r5, r5, 0x1
      bdnz+     .loc_0x14

    .loc_0x34:
      li        r3, -0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80203F34
 * Size:	000010
 */
void MonoObjectMgr<Game::PelletItem::Object>::get(void*)
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x458
      lwz       r3, 0x28(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	80203F44
 * Size:	00002C
 */
void Container<Game::PelletItem::Object>::getObject(void*)
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
 * Address:	80203F70
 * Size:	000008
 */
void Container<Game::PelletItem::Object>::getAt(int)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80203F78
 * Size:	000008
 */
void Container<Game::PelletItem::Object>::getTo()
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	80203F80
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletItem::Object>::doDirectDraw(Graphics&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x804B
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r5, r5, 0x1B74
      stw       r31, 0x1C(r1)
      cmplwi    r0, 0
      mr        r31, r4
      stw       r0, 0x14(r1)
      stw       r5, 0x8(r1)
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x50
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1C0

    .loc_0x50:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0xBC

    .loc_0x68:
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
      bne-      .loc_0x1C0
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0xBC:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x68
      b         .loc_0x1C0

    .loc_0xDC:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r4, r31
      lwz       r12, 0x50(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x130
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1C0

    .loc_0x130:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1A4

    .loc_0x150:
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
      bne-      .loc_0x1C0
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x1A4:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x150

    .loc_0x1C0:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0xDC
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80204174
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletItem::Object>::doSimulation(float)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r4, r4, 0x1B74
      stfd      f31, 0x18(r1)
      fmr       f31, f1
      cmplwi    r0, 0
      stw       r4, 0x8(r1)
      stw       r0, 0x14(r1)
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x50
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1C0

    .loc_0x50:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0xBC

    .loc_0x68:
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
      bne-      .loc_0x1C0
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0xBC:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x68
      b         .loc_0x1C0

    .loc_0xDC:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      fmr       f1, f31
      lwz       r12, 0x4C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x130
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1C0

    .loc_0x130:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1A4

    .loc_0x150:
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
      bne-      .loc_0x1C0
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x1A4:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x150

    .loc_0x1C0:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0xDC
      lwz       r0, 0x24(r1)
      lfd       f31, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80204368
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletItem::Object>::doViewCalc()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r4, r4, 0x1B74
      cmplwi    r0, 0
      stw       r0, 0x14(r1)
      stw       r4, 0x8(r1)
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x48
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1B4

    .loc_0x48:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0xB4

    .loc_0x60:
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
      bne-      .loc_0x1B4
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0xB4:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x60
      b         .loc_0x1B4

    .loc_0xD4:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      lwz       r12, 0x48(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x124
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1B4

    .loc_0x124:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x198

    .loc_0x144:
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
      bne-      .loc_0x1B4
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x198:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x144

    .loc_0x1B4:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0xD4
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8020454C
 * Size:	0001F4
 */
void ObjectMgr<Game::PelletItem::Object>::doSetView(int)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x804B
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r5, r5, 0x1B74
      stw       r31, 0x1C(r1)
      cmplwi    r0, 0
      mr        r31, r4
      stw       r0, 0x14(r1)
      stw       r5, 0x8(r1)
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x50
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1C0

    .loc_0x50:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0xBC

    .loc_0x68:
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
      bne-      .loc_0x1C0
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0xBC:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x68
      b         .loc_0x1C0

    .loc_0xDC:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r4, r31
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x130
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1C0

    .loc_0x130:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1A4

    .loc_0x150:
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
      bne-      .loc_0x1C0
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x1A4:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x150

    .loc_0x1C0:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0xDC
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80204740
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletItem::Object>::doEntry()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r4, r4, 0x1B74
      cmplwi    r0, 0
      stw       r0, 0x14(r1)
      stw       r4, 0x8(r1)
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x48
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1B4

    .loc_0x48:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0xB4

    .loc_0x60:
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
      bne-      .loc_0x1B4
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0xB4:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x60
      b         .loc_0x1B4

    .loc_0xD4:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x124
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1B4

    .loc_0x124:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x198

    .loc_0x144:
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
      bne-      .loc_0x1B4
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x198:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x144

    .loc_0x1B4:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0xD4
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80204924
 * Size:	0001E4
 */
void ObjectMgr<Game::PelletItem::Object>::doAnimation()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r4, r4, 0x1B74
      cmplwi    r0, 0
      stw       r0, 0x14(r1)
      stw       r4, 0x8(r1)
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x48
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1B4

    .loc_0x48:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0xB4

    .loc_0x60:
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
      bne-      .loc_0x1B4
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0xB4:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x60
      b         .loc_0x1B4

    .loc_0xD4:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x124
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1B4

    .loc_0x124:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x198

    .loc_0x144:
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
      bne-      .loc_0x1B4
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x198:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x144

    .loc_0x1B4:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0xD4
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80204B08
 * Size:	00009C
 */
void MonoObjectMgr<Game::PelletItem::Object>::MonoObjectMgr()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x20C874
      lis       r4, 0x804B
      lis       r3, 0x804C
      subi      r0, r4, 0x5324
      lis       r6, 0x804B
      stw       r0, 0x0(r31)
      subi      r0, r3, 0x1348
      lis       r4, 0x804C
      lis       r3, 0x804C
      stw       r0, 0x0(r31)
      li        r8, 0
      subi      r7, r4, 0x151C
      subi      r5, r3, 0x14A0
      stb       r8, 0x18(r31)
      subi      r0, r6, 0x4A10
      addi      r6, r7, 0x2C
      addi      r4, r5, 0x2C
      stw       r0, 0x1C(r31)
      li        r0, 0x1
      mr        r3, r31
      stw       r7, 0x0(r31)
      stw       r6, 0x1C(r31)
      stw       r5, 0x0(r31)
      stw       r4, 0x1C(r31)
      stb       r0, 0x18(r31)
      stw       r8, 0x24(r31)
      stw       r8, 0x20(r31)
      stw       r8, 0x28(r31)
      stw       r8, 0x2C(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80204BA4
 * Size:	000020
 */
void getFlag__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object>
FPQ24Game6Pellet(void)
{
    /*
    .loc_0x0:
      cmplwi    r4, 0
      beq-      .loc_0x18
      lwz       r3, 0x9C(r3)
      lwz       r0, 0x440(r4)
      lbzx      r3, r3, r0
      blr

    .loc_0x18:
      li        r3, -0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80204BC4
 * Size:	00001C
 */
void setFromTeki__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object>
FPQ24Game6Pellet(void)
{
    /*
    .loc_0x0:
      cmplwi    r4, 0
      beqlr-
      lwz       r3, 0x9C(r3)
      li        r5, 0x65
      lwz       r0, 0x440(r4)
      stbx      r5, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	80204BE0
 * Size:	00001C
 */
void setRevival__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object>
FPQ24Game6Pellet(void)
{
    /*
    .loc_0x0:
      cmplwi    r4, 0
      beqlr-
      lwz       r3, 0x9C(r3)
      li        r5, 0x64
      lwz       r0, 0x440(r4)
      stbx      r5, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	80204BFC
 * Size:	00001C
 */
void setComeAlive__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object>
FPQ24Game6Pellet(void)
{
    /*
    .loc_0x0:
      cmplwi    r4, 0
      beqlr-
      lwz       r3, 0x9C(r3)
      li        r5, 0
      lwz       r0, 0x440(r4)
      stbx      r5, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	80204C18
 * Size:	000010
 */
void setComeAlive__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object>
Fi(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x9C(r3)
      li        r0, 0
      stbx      r0, r3, r4
      blr
    */
}

/*
 * --INFO--
 * Address:	80204C28
 * Size:	00002C
 */
void getEnd__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x70(r3)
      lwz       r12, 0x1C(r12)
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
 * Address:	80204C54
 * Size:	00002C
 */
void get__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> FPv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwzu      r12, 0x70(r3)
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
 * Address:	80204C80
 * Size:	00002C
 */
void getObjectPtr__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object>
FPv(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC4(r12)
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
 * Address:	80204CAC
 * Size:	000090
 */
void birthFromTeki__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object>
FPQ24Game12PelletConfig(void)
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
      b         .loc_0x64

    .loc_0x28:
      lwz       r3, 0x9C(r29)
      lbzx      r0, r3, r31
      cmplwi    r0, 0x65
      bne-      .loc_0x60
      addi      r3, r29, 0x70
      mr        r4, r31
      lwz       r12, 0x70(r29)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x35C(r3)
      cmplw     r0, r30
      bne-      .loc_0x60
      b         .loc_0x74

    .loc_0x60:
      addi      r31, r31, 0x1

    .loc_0x64:
      lwz       r0, 0x94(r29)
      cmpw      r31, r0
      blt+      .loc_0x28
      li        r3, 0

    .loc_0x74:
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
 * Address:	80204D3C
 * Size:	000080
 */
void alloc__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fi(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      addi      r3, r30, 0x70
      bl        0xC8
      mr        r3, r30
      bl        .loc_0x80
      li        r31, 0
      b         .loc_0x5C

    .loc_0x30:
      addi      r3, r30, 0x70
      mr        r4, r31
      lwz       r12, 0x70(r30)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      addi      r31, r31, 0x1

    .loc_0x5C:
      lwz       r0, 0x94(r30)
      cmpw      r31, r0
      blt+      .loc_0x30
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x80:
    */
}

/*
 * --INFO--
 * Address:	80204DBC
 * Size:	000064
 */
void onAlloc__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
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
      addi      r3, r30, 0x70
      mr        r4, r31
      lwz       r12, 0x70(r30)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      stw       r31, 0x440(r3)
      addi      r31, r31, 0x1

    .loc_0x40:
      lwz       r0, 0x94(r30)
      cmpw      r31, r0
      blt+      .loc_0x20
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
 * Address:	80204E20
 * Size:	000188
 */
void MonoObjectMgr<Game::PelletItem::Object>::alloc(int)
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
      stw       r29, 0x14(r1)
      mr        r29, r31
      mulli     r3, r29, 0x458
      stw       r28, 0x10(r1)
      addi      r3, r3, 0x10
      bl        -0x1E0EA4
      lis       r4, 0x8020
      mr        r7, r29
      addi      r4, r4, 0x4FA8
      li        r5, 0
      li        r6, 0x458
      bl        -0x143478
      stw       r3, 0x28(r30)
      li        r0, 0
      mr        r3, r29
      stw       r31, 0x24(r30)
      stw       r0, 0x20(r30)
      bl        -0x1E0ED4
      cmpwi     r31, 0
      stw       r3, 0x2C(r30)
      li        r11, 0
      ble-      .loc_0x120
      cmpwi     r31, 0x8
      subi      r3, r31, 0x8
      ble-      .loc_0xFC
      addi      r0, r3, 0x7
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmpwi     r3, 0
      ble-      .loc_0xFC

    .loc_0x94:
      lwz       r3, 0x2C(r30)
      li        r10, 0x1
      addi      r8, r11, 0x1
      addi      r7, r11, 0x2
      stbx      r10, r3, r11
      addi      r6, r11, 0x3
      addi      r5, r11, 0x4
      addi      r4, r11, 0x5
      lwz       r9, 0x2C(r30)
      addi      r3, r11, 0x6
      addi      r0, r11, 0x7
      addi      r11, r11, 0x8
      stbx      r10, r9, r8
      lwz       r8, 0x2C(r30)
      stbx      r10, r8, r7
      lwz       r7, 0x2C(r30)
      stbx      r10, r7, r6
      lwz       r6, 0x2C(r30)
      stbx      r10, r6, r5
      lwz       r5, 0x2C(r30)
      stbx      r10, r5, r4
      lwz       r4, 0x2C(r30)
      stbx      r10, r4, r3
      lwz       r3, 0x2C(r30)
      stbx      r10, r3, r0
      bdnz+     .loc_0x94

    .loc_0xFC:
      sub       r0, r31, r11
      li        r4, 0x1
      mtctr     r0
      cmpw      r11, r31
      bge-      .loc_0x120

    .loc_0x110:
      lwz       r3, 0x2C(r30)
      stbx      r4, r3, r11
      addi      r11, r11, 0x1
      bdnz+     .loc_0x110

    .loc_0x120:
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl
      li        r28, 0
      li        r29, 0
      b         .loc_0x160

    .loc_0x140:
      lwz       r0, 0x28(r30)
      add       r3, r0, r29
      lwz       r12, 0x0(r3)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      addi      r29, r29, 0x458
      addi      r28, r28, 0x1

    .loc_0x160:
      cmpw      r28, r31
      blt+      .loc_0x140
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
 * Address:	80204FA8
 * Size:	00004C
 */
void Game::PelletItem::Object::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x9E93C
      lis       r4, 0x804C
      mr        r3, r31
      subi      r5, r4, 0x131C
      stw       r5, 0x0(r31)
      addi      r4, r5, 0x1B4
      addi      r0, r5, 0x1C0
      stw       r4, 0x314(r31)
      stw       r0, 0x318(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80204FF4
 * Size:	000008
 */
void @84 @__dt__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x54
      b         -0x1EB0
    */
}

/*
 * --INFO--
 * Address:	80204FFC
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::@28 @resetMgr()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x92C48
    */
}

/*
 * --INFO--
 * Address:	80205004
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::@28 @doDirectDraw(Graphics&)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x11D4
    */
}

/*
 * --INFO--
 * Address:	8020500C
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::@28 @doSimulation(float)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x126C
    */
}

/*
 * --INFO--
 * Address:	80205014
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::@28 @doViewCalc()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x12F4
    */
}

/*
 * --INFO--
 * Address:	8020501C
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::@28 @doSetView(int)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x138C
    */
}

/*
 * --INFO--
 * Address:	80205024
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::@28 @doEntry()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x1414
    */
}

/*
 * --INFO--
 * Address:	8020502C
 * Size:	000008
 */
void MonoObjectMgr<Game::PelletItem::Object>::@28 @doAnimation()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x149C
    */
}

/*
 * --INFO--
 * Address:	80205034
 * Size:	000008
 */
void ObjectMgr<Game::PelletItem::Object>::@28 @doDirectDraw(Graphics&)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x10B8
    */
}

/*
 * --INFO--
 * Address:	8020503C
 * Size:	000008
 */
void ObjectMgr<Game::PelletItem::Object>::@28 @doSimulation(float)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0xECC
    */
}

/*
 * --INFO--
 * Address:	80205044
 * Size:	000008
 */
void ObjectMgr<Game::PelletItem::Object>::@28 @doViewCalc()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0xCE0
    */
}

/*
 * --INFO--
 * Address:	8020504C
 * Size:	000008
 */
void ObjectMgr<Game::PelletItem::Object>::@28 @doSetView(int)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0xB04
    */
}

/*
 * --INFO--
 * Address:	80205054
 * Size:	000008
 */
void ObjectMgr<Game::PelletItem::Object>::@28 @doEntry()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x918
    */
}

/*
 * --INFO--
 * Address:	8020505C
 * Size:	000008
 */
void ObjectMgr<Game::PelletItem::Object>::@28 @doAnimation()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x73C
    */
}

/*
 * --INFO--
 * Address:	80205064
 * Size:	000008
 */
void @84 @getEnd__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x54
      b         -0x440
    */
}

/*
 * --INFO--
 * Address:	8020506C
 * Size:	000008
 */
void @84 @getStart__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object>
Fv(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x54
      b         -0x164C
    */
}

/*
 * --INFO--
 * Address:	80205074
 * Size:	000008
 */
void @84 @getNext__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object>
FPv(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x54
      b         -0x1680
    */
}

/*
 * --INFO--
 * Address:	8020507C
 * Size:	000008
 */
void @84 @get__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> FPv(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x54
      b         -0x42C
    */
}

/*
 * --INFO--
 * Address:	80205084
 * Size:	000008
 */
void @84 @Game::PelletItem::Mgr::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x54
      b         -0x1A4C
    */
}
