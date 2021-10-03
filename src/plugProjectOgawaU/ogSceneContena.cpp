

/*
 * --INFO--
 * Address:	80321F08
 * Size:	000044
 */
void og::newScreen::Contena::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x12F874
      lis       r3, 0x804E
      li        r0, 0x2714
      subi      r4, r3, 0x69F0
      mr        r3, r31
      stw       r4, 0x0(r31)
      stw       r0, 0x220(r31)
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
 * Size:	000074
 */
void og::newScreen::Contena::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80321F4C
 * Size:	000004
 */
void og::newScreen::Contena::doUserCallBackFunc((Resource::MgrCommand*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80321F50
 * Size:	000100
 */
void og::newScreen::Contena::doCreateObj((JKRArchive*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      li        r3, 0x170
      stw       r30, 0x8(r1)
      mr        r30, r4
      bl        -0x2FE0CC
      mr.       r4, r3
      beq-      .loc_0x3C
      lis       r4, 0x8049
      subi      r4, r4, 0xEC0
      bl        -0x2040
      mr        r4, r3

    .loc_0x3C:
      mr        r3, r31
      mr        r5, r30
      bl        0x12FDE0
      lwz       r30, 0x21C(r31)
      lis       r4, 0x4F
      lis       r6, 0x5445
      lis       r5, 0x43
      mr        r3, r30
      addi      r4, r4, 0x4741
      addi      r6, r6, 0x4E41
      addi      r5, r5, 0x4F4E
      bl        -0x12C9C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x80
      li        r0, 0x2714
      stw       r0, 0x220(r31)
      b         .loc_0xD0

    .loc_0x80:
      lis       r4, 0x4F
      lis       r6, 0x4D45
      lis       r5, 0x55
      mr        r3, r30
      addi      r4, r4, 0x4741
      addi      r6, r6, 0x4E55
      addi      r5, r5, 0x464F
      bl        -0x12B2C
      lwz       r0, 0x8(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0xC8
      bge-      .loc_0xD0
      cmpwi     r0, 0x1
      bge-      .loc_0xBC
      b         .loc_0xD0

    .loc_0xBC:
      li        r0, 0x2717
      stw       r0, 0x220(r31)
      b         .loc_0xD0

    .loc_0xC8:
      li        r0, 0x2718
      stw       r0, 0x220(r31)

    .loc_0xD0:
      mr        r3, r31
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0xA0
      bl        0x130250
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
 * Address:	80322050
 * Size:	00000C
 */
void og::newScreen::Contena::getResName( const
{
    /*
    .loc_0x0:
      lis       r3, 0x8049
      subi      r3, r3, 0xEB0
      blr
    */
}

/*
 * --INFO--
 * Address:	8032205C
 * Size:	000008
 */
void og::newScreen::Contena::getSceneType(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x220(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80322064
 * Size:	00000C
 */
void og::newScreen::Contena::getOwnerID(void)
{
    /*
    .loc_0x0:
      lis       r3, 0x4F
      addi      r3, r3, 0x4741
      blr
    */
}

/*
 * --INFO--
 * Address:	80322070
 * Size:	000014
 */
void og::newScreen::Contena::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x5445
      lis       r3, 0x43
      addi      r4, r4, 0x4E41
      addi      r3, r3, 0x4F4E
      blr
    */
}

/*
 * --INFO--
 * Address:	80322084
 * Size:	000008
 */
void og::newScreen::Contena::isUseBackupSceneInfo(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}
