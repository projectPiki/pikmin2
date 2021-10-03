

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void Game::_Print(char*, ...)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80126C00
 * Size:	000090
 */
void Game::TimeMgr::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x804F
      li        r5, 0
      stw       r0, 0x14(r1)
      subi      r0, r4, 0x4AD8
      lis       r4, 0x8048
      stw       r31, 0xC(r1)
      mr        r31, r3
      subi      r4, r4, 0x42B8
      stw       r0, 0x0(r3)
      lis       r3, 0x804B
      subi      r0, r3, 0x23E0
      stw       r5, 0x10(r31)
      addi      r3, r31, 0x18
      stw       r5, 0xC(r31)
      stw       r5, 0x8(r31)
      stw       r5, 0x4(r31)
      stw       r4, 0x14(r31)
      stw       r0, 0x0(r31)
      bl        .loc_0x90
      lfs       f0, -0x6410(r2)
      li        r0, 0
      mr        r3, r31
      stfs      f0, 0x21C(r31)
      stb       r0, 0x240(r31)
      stb       r0, 0x241(r31)
      stb       r0, 0x242(r31)
      stb       r0, 0x243(r31)
      bl        0x37C
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x90:
    */
}

/*
 * --INFO--
 * Address:	80126C90
 * Size:	000034
 */
void Game::TimeMgrParms::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x1
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        .loc_0x34
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x34:
    */
}

/*
 * --INFO--
 * Address:	80126CC4
 * Size:	00032C
 */
