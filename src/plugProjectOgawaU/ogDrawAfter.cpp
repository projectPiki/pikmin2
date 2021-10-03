

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void og::Screen::CallBack_DrawAfter::__ct( (P2DScreen::Mgr *, unsigned long long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032D684
 * Size:	000004
 */
void og::Screen::CallBack_DrawAfter::update(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8032D688
 * Size:	0000FC
 */
void og::Screen::CallBack_DrawAfter::draw( (Graphics &, J2DGrafContext &))
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r5
  stw       r30, 0x48(r1)
  mr        r30, r4
  stw       r29, 0x44(r1)
  mr        r29, r3
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0xE0
  lwz       r4, 0x1C(r29)
  addi      r3, r1, 0x14
  li        r5, 0
  bl        -0x2F472C
  lwz       r4, 0x14(r1)
  addi      r3, r1, 0x8
  lwz       r6, 0x18(r1)
  li        r5, 0x3
  lwz       r0, 0x1C(r1)
  stw       r4, 0x2C(r1)
  lwz       r4, 0x1C(r29)
  stw       r6, 0x30(r1)
  stw       r0, 0x34(r1)
  bl        -0x2F4754
  addi      r3, r30, 0xBC
  lwz       r5, 0x8(r1)
  lwz       r12, 0xBC(r30)
  lwz       r4, 0xC(r1)
  lwz       r0, 0x10(r1)
  lwz       r12, 0x14(r12)
  stw       r5, 0x20(r1)
  stw       r4, 0x24(r1)
  stw       r0, 0x28(r1)
  mtctr     r12
  bctrl     
  lwz       r3, 0x20(r29)
  li        r4, 0
  lfs       f2, 0x30(r1)
  li        r5, 0
  lwz       r12, 0x0(r3)
  li        r6, 0
  lfs       f0, 0x24(r1)
  lfs       f1, 0x2C(r1)
  lfs       f3, 0x20(r1)
  fsubs     f4, f0, f2
  lwz       r12, 0xEC(r12)
  fsubs     f3, f3, f1
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0xE0:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  lwz       r29, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	8032D784
 * Size:	0000E4
 */
void og::Screen::setCallBack_DrawAfter( (P2DScreen::Mgr *, unsigned long long))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r6
  stw       r28, 0x10(r1)
  mr        r28, r3
  li        r3, 0x28
  bl        -0x30990C
  mr.       r31, r3
  beq-      .loc_0xAC
  bl        0xE3BD4
  lis       r3, 0x804D
  lis       r4, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r3, 0x804E
  stw       r0, 0x0(r31)
  li        r5, 0
  addi      r4, r4, 0x7F2C
  subi      r0, r3, 0x5EA8
  stw       r5, 0x18(r31)
  mr        r3, r28
  mr        r6, r29
  mr        r5, r30
  stw       r4, 0x0(r31)
  stw       r0, 0x0(r31)
  bl        -0x2A94C
  stw       r3, 0x1C(r31)
  lis       r5, 0x636F
  lis       r4, 0x6F67
  lwz       r3, 0x1C(r31)
  addi      r6, r5, 0x7079
  addi      r5, r4, 0x4441
  bl        -0x1EEBC
  stw       r3, 0x20(r31)
  li        r4, 0
  li        r0, 0x1
  lwz       r3, 0x1C(r31)
  stb       r4, 0xB0(r3)
  stb       r0, 0x24(r31)

.loc_0xAC:
  mr        r3, r28
  mr        r6, r29
  mr        r5, r30
  mr        r7, r31
  bl        0x1072E4
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
 * Address:	8032D868
 * Size:	000080
 */
void og::Screen::CallBack_DrawAfter::__dt(void)
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
  beq-      .loc_0x64
  lis       r4, 0x804E
  subi      r0, r4, 0x5EA8
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r4, 0x804D
  addi      r0, r4, 0x7F2C
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r5, 0x804D
  li        r4, 0
  addi      r0, r5, 0x7B0C
  stw       r0, 0x0(r30)
  bl        0xE3CD0

.loc_0x54:
  extsh.    r0, r31
  ble-      .loc_0x64
  mr        r3, r30
  bl        -0x309814

.loc_0x64:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
