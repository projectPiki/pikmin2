

/*
 * --INFO--
 * Address:	8008828C
 * Size:	000084
 */
void J3DJointTree::J3DJointTree()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x804A
      stw       r0, 0x14(r1)
      li        r0, 0
      stw       r31, 0xC(r1)
      mr        r31, r3
      addi      r3, r4, 0x2FBC
      stw       r3, 0x0(r31)
      addi      r3, r31, 0x34
      stw       r0, 0x4(r31)
      stw       r0, 0x8(r31)
      stw       r0, 0xC(r31)
      stw       r0, 0x10(r31)
      stw       r0, 0x14(r31)
      stw       r0, 0x18(r31)
      sth       r0, 0x1C(r31)
      sth       r0, 0x1E(r31)
      stw       r0, 0x20(r31)
      stw       r0, 0x24(r31)
      stw       r0, 0x28(r31)
      stw       r0, 0x2C(r31)
      stw       r0, 0x30(r31)
      bl        -0x294C0
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x40(r31)
      stw       r0, 0x44(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void J3DJointTree::clear()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80088310
 * Size:	00015C
 */
void J3DJointTree::makeHierarchy(J3DJoint*, const J3DModelHierarchy**,
                                 J3DMaterialTable*, J3DShapeTable*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r23, 0xC(r1)
      mr        r24, r4
      mr        r23, r3
      mr        r25, r5
      mr        r26, r6
      mr        r27, r7
      mr        r31, r24

    .loc_0x28:
      lwz       r4, 0x0(r25)
      li        r30, 0
      li        r29, 0
      li        r28, 0
      lhz       r0, 0x0(r4)
      cmplwi    r0, 0x12
      bgt-      .loc_0xE0
      lis       r3, 0x804A
      rlwinm    r0,r0,2,0,29
      addi      r3, r3, 0x2F70
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      addi      r0, r4, 0x4
      mr        r3, r23
      stw       r0, 0x0(r25)
      mr        r4, r31
      mr        r5, r25
      mr        r6, r26
      mr        r7, r27
      bl        .loc_0x0
      b         .loc_0xE0
      addi      r0, r4, 0x4
      stw       r0, 0x0(r25)
      b         .loc_0x148
      b         .loc_0x148
      lwz       r3, 0x18(r23)
      addi      r0, r4, 0x4
      stw       r0, 0x0(r25)
      lhz       r0, 0x2(r4)
      rlwinm    r0,r0,2,0,29
      lwzx      r30, r3, r0
      b         .loc_0xE0
      addi      r0, r4, 0x4
      stw       r0, 0x0(r25)
      lhz       r0, 0x2(r4)
      lwz       r3, 0x8(r26)
      rlwinm    r0,r0,2,14,29
      lwzx      r29, r3, r0
      b         .loc_0xE0
      addi      r0, r4, 0x4
      stw       r0, 0x0(r25)
      lhz       r0, 0x2(r4)
      lwz       r3, 0x8(r27)
      rlwinm    r0,r0,2,14,29
      lwzx      r28, r3, r0

    .loc_0xE0:
      cmplwi    r30, 0
      beq-      .loc_0x10C
      cmplwi    r24, 0
      mr        r31, r30
      bne-      .loc_0xFC
      stw       r30, 0x10(r23)
      b         .loc_0x28

    .loc_0xFC:
      mr        r3, r24
      mr        r4, r30
      bl        -0x1CB8C
      b         .loc_0x28

    .loc_0x10C:
      cmplwi    r29, 0
      beq-      .loc_0x130
      lwz       r0, 0x58(r24)
      cmplwi    r0, 0
      beq-      .loc_0x124
      stw       r0, 0x4(r29)

    .loc_0x124:
      stw       r29, 0x58(r24)
      stw       r24, 0xC(r29)
      b         .loc_0x28

    .loc_0x130:
      cmplwi    r28, 0
      beq+      .loc_0x28
      lwz       r3, 0x58(r24)
      stw       r28, 0x8(r3)
      stw       r3, 0x4(r28)
      b         .loc_0x28

    .loc_0x148:
      lmw       r23, 0xC(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8008846C
 * Size:	000174
 */
void J3DJointTree::findImportantMtxIndex()
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      li        r9, 0
      stmw      r25, 0x14(r1)
      lhz       r4, 0x36(r3)
      lhz       r0, 0x1E(r3)
      cmplwi    r4, 0
      lwz       r7, 0x24(r3)
      lwz       r6, 0x28(r3)
      lwz       r5, 0x30(r3)
      ble-      .loc_0xF4
      cmplwi    r4, 0x8
      subi      r8, r4, 0x8
      ble-      .loc_0xE8
      rlwinm    r10,r8,0,16,31
      b         .loc_0xC4

    .loc_0x3C:
      lwz       r8, 0x3C(r3)
      rlwinm    r25,r9,1,15,30
      addi      r27, r25, 0x2
      addi      r9, r9, 0x8
      lhzx      r11, r8, r25
      add       r8, r5, r25
      addi      r28, r25, 0x4
      addi      r29, r25, 0x6
      sth       r11, 0x0(r8)
      addi      r30, r25, 0x8
      addi      r31, r25, 0xA
      addi      r12, r25, 0xC
      lwz       r26, 0x3C(r3)
      addi      r11, r25, 0xE
      lhzx      r27, r26, r27
      sth       r27, 0x2(r8)
      lwz       r27, 0x3C(r3)
      lhzx      r28, r27, r28
      sth       r28, 0x4(r8)
      lwz       r28, 0x3C(r3)
      lhzx      r29, r28, r29
      sth       r29, 0x6(r8)
      lwz       r29, 0x3C(r3)
      lhzx      r30, r29, r30
      sth       r30, 0x8(r8)
      lwz       r30, 0x3C(r3)
      lhzx      r31, r30, r31
      sth       r31, 0xA(r8)
      lwz       r31, 0x3C(r3)
      lhzx      r12, r31, r12
      sth       r12, 0xC(r8)
      lwz       r12, 0x3C(r3)
      lhzx      r11, r12, r11
      sth       r11, 0xE(r8)

    .loc_0xC4:
      rlwinm    r8,r9,0,16,31
      cmplw     r8, r10
      blt+      .loc_0x3C
      b         .loc_0xE8

    .loc_0xD4:
      lwz       r8, 0x3C(r3)
      rlwinm    r10,r9,1,15,30
      addi      r9, r9, 0x1
      lhzx      r8, r8, r10
      sthx      r8, r5, r10

    .loc_0xE8:
      rlwinm    r8,r9,0,16,31
      cmplw     r8, r4
      blt+      .loc_0xD4

    .loc_0xF4:
      li        r11, 0
      b         .loc_0x160

    .loc_0xFC:
      lwz       r8, 0x20(r3)
      rlwinm    r4,r11,0,16,31
      mr        r9, r6
      mr        r10, r7
      lbzx      r4, r8, r4
      li        r8, 0
      lfs       f1, -0x7870(r2)
      mtctr     r4
      cmpwi     r4, 0
      ble-      .loc_0x14C

    .loc_0x124:
      lfs       f0, 0x0(r9)
      fcmpo     cr0, f1, f0
      bge-      .loc_0x138
      fmr       f1, f0
      lhz       r8, 0x0(r10)

    .loc_0x138:
      addi      r9, r9, 0x4
      addi      r10, r10, 0x2
      addi      r6, r6, 0x4
      addi      r7, r7, 0x2
      bdnz+     .loc_0x124

    .loc_0x14C:
      lhz       r4, 0x36(r3)
      add       r4, r11, r4
      addi      r11, r11, 0x1
      rlwinm    r4,r4,1,0,30
      sthx      r8, r5, r4

    .loc_0x160:
      cmpw      r11, r0
      blt+      .loc_0xFC
      lmw       r25, 0x14(r1)
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	800885E0
 * Size:	000070
 */
void J3DJointTree::calc(J3DMtxBuffer*, const Vec&, const float (&)[3][4])
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r4, r5
      mr        r5, r6
      stw       r30, 0x8(r1)
      mr        r30, r3
      lwz       r3, 0x14(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      mr        r3, r31
      bl        .loc_0x70
      lwz       r3, 0x10(r30)
      cmplwi    r3, 0
      beq-      .loc_0x58
      lwz       r0, 0x14(r30)
      stw       r0, -0x7670(r13)
      bl        -0x1CAE0

    .loc_0x58:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x70:
    */
}

/*
 * --INFO--
 * Address:	80088650
 * Size:	000008
 */
void J3DMtxCalc::setMtxBuffer(J3DMtxBuffer*)
{
    /*
    .loc_0x0:
      stw       r3, -0x7678(r13)
      blr
    */
}