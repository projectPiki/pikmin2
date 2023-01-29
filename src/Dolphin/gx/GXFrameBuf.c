

/*
 * --INFO--
 * Address:	........
 * Size:	000144
 */
void GXAdjustForOverscan(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E5C44
 * Size:	00007C
 */
void GXSetDispCopySrc(void)
{
	/*
	.loc_0x0:
	  lwz       r8, -0x6D70(r2)
	  li        r9, 0
	  rlwinm    r7,r5,0,16,31
	  stw       r9, 0x1E0(r8)
	  rlwinm    r5,r6,0,16,31
	  rlwinm    r0,r3,0,16,31
	  lwz       r3, 0x1E0(r8)
	  rlwimi    r3,r0,0,22,31
	  rlwinm    r0,r4,0,16,31
	  stw       r3, 0x1E0(r8)
	  li        r6, 0x49
	  subi      r4, r7, 0x1
	  lwz       r7, 0x1E0(r8)
	  rlwimi    r7,r0,10,12,21
	  subi      r3, r5, 0x1
	  stw       r7, 0x1E0(r8)
	  li        r0, 0x4A
	  lwz       r5, 0x1E0(r8)
	  rlwimi    r5,r6,24,0,7
	  stw       r5, 0x1E0(r8)
	  stw       r9, 0x1E4(r8)
	  lwz       r5, 0x1E4(r8)
	  rlwimi    r5,r4,0,22,31
	  stw       r5, 0x1E4(r8)
	  lwz       r4, 0x1E4(r8)
	  rlwimi    r4,r3,10,12,21
	  stw       r4, 0x1E4(r8)
	  lwz       r3, 0x1E4(r8)
	  rlwimi    r3,r0,24,0,7
	  stw       r3, 0x1E4(r8)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E5CC0
 * Size:	00007C
 */
void GXSetTexCopySrc(void)
{
	/*
	.loc_0x0:
	  lwz       r8, -0x6D70(r2)
	  li        r9, 0
	  rlwinm    r7,r5,0,16,31
	  stw       r9, 0x1F0(r8)
	  rlwinm    r5,r6,0,16,31
	  rlwinm    r0,r3,0,16,31
	  lwz       r3, 0x1F0(r8)
	  rlwimi    r3,r0,0,22,31
	  rlwinm    r0,r4,0,16,31
	  stw       r3, 0x1F0(r8)
	  li        r6, 0x49
	  subi      r4, r7, 0x1
	  lwz       r7, 0x1F0(r8)
	  rlwimi    r7,r0,10,12,21
	  subi      r3, r5, 0x1
	  stw       r7, 0x1F0(r8)
	  li        r0, 0x4A
	  lwz       r5, 0x1F0(r8)
	  rlwimi    r5,r6,24,0,7
	  stw       r5, 0x1F0(r8)
	  stw       r9, 0x1F4(r8)
	  lwz       r5, 0x1F4(r8)
	  rlwimi    r5,r4,0,22,31
	  stw       r5, 0x1F4(r8)
	  lwz       r4, 0x1F4(r8)
	  rlwimi    r4,r3,10,12,21
	  stw       r4, 0x1F4(r8)
	  lwz       r3, 0x1F4(r8)
	  rlwimi    r3,r0,24,0,7
	  stw       r3, 0x1F4(r8)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E5D3C
 * Size:	000034
 */
void GXSetDispCopyDst(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6D70(r2)
	  li        r0, 0
	  stw       r0, 0x1E8(r4)
	  rlwinm    r0,r3,1,16,30
	  srawi     r0, r0, 0x5
	  lwz       r3, 0x1E8(r4)
	  rlwimi    r3,r0,0,22,31
	  li        r0, 0x4D
	  stw       r3, 0x1E8(r4)
	  lwz       r3, 0x1E8(r4)
	  rlwimi    r3,r0,24,0,7
	  stw       r3, 0x1E8(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E5D70
 * Size:	000130
 */
void GXSetTexCopyDst(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmpwi     r5, 0x13
	  stw       r0, 0x4(r1)
	  li        r0, 0
	  addi      r8, r3, 0
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  rlwinm    r31,r5,0,28,31
	  stw       r30, 0x20(r1)
	  addi      r30, r6, 0
	  lwz       r7, -0x6D70(r2)
	  stb       r0, 0x200(r7)
	  addi      r7, r4, 0
	  bne-      .loc_0x3C
	  li        r31, 0xB

	.loc_0x3C:
	  cmpwi     r5, 0x26
	  beq-      .loc_0x5C
	  bge-      .loc_0x74
	  cmpwi     r5, 0x4
	  bge-      .loc_0x74
	  cmpwi     r5, 0
	  bge-      .loc_0x5C
	  b         .loc_0x74

	.loc_0x5C:
	  lwz       r4, -0x6D70(r2)
	  li        r0, 0x3
	  lwz       r3, 0x1FC(r4)
	  rlwimi    r3,r0,15,15,16
	  stw       r3, 0x1FC(r4)
	  b         .loc_0x88

	.loc_0x74:
	  lwz       r4, -0x6D70(r2)
	  li        r0, 0x2
	  lwz       r3, 0x1FC(r4)
	  rlwimi    r3,r0,15,15,16
	  stw       r3, 0x1FC(r4)

	.loc_0x88:
	  rlwinm    r3,r5,0,27,27
	  lwz       r4, -0x6D70(r2)
	  subi      r0, r3, 0x10
	  cntlzw    r0, r0
	  rlwinm    r0,r0,27,24,31
	  stb       r0, 0x200(r4)
	  addi      r3, r5, 0
	  addi      r5, r7, 0
	  lwz       r0, 0x1FC(r4)
	  rlwimi    r0,r31,0,28,28
	  rlwinm    r31,r31,0,29,31
	  stw       r0, 0x1FC(r4)
	  addi      r4, r8, 0
	  addi      r6, r1, 0x1C
	  addi      r7, r1, 0x18
	  addi      r8, r1, 0x14
	  bl        0x127C
	  lwz       r7, -0x6D70(r2)
	  li        r0, 0
	  li        r3, 0x4D
	  stw       r0, 0x1F8(r7)
	  lwz       r5, 0x1C(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r6, 0x1F8(r7)
	  mullw     r4, r5, r4
	  rlwimi    r6,r4,0,22,31
	  stw       r6, 0x1F8(r7)
	  lwz       r4, 0x1F8(r7)
	  rlwimi    r4,r3,24,0,7
	  stw       r4, 0x1F8(r7)
	  lwz       r3, 0x1FC(r7)
	  rlwimi    r3,r30,9,22,22
	  stw       r3, 0x1FC(r7)
	  lwz       r0, 0x1FC(r7)
	  rlwimi    r0,r31,4,25,27
	  stw       r0, 0x1FC(r7)
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E5EA0
 * Size:	000024
 */
void GXSetDispCopyFrame2Field(void)
{
	/*
	.loc_0x0:
	  lwz       r5, -0x6D70(r2)
	  li        r0, 0
	  lwz       r4, 0x1EC(r5)
	  rlwimi    r4,r3,12,18,19
	  stw       r4, 0x1EC(r5)
	  lwz       r3, 0x1FC(r5)
	  rlwimi    r3,r0,12,18,19
	  stw       r3, 0x1FC(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E5EC4
 * Size:	000058
 */
void GXSetCopyClamp(void)
{
	/*
	.loc_0x0:
	  rlwinm    r5,r3,0,31,31
	  lwz       r4, -0x6D70(r2)
	  subi      r0, r5, 0x1
	  cntlzw    r5, r0
	  lwz       r0, 0x1EC(r4)
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r3,r3,0,30,30
	  rlwimi    r0,r5,0,31,31
	  subi      r3, r3, 0x2
	  stw       r0, 0x1EC(r4)
	  cntlzw    r0, r3
	  rlwinm    r3,r0,27,24,31
	  lwz       r0, 0x1EC(r4)
	  rlwimi    r0,r3,1,30,30
	  stw       r0, 0x1EC(r4)
	  lwz       r0, 0x1FC(r4)
	  rlwimi    r0,r5,0,31,31
	  stw       r0, 0x1FC(r4)
	  lwz       r0, 0x1FC(r4)
	  rlwimi    r0,r3,1,30,30
	  stw       r0, 0x1FC(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void __GXGetNumXfbLines(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E5F1C
 * Size:	000090
 */
void GXGetNumXfbLines(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lfs       f0, -0x6D48(r2)
	  fdivs     f1, f0, f1
	  bl        -0x243EC
	  rlwinm    r5,r31,0,16,31
	  subi      r0, r5, 0x1
	  rlwinm    r4,r3,0,23,31
	  rlwinm    r0,r0,8,0,23
	  divwu     r3, r0, r4
	  cmplwi    r4, 0x80
	  addi      r3, r3, 0x1
	  ble-      .loc_0x6C
	  cmplwi    r4, 0x100
	  bge-      .loc_0x6C
	  b         .loc_0x50

	.loc_0x4C:
	  rlwinm    r4,r4,31,1,31

	.loc_0x50:
	  rlwinm.   r0,r4,0,31,31
	  beq+      .loc_0x4C
	  divwu     r0, r5, r4
	  mullw     r0, r0, r4
	  sub.      r0, r5, r0
	  bne-      .loc_0x6C
	  addi      r3, r3, 0x1

	.loc_0x6C:
	  cmplwi    r3, 0x400
	  ble-      .loc_0x78
	  li        r3, 0x400

	.loc_0x78:
	  lwz       r0, 0x24(r1)
	  rlwinm    r3,r3,0,16,31
	  lwz       r31, 0x1C(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E5FAC
 * Size:	000238
 */
void GXGetYScaleFactor(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  lis       r0, 0x4330
	  stwu      r1, -0x78(r1)
	  stfd      f31, 0x70(r1)
	  stfd      f30, 0x68(r1)
	  stfd      f29, 0x60(r1)
	  stfd      f28, 0x58(r1)
	  stmw      r25, 0x3C(r1)
	  rlwinm    r28,r4,0,16,31
	  rlwinm    r31,r3,0,16,31
	  stw       r28, 0x34(r1)
	  mr        r27, r3
	  mr        r25, r4
	  stw       r31, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  stw       r0, 0x28(r1)
	  lfd       f3, -0x6D40(r2)
	  lfd       f2, 0x30(r1)
	  lfd       f1, 0x28(r1)
	  fsubs     f2, f2, f3
	  lfs       f0, -0x6D48(r2)
	  fsubs     f1, f1, f3
	  fdivs     f2, f2, f1
	  fdivs     f1, f0, f2
	  fmr       f28, f2
	  bl        -0x244C8
	  subi      r0, r31, 0x1
	  rlwinm    r4,r3,0,23,31
	  rlwinm    r30,r0,8,0,23
	  divwu     r3, r30, r4
	  cmplwi    r4, 0x80
	  addi      r3, r3, 0x1
	  ble-      .loc_0xB4
	  cmplwi    r4, 0x100
	  bge-      .loc_0xB4
	  b         .loc_0x98

	.loc_0x94:
	  rlwinm    r4,r4,31,1,31

	.loc_0x98:
	  rlwinm.   r0,r4,0,31,31
	  beq+      .loc_0x94
	  divwu     r0, r31, r4
	  mullw     r0, r0, r4
	  sub.      r0, r31, r0
	  bne-      .loc_0xB4
	  addi      r3, r3, 0x1

	.loc_0xB4:
	  cmplwi    r3, 0x400
	  ble-      .loc_0xC0
	  li        r3, 0x400

	.loc_0xC0:
	  lfd       f31, -0x6D40(r2)
	  mr        r0, r3
	  lfs       f30, -0x6D48(r2)
	  rlwinm    r29,r25,0,16,31
	  rlwinm    r26,r27,0,16,31
	  lis       r25, 0x4330
	  b         .loc_0x160

	.loc_0xDC:
	  subi      r28, r28, 0x1
	  stw       r26, 0x34(r1)
	  stw       r28, 0x2C(r1)
	  stw       r25, 0x28(r1)
	  stw       r25, 0x30(r1)
	  lfd       f1, 0x28(r1)
	  lfd       f0, 0x30(r1)
	  fsubs     f1, f1, f31
	  fsubs     f0, f0, f31
	  fdivs     f0, f1, f0
	  fdivs     f1, f30, f0
	  fmr       f28, f0
	  bl        -0x2456C
	  rlwinm    r4,r3,0,23,31
	  divwu     r3, r30, r4
	  cmplwi    r4, 0x80
	  addi      r3, r3, 0x1
	  ble-      .loc_0x150
	  cmplwi    r4, 0x100
	  bge-      .loc_0x150
	  b         .loc_0x134

	.loc_0x130:
	  rlwinm    r4,r4,31,1,31

	.loc_0x134:
	  rlwinm.   r0,r4,0,31,31
	  beq+      .loc_0x130
	  divwu     r0, r31, r4
	  mullw     r0, r0, r4
	  sub.      r0, r31, r0
	  bne-      .loc_0x150
	  addi      r3, r3, 0x1

	.loc_0x150:
	  cmplwi    r3, 0x400
	  ble-      .loc_0x15C
	  li        r3, 0x400

	.loc_0x15C:
	  mr        r0, r3

	.loc_0x160:
	  cmplw     r0, r29
	  bgt+      .loc_0xDC
	  fmr       f29, f28
	  lfd       f30, -0x6D40(r2)
	  lfs       f31, -0x6D48(r2)
	  rlwinm    r27,r27,0,16,31
	  lis       r26, 0x4330
	  b         .loc_0x208

	.loc_0x180:
	  addi      r28, r28, 0x1
	  stw       r27, 0x34(r1)
	  fmr       f29, f28
	  stw       r28, 0x2C(r1)
	  stw       r26, 0x28(r1)
	  stw       r26, 0x30(r1)
	  lfd       f1, 0x28(r1)
	  lfd       f0, 0x30(r1)
	  fsubs     f1, f1, f30
	  fsubs     f0, f0, f30
	  fdivs     f0, f1, f0
	  fdivs     f1, f31, f0
	  fmr       f28, f0
	  bl        -0x24614
	  rlwinm    r4,r3,0,23,31
	  divwu     r3, r30, r4
	  cmplwi    r4, 0x80
	  addi      r3, r3, 0x1
	  ble-      .loc_0x1F8
	  cmplwi    r4, 0x100
	  bge-      .loc_0x1F8
	  b         .loc_0x1DC

	.loc_0x1D8:
	  rlwinm    r4,r4,31,1,31

	.loc_0x1DC:
	  rlwinm.   r0,r4,0,31,31
	  beq+      .loc_0x1D8
	  divwu     r0, r31, r4
	  mullw     r0, r0, r4
	  sub.      r0, r31, r0
	  bne-      .loc_0x1F8
	  addi      r3, r3, 0x1

	.loc_0x1F8:
	  cmplwi    r3, 0x400
	  ble-      .loc_0x204
	  li        r3, 0x400

	.loc_0x204:
	  mr        r0, r3

	.loc_0x208:
	  cmplw     r0, r29
	  blt+      .loc_0x180
	  lmw       r25, 0x3C(r1)
	  fmr       f1, f29
	  lwz       r0, 0x7C(r1)
	  lfd       f31, 0x70(r1)
	  lfd       f30, 0x68(r1)
	  lfd       f29, 0x60(r1)
	  lfd       f28, 0x58(r1)
	  addi      r1, r1, 0x78
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E61E4
 * Size:	0000CC
 */
void GXSetDispCopyYScale(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  lfs       f0, -0x6D48(r2)
	  fdivs     f1, f0, f1
	  bl        -0x246AC
	  rlwinm    r7,r3,0,23,31
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  subfic    r5, r7, 0x100
	  stb       r0, -0x8000(r4)
	  subic     r0, r5, 0x1
	  subfe     r5, r0, r5
	  li        r6, 0
	  li        r0, 0x4E
	  rlwimi    r6,r7,0,23,31
	  rlwimi    r6,r0,24,0,7
	  stw       r6, -0x8000(r4)
	  li        r0, 0
	  cmplwi    r7, 0x80
	  sth       r0, 0x2(r3)
	  addi      r4, r7, 0
	  lwz       r0, 0x1EC(r3)
	  rlwimi    r0,r5,10,21,21
	  stw       r0, 0x1EC(r3)
	  lwz       r0, 0x1E4(r3)
	  rlwinm    r5,r0,22,22,31
	  rlwinm    r0,r0,30,14,23
	  divwu     r3, r0, r7
	  addi      r5, r5, 0x1
	  addi      r3, r3, 0x1
	  ble-      .loc_0xB0
	  cmplwi    r7, 0x100
	  bge-      .loc_0xB0
	  b         .loc_0x94

	.loc_0x90:
	  rlwinm    r4,r4,31,1,31

	.loc_0x94:
	  rlwinm.   r0,r4,0,31,31
	  beq+      .loc_0x90
	  divwu     r0, r5, r4
	  mullw     r0, r0, r4
	  sub.      r0, r5, r0
	  bne-      .loc_0xB0
	  addi      r3, r3, 0x1

	.loc_0xB0:
	  cmplwi    r3, 0x400
	  ble-      .loc_0xBC
	  li        r3, 0x400

	.loc_0xBC:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E62B0
 * Size:	000078
 */
void GXSetCopyClear(void)
{
	/*
	.loc_0x0:
	  lbz       r5, 0x0(r3)
	  li        r6, 0
	  lbz       r0, 0x3(r3)
	  li        r9, 0x61
	  rlwimi    r6,r5,0,24,31
	  lis       r8, 0xCC01
	  lwz       r5, -0x6D70(r2)
	  rlwimi    r6,r0,8,16,23
	  stb       r9, -0x8000(r8)
	  li        r0, 0x4F
	  rlwimi    r6,r0,24,0,7
	  stw       r6, -0x8000(r8)
	  li        r10, 0
	  li        r6, 0x50
	  lbz       r7, 0x2(r3)
	  li        r11, 0
	  lbz       r3, 0x1(r3)
	  li        r0, 0x51
	  rlwimi    r11,r7,0,24,31
	  rlwimi    r11,r3,8,16,23
	  stb       r9, -0x8000(r8)
	  rlwimi    r11,r6,24,0,7
	  stw       r11, -0x8000(r8)
	  rlwimi    r10,r4,0,8,31
	  rlwimi    r10,r0,24,0,7
	  stb       r9, -0x8000(r8)
	  li        r0, 0
	  stw       r10, -0x8000(r8)
	  sth       r0, 0x2(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E6328
 * Size:	000208
 */
void GXSetCopyFilter(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x48(r1)
	  rlwinm.   r0,r3,0,24,31
	  stmw      r24, 0x28(r1)
	  beq-      .loc_0x104
	  lbz       r0, 0x6(r4)
	  li        r7, 0
	  lbz       r8, 0x0(r4)
	  li        r3, 0
	  rlwimi    r7,r0,0,28,31
	  lbz       r9, 0xC(r4)
	  rlwimi    r3,r8,0,28,31
	  li        r8, 0
	  lbz       r0, 0x12(r4)
	  rlwimi    r8,r9,0,28,31
	  li        r9, 0
	  lbz       r10, 0x1(r4)
	  rlwimi    r9,r0,0,28,31
	  lbz       r0, 0x13(r4)
	  lbz       r11, 0xD(r4)
	  rlwimi    r3,r10,4,24,27
	  lbz       r27, 0x2(r4)
	  rlwimi    r9,r0,4,24,27
	  lbz       r25, 0x7(r4)
	  lbz       r10, 0x14(r4)
	  rlwimi    r8,r11,4,24,27
	  lbz       r12, 0xE(r4)
	  rlwimi    r3,r27,8,20,23
	  lbz       r28, 0x3(r4)
	  rlwimi    r8,r12,8,20,23
	  lbz       r29, 0x4(r4)
	  rlwimi    r3,r28,12,16,19
	  lbz       r0, 0x5(r4)
	  rlwimi    r3,r29,16,12,15
	  lbz       r24, 0x8(r4)
	  rlwimi    r7,r25,4,24,27
	  lbz       r25, 0xF(r4)
	  rlwimi    r3,r0,20,8,11
	  lbz       r30, 0x9(r4)
	  li        r0, 0x1
	  lbz       r31, 0xA(r4)
	  rlwimi    r9,r10,8,20,23
	  lbz       r26, 0x15(r4)
	  rlwimi    r3,r0,24,0,7
	  lbz       r12, 0xB(r4)
	  rlwimi    r7,r24,8,20,23
	  lbz       r11, 0x10(r4)
	  rlwimi    r7,r30,12,16,19
	  lbz       r10, 0x11(r4)
	  lbz       r27, 0x16(r4)
	  rlwimi    r7,r31,16,12,15
	  rlwimi    r8,r25,12,16,19
	  lbz       r4, 0x17(r4)
	  rlwimi    r8,r11,16,12,15
	  rlwimi    r9,r26,12,16,19
	  rlwimi    r9,r27,16,12,15
	  li        r0, 0x2
	  rlwimi    r7,r12,20,8,11
	  rlwimi    r7,r0,24,0,7
	  li        r0, 0x3
	  rlwimi    r8,r10,20,8,11
	  rlwimi    r8,r0,24,0,7
	  li        r0, 0x4
	  rlwimi    r9,r4,20,8,11
	  rlwimi    r9,r0,24,0,7
	  b         .loc_0x124

	.loc_0x104:
	  lis       r3, 0x166
	  lis       r7, 0x266
	  lis       r8, 0x366
	  lis       r4, 0x466
	  addi      r3, r3, 0x6666
	  addi      r7, r7, 0x6666
	  addi      r8, r8, 0x6666
	  addi      r9, r4, 0x6666

	.loc_0x124:
	  li        r10, 0x61
	  lis       r4, 0xCC01
	  stb       r10, -0x8000(r4)
	  rlwinm.   r0,r5,0,24,31
	  li        r0, 0x53
	  stw       r3, -0x8000(r4)
	  li        r3, 0
	  rlwimi    r3,r0,24,0,7
	  stb       r10, -0x8000(r4)
	  li        r0, 0x54
	  li        r5, 0
	  stw       r7, -0x8000(r4)
	  rlwimi    r5,r0,24,0,7
	  addi      r11, r3, 0
	  stb       r10, -0x8000(r4)
	  addi      r0, r5, 0
	  stw       r8, -0x8000(r4)
	  stb       r10, -0x8000(r4)
	  stw       r9, -0x8000(r4)
	  beq-      .loc_0x1B0
	  lbz       r4, 0x0(r6)
	  lbz       r3, 0x4(r6)
	  rlwimi    r11,r4,0,26,31
	  lbz       r4, 0x1(r6)
	  rlwimi    r0,r3,0,26,31
	  lbz       r7, 0x2(r6)
	  rlwimi    r11,r4,6,20,25
	  lbz       r4, 0x5(r6)
	  lbz       r5, 0x3(r6)
	  rlwimi    r11,r7,12,14,19
	  lbz       r3, 0x6(r6)
	  rlwimi    r0,r4,6,20,25
	  rlwimi    r11,r5,18,8,13
	  rlwimi    r0,r3,12,14,19
	  b         .loc_0x1D8

	.loc_0x1B0:
	  li        r4, 0
	  li        r3, 0x15
	  rlwimi    r11,r4,0,26,31
	  rlwimi    r11,r4,6,20,25
	  rlwimi    r0,r3,0,26,31
	  rlwimi    r11,r3,12,14,19
	  li        r3, 0x16
	  rlwimi    r0,r4,6,20,25
	  rlwimi    r0,r4,12,14,19
	  rlwimi    r11,r3,18,8,13

	.loc_0x1D8:
	  li        r6, 0x61
	  lwz       r3, -0x6D70(r2)
	  lis       r5, 0xCC01
	  stb       r6, -0x8000(r5)
	  li        r4, 0
	  stw       r11, -0x8000(r5)
	  stb       r6, -0x8000(r5)
	  stw       r0, -0x8000(r5)
	  sth       r4, 0x2(r3)
	  lmw       r24, 0x28(r1)
	  addi      r1, r1, 0x48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E6530
 * Size:	000014
 */
void GXSetDispCopyGamma(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6D70(r2)
	  lwz       r0, 0x1EC(r4)
	  rlwimi    r0,r3,7,23,24
	  stw       r0, 0x1EC(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E6544
 * Size:	000168
 */
void GXCopyDisp(void)
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x48
	  lwz       r7, -0x6D70(r2)
	  li        r0, 0x1
	  li        r6, 0x61
	  lwz       r8, 0x1D8(r7)
	  lis       r5, 0xCC01
	  rlwimi    r8,r0,0,31,31
	  li        r0, 0x7
	  stb       r6, -0x8000(r5)
	  rlwimi    r8,r0,1,28,30
	  stw       r8, -0x8000(r5)
	  li        r0, 0
	  lwz       r7, 0x1D0(r7)
	  rlwimi    r7,r0,0,31,31
	  rlwimi    r7,r0,1,30,30
	  stb       r6, -0x8000(r5)
	  stw       r7, -0x8000(r5)

	.loc_0x48:
	  rlwinm.   r0,r4,0,24,31
	  li        r10, 0
	  bne-      .loc_0x68
	  lwz       r5, -0x6D70(r2)
	  lwz       r0, 0x1DC(r5)
	  rlwinm    r0,r0,0,29,31
	  cmplwi    r0, 0x3
	  bne-      .loc_0x98

	.loc_0x68:
	  lwz       r5, -0x6D70(r2)
	  lwz       r6, 0x1DC(r5)
	  rlwinm    r0,r6,26,31,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x98
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r0, 0
	  rlwimi    r6,r0,6,25,25
	  stw       r6, -0x8000(r5)
	  li        r10, 0x1

	.loc_0x98:
	  li        r8, 0x61
	  lwz       r6, -0x6D70(r2)
	  lis       r7, 0xCC01
	  stb       r8, -0x8000(r7)
	  li        r9, 0
	  rlwimi    r9,r3,27,11,31
	  lwz       r5, 0x1E0(r6)
	  li        r0, 0x4B
	  rlwimi    r9,r0,24,0,7
	  stw       r5, -0x8000(r7)
	  rlwinm.   r4,r4,0,24,31
	  li        r3, 0x1
	  stb       r8, -0x8000(r7)
	  li        r0, 0x52
	  lwz       r5, 0x1E4(r6)
	  stw       r5, -0x8000(r7)
	  stb       r8, -0x8000(r7)
	  lwz       r5, 0x1E8(r6)
	  stw       r5, -0x8000(r7)
	  stb       r8, -0x8000(r7)
	  stw       r9, -0x8000(r7)
	  lwz       r5, 0x1EC(r6)
	  rlwimi    r5,r4,11,20,20
	  stw       r5, 0x1EC(r6)
	  lwz       r4, 0x1EC(r6)
	  rlwimi    r4,r3,14,17,17
	  stw       r4, 0x1EC(r6)
	  lwz       r3, 0x1EC(r6)
	  rlwimi    r3,r0,24,0,7
	  stw       r3, 0x1EC(r6)
	  stb       r8, -0x8000(r7)
	  lwz       r0, 0x1EC(r6)
	  stw       r0, -0x8000(r7)
	  beq-      .loc_0x138
	  stb       r8, -0x8000(r7)
	  lwz       r0, 0x1D8(r6)
	  stw       r0, -0x8000(r7)
	  stb       r8, -0x8000(r7)
	  lwz       r0, 0x1D0(r6)
	  stw       r0, -0x8000(r7)

	.loc_0x138:
	  rlwinm.   r0,r10,0,24,31
	  beq-      .loc_0x158
	  li        r0, 0x61
	  lwz       r3, -0x6D70(r2)
	  lis       r4, 0xCC01
	  stb       r0, -0x8000(r4)
	  lwz       r0, 0x1DC(r3)
	  stw       r0, -0x8000(r4)

	.loc_0x158:
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E66AC
 * Size:	00018C
 */
void GXCopyTex(void)
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x48
	  lwz       r7, -0x6D70(r2)
	  li        r0, 0x1
	  li        r6, 0x61
	  lwz       r8, 0x1D8(r7)
	  lis       r5, 0xCC01
	  rlwimi    r8,r0,0,31,31
	  li        r0, 0x7
	  stb       r6, -0x8000(r5)
	  rlwimi    r8,r0,1,28,30
	  stw       r8, -0x8000(r5)
	  li        r0, 0
	  lwz       r7, 0x1D0(r7)
	  rlwimi    r7,r0,0,31,31
	  rlwimi    r7,r0,1,30,30
	  stb       r6, -0x8000(r5)
	  stw       r7, -0x8000(r5)

	.loc_0x48:
	  lwz       r6, -0x6D70(r2)
	  li        r0, 0
	  lbz       r5, 0x200(r6)
	  lwz       r7, 0x1DC(r6)
	  cmplwi    r5, 0
	  beq-      .loc_0x78
	  rlwinm    r5,r7,0,29,31
	  cmplwi    r5, 0x3
	  beq-      .loc_0x78
	  li        r0, 0x3
	  rlwimi    r7,r0,0,29,31
	  li        r0, 0x1

	.loc_0x78:
	  rlwinm.   r5,r4,0,24,31
	  bne-      .loc_0x8C
	  rlwinm    r5,r7,0,29,31
	  cmplwi    r5, 0x3
	  bne-      .loc_0xA4

	.loc_0x8C:
	  rlwinm    r5,r7,26,31,31
	  cmplwi    r5, 0x1
	  bne-      .loc_0xA4
	  li        r0, 0
	  rlwimi    r7,r0,6,25,25
	  li        r0, 0x1

	.loc_0xA4:
	  rlwinm.   r5,r0,0,24,31
	  beq-      .loc_0xBC
	  li        r6, 0x61
	  lis       r5, 0xCC01
	  stb       r6, -0x8000(r5)
	  stw       r7, -0x8000(r5)

	.loc_0xBC:
	  li        r9, 0x61
	  lwz       r7, -0x6D70(r2)
	  lis       r8, 0xCC01
	  stb       r9, -0x8000(r8)
	  rlwinm.   r5,r4,0,24,31
	  li        r10, 0
	  lwz       r4, 0x1F0(r7)
	  rlwimi    r10,r3,27,11,31
	  li        r3, 0x4B
	  stw       r4, -0x8000(r8)
	  rlwimi    r10,r3,24,0,7
	  li        r4, 0
	  stb       r9, -0x8000(r8)
	  li        r3, 0x52
	  lwz       r6, 0x1F4(r7)
	  stw       r6, -0x8000(r8)
	  stb       r9, -0x8000(r8)
	  lwz       r6, 0x1F8(r7)
	  stw       r6, -0x8000(r8)
	  stb       r9, -0x8000(r8)
	  stw       r10, -0x8000(r8)
	  lwz       r6, 0x1FC(r7)
	  rlwimi    r6,r5,11,20,20
	  stw       r6, 0x1FC(r7)
	  lwz       r5, 0x1FC(r7)
	  rlwimi    r5,r4,14,17,17
	  stw       r5, 0x1FC(r7)
	  lwz       r4, 0x1FC(r7)
	  rlwimi    r4,r3,24,0,7
	  stw       r4, 0x1FC(r7)
	  stb       r9, -0x8000(r8)
	  lwz       r3, 0x1FC(r7)
	  stw       r3, -0x8000(r8)
	  beq-      .loc_0x15C
	  stb       r9, -0x8000(r8)
	  lwz       r3, 0x1D8(r7)
	  stw       r3, -0x8000(r8)
	  stb       r9, -0x8000(r8)
	  lwz       r3, 0x1D0(r7)
	  stw       r3, -0x8000(r8)

	.loc_0x15C:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x17C
	  li        r0, 0x61
	  lwz       r3, -0x6D70(r2)
	  lis       r4, 0xCC01
	  stb       r0, -0x8000(r4)
	  lwz       r0, 0x1DC(r3)
	  stw       r0, -0x8000(r4)

	.loc_0x17C:
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E6838
 * Size:	000038
 */
void GXClearBoundingBox(void)
{
	/*
	.loc_0x0:
	  li        r6, 0x61
	  lwz       r3, -0x6D70(r2)
	  lis       r5, 0xCC01
	  lis       r4, 0x5500
	  stb       r6, -0x8000(r5)
	  addi      r0, r4, 0x3FF
	  stw       r0, -0x8000(r5)
	  lis       r4, 0x5600
	  addi      r4, r4, 0x3FF
	  stb       r6, -0x8000(r5)
	  li        r0, 0
	  stw       r4, -0x8000(r5)
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void GXReadBoundingBox(void)
{
	// UNUSED FUNCTION
}
