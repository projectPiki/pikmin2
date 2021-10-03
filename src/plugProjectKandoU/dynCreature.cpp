

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
 * Address:	801A7F3C
 * Size:	00005C
 */
void Game::DynParticleMgr::__ct((int))
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
      bl        0x2488
      lis       r4, 0x804B
      mr        r3, r30
      addi      r5, r4, 0x53F0
      mr        r4, r31
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x2C
      stw       r0, 0x1C(r30)
      bl        0x22A8
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
 * Address:	801A7F98
 * Size:	0000A0
 */
void MonoObjectMgr<Game::DynParticle>::~MonoObjectMgr()
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
      lis       r4, 0x804B
      addi      r4, r4, 0x5524
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x2C
      stw       r0, 0x1C(r30)
      beq-      .loc_0x74
      lis       r4, 0x804B
      addi      r4, r4, 0x54A8
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x2C
      stw       r0, 0x1C(r30)
      beq-      .loc_0x74
      lis       r4, 0x804B
      addi      r0, r4, 0x547C
      stw       r0, 0x0(r30)
      beq-      .loc_0x74
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x5324
      stw       r0, 0x0(r30)
      bl        0x269580

    .loc_0x74:
      extsh.    r0, r31
      ble-      .loc_0x84
      mr        r3, r30
      bl        -0x183F64

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
 * Address:	801A8038
 * Size:	000030
 */
