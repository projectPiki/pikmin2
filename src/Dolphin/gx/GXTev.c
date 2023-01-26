

/*
 * --INFO--
 * Address:	800E847C
 * Size:	00008C
 */
void GXSetTevOp(void)
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0
	  lis       r5, 0x804B
	  subi      r0, r5, 0x7888
	  bne-      .loc_0x20
	  rlwinm    r4,r4,2,0,29
	  add       r5, r0, r4
	  addi      r9, r5, 0x28
	  b         .loc_0x34

	.loc_0x20:
	  rlwinm    r4,r4,2,0,29
	  add       r5, r0, r4
	  add       r9, r0, r4
	  addi      r5, r5, 0x14
	  addi      r9, r9, 0x3C

	.loc_0x34:
	  lwz       r7, -0x6D70(r2)
	  rlwinm    r3,r3,2,0,29
	  lwz       r0, 0x0(r5)
	  li        r5, 0x61
	  add       r6, r7, r3
	  lwz       r3, 0x130(r6)
	  lis       r4, 0xCC01
	  stb       r5, -0x8000(r4)
	  rlwinm    r3,r3,0,0,7
	  rlwimi    r3,r0,0,8,31
	  stw       r3, -0x8000(r4)
	  li        r0, 0
	  stw       r3, 0x130(r6)
	  lwz       r8, 0x170(r6)
	  lwz       r3, 0x0(r9)
	  rlwinm    r8,r8,0,28,7
	  stb       r5, -0x8000(r4)
	  rlwimi    r8,r3,0,8,27
	  stw       r8, -0x8000(r4)
	  stw       r8, 0x170(r6)
	  sth       r0, 0x2(r7)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E8508
 * Size:	000044
 */
