

/*
 * --INFO--
 * Address:	8009B4E8
 * Size:	0000A4
 */
void JASInstRand::getY(int, int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lbz       r0, -0x75C8(r13)
	  extsb.    r0, r0
	  bne-      .loc_0x34
	  subi      r3, r13, 0x75C4
	  li        r4, 0
	  bl        -0x66410
	  li        r0, 0x1
	  stb       r0, -0x75C8(r13)

	.loc_0x34:
	  lis       r3, 0x19
	  lwz       r4, -0x75C4(r13)
	  addi      r0, r3, 0x660D
	  lis       r5, 0x8051
	  mullw     r3, r4, r0
	  lfs       f5, -0x766C(r2)
	  lfs       f0, 0x48DC(r5)
	  lfs       f3, -0x7670(r2)
	  fsubs     f4, f5, f0
	  lfs       f2, 0xC(r31)
	  addis     r3, r3, 0x3C6F
	  lfs       f0, 0x8(r31)
	  subi      r3, r3, 0xCA1
	  rlwinm    r0,r3,23,9,31
	  stw       r3, -0x75C4(r13)
	  oris      r0, r0, 0x3F80
	  stw       r0, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  lfs       f1, 0x8(r1)
	  lwz       r31, 0x1C(r1)
	  fsubs     f1, f1, f5
	  fmuls     f1, f3, f1
	  fnmsubs   f1, f5, f4, f1
	  fmuls     f1, f1, f2
	  fadds     f1, f1, f0
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}