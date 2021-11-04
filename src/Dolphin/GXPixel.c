

/*
 * --INFO--
 * Address:	800E8BE0
 * Size:	000224
 */
void GXSetFog(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x60(r1)
	  stfd      f31, 0x58(r1)
	  stmw      r23, 0x34(r1)
	  li        r30, 0
	  rlwinm.   r31,r3,29,31,31
	  addi      r24, r4, 0
	  addi      r29, r30, 0
	  rlwinm    r25,r3,0,29,31
	  li        r28, 0
	  li        r27, 0
	  li        r26, 0
	  beq-      .loc_0x80
	  fcmpu     cr0, f4, f3
	  beq-      .loc_0x48
	  fcmpu     cr0, f2, f1
	  bne-      .loc_0x58

	.loc_0x48:
	  lfs       f0, -0x6CC0(r2)
	  stfs      f0, 0x24(r1)
	  stfs      f0, 0x20(r1)
	  b         .loc_0x16C

	.loc_0x58:
	  fsubs     f5, f2, f1
	  lfs       f6, -0x6CBC(r2)
	  fsubs     f2, f4, f3
	  fsubs     f0, f1, f3
	  fdivs     f3, f6, f5
	  fmuls     f1, f3, f2
	  fmuls     f0, f3, f0
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x20(r1)
	  b         .loc_0x16C

	.loc_0x80:
	  fcmpu     cr0, f4, f3
	  beq-      .loc_0x90
	  fcmpu     cr0, f2, f1
	  bne-      .loc_0xA0

	.loc_0x90:
	  lfs       f3, -0x6CC0(r2)
	  lfs       f4, -0x6CB8(r2)
	  fmr       f31, f3
	  b         .loc_0xBC

	.loc_0xA0:
	  fsubs     f0, f4, f3
	  fsubs     f5, f2, f1
	  fmuls     f2, f4, f3
	  fdivs     f4, f4, f0
	  fmuls     f0, f0, f5
	  fdivs     f31, f1, f5
	  fdivs     f3, f2, f0

	.loc_0xBC:
	  lfs       f1, -0x6CB8(r2)
	  li        r3, 0
	  lfd       f0, -0x6CB0(r2)
	  b         .loc_0xD4

	.loc_0xCC:
	  fmuls     f4, f4, f1
	  addi      r3, r3, 0x1

	.loc_0xD4:
	  fcmpo     cr0, f4, f0
	  bgt+      .loc_0xCC
	  lfd       f0, -0x6CA0(r2)
	  lfs       f2, -0x6CA8(r2)
	  lfs       f1, -0x6CC0(r2)
	  b         .loc_0xF4

	.loc_0xEC:
	  fmuls     f4, f4, f2
	  subi      r3, r3, 0x1

	.loc_0xF4:
	  fcmpo     cr0, f4, f1
	  ble-      .loc_0x104
	  fcmpo     cr0, f4, f0
	  blt+      .loc_0xEC

	.loc_0x104:
	  addi      r23, r3, 0x1
	  lfs       f0, -0x6C98(r2)
	  li        r0, 0x1
	  lfd       f2, -0x6C90(r2)
	  slw       r0, r0, r23
	  fmuls     f1, f0, f4
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x2C(r1)
	  lis       r0, 0x4330
	  stw       r0, 0x28(r1)
	  lfd       f0, 0x28(r1)
	  fsubs     f0, f0, f2
	  fdivs     f0, f3, f0
	  stfs      f0, 0x24(r1)
	  bl        -0x271D0
	  rlwimi    r30,r3,0,8,31
	  stfs      f31, 0x20(r1)
	  rlwimi    r29,r23,0,27,31
	  li        r0, 0xEF
	  addi      r3, r30, 0
	  rlwimi    r3,r0,24,0,7
	  li        r0, 0xF0
	  addi      r4, r29, 0
	  rlwimi    r4,r0,24,0,7
	  addi      r30, r3, 0
	  addi      r29, r4, 0

	.loc_0x16C:
	  lwz       r8, 0x24(r1)
	  li        r0, 0x61
	  lbz       r7, 0x2(r24)
	  lis       r4, 0xCC01
	  rlwimi    r27,r8,20,21,31
	  addi      r9, r27, 0
	  lbz       r6, 0x1(r24)
	  lbz       r5, 0x0(r24)
	  rlwimi    r9,r8,20,13,20
	  rlwimi    r9,r8,20,12,12
	  lwz       r10, 0x20(r1)
	  li        r8, 0xEE
	  stb       r0, -0x8000(r4)
	  rlwimi    r9,r8,24,0,7
	  rlwimi    r28,r7,0,24,31
	  lwz       r3, -0x6D70(r2)
	  stw       r9, -0x8000(r4)
	  rlwimi    r26,r10,20,21,31
	  stb       r0, -0x8000(r4)
	  addi      r7, r28, 0
	  rlwimi    r7,r6,8,16,23
	  stw       r30, -0x8000(r4)
	  rlwimi    r7,r5,16,8,15
	  mr        r9, r26
	  stb       r0, -0x8000(r4)
	  li        r5, 0xF1
	  rlwimi    r9,r10,20,13,20
	  stw       r29, -0x8000(r4)
	  rlwimi    r9,r10,20,12,12
	  rlwimi    r9,r31,20,11,11
	  rlwimi    r9,r25,21,8,10
	  stb       r0, -0x8000(r4)
	  rlwimi    r9,r5,24,0,7
	  stw       r9, -0x8000(r4)
	  li        r5, 0xF2
	  rlwimi    r7,r5,24,0,7
	  stb       r0, -0x8000(r4)
	  li        r0, 0
	  stw       r7, -0x8000(r4)
	  sth       r0, 0x2(r3)
	  lmw       r23, 0x34(r1)
	  lwz       r0, 0x64(r1)
	  lfd       f31, 0x58(r1)
	  addi      r1, r1, 0x60
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E8E04
 * Size:	0001B0
 */
void GXInitFogAdjTable(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x80(r1)
	  stfd      f31, 0x78(r1)
	  stfd      f30, 0x70(r1)
	  stfd      f29, 0x68(r1)
	  stfd      f28, 0x60(r1)
	  stfd      f27, 0x58(r1)
	  stfd      f26, 0x50(r1)
	  stfd      f25, 0x48(r1)
	  stfd      f24, 0x40(r1)
	  stfd      f23, 0x38(r1)
	  stw       r31, 0x34(r1)
	  stw       r30, 0x30(r1)
	  stw       r29, 0x2C(r1)
	  lfd       f1, -0x6C88(r2)
	  lfs       f0, 0x3C(r5)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x70
	  lfs       f1, 0x28(r5)
	  lfs       f0, -0x6CBC(r2)
	  lfs       f2, 0x2C(r5)
	  fsubs     f1, f1, f0
	  lfs       f0, 0x0(r5)
	  fdivs     f1, f2, f1
	  fdivs     f24, f1, f0
	  fmr       f0, f1
	  b         .loc_0x88

	.loc_0x70:
	  lfs       f2, -0x6CBC(r2)
	  lfs       f1, 0x0(r5)
	  lfs       f0, -0x6C80(r2)
	  fdivs     f1, f2, f1
	  fmr       f24, f1
	  fmuls     f0, f0, f1

	.loc_0x88:
	  rlwinm    r0,r4,0,16,31
	  lfd       f27, -0x6C68(r2)
	  stw       r0, 0x24(r1)
	  lis       r31, 0x4330
	  lfs       f1, -0x6CA8(r2)
	  fmuls     f26, f0, f0
	  stw       r31, 0x20(r1)
	  lfs       f28, -0x6CBC(r2)
	  mr        r30, r3
	  lfd       f0, 0x20(r1)
	  lfs       f29, -0x6CC0(r2)
	  li        r29, 0
	  fsubs     f0, f0, f27
	  lfd       f30, -0x6CA0(r2)
	  lfd       f31, -0x6C78(r2)
	  lfs       f23, -0x6C70(r2)
	  fdivs     f25, f1, f0

	.loc_0xCC:
	  addi      r0, r29, 0x1
	  rlwinm    r0,r0,5,0,26
	  stw       r0, 0x24(r1)
	  stw       r31, 0x20(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f27
	  fmuls     f0, f0, f25
	  fmuls     f0, f0, f24
	  fmuls     f0, f0, f0
	  fdivs     f0, f0, f26
	  fadds     f2, f28, f0
	  fcmpo     cr0, f2, f29
	  ble-      .loc_0x150
	  fsqrte    f1, f2
	  fmul      f0, f1, f1
	  fmul      f1, f30, f1
	  fmul      f0, f2, f0
	  fsub      f0, f31, f0
	  fmul      f1, f1, f0
	  fmul      f0, f1, f1
	  fmul      f1, f30, f1
	  fmul      f0, f2, f0
	  fsub      f0, f31, f0
	  fmul      f1, f1, f0
	  fmul      f0, f1, f1
	  fmul      f1, f30, f1
	  fmul      f0, f2, f0
	  fsub      f0, f31, f0
	  fmul      f0, f1, f0
	  fmul      f0, f2, f0
	  frsp      f0, f0
	  stfs      f0, 0x14(r1)
	  lfs       f2, 0x14(r1)

	.loc_0x150:
	  fmuls     f1, f23, f2
	  bl        -0x2740C
	  addi      r29, r29, 0x1
	  rlwinm    r0,r3,0,20,31
	  sth       r0, 0x0(r30)
	  cmplwi    r29, 0xA
	  addi      r30, r30, 0x2
	  blt+      .loc_0xCC
	  lwz       r0, 0x84(r1)
	  lfd       f31, 0x78(r1)
	  lfd       f30, 0x70(r1)
	  lfd       f29, 0x68(r1)
	  lfd       f28, 0x60(r1)
	  lfd       f27, 0x58(r1)
	  lfd       f26, 0x50(r1)
	  lfd       f25, 0x48(r1)
	  lfd       f24, 0x40(r1)
	  lfd       f23, 0x38(r1)
	  lwz       r31, 0x34(r1)
	  lwz       r30, 0x30(r1)
	  lwz       r29, 0x2C(r1)
	  addi      r1, r1, 0x80
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E8FB4
 * Size:	000124
 */
void GXSetFogRangeAdj(void)
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE8
	  li        r6, 0
	  rlwinm    r0,r6,1,0,30
	  add       r9, r5, r0
	  lhz       r8, 0x0(r9)
	  rlwinm    r10,r6,31,1,31
	  lhz       r7, 0x2(r9)
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  li        r11, 0
	  stb       r0, -0x8000(r5)
	  rlwimi    r11,r8,0,20,31
	  addi      r8, r11, 0
	  addi      r6, r10, 0xE9
	  rlwimi    r8,r7,12,8,19
	  rlwimi    r8,r6,24,0,7
	  stw       r8, -0x8000(r5)
	  addi      r6, r10, 0xEA
	  li        r11, 0
	  lhz       r8, 0x4(r9)
	  lhz       r7, 0x6(r9)
	  rlwimi    r11,r8,0,20,31
	  addi      r8, r11, 0
	  stb       r0, -0x8000(r5)
	  rlwimi    r8,r7,12,8,19
	  rlwimi    r8,r6,24,0,7
	  stw       r8, -0x8000(r5)
	  addi      r6, r10, 0xEB
	  li        r11, 0
	  lhz       r8, 0x8(r9)
	  lhz       r7, 0xA(r9)
	  rlwimi    r11,r8,0,20,31
	  addi      r8, r11, 0
	  stb       r0, -0x8000(r5)
	  rlwimi    r8,r7,12,8,19
	  rlwimi    r8,r6,24,0,7
	  stw       r8, -0x8000(r5)
	  addi      r6, r10, 0xEC
	  li        r11, 0
	  lhz       r8, 0xC(r9)
	  lhz       r7, 0xE(r9)
	  rlwimi    r11,r8,0,20,31
	  addi      r8, r11, 0
	  stb       r0, -0x8000(r5)
	  rlwimi    r8,r7,12,8,19
	  rlwimi    r8,r6,24,0,7
	  stw       r8, -0x8000(r5)
	  addi      r6, r10, 0xED
	  li        r11, 0
	  lhz       r8, 0x10(r9)
	  lhz       r7, 0x12(r9)
	  rlwimi    r11,r8,0,20,31
	  addi      r8, r11, 0
	  stb       r0, -0x8000(r5)
	  rlwimi    r8,r7,12,8,19
	  rlwimi    r8,r6,24,0,7
	  stw       r8, -0x8000(r5)

	.loc_0xE8:
	  rlwinm    r5,r4,0,16,31
	  lwz       r4, -0x6D70(r2)
	  addi      r0, r5, 0x156
	  li        r5, 0
	  rlwimi    r5,r0,0,22,31
	  rlwimi    r5,r3,10,21,21
	  li        r0, 0x61
	  lis       r3, 0xCC01
	  stb       r0, -0x8000(r3)
	  li        r0, 0xE8
	  rlwimi    r5,r0,24,0,7
	  stw       r5, -0x8000(r3)
	  li        r0, 0
	  sth       r0, 0x2(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E90D8
 * Size:	000054
 */
void GXSetBlendMode(void)
{
	/*
	.loc_0x0:
	  lwz       r8, -0x6D70(r2)
	  subfic    r0, r3, 0x3
	  cntlzw    r7, r0
	  subfic    r0, r3, 0x2
	  lwz       r9, 0x1D0(r8)
	  rlwimi    r9,r7,6,20,20
	  addi      r7, r9, 0
	  rlwimi    r7,r3,0,31,31
	  cntlzw    r0, r0
	  rlwimi    r7,r0,28,30,30
	  rlwimi    r7,r6,12,16,19
	  rlwimi    r7,r4,8,21,23
	  li        r0, 0x61
	  lis       r3, 0xCC01
	  stb       r0, -0x8000(r3)
	  rlwimi    r7,r5,5,24,26
	  li        r0, 0
	  stw       r7, -0x8000(r3)
	  stw       r7, 0x1D0(r8)
	  sth       r0, 0x2(r8)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E912C
 * Size:	00002C
 */
void GXSetColorUpdate(void)
{
	/*
	.loc_0x0:
	  lwz       r5, -0x6D70(r2)
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  lwz       r6, 0x1D0(r5)
	  rlwimi    r6,r3,3,28,28
	  stb       r0, -0x8000(r4)
	  li        r0, 0
	  stw       r6, -0x8000(r4)
	  stw       r6, 0x1D0(r5)
	  sth       r0, 0x2(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E9158
 * Size:	00002C
 */
void GXSetAlphaUpdate(void)
{
	/*
	.loc_0x0:
	  lwz       r5, -0x6D70(r2)
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  lwz       r6, 0x1D0(r5)
	  rlwimi    r6,r3,4,27,27
	  stb       r0, -0x8000(r4)
	  li        r0, 0
	  stw       r6, -0x8000(r4)
	  stw       r6, 0x1D0(r5)
	  sth       r0, 0x2(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E9184
 * Size:	000034
 */
void GXSetZMode(void)
{
	/*
	.loc_0x0:
	  lwz       r6, -0x6D70(r2)
	  li        r0, 0x61
	  lwz       r7, 0x1D8(r6)
	  rlwimi    r7,r3,0,31,31
	  lis       r3, 0xCC01
	  stb       r0, -0x8000(r3)
	  rlwimi    r7,r4,1,28,30
	  rlwimi    r7,r5,4,27,27
	  stw       r7, -0x8000(r3)
	  li        r0, 0
	  stw       r7, 0x1D8(r6)
	  sth       r0, 0x2(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E91B8
 * Size:	000034
 */
void GXSetZCompLoc(void)
{
	/*
	.loc_0x0:
	  lwz       r6, -0x6D70(r2)
	  rlwinm    r0,r3,0,24,31
	  li        r3, 0x61
	  lwz       r5, 0x1DC(r6)
	  rlwimi    r5,r0,6,25,25
	  lis       r4, 0xCC01
	  stw       r5, 0x1DC(r6)
	  li        r0, 0
	  stb       r3, -0x8000(r4)
	  lwz       r3, 0x1DC(r6)
	  stw       r3, -0x8000(r4)
	  sth       r0, 0x2(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E91EC
 * Size:	0000D4
 */
void GXSetPixelFmt(void)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lwz       r7, -0x6D70(r2)
	  rlwinm    r6,r3,2,0,29
	  subi      r0, r5, 0x7810
	  lwz       r5, 0x1DC(r7)
	  add       r6, r0, r6
	  lwz       r0, 0x0(r6)
	  addi      r8, r5, 0
	  rlwimi    r5,r0,0,29,31
	  stw       r5, 0x1DC(r7)
	  lwz       r0, 0x1DC(r7)
	  rlwimi    r0,r4,3,26,28
	  stw       r0, 0x1DC(r7)
	  lwz       r5, 0x1DC(r7)
	  cmplw     r8, r5
	  beq-      .loc_0x80
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  stb       r0, -0x8000(r4)
	  cmpwi     r3, 0x2
	  stw       r5, -0x8000(r4)
	  bne-      .loc_0x60
	  li        r0, 0x1
	  b         .loc_0x64

	.loc_0x60:
	  li        r0, 0

	.loc_0x64:
	  lwz       r5, -0x6D70(r2)
	  lwz       r4, 0x204(r5)
	  rlwimi    r4,r0,9,22,22
	  stw       r4, 0x204(r5)
	  lwz       r0, 0x5AC(r5)
	  ori       r0, r0, 0x4
	  stw       r0, 0x5AC(r5)

	.loc_0x80:
	  lwz       r0, 0x0(r6)
	  cmplwi    r0, 0x4
	  bne-      .loc_0xC4
	  lwz       r6, -0x6D70(r2)
	  subi      r0, r3, 0x4
	  li        r4, 0x42
	  lwz       r3, 0x1D4(r6)
	  rlwimi    r3,r0,9,21,22
	  li        r0, 0x61
	  stw       r3, 0x1D4(r6)
	  lis       r3, 0xCC01
	  lwz       r5, 0x1D4(r6)
	  rlwimi    r5,r4,24,0,7
	  stw       r5, 0x1D4(r6)
	  stb       r0, -0x8000(r3)
	  lwz       r0, 0x1D4(r6)
	  stw       r0, -0x8000(r3)

	.loc_0xC4:
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E92C0
 * Size:	00002C
 */
void GXSetDither(void)
{
	/*
	.loc_0x0:
	  lwz       r5, -0x6D70(r2)
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  lwz       r6, 0x1D0(r5)
	  rlwimi    r6,r3,2,29,29
	  stb       r0, -0x8000(r4)
	  li        r0, 0
	  stw       r6, -0x8000(r4)
	  stw       r6, 0x1D0(r5)
	  sth       r0, 0x2(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E92EC
 * Size:	00003C
 */
void GXSetDstAlpha(void)
{
	/*
	.loc_0x0:
	  lwz       r6, -0x6D70(r2)
	  rlwinm    r5,r4,0,24,31
	  li        r0, 0x61
	  lwz       r7, 0x1D4(r6)
	  lis       r4, 0xCC01
	  rlwimi    r7,r5,0,24,31
	  stb       r0, -0x8000(r4)
	  rlwinm    r0,r3,0,24,31
	  addi      r3, r7, 0
	  rlwimi    r3,r0,8,23,23
	  stw       r3, -0x8000(r4)
	  li        r0, 0
	  stw       r3, 0x1D4(r6)
	  sth       r0, 0x2(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E9328
 * Size:	000038
 */
void GXSetFieldMask(void)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,0,24,31
	  lwz       r4, -0x6D70(r2)
	  li        r5, 0
	  rlwimi    r5,r0,0,31,31
	  rlwimi    r5,r3,1,30,30
	  li        r0, 0x61
	  lis       r3, 0xCC01
	  stb       r0, -0x8000(r3)
	  li        r0, 0x44
	  rlwimi    r5,r0,24,0,7
	  stw       r5, -0x8000(r3)
	  li        r0, 0
	  sth       r0, 0x2(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E9360
 * Size:	000078
 */
void GXSetFieldMode(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  rlwinm    r0,r4,0,24,31
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  lis       r31, 0xCC01
	  stw       r30, 0x18(r1)
	  li        r30, 0x61
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r5, -0x6D70(r2)
	  lwz       r4, 0x7C(r5)
	  rlwimi    r4,r0,22,9,9
	  stw       r4, 0x7C(r5)
	  stb       r30, -0x8000(r31)
	  lwz       r0, 0x7C(r5)
	  stw       r0, -0x8000(r31)
	  bl        -0xF4C
	  rlwinm    r0,r29,0,24,31
	  stb       r30, -0x8000(r31)
	  oris      r0, r0, 0x6800
	  stw       r0, -0x8000(r31)
	  bl        -0xF60
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}
