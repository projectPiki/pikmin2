

/*
 * --INFO--
 * Address:	80022ADC
 * Size:	00008C
 */
void JKRArcFinder::JKRArcFinder(JKRArchive *, long, long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r9, 0x804A
  lis       r8, 0x804A
  stw       r0, 0x14(r1)
  subi      r0, r6, 0x1
  neg       r7, r6
  subi      r9, r9, 0x1C0
  stw       r31, 0xC(r1)
  andc      r6, r7, r6
  subi      r7, r8, 0x150
  add       r0, r5, r0
  stw       r9, 0xC(r3)
  li        r9, 0
  rlwinm    r6,r6,1,31,31
  mr        r31, r3
  stb       r9, 0x10(r3)
  stb       r9, 0x11(r3)
  stw       r7, 0xC(r3)
  stw       r4, 0x14(r3)
  stb       r6, 0x10(r3)
  stw       r5, 0x18(r3)
  stw       r0, 0x1C(r3)
  lwz       r0, 0x18(r3)
  stw       r0, 0x20(r3)
  lwz       r12, 0xC(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
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
 * Address:	80022B68
 * Size:	0000AC
 */
void JKRArcFinder::findNextFile()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lbz       r0, 0x10(r3)
  cmplwi    r0, 0
  beq-      .loc_0x94
  lwz       r0, 0x1C(r31)
  lwz       r5, 0x20(r31)
  srawi     r4, r0, 0x1F
  rlwinm    r3,r5,1,31,31
  subc      r0, r0, r5
  adde      r0, r4, r3
  stb       r0, 0x10(r31)
  lbz       r0, 0x10(r31)
  cmplwi    r0, 0
  beq-      .loc_0x94
  lwz       r3, 0x14(r31)
  addi      r4, r1, 0x8
  lwz       r5, 0x20(r31)
  bl        -0x76F0
  stb       r3, 0x10(r31)
  lwz       r0, 0xC(r1)
  stw       r0, 0x0(r31)
  lwz       r0, 0x20(r31)
  stw       r0, 0x4(r31)
  lhz       r0, 0xA(r1)
  sth       r0, 0x8(r31)
  lbz       r0, 0x8(r1)
  sth       r0, 0xA(r31)
  lhz       r0, 0xA(r31)
  rlwinm    r0,r0,31,31,31
  stb       r0, 0x11(r31)
  lwz       r3, 0x20(r31)
  addi      r0, r3, 0x1
  stw       r0, 0x20(r31)

.loc_0x94:
  lwz       r0, 0x24(r1)
  lbz       r3, 0x10(r31)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80022C14
 * Size:	000088
 */
void JKRDvdFinder::JKRDvdFinder(const char *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r6, 0x804A
  lis       r5, 0x804A
  stw       r0, 0x14(r1)
  subi      r0, r6, 0x1C0
  li        r6, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r0, 0xC(r3)
  mr        r3, r4
  subi      r0, r5, 0x160
  addi      r4, r31, 0x14
  stb       r6, 0x10(r31)
  stb       r6, 0x11(r31)
  stw       r0, 0xC(r31)
  bl        0xB9F68
  neg       r0, r3
  or        r0, r0, r3
  mr        r3, r31
  rlwinm    r0,r0,1,31,31
  stb       r0, 0x20(r31)
  lbz       r0, 0x20(r31)
  stb       r0, 0x10(r31)
  lwz       r12, 0xC(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
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
 * Address:	80022C9C
 * Size:	000080
 */
void JKRDvdFinder::~JKRDvdFinder()
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
  lis       r3, 0x804A
  subi      r0, r3, 0x160
  stw       r0, 0xC(r30)
  lbz       r0, 0x20(r30)
  cmplwi    r0, 0
  beq-      .loc_0x40
  addi      r3, r30, 0x14
  bl        0xBA048

.loc_0x40:
  cmplwi    r30, 0
  beq-      .loc_0x54
  lis       r3, 0x804A
  subi      r0, r3, 0x1C0
  stw       r0, 0xC(r30)

.loc_0x54:
  extsh.    r0, r31
  ble-      .loc_0x64
  mr        r3, r30
  bl        0x13B8

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

/*
 * --INFO--
 * Address:	80022D1C
 * Size:	0000A4
 */
void JKRDvdFinder::findNextFile()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lbz       r0, 0x10(r3)
  cmplwi    r0, 0
  beq-      .loc_0x8C
  addi      r3, r31, 0x14
  addi      r4, r1, 0x8
  bl        0xB9F38
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r0,r0,1,31,31
  stb       r0, 0x10(r31)
  lbz       r0, 0x10(r31)
  cmplwi    r0, 0
  beq-      .loc_0x8C
  lwz       r5, 0xC(r1)
  li        r0, 0
  li        r3, 0x1
  neg       r4, r5
  or        r4, r4, r5
  rlwinm    r4,r4,1,31,31
  stb       r4, 0x11(r31)
  lwz       r4, 0x10(r1)
  stw       r4, 0x0(r31)
  lwz       r4, 0x8(r1)
  stw       r4, 0x4(r31)
  sth       r0, 0x8(r31)
  lbz       r0, 0x11(r31)
  cmplwi    r0, 0
  beq-      .loc_0x88
  li        r3, 0x2

.loc_0x88:
  sth       r3, 0xA(r31)

.loc_0x8C:
  lwz       r0, 0x24(r1)
  lbz       r3, 0x10(r31)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80022DC0
 * Size:	00005C
 */
void JKRArcFinder::~JKRArcFinder()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  subi      r0, r3, 0x150
  stw       r0, 0xC(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0x1C0
  stw       r0, 0xC(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x12B4

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}