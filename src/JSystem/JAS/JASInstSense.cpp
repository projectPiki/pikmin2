

/*
 * --INFO--
 * Address:	8009B58C
 * Size:	000124
 */
void JASInstSense::getY(int, int) const
{
	/*
	.loc_0x0:
	  lbz       r0, 0x8(r3)
	  li        r7, 0
	  stwu      r1, -0x20(r1)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x2C
	  bge-      .loc_0x30
	  cmpwi     r0, 0x1
	  bge-      .loc_0x24
	  b         .loc_0x30

	.loc_0x24:
	  mr        r7, r5
	  b         .loc_0x30

	.loc_0x2C:
	  mr        r7, r4

	.loc_0x30:
	  lbz       r6, 0x9(r3)
	  cmplwi    r6, 0x7F
	  beq-      .loc_0x44
	  cmplwi    r6, 0
	  bne-      .loc_0x80

	.loc_0x44:
	  xoris     r4, r7, 0x8000
	  lis       r0, 0x4330
	  stw       r4, 0xC(r1)
	  lfs       f4, 0xC(r3)
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x10(r3)
	  lfd       f3, -0x7660(r2)
	  lfd       f2, 0x8(r1)
	  fsubs     f1, f0, f4
	  lfs       f0, -0x7668(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f2, f1
	  fdivs     f0, f1, f0
	  fadds     f1, f4, f0
	  b         .loc_0x11C

	.loc_0x80:
	  cmpw      r7, r6
	  bge-      .loc_0xD0
	  lis       r0, 0x4330
	  xoris     r4, r7, 0x8000
	  stw       r4, 0xC(r1)
	  lfd       f2, -0x7660(r2)
	  stw       r0, 0x8(r1)
	  lfd       f1, -0x7658(r2)
	  lfd       f0, 0x8(r1)
	  stw       r6, 0x14(r1)
	  fsubs     f2, f0, f2
	  lfs       f4, 0xC(r3)
	  stw       r0, 0x10(r1)
	  lfs       f3, -0x7664(r2)
	  lfd       f0, 0x10(r1)
	  fsubs     f3, f3, f4
	  fsubs     f0, f0, f1
	  fdivs     f0, f2, f0
	  fmadds    f1, f3, f0, f4
	  b         .loc_0x11C

	.loc_0xD0:
	  sub       r5, r7, r6
	  subfic    r0, r6, 0x7F
	  lis       r4, 0x4330
	  lfd       f2, -0x7660(r2)
	  xoris     r5, r5, 0x8000
	  xoris     r0, r0, 0x8000
	  stw       r5, 0x14(r1)
	  lfs       f1, 0x10(r3)
	  stw       r4, 0x10(r1)
	  lfs       f4, -0x7664(r2)
	  lfd       f0, 0x10(r1)
	  stw       r0, 0xC(r1)
	  fsubs     f3, f1, f4
	  fsubs     f1, f0, f2
	  stw       r4, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fdivs     f0, f1, f0
	  fmadds    f1, f3, f0, f4

	.loc_0x11C:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009B6B0
 * Size:	000014
 */
void JASInstSense::setParams(int, int, float, float)
{
	/*
	.loc_0x0:
	  stb       r4, 0x8(r3)
	  stb       r5, 0x9(r3)
	  stfs      f1, 0xC(r3)
	  stfs      f2, 0x10(r3)
	  blr
	*/
}