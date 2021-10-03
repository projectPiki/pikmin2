

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80410FE0
 * Size:	00009C
 */
void kh::Screen::MailSaveData::clear(void)
{
/*
.loc_0x0:
  li        r4, 0
  li        r0, -0x1
  stb       r4, 0x0(r3)
  stb       r4, 0x1(r3)
  stb       r4, 0x2(r3)
  stb       r4, 0x3(r3)
  stb       r4, 0x4(r3)
  stb       r4, 0x5(r3)
  stb       r4, 0x6(r3)
  stb       r4, 0x7(r3)
  stb       r4, 0x8(r3)
  stb       r4, 0x9(r3)
  stb       r4, 0xA(r3)
  stb       r4, 0xB(r3)
  stb       r4, 0xC(r3)
  stb       r4, 0xD(r3)
  stb       r4, 0xE(r3)
  stb       r4, 0xF(r3)
  stb       r0, 0x10(r3)
  stb       r0, 0x11(r3)
  stb       r0, 0x12(r3)
  stb       r0, 0x13(r3)
  stb       r0, 0x14(r3)
  stb       r0, 0x15(r3)
  stb       r0, 0x16(r3)
  stb       r0, 0x17(r3)
  stb       r0, 0x18(r3)
  stb       r0, 0x19(r3)
  stb       r0, 0x1A(r3)
  stb       r0, 0x1B(r3)
  stb       r0, 0x1C(r3)
  stb       r0, 0x1D(r3)
  stb       r0, 0x1E(r3)
  stb       r0, 0x1F(r3)
  stb       r0, 0x20(r3)
  stb       r0, 0x21(r3)
  stb       r0, 0x22(r3)
  stb       r0, 0x23(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8041107C
 * Size:	000088
 */
void kh::Screen::MailSaveData::read( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  mr        r31, r28

.loc_0x2C:
  mr        r3, r29
  bl        0x33F0
  addi      r30, r30, 0x1
  stb       r3, 0x0(r31)
  cmplwi    r30, 0x10
  addi      r31, r31, 0x1
  blt+      .loc_0x2C
  li        r30, 0

.loc_0x4C:
  mr        r3, r29
  bl        0x33D0
  addi      r0, r30, 0x10
  addi      r30, r30, 0x1
  cmpwi     r30, 0x14
  stbx      r3, r28, r0
  blt+      .loc_0x4C
  lwz       r0, 0x24(r1)
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
 * Address:	80411104
 * Size:	000088
 */
void kh::Screen::MailSaveData::write( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  mr        r31, r28

.loc_0x2C:
  lbz       r4, 0x0(r31)
  mr        r3, r29
  bl        0x4538
  addi      r30, r30, 0x1
  addi      r31, r31, 0x1
  cmplwi    r30, 0x10
  blt+      .loc_0x2C
  li        r30, 0

.loc_0x4C:
  addi      r0, r30, 0x10
  mr        r3, r29
  lbzx      r4, r28, r0
  bl        0x4514
  addi      r30, r30, 0x1
  cmpwi     r30, 0x14
  blt+      .loc_0x4C
  lwz       r0, 0x24(r1)
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
 * Address:	8041118C
 * Size:	000028
 */
void kh::Screen::MailSaveData::set_history( (signed char))
{
/*
.loc_0x0:
  li        r0, 0x13
  li        r6, 0x13
  mtctr     r0

.loc_0xC:
  add       r5, r3, r6
  subi      r6, r6, 0x1
  lbz       r0, 0xF(r5)
  stb       r0, 0x10(r5)
  bdnz+     .loc_0xC
  stb       r4, 0x10(r3)
  blr
*/
}
