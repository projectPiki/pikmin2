

/*
 * --INFO--
 * Address:	800DF654
 * Size:	00011C
 */
void ErrorCode2Num(void)
{
/*
.loc_0x0:
  li        r0, 0x2
  lis       r4, 0x804A
  mtctr     r0
  addi      r4, r4, 0x7E18
  li        r5, 0

.loc_0x14:
  lwz       r0, 0x0(r4)
  cmplw     r3, r0
  bne-      .loc_0x28
  rlwinm    r3,r5,0,24,31
  blr       

.loc_0x28:
  lwzu      r0, 0x4(r4)
  addi      r5, r5, 0x1
  cmplw     r3, r0
  bne-      .loc_0x40
  rlwinm    r3,r5,0,24,31
  blr       

.loc_0x40:
  lwzu      r0, 0x4(r4)
  addi      r5, r5, 0x1
  cmplw     r3, r0
  bne-      .loc_0x58
  rlwinm    r3,r5,0,24,31
  blr       

.loc_0x58:
  lwzu      r0, 0x4(r4)
  addi      r5, r5, 0x1
  cmplw     r3, r0
  bne-      .loc_0x70
  rlwinm    r3,r5,0,24,31
  blr       

.loc_0x70:
  lwzu      r0, 0x4(r4)
  addi      r5, r5, 0x1
  cmplw     r3, r0
  bne-      .loc_0x88
  rlwinm    r3,r5,0,24,31
  blr       

.loc_0x88:
  lwzu      r0, 0x4(r4)
  addi      r5, r5, 0x1
  cmplw     r3, r0
  bne-      .loc_0xA0
  rlwinm    r3,r5,0,24,31
  blr       

.loc_0xA0:
  lwzu      r0, 0x4(r4)
  addi      r5, r5, 0x1
  cmplw     r3, r0
  bne-      .loc_0xB8
  rlwinm    r3,r5,0,24,31
  blr       

.loc_0xB8:
  lwzu      r0, 0x4(r4)
  addi      r5, r5, 0x1
  cmplw     r3, r0
  bne-      .loc_0xD0
  rlwinm    r3,r5,0,24,31
  blr       

.loc_0xD0:
  lwzu      r0, 0x4(r4)
  addi      r5, r5, 0x1
  cmplw     r3, r0
  bne-      .loc_0xE8
  rlwinm    r3,r5,0,24,31
  blr       

.loc_0xE8:
  addi      r4, r4, 0x4
  addi      r5, r5, 0x1
  bdnz+     .loc_0x14
  lis       r4, 0x10
  cmplw     r3, r4
  blt-      .loc_0x114
  addi      r0, r4, 0x8
  cmplw     r3, r0
  bgt-      .loc_0x114
  li        r3, 0x11
  blr       

.loc_0x114:
  li        r3, 0x1D
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000160
 */
void Convert(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DF770
 * Size:	00007C
 */
void __DVDStoreErrorCode(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  subis     r0, r3, 0x123
  cmplwi    r0, 0x4567
  stwu      r1, -0x18(r1)
  stw       r31, 0x14(r1)
  bne-      .loc_0x24
  li        r31, 0xFF
  b         .loc_0x58

.loc_0x24:
  cmplwi    r0, 0x4568
  bne-      .loc_0x34
  li        r31, 0xFE
  b         .loc_0x58

.loc_0x34:
  rlwinm    r31,r3,8,24,31
  rlwinm    r3,r3,0,8,31
  bl        -0x158
  cmplwi    r31, 0x6
  blt-      .loc_0x4C
  li        r31, 0x6

.loc_0x4C:
  mulli     r0, r31, 0x1E
  rlwinm    r3,r3,0,24,31
  add       r31, r3, r0

.loc_0x58:
  bl        0x115C4
  stb       r31, 0x24(r3)
  li        r3, 0x1
  bl        0x11974
  lwz       r0, 0x1C(r1)
  lwz       r31, 0x14(r1)
  addi      r1, r1, 0x18
  mtlr      r0
  blr
*/
}