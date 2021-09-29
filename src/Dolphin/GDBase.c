

/*
 * --INFO--
 * Address:	800E1B04
 * Size:	000018
 */
void GDInitGDLObj(void)
{
/*
.loc_0x0:
  stw       r4, 0x0(r3)
  add       r0, r4, r5
  stw       r4, 0x8(r3)
  stw       r0, 0xC(r3)
  stw       r5, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800E1B1C
 * Size:	00002C
 */
void GDFlushCurrToMem(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x8(r1)
  lwz       r4, -0x7158(r13)
  lwz       r3, 0x0(r4)
  lwz       r4, 0x4(r4)
  bl        0xABE4
  lwz       r0, 0xC(r1)
  addi      r1, r1, 0x8
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	800E1B48
 * Size:	0000F8
 */
void GDPadCurr32(void)
{
/*
.loc_0x0:
  lwz       r3, -0x7158(r13)
  lwz       r0, 0x8(r3)
  rlwinm.   r0,r0,0,27,31
  beqlr-    
  cmplwi    r0, 0x20
  subfic    r3, r0, 0x20
  li        r6, 0
  bgelr-    
  rlwinm.   r0,r3,29,3,31
  mtctr     r0
  beq-      .loc_0xD8

.loc_0x2C:
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r6, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r6, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r6, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r6, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r6, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r6, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r6, 0x0(r4)
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r6, 0x0(r4)
  bdnz+     .loc_0x2C
  andi.     r3, r3, 0x7
  beqlr-    

.loc_0xD8:
  mtctr     r3

.loc_0xDC:
  lwz       r5, -0x7158(r13)
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  stb       r6, 0x0(r4)
  bdnz+     .loc_0xDC
  blr
*/
}

/*
 * --INFO--
 * Address:	800E1C40
 * Size:	000030
 */
void GDOverflowed(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x8(r1)
  lwz       r12, -0x7154(r13)
  cmplwi    r12, 0
  beq-      .loc_0x20
  mtlr      r12
  blrl      

.loc_0x20:
  lwz       r0, 0xC(r1)
  addi      r1, r1, 0x8
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GDSetOverflowCallback(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GDGetOverflowCallback(void)
{
	// UNUSED FUNCTION
}