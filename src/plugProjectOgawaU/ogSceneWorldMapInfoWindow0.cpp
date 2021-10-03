

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
 * Address:	8032BAA4
 * Size:	00003C
 */
void og::newScreen::WorldMapInfoWindow0::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x1DBC
      lis       r4, 0x804E
      mr        r3, r31
      subi      r0, r4, 0x61D4
      stw       r0, 0x0(r31)
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
 * Size:	000060
 */
void og::newScreen::WorldMapInfoWindow0::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032BAE0
 * Size:	0000A4
 */
void og::newScreen::WorldMapInfoWindow0::doCreateObj((JKRArchive*))
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
      li        r3, 0xD4
      bl        -0x307C5C
      mr.       r4, r3
      beq-      .loc_0x3C
      lis       r4, 0x8049
      subi      r4, r4, 0x9F8
      bl        -0x7D4
      mr        r4, r3

    .loc_0x3C:
      mr        r3, r30
      mr        r5, r31
      bl        0x126250
      lwz       r31, 0x21C(r30)
      lis       r4, 0x4F
      lis       r6, 0x5769
      lis       r5, 0x574D
      mr        r3, r31
      addi      r4, r4, 0x4741
      addi      r6, r6, 0x6E30
      addi      r5, r5, 0x6170
      bl        -0x1C82C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x8C
      lbz       r7, 0x20(r31)
      mr        r3, r30
      li        r4, 0
      li        r5, 0
      li        r6, 0
      bl        0x12671C

    .loc_0x8C:
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
 * Address:	8032BB84
 * Size:	000008
 */
void og::newScreen::WorldMapInfoWindow0::doConfirmSetScene(
    (Screen::SetSceneArg&))
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	8032BB8C
 * Size:	000064
 */
void og::newScreen::WorldMapInfoWindow0::doGetFinishState(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x4F
      lis       r6, 0x5769
      stw       r0, 0x14(r1)
      lis       r5, 0x574D
      addi      r4, r4, 0x4741
      addi      r6, r6, 0x6E30
      stw       r31, 0xC(r1)
      addi      r5, r5, 0x6170
      stw       r30, 0x8(r1)
      li        r30, 0
      lwz       r31, 0x21C(r3)
      mr        r3, r31
      bl        -0x1C8A8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x48
      lwz       r30, 0x8(r31)

    .loc_0x48:
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
 * Address:	8032BBF0
 * Size:	00000C
 */
void og::newScreen::WorldMapInfoWindow0::getResName( const
{
    /*
    .loc_0x0:
      lis       r3, 0x8049
      subi      r3, r3, 0x9DC
      blr
    */
}

/*
 * --INFO--
 * Address:	8032BBFC
 * Size:	000008
 */
void og::newScreen::WorldMapInfoWindow0::getSceneType(void)
{
    /*
    .loc_0x0:
      li        r3, 0x2729
      blr
    */
}

/*
 * --INFO--
 * Address:	8032BC04
 * Size:	000014
 */
void og::newScreen::WorldMapInfoWindow0::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x5769
      lis       r3, 0x574D
      addi      r4, r4, 0x6E30
      addi      r3, r3, 0x6170
      blr
    */
}

/*
 * --INFO--
 * Address:	8032BC18
 * Size:	000008
 */
void og::newScreen::WorldMapInfoWindow0::isUseBackupSceneInfo(void)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	8032BC20
 * Size:	000028
 */
void __sinit_ogSceneWorldMapInfoWindow0_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804E
      stw       r0, -0x67E0(r13)
      stfsu     f0, -0x61E0(r3)
      stfs      f0, -0x67DC(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
