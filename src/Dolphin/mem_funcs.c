

/*
 * --INFO--
 * Address:	800C7158
 * Size:	0000AC
 */
void __copy_longs_rev_unaligned(void)
{
	/*
	.loc_0x0:
	  add       r11, r3, r5
	  add       r10, r4, r5
	  rlwinm.   r3,r11,0,30,31
	  beq-      .loc_0x24
	  sub       r5, r5, r3

	.loc_0x14:
	  lbzu      r0, -0x1(r10)
	  subic.    r3, r3, 0x1
	  stbu      r0, -0x1(r11)
	  bne+      .loc_0x14

	.loc_0x24:
	  rlwinm    r8,r10,3,27,28
	  rlwinm    r7,r10,0,30,31
	  subfic    r9, r8, 0x20
	  rlwinm    r6,r5,29,3,31
	  subfic    r0, r7, 0x4
	  add       r10, r10, r0
	  lwzu      r4, -0x4(r10)

	.loc_0x40:
	  lwz       r0, -0x4(r10)
	  srw       r3, r4, r9
	  subic.    r6, r6, 0x1
	  slw       r4, r0, r8
	  srw       r0, r0, r9
	  or        r3, r4, r3
	  stw       r3, -0x4(r11)
	  lwzu      r4, -0x8(r10)
	  slw       r3, r4, r8
	  or        r0, r3, r0
	  stwu      r0, -0x8(r11)
	  bne+      .loc_0x40
	  rlwinm.   r0,r5,0,29,29
	  beq-      .loc_0x8C
	  lwzu      r3, -0x4(r10)
	  srw       r0, r4, r9
	  slw       r3, r3, r8
	  or        r0, r3, r0
	  stwu      r0, -0x4(r11)

	.loc_0x8C:
	  rlwinm.   r5,r5,0,30,31
	  beqlr-
	  add       r10, r10, r7

	.loc_0x98:
	  lbzu      r0, -0x1(r10)
	  subic.    r5, r5, 0x1
	  stbu      r0, -0x1(r11)
	  bne+      .loc_0x98
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C7204
 * Size:	0000C0
 */
void __copy_longs_unaligned(void)
{
	/*
	.loc_0x0:
	  neg       r0, r3
	  subi      r8, r4, 0x1
	  rlwinm.   r6,r0,0,30,31
	  subi      r3, r3, 0x1
	  beq-      .loc_0x28
	  sub       r5, r5, r6

	.loc_0x18:
	  lbzu      r0, 0x1(r8)
	  subic.    r6, r6, 0x1
	  stbu      r0, 0x1(r3)
	  bne+      .loc_0x18

	.loc_0x28:
	  addi      r0, r8, 0x1
	  subi      r6, r3, 0x3
	  rlwinm    r9,r0,0,30,31
	  rlwinm    r7,r5,29,3,31
	  sub       r8, r8, r9
	  rlwinm    r10,r0,3,27,28
	  lwzu      r4, 0x1(r8)
	  subfic    r11, r10, 0x20

	.loc_0x48:
	  lwz       r3, 0x4(r8)
	  slw       r4, r4, r10
	  subic.    r7, r7, 0x1
	  srw       r0, r3, r11
	  slw       r3, r3, r10
	  or        r0, r4, r0
	  stw       r0, 0x4(r6)
	  lwzu      r4, 0x8(r8)
	  srw       r0, r4, r11
	  or        r0, r3, r0
	  stwu      r0, 0x8(r6)
	  bne+      .loc_0x48
	  rlwinm.   r0,r5,0,29,29
	  beq-      .loc_0x94
	  lwzu      r0, 0x4(r8)
	  slw       r3, r4, r10
	  srw       r0, r0, r11
	  or        r0, r3, r0
	  stwu      r0, 0x4(r6)

	.loc_0x94:
	  rlwinm.   r5,r5,0,30,31
	  addi      r4, r8, 0x3
	  addi      r3, r6, 0x3
	  beqlr-
	  subfic    r0, r9, 0x4
	  sub       r4, r4, r0

	.loc_0xAC:
	  lbzu      r0, 0x1(r4)
	  subic.    r5, r5, 0x1
	  stbu      r0, 0x1(r3)
	  bne+      .loc_0xAC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C72C4
 * Size:	0000A8
 */
void __copy_longs_rev_aligned(void)
{
	/*
	.loc_0x0:
	  add       r7, r3, r5
	  add       r6, r4, r5
	  rlwinm.   r3,r7,0,30,31
	  beq-      .loc_0x24
	  sub       r5, r5, r3

	.loc_0x14:
	  lbzu      r0, -0x1(r6)
	  subic.    r3, r3, 0x1
	  stbu      r0, -0x1(r7)
	  bne+      .loc_0x14

	.loc_0x24:
	  rlwinm.   r4,r5,27,5,31
	  beq-      .loc_0x74

	.loc_0x2C:
	  lwz       r3, -0x4(r6)
	  subic.    r4, r4, 0x1
	  lwz       r0, -0x8(r6)
	  stw       r3, -0x4(r7)
	  lwz       r3, -0xC(r6)
	  stw       r0, -0x8(r7)
	  lwz       r0, -0x10(r6)
	  stw       r3, -0xC(r7)
	  lwz       r3, -0x14(r6)
	  stw       r0, -0x10(r7)
	  lwz       r0, -0x18(r6)
	  stw       r3, -0x14(r7)
	  lwz       r3, -0x1C(r6)
	  stw       r0, -0x18(r7)
	  lwzu      r0, -0x20(r6)
	  stw       r3, -0x1C(r7)
	  stwu      r0, -0x20(r7)
	  bne+      .loc_0x2C

	.loc_0x74:
	  rlwinm.   r3,r5,30,29,31
	  beq-      .loc_0x8C

	.loc_0x7C:
	  lwzu      r0, -0x4(r6)
	  subic.    r3, r3, 0x1
	  stwu      r0, -0x4(r7)
	  bne+      .loc_0x7C

	.loc_0x8C:
	  rlwinm.   r5,r5,0,30,31
	  beqlr-

	.loc_0x94:
	  lbzu      r0, -0x1(r6)
	  subic.    r5, r5, 0x1
	  stbu      r0, -0x1(r7)
	  bne+      .loc_0x94
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C736C
 * Size:	0000BC
 */
void __copy_longs_aligned(void)
{
	/*
	.loc_0x0:
	  neg       r0, r3
	  subi      r4, r4, 0x1
	  rlwinm.   r6,r0,0,30,31
	  subi      r3, r3, 0x1
	  beq-      .loc_0x28
	  sub       r5, r5, r6

	.loc_0x18:
	  lbzu      r0, 0x1(r4)
	  subic.    r6, r6, 0x1
	  stbu      r0, 0x1(r3)
	  bne+      .loc_0x18

	.loc_0x28:
	  rlwinm.   r6,r5,27,5,31
	  subi      r7, r4, 0x3
	  subi      r4, r3, 0x3
	  beq-      .loc_0x80

	.loc_0x38:
	  lwz       r3, 0x4(r7)
	  subic.    r6, r6, 0x1
	  lwz       r0, 0x8(r7)
	  stw       r3, 0x4(r4)
	  lwz       r3, 0xC(r7)
	  stw       r0, 0x8(r4)
	  lwz       r0, 0x10(r7)
	  stw       r3, 0xC(r4)
	  lwz       r3, 0x14(r7)
	  stw       r0, 0x10(r4)
	  lwz       r0, 0x18(r7)
	  stw       r3, 0x14(r4)
	  lwz       r3, 0x1C(r7)
	  stw       r0, 0x18(r4)
	  lwzu      r0, 0x20(r7)
	  stw       r3, 0x1C(r4)
	  stwu      r0, 0x20(r4)
	  bne+      .loc_0x38

	.loc_0x80:
	  rlwinm.   r3,r5,30,29,31
	  beq-      .loc_0x98

	.loc_0x88:
	  lwzu      r0, 0x4(r7)
	  subic.    r3, r3, 0x1
	  stwu      r0, 0x4(r4)
	  bne+      .loc_0x88

	.loc_0x98:
	  rlwinm.   r5,r5,0,30,31
	  addi      r6, r7, 0x3
	  addi      r3, r4, 0x3
	  beqlr-

	.loc_0xA8:
	  lbzu      r0, 0x1(r6)
	  subic.    r5, r5, 0x1
	  stbu      r0, 0x1(r3)
	  bne+      .loc_0xA8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001FC
 */
void __move_mem(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void __copy_mem(void)
{
	// UNUSED FUNCTION
}