void Game::DynParticleMgr::resetMgr(void)
{
    /*
    .loc_0x0:
      li        r6, 0
      li        r5, 0x1
      b         .loc_0x18

    .loc_0xC:
      lwz       r4, 0x2C(r3)
      stbx      r5, r4, r6
      addi      r6, r6, 0x1

    .loc_0x18:
      lwz       r0, 0x24(r3)
      cmpw      r6, r0
      blt+      .loc_0xC
      li        r0, 0
      stw       r0, 0x20(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801A8068
 * Size:	000078
 */
void Game::DynParticle::getAt((int))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r6, 0x8048
      lis       r5, 0x8048
      stw       r0, 0x24(r1)
      stmw      r27, 0xC(r1)
      mr        r27, r4
      mr        r29, r3
      subi      r30, r6, 0x9D0
      subi      r31, r5, 0x9C0
      li        r28, 0
      b         .loc_0x58

    .loc_0x30:
      cmplwi    r29, 0
      bne-      .loc_0x50
      mr        r3, r30
      mr        r5, r31
      mr        r6, r27
      li        r4, 0x86
      crclr     6, 0x6
      bl        -0x17DA74

    .loc_0x50:
      lwz       r29, 0x1C(r29)
      addi      r28, r28, 0x1

    .loc_0x58:
      cmpw      r28, r27
      blt+      .loc_0x30
      mr        r3, r29
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void Game::DynParticle::release(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void Game::DynParticle::updateGlobal((Matrixf&))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A80E0
 * Size:	000074
 */
void Game::DynCreature::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x6D270
      lis       r4, 0x804B
      addi      r3, r31, 0x17C
      addi      r0, r4, 0x5224
      stw       r0, 0x0(r31)
      bl        -0x6E0B8
      li        r0, 0
      lfs       f0, -0x5128(r2)
      stw       r0, 0x30C(r31)
      mr        r3, r31
      stw       r0, 0x178(r31)
      stfs      f0, 0x2F4(r31)
      stfs      f0, 0x2F8(r31)
      stfs      f0, 0x2FC(r31)
      stfs      f0, 0x300(r31)
      stfs      f0, 0x304(r31)
      stfs      f0, 0x308(r31)
      stb       r0, 0x310(r31)
      stb       r0, 0x311(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801A8154
 * Size:	0000B0
 */
void Game::DynCreature::createParticles((int))
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
      stw       r31, 0x178(r3)
      b         .loc_0x84

    .loc_0x34:
      lwz       r3, -0x6C70(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0
      bne-      .loc_0x60
      mr        r3, r28
      bl        .loc_0xB0
      li        r3, 0
      b         .loc_0x90

    .loc_0x60:
      stw       r31, 0x1C(r3)
      lwz       r0, 0x178(r28)
      cmplwi    r0, 0
      beq-      .loc_0x7C
      stw       r0, 0x1C(r3)
      stw       r3, 0x178(r28)
      b         .loc_0x80

    .loc_0x7C:
      stw       r3, 0x178(r28)

    .loc_0x80:
      addi      r30, r30, 0x1

    .loc_0x84:
      cmpw      r30, r29
      blt+      .loc_0x34
      li        r3, 0x1

    .loc_0x90:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r28, 0x10(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0xB0:
    */
}

/*
 * --INFO--
 * Address:	801A8204
 * Size:	000074
 */
void Game::DynCreature::releaseParticles(void)
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
      lwz       r30, 0x178(r3)
      cmplwi    r30, 0
      beq-      .loc_0x58
      li        r31, 0
      b         .loc_0x48

    .loc_0x30:
      lwz       r3, -0x6C70(r13)
      mr        r4, r30
      bl        0xEE0
      lwz       r0, 0x1C(r30)
      stw       r31, 0x1C(r30)
      mr        r30, r0

    .loc_0x48:
      cmplwi    r30, 0
      bne+      .loc_0x30
      li        r0, 0
      stw       r0, 0x178(r29)

    .loc_0x58:
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
 * Address:	801A8278
 * Size:	00006C
 */
void Game::DynCreature::updateParticlePositions(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r3
      lwz       r31, 0x178(r3)
      b         .loc_0x4C

    .loc_0x20:
      mr        r4, r31
      addi      r3, r30, 0x138
      addi      r5, r1, 0x8
      bl        -0xBD6CC
      lfs       f1, 0xC(r1)
      lfs       f2, 0x10(r1)
      lfs       f0, 0x8(r1)
      stfs      f0, 0xC(r31)
      stfs      f1, 0x10(r31)
      stfs      f2, 0x14(r31)
      lwz       r31, 0x1C(r31)

    .loc_0x4C:
      cmplwi    r31, 0
      bne+      .loc_0x20
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
 * Address:	801A82E4
 * Size:	0004F4
 */
void Game::DynCreature::computeForces((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      lwz       r6, -0x6D98(r13)
      lbz       r0, 0x3C(r6)
      cmplwi    r0, 0
      beq-      .loc_0x2CC
      lwz       r5, 0x178(r3)
      b         .loc_0x2C0

    .loc_0x1C:
      lbz       r0, 0x2C(r5)
      cmplwi    r0, 0
      beq-      .loc_0x2BC
      lfs       f1, 0x14(r5)
      lfs       f0, 0x308(r3)
      lfs       f5, 0x1D4(r3)
      fsubs     f9, f1, f0
      lfs       f3, 0xC(r5)
      lfs       f1, 0x300(r3)
      lfs       f2, 0x10(r5)
      lfs       f0, 0x304(r3)
      fsubs     f6, f3, f1
      fmuls     f1, f5, f9
      lfs       f4, 0x1DC(r3)
      fsubs     f8, f2, f0
      lfs       f7, 0x1D8(r3)
      lfs       f0, 0x1C0(r3)
      fmsubs    f3, f4, f6, f1
      fmuls     f2, f4, f8
      lfs       f1, 0x1BC(r3)
      fmuls     f4, f7, f6
      lfs       f6, 0x24(r5)
      fadds     f0, f3, f0
      fmsubs    f3, f7, f9, f2
      fmsubs    f5, f5, f8, f4
      lfs       f4, 0x1C4(r3)
      fmuls     f2, f0, f6
      lfs       f7, 0x20(r5)
      fadds     f8, f3, f1
      fadds     f1, f5, f4
      lfs       f5, 0x28(r5)
      fmadds    f2, f8, f7, f2
      lfs       f3, 0x1CC(r3)
      lfs       f4, 0x1C8(r3)
      fmuls     f3, f3, f6
      lfs       f12, 0x1D0(r3)
      fmadds    f13, f1, f5, f2
      lfs       f9, -0x5128(r2)
      fmadds    f11, f4, f7, f3
      fmuls     f2, f6, f13
      fmuls     f10, f7, f13
      fmuls     f4, f5, f13
      fsubs     f3, f0, f2
      fsubs     f2, f8, f10
      fsubs     f4, f1, f4
      fmuls     f10, f3, f3
      fmadds    f12, f12, f5, f11
      fmuls     f11, f4, f4
      fmadds    f10, f2, f2, f10
      fadds     f10, f11, f10
      fcmpo     cr0, f10, f9
      ble-      .loc_0xFC
      ble-      .loc_0x100
      fsqrte    f9, f10
      fmuls     f10, f9, f10
      b         .loc_0x100

    .loc_0xFC:
      fmr       f10, f9

    .loc_0x100:
      lfs       f9, -0x5128(r2)
      fcmpo     cr0, f10, f9
      ble-      .loc_0x120
      lfs       f9, -0x5124(r2)
      fdivs     f9, f9, f10
      fmuls     f2, f2, f9
      fmuls     f3, f3, f9
      fmuls     f4, f4, f9

    .loc_0x120:
      fmuls     f10, f7, f12
      lfs       f11, 0x1C8(r3)
      fmuls     f7, f3, f0
      fmuls     f9, f6, f12
      fadds     f10, f11, f10
      fmadds    f6, f2, f8, f7
      fmuls     f7, f5, f12
      stfs      f10, 0x1C8(r3)
      fmadds    f5, f4, f1, f6
      lfs       f6, 0x1CC(r3)
      fadds     f6, f6, f9
      fabs      f5, f5
      stfs      f6, 0x1CC(r3)
      frsp      f5, f5
      lfs       f6, 0x1D0(r3)
      fadds     f6, f6, f7
      stfs      f6, 0x1D0(r3)
      lwz       r4, -0x6D98(r13)
      lfs       f6, 0x80(r4)
      fcmpo     cr0, f5, f6
      bge-      .loc_0x200
      fmuls     f1, f3, f3
      lfs       f0, -0x5128(r2)
      fmuls     f5, f4, f4
      fmadds    f1, f2, f2, f1
      fadds     f1, f5, f1
      fcmpo     cr0, f1, f0
      ble-      .loc_0x1A0
      ble-      .loc_0x1A4
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x1A4

    .loc_0x1A0:
      fmr       f1, f0

    .loc_0x1A4:
      lfs       f0, -0x5128(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x1C4
      lfs       f0, -0x5124(r2)
      fdivs     f0, f0, f1
      fmuls     f2, f2, f0
      fmuls     f3, f3, f0
      fmuls     f4, f4, f0

    .loc_0x1C4:
      lwz       r4, -0x6D98(r13)
      lfs       f0, 0x1C8(r3)
      lfs       f1, 0x58(r4)
      fmuls     f2, f2, f1
      fmuls     f3, f3, f1
      fmuls     f1, f4, f1
      fsubs     f0, f0, f2
      stfs      f0, 0x1C8(r3)
      lfs       f0, 0x1CC(r3)
      fsubs     f0, f0, f3
      stfs      f0, 0x1CC(r3)
      lfs       f0, 0x1D0(r3)
      fsubs     f0, f0, f1
      stfs      f0, 0x1D0(r3)
      b         .loc_0x2BC

    .loc_0x200:
      lfs       f4, 0x24(r5)
      lfs       f5, 0x20(r5)
      fmuls     f3, f0, f4
      lfs       f6, 0x28(r5)
      lfs       f2, -0x5128(r2)
      fmadds    f3, f8, f5, f3
      fmadds    f3, f1, f6, f3
      fmuls     f4, f4, f3
      fmuls     f5, f5, f3
      fmuls     f3, f6, f3
      fsubs     f6, f0, f4
      fsubs     f4, f8, f5
      fsubs     f5, f1, f3
      fmuls     f0, f6, f6
      fmuls     f1, f5, f5
      fmadds    f0, f4, f4, f0
      fadds     f1, f1, f0
      fcmpo     cr0, f1, f2
      ble-      .loc_0x25C
      ble-      .loc_0x260
      fsqrte    f0, f1
      fmuls     f1, f0, f1
      b         .loc_0x260

    .loc_0x25C:
      fmr       f1, f2

    .loc_0x260:
      lfs       f0, -0x5128(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x280
      lfs       f0, -0x5124(r2)
      fdivs     f0, f0, f1
      fmuls     f4, f4, f0
      fmuls     f6, f6, f0
      fmuls     f5, f5, f0

    .loc_0x280:
      lwz       r4, -0x6D98(r13)
      lfs       f2, 0x1C8(r3)
      lfs       f0, 0x168(r4)
      fneg      f3, f0
      fmuls     f1, f4, f3
      fmuls     f0, f6, f3
      fmuls     f3, f5, f3
      fadds     f1, f2, f1
      stfs      f1, 0x1C8(r3)
      lfs       f1, 0x1CC(r3)
      fadds     f0, f1, f0
      stfs      f0, 0x1CC(r3)
      lfs       f0, 0x1D0(r3)
      fadds     f0, f0, f3
      stfs      f0, 0x1D0(r3)

    .loc_0x2BC:
      lwz       r5, 0x1C(r5)

    .loc_0x2C0:
      cmplwi    r5, 0
      bne+      .loc_0x1C
      b         .loc_0x4EC

    .loc_0x2CC:
      lwz       r7, 0x178(r3)
      li        r4, 0
      li        r8, 0
      mr        r5, r7
      b         .loc_0x2F8

    .loc_0x2E0:
      lbz       r0, 0x2C(r5)
      cmplwi    r0, 0
      beq-      .loc_0x2F0
      addi      r4, r4, 0x1

    .loc_0x2F0:
      lwz       r5, 0x1C(r5)
      addi      r8, r8, 0x1

    .loc_0x2F8:
      cmplwi    r5, 0
      bne+      .loc_0x2E0
      cmpwi     r4, 0
      beq-      .loc_0x4EC
      lbz       r0, 0x114(r6)
      cmplwi    r0, 0
      beq-      .loc_0x4EC
      lis       r5, 0x4330
      xoris     r0, r4, 0x8000
      xoris     r4, r8, 0x8000
      stw       r0, 0xC(r1)
      lbz       r0, 0x14C(r6)
      stw       r5, 0x8(r1)
      lfd       f3, -0x5120(r2)
      cmplwi    r0, 0
      lfd       f0, 0x8(r1)
      stw       r4, 0x14(r1)
      fsubs     f2, f0, f3
      stw       r5, 0x10(r1)
      lfd       f0, 0x10(r1)
      fsubs     f0, f0, f3
      fdivs     f2, f2, f0
      beq-      .loc_0x358
      lfs       f1, 0x168(r6)

    .loc_0x358:
      fneg      f0, f1
      mr        r5, r7
      fmuls     f3, f0, f2
      b         .loc_0x4E4

    .loc_0x368:
      lbz       r0, 0x2C(r5)
      cmplwi    r0, 0
      beq-      .loc_0x4E0
      lfs       f1, 0x14(r5)
      lfs       f0, 0x308(r3)
      lwz       r4, -0x6D98(r13)
      fsubs     f2, f1, f0
      lfs       f10, 0x1D4(r3)
      lfs       f6, 0xC(r5)
      lfs       f0, 0x300(r3)
      lfs       f5, 0x10(r5)
      fmuls     f4, f10, f2
      lfs       f1, 0x304(r3)
      fsubs     f0, f6, f0
      lfs       f9, 0x1DC(r3)
      fsubs     f1, f5, f1
      lfs       f11, 0x1D8(r3)
      fmsubs    f7, f9, f0, f4
      lfs       f6, 0x1C0(r3)
      fmuls     f8, f11, f0
      lbz       r0, 0x130(r4)
      fmuls     f4, f9, f1
      lfs       f5, 0x1BC(r3)
      fadds     f9, f7, f6
      lfs       f12, 0x24(r5)
      fmsubs    f8, f10, f1, f8
      lfs       f7, 0x1C4(r3)
      fmsubs    f6, f11, f2, f4
      lfs       f11, 0x20(r5)
      fmuls     f4, f9, f12
      lfs       f10, 0x28(r5)
      fadds     f7, f8, f7
      cmplwi    r0, 0
      fadds     f8, f6, f5
      fmadds    f4, f8, f11, f4
      fmadds    f4, f7, f10, f4
      fmuls     f6, f11, f4
      fmuls     f5, f12, f4
      fmuls     f4, f10, f4
      fsubs     f6, f8, f6
      fsubs     f8, f9, f5
      fsubs     f7, f7, f4
      beq-      .loc_0x464
      fmuls     f5, f8, f8
      lfs       f4, -0x5128(r2)
      fmuls     f9, f7, f7
      fmadds    f5, f6, f6, f5
      fadds     f5, f9, f5
      fcmpo     cr0, f5, f4
      ble-      .loc_0x440
      ble-      .loc_0x444
      fsqrte    f4, f5
      fmuls     f5, f4, f5
      b         .loc_0x444

    .loc_0x440:
      fmr       f5, f4

    .loc_0x444:
      lfs       f4, -0x5128(r2)
      fcmpo     cr0, f5, f4
      ble-      .loc_0x464
      lfs       f4, -0x5124(r2)
      fdivs     f4, f4, f5
      fmuls     f6, f6, f4
      fmuls     f8, f8, f4
      fmuls     f7, f7, f4

    .loc_0x464:
      fmuls     f10, f6, f3
      lfs       f4, 0x1C8(r3)
      fmuls     f11, f8, f3
      lfs       f5, 0x1CC(r3)
      fmuls     f12, f7, f3
      lfs       f6, 0x1D0(r3)
      fadds     f4, f4, f10
      fadds     f5, f5, f11
      fadds     f6, f6, f12
      stfs      f4, 0x1C8(r3)
      stfs      f5, 0x1CC(r3)
      stfs      f6, 0x1D0(r3)
      lwz       r4, -0x6D98(r13)
      lbz       r0, 0x190(r4)
      cmplwi    r0, 0
      bne-      .loc_0x4E0
      fmuls     f4, f2, f11
      lfs       f5, 0x1EC(r3)
      fmuls     f6, f0, f12
      lfs       f7, 0x1F0(r3)
      fmuls     f8, f1, f10
      lfs       f9, 0x1F4(r3)
      fmsubs    f1, f1, f12, f4
      fmsubs    f2, f2, f10, f6
      fmsubs    f4, f0, f11, f8
      fadds     f0, f5, f1
      fadds     f1, f7, f2
      fadds     f2, f9, f4
      stfs      f0, 0x1EC(r3)
      stfs      f1, 0x1F0(r3)
      stfs      f2, 0x1F4(r3)

    .loc_0x4E0:
      lwz       r5, 0x1C(r5)

    .loc_0x4E4:
      cmplwi    r5, 0
      bne+      .loc_0x368

    .loc_0x4EC:
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	801A87D8
 * Size:	0000B4
 */
void tracemoveCallback__Q24Game11DynCreatureFR10Vector3<float>
R10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r5
      mr        r5, r4
      li        r4, 0
      stw       r30, 0x8(r1)
      mr        r30, r3
      addi      r3, r30, 0x17C
      lwz       r6, -0x6D98(r13)
      lfs       f1, 0xEC(r6)
      mr        r6, r31
      bl        -0x6DC98
      lwz       r0, 0x30C(r30)
      cmplwi    r0, 0
      beq-      .loc_0x9C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x9C
      lbz       r0, 0x310(r30)
      cmplwi    r0, 0
      bne-      .loc_0x70
      mr        r3, r30
      li        r4, 0
      lwz       r12, 0x0(r30)
      lwz       r12, 0xE8(r12)
      mtctr     r12
      bctrl

    .loc_0x70:
      li        r0, 0x1
      stb       r0, 0x311(r30)
      lwz       r3, 0x30C(r30)
      stb       r0, 0x2C(r3)
      lwz       r3, 0x30C(r30)
      lfs       f0, 0x0(r31)
      stfs      f0, 0x20(r3)
      lfs       f0, 0x4(r31)
      stfs      f0, 0x24(r3)
      lfs       f0, 0x8(r31)
      stfs      f0, 0x28(r3)

    .loc_0x9C:
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
 * Size:	000028
 */
void range_check(float)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void range_check(Vector3<float>&)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void Game::DynCreature::getContactParticeRatio(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void Game::DynCreature::getContactParticleNum(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void Game::DynCreature::getParticleNum(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A888C
 * Size:	0004A8
 */
void Game::DynCreature::simulate((float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x190(r1)
      mflr      r0
      stw       r0, 0x194(r1)
      stfd      f31, 0x180(r1)
      psq_st    f31,0x188(r1),0,0
      stfd      f30, 0x170(r1)
      psq_st    f30,0x178(r1),0,0
      stfd      f29, 0x160(r1)
      psq_st    f29,0x168(r1),0,0
      stfd      f28, 0x150(r1)
      psq_st    f28,0x158(r1),0,0
      stfd      f27, 0x140(r1)
      psq_st    f27,0x148(r1),0,0
      stfd      f26, 0x130(r1)
      psq_st    f26,0x138(r1),0,0
      stfd      f25, 0x120(r1)
      psq_st    f25,0x128(r1),0,0
      stmw      r26, 0x108(r1)
      mr        r26, r3
      lis       r5, 0x804B
      lbz       r6, 0x311(r3)
      lis       r4, 0x804B
      lis       r3, 0x804B
      li        r0, 0
      stb       r6, 0x310(r26)
      addi      r7, r5, 0x5218
      addi      r6, r4, 0x53E4
      fmr       f27, f1
      stb       r0, 0x311(r26)
      addi      r0, r3, 0x53D8
      addi      r3, r26, 0x138
      addi      r4, r26, 0x2F4
      lwz       r9, 0x0(r7)
      lwz       r8, 0x4(r7)
      addi      r5, r1, 0x14
      lwz       r7, 0x8(r7)
      stw       r6, 0x50(r1)
      stw       r9, 0x44(r1)
      stw       r8, 0x48(r1)
      stw       r7, 0x4C(r1)
      stw       r0, 0x50(r1)
      stw       r26, 0x54(r1)
      stw       r9, 0x58(r1)
      stw       r8, 0x5C(r1)
      stw       r7, 0x60(r1)
      bl        -0xBDD68
      lfs       f2, 0x18(r1)
      fmr       f1, f27
      lfs       f3, 0x1C(r1)
      addi      r3, r26, 0x17C
      lfs       f0, 0x14(r1)
      li        r4, 0
      stfs      f0, 0x300(r26)
      stfs      f2, 0x304(r26)
      stfs      f3, 0x308(r26)
      bl        -0x6E46C
      lis       r3, 0x8050
      lwz       r27, 0x178(r26)
      lfs       f29, -0x5128(r2)
      addi      r28, r3, 0x71A0
      lfs       f30, -0x5110(r2)
      addi      r29, r1, 0x20
      lfs       f31, -0x5118(r2)
      addi      r30, r1, 0x30
      lfs       f25, -0x5124(r2)
      addi      r31, r1, 0x50
      lfs       f26, -0x510C(r2)
      b         .loc_0x454

    .loc_0x110:
      mr        r4, r27
      addi      r3, r26, 0x138
      addi      r5, r1, 0x8
      bl        -0xBDDD0
      lfs       f1, 0xC(r1)
      lfs       f2, 0x10(r1)
      lfs       f0, 0x8(r1)
      stfs      f0, 0xC(r27)
      stfs      f1, 0x10(r27)
      stfs      f2, 0x14(r27)
      lfs       f6, 0x1D4(r26)
      stfs      f6, 0x30(r1)
      lfs       f5, 0x1D8(r26)
      stfs      f5, 0x34(r1)
      lfs       f4, 0x1DC(r26)
      stfs      f4, 0x38(r1)
      lfs       f2, 0xC(r27)
      lfs       f0, 0x300(r26)
      lfs       f3, 0x10(r27)
      lfs       f1, 0x304(r26)
      fsubs     f7, f2, f0
      lfs       f2, 0x14(r27)
      lfs       f0, 0x308(r26)
      fsubs     f3, f3, f1
      fmuls     f1, f5, f7
      fsubs     f2, f2, f0
      fmuls     f0, f4, f3
      fmsubs    f8, f6, f3, f1
      fmuls     f1, f6, f2
      fmsubs    f3, f5, f2, f0
      stfs      f8, 0x38(r1)
      fmsubs    f2, f4, f7, f1
      stfs      f3, 0x30(r1)
      stfs      f2, 0x34(r1)
      lfs       f1, 0x1C0(r26)
      lfs       f0, 0x1BC(r26)
      fadds     f4, f2, f1
      lfs       f2, 0x1C4(r26)
      fadds     f1, f3, f0
      fadds     f2, f8, f2
      fmuls     f3, f4, f4
      stfs      f4, 0x34(r1)
      fmuls     f0, f1, f1
      fmuls     f4, f2, f2
      stfs      f1, 0x30(r1)
      fadds     f0, f0, f3
      stfs      f2, 0x38(r1)
      lfs       f28, 0x18(r27)
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f29
      ble-      .loc_0x1F8
      fmadds    f0, f1, f1, f3
      fadds     f0, f4, f0
      fcmpo     cr0, f0, f29
      ble-      .loc_0x1FC
      fsqrte    f1, f0
      fmuls     f0, f1, f0
      b         .loc_0x1FC

    .loc_0x1F8:
      fmr       f0, f29

    .loc_0x1FC:
      fmuls     f0, f27, f0
      fcmpo     cr0, f0, f30
      ble-      .loc_0x20C
      fmr       f0, f30

    .loc_0x20C:
      lfs       f1, 0x0(r27)
      fadds     f28, f28, f0
      fcmpo     cr0, f1, f31
      blt-      .loc_0x228
      lfs       f0, -0x5114(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x230

    .loc_0x228:
      li        r0, 0
      b         .loc_0x234

    .loc_0x230:
      li        r0, 0x1

    .loc_0x234:
      rlwinm    r0,r0,0,24,31
      cntlzw    r3, r0
      rlwinm.   r0,r3,27,24,31
      rlwinm    r3,r3,27,5,31
      bne-      .loc_0x27C
      lfs       f1, 0x4(r27)
      lfs       f0, -0x5118(r2)
      fcmpo     cr0, f1, f0
      blt-      .loc_0x264
      lfs       f0, -0x5114(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x26C

    .loc_0x264:
      li        r0, 0
      b         .loc_0x270

    .loc_0x26C:
      li        r0, 0x1

    .loc_0x270:
      rlwinm    r0,r0,0,24,31
      cntlzw    r0, r0
      rlwinm    r3,r0,27,5,31

    .loc_0x27C:
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x2B8
      lfs       f1, 0x8(r27)
      lfs       f0, -0x5118(r2)
      fcmpo     cr0, f1, f0
      blt-      .loc_0x2A0
      lfs       f0, -0x5114(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x2A8

    .loc_0x2A0:
      li        r0, 0
      b         .loc_0x2AC

    .loc_0x2A8:
      li        r0, 0x1

    .loc_0x2AC:
      rlwinm    r0,r0,0,24,31
      cntlzw    r0, r0
      rlwinm    r3,r0,27,5,31

    .loc_0x2B8:
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x374
      lfs       f1, 0xC(r27)
      lfs       f0, -0x5118(r2)
      fcmpo     cr0, f1, f0
      blt-      .loc_0x2DC
      lfs       f0, -0x5114(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x2E4

    .loc_0x2DC:
      li        r0, 0
      b         .loc_0x2E8

    .loc_0x2E4:
      li        r0, 0x1

    .loc_0x2E8:
      rlwinm    r0,r0,0,24,31
      cntlzw    r3, r0
      rlwinm.   r0,r3,27,24,31
      rlwinm    r3,r3,27,5,31
      bne-      .loc_0x330
      lfs       f1, 0x10(r27)
      lfs       f0, -0x5118(r2)
      fcmpo     cr0, f1, f0
      blt-      .loc_0x318
      lfs       f0, -0x5114(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x320

    .loc_0x318:
      li        r0, 0
      b         .loc_0x324

    .loc_0x320:
      li        r0, 0x1

    .loc_0x324:
      rlwinm    r0,r0,0,24,31
      cntlzw    r0, r0
      rlwinm    r3,r0,27,5,31

    .loc_0x330:
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x36C
      lfs       f1, 0x14(r27)
      lfs       f0, -0x5118(r2)
      fcmpo     cr0, f1, f0
      blt-      .loc_0x354
      lfs       f0, -0x5114(r2)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x35C

    .loc_0x354:
      li        r0, 0
      b         .loc_0x360

    .loc_0x35C:
      li        r0, 0x1

    .loc_0x360:
      rlwinm    r0,r0,0,24,31
      cntlzw    r0, r0
      rlwinm    r3,r0,27,5,31

    .loc_0x36C:
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x390

    .loc_0x374:
      lis       r3, 0x8048
      lis       r5, 0x8048
      subi      r3, r3, 0x9D0
      li        r4, 0x1F1
      subi      r5, r5, 0x9AC
      crclr     6, 0x6
      bl        -0x17E5D8

    .loc_0x390:
      lfs       f0, 0xC(r27)
      li        r6, 0
      li        r5, -0x1
      li        r0, 0x1
      stfs      f0, 0x20(r1)
      fmr       f1, f27
      addi      r4, r1, 0x64
      lfs       f0, 0x10(r27)
      stfs      f0, 0x24(r1)
      lfs       f0, 0x14(r27)
      stfs      f0, 0x28(r1)
      stfs      f28, 0x2C(r1)
      stw       r27, 0x30C(r26)
      lwz       r3, 0x30C(r26)
      stb       r6, 0x2C(r3)
      stb       r6, 0x7D(r1)
      lfs       f0, 0x800(r28)
      stw       r29, 0x64(r1)
      lwz       r3, -0x6CF8(r13)
      stw       r30, 0x68(r1)
      stfs      f25, 0x6C(r1)
      stfs      f29, 0x70(r1)
      stw       r31, 0x74(r1)
      stw       r6, 0xA8(r1)
      stb       r6, 0xD8(r1)
      stb       r6, 0x7C(r1)
      stw       r6, 0xAC(r1)
      stw       r6, 0x78(r1)
      stb       r6, 0xF4(r1)
      stw       r6, 0xF8(r1)
      stfs      f0, 0x90(r1)
      stfs      f26, 0x94(r1)
      stw       r5, 0xFC(r1)
      stw       r6, 0xB0(r1)
      stb       r6, 0x7E(r1)
      stb       r0, 0x7D(r1)
      lwz       r12, 0x4(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      lwz       r3, -0x6BE0(r13)
      li        r0, 0
      stb       r0, 0x7D(r1)
      cmplwi    r3, 0
      beq-      .loc_0x450
      fmr       f1, f27
      addi      r4, r1, 0x64
      bl        0x1CEE0

    .loc_0x450:
      lwz       r27, 0x1C(r27)

    .loc_0x454:
      cmplwi    r27, 0
      bne+      .loc_0x110
      psq_l     f31,0x188(r1),0,0
      lfd       f31, 0x180(r1)
      psq_l     f30,0x178(r1),0,0
      lfd       f30, 0x170(r1)
      psq_l     f29,0x168(r1),0,0
      lfd       f29, 0x160(r1)
      psq_l     f28,0x158(r1),0,0
      lfd       f28, 0x150(r1)
      psq_l     f27,0x148(r1),0,0
      lfd       f27, 0x140(r1)
      psq_l     f26,0x138(r1),0,0
      lfd       f26, 0x130(r1)
      psq_l     f25,0x128(r1),0,0
      lfd       f25, 0x120(r1)
      lmw       r26, 0x108(r1)
      lwz       r0, 0x194(r1)
      mtlr      r0
      addi      r1, r1, 0x190
      blr
    */
}

/*
 * --INFO--
 * Address:	801A8D34
 * Size:	00001C
 */
void Game::DynCreature::getPosition(void)
{
    /*
    .loc_0x0:
      lfs       f0, 0x1B0(r4)
      stfs      f0, 0x0(r3)
      lfs       f0, 0x1B4(r4)
      stfs      f0, 0x4(r3)
      lfs       f0, 0x1B8(r4)
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801A8D50
 * Size:	0000AC
 */
void onSetPosition__Q24Game11DynCreatureFR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x8051
      stw       r0, 0x14(r1)
      addi      r5, r5, 0x41E4
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r3, r31, 0x17C
      bl        -0x6EC98
      lwz       r4, 0x180(r31)
      mr        r3, r31
      lwz       r0, 0x184(r31)
      stw       r4, 0x138(r31)
      stw       r0, 0x13C(r31)
      lwz       r4, 0x188(r31)
      lwz       r0, 0x18C(r31)
      stw       r4, 0x140(r31)
      stw       r0, 0x144(r31)
      lwz       r4, 0x190(r31)
      lwz       r0, 0x194(r31)
      stw       r4, 0x148(r31)
      stw       r0, 0x14C(r31)
      lwz       r4, 0x198(r31)
      lwz       r0, 0x19C(r31)
      stw       r4, 0x150(r31)
      stw       r0, 0x154(r31)
      lwz       r4, 0x1A0(r31)
      lwz       r0, 0x1A4(r31)
      stw       r4, 0x158(r31)
      stw       r0, 0x15C(r31)
      lwz       r4, 0x1A8(r31)
      lwz       r0, 0x1AC(r31)
      stw       r4, 0x160(r31)
      stw       r0, 0x164(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x1B0(r12)
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
 * Address:	801A8DFC
 * Size:	000004
 */
void Game::DynCreature::onSetPosition(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801A8E00
 * Size:	00001C
 */
void Game::DynCreature::getVelocity(void)
{
    /*
    .loc_0x0:
      lfs       f0, 0x1BC(r4)
      stfs      f0, 0x0(r3)
      lfs       f0, 0x1C0(r4)
      stfs      f0, 0x4(r3)
      lfs       f0, 0x1C4(r4)
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801A8E1C
 * Size:	00001C
 */
void setVelocity__Q24Game11DynCreatureFR10Vector3<float>(void)
{
    /*
    .loc_0x0:
      lfs       f0, 0x0(r4)
      stfs      f0, 0x1BC(r3)
      lfs       f0, 0x4(r4)
      stfs      f0, 0x1C0(r3)
      lfs       f0, 0x8(r4)
      stfs      f0, 0x1C4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801A8E38
 * Size:	000088
 */
void getVelocityAt__Q24Game11DynCreatureFR10Vector3<float>
R10Vector3<float>(void)
{
    /*
    .loc_0x0:
      lfs       f0, 0x1BC(r3)
      stfs      f0, 0x0(r5)
      lfs       f0, 0x1C0(r3)
      stfs      f0, 0x4(r5)
      lfs       f0, 0x1C4(r3)
      stfs      f0, 0x8(r5)
      lfs       f1, 0x4(r4)
      lfs       f0, 0x1B4(r3)
      lfs       f3, 0x8(r4)
      lfs       f2, 0x1B8(r3)
      fsubs     f7, f1, f0
      lfs       f10, 0x1DC(r3)
      fsubs     f4, f3, f2
      lfs       f8, 0x1D4(r3)
      lfs       f2, 0x0(r4)
      fmuls     f0, f10, f7
      lfs       f1, 0x1B0(r3)
      lfs       f9, 0x1D8(r3)
      fsubs     f6, f2, f1
      lfs       f1, 0x0(r5)
      fmuls     f2, f8, f4
      lfs       f3, 0x4(r5)
      fmsubs    f0, f9, f4, f0
      lfs       f5, 0x8(r5)
      fmuls     f4, f9, f6
      fmsubs    f2, f10, f6, f2
      fadds     f0, f1, f0
      fmsubs    f1, f8, f7, f4
      fadds     f2, f3, f2
      stfs      f0, 0x0(r5)
      fadds     f0, f5, f1
      stfs      f2, 0x4(r5)
      stfs      f0, 0x8(r5)
      blr
    */
}

/*
 * --INFO--
 * Address:	801A8EC0
 * Size:	000008
 */
void getAngularEffect__Q24Game11DynCreatureFR10Vector3<float>
R10Vector3<float>(void)
{
    /*
    .loc_0x0:
      lfs       f1, -0x5128(r2)
      blr
    */
}

/*
 * --INFO--
 * Address:	801A8EC8
 * Size:	000044
 */
void applyImpulse__Q24Game11DynCreatureFR10Vector3<float>
R10Vector3<float>(void)
{
    /*
    .loc_0x0:
      lfs       f6, 0x118(r3)
      lfs       f0, 0x0(r5)
      lfs       f2, 0x4(r5)
      fmuls     f0, f0, f6
      lfs       f1, 0x1BC(r3)
      lfs       f4, 0x8(r5)
      fmuls     f2, f2, f6
      lfs       f3, 0x1C0(r3)
      fadds     f0, f1, f0
      lfs       f5, 0x1C4(r3)
      fmuls     f1, f4, f6
      fadds     f2, f3, f2
      stfs      f0, 0x1BC(r3)
      fadds     f0, f5, f1
      stfs      f2, 0x1C0(r3)
      stfs      f0, 0x1C4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00019C
 */
void Game::DynCreature::simulateCylinder((Sys::Cylinder&, float))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A8F0C
 * Size:	0000B8
 */
void Game::DynParticleMgr::__dt(void)
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
      beq-      .loc_0x9C
      lis       r4, 0x804B
      addi      r4, r4, 0x53F0
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x2C
      stw       r0, 0x1C(r30)
      beq-      .loc_0x8C
      lis       r4, 0x804B
      addi      r4, r4, 0x5524
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x2C
      stw       r0, 0x1C(r30)
      beq-      .loc_0x8C
      lis       r4, 0x804B
      addi      r4, r4, 0x54A8
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x2C
      stw       r0, 0x1C(r30)
      beq-      .loc_0x8C
      lis       r4, 0x804B
      addi      r0, r4, 0x547C
      stw       r0, 0x0(r30)
      beq-      .loc_0x8C
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x5324
      stw       r0, 0x0(r30)
      bl        0x2685F4

    .loc_0x8C:
      extsh.    r0, r31
      ble-      .loc_0x9C
      mr        r3, r30
      bl        -0x184EF0

    .loc_0x9C:
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
 * Address:	801A8FC4
 * Size:	000070
 */
void Container<Game::DynParticle>::~Container()
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
      lis       r4, 0x804B
      addi      r0, r4, 0x547C
      stw       r0, 0x0(r30)
      beq-      .loc_0x44
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x5324
      stw       r0, 0x0(r30)
      bl        0x268584

    .loc_0x44:
      extsh.    r0, r31
      ble-      .loc_0x54
      mr        r3, r30
      bl        -0x184F60

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
 * Address:	801A9034
 * Size:	000088
 */
void ObjectMgr<Game::DynParticle>::~ObjectMgr()
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
      lis       r4, 0x804B
      addi      r4, r4, 0x54A8
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x2C
      stw       r0, 0x1C(r30)
      beq-      .loc_0x5C
      lis       r4, 0x804B
      addi      r0, r4, 0x547C
      stw       r0, 0x0(r30)
      beq-      .loc_0x5C
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x5324
      stw       r0, 0x0(r30)
      bl        0x2684FC

    .loc_0x5C:
      extsh.    r0, r31
      ble-      .loc_0x6C
      mr        r3, r30
      bl        -0x184FE8

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
 * Address:	801A90BC
 * Size:	000060
 */
void MonoObjectMgr<Game::DynParticle>::birth()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x4AC
      cmpwi     r3, -0x1
      beq-      .loc_0x48
      lwz       r6, 0x28(r31)
      li        r0, 0
      lwz       r4, 0x2C(r31)
      mulli     r5, r3, 0x34
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
 * Address:	801A911C
 * Size:	000054
 */
void MonoObjectMgr<Game::DynParticle>::kill(Game::DynParticle*)
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
      addi      r5, r5, 0x34
      addi      r6, r6, 0x1
      bdnz+     .loc_0x18
      blr
    */
}

/*
 * --INFO--
 * Address:	801A9170
 * Size:	000040
 */
void MonoObjectMgr<Game::DynParticle>::getNext(void*)
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
 * Address:	801A91B0
 * Size:	000030
 */
void MonoObjectMgr<Game::DynParticle>::getStart()
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
 * Address:	801A91E0
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::getEnd()
{
    /*
    .loc_0x0:
      lwz       r3, 0x24(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801A91E8
 * Size:	000010
 */
void MonoObjectMgr<Game::DynParticle>::getAt(int)
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x34
      lwz       r3, 0x28(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	801A91F8
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::getTo()
{
    /*
    .loc_0x0:
      lwz       r3, 0x24(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801A9200
 * Size:	000080
 */
void MonoObjectMgr<Game::DynParticle>::doAnimation()
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
      lwz       r12, 0x30(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0x50:
      addi      r31, r31, 0x34
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
 * Address:	801A9280
 * Size:	000080
 */
void MonoObjectMgr<Game::DynParticle>::doEntry()
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
      lwz       r12, 0x30(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl

    .loc_0x50:
      addi      r31, r31, 0x34
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
 * Address:	801A9300
 * Size:	000090
 */
void MonoObjectMgr<Game::DynParticle>::doSetView(int)
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
      li        r29, 0
      stw       r28, 0x10(r1)
      mr        r28, r3
      b         .loc_0x64

    .loc_0x30:
      lwz       r3, 0x2C(r28)
      lbzx      r0, r3, r29
      cmplwi    r0, 0
      bne-      .loc_0x5C
      lwz       r0, 0x28(r28)
      mr        r4, r30
      add       r3, r0, r31
      lwz       r12, 0x30(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x5C:
      addi      r31, r31, 0x34
      addi      r29, r29, 0x1

    .loc_0x64:
      lwz       r0, 0x24(r28)
      cmpw      r29, r0
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
 * Address:	801A9390
 * Size:	000080
 */
void MonoObjectMgr<Game::DynParticle>::doViewCalc()
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
      lwz       r12, 0x30(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl

    .loc_0x50:
      addi      r31, r31, 0x34
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
 * Address:	801A9410
 * Size:	000090
 */
void MonoObjectMgr<Game::DynParticle>::doSimulation(float)
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
      lwz       r12, 0x30(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl

    .loc_0x5C:
      addi      r31, r31, 0x34
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
 * Address:	801A94A0
 * Size:	000090
 */
void MonoObjectMgr<Game::DynParticle>::doDirectDraw(Graphics&)
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
      lwz       r12, 0x30(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl

    .loc_0x5C:
      addi      r31, r31, 0x34
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
 * Address:	801A9530
 * Size:	000018
 */
void MonoObjectMgr<Game::DynParticle>::resetMgr()
{
    /*
    .loc_0x0:
      li        r0, 0
      stw       r0, 0x28(r3)
      stw       r0, 0x24(r3)
      stw       r0, 0x20(r3)
      stw       r0, 0x2C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801A9548
 * Size:	000030
 */
void MonoObjectMgr<Game::DynParticle>::clearMgr()
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
 * Address:	801A9578
 * Size:	000004
 */
void MonoObjectMgr<Game::DynParticle>::onAlloc()
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801A957C
 * Size:	00003C
 */
void MonoObjectMgr<Game::DynParticle>::getEmptyIndex()
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
 * Address:	801A95B8
 * Size:	000010
 */
void MonoObjectMgr<Game::DynParticle>::get(void*)
{
    /*
    .loc_0x0:
      mulli     r0, r4, 0x34
      lwz       r3, 0x28(r3)
      add       r3, r3, r0
      blr
    */
}

/*
 * --INFO--
 * Address:	801A95C8
 * Size:	00002C
 */
void Container<Game::DynParticle>::getObject(void*)
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
 * Address:	801A95F4
 * Size:	000008
 */
void Container<Game::DynParticle>::getAt(int)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	801A95FC
 * Size:	000008
 */
void Container<Game::DynParticle>::getTo()
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	801A9604
 * Size:	000030
 */
void Delegate2<Game::DynCreature, Vector3<float>&, Vector3<float>&>::invoke(
    Vector3<float>&, Vector3<float>&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r6, r3
      stw       r0, 0x14(r1)
      addi      r12, r6, 0x8
      lwz       r3, 0x4(r3)
      bl        -0xE7AF8
      nop
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801A9634
 * Size:	0001F4
 */
void ObjectMgr<Game::DynParticle>::doDirectDraw(Graphics&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x804B
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r5, r5, 0x55D4
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
      lwz       r12, 0x30(r3)
      mr        r4, r31
      lwz       r12, 0x20(r12)
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
 * Address:	801A9828
 * Size:	00004C
 */
void Iterator<Game::DynParticle>::isDone()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x4(r31)
      sub       r0, r3, r0
      cntlzw    r0, r0
      rlwinm    r3,r0,27,5,31
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801A9874
 * Size:	0001F4
 */
void ObjectMgr<Game::DynParticle>::doSimulation(float)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r4, r4, 0x55D4
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
      lwz       r12, 0x30(r3)
      fmr       f1, f31
      lwz       r12, 0x1C(r12)
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
 * Address:	801A9A68
 * Size:	0001E4
 */
void ObjectMgr<Game::DynParticle>::doViewCalc()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r4, r4, 0x55D4
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
      lwz       r12, 0x30(r3)
      lwz       r12, 0x18(r12)
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
 * Address:	801A9C4C
 * Size:	0001F4
 */
void ObjectMgr<Game::DynParticle>::doSetView(int)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x804B
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r5, r5, 0x55D4
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
      lwz       r12, 0x30(r3)
      mr        r4, r31
      lwz       r12, 0x14(r12)
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
 * Address:	801A9E40
 * Size:	0001E4
 */
void ObjectMgr<Game::DynParticle>::doEntry()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r4, r4, 0x55D4
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
      lwz       r12, 0x30(r3)
      lwz       r12, 0x10(r12)
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
 * Address:	801AA024
 * Size:	0001E4
 */
void ObjectMgr<Game::DynParticle>::doAnimation()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804B
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r4, r4, 0x55D4
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
      lwz       r12, 0x30(r3)
      lwz       r12, 0xC(r12)
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
 * Address:	801AA208
 * Size:	000004
 */
void Game::DynParticle::doDirectDraw((Graphics&))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801AA20C
 * Size:	000004
 */
void Game::DynParticle::doSimulation((float))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801AA210
 * Size:	000004
 */
void Game::DynParticle::doViewCalc(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801AA214
 * Size:	000004
 */
void Game::DynParticle::doSetView((unsigned long))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801AA218
 * Size:	000004
 */
void Game::DynParticle::doEntry(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801AA21C
 * Size:	000004
 */
void Game::DynParticle::doAnimation(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801AA220
 * Size:	000188
 */
void MonoObjectMgr<Game::DynParticle>::alloc(int)
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
      mulli     r3, r29, 0x34
      stw       r28, 0x10(r1)
      addi      r3, r3, 0x10
      bl        -0x1862A4
      lis       r4, 0x801B
      mr        r7, r29
      subi      r4, r4, 0x5C54
      li        r5, 0
      li        r6, 0x34
      bl        -0xE8878
      stw       r3, 0x28(r30)
      li        r0, 0
      mr        r3, r29
      stw       r31, 0x24(r30)
      stw       r0, 0x20(r30)
      bl        -0x1862D4
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
      lwz       r12, 0x30(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      addi      r29, r29, 0x34
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
 * Address:	801AA3A8
 * Size:	000004
 */
void Game::DynParticle::constructor(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	801AA3AC
 * Size:	000034
 */
void Game::DynParticle::__ct(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x804B
      lfs       f1, -0x5124(r2)
      addi      r4, r4, 0x55B0
      li        r0, 0
      stw       r4, 0x30(r3)
      lfs       f0, -0x5128(r2)
      stfs      f1, 0x18(r3)
      stb       r0, 0x2C(r3)
      stw       r0, 0x1C(r3)
      stfs      f0, 0x20(r3)
      stfs      f0, 0x24(r3)
      stfs      f0, 0x28(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	801AA3E0
 * Size:	00009C
 */
void MonoObjectMgr<Game::DynParticle>::MonoObjectMgr()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x266F9C
      lis       r4, 0x804B
      lis       r3, 0x804B
      subi      r0, r4, 0x5324
      lis       r6, 0x804B
      stw       r0, 0x0(r31)
      addi      r0, r3, 0x547C
      lis       r4, 0x804B
      lis       r3, 0x804B
      stw       r0, 0x0(r31)
      li        r8, 0
      addi      r7, r4, 0x54A8
      addi      r5, r3, 0x5524
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
 * Address:	801AA47C
 * Size:	000038
 */
void Iterator<Game::DynParticle>::operator*()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x14(r1)
      lwz       r3, 0x8(r3)
      lwz       r4, 0x4(r4)
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
 * Address:	801AA4B4
 * Size:	0000E4
 */
void Iterator<Game::DynParticle>::next()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0xC(r3)
      cmplwi    r0, 0
      bne-      .loc_0x40
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xD0

    .loc_0x40:
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xB4

    .loc_0x60:
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xD0
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)

    .loc_0xB4:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x60

    .loc_0xD0:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	801AA598
 * Size:	0000DC
 */
void Iterator<Game::DynParticle>::first()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0xC(r3)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      lwz       r3, 0x8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xC8

    .loc_0x3C:
      lwz       r3, 0x8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xAC

    .loc_0x58:
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xC8
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)

    .loc_0xAC:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x58

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
 * Address:	801AA674
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::@28 @resetMgr()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x1148
    */
}

/*
 * --INFO--
 * Address:	801AA67C
 * Size:	000008
 */
void ObjectMgr<Game::DynParticle>::@28 @doDirectDraw(Graphics&)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x104C
    */
}

/*
 * --INFO--
 * Address:	801AA684
 * Size:	000008
 */
void ObjectMgr<Game::DynParticle>::@28 @doSimulation(float)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0xE14
    */
}

/*
 * --INFO--
 * Address:	801AA68C
 * Size:	000008
 */
void ObjectMgr<Game::DynParticle>::@28 @doViewCalc()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0xC28
    */
}

/*
 * --INFO--
 * Address:	801AA694
 * Size:	000008
 */
void ObjectMgr<Game::DynParticle>::@28 @doSetView(int)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0xA4C
    */
}

/*
 * --INFO--
 * Address:	801AA69C
 * Size:	000008
 */
void ObjectMgr<Game::DynParticle>::@28 @doEntry()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x860
    */
}

/*
 * --INFO--
 * Address:	801AA6A4
 * Size:	000008
 */
void ObjectMgr<Game::DynParticle>::@28 @doAnimation()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x684
    */
}

/*
 * --INFO--
 * Address:	801AA6AC
 * Size:	000008
 */
void @28 @Game::DynParticleMgr::resetMgr(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x2678
    */
}

/*
 * --INFO--
 * Address:	801AA6B4
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::@28 @doDirectDraw(Graphics&)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x1218
    */
}

/*
 * --INFO--
 * Address:	801AA6BC
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::@28 @doSimulation(float)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x12B0
    */
}

/*
 * --INFO--
 * Address:	801AA6C4
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::@28 @doViewCalc()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x1338
    */
}

/*
 * --INFO--
 * Address:	801AA6CC
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::@28 @doSetView(int)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x13D0
    */
}

/*
 * --INFO--
 * Address:	801AA6D4
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::@28 @doEntry()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x1458
    */
}

/*
 * --INFO--
 * Address:	801AA6DC
 * Size:	000008
 */
void MonoObjectMgr<Game::DynParticle>::@28 @doAnimation()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x14E0
    */
}
