

/*
 * --INFO--
 * Address:	800C6FE8
 * Size:	00004C
 */
void memcmp(void)
{
	/*
	.loc_0x0:
	  subi      r6, r3, 0x1
	  subi      r7, r4, 0x1
	  addi      r4, r5, 0x1
	  b         .loc_0x3C

	.loc_0x10:
	  lbzu      r3, 0x1(r6)
	  lbzu      r0, 0x1(r7)
	  cmplw     r3, r0
	  beq-      .loc_0x3C
	  lbz       r4, 0x0(r6)
	  li        r3, 0x1
	  lbz       r0, 0x0(r7)
	  cmplw     r4, r0
	  bgelr-
	  li        r3, -0x1
	  blr

	.loc_0x3C:
	  subic.    r4, r4, 0x1
	  bne+      .loc_0x10
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C7034
 * Size:	00002C
 */
void __memrchr(void)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,0,24,31
	  add       r3, r3, r5
	  addi      r5, r5, 0x1
	  b         .loc_0x1C

	.loc_0x10:
	  lbzu      r0, -0x1(r3)
	  cmplw     r0, r4
	  beqlr-

	.loc_0x1C:
	  subic.    r5, r5, 0x1
	  bne+      .loc_0x10
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C7060
 * Size:	00002C
 */
void memchr(void)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,0,24,31
	  subi      r3, r3, 0x1
	  addi      r5, r5, 0x1
	  b         .loc_0x1C

	.loc_0x10:
	  lbzu      r0, 0x1(r3)
	  cmplw     r0, r4
	  beqlr-

	.loc_0x1C:
	  subic.    r5, r5, 0x1
	  bne+      .loc_0x10
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C708C
 * Size:	0000CC
 */
void memmove(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0x20
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  xor       r6, r31, r4
	  cntlzw    r0, r6
	  slw       r0, r31, r0
	  rlwinm    r7,r0,1,31,31
	  blt-      .loc_0x68
	  rlwinm.   r0,r6,0,30,31
	  beq-      .loc_0x4C
	  cmpwi     r7, 0
	  bne-      .loc_0x44
	  bl        0x13C
	  b         .loc_0x60

	.loc_0x44:
	  bl        .loc_0xCC
	  b         .loc_0x60

	.loc_0x4C:
	  cmpwi     r7, 0
	  bne-      .loc_0x5C
	  bl        0x28C
	  b         .loc_0x60

	.loc_0x5C:
	  bl        0x1DC

	.loc_0x60:
	  mr        r3, r31
	  b         .loc_0xB8

	.loc_0x68:
	  cmpwi     r7, 0
	  bne-      .loc_0x94
	  subi      r3, r4, 0x1
	  subi      r4, r31, 0x1
	  addi      r5, r5, 0x1
	  b         .loc_0x88

	.loc_0x80:
	  lbzu      r0, 0x1(r3)
	  stbu      r0, 0x1(r4)

	.loc_0x88:
	  subic.    r5, r5, 0x1
	  bne+      .loc_0x80
	  b         .loc_0xB4

	.loc_0x94:
	  add       r3, r4, r5
	  add       r4, r31, r5
	  addi      r5, r5, 0x1
	  b         .loc_0xAC

	.loc_0xA4:
	  lbzu      r0, -0x1(r3)
	  stbu      r0, -0x1(r4)

	.loc_0xAC:
	  subic.    r5, r5, 0x1
	  bne+      .loc_0xA4

	.loc_0xB4:
	  mr        r3, r31

	.loc_0xB8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0xCC:
	*/
}
