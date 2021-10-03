

/*
 * --INFO--
 * Address:	800A6500
 * Size:	00009C
 */
void JASCallbackMgr::regist(long (*)(void*), void*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r5
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      bl        0x48714
      li        r0, 0x10
      mr        r4, r29
      stw       r3, 0x8(r1)
      li        r3, 0
      mtctr     r0

    .loc_0x3C:
      lwz       r0, 0x0(r4)
      cmplwi    r0, 0
      bne-      .loc_0x68
      rlwinm    r0,r3,3,0,28
      lwz       r3, 0x8(r1)
      stwx      r30, r29, r0
      add       r4, r29, r0
      stw       r31, 0x4(r4)
      bl        0x48704
      li        r3, 0x1
      b         .loc_0x80

    .loc_0x68:
      addi      r4, r4, 0x8
      addi      r3, r3, 0x1
      bdnz+     .loc_0x3C
      lwz       r3, 0x8(r1)
      bl        0x486E8
      li        r3, 0

    .loc_0x80:
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
 * Address:	800A659C
 * Size:	000110
 */
void JASCallbackMgr::reject(long (*)(void*), void*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0
      stw       r30, 0x18(r1)
      mr        r30, r5
      stw       r29, 0x14(r1)
      mr        r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      bl        0x48670
      li        r0, 0x4
      mr        r4, r28
      stw       r3, 0x8(r1)
      li        r5, 0
      li        r3, 0
      mtctr     r0

    .loc_0x48:
      lwz       r0, 0x0(r4)
      cmplw     r0, r29
      bne-      .loc_0x6C
      lwz       r0, 0x4(r4)
      cmplw     r0, r30
      bne-      .loc_0x6C
      stw       r3, 0x0(r4)
      li        r31, 0x1
      stw       r3, 0x4(r4)

    .loc_0x6C:
      lwz       r0, 0x8(r4)
      cmplw     r0, r29
      bne-      .loc_0x90
      lwz       r0, 0xC(r4)
      cmplw     r0, r30
      bne-      .loc_0x90
      stw       r3, 0x8(r4)
      li        r31, 0x1
      stw       r3, 0xC(r4)

    .loc_0x90:
      lwz       r0, 0x10(r4)
      cmplw     r0, r29
      bne-      .loc_0xB4
      lwz       r0, 0x14(r4)
      cmplw     r0, r30
      bne-      .loc_0xB4
      stw       r3, 0x10(r4)
      li        r31, 0x1
      stw       r3, 0x14(r4)

    .loc_0xB4:
      lwz       r0, 0x18(r4)
      cmplw     r0, r29
      bne-      .loc_0xD8
      lwz       r0, 0x1C(r4)
      cmplw     r0, r30
      bne-      .loc_0xD8
      stw       r3, 0x18(r4)
      li        r31, 0x1
      stw       r3, 0x1C(r4)

    .loc_0xD8:
      addi      r4, r4, 0x20
      addi      r5, r5, 0x3
      bdnz+     .loc_0x48
      lwz       r3, 0x8(r1)
      bl        0x485DC
      lwz       r0, 0x24(r1)
      mr        r3, r31
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
 * Address:	........
 * Size:	000134
 */
void JASCallbackMgr::reject(long (*)(void*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A66AC
 * Size:	000078
 */
void JASCallbackMgr::callback()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0
      stw       r30, 0x18(r1)
      mr        r30, r3
      stw       r29, 0x14(r1)
      li        r29, 0

    .loc_0x24:
      lwz       r12, 0x0(r30)
      cmplwi    r12, 0
      beq-      .loc_0x4C
      lwz       r3, 0x4(r30)
      mtctr     r12
      bctrl
      cmpwi     r3, 0
      bge-      .loc_0x4C
      stw       r31, 0x0(r30)
      stw       r31, 0x4(r30)

    .loc_0x4C:
      addi      r29, r29, 0x1
      addi      r30, r30, 0x8
      cmpwi     r29, 0x10
      blt+      .loc_0x24
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}