void Game::TimeMgrParms::Parms::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      extsh.    r0, r4
      lis       r4, 0x8048
      stw       r31, 0xC(r1)
      subi      r31, r4, 0x42B8
      stw       r30, 0x8(r1)
      mr        r30, r3
      beq-      .loc_0x30
      addi      r0, r30, 0x1EC
      stw       r0, 0x0(r30)

    .loc_0x30:
      li        r0, 0
      lis       r5, 0x6670
      stw       r0, 0x4(r30)
      addi      r0, r31, 0x14
      mr        r4, r30
      addi      r3, r30, 0xC
      stw       r0, 0x8(r30)
      addi      r5, r5, 0x3030
      addi      r6, r31, 0x24
      bl        0x2EC940
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x640C(r2)
      stw       r0, 0xC(r30)
      mr        r4, r30
      lfs       f1, -0x6408(r2)
      addi      r3, r30, 0x34
      stfs      f0, 0x24(r30)
      addi      r5, r5, 0x3031
      lfs       f0, -0x6404(r2)
      addi      r6, r31, 0x34
      stfs      f1, 0x2C(r30)
      stfs      f0, 0x30(r30)
      bl        0x2EC904
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x6400(r2)
      stw       r0, 0x34(r30)
      mr        r4, r30
      lfs       f1, -0x6408(r2)
      addi      r3, r30, 0x5C
      stfs      f0, 0x4C(r30)
      addi      r5, r5, 0x3032
      lfs       f0, -0x6404(r2)
      addi      r6, r31, 0x44
      stfs      f1, 0x54(r30)
      stfs      f0, 0x58(r30)
      bl        0x2EC8C8
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x63FC(r2)
      stw       r0, 0x5C(r30)
      mr        r4, r30
      lfs       f1, -0x6408(r2)
      addi      r3, r30, 0x84
      stfs      f0, 0x74(r30)
      addi      r5, r5, 0x3033
      lfs       f0, -0x63F8(r2)
      addi      r6, r31, 0x54
      stfs      f1, 0x7C(r30)
      stfs      f0, 0x80(r30)
      bl        0x2EC88C
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x63F4(r2)
      stw       r0, 0x84(r30)
      mr        r4, r30
      lfs       f1, -0x6408(r2)
      addi      r3, r30, 0xAC
      stfs      f0, 0x9C(r30)
      addi      r5, r5, 0x3034
      lfs       f0, -0x6404(r2)
      addi      r6, r31, 0x60
      stfs      f1, 0xA4(r30)
      stfs      f0, 0xA8(r30)
      bl        0x2EC850
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x640C(r2)
      stw       r0, 0xAC(r30)
      mr        r4, r30
      lfs       f1, -0x6408(r2)
      addi      r3, r30, 0xD4
      stfs      f0, 0xC4(r30)
      addi      r5, r5, 0x3035
      lfs       f0, -0x6404(r2)
      addi      r6, r31, 0x6C
      stfs      f1, 0xCC(r30)
      stfs      f0, 0xD0(r30)
      bl        0x2EC814
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x63F0(r2)
      stw       r0, 0xD4(r30)
      mr        r4, r30
      lfs       f1, -0x6408(r2)
      addi      r3, r30, 0xFC
      stfs      f0, 0xEC(r30)
      addi      r5, r5, 0x3036
      lfs       f0, -0x6404(r2)
      addi      r6, r31, 0x78
      stfs      f1, 0xF4(r30)
      stfs      f0, 0xF8(r30)
      bl        0x2EC7D8
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x63EC(r2)
      stw       r0, 0xFC(r30)
      mr        r4, r30
      lfs       f1, -0x6408(r2)
      addi      r3, r30, 0x124
      stfs      f0, 0x114(r30)
      addi      r5, r5, 0x3037
      lfs       f0, -0x6404(r2)
      addi      r6, r31, 0x88
      stfs      f1, 0x11C(r30)
      stfs      f0, 0x120(r30)
      bl        0x2EC79C
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x63E8(r2)
      stw       r0, 0x124(r30)
      mr        r4, r30
      lfs       f1, -0x6408(r2)
      addi      r3, r30, 0x14C
      stfs      f0, 0x13C(r30)
      addi      r5, r5, 0x3131
      lfs       f0, -0x6404(r2)
      addi      r6, r31, 0x9C
      stfs      f1, 0x144(r30)
      stfs      f0, 0x148(r30)
      bl        0x2EC760
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x63E4(r2)
      stw       r0, 0x14C(r30)
      mr        r4, r30
      lfs       f1, -0x6408(r2)
      addi      r3, r30, 0x174
      stfs      f0, 0x164(r30)
      addi      r5, r5, 0x3038
      lfs       f0, -0x6404(r2)
      addi      r6, r31, 0xB0
      stfs      f1, 0x16C(r30)
      stfs      f0, 0x170(r30)
      bl        0x2EC724
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x6400(r2)
      stw       r0, 0x174(r30)
      mr        r4, r30
      lfs       f1, -0x6408(r2)
      addi      r3, r30, 0x19C
      stfs      f0, 0x18C(r30)
      addi      r5, r5, 0x3039
      lfs       f0, -0x6404(r2)
      addi      r6, r31, 0xC0
      stfs      f1, 0x194(r30)
      stfs      f0, 0x198(r30)
      bl        0x2EC6E8
      lis       r3, 0x804B
      lis       r5, 0x6670
      subi      r0, r3, 0x5344
      lfs       f0, -0x63E0(r2)
      stw       r0, 0x19C(r30)
      mr        r4, r30
      lfs       f1, -0x6408(r2)
      addi      r3, r30, 0x1C4
      stfs      f0, 0x1B4(r30)
      addi      r5, r5, 0x3130
      lfs       f0, -0x6404(r2)
      addi      r6, r31, 0xCC
      stfs      f1, 0x1BC(r30)
      stfs      f0, 0x1C0(r30)
      bl        0x2EC6AC
      lis       r3, 0x804B
      lfs       f2, -0x63E4(r2)
      subi      r0, r3, 0x5344
      lfs       f1, -0x6408(r2)
      stw       r0, 0x1C4(r30)
      mr        r3, r30
      lfs       f0, -0x6404(r2)
      stfs      f2, 0x1DC(r30)
      stfs      f1, 0x1E4(r30)
      stfs      f0, 0x1E8(r30)
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
 * Address:	80126FF0
 * Size:	0000B0
 */
