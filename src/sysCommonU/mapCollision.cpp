

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
 * Address:	8041A030
 * Size:	000030
 */
void MapCollision::getCurrTri(Game::CurrTriInfo&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x18(r3)
      lwz       r12, 0x0(r3)
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
 * Address:	8041A060
 * Size:	0000B4
 */
void MapCollision::read(Stream&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      li        r3, 0x4C
      bl        -0x3F61E0
      mr.       r31, r3
      beq-      .loc_0x7C
      bl        -0x8D00
      lis       r4, 0x804F
      lis       r3, 0x804F
      subi      r0, r4, 0x45F0
      lfs       f1, 0x1FF0(r2)
      stw       r0, 0x0(r31)
      subi      r3, r3, 0x493C
      lfs       f0, 0x1FF4(r2)
      li        r0, 0
      stw       r3, 0x0(r31)
      stfs      f1, 0x2C(r31)
      stfs      f1, 0x30(r31)
      stfs      f1, 0x34(r31)
      stfs      f0, 0x38(r31)
      stfs      f0, 0x3C(r31)
      stfs      f0, 0x40(r31)
      stw       r0, 0x28(r31)
      stw       r0, 0x24(r31)
      stw       r0, 0x20(r31)

    .loc_0x7C:
      stw       r31, 0x18(r29)
      mr        r4, r30
      lwz       r3, 0x18(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
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
 * Address:	8041A114
 * Size:	00007C
 */
void MapCollision::clone(Matrixf&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      li        r3, 0x1C
      bl        -0x3F6294
      mr.       r31, r3
      beq-      .loc_0x40
      bl        -0x8DB4
      lis       r3, 0x804F
      subi      r0, r3, 0x4908
      stw       r0, 0x0(r31)

    .loc_0x40:
      lwz       r3, 0x18(r29)
      mr        r4, r30
      lwz       r12, 0x0(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x18(r31)
      mr        r3, r31
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}
