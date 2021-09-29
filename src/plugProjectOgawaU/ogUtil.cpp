

/*
 * --INFO--
 * Address:	80317F28
 * Size:	000024
 */
void checkMovieActive__Q22og9newScreenFv(void)
{
/*
.loc_0x0:
  lwz       r4, -0x64AC(r13)
  li        r3, 0
  cmplwi    r4, 0
  beqlr-    
  lwz       r0, 0x1F0(r4)
  rlwinm.   r0,r0,0,31,31
  beqlr-    
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void drawObjName__Q22og9newScreenFR8GraphicsPc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void getLanguageDir__Q22og9newScreenFPc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80317F4C
 * Size:	0000DC
 */
void makeLanguageResName__Q22og9newScreenFPcPCc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  lbz       r0, 0x0(r4)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  cmpwi     r0, 0x2F
  stw       r30, 0x18(r1)
  mr        r30, r3
  bne-      .loc_0x3C
  mr        r5, r31
  subi      r4, r2, 0xA34
  crclr     6, 0x6
  bl        -0x250B48
  b         .loc_0xC4

.loc_0x3C:
  lwz       r3, -0x6514(r13)
  lwz       r0, 0xD4(r3)
  cmplwi    r0, 0x6
  bgt-      .loc_0x94
  lis       r3, 0x804E
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x74F4
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  subi      r5, r2, 0xA68
  b         .loc_0x98
  subi      r5, r2, 0xA60
  b         .loc_0x98
  subi      r5, r2, 0xA58
  b         .loc_0x98
  subi      r5, r2, 0xA50
  b         .loc_0x98
  subi      r5, r2, 0xA48
  b         .loc_0x98
  subi      r5, r2, 0xA40
  b         .loc_0x98

.loc_0x94:
  subi      r5, r2, 0xA38

.loc_0x98:
  addi      r3, r1, 0x8
  subi      r4, r2, 0xA34
  crclr     6, 0x6
  bl        -0x250BB8
  lis       r4, 0x8049
  mr        r3, r30
  subi      r4, r4, 0x1888
  mr        r6, r31
  addi      r5, r1, 0x8
  crclr     6, 0x6
  bl        -0x250BD4

.loc_0xC4:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80318028
 * Size:	000028
 */
void __sinit_ogUtil_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804E
  stw       r0, -0x6810(r13)
  stfsu     f0, -0x7500(r3)
  stfs      f0, -0x680C(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}