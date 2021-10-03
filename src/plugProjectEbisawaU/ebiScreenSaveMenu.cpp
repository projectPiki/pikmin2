

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
 * Address:	803DD0A8
 * Size:	000350
 */
void ebi::Screen::TSaveMenu::doSetArchive( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r3
  li        r3, 0x148
  stw       r29, 0x14(r1)
  bl        -0x3B9228
  mr.       r0, r3
  beq-      .loc_0x38
  bl        0x57CD4
  mr        r0, r3

.loc_0x38:
  stw       r0, 0x40(r30)
  lis       r3, 0x8049
  addi      r4, r3, 0x6E84
  mr        r6, r31
  lwz       r3, 0x40(r30)
  lis       r5, 0x110
  bl        -0x39DAD4
  lis       r4, 0x6D30
  lwz       r3, 0x40(r30)
  addi      r6, r4, 0x3179
  li        r5, 0x54
  bl        -0x12DB4
  stw       r3, 0x54(r30)
  lis       r3, 0x6D30
  addi      r6, r3, 0x316E
  li        r5, 0x54
  lwz       r3, 0x40(r30)
  bl        -0x12DCC
  stw       r3, 0x58(r30)
  lis       r3, 0x546D
  addi      r6, r3, 0x3032
  li        r5, 0
  lwz       r3, 0x40(r30)
  bl        -0x12DE4
  stw       r3, 0x5C(r30)
  lis       r5, 0x795F
  lis       r4, 0x506D
  lwz       r3, 0x40(r30)
  addi      r6, r5, 0x696C
  addi      r5, r4, 0x3031
  bl        -0x12E00
  stw       r3, 0x44(r30)
  lis       r5, 0x795F
  lis       r4, 0x506D
  lwz       r3, 0x40(r30)
  addi      r6, r5, 0x6972
  addi      r5, r4, 0x3031
  bl        -0x12E1C
  stw       r3, 0x48(r30)
  lis       r5, 0x6E5F
  lis       r4, 0x506D
  lwz       r3, 0x40(r30)
  addi      r6, r5, 0x696C
  addi      r5, r4, 0x3031
  bl        -0x12E38
  stw       r3, 0x4C(r30)
  lis       r5, 0x6E5F
  lis       r4, 0x506D
  lwz       r3, 0x40(r30)
  addi      r6, r5, 0x6972
  addi      r5, r4, 0x3031
  bl        -0x12E54
  stw       r3, 0x50(r30)
  lis       r6, 0x6D30
  mr        r3, r31
  li        r5, 0x54
  lwz       r4, 0x40(r30)
  addi      r6, r6, 0x3179
  bl        -0xD48DC
  stw       r3, 0x60(r30)
  lis       r6, 0x6D30
  mr        r3, r31
  li        r5, 0x54
  lwz       r4, 0x40(r30)
  addi      r6, r6, 0x316E
  bl        -0xD48F8
  stw       r3, 0x64(r30)
  lis       r6, 0x546D
  mr        r3, r31
  li        r5, 0
  lwz       r4, 0x40(r30)
  addi      r6, r6, 0x3032
  bl        -0xD47D8
  stw       r3, 0x68(r30)
  lwz       r3, 0x40(r30)
  bl        -0x12C50
  lis       r5, 0x795F
  lis       r4, 0x506D
  lwz       r3, 0x40(r30)
  addi      r6, r5, 0x696C
  addi      r5, r4, 0x3030
  bl        -0x12ECC
  lwz       r12, 0x0(r3)
  li        r4, 0
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lis       r5, 0x795F
  lis       r4, 0x506D
  lwz       r3, 0x40(r30)
  addi      r6, r5, 0x6972
  addi      r5, r4, 0x3030
  bl        -0x12EF8
  lwz       r12, 0x0(r3)
  li        r4, 0
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lis       r5, 0x6E5F
  lis       r4, 0x506D
  lwz       r3, 0x40(r30)
  addi      r6, r5, 0x696C
  addi      r5, r4, 0x3030
  bl        -0x12F24
  lwz       r12, 0x0(r3)
  li        r4, 0
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lis       r5, 0x6E5F
  lis       r4, 0x506D
  lwz       r3, 0x40(r30)
  addi      r6, r5, 0x6972
  addi      r5, r4, 0x3030
  bl        -0x12F50
  lwz       r12, 0x0(r3)
  li        r4, 0
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lis       r5, 0x795F
  lis       r4, 0x506D
  lwz       r3, 0x40(r30)
  addi      r6, r5, 0x696C
  addi      r5, r4, 0x3031
  bl        -0x12F7C
  lwz       r12, 0x0(r3)
  li        r4, 0
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lis       r5, 0x795F
  lis       r4, 0x506D
  lwz       r3, 0x40(r30)
  addi      r6, r5, 0x6972
  addi      r5, r4, 0x3031
  bl        -0x12FA8
  lwz       r12, 0x0(r3)
  li        r4, 0
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lis       r5, 0x6E5F
  lis       r4, 0x506D
  lwz       r3, 0x40(r30)
  addi      r6, r5, 0x696C
  addi      r5, r4, 0x3031
  bl        -0x12FD4
  lwz       r12, 0x0(r3)
  li        r4, 0
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lis       r5, 0x6E5F
  lis       r4, 0x506D
  lwz       r3, 0x40(r30)
  addi      r6, r5, 0x6972
  addi      r5, r4, 0x3031
  bl        -0x13000
  lwz       r12, 0x0(r3)
  li        r4, 0
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  li        r29, 0
  mr        r31, r30

.loc_0x2D0:
  lwz       r3, 0x44(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r29, r29, 0x1
  addi      r31, r31, 0x4
  cmpwi     r29, 0x4
  blt+      .loc_0x2D0
  lwz       r7, 0x4C(r30)
  lis       r4, 0x6B6F
  lwz       r0, 0x44(r30)
  lis       r3, 0x6675
  addi      r6, r4, 0x3030
  stw       r0, 0x9C(r30)
  addi      r5, r3, 0x7269
  stw       r7, 0xA0(r30)
  lwz       r3, 0x50(r30)
  lwz       r0, 0x48(r30)
  stw       r0, 0xD4(r30)
  stw       r3, 0xD8(r30)
  lwz       r3, 0x40(r30)
  bl        -0xB3164
  stw       r3, 0xDC(r30)
  lwz       r0, 0x24(r1)
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
 * Address:	803DD3F8
 * Size:	00007C
 */
void ebi::Screen::TSaveMenu::doOpenScreen( (ebi::Screen::ArgOpen *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, 0x1698(r2)
  stw       r0, 0x14(r1)
  li        r0, 0xC8
  stw       r31, 0xC(r1)
  mr        r31, r3
  stb       r0, 0x18(r3)
  li        r0, 0
  stw       r0, 0x1C(r3)
  lwz       r3, -0x6514(r13)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x31B8E0
  stw       r3, 0x20(r31)
  li        r0, 0x2
  lfs       f0, 0x1868(r2)
  stw       r3, 0x24(r31)
  stw       r0, 0x1C(r31)
  stfs      f0, 0xE4(r31)
  lwz       r3, 0xDC(r31)
  bl        -0xB3534
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1811
  li        r5, 0
  bl        -0xA4E2C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803DD474
 * Size:	000064
 */
void ebi::Screen::TSaveMenu::doCloseScreen( (ebi::Screen::ArgClose *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, 0x1868(r2)
  stw       r0, 0x14(r1)
  lfs       f1, 0x1698(r2)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stfs      f0, 0xE4(r3)
  lwz       r3, -0x6514(r13)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x31B954
  stw       r3, 0x20(r31)
  li        r0, 0x1
  li        r4, 0x1811
  li        r5, 0
  stw       r3, 0x24(r31)
  stw       r0, 0x1C(r31)
  lwz       r3, -0x67A8(r13)
  bl        -0xA4E90
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803DD4D8
 * Size:	000084
 */
void ebi::Screen::TSaveMenu::doKillScreen(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  bl        0x6A4
  li        r0, 0
  addi      r3, r31, 0x6C
  stw       r0, 0x1C(r31)
  lwz       r12, 0x6C(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0xA4
  lwz       r12, 0xA4(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  li        r30, 0

.loc_0x54:
  lwz       r3, 0x60(r31)
  bl        -0xD40F4
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x3
  blt+      .loc_0x54
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
 * Address:	803DD55C
 * Size:	0000DC
 */
void ebi::Screen::TSaveMenu::doUpdateStateOpen(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x9DC
  lwz       r0, 0x1C(r31)
  cmpwi     r0, 0
  beq-      .loc_0x38
  lwz       r3, 0x20(r31)
  cmplwi    r3, 0
  beq-      .loc_0x38
  subi      r0, r3, 0x1
  stw       r0, 0x20(r31)

.loc_0x38:
  lwz       r3, 0x40(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x6C
  bl        -0x19724
  addi      r3, r31, 0xA4
  bl        -0x1972C
  lwz       r3, -0x6514(r13)
  lfs       f1, 0xE4(r31)
  lfs       f0, 0x54(r3)
  lfs       f2, 0x1874(r2)
  fadds     f0, f1, f0
  stfs      f0, 0xE4(r31)
  lfs       f1, 0xE4(r31)
  bl        -0xDAF38
  lfs       f0, 0x1870(r2)
  lfs       f3, 0x186C(r2)
  fsubs     f4, f0, f1
  lfs       f2, 0x243C(r2)
  lfs       f1, 0x1868(r2)
  lfs       f0, 0x2440(r2)
  fmuls     f3, f3, f4
  fadds     f0, f1, f0
  stfs      f3, 0xE0(r31)
  lfs       f3, 0xE0(r31)
  lwz       r3, 0x40(r31)
  fadds     f2, f3, f2
  stfs      f2, 0x140(r3)
  stfs      f0, 0x144(r3)
  lfs       f0, 0xE0(r31)
  fcmpo     cr0, f0, f1
  cror      2, 0, 0x2
  mfcr      r0
  lwz       r31, 0xC(r1)
  rlwinm    r3,r0,3,31,31
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803DD638
 * Size:	000074
 */
void ebi::Screen::TSaveMenu::doUpdateStateWait(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x900
  lwz       r0, 0x1C(r31)
  cmpwi     r0, 0
  beq-      .loc_0x38
  lwz       r3, 0x20(r31)
  cmplwi    r3, 0
  beq-      .loc_0x38
  subi      r0, r3, 0x1
  stw       r0, 0x20(r31)

.loc_0x38:
  lwz       r3, 0x40(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x6C
  bl        -0x19800
  addi      r3, r31, 0xA4
  bl        -0x19808
  lwz       r0, 0x14(r1)
  li        r3, 0
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803DD6AC
 * Size:	0000D4
 */
void ebi::Screen::TSaveMenu::doUpdateStateClose(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x88C
  lwz       r0, 0x1C(r31)
  cmpwi     r0, 0
  beq-      .loc_0x38
  lwz       r3, 0x20(r31)
  cmplwi    r3, 0
  beq-      .loc_0x38
  subi      r0, r3, 0x1
  stw       r0, 0x20(r31)

.loc_0x38:
  lwz       r3, 0x40(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x6C
  bl        -0x19874
  addi      r3, r31, 0xA4
  bl        -0x1987C
  lwz       r3, -0x6514(r13)
  lfs       f1, 0xE4(r31)
  lfs       f0, 0x54(r3)
  lfs       f2, 0x1874(r2)
  fadds     f0, f1, f0
  stfs      f0, 0xE4(r31)
  lfs       f1, 0xE4(r31)
  bl        -0xDB088
  lfs       f0, 0x1878(r2)
  lfs       f2, 0x1868(r2)
  fmuls     f4, f0, f1
  lfs       f1, 0x2440(r2)
  lfs       f3, 0x243C(r2)
  fadds     f1, f2, f1
  lfs       f0, 0x1874(r2)
  stfs      f4, 0xE0(r31)
  lfs       f2, 0xE0(r31)
  lwz       r3, 0x40(r31)
  fadds     f2, f2, f3
  stfs      f2, 0x140(r3)
  stfs      f1, 0x144(r3)
  lfs       f1, 0xE4(r31)
  fcmpo     cr0, f1, f0
  mfcr      r0
  lwz       r31, 0xC(r1)
  rlwinm    r3,r0,2,31,31
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803DD780
 * Size:	000234
 */
void ebi::Screen::TSaveMenu::doDraw(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stmw      r27, 0x5C(r1)
  mr        r28, r3
  lwz       r4, -0x6514(r13)
  lwz       r30, 0x24(r4)
  addi      r29, r30, 0x190
  lwz       r12, 0x0(r29)
  mr        r3, r29
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1C(r28)
  cmpwi     r0, 0
  beq-      .loc_0x204
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x24(r3)
  addi      r31, r3, 0x190
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1C(r28)
  lwz       r3, 0x14(r28)
  cmpwi     r0, 0x2
  stw       r3, 0x18(r1)
  beq-      .loc_0xFC
  bge-      .loc_0x178
  cmpwi     r0, 0x1
  bge-      .loc_0x84
  b         .loc_0x178

.loc_0x84:
  lwz       r4, 0x24(r28)
  cmplwi    r4, 0
  beq-      .loc_0xC4
  lwz       r3, 0x20(r28)
  lis       r0, 0x4330
  stw       r0, 0x30(r1)
  lfd       f2, 0x1880(r2)
  stw       r3, 0x34(r1)
  lfd       f0, 0x30(r1)
  stw       r4, 0x3C(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x38(r1)
  lfd       f0, 0x38(r1)
  fsubs     f0, f0, f2
  fdivs     f2, f1, f0
  b         .loc_0xC8

.loc_0xC4:
  lfs       f2, 0x1868(r2)

.loc_0xC8:
  lbz       r3, 0x18(r28)
  lis       r0, 0x4330
  stw       r0, 0x40(r1)
  lfd       f1, 0x1880(r2)
  stw       r3, 0x44(r1)
  lfd       f0, 0x40(r1)
  fsubs     f0, f0, f1
  fmuls     f0, f0, f2
  fctiwz    f0, f0
  stfd      f0, 0x48(r1)
  lwz       r0, 0x4C(r1)
  stb       r0, 0x1B(r1)
  b         .loc_0x178

.loc_0xFC:
  lwz       r4, 0x24(r28)
  cmplwi    r4, 0
  beq-      .loc_0x13C
  lwz       r3, 0x20(r28)
  lis       r0, 0x4330
  stw       r0, 0x48(r1)
  lfd       f2, 0x1880(r2)
  stw       r3, 0x4C(r1)
  lfd       f0, 0x48(r1)
  stw       r4, 0x44(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x40(r1)
  lfd       f0, 0x40(r1)
  fsubs     f0, f0, f2
  fdivs     f1, f1, f0
  b         .loc_0x140

.loc_0x13C:
  lfs       f1, 0x1868(r2)

.loc_0x140:
  lbz       r3, 0x18(r28)
  lis       r0, 0x4330
  lfs       f0, 0x1870(r2)
  stw       r3, 0x3C(r1)
  lfd       f2, 0x1880(r2)
  fsubs     f0, f0, f1
  stw       r0, 0x38(r1)
  lfd       f1, 0x38(r1)
  fsubs     f1, f1, f2
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x30(r1)
  lwz       r0, 0x34(r1)
  stb       r0, 0x1B(r1)

.loc_0x178:
  lwz       r0, 0x18(r1)
  mr        r3, r31
  addi      r4, r1, 0x8
  addi      r5, r1, 0xC
  stw       r0, 0x14(r1)
  addi      r6, r1, 0x10
  addi      r7, r1, 0x14
  stw       r0, 0x10(r1)
  stw       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        -0x3A7294
  bl        0x45900
  lhz       r27, 0x6(r3)
  bl        0x458F8
  lhz       r4, 0x4(r3)
  lis       r0, 0x4330
  lfs       f3, 0x1868(r2)
  mr        r3, r31
  stw       r4, 0x4C(r1)
  addi      r4, r1, 0x1C
  lfd       f2, 0x1880(r2)
  stw       r0, 0x48(r1)
  lfd       f0, 0x48(r1)
  stw       r27, 0x44(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x40(r1)
  lfd       f0, 0x40(r1)
  fadds     f1, f3, f1
  stfs      f3, 0x1C(r1)
  fsubs     f0, f0, f2
  stfs      f3, 0x20(r1)
  fadds     f0, f3, f0
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  bl        -0x3A71AC

.loc_0x204:
  lwz       r3, 0x40(r28)
  mr        r4, r30
  mr        r5, r29
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  lmw       r27, 0x5C(r1)
  lwz       r0, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	803DD9B4
 * Size:	0000B0
 */
void ebi::Screen::TSaveMenu::loadResource(void)
{
/*
.loc_0x0:
  stwu      r1, -0x120(r1)
  mflr      r0
  lis       r4, 0x8049
  li        r5, 0
  stw       r0, 0x124(r1)
  stw       r31, 0x11C(r1)
  addi      r31, r4, 0x6E70
  addi      r4, r31, 0x24
  stw       r30, 0x118(r1)
  stw       r29, 0x114(r1)
  mr        r29, r3
  lwz       r3, -0x6514(r13)
  bl        0x45978
  addi      r3, r1, 0x8
  addi      r4, r31, 0x44
  bl        -0xC5AA4
  addi      r3, r1, 0x8
  li        r4, 0x1
  li        r5, 0
  li        r6, 0x1
  bl        -0x3C28D4
  mr.       r30, r3
  bne-      .loc_0x70
  addi      r3, r31, 0x54
  addi      r5, r31, 0x6C
  li        r4, 0xE2
  crclr     6, 0x6
  bl        -0x3B33E0

.loc_0x70:
  lwz       r3, -0x6514(r13)
  addi      r4, r31, 0x24
  bl        0x45938
  mr        r3, r29
  mr        r4, r30
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x124(r1)
  lwz       r31, 0x11C(r1)
  lwz       r30, 0x118(r1)
  lwz       r29, 0x114(r1)
  mtlr      r0
  addi      r1, r1, 0x120
  blr
*/
}

/*
 * --INFO--
 * Address:	803DDA64
 * Size:	000094
 */
void ebi::Screen::TSaveMenu::openMsg( (long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr.       r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  blt-      .loc_0x30
  cmpwi     r31, 0x4
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6EC4
  li        r4, 0xEF
  addi      r5, r5, 0x6EDC
  crclr     6, 0x6
  bl        -0x3B3474

.loc_0x54:
  stw       r31, 0x2C(r30)
  lwz       r0, 0x28(r30)
  cmpwi     r0, 0
  beq-      .loc_0x6C
  li        r3, 0
  b         .loc_0x7C

.loc_0x6C:
  mr        r3, r30
  li        r4, 0x1
  bl        0xC0
  li        r3, 0x1

.loc_0x7C:
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
 * Address:	803DDAF8
 * Size:	00003C
 */
void ebi::Screen::TSaveMenu::closeMsg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x28(r3)
  cmpwi     r0, 0x2
  beq-      .loc_0x20
  li        r3, 0
  b         .loc_0x2C

.loc_0x20:
  li        r4, 0x3
  bl        0x7C
  li        r3, 0x1

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803DDB34
 * Size:	000054
 */
void ebi::Screen::TSaveMenu::noMsg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  li        r30, 0
  stw       r0, 0x28(r3)

.loc_0x24:
  lwz       r3, 0x60(r31)
  bl        -0xD4720
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x3
  blt+      .loc_0x24
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
 * Address:	803DDB88
 * Size:	000010
 */
void ebi::Screen::TSaveMenu::isFinishMsg(void)
{
/*
.loc_0x0:
  lwz       r0, 0x28(r3)
  cntlzw    r0, r0
  rlwinm    r3,r0,27,24,31
  blr
*/
}

/*
 * --INFO--
 * Address:	803DDB98
 * Size:	0003B4
 */
void ebi::Screen::TSaveMenu::startMsgState_( (ebi::Screen::TSaveMenu::enumMsgState))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r4, 0x28(r3)
  lwz       r0, 0x28(r3)
  cmpwi     r0, 0x2
  beq-      .loc_0x3A0
  bge-      .loc_0x38
  cmpwi     r0, 0
  beq-      .loc_0x44
  bge-      .loc_0x70
  b         .loc_0x3A0

.loc_0x38:
  cmpwi     r0, 0x4
  bge-      .loc_0x3A0
  b         .loc_0x300

.loc_0x44:
  addi      r3, r31, 0x6C
  lwz       r12, 0x6C(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0xA4
  lwz       r12, 0xA4(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x3A0

.loc_0x70:
  addi      r3, r31, 0x6C
  lwz       r12, 0x6C(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0xA4
  lwz       r12, 0xA4(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x2C(r31)
  cmpwi     r0, 0
  bne-      .loc_0x188
  li        r0, 0
  lis       r4, 0x305F
  stb       r0, 0x3D(r31)
  li        r0, 0x1
  lis       r3, 0x38
  addi      r6, r4, 0x3030
  stb       r0, 0x3C(r31)
  addi      r5, r3, 0x3337
  lwz       r3, 0x60(r31)
  bl        -0xD4840
  lis       r5, 0x315F
  lis       r4, 0x38
  lwz       r3, 0x64(r31)
  addi      r6, r5, 0x3030
  addi      r5, r4, 0x3337
  bl        -0xD4858
  lwz       r3, 0x60(r31)
  lfs       f1, 0x1868(r2)
  bl        -0xD4830
  lwz       r3, 0x60(r31)
  lfs       f1, 0x1888(r2)
  lfs       f2, 0x1868(r2)
  bl        -0xD47BC
  lwz       r3, 0x64(r31)
  lfs       f1, 0x1868(r2)
  bl        -0xD484C
  lfs       f1, 0x1868(r2)
  lwz       r3, 0x64(r31)
  fmr       f2, f1
  bl        -0xD47D8
  lwz       r6, 0x4C(r31)
  li        r0, 0x1
  lwz       r5, 0x44(r31)
  addi      r3, r31, 0x6C
  lfs       f0, 0x1870(r2)
  li        r4, 0
  stw       r5, 0x9C(r31)
  stw       r6, 0xA0(r31)
  lwz       r6, 0x50(r31)
  lwz       r5, 0x48(r31)
  stw       r5, 0xD4(r31)
  stw       r6, 0xD8(r31)
  stfs      f0, 0x94(r31)
  stb       r0, 0x98(r31)
  stfs      f0, 0xCC(r31)
  stb       r0, 0xD0(r31)
  lwz       r12, 0x6C(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0xA4
  li        r4, 0
  lwz       r12, 0xA4(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2E0

.loc_0x188:
  cmpwi     r0, 0x3
  bne-      .loc_0x274
  li        r0, 0
  lis       r4, 0x345F
  stb       r0, 0x3D(r31)
  li        r0, 0x1
  lis       r3, 0x38
  addi      r6, r4, 0x3030
  stb       r0, 0x3C(r31)
  addi      r5, r3, 0x3337
  lwz       r3, 0x60(r31)
  bl        -0xD492C
  lis       r5, 0x355F
  lis       r4, 0x38
  lwz       r3, 0x64(r31)
  addi      r6, r5, 0x3030
  addi      r5, r4, 0x3337
  bl        -0xD4944
  lwz       r3, 0x60(r31)
  lfs       f1, 0x1868(r2)
  bl        -0xD491C
  lwz       r3, 0x60(r31)
  lfs       f1, 0x1888(r2)
  lfs       f2, 0x1868(r2)
  bl        -0xD48A8
  lwz       r3, 0x64(r31)
  lfs       f1, 0x1868(r2)
  bl        -0xD4938
  lfs       f1, 0x1868(r2)
  lwz       r3, 0x64(r31)
  fmr       f2, f1
  bl        -0xD48C4
  lwz       r6, 0x4C(r31)
  li        r0, 0x1
  lwz       r5, 0x44(r31)
  addi      r3, r31, 0x6C
  lfs       f0, 0x1870(r2)
  li        r4, 0
  stw       r5, 0x9C(r31)
  stw       r6, 0xA0(r31)
  lwz       r6, 0x50(r31)
  lwz       r5, 0x48(r31)
  stw       r5, 0xD4(r31)
  stw       r6, 0xD8(r31)
  stfs      f0, 0x94(r31)
  stb       r0, 0x98(r31)
  stfs      f0, 0xCC(r31)
  stb       r0, 0xD0(r31)
  lwz       r12, 0x6C(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0xA4
  li        r4, 0
  lwz       r12, 0xA4(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2E0

.loc_0x274:
  cmpwi     r0, 0x1
  bne-      .loc_0x2A4
  lis       r5, 0x325F
  lis       r4, 0x38
  lwz       r3, 0x68(r31)
  addi      r6, r5, 0x3030
  addi      r5, r4, 0x3337
  bl        -0xD4A08
  lwz       r3, 0x68(r31)
  lfs       f1, 0x1868(r2)
  bl        -0xD49E0
  b         .loc_0x2E0

.loc_0x2A4:
  cmpwi     r0, 0x2
  bne-      .loc_0x2E0
  lis       r5, 0x335F
  lis       r4, 0x38
  lwz       r3, 0x68(r31)
  addi      r6, r5, 0x3030
  addi      r5, r4, 0x3337
  bl        -0xD4A38
  lwz       r3, 0x68(r31)
  lfs       f1, 0x1868(r2)
  bl        -0xD4A10
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180C
  li        r5, 0
  bl        -0xA5844

.loc_0x2E0:
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x188C(r2)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x31C33C
  stw       r3, 0x34(r31)
  stw       r3, 0x38(r31)
  b         .loc_0x3A0

.loc_0x300:
  lwz       r0, 0x2C(r31)
  cmpwi     r0, 0x3
  beq-      .loc_0x320
  bge-      .loc_0x368
  cmpwi     r0, 0
  beq-      .loc_0x320
  bge-      .loc_0x35C
  b         .loc_0x368

.loc_0x320:
  lwz       r3, 0x60(r31)
  bl        -0xD4A2C
  lwz       r3, 0x64(r31)
  bl        -0xD4A34
  addi      r3, r31, 0x6C
  lwz       r12, 0x6C(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0xA4
  lwz       r12, 0xA4(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x384

.loc_0x35C:
  lwz       r3, 0x68(r31)
  bl        -0xD4A68
  b         .loc_0x384

.loc_0x368:
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6EC4
  li        r4, 0x18B
  addi      r5, r5, 0x6EE8
  crclr     6, 0x6
  bl        -0x3B38D8

.loc_0x384:
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x1890(r2)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x31C3E0
  stw       r3, 0x34(r31)
  stw       r3, 0x38(r31)

.loc_0x3A0:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803DDF4C
 * Size:	000368
 */
void ebi::Screen::TSaveMenu::updateMsg_(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r3, 0x34(r3)
  cmplwi    r3, 0
  beq-      .loc_0x2C
  subi      r0, r3, 0x1
  stw       r0, 0x34(r30)

.loc_0x2C:
  lwz       r0, 0x28(r30)
  cmpwi     r0, 0x2
  beq-      .loc_0x70
  bge-      .loc_0x48
  cmpwi     r0, 0x1
  bge-      .loc_0x54
  b         .loc_0x350

.loc_0x48:
  cmpwi     r0, 0x4
  bge-      .loc_0x350
  b         .loc_0x2E4

.loc_0x54:
  lwz       r0, 0x34(r30)
  cmplwi    r0, 0
  bne-      .loc_0x350
  mr        r3, r30
  li        r4, 0x2
  bl        -0x41C
  b         .loc_0x350

.loc_0x70:
  lwz       r0, 0x2C(r30)
  cmpwi     r0, 0x2
  beq-      .loc_0x350
  bge-      .loc_0x90
  cmpwi     r0, 0
  beq-      .loc_0x98
  bge-      .loc_0x2D0
  b         .loc_0x350

.loc_0x90:
  cmpwi     r0, 0x4
  bge-      .loc_0x350

.loc_0x98:
  lwz       r0, 0x2C(r30)
  cmpwi     r0, 0
  bne-      .loc_0xB0
  li        r4, 0
  li        r31, 0x1
  b         .loc_0xC0

.loc_0xB0:
  cmpwi     r0, 0x3
  bne-      .loc_0xC0
  li        r4, 0
  li        r31, 0x1

.loc_0xC0:
  lwz       r3, 0xC(r30)
  lwz       r0, 0x18(r3)
  rlwinm.   r0,r0,0,28,28
  bne-      .loc_0xE0
  lfs       f1, 0x4C(r3)
  lfs       f0, 0x1890(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xE8

.loc_0xE0:
  li        r0, 0x1
  b         .loc_0xEC

.loc_0xE8:
  li        r0, 0

.loc_0xEC:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x15C
  lbz       r0, 0x3C(r30)
  cmplwi    r0, 0
  bne-      .loc_0x350
  li        r3, 0x1
  rlwinm    r0,r4,2,0,29
  stb       r3, 0x3C(r30)
  add       r3, r30, r0
  lfs       f1, 0x1888(r2)
  lwz       r3, 0x60(r3)
  lfs       f2, 0x1868(r2)
  bl        -0xD4B90
  lfs       f1, 0x1868(r2)
  rlwinm    r0,r31,2,0,29
  add       r3, r30, r0
  fmr       f2, f1
  lwz       r3, 0x60(r3)
  bl        -0xD4BA8
  lbz       r0, 0x3C(r30)
  li        r4, 0x1802
  li        r5, 0
  stb       r0, 0x98(r30)
  lbz       r0, 0x3C(r30)
  stb       r0, 0xD0(r30)
  lwz       r3, -0x67A8(r13)
  bl        -0xA5A70
  b         .loc_0x350

.loc_0x15C:
  lwz       r0, 0x18(r3)
  rlwinm.   r0,r0,0,29,29
  bne-      .loc_0x178
  lfs       f1, 0x4C(r3)
  lfs       f0, 0x1894(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x180

.loc_0x178:
  li        r0, 0x1
  b         .loc_0x184

.loc_0x180:
  li        r0, 0

.loc_0x184:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x1F4
  lbz       r0, 0x3C(r30)
  cmplwi    r0, 0x1
  bne-      .loc_0x350
  lfs       f1, 0x1868(r2)
  li        r3, 0
  rlwinm    r0,r4,2,0,29
  stb       r3, 0x3C(r30)
  add       r3, r30, r0
  fmr       f2, f1
  lwz       r3, 0x60(r3)
  bl        -0xD4C28
  rlwinm    r0,r31,2,0,29
  lfs       f1, 0x1888(r2)
  add       r3, r30, r0
  lfs       f2, 0x1868(r2)
  lwz       r3, 0x60(r3)
  bl        -0xD4C40
  lbz       r0, 0x3C(r30)
  li        r4, 0x1802
  li        r5, 0
  stb       r0, 0x98(r30)
  lbz       r0, 0x3C(r30)
  stb       r0, 0xD0(r30)
  lwz       r3, -0x67A8(r13)
  bl        -0xA5B08
  b         .loc_0x350

.loc_0x1F4:
  lwz       r3, 0x1C(r3)
  rlwinm.   r0,r3,0,23,23
  beq-      .loc_0x270
  li        r3, 0x1
  stb       r3, 0x3D(r30)
  lbz       r0, 0x3C(r30)
  cmplwi    r0, 0
  beq-      .loc_0x234
  li        r0, 0
  lfs       f0, 0x1870(r2)
  stw       r0, 0x30(r30)
  stfs      f0, 0x94(r30)
  stb       r3, 0x98(r30)
  stfs      f0, 0xCC(r30)
  stb       r3, 0xD0(r30)
  b         .loc_0x250

.loc_0x234:
  stw       r3, 0x30(r30)
  li        r0, 0
  lfs       f0, 0x1868(r2)
  stfs      f0, 0x94(r30)
  stb       r0, 0x98(r30)
  stfs      f0, 0xCC(r30)
  stb       r0, 0xD0(r30)

.loc_0x250:
  mr        r3, r30
  li        r4, 0x3
  bl        -0x60C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1800
  li        r5, 0
  bl        -0xA5B84
  b         .loc_0x350

.loc_0x270:
  rlwinm.   r0,r3,0,22,22
  beq-      .loc_0x350
  li        r3, 0x2
  li        r0, 0x1
  stw       r3, 0x30(r30)
  addi      r3, r30, 0x6C
  stb       r0, 0x3D(r30)
  lwz       r12, 0x6C(r30)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0xA4
  lwz       r12, 0xA4(r30)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  li        r4, 0x3
  bl        -0x66C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1801
  li        r5, 0
  bl        -0xA5BE4
  b         .loc_0x350

.loc_0x2D0:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x100B
  li        r5, 0
  bl        -0xA5BF8
  b         .loc_0x350

.loc_0x2E4:
  lwz       r0, 0x2C(r30)
  cmpwi     r0, 0x2
  beq-      .loc_0x328
  bge-      .loc_0x304
  cmpwi     r0, 0
  beq-      .loc_0x310
  bge-      .loc_0x320
  b         .loc_0x32C

.loc_0x304:
  cmpwi     r0, 0x4
  bge-      .loc_0x32C
  b         .loc_0x318

.loc_0x310:
  lwz       r4, 0x60(r30)
  b         .loc_0x32C

.loc_0x318:
  lwz       r4, 0x60(r30)
  b         .loc_0x32C

.loc_0x320:
  lwz       r4, 0x68(r30)
  b         .loc_0x32C

.loc_0x328:
  lwz       r4, 0x68(r30)

.loc_0x32C:
  lbz       r0, 0x3C(r4)
  cmplwi    r0, 0
  beq-      .loc_0x350
  lwz       r0, 0x34(r30)
  cmplwi    r0, 0
  bne-      .loc_0x350
  mr        r3, r30
  li        r4, 0
  bl        -0x700

.loc_0x350:
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
 * Address:	803DE2B4
 * Size:	00000C
 */
void ebi::Screen::TSaveMenu::getName(void)
{
/*
.loc_0x0:
  lis       r3, 0x8049
  addi      r3, r3, 0x6F0C
  blr
*/
}
