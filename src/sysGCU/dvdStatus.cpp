

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
 * Address:	8042A314
 * Size:	000014
 */
void DvdStatus::DvdStatus()
{
/*
.loc_0x0:
  li        r4, 0
  li        r0, -0x1
  stw       r4, 0x4(r3)
  stw       r0, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8042A328
 * Size:	00002C
 */
void DvdStatus::isErrorOccured()
{
/*
.loc_0x0:
  lwz       r0, 0x4(r3)
  li        r3, 0
  cmplwi    r0, 0
  beqlr-    
  lwz       r4, -0x6514(r13)
  lwz       r4, 0x5C(r4)
  lwz       r0, 0xE4(r4)
  rlwinm.   r0,r0,0,31,31
  bnelr-    
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8042A354
 * Size:	0001F0
 */
void DvdStatus::update()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  subi      r30, r4, 0x6258
  stw       r29, 0x14(r1)
  bl        -0x34B5C8
  cmpwi     r3, -0x1
  bne-      .loc_0x3C
  li        r0, 0x1
  stw       r0, 0x0(r31)
  b         .loc_0xB4

.loc_0x3C:
  cmpwi     r3, 0xB
  bne-      .loc_0x50
  li        r0, 0x2
  stw       r0, 0x0(r31)
  b         .loc_0xB4

.loc_0x50:
  cmpwi     r3, 0x4
  bne-      .loc_0x64
  li        r0, 0x3
  stw       r0, 0x0(r31)
  b         .loc_0xB4

.loc_0x64:
  cmpwi     r3, 0x5
  bne-      .loc_0x78
  li        r0, 0x4
  stw       r0, 0x0(r31)
  b         .loc_0xB4

.loc_0x78:
  cmpwi     r3, 0x6
  bne-      .loc_0x8C
  li        r0, 0x5
  stw       r0, 0x0(r31)
  b         .loc_0xB4

.loc_0x8C:
  lwz       r0, 0x0(r31)
  cmpwi     r0, -0x1
  beq-      .loc_0xAC
  cmpwi     r3, 0x1
  bne-      .loc_0xAC
  li        r0, 0
  stw       r0, 0x0(r31)
  b         .loc_0xB4

.loc_0xAC:
  li        r0, -0x1
  stw       r0, 0x0(r31)

.loc_0xB4:
  lwz       r0, 0x4(r31)
  cmplwi    r0, 0
  bne-      .loc_0x14C
  lwz       r0, 0x0(r31)
  cmpwi     r0, 0
  ble-      .loc_0x1C4
  lwz       r3, -0x6514(r13)
  lwz       r4, 0x4C(r3)
  cmplwi    r4, 0
  beq-      .loc_0xF0
  lwz       r3, 0x4(r4)
  li        r0, 0
  stw       r3, 0x4(r31)
  stw       r0, 0x4(r4)
  b         .loc_0x104

.loc_0xF0:
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0xAA
  crclr     6, 0x6
  bl        -0x3FFE14

.loc_0x104:
  li        r3, 0
  li        r4, 0x2
  bl        -0x336034
  li        r3, 0x1
  li        r4, 0x2
  bl        -0x336040
  li        r3, 0x2
  li        r4, 0x2
  bl        -0x33604C
  li        r3, 0x3
  li        r4, 0x2
  bl        -0x336058
  lwz       r3, -0x6514(r13)
  bl        -0x8160
  stw       r3, 0x8(r31)
  bl        -0x4845C
  bl        -0x4DBE0
  b         .loc_0x1C4

.loc_0x14C:
  lwz       r0, 0x0(r31)
  cmpwi     r0, -0x1
  bne-      .loc_0x1C4
  lwz       r3, -0x6514(r13)
  lwz       r29, 0x4C(r3)
  cmplwi    r29, 0
  beq-      .loc_0x19C
  lwz       r0, 0x4(r29)
  cmplwi    r0, 0
  beq-      .loc_0x188
  addi      r3, r30, 0xC
  addi      r5, r30, 0x2C
  li        r4, 0xC5
  crclr     6, 0x6
  bl        -0x3FFE98

.loc_0x188:
  lwz       r3, 0x4(r31)
  li        r0, 0
  stw       r3, 0x4(r29)
  stw       r0, 0x4(r31)
  b         .loc_0x1B0

.loc_0x19C:
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0xCC
  crclr     6, 0x6
  bl        -0x3FFEC0

.loc_0x1B0:
  lwz       r3, -0x6514(r13)
  lwz       r4, 0x8(r31)
  bl        -0x81F0
  bl        -0x48480
  bl        -0x4DC04

.loc_0x1C4:
  lwz       r3, 0x4(r31)
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
 * Address:	8042A544
 * Size:	0002B8
 */
void DvdStatus::draw()
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  li        r4, 0
  stw       r0, 0xA4(r1)
  stw       r31, 0x9C(r1)
  stw       r30, 0x98(r1)
  stw       r29, 0x94(r1)
  mr        r29, r3
  lis       r3, 0x804A
  lwz       r0, 0x4(r29)
  subi      r31, r3, 0x6258
  cmplwi    r0, 0
  beq-      .loc_0x4C
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x5C(r3)
  lwz       r0, 0xE4(r3)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0x4C
  li        r4, 0x1

.loc_0x4C:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x29C
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x24(r3)
  bl        -0x3138
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x24(r3)
  lwzu      r12, 0xBC(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0
  li        r6, 0x80
  li        r5, 0xFF
  stb       r3, 0x18(r1)
  lis       r0, 0x4330
  lfs       f1, 0x2210(r2)
  stb       r3, 0x19(r1)
  addi      r3, r1, 0x1C
  lwz       r4, -0x76E0(r13)
  fmr       f2, f1
  stb       r6, 0x1A(r1)
  lfd       f4, 0x2220(r2)
  stb       r5, 0x1B(r1)
  lwz       r5, 0x18(r1)
  stw       r0, 0x80(r1)
  stw       r5, 0x1C(r1)
  lwz       r5, 0x4(r4)
  stw       r0, 0x88(r1)
  lhz       r4, 0x4(r5)
  lhz       r0, 0x6(r5)
  stw       r4, 0x84(r1)
  stw       r0, 0x8C(r1)
  lfd       f3, 0x80(r1)
  lfd       f0, 0x88(r1)
  fsubs     f3, f3, f4
  fsubs     f4, f0, f4
  bl        -0x3F4C2C
  lfs       f1, 0x2210(r2)
  addi      r3, r1, 0x20
  li        r4, 0
  bl        -0x3ECEE4
  lwz       r3, -0x6428(r13)
  cmplwi    r3, 0
  beq-      .loc_0x11C
  lbz       r0, 0x28(r3)
  cmplwi    r0, 0
  beq-      .loc_0x11C
  lwz       r4, 0x18(r3)
  addi      r3, r1, 0x20
  bl        -0x3ECAC4
  b         .loc_0x14C

.loc_0x11C:
  lwz       r3, -0x6514(r13)
  lwz       r4, 0xDC(r3)
  cmplwi    r4, 0
  beq-      .loc_0x138
  addi      r3, r1, 0x20
  bl        -0x3ECAE0
  b         .loc_0x14C

.loc_0x138:
  addi      r3, r31, 0xC
  addi      r5, r31, 0x40
  li        r4, 0x117
  crclr     6, 0x6
  bl        -0x40004C

.loc_0x14C:
  lwz       r0, 0x24(r1)
  cmplwi    r0, 0
  beq-      .loc_0x290
  lwz       r3, -0x6514(r13)
  lwz       r6, 0xD4(r3)
  cmplwi    r6, 0x6
  bgt-      .loc_0x1E0
  lis       r3, 0x804F
  rlwinm    r0,r6,2,0,29
  subi      r3, r3, 0x41E0
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  lis       r3, 0x804F
  subi      r0, r3, 0x2518
  mr        r30, r0
  b         .loc_0x1F4
  lis       r3, 0x804F
  subi      r0, r3, 0x24E8
  mr        r30, r0
  b         .loc_0x1F4
  lis       r3, 0x804F
  subi      r0, r3, 0x2500
  mr        r30, r0
  b         .loc_0x1F4
  lis       r3, 0x804F
  subi      r0, r3, 0x24B8
  mr        r30, r0
  b         .loc_0x1F4
  lis       r3, 0x804F
  subi      r0, r3, 0x2530
  mr        r30, r0
  b         .loc_0x1F4
  lis       r3, 0x804F
  subi      r0, r3, 0x24D0
  mr        r30, r0
  b         .loc_0x1F4

.loc_0x1E0:
  addi      r3, r31, 0xC
  addi      r5, r31, 0x50
  li        r4, 0x126
  crclr     6, 0x6
  bl        -0x4000F4

.loc_0x1F4:
  addi      r3, r1, 0x20
  bl        -0x3ECDE4
  li        r5, 0xFF
  lfs       f1, 0x2214(r2)
  stb       r5, 0x10(r1)
  addi      r3, r1, 0x20
  lfs       f2, 0x2218(r2)
  stb       r5, 0x11(r1)
  stb       r5, 0x12(r1)
  stb       r5, 0x13(r1)
  lwz       r0, 0x10(r1)
  stb       r5, 0x8(r1)
  stw       r0, 0x14(r1)
  lbz       r4, 0x14(r1)
  lbz       r9, 0x15(r1)
  lbz       r8, 0x16(r1)
  lbz       r7, 0x17(r1)
  stb       r5, 0x9(r1)
  stb       r5, 0xA(r1)
  stb       r5, 0xB(r1)
  lwz       r0, 0x8(r1)
  stb       r4, 0x60(r1)
  stw       r0, 0xC(r1)
  lbz       r6, 0xC(r1)
  lbz       r5, 0xD(r1)
  lbz       r4, 0xE(r1)
  lbz       r0, 0xF(r1)
  stb       r9, 0x61(r1)
  stb       r8, 0x62(r1)
  stb       r7, 0x63(r1)
  stb       r6, 0x64(r1)
  stb       r5, 0x65(r1)
  stb       r4, 0x66(r1)
  stb       r0, 0x67(r1)
  lwz       r0, 0x0(r29)
  rlwinm    r0,r0,2,0,29
  lwzx      r4, r30, r0
  crset     6, 0x6
  bl        -0x3ECAD8

.loc_0x290:
  addi      r3, r1, 0x20
  li        r4, -0x1
  bl        -0x3ECECC

.loc_0x29C:
  lwz       r0, 0xA4(r1)
  lwz       r31, 0x9C(r1)
  lwz       r30, 0x98(r1)
  lwz       r29, 0x94(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}