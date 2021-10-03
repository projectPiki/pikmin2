

/*
 * --INFO--
 * Address:	8032CD30
 * Size:	000044
 */
void og::newScreen::ChallengeBase::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        0x124A4C
      lis       r3, 0x804E
      li        r0, 0
      subi      r4, r3, 0x5F20
      mr        r3, r31
      stw       r4, 0x0(r31)
      stb       r0, 0x220(r31)
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
void og::newScreen::ChallengeBase::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032CD74
 * Size:	0000A4
 */
void og::newScreen::ChallengeBase::updateCountDown(
    (float, og::Screen::DispMemberDayEndCount*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x8051
      lfd       f4, -0x408(r2)
      stw       r0, 0x24(r1)
      lis       r0, 0x4330
      addi      r5, r5, 0x3FE0
      lfs       f0, -0x410(r2)
      lwz       r5, 0x10(r5)
      stw       r0, 0x8(r1)
      addi      r5, r5, 0x1
      stw       r5, 0xC(r1)
      lfd       f2, 0x8(r1)
      stw       r0, 0x10(r1)
      fsubs     f3, f2, f4
      stw       r5, 0x14(r1)
      lfd       f2, 0x10(r1)
      fsubs     f3, f3, f1
      fsubs     f1, f2, f4
      fdivs     f1, f3, f1
      fcmpo     cr0, f1, f0
      cror      2, 0x1, 0x2
      bne-      .loc_0x8C
      stfs      f1, 0x8(r4)
      stfs      f0, 0xC(r4)
      lbz       r0, 0x220(r3)
      cmplwi    r0, 0
      bne-      .loc_0x94
      li        r0, 0x1
      stb       r0, 0x220(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x50(r12)
      mtctr     r12
      bctrl
      b         .loc_0x94

    .loc_0x8C:
      li        r0, 0
      stb       r0, 0x220(r3)

    .loc_0x94:
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}
