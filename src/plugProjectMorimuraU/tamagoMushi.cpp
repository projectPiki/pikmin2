

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
 * Address:	8036EBA8
 * Size:	000020
 */
void Game::TamagoMushi::Obj::setParameters(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x26BFDC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036EBC8
 * Size:	000020
 */
void birth__Q34Game11TamagoMushi3ObjFR10Vector3<float> f(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x26C1D4
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036EBE8
 * Size:	0002D0
 */
void Game::TamagoMushi::Obj::onInit((Game::CreatureInitArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      lis       r5, 0x8049
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      addi      r31, r5, 0x24E8
      stw       r30, 0x48(r1)
      mr        r30, r3
      bl        -0x26D1B0
      lwz       r3, 0x1E0(r30)
      li        r0, 0
      rlwinm    r3,r3,0,25,23
      stw       r3, 0x1E0(r30)
      lwz       r3, 0x1E0(r30)
      rlwinm    r3,r3,0,29,27
      stw       r3, 0x1E0(r30)
      lwz       r3, 0x1E0(r30)
      rlwinm    r3,r3,0,24,22
      stw       r3, 0x1E0(r30)
      stw       r0, 0x2BC(r30)
      stb       r0, 0x2F0(r30)
      stw       r0, 0x2F4(r30)
      stw       r0, 0x304(r30)
      lfs       f0, 0x18C(r30)
      stfs      f0, 0x2E0(r30)
      lfs       f0, 0x190(r30)
      stfs      f0, 0x2E4(r30)
      lfs       f0, 0x194(r30)
      stfs      f0, 0x2E8(r30)
      bl        -0x2A56BC
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x1C(r1)
      lwz       r3, 0xC0(r30)
      stw       r0, 0x18(r1)
      lfd       f1, 0x770(r2)
      lfd       f0, 0x18(r1)
      lfs       f3, 0x750(r2)
      fsubs     f4, f0, f1
      lfs       f1, 0x758(r2)
      lfs       f0, 0x754(r2)
      lfs       f2, 0x81C(r3)
      fdivs     f3, f4, f3
      fmadds    f0, f1, f3, f0
      fmuls     f0, f2, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      stw       r0, 0x2C0(r30)
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0xE8
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x4
      bne-      .loc_0xE8
      lwz       r0, 0x2C0(r30)
      mulli     r0, r0, 0x5
      stw       r0, 0x2C0(r30)

    .loc_0xE8:
      bl        -0x2A5730
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x24(r1)
      lfd       f3, 0x770(r2)
      stw       r0, 0x20(r1)
      lfs       f2, 0x750(r2)
      lfd       f0, 0x20(r1)
      lfs       f1, 0x760(r2)
      fsubs     f3, f0, f3
      lfs       f0, 0x75C(r2)
      fdivs     f2, f3, f2
      fmadds    f0, f1, f2, f0
      stfs      f0, 0x2C4(r30)
      bl        -0x2A5768
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x1C(r1)
      lfd       f3, 0x770(r2)
      stw       r0, 0x18(r1)
      lfs       f2, 0x750(r2)
      lfd       f0, 0x18(r1)
      lfs       f1, 0x760(r2)
      fsubs     f3, f0, f3
      lfs       f0, 0x75C(r2)
      fdivs     f2, f3, f2
      fmadds    f0, f1, f2, f0
      stfs      f0, 0x2C8(r30)
      bl        -0x2A57A0
      xoris     r0, r3, 0x8000
      lis       r3, 0x4330
      stw       r0, 0x2C(r1)
      li        r0, 0
      lfd       f1, 0x770(r2)
      stw       r3, 0x28(r1)
      lfs       f3, 0x750(r2)
      lfd       f0, 0x28(r1)
      lfs       f2, 0x75C(r2)
      fsubs     f4, f0, f1
      lfs       f1, 0x760(r2)
      lfs       f0, 0x764(r2)
      fdivs     f3, f4, f3
      fmadds    f1, f2, f3, f1
      stfs      f1, 0x2CC(r30)
      stfs      f0, 0x2FC(r30)
      stb       r0, 0x300(r30)
      lfs       f4, 0x1FC(r30)
      fmr       f1, f4
      fcmpo     cr0, f4, f0
      bge-      .loc_0x1B4
      fneg      f1, f4

    .loc_0x1B4:
      lfs       f2, 0x768(r2)
      lis       r3, 0x8050
      lfs       f0, 0x764(r2)
      addi      r4, r3, 0x71A0
      fmuls     f1, f1, f2
      fcmpo     cr0, f4, f0
      fctiwz    f0, f1
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f3, 0x4(r3)
      bge-      .loc_0x20C
      lfs       f0, 0x76C(r2)
      fmuls     f0, f4, f0
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r0, 0x3C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f1, f0
      b         .loc_0x224

    .loc_0x20C:
      fmuls     f0, f4, f2
      fctiwz    f0, f0
      stfd      f0, 0x40(r1)
      lwz       r0, 0x44(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f1, r4, r0

    .loc_0x224:
      lfs       f0, 0x764(r2)
      mr        r3, r30
      stfs      f1, 0x8(r1)
      addi      r4, r1, 0x8
      stfs      f0, 0xC(r1)
      stfs      f3, 0x10(r1)
      bl        0x1128
      li        r0, 0
      stb       r0, 0x1F3(r30)
      lwz       r0, 0x174(r30)
      cmplwi    r0, 0
      bne-      .loc_0x268
      addi      r3, r31, 0xC
      addi      r5, r31, 0x1C
      li        r4, 0x51
      crclr     6, 0x6
      bl        -0x34480C

    .loc_0x268:
      lwz       r3, 0x174(r30)
      addi      r4, r31, 0x28
      bl        0xD018C
      stw       r3, 0x2F8(r30)
      lwz       r0, 0x2F8(r30)
      cmplwi    r0, 0
      bne-      .loc_0x298
      addi      r3, r31, 0xC
      addi      r5, r31, 0x1C
      li        r4, 0x54
      crclr     6, 0x6
      bl        -0x34483C

    .loc_0x298:
      lwz       r3, 0x308(r30)
      mr        r4, r30
      li        r5, 0x2
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
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
 * Address:	8036EEB8
 * Size:	00013C
 */
void Game::TamagoMushi::Obj::__ct(void)
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
      addi      r0, r31, 0x30C
      lis       r3, 0x804B
      stw       r0, 0x17C(r31)
      subi      r3, r3, 0x5988
      li        r0, 0
      stw       r3, 0x30C(r31)
      stw       r0, 0x310(r31)
      stw       r0, 0x314(r31)

    .loc_0x40:
      mr        r3, r31
      li        r4, 0
      bl        -0x26DB60
      lis       r3, 0x804E
      addi      r4, r31, 0x30C
      addi      r3, r3, 0x35FC
      li        r0, 0
      stw       r3, 0x0(r31)
      addi      r5, r3, 0x1B0
      addi      r6, r3, 0x2FC
      li        r3, 0x2C
      stw       r5, 0x178(r31)
      lwz       r5, 0x17C(r31)
      stw       r6, 0x0(r5)
      lwz       r5, 0x17C(r31)
      sub       r4, r4, r5
      stw       r4, 0xC(r5)
      stw       r0, 0x2F8(r31)
      stw       r0, 0x308(r31)
      bl        -0x34B0A0
      mr.       r30, r3
      beq-      .loc_0xD8
      bl        -0x2475DC
      lis       r3, 0x804E
      lis       r4, 0x804B
      addi      r0, r3, 0x34B0
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

    .loc_0xD8:
      stw       r30, 0x184(r31)
      li        r3, 0x1C
      bl        -0x34B0F4
      mr.       r4, r3
      beq-      .loc_0x10C
      lis       r5, 0x804B
      lis       r3, 0x804E
      subi      r0, r5, 0x680
      li        r5, -0x1
      stw       r0, 0x0(r4)
      addi      r0, r3, 0x348C
      stw       r5, 0x18(r4)
      stw       r0, 0x0(r4)

    .loc_0x10C:
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
 * Address:	8036EFF4
 * Size:	00004C
 */
void Game::TamagoMushi::Obj::setFSM((Game::TamagoMushi::FSM*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r4, 0x308(r3)
      mr        r4, r31
      lwz       r3, 0x308(r3)
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
 * Address:	8036F040
 * Size:	0000A0
 */
void Game::TamagoMushi::Obj::doUpdate(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0x1E0(r3)
      rlwinm.   r0,r0,0,22,22
      bne-      .loc_0x8C
      lwz       r3, 0x308(r31)
      mr        r4, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        -0x267C88
      cmpwi     r3, 0
      beq-      .loc_0x50
      cmpwi     r3, 0x1
      bne-      .loc_0x8C

    .loc_0x50:
      lwz       r3, 0x2BC(r31)
      addi      r0, r3, 0x1
      stw       r0, 0x2BC(r31)
      lwz       r3, 0x2BC(r31)
      lwz       r0, 0x2C0(r31)
      cmpw      r3, r0
      ble-      .loc_0x8C
      lwz       r3, 0x308(r31)
      mr        r4, r31
      li        r5, 0x3
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x8C:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036F0E0
 * Size:	000158
 */
void Game::TamagoMushi::Obj::doAnimationCullingOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      li        r0, 0
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      mr        r30, r3
      lwz       r4, 0x188(r3)
      stb       r0, 0x24(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1D8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x17C(r30)
      lwz       r0, 0x4(r3)
      cmplwi    r0, 0
      beq-      .loc_0xBC
      addi      r4, r30, 0x138
      bl        -0x209388
      lfs       f1, 0x168(r30)
      addi      r3, r1, 0x14
      lfs       f2, 0x16C(r30)
      lfs       f3, 0x170(r30)
      bl        -0x284968
      addi      r3, r30, 0x138
      addi      r4, r1, 0x14
      mr        r5, r3
      bl        -0x284E4C
      lfs       f0, 0x144(r30)
      mr        r3, r30
      addi      r4, r1, 0x8
      stfs      f0, 0x8(r1)
      lfs       f0, 0x154(r30)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x164(r30)
      stfs      f0, 0x10(r1)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x70(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      addi      r4, r1, 0x8
      lwz       r12, 0x0(r30)
      lwz       r12, 0x74(r12)
      mtctr     r12
      bctrl
      b         .loc_0xCC

    .loc_0xBC:
      addi      r3, r30, 0x138
      addi      r4, r30, 0x18C
      addi      r5, r30, 0x1A4
      bl        0xB96E0

    .loc_0xCC:
      lwz       r4, 0x174(r30)
      addi      r3, r30, 0x138
      lwz       r4, 0x8(r4)
      addi      r4, r4, 0x24
      bl        -0x284EF0
      lwz       r3, 0xC0(r30)
      lbz       r0, 0x923(r3)
      cmplwi    r0, 0
      beq-      .loc_0x120
      mr        r3, r30
      bl        -0x267E8C
      cmpwi     r3, 0x2
      bne-      .loc_0x120
      lwz       r4, 0x174(r30)
      mr        r3, r30
      lwz       r31, 0x8(r4)
      bl        -0x269F80
      lwz       r3, 0x180(r30)
      mr        r4, r31
      bl        -0x1420
      b         .loc_0x138

    .loc_0x120:
      lwz       r3, 0x174(r30)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl

    .loc_0x138:
      lwz       r3, 0x114(r30)
      bl        -0x239780
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
 * Address:	8036F238
 * Size:	000004
 */
void Game::TamagoMushi::Obj::doDirectDraw((Graphics&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8036F23C
 * Size:	000020
 */
void Game::TamagoMushi::Obj::doDebugDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x2693DC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036F25C
 * Size:	0000DC
 */
void Game::TamagoMushi::Obj::pressCallBack((Game::Creature*, float, CollPart*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      beq-      .loc_0xC4
      mr        r3, r4
      lwz       r12, 0x0(r4)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xC4
      lwz       r0, 0x1E0(r31)
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0x78
      lwz       r3, 0x24C(r31)
      lbz       r0, 0x50(r3)
      rlwinm.   r0,r0,0,29,29
      beq-      .loc_0x70
      mr        r3, r31
      bl        0x618
      mr        r3, r31
      li        r4, 0
      bl        -0x2341D0
      li        r3, 0x1
      b         .loc_0xC8

    .loc_0x70:
      li        r3, 0
      b         .loc_0xC8

    .loc_0x78:
      mr        r3, r31
      bl        -0x267EE4
      cmpwi     r3, 0x4
      beq-      .loc_0xC4
      lwz       r3, 0x308(r31)
      mr        r4, r31
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x1E0(r31)
      li        r3, 0x1
      lfs       f0, 0x764(r2)
      ori       r0, r0, 0x800
      stw       r0, 0x1E0(r31)
      stfs      f0, 0x200(r31)
      b         .loc_0xC8

    .loc_0xC4:
      li        r3, 0

    .loc_0xC8:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036F338
 * Size:	0000BC
 */
void bombCallBack__Q34Game11TamagoMushi3ObjFPQ24Game8CreatureR10Vector3<float>
f(void)
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
      stw       r29, 0x14(r1)
      fmr       f31, f1
      mr        r29, r3
      mr        r30, r4
      mr        r31, r5
      bl        -0x267F74
      cmpwi     r3, 0x4
      beq-      .loc_0x94
      fmr       f1, f31
      mr        r3, r29
      mr        r4, r30
      mr        r5, r31
      bl        -0x268DBC
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x94
      lwz       r3, 0x308(r29)
      mr        r4, r29
      li        r5, 0x4
      li        r6, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x1E0(r29)
      li        r3, 0x1
      lfs       f0, 0x764(r2)
      ori       r0, r0, 0x800
      stw       r0, 0x1E0(r29)
      stfs      f0, 0x200(r29)
      b         .loc_0x98

    .loc_0x94:
      li        r3, 0

    .loc_0x98:
      psq_l     f31,0x28(r1),0,0
      lwz       r0, 0x34(r1)
      lfd       f31, 0x20(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8036F3F4
 * Size:	000134
 */
void Game::TamagoMushi::Obj::damageCallBack((Game::Creature*, float, CollPart*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      mr        r30, r5
      stw       r29, 0x24(r1)
      mr        r29, r4
      stw       r28, 0x20(r1)
      mr        r28, r3
      bl        -0x268028
      lwz       r0, 0x1E0(r28)
      mr        r31, r3
      rlwinm.   r0,r0,0,22,22
      beq-      .loc_0x70
      lwz       r3, 0x304(r28)
      addi      r0, r3, 0x1
      stw       r0, 0x304(r28)
      lwz       r0, 0x304(r28)
      cmpwi     r0, 0x4
      ble-      .loc_0x68
      mr        r3, r28
      bl        0x480
      mr        r3, r28
      li        r4, 0
      bl        -0x234368

    .loc_0x68:
      li        r3, 0x1
      b         .loc_0x114

    .loc_0x70:
      lfs       f1, 0x764(r2)
      mr        r3, r28
      mr        r4, r29
      mr        r5, r30
      bl        -0x269408
      cmpwi     r31, 0x2
      beq-      .loc_0x110
      cmpwi     r31, 0x4
      beq-      .loc_0x110
      cmplwi    r29, 0
      beq-      .loc_0x110
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x110
      mr        r3, r29
      bl        -0x22657C
      cmpwi     r3, 0x15
      beq-      .loc_0x110
      cmpwi     r3, 0x6
      beq-      .loc_0x110
      lwz       r6, 0xC0(r28)
      lis       r5, 0x804B
      lis       r4, 0x804B
      mr        r3, r29
      lfs       f0, 0x944(r6)
      subi      r5, r5, 0x5D00
      addi      r0, r4, 0x4854
      addi      r4, r1, 0x8
      stw       r5, 0x8(r1)
      stw       r28, 0xC(r1)
      stw       r0, 0x8(r1)
      stfs      f0, 0x10(r1)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl

    .loc_0x110:
      li        r3, 0

    .loc_0x114:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r29, 0x24(r1)
      lwz       r28, 0x20(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8036F528
 * Size:	0000F8
 */
void Game::TamagoMushi::Obj::collisionCallback((Game::CollEvent&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      stw       r30, 0x28(r1)
      mr        r30, r4
      stw       r29, 0x24(r1)
      mr        r29, r3
      lwz       r0, 0x1E0(r3)
      rlwinm.   r0,r0,0,22,22
      bne-      .loc_0xDC
      bl        -0x268160
      mr        r31, r3
      mr        r3, r29
      lwz       r12, 0x0(r29)
      mr        r4, r30
      lwz       r12, 0x240(r12)
      mtctr     r12
      bctrl
      lwz       r30, 0x0(r30)
      cmplwi    r30, 0
      beq-      .loc_0xDC
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xDC
      cmpwi     r31, 0x2
      beq-      .loc_0xDC
      mr        r3, r30
      bl        -0x226674
      cmpwi     r3, 0x15
      beq-      .loc_0xDC
      mr        r3, r30
      bl        -0x226684
      cmpwi     r3, 0x6
      beq-      .loc_0xDC
      lwz       r6, 0xC0(r29)
      lis       r5, 0x804B
      lis       r4, 0x804B
      mr        r3, r30
      lfs       f0, 0x944(r6)
      subi      r5, r5, 0x5D00
      addi      r0, r4, 0x4854
      addi      r4, r1, 0x8
      stw       r5, 0x8(r1)
      stw       r29, 0xC(r1)
      stw       r0, 0x8(r1)
      stfs      f0, 0x10(r1)
      lwz       r12, 0x0(r30)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl

    .loc_0xDC:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      lwz       r29, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8036F620
 * Size:	000178
 */
void Game::TamagoMushi::Obj::bounceCallback((Sys::Triangle*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      mr        r31, r3
      lbz       r0, 0x300(r3)
      cmplwi    r0, 0
      beq-      .loc_0x15C
      bl        -0x2A60A0
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x1C(r1)
      lfs       f5, 0x1FC(r31)
      stw       r0, 0x18(r1)
      lfd       f1, 0x770(r2)
      fmr       f4, f5
      lfd       f0, 0x18(r1)
      lfs       f2, 0x750(r2)
      fsubs     f3, f0, f1
      lfs       f0, 0x764(r2)
      lwz       r4, 0xC0(r31)
      lfs       f1, 0x760(r2)
      fcmpo     cr0, f5, f0
      fdivs     f2, f3, f2
      lfs       f0, 0x75C(r2)
      lfs       f7, 0x938(r4)
      fmadds    f6, f1, f2, f0
      bge-      .loc_0x74
      fneg      f4, f5

    .loc_0x74:
      lfs       f3, 0x768(r2)
      lis       r3, 0x8050
      lfs       f1, 0x934(r4)
      addi      r4, r3, 0x71A0
      fmuls     f2, f4, f3
      lfs       f0, 0x764(r2)
      fmuls     f1, f1, f6
      fcmpo     cr0, f5, f0
      fctiwz    f0, f2
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r4, r0
      lfs       f0, 0x4(r3)
      fmuls     f2, f7, f0
      bge-      .loc_0xD8
      lfs       f0, 0x76C(r2)
      fmuls     f0, f5, f0
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f0, f0
      b         .loc_0xF0

    .loc_0xD8:
      fmuls     f0, f5, f3
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0

    .loc_0xF0:
      fmuls     f0, f7, f0
      stfs      f1, 0xC(r1)
      mr        r3, r31
      addi      r4, r1, 0x8
      stfs      f2, 0x10(r1)
      stfs      f0, 0x8(r1)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x8(r1)
      li        r0, 0
      lfs       f1, 0x778(r2)
      mr        r3, r31
      stfs      f0, 0x1D4(r31)
      lfs       f0, 0x764(r2)
      lfs       f2, 0xC(r1)
      stfs      f2, 0x1D8(r31)
      lfs       f2, 0x10(r1)
      stfs      f2, 0x1DC(r31)
      lfs       f2, 0x190(r31)
      fadds     f1, f2, f1
      stfs      f1, 0x190(r31)
      stb       r0, 0x2F0(r31)
      stfs      f0, 0x1AC(r31)
      stfs      f0, 0x1A4(r31)
      bl        0xB1C

    .loc_0x15C:
      li        r0, 0
      stb       r0, 0x300(r31)
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	8036F798
 * Size:	00002C
 */
void Game::TamagoMushi::Obj::hipdropCallBack((Game::Creature*, float,
                                              CollPart*))
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
 * Address:	8036F7C4
 * Size:	000030
 */
void Game::TamagoMushi::Obj::earthquakeCallBack((Game::Creature*, float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
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
 * Address:	8036F7F4
 * Size:	0000A8
 */
void Game::TamagoMushi::Obj::getShadowParam((Game::ShadowParam&))
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
      lwz       r3, 0x2F8(r3)
      bl        0xBA08C
      lfs       f2, 0x2C(r3)
      lfs       f1, 0x1C(r3)
      lfs       f0, 0xC(r3)
      stfs      f0, 0x0(r31)
      stfs      f1, 0x4(r31)
      stfs      f2, 0x8(r31)
      lwz       r3, 0x17C(r30)
      lwz       r0, 0x4(r3)
      cmplwi    r0, 0
      bne-      .loc_0x5C
      mr        r3, r30
      bl        -0x268450
      cmpwi     r3, 0x4
      bne-      .loc_0x6C

    .loc_0x5C:
      lfs       f1, 0x77C(r2)
      lfs       f0, 0x190(r30)
      fadds     f0, f1, f0
      stfs      f0, 0x4(r31)

    .loc_0x6C:
      lfs       f2, 0x764(r2)
      lfs       f0, 0x780(r2)
      stfs      f2, 0xC(r31)
      lfs       f1, 0x784(r2)
      stfs      f0, 0x10(r31)
      lfs       f0, 0x788(r2)
      stfs      f2, 0x14(r31)
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
 * Address:	8036F89C
 * Size:	000030
 */
void Game::TamagoMushi::Obj::needShadow(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x268498
      rlwinm    r3,r3,0,24,31
      neg       r0, r3
      or        r0, r0, r3
      rlwinm    r3,r0,1,31,31
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036F8CC
 * Size:	000208
 */
void Game::TamagoMushi::Obj::genItem(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      mr        r31, r3
      stw       r30, 0x48(r1)
      lwz       r4, -0x6C18(r13)
      cmplwi    r4, 0
      beq-      .loc_0x30
      lwz       r0, 0x44(r4)
      cmpwi     r0, 0x4
      beq-      .loc_0x1F0

    .loc_0x30:
      li        r0, 0x1
      stb       r0, 0x1F3(r31)
      lwz       r30, 0xC0(r31)
      bl        -0x2A6368
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x24(r1)
      lfd       f3, 0x770(r2)
      stw       r0, 0x20(r1)
      lfs       f1, 0x750(r2)
      lfd       f2, 0x20(r1)
      lfs       f0, 0x86C(r30)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fcmpo     cr0, f1, f0
      bgt-      .loc_0x1F0
      lfs       f3, 0x1FC(r31)
      lfs       f0, 0x764(r2)
      lfs       f2, 0x78C(r2)
      fcmpo     cr0, f3, f0
      bge-      .loc_0xB0
      lfs       f0, 0x76C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f1, f0
      b         .loc_0xD4

    .loc_0xB0:
      lfs       f0, 0x768(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f1, r3, r0

    .loc_0xD4:
      lfs       f0, 0x764(r2)
      fmuls     f2, f2, f1
      lfs       f1, 0x78C(r2)
      fcmpo     cr0, f3, f0
      bge-      .loc_0x114
      lfs       f0, 0x76C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f0, f0
      b         .loc_0x138

    .loc_0x114:
      lfs       f0, 0x768(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x38(r1)
      lwz       r0, 0x3C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0

    .loc_0x138:
      fmuls     f1, f1, f0
      lfs       f0, 0x790(r2)
      lwz       r0, -0x6BB0(r13)
      stfs      f0, 0x18(r1)
      lfs       f0, 0x77C(r2)
      cmplwi    r0, 0
      stfs      f1, 0x14(r1)
      stfs      f2, 0x1C(r1)
      lfs       f1, 0x18C(r31)
      stfs      f1, 0x8(r1)
      lfs       f1, 0x190(r31)
      stfs      f1, 0xC(r1)
      fadds     f0, f1, f0
      lfs       f1, 0x194(r31)
      stfs      f1, 0x10(r1)
      stfs      f0, 0xC(r1)
      bne-      .loc_0x198
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x24F4
      li        r4, 0x1B5
      addi      r5, r5, 0x2504
      crclr     6, 0x6
      bl        -0x345420

    .loc_0x198:
      lwz       r3, -0x6BB0(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      mr.       r0, r3
      beq-      .loc_0x1F0
      mr        r30, r0
      li        r4, 0
      bl        -0x234AC0
      li        r0, 0
      mr        r3, r30
      stb       r0, 0x1E0(r30)
      addi      r4, r1, 0x8
      li        r5, 0
      bl        -0x2348F8
      mr        r3, r30
      addi      r4, r1, 0x14
      lwz       r12, 0x0(r30)
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl

    .loc_0x1F0:
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
 * Address:	8036FAD4
 * Size:	000310
 */
void Game::TamagoMushi::Obj::walkFunc(void)
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
      lfs       f2, 0x794(r2)
      lfs       f1, 0x1A4(r3)
      lfs       f0, 0x798(r2)
      fmuls     f1, f1, f2
      stfs      f1, 0x1A4(r3)
      lfs       f1, 0x1AC(r3)
      fmuls     f1, f1, f2
      stfs      f1, 0x1AC(r3)
      lwz       r3, 0xC0(r3)
      lfs       f2, 0x2FC(r31)
      lfs       f1, 0x928(r3)
      lfs       f3, 0x2C8(r31)
      fadds     f1, f2, f1
      lfs       f2, 0x2E4(r3)
      lfs       f5, 0x924(r3)
      lfs       f4, 0x2CC(r31)
      fmuls     f29, f3, f2
      lfs       f3, 0x2C4(r31)
      lfs       f2, 0x334(r3)
      fmuls     f27, f5, f4
      stfs      f1, 0x2FC(r31)
      fmuls     f28, f3, f2
      lfs       f1, 0x2FC(r31)
      fcmpo     cr0, f1, f0
      ble-      .loc_0xA8
      fsubs     f0, f1, f0
      stfs      f0, 0x2FC(r31)

    .loc_0xA8:
      lfs       f1, 0x2FC(r31)
      bl        -0x2A0364
      lwz       r3, 0xC0(r31)
      frsp      f0, f1
      lbz       r0, 0x920(r3)
      fmuls     f2, f27, f0
      cmplwi    r0, 0
      beq-      .loc_0xCC
      lfs       f2, 0x764(r2)

    .loc_0xCC:
      lfs       f1, 0x2D0(r31)
      lfs       f0, 0x7A4(r2)
      fmuls     f2, f2, f1
      lfs       f3, 0x7A0(r2)
      fadds     f1, f1, f0
      lfs       f4, 0x79C(r2)
      lfs       f0, 0x780(r2)
      fmuls     f2, f3, f2
      stfs      f1, 0x2D0(r31)
      lfs       f1, 0x2D0(r31)
      fmuls     f30, f4, f2
      fcmpo     cr0, f1, f0
      ble-      .loc_0x104
      stfs      f0, 0x2D0(r31)

    .loc_0x104:
      lwz       r3, 0xC0(r31)
      lbz       r0, 0x921(r3)
      cmplwi    r0, 0
      beq-      .loc_0x1BC
      lfs       f1, 0x2D4(r31)
      lfs       f0, 0x780(r2)
      fadds     f0, f1, f0
      stfs      f0, 0x2D4(r31)
      lfs       f1, 0x2D4(r31)
      lfs       f0, 0x2D8(r31)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x184
      lbz       r0, 0x2DC(r31)
      cntlzw    r0, r0
      rlwinm    r0,r0,27,5,31
      stb       r0, 0x2DC(r31)
      bl        -0x2A6678
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x1C(r1)
      lwz       r3, 0xC0(r31)
      stw       r0, 0x18(r1)
      lfd       f1, 0x770(r2)
      lfd       f0, 0x18(r1)
      lfs       f2, 0x750(r2)
      fsubs     f3, f0, f1
      lfs       f1, 0x92C(r3)
      lfs       f0, 0x764(r2)
      fdivs     f2, f3, f2
      fmuls     f1, f1, f2
      stfs      f1, 0x2D8(r31)
      stfs      f0, 0x2D4(r31)

    .loc_0x184:
      lbz       r0, 0x2DC(r31)
      cmplwi    r0, 0
      beq-      .loc_0x1BC
      lfs       f1, 0x2D4(r31)
      lfs       f0, 0x2D8(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x1BC
      fdivs     f0, f1, f0
      lfs       f1, 0x780(r2)
      lwz       r3, 0xC0(r31)
      lfs       f2, 0x930(r3)
      fsubs     f0, f1, f0
      fmuls     f0, f2, f0
      fmuls     f29, f29, f0

    .loc_0x1BC:
      lfs       f1, 0x2EC(r31)
      lfs       f0, 0x764(r2)
      stfs      f1, 0x1FC(r31)
      lfs       f4, 0x1FC(r31)
      fadds     f3, f4, f30
      fcmpo     cr0, f3, f0
      bge-      .loc_0x204
      lfs       f0, 0x76C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f2, f0
      b         .loc_0x228

    .loc_0x204:
      lfs       f0, 0x768(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r3, r0

    .loc_0x228:
      lfs       f0, 0x764(r2)
      fmuls     f31, f29, f2
      lfs       f1, 0x1D4(r31)
      lfs       f27, 0x1D8(r31)
      fcmpo     cr0, f3, f0
      lfs       f0, 0x1DC(r31)
      stfs      f1, 0x8(r1)
      stfs      f27, 0xC(r1)
      stfs      f0, 0x10(r1)
      bge-      .loc_0x254
      fneg      f3, f3

    .loc_0x254:
      lfs       f0, 0x768(r2)
      lis       r3, 0x8050
      fabs      f2, f30
      addi      r3, r3, 0x71A0
      fmuls     f1, f3, f0
      frsp      f0, f2
      fctiwz    f1, f1
      fcmpo     cr0, f0, f28
      stfd      f1, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r3, r0
      lfs       f0, 0x4(r3)
      fmuls     f29, f29, f0
      stfs      f4, 0x2EC(r31)
      ble-      .loc_0x2AC
      lfs       f0, 0x764(r2)
      fcmpo     cr0, f30, f0
      ble-      .loc_0x2A8
      fmr       f30, f28
      b         .loc_0x2AC

    .loc_0x2A8:
      fneg      f30, f28

    .loc_0x2AC:
      fmr       f1, f30
      bl        0xA1E4C
      lfs       f0, 0x1FC(r31)
      fadds     f0, f0, f1
      stfs      f0, 0x1FC(r31)
      lfs       f0, 0x1FC(r31)
      stfs      f0, 0x1A8(r31)
      stfs      f31, 0x1D4(r31)
      stfs      f27, 0x1D8(r31)
      stfs      f29, 0x1DC(r31)
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
 * Address:	8036FDE4
 * Size:	000168
 */
void Game::TamagoMushi::Obj::setGoalRandom(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stfd      f31, 0x40(r1)
      psq_st    f31,0x48(r1),0,0
      stw       r31, 0x3C(r1)
      mr        r31, r3
      lwz       r3, 0xC0(r3)
      lfs       f31, 0x35C(r3)
      bl        -0x2A6868
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfs       f0, 0x198(r31)
      stw       r0, 0x8(r1)
      lfd       f3, 0x770(r2)
      lfd       f1, 0x8(r1)
      lfs       f2, 0x750(r2)
      fsubs     f3, f1, f3
      stfs      f0, 0x2E0(r31)
      lfs       f1, 0x7A8(r2)
      lfs       f0, 0x19C(r31)
      fdivs     f2, f3, f2
      stfs      f0, 0x2E4(r31)
      lfs       f0, 0x1A0(r31)
      stfs      f0, 0x2E8(r31)
      fmadds    f0, f1, f2, f1
      fmuls     f31, f31, f0
      bl        -0x2A68B4
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x14(r1)
      lfd       f3, 0x770(r2)
      stw       r0, 0x10(r1)
      lfs       f2, 0x750(r2)
      lfd       f0, 0x10(r1)
      lfs       f1, 0x7AC(r2)
      fsubs     f3, f0, f3
      lfs       f0, 0x764(r2)
      fdivs     f2, f3, f2
      fmuls     f3, f1, f2
      fcmpo     cr0, f3, f0
      bge-      .loc_0xD8
      lfs       f0, 0x76C(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x18(r1)
      lwz       r0, 0x1C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r3, r0
      fneg      f2, f0
      b         .loc_0xFC

    .loc_0xD8:
      lfs       f0, 0x768(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      fmuls     f0, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f2, r3, r0

    .loc_0xFC:
      lfs       f1, 0x2E0(r31)
      lfs       f0, 0x764(r2)
      fmadds    f1, f31, f2, f1
      fcmpo     cr0, f3, f0
      stfs      f1, 0x2E0(r31)
      bge-      .loc_0x118
      fneg      f3, f3

    .loc_0x118:
      lfs       f1, 0x768(r2)
      lis       r3, 0x8050
      addi      r3, r3, 0x71A0
      lfs       f0, 0x2E8(r31)
      fmuls     f1, f3, f1
      fctiwz    f1, f1
      stfd      f1, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      add       r3, r3, r0
      lfs       f1, 0x4(r3)
      fmadds    f0, f31, f1, f0
      stfs      f0, 0x2E8(r31)
      psq_l     f31,0x48(r1),0,0
      lwz       r0, 0x54(r1)
      lfd       f31, 0x40(r1)
      lwz       r31, 0x3C(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	8036FF4C
 * Size:	0000B8
 */
void setGoalDirect__Q34Game11TamagoMushi3ObjFR10Vector3<float>(void)
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
      mr        r31, r4
      lwz       r3, 0xC0(r3)
      lfs       f31, 0x93C(r3)
      bl        -0x2A69D8
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0xC(r1)
      lfs       f0, 0x18C(r30)
      stw       r0, 0x8(r1)
      lfd       f3, 0x770(r2)
      lfd       f2, 0x8(r1)
      lfs       f1, 0x750(r2)
      fsubs     f3, f2, f3
      stfs      f0, 0x2E0(r30)
      lfs       f2, 0x7A8(r2)
      lfs       f0, 0x190(r30)
      fdivs     f3, f3, f1
      stfs      f0, 0x2E4(r30)
      lfs       f0, 0x194(r30)
      stfs      f0, 0x2E8(r30)
      lfs       f1, 0x0(r31)
      lfs       f0, 0x2E0(r30)
      fmadds    f2, f2, f3, f2
      fmuls     f31, f31, f2
      fmadds    f0, f31, f1, f0
      stfs      f0, 0x2E0(r30)
      lfs       f1, 0x8(r31)
      lfs       f0, 0x2E8(r30)
      fmadds    f0, f31, f1, f0
      stfs      f0, 0x2E8(r30)
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
 * Address:	80370004
 * Size:	00015C
 */
void Game::TamagoMushi::Obj::turnFunc(void)
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
      mr        r31, r3
      addi      r3, r1, 0x8
      lwz       r5, 0xC0(r31)
      mr        r4, r31
      lwz       r12, 0x0(r31)
      lfs       f2, 0x2C4(r31)
      lfs       f1, 0x334(r5)
      lfs       f0, 0x30C(r5)
      lwz       r12, 0x8(r12)
      fmuls     f29, f2, f1
      fmuls     f30, f2, f0
      mtctr     r12
      bctrl
      lfs       f3, 0x2E0(r31)
      lis       r3, 0x8051
      lfs       f1, 0x8(r1)
      subi      r3, r3, 0x2E20
      lfs       f2, 0x2E8(r31)
      lfs       f0, 0x10(r1)
      fsubs     f1, f3, f1
      fsubs     f2, f2, f0
      bl        -0x33AF78
      bl        0xA1B4C
      lwz       r12, 0x0(r31)
      fmr       f31, f1
      mr        r3, r31
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fmr       f2, f1
      fmr       f1, f31
      bl        0xA1B54
      fmr       f31, f1
      lfs       f0, 0x7A0(r2)
      lfs       f1, 0x79C(r2)
      fmuls     f0, f0, f29
      fmuls     f29, f31, f30
      fmuls     f1, f1, f0
      fabs      f0, f29
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0xE8
      lfs       f0, 0x764(r2)
      fcmpo     cr0, f29, f0
      ble-      .loc_0xE4
      fmr       f29, f1
      b         .loc_0xE8

    .loc_0xE4:
      fneg      f29, f1

    .loc_0xE8:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      fadds     f1, f29, f1
      bl        0xA1ACC
      fabs      f3, f31
      stfs      f1, 0x1FC(r31)
      lfs       f0, 0x7A4(r2)
      lfs       f2, 0x1FC(r31)
      frsp      f1, f3
      stfs      f2, 0x1A8(r31)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x12C
      li        r3, 0x1
      b         .loc_0x130

    .loc_0x12C:
      li        r3, 0

    .loc_0x130:
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
 * Address:	80370160
 * Size:	000034
 */
void Game::TamagoMushi::Obj::isReachToGoal((float))
{
    /*
    .loc_0x0:
      fmuls     f0, f1, f1
      lfs       f2, 0x194(r3)
      lfs       f1, 0x2E8(r3)
      lfs       f3, 0x18C(r3)
      fsubs     f2, f2, f1
      lfs       f1, 0x2E0(r3)
      fsubs     f3, f3, f1
      fmuls     f1, f2, f2
      fmadds    f1, f3, f3, f1
      fcmpo     cr0, f1, f0
      mfcr      r0
      rlwinm    r3,r0,1,31,31
      blr
    */
}

/*
 * --INFO--
 * Address:	80370194
 * Size:	00002C
 */
void Game::TamagoMushi::Obj::resetWalkParm(void)
{
    /*
    .loc_0x0:
      lfs       f0, 0x764(r2)
      li        r0, 0
      stfs      f0, 0x2D0(r3)
      stfs      f0, 0x2D4(r3)
      lwz       r4, 0xC0(r3)
      lfs       f0, 0x92C(r4)
      stfs      f0, 0x2D8(r3)
      stb       r0, 0x2DC(r3)
      lfs       f0, 0x1FC(r3)
      stfs      f0, 0x2EC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803701C0
 * Size:	000028
 */
void Game::TamagoMushi::Obj::startCarcassMotion(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x5
      li        r5, 0
      stw       r0, 0x14(r1)
      bl        -0x26B1D0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803701E8
 * Size:	000058
 */
void Game::TamagoMushi::Obj::setLeader((Game::TamagoMushi::Obj*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0x2F4(r3)
      cmplw     r0, r4
      beq-      .loc_0x44
      stw       r4, 0x2F4(r31)
      lwz       r4, 0x2F4(r31)
      lbz       r0, 0x2F0(r4)
      cmplwi    r0, 0
      beq-      .loc_0x38
      bl        .loc_0x58

    .loc_0x38:
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,26,24
      stw       r0, 0x1E0(r31)

    .loc_0x44:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x58:
    */
}

/*
 * --INFO--
 * Address:	80370240
 * Size:	000054
 */
void Game::TamagoMushi::Obj::setTypeBall(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0x5
      li        r6, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      mr        r4, r31
      lwz       r3, 0x308(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      stb       r0, 0x2F0(r31)
      stb       r0, 0x300(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80370294
 * Size:	000344
 */
void Game::TamagoMushi::Obj::appearPanic(void)
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
      stw       r29, 0x44(r1)
      mr        r31, r3
      lwz       r0, 0x2F4(r3)
      cmplwi    r0, 0
      beq-      .loc_0x50
      cmplw     r0, r31
      bne-      .loc_0x308

    .loc_0x50:
      lwz       r5, 0xC0(r31)
      lis       r4, 0x804B
      li        r0, 0
      lwz       r3, -0x6D0C(r13)
      lfs       f0, 0x948(r5)
      subi      r4, r4, 0x4364
      cmplwi    r0, 0
      fmuls     f28, f0, f0
      stw       r4, 0x2C(r1)
      stw       r0, 0x38(r1)
      stw       r0, 0x30(r1)
      stw       r3, 0x34(r1)
      bne-      .loc_0x9C
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x30(r1)
      b         .loc_0x2E8

    .loc_0x9C:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x30(r1)
      b         .loc_0x108

    .loc_0xB4:
      lwz       r3, 0x34(r1)
      lwz       r4, 0x30(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x38(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2E8
      lwz       r3, 0x34(r1)
      lwz       r4, 0x30(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x30(r1)

    .loc_0x108:
      lwz       r12, 0x2C(r1)
      addi      r3, r1, 0x2C
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0xB4
      b         .loc_0x2E8

    .loc_0x128:
      lwz       r3, 0x34(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r29, r3
      li        r30, 0
      lwz       r12, 0x1C0(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x18C
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x18C
      mr        r3, r29
      bl        -0x1D0E88
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x18C
      li        r30, 0x1

    .loc_0x18C:
      rlwinm.   r0,r30,0,24,31
      beq-      .loc_0x22C
      mr        r4, r29
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r29)
      lfs       f29, 0x194(r31)
      lwz       r12, 0x8(r12)
      lfs       f30, 0x18C(r31)
      mtctr     r12
      bctrl
      mr        r4, r29
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r29)
      lfs       f31, 0x10(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      fsubs     f0, f31, f29
      lfs       f1, 0x14(r1)
      fsubs     f1, f1, f30
      fmuls     f0, f0, f0
      fmadds    f0, f1, f1, f0
      fcmpo     cr0, f0, f28
      bge-      .loc_0x22C
      lwz       r6, 0xC0(r31)
      lis       r5, 0x804B
      lis       r4, 0x804B
      mr        r3, r29
      lfs       f0, 0x944(r6)
      subi      r5, r5, 0x5D00
      addi      r0, r4, 0x4854
      addi      r4, r1, 0x20
      stw       r5, 0x20(r1)
      stw       r31, 0x24(r1)
      stw       r0, 0x20(r1)
      stfs      f0, 0x28(r1)
      lwz       r12, 0x0(r29)
      lwz       r12, 0x1A4(r12)
      mtctr     r12
      bctrl

    .loc_0x22C:
      lwz       r0, 0x38(r1)
      cmplwi    r0, 0
      bne-      .loc_0x258
      lwz       r3, 0x34(r1)
      lwz       r4, 0x30(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x30(r1)
      b         .loc_0x2E8

    .loc_0x258:
      lwz       r3, 0x34(r1)
      lwz       r4, 0x30(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x30(r1)
      b         .loc_0x2CC

    .loc_0x278:
      lwz       r3, 0x34(r1)
      lwz       r4, 0x30(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x38(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2E8
      lwz       r3, 0x34(r1)
      lwz       r4, 0x30(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x30(r1)

    .loc_0x2CC:
      lwz       r12, 0x2C(r1)
      addi      r3, r1, 0x2C
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x278

    .loc_0x2E8:
      lwz       r3, 0x34(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x30(r1)
      cmplw     r4, r3
      bne+      .loc_0x128

    .loc_0x308:
      psq_l     f31,0x88(r1),0,0
      lfd       f31, 0x80(r1)
      psq_l     f30,0x78(r1),0,0
      lfd       f30, 0x70(r1)
      psq_l     f29,0x68(r1),0,0
      lfd       f29, 0x60(r1)
      psq_l     f28,0x58(r1),0,0
      lfd       f28, 0x50(r1)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      lwz       r0, 0x94(r1)
      lwz       r29, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x90
      blr
    */
}

/*
 * --INFO--
 * Address:	803705D8
 * Size:	0003BC
 */
void Game::TamagoMushi::Obj::isFound(void)
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
      lwz       r31, 0x2F4(r3)
      cmplwi    r31, 0
      beq-      .loc_0x328
      cmplw     r31, r30
      beq-      .loc_0x328
      lwz       r30, 0x2F4(r31)
      cmplwi    r30, 0
      beq-      .loc_0x2A8
      cmplw     r30, r31
      beq-      .loc_0x2A8
      lwz       r31, 0x2F4(r30)
      cmplwi    r31, 0
      beq-      .loc_0x228
      cmplw     r31, r30
      beq-      .loc_0x228
      lwz       r30, 0x2F4(r31)
      cmplwi    r30, 0
      beq-      .loc_0x1A8
      cmplw     r30, r31
      beq-      .loc_0x1A8
      lwz       r31, 0x2F4(r30)
      cmplwi    r31, 0
      beq-      .loc_0x128
      cmplw     r31, r30
      beq-      .loc_0x128
      lwz       r3, 0x2F4(r31)
      cmplwi    r3, 0
      beq-      .loc_0xA0
      cmplw     r3, r31
      beq-      .loc_0xA0
      bl        .loc_0x0
      b         .loc_0x39C

    .loc_0xA0:
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0xC0
      bl        0x318
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xC0
      li        r3, 0x1
      b         .loc_0x39C

    .loc_0xC0:
      lwz       r3, 0xC0(r31)
      addi      r3, r3, 0x82C
      bl        .loc_0x3BC
      lfs       f31, 0x0(r3)
      mr        r3, r31
      lfs       f1, 0x7B0(r2)
      li        r4, 0
      fmr       f2, f31
      li        r5, 0
      bl        -0x25DB58
      cmplwi    r3, 0
      beq-      .loc_0xF8
      li        r3, 0x1
      b         .loc_0x39C

    .loc_0xF8:
      fmr       f2, f31
      lfs       f1, 0x7B0(r2)
      mr        r3, r31
      li        r4, 0
      li        r5, 0
      bl        -0x25DFF0
      cmplwi    r3, 0
      beq-      .loc_0x120
      li        r3, 0x1
      b         .loc_0x39C

    .loc_0x120:
      li        r3, 0
      b         .loc_0x39C

    .loc_0x128:
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0x148
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x4
      bne-      .loc_0x148
      li        r3, 0x1
      b         .loc_0x39C

    .loc_0x148:
      lwz       r5, 0xC0(r30)
      mr        r3, r30
      lfs       f1, 0x7B0(r2)
      li        r4, 0
      lfs       f31, 0x844(r5)
      li        r5, 0
      fmr       f2, f31
      bl        -0x25DBD8
      cmplwi    r3, 0
      beq-      .loc_0x178
      li        r3, 0x1
      b         .loc_0x39C

    .loc_0x178:
      fmr       f2, f31
      lfs       f1, 0x7B0(r2)
      mr        r3, r30
      li        r4, 0
      li        r5, 0
      bl        -0x25E070
      cmplwi    r3, 0
      beq-      .loc_0x1A0
      li        r3, 0x1
      b         .loc_0x39C

    .loc_0x1A0:
      li        r3, 0
      b         .loc_0x39C

    .loc_0x1A8:
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0x1C8
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x4
      bne-      .loc_0x1C8
      li        r3, 0x1
      b         .loc_0x39C

    .loc_0x1C8:
      lwz       r5, 0xC0(r31)
      mr        r3, r31
      lfs       f1, 0x7B0(r2)
      li        r4, 0
      lfs       f31, 0x844(r5)
      li        r5, 0
      fmr       f2, f31
      bl        -0x25DC58
      cmplwi    r3, 0
      beq-      .loc_0x1F8
      li        r3, 0x1
      b         .loc_0x39C

    .loc_0x1F8:
      fmr       f2, f31
      lfs       f1, 0x7B0(r2)
      mr        r3, r31
      li        r4, 0
      li        r5, 0
      bl        -0x25E0F0
      cmplwi    r3, 0
      beq-      .loc_0x220
      li        r3, 0x1
      b         .loc_0x39C

    .loc_0x220:
      li        r3, 0
      b         .loc_0x39C

    .loc_0x228:
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0x248
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x4
      bne-      .loc_0x248
      li        r3, 0x1
      b         .loc_0x39C

    .loc_0x248:
      lwz       r5, 0xC0(r30)
      mr        r3, r30
      lfs       f1, 0x7B0(r2)
      li        r4, 0
      lfs       f31, 0x844(r5)
      li        r5, 0
      fmr       f2, f31
      bl        -0x25DCD8
      cmplwi    r3, 0
      beq-      .loc_0x278
      li        r3, 0x1
      b         .loc_0x39C

    .loc_0x278:
      fmr       f2, f31
      lfs       f1, 0x7B0(r2)
      mr        r3, r30
      li        r4, 0
      li        r5, 0
      bl        -0x25E170
      cmplwi    r3, 0
      beq-      .loc_0x2A0
      li        r3, 0x1
      b         .loc_0x39C

    .loc_0x2A0:
      li        r3, 0
      b         .loc_0x39C

    .loc_0x2A8:
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0x2C8
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x4
      bne-      .loc_0x2C8
      li        r3, 0x1
      b         .loc_0x39C

    .loc_0x2C8:
      lwz       r5, 0xC0(r31)
      mr        r3, r31
      lfs       f1, 0x7B0(r2)
      li        r4, 0
      lfs       f31, 0x844(r5)
      li        r5, 0
      fmr       f2, f31
      bl        -0x25DD58
      cmplwi    r3, 0
      beq-      .loc_0x2F8
      li        r3, 0x1
      b         .loc_0x39C

    .loc_0x2F8:
      fmr       f2, f31
      lfs       f1, 0x7B0(r2)
      mr        r3, r31
      li        r4, 0
      li        r5, 0
      bl        -0x25E1F0
      cmplwi    r3, 0
      beq-      .loc_0x320
      li        r3, 0x1
      b         .loc_0x39C

    .loc_0x320:
      li        r3, 0
      b         .loc_0x39C

    .loc_0x328:
      lwz       r3, -0x6C18(r13)
      cmplwi    r3, 0
      beq-      .loc_0x348
      lwz       r0, 0x44(r3)
      cmpwi     r0, 0x4
      bne-      .loc_0x348
      li        r3, 0x1
      b         .loc_0x39C

    .loc_0x348:
      lwz       r5, 0xC0(r30)
      mr        r3, r30
      lfs       f1, 0x7B0(r2)
      li        r4, 0
      lfs       f31, 0x844(r5)
      li        r5, 0
      fmr       f2, f31
      bl        -0x25DDD8
      cmplwi    r3, 0
      beq-      .loc_0x378
      li        r3, 0x1
      b         .loc_0x39C

    .loc_0x378:
      fmr       f2, f31
      lfs       f1, 0x7B0(r2)
      mr        r3, r30
      li        r4, 0
      li        r5, 0
      bl        -0x25E270
      neg       r0, r3
      or        r0, r0, r3
      rlwinm    r3,r0,1,31,31

    .loc_0x39C:
      psq_l     f31,0x18(r1),0,0
      lwz       r0, 0x24(r1)
      lfd       f31, 0x10(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0x3BC:
    */
}

/*
 * --INFO--
 * Address:	80370994
 * Size:	000008
 */
void Parm<float>::operator()()
{
    /*
    .loc_0x0:
      addi      r3, r3, 0x18
      blr
    */
}

/*
 * --INFO--
 * Address:	8037099C
 * Size:	000014
 */
void Game::GameSystem::isZukanMode(void)
{
    /*
    .loc_0x0:
      lwz       r0, 0x44(r3)
      subfic    r0, r0, 0x4
      cntlzw    r0, r0
      rlwinm    r3,r0,27,5,31
      blr
    */
}

/*
 * --INFO--
 * Address:	803709B0
 * Size:	000044
 */
void Game::TamagoMushi::Obj::createFellow(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x14(r1)
      lwz       r0, 0x2F4(r3)
      cmplwi    r0, 0
      beq-      .loc_0x24
      cmplw     r0, r4
      bne-      .loc_0x34

    .loc_0x24:
      lwz       r3, 0x180(r4)
      li        r5, 0xA
      li        r6, 0
      bl        -0x2A08

    .loc_0x34:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803709F4
 * Size:	00009C
 */
void Game::TamagoMushi::Obj::ballMove(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f2, 0x77C(r2)
      stw       r0, 0x14(r1)
      lfs       f0, 0x78C(r2)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lfs       f1, 0x1CC(r3)
      fmuls     f1, f2, f1
      fdivs     f0, f1, f0
      fabs      f0, f0
      frsp      f0, f0
      fmr       f4, f0
      fcmpo     cr0, f0, f2
      ble-      .loc_0x40
      fmr       f4, f2

    .loc_0x40:
      lwz       r5, 0xC0(r31)
      mr        r3, r31
      lfs       f3, 0x758(r2)
      addi      r4, r31, 0x2E0
      lfs       f1, 0x2E4(r5)
      lfs       f2, 0x30C(r5)
      lfs       f0, 0x334(r5)
      fmuls     f1, f3, f1
      fmuls     f2, f2, f4
      fmuls     f3, f0, f4
      bl        -0x25B480
      lfs       f0, 0x1A4(r31)
      lfs       f1, 0x7B4(r2)
      fmuls     f0, f0, f1
      stfs      f0, 0x1A4(r31)
      lfs       f0, 0x1AC(r31)
      fmuls     f0, f0, f1
      stfs      f0, 0x1AC(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80370A90
 * Size:	0000A8
 */
void Game::TamagoMushi::Obj::createHideEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x34(r1)
      subi      r0, r4, 0x5814
      stw       r0, 0x8(r1)
      lfs       f0, 0x18C(r3)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x190(r3)
      stfs      f0, 0x10(r1)
      lfs       f0, 0x194(r3)
      stfs      f0, 0x14(r1)
      lwz       r3, 0x174(r3)
      lwz       r3, 0x10(r3)
      bl        0xB8DD8
      lis       r4, 0x804B
      li        r6, 0
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x18(r1)
      addi      r0, r4, 0x6A64
      lis       r5, 0x804E
      lis       r4, 0x804C
      stw       r0, 0x18(r1)
      addi      r0, r5, 0x6A00
      li        r7, 0x1D1
      li        r5, 0x1D2
      stw       r0, 0x18(r1)
      addi      r0, r4, 0x2920
      addi      r4, r1, 0x8
      stw       r3, 0x28(r1)
      addi      r3, r1, 0x18
      sth       r7, 0x1C(r1)
      sth       r5, 0x1E(r1)
      stw       r6, 0x20(r1)
      stw       r6, 0x24(r1)
      stw       r0, 0x18(r1)
      bl        0x3E874
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80370B38
 * Size:	0000A8
 */
void Game::TamagoMushi::Obj::createAppearEffect(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x34(r1)
      subi      r0, r4, 0x5814
      stw       r0, 0x8(r1)
      lfs       f0, 0x18C(r3)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x190(r3)
      stfs      f0, 0x10(r1)
      lfs       f0, 0x194(r3)
      stfs      f0, 0x14(r1)
      lwz       r3, 0x174(r3)
      lwz       r3, 0x10(r3)
      bl        0xB8D30
      lis       r4, 0x804B
      li        r6, 0
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x18(r1)
      addi      r0, r4, 0x6A64
      lis       r5, 0x804E
      lis       r4, 0x804E
      stw       r0, 0x18(r1)
      addi      r0, r5, 0x6A00
      li        r7, 0x23F
      li        r5, 0x240
      stw       r0, 0x18(r1)
      addi      r0, r4, 0x35E8
      addi      r4, r1, 0x8
      stw       r3, 0x28(r1)
      addi      r3, r1, 0x18
      sth       r7, 0x1C(r1)
      sth       r5, 0x1E(r1)
      stw       r6, 0x20(r1)
      stw       r6, 0x24(r1)
      stw       r0, 0x18(r1)
      bl        0x3E7CC
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80370BE0
 * Size:	000004
 */
void Game::TamagoMushi::Obj::setInitialSetting((Game::EnemyInitialParamBase*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80370BE4
 * Size:	000014
 */
void Game::TamagoMushi::Obj::isLivingThing(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0xC0(r3)
      lbz       r0, 0x922(r3)
      cntlzw    r0, r0
      rlwinm    r3,r0,27,5,31
      blr
    */
}

/*
 * --INFO--
 * Address:	80370BF8
 * Size:	000008
 */
void Game::TamagoMushi::Obj::getDownSmokeScale(void)
{
    /*
    .loc_0x0:
      lfs       f1, 0x7B8(r2)
      blr
    */
}

/*
 * --INFO--
 * Address:	80370C00
 * Size:	000008
 */
void Game::TamagoMushi::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x44
      blr
    */
}
