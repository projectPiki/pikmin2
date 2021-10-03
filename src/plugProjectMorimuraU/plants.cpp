

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char*, ...)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803583CC
 * Size:	000050
 */
void Game::Plants::Obj::setParameters(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x255808
      lwz       r3, 0xC0(r31)
      lfs       f2, 0x190(r31)
      lfs       f1, 0x35C(r3)
      lfs       f3, 0x194(r31)
      lfs       f0, 0x18C(r31)
      fadds     f2, f2, f1
      stfs      f0, 0x270(r31)
      stfs      f2, 0x274(r31)
      stfs      f3, 0x278(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035841C
 * Size:	000020
 */
void birth__Q34Game6Plants3ObjFR10Vector3<float> f(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x255A28
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8035843C
 * Size:	0001A8
 */
void Game::Plants::Obj::onInit((Game::CreatureInitArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r30, 0x8(r1)
      bl        -0x2569FC
      lwz       r0, 0x1E0(r31)
      mr        r3, r31
      rlwinm    r0,r0,0,25,23
      stw       r0, 0x1E0(r31)
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,29,27
      stw       r0, 0x1E0(r31)
      lwz       r0, 0x1E0(r31)
      rlwinm    r0,r0,0,24,22
      stw       r0, 0x1E0(r31)
      lwz       r0, 0x1E0(r31)
      ori       r0, r0, 0x1
      stw       r0, 0x1E0(r31)
      bl        -0x255154
      mr        r3, r31
      bl        -0x256A8C
      lwz       r0, 0x1E0(r31)
      mr        r3, r31
      rlwinm    r0,r0,0,20,18
      stw       r0, 0x1E0(r31)
      lwz       r0, 0x1E0(r31)
      oris      r0, r0, 0x40
      stw       r0, 0x1E0(r31)
      bl        -0x250D38
      li        r0, 0
      addi      r3, r31, 0x138
      stb       r0, 0x2BC(r31)
      addi      r4, r31, 0x168
      addi      r5, r31, 0x1A4
      addi      r6, r31, 0x18C
      stb       r0, 0x2BD(r31)
      bl        0xCFE04
      lwz       r0, 0x174(r31)
      cmplwi    r0, 0
      bne-      .loc_0xC4
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x10D8
      li        r4, 0x53
      addi      r5, r5, 0x10E4
      crclr     6, 0x6
      bl        -0x32DEBC

    .loc_0xC4:
      mr        r3, r31
      li        r4, 0
      li        r5, 0
      bl        -0x253508
      lwz       r3, 0x184(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      lwz       r30, 0x174(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0x8(r30)
      lwz       r4, 0x4(r4)
      lwz       r4, 0x28(r4)
      lwz       r4, 0x0(r4)
      stw       r3, 0x54(r4)
      addi      r3, r31, 0x138
      lwz       r4, 0x174(r31)
      lwz       r4, 0x8(r4)
      addi      r4, r4, 0x24
      bl        -0x26E290
      lwz       r3, 0x174(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      li        r4, 0
      lwz       r12, 0x0(r31)
      lwz       r12, 0xB4(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6980(r13)
      cmplwi    r3, 0
      beq-      .loc_0x168
      mr        r4, r31
      bl        -0x116938

    .loc_0x168:
      li        r0, 0
      stb       r0, 0x2BE(r31)
      lbz       r0, 0x258(r31)
      cmplwi    r0, 0
      bne-      .loc_0x190
      lbz       r0, 0x259(r31)
      cmplwi    r0, 0x1
      bne-      .loc_0x190
      li        r0, 0x1
      stb       r0, 0x2BE(r31)

    .loc_0x190:
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
 * Address:	803585E4
 * Size:	0000EC
 */
void Game::Plants::Obj::__ct(void)
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
      addi      r0, r31, 0x2C0
      lis       r3, 0x804B
      stw       r0, 0x17C(r31)
      subi      r3, r3, 0x5988
      li        r0, 0
      stw       r3, 0x2C0(r31)
      stw       r0, 0x2C4(r31)
      stw       r0, 0x2C8(r31)

    .loc_0x40:
      mr        r3, r31
      li        r4, 0
      bl        -0x25728C
      lis       r3, 0x804E
      addi      r0, r31, 0x2C0
      addi      r5, r3, 0x16D0
      li        r3, 0x2C
      stw       r5, 0x0(r31)
      addi      r4, r5, 0x1B0
      addi      r5, r5, 0x300
      stw       r4, 0x178(r31)
      lwz       r4, 0x17C(r31)
      stw       r5, 0x0(r4)
      lwz       r4, 0x17C(r31)
      sub       r0, r0, r4
      stw       r0, 0xC(r4)
      bl        -0x3347C0
      mr.       r30, r3
      beq-      .loc_0xCC
      bl        -0x230CFC
      lis       r3, 0x804E
      lis       r4, 0x804B
      addi      r0, r3, 0x698
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
      mr        r3, r31
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
 * Address:	803586D0
 * Size:	000048
 */
void Game::Plants::Obj::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x25503C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x34
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1CC(r12)
      mtctr     r12
      bctrl

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
 * Address:	80358718
 * Size:	00006C
 */
void Game::Plants::Obj::doAnimation(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x255798
      lbz       r0, 0x2BC(r31)
      cmplwi    r0, 0
      beq-      .loc_0x58
      lwz       r3, 0x188(r31)
      lbz       r0, 0x24(r3)
      cmplwi    r0, 0
      beq-      .loc_0x58
      lwz       r0, 0x1C(r3)
      cmplwi    r0, 0x3E8
      bne-      .loc_0x58
      li        r0, 0
      mr        r3, r31
      stb       r0, 0x2BC(r31)
      li        r4, 0
      stb       r0, 0x2BD(r31)
      bl        -0x255E4C

    .loc_0x58:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80358784
 * Size:	00009C
 */
void Game::Plants::Obj::doAnimationCullingOff(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r0, 0x2BC(r3)
      cmplwi    r0, 0
      beq-      .loc_0x88
      lwz       r4, 0x188(r31)
      li        r0, 0
      stb       r0, 0x24(r4)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1D8(r12)
      mtctr     r12
      bctrl
      lbz       r0, 0xD8(r31)
      rlwinm.   r0,r0,0,29,29
      beq-      .loc_0x88
      addi      r3, r31, 0x138
      addi      r4, r31, 0x168
      addi      r5, r31, 0x1A4
      addi      r6, r31, 0x18C
      bl        0xCFAFC
      lwz       r4, 0x174(r31)
      addi      r3, r31, 0x138
      lwz       r4, 0x8(r4)
      addi      r4, r4, 0x24
      bl        -0x26E524
      lwz       r3, 0x174(r31)
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl

    .loc_0x88:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80358820
 * Size:	000020
 */
void Game::Plants::Obj::doDebugDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        -0x2529C0
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80358840
 * Size:	000150
 */
void Game::Plants::Obj::collisionCallback((Game::CollEvent&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      stw       r30, 0x28(r1)
      mr        r30, r3
      lbz       r0, 0xD8(r3)
      rlwinm.   r0,r0,0,29,29
      beq-      .loc_0x138
      lwz       r12, 0x0(r3)
      lwz       r12, 0x240(r12)
      mtctr     r12
      bctrl
      lwz       r31, 0x0(r31)
      cmplwi    r31, 0
      beq-      .loc_0x138
      mr        r4, r31
      addi      r3, r1, 0x14
      lwz       r12, 0x0(r31)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lfs       f1, 0x190(r30)
      lfs       f0, 0x1F0(r2)
      lfs       f2, 0x18(r1)
      fsubs     f0, f1, f0
      fcmpo     cr0, f2, f0
      blt-      .loc_0x138
      mr        r4, r31
      addi      r3, r1, 0x8
      lwz       r12, 0x0(r31)
      lwz       r12, 0x6C(r12)
      mtctr     r12
      bctrl
      lfs       f0, 0x8(r1)
      lfs       f1, 0x1F4(r2)
      fabs      f0, f0
      lfs       f2, 0x10(r1)
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      bgt-      .loc_0xB8
      fabs      f0, f2
      frsp      f0, f0
      fcmpo     cr0, f0, f1
      ble-      .loc_0x138

    .loc_0xB8:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x100
      lbz       r0, 0x2BD(r30)
      cmplwi    r0, 0
      bne-      .loc_0x100
      li        r0, 0x1
      mr        r3, r30
      stb       r0, 0x2BD(r30)
      mr        r4, r31
      lwz       r12, 0x0(r30)
      lwz       r12, 0x2FC(r12)
      mtctr     r12
      bctrl

    .loc_0x100:
      lbz       r0, 0x2BC(r30)
      cmplwi    r0, 0
      bne-      .loc_0x138
      mr        r3, r30
      li        r4, 0
      li        r5, 0
      bl        -0x253954
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x2F8(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      stb       r0, 0x2BC(r30)

    .loc_0x138:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80358990
 * Size:	000060
 */
void Game::Plants::Obj::earthquakeCallBack((Game::Creature*, float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lbz       r0, 0x2BC(r3)
      cmplwi    r0, 0
      bne-      .loc_0x48
      li        r4, 0
      li        r5, 0
      bl        -0x2539B4
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x2F8(r12)
      mtctr     r12
      bctrl
      li        r0, 0x1
      stb       r0, 0x2BC(r31)

    .loc_0x48:
      lwz       r0, 0x14(r1)
      li        r3, 0
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803589F0
 * Size:	0000A0
 */
void Game::Plants::Obj::touched(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      mr        r30, r3
      lbz       r0, 0x2BE(r3)
      cmplwi    r0, 0
      beq-      .loc_0x88
      li        r0, 0
      li        r4, 0x4D
      stb       r0, 0x2BE(r30)
      lwz       r3, -0x6E20(r13)
      bl        -0x24AD80
      mr.       r31, r3
      beq-      .loc_0x88
      addi      r3, r1, 0x8
      bl        -0x229E10
      lfs       f1, 0x18C(r30)
      mr        r3, r31
      lfs       f0, 0x1F8(r2)
      addi      r4, r1, 0x8
      stfs      f1, 0x8(r1)
      li        r5, 0x5
      lfs       f2, 0x190(r30)
      stfs      f2, 0xC(r1)
      lfs       f1, 0x194(r30)
      stfs      f1, 0x10(r1)
      lwz       r6, 0xC0(r30)
      lfs       f1, 0x12C(r6)
      fadds     f1, f2, f1
      stfs      f0, 0x14(r1)
      stfs      f1, 0xC(r1)
      bl        0x30744

    .loc_0x88:
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
 * Address:	80358A90
 * Size:	000040
 */
void Game::Plants::Obj::touchedSE((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0
      stw       r0, 0x14(r1)
      beq-      .loc_0x30
      lwz       r3, 0x26C(r4)
      li        r4, 0x80A
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0x30:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80358AD0
 * Size:	000040
 */
void Game::HikariKinoko::Obj::touchedSE((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0
      stw       r0, 0x14(r1)
      beq-      .loc_0x30
      lwz       r3, 0x26C(r4)
      li        r4, 0x81A
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0x30:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80358B10
 * Size:	000048
 */
void Game::Watage::Obj::doEntry(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x7
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, -0x6C18(r13)
      bl        -0x1A3AEC
      mr        r3, r31
      bl        -0x2554E8
      lwz       r3, -0x6C18(r13)
      li        r4, 0
      bl        -0x1A3B00
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80358B58
 * Size:	000104
 */
void Game::Watage::Obj::touched(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stw       r31, 0x5C(r1)
      stw       r30, 0x58(r1)
      mr        r30, r3
      lbz       r0, 0x2BE(r3)
      cmplwi    r0, 0
      beq-      .loc_0x88
      li        r0, 0
      li        r4, 0x4D
      stb       r0, 0x2BE(r30)
      lwz       r3, -0x6E20(r13)
      bl        -0x24AEE8
      mr.       r31, r3
      beq-      .loc_0x88
      addi      r3, r1, 0x24
      bl        -0x229F78
      lfs       f1, 0x18C(r30)
      mr        r3, r31
      lfs       f0, 0x1F8(r2)
      addi      r4, r1, 0x24
      stfs      f1, 0x24(r1)
      li        r5, 0x5
      lfs       f2, 0x190(r30)
      stfs      f2, 0x28(r1)
      lfs       f1, 0x194(r30)
      stfs      f1, 0x2C(r1)
      lwz       r6, 0xC0(r30)
      lfs       f1, 0x12C(r6)
      fadds     f1, f2, f1
      stfs      f0, 0x30(r1)
      stfs      f1, 0x28(r1)
      bl        0x305DC

    .loc_0x88:
      lis       r4, 0x804B
      lis       r3, 0x804E
      subi      r0, r4, 0x5808
      lis       r4, 0x804E
      stw       r0, 0x18(r1)
      addi      r0, r3, 0x6A78
      lis       r3, 0x804B
      li        r7, 0x1E4
      stw       r0, 0x18(r1)
      addi      r5, r4, 0x105C
      subi      r0, r3, 0x5814
      li        r6, 0
      sth       r7, 0x1C(r1)
      addi      r3, r1, 0x18
      addi      r4, r1, 0x8
      stw       r6, 0x20(r1)
      stw       r5, 0x18(r1)
      stw       r0, 0x8(r1)
      lfs       f0, 0x18C(r30)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x190(r30)
      stfs      f0, 0x10(r1)
      lfs       f0, 0x194(r30)
      stfs      f0, 0x14(r1)
      bl        0x56344
      lwz       r0, 0x64(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	80358C5C
 * Size:	000048
 */
void Game::Nekojarashi::Obj::doEntry(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x7
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, -0x6C18(r13)
      bl        -0x1A3C38
      mr        r3, r31
      bl        -0x255634
      lwz       r3, -0x6C18(r13)
      li        r4, 0
      bl        -0x1A3C4C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80358CA4
 * Size:	000040
 */
void Game::DiodeRed::Obj::touchedSE((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0
      stw       r0, 0x14(r1)
      beq-      .loc_0x30
      lwz       r3, 0x26C(r4)
      li        r4, 0x819
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0x30:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80358CE4
 * Size:	000048
 */
void Game::DiodeRed::Obj::doEntry(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x7
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, -0x6C18(r13)
      bl        -0x1A3CC0
      mr        r3, r31
      bl        -0x2556BC
      lwz       r3, -0x6C18(r13)
      li        r4, 0
      bl        -0x1A3CD4
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80358D2C
 * Size:	000040
 */
void Game::DiodeGreen::Obj::touchedSE((Game::Navi*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0
      stw       r0, 0x14(r1)
      beq-      .loc_0x30
      lwz       r3, 0x26C(r4)
      li        r4, 0x819
      li        r5, 0
      lwz       r12, 0x28(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl

    .loc_0x30:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80358D6C
 * Size:	000048
 */
void Game::DiodeGreen::Obj::doEntry(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x7
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, -0x6C18(r13)
      bl        -0x1A3D48
      mr        r3, r31
      bl        -0x255744
      lwz       r3, -0x6C18(r13)
      li        r4, 0
      bl        -0x1A3D5C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80358DB4
 * Size:	000058
 */
void Game::DiodeGreen::Obj::setParameters(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x2561F0
      lwz       r3, 0xC0(r31)
      li        r0, 0x1
      lfs       f2, 0x190(r31)
      lfs       f1, 0x35C(r3)
      lfs       f3, 0x194(r31)
      lfs       f0, 0x18C(r31)
      fadds     f2, f2, f1
      stfs      f0, 0x270(r31)
      stfs      f2, 0x274(r31)
      stfs      f3, 0x278(r31)
      stb       r0, 0x26C(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80358E0C
 * Size:	00006C
 */
void Game::DiodeGreen::Obj::getLODCylinder((Sys::Cylinder&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      mr        r0, r4
      addi      r4, r1, 0x14
      addi      r5, r1, 0x8
      lfs       f3, 0x18C(r3)
      stfs      f3, 0x8(r1)
      lfs       f2, 0x190(r3)
      stfs      f2, 0xC(r1)
      frsp      f1, f2
      lfs       f0, 0x194(r3)
      stfs      f0, 0x10(r1)
      stfs      f3, 0x14(r1)
      stfs      f2, 0x18(r1)
      stfs      f0, 0x1C(r1)
      lwz       r6, 0xC0(r3)
      mr        r3, r0
      lfs       f0, 0x3AC(r6)
      fadds     f0, f1, f0
      stfs      f0, 0x18(r1)
      lfs       f1, 0x384(r6)
      bl        0xC8800
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80358E78
 * Size:	000008
 */
void Game::DiodeGreen::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x56
      blr
    */
}

/*
 * --INFO--
 * Address:	80358E80
 * Size:	000058
 */
void Game::DiodeRed::Obj::setParameters(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x2562BC
      lwz       r3, 0xC0(r31)
      li        r0, 0x1
      lfs       f2, 0x190(r31)
      lfs       f1, 0x35C(r3)
      lfs       f3, 0x194(r31)
      lfs       f0, 0x18C(r31)
      fadds     f2, f2, f1
      stfs      f0, 0x270(r31)
      stfs      f2, 0x274(r31)
      stfs      f3, 0x278(r31)
      stb       r0, 0x26C(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80358ED8
 * Size:	00006C
 */
void Game::DiodeRed::Obj::getLODCylinder((Sys::Cylinder&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      mr        r0, r4
      addi      r4, r1, 0x14
      addi      r5, r1, 0x8
      lfs       f3, 0x18C(r3)
      stfs      f3, 0x8(r1)
      lfs       f2, 0x190(r3)
      stfs      f2, 0xC(r1)
      frsp      f1, f2
      lfs       f0, 0x194(r3)
      stfs      f0, 0x10(r1)
      stfs      f3, 0x14(r1)
      stfs      f2, 0x18(r1)
      stfs      f0, 0x1C(r1)
      lwz       r6, 0xC0(r3)
      mr        r3, r0
      lfs       f0, 0x3AC(r6)
      fadds     f0, f1, f0
      stfs      f0, 0x18(r1)
      lfs       f1, 0x384(r6)
      bl        0xC8734
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80358F44
 * Size:	000008
 */
void Game::DiodeRed::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x55
      blr
    */
}

/*
 * --INFO--
 * Address:	80358F4C
 * Size:	000058
 */
void Game::Nekojarashi::Obj::setParameters(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x256388
      lwz       r3, 0xC0(r31)
      li        r0, 0x1
      lfs       f2, 0x190(r31)
      lfs       f1, 0x35C(r3)
      lfs       f3, 0x194(r31)
      lfs       f0, 0x18C(r31)
      fadds     f2, f2, f1
      stfs      f0, 0x270(r31)
      stfs      f2, 0x274(r31)
      stfs      f3, 0x278(r31)
      stb       r0, 0x26C(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80358FA4
 * Size:	000114
 */
void Game::Nekojarashi::Obj::getLODCylinder((Sys::Cylinder&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lfs       f0, 0x1F8(r2)
      mr        r7, r4
      stw       r0, 0x44(r1)
      lfs       f2, 0x1FC(r2)
      lfs       f6, 0x1FC(r3)
      lfs       f3, 0x18C(r3)
      fcmpo     cr0, f6, f0
      lfs       f4, 0x190(r3)
      lfs       f5, 0x194(r3)
      bge-      .loc_0x5C
      lfs       f0, 0x200(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f6, f0
      fctiwz    f0, f0
      stfd      f0, 0x20(r1)
      lwz       r0, 0x24(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f0, r4, r0
      fneg      f1, f0
      b         .loc_0x80

    .loc_0x5C:
      lfs       f0, 0x204(r2)
      lis       r4, 0x8050
      addi      r4, r4, 0x71A0
      fmuls     f0, f6, f0
      fctiwz    f0, f0
      stfd      f0, 0x28(r1)
      lwz       r0, 0x2C(r1)
      rlwinm    r0,r0,3,18,28
      lfsx      f1, r4, r0

    .loc_0x80:
      lfs       f0, 0x1F8(r2)
      fnmsubs   f3, f2, f1, f3
      fcmpo     cr0, f6, f0
      bge-      .loc_0x94
      fneg      f6, f6

    .loc_0x94:
      lfs       f0, 0x204(r2)
      lis       r4, 0x8050
      addi      r6, r4, 0x71A0
      lfs       f2, 0x1FC(r2)
      fmuls     f0, f6, f0
      stfs      f3, 0x8(r1)
      frsp      f1, f4
      addi      r4, r1, 0x14
      stfs      f4, 0xC(r1)
      addi      r5, r1, 0x8
      fctiwz    f0, f0
      stfs      f3, 0x14(r1)
      stfs      f4, 0x18(r1)
      stfd      f0, 0x30(r1)
      lwz       r0, 0x34(r1)
      rlwinm    r0,r0,3,18,28
      add       r6, r6, r0
      lfs       f0, 0x4(r6)
      fnmsubs   f5, f2, f0, f5
      stfs      f5, 0x10(r1)
      stfs      f5, 0x1C(r1)
      lwz       r6, 0xC0(r3)
      mr        r3, r7
      lfs       f0, 0x3AC(r6)
      fadds     f0, f1, f0
      stfs      f0, 0x18(r1)
      lfs       f1, 0x384(r6)
      bl        0xC85C0
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	803590B8
 * Size:	000008
 */
void Game::Nekojarashi::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x58
      blr
    */
}

/*
 * --INFO--
 * Address:	803590C0
 * Size:	000008
 */
void Game::Watage::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x51
      blr
    */
}

/*
 * --INFO--
 * Address:	803590C8
 * Size:	000058
 */
void Game::HikariKinoko::Obj::setParameters(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x256504
      lwz       r3, 0xC0(r31)
      li        r0, 0x1
      lfs       f2, 0x190(r31)
      lfs       f1, 0x35C(r3)
      lfs       f3, 0x194(r31)
      lfs       f0, 0x18C(r31)
      fadds     f2, f2, f1
      stfs      f0, 0x270(r31)
      stfs      f2, 0x274(r31)
      stfs      f3, 0x278(r31)
      stb       r0, 0x26C(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80359120
 * Size:	00006C
 */
void Game::HikariKinoko::Obj::getLODCylinder((Sys::Cylinder&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      mr        r0, r4
      addi      r4, r1, 0x14
      addi      r5, r1, 0x8
      lfs       f3, 0x18C(r3)
      stfs      f3, 0x8(r1)
      lfs       f2, 0x190(r3)
      stfs      f2, 0xC(r1)
      frsp      f1, f2
      lfs       f0, 0x194(r3)
      stfs      f0, 0x10(r1)
      stfs      f3, 0x14(r1)
      stfs      f2, 0x18(r1)
      stfs      f0, 0x1C(r1)
      lwz       r6, 0xC0(r3)
      mr        r3, r0
      lfs       f0, 0x3AC(r6)
      fadds     f0, f1, f0
      stfs      f0, 0x18(r1)
      lfs       f1, 0x384(r6)
      bl        0xC84EC
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8035918C
 * Size:	000008
 */
void Game::HikariKinoko::Obj::getEnemyTypeID(void)
{
    /*
    .loc_0x0:
      li        r3, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80359194
 * Size:	000028
 */
void __sinit_plants_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804E
      stw       r0, -0x6748(r13)
      stfsu     f0, 0x6C0(r3)
      stfs      f0, -0x6744(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
