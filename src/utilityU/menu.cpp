

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80456184
 * Size:	00012C
 */
void Menu::Menu(JUTGamePad *, JUTFont *, bool)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r6
  stw       r30, 0x28(r1)
  mr        r30, r5
  stw       r29, 0x24(r1)
  mr        r29, r4
  stw       r28, 0x20(r1)
  mr        r28, r3
  addi      r3, r28, 0x18
  bl        -0x42F8E4
  stw       r29, 0x0(r28)
  lis       r4, 0xC00
  li        r5, 0xF
  li        r6, 0x3
  lwz       r3, 0x0(r28)
  bl        -0x4279E4
  stw       r30, 0x4(r28)
  li        r0, 0
  li        r3, 0x30
  stb       r31, 0x8(r28)
  stw       r0, 0xC(r28)
  bl        -0x432340
  mr.       r4, r3
  beq-      .loc_0x80
  li        r4, 0
  li        r5, 0
  addi      r6, r2, 0x2888
  bl        0x644
  mr        r4, r3

.loc_0x80:
  li        r0, 0
  addi      r3, r28, 0x18
  stb       r0, 0x4(r4)
  addi      r4, r4, 0x20
  bl        -0x42F930
  li        r8, 0
  li        r7, 0xBE
  stw       r8, 0x2C(r28)
  li        r6, 0xDC
  li        r5, 0x104
  li        r4, 0x1
  stw       r8, 0x30(r28)
  li        r0, 0x100
  lfs       f0, 0x2890(r2)
  mr        r3, r28
  stw       r8, 0x28(r28)
  stw       r8, 0x24(r28)
  stw       r8, 0x14(r28)
  stw       r8, 0x10(r28)
  stw       r8, 0x4C(r28)
  stw       r8, 0x50(r28)
  stw       r8, 0x54(r28)
  stw       r7, 0x40(r28)
  stw       r6, 0x44(r28)
  stw       r5, 0x48(r28)
  stb       r4, 0x58(r28)
  stb       r4, 0x59(r28)
  stw       r8, 0x34(r28)
  stfs      f0, 0x38(r28)
  stfs      f0, 0x3C(r28)
  stw       r7, 0x8(r1)
  stw       r6, 0xC(r1)
  stw       r7, 0x10(r1)
  stw       r6, 0x14(r1)
  stw       r0, 0x5C(r28)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<Menu::MenuItem>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Menu::enterOption()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void Menu::enterMenu(Menu *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void Menu::exitMenu(Menu *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void Menu::open()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void Menu::close()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804562B0
 * Size:	0000C0
 */
void Menu::addOption(int, char *, IDelegate1<Menu &> *, bool)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  mr        r29, r5
  mr        r30, r6
  mr        r31, r7
  li        r3, 0x30
  bl        -0x432434
  mr.       r0, r3
  beq-      .loc_0x48
  mr        r5, r28
  mr        r6, r29
  li        r4, 0x1
  bl        0x550
  mr        r0, r3

.loc_0x48:
  stw       r0, 0x28(r27)
  addi      r3, r27, 0x18
  lwz       r4, 0x28(r27)
  stb       r31, 0x4(r4)
  lwz       r4, 0x28(r27)
  addi      r4, r4, 0x20
  bl        -0x42FA2C
  cmplwi    r30, 0
  beq-      .loc_0x80
  lwz       r5, 0x5C(r27)
  mr        r3, r27
  mr        r6, r30
  li        r4, 0x10
  bl        .loc_0xC0

.loc_0x80:
  lwz       r0, 0x24(r27)
  cmplwi    r0, 0
  bne-      .loc_0xA0
  lwz       r3, 0x28(r27)
  lbz       r0, 0x4(r3)
  cmplwi    r0, 0
  beq-      .loc_0xA0
  stw       r3, 0x24(r27)

.loc_0xA0:
  lwz       r3, 0x30(r27)
  addi      r0, r3, 0x1
  stw       r0, 0x30(r27)
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0xC0:
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void Menu::addMenu(Menu *, int, char *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80456370
 * Size:	0000C8
 */
void Menu::addKeyEvent(Menu::KeyEvent::cTypeFlag, unsigned long, IDelegate1<Menu &> *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r6
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  li        r3, 0x1C
  bl        -0x4324FC
  mr.       r4, r3
  beq-      .loc_0x50
  mr        r4, r29
  mr        r5, r30
  mr        r6, r31
  bl        0x420
  mr        r4, r3

.loc_0x50:
  lwz       r3, 0x28(r28)
  cmplwi    r3, 0
  beq-      .loc_0x6C
  addi      r3, r3, 0x14
  addi      r4, r4, 0xC
  bl        -0x42FAF0
  b         .loc_0xA8

.loc_0x6C:
  lwz       r3, 0x18(r28)
  cmplwi    r3, 0
  beq-      .loc_0x8C
  lwz       r3, 0x0(r3)
  addi      r4, r4, 0xC
  addi      r3, r3, 0x14
  bl        -0x42FB10
  b         .loc_0xA8

.loc_0x8C:
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x3288
  li        r4, 0xB7
  subi      r5, r5, 0x327C
  crclr     6, 0x6
  bl        -0x42BDD4

.loc_0xA8:
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
 * Address:	........
 * Size:	00004C
 */
void Menu::nextCurrOption()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void Menu::prevCurrOption()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000168
 */
void Menu::checkNewOption()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80456438
 * Size:	0003A0
 */
void Menu::doUpdate(bool)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lfs       f2, 0x2898(r2)
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  mr        r31, r30
  stw       r29, 0x14(r1)
  stw       r30, 0x10(r3)
  lwz       r3, -0x6514(r13)
  lfs       f0, 0x3C(r30)
  lfs       f1, 0x54(r3)
  fmadds    f0, f2, f1, f0
  stfs      f0, 0x3C(r30)
  lwz       r0, 0x34(r30)
  cmpwi     r0, 0x2
  beq-      .loc_0xDC
  bge-      .loc_0x58
  cmpwi     r0, 0x1
  bge-      .loc_0x64
  b         .loc_0x380

.loc_0x58:
  cmpwi     r0, 0x4
  bge-      .loc_0x380
  b         .loc_0xA0

.loc_0x64:
  lwz       r3, -0x6514(r13)
  lfs       f3, 0x289C(r2)
  lfs       f2, 0x54(r3)
  lfs       f1, 0x38(r30)
  lfs       f0, 0x2894(r2)
  fmadds    f1, f3, f2, f1
  stfs      f1, 0x38(r30)
  lfs       f1, 0x38(r30)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x380
  stfs      f0, 0x38(r30)
  li        r0, 0x2
  stw       r0, 0x34(r30)
  b         .loc_0x380

.loc_0xA0:
  lwz       r3, -0x6514(r13)
  lfs       f3, 0x289C(r2)
  lfs       f2, 0x54(r3)
  lfs       f1, 0x38(r30)
  lfs       f0, 0x2890(r2)
  fnmsubs   f1, f3, f2, f1
  stfs      f1, 0x38(r30)
  lfs       f1, 0x38(r30)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x380
  stfs      f0, 0x38(r30)
  li        r0, 0
  stw       r0, 0x34(r30)
  lwz       r31, 0x14(r30)
  b         .loc_0x380

.loc_0xDC:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0xEC
  li        r0, 0x1
  stb       r0, 0x59(r30)

.loc_0xEC:
  lwz       r4, 0x0(r30)
  lis       r3, 0x400
  addi      r0, r3, 0x4
  lwz       r4, 0x30(r4)
  and.      r0, r4, r0
  beq-      .loc_0x194
  lwz       r3, 0x24(r30)
  mr        r4, r30
  li        r5, 0x2
  bl        0x3B0
  lwz       r3, 0x24(r30)
  bl        0x370
  stw       r3, 0x24(r30)
  lwz       r0, 0x24(r30)
  cmplwi    r0, 0
  bne-      .loc_0x15C
  lwz       r3, 0x18(r30)
  lwz       r0, 0x0(r3)
  stw       r0, 0x24(r30)
  b         .loc_0x15C

.loc_0x13C:
  bl        0x34C
  stw       r3, 0x24(r30)
  lwz       r0, 0x24(r30)
  cmplwi    r0, 0
  bne-      .loc_0x15C
  lwz       r3, 0x18(r30)
  lwz       r0, 0x0(r3)
  stw       r0, 0x24(r30)

.loc_0x15C:
  lwz       r3, 0x24(r30)
  lwz       r0, 0x8(r3)
  cmplwi    r0, 0
  beq+      .loc_0x13C
  lbz       r0, 0x4(r3)
  cmplwi    r0, 0
  beq+      .loc_0x13C
  li        r0, 0x1
  li        r4, 0x1802
  stb       r0, 0x59(r30)
  li        r5, 0
  lwz       r3, -0x67A8(r13)
  bl        -0x11DF94
  b         .loc_0x228

.loc_0x194:
  lis       r3, 0x800
  addi      r0, r3, 0x8
  and.      r0, r4, r0
  beq-      .loc_0x228
  lwz       r3, 0x24(r30)
  mr        r4, r30
  li        r5, 0x2
  bl        0x310
  lwz       r3, 0x24(r30)
  bl        0x2EC
  stw       r3, 0x24(r30)
  lwz       r0, 0x24(r30)
  cmplwi    r0, 0
  bne-      .loc_0x1FC
  lwz       r3, 0x1C(r30)
  lwz       r0, 0x0(r3)
  stw       r0, 0x24(r30)
  b         .loc_0x1FC

.loc_0x1DC:
  bl        0x2C8
  stw       r3, 0x24(r30)
  lwz       r0, 0x24(r30)
  cmplwi    r0, 0
  bne-      .loc_0x1FC
  lwz       r3, 0x1C(r30)
  lwz       r0, 0x0(r3)
  stw       r0, 0x24(r30)

.loc_0x1FC:
  lwz       r3, 0x24(r30)
  lwz       r0, 0x8(r3)
  cmplwi    r0, 0
  beq+      .loc_0x1DC
  lbz       r0, 0x4(r3)
  cmplwi    r0, 0
  beq+      .loc_0x1DC
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1802
  li        r5, 0
  bl        -0x11E02C

.loc_0x228:
  lbz       r0, 0x58(r30)
  cmplwi    r0, 0
  beq-      .loc_0x264
  lwz       r3, 0x4C(r30)
  cmplwi    r3, 0
  beq-      .loc_0x254
  lwz       r12, 0x0(r3)
  mr        r4, r30
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x254:
  li        r3, 0
  li        r0, 0x1
  stb       r3, 0x58(r30)
  stb       r0, 0x59(r30)

.loc_0x264:
  lbz       r0, 0x59(r30)
  lis       r3, 0x1
  subi      r29, r3, 0x4
  cmplwi    r0, 0
  beq-      .loc_0x2AC
  lwz       r3, 0x54(r30)
  ori       r29, r29, 0x1
  cmplwi    r3, 0
  beq-      .loc_0x29C
  lwz       r12, 0x0(r3)
  mr        r4, r30
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x29C:
  lfs       f0, 0x2890(r2)
  li        r0, 0
  stfs      f0, 0x3C(r30)
  stb       r0, 0x59(r30)

.loc_0x2AC:
  lwz       r3, 0x24(r30)
  mr        r4, r30
  mr        r5, r29
  bl        0x208
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2D8
  lwz       r3, 0x18(r30)
  mr        r4, r30
  mr        r5, r29
  lwz       r3, 0x0(r3)
  bl        0x1EC

.loc_0x2D8:
  lwz       r0, 0x10(r30)
  cmplw     r0, r30
  beq-      .loc_0x380
  lwz       r3, 0x24(r30)
  mr        r4, r30
  li        r5, 0x2
  bl        0x1D0
  lwz       r3, 0x50(r30)
  cmplwi    r3, 0
  beq-      .loc_0x314
  lwz       r12, 0x0(r3)
  mr        r4, r30
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x314:
  lwz       r3, 0x10(r30)
  cmplwi    r3, 0
  beq-      .loc_0x358
  lfs       f0, 0x2890(r2)
  li        r0, 0x1
  stfs      f0, 0x38(r3)
  stw       r0, 0x34(r3)
  lwz       r0, 0x24(r3)
  cmplwi    r0, 0
  bne-      .loc_0x350
  lwz       r4, 0x18(r3)
  cmplwi    r4, 0
  bne-      .loc_0x350
  lwz       r0, 0x0(r4)
  stw       r0, 0x24(r3)

.loc_0x350:
  lwz       r31, 0x10(r30)
  b         .loc_0x378

.loc_0x358:
  lwz       r0, 0xC(r30)
  cmplwi    r0, 0
  bne-      .loc_0x368
  stw       r0, 0x10(r30)

.loc_0x368:
  lfs       f0, 0x2894(r2)
  li        r0, 0x3
  stfs      f0, 0x38(r30)
  stw       r0, 0x34(r30)

.loc_0x378:
  lwz       r0, 0x10(r30)
  stw       r0, 0x14(r30)

.loc_0x380:
  lwz       r0, 0x24(r1)
  mr        r3, r31
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
 * Address:	........
 * Size:	000560
 */
void Menu::draw(Graphics &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804567D8
 * Size:	000068
 */
void __ct__Q24Menu8KeyEventFQ34Menu8KeyEvent9cTypeFlagUlP18IDelegate1<Menu &>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r6
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  mr        r4, r28
  addi      r3, r28, 0xC
  bl        -0x430054
  stw       r29, 0x0(r28)
  mr        r3, r28
  stw       r30, 0x4(r28)
  stw       r31, 0x8(r28)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<Menu::KeyEvent>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80456840
 * Size:	000080
 */
void __ct__Q24Menu8MenuItemFQ34Menu8MenuItem9cTypeFlagiPc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r6
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  addi      r3, r28, 0x14
  bl        -0x42FFA0
  mr        r4, r28
  addi      r3, r28, 0x20
  bl        -0x4300C4
  li        r3, 0x1
  li        r0, 0
  stb       r3, 0x4(r28)
  mr        r3, r28
  stw       r31, 0x8(r28)
  stw       r30, 0xC(r28)
  stw       r29, 0x10(r28)
  stw       r0, 0x0(r28)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<Menu::MenuItem>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<Menu::KeyEvent>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804568C0
 * Size:	00001C
 */
void getNext__Q24Menu8MenuItemFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x2C(r3)
  cmplwi    r3, 0
  beq-      .loc_0x14
  lwz       r3, 0x0(r3)
  blr       

.loc_0x14:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	804568DC
 * Size:	00001C
 */
void getPrev__Q24Menu8MenuItemFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x28(r3)
  cmplwi    r3, 0
  beq-      .loc_0x14
  lwz       r3, 0x0(r3)
  blr       

.loc_0x14:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	804568F8
 * Size:	000200
 */
void checkEvents__Q24Menu8MenuItemFP4Menui(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r26, r3
  mr        r27, r4
  mr        r28, r5
  li        r30, 0
  lwz       r31, 0x14(r3)
  b         .loc_0x1E0

.loc_0x28:
  lwz       r4, 0x0(r31)
  li        r29, 0
  lwz       r5, 0x0(r4)
  and.      r0, r28, r5
  beq-      .loc_0x1DC
  cmplwi    r5, 0x20
  bgt-      .loc_0x1D4
  lis       r3, 0x804F
  rlwinm    r0,r5,2,0,29
  subi      r3, r3, 0x2338
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  lwz       r3, 0x8(r4)
  mr        r4, r27
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1D4
  lwz       r3, 0x8(r4)
  mr        r4, r27
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1D4
  lwz       r3, 0x0(r27)
  lwz       r0, 0x4(r4)
  lwz       r3, 0x18(r3)
  and.      r0, r3, r0
  beq-      .loc_0x1D4
  lwz       r3, 0x8(r4)
  mr        r4, r27
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1D4
  lwz       r3, 0x0(r27)
  lwz       r0, 0x4(r4)
  lwz       r3, 0x1C(r3)
  and.      r0, r3, r0
  beq-      .loc_0x1D4
  lwz       r3, 0x8(r4)
  mr        r4, r27
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r30, 0x1
  li        r29, 0x1
  b         .loc_0x1D4
  lwz       r3, 0x0(r27)
  lwz       r0, 0x4(r4)
  lwz       r3, 0x1C(r3)
  and.      r0, r3, r0
  beq-      .loc_0x1D4
  lwz       r3, 0x24(r27)
  lwz       r0, 0x10(r3)
  cmpwi     r0, 0x2
  bne-      .loc_0x1B4
  mr        r3, r26
  mr        r4, r27
  li        r5, 0x2
  bl        .loc_0x0
  lwz       r0, 0xC(r27)
  cmplwi    r0, 0
  bne-      .loc_0x140
  stw       r0, 0x10(r27)

.loc_0x140:
  lfs       f1, 0x2894(r2)
  li        r3, 0x3
  lfs       f0, 0x2890(r2)
  li        r0, 0x1
  stfs      f1, 0x38(r27)
  stw       r3, 0x34(r27)
  stw       r27, 0x10(r27)
  lwz       r3, 0x24(r27)
  lwz       r3, 0x0(r3)
  stw       r3, 0x14(r27)
  lwz       r3, 0x14(r27)
  stfs      f0, 0x38(r3)
  stw       r0, 0x34(r3)
  lwz       r0, 0x24(r3)
  cmplwi    r0, 0
  bne-      .loc_0x194
  lwz       r4, 0x18(r3)
  cmplwi    r4, 0
  bne-      .loc_0x194
  lwz       r0, 0x0(r4)
  stw       r0, 0x24(r3)

.loc_0x194:
  li        r0, 0x1
  li        r30, 0
  stb       r0, 0x58(r27)
  li        r29, 0x1
  lwz       r3, 0x24(r27)
  lwz       r3, 0x0(r3)
  stb       r0, 0x58(r3)
  b         .loc_0x1D4

.loc_0x1B4:
  lwz       r3, 0x8(r4)
  mr        r4, r27
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r30, 0x1
  li        r29, 0x1

.loc_0x1D4:
  rlwinm.   r0,r29,0,24,31
  bne-      .loc_0x1E8

.loc_0x1DC:
  lwz       r31, 0xC(r31)

.loc_0x1E0:
  cmplwi    r31, 0
  bne+      .loc_0x28

.loc_0x1E8:
  mr        r3, r30
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void Menu::getCurrentMenuItemNo()
{
	// UNUSED FUNCTION
}