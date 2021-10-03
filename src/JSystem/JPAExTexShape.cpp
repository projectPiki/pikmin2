

/*
 * --INFO--
 * Address:	80090F2C
 * Size:	0000FC
 */
void JPALoadExTex(JPAEmitterWorkData*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r3
      li        r3, 0x1
      lwz       r4, 0x4(r30)
      lwz       r31, 0x28(r4)
      lwz       r4, 0x0(r31)
      lwz       r0, 0x8(r4)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0x88
      li        r3, 0x1
      li        r4, 0x1
      li        r5, 0x4
      li        r6, 0x3C
      li        r7, 0
      li        r8, 0x7D
      bl        0x53DA4
      lwz       r3, 0x0(r31)
      li        r4, 0x2
      lwz       r5, 0x4(r30)
      lbz       r0, 0x25(r3)
      lwz       r3, 0x38(r5)
      rlwinm    r0,r0,1,0,30
      lwz       r5, 0x8(r30)
      lhzx      r0, r3, r0
      lwz       r3, 0x8(r5)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      addi      r3, r3, 0x4
      bl        -0x5D97C
      li        r3, 0x2

    .loc_0x88:
      lwz       r4, 0x0(r31)
      lwz       r0, 0x8(r4)
      rlwinm.   r0,r0,0,23,23
      beq-      .loc_0xE4
      li        r4, 0x1
      li        r5, 0x4
      li        r6, 0x3C
      li        r7, 0
      li        r8, 0x7D
      bl        0x53D44
      lwz       r3, 0x0(r31)
      li        r4, 0x3
      lwz       r5, 0x4(r30)
      lbz       r0, 0x26(r3)
      lwz       r3, 0x38(r5)
      rlwinm    r0,r0,1,0,30
      lwz       r5, 0x8(r30)
      lhzx      r0, r3, r0
      lwz       r3, 0x8(r5)
      rlwinm    r0,r0,2,0,29
      lwzx      r3, r3, r0
      addi      r3, r3, 0x4
      bl        -0x5D9DC

    .loc_0xE4:
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
 * Address:	80091028
 * Size:	000008
 */
void JPAExTexShape::JPAExTexShape(const unsigned char*)
{
    /*
    .loc_0x0:
      stw       r4, 0x0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
void JPAExTexShape::init_jpa(const unsigned char*, JKRHeap*)
{
    // UNUSED FUNCTION
}