void Game::TimeMgr::init(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f2, -0x6404(r2)
      stw       r0, 0x14(r1)
      li        r0, 0
      lfs       f1, 0x1A4(r3)
      lfs       f0, 0xB4(r3)
      fsubs     f1, f2, f1
      fadds     f0, f1, f0
      stfs      f0, 0x220(r3)
      lfs       f1, 0xDC(r3)
      lfs       f0, 0xB4(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0x224(r3)
      lfs       f1, 0x104(r3)
      lfs       f0, 0xDC(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0x228(r3)
      lfs       f1, 0x12C(r3)
      lfs       f0, 0x104(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0x22C(r3)
      lfs       f1, 0x154(r3)
      lfs       f0, 0x12C(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0x230(r3)
      lfs       f1, 0x1A4(r3)
      lfs       f0, 0x17C(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0x234(r3)
      lfs       f1, 0x64(r3)
      lfs       f0, 0x3C(r3)
      fsubs     f0, f1, f0
      stfs      f0, 0x238(r3)
      lfs       f0, 0x238(r3)
      fsubs     f0, f2, f0
      stfs      f0, 0x23C(r3)
      stw       r0, 0x218(r3)
      lfs       f1, 0x3C(r3)
      bl        .loc_0xB0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0xB0:
    */
}

/*
 * --INFO--
 * Address:	801270A0
 * Size:	00003C
 */
void Game::TimeMgr::setTime((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stfs      f1, 0x20C(r3)
      lfs       f1, -0x6404(r2)
      lfs       f2, 0x20C(r3)
      lfs       f0, 0x8C(r3)
      fdivs     f1, f2, f1
      fmuls     f0, f1, f0
      stfs      f0, 0x208(r3)
      bl        0x94
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801270DC
 * Size:	000040
 */
void Game::TimeMgr::setStartTime(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f1, -0x6404(r2)
      stw       r0, 0x14(r1)
      lfs       f0, 0x3C(r3)
      stfs      f0, 0x20C(r3)
      lfs       f2, 0x20C(r3)
      lfs       f0, 0x8C(r3)
      fdivs     f1, f2, f1
      fmuls     f0, f1, f0
      stfs      f0, 0x208(r3)
      bl        0x54
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8012711C
 * Size:	000040
 */
void Game::TimeMgr::setEndTime(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfs       f1, -0x6404(r2)
      stw       r0, 0x14(r1)
      lfs       f0, 0x64(r3)
      stfs      f0, 0x20C(r3)
      lfs       f2, 0x20C(r3)
      lfs       f0, 0x8C(r3)
      fdivs     f1, f2, f1
      fmuls     f0, f1, f0
      stfs      f0, 0x208(r3)
      bl        .loc_0x40
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x40:
    */
}

/*
 * --INFO--
 * Address:	8012715C
 * Size:	000168
 */
void Game::TimeMgr::updateSlot(void)
{
    /*
    .loc_0x0:
      lfs       f1, 0x20C(r3)
      lfs       f0, 0xB4(r3)
      fcmpo     cr0, f1, f0
      blt-      .loc_0x20
      lfs       f2, 0x1A4(r3)
      fcmpo     cr0, f1, f2
      cror      2, 0x1, 0x2
      bne-      .loc_0x5C

    .loc_0x20:
      li        r0, 0
      stw       r0, 0x210(r3)
      lfs       f1, 0x20C(r3)
      lfs       f0, 0xB4(r3)
      fmr       f2, f1
      fcmpo     cr0, f1, f0
      bge-      .loc_0x44
      lfs       f0, -0x6404(r2)
      fadds     f2, f1, f0

    .loc_0x44:
      lfs       f1, 0x1A4(r3)
      lfs       f0, 0x220(r3)
      fsubs     f1, f2, f1
      fdivs     f0, f1, f0
      stfs      f0, 0x214(r3)
      blr

    .loc_0x5C:
      lfs       f0, 0x104(r3)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xC0
      li        r0, 0x1
      stw       r0, 0x210(r3)
      lfs       f1, 0x20C(r3)
      lfs       f0, 0xDC(r3)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xA0
      lfs       f0, 0xB4(r3)
      lfs       f2, -0x63DC(r2)
      fsubs     f1, f1, f0
      lfs       f0, 0x224(r3)
      fmuls     f1, f2, f1
      fdivs     f0, f1, f0
      stfs      f0, 0x214(r3)
      blr

    .loc_0xA0:
      fsubs     f1, f1, f0
      lfs       f2, -0x63DC(r2)
      lfs       f0, 0x228(r3)
      fmuls     f1, f2, f1
      fdivs     f0, f1, f0
      fadds     f0, f2, f0
      stfs      f0, 0x214(r3)
      blr

    .loc_0xC0:
      lfs       f0, 0x12C(r3)
      fcmpo     cr0, f1, f0
      bge-      .loc_0xF0
      li        r0, 0x2
      stw       r0, 0x210(r3)
      lfs       f2, 0x20C(r3)
      lfs       f1, 0x104(r3)
      lfs       f0, 0x22C(r3)
      fsubs     f1, f2, f1
      fdivs     f0, f1, f0
      stfs      f0, 0x214(r3)
      blr

    .loc_0xF0:
      fcmpo     cr0, f1, f2
      bgelr-
      li        r0, 0x3
      stw       r0, 0x210(r3)
      lfs       f1, 0x20C(r3)
      lfs       f0, 0x154(r3)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x130
      lfs       f0, 0x12C(r3)
      lfs       f2, -0x63DC(r2)
      fsubs     f1, f1, f0
      lfs       f0, 0x230(r3)
      fmuls     f1, f2, f1
      fdivs     f0, f1, f0
      stfs      f0, 0x214(r3)
      blr

    .loc_0x130:
      lfs       f0, 0x17C(r3)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x148
      lfs       f0, -0x63DC(r2)
      stfs      f0, 0x214(r3)
      blr

    .loc_0x148:
      fsubs     f1, f1, f0
      lfs       f2, -0x63DC(r2)
      lfs       f0, 0x234(r3)
      fmuls     f1, f2, f1
      fdivs     f0, f1, f0
      fadds     f0, f2, f0
      stfs      f0, 0x214(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801272C4
 * Size:	000060
 */
void Game::TimeMgr::getSunGaugeRatio(void)
{
    /*
    .loc_0x0:
      lfs       f1, 0x20C(r3)
      lfs       f2, 0x3C(r3)
      fcmpo     cr0, f1, f2
      cror      2, 0x1, 0x2
      bne-      .loc_0x30
      lfs       f0, 0x64(r3)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x30
      fsubs     f1, f1, f2
      lfs       f0, 0x238(r3)
      fdivs     f1, f1, f0
      blr

    .loc_0x30:
      fmr       f3, f1
      fcmpo     cr0, f1, f2
      bge-      .loc_0x44
      lfs       f0, -0x6404(r2)
      fadds     f3, f1, f0

    .loc_0x44:
      lfs       f1, 0x64(r3)
      lfs       f0, 0x23C(r3)
      fsubs     f1, f3, f1
      lfs       f2, -0x6410(r2)
      fdivs     f0, f1, f0
      fsubs     f1, f2, f0
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void Game::TimeMgr::updateFrame(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80127324
 * Size:	000074
 */
void Game::TimeMgr::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0x240(r3)
      rlwinm.   r0,r0,0,31,31
      bne-      .loc_0x64
      lwz       r4, -0x6514(r13)
      lfs       f2, 0x21C(r3)
      lfs       f1, 0x54(r4)
      lfs       f0, 0x208(r3)
      fmadds    f0, f2, f1, f0
      stfs      f0, 0x208(r3)
      lfs       f0, 0x208(r3)
      lfs       f1, 0x8C(r3)
      fcmpo     cr0, f0, f1
      ble-      .loc_0x48
      fsubs     f0, f0, f1
      stfs      f0, 0x208(r3)

    .loc_0x48:
      lfs       f1, 0x208(r3)
      lfs       f0, 0x8C(r3)
      lfs       f2, -0x6404(r2)
      fdivs     f0, f1, f0
      fmuls     f0, f2, f0
      stfs      f0, 0x20C(r3)
      bl        -0x228

    .loc_0x64:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80127398
 * Size:	000018
 */
void Game::TimeMgr::isDayOver(void)
{
    /*
    .loc_0x0:
      lfs       f1, 0x20C(r3)
      lfs       f0, 0x64(r3)
      fcmpo     cr0, f1, f0
      mfcr      r0
      rlwinm    r3,r0,2,31,31
      blr
    */
}

/*
 * --INFO--
 * Address:	801273B0
 * Size:	000030
 */
void Game::TimeMgr::isDayTime(void)
{
    /*
    .loc_0x0:
      lfs       f1, 0x20C(r3)
      li        r0, 0
      lfs       f0, 0x3C(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x28
      lfs       f0, 0x64(r3)
      fcmpo     cr0, f1, f0
      cror      2, 0, 0x2
      bne-      .loc_0x28
      li        r0, 0x1

    .loc_0x28:
      mr        r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	801273E0
 * Size:	000020
 */
void Game::TimeMgr::getRealDayTime(void)
{
    /*
    .loc_0x0:
      lfs       f2, 0x64(r3)
      lfs       f1, 0x3C(r3)
      lfs       f0, -0x6404(r2)
      fsubs     f1, f2, f1
      lfs       f2, 0x8C(r3)
      fdivs     f0, f1, f0
      fmuls     f1, f2, f0
      blr
    */
}

/*
 * --INFO--
 * Address:	80127400
 * Size:	000150
 */
void Game::TimeMgr::loadSettingFile((char*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x440(r1)
      mflr      r0
      li        r5, 0
      li        r6, 0
      stw       r0, 0x444(r1)
      li        r0, 0
      li        r8, 0x2
      li        r9, 0
      stw       r31, 0x43C(r1)
      li        r10, 0
      stw       r30, 0x438(r1)
      mr        r30, r3
      mr        r3, r4
      li        r4, 0
      stw       r0, 0x8(r1)
      lwz       r7, -0x77D8(r13)
      bl        -0x1082B8
      mr.       r31, r3
      beq-      .loc_0x88
      mr        r4, r31
      addi      r3, r1, 0x10
      li        r5, -0x1
      bl        0x2EE4A0
      li        r0, 0x1
      cmpwi     r0, 0x1
      stw       r0, 0x1C(r1)
      bne-      .loc_0x74
      li        r0, 0
      stw       r0, 0x424(r1)

    .loc_0x74:
      addi      r3, r30, 0x18
      addi      r4, r1, 0x10
      bl        0x2EC378
      mr        r3, r31
      bl        -0x1033AC

    .loc_0x88:
      lfs       f2, -0x6404(r2)
      li        r0, 0
      lfs       f1, 0x1A4(r30)
      mr        r3, r30
      lfs       f0, 0xB4(r30)
      fsubs     f1, f2, f1
      fadds     f0, f1, f0
      stfs      f0, 0x220(r30)
      lfs       f1, 0xDC(r30)
      lfs       f0, 0xB4(r30)
      fsubs     f0, f1, f0
      stfs      f0, 0x224(r30)
      lfs       f1, 0x104(r30)
      lfs       f0, 0xDC(r30)
      fsubs     f0, f1, f0
      stfs      f0, 0x228(r30)
      lfs       f1, 0x12C(r30)
      lfs       f0, 0x104(r30)
      fsubs     f0, f1, f0
      stfs      f0, 0x22C(r30)
      lfs       f1, 0x154(r30)
      lfs       f0, 0x12C(r30)
      fsubs     f0, f1, f0
      stfs      f0, 0x230(r30)
      lfs       f1, 0x1A4(r30)
      lfs       f0, 0x17C(r30)
      fsubs     f0, f1, f0
      stfs      f0, 0x234(r30)
      lfs       f1, 0x64(r30)
      lfs       f0, 0x3C(r30)
      fsubs     f0, f1, f0
      stfs      f0, 0x238(r30)
      lfs       f0, 0x238(r30)
      fsubs     f0, f2, f0
      stfs      f0, 0x23C(r30)
      stw       r0, 0x218(r30)
      lfs       f0, 0x3C(r30)
      stfs      f0, 0x20C(r30)
      lfs       f1, 0x20C(r30)
      lfs       f0, 0x8C(r30)
      fdivs     f1, f1, f2
      fmuls     f0, f1, f0
      stfs      f0, 0x208(r30)
      bl        -0x3D8
      lwz       r0, 0x444(r1)
      lwz       r31, 0x43C(r1)
      lwz       r30, 0x438(r1)
      mtlr      r0
      addi      r1, r1, 0x440
      blr
    */
}

/*
 * --INFO--
 * Address:	80127550
 * Size:	000060
 */
void Game::TimeMgr::__dt(void)
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
      beq-      .loc_0x44
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x23E0
      stw       r0, 0x0(r30)
      bl        0x2EA008
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x1034DC

    .loc_0x44:
      lwz       r0, 0x14(r1)
      mr        r3, r30
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}
