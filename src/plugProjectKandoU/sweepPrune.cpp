

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
 * Address:	........
 * Size:	000028
 */
void SweepPrune::Node::insertBefore((SweepPrune::Node*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void SweepPrune::Node::insertAfter((SweepPrune::Node*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023C5B0
 * Size:	0001C8
 */
void SweepPrune::Node::insertSort((SweepPrune::Node&))
{
    /*
    .loc_0x0:
      lwz       r5, 0x8(r3)
      cmplwi    r5, 0
      beq-      .loc_0x128
      lfs       f0, 0x0(r5)
      lfs       f1, 0x0(r3)
      fcmpo     cr0, f0, f1
      ble-      .loc_0x94
      mr        r6, r5
      b         .loc_0x88

    .loc_0x24:
      lfs       f0, 0x0(r6)
      fcmpo     cr0, f0, f1
      cror      2, 0, 0x2
      bne-      .loc_0x84
      cmplwi    r5, 0
      beq-      .loc_0x44
      lwz       r0, 0x4(r3)
      stw       r0, 0x4(r5)

    .loc_0x44:
      lwz       r4, 0x4(r3)
      cmplwi    r4, 0
      beq-      .loc_0x58
      lwz       r0, 0x8(r3)
      stw       r0, 0x8(r4)

    .loc_0x58:
      li        r0, 0
      stw       r0, 0x8(r3)
      stw       r0, 0x4(r3)
      lwz       r4, 0x4(r6)
      stw       r3, 0x4(r6)
      cmplwi    r4, 0
      stw       r4, 0x4(r3)
      stw       r6, 0x8(r3)
      beqlr-
      stw       r3, 0x8(r4)
      blr

    .loc_0x84:
      lwz       r6, 0x8(r6)

    .loc_0x88:
      cmplwi    r6, 0
      bne+      .loc_0x24
      blr

    .loc_0x94:
      lwz       r4, 0x4(r3)
      cmplwi    r4, 0
      beqlr-
      lfs       f0, 0x0(r4)
      fcmpo     cr0, f0, f1
      bgelr-
      mr        r6, r4
      b         .loc_0x11C

    .loc_0xB4:
      lfs       f0, 0x0(r6)
      fcmpo     cr0, f0, f1
      cror      2, 0x1, 0x2
      bne-      .loc_0x118
      cmplwi    r5, 0
      beq-      .loc_0xD0
      stw       r4, 0x4(r5)

    .loc_0xD0:
      lwz       r4, 0x4(r3)
      cmplwi    r4, 0
      beq-      .loc_0xE4
      lwz       r0, 0x8(r3)
      stw       r0, 0x8(r4)

    .loc_0xE4:
      li        r0, 0
      stw       r0, 0x8(r3)
      stw       r0, 0x4(r3)
      lwz       r4, 0x8(r6)
      stw       r6, 0x4(r3)
      cmplwi    r4, 0
      stw       r4, 0x8(r3)
      beq-      .loc_0x108
      stw       r3, 0x4(r4)

    .loc_0x108:
      cmplwi    r6, 0
      beqlr-
      stw       r3, 0x8(r6)
      blr

    .loc_0x118:
      lwz       r6, 0x4(r6)

    .loc_0x11C:
      cmplwi    r6, 0
      bne+      .loc_0xB4
      blr

    .loc_0x128:
      lwz       r5, 0x4(r4)
      cmplwi    r5, 0
      bne-      .loc_0x14C
      stw       r3, 0x4(r4)
      stw       r5, 0x4(r3)
      stw       r4, 0x8(r3)
      beqlr-
      stw       r3, 0x8(r5)
      blr

    .loc_0x14C:
      mr        r6, r5
      li        r5, 0
      b         .loc_0x198

    .loc_0x158:
      lfs       f1, 0x0(r6)
      mr        r5, r6
      lfs       f0, 0x0(r3)
      fcmpo     cr0, f1, f0
      ble-      .loc_0x194
      lwz       r4, 0x8(r6)
      stw       r6, 0x4(r3)
      cmplwi    r4, 0
      stw       r4, 0x8(r3)
      beq-      .loc_0x184
      stw       r3, 0x4(r4)

    .loc_0x184:
      cmplwi    r6, 0
      beqlr-
      stw       r3, 0x8(r6)
      blr

    .loc_0x194:
      lwz       r6, 0x4(r6)

    .loc_0x198:
      cmplwi    r6, 0
      bne+      .loc_0x158
      cmplwi    r5, 0
      beqlr-
      lwz       r4, 0x4(r5)
      stw       r3, 0x4(r5)
      cmplwi    r4, 0
      stw       r4, 0x4(r3)
      stw       r5, 0x8(r3)
      beqlr-
      stw       r3, 0x8(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	8023C778
 * Size:	000070
 */
void SweepPrune::Object::__ct(void)
{
    /*
    .loc_0x0:
      lfs       f0, -0x3D90(r2)
      li        r4, 0
      li        r0, 0x1
      stfs      f0, 0x0(r3)
      stw       r4, 0xC(r3)
      stw       r4, 0x8(r3)
      stw       r4, 0x4(r3)
      stfs      f0, 0x14(r3)
      stw       r4, 0x20(r3)
      stw       r4, 0x1C(r3)
      stw       r4, 0x18(r3)
      stfs      f0, 0x28(r3)
      stw       r4, 0x34(r3)
      stw       r4, 0x30(r3)
      stw       r4, 0x2C(r3)
      stfs      f0, 0x3C(r3)
      stw       r4, 0x48(r3)
      stw       r4, 0x44(r3)
      stw       r4, 0x40(r3)
      stb       r4, 0x10(r3)
      stb       r0, 0x24(r3)
      stb       r4, 0x38(r3)
      stb       r0, 0x4C(r3)
      stw       r3, 0x48(r3)
      stw       r3, 0x34(r3)
      stw       r3, 0x20(r3)
      stw       r3, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8023C7E8
 * Size:	00002C
 */
void SweepPrune::World::__ct(void)
{
    /*
    .loc_0x0:
      lfs       f0, -0x3D90(r2)
      li        r0, 0
      stfs      f0, 0x0(r3)
      stw       r0, 0xC(r3)
      stw       r0, 0x8(r3)
      stw       r0, 0x4(r3)
      stfs      f0, 0x14(r3)
      stw       r0, 0x20(r3)
      stw       r0, 0x1C(r3)
      stw       r0, 0x18(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void SweepPrune::World::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023C814
 * Size:	000148
 */
void SweepPrune::World::resolve((SweepPrune::World::ResolveArg&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      li        r0, 0
      stmw      r27, 0xC(r1)
      mr        r27, r4
      stw       r0, 0x8(r4)
      stw       r0, 0x4(r4)
      lwz       r30, 0x4(r3)
      b         .loc_0x12C

    .loc_0x28:
      lwz       r31, 0xC(r30)
      li        r29, 0
      lwz       r28, 0x4(r30)
      b         .loc_0x10C

    .loc_0x38:
      lwz       r3, 0x4(r27)
      addi      r0, r3, 0x1
      stw       r0, 0x4(r27)
      lwz       r5, 0xC(r28)
      cmplw     r31, r5
      bne-      .loc_0x5C
      lbz       r0, 0x10(r28)
      cmplwi    r0, 0x1
      beq-      .loc_0x114

    .loc_0x5C:
      lbz       r0, 0x10(r28)
      cmplwi    r0, 0
      bne-      .loc_0x108
      cmplwi    r29, 0
      bne-      .loc_0x74
      mr        r29, r28

    .loc_0x74:
      lfs       f0, 0x28(r31)
      lfs       f2, 0x28(r5)
      lfs       f1, 0x3C(r31)
      fcmpo     cr0, f0, f2
      lfs       f3, 0x3C(r5)
      cror      2, 0, 0x2
      bne-      .loc_0x9C
      fcmpo     cr0, f2, f1
      cror      2, 0, 0x2
      beq-      .loc_0xE4

    .loc_0x9C:
      fcmpo     cr0, f0, f3
      cror      2, 0, 0x2
      bne-      .loc_0xB4
      fcmpo     cr0, f3, f1
      cror      2, 0, 0x2
      beq-      .loc_0xE4

    .loc_0xB4:
      fcmpo     cr0, f2, f0
      cror      2, 0, 0x2
      bne-      .loc_0xCC
      fcmpo     cr0, f0, f3
      cror      2, 0, 0x2
      beq-      .loc_0xE4

    .loc_0xCC:
      fcmpo     cr0, f2, f1
      cror      2, 0, 0x2
      bne-      .loc_0x108
      fcmpo     cr0, f1, f3
      cror      2, 0, 0x2
      bne-      .loc_0x108

    .loc_0xE4:
      lwz       r3, 0x0(r27)
      mr        r4, r31
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x8(r27)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r27)

    .loc_0x108:
      lwz       r28, 0x4(r28)

    .loc_0x10C:
      cmplwi    r28, 0
      bne+      .loc_0x38

    .loc_0x114:
      cmplwi    r29, 0
      bne-      .loc_0x120
      lwz       r30, 0x4(r30)

    .loc_0x120:
      cmplwi    r29, 0
      beq-      .loc_0x12C
      mr        r30, r29

    .loc_0x12C:
      cmplwi    r30, 0
      bne+      .loc_0x28
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}
