

/*
 * --INFO--
 * Address:	800AD1C4
 * Size:	0000F4
 */
void JAInter::transInitDataFile(unsigned char *, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0x20
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r3, r31
  lwz       r4, -0x7494(r13)
  bl        -0x891A4
  cmplwi    r3, 0
  beq-      .loc_0xDC
  cmplwi    r31, 0
  li        r6, 0
  ble-      .loc_0xDC
  cmplwi    r31, 0x8
  subi      r4, r31, 0x8
  ble-      .loc_0xB0
  addi      r0, r4, 0x7
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmplwi    r4, 0
  ble-      .loc_0xB0

.loc_0x60:
  add       r4, r30, r6
  add       r5, r3, r6
  lbz       r0, 0x0(r4)
  addi      r6, r6, 0x8
  stb       r0, 0x0(r5)
  lbz       r0, 0x1(r4)
  stb       r0, 0x1(r5)
  lbz       r0, 0x2(r4)
  stb       r0, 0x2(r5)
  lbz       r0, 0x3(r4)
  stb       r0, 0x3(r5)
  lbz       r0, 0x4(r4)
  stb       r0, 0x4(r5)
  lbz       r0, 0x5(r4)
  stb       r0, 0x5(r5)
  lbz       r0, 0x6(r4)
  stb       r0, 0x6(r5)
  lbz       r0, 0x7(r4)
  stb       r0, 0x7(r5)
  bdnz+     .loc_0x60

.loc_0xB0:
  sub       r0, r31, r6
  add       r5, r30, r6
  add       r4, r3, r6
  mtctr     r0
  cmplw     r6, r31
  bge-      .loc_0xDC

.loc_0xC8:
  lbz       r0, 0x0(r5)
  addi      r5, r5, 0x1
  stb       r0, 0x0(r4)
  addi      r4, r4, 0x1
  bdnz+     .loc_0xC8

.loc_0xDC:
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
 * Address:	800AD2B8
 * Size:	0000E4
 */
void JAInter::loadTmpDVDFile(char *, unsigned char **)
{
/*
.loc_0x0:
  stwu      r1, -0x110(r1)
  mflr      r0
  stw       r0, 0x114(r1)
  stw       r31, 0x10C(r1)
  mr        r31, r4
  stw       r30, 0x108(r1)
  mr        r30, r3
  addi      r3, r1, 0x10
  bl        -0x90220
  mr        r4, r30
  addi      r3, r1, 0x10
  bl        -0x8FF50
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x50
  li        r0, 0
  addi      r3, r1, 0x10
  stw       r0, 0x0(r31)
  li        r4, -0x1
  bl        -0x90074
  b         .loc_0xCC

.loc_0x50:
  lwz       r4, 0xA0(r1)
  cmplwi    r4, 0
  bne-      .loc_0x74
  li        r0, 0
  addi      r3, r1, 0x10
  stw       r0, 0x0(r31)
  li        r4, -0x1
  bl        -0x90098
  b         .loc_0xCC

.loc_0x74:
  lwz       r3, -0x7548(r13)
  li        r5, -0x20
  bl        -0x89CF4
  stw       r3, 0x0(r31)
  li        r0, 0
  mr        r3, r30
  li        r5, 0
  stw       r0, 0x8(r1)
  li        r6, 0
  li        r7, 0
  li        r8, 0x1
  lwz       r4, 0x0(r31)
  li        r9, 0
  li        r10, 0
  bl        -0x8E1DC
  cmplwi    r3, 0
  bne-      .loc_0xC0
  li        r0, 0
  stw       r0, 0x0(r31)

.loc_0xC0:
  addi      r3, r1, 0x10
  li        r4, -0x1
  bl        -0x900F4

.loc_0xCC:
  lwz       r0, 0x114(r1)
  lwz       r31, 0x10C(r1)
  lwz       r30, 0x108(r1)
  mtlr      r0
  addi      r1, r1, 0x110
  blr
*/
}

/*
 * --INFO--
 * Address:	800AD39C
 * Size:	000030
 */
void JAInter::deleteTmpDVDFile(unsigned char **)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x0(r3)
  cmplwi    r0, 0
  beq-      .loc_0x20
  lwz       r3, -0x7548(r13)
  bl        -0x89C5C

.loc_0x20:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800AD3CC
 * Size:	000040
 */
void JAInter::routeToTrack(unsigned long)
{
/*
.loc_0x0:
  rlwinm.   r4,r3,0,0,3
  li        r5, 0
  bne-      .loc_0x14
  li        r3, 0
  blr       

.loc_0x14:
  subis     r0, r4, 0x1000
  cmplwi    r0, 0
  bne-      .loc_0x28
  li        r5, 0xF
  b         .loc_0x38

.loc_0x28:
  subis     r0, r4, 0x2000
  cmplwi    r0, 0
  bne-      .loc_0x38
  li        r5, 0xFF

.loc_0x38:
  and       r3, r3, r5
  blr
*/
}

/*
 * --INFO--
 * Address:	800AD40C
 * Size:	000084
 */
void __sinit_JAIConst_cpp(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r7, 0x8051
  lis       r5, 0x8051
  stw       r0, 0x14(r1)
  li        r0, 0
  addi      r7, r7, 0x225C
  lis       r6, 0x8051
  lis       r4, 0x8051
  lis       r3, 0x8051
  stwu      r0, 0x2218(r3)
  addi      r5, r5, 0x2268
  addi      r4, r4, 0x222C
  cmplwi    r0, 0
  stwu      r7, 0x21B0(r6)
  stw       r5, 0x4(r6)
  stw       r4, 0x8(r6)
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0xC(r3)
  bne-      .loc_0x60
  li        r0, 0x1
  stb       r0, 0x10(r3)
  b         .loc_0x68

.loc_0x60:
  li        r0, 0x1
  stb       r0, 0x10(r3)

.loc_0x68:
  subi      r3, r13, 0x7478
  li        r4, 0
  bl        -0x7837C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}