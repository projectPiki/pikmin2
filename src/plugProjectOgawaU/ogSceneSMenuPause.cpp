

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
 * Address:	803140B4
 * Size:	000050
 */
void og::newScreen::SMenuPause::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x13D6C8
      lis       r4, 0x804E
      lis       r3, 0x804E
      subi      r0, r4, 0x7A14
      li        r4, 0x1
      stw       r0, 0x0(r31)
      subi      r0, r3, 0x774C
      mr        r3, r31
      stw       r4, 0x220(r31)
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
 * Size:	000084
 */
void og::newScreen::SMenuPause::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80314104
 * Size:	000004
 */
void og::newScreen::SMenuPause::doUserCallBackFunc((Resource::MgrCommand*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80314108
 * Size:	000060
 */
void og::newScreen::SMenuPause::doCreateObj((JKRArchive*))
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
      li        r3, 0x118
      bl        -0x2F0284
      mr.       r4, r3
      beq-      .loc_0x3C
      lis       r4, 0x8049
      subi      r4, r4, 0x1A88
      bl        0x2F0
      mr        r4, r3

    .loc_0x3C:
      mr        r3, r30
      mr        r5, r31
      bl        0x13DC28
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
 * Address:	80314168
 * Size:	000004
 */
void og::newScreen::SMenuPause::doUpdateActive(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8031416C
 * Size:	000068
 */
void og::newScreen::SMenuPause::doConfirmSetScene((Screen::SetSceneArg&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      lwz       r12, 0x0(r4)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      subi      r0, r3, 0x2710
      cmplwi    r0, 0x1B
      bgt-      .loc_0x50
      lis       r3, 0x804E
      rlwinm    r0,r0,2,0,29
      subi      r3, r3, 0x77BC
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      li        r31, 0x1

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
 * Address:	803141D4
 * Size:	00000C
 */
void og::newScreen::SMenuPause::getResName( const
{
    /*
    .loc_0x0:
      lis       r3, 0x8049
      subi      r3, r3, 0x1A74
      blr
    */
}

/*
 * --INFO--
 * Address:	803141E0
 * Size:	000008
 */
void og::newScreen::SMenuPause::getSceneType(void)
{
    /*
    .loc_0x0:
      li        r3, 0x271A
      blr
    */
}

/*
 * --INFO--
 * Address:	803141E8
 * Size:	00000C
 */
void og::newScreen::SMenuPause::getOwnerID(void)
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
 * Address:	803141F4
 * Size:	000014
 */
void og::newScreen::SMenuPause::getMemberID(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x4155
      lis       r3, 0x534D
      addi      r4, r4, 0x5345
      addi      r3, r3, 0x5F50
      blr
    */
}

/*
 * --INFO--
 * Address:	80314208
 * Size:	000008
 */
void og::newScreen::SMenuPause::isUseBackupSceneInfo(void)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80314210
 * Size:	000028
 */
void __sinit_ogSceneSMenuPause_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804E
      stw       r0, -0x6820(r13)
      stfsu     f0, -0x77C8(r3)
      stfs      f0, -0x681C(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}
