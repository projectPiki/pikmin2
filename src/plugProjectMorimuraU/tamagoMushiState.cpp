

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
 * Address:	8036CCF0
 * Size:	000108
 */
void Game::TamagoMushi::FSM::init((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x6
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x23C4A4
      li        r3, 0x18
      bl        -0x348E6C
      mr.       r4, r3
      beq-      .loc_0x38
      li        r4, 0
      bl        .loc_0x108
      mr        r4, r3

    .loc_0x38:
      mr        r3, r31
      bl        -0x23C424
      li        r3, 0x10
      bl        -0x348E90
      mr.       r4, r3
      beq-      .loc_0x5C
      li        r4, 0x1
      bl        0x2E4
      mr        r4, r3

    .loc_0x5C:
      mr        r3, r31
      bl        -0x23C448
      li        r3, 0x24
      bl        -0x348EB4
      mr.       r4, r3
      beq-      .loc_0x80
      li        r4, 0x2
      bl        0x3D8
      mr        r4, r3

    .loc_0x80:
      mr        r3, r31
      bl        -0x23C46C
      li        r3, 0x10
      bl        -0x348ED8
      mr.       r4, r3
      beq-      .loc_0xA4
      li        r4, 0x3
      bl        0x6FC
      mr        r4, r3

    .loc_0xA4:
      mr        r3, r31
      bl        -0x23C490
      li        r3, 0x10
      bl        -0x348EFC
      mr.       r4, r3
      beq-      .loc_0xC8
      li        r4, 0x4
      bl        0x7C4
      mr        r4, r3

    .loc_0xC8:
      mr        r3, r31
      bl        -0x23C4B4
      li        r3, 0x10
      bl        -0x348F20
      mr.       r4, r3
      beq-      .loc_0xEC
      li        r4, 0x5
      bl        0x9F8
      mr        r4, r3

    .loc_0xEC:
      mr        r3, r31
      bl        -0x23C4D8
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x108:
    */
}

/*
 * --INFO--
 * Address:	8036CDF8
 * Size:	00003C
 */
void Game::TamagoMushi::StateWalk::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x3468
      addi      r5, r5, 0x3444
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x6A0
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8036CE34
 * Size:	000108
 */
void Game::TamagoMushi::StateWalk::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      stw       r30, 0x38(r1)
      stw       r29, 0x34(r1)
      mr        r29, r4
      li        r4, 0x2
      stw       r28, 0x30(r1)
      mr        r28, r3
      mr        r3, r29
      bl        -0x267E60
      mr        r3, r29
      bl        0x3328
      lwz       r3, 0xC0(r29)
      lwz       r31, 0x894(r3)
      lwz       r0, 0x8BC(r3)
      sub       r30, r0, r31
      bl        -0x2A38E0
      lis       r7, 0x4330
      xoris     r0, r3, 0x8000
      stw       r0, 0xC(r1)
      xoris     r6, r30, 0x8000
      xoris     r5, r31, 0x8000
      lfd       f2, 0x6B0(r2)
      stw       r7, 0x8(r1)
      li        r0, 0
      lfs       f0, 0x6A8(r2)
      mr        r3, r29
      lfd       f1, 0x8(r1)
      li        r4, 0x1
      stw       r6, 0x14(r1)
      fsubs     f1, f1, f2
      stw       r7, 0x10(r1)
      fdivs     f3, f1, f0
      lfd       f1, 0x10(r1)
      stw       r5, 0x1C(r1)
      stw       r7, 0x18(r1)
      lfd       f0, 0x18(r1)
      fsubs     f1, f1, f2
      fsubs     f0, f0, f2
      fmadds    f0, f1, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r5, 0x24(r1)
      stw       r5, 0x14(r28)
      stw       r0, 0x10(r28)
      lwz       r12, 0x0(r29)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      mr        r3, r29
      li        r4, 0x1
      lwz       r12, 0x0(r29)
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r29, 0x34(r1)
      lwz       r28, 0x30(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	8036CF3C
 * Size:	0000EC
 */
void Game::TamagoMushi::StateWalk::exec((Game::EnemyBase*))
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
      lwz       r3, 0x10(r3)
      addi      r0, r3, 0x1
      stw       r0, 0x10(r30)
      lwz       r0, 0xC8(r4)
      cmplwi    r0, 0
      beq-      .loc_0x40
      mr        r3, r31
      bl        0x2B60
      b         .loc_0x48

    .loc_0x40:
      mr        r3, r31
      bl        0x3A74

    .loc_0x48:
      lfs       f1, 0x6B8(r2)
      mr        r3, r31
      bl        0x31D4
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x6C
      lwz       r3, 0x10(r30)
      lwz       r0, 0x14(r30)
      cmpw      r3, r0
      ble-      .loc_0x90

    .loc_0x6C:
      lfs       f0, 0x6BC(r2)
      mr        r3, r31
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      stfs      f0, 0x1C8(r31)
      stfs      f0, 0x1CC(r31)
      stfs      f0, 0x1D0(r31)
      bl        -0x267D28

    .loc_0x90:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0xD4
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0xD4
      mr        r3, r31
      bl        0x2DF8
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0x1
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0xD4:
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
 * Address:	8036D028
 * Size:	00003C
 */
void Game::TamagoMushi::StateTurn::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x3468
      addi      r5, r5, 0x3420
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x6C0
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8036D064
 * Size:	000054
 */
void Game::TamagoMushi::StateTurn::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x4
      mr        r3, r31
      bl        -0x268080
      lfs       f0, 0x6BC(r2)
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      stfs      f0, 0x1C8(r31)
      stfs      f0, 0x1CC(r31)
      stfs      f0, 0x1D0(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036D0B8
 * Size:	000088
 */
void Game::TamagoMushi::StateTurn::exec((Game::EnemyBase*))
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
      bl        0x2F2C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x34
      mr        r3, r31
      bl        -0x267E48

    .loc_0x34:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x70
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x70
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x70:
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
 * Address:	8036D140
 * Size:	00003C
 */
void Game::TamagoMushi::StateAppear::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x3468
      addi      r5, r5, 0x33FC
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x6C8
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8036D17C
 * Size:	000160
 */
void Game::TamagoMushi::StateAppear::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x44(r1)
      stw       r31, 0x3C(r1)
      mr        r31, r3
      stw       r30, 0x38(r1)
      stw       r29, 0x34(r1)
      stw       r28, 0x30(r1)
      mr        r28, r4
      mr        r3, r28
      li        r4, 0x3
      bl        -0x2681A8
      mr        r3, r28
      bl        -0x265ED4
      lwz       r0, 0x1E0(r28)
      oris      r0, r0, 0x40
      stw       r0, 0x1E0(r28)
      lwz       r3, 0xC0(r28)
      lwz       r30, 0x8E4(r3)
      lwz       r0, 0x90C(r3)
      sub       r29, r0, r30
      bl        -0x2A3C34
      lis       r7, 0x4330
      xoris     r0, r3, 0x8000
      stw       r0, 0xC(r1)
      xoris     r6, r29, 0x8000
      xoris     r5, r30, 0x8000
      lfd       f2, 0x6B0(r2)
      stw       r7, 0x8(r1)
      li        r0, 0
      lfs       f0, 0x6A8(r2)
      mr        r3, r28
      lfd       f1, 0x8(r1)
      li        r4, 0
      stw       r6, 0x14(r1)
      fsubs     f1, f1, f2
      stw       r7, 0x10(r1)
      fdivs     f3, f1, f0
      lfd       f1, 0x10(r1)
      stw       r5, 0x1C(r1)
      stw       r7, 0x18(r1)
      lfd       f0, 0x18(r1)
      fsubs     f1, f1, f2
      fsubs     f0, f0, f2
      fmadds    f0, f1, f3, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r5, 0x24(r1)
      stw       r5, 0x18(r31)
      stw       r0, 0x14(r31)
      lwz       r12, 0x0(r28)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      mr        r3, r28
      li        r4, 0
      lwz       r12, 0x0(r28)
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl
      mr        r3, r28
      bl        -0x265AF8
      li        r3, 0
      li        r0, 0x1
      stb       r3, 0x10(r31)
      stb       r0, 0x20(r31)
      bl        -0x2A3CE8
      xoris     r3, r3, 0x8000
      lis       r0, 0x4330
      stw       r3, 0x2C(r1)
      lfd       f3, 0x6B0(r2)
      stw       r0, 0x28(r1)
      lfs       f1, 0x6A8(r2)
      lfd       f2, 0x28(r1)
      lfs       f0, 0x6D0(r2)
      fsubs     f2, f2, f3
      fdivs     f1, f2, f1
      fmuls     f0, f0, f1
      stfs      f0, 0x1C(r31)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      lwz       r29, 0x34(r1)
      lwz       r28, 0x30(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	8036D2DC
 * Size:	0001AC
 */
void Game::TamagoMushi::StateAppear::exec((Game::EnemyBase*))
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
      lbz       r0, 0x10(r3)
      cmplwi    r0, 0
      bne-      .loc_0x48
      mr        r3, r31
      bl        0x32D0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x48
      li        r0, 0x1
      mr        r3, r31
      stb       r0, 0x10(r30)
      bl        0x3690

    .loc_0x48:
      lbz       r0, 0x10(r30)
      cmplwi    r0, 0
      beq-      .loc_0x60
      lwz       r3, 0x14(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x14(r30)

    .loc_0x60:
      lwz       r0, 0x1E0(r31)
      rlwinm.   r0,r0,0,22,22
      bne-      .loc_0xA4
      lwz       r3, 0x14(r30)
      lwz       r0, 0x18(r30)
      cmpw      r3, r0
      ble-      .loc_0xA4
      mr        r3, r31
      bl        -0x26B990
      mr        r3, r31
      bl        -0x26602C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x9C
      mr        r3, r31
      bl        0x37C4

    .loc_0x9C:
      mr        r3, r31
      bl        -0x266178

    .loc_0xA4:
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x13C
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x2
      bne-      .loc_0x104
      mr        r3, r31
      bl        0x2EF4
      mr        r3, r31
      li        r4, 0x1
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      li        r4, 0x1
      lwz       r12, 0x0(r31)
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,10,8
      stw       r0, 0x1E0(r31)

    .loc_0x104:
      lwz       r3, 0x188(r31)
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x13C
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        -0x265C80

    .loc_0x13C:
      lbz       r0, 0x20(r30)
      cmplwi    r0, 0
      beq-      .loc_0x194
      mr        r3, r31
      bl        -0x2660F0
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x194
      mr        r3, r31
      bl        -0x2681CC
      lfs       f0, 0x1C(r30)
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x194
      li        r0, 0
      li        r4, 0x5915
      stb       r0, 0x20(r30)
      li        r5, 0
      lwz       r3, 0x28C(r31)
      lwz       r12, 0x28(r3)
      lwz       r12, 0x88(r12)
      mtctr     r12
      bctrl

    .loc_0x194:
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
 * Address:	8036D488
 * Size:	00003C
 */
void Game::TamagoMushi::StateHide::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x3468
      addi      r5, r5, 0x33D8
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x6D4
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8036D4C4
 * Size:	00006C
 */
void Game::TamagoMushi::StateHide::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x1
      mr        r3, r31
      bl        -0x2684E0
      lfs       f0, 0x6BC(r2)
      mr        r3, r31
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      stfs      f0, 0x1C8(r31)
      stfs      f0, 0x1CC(r31)
      stfs      f0, 0x1D0(r31)
      bl        -0x265D8C
      mr        r3, r31
      bl        -0x26BB94
      mr        r3, r31
      bl        0x3578
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036D530
 * Size:	000044
 */
void Game::TamagoMushi::StateHide::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x188(r4)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x34
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x34
      mr        r3, r4
      li        r4, 0
      bl        -0x232470

    .loc_0x34:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036D574
 * Size:	00003C
 */
void Game::TamagoMushi::StateDead::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x3468
      addi      r5, r5, 0x33B4
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x6DC
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8036D5B0
 * Size:	000108
 */
void Game::TamagoMushi::StateDead::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      mr        r31, r4
      li        r4, 0
      mr        r3, r31
      bl        -0x2685CC
      lfs       f0, 0x6BC(r2)
      mr        r3, r31
      stfs      f0, 0x1D4(r31)
      stfs      f0, 0x1D8(r31)
      stfs      f0, 0x1DC(r31)
      stfs      f0, 0x1C8(r31)
      stfs      f0, 0x1CC(r31)
      stfs      f0, 0x1D0(r31)
      lwz       r0, 0x1E0(r31)
      ori       r0, r0, 0x80
      stw       r0, 0x1E0(r31)
      bl        -0x267EE0
      lfs       f1, 0x6BC(r2)
      mr        r3, r31
      bl        0x100E08
      mr        r3, r31
      addi      r4, r1, 0x18
      lwz       r12, 0x0(r31)
      lwz       r12, 0x204(r12)
      mtctr     r12
      bctrl
      lwz       r5, 0x18(r1)
      lis       r4, 0x804B
      lwz       r6, 0x1C(r1)
      lis       r3, 0x804B
      lwz       r0, 0x20(r1)
      subi      r8, r4, 0x5814
      stw       r5, 0xC(r1)
      subi      r5, r3, 0x5808
      lfs       f0, 0x6E4(r2)
      lis       r4, 0x804B
      stw       r6, 0x10(r1)
      lis       r3, 0x804F
      lfs       f3, 0xC(r1)
      li        r6, 0x1
      stw       r0, 0x14(r1)
      subi      r7, r4, 0x5820
      lfs       f2, 0x10(r1)
      subi      r0, r3, 0x7A2C
      stw       r8, 0x24(r1)
      addi      r3, r1, 0x8
      lfs       f1, 0x14(r1)
      addi      r4, r1, 0x24
      stw       r5, 0x8(r1)
      stfs      f3, 0x28(r1)
      stfs      f2, 0x2C(r1)
      stfs      f1, 0x30(r1)
      stw       r7, 0x24(r1)
      stw       r6, 0x34(r1)
      stfs      f0, 0x38(r1)
      stw       r0, 0x8(r1)
      bl        0x5B6E4
      lwz       r0, 0x54(r1)
      lwz       r31, 0x4C(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	8036D6B8
 * Size:	000114
 */
void Game::TamagoMushi::StateDead::exec((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      mr        r31, r4
      lwz       r3, 0x188(r4)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x100
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x100
      mr        r3, r31
      bl        0x21E0
      mr        r3, r31
      li        r4, 0
      bl        -0x232608
      lfs       f1, 0x6BC(r2)
      mr        r3, r31
      bl        0x100B78
      mr        r3, r31
      addi      r4, r1, 0x20
      lwz       r12, 0x0(r31)
      lwz       r12, 0x204(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x20(r1)
      lis       r3, 0x804B
      lwz       r6, 0x24(r1)
      subi      r0, r3, 0x5808
      lwz       r5, 0x28(r1)
      lis       r3, 0x804B
      stw       r4, 0x8(r1)
      lis       r4, 0x804E
      subi      r10, r3, 0x5814
      lfs       f0, 0x6E4(r2)
      stw       r6, 0xC(r1)
      lis       r9, 0x804B
      lfs       f3, 0x8(r1)
      lis       r3, 0x804F
      stw       r5, 0x10(r1)
      li        r8, 0x1
      lfs       f2, 0xC(r1)
      li        r6, 0x52
      lfs       f1, 0x10(r1)
      li        r5, 0
      stw       r0, 0x14(r1)
      addi      r7, r4, 0x6A78
      subi      r9, r9, 0x5820
      subi      r0, r3, 0x79A0
      stw       r10, 0x2C(r1)
      addi      r3, r1, 0x14
      addi      r4, r1, 0x2C
      stw       r7, 0x14(r1)
      stfs      f3, 0x30(r1)
      stfs      f2, 0x34(r1)
      stfs      f1, 0x38(r1)
      stw       r9, 0x2C(r1)
      stw       r8, 0x3C(r1)
      stfs      f0, 0x40(r1)
      sth       r6, 0x18(r1)
      stw       r5, 0x1C(r1)
      stw       r0, 0x14(r1)
      bl        0x5A8F8

    .loc_0x100:
      lwz       r0, 0x54(r1)
      lwz       r31, 0x4C(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	8036D7CC
 * Size:	00003C
 */
void Game::TamagoMushi::StateWait::__ct((int))
{
    /*
    .loc_0x0:
      lis       r5, 0x804B
      lis       r6, 0x804E
      subi      r0, r5, 0x65C
      lis       r5, 0x804E
      stw       r0, 0x0(r3)
      li        r7, 0
      addi      r6, r6, 0x3468
      addi      r5, r5, 0x3390
      stw       r4, 0x4(r3)
      addi      r0, r2, 0x6E8
      stw       r7, 0x8(r3)
      stw       r6, 0x0(r3)
      stw       r5, 0x0(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8036D808
 * Size:	000074
 */
void Game::TamagoMushi::StateWait::init((Game::EnemyBase*, Game::StateArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      li        r4, 0x4
      mr        r3, r31
      bl        -0x268824
      mr        r3, r31
      bl        -0x26BE64
      mr        r3, r31
      bl        -0x2660A4
      lwz       r0, 0x1E0(r31)
      mr        r3, r31
      li        r4, 0
      rlwinm    r0,r0,0,26,24
      stw       r0, 0x1E0(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      stb       r0, 0x300(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8036D87C
 * Size:	000098
 */
void Game::TamagoMushi::StateWait::exec((Game::EnemyBase*))
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
      lbz       r0, 0x300(r4)
      cmplwi    r0, 0
      bne-      .loc_0x78
      mr        r3, r31
      li        r4, 0x1
      lwz       r12, 0x0(r31)
      lwz       r12, 0xAC(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      li        r4, 0x1
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA4(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      mr        r4, r31
      lwz       r12, 0x0(r30)
      li        r5, 0
      li        r6, 0
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x78:
      mr        r3, r31
      bl        0x30FC
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}