void GXSetTevColorIn(void)
{
	/*
	.loc_0x0:
	  lwz       r9, -0x6D70(r2)
	  rlwinm    r3,r3,2,0,29
	  li        r0, 0x61
	  add       r8, r9, r3
	  lwz       r10, 0x130(r8)
	  lis       r3, 0xCC01
	  rlwimi    r10,r4,12,16,19
	  stb       r0, -0x8000(r3)
	  addi      r4, r10, 0
	  rlwimi    r4,r5,8,20,23
	  rlwimi    r4,r6,4,24,27
	  rlwimi    r4,r7,0,28,31
	  stw       r4, -0x8000(r3)
	  li        r0, 0
	  stw       r4, 0x130(r8)
	  sth       r0, 0x2(r9)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E854C
 * Size:	000044
 */
void GXSetTevAlphaIn(void)
{
	/*
	.loc_0x0:
	  lwz       r9, -0x6D70(r2)
	  rlwinm    r3,r3,2,0,29
	  li        r0, 0x61
	  add       r8, r9, r3
	  lwz       r10, 0x170(r8)
	  lis       r3, 0xCC01
	  rlwimi    r10,r4,13,16,18
	  stb       r0, -0x8000(r3)
	  addi      r4, r10, 0
	  rlwimi    r4,r5,10,19,21
	  rlwimi    r4,r6,7,22,24
	  rlwimi    r4,r7,4,25,27
	  stw       r4, -0x8000(r3)
	  li        r0, 0
	  stw       r4, 0x170(r8)
	  sth       r0, 0x2(r9)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E8590
 * Size:	000068
 */
void GXSetTevColorOp(void)
{
	/*
	.loc_0x0:
	  lwz       r0, -0x6D70(r2)
	  rlwinm    r9,r3,2,0,29
	  cmpwi     r4, 0x1
	  add       r3, r0, r9
	  lwz       r3, 0x130(r3)
	  rlwimi    r3,r4,18,13,13
	  addi      r10, r3, 0
	  bgt-      .loc_0x2C
	  rlwimi    r10,r6,20,10,11
	  rlwimi    r10,r5,16,14,15
	  b         .loc_0x38

	.loc_0x2C:
	  li        r0, 0x3
	  rlwimi    r10,r4,19,10,11
	  rlwimi    r10,r0,16,14,15

	.loc_0x38:
	  li        r0, 0x61
	  lwz       r4, -0x6D70(r2)
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  rlwimi    r10,r7,19,12,12
	  rlwimi    r10,r8,22,8,9
	  stw       r10, -0x8000(r5)
	  add       r3, r4, r9
	  li        r0, 0
	  stw       r10, 0x130(r3)
	  sth       r0, 0x2(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E85F8
 * Size:	000068
 */
void GXSetTevAlphaOp(void)
{
	/*
	.loc_0x0:
	  lwz       r0, -0x6D70(r2)
	  rlwinm    r9,r3,2,0,29
	  cmpwi     r4, 0x1
	  add       r3, r0, r9
	  lwz       r3, 0x170(r3)
	  rlwimi    r3,r4,18,13,13
	  addi      r10, r3, 0
	  bgt-      .loc_0x2C
	  rlwimi    r10,r6,20,10,11
	  rlwimi    r10,r5,16,14,15
	  b         .loc_0x38

	.loc_0x2C:
	  li        r0, 0x3
	  rlwimi    r10,r4,19,10,11
	  rlwimi    r10,r0,16,14,15

	.loc_0x38:
	  li        r0, 0x61
	  lwz       r4, -0x6D70(r2)
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  rlwimi    r10,r7,19,12,12
	  rlwimi    r10,r8,22,8,9
	  stw       r10, -0x8000(r5)
	  add       r3, r4, r9
	  li        r0, 0
	  stw       r10, 0x170(r3)
	  sth       r0, 0x2(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E8660
 * Size:	00007C
 */
void GXSetTevColor(void)
{
	/*
	.loc_0x0:
	  lbz       r5, 0x0(r4)
	  rlwinm    r7,r3,1,0,30
	  lbz       r0, 0x3(r4)
	  li        r3, 0
	  rlwimi    r3,r5,0,21,31
	  addi      r8, r3, 0
	  lbz       r6, 0x2(r4)
	  rlwimi    r8,r0,12,9,19
	  lbz       r0, 0x1(r4)
	  li        r9, 0
	  lwz       r3, -0x6D70(r2)
	  rlwimi    r9,r6,0,21,31
	  addi      r6, r9, 0
	  rlwimi    r6,r0,12,9,19
	  addi      r0, r7, 0xE0
	  rlwimi    r8,r0,24,0,7
	  addi      r0, r7, 0xE1
	  rlwimi    r6,r0,24,0,7
	  li        r5, 0x61
	  lis       r4, 0xCC01
	  stb       r5, -0x8000(r4)
	  li        r0, 0
	  stw       r8, -0x8000(r4)
	  stb       r5, -0x8000(r4)
	  stw       r6, -0x8000(r4)
	  stb       r5, -0x8000(r4)
	  stw       r6, -0x8000(r4)
	  stb       r5, -0x8000(r4)
	  stw       r6, -0x8000(r4)
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E86DC
 * Size:	00007C
 */
void GXSetTevColorS10(void)
{
	/*
	.loc_0x0:
	  lha       r0, 0x0(r4)
	  rlwinm    r8,r3,1,0,30
	  li        r5, 0
	  lha       r3, 0x6(r4)
	  rlwimi    r5,r0,0,21,31
	  addi      r9, r5, 0
	  lha       r6, 0x4(r4)
	  lha       r0, 0x2(r4)
	  li        r5, 0x61
	  lis       r4, 0xCC01
	  rlwimi    r9,r3,12,9,19
	  stb       r5, -0x8000(r4)
	  addi      r7, r8, 0xE0
	  lwz       r3, -0x6D70(r2)
	  rlwimi    r9,r7,24,0,7
	  stw       r9, -0x8000(r4)
	  li        r7, 0
	  rlwimi    r7,r6,0,21,31
	  addi      r6, r7, 0
	  stb       r5, -0x8000(r4)
	  rlwimi    r6,r0,12,9,19
	  addi      r0, r8, 0xE1
	  rlwimi    r6,r0,24,0,7
	  stw       r6, -0x8000(r4)
	  li        r0, 0
	  stb       r5, -0x8000(r4)
	  stw       r6, -0x8000(r4)
	  stb       r5, -0x8000(r4)
	  stw       r6, -0x8000(r4)
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E8758
 * Size:	000074
 */
void GXSetTevKColor(void)
{
	/*
	.loc_0x0:
	  lbz       r5, 0x0(r4)
	  rlwinm    r6,r3,1,0,30
	  lbz       r0, 0x3(r4)
	  li        r3, 0
	  rlwimi    r3,r5,0,24,31
	  addi      r7, r3, 0
	  lbz       r5, 0x2(r4)
	  rlwimi    r7,r0,12,12,19
	  lbz       r0, 0x1(r4)
	  li        r4, 0x8
	  lwz       r3, -0x6D70(r2)
	  li        r8, 0
	  rlwimi    r8,r5,0,24,31
	  rlwimi    r8,r0,12,12,19
	  rlwimi    r7,r4,20,8,11
	  rlwimi    r8,r4,20,8,11
	  addi      r5, r6, 0xE0
	  rlwimi    r7,r5,24,0,7
	  addi      r5, r6, 0xE1
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  stb       r0, -0x8000(r4)
	  rlwimi    r8,r5,24,0,7
	  stw       r7, -0x8000(r4)
	  stb       r0, -0x8000(r4)
	  li        r0, 0
	  stw       r8, -0x8000(r4)
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E87CC
 * Size:	00005C
 */
void GXSetTevKColorSel(void)
{
	/*
	.loc_0x0:
	  srawi     r5, r3, 0x1
	  lwz       r6, -0x6D70(r2)
	  rlwinm.   r0,r3,0,31,31
	  rlwinm    r3,r5,2,0,29
	  addi      r7, r3, 0x1B0
	  add       r7, r6, r7
	  beq-      .loc_0x2C
	  lwz       r0, 0x0(r7)
	  rlwimi    r0,r4,14,13,17
	  stw       r0, 0x0(r7)
	  b         .loc_0x38

	.loc_0x2C:
	  lwz       r0, 0x0(r7)
	  rlwimi    r0,r4,4,23,27
	  stw       r0, 0x0(r7)

	.loc_0x38:
	  li        r0, 0x61
	  lwz       r3, -0x6D70(r2)
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r0, 0
	  lwz       r4, 0x0(r7)
	  stw       r4, -0x8000(r5)
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E8828
 * Size:	00005C
 */
void GXSetTevKAlphaSel(void)
{
	/*
	.loc_0x0:
	  srawi     r5, r3, 0x1
	  lwz       r6, -0x6D70(r2)
	  rlwinm.   r0,r3,0,31,31
	  rlwinm    r3,r5,2,0,29
	  addi      r7, r3, 0x1B0
	  add       r7, r6, r7
	  beq-      .loc_0x2C
	  lwz       r0, 0x0(r7)
	  rlwimi    r0,r4,19,8,12
	  stw       r0, 0x0(r7)
	  b         .loc_0x38

	.loc_0x2C:
	  lwz       r0, 0x0(r7)
	  rlwimi    r0,r4,9,18,22
	  stw       r0, 0x0(r7)

	.loc_0x38:
	  li        r0, 0x61
	  lwz       r3, -0x6D70(r2)
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r0, 0
	  lwz       r4, 0x0(r7)
	  stw       r4, -0x8000(r5)
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E8884
 * Size:	000048
 */
void GXSetTevSwapMode(void)
{
	/*
	.loc_0x0:
	  rlwinm    r3,r3,2,0,29
	  lwz       r7, -0x6D70(r2)
	  addi      r8, r3, 0x170
	  add       r8, r7, r8
	  lwz       r0, 0x0(r8)
	  rlwimi    r0,r4,0,30,31
	  li        r3, 0x61
	  stw       r0, 0x0(r8)
	  lis       r4, 0xCC01
	  li        r0, 0
	  lwz       r6, 0x0(r8)
	  rlwimi    r6,r5,2,28,29
	  stw       r6, 0x0(r8)
	  stb       r3, -0x8000(r4)
	  lwz       r3, 0x0(r8)
	  stw       r3, -0x8000(r4)
	  sth       r0, 0x2(r7)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E88CC
 * Size:	000080
 */
void GXSetTevSwapModeTable(void)
{
	/*
	.loc_0x0:
	  rlwinm    r9,r3,1,0,30
	  lwz       r8, -0x6D70(r2)
	  rlwinm    r3,r3,3,0,28
	  addi      r10, r3, 0x1B0
	  add       r10, r8, r10
	  lwz       r3, 0x0(r10)
	  rlwimi    r3,r4,0,30,31
	  addi      r0, r9, 0x1
	  stw       r3, 0x0(r10)
	  rlwinm    r3,r0,2,0,29
	  addi      r9, r3, 0x1B0
	  lwz       r0, 0x0(r10)
	  rlwimi    r0,r5,2,28,29
	  li        r5, 0x61
	  stw       r0, 0x0(r10)
	  lis       r4, 0xCC01
	  add       r9, r8, r9
	  stb       r5, -0x8000(r4)
	  li        r0, 0
	  lwz       r3, 0x0(r10)
	  stw       r3, -0x8000(r4)
	  lwz       r3, 0x0(r9)
	  rlwimi    r3,r6,0,30,31
	  stw       r3, 0x0(r9)
	  lwz       r3, 0x0(r9)
	  rlwimi    r3,r7,2,28,29
	  stw       r3, 0x0(r9)
	  stb       r5, -0x8000(r4)
	  lwz       r3, 0x0(r9)
	  stw       r3, -0x8000(r4)
	  sth       r0, 0x2(r8)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void GXSetTevClampMode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E894C
 * Size:	000044
 */
void GXSetAlphaCompare(void)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,0,24,31
	  lwz       r4, -0x6D70(r2)
	  lis       r8, 0xF300
	  rlwimi    r8,r0,0,24,31
	  rlwinm    r0,r7,0,24,31
	  addi      r7, r8, 0
	  rlwimi    r7,r0,8,16,23
	  rlwimi    r7,r3,16,13,15
	  rlwimi    r7,r6,19,10,12
	  li        r0, 0x61
	  lis       r3, 0xCC01
	  stb       r0, -0x8000(r3)
	  rlwimi    r7,r5,22,8,9
	  li        r0, 0
	  stw       r7, -0x8000(r3)
	  sth       r0, 0x2(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E8990
 * Size:	00008C
 */
void GXSetZTexture(void)
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0x13
	  li        r0, 0xF4
	  li        r6, 0
	  rlwimi    r6,r5,0,8,31
	  rlwimi    r6,r0,24,0,7
	  li        r7, 0
	  beq-      .loc_0x40
	  bge-      .loc_0x2C
	  cmpwi     r4, 0x11
	  beq-      .loc_0x38
	  b         .loc_0x50

	.loc_0x2C:
	  cmpwi     r4, 0x16
	  beq-      .loc_0x48
	  b         .loc_0x50

	.loc_0x38:
	  li        r8, 0
	  b         .loc_0x54

	.loc_0x40:
	  li        r8, 0x1
	  b         .loc_0x54

	.loc_0x48:
	  li        r8, 0x2
	  b         .loc_0x54

	.loc_0x50:
	  li        r8, 0x2

	.loc_0x54:
	  li        r0, 0x61
	  lwz       r4, -0x6D70(r2)
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  rlwimi    r7,r8,0,30,31
	  rlwimi    r7,r3,2,28,29
	  stw       r6, -0x8000(r5)
	  li        r3, 0xF5
	  rlwimi    r7,r3,24,0,7
	  stb       r0, -0x8000(r5)
	  li        r0, 0
	  stw       r7, -0x8000(r5)
	  sth       r0, 0x2(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E8A1C
 * Size:	00019C
 */
void GXSetTevOrder(void)
{
	/*
	.loc_0x0:
	  srawi     r7, r3, 0x1
	  lwz       r9, -0x6D70(r2)
	  rlwinm    r10,r5,0,24,22
	  addze     r7, r7
	  rlwinm    r0,r3,2,0,29
	  add       r8, r9, r0
	  rlwinm    r7,r7,2,0,29
	  stw       r5, 0x554(r8)
	  addi      r7, r7, 0x100
	  cmplwi    r10, 0x8
	  addi      r0, r10, 0
	  add       r7, r9, r7
	  blt-      .loc_0x3C
	  li        r9, 0
	  b         .loc_0x40

	.loc_0x3C:
	  mr        r9, r0

	.loc_0x40:
	  cmpwi     r4, 0x8
	  blt-      .loc_0x6C
	  lwz       r4, -0x6D70(r2)
	  li        r0, 0x1
	  slw       r0, r0, r3
	  lwz       r8, 0x598(r4)
	  addi      r10, r4, 0x598
	  li        r4, 0
	  andc      r0, r8, r0
	  stw       r0, 0x0(r10)
	  b         .loc_0x88

	.loc_0x6C:
	  lwz       r8, -0x6D70(r2)
	  li        r0, 0x1
	  slw       r0, r0, r3
	  addi      r10, r8, 0x598
	  lwz       r8, 0x598(r8)
	  or        r0, r8, r0
	  stw       r0, 0x0(r10)

	.loc_0x88:
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x100
	  lwz       r0, 0x0(r7)
	  rlwimi    r0,r9,12,17,19
	  cmpwi     r6, 0xFF
	  stw       r0, 0x0(r7)
	  lwz       r0, 0x0(r7)
	  rlwimi    r0,r4,15,14,16
	  stw       r0, 0x0(r7)
	  bne-      .loc_0xB8
	  li        r3, 0x7
	  b         .loc_0xCC

	.loc_0xB8:
	  lis       r3, 0x804B
	  rlwinm    r4,r6,2,0,29
	  subi      r0, r3, 0x7838
	  add       r3, r0, r4
	  lwz       r3, 0x0(r3)

	.loc_0xCC:
	  lwz       r0, 0x0(r7)
	  rlwimi    r0,r3,19,10,12
	  cmpwi     r5, 0xFF
	  stw       r0, 0x0(r7)
	  li        r3, 0
	  beq-      .loc_0xF0
	  rlwinm.   r0,r5,0,23,23
	  bne-      .loc_0xF0
	  li        r3, 0x1

	.loc_0xF0:
	  lwz       r0, 0x0(r7)
	  rlwimi    r0,r3,18,13,13
	  stw       r0, 0x0(r7)
	  b         .loc_0x16C

	.loc_0x100:
	  lwz       r0, 0x0(r7)
	  rlwimi    r0,r9,0,29,31
	  cmpwi     r6, 0xFF
	  stw       r0, 0x0(r7)
	  lwz       r0, 0x0(r7)
	  rlwimi    r0,r4,3,26,28
	  stw       r0, 0x0(r7)
	  bne-      .loc_0x128
	  li        r3, 0x7
	  b         .loc_0x13C

	.loc_0x128:
	  lis       r3, 0x804B
	  rlwinm    r4,r6,2,0,29
	  subi      r0, r3, 0x7838
	  add       r3, r0, r4
	  lwz       r3, 0x0(r3)

	.loc_0x13C:
	  lwz       r0, 0x0(r7)
	  rlwimi    r0,r3,7,22,24
	  cmpwi     r5, 0xFF
	  stw       r0, 0x0(r7)
	  li        r3, 0
	  beq-      .loc_0x160
	  rlwinm.   r0,r5,0,23,23
	  bne-      .loc_0x160
	  li        r3, 0x1

	.loc_0x160:
	  lwz       r0, 0x0(r7)
	  rlwimi    r0,r3,6,25,25
	  stw       r0, 0x0(r7)

	.loc_0x16C:
	  li        r0, 0x61
	  lwz       r3, -0x6D70(r2)
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r0, 0
	  lwz       r4, 0x0(r7)
	  stw       r4, -0x8000(r5)
	  sth       r0, 0x2(r3)
	  lwz       r0, 0x5AC(r3)
	  ori       r0, r0, 0x1
	  stw       r0, 0x5AC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E8BB8
 * Size:	000028
 */
void GXSetNumTevStages(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6D70(r2)
	  rlwinm    r3,r3,0,24,31
	  subi      r0, r3, 0x1
	  lwz       r3, 0x204(r4)
	  rlwimi    r3,r0,10,18,21
	  stw       r3, 0x204(r4)
	  lwz       r0, 0x5AC(r4)
	  ori       r0, r0, 0x4
	  stw       r0, 0x5AC(r4)
	  blr
	*/
}
