

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void JASCalc::mixcopy(const short *, const short *, short *, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A5EBC
 * Size:	0000D4
 */
void JASCalc::imixcopy(const short *, const short *, short *, unsigned long)
{
/*
.loc_0x0:
  cmplwi    r6, 0
  beqlr-    
  rlwinm.   r0,r6,29,3,31
  mtctr     r0
  beq-      .loc_0xAC

.loc_0x14:
  lha       r7, 0x0(r3)
  lha       r0, 0x0(r4)
  sth       r7, 0x0(r5)
  lha       r7, 0x2(r3)
  sth       r0, 0x2(r5)
  lha       r0, 0x2(r4)
  sth       r7, 0x4(r5)
  lha       r7, 0x4(r3)
  sth       r0, 0x6(r5)
  lha       r0, 0x4(r4)
  sth       r7, 0x8(r5)
  lha       r7, 0x6(r3)
  sth       r0, 0xA(r5)
  lha       r0, 0x6(r4)
  sth       r7, 0xC(r5)
  lha       r7, 0x8(r3)
  sth       r0, 0xE(r5)
  lha       r0, 0x8(r4)
  sth       r7, 0x10(r5)
  lha       r7, 0xA(r3)
  sth       r0, 0x12(r5)
  lha       r0, 0xA(r4)
  sth       r7, 0x14(r5)
  lha       r7, 0xC(r3)
  sth       r0, 0x16(r5)
  lha       r0, 0xC(r4)
  sth       r7, 0x18(r5)
  lha       r7, 0xE(r3)
  addi      r3, r3, 0x10
  sth       r0, 0x1A(r5)
  lha       r0, 0xE(r4)
  addi      r4, r4, 0x10
  sth       r7, 0x1C(r5)
  sth       r0, 0x1E(r5)
  addi      r5, r5, 0x20
  bdnz+     .loc_0x14
  andi.     r6, r6, 0x7
  beqlr-    

.loc_0xAC:
  mtctr     r6

.loc_0xB0:
  lha       r7, 0x0(r3)
  addi      r3, r3, 0x2
  lha       r0, 0x0(r4)
  addi      r4, r4, 0x2
  sth       r7, 0x0(r5)
  sth       r0, 0x2(r5)
  addi      r5, r5, 0x4
  bdnz+     .loc_0xB0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void JASCalc::bcopyfast(const void *, void *, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A5F90
 * Size:	0002D4
 */
void JASCalc::bcopy(const void *, void *, unsigned long)
{
/*
.loc_0x0:
  rlwinm    r7,r3,0,30,31
  rlwinm    r6,r4,0,30,31
  cmplw     r7, r6
  bne-      .loc_0xF4
  rlwinm.   r0,r5,0,28,31
  bne-      .loc_0xF4
  rlwinm.   r8,r5,28,4,31
  beqlr-    
  rlwinm.   r0,r8,30,2,31
  mtctr     r0
  beq-      .loc_0xC0

.loc_0x2C:
  lwz       r7, 0x0(r3)
  lwz       r6, 0x4(r3)
  lwz       r5, 0x8(r3)
  lwz       r0, 0xC(r3)
  stw       r7, 0x0(r4)
  stw       r6, 0x4(r4)
  stw       r5, 0x8(r4)
  stw       r0, 0xC(r4)
  lwz       r7, 0x10(r3)
  lwz       r6, 0x14(r3)
  lwz       r5, 0x18(r3)
  lwz       r0, 0x1C(r3)
  stw       r7, 0x10(r4)
  stw       r6, 0x14(r4)
  stw       r5, 0x18(r4)
  stw       r0, 0x1C(r4)
  lwz       r7, 0x20(r3)
  lwz       r6, 0x24(r3)
  lwz       r5, 0x28(r3)
  lwz       r0, 0x2C(r3)
  stw       r7, 0x20(r4)
  stw       r6, 0x24(r4)
  stw       r5, 0x28(r4)
  stw       r0, 0x2C(r4)
  lwz       r7, 0x30(r3)
  lwz       r6, 0x34(r3)
  lwz       r5, 0x38(r3)
  lwz       r0, 0x3C(r3)
  addi      r3, r3, 0x40
  stw       r7, 0x30(r4)
  stw       r6, 0x34(r4)
  stw       r5, 0x38(r4)
  stw       r0, 0x3C(r4)
  addi      r4, r4, 0x40
  bdnz+     .loc_0x2C
  andi.     r8, r8, 0x3
  beqlr-    

.loc_0xC0:
  mtctr     r8

.loc_0xC4:
  lwz       r7, 0x0(r3)
  lwz       r6, 0x4(r3)
  lwz       r5, 0x8(r3)
  lwz       r0, 0xC(r3)
  addi      r3, r3, 0x10
  stw       r7, 0x0(r4)
  stw       r6, 0x4(r4)
  stw       r5, 0x8(r4)
  stw       r0, 0xC(r4)
  addi      r4, r4, 0x10
  bdnz+     .loc_0xC4
  blr       

.loc_0xF4:
  cmplw     r7, r6
  bne-      .loc_0x250
  cmplwi    r5, 0x10
  blt-      .loc_0x250
  cmplwi    r7, 0
  beq-      .loc_0x138
  subfic    r0, r7, 0x4
  rlwinm    r6,r0,0,24,31
  b         .loc_0x130

.loc_0x118:
  lbz       r0, 0x0(r3)
  subi      r5, r5, 0x1
  subi      r6, r6, 0x1
  addi      r3, r3, 0x1
  stb       r0, 0x0(r4)
  addi      r4, r4, 0x1

.loc_0x130:
  rlwinm.   r0,r6,0,24,31
  bne+      .loc_0x118

.loc_0x138:
  cmplwi    r5, 0x4
  rlwinm    r7,r5,30,2,31
  blt-      .loc_0x1C8
  rlwinm.   r6,r7,29,3,31
  rlwinm    r0,r7,2,0,29
  neg       r0, r0
  mtctr     r6
  beq-      .loc_0x1AC

.loc_0x158:
  lwz       r6, 0x0(r3)
  stw       r6, 0x0(r4)
  lwz       r6, 0x4(r3)
  stw       r6, 0x4(r4)
  lwz       r6, 0x8(r3)
  stw       r6, 0x8(r4)
  lwz       r6, 0xC(r3)
  stw       r6, 0xC(r4)
  lwz       r6, 0x10(r3)
  stw       r6, 0x10(r4)
  lwz       r6, 0x14(r3)
  stw       r6, 0x14(r4)
  lwz       r6, 0x18(r3)
  stw       r6, 0x18(r4)
  lwz       r6, 0x1C(r3)
  addi      r3, r3, 0x20
  stw       r6, 0x1C(r4)
  addi      r4, r4, 0x20
  bdnz+     .loc_0x158
  andi.     r7, r7, 0x7
  beq-      .loc_0x1C4

.loc_0x1AC:
  mtctr     r7

.loc_0x1B0:
  lwz       r6, 0x0(r3)
  addi      r3, r3, 0x4
  stw       r6, 0x0(r4)
  addi      r4, r4, 0x4
  bdnz+     .loc_0x1B0

.loc_0x1C4:
  add       r5, r5, r0

.loc_0x1C8:
  cmplwi    r5, 0
  beqlr-    
  beqlr-    
  rlwinm.   r0,r5,29,3,31
  mtctr     r0
  beq-      .loc_0x234

.loc_0x1E0:
  lbz       r0, 0x0(r3)
  stb       r0, 0x0(r4)
  lbz       r0, 0x1(r3)
  stb       r0, 0x1(r4)
  lbz       r0, 0x2(r3)
  stb       r0, 0x2(r4)
  lbz       r0, 0x3(r3)
  stb       r0, 0x3(r4)
  lbz       r0, 0x4(r3)
  stb       r0, 0x4(r4)
  lbz       r0, 0x5(r3)
  stb       r0, 0x5(r4)
  lbz       r0, 0x6(r3)
  stb       r0, 0x6(r4)
  lbz       r0, 0x7(r3)
  addi      r3, r3, 0x8
  stb       r0, 0x7(r4)
  addi      r4, r4, 0x8
  bdnz+     .loc_0x1E0
  andi.     r5, r5, 0x7
  beqlr-    

.loc_0x234:
  mtctr     r5

.loc_0x238:
  lbz       r0, 0x0(r3)
  addi      r3, r3, 0x1
  stb       r0, 0x0(r4)
  addi      r4, r4, 0x1
  bdnz+     .loc_0x238
  blr       

.loc_0x250:
  cmplwi    r5, 0
  beqlr-    
  rlwinm.   r0,r5,29,3,31
  mtctr     r0
  beq-      .loc_0x2B8

.loc_0x264:
  lbz       r0, 0x0(r3)
  stb       r0, 0x0(r4)
  lbz       r0, 0x1(r3)
  stb       r0, 0x1(r4)
  lbz       r0, 0x2(r3)
  stb       r0, 0x2(r4)
  lbz       r0, 0x3(r3)
  stb       r0, 0x3(r4)
  lbz       r0, 0x4(r3)
  stb       r0, 0x4(r4)
  lbz       r0, 0x5(r3)
  stb       r0, 0x5(r4)
  lbz       r0, 0x6(r3)
  stb       r0, 0x6(r4)
  lbz       r0, 0x7(r3)
  addi      r3, r3, 0x8
  stb       r0, 0x7(r4)
  addi      r4, r4, 0x8
  bdnz+     .loc_0x264
  andi.     r5, r5, 0x7
  beqlr-    

.loc_0x2B8:
  mtctr     r5

.loc_0x2BC:
  lbz       r0, 0x0(r3)
  addi      r3, r3, 0x1
  stb       r0, 0x0(r4)
  addi      r4, r4, 0x1
  bdnz+     .loc_0x2BC
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void JASCalc::bzerofast(void *, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A6264
 * Size:	000274
 */
void JASCalc::bzero(void *, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  stw       r0, 0x14(r1)
  rlwinm.   r0,r4,0,27,31
  bne-      .loc_0x28
  rlwinm.   r0,r3,0,27,31
  bne-      .loc_0x28
  bl        0x4654C
  b         .loc_0x264

.loc_0x28:
  rlwinm.   r0,r4,0,28,31
  rlwinm    r5,r6,0,30,31
  bne-      .loc_0x104
  cmplwi    r5, 0
  bne-      .loc_0x104
  rlwinm.   r5,r4,28,4,31
  li        r4, 0
  beq-      .loc_0x264
  rlwinm.   r0,r5,29,3,31
  mtctr     r0
  beq-      .loc_0xE4

.loc_0x54:
  stw       r4, 0x0(r3)
  stw       r4, 0x4(r3)
  stw       r4, 0x8(r3)
  stw       r4, 0xC(r3)
  stw       r4, 0x10(r3)
  stw       r4, 0x14(r3)
  stw       r4, 0x18(r3)
  stw       r4, 0x1C(r3)
  stw       r4, 0x20(r3)
  stw       r4, 0x24(r3)
  stw       r4, 0x28(r3)
  stw       r4, 0x2C(r3)
  stw       r4, 0x30(r3)
  stw       r4, 0x34(r3)
  stw       r4, 0x38(r3)
  stw       r4, 0x3C(r3)
  stw       r4, 0x40(r3)
  stw       r4, 0x44(r3)
  stw       r4, 0x48(r3)
  stw       r4, 0x4C(r3)
  stw       r4, 0x50(r3)
  stw       r4, 0x54(r3)
  stw       r4, 0x58(r3)
  stw       r4, 0x5C(r3)
  stw       r4, 0x60(r3)
  stw       r4, 0x64(r3)
  stw       r4, 0x68(r3)
  stw       r4, 0x6C(r3)
  stw       r4, 0x70(r3)
  stw       r4, 0x74(r3)
  stw       r4, 0x78(r3)
  stw       r4, 0x7C(r3)
  addi      r3, r3, 0x80
  bdnz+     .loc_0x54
  andi.     r5, r5, 0x7
  beq-      .loc_0x264

.loc_0xE4:
  mtctr     r5

.loc_0xE8:
  stw       r4, 0x0(r3)
  stw       r4, 0x4(r3)
  stw       r4, 0x8(r3)
  stw       r4, 0xC(r3)
  addi      r3, r3, 0x10
  bdnz+     .loc_0xE8
  b         .loc_0x264

.loc_0x104:
  cmplwi    r4, 0x10
  blt-      .loc_0x20C
  cmplwi    r5, 0
  beq-      .loc_0x13C
  subfic    r0, r5, 0x4
  li        r3, 0
  rlwinm    r5,r0,0,24,31
  b         .loc_0x134

.loc_0x124:
  stb       r3, 0x0(r6)
  addi      r6, r6, 0x1
  subi      r4, r4, 0x1
  subi      r5, r5, 0x1

.loc_0x134:
  rlwinm.   r0,r5,0,24,31
  bne+      .loc_0x124

.loc_0x13C:
  cmplwi    r4, 0x4
  mr        r7, r6
  rlwinm    r5,r4,30,2,31
  li        r6, 0
  blt-      .loc_0x1A8
  rlwinm.   r3,r5,29,3,31
  rlwinm    r0,r5,2,0,29
  neg       r0, r0
  mtctr     r3
  beq-      .loc_0x194

.loc_0x164:
  stw       r6, 0x0(r7)
  stw       r6, 0x4(r7)
  stw       r6, 0x8(r7)
  stw       r6, 0xC(r7)
  stw       r6, 0x10(r7)
  stw       r6, 0x14(r7)
  stw       r6, 0x18(r7)
  stw       r6, 0x1C(r7)
  addi      r7, r7, 0x20
  bdnz+     .loc_0x164
  andi.     r5, r5, 0x7
  beq-      .loc_0x1A4

.loc_0x194:
  mtctr     r5

.loc_0x198:
  stw       r6, 0x0(r7)
  addi      r7, r7, 0x4
  bdnz+     .loc_0x198

.loc_0x1A4:
  add       r4, r4, r0

.loc_0x1A8:
  cmplwi    r4, 0
  beq-      .loc_0x264
  mr        r5, r7
  li        r3, 0
  beq-      .loc_0x264
  rlwinm.   r0,r4,29,3,31
  mtctr     r0
  beq-      .loc_0x1F8

.loc_0x1C8:
  stb       r3, 0x0(r5)
  stb       r3, 0x1(r5)
  stb       r3, 0x2(r5)
  stb       r3, 0x3(r5)
  stb       r3, 0x4(r5)
  stb       r3, 0x5(r5)
  stb       r3, 0x6(r5)
  stb       r3, 0x7(r5)
  addi      r5, r5, 0x8
  bdnz+     .loc_0x1C8
  andi.     r4, r4, 0x7
  beq-      .loc_0x264

.loc_0x1F8:
  mtctr     r4

.loc_0x1FC:
  stb       r3, 0x0(r5)
  addi      r5, r5, 0x1
  bdnz+     .loc_0x1FC
  b         .loc_0x264

.loc_0x20C:
  cmplwi    r4, 0
  li        r3, 0
  beq-      .loc_0x264
  rlwinm.   r0,r4,29,3,31
  mtctr     r0
  beq-      .loc_0x254

.loc_0x224:
  stb       r3, 0x0(r6)
  stb       r3, 0x1(r6)
  stb       r3, 0x2(r6)
  stb       r3, 0x3(r6)
  stb       r3, 0x4(r6)
  stb       r3, 0x5(r6)
  stb       r3, 0x6(r6)
  stb       r3, 0x7(r6)
  addi      r6, r6, 0x8
  bdnz+     .loc_0x224
  andi.     r4, r4, 0x7
  beq-      .loc_0x264

.loc_0x254:
  mtctr     r4

.loc_0x258:
  stb       r3, 0x0(r6)
  addi      r6, r6, 0x1
  bdnz+     .loc_0x258

.loc_0x264:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
void JASCalc::hannWindow(short *, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000118
 */
void JASCalc::hammWindow(short *, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0004CC
 */
void JASCalc::fft(float *, float *, unsigned long, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A64D8
 * Size:	000028
 */
void JASCalc::clamp<short, long>(long)
{
/*
.loc_0x0:
  cmpwi     r3, -0x8000
  bgt-      .loc_0x10
  li        r3, -0x8000
  blr       

.loc_0x10:
  cmpwi     r3, 0x7FFF
  li        r0, 0x7FFF
  bge-      .loc_0x20
  extsh     r0, r3

.loc_0x20:
  mr        r3, r0
  blr
*/
}