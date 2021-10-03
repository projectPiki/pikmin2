

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
 * Address:	8032C8A0
 * Size:	000098
 */
void og::newScreen::ObjChallengeBase::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x127234
  lis       r3, 0x804E
  lfs       f0, -0x420(r2)
  subi      r3, r3, 0x5F9C
  li        r5, -0x1
  stw       r3, 0x0(r31)
  addi      r3, r3, 0x10
  li        r4, 0
  li        r0, 0xFF
  stw       r3, 0x18(r31)
  mr        r3, r31
  stfs      f0, 0x38(r31)
  stfs      f0, 0x3C(r31)
  stw       r5, 0x54(r31)
  stw       r5, 0x58(r31)
  stb       r4, 0x48(r31)
  stb       r4, 0x49(r31)
  stw       r4, 0x4C(r31)
  stfs      f0, 0x50(r31)
  stfs      f0, 0x44(r31)
  stb       r0, 0x54(r31)
  stb       r0, 0x55(r31)
  stb       r0, 0x56(r31)
  stb       r0, 0x57(r31)
  stb       r4, 0x58(r31)
  stb       r4, 0x59(r31)
  stb       r4, 0x5A(r31)
  stb       r4, 0x5B(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8032C938
 * Size:	0000AC
 */
void og::newScreen::ObjChallengeBase::__dt(void)
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
  beq-      .loc_0x90
  lis       r4, 0x804E
  subi      r4, r4, 0x5F9C
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x80
  lis       r4, 0x804F
  subi      r4, r4, 0x28A8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x80
  lis       r4, 0x804E
  subi      r4, r4, 0x7DC0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  bl        0xE4C34
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x30F974
  mr        r3, r30
  li        r4, 0
  bl        0xE4BD4

.loc_0x80:
  extsh.    r0, r31
  ble-      .loc_0x90
  mr        r3, r30
  bl        -0x308910

.loc_0x90:
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
 * Address:	8032C9E4
 * Size:	0000A0
 */
void og::newScreen::ObjChallengeBase::doCreateAfter( (JKRArchive *, og::Screen::CallBack_CounterRV *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  addi      r3, r1, 0xC
  lwz       r0, 0x6C(r5)
  stw       r0, 0x4C(r31)
  lwz       r4, 0x4C(r31)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x138(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0xC(r1)
  addi      r3, r1, 0x8
  stb       r0, 0x54(r31)
  lbz       r0, 0xD(r1)
  stb       r0, 0x55(r31)
  lbz       r0, 0xE(r1)
  stb       r0, 0x56(r31)
  lbz       r0, 0xF(r1)
  stb       r0, 0x57(r31)
  lwz       r4, 0x4C(r31)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x134(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x8(r1)
  stb       r0, 0x58(r31)
  lbz       r0, 0x9(r1)
  stb       r0, 0x59(r31)
  lbz       r0, 0xA(r1)
  stb       r0, 0x5A(r31)
  lbz       r0, 0xB(r1)
  stb       r0, 0x5B(r31)
  lwz       r31, 0x1C(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8032CA84
 * Size:	000014
 */
void og::newScreen::ObjChallengeBase::doStart( (Screen::StartSceneArg const *))
{
/*
.loc_0x0:
  lfs       f0, -0x420(r2)
  stfs      f0, 0x38(r3)
  stfs      f0, 0x3C(r3)
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8032CA98
 * Size:	000010
 */
void og::newScreen::ObjChallengeBase::doEnd( (Screen::EndSceneArg const *))
{
/*
.loc_0x0:
  lfs       f0, -0x420(r2)
  stfs      f0, 0x38(r3)
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8032CAA8
 * Size:	0001D0
 */
void og::newScreen::ObjChallengeBase::updateTimer( (float, float))
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stfd      f30, 0x20(r1)
  psq_st    f30,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  mr        r31, r3
  fmr       f30, f1
  lwz       r0, 0x5C(r3)
  fmr       f31, f2
  cmplwi    r0, 0
  beq-      .loc_0x94
  lfs       f2, 0x50(r31)
  lfs       f1, -0x420(r2)
  fcmpo     cr0, f2, f1
  ble-      .loc_0x94
  lwz       r3, -0x6514(r13)
  fcmpo     cr0, f31, f1
  lfs       f0, 0x54(r3)
  fsubs     f0, f2, f0
  stfs      f0, 0x50(r31)
  ble-      .loc_0x74
  lfs       f0, 0x50(r31)
  fcmpo     cr0, f0, f1
  bge-      .loc_0x74
  lwz       r3, -0x6858(r13)
  bl        -0x1FC94

.loc_0x74:
  lfs       f0, -0x420(r2)
  fcmpo     cr0, f31, f0
  ble-      .loc_0x8C
  fsubs     f0, f30, f31
  stfs      f0, 0x44(r31)
  b         .loc_0x98

.loc_0x8C:
  stfs      f30, 0x44(r31)
  b         .loc_0x98

.loc_0x94:
  stfs      f30, 0x44(r31)

.loc_0x98:
  lfs       f1, 0x44(r31)
  bl        -0x26AFF8
  stw       r3, 0x40(r31)
  lis       r3, 0x8051
  addi      r3, r3, 0x3FE0
  lwz       r4, 0x40(r31)
  lwz       r0, 0x10(r3)
  cmplw     r4, r0
  bgt-      .loc_0x108
  lwz       r0, 0x8(r3)
  addi      r4, r1, 0x14
  stw       r0, 0x14(r1)
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x12C(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  addi      r4, r1, 0x10
  addi      r3, r3, 0x3FE0
  lwz       r0, 0xC(r3)
  stw       r0, 0x10(r1)
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x128(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x148

.loc_0x108:
  lwz       r0, 0x54(r31)
  addi      r4, r1, 0xC
  stw       r0, 0xC(r1)
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x12C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x58(r31)
  addi      r4, r1, 0x8
  stw       r0, 0x8(r1)
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x128(r12)
  mtctr     r12
  bctrl     

.loc_0x148:
  lfs       f1, 0x50(r31)
  lfs       f0, -0x420(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x1AC
  lwz       r0, 0x40(r31)
  cmplwi    r0, 0x1E
  bne-      .loc_0x184
  lbz       r0, 0x48(r31)
  cmplwi    r0, 0
  bne-      .loc_0x184
  li        r0, 0x1
  stb       r0, 0x48(r31)
  lwz       r3, -0x6858(r13)
  bl        -0x20130

.loc_0x184:
  lwz       r0, 0x40(r31)
  cmplwi    r0, 0xA
  bne-      .loc_0x1AC
  lbz       r0, 0x49(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1AC
  li        r0, 0x1
  stb       r0, 0x49(r31)
  lwz       r3, -0x6858(r13)
  bl        -0x20158

.loc_0x1AC:
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lwz       r0, 0x44(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8032CC78
 * Size:	000008
 */
void og::newScreen::ObjChallengeBase::setSubLevel( (unsigned long))
{
/*
.loc_0x0:
  stw       r4, 0x5C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8032CC80
 * Size:	000008
 */
void Screen::ObjBase::doUpdateFadein(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8032CC88
 * Size:	000004
 */
void Screen::ObjBase::doUpdateFadeinFinish(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8032CC8C
 * Size:	000008
 */
void Screen::ObjBase::doUpdate(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8032CC94
 * Size:	000004
 */
void Screen::ObjBase::doUpdateFinish(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8032CC98
 * Size:	000004
 */
void Screen::ObjBase::doUpdateFadeoutFinish(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8032CC9C
 * Size:	00008C
 */
void __sinit_ogObjChallengeBase_cpp(void)
{
/*
.loc_0x0:
  lis       r3, 0x8051
  lis       r4, 0x8051
  li        r9, -0x1
  lfs       f2, 0x48B0(r4)
  addi      r7, r3, 0x3FE0
  lfs       f1, -0x41C(r2)
  li        r3, 0xA
  lfs       f0, -0x418(r2)
  lis       r4, 0x804E
  li        r0, 0x1E
  subi      r8, r4, 0x5FA8
  stw       r9, 0x8(r7)
  li        r6, 0xFF
  li        r5, 0
  stw       r9, 0xC(r7)
  li        r4, 0x40
  stw       r9, -0x67D0(r13)
  stfs      f2, -0x67CC(r13)
  stfs      f2, 0x0(r8)
  stfs      f2, 0x4(r8)
  stfs      f2, 0x8(r8)
  stfs      f1, 0x0(r7)
  stfs      f0, 0x4(r7)
  stb       r6, 0x8(r7)
  stb       r5, 0x9(r7)
  stb       r5, 0xA(r7)
  stb       r6, 0xB(r7)
  stb       r4, 0xC(r7)
  stb       r5, 0xD(r7)
  stb       r5, 0xE(r7)
  stb       r5, 0xF(r7)
  stw       r3, 0x10(r7)
  stw       r0, 0x14(r7)
  stw       r3, 0x18(r7)
  blr
*/
}

/*
 * --INFO--
 * Address:	8032CD28
 * Size:	000008
 */
void @24@og::newScreen::ObjChallengeBase::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x3F4
*/
}
