

/*
 * --INFO--
 * Address:	800267B8
 * Size:	000018
 */
void JSUPtrLink::JSUPtrLink(void*)
{
    /*
    .loc_0x0:
      li        r0, 0
      stw       r0, 0x4(r3)
      stw       r4, 0x0(r3)
      stw       r0, 0x8(r3)
      stw       r0, 0xC(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	800267D0
 * Size:	000060
 */
void JSUPtrLink::~JSUPtrLink()
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
      lwz       r3, 0x4(r30)
      cmplwi    r3, 0
      beq-      .loc_0x34
      mr        r4, r30
      bl        0x424

    .loc_0x34:
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x275C

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

/*
 * --INFO--
 * Address:	80026830
 * Size:	000038
 */
void JSUPtrList::JSUPtrList(bool)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      rlwinm.   r0,r4,0,24,31
      stw       r31, 0xC(r1)
      mr        r31, r3
      beq-      .loc_0x20
      bl        0x84

    .loc_0x20:
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80026868
 * Size:	000068
 */
void JSUPtrList::~JSUPtrList()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x50
      lwz       r5, 0x0(r31)
      li        r6, 0
      li        r3, 0
      b         .loc_0x34

    .loc_0x28:
      stw       r3, 0x4(r5)
      addi      r6, r6, 0x1
      lwz       r5, 0xC(r5)

    .loc_0x34:
      lwz       r0, 0x8(r31)
      cmplw     r6, r0
      blt+      .loc_0x28
      extsh.    r0, r4
      ble-      .loc_0x50
      mr        r3, r31
      bl        -0x2800

    .loc_0x50:
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	800268D0
 * Size:	000014
 */
void JSUPtrList::initiate()
{
    /*
    .loc_0x0:
      li        r0, 0
      stw       r0, 0x0(r3)
      stw       r0, 0x4(r3)
      stw       r0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JSUPtrList::setFirst(JSUPtrLink*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800268E4
 * Size:	0000B8
 */
void JSUPtrList::append(JSUPtrLink*)
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
      lwz       r3, 0x4(r4)
      cntlzw    r5, r3
      rlwinm.   r0,r5,27,24,31
      rlwinm    r5,r5,27,5,31
      bne-      .loc_0x38
      bl        0x310
      mr        r5, r3

    .loc_0x38:
      rlwinm.   r0,r5,0,24,31
      beq-      .loc_0x9C
      lwz       r0, 0x8(r30)
      cmplwi    r0, 0
      bne-      .loc_0x70
      stw       r30, 0x4(r31)
      li        r3, 0
      li        r0, 0x1
      stw       r3, 0x8(r31)
      stw       r3, 0xC(r31)
      stw       r31, 0x4(r30)
      stw       r31, 0x0(r30)
      stw       r0, 0x8(r30)
      b         .loc_0x9C

    .loc_0x70:
      stw       r30, 0x4(r31)
      li        r0, 0
      lwz       r3, 0x4(r30)
      stw       r3, 0x8(r31)
      stw       r0, 0xC(r31)
      lwz       r3, 0x4(r30)
      stw       r31, 0xC(r3)
      stw       r31, 0x4(r30)
      lwz       r3, 0x8(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r30)

    .loc_0x9C:
      lwz       r0, 0x14(r1)
      mr        r3, r5
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8002699C
 * Size:	0000B8
 */
void JSUPtrList::prepend(JSUPtrLink*)
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
      lwz       r3, 0x4(r4)
      cntlzw    r5, r3
      rlwinm.   r0,r5,27,24,31
      rlwinm    r5,r5,27,5,31
      bne-      .loc_0x38
      bl        0x258
      mr        r5, r3

    .loc_0x38:
      rlwinm.   r0,r5,0,24,31
      beq-      .loc_0x9C
      lwz       r0, 0x8(r30)
      cmplwi    r0, 0
      bne-      .loc_0x70
      stw       r30, 0x4(r31)
      li        r3, 0
      li        r0, 0x1
      stw       r3, 0x8(r31)
      stw       r3, 0xC(r31)
      stw       r31, 0x4(r30)
      stw       r31, 0x0(r30)
      stw       r0, 0x8(r30)
      b         .loc_0x9C

    .loc_0x70:
      stw       r30, 0x4(r31)
      li        r0, 0
      stw       r0, 0x8(r31)
      lwz       r0, 0x0(r30)
      stw       r0, 0xC(r31)
      lwz       r3, 0x0(r30)
      stw       r31, 0x8(r3)
      stw       r31, 0x0(r30)
      lwz       r3, 0x8(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r30)

    .loc_0x9C:
      lwz       r0, 0x14(r1)
      mr        r3, r5
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80026A54
 * Size:	0001D0
 */
void JSUPtrList::insert(JSUPtrLink*, JSUPtrLink*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r5
      stw       r30, 0x18(r1)
      mr        r30, r3
      stw       r29, 0x14(r1)
      mr        r29, r4
      lwz       r0, 0x0(r3)
      cmplw     r29, r0
      bne-      .loc_0xBC
      lwz       r3, 0x4(r31)
      cntlzw    r4, r3
      rlwinm.   r0,r4,27,24,31
      rlwinm    r4,r4,27,5,31
      bne-      .loc_0x50
      mr        r4, r31
      bl        .loc_0x1D0
      mr        r4, r3

    .loc_0x50:
      rlwinm.   r0,r4,0,24,31
      beq-      .loc_0xB4
      lwz       r0, 0x8(r30)
      cmplwi    r0, 0
      bne-      .loc_0x88
      stw       r30, 0x4(r31)
      li        r3, 0
      li        r0, 0x1
      stw       r3, 0x8(r31)
      stw       r3, 0xC(r31)
      stw       r31, 0x4(r30)
      stw       r31, 0x0(r30)
      stw       r0, 0x8(r30)
      b         .loc_0xB4

    .loc_0x88:
      stw       r30, 0x4(r31)
      li        r0, 0
      stw       r0, 0x8(r31)
      lwz       r0, 0x0(r30)
      stw       r0, 0xC(r31)
      lwz       r3, 0x0(r30)
      stw       r31, 0x8(r3)
      stw       r31, 0x0(r30)
      lwz       r3, 0x8(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r30)

    .loc_0xB4:
      mr        r3, r4
      b         .loc_0x1B4

    .loc_0xBC:
      cmplwi    r29, 0
      bne-      .loc_0x150
      lwz       r3, 0x4(r31)
      cntlzw    r4, r3
      rlwinm.   r0,r4,27,24,31
      rlwinm    r4,r4,27,5,31
      bne-      .loc_0xE4
      mr        r4, r31
      bl        .loc_0x1D0
      mr        r4, r3

    .loc_0xE4:
      rlwinm.   r0,r4,0,24,31
      beq-      .loc_0x148
      lwz       r0, 0x8(r30)
      cmplwi    r0, 0
      bne-      .loc_0x11C
      stw       r30, 0x4(r31)
      li        r3, 0
      li        r0, 0x1
      stw       r3, 0x8(r31)
      stw       r3, 0xC(r31)
      stw       r31, 0x4(r30)
      stw       r31, 0x0(r30)
      stw       r0, 0x8(r30)
      b         .loc_0x148

    .loc_0x11C:
      stw       r30, 0x4(r31)
      li        r0, 0
      lwz       r3, 0x4(r30)
      stw       r3, 0x8(r31)
      stw       r0, 0xC(r31)
      lwz       r3, 0x4(r30)
      stw       r31, 0xC(r3)
      stw       r31, 0x4(r30)
      lwz       r3, 0x8(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r30)

    .loc_0x148:
      mr        r3, r4
      b         .loc_0x1B4

    .loc_0x150:
      lwz       r0, 0x4(r29)
      cmplw     r0, r30
      beq-      .loc_0x164
      li        r3, 0
      b         .loc_0x1B4

    .loc_0x164:
      lwz       r3, 0x4(r31)
      cntlzw    r4, r3
      rlwinm.   r0,r4,27,24,31
      rlwinm    r4,r4,27,5,31
      bne-      .loc_0x184
      mr        r4, r31
      bl        .loc_0x1D0
      mr        r4, r3

    .loc_0x184:
      rlwinm.   r0,r4,0,24,31
      beq-      .loc_0x1B0
      lwz       r3, 0x8(r29)
      stw       r30, 0x4(r31)
      stw       r3, 0x8(r31)
      stw       r29, 0xC(r31)
      stw       r31, 0xC(r3)
      stw       r31, 0x8(r29)
      lwz       r3, 0x8(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x8(r30)

    .loc_0x1B0:
      mr        r3, r4

    .loc_0x1B4:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr

    .loc_0x1D0:
    */
}

/*
 * --INFO--
 * Address:	80026C24
 * Size:	0000B0
 */
void JSUPtrList::remove(JSUPtrLink*)
{
    /*
    .loc_0x0:
      lwz       r0, 0x4(r4)
      sub       r0, r3, r0
      cntlzw    r5, r0
      rlwinm.   r0,r5,27,24,31
      rlwinm    r6,r5,27,5,31
      beq-      .loc_0xA8
      lwz       r0, 0x8(r3)
      cmplwi    r0, 0x1
      bne-      .loc_0x34
      li        r0, 0
      stw       r0, 0x0(r3)
      stw       r0, 0x4(r3)
      b         .loc_0x94

    .loc_0x34:
      lwz       r0, 0x0(r3)
      cmplw     r4, r0
      bne-      .loc_0x58
      lwz       r5, 0xC(r4)
      li        r0, 0
      stw       r0, 0x8(r5)
      lwz       r0, 0xC(r4)
      stw       r0, 0x0(r3)
      b         .loc_0x94

    .loc_0x58:
      lwz       r0, 0x4(r3)
      cmplw     r4, r0
      bne-      .loc_0x7C
      lwz       r5, 0x8(r4)
      li        r0, 0
      stw       r0, 0xC(r5)
      lwz       r0, 0x8(r4)
      stw       r0, 0x4(r3)
      b         .loc_0x94

    .loc_0x7C:
      lwz       r0, 0xC(r4)
      lwz       r5, 0x8(r4)
      stw       r0, 0xC(r5)
      lwz       r0, 0x8(r4)
      lwz       r5, 0xC(r4)
      stw       r0, 0x8(r5)

    .loc_0x94:
      li        r0, 0
      stw       r0, 0x4(r4)
      lwz       r4, 0x8(r3)
      subi      r0, r4, 0x1
      stw       r0, 0x8(r3)

    .loc_0xA8:
      mr        r3, r6
      blr
    */
}

/*
 * --INFO--
 * Address:	80026CD4
 * Size:	000088
 */
void JSUPtrList::getNthLink(unsigned long) const
{
    /*
    .loc_0x0:
      lwz       r0, 0x8(r3)
      cmplw     r4, r0
      blt-      .loc_0x14
      li        r3, 0
      blr

    .loc_0x14:
      cmplwi    r4, 0
      lwz       r3, 0x0(r3)
      li        r6, 0
      blelr-
      cmplwi    r4, 0x8
      subi      r5, r4, 0x8
      ble-      .loc_0x6C
      addi      r0, r5, 0x7
      rlwinm    r0,r0,29,3,31
      mtctr     r0
      cmplwi    r5, 0
      ble-      .loc_0x6C

    .loc_0x44:
      lwz       r3, 0xC(r3)
      addi      r6, r6, 0x8
      lwz       r3, 0xC(r3)
      lwz       r3, 0xC(r3)
      lwz       r3, 0xC(r3)
      lwz       r3, 0xC(r3)
      lwz       r3, 0xC(r3)
      lwz       r3, 0xC(r3)
      lwz       r3, 0xC(r3)
      bdnz+     .loc_0x44

    .loc_0x6C:
      sub       r0, r4, r6
      mtctr     r0
      cmplw     r6, r4
      bgelr-

    .loc_0x7C:
      lwz       r3, 0xC(r3)
      bdnz+     .loc_0x7C
      blr
    */
}