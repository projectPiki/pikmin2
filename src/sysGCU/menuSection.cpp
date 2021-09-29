

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
 * Address:	804245CC
 * Size:	000048
 */
void MenuSection::MenuSection(JFWDisplay *, JKRHeap *, bool)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0xE6C
  lis       r3, 0x804F
  li        r0, 0
  subi      r4, r3, 0x42C8
  mr        r3, r31
  stw       r4, 0x0(r31)
  stw       r0, 0x40(r31)
  stb       r0, 0x3C(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80424614
 * Size:	000054
 */
void MenuSection::run()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  li        r31, 0x1
  stw       r30, 0x8(r1)
  mr        r30, r3
  stb       r0, 0x3C(r3)

.loc_0x24:
  stb       r31, 0x34(r30)
  mr        r3, r30
  bl        .loc_0x54
  lbz       r0, 0x3C(r30)
  cmplwi    r0, 0
  beq+      .loc_0x24
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x54:
*/
}

/*
 * --INFO--
 * Address:	80424668
 * Size:	000148
 */
void MenuSection::runChildSection()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r3, -0x77D4(r13)
  bl        -0x400ED4
  lwz       r31, 0x1C(r29)
  mr        r3, r31
  bl        -0x400EE0
  mr        r4, r31
  li        r5, 0x1
  bl        -0x4047D8
  mr        r31, r3
  bl        -0x401104
  mr        r0, r3
  mr        r3, r29
  lwz       r12, 0x0(r29)
  mr        r30, r0
  mr        r4, r31
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r29)
  lwz       r0, 0x40(r29)
  cmplwi    r0, 0
  beq-      .loc_0x104
  lis       r4, 0x804A
  lwz       r3, -0x6514(r13)
  subi      r4, r4, 0x6400
  li        r5, 0
  bl        -0x1390
  lwz       r3, 0x40(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x804A
  lwz       r3, -0x6514(r13)
  subi      r4, r4, 0x6400
  bl        -0x13AC
  lwz       r3, -0x6514(r13)
  lfs       f0, 0x2148(r2)
  lfs       f1, 0x64(r3)
  fdivs     f0, f1, f0
  stfs      f0, 0x54(r3)
  lwz       r3, 0x40(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x40(r29)
  bl        -0x7C4
  lwz       r3, 0x40(r29)
  cmplwi    r3, 0
  beq-      .loc_0xFC
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0xFC:
  li        r0, 0
  stw       r0, 0x40(r29)

.loc_0x104:
  mr        r3, r31
  bl        -0x4011BC
  mr        r3, r30
  bl        -0x4011D4
  lwz       r3, -0x77D4(r13)
  bl        -0x400FCC
  lwz       r3, 0x40(r29)
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r3,r0,1,31,31
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	804247B0
 * Size:	000060
 */
void MenuSection::~MenuSection()
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
  lis       r5, 0x804F
  li        r4, 0
  subi      r0, r5, 0x42C8
  stw       r0, 0x0(r30)
  bl        -0xE3C
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x40073C

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
 * Address:	80424810
 * Size:	000008
 */
void MenuSection::getCurrentSection()
{
/*
.loc_0x0:
  lwz       r3, 0x40(r3)
  blr
*/
}