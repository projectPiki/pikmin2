

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void __GXXfVtxSpecs(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E4284
 * Size:	00026C
 */
void GXSetVtxDesc(void)
{
	/*
	.loc_0x0:
	  cmplwi    r3, 0x19
	  bgt-      .loc_0x214
	  lis       r5, 0x804B
	  subi      r5, r5, 0x7D60
	  rlwinm    r0,r3,2,0,29
	  lwzx      r0, r5, r0
	  mtctr     r0
	  bctr
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x14(r3)
	  rlwimi    r0,r4,0,31,31
	  stw       r0, 0x14(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x14(r3)
	  rlwimi    r0,r4,1,30,30
	  stw       r0, 0x14(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x14(r3)
	  rlwimi    r0,r4,2,29,29
	  stw       r0, 0x14(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x14(r3)
	  rlwimi    r0,r4,3,28,28
	  stw       r0, 0x14(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x14(r3)
	  rlwimi    r0,r4,4,27,27
	  stw       r0, 0x14(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x14(r3)
	  rlwimi    r0,r4,5,26,26
	  stw       r0, 0x14(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x14(r3)
	  rlwimi    r0,r4,6,25,25
	  stw       r0, 0x14(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x14(r3)
	  rlwimi    r0,r4,7,24,24
	  stw       r0, 0x14(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x14(r3)
	  rlwimi    r0,r4,8,23,23
	  stw       r0, 0x14(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x14(r3)
	  rlwimi    r0,r4,9,21,22
	  stw       r0, 0x14(r3)
	  b         .loc_0x214
	  cmpwi     r4, 0
	  beq-      .loc_0x10C
	  lwz       r3, -0x6D70(r2)
	  li        r5, 0x1
	  li        r0, 0
	  stb       r5, 0x4D4(r3)
	  stb       r0, 0x4D5(r3)
	  stw       r4, 0x4D0(r3)
	  b         .loc_0x214

	.loc_0x10C:
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0
	  stb       r0, 0x4D4(r3)
	  b         .loc_0x214
	  cmpwi     r4, 0
	  beq-      .loc_0x140
	  lwz       r3, -0x6D70(r2)
	  li        r5, 0x1
	  li        r0, 0
	  stb       r5, 0x4D5(r3)
	  stb       r0, 0x4D4(r3)
	  stw       r4, 0x4D0(r3)
	  b         .loc_0x214

	.loc_0x140:
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0
	  stb       r0, 0x4D5(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x14(r3)
	  rlwimi    r0,r4,13,17,18
	  stw       r0, 0x14(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x14(r3)
	  rlwimi    r0,r4,15,15,16
	  stw       r0, 0x14(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x18(r3)
	  rlwimi    r0,r4,0,30,31
	  stw       r0, 0x18(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x18(r3)
	  rlwimi    r0,r4,2,28,29
	  stw       r0, 0x18(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x18(r3)
	  rlwimi    r0,r4,4,26,27
	  stw       r0, 0x18(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x18(r3)
	  rlwimi    r0,r4,6,24,25
	  stw       r0, 0x18(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x18(r3)
	  rlwimi    r0,r4,8,22,23
	  stw       r0, 0x18(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x18(r3)
	  rlwimi    r0,r4,10,20,21
	  stw       r0, 0x18(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x18(r3)
	  rlwimi    r0,r4,12,18,19
	  stw       r0, 0x18(r3)
	  b         .loc_0x214
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x18(r3)
	  rlwimi    r0,r4,14,16,17
	  stw       r0, 0x18(r3)

	.loc_0x214:
	  lwz       r4, -0x6D70(r2)
	  lbz       r0, 0x4D4(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x230
	  lbz       r0, 0x4D5(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x248

	.loc_0x230:
	  lwz       r0, 0x4D0(r4)
	  lwz       r4, 0x14(r4)
	  lwz       r3, -0x6D70(r2)
	  rlwimi    r4,r0,11,19,20
	  stw       r4, 0x14(r3)
	  b         .loc_0x258

	.loc_0x248:
	  lwz       r3, 0x14(r4)
	  li        r0, 0
	  rlwimi    r3,r0,11,19,20
	  stw       r3, 0x14(r4)

	.loc_0x258:
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x5AC(r3)
	  ori       r0, r0, 0x8
	  stw       r0, 0x5AC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000288
 */
void GXSetVtxDescv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E44F0
 * Size:	0000BC
 */
void __GXSetVCD(void)
{
	/*
	.loc_0x0:
	  li        r6, 0x8
	  lwz       r4, -0x6D70(r2)
	  lis       r5, 0xCC01
	  stb       r6, -0x8000(r5)
	  li        r3, 0x50
	  li        r0, 0x60
	  stb       r3, -0x8000(r5)
	  lwz       r3, 0x14(r4)
	  stw       r3, -0x8000(r5)
	  stb       r6, -0x8000(r5)
	  stb       r0, -0x8000(r5)
	  lwz       r0, 0x18(r4)
	  stw       r0, -0x8000(r5)
	  lbz       r0, 0x4D5(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  li        r7, 0x2
	  b         .loc_0x60

	.loc_0x48:
	  lbz       r0, 0x4D4(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x5C
	  li        r7, 0x1
	  b         .loc_0x60

	.loc_0x5C:
	  li        r7, 0

	.loc_0x60:
	  lwz       r5, -0x6D70(r2)
	  li        r0, 0x10
	  lwz       r6, 0x14(r4)
	  lis       r4, 0xCC01
	  lwz       r3, 0x18(r5)
	  rlwinm    r6,r6,19,28,31
	  cntlzw    r6, r6
	  stb       r0, -0x8000(r4)
	  rlwinm    r3,r3,0,16,31
	  subfic    r6, r6, 0x21
	  cntlzw    r0, r3
	  subfic    r3, r0, 0x21
	  li        r0, 0x1008
	  stw       r0, -0x8000(r4)
	  rlwinm    r6,r6,31,1,31
	  rlwinm    r0,r7,2,0,29
	  rlwinm    r3,r3,3,0,27
	  or        r0, r6, r0
	  or        r0, r3, r0
	  stw       r0, -0x8000(r4)
	  li        r0, 0x1
	  sth       r0, 0x2(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E45AC
 * Size:	000124
 */
void __GXCalculateVLim(void)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x6D70(r2)
	  lhz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  beqlr-
	  lwz       r9, 0x14(r3)
	  subi      r5, r13, 0x7D08
	  lwz       r8, 0x1C(r3)
	  rlwinm    r0,r9,0,31,31
	  lwz       r4, 0x18(r3)
	  rlwinm    r6,r9,31,31,31
	  add       r0, r0, r6
	  rlwinm    r6,r9,30,31,31
	  add       r0, r0, r6
	  rlwinm    r7,r9,29,31,31
	  rlwinm    r6,r9,23,30,31
	  lbzx      r5, r5, r6
	  rlwinm    r8,r8,23,31,31
	  add       r0, r0, r7
	  rlwinm    r6,r9,28,31,31
	  add       r0, r0, r6
	  rlwinm    r6,r9,27,31,31
	  add       r0, r0, r6
	  rlwinm    r6,r9,26,31,31
	  add       r0, r0, r6
	  rlwinm    r6,r9,25,31,31
	  add       r0, r0, r6
	  rlwinm    r6,r9,24,31,31
	  add       r0, r0, r6
	  cmpwi     r8, 0x1
	  add       r0, r0, r5
	  bne-      .loc_0x84
	  li        r8, 0x3
	  b         .loc_0x88

	.loc_0x84:
	  li        r8, 0x1

	.loc_0x88:
	  rlwinm    r6,r9,21,30,31
	  subi      r5, r13, 0x7D08
	  lbzx      r6, r5, r6
	  rlwinm    r5,r9,19,30,31
	  subi      r7, r13, 0x7D10
	  mullw     r8, r6, r8
	  lbzx      r6, r7, r5
	  add       r0, r0, r8
	  rlwinm    r5,r9,17,30,31
	  lbzx      r9, r7, r5
	  add       r0, r0, r6
	  rlwinm    r6,r4,0,30,31
	  subi      r8, r13, 0x7D0C
	  rlwinm    r5,r4,30,30,31
	  lbzx      r7, r8, r6
	  add       r0, r0, r9
	  lbzx      r6, r8, r5
	  add       r0, r0, r7
	  rlwinm    r5,r4,28,30,31
	  lbzx      r7, r8, r5
	  add       r0, r0, r6
	  rlwinm    r5,r4,26,30,31
	  lbzx      r6, r8, r5
	  add       r0, r0, r7
	  rlwinm    r5,r4,24,30,31
	  lbzx      r7, r8, r5
	  add       r0, r0, r6
	  rlwinm    r5,r4,22,30,31
	  lbzx      r6, r8, r5
	  rlwinm    r5,r4,20,30,31
	  add       r0, r0, r7
	  lbzx      r5, r8, r5
	  rlwinm    r4,r4,18,30,31
	  add       r0, r0, r6
	  lbzx      r4, r8, r4
	  add       r0, r0, r5
	  add       r0, r0, r4
	  sth       r0, 0x6(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B4
 */
void GXGetVtxDesc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void GXGetVtxDescv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E46D0
 * Size:	000038
 */
void GXClearVtxDesc(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6D70(r2)
	  li        r5, 0
	  li        r0, 0x1
	  stw       r5, 0x14(r4)
	  lwz       r3, 0x14(r4)
	  rlwimi    r3,r0,9,21,22
	  stw       r3, 0x14(r4)
	  stw       r5, 0x18(r4)
	  stb       r5, 0x4D4(r4)
	  stb       r5, 0x4D5(r4)
	  lwz       r0, 0x5AC(r4)
	  ori       r0, r0, 0x8
	  stw       r0, 0x5AC(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E4708
 * Size:	00025C
 */
void GXSetVtxAttrFmt(void)
{
	/*
	.loc_0x0:
	  subi      r0, r4, 0x9
	  lwz       r8, -0x6D70(r2)
	  rlwinm    r4,r3,2,0,29
	  add       r8, r8, r4
	  cmplwi    r0, 0x10
	  addi      r4, r8, 0x1C
	  addi      r9, r8, 0x3C
	  addi      r10, r8, 0x5C
	  bgt-      .loc_0x22C
	  lis       r8, 0x804B
	  subi      r8, r8, 0x7CF8
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r8, r0
	  mtctr     r0
	  bctr
	  lwz       r8, 0x0(r4)
	  rlwimi    r8,r5,0,31,31
	  stw       r8, 0x0(r4)
	  lwz       r5, 0x0(r4)
	  rlwimi    r5,r6,1,28,30
	  stw       r5, 0x0(r4)
	  lwz       r5, 0x0(r4)
	  rlwimi    r5,r7,4,23,27
	  stw       r5, 0x0(r4)
	  b         .loc_0x22C
	  lwz       r0, 0x0(r4)
	  rlwimi    r0,r6,10,19,21
	  cmpwi     r5, 0x2
	  stw       r0, 0x0(r4)
	  bne-      .loc_0x98
	  lwz       r0, 0x0(r4)
	  li        r5, 0x1
	  rlwimi    r0,r5,9,22,22
	  stw       r0, 0x0(r4)
	  lwz       r0, 0x0(r4)
	  rlwimi    r0,r5,31,0,0
	  stw       r0, 0x0(r4)
	  b         .loc_0x22C

	.loc_0x98:
	  lwz       r6, 0x0(r4)
	  rlwimi    r6,r5,9,22,22
	  li        r0, 0
	  stw       r6, 0x0(r4)
	  lwz       r5, 0x0(r4)
	  rlwimi    r5,r0,31,0,0
	  stw       r5, 0x0(r4)
	  b         .loc_0x22C
	  lwz       r0, 0x0(r4)
	  rlwimi    r0,r5,13,18,18
	  stw       r0, 0x0(r4)
	  lwz       r0, 0x0(r4)
	  rlwimi    r0,r6,14,15,17
	  stw       r0, 0x0(r4)
	  b         .loc_0x22C
	  lwz       r0, 0x0(r4)
	  rlwimi    r0,r5,17,14,14
	  stw       r0, 0x0(r4)
	  lwz       r0, 0x0(r4)
	  rlwimi    r0,r6,18,11,13
	  stw       r0, 0x0(r4)
	  b         .loc_0x22C
	  lwz       r8, 0x0(r4)
	  rlwimi    r8,r5,21,10,10
	  stw       r8, 0x0(r4)
	  lwz       r5, 0x0(r4)
	  rlwimi    r5,r6,22,7,9
	  stw       r5, 0x0(r4)
	  lwz       r5, 0x0(r4)
	  rlwimi    r5,r7,25,2,6
	  stw       r5, 0x0(r4)
	  b         .loc_0x22C
	  lwz       r4, 0x0(r9)
	  rlwimi    r4,r5,0,31,31
	  stw       r4, 0x0(r9)
	  lwz       r4, 0x0(r9)
	  rlwimi    r4,r6,1,28,30
	  stw       r4, 0x0(r9)
	  lwz       r4, 0x0(r9)
	  rlwimi    r4,r7,4,23,27
	  stw       r4, 0x0(r9)
	  b         .loc_0x22C
	  lwz       r4, 0x0(r9)
	  rlwimi    r4,r5,9,22,22
	  stw       r4, 0x0(r9)
	  lwz       r4, 0x0(r9)
	  rlwimi    r4,r6,10,19,21
	  stw       r4, 0x0(r9)
	  lwz       r4, 0x0(r9)
	  rlwimi    r4,r7,13,14,18
	  stw       r4, 0x0(r9)
	  b         .loc_0x22C
	  lwz       r4, 0x0(r9)
	  rlwimi    r4,r5,18,13,13
	  stw       r4, 0x0(r9)
	  lwz       r4, 0x0(r9)
	  rlwimi    r4,r6,19,10,12
	  stw       r4, 0x0(r9)
	  lwz       r4, 0x0(r9)
	  rlwimi    r4,r7,22,5,9
	  stw       r4, 0x0(r9)
	  b         .loc_0x22C
	  lwz       r4, 0x0(r9)
	  rlwimi    r4,r5,27,4,4
	  stw       r4, 0x0(r9)
	  lwz       r4, 0x0(r9)
	  rlwimi    r4,r6,28,1,3
	  stw       r4, 0x0(r9)
	  lwz       r4, 0x0(r10)
	  rlwimi    r4,r7,0,27,31
	  stw       r4, 0x0(r10)
	  b         .loc_0x22C
	  lwz       r4, 0x0(r10)
	  rlwimi    r4,r5,5,26,26
	  stw       r4, 0x0(r10)
	  lwz       r4, 0x0(r10)
	  rlwimi    r4,r6,6,23,25
	  stw       r4, 0x0(r10)
	  lwz       r4, 0x0(r10)
	  rlwimi    r4,r7,9,18,22
	  stw       r4, 0x0(r10)
	  b         .loc_0x22C
	  lwz       r4, 0x0(r10)
	  rlwimi    r4,r5,14,17,17
	  stw       r4, 0x0(r10)
	  lwz       r4, 0x0(r10)
	  rlwimi    r4,r6,15,14,16
	  stw       r4, 0x0(r10)
	  lwz       r4, 0x0(r10)
	  rlwimi    r4,r7,18,9,13
	  stw       r4, 0x0(r10)
	  b         .loc_0x22C
	  lwz       r4, 0x0(r10)
	  rlwimi    r4,r5,23,8,8
	  stw       r4, 0x0(r10)
	  lwz       r4, 0x0(r10)
	  rlwimi    r4,r6,24,5,7
	  stw       r4, 0x0(r10)
	  lwz       r4, 0x0(r10)
	  rlwimi    r4,r7,27,0,4
	  stw       r4, 0x0(r10)

	.loc_0x22C:
	  lwz       r5, -0x6D70(r2)
	  rlwinm    r0,r3,0,24,31
	  li        r3, 0x1
	  lwz       r4, 0x5AC(r5)
	  slw       r0, r3, r0
	  rlwinm    r0,r0,0,24,31
	  ori       r3, r4, 0x10
	  stw       r3, 0x5AC(r5)
	  lbz       r3, 0x5AB(r5)
	  or        r0, r3, r0
	  stb       r0, 0x5AB(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E4964
 * Size:	000280
 */
void GXSetVtxAttrFmtv(void)
{
	/*
	.loc_0x0:
	  lwz       r6, -0x6D70(r2)
	  rlwinm    r0,r3,2,0,29
	  lis       r5, 0x804B
	  add       r6, r6, r0
	  addi      r7, r6, 0x1C
	  addi      r8, r6, 0x3C
	  addi      r9, r6, 0x5C
	  subi      r5, r5, 0x7CB4
	  b         .loc_0x244

	.loc_0x24:
	  lwz       r10, 0x0(r4)
	  lbz       r6, 0xC(r4)
	  subi      r10, r10, 0x9
	  lwz       r0, 0x8(r4)
	  cmplwi    r10, 0x10
	  lwz       r11, 0x4(r4)
	  bgt-      .loc_0x240
	  rlwinm    r10,r10,2,0,29
	  lwzx      r10, r5, r10
	  mtctr     r10
	  bctr
	  lwz       r10, 0x0(r7)
	  rlwimi    r10,r11,0,31,31
	  stw       r10, 0x0(r7)
	  lwz       r10, 0x0(r7)
	  rlwimi    r10,r0,1,28,30
	  stw       r10, 0x0(r7)
	  lwz       r0, 0x0(r7)
	  rlwimi    r0,r6,4,23,27
	  stw       r0, 0x0(r7)
	  b         .loc_0x240
	  lwz       r6, 0x0(r7)
	  rlwimi    r6,r0,10,19,21
	  cmpwi     r11, 0x2
	  stw       r6, 0x0(r7)
	  bne-      .loc_0xAC
	  lwz       r0, 0x0(r7)
	  li        r6, 0x1
	  rlwimi    r0,r6,9,22,22
	  stw       r0, 0x0(r7)
	  lwz       r0, 0x0(r7)
	  rlwimi    r0,r6,31,0,0
	  stw       r0, 0x0(r7)
	  b         .loc_0x240

	.loc_0xAC:
	  lwz       r6, 0x0(r7)
	  rlwimi    r6,r11,9,22,22
	  li        r0, 0
	  stw       r6, 0x0(r7)
	  lwz       r6, 0x0(r7)
	  rlwimi    r6,r0,31,0,0
	  stw       r6, 0x0(r7)
	  b         .loc_0x240
	  lwz       r6, 0x0(r7)
	  rlwimi    r6,r11,13,18,18
	  stw       r6, 0x0(r7)
	  lwz       r6, 0x0(r7)
	  rlwimi    r6,r0,14,15,17
	  stw       r6, 0x0(r7)
	  b         .loc_0x240
	  lwz       r6, 0x0(r7)
	  rlwimi    r6,r11,17,14,14
	  stw       r6, 0x0(r7)
	  lwz       r6, 0x0(r7)
	  rlwimi    r6,r0,18,11,13
	  stw       r6, 0x0(r7)
	  b         .loc_0x240
	  lwz       r10, 0x0(r7)
	  rlwimi    r10,r11,21,10,10
	  stw       r10, 0x0(r7)
	  lwz       r10, 0x0(r7)
	  rlwimi    r10,r0,22,7,9
	  stw       r10, 0x0(r7)
	  lwz       r0, 0x0(r7)
	  rlwimi    r0,r6,25,2,6
	  stw       r0, 0x0(r7)
	  b         .loc_0x240
	  lwz       r10, 0x0(r8)
	  rlwimi    r10,r11,0,31,31
	  stw       r10, 0x0(r8)
	  lwz       r10, 0x0(r8)
	  rlwimi    r10,r0,1,28,30
	  stw       r10, 0x0(r8)
	  lwz       r0, 0x0(r8)
	  rlwimi    r0,r6,4,23,27
	  stw       r0, 0x0(r8)
	  b         .loc_0x240
	  lwz       r10, 0x0(r8)
	  rlwimi    r10,r11,9,22,22
	  stw       r10, 0x0(r8)
	  lwz       r10, 0x0(r8)
	  rlwimi    r10,r0,10,19,21
	  stw       r10, 0x0(r8)
	  lwz       r0, 0x0(r8)
	  rlwimi    r0,r6,13,14,18
	  stw       r0, 0x0(r8)
	  b         .loc_0x240
	  lwz       r10, 0x0(r8)
	  rlwimi    r10,r11,18,13,13
	  stw       r10, 0x0(r8)
	  lwz       r10, 0x0(r8)
	  rlwimi    r10,r0,19,10,12
	  stw       r10, 0x0(r8)
	  lwz       r0, 0x0(r8)
	  rlwimi    r0,r6,22,5,9
	  stw       r0, 0x0(r8)
	  b         .loc_0x240
	  lwz       r10, 0x0(r8)
	  rlwimi    r10,r11,27,4,4
	  stw       r10, 0x0(r8)
	  lwz       r10, 0x0(r8)
	  rlwimi    r10,r0,28,1,3
	  stw       r10, 0x0(r8)
	  lwz       r0, 0x0(r9)
	  rlwimi    r0,r6,0,27,31
	  stw       r0, 0x0(r9)
	  b         .loc_0x240
	  lwz       r10, 0x0(r9)
	  rlwimi    r10,r11,5,26,26
	  stw       r10, 0x0(r9)
	  lwz       r10, 0x0(r9)
	  rlwimi    r10,r0,6,23,25
	  stw       r10, 0x0(r9)
	  lwz       r0, 0x0(r9)
	  rlwimi    r0,r6,9,18,22
	  stw       r0, 0x0(r9)
	  b         .loc_0x240
	  lwz       r10, 0x0(r9)
	  rlwimi    r10,r11,14,17,17
	  stw       r10, 0x0(r9)
	  lwz       r10, 0x0(r9)
	  rlwimi    r10,r0,15,14,16
	  stw       r10, 0x0(r9)
	  lwz       r0, 0x0(r9)
	  rlwimi    r0,r6,18,9,13
	  stw       r0, 0x0(r9)
	  b         .loc_0x240
	  lwz       r10, 0x0(r9)
	  rlwimi    r10,r11,23,8,8
	  stw       r10, 0x0(r9)
	  lwz       r10, 0x0(r9)
	  rlwimi    r10,r0,24,5,7
	  stw       r10, 0x0(r9)
	  lwz       r0, 0x0(r9)
	  rlwimi    r0,r6,27,0,4
	  stw       r0, 0x0(r9)

	.loc_0x240:
	  addi      r4, r4, 0x10

	.loc_0x244:
	  lwz       r0, 0x0(r4)
	  cmpwi     r0, 0xFF
	  bne+      .loc_0x24
	  lwz       r5, -0x6D70(r2)
	  rlwinm    r0,r3,0,24,31
	  li        r3, 0x1
	  lwz       r4, 0x5AC(r5)
	  slw       r0, r3, r0
	  rlwinm    r0,r0,0,24,31
	  ori       r3, r4, 0x10
	  stw       r3, 0x5AC(r5)
	  lbz       r3, 0x5AB(r5)
	  or        r0, r3, r0
	  stb       r0, 0x5AB(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E4BE4
 * Size:	00009C
 */
void __GXSetVAT(void)
{
	/*
	.loc_0x0:
	  lwz       r10, -0x6D70(r2)
	  li        r12, 0
	  li        r11, 0
	  lis       r7, 0xCC01
	  b         .loc_0x80

	.loc_0x14:
	  rlwinm    r9,r12,0,24,31
	  lbz       r3, 0x5AB(r10)
	  li        r0, 0x1
	  slw       r0, r0, r9
	  and.      r0, r3, r0
	  beq-      .loc_0x78
	  li        r8, 0x8
	  stb       r8, -0x8000(r7)
	  ori       r3, r9, 0x70
	  addi      r0, r11, 0x1C
	  stb       r3, -0x8000(r7)
	  ori       r5, r9, 0x80
	  addi      r4, r11, 0x3C
	  lwzx      r6, r10, r0
	  ori       r3, r9, 0x90
	  addi      r0, r11, 0x5C
	  stw       r6, -0x8000(r7)
	  stb       r8, -0x8000(r7)
	  stb       r5, -0x8000(r7)
	  lwzx      r4, r10, r4
	  stw       r4, -0x8000(r7)
	  stb       r8, -0x8000(r7)
	  stb       r3, -0x8000(r7)
	  lwzx      r0, r10, r0
	  stw       r0, -0x8000(r7)

	.loc_0x78:
	  addi      r11, r11, 0x4
	  addi      r12, r12, 0x1

	.loc_0x80:
	  rlwinm    r0,r12,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x14
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0
	  stb       r0, 0x5AB(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000280
 */
void GXGetVtxAttrFmt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void GXGetVtxAttrFmtv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E4C80
 * Size:	00008C
 */
void GXSetArray(void)
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0x19
	  bne-      .loc_0xC
	  li        r3, 0xA

	.loc_0xC:
	  li        r0, 0x8
	  subi      r6, r3, 0x9
	  lis       r3, 0xCC01
	  stb       r0, -0x8000(r3)
	  ori       r0, r6, 0xA0
	  rlwinm    r4,r4,0,2,31
	  stb       r0, -0x8000(r3)
	  subic.    r0, r6, 0xC
	  stw       r4, -0x8000(r3)
	  blt-      .loc_0x4C
	  cmpwi     r0, 0x4
	  bge-      .loc_0x4C
	  lwz       r3, -0x6D70(r2)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r3, r0
	  stw       r4, 0x88(r3)

	.loc_0x4C:
	  li        r0, 0x8
	  lis       r3, 0xCC01
	  stb       r0, -0x8000(r3)
	  ori       r0, r6, 0xB0
	  rlwinm    r4,r5,0,24,31
	  stb       r0, -0x8000(r3)
	  subic.    r0, r6, 0xC
	  stw       r4, -0x8000(r3)
	  bltlr-
	  cmpwi     r0, 0x4
	  bgelr-
	  lwz       r3, -0x6D70(r2)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r3, r0
	  stw       r4, 0x98(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E4D0C
 * Size:	000010
 */
void GXInvalidateVtxCache(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x48
	  lis       r3, 0xCC01
	  stb       r0, -0x8000(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E4D1C
 * Size:	000280
 */
void GXSetTexCoordGen2(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r5, 0x14
	  stw       r0, 0x4(r1)
	  li        r10, 0
	  li        r12, 0
	  stwu      r1, -0x8(r1)
	  li        r11, 0x5
	  bgt-      .loc_0xB4
	  lis       r9, 0x804B
	  subi      r9, r9, 0x7C54
	  rlwinm    r0,r5,2,0,29
	  lwzx      r0, r9, r0
	  mtctr     r0
	  bctr
	  li        r11, 0
	  li        r12, 0x1
	  b         .loc_0xB4
	  li        r11, 0x1
	  li        r12, 0x1
	  b         .loc_0xB4
	  li        r11, 0x3
	  li        r12, 0x1
	  b         .loc_0xB4
	  li        r11, 0x4
	  li        r12, 0x1
	  b         .loc_0xB4
	  li        r11, 0x2
	  b         .loc_0xB4
	  li        r11, 0x2
	  b         .loc_0xB4
	  li        r11, 0x5
	  b         .loc_0xB4
	  li        r11, 0x6
	  b         .loc_0xB4
	  li        r11, 0x7
	  b         .loc_0xB4
	  li        r11, 0x8
	  b         .loc_0xB4
	  li        r11, 0x9
	  b         .loc_0xB4
	  li        r11, 0xA
	  b         .loc_0xB4
	  li        r11, 0xB
	  b         .loc_0xB4
	  li        r11, 0xC

	.loc_0xB4:
	  cmpwi     r4, 0x1
	  beq-      .loc_0xDC
	  bge-      .loc_0xCC
	  cmpwi     r4, 0
	  bge-      .loc_0xFC
	  b         .loc_0x174

	.loc_0xCC:
	  cmpwi     r4, 0xA
	  beq-      .loc_0x144
	  bge-      .loc_0x174
	  b         .loc_0x118

	.loc_0xDC:
	  li        r0, 0
	  rlwimi    r10,r0,1,30,30
	  addi      r4, r10, 0
	  rlwimi    r4,r12,2,29,29
	  addi      r10, r4, 0
	  rlwimi    r10,r0,4,25,27
	  rlwimi    r10,r11,7,20,24
	  b         .loc_0x174

	.loc_0xFC:
	  li        r0, 0x1
	  rlwimi    r10,r0,1,30,30
	  li        r0, 0
	  rlwimi    r10,r12,2,29,29
	  rlwimi    r10,r0,4,25,27
	  rlwimi    r10,r11,7,20,24
	  b         .loc_0x174

	.loc_0x118:
	  li        r0, 0
	  rlwimi    r10,r0,1,30,30
	  li        r0, 0x1
	  rlwimi    r10,r12,2,29,29
	  rlwimi    r10,r0,4,25,27
	  subi      r0, r5, 0xC
	  rlwimi    r10,r11,7,20,24
	  rlwimi    r10,r0,12,17,19
	  subi      r0, r4, 0x2
	  rlwimi    r10,r0,15,14,16
	  b         .loc_0x174

	.loc_0x144:
	  cmpwi     r5, 0x13
	  li        r0, 0
	  rlwimi    r10,r0,1,30,30
	  rlwimi    r10,r12,2,29,29
	  bne-      .loc_0x164
	  li        r0, 0x2
	  rlwimi    r10,r0,4,25,27
	  b         .loc_0x16C

	.loc_0x164:
	  li        r0, 0x3
	  rlwimi    r10,r0,4,25,27

	.loc_0x16C:
	  li        r0, 0x2
	  rlwimi    r10,r0,7,20,24

	.loc_0x174:
	  li        r9, 0x10
	  lis       r5, 0xCC01
	  stb       r9, -0x8000(r5)
	  addi      r4, r3, 0x1040
	  subi      r0, r8, 0x40
	  stw       r4, -0x8000(r5)
	  li        r8, 0
	  rlwimi    r8,r0,0,26,31
	  stw       r10, -0x8000(r5)
	  addi      r0, r3, 0x1050
	  cmplwi    r3, 0x6
	  stb       r9, -0x8000(r5)
	  rlwimi    r8,r7,8,23,23
	  stw       r0, -0x8000(r5)
	  stw       r8, -0x8000(r5)
	  bgt-      .loc_0x258
	  lis       r4, 0x804B
	  subi      r4, r4, 0x7C70
	  rlwinm    r0,r3,2,0,29
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  lwz       r4, -0x6D70(r2)
	  lwz       r0, 0x80(r4)
	  rlwimi    r0,r6,6,20,25
	  stw       r0, 0x80(r4)
	  b         .loc_0x268
	  lwz       r4, -0x6D70(r2)
	  lwz       r0, 0x80(r4)
	  rlwimi    r0,r6,12,14,19
	  stw       r0, 0x80(r4)
	  b         .loc_0x268
	  lwz       r4, -0x6D70(r2)
	  lwz       r0, 0x80(r4)
	  rlwimi    r0,r6,18,8,13
	  stw       r0, 0x80(r4)
	  b         .loc_0x268
	  lwz       r4, -0x6D70(r2)
	  lwz       r0, 0x80(r4)
	  rlwimi    r0,r6,24,2,7
	  stw       r0, 0x80(r4)
	  b         .loc_0x268
	  lwz       r4, -0x6D70(r2)
	  lwz       r0, 0x84(r4)
	  rlwimi    r0,r6,0,26,31
	  stw       r0, 0x84(r4)
	  b         .loc_0x268
	  lwz       r4, -0x6D70(r2)
	  lwz       r0, 0x84(r4)
	  rlwimi    r0,r6,6,20,25
	  stw       r0, 0x84(r4)
	  b         .loc_0x268
	  lwz       r4, -0x6D70(r2)
	  lwz       r0, 0x84(r4)
	  rlwimi    r0,r6,12,14,19
	  stw       r0, 0x84(r4)
	  b         .loc_0x268

	.loc_0x258:
	  lwz       r4, -0x6D70(r2)
	  lwz       r0, 0x84(r4)
	  rlwimi    r0,r6,18,8,13
	  stw       r0, 0x84(r4)

	.loc_0x268:
	  addi      r3, r3, 0x1
	  bl        0x4978
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E4F9C
 * Size:	00003C
 */
void GXSetNumTexGens(void)
{
	/*
	.loc_0x0:
	  lwz       r6, -0x6D70(r2)
	  rlwinm    r5,r3,0,24,31
	  li        r4, 0x10
	  lwz       r0, 0x204(r6)
	  rlwimi    r0,r3,0,28,31
	  lis       r3, 0xCC01
	  stw       r0, 0x204(r6)
	  li        r0, 0x103F
	  stb       r4, -0x8000(r3)
	  stw       r0, -0x8000(r3)
	  stw       r5, -0x8000(r3)
	  lwz       r0, 0x5AC(r6)
	  ori       r0, r0, 0x4
	  stw       r0, 0x5AC(r6)
	  blr
	*/
}
